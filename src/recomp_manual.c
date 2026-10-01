/**
 * Manual function overrides and ICALL diagnostics for MK: Shaolin Monks
 *
 * This file provides:
 *   - recomp_lookup_manual()  : intercept specific Xbox VAs with hand-written code
 *   - recomp_icall_fail_log() : log when an indirect call target can't be resolved
 *   - ICALL trace ring buffer  : globals used by the RECOMP_ICALL macro
 *
 * Common reasons to add manual overrides:
 *   - Trace a function to understand call flow (wrap the generated version)
 *   - Fix a function the lifter translated incorrectly
 *   - Stub out a function that crashes (return early, set eax to a safe value)
 *   - Redirect a function to a native implementation (e.g., skip CRT init)
 *   - Intercept D3D/audio calls for custom rendering or sound
 *
 * NOTE: This file starts mostly empty. You WILL need to add overrides as you
 *       discover functions that the lifter didn't translate correctly.
 *       Use the crash reporter output + Ghidra/IDA to identify problematic
 *       functions and add manual implementations here.
 */

#include <stdio.h>
#include <stdint.h>
#include <stddef.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

/* The generated register model */
#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"

/* ── ICALL trace ring buffer ───────────────────────────────── */
extern volatile uint32_t g_icall_trace[16];
extern volatile uint32_t g_icall_trace_idx;
extern volatile uint64_t g_icall_count;

typedef void (*recomp_func_t)(void);

extern ptrdiff_t g_xbox_mem_offset;

/* ── CRT memmove/memcpy ───────────────────────────────────────
 *
 * The MSVC CRT memmove has backward-copy dispatch through negative-indexed
 * vectors that the lifter cannot follow. Replace with host memmove.
 *
 * TODO: After running tools.disasm + tools.func_id, find the addresses of
 *       memmove/memcpy in the MK:SM XBE and replace the placeholder
 *       addresses below (0xDEAD0001, 0xDEAD0002).
 */
static void crt_memmove(void)
{
    uint32_t dst = MEM32(esp + 4);
    uint32_t src = MEM32(esp + 8);
    uint32_t n   = MEM32(esp + 12);

    if (n)
        memmove((void *)XBOX_PTR(dst), (const void *)XBOX_PTR(src), n);
    eax = dst;
    esp += 4;   /* return address; cdecl, the caller pops the arguments */
}

void sub_000F0BB0_manual(void) { crt_memmove(); }

/* ── ICALL failure logging ─────────────────────────────────── */

void recomp_icall_fail_log(uint32_t target_va)
{
    unsigned k;
    fprintf(stderr, "[ICALL] unresolved indirect call to 0x%08X\n", target_va);
    fprintf(stderr, "  recent ICALL targets:");
    for (k = 0; k < 16; k++)
        fprintf(stderr, " %08X", g_icall_trace[(g_icall_trace_idx + k) & 15]);
    fprintf(stderr, "\n");
    fflush(stderr);
}

void recomp_icall_not_code_log(uint32_t va)
{
    static uint32_t last_va = 0;
    if (va != last_va) {
        fprintf(stderr, "[ICALL] Target is not code: 0x%08X\n", (unsigned int)va);
        last_va = va;
    }
}

void recomp_unimpl(const char *text, uint32_t va)
{
    fprintf(stderr, "[RECOMP_UNIMPL] 0x%08X: %s\n", (unsigned int)va, text ? text : "");
}

/* ── Manual lookup table ───────────────────────────────────── */

static void stub_empty_ret(void) { esp += 4; }
static void stub_xor_eax_ret(void) { eax = 0; esp += 4; }
static void stub_mov_eax_1_ret(void) { eax = 1; esp += 4; }

recomp_func_t recomp_lookup_manual(uint32_t va)
{
    if (va == 0x000F0BB0) return sub_000F0BB0_manual; /* CRT memmove */

    /* Generic x86 thunk & instruction decoder for un-indexed jump thunks and small stubs */
    if (va >= 0x00010000 && va < 0x008C0000 && g_xbox_mem_offset) {
        const uint8_t *code = (const uint8_t *)XBOX_PTR(va);
        
        /* 0xE9 rel32 (jmp target) */
        if (code[0] == 0xE9) {
            int32_t rel = *(const int32_t *)(code + 1);
            uint32_t target_va = (uint32_t)(va + 5 + rel);
            recomp_func_t fn = recomp_lookup(target_va);
            if (fn) return fn;
            if (target_va >= 0x00010000 && target_va < 0x008C0000) {
                const uint8_t *tcode = (const uint8_t *)XBOX_PTR(target_va);
                if (tcode[0] == 0xE9) {
                    int32_t trel = *(const int32_t *)(tcode + 1);
                    uint32_t ttarget_va = (uint32_t)(target_va + 5 + trel);
                    fn = recomp_lookup(ttarget_va);
                    if (fn) return fn;
                }
            }
        }
        
        /* 0xEB imm8 (short jmp) */
        if (code[0] == 0xEB) {
            int8_t rel = *(const int8_t *)(code + 1);
            uint32_t target_va = (uint32_t)(va + 2 + rel);
            recomp_func_t fn = recomp_lookup(target_va);
            if (fn) return fn;
        }

        /* 0xFF 0x25 abs32 (jmp [import/thunk]) */
        if (code[0] == 0xFF && code[1] == 0x25) {
            uint32_t ptr_va = *(const uint32_t *)(code + 2);
            uint32_t target_va = MEM32(ptr_va);
            recomp_func_t fn = recomp_lookup_kernel(target_va);
            if (!fn) fn = recomp_lookup(target_va);
            if (fn) return fn;
        }

        /* 0xC3 (ret) */
        if (code[0] == 0xC3) {
            return stub_empty_ret;
        }

        /* 0xC2 imm16 (ret N) */
        if (code[0] == 0xC2) {
            return stub_empty_ret;
        }
        
        /* 0x31 0xC0 0xC3 (xor eax, eax; ret) */
        if (code[0] == 0x31 && code[1] == 0xC0 && code[2] == 0xC3) {
            return stub_xor_eax_ret;
        }
        /* 0x33 0xC0 0xC3 (xor eax, eax; ret) */
        if (code[0] == 0x33 && code[1] == 0xC0 && code[2] == 0xC3) {
            return stub_xor_eax_ret;
        }

        /* 0xB8 0x01 0x00 0x00 0x00 0xC3 (mov eax, 1; ret) */
        if (code[0] == 0xB8 && code[1] == 0x01 && code[2] == 0x00 && code[3] == 0x00 && code[4] == 0x00 && code[5] == 0xC3) {
            return stub_mov_eax_1_ret;
        }
    }

    return NULL;
}

