/**
 * MK: Shaolin Monks - Recompiled code chunk 19
 * Functions: 500 (0x00117830 - 0x0012E610)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_00117830
 * Original: 0x00117830 - 0x001178F4 (196 bytes, 79 insns)
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00117830(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00117830: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x1C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_0011788F; /* jne: not equal / not zero */

loc_0011783C: ;
    ecx = MEM32(edi + 0x30);
    eax = ecx;

loc_00117841: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011785A; /* je: equal / zero */

loc_00117846: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x1C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x190) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x190 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00117841; /* jl: less (signed <) */

loc_00117852: ;
    POP32(esp, edi);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, esi);
    esp += 28; return; /* ret 24 */

loc_0011785A: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00117866; /* jge: greater or equal (signed >=) */

loc_0011785E: ;
    POP32(esp, edi);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, esi);
    esp += 28; return; /* ret 24 */

loc_00117866: ;
    MEM32(edi + 0x3C) = esi;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x1C);
    edx = MEM32(esp + 0xC);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esi;
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0xC) = eax;
    MEM32(ecx + 0x10) = eax;
    MEM32(ecx + 0x14) = eax;
    MEM32(ecx + 0x18) = eax;
    MEM32(esi + 8) = edx;
    goto loc_001178A9;

loc_0011788F: ;
    edx = MEM32(edi + 0x30);
    ecx = esi;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = 0x24924925;
    { uint64_t _r = (uint64_t)eax * (uint64_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = ecx >> 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ecx >> 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(edi + 0x3C) = ecx;

loc_001178A9: ;
    ecx = MEM32(esp + 0x10);
    eax = MEM32(edi + 0x3C);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, ebx);
    ebx = (uint32_t)(int32_t)SMEM16(esi + 2);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x20);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    eax = eax << 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, edx);
    ecx = edi;
    ebx = ebx | eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0x001178CDu); RECOMP_ABI_CALL(0x00116B60u, sub_00116B60); /* call 0x00116B60 */

loc_001178CD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001178E8; /* jne: not equal / not zero */

loc_001178D1: ;
    SET_LO8(eax, MEM8(esp + 0x24));
    ecx = MEM32(esp + 0x14);
    MEM8(esi + 1) = LO8(eax);
    MEM8(esi) = 1;
    MEM32(esi + 0xC) = ebp;
    MEM32(esi + 8) = ecx;
    MEM32(edi + 0x38) = MEM32(edi + 0x38) + 1;
    _fa = (uint32_t)(MEM32(edi + 0x38)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001178E8: ;
    POP32(esp, ebp);
    eax = ebx;
    POP32(esp, ebx);
    MEM32(edi + 0x34) = esi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 28; return; /* ret 24 */

}

/**
 * sub_00117900
 * Original: 0x00117900 - 0x00117921 (33 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00117900(void)
{

loc_00117900: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00117908u); RECOMP_ABI_CALL(0x001168E0u, sub_001168E0); /* call 0x001168E0 */

loc_00117908: ;
    eax = MEM32(esi + 4);
    PUSH32(esp, eax);
    MEM32(esi + 0x2C) = 0;
    PUSH32(esp, 0x00117918u); RECOMP_ABI_CALL(0x000F8528u, sub_000F8528); /* call 0x000F8528 */

loc_00117918: ;
    MEM32(esi + 4) = 0xFFFFFFFFu;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00117930
 * Original: 0x00117930 - 0x001179E3 (179 bytes, 53 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00117930(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00117930: ;
    _fb = (uint32_t)(0x204) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x204;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x50C524);
    PUSH32(esp, esi);
    MEM32(esp + 0x204) = eax;
    eax = MEM32(esp + 0x20C);
    PUSH32(esp, 1);
    esi = ecx;
    PUSH32(esp, eax);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00117959u); RECOMP_ABI_CALL(0x0011D8C0u, sub_0011D8C0); /* call 0x0011D8C0 */

loc_00117959: ;
    edx = MEM32(esp + 0x21C);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    eax = esp + 8;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00117970u); RECOMP_ABI_CALL(0x00116720u, sub_00116720); /* call 0x00116720 */

loc_00117970: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011798C; /* je: equal / zero */

loc_00117974: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    ecx = MEM32(esp + 0x200);
    PUSH32(esp, 0x00117983u); RECOMP_ABI_CALL(0x000EB37Bu, sub_000EB37B); /* call 0x000EB37B */

loc_00117983: ;
    _fb = (uint32_t)(0x204) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x204;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_0011798C: ;
    eax = MEM32(esi + 0x2C);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001179BE; /* je: equal / zero */

loc_00117996: ;
    _fa = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x103) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x18), 0x103 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001179B9; /* je: equal / zero */

loc_0011799F: ;
    ecx = esi;
    PUSH32(esp, 0x001179A6u); RECOMP_ABI_CALL(0x001168E0u, sub_001168E0); /* call 0x001168E0 */

loc_001179A6: ;
    ecx = MEM32(esi + 4);
    PUSH32(esp, ecx);
    MEM32(esi + 0x2C) = edi;
    PUSH32(esp, 0x001179B2u); RECOMP_ABI_CALL(0x000F8528u, sub_000F8528); /* call 0x000F8528 */

loc_001179B2: ;
    MEM32(esi + 4) = 0xFFFFFFFFu;

loc_001179B9: ;
    _fa = (uint32_t)(MEM32(esi + 0x2C)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x2C), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00117996; /* jne: not equal / not zero */

loc_001179BE: ;
    ecx = MEM32(esp + 0x208);
    MEM32(esi + 8) = edi;
    MEM32(esi + 0xC) = edi;
    MEM32(esi + 0x10) = edi;
    MEM32(esi + 0x14) = edi;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    PUSH32(esp, 0x001179DAu); RECOMP_ABI_CALL(0x000EB37Bu, sub_000EB37B); /* call 0x000EB37B */

loc_001179DA: ;
    _fb = (uint32_t)(0x204) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x204;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001179F0
 * Original: 0x001179F0 - 0x00117ABC (204 bytes, 73 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001179F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001179F0: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x18);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00117A01u); RECOMP_ABI_CALL(0x0011D960u, sub_0011D960); /* call 0x0011D960 */

loc_00117A01: ;
    ecx = MEM32(0x50D86C);
    edx = MEM32(0x637AEC);
    ebx = MEM32(edx + 0x40);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x14) = ecx;
    ecx = MEM32(0x63974C);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebx);
    ebp = eax;
    MEM32(esp + 0x14) = esi;
    PUSH32(esp, 0x00117A2Bu); RECOMP_ABI_CALL(0x0012E1D0u, sub_0012E1D0); /* call 0x0012E1D0 */

loc_00117A2B: ;
    MEM32(0x50D86C) = eax;
    eax = MEM32(0x637AEC);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    MEM32(eax + 0x48) = ebp;
    if (CMP_LE(_fas, _fbs)) goto loc_00117AA6; /* jle: less or equal (signed <=) */

loc_00117A3E: ;
    edi = edi;

loc_00117A40: ;
    eax = MEM32(esp + 0x28);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00117A55u); RECOMP_ABI_CALL(0x0011D970u, sub_0011D970); /* call 0x0011D970 */

loc_00117A55: ;
    ecx = MEM32(esp + 0x44);
    edx = MEM32(0x50D86C);
    eax = MEM32(esp + 0x28);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x2C);
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(0x637AEC);
    PUSH32(esp, 0x00117A7Bu); RECOMP_ABI_CALL(0x00117830u, sub_00117830); /* call 0x00117830 */

loc_00117A7B: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00117A83; /* jne: not equal / not zero */

loc_00117A7F: ;
    MEM32(esp + 0x10) = eax;

loc_00117A83: ;
    edx = MEM32(0x637AEC);
    edi = MEM32(edx + 0x34);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00117A40; /* jl: less (signed <) */

loc_00117A91: ;
    eax = MEM32(esp + 0x14);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(0x50D86C) = eax;
    eax = MEM32(esp + 4);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00117AA6: ;
    ecx = MEM32(esp + 0x14);
    eax = MEM32(esp + 0x10);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(0x50D86C) = ecx;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00117AC0
 * Original: 0x00117AC0 - 0x00117B0A (74 bytes, 27 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00117AC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00117AC0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x00117ACDu); RECOMP_ABI_CALL(0x001853B0u, sub_001853B0); /* call 0x001853B0 */

loc_00117ACD: ;
    ecx = MEM32(esp + 0x10);
    eax = MEM32(eax + 0x20);
    edx = MEM32(esi + 0x30);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((0x10) & 31u));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x1C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    if ((_fa == 0)) goto loc_00117AF5; /* je: equal / zero */

loc_00117AE9: ;
    _fa = (uint32_t)(MEM8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00117AF5; /* je: equal / zero */

loc_00117AEE: ;
    _fa = (uint32_t)(MEM16(ecx + 2)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 2), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00117AFA; /* jne: not equal / not zero */

loc_00117AF5: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 12; return; /* ret 8 */

loc_00117AFA: ;
    edx = MEM32(ecx + 0x18);
    eax = eax & 0xFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x4C);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00117BD0
 * Original: 0x00117BD0 - 0x00117BD5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00117BD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00117BD0: ;
    g_seh_ebp = ebp; sub_001179F0(); return; /* tail jmp 0x001179F0 */

}

/**
 * sub_00117BE0
 * Original: 0x00117BE0 - 0x00117BEE (14 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00117BE0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00117BE0: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_push(MEMF(esp + 8)); /* fld float */
    PUSH32(esp, 0x00117BEDu); RECOMP_ABI_CALL(0x002A9970u, sub_002A9970); /* call 0x002A9970 */

loc_00117BED: ;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00117BF0
 * Original: 0x00117BF0 - 0x00117BF5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00117BF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00117BF0: ;
    g_seh_ebp = ebp; sub_003DA240(); return; /* tail jmp 0x003DA240 */

}

/**
 * sub_00117C00
 * Original: 0x00117C00 - 0x00117C05 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00117C00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00117C00: ;
    g_seh_ebp = ebp; sub_003DA2E0(); return; /* tail jmp 0x003DA2E0 */

}

/**
 * sub_00117C10
 * Original: 0x00117C10 - 0x00117C15 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00117C10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00117C10: ;
    g_seh_ebp = ebp; sub_003DA730(); return; /* tail jmp 0x003DA730 */

}

/**
 * sub_00117C40
 * Original: 0x00117C40 - 0x00117C4A (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00117C40(void)
{

loc_00117C40: ;
    ecx = MEM32(eax * 4 + 0x3F0970);
    MEM32(edx) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00117C50
 * Original: 0x00117C50 - 0x00117C63 (19 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00117C50(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00117C50: ;
    eax = eax << 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(eax * 4 + 0x3F0770);
    ecx = MEM32(esp + 4);
    MEM32(ecx) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00117F20
 * Original: 0x00117F20 - 0x00117F25 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00117F20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00117F20: ;
    g_seh_ebp = ebp; sub_003C99E0(); return; /* tail jmp 0x003C99E0 */

}

/**
 * sub_00117F50
 * Original: 0x00117F50 - 0x00117F55 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00117F50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00117F50: ;
    g_seh_ebp = ebp; sub_003C88F0(); return; /* tail jmp 0x003C88F0 */

}

/**
 * sub_00117F60
 * Original: 0x00117F60 - 0x00117F65 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00117F60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00117F60: ;
    g_seh_ebp = ebp; sub_003C8980(); return; /* tail jmp 0x003C8980 */

}

/**
 * sub_00118040
 * Original: 0x00118040 - 0x00118056 (22 bytes, 6 insns)
 * CC: cdecl, 2 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00118040(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00118040: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax * 4 + 0x3F0970);
    edx = MEM32(esp + 8);
    MEM32(edx) = ecx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001180A0
 * Original: 0x001180A0 - 0x001180BF (31 bytes, 9 insns)
 * CC: cdecl, 3 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001180A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001180A0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    edx = MEM32(esp + 0xC);
    eax = eax << 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(eax * 4 + 0x3F0770);
    MEM32(edx) = ecx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001181E0
 * Original: 0x001181E0 - 0x001181E5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001181E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001181E0: ;
    g_seh_ebp = ebp; sub_003CF7B0(); return; /* tail jmp 0x003CF7B0 */

}

/**
 * sub_001182D0
 * Original: 0x001182D0 - 0x001182D5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001182D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001182D0: ;
    g_seh_ebp = ebp; sub_003C8DE0(); return; /* tail jmp 0x003C8DE0 */

}

/**
 * sub_001182E0
 * Original: 0x001182E0 - 0x001182E5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001182E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001182E0: ;
    g_seh_ebp = ebp; sub_003C8E80(); return; /* tail jmp 0x003C8E80 */

}

/**
 * sub_001182F0
 * Original: 0x001182F0 - 0x001182F5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001182F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001182F0: ;
    g_seh_ebp = ebp; sub_003D9F40(); return; /* tail jmp 0x003D9F40 */

}

/**
 * sub_00118320
 * Original: 0x00118320 - 0x00118321 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00118320(void)
{

loc_00118320: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00118350
 * Original: 0x00118350 - 0x00118353 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00118350(void)
{

loc_00118350: ;
    eax = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00118360
 * Original: 0x00118360 - 0x00118375 (21 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00118360(void)
{

loc_00118360: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 8);
    edx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00118374u); RECOMP_ABI_CALL(0x000FF165u, sub_000FF165); /* call 0x000FF165 */

loc_00118374: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00118380
 * Original: 0x00118380 - 0x00118390 (16 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00118380(void)
{

loc_00118380: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0011838Fu); RECOMP_ABI_CALL(0x00100DDAu, sub_00100DDA); /* call 0x00100DDA */

loc_0011838F: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001183B0
 * Original: 0x001183B0 - 0x001183D7 (39 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001183B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001183B0: ;
    ecx = MEM32(0x63AFB4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001183C5; /* jne: not equal / not zero */

loc_001183BA: ;
    ecx = 0x63AFB8;
    MEM32(0x63AFB4) = ecx;

loc_001183C5: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax * 4 + 0x63A218);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001183D6u); RECOMP_ABI_CALL(0x0013B2F0u, sub_0013B2F0); /* call 0x0013B2F0 */

loc_001183D6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00118430
 * Original: 0x00118430 - 0x0011843D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00118430(void)
{

loc_00118430: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0xC4) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00118500
 * Original: 0x00118500 - 0x00118517 (23 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00118500(void)
{

loc_00118500: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0011850Fu); RECOMP_ABI_CALL(0x0012F6B0u, sub_0012F6B0); /* call 0x0012F6B0 */

loc_0011850F: ;
    ecx = eax;
    PUSH32(esp, 0x00118516u); RECOMP_ABI_CALL(0x0012F3E0u, sub_0012F3E0); /* call 0x0012F3E0 */

loc_00118516: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00118520
 * Original: 0x00118520 - 0x0011853C (28 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00118520(void)
{

loc_00118520: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 8);
    edx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00118534u); RECOMP_ABI_CALL(0x0012F6B0u, sub_0012F6B0); /* call 0x0012F6B0 */

loc_00118534: ;
    ecx = eax;
    PUSH32(esp, 0x0011853Bu); RECOMP_ABI_CALL(0x0012F450u, sub_0012F450); /* call 0x0012F450 */

loc_0011853B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00118870
 * Original: 0x00118870 - 0x00118873 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00118870(void)
{

loc_00118870: ;
    eax = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00118DF0
 * Original: 0x00118DF0 - 0x00118E02 (18 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00118DF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00118DF0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(esp + 4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x41 (8-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00118E01; /* jl: less (signed <) */

loc_00118DFA: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x5A) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x5A (8-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00118E01; /* jg: greater (signed >) */

loc_00118DFE: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00118E01: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00118E10
 * Original: 0x00118E10 - 0x00118E83 (115 bytes, 59 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00118E10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00118E10: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    /* nop */

loc_00118E20: ;
    SET_LO8(ecx, MEM8(esi));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x41 (8-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00118E33; /* jl: less (signed <) */

loc_00118E27: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x5A) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x5A (8-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00118E33; /* jg: greater (signed >) */

loc_00118E2C: ;
    SET_LO8(edx, LO8(ecx));
    _fb = (uint32_t)(0x20) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(edx, LO8(edx) + 0x20);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    goto loc_00118E35;

loc_00118E33: ;
    SET_LO8(edx, LO8(ecx));

loc_00118E35: ;
    SET_LO8(eax, MEM8(ebx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x41 (8-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00118E41; /* jl: less (signed <) */

loc_00118E3B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x5A) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x5A (8-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00118E41; /* jg: greater (signed >) */

loc_00118E3F: ;
    _fb = (uint32_t)(0x20) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + 0x20);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */

loc_00118E41: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(eax) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00118E52; /* jne: not equal / not zero */

loc_00118E45: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00118E52; /* je: equal / zero */

loc_00118E49: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00118E54; /* jle: less or equal (signed <=) */

loc_00118E4D: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_00118E20;

loc_00118E52: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */

loc_00118E54: ;
    if (CMP_EQ(_fa, _fb)) goto loc_00118E7A; /* je: equal / zero */

loc_00118E56: ;
    SET_LO8(eax, MEM8(esi));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x41 (8-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00118E62; /* jl: less (signed <) */

loc_00118E5C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x5A) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x5A (8-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00118E62; /* jg: greater (signed >) */

loc_00118E60: ;
    _fb = (uint32_t)(0x20) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + 0x20);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */

loc_00118E62: ;
    SET_LO8(ecx, LO8(eax));
    SET_LO8(eax, MEM8(ebx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x41 (8-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00118E70; /* jl: less (signed <) */

loc_00118E6A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x5A) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x5A (8-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00118E70; /* jg: greater (signed >) */

loc_00118E6E: ;
    _fb = (uint32_t)(0x20) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + 0x20);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */

loc_00118E70: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(eax) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00118E7A; /* je: equal / zero */

loc_00118E74: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00118E7A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 1;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00118E90
 * Original: 0x00118E90 - 0x00118EA3 (19 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00118E90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00118E90: ;
    edx = MEM32(esp + 8);
    ecx = MEM32(esp + 4);

loc_00118E98: ;
    SET_LO8(eax, MEM8(edx));
    MEM8(ecx) = LO8(eax);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00118E98; /* jne: not equal / not zero */

loc_00118EA2: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00118EB0
 * Original: 0x00118EB0 - 0x00118F8B (219 bytes, 90 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00118EB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00118EB0: ;
    edx = MEM32(esp + 4);
    fp_push(MEMF(0x4964E8)); /* fld float */
    eax = MEM32(edx);
    fp_push(MEMF(0x496454)); /* fld float */
    SET_LO8(ecx, MEM8(eax));
    PUSH32(esp, ebx);
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00118EEC; /* je: equal / zero */

loc_00118ECB: ;
    goto loc_00118ED0;

    /* nop */

loc_00118ED0: ;
    ecx = MEM32(edx);
    SET_LO8(eax, MEM8(ecx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x2D) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x2D (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00118EEC; /* je: equal / zero */

loc_00118ED8: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x2E) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x2E (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00118EEC; /* je: equal / zero */

loc_00118EDC: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x30) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x30 (8-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00118EE4; /* jl: less (signed <) */

loc_00118EE0: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x39) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x39 (8-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00118EEC; /* jle: less or equal (signed <=) */

loc_00118EE4: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(edx) = ecx;
    _fa = (uint32_t)(MEM8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00118ED0; /* jne: not equal / not zero */

loc_00118EEC: ;
    eax = MEM32(edx);
    SET_LO8(ecx, MEM8(eax));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00118F00; /* jne: not equal / not zero */

loc_00118EF4: ;
    fp_pop(); /* fstp st(0) */
    POP32(esp, ebx);
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x4964E8)); /* fld float */
    esp += 4; return; /* ret */

loc_00118F00: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x2D) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x2D (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00118F0A; /* jne: not equal / not zero */

loc_00118F05: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    SET_LO8(ebx, 1);
    MEM32(edx) = eax;

loc_00118F0A: ;
    PUSH32(esp, esi);
    goto loc_00118F10;

    /* nop */

loc_00118F10: ;
    esi = MEM32(edx);
    SET_LO8(ecx, MEM8(esi));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x2E) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x2E (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00118F28; /* je: equal / zero */

loc_00118F19: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x30) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x30 (8-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00118F80; /* jl: less (signed <) */

loc_00118F1E: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x39) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x39 (8-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00118F80; /* jg: greater (signed >) */

loc_00118F23: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x2E) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x2E (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00118F35; /* jne: not equal / not zero */

loc_00118F28: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x49D44C)); /* fld float */
    MEM32(edx) = esi;
    goto loc_00118F10;

loc_00118F35: ;
    fp_push(MEMF(0x496454)); /* fld float */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00118F63; /* jp: parity */

loc_00118F46: ;
    eax = SX8(LO8(ecx));
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0xC) = eax;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(edx) = esi;
    fp_push((double)SMEM32(esp + 0xC)); /* fild */
    { double _t = fp_top(); fp_top() = g_fp_stack[(g_fp_top + 2) & 7]; g_fp_stack[(g_fp_top + 2) & 7] = _t; } /* fxch st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x49D450)); /* fmul dword ptr [0x49d450] */
    g_fp_stack[(g_fp_top + 2) & 7] = RECOMP_FP_PC(g_fp_stack[(g_fp_top + 2) & 7] + fp_top()); fp_pop(); /* faddp st(2) */
    goto loc_00118F10;

loc_00118F63: ;
    ecx = SX8(LO8(ecx));
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x30;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0xC) = ecx;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(edx) = esi;
    fp_push((double)SMEM32(esp + 0xC)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    g_fp_stack[(g_fp_top + 2) & 7] = RECOMP_FP_PC(g_fp_stack[(g_fp_top + 2) & 7] + fp_top()); fp_pop(); /* faddp st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x49D44C)); /* fmul dword ptr [0x49d44c] */
    goto loc_00118F10;

loc_00118F80: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    fp_pop(); /* fstp st(0) */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_00118F89; /* je: equal / zero */

loc_00118F87: ;
    fp_top() = -fp_top(); /* fchs */

loc_00118F89: ;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00118F90
 * Original: 0x00118F90 - 0x00118F97 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00118F90(void)
{

loc_00118F90: ;
    eax = ecx + 0x480;
    esp += 4; return; /* ret */

}

/**
 * sub_00118FA0
 * Original: 0x00118FA0 - 0x00118FB4 (20 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00118FA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00118FA0: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x50C524);
    MEM32(esp) = eax;
    ecx = MEM32(esp);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_000EB37B(); return; /* tail jmp 0x000EB37B */

}

/**
 * sub_00119030
 * Original: 0x00119030 - 0x00119061 (49 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00119030(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00119030: ;
    eax = MEM32(esp + 4);
    SET_LO8(ecx, MEM8(eax));
    edx = MEM32(0x637B20);
    eax = MEM32(0x6C92EC);
    SET_LO8(ecx, LO8(ecx) & 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM8(0x63898C) = LO8(ecx);
    MEM32(0x637B20) = edx;
    if (CMP_NE(_fa, _fb)) goto loc_00119060; /* jne: not equal / not zero */

loc_00119055: ;
    eax = MEM32(0x638990);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x638990) = eax;

loc_00119060: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00119070
 * Original: 0x00119070 - 0x00119076 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00119070(void)
{

loc_00119070: ;
    eax = MEM32(0x637B20);
    esp += 4; return; /* ret */

}

/**
 * sub_00119080
 * Original: 0x00119080 - 0x00119086 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00119080(void)
{

loc_00119080: ;
    eax = MEM32(0x638990);
    esp += 4; return; /* ret */

}

/**
 * sub_00119090
 * Original: 0x00119090 - 0x001190A5 (21 bytes, 7 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00119090(void)
{

loc_00119090: ;
    eax = MEM32(ecx + 0x50);
    edx = MEM32(esp + 4);
    MEM32(edx) = eax;
    eax = MEM32(ecx + 0x54);
    ecx = MEM32(esp + 8);
    MEM32(ecx) = eax;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001190C0
 * Original: 0x001190C0 - 0x001190CB (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001190C0(void)
{

loc_001190C0: ;
    eax = MEM32(0x4A865C);
    MEM32(0x50D86C) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00119280
 * Original: 0x00119280 - 0x00119294 (20 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00119280(void)
{

loc_00119280: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0011928Cu); RECOMP_ABI_CALL(0x0012F6B0u, sub_0012F6B0); /* call 0x0012F6B0 */

loc_0011928C: ;
    ecx = eax;
    PUSH32(esp, 0x00119293u); RECOMP_ABI_CALL(0x0012F3E0u, sub_0012F3E0); /* call 0x0012F3E0 */

loc_00119293: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001196E0
 * Original: 0x001196E0 - 0x001196E1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001196E0(void)
{

loc_001196E0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00119C30
 * Original: 0x00119C30 - 0x00119DBB (395 bytes, 111 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00119C30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00119C30: ;
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x60;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x64);
    ecx = eax + 0xFC;
    edx = MEM32(ecx);
    MEM32(esp + 0x30) = edx;
    edx = MEM32(ecx + 4);
    MEM32(esp + 0x34) = edx;
    edx = MEM32(ecx + 8);
    ecx = MEM32(ecx + 0xC);
    MEM32(esp + 0x38) = edx;
    MEM32(esp + 0x3C) = ecx;
    edx = eax + 0x10C;
    ecx = MEM32(edx);
    MEM32(esp + 0x40) = ecx;
    ecx = MEM32(edx + 4);
    MEM32(esp + 0x44) = ecx;
    ecx = MEM32(edx + 8);
    edx = MEM32(edx + 0xC);
    PUSH32(esp, esi);
    MEM32(esp + 0x50) = edx;
    edx = MEM32(0x6389D4);
    esi = eax + 0x480;
    MEM32(esp + 0x4C) = ecx;
    ecx = MEM32(0x6389D0);
    MEM32(esp + 0x28) = edx;
    PUSH32(esp, esi);
    edx = esp + 0x38;
    MEM32(esp + 0x28) = ecx;
    ecx = MEM32(0x6389D8);
    PUSH32(esp, edx);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    MEM32(esp + 0x38) = ecx;
    PUSH32(esp, 0x00119CAEu); RECOMP_ABI_CALL(0x000FF165u, sub_000FF165); /* call 0x000FF165 */

loc_00119CAE: ;
    PUSH32(esp, esi);
    ecx = esp + 0x48;
    PUSH32(esp, ecx);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00119CBEu); RECOMP_ABI_CALL(0x000FF165u, sub_000FF165); /* call 0x000FF165 */

loc_00119CBE: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x24)); /* fsub dword ptr [esp + 0x24] */
    eax = MEM32(esp + 0x10);
    fp_push(MEMF(esp + 8)); /* fld float */
    edx = eax;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x28)); /* fsub dword ptr [esp + 0x28] */
    MEM32(esp + 0x60) = eax;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    eax = MEM32(esp + 0x20);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x2C)); /* fsub dword ptr [esp + 0x2c] */
    MEM32(esp + 0x10) = edx;
    edx = eax;
    MEM32(esp + 0x60) = eax;
    MEMF(esp + 0x5C) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x5C);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEM32(esp + 0xC) = ecx;
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    eax = esp + 4;
    PUSH32(esp, eax);
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0x24) = edx;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x28)); /* fsub dword ptr [esp + 0x28] */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x2C)); /* fsub dword ptr [esp + 0x2c] */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x30)); /* fsub dword ptr [esp + 0x30] */
    MEMF(esp + 0x60) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x60);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEM32(esp + 0x20) = ecx;
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00119D40u); RECOMP_ABI_CALL(0x00107090u, sub_00107090); /* call 0x00107090 */

loc_00119D40: ;
    ecx = esp + 0x18;
    MEMF(esp + 0x6C) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00119D4Eu); RECOMP_ABI_CALL(0x00107090u, sub_00107090); /* call 0x00107090 */

loc_00119D4E: ;
    fp_push(MEMF(esp + 0x70)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x637B08)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x637b08] */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    POP32(esp, esi);
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00119D6D; /* jp: parity */

loc_00119D63: ;
    edx = MEM32(esp + 0x64);
    MEM32(0x637B08) = edx;

loc_00119D6D: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x637B08)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x637b08] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00119D83; /* jp: parity */

loc_00119D7A: ;
    eax = MEM32(esp + 0x64);
    MEM32(0x637B08) = eax;

loc_00119D83: ;
    fp_push(MEMF(esp + 0x64)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x638838)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x638838] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00119D9E; /* jne: not equal / not zero */

loc_00119D94: ;
    ecx = MEM32(esp + 0x64);
    MEM32(0x638838) = ecx;

loc_00119D9E: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x638838)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x638838] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00119DB5; /* jne: not equal / not zero */

loc_00119DAB: ;
    MEMF(0x638838) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x60;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00119DB5: ;
    fp_pop(); /* fstp st(0) */
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x60;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00119DC0
 * Original: 0x00119DC0 - 0x00119DC1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00119DC0(void)
{

loc_00119DC0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00119DD0
 * Original: 0x00119DD0 - 0x00119DD3 (3 bytes, 1 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00119DD0(void)
{

loc_00119DD0: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00119DE0
 * Original: 0x00119DE0 - 0x00119DE1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00119DE0(void)
{

loc_00119DE0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00119DF0
 * Original: 0x00119DF0 - 0x00119DF1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00119DF0(void)
{

loc_00119DF0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00119E00
 * Original: 0x00119E00 - 0x00119EE1 (225 bytes, 73 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00119E00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00119E00: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebp = ebp | 0xFFFFFFFFu;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edi = esi + 0xC;
    ecx = 0x11;
    MEM32(esp + 0x10) = ebp;
    ebx = 0x7FFFFFFF;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    PUSH32(esp, 0x00119E24u); RECOMP_ABI_CALL(0x002AC0C7u, sub_002AC0C7); /* call 0x002AC0C7 */

loc_00119E24: ;
    eax = MEM32(esp + 0x1C);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00119E6F; /* jle: less or equal (signed <=) */

loc_00119E2E: ;
    edx = MEM32(esp + 0x18);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00119E35: ;
    _fa = (uint32_t)(MEM32(edx + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x12) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 0xC), 0x12 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00119E5F; /* jne: not equal / not zero */

loc_00119E3B: ;
    ecx = MEM32(edx + -4);
    eax = MEM32(edx);
    _fb = (uint32_t)(0x280) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x280;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0x1E0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x1E0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ebp = ecx;
    eax = (uint32_t)((int32_t)eax * (int32_t)eax);
    ebp = (uint32_t)((int32_t)ebp * (int32_t)ecx);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00119E5F; /* jge: greater or equal (signed >=) */

loc_00119E59: ;
    ebx = eax;
    MEM32(esp + 0x10) = edi;

loc_00119E5F: ;
    eax = MEM32(esp + 0x1C);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x14;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00119E35; /* jl: less (signed <) */

loc_00119E6B: ;
    ebp = MEM32(esp + 0x10);

loc_00119E6F: ;
    edx = MEM32(esp + 0x18);
    ecx = 1;
    MEM32(esi + 0x30) = 0x2A;
    MEM32(esi + 0x2C) = ecx;
    MEM32(esi + 0x20) = ecx;
    MEM32(esi + 0x3C) = 0;
    MEM32(esi + 0x14) = 0x12;
    eax = ebp + ebp * 4;
    eax = edx + eax * 4;
    edx = MEM32(eax);
    MEM32(esi + 0xC) = edx;
    edx = MEM32(eax + 4);
    MEM32(esi + 0x10) = edx;
    MEM32(esi + 0x18) = ecx;
    MEM32(esi + 0x34) = 0;
    fp_push((double)SMEM32(eax)); /* fild */
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00119EBD; /* jge: greater or equal (signed >=) */

loc_00119EB7: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x49F3D8)); /* fadd dword ptr [0x49f3d8] */

loc_00119EBD: ;
    MEMF(esi + 0xC0) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(eax + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    fp_push((double)SMEM32(eax + 4)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_00119ED3; /* jge: greater or equal (signed >=) */

loc_00119ECD: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x49F3D8)); /* fadd dword ptr [0x49f3d8] */

loc_00119ED3: ;
    POP32(esp, edi);
    MEMF(esi + 0xC4) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0011A380
 * Original: 0x0011A380 - 0x0011A40A (138 bytes, 44 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011A380(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0011A380: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x24);
    edx = MEM32(esp + 0x2C);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 0x2C);
    MEM32(esp + 0x14) = eax;
    eax = esi + 0xD0;
    MEM32(esp + 0x18) = ecx;
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    MEM32(esp + 0x20) = edx;
    PUSH32(esp, ecx);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0011A3B4u); RECOMP_ABI_CALL(0x000FF1A6u, sub_000FF1A6); /* call 0x000FF1A6 */

loc_0011A3B4: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x4964E8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x4964e8] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0011A401; /* jnp: not parity */

loc_0011A3C5: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x4964E8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x4964e8] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0011A401; /* jnp: not parity */

loc_0011A3D6: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esi + 0xC0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esi + 0xc0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0011A401; /* je: equal / zero */

loc_0011A3E7: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esi + 0xC4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esi + 0xc4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0011A401; /* je: equal / zero */

loc_0011A3F8: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_0011A401: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0011A410
 * Original: 0x0011A410 - 0x0011A427 (23 bytes, 9 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011A410(void)
{

loc_0011A410: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax + 8);
    PUSH32(esp, edx);
    edx = MEM32(eax + 4);
    eax = MEM32(eax);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0011A424u); RECOMP_ABI_CALL(0x0011A380u, sub_0011A380); /* call 0x0011A380 */

loc_0011A424: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0011A430
 * Original: 0x0011A430 - 0x0011A486 (86 bytes, 28 insns)
 * CC: cdecl, 3 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0011A430(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0011A430: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x24);
    edx = MEM32(eax);
    PUSH32(esp, esi);
    _fb = (uint32_t)(0xD0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xD0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 4) = edx;
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    PUSH32(esp, ecx);
    ecx = esp + 8;
    MEM32(esp + 0xC) = edx;
    PUSH32(esp, ecx);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    MEM32(esp + 0x18) = eax;
    PUSH32(esp, 0x0011A462u); RECOMP_ABI_CALL(0x000FF1A6u, sub_000FF1A6); /* call 0x000FF1A6 */

loc_0011A462: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    eax = MEM32(esp + 0x2C);
    esi = MEM32(esp + 0x30);
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    MEMF(esi) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0011A47Bu); RECOMP_ABI_CALL(0x00109620u, sub_00109620); /* call 0x00109620 */

loc_0011A47B: ;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi)); /* fsub dword ptr [esi] */
    MEMF(esi) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, esi);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0011A490
 * Original: 0x0011A490 - 0x0011A4A9 (25 bytes, 8 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011A490(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011A490: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(0x110) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x110;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0011A4A6u); RECOMP_ABI_CALL(0x000FF1A6u, sub_000FF1A6); /* call 0x000FF1A6 */

loc_0011A4A6: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0011A620
 * Original: 0x0011A620 - 0x0011A645 (37 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011A620(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011A620: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    PUSH32(esp, 1);
    PUSH32(esp, 0x50FA90);
    PUSH32(esp, 0x12);
    MEM32(0x50FA90) = eax;
    MEM32(0x50FA94) = ecx;
    PUSH32(esp, 0x0011A641u); RECOMP_ABI_CALL(0x00118440u, sub_00118440); /* call 0x00118440 */

loc_0011A641: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0011B730
 * Original: 0x0011B730 - 0x0011B7B2 (130 bytes, 35 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011B730(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0011B730: ;
    fp_push(MEMF(0x4964E8)); /* fld float */
    ecx = MEM32(esp + 4);
    fp_push(MEMF(ecx + 0x1C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0011B780; /* jp: parity */

loc_0011B746: ;
    fp_push(MEMF(0x4964E8)); /* fld float */
    fp_push(MEMF(ecx + 0x20)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0011B780; /* jp: parity */

loc_0011B758: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x50FA90);
    PUSH32(esp, 0x12);
    MEM32(0x50FA90) = 0;
    MEM32(0x50FA94) = 0;
    PUSH32(esp, 0x0011B77Au); RECOMP_ABI_CALL(0x00118440u, sub_00118440); /* call 0x00118440 */

loc_0011B77A: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_0011B780: ;
    eax = MEM32(esp + 8);
    edx = MEM32(eax + 8);
    edx = edx | 3;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 8) = edx;
    fp_push(MEMF(ecx + 0x28)); /* fld float */
    eax = MEM32(ecx + 0x24);
    MEMF(0x50FA94) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 1);
    PUSH32(esp, 0x50FA90);
    PUSH32(esp, 0x12);
    MEM32(0x50FA90) = eax;
    PUSH32(esp, 0x0011B7ACu); RECOMP_ABI_CALL(0x00118440u, sub_00118440); /* call 0x00118440 */

loc_0011B7AC: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0011B930
 * Original: 0x0011B930 - 0x0011B931 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011B930(void)
{

loc_0011B930: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0011B940
 * Original: 0x0011B940 - 0x0011B941 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011B940(void)
{

loc_0011B940: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0011B950
 * Original: 0x0011B950 - 0x0011B955 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011B950(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0011B950: ;
    g_seh_ebp = ebp; sub_003CBA10(); return; /* tail jmp 0x003CBA10 */

}

/**
 * sub_0011BA30
 * Original: 0x0011BA30 - 0x0011BA73 (67 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011BA30(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011BA30: ;
    _fb = (uint32_t)(0xC08) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC08;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x50C524);
    MEM32(esp + 0xC04) = eax;
    eax = esp + 4;
    PUSH32(esp, eax);
    ecx = esp + 4;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0011BA51u); RECOMP_ABI_CALL(0x000FA4ACu, sub_000FA4AC); /* call 0x000FA4AC */

loc_0011BA51: ;
    edx = esp + 4;
    PUSH32(esp, edx);
    PUSH32(esp, 0x4AAC14);
    PUSH32(esp, 0x0011BA60u); RECOMP_ABI_CALL(0x000FA389u, sub_000FA389); /* call 0x000FA389 */

loc_0011BA60: ;
    ecx = MEM32(esp + 0xC04);
    PUSH32(esp, 0x0011BA6Cu); RECOMP_ABI_CALL(0x000EB37Bu, sub_000EB37B); /* call 0x000EB37B */

loc_0011BA6C: ;
    _fb = (uint32_t)(0xC08) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC08;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0011BB70
 * Original: 0x0011BB70 - 0x0011BBDE (110 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011BB70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011BB70: ;
    _fb = (uint32_t)(0xC1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x50C524);
    MEM32(esp + 0xC18) = eax;
    eax = esp + 0x18;
    PUSH32(esp, eax);
    ecx = esp + 4;
    PUSH32(esp, ecx);
    MEM32(esp + 8) = 0;
    PUSH32(esp, 0x0011BB99u); RECOMP_ABI_CALL(0x000FA4ACu, sub_000FA4AC); /* call 0x000FA4AC */

loc_0011BB99: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011BBCB; /* jne: not equal / not zero */

loc_0011BB9D: ;
    eax = MEM32(esp);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011BBCB; /* jne: not equal / not zero */

loc_0011BBA4: ;
    SET_LO8(edx, MEM8(esp + 0x18));
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    eax = esp + 0x18;
    if (CMP_EQ(_fa, _fb)) goto loc_0011BBC3; /* je: equal / zero */

loc_0011BBB2: ;
    MEM32(esp + ecx * 4 + 4) = eax;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0011BBB7: ;
    SET_LO8(edx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011BBB7; /* jne: not equal / not zero */

loc_0011BBBE: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011BBB2; /* jne: not equal / not zero */

loc_0011BBC3: ;
    MEM32(esp + ecx * 4 + 4) = 0;

loc_0011BBCB: ;
    ecx = MEM32(esp + 0xC18);
    PUSH32(esp, 0x0011BBD7u); RECOMP_ABI_CALL(0x000EB37Bu, sub_000EB37B); /* call 0x000EB37B */

loc_0011BBD7: ;
    _fb = (uint32_t)(0xC1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0011BC10
 * Original: 0x0011BC10 - 0x0011BC2F (31 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011BC10(void)
{

loc_0011BC10: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0011BC2Eu); RECOMP_ABI_CALL(0x00100B44u, sub_00100B44); /* call 0x00100B44 */

loc_0011BC2E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0011BC30
 * Original: 0x0011BC30 - 0x0011BC95 (101 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011BC30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0011BC30: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x496454)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x496454] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0011BC49; /* jne: not equal / not zero */

loc_0011BC41: ;
    MEM32(esp + 4) = 0x3F800000;

loc_0011BC49: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x496454)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x496454] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0011BC62; /* jne: not equal / not zero */

loc_0011BC5A: ;
    MEM32(esp + 8) = 0x3F800000;

loc_0011BC62: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    PUSH32(esp, esi);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x4AAC60)); /* fmul dword ptr [0x4aac60] */
    PUSH32(esp, 0x0011BC72u); RECOMP_ABI_CALL(0x000EB38Cu, sub_000EB38C); /* call 0x000EB38C */

loc_0011BC72: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x4AAC60)); /* fmul dword ptr [0x4aac60] */
    esi = eax;
    esi = esi & 0x7FF;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = esi << 0xB;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, 0x0011BC8Cu); RECOMP_ABI_CALL(0x000EB38Cu, sub_000EB38C); /* call 0x000EB38C */

loc_0011BC8C: ;
    eax = eax & 0x7FF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0011BD40
 * Original: 0x0011BD40 - 0x0011BD41 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011BD40(void)
{

loc_0011BD40: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0011BD50
 * Original: 0x0011BD50 - 0x0011BD55 (5 bytes, 2 insns)
 * CC: cdecl, 3 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0011BD50(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011BD50: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0011BD60
 * Original: 0x0011BD60 - 0x0011BD78 (24 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011BD60(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011BD60: ;
    edx = ecx;
    PUSH32(esp, edi);
    ecx = 0x1A00;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = edx + 8;
    MEM32(edx + 4) = 0;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_0011BD80
 * Original: 0x0011BD80 - 0x0011BDA6 (38 bytes, 15 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011BD80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011BD80: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    edx = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0011BDA2; /* je: equal / zero */

loc_0011BD8B: ;
    SET_LO8(eax, MEM8(edi + 1));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011BDA2; /* je: equal / zero */

loc_0011BD92: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(edi + 1) = 0;
    ecx = 0x1A;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM32(edx + 4) = MEM32(edx + 4) - 1;
    _fa = (uint32_t)(MEM32(edx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_0011BDA2: ;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0011C250
 * Original: 0x0011C250 - 0x0011C332 (226 bytes, 64 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011C250(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011C250: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x6C08);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0011C2EE; /* je: equal / zero */

loc_0011C260: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0011C2AA; /* je: equal / zero */

loc_0011C263: ;
    PUSH32(esp, 0x8006);
    PUSH32(esp, 0x4A);
    PUSH32(esp, 0x0011C26Fu); RECOMP_ABI_CALL(0x0012F6B0u, sub_0012F6B0); /* call 0x0012F6B0 */

loc_0011C26F: ;
    ecx = eax;
    PUSH32(esp, 0x0011C276u); RECOMP_ABI_CALL(0x0012F5A0u, sub_0012F5A0); /* call 0x0012F5A0 */

loc_0011C276: ;
    PUSH32(esp, 0x302);
    PUSH32(esp, 0x3E);
    PUSH32(esp, 0x0011C282u); RECOMP_ABI_CALL(0x0012F6B0u, sub_0012F6B0); /* call 0x0012F6B0 */

loc_0011C282: ;
    ecx = eax;
    PUSH32(esp, 0x0011C289u); RECOMP_ABI_CALL(0x0012F5A0u, sub_0012F5A0); /* call 0x0012F5A0 */

loc_0011C289: ;
    PUSH32(esp, 0x303);
    PUSH32(esp, 0x3F);
    PUSH32(esp, 0x0011C295u); RECOMP_ABI_CALL(0x0012F6B0u, sub_0012F6B0); /* call 0x0012F6B0 */

loc_0011C295: ;
    ecx = eax;
    PUSH32(esp, 0x0011C29Cu); RECOMP_ABI_CALL(0x0012F5A0u, sub_0012F5A0); /* call 0x0012F5A0 */

loc_0011C29C: ;
    eax = MEM32(esi + 0x6C08);
    MEM32(esi + 0x6C0C) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0011C2AA: ;
    PUSH32(esp, 0x800B);
    PUSH32(esp, 0x4A);
    PUSH32(esp, 0x0011C2B6u); RECOMP_ABI_CALL(0x0012F6B0u, sub_0012F6B0); /* call 0x0012F6B0 */

loc_0011C2B6: ;
    ecx = eax;
    PUSH32(esp, 0x0011C2BDu); RECOMP_ABI_CALL(0x0012F5A0u, sub_0012F5A0); /* call 0x0012F5A0 */

loc_0011C2BD: ;
    PUSH32(esp, 0x302);
    PUSH32(esp, 0x3E);
    PUSH32(esp, 0x0011C2C9u); RECOMP_ABI_CALL(0x0012F6B0u, sub_0012F6B0); /* call 0x0012F6B0 */

loc_0011C2C9: ;
    ecx = eax;
    PUSH32(esp, 0x0011C2D0u); RECOMP_ABI_CALL(0x0012F5A0u, sub_0012F5A0); /* call 0x0012F5A0 */

loc_0011C2D0: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x3F);
    PUSH32(esp, 0x0011C2D9u); RECOMP_ABI_CALL(0x0012F6B0u, sub_0012F6B0); /* call 0x0012F6B0 */

loc_0011C2D9: ;
    ecx = eax;
    PUSH32(esp, 0x0011C2E0u); RECOMP_ABI_CALL(0x0012F5A0u, sub_0012F5A0); /* call 0x0012F5A0 */

loc_0011C2E0: ;
    ecx = MEM32(esi + 0x6C08);
    MEM32(esi + 0x6C0C) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0011C2EE: ;
    PUSH32(esp, 0x8006);
    PUSH32(esp, 0x4A);
    PUSH32(esp, 0x0011C2FAu); RECOMP_ABI_CALL(0x0012F6B0u, sub_0012F6B0); /* call 0x0012F6B0 */

loc_0011C2FA: ;
    ecx = eax;
    PUSH32(esp, 0x0011C301u); RECOMP_ABI_CALL(0x0012F5A0u, sub_0012F5A0); /* call 0x0012F5A0 */

loc_0011C301: ;
    PUSH32(esp, 0x302);
    PUSH32(esp, 0x3E);
    PUSH32(esp, 0x0011C30Du); RECOMP_ABI_CALL(0x0012F6B0u, sub_0012F6B0); /* call 0x0012F6B0 */

loc_0011C30D: ;
    ecx = eax;
    PUSH32(esp, 0x0011C314u); RECOMP_ABI_CALL(0x0012F5A0u, sub_0012F5A0); /* call 0x0012F5A0 */

loc_0011C314: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x3F);
    PUSH32(esp, 0x0011C31Du); RECOMP_ABI_CALL(0x0012F6B0u, sub_0012F6B0); /* call 0x0012F6B0 */

loc_0011C31D: ;
    ecx = eax;
    PUSH32(esp, 0x0011C324u); RECOMP_ABI_CALL(0x0012F5A0u, sub_0012F5A0); /* call 0x0012F5A0 */

loc_0011C324: ;
    edx = MEM32(esi + 0x6C08);
    MEM32(esi + 0x6C0C) = edx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0011C340
 * Original: 0x0011C340 - 0x0011C37D (61 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011C340(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011C340: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x6C10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0011C34Fu); RECOMP_ABI_CALL(0x00011F9Bu, sub_00011F9B); /* call 0x00011F9B */

loc_0011C34F: ;
    ecx = eax;
    PUSH32(esp, 0x0011C356u); RECOMP_ABI_CALL(0x00116660u, sub_00116660); /* call 0x00116660 */

loc_0011C356: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011C35E; /* jne: not equal / not zero */

loc_0011C35A: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0011C35E: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0011C366u); RECOMP_ABI_CALL(0x0012F6B0u, sub_0012F6B0); /* call 0x0012F6B0 */

loc_0011C366: ;
    ecx = eax;
    PUSH32(esp, 0x0011C36Du); RECOMP_ABI_CALL(0x0012F340u, sub_0012F340); /* call 0x0012F340 */

loc_0011C36D: ;
    ecx = MEM32(esi + 0x6C10);
    MEM32(esi + 0x6C14) = ecx;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0011C380
 * Original: 0x0011C380 - 0x0011C3CA (74 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011C380(void)
{

loc_0011C380: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x98);
    PUSH32(esp, 0x0011C38Cu); RECOMP_ABI_CALL(0x0012F6B0u, sub_0012F6B0); /* call 0x0012F6B0 */

loc_0011C38C: ;
    ecx = eax;
    PUSH32(esp, 0x0011C393u); RECOMP_ABI_CALL(0x0012F5A0u, sub_0012F5A0); /* call 0x0012F5A0 */

loc_0011C393: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x9A);
    PUSH32(esp, 0x0011C39Fu); RECOMP_ABI_CALL(0x0012F6B0u, sub_0012F6B0); /* call 0x0012F6B0 */

loc_0011C39F: ;
    ecx = eax;
    PUSH32(esp, 0x0011C3A6u); RECOMP_ABI_CALL(0x0012F5A0u, sub_0012F5A0); /* call 0x0012F5A0 */

loc_0011C3A6: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x9B);
    PUSH32(esp, 0x0011C3B2u); RECOMP_ABI_CALL(0x0012F6B0u, sub_0012F6B0); /* call 0x0012F6B0 */

loc_0011C3B2: ;
    ecx = eax;
    PUSH32(esp, 0x0011C3B9u); RECOMP_ABI_CALL(0x0012F5A0u, sub_0012F5A0); /* call 0x0012F5A0 */

loc_0011C3B9: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x3B);
    PUSH32(esp, 0x0011C3C2u); RECOMP_ABI_CALL(0x0012F6B0u, sub_0012F6B0); /* call 0x0012F6B0 */

loc_0011C3C2: ;
    ecx = eax;
    PUSH32(esp, 0x0011C3C9u); RECOMP_ABI_CALL(0x0012F5A0u, sub_0012F5A0); /* call 0x0012F5A0 */

loc_0011C3C9: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0011C3D0
 * Original: 0x0011C3D0 - 0x0011C3D3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011C3D0(void)
{

loc_0011C3D0: ;
    eax = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_0011C3E0
 * Original: 0x0011C3E0 - 0x0011C460 (128 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011C3E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0011C3E0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax);
    edx = MEM32(ecx + 8);
    eax = MEM32(esp + 8);
    ecx = MEM32(eax);
    eax = MEM32(edx + 0x78);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 8);
    ecx = MEM32(esi + 0x78);
    eax = eax & 0x400;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx & 0x400;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0011C40D; /* jae: above or equal (unsigned >=) */

loc_0011C408: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0011C40D: ;
    if (CMP_BE(_fa, _fb)) goto loc_0011C416; /* jbe: below or equal (unsigned <=) */

loc_0011C40F: ;
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0011C416: ;
    fp_push(MEMF(edx + 0xC8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esi + 0xC8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esi + 0xc8] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0011C430; /* jp: parity */

loc_0011C429: ;
    eax = 0xFFFFFFFFu;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0011C430: ;
    fp_push(MEMF(edx + 0xC8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esi + 0xC8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esi + 0xc8] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0011C40F; /* je: equal / zero */

loc_0011C443: ;
    SET_LO16(edx, MEM16(edx + 0x138));
    SET_LO16(esi, MEM16(esi + 0x138));
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(LO16(esi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), LO16(esi) (16-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0011C408; /* jl: less (signed <) */

loc_0011C456: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(LO16(esi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), LO16(esi) (16-bit) */
    SET_LO8(eax, (CMP_G(_fas, _fbs)) ? 1 : 0); /* setg */
    POP32(esp, esi);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0011C510
 * Original: 0x0011C510 - 0x0011C52D (29 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011C510(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011C510: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0011C516u); RECOMP_ABI_CALL(0x0010F3C0u, sub_0010F3C0); /* call 0x0010F3C0 */

loc_0011C516: ;
    edx = eax;
    ecx = 0x1A00;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = edx + 8;
    MEM32(edx + 4) = 0;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_0011C530
 * Original: 0x0011C530 - 0x0011C55B (43 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011C530(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011C530: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0011C536u); RECOMP_ABI_CALL(0x0010F3C0u, sub_0010F3C0); /* call 0x0010F3C0 */

loc_0011C536: ;
    edi = MEM32(esp + 8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    edx = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0011C557; /* je: equal / zero */

loc_0011C540: ;
    SET_LO8(eax, MEM8(edi + 1));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011C557; /* je: equal / zero */

loc_0011C547: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(edi + 1) = 0;
    ecx = 0x1A;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM32(edx + 4) = MEM32(edx + 4) - 1;
    _fa = (uint32_t)(MEM32(edx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_0011C557: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_0011C560
 * Original: 0x0011C560 - 0x0011C600 (160 bytes, 45 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011C560(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011C560: ;
    SET_LO8(eax, MEM8(esp + 4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011C591; /* jne: not equal / not zero */

loc_0011C568: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x90);
    PUSH32(esp, 0x0011C574u); RECOMP_ABI_CALL(0x0012F6B0u, sub_0012F6B0); /* call 0x0012F6B0 */

loc_0011C574: ;
    ecx = eax;
    PUSH32(esp, 0x0011C57Bu); RECOMP_ABI_CALL(0x0012F5A0u, sub_0012F5A0); /* call 0x0012F5A0 */

loc_0011C57B: ;
    PUSH32(esp, 0x207);
    PUSH32(esp, 0x46);
    PUSH32(esp, 0x0011C587u); RECOMP_ABI_CALL(0x0012F6B0u, sub_0012F6B0); /* call 0x0012F6B0 */

loc_0011C587: ;
    ecx = eax;
    PUSH32(esp, 0x0011C58Eu); RECOMP_ABI_CALL(0x0012F5A0u, sub_0012F5A0); /* call 0x0012F5A0 */

loc_0011C58E: ;
    esp += 8; return; /* ret 4 */

loc_0011C591: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x90);
    PUSH32(esp, 0x0011C59Du); RECOMP_ABI_CALL(0x0012F6B0u, sub_0012F6B0); /* call 0x0012F6B0 */

loc_0011C59D: ;
    ecx = eax;
    PUSH32(esp, 0x0011C5A4u); RECOMP_ABI_CALL(0x0012F5A0u, sub_0012F5A0); /* call 0x0012F5A0 */

loc_0011C5A4: ;
    PUSH32(esp, 0x1E00);
    PUSH32(esp, 0x45);
    PUSH32(esp, 0x0011C5B0u); RECOMP_ABI_CALL(0x0012F6B0u, sub_0012F6B0); /* call 0x0012F6B0 */

loc_0011C5B0: ;
    ecx = eax;
    PUSH32(esp, 0x0011C5B7u); RECOMP_ABI_CALL(0x0012F5A0u, sub_0012F5A0); /* call 0x0012F5A0 */

loc_0011C5B7: ;
    PUSH32(esp, 0x202);
    PUSH32(esp, 0x46);
    PUSH32(esp, 0x0011C5C3u); RECOMP_ABI_CALL(0x0012F6B0u, sub_0012F6B0); /* call 0x0012F6B0 */

loc_0011C5C3: ;
    ecx = eax;
    PUSH32(esp, 0x0011C5CAu); RECOMP_ABI_CALL(0x0012F5A0u, sub_0012F5A0); /* call 0x0012F5A0 */

loc_0011C5CA: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x48);
    PUSH32(esp, 0x0011C5D3u); RECOMP_ABI_CALL(0x0012F6B0u, sub_0012F6B0); /* call 0x0012F6B0 */

loc_0011C5D3: ;
    ecx = eax;
    PUSH32(esp, 0x0011C5DAu); RECOMP_ABI_CALL(0x0012F5A0u, sub_0012F5A0); /* call 0x0012F5A0 */

loc_0011C5DA: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x47);
    PUSH32(esp, 0x0011C5E3u); RECOMP_ABI_CALL(0x0012F6B0u, sub_0012F6B0); /* call 0x0012F6B0 */

loc_0011C5E3: ;
    ecx = eax;
    PUSH32(esp, 0x0011C5EAu); RECOMP_ABI_CALL(0x0012F5A0u, sub_0012F5A0); /* call 0x0012F5A0 */

loc_0011C5EA: ;
    PUSH32(esp, 0x205);
    PUSH32(esp, 0x46);
    PUSH32(esp, 0x0011C5F6u); RECOMP_ABI_CALL(0x0012F6B0u, sub_0012F6B0); /* call 0x0012F6B0 */

loc_0011C5F6: ;
    ecx = eax;
    PUSH32(esp, 0x0011C5FDu); RECOMP_ABI_CALL(0x0012F5A0u, sub_0012F5A0); /* call 0x0012F5A0 */

loc_0011C5FD: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0011C600
 * Original: 0x0011C600 - 0x0011C6C3 (195 bytes, 55 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011C600(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011C600: ;
    SET_LO8(eax, MEM8(esp + 4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011C61E; /* jne: not equal / not zero */

loc_0011C608: ;
    PUSH32(esp, 0x10101);
    PUSH32(esp, 0x43);
    PUSH32(esp, 0x0011C614u); RECOMP_ABI_CALL(0x0012F6B0u, sub_0012F6B0); /* call 0x0012F6B0 */

loc_0011C614: ;
    ecx = eax;
    PUSH32(esp, 0x0011C61Bu); RECOMP_ABI_CALL(0x0012F5A0u, sub_0012F5A0); /* call 0x0012F5A0 */

loc_0011C61B: ;
    esp += 8; return; /* ret 4 */

loc_0011C61E: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x43);
    PUSH32(esp, 0x0011C627u); RECOMP_ABI_CALL(0x0012F6B0u, sub_0012F6B0); /* call 0x0012F6B0 */

loc_0011C627: ;
    ecx = eax;
    PUSH32(esp, 0x0011C62Eu); RECOMP_ABI_CALL(0x0012F5A0u, sub_0012F5A0); /* call 0x0012F5A0 */

loc_0011C62E: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x90);
    PUSH32(esp, 0x0011C63Au); RECOMP_ABI_CALL(0x0012F6B0u, sub_0012F6B0); /* call 0x0012F6B0 */

loc_0011C63A: ;
    ecx = eax;
    PUSH32(esp, 0x0011C641u); RECOMP_ABI_CALL(0x0012F5A0u, sub_0012F5A0); /* call 0x0012F5A0 */

loc_0011C641: ;
    PUSH32(esp, 0x207);
    PUSH32(esp, 0x46);
    PUSH32(esp, 0x0011C64Du); RECOMP_ABI_CALL(0x0012F6B0u, sub_0012F6B0); /* call 0x0012F6B0 */

loc_0011C64D: ;
    ecx = eax;
    PUSH32(esp, 0x0011C654u); RECOMP_ABI_CALL(0x0012F5A0u, sub_0012F5A0); /* call 0x0012F5A0 */

loc_0011C654: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x47);
    PUSH32(esp, 0x0011C65Du); RECOMP_ABI_CALL(0x0012F6B0u, sub_0012F6B0); /* call 0x0012F6B0 */

loc_0011C65D: ;
    ecx = eax;
    PUSH32(esp, 0x0011C664u); RECOMP_ABI_CALL(0x0012F5A0u, sub_0012F5A0); /* call 0x0012F5A0 */

loc_0011C664: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x49);
    PUSH32(esp, 0x0011C66Du); RECOMP_ABI_CALL(0x0012F6B0u, sub_0012F6B0); /* call 0x0012F6B0 */

loc_0011C66D: ;
    ecx = eax;
    PUSH32(esp, 0x0011C674u); RECOMP_ABI_CALL(0x0012F5A0u, sub_0012F5A0); /* call 0x0012F5A0 */

loc_0011C674: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x48);
    PUSH32(esp, 0x0011C67Du); RECOMP_ABI_CALL(0x0012F6B0u, sub_0012F6B0); /* call 0x0012F6B0 */

loc_0011C67D: ;
    ecx = eax;
    PUSH32(esp, 0x0011C684u); RECOMP_ABI_CALL(0x0012F5A0u, sub_0012F5A0); /* call 0x0012F5A0 */

loc_0011C684: ;
    PUSH32(esp, 0x1E01);
    PUSH32(esp, 0x45);
    PUSH32(esp, 0x0011C690u); RECOMP_ABI_CALL(0x0012F6B0u, sub_0012F6B0); /* call 0x0012F6B0 */

loc_0011C690: ;
    ecx = eax;
    PUSH32(esp, 0x0011C697u); RECOMP_ABI_CALL(0x0012F5A0u, sub_0012F5A0); /* call 0x0012F5A0 */

loc_0011C697: ;
    PUSH32(esp, 0x1E01);
    PUSH32(esp, 0x91);
    PUSH32(esp, 0x0011C6A6u); RECOMP_ABI_CALL(0x0012F6B0u, sub_0012F6B0); /* call 0x0012F6B0 */

loc_0011C6A6: ;
    ecx = eax;
    PUSH32(esp, 0x0011C6ADu); RECOMP_ABI_CALL(0x0012F5A0u, sub_0012F5A0); /* call 0x0012F5A0 */

loc_0011C6AD: ;
    PUSH32(esp, 0x1E01);
    PUSH32(esp, 0x44);
    PUSH32(esp, 0x0011C6B9u); RECOMP_ABI_CALL(0x0012F6B0u, sub_0012F6B0); /* call 0x0012F6B0 */

loc_0011C6B9: ;
    ecx = eax;
    PUSH32(esp, 0x0011C6C0u); RECOMP_ABI_CALL(0x0012F5A0u, sub_0012F5A0); /* call 0x0012F5A0 */

loc_0011C6C0: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0011C720
 * Original: 0x0011C720 - 0x0011C72D (13 bytes, 4 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011C720(void)
{

loc_0011C720: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0011C72Au); RECOMP_ABI_CALL(0x0011BDB0u, sub_0011BDB0); /* call 0x0011BDB0 */

loc_0011C72A: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0011CBA0
 * Original: 0x0011CBA0 - 0x0011CFFA (1114 bytes, 302 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011CBA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0011CBA0: ;
    _fb = (uint32_t)(0x84) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x84;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x8C);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = eax;
    eax = ebp;
    edi = esp + 0x4C;
    PUSH32(esp, 0x0011CBBDu); RECOMP_ABI_CALL(0x0011BE80u, sub_0011BE80); /* call 0x0011BE80 */

loc_0011CBBD: ;
    fp_push(MEMF(esp + 0x4C)); /* fld float */
    eax = MEM32(0x6389E8);
    MEM32(esp + 0x20) = 0;
    ecx = MEM32(esp + 0x20);
    MEM32(esp + 0x3C) = ecx;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x3C)); /* fadd dword ptr [esp + 0x3c] */
    fp_push(MEMF(esp + 0x50)); /* fld float */
    ecx = MEM32(esp + 0x2C);
    MEM32(esp + 0x24) = 0;
    edx = MEM32(esp + 0x24);
    MEM32(esp + 0x40) = edx;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x40)); /* fadd dword ptr [esp + 0x40] */
    fp_push(MEMF(esp + 0x54)); /* fld float */
    MEM32(esp + 0x44) = eax;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x44)); /* fadd dword ptr [esp + 0x44] */
    MEM32(esp + 0x28) = eax;
    MEM32(esp + 0x48) = ecx;
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x28);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEM32(esp + 0x28) = edx;
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x10);
    MEM32(esp + 0x18) = edx;
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x14);
    MEM32(esp + 0x24) = ecx;
    SET_LO16(ecx, MEM16(ebp + 0x14));
    SET_LO16(ecx, (uint32_t)(((int32_t)(int16_t)(LO16(ecx))) >> ((4) & 31u)));
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* sar result */
    edx = SX16(LO16(ecx));
    ecx = MEM32(esp + 0x28);
    MEM32(esp + 0xC) = edx;
    edx = MEM32(esp + 0x5C);
    MEM32(esp + 0x20) = eax;
    fp_push((double)SMEM32(esp + 0xC)); /* fild */
    eax = MEM32(esp + 0x1C);
    MEM32(ebx + 8) = ecx;
    MEM32(esp + 0x2C) = eax;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x20)); /* fadd dword ptr [esp + 0x20] */
    eax = MEM32(esp + 0x24);
    MEM32(esp + 0x10) = 0;
    ecx = MEM32(esp + 0x10);
    MEMF(ebx) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0x3C) = ecx;
    fp_push(MEMF(esp + 0x4C)); /* fld float */
    ecx = MEM32(esp + 0x1C);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x3C)); /* fadd dword ptr [esp + 0x3c] */
    MEM32(ebx + 4) = eax;
    eax = MEM32(0x6389E8);
    fp_push(MEMF(esp + 0x50)); /* fld float */
    MEM32(esp + 0x40) = edx;
    MEM32(esp + 0x44) = eax;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x40)); /* fadd dword ptr [esp + 0x40] */
    MEM32(esp + 0x14) = edx;
    fp_push(MEMF(esp + 0x54)); /* fld float */
    MEM32(esp + 0x18) = eax;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x44)); /* fadd dword ptr [esp + 0x44] */
    MEM32(esp + 0x48) = ecx;
    MEMF(esp + 0x88) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x88);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEM32(esp + 0x18) = edx;
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x10);
    MEM32(esp + 0x20) = eax;
    eax = MEM32(esp + 0x1C);
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x14);
    MEM32(esp + 0x24) = ecx;
    SET_LO16(ecx, MEM16(ebp + 0x16));
    MEM32(esp + 0x28) = edx;
    MEM32(esp + 0x2C) = eax;
    SET_LO16(ecx, (uint32_t)(((int32_t)(int16_t)(LO16(ecx))) >> ((4) & 31u)));
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* sar result */
    eax = MEM32(esp + 0x24);
    edx = SX16(LO16(ecx));
    ecx = MEM32(esp + 0x28);
    MEM32(esp + 0xC) = edx;
    edx = MEM32(esp + 0x60);
    MEM32(ebx + 0x1C) = ecx;
    fp_push((double)SMEM32(esp + 0xC)); /* fild */
    ecx = edx;
    MEM32(esp + 0x3C) = ecx;
    ecx = MEM32(esp + 0x1C);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x20)); /* fadd dword ptr [esp + 0x20] */
    MEM32(ebx + 0x18) = eax;
    eax = MEM32(0x6389E8);
    MEM32(esp + 0x10) = edx;
    MEMF(ebx + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0x14) = 0;
    edx = MEM32(esp + 0x14);
    fp_push(MEMF(esp + 0x4C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x3C)); /* fadd dword ptr [esp + 0x3c] */
    MEM32(esp + 0x40) = edx;
    fp_push(MEMF(esp + 0x50)); /* fld float */
    MEM32(esp + 0x44) = eax;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x40)); /* fadd dword ptr [esp + 0x40] */
    MEM32(esp + 0x48) = ecx;
    fp_push(MEMF(esp + 0x54)); /* fld float */
    MEM32(esp + 0x18) = eax;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x44)); /* fadd dword ptr [esp + 0x44] */
    MEMF(esp + 0x88) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x88);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEM32(esp + 0x28) = edx;
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x10);
    MEM32(esp + 0x18) = edx;
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x14);
    MEM32(esp + 0x24) = ecx;
    SET_LO16(ecx, MEM16(ebp + 0x18));
    SET_LO16(ecx, (uint32_t)(((int32_t)(int16_t)(LO16(ecx))) >> ((4) & 31u)));
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* sar result */
    edx = SX16(LO16(ecx));
    ecx = MEM32(esp + 0x28);
    MEM32(esp + 0xC) = edx;
    edx = MEM32(esp + 0x60);
    MEM32(esp + 0x20) = eax;
    fp_push((double)SMEM32(esp + 0xC)); /* fild */
    eax = MEM32(esp + 0x1C);
    MEM32(esp + 0x2C) = eax;
    eax = MEM32(esp + 0x24);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x20)); /* fadd dword ptr [esp + 0x20] */
    MEM32(esp + 0x3C) = edx;
    MEM32(ebx + 0x2C) = eax;
    eax = MEM32(esp + 0x5C);
    MEMF(ebx + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(ebx + 0x30) = ecx;
    fp_push(MEMF(esp + 0x4C)); /* fld float */
    ecx = MEM32(0x6389E8);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x3C)); /* fadd dword ptr [esp + 0x3c] */
    MEM32(esp + 0x40) = eax;
    fp_push(MEMF(esp + 0x50)); /* fld float */
    MEM32(esp + 0x44) = ecx;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x40)); /* fadd dword ptr [esp + 0x40] */
    MEM32(esp + 0x10) = edx;
    fp_push(MEMF(esp + 0x54)); /* fld float */
    edx = MEM32(esp + 0x1C);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x44)); /* fadd dword ptr [esp + 0x44] */
    MEM32(esp + 0x18) = ecx;
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x48) = edx;
    MEMF(esp + 0x88) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x88);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEM32(esp + 0x18) = eax;
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x10);
    MEM32(esp + 0x20) = ecx;
    ecx = MEM32(esp + 0x1C);
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x14);
    MEM32(esp + 0x24) = edx;
    MEM32(esp + 0x28) = eax;
    MEM32(esp + 0x2C) = ecx;
    SET_LO16(edx, MEM16(ebp + 0x1A));
    edi = MEM32(esp + 0x78);
    ecx = MEM32(esp + 0x24);
    ebp = MEM32(esp + 0x70);
    SET_LO16(edx, (uint32_t)(((int32_t)(int16_t)(LO16(edx))) >> ((4) & 31u)));
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* sar result */
    eax = SX16(LO16(edx));
    edx = MEM32(esp + 0x28);
    MEM32(esp + 0xC) = eax;
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    MEM32(ebx + 0x40) = ecx;
    MEM32(ebx + 0x44) = edx;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x28)); /* fadd dword ptr [esp + 0x28] */
    MEMF(ebx + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0011CE6Cu); RECOMP_ABI_CALL(0x0011BC30u, sub_0011BC30); /* call 0x0011BC30 */

loc_0011CE6C: ;
    MEM32(ebx + 0x10) = eax;
    eax = MEM32(esp + 0x84);
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0011CE7Du); RECOMP_ABI_CALL(0x0011BC30u, sub_0011BC30); /* call 0x0011BC30 */

loc_0011CE7D: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x88);
    PUSH32(esp, edi);
    MEM32(ebx + 0x24) = eax;
    PUSH32(esp, 0x0011CE8Eu); RECOMP_ABI_CALL(0x0011BC30u, sub_0011BC30); /* call 0x0011BC30 */

loc_0011CE8E: ;
    ecx = MEM32(esp + 0x94);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    MEM32(ebx + 0x38) = eax;
    PUSH32(esp, 0x0011CE9Fu); RECOMP_ABI_CALL(0x0011BC30u, sub_0011BC30); /* call 0x0011BC30 */

loc_0011CE9F: ;
    fp_push(MEMF(0x4964E8)); /* fld float */
    MEM32(ebx + 0x4C) = eax;
    eax = MEM32(esp + 0x8C);
    MEM32(ebx + 0x48) = eax;
    MEM32(ebx + 0x34) = eax;
    MEM32(ebx + 0x20) = eax;
    MEM32(ebx + 0xC) = eax;
    fp_push(MEMF(esi + 0x98)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0011CFF0; /* jnp: not parity */

loc_0011CED1: ;
    fp_push(MEMF(ebx)); /* fld float */
    PUSH32(esp, ecx);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ebx + 0x3C)); /* fadd dword ptr [ebx + 0x3c] */
    edx = esp + 0x34;
    eax = esp + 0x3C;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x49CE34)); /* fmul dword ptr [0x49ce34] */
    MEMF(esp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebx + 0x40)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ebx + 4)); /* fadd dword ptr [ebx + 4] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x49CE34)); /* fmul dword ptr [0x49ce34] */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x98)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x497CAC)); /* fmul dword ptr [0x497cac] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0011CF0Fu); RECOMP_ABI_CALL(0x0010D170u, sub_0010D170); /* call 0x0010D170 */

loc_0011CF0F: ;
    fp_push(MEMF(esp + 0x40)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ebx)); /* fadd dword ptr [ebx] */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ebx + 4)); /* fadd dword ptr [ebx + 4] */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x30)); /* fmul dword ptr [esp + 0x30] */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x38)); /* fmul dword ptr [esp + 0x38] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x34)); /* fsub dword ptr [esp + 0x34] */
    MEMF(ebx) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x38)); /* fmul dword ptr [esp + 0x38] */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x30)); /* fmul dword ptr [esp + 0x30] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0xC)); /* fsub dword ptr [esp + 0xc] */
    MEMF(ebx + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x34)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ebx + 0x14)); /* fadd dword ptr [ebx + 0x14] */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ebx + 0x18)); /* fadd dword ptr [ebx + 0x18] */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x30)); /* fmul dword ptr [esp + 0x30] */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x38)); /* fmul dword ptr [esp + 0x38] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x34)); /* fsub dword ptr [esp + 0x34] */
    MEMF(ebx + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x38)); /* fmul dword ptr [esp + 0x38] */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x30)); /* fmul dword ptr [esp + 0x30] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0xC)); /* fsub dword ptr [esp + 0xc] */
    MEMF(ebx + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x34)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ebx + 0x28)); /* fadd dword ptr [ebx + 0x28] */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ebx + 0x2C)); /* fadd dword ptr [ebx + 0x2c] */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x30)); /* fmul dword ptr [esp + 0x30] */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x38)); /* fmul dword ptr [esp + 0x38] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x34)); /* fsub dword ptr [esp + 0x34] */
    MEMF(ebx + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x38)); /* fmul dword ptr [esp + 0x38] */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x30)); /* fmul dword ptr [esp + 0x30] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0xC)); /* fsub dword ptr [esp + 0xc] */
    MEMF(ebx + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x34)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ebx + 0x3C)); /* fadd dword ptr [ebx + 0x3c] */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ebx + 0x40)); /* fadd dword ptr [ebx + 0x40] */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x30)); /* fmul dword ptr [esp + 0x30] */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x38)); /* fmul dword ptr [esp + 0x38] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x34)); /* fsub dword ptr [esp + 0x34] */
    MEMF(ebx + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x38)); /* fmul dword ptr [esp + 0x38] */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x30)); /* fmul dword ptr [esp + 0x30] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0xC)); /* fsub dword ptr [esp + 0xc] */
    MEMF(ebx + 0x40) = (float)fp_top(); fp_pop(); /* fstp */

loc_0011CFF0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x84) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x84;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0011D6C0
 * Original: 0x0011D6C0 - 0x0011D6C1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011D6C0(void)
{

loc_0011D6C0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0011D6D0
 * Original: 0x0011D6D0 - 0x0011D6DD (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011D6D0(void)
{

loc_0011D6D0: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x584) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0011D6E0
 * Original: 0x0011D6E0 - 0x0011D70D (45 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011D6E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0011D6E0: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + 8);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 0xFFFFF820u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x800) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x800)) >> 32) & 1);
    eax = eax + 0x800;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(eax + ecx);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ecx)) >> 32) & 1);
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0011D70C; /* jne: not equal / not zero */

loc_0011D6FF: ;
    edx = MEM32(eax + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0011D70C; /* jne: not equal / not zero */

loc_0011D706: ;
    eax = ecx + 0x800;

loc_0011D70C: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0011D710
 * Original: 0x0011D710 - 0x0011D7A3 (147 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011D710(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0011D710: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + 8);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 0xFFFFF820u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x800) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x800)) >> 32) & 1);
    eax = eax + 0x800;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(eax + ecx);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ecx)) >> 32) & 1);
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0011D73C; /* jne: not equal / not zero */

loc_0011D72F: ;
    edx = MEM32(eax + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0011D73C; /* jne: not equal / not zero */

loc_0011D736: ;
    eax = ecx + 0x800;

loc_0011D73C: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    ecx = MEM32(eax + edi * 8 + 4);
    ebx = MEM32(eax + edi * 8);
    esi = ecx;
    _cf = 0; /* logical op clears CF */
    esi = esi & 0x80000000u;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _cf = 0; /* logical op clears CF */
    edx = edx | esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    if ((_fa == 0)) goto loc_0011D78A; /* je: equal / zero */

loc_0011D758: ;
    eax = MEM32(esp + 0x14);
    edx = ebx;
    if (0xB) _cf = (int)(((edx) >> (32 - (0xB))) & 1);
    edx = edx << 0xB;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(eax) = edx;
    edx = ecx;
    if (0xC) _cf = (int)(((edx) >> ((0xC) - 1)) & 1);
    edx = edx >> 0xC;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    { uint32_t _c = (uint32_t)(0x16) & 31u; if (_c && _c < 32u) { ebx = (ebx >> _c) | (ecx << (32 - _c)); _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shrd result */ } }  /* shrd */
    _cf = 0; /* logical op clears CF */
    edx = edx & 0x7FFFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if (3) _cf = (int)(((edx) >> (32 - (3))) & 1);
    edx = edx << 3;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    POP32(esp, edi);
    if (0x16) _cf = (int)(((ecx) >> ((0x16) - 1)) & 1);
    ecx = ecx >> 0x16;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _cf = 0; /* logical op clears CF */
    ebx = ebx & 0x3FFFFF;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax + 4) = ebx;
    POP32(esp, esi);
    MEM32(eax + 8) = edx;
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0011D78A: ;
    edx = MEM32(eax + edi * 8);
    ecx = MEM32(esp + 0x14);
    MEM32(ecx) = edx;
    eax = MEM32(eax + edi * 8 + 4);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = eax;
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0011D7B0
 * Original: 0x0011D7B0 - 0x0011D7B8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011D7B0(void)
{

loc_0011D7B0: ;
    MEM8(0x639204) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_0011D7C0
 * Original: 0x0011D7C0 - 0x0011D7C1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011D7C0(void)
{

loc_0011D7C0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0011D7D0
 * Original: 0x0011D7D0 - 0x0011D83F (111 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011D7D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0011D7D0: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(eax * 4 + 0x4F7818);
    eax = 0x638DD8;
    edx = ebp;
    PUSH32(esp, edi);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    goto loc_0011D7F0;

    /* nop */

loc_0011D7F0: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011D7F0; /* jne: not equal / not zero */

loc_0011D7FA: ;
    edi = ebp;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    /* nop */

loc_0011D800: ;
    SET_LO8(eax, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011D800; /* jne: not equal / not zero */

loc_0011D808: ;
    SET_LO16(ecx, MEM16(0x49D5DC));
    eax = esi + 1;
    MEM16(edi) = LO16(ecx);
    ecx = eax;

loc_0011D817: ;
    SET_LO8(edx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011D817; /* jne: not equal / not zero */

loc_0011D81E: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esi = ecx;
    edi = ebp;

loc_0011D825: ;
    SET_LO8(ecx, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011D825; /* jne: not equal / not zero */

loc_0011D82D: ;
    ecx = eax;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    ecx = eax;
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < _n; _i++) _d[_i] = _s[_i]; }
      esi += ecx; edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = MEM8(esi - _i); esi -= ecx; edi -= ecx; }
    ecx = 0; /* rep movsb */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0011D840
 * Original: 0x0011D840 - 0x0011D897 (87 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011D840(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011D840: ;
    eax = MEM32(0x6391E4);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    eax = MEM32(esp + 0x10);
    if (CMP_EQ(_fa, _fb)) goto loc_0011D893; /* je: equal / zero */

loc_0011D850: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x13) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x13 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0011D893; /* jle: less or equal (signed <=) */

loc_0011D855: ;
    SET_LO8(ecx, MEM8(0x6391E8));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011D868; /* je: equal / zero */

loc_0011D85F: ;
    eax = 0x13;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0011D868: ;
    ecx = MEM32(0x638DD4);
    _fb = (uint32_t)(0xFFFFFFECu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFECu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0011D87Du); RECOMP_ABI_CALL(0x0011D710u, sub_0011D710); /* call 0x0011D710 */

loc_0011D87D: ;
    eax = 0x1B4E81B5;
    { uint64_t _r = (uint64_t)eax * (uint64_t)MEM32(esp + 0xC);
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = edx >> 0x19;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = 0x13;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_0011D893: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0011D8A0
 * Original: 0x0011D8A0 - 0x0011D8B6 (22 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011D8A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0011D8A0: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0011D8AAu); RECOMP_ABI_CALL(0x0011D840u, sub_0011D840); /* call 0x0011D840 */

loc_0011D8AA: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 8) = eax;
    g_seh_ebp = ebp; sub_0011D7D0(); return; /* tail jmp 0x0011D7D0 */

}

/**
 * sub_0011D8C0
 * Original: 0x0011D8C0 - 0x0011D8C1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011D8C0(void)
{

loc_0011D8C0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0011D8D0
 * Original: 0x0011D8D0 - 0x0011D8D1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011D8D0(void)
{

loc_0011D8D0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0011D8E0
 * Original: 0x0011D8E0 - 0x0011D8E1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011D8E0(void)
{

loc_0011D8E0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0011D8F0
 * Original: 0x0011D8F0 - 0x0011D90C (28 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011D8F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011D8F0: ;
    eax = MEM32(0x638C88);
    _fb = (uint32_t)(0x7FF) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x7FF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 0x7FF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((0xB) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    MEM32(0x638C88) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0011D910
 * Original: 0x0011D910 - 0x0011D91A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011D910(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0011D910: ;
    ecx = 0x71AE88;
    g_seh_ebp = ebp; sub_001EBDA0(); return; /* tail jmp 0x001EBDA0 */

}

/**
 * sub_0011D920
 * Original: 0x0011D920 - 0x0011D93D (29 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011D920(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011D920: ;
    ecx = MEM32(0x638C88);
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x638C88) = ecx;
    ecx = MEM32(esp + 8);
    MEM32(0x638C8C) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_0011D940
 * Original: 0x0011D940 - 0x0011D954 (20 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011D940(void)
{

loc_0011D940: ;
    eax = MEM32(esp + 4);
    MEM32(0x6391FC) = eax;
    MEM32(0x6391F0) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_0011D960
 * Original: 0x0011D960 - 0x0011D968 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011D960(void)
{

loc_0011D960: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0xC);
    esp += 4; return; /* ret */

}

/**
 * sub_0011D970
 * Original: 0x0011D970 - 0x0011D9A6 (54 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011D970(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011D970: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0011D988u); RECOMP_ABI_CALL(0x0011D710u, sub_0011D710); /* call 0x0011D710 */

loc_0011D988: ;
    edx = MEM32(esp + 0x10);
    eax = MEM32(esp + 0x28);
    ecx = MEM32(esp + 0x2C);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = edx;
    edx = MEM32(esp + 8);
    MEM32(ecx) = edx;
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0011D9B0
 * Original: 0x0011D9B0 - 0x0011D9B1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011D9B0(void)
{

loc_0011D9B0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0011D9C0
 * Original: 0x0011D9C0 - 0x0011DA00 (64 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011D9C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011D9C0: ;
    MEM32(0x638DB4) = MEM32(0x638DB4) - 1;
    _fa = (uint32_t)(MEM32(0x638DB4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = MEM32(0x4A8664);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0011D9D1u); RECOMP_ABI_CALL(0x001030C0u, sub_001030C0); /* call 0x001030C0 */

loc_0011D9D1: ;
    ecx = MEM32(0x638DB4);
    ecx = MEM32(ecx * 4 + 0x638D10);
    edx = MEM32(0x4A8664);
    PUSH32(esp, 0x3F7);
    PUSH32(esp, 0x4AAE84);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0x4AAE5C);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0011D9FCu); RECOMP_ABI_CALL(0x001031A0u, sub_001031A0); /* call 0x001031A0 */

loc_0011D9FC: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0011DA20
 * Original: 0x0011DA20 - 0x0011DA7A (90 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011DA20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011DA20: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = esi;
    edx = eax + 1;
    /* nop */

loc_0011DA30: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011DA30; /* jne: not equal / not zero */

loc_0011DA37: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3FF (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0011DA56; /* jbe: below or equal (unsigned <=) */

loc_0011DA40: ;
    eax = 0x3FF;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x638DD8);
    PUSH32(esp, 0x0011DA51u); RECOMP_ABI_CALL(0x000EBBD0u, sub_000EBBD0); /* call 0x000EBBD0 */

loc_0011DA51: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0011DA56: ;
    eax = esi;
    edx = eax + 1;
    goto loc_0011DA60;

    /* nop */

loc_0011DA60: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011DA60; /* jne: not equal / not zero */

loc_0011DA67: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x638DD8);
    PUSH32(esp, 0x0011DA75u); RECOMP_ABI_CALL(0x000EBBD0u, sub_000EBBD0); /* call 0x000EBBD0 */

loc_0011DA75: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0011DA80
 * Original: 0x0011DA80 - 0x0011DC2A (426 bytes, 95 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011DA80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011DA80: ;
    _fb = (uint32_t)(0x284) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x284;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x50C524);
    MEM32(esp + 0x280) = eax;
    SET_LO8(eax, MEM8(0x639204));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    PUSH32(esp, ebx);
    if (CMP_NE(_fa, _fb)) goto loc_0011DAC3; /* jne: not equal / not zero */

loc_0011DA9C: ;
    PUSH32(esp, 0x0011DAA1u); RECOMP_ABI_CALL(0x001EBE00u, sub_001EBE00); /* call 0x001EBE00 */

loc_0011DAA1: ;
    MEM32(0x639208) = eax;
    MEM8(0x639204) = 1;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    ecx = MEM32(esp + 0x284);
    PUSH32(esp, 0x0011DABBu); RECOMP_ABI_CALL(0x000EB37Bu, sub_000EB37B); /* call 0x000EB37B */

loc_0011DABB: ;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x284) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x284;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0011DAC3: ;
    PUSH32(esp, 0x0011DAC8u); RECOMP_ABI_CALL(0x001EBE00u, sub_001EBE00); /* call 0x001EBE00 */

loc_0011DAC8: ;
    _fb = (uint32_t)(MEM32(0x639208)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(0x639208);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3A98) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3A98 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0011DAEB; /* ja: above (unsigned >) */

loc_0011DAD5: ;
    ecx = MEM32(esp + 0x284);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    PUSH32(esp, 0x0011DAE3u); RECOMP_ABI_CALL(0x000EB37Bu, sub_000EB37B); /* call 0x000EB37B */

loc_0011DAE3: ;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x284) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x284;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0011DAEB: ;
    MEM8(esp + 0x14C) = 0;
    MEM8(esp + 0x14D) = 0;
    MEM8(esp + 0x14E) = 0;
    MEM8(esp + 0x14F) = 0;
    PUSH32(esp, 0x0011DB10u); RECOMP_ABI_CALL(0x00014A75u, sub_00014A75); /* call 0x00014A75 */

loc_0011DB10: ;
    eax = MEM32(eax * 4 + 0x50EA40);
    PUSH32(esp, eax);
    eax = esp + 0x15C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0011DB25u); RECOMP_ABI_CALL(0x000EB2C2u, sub_000EB2C2); /* call 0x000EB2C2 */

loc_0011DB25: ;
    eax = esp + 0x160;
    edx = esp + 0x1C;
    ecx = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_0011DB37: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011DB37; /* jne: not equal / not zero */

loc_0011DB41: ;
    SET_LO8(ebx, 0xFF);
    MEM8(esp + 0x154) = LO8(ecx);
    ecx = MEM32(0x638988);
    MEM32(esp + 0x140) = 0x3E8;
    MEM32(esp + 0x144) = 0x32;
    MEM32(esp + 0x148) = 0x28;
    MEM8(esp + 0x14C) = LO8(ebx);
    MEM8(esp + 0x14D) = LO8(ebx);
    MEM8(esp + 0x14E) = LO8(ebx);
    MEM8(esp + 0x14F) = LO8(ebx);
    MEM32(esp + 0x150) = 2;
    MEM8(esp + 0x155) = 1;
    MEM8(esp + 0x156) = 1;
    PUSH32(esp, 0x0011DBADu); RECOMP_ABI_CALL(0x00119F80u, sub_00119F80); /* call 0x00119F80 */

loc_0011DBAD: ;
    edx = MEM32(esp + 0x148);
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x64;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    MEM32(0x639CE4) = 0x3E4CCCCD;
    PUSH32(esp, 0x0011DBC7u); RECOMP_ABI_CALL(0x001B16B0u, sub_001B16B0); /* call 0x001B16B0 */

loc_0011DBC7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 3);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 1);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = esp;
    PUSH32(esp, 0);
    MEM32(esp + 0x2C) = 0x118;
    MEM32(esp + 0x28) = 0x168;
    MEM32(esp + 0x20) = 0x64;
    MEM32(esp + 0x24) = 0x96;
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    edx = esp + 0x2C;
    MEM8(eax) = LO8(ebx);
    MEM8(eax + 1) = LO8(ebx);
    MEM8(eax + 2) = LO8(ebx);
    MEM8(eax + 3) = LO8(ebx);
    PUSH32(esp, edx);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0011DC20u); RECOMP_ABI_CALL(0x001B3B20u, sub_001B3B20); /* call 0x001B3B20 */

loc_0011DC20: ;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0011DC23: ;
    PUSH32(esp, 0x0011DC28u); RECOMP_ABI_CALL(0x00123920u, sub_00123920); /* call 0x00123920 */

loc_0011DC28: ;
    goto loc_0011DC23;

}

/**
 * sub_0011DC30
 * Original: 0x0011DC30 - 0x0011DC53 (35 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011DC30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011DC30: ;
    ecx = MEM32(esp + 4);
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20465750) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 0x20465750 (32-bit) */
    SET_LO8(eax, 1);
    if (CMP_NE(_fa, _fb)) goto loc_0011DC4B; /* jne: not equal / not zero */

loc_0011DC3E: ;
    ecx = MEM32(ecx + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011DC52; /* je: equal / zero */

loc_0011DC46: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011DC52; /* je: equal / zero */

loc_0011DC4B: ;
    PUSH32(esp, 0x0011DC50u); RECOMP_ABI_CALL(0x0011DA80u, sub_0011DA80); /* call 0x0011DA80 */

loc_0011DC50: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_0011DC52: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0011DC60
 * Original: 0x0011DC60 - 0x0011DD9F (319 bytes, 98 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011DC60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0011DC60: ;
    eax = MEM32(0x6391E4);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x20);
    if (CMP_EQ(_fa, _fb)) goto loc_0011DCE2; /* je: equal / zero */

loc_0011DC76: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x13) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x13 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0011DCE2; /* jle: less or equal (signed <=) */

loc_0011DC7B: ;
    edx = MEM32(0x638DD4);
    eax = edi + -20;
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    esi = 0x13;
    PUSH32(esp, 0x0011DC95u); RECOMP_ABI_CALL(0x0011D710u, sub_0011D710); /* call 0x0011D710 */

loc_0011DC95: ;
    SET_LO8(ecx, MEM8(0x6391E8));
    eax = MEM32(esp + 0x1C);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011DCBA; /* jne: not equal / not zero */

loc_0011DCA6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x12C00000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x12C00000 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0011DCBA; /* jb: below (unsigned <) */

loc_0011DCAD: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x12C00000;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = edx;

loc_0011DCBA: ;
    ecx = MEM32(esp + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    ebp = MEM32(esp + 0x24);
    edx = MEM32(esp + 0x18);
    MEM32(ebp) = edx;
    MEM32(0x638C8C) = ecx;
    MEM32(0x638C88) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0011DCF7; /* jne: not equal / not zero */

loc_0011DCD8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0011DCE2: ;
    ebp = MEM32(esp + 0x24);
    MEM32(0x638C88) = ebx;
    MEM32(0x638C8C) = ebx;
    esi = edi;
    MEM32(ebp) = ebx;

loc_0011DCF7: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x638C90);
    PUSH32(esp, 0x0011DD02u); RECOMP_ABI_CALL(0x0011D7D0u, sub_0011D7D0); /* call 0x0011D7D0 */

loc_0011DD02: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x638C90);
    ecx = 0x71AE88;
    PUSH32(esp, 0x0011DD14u); RECOMP_ABI_CALL(0x001EBD40u, sub_001EBD40); /* call 0x001EBD40 */

loc_0011DD14: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011DD2B; /* je: equal / zero */

loc_0011DD18: ;
    PUSH32(esp, 0x0011DD1Du); RECOMP_ABI_CALL(0x0011DA80u, sub_0011DA80); /* call 0x0011DA80 */

loc_0011DD1D: ;
    MEM32(0x638C8C) = ebx;
    MEM32(0x638C88) = ebx;
    goto loc_0011DD84;

loc_0011DD2B: ;
    _fa = (uint32_t)(MEM32(0x6391E4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x6391E4), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011DD38; /* je: equal / zero */

loc_0011DD33: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x13) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x13 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0011DD84; /* jg: greater (signed >) */

loc_0011DD38: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x13) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x13 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011DD6D; /* jne: not equal / not zero */

loc_0011DD3D: ;
    _fa = (uint32_t)(MEM32(0x6391EC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x6391EC), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011DD66; /* jne: not equal / not zero */

loc_0011DD45: ;
    PUSH32(esp, 0x638C90);
    ecx = 0x71AE88;
    PUSH32(esp, 0x0011DD54u); RECOMP_ABI_CALL(0x001EBD50u, sub_001EBD50); /* call 0x001EBD50 */

loc_0011DD54: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x12C00000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x12C00000 (32-bit) */
    MEM32(0x6391EC) = eax;
    SET_LO8(eax, (CMP_A(_fa, _fb)) ? 1 : 0); /* seta */
    MEM8(0x6391E8) = LO8(eax);

loc_0011DD66: ;
    eax = 0xE800;
    goto loc_0011DD7C;

loc_0011DD6D: ;
    PUSH32(esp, 0x638C90);
    ecx = 0x71AE88;
    PUSH32(esp, 0x0011DD7Cu); RECOMP_ABI_CALL(0x001EBD50u, sub_001EBD50); /* call 0x001EBD50 */

loc_0011DD7C: ;
    MEM32(0x638C8C) = eax;
    MEM32(ebp) = eax;

loc_0011DD84: ;
    _fa = (uint32_t)(MEM32(ebp)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011DD92; /* jne: not equal / not zero */

loc_0011DD89: ;
    ecx = MEM32(0x638C8C);
    MEM32(ebp) = ecx;

loc_0011DD92: ;
    eax = MEM32(0x638C8C);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0011DDA0
 * Original: 0x0011DDA0 - 0x0011DE2C (140 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011DDA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011DDA0: ;
    eax = MEM32(0x6391F0);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = 1;
    if ((_fa == 0)) goto loc_0011DE28; /* je: equal / zero */

loc_0011DDB0: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0011DDFC; /* je: equal / zero */

loc_0011DDB3: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0011DDD8; /* jne: not equal / not zero */

loc_0011DDB6: ;
    ecx = 0x71AE88;
    PUSH32(esp, 0x0011DDC0u); RECOMP_ABI_CALL(0x001EBD80u, sub_001EBD80); /* call 0x001EBD80 */

loc_0011DDC0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0011DDDC; /* jle: less or equal (signed <=) */

loc_0011DDC4: ;
    ecx = 0x71AE88;
    PUSH32(esp, 0x0011DDCEu); RECOMP_ABI_CALL(0x001EBDA0u, sub_001EBDA0); /* call 0x001EBDA0 */

loc_0011DDCE: ;
    MEM32(0x6391F0) = 0;

loc_0011DDD8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0011DDDC: ;
    if (CMP_GE(_fas, _fbs)) goto loc_0011DDD8; /* jge: greater or equal (signed >=) */

loc_0011DDDE: ;
    PUSH32(esp, 0x0011DDE3u); RECOMP_ABI_CALL(0x0011DA80u, sub_0011DA80); /* call 0x0011DA80 */

loc_0011DDE3: ;
    ecx = 0x71AE88;
    PUSH32(esp, 0x0011DDEDu); RECOMP_ABI_CALL(0x001EBDA0u, sub_001EBDA0); /* call 0x001EBDA0 */

loc_0011DDED: ;
    MEM32(0x6391F0) = 0;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0011DDFC: ;
    eax = MEM32(0x6391FC);
    ecx = MEM32(0x638C8C);
    edx = MEM32(0x638C88);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = 0x71AE88;
    PUSH32(esp, 0x0011DE1Au); RECOMP_ABI_CALL(0x001EBD70u, sub_001EBD70); /* call 0x001EBD70 */

loc_0011DE1A: ;
    eax = esi;
    MEM32(0x6391F0) = 2;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0011DE28: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0011DE30
 * Original: 0x0011DE30 - 0x0011DED6 (166 bytes, 57 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011DE30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011DE30: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x1C);
    MEM8(0x639204) = 0;

loc_0011DE40: ;
    ecx = MEM32(esp + 0x18);
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0011DE4Fu); RECOMP_ABI_CALL(0x0011DC60u, sub_0011DC60); /* call 0x0011DC60 */

loc_0011DE4F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0xC) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0011DEC4; /* je: equal / zero */

loc_0011DE5A: ;
    esi = MEM32(esp + 8);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0x3F) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x3F;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = esi & 0xFFFFFFC0u;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = esi + edi;
    MEM32(0x6391FC) = edx;
    MEM32(0x6391F0) = 1;
    PUSH32(esp, 0x0011DE7Eu); RECOMP_ABI_CALL(0x0011DDA0u, sub_0011DDA0); /* call 0x0011DDA0 */

loc_0011DE7E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0011DE95; /* jle: less or equal (signed <=) */

loc_0011DE82: ;
    ecx = 0x653BC0;
    PUSH32(esp, 0x0011DE8Cu); RECOMP_ABI_CALL(0x00150E40u, sub_00150E40); /* call 0x00150E40 */

loc_0011DE8C: ;
    PUSH32(esp, 0x0011DE91u); RECOMP_ABI_CALL(0x0011DDA0u, sub_0011DDA0); /* call 0x0011DDA0 */

loc_0011DE91: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0011DE82; /* jg: greater (signed >) */

loc_0011DE95: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011DE40; /* je: equal / zero */

loc_0011DE9A: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM8(0x639204) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_0011DECC; /* je: equal / zero */

loc_0011DEA5: ;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0011DEBDu); RECOMP_ABI_CALL(0x00326760u, sub_00326760); /* call 0x00326760 */

loc_0011DEBD: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011DECC; /* jne: not equal / not zero */

loc_0011DEC4: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0011DECC: ;
    eax = MEM32(esp + 0xC);
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0011DEE0
 * Original: 0x0011DEE0 - 0x0011DEE5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011DEE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0011DEE0: ;
    g_seh_ebp = ebp; sub_0011DE30(); return; /* tail jmp 0x0011DE30 */

}

/**
 * sub_0011DEF0
 * Original: 0x0011DEF0 - 0x0011DF7B (139 bytes, 48 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011DEF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0011DEF0: ;
    eax = MEM32(0x4A8660);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0011DEFEu); RECOMP_ABI_CALL(0x001030C0u, sub_001030C0); /* call 0x001030C0 */

loc_0011DEFE: ;
    ecx = MEM32(esp + 0x14);
    edi = eax;
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0011DF0Bu); RECOMP_ABI_CALL(0x0011DE30u, sub_0011DE30); /* call 0x0011DE30 */

loc_0011DF0B: ;
    edx = MEM32(0x4A8664);
    esi = eax;
    PUSH32(esp, edx);
    MEM32(0x638DD0) = esi;
    PUSH32(esp, 0x0011DF1Fu); RECOMP_ABI_CALL(0x001030C0u, sub_001030C0); /* call 0x001030C0 */

loc_0011DF1F: ;
    edx = MEM32(0x4A8664);
    ecx = MEM32(0x638DB4);
    PUSH32(esp, 0x3DD);
    PUSH32(esp, 0x4AAE90);
    PUSH32(esp, 0x4AAE5C);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    MEM32(ecx * 4 + 0x638D10) = eax;
    PUSH32(esp, 0x0011DF4Au); RECOMP_ABI_CALL(0x001050A0u, sub_001050A0); /* call 0x001050A0 */

loc_0011DF4A: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    ebp = eax;
    ecx = esi + edi;
    edx = esi + ebp;
    if (CMP_LE(_fas, _fbs)) goto loc_0011DF6A; /* jle: less or equal (signed <=) */

loc_0011DF59: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    goto loc_0011DF60;

    /* nop */

loc_0011DF60: ;
    SET_LO8(eax, MEM8(ecx + -1));
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM8(edx + ecx) = LO8(eax);
    if ((_fa != 0)) goto loc_0011DF60; /* jne: not equal / not zero */

loc_0011DF6A: ;
    eax = MEM32(0x638DB4);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(0x638DB4) = eax;
    POP32(esp, esi);
    eax = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0011DF80
 * Original: 0x0011DF80 - 0x0011E009 (137 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011DF80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0011DF80: ;
    eax = MEM32(0x4A865C);
    PUSH32(esp, eax);
    MEM32(0x6391E4) = 1;
    PUSH32(esp, 0x0011DF95u); RECOMP_ABI_CALL(0x001030C0u, sub_001030C0); /* call 0x001030C0 */

loc_0011DF95: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x13);
    MEM32(0x638DD4) = eax;
    PUSH32(esp, 0x0011DFA2u); RECOMP_ABI_CALL(0x0011DE30u, sub_0011DE30); /* call 0x0011DE30 */

loc_0011DFA2: ;
    edx = MEM32(0x638DD4);
    eax = MEM32(edx + 8);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 0xFFFFF820u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x800) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x800)) >> 32) & 1);
    eax = eax + 0x800;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(eax + edx);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(edx)) >> 32) & 1);
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0011DFD3; /* jne: not equal / not zero */

loc_0011DFC6: ;
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0011DFD3; /* jne: not equal / not zero */

loc_0011DFCD: ;
    eax = edx + 0x800;

loc_0011DFD3: ;
    PUSH32(esp, 0x20F);
    MEM32(0x638DCC) = eax;
    ecx = MEM32(edx + 0xC);
    if (3) _cf = (int)(((ecx) >> (32 - (3))) & 1);
    ecx = ecx << 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, 0x4AAEA0);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(edx));
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0x4AAE5C);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(eax)) >> 32) & 1);
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    ecx = MEM32(0x4A865C);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0011E000u); RECOMP_ABI_CALL(0x001050A0u, sub_001050A0); /* call 0x001050A0 */

loc_0011E000: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x18)) >> 32) & 1);
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x638DD4) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0011E010
 * Original: 0x0011E010 - 0x0011E023 (19 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011E010(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011E010: ;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 8);
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0011E01Fu); RECOMP_ABI_CALL(0x0011DC60u, sub_0011DC60); /* call 0x0011DC60 */

loc_0011E01F: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0011E030
 * Original: 0x0011E030 - 0x0011E061 (49 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011E030(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011E030: ;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 8);
    PUSH32(esp, esi);
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0011E041u); RECOMP_ABI_CALL(0x0011DC60u, sub_0011DC60); /* call 0x0011DC60 */

loc_0011E041: ;
    edx = MEM32(esp + 0x18);
    esi = eax;
    eax = MEM32(0x638C88);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = 0x71AE88;
    PUSH32(esp, 0x0011E05Cu); RECOMP_ABI_CALL(0x001EBD60u, sub_001EBD60); /* call 0x001EBD60 */

loc_0011E05C: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0011E070
 * Original: 0x0011E070 - 0x0011E089 (25 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011E070(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011E070: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0011E07Au); RECOMP_ABI_CALL(0x0011DEF0u, sub_0011DEF0); /* call 0x0011DEF0 */

loc_0011E07A: ;
    ecx = MEM32(esp + 0xC);
    MEM32(ecx) = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_0011E090
 * Original: 0x0011E090 - 0x0011E09A (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011E090(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0011E090: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    PUSH32(esp, 0x0011E099u); RECOMP_ABI_CALL(0x002A9354u, sub_002A9354); /* call 0x002A9354 */

loc_0011E099: ;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0011E0A0
 * Original: 0x0011E0A0 - 0x0011E0AA (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011E0A0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0011E0A0: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    PUSH32(esp, 0x0011E0A9u); RECOMP_ABI_CALL(0x002A9354u, sub_002A9354); /* call 0x002A9354 */

loc_0011E0A9: ;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0011E0E0
 * Original: 0x0011E0E0 - 0x0011E0E5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011E0E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0011E0E0: ;
    g_seh_ebp = ebp; sub_003C8EC0(); return; /* tail jmp 0x003C8EC0 */

}

/**
 * sub_0011E100
 * Original: 0x0011E100 - 0x0011E110 (16 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011E100(void)
{

loc_0011E100: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0011E10Fu); RECOMP_ABI_CALL(0x000FEF0Eu, sub_000FEF0E); /* call 0x000FEF0E */

loc_0011E10F: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0011E280
 * Original: 0x0011E280 - 0x0011E290 (16 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011E280(void)
{

loc_0011E280: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0011E28Fu); RECOMP_ABI_CALL(0x000FFAA2u, sub_000FFAA2); /* call 0x000FFAA2 */

loc_0011E28F: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0011E2B0
 * Original: 0x0011E2B0 - 0x0011E2B4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011E2B0(void)
{

loc_0011E2B0: ;
    eax = MEM32(ecx + 0x18);
    esp += 4; return; /* ret */

}

/**
 * sub_0011E2C0
 * Original: 0x0011E2C0 - 0x0011E2C7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011E2C0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0011E2C0: ;
    fp_push(MEMF(ecx + 0xA0)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0011E2D0
 * Original: 0x0011E2D0 - 0x0011E2D4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011E2D0(void)
{

loc_0011E2D0: ;
    eax = ecx + 0x5C;
    esp += 4; return; /* ret */

}

/**
 * sub_0011E2E0
 * Original: 0x0011E2E0 - 0x0011E2F3 (19 bytes, 6 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011E2E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011E2E0: ;
    eax = MEM32(ecx + 8);
    ecx = MEM32(eax + 8);
    _fb = (uint32_t)(MEM32(esp + 4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + MEM32(esp + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(eax + 0xC);
    eax = MEM32(edx + ecx * 4);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0011E300
 * Original: 0x0011E300 - 0x0011E306 (6 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011E300(void)
{

loc_0011E300: ;
    eax = MEM32(ecx + 0x10);
    eax = MEM32(eax);
    esp += 4; return; /* ret */

}

/**
 * sub_0011E310
 * Original: 0x0011E310 - 0x0011E323 (19 bytes, 6 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011E310(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011E310: ;
    eax = MEM32(ecx + 0x10);
    ecx = MEM32(eax + 8);
    _fb = (uint32_t)(MEM32(esp + 4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + MEM32(esp + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(eax + 0xC);
    eax = MEM32(edx + ecx * 4);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0011E330
 * Original: 0x0011E330 - 0x0011E334 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011E330(void)
{

loc_0011E330: ;
    eax = MEM32(ecx + 0x1C);
    esp += 4; return; /* ret */

}

/**
 * sub_0011E340
 * Original: 0x0011E340 - 0x0011E347 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011E340(void)
{

loc_0011E340: ;
    eax = MEM32(ecx + 0xA0);
    esp += 4; return; /* ret */

}

/**
 * sub_0011E350
 * Original: 0x0011E350 - 0x0011E35E (14 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011E350(void)
{

loc_0011E350: ;
    eax = MEM32(esp + 4);
    eax = MEM32(ecx + eax * 4 + 0xA4);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0011E360
 * Original: 0x0011E360 - 0x0011E367 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011E360(void)
{

loc_0011E360: ;
    eax = MEM32(ecx + 0xC4);
    esp += 4; return; /* ret */

}

/**
 * sub_0011E3B0
 * Original: 0x0011E3B0 - 0x0011E3BA (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011E3B0(void)
{

loc_0011E3B0: ;
    eax = MEM32(esp + 4);
    MEM32(0x63AFD4) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0011E3C0
 * Original: 0x0011E3C0 - 0x0011E3C3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011E3C0(void)
{

loc_0011E3C0: ;
    eax = MEM32(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0011E3D0
 * Original: 0x0011E3D0 - 0x0011E3D3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011E3D0(void)
{

loc_0011E3D0: ;
    eax = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_0011E3E0
 * Original: 0x0011E3E0 - 0x0011E3E7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011E3E0(void)
{

loc_0011E3E0: ;
    eax = MEM32(ecx + 0x30C);
    esp += 4; return; /* ret */

}

/**
 * sub_0011E3F0
 * Original: 0x0011E3F0 - 0x0011E3FD (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011E3F0(void)
{

loc_0011E3F0: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x30C) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0011E400
 * Original: 0x0011E400 - 0x0011E404 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011E400(void)
{

loc_0011E400: ;
    eax = MEM32(ecx + 0x18);
    esp += 4; return; /* ret */

}

/**
 * sub_0011E410
 * Original: 0x0011E410 - 0x0011E417 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011E410(void)
{

loc_0011E410: ;
    eax = ecx + 0x2DC;
    esp += 4; return; /* ret */

}

/**
 * sub_0011E420
 * Original: 0x0011E420 - 0x0011E427 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011E420(void)
{

loc_0011E420: ;
    eax = ecx + 0x2E4;
    esp += 4; return; /* ret */

}

/**
 * sub_0011E430
 * Original: 0x0011E430 - 0x0011E437 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011E430(void)
{

loc_0011E430: ;
    eax = ecx + 0x2EC;
    esp += 4; return; /* ret */

}

/**
 * sub_0011E440
 * Original: 0x0011E440 - 0x0011E447 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011E440(void)
{

loc_0011E440: ;
    eax = ecx + 0x2F4;
    esp += 4; return; /* ret */

}

/**
 * sub_0011E450
 * Original: 0x0011E450 - 0x0011E45B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011E450(void)
{

loc_0011E450: ;
    MEM32(ecx + 0x310) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_0011E460
 * Original: 0x0011E460 - 0x0011E46D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011E460(void)
{

loc_0011E460: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x143B8) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0011E470
 * Original: 0x0011E470 - 0x0011E477 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011E470(void)
{

loc_0011E470: ;
    eax = MEM32(ecx + 0x14398);
    esp += 4; return; /* ret */

}

/**
 * sub_0011E4E0
 * Original: 0x0011E4E0 - 0x0011E4ED (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011E4E0(void)
{

loc_0011E4E0: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x143A0) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0011E4F0
 * Original: 0x0011E4F0 - 0x0011E4F7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011E4F0(void)
{

loc_0011E4F0: ;
    eax = MEM32(ecx + 0x143A0);
    esp += 4; return; /* ret */

}

/**
 * sub_0011E500
 * Original: 0x0011E500 - 0x0011E50D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011E500(void)
{

loc_0011E500: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x143A4) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0011E570
 * Original: 0x0011E570 - 0x0011E57D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011E570(void)
{

loc_0011E570: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x33C) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0011E580
 * Original: 0x0011E580 - 0x0011E5A3 (35 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011E580(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011E580: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax);
    _fb = (uint32_t)(0x340) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x340;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    edx = MEM32(eax + 8);
    MEM32(ecx + 8) = edx;
    eax = MEM32(eax + 0xC);
    MEM32(ecx + 0xC) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0011E5B0
 * Original: 0x0011E5B0 - 0x0011E5B7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011E5B0(void)
{

loc_0011E5B0: ;
    eax = ecx + 0x340;
    esp += 4; return; /* ret */

}

/**
 * sub_0011E5C0
 * Original: 0x0011E5C0 - 0x0011E5E3 (35 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011E5C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011E5C0: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax);
    _fb = (uint32_t)(0x350) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x350;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    edx = MEM32(eax + 8);
    MEM32(ecx + 8) = edx;
    eax = MEM32(eax + 0xC);
    MEM32(ecx + 0xC) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0011E5F0
 * Original: 0x0011E5F0 - 0x0011E5F4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011E5F0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0011E5F0: ;
    fp_push(MEMF(ecx + 0x74)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0011E600
 * Original: 0x0011E600 - 0x0011E604 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011E600(void)
{

loc_0011E600: ;
    eax = ecx + 0x3C;
    esp += 4; return; /* ret */

}

/**
 * sub_0011E610
 * Original: 0x0011E610 - 0x0011E617 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011E610(void)
{

loc_0011E610: ;
    eax = ecx + 0x10C;
    esp += 4; return; /* ret */

}

/**
 * sub_0011E620
 * Original: 0x0011E620 - 0x0011E624 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011E620(void)
{

loc_0011E620: ;
    SET_LO8(eax, MEM8(ecx + 0x61));
    esp += 4; return; /* ret */

}

/**
 * sub_0011E630
 * Original: 0x0011E630 - 0x0011E634 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011E630(void)
{

loc_0011E630: ;
    SET_LO8(eax, MEM8(ecx + 0x62));
    esp += 4; return; /* ret */

}

/**
 * sub_0011E640
 * Original: 0x0011E640 - 0x0011E65B (27 bytes, 7 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011E640(void)
{

loc_0011E640: ;
    eax = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    MEM32(ecx + 0x78) = eax;
    eax = MEM32(esp + 0xC);
    MEM32(ecx + 0x7C) = edx;
    MEM32(ecx + 0x80) = eax;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0011E660
 * Original: 0x0011E660 - 0x0011E667 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011E660(void)
{

loc_0011E660: ;
    eax = MEM32(ecx + 0x404);
    esp += 4; return; /* ret */

}

/**
 * sub_0011E670
 * Original: 0x0011E670 - 0x0011E68B (27 bytes, 8 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011E670(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011E670: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x404)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x404) (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0011E681; /* jle: less or equal (signed <=) */

loc_0011E67C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

loc_0011E681: ;
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = MEM32(eax + ecx + 8);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0011E690
 * Original: 0x0011E690 - 0x0011E69D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011E690(void)
{

loc_0011E690: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x408) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0011E6A0
 * Original: 0x0011E6A0 - 0x0011E6A7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011E6A0(void)
{

loc_0011E6A0: ;
    eax = ecx + 0x110;
    esp += 4; return; /* ret */

}

/**
 * sub_0011E6B0
 * Original: 0x0011E6B0 - 0x0011E6B3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011E6B0(void)
{

loc_0011E6B0: ;
    SET_LO8(eax, MEM8(ecx));
    esp += 4; return; /* ret */

}

/**
 * sub_0011E6C0
 * Original: 0x0011E6C0 - 0x0011E6D4 (20 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011E6C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011E6C0: ;
    eax = MEM32(0x50D86C);
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0011E6D0u); RECOMP_ABI_CALL(0x00102BE0u, sub_00102BE0); /* call 0x00102BE0 */

loc_0011E6D0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0011E6E0
 * Original: 0x0011E6E0 - 0x0011E6E6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011E6E0(void)
{

loc_0011E6E0: ;
    eax = 0x639744;
    esp += 4; return; /* ret */

}

/**
 * sub_0011E6F0
 * Original: 0x0011E6F0 - 0x0011E6F6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011E6F0(void)
{

loc_0011E6F0: ;
    eax = 0x63BC68;
    esp += 4; return; /* ret */

}

/**
 * sub_0011E740
 * Original: 0x0011E740 - 0x0011E747 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011E740(void)
{

loc_0011E740: ;
    eax = MEM32(ecx + 0xF8);
    esp += 4; return; /* ret */

}

/**
 * sub_0011E750
 * Original: 0x0011E750 - 0x0011E75D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011E750(void)
{

loc_0011E750: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0xC4) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0011E760
 * Original: 0x0011E760 - 0x0011E767 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011E760(void)
{

loc_0011E760: ;
    eax = ecx + 0x35C;
    esp += 4; return; /* ret */

}

/**
 * sub_0011E820
 * Original: 0x0011E820 - 0x0011E823 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011E820(void)
{

loc_0011E820: ;
    eax = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_0011E830
 * Original: 0x0011E830 - 0x0011E831 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011E830(void)
{

loc_0011E830: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0011EA90
 * Original: 0x0011EA90 - 0x0011EAAE (30 bytes, 9 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011EA90(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011EA90: ;
    eax = MEM32(ecx + 0x10);
    eax = MEM32(eax + 0xC);
    edx = MEM32(eax + 8);
    ecx = MEM32(ecx + 0x2D4);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(MEM32(esp + 4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + MEM32(esp + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(eax + 0xC);
    eax = MEM32(edx + ecx * 4);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0011EDF0
 * Original: 0x0011EDF0 - 0x0011EE73 (131 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011EDF0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0011EDF0: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x24);
    ecx = MEM32(esp + 0x28);
    fp_push(MEMF(eax)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx)); /* fsub dword ptr [ecx] */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + 4)); /* fsub dword ptr [ecx + 4] */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + 8)); /* fsub dword ptr [ecx + 8] */
    ecx = MEM32(esp + 0x2C);
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx)); /* fsub dword ptr [ecx] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + 4)); /* fsub dword ptr [ecx + 4] */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 8)); /* fld float */
    eax = esp + 0x10;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + 8)); /* fsub dword ptr [ecx + 8] */
    PUSH32(esp, eax);
    ecx = eax;
    PUSH32(esp, ecx);
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0011EE43u); RECOMP_ABI_CALL(0x000FEF0Eu, sub_000FEF0E); /* call 0x000FEF0E */

loc_0011EE43: ;
    edx = esp;
    PUSH32(esp, edx);
    eax = edx;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0011EE4Fu); RECOMP_ABI_CALL(0x000FEF0Eu, sub_000FEF0E); /* call 0x000FEF0E */

loc_0011EE4F: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x18)); /* fmul dword ptr [esp + 0x18] */
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x14)); /* fmul dword ptr [esp + 0x14] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    PUSH32(esp, 0x0011EE6Fu); RECOMP_ABI_CALL(0x002A9354u, sub_002A9354); /* call 0x002A9354 */

loc_0011EE6F: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0011EE80
 * Original: 0x0011EE80 - 0x0011EF13 (147 bytes, 39 insns)
 * CC: cdecl, 2 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0011EE80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0011EE80: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x18);
    _fb = (uint32_t)(0xE0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xE0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    MEM32(esp + 0xC) = 0;
    MEM32(esp + 0x10) = 0;
    MEM32(esp + 0x14) = 0;
    MEM32(esp + 0x18) = 0x3F800000;
    PUSH32(esp, 0x0011EEB9u); RECOMP_ABI_CALL(0x000FF894u, sub_000FF894); /* call 0x000FF894 */

loc_0011EEB9: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x49F158)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x49f158] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    eax = MEM32(esp + 0x14);
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0011EEDE; /* jp: parity */

loc_0011EECE: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = ecx;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_0011EEDE: ;
    fp_push(MEMF(0x496454)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(esp + 0xC)); /* fdiv dword ptr [esp + 0xc] */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x18)); /* fmul dword ptr [esp + 0x18] */
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x18)); /* fmul dword ptr [esp + 0x18] */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x18)); /* fmul dword ptr [esp + 0x18] */
    { double _t = fp_top(); fp_top() = g_fp_stack[(g_fp_top + 2) & 7]; g_fp_stack[(g_fp_top + 2) & 7] = _t; } /* fxch st(2) */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0011EF20
 * Original: 0x0011EF20 - 0x0011EF43 (35 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011EF20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0011EF20: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011EF42; /* je: equal / zero */

loc_0011EF28: ;
    SET_LO8(ecx, MEM8(eax + 0x70));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011EF42; /* jne: not equal / not zero */

loc_0011EF2F: ;
    SET_LO8(ecx, MEM8(eax + 0x74));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011EF42; /* jne: not equal / not zero */

loc_0011EF36: ;
    ecx = MEM32(0x510B74);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0011EF42u); RECOMP_ABI_CALL(0x0017A4D0u, sub_0017A4D0); /* call 0x0017A4D0 */

loc_0011EF42: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0011F010
 * Original: 0x0011F010 - 0x0011F01B (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011F010(void)
{

loc_0011F010: ;
    eax = ZX8(MEM8(esp + 4));
    MEM32(0x50EA58) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0011F590
 * Original: 0x0011F590 - 0x0011F704 (372 bytes, 98 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011F590(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0011F590: ;
    _fb = (uint32_t)(0xD8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xD8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    eax = esi + 0x190;
    PUSH32(esp, eax);
    ecx = esi + 0x180;
    PUSH32(esp, ecx);
    edx = esp + 0x6C;
    PUSH32(esp, edx);
    MEM32(esp + 0x34) = 0x7F7FFFFF;
    MEM32(esp + 0x30) = 0x7F7FFFFF;
    MEM32(esp + 0x2C) = 0x7F7FFFFF;
    MEM32(esp + 0x24) = 0xFF7FFFFFu;
    MEM32(esp + 0x20) = 0xFF7FFFFFu;
    MEM32(esp + 0x1C) = 0xFF7FFFFFu;
    PUSH32(esp, 0x0011F5E3u); RECOMP_ABI_CALL(0x00125960u, sub_00125960); /* call 0x00125960 */

loc_0011F5E3: ;
    edi = MEM32(esp + 0x4C);
    eax = esp + 0x50;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x30) = eax;
    ecx = esp + 0x6C;
    ebp = 8;
    goto loc_0011F600;

    /* nop */

loc_0011F600: ;
    fp_push(MEMF(esi + 0x160)); /* fld float */
    MEM32(esp + 0x50) = edi;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + -8)); /* fsub dword ptr [ecx - 8] */
    fp_push(MEMF(esi + 0x164)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + -4)); /* fsub dword ptr [ecx - 4] */
    fp_push(MEMF(esi + 0x168)); /* fld float */
    MEM8(0x50FF48) = 1;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx)); /* fsub dword ptr [ecx] */
    MEMF(esp + 0x5C) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x5C);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEM32(esp + 0x3C) = edx;
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x34);
    MEM32(esp + 0x44) = eax;
    eax = MEM32(esp + 0x3C);
    MEMF(esp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x38);
    MEM32(esp + 0x48) = edx;
    MEM32(esp + 0x4C) = eax;
    edx = MEM32(esp + 0x30);
    xmm1 = XMM_SCALAR(MEMF(edx)); /* movss */
    XMM_LOAD_HIGH(xmm1, edx + 4); /* movhps */
    xmm2 = xmm1; /* movaps */
    xmm1 = XMM_MUL(xmm1, xmm2); /* mulps */
    xmm0 = xmm1; /* movaps */
    xmm0 = XMM_SHUFFLE(xmm0, xmm0, 0x32); /* shufps */
    xmm1 = XMM_ADD(xmm1, xmm0); /* addps */
    xmm0 = XMM_SHUFFLE(xmm0, xmm0, 0x32); /* shufps */
    xmm1 = XMM_ADD(xmm1, xmm0); /* addps */
    xmm1.f[0] = sqrtf(xmm1.f[0]); /* sqrtss */
    MEMF(esp + 0xC) = xmm1.f[0]; /* movss */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x28)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x28] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0011F697; /* jp: parity */

loc_0011F68F: ;
    edx = MEM32(esp + 0xC);
    MEM32(esp + 0x28) = edx;

loc_0011F697: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x18)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x18] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0011F6AE; /* jne: not equal / not zero */

loc_0011F6A6: ;
    eax = MEM32(esp + 0xC);
    MEM32(esp + 0x18) = eax;

loc_0011F6AE: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0011F600; /* jne: not equal / not zero */

loc_0011F6B8: ;
    edx = MEM32(esp + 0x20);
    eax = MEM32(esp + 0x24);
    ecx = esi + 0x1A0;
    MEM32(ecx) = edx;
    edx = MEM32(esp + 0x28);
    MEM32(ecx + 4) = eax;
    eax = MEM32(esp + 0x2C);
    MEM32(ecx + 8) = edx;
    edx = MEM32(esp + 0x14);
    MEM32(ecx + 0xC) = eax;
    ecx = MEM32(esp + 0x10);
    eax = MEM32(esp + 0x18);
    _fb = (uint32_t)(0x1B0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x1B0;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = ecx;
    ecx = MEM32(esp + 0x1C);
    MEM32(esi + 4) = edx;
    MEM32(esi + 8) = eax;
    POP32(esp, edi);
    MEM32(esi + 0xC) = ecx;
    POP32(esp, esi);
    POP32(esp, ebp);
    _fb = (uint32_t)(0xD8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xD8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0011F710
 * Original: 0x0011F710 - 0x0011F711 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011F710(void)
{

loc_0011F710: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0011F720
 * Original: 0x0011F720 - 0x0011F930 (528 bytes, 141 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0011F720(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0011F720: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x64;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x160);
    ecx = MEM32(esi + 0x164);
    edx = MEM32(esi + 0x168);
    PUSH32(esp, edi);
    MEM32(esp + 0x20) = eax;
    eax = esp + 0x10;
    MEM32(esp + 0x24) = ecx;
    PUSH32(esp, eax);
    ecx = esp + 0x24;
    MEM32(esp + 0x2C) = edx;
    PUSH32(esp, ecx);
    edx = esp + 0x38;
    PUSH32(esp, edx);
    MEM32(esp + 0x1C) = 0;
    MEM32(esp + 0x20) = 0xBF800000u;
    MEM32(esp + 0x24) = 0;
    MEM32(esp + 0x28) = 0xBF800000u;
    MEM32(esp + 0x38) = 0x3F800000;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0011F788u); RECOMP_ABI_CALL(0x00100CFEu, sub_00100CFE); /* call 0x00100CFE */

loc_0011F788: ;
    eax = MEM32(esi);
    ecx = esi;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x0011F793u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0011F790u); } /* indirect call */
    }

loc_0011F793: ;
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0011F804; /* jle: less or equal (signed <=) */

loc_0011F79B: ;
    goto loc_0011F7A0;

    /* nop */

loc_0011F7A0: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0011F7A7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0011F7A4u); } /* indirect call */
    }

loc_0011F7A7: ;
    eax = MEM32(eax + 4);
    ecx = MEM32(eax + 8);
    edx = MEM32(eax + 0xC);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(edx + ecx * 4);
    ecx = MEM32(eax + 0xAC);
    edx = MEM32(0x5CADB4);
    _fa = (uint32_t)(MEM8(edx + ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx + ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011F7E4; /* jne: not equal / not zero */

loc_0011F7C7: ;
    _fa = (uint32_t)(MEM32(eax + 0x48)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x800000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + 0x48), 0x800000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0011F7E4; /* je: equal / zero */

loc_0011F7D0: ;
    MEM8(0x50FF48) = 1;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(eax + 0xDC) = 1;
    goto loc_0011F7F5;

loc_0011F7E4: ;
    MEM8(0x50FF48) = 1;
    MEM32(eax + 0xDC) = 0;

loc_0011F7F5: ;
    eax = MEM32(esi);
    ecx = esi;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x0011F7FDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0011F7FAu); } /* indirect call */
    }

loc_0011F7FD: ;
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ecx) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0011F7A0; /* jl: less (signed <) */

loc_0011F804: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    MEM32(esi + 0x2D0) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_0011F909; /* je: equal / zero */

loc_0011F814: ;
    fp_push(MEMF(0x4AB234)); /* fld float */
    edx = 0x7F7FFFFF;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esi + 0x180)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esi + 0x180] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0011F845; /* jne: not equal / not zero */

loc_0011F82C: ;
    fp_push(MEMF(0x4AB234)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esi + 0x190)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esi + 0x190] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0011F845; /* jp: parity */

loc_0011F83F: ;
    MEM32(esi + 0x180) = edx;

loc_0011F845: ;
    fp_push(MEMF(0x4AB230)); /* fld float */
    ecx = 0xFF7FFFFFu;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esi + 0x180)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esi + 0x180] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0011F876; /* jne: not equal / not zero */

loc_0011F85D: ;
    fp_push(MEMF(0x4AB230)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esi + 0x190)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esi + 0x190] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0011F876; /* jp: parity */

loc_0011F870: ;
    MEM32(esi + 0x190) = ecx;

loc_0011F876: ;
    fp_push(MEMF(0x4AB234)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esi + 0x184)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esi + 0x184] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0011F8A2; /* jne: not equal / not zero */

loc_0011F889: ;
    fp_push(MEMF(0x4AB234)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esi + 0x194)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esi + 0x194] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0011F8A2; /* jp: parity */

loc_0011F89C: ;
    MEM32(esi + 0x184) = edx;

loc_0011F8A2: ;
    fp_push(MEMF(0x4AB230)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esi + 0x184)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esi + 0x184] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0011F8CE; /* jne: not equal / not zero */

loc_0011F8B5: ;
    fp_push(MEMF(0x4AB230)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esi + 0x194)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esi + 0x194] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0011F8CE; /* jp: parity */

loc_0011F8C8: ;
    MEM32(esi + 0x194) = ecx;

loc_0011F8CE: ;
    fp_push(MEMD(0x4AB228)); /* fld double */
    edx = MEM32(esp + 0x28);
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    eax = MEM32(esp + 0x28);
    MEMF(esp + 0xC) = (float)fp_top(); /* fst */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMF(0x50EA5C) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(0x50EA60) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esi + 0x188) = edx;
    MEM32(esi + 0x198) = eax;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0011F909: ;
    MEM32(0x50EA5C) = 0;
    MEM32(0x50EA60) = 0;
    POP32(esp, edi);
    MEM32(esi + 0x188) = eax;
    MEM32(esi + 0x198) = eax;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0011F930
 * Original: 0x0011F930 - 0x0011F955 (37 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011F930(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0011F930: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0x14320;
    PUSH32(esp, 0x0011F93Eu); RECOMP_ABI_CALL(0x001EBF40u, sub_001EBF40); /* call 0x001EBF40 */

loc_0011F93E: ;
    ecx = esi + 0x14348;
    PUSH32(esp, 0x0011F949u); RECOMP_ABI_CALL(0x001EBF40u, sub_001EBF40); /* call 0x001EBF40 */

loc_0011F949: ;
    ecx = esi + 0x14370;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_001EBF40(); return; /* tail jmp 0x001EBF40 */

}

/**
 * sub_0011F9D0
 * Original: 0x0011F9D0 - 0x0011FAF8 (296 bytes, 77 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011F9D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0011F9D0: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0011F9DBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0011F9D9u); } /* indirect call */
    }

loc_0011F9DB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011FAF6; /* je: equal / zero */

loc_0011F9E3: ;
    _fa = (uint32_t)(MEM32(esi + 0x48)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x400000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(esi + 0x48), 0x400000 (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0011FAF6; /* jne: not equal / not zero */

loc_0011F9F0: ;
    ecx = MEM32(esi + 0xAC);
    edx = MEM32(0x5CADB4);
    _fa = (uint32_t)(MEM8(edx + ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx + ecx), 0 (8-bit) */
    PUSH32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_0011FA3A; /* je: equal / zero */

loc_0011FA03: ;
    ebx = 1;
    MEM8(0x50FF48) = LO8(ebx);
    _fa = (uint32_t)(MEM32(esi + 0xD4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xD4), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011FAF5; /* je: equal / zero */

loc_0011FA1A: ;
    PUSH32(esp, 0x0011FA1Fu); RECOMP_ABI_CALL(0x0001691Au, sub_0001691A); /* call 0x0001691A */

loc_0011FA1F: ;
    PUSH32(esp, esi);
    ecx = eax + 0x2F4;
    PUSH32(esp, 0x0011FA2Bu); RECOMP_ABI_CALL(0x0013EBB0u, sub_0013EBB0); /* call 0x0013EBB0 */

loc_0011FA2B: ;
    MEM8(0x50FF48) = LO8(ebx);
    MEM32(esi + 0xD4) = ebx;
    POP32(esp, ebx);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0011FA3A: ;
    ecx = esi;
    PUSH32(esp, 0x0011FA41u); RECOMP_ABI_CALL(0x001478C0u, sub_001478C0); /* call 0x001478C0 */

loc_0011FA41: ;
    eax = MEM32(esi + 0xAC);
    ecx = MEM32(0x5CABA4);
    edx = (uint32_t)(int32_t)SMEM8(eax + ecx);
    MEM32(esi + 0xC4) = edx;
    ebx = 1;
    MEM8(0x50FF48) = LO8(ebx);
    _fa = (uint32_t)(MEM32(esi + 0xD0)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xD0), 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011FAAF; /* je: equal / zero */

loc_0011FA6B: ;
    MEM8(0x50FF48) = LO8(ebx);
    _fa = (uint32_t)(MEM32(esi + 0xD0)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xD0), 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011FAAF; /* je: equal / zero */

loc_0011FA7A: ;
    _fa = (uint32_t)(MEM32(esi + 0x48)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x800000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(esi + 0x48), 0x800000 (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0011FAAF; /* jne: not equal / not zero */

loc_0011FA83: ;
    MEM8(0x50FF48) = LO8(ebx);
    _fa = (uint32_t)(MEM32(esi + 0xD4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xD4), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0011FAF5; /* je: equal / zero */

loc_0011FA91: ;
    PUSH32(esp, 0x0011FA96u); RECOMP_ABI_CALL(0x0001691Au, sub_0001691A); /* call 0x0001691A */

loc_0011FA96: ;
    PUSH32(esp, esi);
    ecx = eax + 0x2F4;
    PUSH32(esp, 0x0011FAA2u); RECOMP_ABI_CALL(0x0013EBB0u, sub_0013EBB0); /* call 0x0013EBB0 */

loc_0011FAA2: ;
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 3);
    PUSH32(esp, 0x0011FAACu); RECOMP_ABI_CALL(0x0011E770u, sub_0011E770); /* call 0x0011E770 */

loc_0011FAAC: ;
    POP32(esp, ebx);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0011FAAF: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0011FAB5u); RECOMP_ABI_CALL(0x0001691Au, sub_0001691A); /* call 0x0001691A */

loc_0011FAB5: ;
    eax = MEM32(eax + 0x30C);
    ebp = eax + 1;
    PUSH32(esp, 0x0011FAC3u); RECOMP_ABI_CALL(0x0001691Au, sub_0001691A); /* call 0x0001691A */

loc_0011FAC3: ;
    MEM32(eax + 0x30C) = ebp;
    MEM8(0x50FF48) = LO8(ebx);
    _fa = (uint32_t)(MEM32(esi + 0xD4)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xD4), 3 (32-bit) */
    POP32(esp, ebp);
    if (CMP_EQ(_fa, _fb)) goto loc_0011FAF5; /* je: equal / zero */

loc_0011FAD9: ;
    PUSH32(esp, 0x0011FADEu); RECOMP_ABI_CALL(0x0001691Au, sub_0001691A); /* call 0x0001691A */

loc_0011FADE: ;
    PUSH32(esp, esi);
    ecx = eax + 0x2F4;
    PUSH32(esp, 0x0011FAEAu); RECOMP_ABI_CALL(0x0013EB60u, sub_0013EB60); /* call 0x0013EB60 */

loc_0011FAEA: ;
    PUSH32(esp, 3);
    ecx = esi;
    PUSH32(esp, 3);
    PUSH32(esp, 0x0011FAF5u); RECOMP_ABI_CALL(0x0011E770u, sub_0011E770); /* call 0x0011E770 */

loc_0011FAF5: ;
    POP32(esp, ebx);

loc_0011FAF6: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0011FEE9
 * Original: 0x0011FEE9 - 0x0011FF5B (114 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0011FEE9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0011FEE9: ;
    ecx = eax;
    PUSH32(esp, 0x0011FEF0u); RECOMP_ABI_CALL(0x0012F5A0u, sub_0012F5A0); /* call 0x0012F5A0 */

loc_0011FEF0: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x8F);
    PUSH32(esp, 0x0011FEFCu); RECOMP_ABI_CALL(0x0012F6B0u, sub_0012F6B0); /* call 0x0012F6B0 */

loc_0011FEFC: ;
    ecx = eax;
    PUSH32(esp, 0x0011FF03u); RECOMP_ABI_CALL(0x0012F5A0u, sub_0012F5A0); /* call 0x0012F5A0 */

loc_0011FF03: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x40);
    PUSH32(esp, 0x0011FF0Cu); RECOMP_ABI_CALL(0x0012F6B0u, sub_0012F6B0); /* call 0x0012F6B0 */

loc_0011FF0C: ;
    ecx = eax;
    PUSH32(esp, 0x0011FF13u); RECOMP_ABI_CALL(0x0012F5A0u, sub_0012F5A0); /* call 0x0012F5A0 */

loc_0011FF13: ;
    ecx = MEM32(0x63AFB4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011FF28; /* jne: not equal / not zero */

loc_0011FF1D: ;
    ecx = 0x63AFB8;
    MEM32(0x63AFB4) = ecx;

loc_0011FF28: ;
    eax = MEM32(0x63A3E8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0011FF33u); RECOMP_ABI_CALL(0x0013B2F0u, sub_0013B2F0); /* call 0x0013B2F0 */

loc_0011FF33: ;
    ecx = MEM32(0x63AFB4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0011FF48; /* jne: not equal / not zero */

loc_0011FF3D: ;
    ecx = 0x63AFB8;
    MEM32(0x63AFB4) = ecx;

loc_0011FF48: ;
    edx = MEM32(0x63A45C);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0011FF54u); RECOMP_ABI_CALL(0x0013B2F0u, sub_0013B2F0); /* call 0x0013B2F0 */

loc_0011FF54: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00120100
 * Original: 0x00120100 - 0x00120109 (9 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00120100(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00120100: ;
    ecx = MEM32(esp + 4);
    g_seh_ebp = ebp; sub_0013ED90(); return; /* tail jmp 0x0013ED90 */

}

/**
 * sub_00120170
 * Original: 0x00120170 - 0x00120171 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00120170(void)
{

loc_00120170: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00120180
 * Original: 0x00120180 - 0x00120183 (3 bytes, 1 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00120180(void)
{

loc_00120180: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00120190
 * Original: 0x00120190 - 0x001201F6 (102 bytes, 40 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00120190(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00120190: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x0012019Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00120198u); } /* indirect call */
    }

loc_0012019B: ;
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001201F1; /* jle: less or equal (signed <=) */

loc_001201A3: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10);

loc_001201A8: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x001201AFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001201ACu); } /* indirect call */
    }

loc_001201AF: ;
    eax = MEM32(eax + 4);
    ecx = MEM32(eax + 8);
    edx = MEM32(eax + 0xC);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(edx + ecx * 4);
    _fa = (uint32_t)(MEM32(eax + 0xAC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xAC), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001201E1; /* jne: not equal / not zero */

loc_001201C5: ;
    ecx = eax + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001201E1; /* je: equal / zero */

loc_001201CC: ;
    PUSH32(esp, 0x001201D1u); RECOMP_ABI_CALL(0x0014CDB0u, sub_0014CDB0); /* call 0x0014CDB0 */

loc_001201D1: ;
    ecx = MEM32(eax + 0x340);
    _fb = (uint32_t)(0x340) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x340;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ecx & 0xFFFFFFFDu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax) = ecx;

loc_001201E1: ;
    eax = MEM32(esi);
    ecx = esi;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x001201E9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001201E6u); } /* indirect call */
    }

loc_001201E9: ;
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ecx) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001201A8; /* jl: less (signed <) */

loc_001201F0: ;
    POP32(esp, ebx);

loc_001201F1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00120200
 * Original: 0x00120200 - 0x0012024C (76 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00120200(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00120200: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x0012020Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00120207u); } /* indirect call */
    }

loc_0012020A: ;
    ebx = eax;
    ecx = MEM32(ebx + 4);
    eax = MEM32(ecx);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00120248; /* jle: less or equal (signed <=) */

loc_00120217: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0012021Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0012021Bu); } /* indirect call */
    }

loc_0012021E: ;
    eax = MEM32(eax + 4);
    ecx = MEM32(eax + 8);
    edx = MEM32(eax + 0xC);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(edx + ecx * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00120235; /* je: equal / zero */

loc_00120230: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00120237;

loc_00120235: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00120237: ;
    MEM32(eax + 0xC) = 0;
    eax = MEM32(ebx + 4);
    ecx = MEM32(eax);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00120217; /* jl: less (signed <) */

loc_00120248: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001203D0
 * Original: 0x001203D0 - 0x001203D7 (7 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001203D0(void)
{

loc_001203D0: ;
    eax = MEM32(ecx + 0xC);
    eax = ecx + eax * 4;
    esp += 4; return; /* ret */

}

/**
 * sub_001203E0
 * Original: 0x001203E0 - 0x001203E3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001203E0(void)
{

loc_001203E0: ;
    eax = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_001203F0
 * Original: 0x001203F0 - 0x001203F7 (7 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001203F0(void)
{

loc_001203F0: ;
    eax = MEM32(ecx + 0x50);
    eax = ecx + eax * 4;
    esp += 4; return; /* ret */

}

/**
 * sub_00120400
 * Original: 0x00120400 - 0x0012041D (29 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00120400(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00120400: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x2000);
    esi = ecx;
    PUSH32(esp, 0x0012040Du); RECOMP_ABI_CALL(0x000EBFBFu, sub_000EBFBF); /* call 0x000EBFBF */

loc_0012040D: ;
    MEM32(esi) = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 4) = 0;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00120420
 * Original: 0x00120420 - 0x00120428 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00120420(void)
{

loc_00120420: ;
    MEM32(ecx + 4) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_00120430
 * Original: 0x00120430 - 0x00120438 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00120430(void)
{

loc_00120430: ;
    MEM32(ecx + 4) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_00120500
 * Original: 0x00120500 - 0x001205AC (172 bytes, 69 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00120500(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00120500: ;
    PUSH32(esp, ebp);
    ebp = ecx;
    eax = MEM32(ebp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001205A8; /* je: equal / zero */

loc_0012050E: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00120525; /* je: equal / zero */

loc_00120518: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00120525; /* je: equal / zero */

loc_0012051C: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00120525; /* je: equal / zero */

loc_00120521: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    goto loc_00120527;

loc_00120525: ;
    SET_LO8(eax, 1);

loc_00120527: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM8(0x50FF48) = LO8(eax);
    if (CMP_NE(_fa, _fb)) goto loc_00120551; /* jne: not equal / not zero */

loc_00120530: ;
    PUSH32(esp, 0xDE);
    PUSH32(esp, 0x4AB3C8);
    PUSH32(esp, 0x4AB394);
    PUSH32(esp, 0x4AB3F8);
    PUSH32(esp, 0x49657C);
    PUSH32(esp, 0x0012054Eu); RECOMP_ABI_CALL(0x0014E700u, sub_0014E700); /* call 0x0014E700 */

loc_0012054E: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00120551: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 1 (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_00120586; /* je: equal / zero */

loc_00120558: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00120586; /* je: equal / zero */

loc_0012055C: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001205A5; /* jne: not equal / not zero */

loc_00120561: ;
    esi = MEM32(ebp + 4);
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_001205A5; /* js: sign (negative) */

loc_00120567: ;
    edi = MEM32(esp + 0x18);
    goto loc_00120570;

    /* nop */

loc_00120570: ;
    eax = MEM32(ebp);
    ecx = MEM32(eax + esi * 8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    { uint32_t _icall_target = edi; PUSH32(esp, 0x00120579u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00120577u); } /* indirect call */
    }

loc_00120579: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas >= 0)) goto loc_00120570; /* jns: not sign (positive) */

loc_0012057F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

loc_00120586: ;
    edi = MEM32(ebp + 4);
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esi = 0;
    if ((_fas < 0)) goto loc_001205A5; /* js: sign (negative) */

loc_00120591: ;
    edx = MEM32(ebp);
    eax = MEM32(edx + esi * 8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(esp + 0x1C); PUSH32(esp, 0x0012059Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00120598u); } /* indirect call */
    }

loc_0012059C: ;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ebx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00120591; /* jle: less or equal (signed <=) */

loc_001205A5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_001205A8: ;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00120581
 * Original: 0x00120581 - 0x001205AC (43 bytes, 20 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00120581(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00120581: ;
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

loc_00120591: ;
    edx = MEM32(ebp);
    eax = MEM32(edx + esi * 8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(esp + 0x1C); PUSH32(esp, 0x0012059Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00120598u); } /* indirect call */
    }

loc_0012059C: ;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ebx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00120591; /* jle: less or equal (signed <=) */

loc_001205A5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001205B0
 * Original: 0x001205B0 - 0x001205CD (29 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001205B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001205B0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x2000);
    esi = ecx;
    PUSH32(esp, 0x001205BDu); RECOMP_ABI_CALL(0x000EBFBFu, sub_000EBFBF); /* call 0x000EBFBF */

loc_001205BD: ;
    MEM32(esi) = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 4) = 0;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001205D0
 * Original: 0x001205D0 - 0x001205D8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001205D0(void)
{

loc_001205D0: ;
    MEM32(ecx + 4) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_001205E0
 * Original: 0x001205E0 - 0x001205E8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001205E0(void)
{

loc_001205E0: ;
    MEM32(ecx + 4) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_00120760
 * Original: 0x00120760 - 0x0012077D (29 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00120760(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00120760: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x2000);
    esi = ecx;
    PUSH32(esp, 0x0012076Du); RECOMP_ABI_CALL(0x000EBFBFu, sub_000EBFBF); /* call 0x000EBFBF */

loc_0012076D: ;
    MEM32(esi) = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 4) = 0;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00120780
 * Original: 0x00120780 - 0x00120788 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00120780(void)
{

loc_00120780: ;
    MEM32(ecx + 4) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_00120870
 * Original: 0x00120870 - 0x00120878 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00120870(void)
{

loc_00120870: ;
    MEM32(ecx + 4) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_00120902
 * Original: 0x00120902 - 0x0012092C (42 bytes, 19 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00120902(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00120902: ;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

loc_00120911: ;
    edx = MEM32(ebp);
    eax = MEM32(edx + esi * 8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(esp + 0x1C); PUSH32(esp, 0x0012091Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00120918u); } /* indirect call */
    }

loc_0012091C: ;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ebx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00120911; /* jle: less or equal (signed <=) */

loc_00120925: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00120930
 * Original: 0x00120930 - 0x0012095B (43 bytes, 20 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00120930(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00120930: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00120957; /* je: equal / zero */

loc_0012093C: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);

loc_00120941: ;
    ecx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    { uint32_t _icall_target = edi; PUSH32(esp, 0x00120946u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00120944u); } /* indirect call */
    }

loc_00120946: ;
    eax = MEM32(esi + 8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00120956; /* je: equal / zero */

loc_00120950: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00120941; /* jne: not equal / not zero */

loc_00120956: ;
    POP32(esp, edi);

loc_00120957: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00120960
 * Original: 0x00120960 - 0x001209AA (74 bytes, 26 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00120960(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00120960: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001209A6; /* je: equal / zero */

loc_0012096A: ;
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001209A6; /* je: equal / zero */

loc_00120971: ;
    edx = MEM32(eax + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00120982; /* je: equal / zero */

loc_00120978: ;
    eax = MEM32(eax + 8);
    edx = MEM32(eax + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00120978; /* jne: not equal / not zero */

loc_00120982: ;
    edx = MEM32(ecx + 0x18);
    MEM32(eax + 8) = edx;
    edx = MEM32(ecx + 0x18);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00120992; /* je: equal / zero */

loc_0012098F: ;
    MEM32(edx + 4) = eax;

loc_00120992: ;
    eax = MEM32(esi + 0x10);
    MEM32(ecx + 0x18) = eax;
    MEM32(esi + 0x10) = 0;
    MEM32(esi + 4) = 0;

loc_001209A6: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00120988
 * Original: 0x00120988 - 0x001209AA (34 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00120988(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00120988: ;
    edx = MEM32(ecx + 0x18);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00120992; /* je: equal / zero */

loc_0012098F: ;
    MEM32(edx + 4) = eax;

loc_00120992: ;
    eax = MEM32(esi + 0x10);
    MEM32(ecx + 0x18) = eax;
    MEM32(esi + 0x10) = 0;
    MEM32(esi + 4) = 0;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001209B0
 * Original: 0x001209B0 - 0x001209DB (43 bytes, 20 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001209B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001209B0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001209D7; /* je: equal / zero */

loc_001209BC: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);

loc_001209C1: ;
    ecx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    { uint32_t _icall_target = edi; PUSH32(esp, 0x001209C6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001209C4u); } /* indirect call */
    }

loc_001209C6: ;
    eax = MEM32(esi + 8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001209D6; /* je: equal / zero */

loc_001209D0: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001209C1; /* jne: not equal / not zero */

loc_001209D6: ;
    POP32(esp, edi);

loc_001209D7: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001209E0
 * Original: 0x001209E0 - 0x001209E8 (8 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001209E0(void)
{

loc_001209E0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001209E6u); RECOMP_ABI_CALL(0x0011E130u, sub_0011E130); /* call 0x0011E130 */

loc_001209E6: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001209F0
 * Original: 0x001209F0 - 0x001209F8 (8 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001209F0(void)
{

loc_001209F0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001209F7u); RECOMP_ABI_CALL(0x000FF5D8u, sub_000FF5D8); /* call 0x000FF5D8 */

loc_001209F7: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00120A00
 * Original: 0x00120A00 - 0x00120A16 (22 bytes, 8 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00120A00(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00120A00: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00120A10u); RECOMP_ABI_CALL(0x0011E1A0u, sub_0011E1A0); /* call 0x0011E1A0 */

loc_00120A10: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00120A20
 * Original: 0x00120A20 - 0x00120A36 (22 bytes, 8 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00120A20(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00120A20: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00120A30u); RECOMP_ABI_CALL(0x0011E210u, sub_0011E210); /* call 0x0011E210 */

loc_00120A30: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00120B30
 * Original: 0x00120B30 - 0x00120B4B (27 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00120B30(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00120B30: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 1);
    PUSH32(esp, 0x50FA90);
    PUSH32(esp, 0x12);
    MEM32(0x50FA9C) = eax;
    PUSH32(esp, 0x00120B47u); RECOMP_ABI_CALL(0x00118440u, sub_00118440); /* call 0x00118440 */

loc_00120B47: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00120E05
 * Original: 0x00120E05 - 0x00120E4A (69 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00120E05(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00120E05: ;
    PUSH32(esp, 0x00120E0Au); RECOMP_ABI_CALL(0x00102CE0u, sub_00102CE0); /* call 0x00102CE0 */

loc_00120E0A: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00120E10u); RECOMP_ABI_CALL(0x00102D00u, sub_00102D00); /* call 0x00102D00 */

loc_00120E10: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(0x50FF48) = 1;
    PUSH32(esp, 0x00120E1Fu); RECOMP_ABI_CALL(0x00102CA0u, sub_00102CA0); /* call 0x00102CA0 */

loc_00120E1F: ;
    ecx = MEM32(esp + 0x18);
    MEM32(esi + 0x143B4) = 1;
    POP32(esp, edi);
    MEM32(esi + 0x143A0) = ebx;
    MEM32(esi + 0x143A4) = ebx;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00120E50
 * Original: 0x00120E50 - 0x00120E69 (25 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00120E50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00120E50: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + 0x2E0) = eax;
    MEM32(ecx + 0x2E8) = eax;
    _fb = (uint32_t)(0x2F4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x2F4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_0013EC00(); return; /* tail jmp 0x0013EC00 */

}

/**
 * sub_00120E70
 * Original: 0x00120E70 - 0x00121169 (761 bytes, 220 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00120E70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00120E70: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00120E78u); RECOMP_ABI_CALL(0x00102CE0u, sub_00102CE0); /* call 0x00102CE0 */

loc_00120E78: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x00120E7Fu); RECOMP_ABI_CALL(0x00102D00u, sub_00102D00); /* call 0x00102D00 */

loc_00120E7F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(0x50FF48) = 1;
    PUSH32(esp, 0x00120E8Eu); RECOMP_ABI_CALL(0x00102CA0u, sub_00102CA0); /* call 0x00102CA0 */

loc_00120E8E: ;
    eax = MEM32(esi + 0x143A0);
    MEM32(esi + 0x143A8) = 1;
    ecx = MEM32(0x63AFB4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    eax = MEM32(eax * 4 + 0x4AAEB0);
    if (CMP_NE(_fa, _fb)) goto loc_00120EBA; /* jne: not equal / not zero */

loc_00120EAF: ;
    ecx = 0x63AFB8;
    MEM32(0x63AFB4) = ecx;

loc_00120EBA: ;
    edx = MEM32(eax * 4 + 0x63A218);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00120EC7u); RECOMP_ABI_CALL(0x0013B2F0u, sub_0013B2F0); /* call 0x0013B2F0 */

loc_00120EC7: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x95);
    PUSH32(esp, 0x00120ED3u); RECOMP_ABI_CALL(0x0012F6B0u, sub_0012F6B0); /* call 0x0012F6B0 */

loc_00120ED3: ;
    ecx = eax;
    PUSH32(esp, 0x00120EDAu); RECOMP_ABI_CALL(0x0012F5A0u, sub_0012F5A0); /* call 0x0012F5A0 */

loc_00120EDA: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x40);
    PUSH32(esp, 0x00120EE3u); RECOMP_ABI_CALL(0x0012F6B0u, sub_0012F6B0); /* call 0x0012F6B0 */

loc_00120EE3: ;
    ecx = eax;
    PUSH32(esp, 0x00120EEAu); RECOMP_ABI_CALL(0x0012F5A0u, sub_0012F5A0); /* call 0x0012F5A0 */

loc_00120EEA: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x8F);
    PUSH32(esp, 0x00120EF6u); RECOMP_ABI_CALL(0x0012F6B0u, sub_0012F6B0); /* call 0x0012F6B0 */

loc_00120EF6: ;
    ecx = eax;
    PUSH32(esp, 0x00120EFDu); RECOMP_ABI_CALL(0x0012F5A0u, sub_0012F5A0); /* call 0x0012F5A0 */

loc_00120EFD: ;
    PUSH32(esp, 0x203);
    PUSH32(esp, 0x39);
    PUSH32(esp, 0x00120F09u); RECOMP_ABI_CALL(0x0012F6B0u, sub_0012F6B0); /* call 0x0012F6B0 */

loc_00120F09: ;
    ecx = eax;
    PUSH32(esp, 0x00120F10u); RECOMP_ABI_CALL(0x0012F5A0u, sub_0012F5A0); /* call 0x0012F5A0 */

loc_00120F10: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x90);
    PUSH32(esp, 0x00120F1Cu); RECOMP_ABI_CALL(0x0012F6B0u, sub_0012F6B0); /* call 0x0012F6B0 */

loc_00120F1C: ;
    ecx = eax;
    PUSH32(esp, 0x00120F23u); RECOMP_ABI_CALL(0x0012F5A0u, sub_0012F5A0); /* call 0x0012F5A0 */

loc_00120F23: ;
    PUSH32(esp, 0x901);
    PUSH32(esp, 0x93);
    PUSH32(esp, 0x00120F32u); RECOMP_ABI_CALL(0x0012F6B0u, sub_0012F6B0); /* call 0x0012F6B0 */

loc_00120F32: ;
    ecx = eax;
    PUSH32(esp, 0x00120F39u); RECOMP_ABI_CALL(0x0012F5A0u, sub_0012F5A0); /* call 0x0012F5A0 */

loc_00120F39: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x67);
    PUSH32(esp, 0x00120F42u); RECOMP_ABI_CALL(0x0012F6B0u, sub_0012F6B0); /* call 0x0012F6B0 */

loc_00120F42: ;
    ecx = eax;
    PUSH32(esp, 0x00120F49u); RECOMP_ABI_CALL(0x0012F5A0u, sub_0012F5A0); /* call 0x0012F5A0 */

loc_00120F49: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x3C);
    PUSH32(esp, 0x00120F52u); RECOMP_ABI_CALL(0x0012F6B0u, sub_0012F6B0); /* call 0x0012F6B0 */

loc_00120F52: ;
    ecx = eax;
    PUSH32(esp, 0x00120F59u); RECOMP_ABI_CALL(0x0012F5A0u, sub_0012F5A0); /* call 0x0012F5A0 */

loc_00120F59: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x3D);
    PUSH32(esp, 0x00120F62u); RECOMP_ABI_CALL(0x0012F6B0u, sub_0012F6B0); /* call 0x0012F6B0 */

loc_00120F62: ;
    ecx = eax;
    PUSH32(esp, 0x00120F69u); RECOMP_ABI_CALL(0x0012F5A0u, sub_0012F5A0); /* call 0x0012F5A0 */

loc_00120F69: ;
    PUSH32(esp, 0x204);
    PUSH32(esp, 0x3A);
    PUSH32(esp, 0x00120F75u); RECOMP_ABI_CALL(0x0012F6B0u, sub_0012F6B0); /* call 0x0012F6B0 */

loc_00120F75: ;
    ecx = eax;
    PUSH32(esp, 0x00120F7Cu); RECOMP_ABI_CALL(0x0012F5A0u, sub_0012F5A0); /* call 0x0012F5A0 */

loc_00120F7C: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x3B);
    PUSH32(esp, 0x00120F85u); RECOMP_ABI_CALL(0x0012F6B0u, sub_0012F6B0); /* call 0x0012F6B0 */

loc_00120F85: ;
    ecx = eax;
    PUSH32(esp, 0x00120F8Cu); RECOMP_ABI_CALL(0x0012F5A0u, sub_0012F5A0); /* call 0x0012F5A0 */

loc_00120F8C: ;
    PUSH32(esp, 0x302);
    PUSH32(esp, 0x3E);
    PUSH32(esp, 0x00120F98u); RECOMP_ABI_CALL(0x0012F6B0u, sub_0012F6B0); /* call 0x0012F6B0 */

loc_00120F98: ;
    ecx = eax;
    PUSH32(esp, 0x00120F9Fu); RECOMP_ABI_CALL(0x0012F5A0u, sub_0012F5A0); /* call 0x0012F5A0 */

loc_00120F9F: ;
    PUSH32(esp, 0x303);
    PUSH32(esp, 0x3F);
    PUSH32(esp, 0x00120FABu); RECOMP_ABI_CALL(0x0012F6B0u, sub_0012F6B0); /* call 0x0012F6B0 */

loc_00120FAB: ;
    ecx = eax;
    PUSH32(esp, 0x00120FB2u); RECOMP_ABI_CALL(0x0012F5A0u, sub_0012F5A0); /* call 0x0012F5A0 */

loc_00120FB2: ;
    PUSH32(esp, 0x8006);
    PUSH32(esp, 0x4A);
    PUSH32(esp, 0x00120FBEu); RECOMP_ABI_CALL(0x0012F6B0u, sub_0012F6B0); /* call 0x0012F6B0 */

loc_00120FBE: ;
    ecx = eax;
    PUSH32(esp, 0x00120FC5u); RECOMP_ABI_CALL(0x0012F5A0u, sub_0012F5A0); /* call 0x0012F5A0 */

loc_00120FC5: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0xB);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00120FD0u); RECOMP_ABI_CALL(0x0012F6B0u, sub_0012F6B0); /* call 0x0012F6B0 */

loc_00120FD0: ;
    ecx = eax;
    PUSH32(esp, 0x00120FD7u); RECOMP_ABI_CALL(0x0012F450u, sub_0012F450); /* call 0x0012F450 */

loc_00120FD7: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x1D);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00120FE2u); RECOMP_ABI_CALL(0x0012F6B0u, sub_0012F6B0); /* call 0x0012F6B0 */

loc_00120FE2: ;
    ecx = eax;
    PUSH32(esp, 0x00120FE9u); RECOMP_ABI_CALL(0x0012F450u, sub_0012F450); /* call 0x0012F450 */

loc_00120FE9: ;
    PUSH32(esp, 0);
    PUSH32(esp, 5);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00120FF4u); RECOMP_ABI_CALL(0x0012F6B0u, sub_0012F6B0); /* call 0x0012F6B0 */

loc_00120FF4: ;
    ecx = eax;
    PUSH32(esp, 0x00120FFBu); RECOMP_ABI_CALL(0x0012F450u, sub_0012F450); /* call 0x0012F450 */

loc_00120FFB: ;
    PUSH32(esp, 3);
    PUSH32(esp, 3);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00121006u); RECOMP_ABI_CALL(0x0012F6B0u, sub_0012F6B0); /* call 0x0012F6B0 */

loc_00121006: ;
    ecx = eax;
    PUSH32(esp, 0x0012100Du); RECOMP_ABI_CALL(0x0012F450u, sub_0012F450); /* call 0x0012F450 */

loc_0012100D: ;
    PUSH32(esp, 3);
    PUSH32(esp, 4);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00121018u); RECOMP_ABI_CALL(0x0012F6B0u, sub_0012F6B0); /* call 0x0012F6B0 */

loc_00121018: ;
    ecx = eax;
    PUSH32(esp, 0x0012101Fu); RECOMP_ABI_CALL(0x0012F450u, sub_0012F450); /* call 0x0012F450 */

loc_0012101F: ;
    PUSH32(esp, 5);
    PUSH32(esp, 0);
    PUSH32(esp, 3);
    PUSH32(esp, 0x0012102Au); RECOMP_ABI_CALL(0x0012F6B0u, sub_0012F6B0); /* call 0x0012F6B0 */

loc_0012102A: ;
    ecx = eax;
    PUSH32(esp, 0x00121031u); RECOMP_ABI_CALL(0x0012F450u, sub_0012F450); /* call 0x0012F450 */

loc_00121031: ;
    PUSH32(esp, 5);
    PUSH32(esp, 1);
    PUSH32(esp, 3);
    PUSH32(esp, 0x0012103Cu); RECOMP_ABI_CALL(0x0012F6B0u, sub_0012F6B0); /* call 0x0012F6B0 */

loc_0012103C: ;
    ecx = eax;
    PUSH32(esp, 0x00121043u); RECOMP_ABI_CALL(0x0012F450u, sub_0012F450); /* call 0x0012F450 */

loc_00121043: ;
    PUSH32(esp, 5);
    PUSH32(esp, 2);
    PUSH32(esp, 3);
    PUSH32(esp, 0x0012104Eu); RECOMP_ABI_CALL(0x0012F6B0u, sub_0012F6B0); /* call 0x0012F6B0 */

loc_0012104E: ;
    ecx = eax;
    PUSH32(esp, 0x00121055u); RECOMP_ABI_CALL(0x0012F450u, sub_0012F450); /* call 0x0012F450 */

loc_00121055: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x1D);
    PUSH32(esp, 3);
    PUSH32(esp, 0x00121060u); RECOMP_ABI_CALL(0x0012F6B0u, sub_0012F6B0); /* call 0x0012F6B0 */

loc_00121060: ;
    ecx = eax;
    PUSH32(esp, 0x00121067u); RECOMP_ABI_CALL(0x0012F450u, sub_0012F450); /* call 0x0012F450 */

loc_00121067: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00121072u); RECOMP_ABI_CALL(0x0012F6B0u, sub_0012F6B0); /* call 0x0012F6B0 */

loc_00121072: ;
    ecx = eax;
    PUSH32(esp, 0x00121079u); RECOMP_ABI_CALL(0x0012F450u, sub_0012F450); /* call 0x0012F450 */

loc_00121079: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x12);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00121084u); RECOMP_ABI_CALL(0x0012F6B0u, sub_0012F6B0); /* call 0x0012F6B0 */

loc_00121084: ;
    ecx = eax;
    PUSH32(esp, 0x0012108Bu); RECOMP_ABI_CALL(0x0012F450u, sub_0012F450); /* call 0x0012F450 */

loc_0012108B: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x13);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00121096u); RECOMP_ABI_CALL(0x0012F6B0u, sub_0012F6B0); /* call 0x0012F6B0 */

loc_00121096: ;
    ecx = eax;
    PUSH32(esp, 0x0012109Du); RECOMP_ABI_CALL(0x0012F450u, sub_0012F450); /* call 0x0012F450 */

loc_0012109D: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0);
    PUSH32(esp, 0x001210A8u); RECOMP_ABI_CALL(0x0012F6B0u, sub_0012F6B0); /* call 0x0012F6B0 */

loc_001210A8: ;
    ecx = eax;
    PUSH32(esp, 0x001210AFu); RECOMP_ABI_CALL(0x0012F450u, sub_0012F450); /* call 0x0012F450 */

loc_001210AF: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0xE);
    PUSH32(esp, 0);
    PUSH32(esp, 0x001210BAu); RECOMP_ABI_CALL(0x0012F6B0u, sub_0012F6B0); /* call 0x0012F6B0 */

loc_001210BA: ;
    ecx = eax;
    PUSH32(esp, 0x001210C1u); RECOMP_ABI_CALL(0x0012F450u, sub_0012F450); /* call 0x0012F450 */

loc_001210C1: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0xF);
    PUSH32(esp, 0);
    PUSH32(esp, 0x001210CCu); RECOMP_ABI_CALL(0x0012F6B0u, sub_0012F6B0); /* call 0x0012F6B0 */

loc_001210CC: ;
    ecx = eax;
    PUSH32(esp, 0x001210D3u); RECOMP_ABI_CALL(0x0012F450u, sub_0012F450); /* call 0x0012F450 */

loc_001210D3: ;
    eax = MEM32(esi + 0x14398);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001210ED; /* jl: less (signed <) */

loc_001210DD: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001210E3u); RECOMP_ABI_CALL(0x00011F9Bu, sub_00011F9B); /* call 0x00011F9B */

loc_001210E3: ;
    ecx = eax;
    PUSH32(esp, 0x001210EAu); RECOMP_ABI_CALL(0x00116660u, sub_00116660); /* call 0x00116660 */

loc_001210EA: ;
    PUSH32(esp, eax);
    goto loc_001210EF;

loc_001210ED: ;
    PUSH32(esp, 0);

loc_001210EF: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0x001210F6u); RECOMP_ABI_CALL(0x0012F6B0u, sub_0012F6B0); /* call 0x0012F6B0 */

loc_001210F6: ;
    ecx = eax;
    PUSH32(esp, 0x001210FDu); RECOMP_ABI_CALL(0x0012F340u, sub_0012F340); /* call 0x0012F340 */

loc_001210FD: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x50FA90);
    PUSH32(esp, 0x12);
    MEM32(0x50FA90) = 0;
    MEM32(0x50FA94) = 0;
    PUSH32(esp, 0x0012111Fu); RECOMP_ABI_CALL(0x00118440u, sub_00118440); /* call 0x00118440 */

loc_0012111F: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x50FA90);
    PUSH32(esp, 0x12);
    MEM32(0x50FA9C) = 0x3F800000;
    PUSH32(esp, 0x00121137u); RECOMP_ABI_CALL(0x00118440u, sub_00118440); /* call 0x00118440 */

loc_00121137: ;
    eax = MEM32(esi);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x00121141u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0012113Eu); } /* indirect call */
    }

loc_00121141: ;
    ecx = MEM32(eax + 0xC4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x42DC0000);
    MEM32(0x63AFD4) = ecx;
    edx = MEM32(esi);
    PUSH32(esp, 0x3E4CCCCD);
    PUSH32(esp, 1);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00121160u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0012115Du); } /* indirect call */
    }

loc_00121160: ;
    ecx = eax;
    PUSH32(esp, 0x00121167u); RECOMP_ABI_CALL(0x0014A250u, sub_0014A250); /* call 0x0014A250 */

loc_00121167: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00121170
 * Original: 0x00121170 - 0x00121293 (291 bytes, 76 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00121170(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00121170: ;
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    PUSH32(esp, 0x50FA90);
    PUSH32(esp, 0x12);
    esi = ecx;
    MEM32(0x50FA90) = 0;
    MEM32(0x50FA94) = 0;
    PUSH32(esp, 0x00121195u); RECOMP_ABI_CALL(0x00118440u, sub_00118440); /* call 0x00118440 */

loc_00121195: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x50FA90);
    PUSH32(esp, 0x12);
    MEM32(0x50FA9C) = 0x3F800000;
    PUSH32(esp, 0x001211ADu); RECOMP_ABI_CALL(0x00118440u, sub_00118440); /* call 0x00118440 */

loc_001211AD: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, 0x5C);
    PUSH32(esp, 0x001211B9u); RECOMP_ABI_CALL(0x0012F6B0u, sub_0012F6B0); /* call 0x0012F6B0 */

loc_001211B9: ;
    ecx = eax;
    PUSH32(esp, 0x001211C0u); RECOMP_ABI_CALL(0x0012F5A0u, sub_0012F5A0); /* call 0x0012F5A0 */

loc_001211C0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x95);
    PUSH32(esp, 0x001211CCu); RECOMP_ABI_CALL(0x0012F6B0u, sub_0012F6B0); /* call 0x0012F6B0 */

loc_001211CC: ;
    ecx = eax;
    PUSH32(esp, 0x001211D3u); RECOMP_ABI_CALL(0x0012F5A0u, sub_0012F5A0); /* call 0x0012F5A0 */

loc_001211D3: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x40);
    PUSH32(esp, 0x001211DCu); RECOMP_ABI_CALL(0x0012F6B0u, sub_0012F6B0); /* call 0x0012F6B0 */

loc_001211DC: ;
    ecx = eax;
    PUSH32(esp, 0x001211E3u); RECOMP_ABI_CALL(0x0012F5A0u, sub_0012F5A0); /* call 0x0012F5A0 */

loc_001211E3: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x3C);
    PUSH32(esp, 0x001211ECu); RECOMP_ABI_CALL(0x0012F6B0u, sub_0012F6B0); /* call 0x0012F6B0 */

loc_001211EC: ;
    ecx = eax;
    PUSH32(esp, 0x001211F3u); RECOMP_ABI_CALL(0x0012F5A0u, sub_0012F5A0); /* call 0x0012F5A0 */

loc_001211F3: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x3B);
    PUSH32(esp, 0x001211FCu); RECOMP_ABI_CALL(0x0012F6B0u, sub_0012F6B0); /* call 0x0012F6B0 */

loc_001211FC: ;
    ecx = eax;
    PUSH32(esp, 0x00121203u); RECOMP_ABI_CALL(0x0012F5A0u, sub_0012F5A0); /* call 0x0012F5A0 */

loc_00121203: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x3D);
    PUSH32(esp, 0x0012120Cu); RECOMP_ABI_CALL(0x0012F6B0u, sub_0012F6B0); /* call 0x0012F6B0 */

loc_0012120C: ;
    ecx = eax;
    PUSH32(esp, 0x00121213u); RECOMP_ABI_CALL(0x0012F5A0u, sub_0012F5A0); /* call 0x0012F5A0 */

loc_00121213: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x93);
    PUSH32(esp, 0x0012121Fu); RECOMP_ABI_CALL(0x0012F6B0u, sub_0012F6B0); /* call 0x0012F6B0 */

loc_0012121F: ;
    ecx = eax;
    PUSH32(esp, 0x00121226u); RECOMP_ABI_CALL(0x0012F5A0u, sub_0012F5A0); /* call 0x0012F5A0 */

loc_00121226: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x10);
    PUSH32(esp, 1);
    PUSH32(esp, 0x00121231u); RECOMP_ABI_CALL(0x0012F6B0u, sub_0012F6B0); /* call 0x0012F6B0 */

loc_00121231: ;
    ecx = eax;
    PUSH32(esp, 0x00121238u); RECOMP_ABI_CALL(0x0012F450u, sub_0012F450); /* call 0x0012F450 */

loc_00121238: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0xB);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00121243u); RECOMP_ABI_CALL(0x0012F6B0u, sub_0012F6B0); /* call 0x0012F6B0 */

loc_00121243: ;
    ecx = eax;
    PUSH32(esp, 0x0012124Au); RECOMP_ABI_CALL(0x0012F450u, sub_0012F450); /* call 0x0012F450 */

loc_0012124A: ;
    PUSH32(esp, 0x0012124Fu); RECOMP_ABI_CALL(0x00102CE0u, sub_00102CE0); /* call 0x00102CE0 */

loc_0012124F: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x00121256u); RECOMP_ABI_CALL(0x00102D00u, sub_00102D00); /* call 0x00102D00 */

loc_00121256: ;
    MEM8(0x50FF48) = 1;
    PUSH32(esp, 0x00121262u); RECOMP_ABI_CALL(0x00102CA0u, sub_00102CA0); /* call 0x00102CA0 */

loc_00121262: ;
    MEM32(esi + 0x143A8) = 0;
    PUSH32(esp, 0x00121271u); RECOMP_ABI_CALL(0x00102CE0u, sub_00102CE0); /* call 0x00102CE0 */

loc_00121271: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x00121278u); RECOMP_ABI_CALL(0x00102D00u, sub_00102D00); /* call 0x00102D00 */

loc_00121278: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(0x50FF48) = 1;
    PUSH32(esp, 0x00121287u); RECOMP_ABI_CALL(0x00102CA0u, sub_00102CA0); /* call 0x00102CA0 */

loc_00121287: ;
    MEM32(esi + 0x143B0) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001212A0
 * Original: 0x001212A0 - 0x00121343 (163 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001212A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001212A0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x001212A9u); RECOMP_ABI_CALL(0x00120E70u, sub_00120E70); /* call 0x00120E70 */

loc_001212A9: ;
    eax = MEM32(esi + 0x2E0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001212E8; /* je: equal / zero */

loc_001212B3: ;
    PUSH32(esp, ebp);
    MEM8(0x50FF48) = 1;
    ebp = MEM32(esi + 0x2E0);
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edi = 0;
    if ((_fas < 0)) goto loc_001212E7; /* js: sign (negative) */

loc_001212C9: ;
    /* nop */

loc_001212D0: ;
    eax = MEM32(esi + 0x2DC);
    ecx = MEM32(eax + edi * 8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001212DFu); RECOMP_ABI_CALL(0x0013D600u, sub_0013D600); /* call 0x0013D600 */

loc_001212DF: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001212D0; /* jle: less or equal (signed <=) */

loc_001212E7: ;
    POP32(esp, ebp);

loc_001212E8: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x8F);
    PUSH32(esp, 0x001212F4u); RECOMP_ABI_CALL(0x0012F6B0u, sub_0012F6B0); /* call 0x0012F6B0 */

loc_001212F4: ;
    ecx = eax;
    PUSH32(esp, 0x001212FBu); RECOMP_ABI_CALL(0x0012F5A0u, sub_0012F5A0); /* call 0x0012F5A0 */

loc_001212FB: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x40);
    PUSH32(esp, 0x00121304u); RECOMP_ABI_CALL(0x0012F6B0u, sub_0012F6B0); /* call 0x0012F6B0 */

loc_00121304: ;
    ecx = eax;
    PUSH32(esp, 0x0012130Bu); RECOMP_ABI_CALL(0x0012F5A0u, sub_0012F5A0); /* call 0x0012F5A0 */

loc_0012130B: ;
    eax = MEM32(esi + 0x2E8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012133A; /* je: equal / zero */

loc_00121315: ;
    MEM8(0x50FF48) = 1;
    edi = MEM32(esi + 0x2E8);
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_0012133A; /* js: sign (negative) */

loc_00121325: ;
    edx = MEM32(esi + 0x2E4);
    eax = MEM32(edx + edi * 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00121334u); RECOMP_ABI_CALL(0x0013CA90u, sub_0013CA90); /* call 0x0013CA90 */

loc_00121334: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas >= 0)) goto loc_00121325; /* jns: not sign (positive) */

loc_0012133A: ;
    POP32(esp, edi);
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00121170(); return; /* tail jmp 0x00121170 */

}

/**
 * sub_00121322
 * Original: 0x00121322 - 0x00121343 (33 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00121322(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00121322: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_0012133A; /* js: sign (negative) */

loc_00121325: ;
    edx = MEM32(esi + 0x2E4);
    eax = MEM32(edx + edi * 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00121334u); RECOMP_ABI_CALL(0x0013CA90u, sub_0013CA90); /* call 0x0013CA90 */

loc_00121334: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas >= 0)) goto loc_00121325; /* jns: not sign (positive) */

loc_0012133A: ;
    POP32(esp, edi);
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00121170(); return; /* tail jmp 0x00121170 */

}

/**
 * sub_00121790
 * Original: 0x00121790 - 0x00121B47 (951 bytes, 296 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00121790(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00121790: ;
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x64;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = ecx;
    eax = MEM32(ebx);
    PUSH32(esp, ebp);
    MEM32(esp + 0xC) = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x001217A0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0012179Du); } /* indirect call */
    }

loc_001217A0: ;
    ebp = eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    MEM32(esp + 0x18) = ebp;
    if (CMP_EQ(_fa, _fb)) goto loc_00121B41; /* je: equal / zero */

loc_001217AE: ;
    eax = MEM32(0x632F94);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00121B41; /* je: equal / zero */

loc_001217BB: ;
    eax = MEM32(ebp + 0x10);
    edx = MEM32(eax);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = ecx;
    if (CMP_LE(_fas, _fbs)) goto loc_00121924; /* jle: less or equal (signed <=) */

loc_001217D0: ;
    edx = MEM32(eax + 8);
    eax = MEM32(eax + 0xC);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = MEM32(eax + edx * 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012190E; /* je: equal / zero */

loc_001217E3: ;
    edi = MEM32(esi);
    edx = MEM32(esi + 0x18);
    edi = edi & 0xFFFFFFFDu;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 4 (32-bit) */
    MEM32(esi) = edi;
    eax = edi;
    if (CMP_NE(_fa, _fb)) goto loc_001217FE; /* jne: not equal / not zero */

loc_001217F4: ;
    eax = eax | 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi) = eax;
    goto loc_0012190E;

loc_001217FE: ;
    ebp = MEM32(ebx + 0x18);
    edx = MEM32(ebp + 0x498);
    _fb = (uint32_t)(0x448) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x448;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = ebp + edx * 4;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    edi = ebp;
    if (CMP_EQ(_fa, _fb)) goto loc_0012190E; /* je: equal / zero */

loc_0012181B: ;
    goto loc_00121820;

    /* nop */

loc_00121820: ;
    eax = MEM32(edi);
    SET_LO8(ecx, MEM8(eax + 0x62));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001218F8; /* je: equal / zero */

loc_0012182D: ;
    ecx = MEM32(eax + 0x40);
    fp_push(MEMF(eax + 0x3C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0x5C)); /* fsub dword ptr [esi + 0x5c] */
    edx = MEM32(eax + 0x44);
    MEM32(esp + 0x58) = ecx;
    fp_push(MEMF(esp + 0x58)); /* fld float */
    ecx = MEM32(eax + 0x48);
    eax = MEM32(eax + 0x74);
    MEM32(esp + 0x5C) = edx;
    edx = MEM32(esi + 0x60);
    MEM32(esp + 0x60) = ecx;
    ecx = MEM32(esi + 0x64);
    MEM32(esp + 0x48) = edx;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x48)); /* fsub dword ptr [esp + 0x48] */
    edx = MEM32(esi + 0x68);
    fp_push(MEMF(esp + 0x5C)); /* fld float */
    MEM32(esp + 0x4C) = ecx;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x4C)); /* fsub dword ptr [esp + 0x4c] */
    MEM32(esp + 0x50) = edx;
    MEM32(esp + 0x1C) = eax;
    MEMF(esp + 0x6C) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x6C);
    fp_push(MEMF(esp + 0x60)); /* fld float */
    eax = esp + 0x34;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x50)); /* fsub dword ptr [esp + 0x50] */
    PUSH32(esp, eax);
    MEM32(esp + 0x40) = ecx;
    MEMF(esp + 0x74) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x74);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEM32(esp + 0x44) = edx;
    MEMF(esp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x001218A8u); RECOMP_ABI_CALL(0x0011E130u, sub_0011E130); /* call 0x0011E130 */

loc_001218A8: ;
    MEMF(esp + 0x1C) = (float)fp_top(); /* fst */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0xA0)); /* fadd dword ptr [esi + 0xa0] */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fcompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001218F8; /* jp: parity */

loc_001218C4: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi), 1 (8-bit) */
    ebx = MEM32(esp + 0x18);
    if (TEST_Z(_fa, _fb)) goto loc_001218EB; /* je: equal / zero */

loc_001218CD: ;
    fp_push(MEMF(esp + 0x48)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x58)); /* fsub dword ptr [esp + 0x58] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x632B6C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x632b6c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001218EB; /* jp: parity */

loc_001218E2: ;
    ecx = MEM32(edi);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001218EBu); RECOMP_ABI_CALL(0x0012AF30u, sub_0012AF30); /* call 0x0012AF30 */

loc_001218EB: ;
    ecx = MEM32(edi);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001218F4u); RECOMP_ABI_CALL(0x0012AF10u, sub_0012AF10); /* call 0x0012AF10 */

loc_001218F4: ;
    ebx = MEM32(esp + 0x14);

loc_001218F8: ;
    ecx = MEM32(ebp + 0x50);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = ebp + ecx * 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00121820; /* jne: not equal / not zero */

loc_0012190A: ;
    ecx = MEM32(esp + 0x10);

loc_0012190E: ;
    ebp = MEM32(esp + 0x20);
    eax = MEM32(ebp + 0x10);
    edx = MEM32(eax);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    MEM32(esp + 0x10) = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_001217D0; /* jl: less (signed <) */

loc_00121924: ;
    edi = MEM32(ebx + 0x18);
    eax = MEM32(edi + 0x498);
    _fb = (uint32_t)(0x448) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x448;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = edi + eax * 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    esi = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_00121985; /* je: equal / zero */

loc_0012193C: ;
    /* nop */

loc_00121940: ;
    ecx = MEM32(esi);
    PUSH32(esp, 0x00121947u); RECOMP_ABI_CALL(0x0012D1C0u, sub_0012D1C0); /* call 0x0012D1C0 */

loc_00121947: ;
    ecx = MEM32(esi);
    SET_LO8(eax, MEM8(ecx + 0x62));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00121978; /* je: equal / zero */

loc_00121950: ;
    PUSH32(esp, 0x00121955u); RECOMP_ABI_CALL(0x0012D3B0u, sub_0012D3B0); /* call 0x0012D3B0 */

loc_00121955: ;
    eax = MEM32(esi);
    edx = MEM32(eax + 0x38);
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x2C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = eax + edx * 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    ecx = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00121978; /* je: equal / zero */

loc_00121966: ;
    edx = MEM32(ecx);
    MEM32(edx) = MEM32(edx) | 2;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = MEM32(eax + 0xC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = eax + edx * 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00121966; /* jne: not equal / not zero */

loc_00121978: ;
    eax = MEM32(edi + 0x50);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = edi + eax * 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00121940; /* jne: not equal / not zero */

loc_00121985: ;
    edx = MEM32(ebp + 4);
    eax = MEM32(edx);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    MEM32(esp + 0x18) = esi;
    MEM32(esp + 0x1C) = esi;
    if (CMP_LE(_fas, _fbs)) goto loc_00121B3F; /* jle: less or equal (signed <=) */

loc_0012199C: ;
    /* nop */

loc_001219A0: ;
    eax = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x001219A7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001219A4u); } /* indirect call */
    }

loc_001219A7: ;
    eax = MEM32(eax + 4);
    ecx = MEM32(eax + 8);
    edx = MEM32(eax + 0xC);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(edx + ecx * 4);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    MEM32(esp + 0x24) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_001219C4; /* je: equal / zero */

loc_001219BF: ;
    edi = ecx + 0x10;
    goto loc_001219C6;

loc_001219C4: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001219C6: ;
    _fa = (uint32_t)(MEM8(edi + 0x3B)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi + 0x3B), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00121B25; /* jne: not equal / not zero */

loc_001219D0: ;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    edx = esp + 0x58;
    PUSH32(esp, edx);
    MEM32(edi + 0x10) = ebp;
    MEM32(edi + 0x14) = ebp;
    PUSH32(esp, 0x001219E5u); RECOMP_ABI_CALL(0x00147C20u, sub_00147C20); /* call 0x00147C20 */

loc_001219E5: ;
    esi = MEM32(ebx + 0x18);
    eax = MEM32(esi + 0x498);
    _fb = (uint32_t)(0x448) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x448;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esi + eax * 4;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    ebp = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_00121B21; /* je: equal / zero */

loc_00121A05: ;
    edx = MEM32(ebp);
    SET_LO8(eax, MEM8(edx + 0x61));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00121B0E; /* je: equal / zero */

loc_00121A13: ;
    _fa = (uint32_t)(MEM32(edi + 0x38)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(edi + 0x38), 0x2000000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00121A31; /* je: equal / zero */

loc_00121A1C: ;
    eax = MEM32(esp + 0x24);
    fp_push(MEMF(edx + 0x40)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(eax + 0x5C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [eax + 0x5c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00121B0E; /* je: equal / zero */

loc_00121A31: ;
    eax = edx + 0x10C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00121B0E; /* je: equal / zero */

loc_00121A3F: ;
    fp_push(MEMF(eax + 0xA0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x496B28)); /* fadd dword ptr [0x496b28] */
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 0x5C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x54)); /* fsub dword ptr [esp + 0x54] */
    fp_push(MEMF(eax + 0x60)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x58)); /* fsub dword ptr [esp + 0x58] */
    fp_push(MEMF(eax + 0x64)); /* fld float */
    eax = esp + 0x34;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x5C)); /* fsub dword ptr [esp + 0x5c] */
    MEM32(esp + 0x40) = 0;
    MEM32(esp + 0x28) = eax;
    MEM8(0x50FF48) = 1;
    MEMF(esp + 0x6C) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x6C);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEM32(esp + 0x3C) = edx;
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x28);
    xmm1 = XMM_MEM(edx); /* movups */
    xmm2 = xmm1; /* movaps */
    xmm1 = XMM_MUL(xmm1, xmm2); /* mulps */
    xmm0 = xmm1; /* movaps */
    xmm0 = XMM_SHUFFLE(xmm0, xmm0, 0x93); /* shufps */
    xmm1 = XMM_ADD(xmm1, xmm0); /* addps */
    xmm0 = XMM_SHUFFLE(xmm0, xmm0, 0x93); /* shufps */
    xmm1 = XMM_ADD(xmm1, xmm0); /* addps */
    xmm0 = XMM_SHUFFLE(xmm0, xmm0, 0x93); /* shufps */
    xmm1 = XMM_ADD(xmm1, xmm0); /* addps */
    xmm1.f[0] = sqrtf(xmm1.f[0]); /* sqrtss */
    MEMF(esp + 0x2C) = xmm1.f[0]; /* movss */
    SET_LO8(eax, MEM8(0x632BA8));
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00121AD9; /* jne: not equal / not zero */

loc_00121ACD: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00121AD9; /* jne: not equal / not zero */

loc_00121AD1: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x4964E8)); /* fld float */

loc_00121AD9: ;
    fp_push(MEMF(esp + 0x30)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x10)); /* fadd dword ptr [esp + 0x10] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    fp_pop(); /* fstp st(0) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00121B0E; /* jne: not equal / not zero */

loc_00121AEC: ;
    eax = MEM32(edi + 0x10);
    edx = 1;
    edx = edx << LO8(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax | edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = MEM32(esp + 0x18);
    MEM32(edi + 0x10) = eax;
    eax = MEM32(edi + 0x14);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    MEM32(edi + 0x14) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_00121B0E; /* jle: less or equal (signed <=) */

loc_00121B0A: ;
    MEM32(esp + 0x18) = eax;

loc_00121B0E: ;
    eax = MEM32(esi + 0x50);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 4;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = esi + eax * 4;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00121A05; /* jne: not equal / not zero */

loc_00121B21: ;
    ebx = MEM32(esp + 0x14);

loc_00121B25: ;
    eax = MEM32(esp + 0x20);
    esi = MEM32(esp + 0x1C);
    ecx = MEM32(eax + 4);
    eax = MEM32(ecx);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    MEM32(esp + 0x1C) = esi;
    if (CMP_L(_fas, _fbs)) goto loc_001219A0; /* jl: less (signed <) */

loc_00121B3F: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_00121B41: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x64;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00121E90
 * Original: 0x00121E90 - 0x00121EDF (79 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00121E90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00121E90: ;
    edx = MEM32(ecx);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00121EDD; /* je: equal / zero */

loc_00121E99: ;
    PUSH32(esp, esi);
    /* nop */

loc_00121EA0: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00121ED5; /* je: equal / zero */

loc_00121EA5: ;
    eax = MEM32(edx + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00121ED5; /* je: equal / zero */

loc_00121EAC: ;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 8), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00121EB9; /* je: equal / zero */

loc_00121EB1: ;
    eax = MEM32(eax + 8);
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 8), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00121EB1; /* jne: not equal / not zero */

loc_00121EB9: ;
    esi = MEM32(ecx + 0x18);
    MEM32(eax + 8) = esi;
    esi = MEM32(ecx + 0x18);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00121EC9; /* je: equal / zero */

loc_00121EC6: ;
    MEM32(esi + 4) = eax;

loc_00121EC9: ;
    eax = MEM32(edx + 0x10);
    MEM32(ecx + 0x18) = eax;
    MEM32(edx + 0x10) = edi;
    MEM32(edx + 4) = edi;

loc_00121ED5: ;
    edx = MEM32(edx + 0x18);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00121EA0; /* jne: not equal / not zero */

loc_00121EDC: ;
    POP32(esp, esi);

loc_00121EDD: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_00121EE0
 * Original: 0x00121EE0 - 0x00121F4E (110 bytes, 53 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00121EE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00121EE0: ;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = MEM32(ecx);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00121F49; /* je: equal / zero */

loc_00121EEA: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    /* nop */

loc_00121EF0: ;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00121F0C; /* je: equal / zero */

loc_00121EF8: ;
    ecx = MEM32(edi + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00121F0C; /* je: equal / zero */

loc_00121EFF: ;
    ecx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x00121F05u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00121F03u); } /* indirect call */
    }

loc_00121F05: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = eax;
    goto loc_00121F0E;

loc_00121F0C: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00121F0E: ;
    eax = MEM32(esp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00121F3E; /* je: equal / zero */

loc_00121F16: ;
    esi = MEM32(edi + 0x10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00121F37; /* je: equal / zero */

loc_00121F1D: ;
    /* nop */

loc_00121F20: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(esp + 0x1C); PUSH32(esp, 0x00121F27u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00121F23u); } /* indirect call */
    }

loc_00121F27: ;
    eax = MEM32(esi + 8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00121F37; /* je: equal / zero */

loc_00121F31: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00121F20; /* jne: not equal / not zero */

loc_00121F37: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00121F3E; /* jle: less or equal (signed <=) */

loc_00121F3B: ;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_00121F43;

loc_00121F3E: ;
    edi = MEM32(edi + 0x18);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00121F43: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00121EF0; /* jne: not equal / not zero */

loc_00121F47: ;
    POP32(esp, esi);
    POP32(esp, ebx);

loc_00121F49: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00121F50
 * Original: 0x00121F50 - 0x00121FBE (110 bytes, 53 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00121F50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00121F50: ;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = MEM32(ecx);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00121FB9; /* je: equal / zero */

loc_00121F5A: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    /* nop */

loc_00121F60: ;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00121F7C; /* je: equal / zero */

loc_00121F68: ;
    ecx = MEM32(edi + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00121F7C; /* je: equal / zero */

loc_00121F6F: ;
    ecx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x00121F75u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00121F73u); } /* indirect call */
    }

loc_00121F75: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = eax;
    goto loc_00121F7E;

loc_00121F7C: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00121F7E: ;
    eax = MEM32(esp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00121FAE; /* je: equal / zero */

loc_00121F86: ;
    esi = MEM32(edi + 0x10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00121FA7; /* je: equal / zero */

loc_00121F8D: ;
    /* nop */

loc_00121F90: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(esp + 0x1C); PUSH32(esp, 0x00121F97u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00121F93u); } /* indirect call */
    }

loc_00121F97: ;
    eax = MEM32(esi + 8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00121FA7; /* je: equal / zero */

loc_00121FA1: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00121F90; /* jne: not equal / not zero */

loc_00121FA7: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00121FAE; /* jle: less or equal (signed <=) */

loc_00121FAB: ;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_00121FB3;

loc_00121FAE: ;
    edi = MEM32(edi + 0x18);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00121FB3: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00121F60; /* jne: not equal / not zero */

loc_00121FB7: ;
    POP32(esp, esi);
    POP32(esp, ebx);

loc_00121FB9: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00121FC0
 * Original: 0x00121FC0 - 0x00121FCE (14 bytes, 6 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00121FC0(void)
{

loc_00121FC0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00121FC8u); RECOMP_ABI_CALL(0x00121FD0u, sub_00121FD0); /* call 0x00121FD0 */

loc_00121FC8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00121FD0
 * Original: 0x00121FD0 - 0x00122043 (115 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00121FD0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00121FD0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x3BC190);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 4) = esi;
    ecx = esi + 0x2F8;
    MEM32(esp + 0x10) = 4;
    PUSH32(esp, 0x00122000u); RECOMP_ABI_CALL(0x0013E8F0u, sub_0013E8F0); /* call 0x0013E8F0 */

loc_00122000: ;
    ecx = esi + 0x2F4;
    MEM8(esp + 0x10) = 3;
    PUSH32(esp, 0x00122010u); RECOMP_ABI_CALL(0x0013E8F0u, sub_0013E8F0); /* call 0x0013E8F0 */

loc_00122010: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esi;
    MEM32(esi + 0x2F0) = eax;
    MEM32(esi + 0x2E8) = eax;
    MEM32(esi + 0x2E0) = eax;
    MEM32(esp + 0x10) = 0xFFFFFFFFu;
    PUSH32(esp, 0x00122033u); RECOMP_ABI_CALL(0x0014B740u, sub_0014B740); /* call 0x0014B740 */

loc_00122033: ;
    ecx = MEM32(esp + 8);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00122C30
 * Original: 0x00122C30 - 0x00122C59 (41 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00122C30(void)
{

loc_00122C30: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x122B40);
    PUSH32(esp, 0);
    ecx = esi + 0x2DC;
    PUSH32(esp, 0x00122C45u); RECOMP_ABI_CALL(0x00120440u, sub_00120440); /* call 0x00120440 */

loc_00122C45: ;
    PUSH32(esp, 0x122B90);
    PUSH32(esp, 0);
    ecx = esi + 0x2E4;
    PUSH32(esp, 0x00122C57u); RECOMP_ABI_CALL(0x001205F0u, sub_001205F0); /* call 0x001205F0 */

loc_00122C57: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00123960
 * Original: 0x00123960 - 0x00123961 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00123960(void)
{

loc_00123960: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00123970
 * Original: 0x00123970 - 0x00123971 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00123970(void)
{

loc_00123970: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00123980
 * Original: 0x00123980 - 0x00123981 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00123980(void)
{

loc_00123980: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00123990
 * Original: 0x00123990 - 0x00123991 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00123990(void)
{

loc_00123990: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001239A0
 * Original: 0x001239A0 - 0x001239A1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001239A0(void)
{

loc_001239A0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001239B0
 * Original: 0x001239B0 - 0x001239B1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001239B0(void)
{

loc_001239B0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001239C0
 * Original: 0x001239C0 - 0x001239C1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001239C0(void)
{

loc_001239C0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001239D0
 * Original: 0x001239D0 - 0x001239D1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001239D0(void)
{

loc_001239D0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001239E0
 * Original: 0x001239E0 - 0x001239E1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001239E0(void)
{

loc_001239E0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001239F0
 * Original: 0x001239F0 - 0x001239F1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001239F0(void)
{

loc_001239F0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00123A00
 * Original: 0x00123A00 - 0x00123A01 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00123A00(void)
{

loc_00123A00: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00123A10
 * Original: 0x00123A10 - 0x00123A11 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00123A10(void)
{

loc_00123A10: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00123A20
 * Original: 0x00123A20 - 0x00123A37 (23 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00123A20(void)
{

loc_00123A20: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x68);
    PUSH32(esp, ecx);
    ecx = MEM32(0x510B74);
    PUSH32(esp, 0x00123A33u); RECOMP_ABI_CALL(0x0017A4C0u, sub_0017A4C0); /* call 0x0017A4C0 */

loc_00123A33: ;
    eax = MEM32(eax + 0xC);
    esp += 4; return; /* ret */

}

/**
 * sub_00123A40
 * Original: 0x00123A40 - 0x00123A46 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00123A40(void)
{

loc_00123A40: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00123A50
 * Original: 0x00123A50 - 0x00123A91 (65 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00123A50(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00123A50: ;
    eax = MEM32(0x632BF8);
    fp_push(MEMF(esp + 4)); /* fld float */
    ecx = MEM32(0x632BF4);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x49E580)); /* fmul dword ptr [0x49e580] */
    edx = MEM32(0x632BF0);
    PUSH32(esp, eax);
    eax = MEM32(0x632BEC);
    MEMF(0x632BE8) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, ecx);
    ecx = MEM32(0x632BE8);
    PUSH32(esp, edx);
    edx = MEM32(0x632BE4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00123A8Du); RECOMP_ABI_CALL(0x0011A4B0u, sub_0011A4B0); /* call 0x0011A4B0 */

loc_00123A8D: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00123AA0
 * Original: 0x00123AA0 - 0x00123AA1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00123AA0(void)
{

loc_00123AA0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00123AB0
 * Original: 0x00123AB0 - 0x00123AB7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00123AB0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00123AB0: ;
    fp_push(MEMF(0x4AB5B8)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00123AC0
 * Original: 0x00123AC0 - 0x00123AC1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00123AC0(void)
{

loc_00123AC0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00123AD0
 * Original: 0x00123AD0 - 0x00123AD1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00123AD0(void)
{

loc_00123AD0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00123AE0
 * Original: 0x00123AE0 - 0x00123AE1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00123AE0(void)
{

loc_00123AE0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00123AF0
 * Original: 0x00123AF0 - 0x00123AF3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00123AF0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00123AF0: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00123B00
 * Original: 0x00123B00 - 0x00123B01 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00123B00(void)
{

loc_00123B00: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00123B10
 * Original: 0x00123B10 - 0x00123B17 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00123B10(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00123B10: ;
    fp_push(MEMF(0x4964E8)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00123B20
 * Original: 0x00123B20 - 0x00123B21 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00123B20(void)
{

loc_00123B20: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00123B30
 * Original: 0x00123B30 - 0x00123B31 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00123B30(void)
{

loc_00123B30: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00123BB0
 * Original: 0x00123BB0 - 0x00123BB3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00123BB0(void)
{

loc_00123BB0: ;
    eax = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00123BC0
 * Original: 0x00123BC0 - 0x00123BC3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00123BC0(void)
{

loc_00123BC0: ;
    eax = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00123BD0
 * Original: 0x00123BD0 - 0x00123C84 (180 bytes, 59 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00123BD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00123BD0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x64;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = edi + 0x80;
    PUSH32(esp, eax);
    ecx = edi + 0x40;
    PUSH32(esp, ecx);
    edx = esp + 0x38;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00123BF3u); RECOMP_ABI_CALL(0x000FF9A4u, sub_000FF9A4); /* call 0x000FF9A4 */

loc_00123BF3: ;
    eax = esp + 0x30;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    ecx = eax;
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00123C02u); RECOMP_ABI_CALL(0x000FFAEDu, sub_000FFAED); /* call 0x000FFAED */

loc_00123C02: ;
    esi = edi + 0x128;
    ebx = 8;
    /* nop */

loc_00123C10: ;
    edx = MEM32(esi + -4);
    eax = MEM32(esi);
    ecx = MEM32(esi + 4);
    MEM32(esp + 0x10) = edx;
    edx = esp + 0x30;
    MEM32(esp + 0x14) = eax;
    PUSH32(esp, edx);
    eax = esp + 0x14;
    MEM32(esp + 0x1C) = ecx;
    PUSH32(esp, eax);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    MEM32(esp + 0x28) = 0x3F800000;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00123C40u); RECOMP_ABI_CALL(0x000FF894u, sub_000FF894); /* call 0x000FF894 */

loc_00123C40: ;
    fp_push(MEMF(0x496454)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(esp + 0x2C)); /* fdiv dword ptr [esp + 0x2c] */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(esi + 0x10C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(esi + 0x110) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x28)); /* fmul dword ptr [esp + 0x28] */
    MEMF(esi + 0x114) = (float)fp_top(); fp_pop(); /* fstp */
    if ((_fa != 0)) goto loc_00123C10; /* jne: not equal / not zero */

loc_00123C72: ;
    ecx = edi + 0x21C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00123C7Du); RECOMP_ABI_CALL(0x0010F8A0u, sub_0010F8A0); /* call 0x0010F8A0 */

loc_00123C7D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00123C90
 * Original: 0x00123C90 - 0x00123CCC (60 bytes, 20 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00123C90(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00123C90: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    eax = esi;
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    edi = MEM32(eax + 0x2D4);
    MEM32(edx) = edi;
    edi = MEM32(eax + 0x2D8);
    MEM32(edx + 4) = edi;
    eax = MEM32(eax + 0x2DC);
    _fb = (uint32_t)(0x2E) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x2E;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = esi << 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(edx + 8) = eax;
    ecx = MEM32(esi + ecx);
    POP32(esp, edi);
    MEM32(edx + 0xC) = ecx;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00123EB0
 * Original: 0x00123EB0 - 0x001240B5 (517 bytes, 155 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00123EB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00123EB0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x50C524);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x14);
    MEM32(esp + 0xC) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 8) = eax;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = ebx + 0x2C;
    goto loc_00123EE0;

    /* nop */
    /* nop */

loc_00123EE0: ;
    fp_push(MEMF(edx + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x2DC)); /* fmul dword ptr [esi + 0x2dc] */
    fp_push(MEMF(esi + 0x2D4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + -4)); /* fmul dword ptr [edx - 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esi + 0x2D8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx)); /* fmul dword ptr [edx] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x2E0)); /* fadd dword ptr [esi + 0x2e0] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x4964E8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x4964e8] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00123F16; /* jp: parity */

loc_00123F11: ;
    MEM8(esp + ecx + 8) = MEM8(esp + ecx + 8) | 1;
    _fa = (uint32_t)(MEM8(esp + ecx + 8)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */

loc_00123F16: ;
    fp_push(MEMF(esi + 0x2E8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx)); /* fmul dword ptr [edx] */
    fp_push(MEMF(esi + 0x2EC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 4)); /* fmul dword ptr [edx + 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esi + 0x2E4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + -4)); /* fmul dword ptr [edx - 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x2F0)); /* fadd dword ptr [esi + 0x2f0] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x4964E8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x4964e8] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00123F4C; /* jp: parity */

loc_00123F47: ;
    MEM8(esp + ecx + 8) = MEM8(esp + ecx + 8) | 2;
    _fa = (uint32_t)(MEM8(esp + ecx + 8)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */

loc_00123F4C: ;
    fp_push(MEMF(esi + 0x2F8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx)); /* fmul dword ptr [edx] */
    fp_push(MEMF(edx + -4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x2F4)); /* fmul dword ptr [esi + 0x2f4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(edx + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x2FC)); /* fmul dword ptr [esi + 0x2fc] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x300)); /* fadd dword ptr [esi + 0x300] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x4964E8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x4964e8] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00123F82; /* jp: parity */

loc_00123F7D: ;
    MEM8(esp + ecx + 8) = MEM8(esp + ecx + 8) | 4;
    _fa = (uint32_t)(MEM8(esp + ecx + 8)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */

loc_00123F82: ;
    fp_push(MEMF(esi + 0x308)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx)); /* fmul dword ptr [edx] */
    fp_push(MEMF(esi + 0x30C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 4)); /* fmul dword ptr [edx + 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esi + 0x304)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + -4)); /* fmul dword ptr [edx - 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x310)); /* fadd dword ptr [esi + 0x310] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x4964E8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x4964e8] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00123FB8; /* jp: parity */

loc_00123FB3: ;
    MEM8(esp + ecx + 8) = MEM8(esp + ecx + 8) | 8;
    _fa = (uint32_t)(MEM8(esp + ecx + 8)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */

loc_00123FB8: ;
    SET_LO8(eax, MEM8(esp + ecx + 8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012400B; /* je: equal / zero */

loc_00123FC0: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 8 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00123EE0; /* jl: less (signed <) */

loc_00123FCD: ;
    SET_LO8(eax, MEM8(esp + 0xE));
    SET_LO8(ecx, MEM8(esp + 0xF));
    SET_LO8(edx, MEM8(esp + 0xB));
    SET_LO8(ecx, LO8(ecx) & LO8(eax));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    eax = MEM32(esp + 0xC);
    SET_LO8(ecx, LO8(ecx) & HI8(eax));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(ecx, LO8(ecx) & LO8(eax));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(eax, MEM8(esp + 0xA));
    SET_LO8(ecx, LO8(ecx) & LO8(edx));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(ecx, LO8(ecx) & LO8(eax));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    eax = MEM32(esp + 8);
    SET_LO8(ecx, LO8(ecx) & HI8(eax));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(ecx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00124021; /* je: equal / zero */

loc_00123FF5: ;
    POP32(esp, esi);
    eax = 1;
    POP32(esp, ebx);
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0x00124005u); RECOMP_ABI_CALL(0x000EB37Bu, sub_000EB37B); /* call 0x000EB37B */

loc_00124005: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0012400B: ;
    POP32(esp, esi);
    eax = 3;
    POP32(esp, ebx);
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0x0012401Bu); RECOMP_ABI_CALL(0x000EB37Bu, sub_000EB37B); /* call 0x000EB37B */

loc_0012401B: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_00124021: ;
    PUSH32(esp, edi);
    edi = esi + 0x21C;
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x00124030u); RECOMP_ABI_CALL(0x0010FC50u, sub_0010FC50); /* call 0x0010FC50 */

loc_00124030: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00124087; /* je: equal / zero */

loc_00124034: ;
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0x0012403Cu); RECOMP_ABI_CALL(0x0010FC50u, sub_0010FC50); /* call 0x0010FC50 */

loc_0012403C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00124087; /* je: equal / zero */

loc_00124040: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = ebx + 0xBC;
    goto loc_00124050;

    /* nop */

loc_00124050: ;
    fp_push(MEMF(ecx + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x24C)); /* fmul dword ptr [esi + 0x24c] */
    fp_push(MEMF(ecx + -4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x244)); /* fmul dword ptr [esi + 0x244] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(ecx)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x248)); /* fmul dword ptr [esi + 0x248] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 8)); /* fadd dword ptr [ecx + 8] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x4964E8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x4964e8] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0012409E; /* jnp: not parity */

loc_0012407E: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 6 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00124050; /* jl: less (signed <) */

loc_00124087: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 4;
    POP32(esp, ebx);
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0x00124098u); RECOMP_ABI_CALL(0x000EB37Bu, sub_000EB37B); /* call 0x000EB37B */

loc_00124098: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0012409E: ;
    ecx = MEM32(esp + 0x14);
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 2;
    POP32(esp, ebx);
    PUSH32(esp, 0x001240AFu); RECOMP_ABI_CALL(0x000EB37Bu, sub_000EB37B); /* call 0x000EB37B */

loc_001240AF: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00123FE9
 * Original: 0x00123FE9 - 0x001240B5 (204 bytes, 68 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00123FE9(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00123FE9: ;
    SET_LO8(ecx, LO8(ecx) & LO8(eax));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    eax = MEM32(esp + 8);
    SET_LO8(ecx, LO8(ecx) & HI8(eax));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(ecx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00124021; /* je: equal / zero */

loc_00123FF5: ;
    POP32(esp, esi);
    eax = 1;
    POP32(esp, ebx);
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0x00124005u); RECOMP_ABI_CALL(0x000EB37Bu, sub_000EB37B); /* call 0x000EB37B */

loc_00124005: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_00124021: ;
    PUSH32(esp, edi);
    edi = esi + 0x21C;
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x00124030u); RECOMP_ABI_CALL(0x0010FC50u, sub_0010FC50); /* call 0x0010FC50 */

loc_00124030: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00124087; /* je: equal / zero */

loc_00124034: ;
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0x0012403Cu); RECOMP_ABI_CALL(0x0010FC50u, sub_0010FC50); /* call 0x0010FC50 */

loc_0012403C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00124087; /* je: equal / zero */

loc_00124040: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = ebx + 0xBC;
    goto loc_00124050;

    /* nop */

loc_00124050: ;
    fp_push(MEMF(ecx + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x24C)); /* fmul dword ptr [esi + 0x24c] */
    fp_push(MEMF(ecx + -4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x244)); /* fmul dword ptr [esi + 0x244] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(ecx)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x248)); /* fmul dword ptr [esi + 0x248] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 8)); /* fadd dword ptr [ecx + 8] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x4964E8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x4964e8] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0012409E; /* jnp: not parity */

loc_0012407E: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 6 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00124050; /* jl: less (signed <) */

loc_00124087: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 4;
    POP32(esp, ebx);
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0x00124098u); RECOMP_ABI_CALL(0x000EB37Bu, sub_000EB37B); /* call 0x000EB37B */

loc_00124098: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0012409E: ;
    ecx = MEM32(esp + 0x14);
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 2;
    POP32(esp, ebx);
    PUSH32(esp, 0x001240AFu); RECOMP_ABI_CALL(0x000EB37Bu, sub_000EB37B); /* call 0x000EB37B */

loc_001240AF: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001240C0
 * Original: 0x001240C0 - 0x00124120 (96 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001240C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001240C0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x60;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 0x14);
    ecx = MEM32(eax + 8);
    PUSH32(esp, ecx);
    edx = esp + 0x24;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001240DAu); RECOMP_ABI_CALL(0x00100027u, sub_00100027); /* call 0x00100027 */

loc_001240DA: ;
    eax = esp + 0x20;
    PUSH32(esp, eax);
    ecx = esp + 4;
    PUSH32(esp, ecx);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    MEM32(esp + 0xC) = 0;
    MEM32(esp + 0x10) = 0x3F800000;
    MEM32(esp + 0x14) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00124106u); RECOMP_ABI_CALL(0x000FF1A6u, sub_000FF1A6); /* call 0x000FF1A6 */

loc_00124106: ;
    ecx = MEM32(ebp + 0x10);
    edx = MEM32(ebp + 0xC);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    eax = MEM32(ebp + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0012411Cu); RECOMP_ABI_CALL(0x001006A9u, sub_001006A9); /* call 0x001006A9 */

loc_0012411C: ;
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00124120
 * Original: 0x00124120 - 0x0012414F (47 bytes, 16 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00124120(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00124120: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = esp + 8;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00124137u); RECOMP_ABI_CALL(0x0015CC00u, sub_0015CC00); /* call 0x0015CC00 */

loc_00124137: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    eax = MEM32(esp + 0x28);
    ecx = MEM32(esp + 0x2C);
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    MEMF(ecx) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00124150
 * Original: 0x00124150 - 0x00124443 (755 bytes, 205 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00124150(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00124150: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x194) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x194;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = ecx;
    eax = MEM32(ebx + 0x33C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x14) = 0;
    if (CMP_NE(_fa, _fb)) goto loc_00124199; /* jne: not equal / not zero */

loc_00124173: ;
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    esi = ebx + 0x340;
    PUSH32(esp, esi);
    ecx = ebx + 0x40;
    MEM32(esp + 0x24) = 0x3F800000;
    MEM32(esp + 0x28) = 0;
    PUSH32(esp, ecx);
    goto loc_00124317;

loc_00124199: ;
    fp_push(MEMF(ebx + 0x350)); /* fld float */
    eax = MEM32(esp + 0x14);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x49E43C)); /* fmul dword ptr [0x49e43c] */
    edx = ebx;
    MEM32(edx) = eax;
    MEM32(esp + 0x18) = 0;
    ecx = MEM32(esp + 0x18);
    MEM32(edx + 4) = ecx;
    ecx = MEM32(esp + 0x20);
    MEM32(esp + 0x1C) = 0x3F800000;
    eax = MEM32(esp + 0x1C);
    MEM32(edx + 8) = eax;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x49E438)); /* fmul dword ptr [0x49e438] */
    PUSH32(esp, ecx);
    MEM32(edx + 0xC) = ecx;
    edx = esp + 0x64;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001241E6u); RECOMP_ABI_CALL(0x000FFF32u, sub_000FFF32); /* call 0x000FFF32 */

loc_001241E6: ;
    fp_push(MEMF(ebx + 0x354)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x49E43C)); /* fmul dword ptr [0x49e43c] */
    PUSH32(esp, ecx);
    eax = esp + 0x124;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x49E438)); /* fmul dword ptr [0x49e438] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00124209u); RECOMP_ABI_CALL(0x000FFFACu, sub_000FFFAC); /* call 0x000FFFAC */

loc_00124209: ;
    fp_push(MEMF(ebx + 0x358)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x49E43C)); /* fmul dword ptr [0x49e43c] */
    PUSH32(esp, ecx);
    ecx = esp + 0x164;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x49E438)); /* fmul dword ptr [0x49e438] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0012422Cu); RECOMP_ABI_CALL(0x00100027u, sub_00100027); /* call 0x00100027 */

loc_0012422C: ;
    edx = esp + 0x120;
    PUSH32(esp, edx);
    eax = esp + 0x64;
    PUSH32(esp, eax);
    ecx = esp + 0xA8;
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00124246u); RECOMP_ABI_CALL(0x000FF9A4u, sub_000FF9A4); /* call 0x000FF9A4 */

loc_00124246: ;
    edx = esp + 0xE0;
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    eax = esp + 0x38;
    ecx = 0x10;
    esi = esp + 0xA8;
    edi = esp + 0xE8;
    PUSH32(esp, eax);
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0012426Eu); RECOMP_ABI_CALL(0x000FF1A6u, sub_000FF1A6); /* call 0x000FF1A6 */

loc_0012426E: ;
    esi = ebx + 0x340;
    fp_push(MEMF(esp + 0x30)); /* fld float */
    edx = ebx;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x49EED8)); /* fmul dword ptr [0x49eed8] */
    fp_push(MEMF(esp + 0x34)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x49EED8)); /* fmul dword ptr [0x49eed8] */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x38)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x49EED8)); /* fmul dword ptr [0x49eed8] */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi)); /* fadd dword ptr [esi] */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 4)); /* fadd dword ptr [esi + 4] */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 8)); /* fadd dword ptr [esi + 8] */
    MEMF(esp + 0x48) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x48);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEM32(esp + 0x1C) = ecx;
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x14);
    MEM32(edx) = eax;
    eax = MEM32(esp + 0x1C);
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x18);
    MEM32(edx + 4) = ecx;
    ecx = MEM32(esp + 0x20);
    MEM32(edx + 8) = eax;
    MEM32(edx + 0xC) = ecx;
    edx = esp + 0x160;
    PUSH32(esp, edx);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    ecx = esp + 0x58;
    PUSH32(esp, ecx);
    MEM32(esp + 0x20) = 0;
    MEM32(esp + 0x24) = 0x3F800000;
    MEM32(esp + 0x28) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0012430Cu); RECOMP_ABI_CALL(0x000FF1A6u, sub_000FF1A6); /* call 0x000FF1A6 */

loc_0012430C: ;
    edx = esp + 0x50;
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    eax = ebx + 0x40;
    PUSH32(esp, eax);

loc_00124317: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0012431Cu); RECOMP_ABI_CALL(0x001006A9u, sub_001006A9); /* call 0x001006A9 */

loc_0012431C: ;
    fp_push(MEMF(ebx + 0x2C)); /* fld float */
    ecx = MEM32(ebx + 0x28);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x497CAC)); /* fmul dword ptr [0x497cac] */
    edx = MEM32(ebx + 0x24);
    eax = MEM32(ebx + 0x20);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = ebx + 0x80;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00124341u); RECOMP_ABI_CALL(0x00100900u, sub_00100900); /* call 0x00100900 */

loc_00124341: ;
    fp_push(MEMF(ebx + 0x2C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x497CAC)); /* fmul dword ptr [0x497cac] */
    eax = ebx + 0xF8;
    ecx = ebx + 0xF4;
    MEMF(esp + 0x2C) = (float)fp_top(); /* fst */
    edx = MEM32(esp + 0x2C);
    MEMF(ebx + 0xF0) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0012436Cu); RECOMP_ABI_CALL(0x0010D170u, sub_0010D170); /* call 0x0010D170 */

loc_0012436C: ;
    fp_push(MEMF(esi)); /* fld float */
    edx = MEM32(esi + 8);
    fp_push(MEMF(esi + 4)); /* fld float */
    eax = MEM32(esi + 0xC);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMF(ebx + 0xD0) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = edx;
    MEM32(ebx + 0xD8) = ecx;
    MEMF(ebx + 0xD4) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0x28) = edx;
    edx = eax;
    MEM32(ebx + 0xDC) = edx;
    fp_push(MEMF(ebx)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi)); /* fsub dword ptr [esi] */
    MEM32(esp + 0x2C) = eax;
    eax = ebx + 0x10;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, eax);
    fp_push(MEMF(ebx + 4)); /* fld float */
    esi = 0x3F800000;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ebx + 0x344)); /* fsub dword ptr [ebx + 0x344] */
    PUSH32(esp, eax);
    MEM32(ebx + 0x1C) = esi;
    MEMF(ebx + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebx + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ebx + 0x348)); /* fsub dword ptr [ebx + 0x348] */
    MEMF(ebx + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001243D0u); RECOMP_ABI_CALL(0x000FF5D8u, sub_000FF5D8); /* call 0x000FF5D8 */

loc_001243D0: ;
    eax = esp + 0x30;
    PUSH32(esp, eax);
    ecx = ebx + 0xE0;
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001243E1u); RECOMP_ABI_CALL(0x000FEF0Eu, sub_000FEF0E); /* call 0x000FEF0E */

loc_001243E1: ;
    fp_push(MEMF(0x699C6C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x4978B0)); /* fadd dword ptr [0x4978b0] */
    PUSH32(esp, ecx);
    edx = esp + 0x28;
    eax = esp + 0x2C;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x49E43C)); /* fmul dword ptr [0x49e43c] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x49E438)); /* fmul dword ptr [0x49e438] */
    fp_top() = -fp_top(); /* fchs */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0012440Eu); RECOMP_ABI_CALL(0x0010D170u, sub_0010D170); /* call 0x0010D170 */

loc_0012440E: ;
    ecx = MEM32(esp + 0x34);
    edx = MEM32(esp + 0x30);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebx + 0xC0) = ecx;
    MEM32(ebx + 0xC4) = 0;
    MEM32(ebx + 0xC8) = edx;
    MEM32(ebx + 0xCC) = esi;
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0012443Cu); RECOMP_ABI_CALL(0x00123BD0u, sub_00123BD0); /* call 0x00123BD0 */

loc_0012443C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00124450
 * Original: 0x00124450 - 0x001244ED (157 bytes, 37 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00124450(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00124450: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    PUSH32(esp, esi);
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(esp + 0x2C)); /* fdiv dword ptr [esp + 0x2c] */
    esi = ecx;
    eax = MEM32(esp + 0x30);
    ecx = MEM32(esp + 0x34);
    edx = esp + 4;
    MEM32(esi + 0x24) = eax;
    PUSH32(esp, edx);
    eax = esp + 0x18;
    MEM32(esi + 0x28) = ecx;
    PUSH32(esp, eax);
    ecx = esi + 0xFC;
    MEM32(esp + 0x1C) = 0xBF800000u;
    MEM32(esp + 0x20) = 0xBF800000u;
    MEM32(esp + 0x24) = 0;
    MEM32(esp + 0xC) = 0x3F800000;
    MEM32(esp + 0x10) = 0x3F800000;
    MEM32(esp + 0x14) = 0x3F800000;
    MEMF(esi + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x30)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x496B98)); /* fmul dword ptr [0x496b98] */
    fp_push(MEMD(0x4AB5C0)); /* fld double */
    { fp_st1() = atan2(fp_st1(), fp_top()); fp_pop(); } /* fpatan */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x4AAA98)); /* fmul dword ptr [0x4aaa98] */
    MEMF(esi + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x34)); /* fld float */
    fp_push(MEMD(0x4AB5C0)); /* fld double */
    { fp_st1() = atan2(fp_st1(), fp_top()); fp_pop(); } /* fpatan */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x4AAA98)); /* fmul dword ptr [0x4aaa98] */
    MEMF(esi + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x001244E4u); RECOMP_ABI_CALL(0x00111F50u, sub_00111F50); /* call 0x00111F50 */

loc_001244E4: ;
    eax = esi;
    POP32(esp, esi);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00124630
 * Original: 0x00124630 - 0x00124631 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00124630(void)
{

loc_00124630: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00124640
 * Original: 0x00124640 - 0x00124641 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00124640(void)
{

loc_00124640: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00124910
 * Original: 0x00124910 - 0x00124911 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00124910(void)
{

loc_00124910: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00124950
 * Original: 0x00124950 - 0x00124951 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00124950(void)
{

loc_00124950: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00124960
 * Original: 0x00124960 - 0x00124973 (19 bytes, 6 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00124960(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00124960: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0012496Fu); RECOMP_ABI_CALL(0x002A9EA3u, sub_002A9EA3); /* call 0x002A9EA3 */

loc_0012496F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00124980
 * Original: 0x00124980 - 0x0012499D (29 bytes, 11 insns)
 * CC: cdecl, 1 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00124980(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00124980: ;
    fp_push(MEMF(ecx + 8)); /* fld float */
    eax = MEM32(esp + 4);
    fp_top() = -fp_top(); /* fchs */
    fp_push(MEMF(ecx + 4)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    fp_push(MEMF(ecx)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001249A0
 * Original: 0x001249A0 - 0x00124A00 (96 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001249A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_001249A0: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(esp + 0x1C);
    eax = MEM32(esp + 0x18);
    fp_push(MEMF(ecx + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 4)); /* fmul dword ptr [eax + 4] */
    fp_push(MEMF(eax + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 4)); /* fmul dword ptr [ecx + 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp);
    fp_push(MEMF(eax + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx)); /* fmul dword ptr [ecx] */
    fp_push(MEMF(ecx + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax)); /* fmul dword ptr [eax] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 4)); /* fmul dword ptr [ecx + 4] */
    fp_push(MEMF(ecx)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 4)); /* fmul dword ptr [eax + 4] */
    eax = MEM32(esp + 0x14);
    ecx = eax;
    MEM32(ecx) = edx;
    edx = MEM32(esp + 4);
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    MEM32(ecx + 4) = edx;
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 8);
    MEM32(ecx + 8) = edx;
    edx = MEM32(esp + 0xC);
    MEM32(ecx + 0xC) = edx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00124A00
 * Original: 0x00124A00 - 0x00124A64 (100 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00124A00(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00124A00: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    fp_push(MEMF(esi)); /* fld float */
    PUSH32(esp, edi);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x496454)); /* fadd dword ptr [0x496454] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x4AB5D4)); /* fmul dword ptr [0x4ab5d4] */
    PUSH32(esp, 0x00124A19u); RECOMP_ABI_CALL(0x000EB38Cu, sub_000EB38C); /* call 0x000EB38C */

loc_00124A19: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x4AB5D0)); /* fmul dword ptr [0x4ab5d0] */
    edi = eax;
    PUSH32(esp, 0x00124A2Au); RECOMP_ABI_CALL(0x000EB38Cu, sub_000EB38C); /* call 0x000EB38C */

loc_00124A2A: ;
    fp_push(MEMF(esi + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x496454)); /* fadd dword ptr [0x496454] */
    eax = eax << 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = edi << 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x4AB5D4)); /* fmul dword ptr [0x4ab5d4] */
    PUSH32(esp, 0x00124A46u); RECOMP_ABI_CALL(0x000EB38Cu, sub_000EB38C); /* call 0x000EB38C */

loc_00124A46: ;
    fp_push(MEMF(esi + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x496454)); /* fadd dword ptr [0x496454] */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = edi << 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x49F310)); /* fmul dword ptr [0x49f310] */
    PUSH32(esp, 0x00124A5Fu); RECOMP_ABI_CALL(0x000EB38Cu, sub_000EB38C); /* call 0x000EB38C */

loc_00124A5F: ;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00124A70
 * Original: 0x00124A70 - 0x00124A8F (31 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00124A70(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00124A70: ;
    eax = ZX8(MEM8(ecx + 3));
    edx = ZX8(MEM8(ecx));
    eax = eax << 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = ZX8(MEM8(ecx + 1));
    ecx = ZX8(MEM8(ecx + 2));
    eax = eax << 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax << 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00124A90
 * Original: 0x00124A90 - 0x00124A97 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00124A90(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00124A90: ;
    fp_push(MEMF(ecx + 0x584)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00124AA0
 * Original: 0x00124AA0 - 0x00124AAA (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00124AA0(void)
{

loc_00124AA0: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x68) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00124AB0
 * Original: 0x00124AB0 - 0x00124AC1 (17 bytes, 5 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00124AB0(void)
{

loc_00124AB0: ;
    eax = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0xC) = edx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00124AD0
 * Original: 0x00124AD0 - 0x00124AD7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00124AD0(void)
{

loc_00124AD0: ;
    eax = ecx + 0xD0;
    esp += 4; return; /* ret */

}

/**
 * sub_00124AE0
 * Original: 0x00124AE0 - 0x00124AFB (27 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00124AE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00124AE0: ;
    eax = MEM32(esp + 4);
    edx = 0x50EB38;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    goto loc_00124AF0;

    /* nop */

loc_00124AF0: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00124AF0; /* jne: not equal / not zero */

loc_00124AFA: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00124B00
 * Original: 0x00124B00 - 0x00124BD4 (212 bytes, 72 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00124B00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00124B00: ;
    _fb = (uint32_t)(0x54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x54;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x50C524);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x60);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(esp + 0x54) = eax;
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_00124BB6; /* je: equal / zero */

loc_00124B1A: ;
    edi = MEM32(esp + 0x60);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00124BB6; /* je: equal / zero */

loc_00124B26: ;
    edx = edi;
    eax = esi;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    /* nop */

loc_00124B30: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00124B30; /* jne: not equal / not zero */

loc_00124B3A: ;
    _fa = (uint32_t)(MEM8(esi + 1)) & 0xFFu; _fb = (uint32_t)(0x3A) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 1), 0x3A (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00124B54; /* je: equal / zero */

loc_00124B40: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x50EB38);
    PUSH32(esp, 0x4A826C);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00124B51u); RECOMP_ABI_CALL(0x000EB2C2u, sub_000EB2C2); /* call 0x000EB2C2 */

loc_00124B51: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00124B54: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 3);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x80000000u);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00124B69u); RECOMP_ABI_CALL(0x000FC1E2u, sub_000FC1E2); /* call 0x000FC1E2 */

loc_00124B69: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00124B9F; /* jne: not equal / not zero */

loc_00124B6E: ;
    PUSH32(esp, esi);
    eax = esp + 0xC;
    PUSH32(esp, 0x4AB604);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00124B7Eu); RECOMP_ABI_CALL(0x000EB2C2u, sub_000EB2C2); /* call 0x000EB2C2 */

loc_00124B7E: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 8;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00124B8Bu); RECOMP_ABI_CALL(0x000F84F6u, sub_000F84F6); /* call 0x000F84F6 */

loc_00124B8B: ;
    POP32(esp, edi);
    eax = 0x82000004u;
    POP32(esp, esi);
    ecx = MEM32(esp + 0x50);
    PUSH32(esp, 0x00124B9Bu); RECOMP_ABI_CALL(0x000EB37Bu, sub_000EB37B); /* call 0x000EB37B */

loc_00124B9B: ;
    _fb = (uint32_t)(0x54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x54;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00124B9F: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00124BA5u); RECOMP_ABI_CALL(0x000F8528u, sub_000F8528); /* call 0x000F8528 */

loc_00124BA5: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    ecx = MEM32(esp + 0x50);
    PUSH32(esp, 0x00124BB2u); RECOMP_ABI_CALL(0x000EB37Bu, sub_000EB37B); /* call 0x000EB37B */

loc_00124BB2: ;
    _fb = (uint32_t)(0x54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x54;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00124BB6: ;
    PUSH32(esp, 0x4AB5D8);
    PUSH32(esp, 0x00124BC0u); RECOMP_ABI_CALL(0x000F84F6u, sub_000F84F6); /* call 0x000F84F6 */

loc_00124BC0: ;
    ecx = MEM32(esp + 0x58);
    POP32(esp, edi);
    eax = 0x80070057u;
    POP32(esp, esi);
    PUSH32(esp, 0x00124BD0u); RECOMP_ABI_CALL(0x000EB37Bu, sub_000EB37B); /* call 0x000EB37B */

loc_00124BD0: ;
    _fb = (uint32_t)(0x54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x54;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00124BE0
 * Original: 0x00124BE0 - 0x00124CBB (219 bytes, 59 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00124BE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00124BE0: ;
    eax = MEM32(0x63932C);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00124C0E; /* jne: not equal / not zero */

loc_00124BEC: ;
    eax = esp;
    PUSH32(esp, eax);
    MEM32(0x63932C) = 1;
    PUSH32(esp, 0x00124BFFu); RECOMP_ABI_CALL(0x000F47CBu, sub_000F47CB); /* call 0x000F47CB */

loc_00124BFF: ;
    fp_push((double)SMEM64(esp)); /* fild */
    fp_top() = RECOMP_FP_PC(MEMF(0x496454) / fp_top()); /* fdivr dword ptr [0x496454] */
    MEMF(0x639328) = (float)fp_top(); fp_pop(); /* fstp */

loc_00124C0E: ;
    ecx = esp + 8;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00124C18u); RECOMP_ABI_CALL(0x000F47BAu, sub_000F47BA); /* call 0x000F47BA */

loc_00124C18: ;
    fp_push((double)SMEM64(esp + 8)); /* fild */
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x639328)); /* fmul dword ptr [0x639328] */
    if (CMP_NE(_fa, _fb)) goto loc_00124C3A; /* jne: not equal / not zero */

loc_00124C2A: ;
    MEMF(0x639324) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x4964E8)); /* fld float */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00124C3A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00124C49; /* jne: not equal / not zero */

loc_00124C3F: ;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x639324)); /* fsub dword ptr [0x639324] */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00124C49: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00124C66; /* jne: not equal / not zero */

loc_00124C4E: ;
    fp_push(MEMF(0x639320)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_st1() - fp_top()); /* fsubr st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x639324)); /* fadd dword ptr [0x639324] */
    MEMF(0x639324) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00124C66: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00124C75; /* jne: not equal / not zero */

loc_00124C6B: ;
    MEMF(0x639320) = (float)fp_top(); /* fst */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00124C75: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00124C98; /* jne: not equal / not zero */

loc_00124C7A: ;
    fp_push(MEMF(0x639320)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x49D44C)); /* fadd dword ptr [0x49d44c] */
    fp_top() = RECOMP_FP_PC(fp_st1() - fp_top()); /* fsubr st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x639324)); /* fadd dword ptr [0x639324] */
    MEMF(0x639324) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00124C98: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00124CB7; /* jne: not equal / not zero */

loc_00124C9D: ;
    fp_push(MEMF(0x639320)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x49D44C)); /* fsub dword ptr [0x49d44c] */
    fp_top() = RECOMP_FP_PC(fp_st1() - fp_top()); /* fsubr st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x639324)); /* fadd dword ptr [0x639324] */
    MEMF(0x639324) = (float)fp_top(); fp_pop(); /* fstp */

loc_00124CB7: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00124CC0
 * Original: 0x00124CC0 - 0x00124D01 (65 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00124CC0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00124CC0: ;
    edx = MEM32(esp + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    ecx = 0x11;
    edi = edx;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = MEM32(esp + 0xC);
    ecx = eax;
    MEM32(edx + 0x10) = eax;
    eax = MEM32(esp + 0x10);
    MEM32(edx) = ecx;
    ecx = eax;
    MEM32(edx + 0x14) = eax;
    eax = MEM32(esp + 0x14);
    MEM32(edx + 4) = ecx;
    ecx = eax;
    MEM32(edx + 0x18) = eax;
    eax = MEM32(esp + 0x18);
    MEM32(edx + 8) = ecx;
    ecx = eax;
    MEM32(edx + 0x1C) = eax;
    MEM32(edx + 0xC) = ecx;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_00124D10
 * Original: 0x00124D10 - 0x00124D74 (100 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00124D10(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00124D10: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(esp + 0x20);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x18);
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x1A;
    edi = esi;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = MEM32(esp + 0x24);
    eax = MEM32(esp + 0x20);
    MEM32(esi) = eax;
    eax = 0x3F800000;
    MEM32(esi + 0x34) = ecx;
    MEM32(esp + 8) = ecx;
    ecx = esp + 8;
    MEM32(esi + 0x38) = edx;
    MEM32(esp + 0xC) = edx;
    MEM32(esi + 4) = eax;
    MEM32(esi + 8) = eax;
    MEM32(esi + 0xC) = eax;
    eax = MEM32(esp + 0x2C);
    PUSH32(esp, ecx);
    edx = esi + 0x40;
    PUSH32(esp, edx);
    MEM32(esi + 0x3C) = eax;
    MEM32(esp + 0x18) = eax;
    PUSH32(esp, 0x00124D67u); RECOMP_ABI_CALL(0x000FEF0Eu, sub_000FEF0E); /* call 0x000FEF0E */

loc_00124D67: ;
    POP32(esp, edi);
    MEM32(esi + 0x4C) = 0x447A0000;
    POP32(esp, esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001251D0
 * Original: 0x001251D0 - 0x001253FB (555 bytes, 152 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001251D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_001251D0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x88) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x88;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    fp_push(MEMF(0x4964E8)); /* fld float */
    eax = MEM32(ebp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    MEMF(esp + 0x38) = (float)fp_top(); /* fst */
    MEMF(esp + 0x3C) = (float)fp_top(); /* fst */
    PUSH32(esp, esi);
    MEMF(esp + 0x44) = (float)fp_top(); /* fst */
    PUSH32(esp, edi);
    fp_push(MEMF(0x496454)); /* fld float */
    MEMF(esp + 0x20) = (float)fp_top(); /* fst */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp + 0x14) = (float)fp_top(); /* fst */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_A(_fa, _fb)) goto loc_001253C8; /* ja: above (unsigned >) */

loc_00125222: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x1253FC); /* switch: 6 entries, 6 targets */
    if (_jt == 0x00125229u) goto loc_00125229;
    if (_jt == 0x00125255u) goto loc_00125255;
    if (_jt == 0x0012526Eu) goto loc_0012526E;
    if (_jt == 0x0012529Du) goto loc_0012529D;
    if (_jt == 0x00125304u) goto loc_00125304;
    if (_jt == 0x00125364u) goto loc_00125364;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00125229: ;
    MEMF(esp + 0x30) = (float)fp_top(); /* fst */
    eax = MEM32(esp + 0x30);
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x34);
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    MEMF(esp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x38);
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_001252CB;

loc_00125255: ;
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    MEM32(esp + 0x30) = 0xBF800000u;
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    MEMF(esp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_00125314;

loc_0012526E: ;
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x30);
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x34);
    MEMF(esp + 0x38) = (float)fp_top(); /* fst */
    eax = MEM32(esp + 0x38);
    MEMF(esp + 0x30) = (float)fp_top(); /* fst */
    MEM32(esp + 0x38) = 0xBF800000u;
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_00125392;

loc_0012529D: ;
    fp_pop(); /* fstp st(0) */
    MEM32(esp + 0x34) = 0xBF800000u;
    ecx = MEM32(esp + 0x34);
    MEMF(esp + 0x30) = (float)fp_top(); /* fst */
    eax = MEM32(esp + 0x30);
    MEMF(esp + 0x38) = (float)fp_top(); /* fst */
    edx = MEM32(esp + 0x38);
    MEMF(esp + 0x30) = (float)fp_top(); /* fst */
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0x38) = 0x3F800000;

loc_001252CB: ;
    MEM32(esp + 0x20) = eax;
    eax = MEM32(esp + 0x3C);
    MEM32(esp + 0x24) = ecx;
    ecx = MEM32(esp + 0x30);
    MEM32(esp + 0x28) = edx;
    edx = MEM32(esp + 0x34);
    MEM32(esp + 0x2C) = eax;
    eax = MEM32(esp + 0x38);
    MEM32(esp + 0x10) = ecx;
    ecx = MEM32(esp + 0x3C);
    MEM32(esp + 0x14) = edx;
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x1C) = ecx;
    goto loc_001253CC;

loc_00125304: ;
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp + 0x38) = (float)fp_top(); /* fst */

loc_00125314: ;
    edx = MEM32(esp + 0x30);
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    eax = MEM32(esp + 0x34);
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x38);
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0x20) = edx;
    edx = MEM32(esp + 0x3C);
    MEM32(esp + 0x24) = eax;
    MEMF(esp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x30);
    MEM32(esp + 0x28) = ecx;
    ecx = MEM32(esp + 0x34);
    MEM32(esp + 0x2C) = edx;
    edx = MEM32(esp + 0x38);
    MEM32(esp + 0x10) = eax;
    eax = MEM32(esp + 0x3C);
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x18) = edx;
    MEM32(esp + 0x1C) = eax;
    goto loc_001253CC;

loc_00125364: ;
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    MEM32(esp + 0x38) = 0xBF800000u;
    eax = MEM32(esp + 0x38);
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x30);
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x34);
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */

loc_00125392: ;
    MEM32(esp + 0x20) = ecx;
    ecx = MEM32(esp + 0x3C);
    MEM32(esp + 0x24) = edx;
    edx = MEM32(esp + 0x30);
    MEM32(esp + 0x28) = eax;
    eax = MEM32(esp + 0x34);
    MEM32(esp + 0x2C) = ecx;
    ecx = MEM32(esp + 0x38);
    MEM32(esp + 0x10) = edx;
    edx = MEM32(esp + 0x3C);
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x18) = ecx;
    MEM32(esp + 0x1C) = edx;
    goto loc_001253CC;

loc_001253C8: ;
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */

loc_001253CC: ;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    edx = esp + 0x48;
    PUSH32(esp, edx);
    eax = esp + 0x5C;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001253E5u); RECOMP_ABI_CALL(0x001006A9u, sub_001006A9); /* call 0x001006A9 */

loc_001253E5: ;
    eax = MEM32(ebp + 8);
    ecx = 0x10;
    esi = esp + 0x50;
    edi = eax;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001257BE
 * Original: 0x001257BE - 0x001257FB (61 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001257BE(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001257BE: ;
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    edx = esp + 0x34;
    PUSH32(esp, 0x12);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001257CDu); RECOMP_ABI_CALL(0x002AA08Du, sub_002AA08D); /* call 0x002AA08D */

loc_001257CD: ;
    eax = MEM32(esp + 0x2C);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001257DBu); RECOMP_ABI_CALL(0x002AA08Du, sub_002AA08D); /* call 0x002AA08D */

loc_001257DB: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001257E1u); RECOMP_ABI_CALL(0x000F3DDFu, sub_000F3DDF); /* call 0x000F3DDF */

loc_001257E1: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001257E7u); RECOMP_ABI_CALL(0x000EB425u, sub_000EB425); /* call 0x000EB425 */

loc_001257E7: ;
    ecx = MEM32(esp + 0x68);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    PUSH32(esp, 0x001257F7u); RECOMP_ABI_CALL(0x000EB37Bu, sub_000EB37B); /* call 0x000EB37B */

loc_001257F7: ;
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x3C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00125800
 * Original: 0x00125800 - 0x0012591D (285 bytes, 93 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00125800(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00125800: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    ecx = ebx;
    PUSH32(esp, esi);
    ecx = ecx & 0xE;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 4 (32-bit) */
    PUSH32(esp, edi);
    MEM32(eax) = 0x20000000;
    esi = 2;
    if (CMP_NE(_fa, _fb)) goto loc_00125829; /* jne: not equal / not zero */

loc_00125820: ;
    MEM32(eax + 4) = 0x40420000;
    goto loc_0012586B;

loc_00125829: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 6 (32-bit) */
    MEM32(eax + 4) = 0x40320000;
    if (CMP_NE(_fa, _fb)) goto loc_0012583E; /* jne: not equal / not zero */

loc_00125835: ;
    MEM32(eax + 8) = 0x40120001;
    goto loc_00125866;

loc_0012583E: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 8 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012584C; /* jne: not equal / not zero */

loc_00125843: ;
    MEM32(eax + 8) = 0x40220001;
    goto loc_00125866;

loc_0012584C: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xA (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012585A; /* jne: not equal / not zero */

loc_00125851: ;
    MEM32(eax + 8) = 0x40320001;
    goto loc_00125866;

loc_0012585A: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xC (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012586B; /* jne: not equal / not zero */

loc_0012585F: ;
    MEM32(eax + 8) = 0x40420001;

loc_00125866: ;
    esi = 3;

loc_0012586B: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00125878; /* je: equal / zero */

loc_00125870: ;
    MEM32(eax + esi * 4) = 0x40320002;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00125878: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 0x40 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00125885; /* je: equal / zero */

loc_0012587D: ;
    MEM32(eax + esi * 4) = 0x40400003;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00125885: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if ((((uint8_t)((uint8_t)(_fa) - (uint8_t)(_fb)) >> 7) == 0)) goto loc_00125891; /* jns: not sign (positive) */

loc_00125889: ;
    MEM32(eax + esi * 4) = 0x40400004;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00125891: ;
    ecx = ebx;
    ecx = ecx >> 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx & 0xF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esp + 0x10) = ecx;
    edi = 0;
    if ((_fa == 0)) goto loc_00125910; /* jbe: below or equal (unsigned <=) */

loc_001258A4: ;
    PUSH32(esp, ebp);
    ebp = 0x10;
    /* nop */

loc_001258B0: ;
    ecx = ebp;
    edx = 1;
    edx = edx << LO8(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = 0x22;
    ecx = edx;
    ecx = ecx & ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001258CB; /* jne: not equal / not zero */

loc_001258C6: ;
    eax = 0x32;

loc_001258CB: ;
    ecx = ebp;
    edx = 2;
    edx = edx << LO8(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = edx;
    ecx = ecx & ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001258E1; /* jne: not equal / not zero */

loc_001258DC: ;
    eax = 0x42;

loc_001258E1: ;
    ecx = MEM32(esp + 0x18);
    eax = eax | 0x4000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = eax << 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edi + 9;
    eax = eax | edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ecx + esi * 4) = eax;
    eax = MEM32(esp + 0x14);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 2;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001258B0; /* jb: below (unsigned <) */

loc_00125902: ;
    POP32(esp, ebp);
    POP32(esp, edi);
    MEM32(ecx + esi * 4) = 0xFFFFFFFFu;
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00125910: ;
    POP32(esp, edi);
    MEM32(eax + esi * 4) = 0xFFFFFFFFu;
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00125920
 * Original: 0x00125920 - 0x00125921 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00125920(void)
{

loc_00125920: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00125930
 * Original: 0x00125930 - 0x00125931 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00125930(void)
{

loc_00125930: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00125940
 * Original: 0x00125940 - 0x00125941 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00125940(void)
{

loc_00125940: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00125950
 * Original: 0x00125950 - 0x00125951 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00125950(void)
{

loc_00125950: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00125960
 * Original: 0x00125960 - 0x001259C6 (102 bytes, 35 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00125960(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00125960: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    fp_push(MEMF(ecx)); /* fld float */
    edx = MEM32(esp + 0xC);
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    MEMF(eax + 0x70) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + 0x40) = (float)fp_top(); /* fst */
    MEMF(eax + 0x30) = (float)fp_top(); /* fst */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edx)); /* fld float */
    MEMF(eax + 0x60) = (float)fp_top(); /* fst */
    MEMF(eax + 0x50) = (float)fp_top(); /* fst */
    MEMF(eax + 0x20) = (float)fp_top(); /* fst */
    MEMF(eax + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 4)); /* fld float */
    MEMF(eax + 0x34) = (float)fp_top(); /* fst */
    MEMF(eax + 0x24) = (float)fp_top(); /* fst */
    MEMF(eax + 0x14) = (float)fp_top(); /* fst */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edx + 4)); /* fld float */
    MEMF(eax + 0x74) = (float)fp_top(); /* fst */
    MEMF(eax + 0x64) = (float)fp_top(); /* fst */
    MEMF(eax + 0x54) = (float)fp_top(); /* fst */
    MEMF(eax + 0x44) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 8)); /* fld float */
    MEMF(eax + 0x58) = (float)fp_top(); /* fst */
    MEMF(eax + 0x48) = (float)fp_top(); /* fst */
    MEMF(eax + 0x18) = (float)fp_top(); /* fst */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edx + 8)); /* fld float */
    MEMF(eax + 0x78) = (float)fp_top(); /* fst */
    MEMF(eax + 0x68) = (float)fp_top(); /* fst */
    MEMF(eax + 0x38) = (float)fp_top(); /* fst */
    MEMF(eax + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001259D0
 * Original: 0x001259D0 - 0x001259D1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001259D0(void)
{

loc_001259D0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001259E0
 * Original: 0x001259E0 - 0x001259E1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001259E0(void)
{

loc_001259E0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001259F0
 * Original: 0x001259F0 - 0x00125A65 (117 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001259F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_001259F0: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x638988);
    ecx = MEM32(esp + 0x14);
    _fb = (uint32_t)(0xD0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xD0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = esp + 8;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00125A0Du); RECOMP_ABI_CALL(0x000FF165u, sub_000FF165); /* call 0x000FF165 */

loc_00125A0D: ;
    fp_push(MEMF(0x496454)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(esp + 0xC)); /* fdiv dword ptr [esp + 0xc] */
    eax = MEM32(0x638988);
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFF);
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 0xC4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x10)); /* fsub dword ptr [esp + 0x10] */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    PUSH32(esp, 0x00125A51u); RECOMP_ABI_CALL(0x000EB38Cu, sub_000EB38C); /* call 0x000EB38C */

loc_00125A51: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00125A5Bu); RECOMP_ABI_CALL(0x000EB38Cu, sub_000EB38C); /* call 0x000EB38C */

loc_00125A5B: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00125A61u); RECOMP_ABI_CALL(0x00152960u, sub_00152960); /* call 0x00152960 */

loc_00125A61: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00125A70
 * Original: 0x00125A70 - 0x00125AA5 (53 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00125A70(void)
{

loc_00125A70: ;
    eax = MEM32(esp + 0x20);
    ecx = MEM32(esp + 0x1C);
    edx = MEM32(esp + 0x18);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x1C);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = 0x639760;
    PUSH32(esp, 0x00125AA4u); RECOMP_ABI_CALL(0x0012FB70u, sub_0012FB70); /* call 0x0012FB70 */

loc_00125AA4: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00125AB0
 * Original: 0x00125AB0 - 0x00125AD6 (38 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00125AB0(void)
{

loc_00125AB0: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = 0x639760;
    PUSH32(esp, 0x00125AD5u); RECOMP_ABI_CALL(0x0012FB00u, sub_0012FB00); /* call 0x0012FB00 */

loc_00125AD5: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00125AE0
 * Original: 0x00125AE0 - 0x00125B2D (77 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00125AE0(void)
{

loc_00125AE0: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x639CE4);
    PUSH32(esp, 0);
    MEM32(esp + 4) = eax;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    eax = MEM32(0x638988);
    MEM32(0x639CE4) = 0x3F800000;
    ecx = MEM32(eax + 0xC4);
    edx = MEM32(eax + 0xC0);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = 0x639760;
    PUSH32(esp, 0x00125B23u); RECOMP_ABI_CALL(0x0012FB70u, sub_0012FB70); /* call 0x0012FB70 */

loc_00125B23: ;
    eax = MEM32(esp);
    MEM32(0x639CE4) = eax;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00125C20
 * Original: 0x00125C20 - 0x00125C94 (116 bytes, 37 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00125C20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00125C20: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x49E43C)); /* fmul dword ptr [0x49e43c] */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x4A08A4)); /* fsub dword ptr [0x4a08a4] */
    MEMF(esp + 4) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x4A08A0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x4a08a0] */
    fp_push(MEMF(esp + 4)); /* fld float */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00125C4D; /* jp: parity */

loc_00125C45: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x49E43C)); /* fadd dword ptr [0x49e43c] */
    goto loc_00125C64;

loc_00125C4D: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x4A08A4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x4a08a4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00125C68; /* jne: not equal / not zero */

loc_00125C5A: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x49E43C)); /* fsub dword ptr [0x49e43c] */

loc_00125C64: ;
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */

loc_00125C68: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00125C7Eu); RECOMP_ABI_CALL(0x0010D170u, sub_0010D170); /* call 0x0010D170 */

loc_00125C7E: ;
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi)); /* fmul dword ptr [edi] */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(edi) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, edi);
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi)); /* fmul dword ptr [esi] */
    MEMF(esi) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, esi);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00125D20
 * Original: 0x00125D20 - 0x00125DDC (188 bytes, 63 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00125D20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00125D20: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x638988);
    fp_push(MEMF(eax + 0xC0)); /* fld float */
    ecx = MEM32(esp + 0x24);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x496B98)); /* fmul dword ptr [0x496b98] */
    edx = MEM32(esp + 0x18);
    fp_push((double)SMEM32(esp + 8)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_st1()); /* fadd st(1) */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_st1()); /* fadd st(1) */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(eax + 0xC4)); /* fld float */
    eax = ecx;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x496B98)); /* fmul dword ptr [0x496b98] */
    eax = eax << 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    fp_push((double)SMEM32(esp + 0xC)); /* fild */
    eax = eax | edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = MEM32(esp + 0x1C);
    eax = eax << 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_top()); /* fadd st(0), st(0) */
    eax = eax | edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = MEM32(esp + 0x20);
    eax = eax << 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_st1()); /* fadd st(1) */
    eax = eax | edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFF (32-bit) */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_top()); /* fadd st(0), st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_st1()); /* fadd st(1) */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    if (CMP_EQ(_fa, _fb)) goto loc_00125DB9; /* je: equal / zero */

loc_00125D96: ;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = 0x639760;
    PUSH32(esp, 0x00125DB7u); RECOMP_ABI_CALL(0x0012FB00u, sub_0012FB00); /* call 0x0012FB00 */

loc_00125DB7: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00125DB9: ;
    ecx = MEM32(esp + 8);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = 0x639760;
    PUSH32(esp, 0x00125DDAu); RECOMP_ABI_CALL(0x0012FB00u, sub_0012FB00); /* call 0x0012FB00 */

loc_00125DDA: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00125DE0
 * Original: 0x00125DE0 - 0x00125E10 (48 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00125DE0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00125DE0: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(eax + 0xC);
    edx = MEM32(eax + 8);
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 4);
    PUSH32(esp, edx);
    edx = MEM32(eax);
    eax = MEM32(esp + 0x18);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x18);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00125E0Cu); RECOMP_ABI_CALL(0x00125D20u, sub_00125D20); /* call 0x00125D20 */

loc_00125E0C: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00125E10
 * Original: 0x00125E10 - 0x001260EF (735 bytes, 220 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00125E10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00125E10: ;
    SET_LO8(eax, MEM8(esp + 0x18));
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x58);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    SET_LO8(eax, MEM8(esi + 3));
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_00125F40; /* je: equal / zero */

loc_00125E28: ;
    fp_push((double)SMEM32(esp + 0x4C)); /* fild */
    edx = ZX8(LO8(eax));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xFF (8-bit) */
    eax = ZX8(MEM8(esi));
    MEMF(esp + 0x38) = (float)fp_top(); /* fst */
    MEMF(esp + 0x10) = (float)fp_top(); /* fst */
    fp_push((double)SMEM32(esp + 0x50)); /* fild */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    edx = edx << 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = ZX8(MEM8(esi + 2));
    MEMF(esp + 0x3C) = (float)fp_top(); /* fst */
    MEMF(esp + 0x14) = (float)fp_top(); /* fst */
    fp_push((double)SMEM32(esp + 0x54)); /* fild */
    MEM8(esp + 0xC) = LO8(ecx);
    ecx = ZX8(MEM8(esi + 1));
    MEMF(esp + 8) = (float)fp_top(); /* fst */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    edi = MEM32(esp + 0xC);
    edx = edx << 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(esp + 0x5C)); /* fild */
    edx = edx << 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    ecx = esp + 0x20;
    MEMF(esp + 0x68) = (float)fp_top(); /* fst */
    PUSH32(esp, ecx);
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    edx = esp + 0x34;
    PUSH32(esp, edx);
    eax = esp + 0x48;
    PUSH32(esp, eax);
    ecx = 0x63F5E0;
    MEM32(esp + 0x54) = 0;
    MEM32(esp + 0x44) = 0;
    MEM32(esp + 0x34) = 0;
    PUSH32(esp, 0x00125EBDu); RECOMP_ABI_CALL(0x0013FC90u, sub_0013FC90); /* call 0x0013FC90 */

loc_00125EBD: ;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esp + 0x60);
    eax = MEM32(esp + 8);
    MEM32(esp + 0x38) = ecx;
    ecx = edx;
    MEM32(esp + 0x2C) = ecx;
    ecx = ZX8(MEM8(esi + 3));
    MEM32(esp + 0x3C) = edx;
    edx = eax;
    ecx = ecx << 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(esp + 0x18) = edx;
    edx = ZX8(MEM8(esi));
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = ZX8(MEM8(esi + 2));
    MEM32(esp + 0x28) = eax;
    eax = MEM32(esp + 0x14);
    MEM32(esp + 0x1C) = eax;
    eax = ZX8(MEM8(esi + 1));
    ecx = ecx << 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ecx << 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, edi);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    ecx = esp + 0x34;
    PUSH32(esp, ecx);
    edx = esp + 0x48;
    PUSH32(esp, edx);
    ecx = 0x63F5E0;
    MEM32(esp + 0x54) = 0;
    MEM32(esp + 0x44) = 0;
    MEM32(esp + 0x34) = 0;
    PUSH32(esp, 0x00125F3Au); RECOMP_ABI_CALL(0x0013FC90u, sub_0013FC90); /* call 0x0013FC90 */

loc_00125F3A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00125F40: ;
    SET_LO8(ecx, 0xFF);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ecx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00125F5A; /* jne: not equal / not zero */

loc_00125F46: ;
    _fa = (uint32_t)(MEM8(esi + 7)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 7), LO8(ecx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00125F5A; /* jne: not equal / not zero */

loc_00125F4B: ;
    _fa = (uint32_t)(MEM8(esi + 0xB)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0xB), LO8(ecx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00125F5A; /* jne: not equal / not zero */

loc_00125F50: ;
    _fa = (uint32_t)(MEM8(esi + 0xF)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0xF), LO8(ecx) (8-bit) */
    MEM8(esp + 0xC) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_00125F5F; /* je: equal / zero */

loc_00125F5A: ;
    MEM8(esp + 0xC) = 1;

loc_00125F5F: ;
    ecx = ZX8(MEM8(esi + 0xF));
    fp_push((double)SMEM32(esp + 0x4C)); /* fild */
    edx = ZX8(MEM8(esi + 0xC));
    MEMF(esp + 0x18) = (float)fp_top(); /* fst */
    edi = MEM32(esp + 0xC);
    MEMF(esp + 0x10) = (float)fp_top(); /* fst */
    ecx = ecx << 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    fp_push((double)SMEM32(esp + 0x50)); /* fild */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = ZX8(MEM8(esi + 0xD));
    MEMF(esp + 0x1C) = (float)fp_top(); /* fst */
    MEMF(esp + 0x14) = (float)fp_top(); /* fst */
    ecx = ecx << 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    fp_push((double)SMEM32(esp + 0x54)); /* fild */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = ZX8(MEM8(esi + 0xE));
    MEMF(esp + 8) = (float)fp_top(); /* fst */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = ecx << 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    edx = ZX8(MEM8(esi + 4));
    MEMF(esp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(esp + 0x58)); /* fild */
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    ecx = ZX8(MEM8(esi + 7));
    MEMF(esp + 0x68) = (float)fp_top(); /* fst */
    MEMF(esp + 0x44) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = ecx << 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = ZX8(MEM8(esi + 5));
    ecx = ecx << 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = ZX8(MEM8(esi + 6));
    ecx = ecx << 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = ZX8(MEM8(esi + 1));
    PUSH32(esp, ecx);
    ecx = ZX8(MEM8(esi));
    eax = ZX8(LO8(eax));
    eax = eax << 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ZX8(MEM8(esi + 2));
    eax = eax << 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax << 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    edx = esp + 0x48;
    PUSH32(esp, edx);
    eax = esp + 0x3C;
    PUSH32(esp, eax);
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    ecx = 0x63F5E0;
    MEM32(esp + 0x3C) = 0;
    MEM32(esp + 0x4C) = 0;
    MEM32(esp + 0x5C) = 0;
    PUSH32(esp, 0x0012602Bu); RECOMP_ABI_CALL(0x0013FD00u, sub_0013FD00); /* call 0x0013FD00 */

loc_0012602B: ;
    edx = MEM32(esp + 0x10);
    eax = MEM32(esp + 0x60);
    ecx = MEM32(esp + 8);
    MEM32(esp + 0x18) = edx;
    edx = eax;
    MEM32(esp + 0x2C) = edx;
    edx = ZX8(MEM8(esi + 7));
    MEM32(esp + 0x1C) = eax;
    eax = ecx;
    MEM32(esp + 0x38) = eax;
    eax = ZX8(MEM8(esi + 4));
    edx = edx << 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(esp + 0x28) = ecx;
    ecx = MEM32(esp + 0x14);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x20) = 0;
    MEM32(esp + 0x30) = 0;
    MEM32(esp + 0x3C) = ecx;
    MEM32(esp + 0x40) = 0;
    PUSH32(esp, edi);
    edx = edx << 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ZX8(MEM8(esi + 5));
    eax = ZX8(MEM8(esi + 6));
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ZX8(MEM8(esi + 0xB));
    edx = edx << 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = ZX8(MEM8(esi + 9));
    PUSH32(esp, edx);
    edx = ZX8(MEM8(esi + 8));
    ecx = ecx << 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = ZX8(MEM8(esi + 0xA));
    ecx = ecx << 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = ZX8(MEM8(esi + 0xF));
    ecx = ecx << 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = ZX8(MEM8(esi + 0xD));
    PUSH32(esp, ecx);
    ecx = ZX8(MEM8(esi + 0xC));
    eax = eax << 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ZX8(MEM8(esi + 0xE));
    eax = eax << 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax << 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    edx = esp + 0x48;
    PUSH32(esp, edx);
    eax = esp + 0x3C;
    PUSH32(esp, eax);
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    ecx = 0x63F5E0;
    PUSH32(esp, 0x001260E9u); RECOMP_ABI_CALL(0x0013FD00u, sub_0013FD00); /* call 0x0013FD00 */

loc_001260E9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001260F0
 * Original: 0x001260F0 - 0x001260F1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001260F0(void)
{

loc_001260F0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00126100
 * Original: 0x00126100 - 0x00126119 (25 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00126100(void)
{

loc_00126100: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00126118u); RECOMP_ABI_CALL(0x0010F780u, sub_0010F780); /* call 0x0010F780 */

loc_00126118: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00126120
 * Original: 0x00126120 - 0x001263BC (668 bytes, 226 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00126120(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00126120: ;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(esp + 0x30);
    fp_push(MEMF(ecx + 8)); /* fld float */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x3C);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 8)); /* fmul dword ptr [esi + 8] */
    edx = ecx + 0x10;
    fp_push(MEMF(ecx + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 4)); /* fmul dword ptr [esi + 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(ecx)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi)); /* fmul dword ptr [esi] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0xC)); /* fadd dword ptr [esi + 0xc] */
    fp_push(MEMF(ecx + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 8)); /* fmul dword ptr [esi + 8] */
    fp_push(MEMF(ecx + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 4)); /* fmul dword ptr [esi + 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(edx)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi)); /* fmul dword ptr [esi] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0xC)); /* fadd dword ptr [esi + 0xc] */
    MEMF(esp + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x4964E8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x4964e8] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00126183; /* jne: not equal / not zero */

loc_0012616E: ;
    fp_push(MEMF(esp + 0x3C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x4964E8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x4964e8] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001263B3; /* je: equal / zero */

loc_00126183: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x4964E8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x4964e8] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001261A5; /* jp: parity */

loc_00126190: ;
    fp_push(MEMF(esp + 0x3C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x4964E8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x4964e8] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_001263B5; /* jnp: not parity */

loc_001261A5: ;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001261B2u); RECOMP_ABI_CALL(0x00101645u, sub_00101645); /* call 0x00101645 */

loc_001261B2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001263B5; /* je: equal / zero */

loc_001261BA: ;
    fp_push(MEMF(esi)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x4964E8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x4964e8] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001261D1; /* jne: not equal / not zero */

loc_001261C9: ;
    ecx = MEM32(esi);
    MEM32(esp + 0x3C) = ecx;
    goto loc_001261D9;

loc_001261D1: ;
    fp_push(MEMF(esi)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    MEMF(esp + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */

loc_001261D9: ;
    fp_push(MEMF(esi + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x4964E8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x4964e8] */
    fp_push(MEMF(esi + 4)); /* fld float */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001261EE; /* je: equal / zero */

loc_001261EC: ;
    fp_top() = -fp_top(); /* fchs */

loc_001261EE: ;
    fp_push(MEMF(esi + 8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x4964E8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x4964e8] */
    fp_push(MEMF(esi + 8)); /* fld float */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00126203; /* je: equal / zero */

loc_00126201: ;
    fp_top() = -fp_top(); /* fchs */

loc_00126203: ;
    fp_push(MEMF(esp + 0x3C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), g_fp_stack[(g_fp_top + 2) & 7]); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(2) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0012626A; /* jne: not equal / not zero */

loc_00126210: ;
    fp_push(MEMF(esp + 0x3C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0012626A; /* jne: not equal / not zero */

loc_0012621D: ;
    eax = MEM32(esp + 0x38);
    fp_pop(); /* fstp st(0) */
    edx = MEM32(eax + 4);
    fp_pop(); /* fstp st(0) */
    ecx = MEM32(eax + 8);
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    MEM32(esp + 0x10) = edx;
    edx = MEM32(eax + 0x14);
    MEM32(esp + 0x14) = ecx;
    ecx = MEM32(eax + 0x18);
    MEM32(esp + 0x18) = edx;
    edx = MEM32(eax + 0x24);
    MEM32(esp + 0x1C) = ecx;
    ecx = MEM32(eax + 0x28);
    MEM32(esp + 0x20) = edx;
    edx = MEM32(eax + 0x34);
    eax = MEM32(eax + 0x38);
    MEM32(esp + 0x24) = ecx;
    MEM32(esp + 0x28) = edx;
    MEM32(esp + 0x2C) = eax;
    goto loc_001262F1;

loc_0012626A: ;
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x3C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x3c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001262AA; /* jne: not equal / not zero */

loc_00126277: ;
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    fp_pop(); /* fstp st(0) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001262AE; /* jne: not equal / not zero */

loc_00126284: ;
    eax = MEM32(esp + 0x38);
    fp_push(MEMF(esp + 4)); /* fld float */
    edx = MEM32(eax + 8);
    fp_push(MEMF(esp + 0xC)); /* fld float */
    MEM32(esp + 0x14) = edx;
    edx = MEM32(eax + 0x18);
    MEM32(esp + 0x1C) = edx;
    edx = MEM32(eax + 0x28);
    MEM32(esp + 0x24) = edx;
    edx = MEM32(eax + 0x38);
    goto loc_001262D2;

loc_001262AA: ;
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */

loc_001262AE: ;
    eax = MEM32(esp + 0x38);
    fp_push(MEMF(esp + 4)); /* fld float */
    edx = MEM32(eax + 4);
    fp_push(MEMF(esp + 8)); /* fld float */
    MEM32(esp + 0x14) = edx;
    edx = MEM32(eax + 0x14);
    MEM32(esp + 0x1C) = edx;
    edx = MEM32(eax + 0x24);
    MEM32(esp + 0x24) = edx;
    edx = MEM32(eax + 0x34);

loc_001262D2: ;
    ecx = MEM32(eax);
    MEM32(esp + 0x10) = ecx;
    ecx = MEM32(eax + 0x10);
    MEM32(esp + 0x18) = ecx;
    ecx = MEM32(eax + 0x20);
    MEM32(esp + 0x20) = ecx;
    ecx = MEM32(eax + 0x30);
    MEM32(esp + 0x28) = ecx;
    MEM32(esp + 0x2C) = edx;

loc_001262F1: ;
    fp_push(MEMF(esp + 0x24)); /* fld float */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x18)); /* fmul dword ptr [esp + 0x18] */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x1C)); /* fmul dword ptr [esp + 0x1c] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x14)); /* fmul dword ptr [esp + 0x14] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x14)); /* fmul dword ptr [esp + 0x14] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x4964E8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x4964e8] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0012633F; /* jp: parity */

loc_0012633A: ;
    edx = 1;

loc_0012633F: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00126341: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 3 (32-bit) */
    fp_push(MEMF(esp + ecx * 8 + 0x10)); /* fld float */
    fp_push(MEMF(esp + ecx * 8 + 0x14)); /* fld float */
    if (CMP_GE(_fas, _fbs)) goto loc_00126358; /* jge: greater or equal (signed >=) */

loc_0012634E: ;
    fp_push(MEMF(esp + ecx * 8 + 0x18)); /* fld float */
    fp_push(MEMF(esp + ecx * 8 + 0x1C)); /* fld float */
    goto loc_00126360;

loc_00126358: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_push(MEMF(esp + 0x14)); /* fld float */

loc_00126360: ;
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 5) & 7]); /* fmul st(5) */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 7) & 7]); /* fmul st(7) */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 4) & 7]; fp_push(_t); } /* fld st(4) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 6) & 7]); /* fmul st(6) */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 4) & 7]); /* fmul st(4) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 6) & 7]); /* fmul st(6) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x4964E8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x4964e8] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    fp_pop(); /* fstp st(0) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    fp_pop(); /* fstp st(0) */
    if (TEST_NZ(_fa, _fb)) goto loc_0012639A; /* jne: not equal / not zero */

loc_00126393: ;
    eax = 1;
    goto loc_0012639C;

loc_0012639A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0012639C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001263B1; /* je: equal / zero */

loc_001263A0: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00126341; /* jl: less (signed <) */

loc_001263A6: ;
    fp_pop(); /* fstp st(0) */
    SET_LO8(eax, 1);
    fp_pop(); /* fstp st(0) */
    POP32(esp, esi);
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001263B1: ;
    fp_pop(); /* fstp st(0) */

loc_001263B3: ;
    fp_pop(); /* fstp st(0) */

loc_001263B5: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001263C0
 * Original: 0x001263C0 - 0x001263E7 (39 bytes, 13 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_001263C0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_001263C0: ;
    eax = MEM32(esp + 0xC);
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax)); /* fmul dword ptr [eax] */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 4)); /* fmul dword ptr [eax + 4] */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 8)); /* fmul dword ptr [eax + 8] */
    eax = MEM32(esp + 4);
    { double _t = fp_top(); fp_top() = g_fp_stack[(g_fp_top + 2) & 7]; g_fp_stack[(g_fp_top + 2) & 7] = _t; } /* fxch st(2) */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001263F0
 * Original: 0x001263F0 - 0x00126414 (36 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001263F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001263F0: ;
    SET_LO8(eax, MEM8(esp + 4));
    SET_LO8(edx, 0); /* xor self */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(edx) (8-bit) */
    MEM8(ecx + 5) = LO8(eax);
    if (CMP_NE(_fa, _fb)) goto loc_0012640B; /* jne: not equal / not zero */

loc_001263FD: ;
    eax = 0x3F800000;
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0xC) = eax;
    esp += 8; return; /* ret 4 */

loc_0012640B: ;
    MEM8(ecx + 3) = LO8(edx);
    MEM8(ecx + 4) = LO8(edx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00126420
 * Original: 0x00126420 - 0x00126624 (516 bytes, 155 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00126420(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00126420: ;
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x50;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(esp + 0x5C);
    fp_push(MEMF(edx)); /* fld float */
    eax = MEM32(esp + 0x58);
    fp_top() = RECOMP_FP_PC(fp_top() + fp_top()); /* fadd st(0), st(0) */
    ecx = MEM32(esp + 0x60);
    fp_push(MEMF(edx + 4)); /* fld float */
    PUSH32(esp, esi);
    fp_top() = RECOMP_FP_PC(fp_top() + fp_top()); /* fadd st(0), st(0) */
    esi = MEM32(esp + 0x68);
    fp_push(MEMF(edx + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_top()); /* fadd st(0), st(0) */
    MEMF(esp + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_top()); /* fadd st(0), st(0) */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_top()); /* fadd st(0), st(0) */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_top()); /* fadd st(0), st(0) */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() - g_fp_stack[(g_fp_top + 2) & 7]); /* fsub st(2) */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    g_fp_stack[(g_fp_top + 2) & 7] = fp_top(); fp_pop(); /* fstp st(2) */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x3C)); /* fsub dword ptr [esp + 0x3c] */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx)); /* fadd dword ptr [ecx] */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 4)); /* fadd dword ptr [ecx + 4] */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 8)); /* fadd dword ptr [ecx + 8] */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi)); /* fadd dword ptr [esi] */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 4)); /* fadd dword ptr [esi + 4] */
    MEMF(esp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 8)); /* fadd dword ptr [esi + 8] */
    MEMF(esp + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_top()); /* fadd st(0), st(0) */
    fp_push(MEMF(ecx + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_top()); /* fadd st(0), st(0) */
    fp_push(MEMF(ecx + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_top()); /* fadd st(0), st(0) */
    MEMF(esp + 0x4C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edx)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x49E748)); /* fmul dword ptr [0x49e748] */
    fp_push(MEMF(edx + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x49E748)); /* fmul dword ptr [0x49e748] */
    fp_push(MEMF(edx + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x49E748)); /* fmul dword ptr [0x49e748] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x4AB67C)); /* fmul dword ptr [0x4ab67c] */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x4AB67C)); /* fmul dword ptr [0x4ab67c] */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x4AB67C)); /* fmul dword ptr [0x4ab67c] */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() + g_fp_stack[(g_fp_top + 2) & 7]); /* fadd st(2) */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_st1()); /* fadd st(1) */
    g_fp_stack[(g_fp_top + 2) & 7] = fp_top(); fp_pop(); /* fstp st(2) */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0xC)); /* fadd dword ptr [esp + 0xc] */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - g_fp_stack[(g_fp_top + 3) & 7]); /* fsub st(3) */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    g_fp_stack[(g_fp_top + 2) & 7] = fp_top(); fp_pop(); /* fstp st(2) */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x4C)); /* fsub dword ptr [esp + 0x4c] */
    edx = MEM32(ecx);
    fp_push(MEMF(esp + 0x24)); /* fld float */
    MEM32(esp + 4) = edx;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi)); /* fsub dword ptr [esi] */
    edx = MEM32(ecx + 4);
    MEM32(esp + 8) = edx;
    edx = MEM32(ecx + 8);
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(ecx + 0xC);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEM32(esp + 0xC) = edx;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 4)); /* fsub dword ptr [esi + 4] */
    edx = MEM32(eax);
    MEM32(esp + 0x10) = ecx;
    ecx = MEM32(eax + 4);
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0x14) = edx;
    edx = MEM32(eax + 8);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 8)); /* fsub dword ptr [esi + 8] */
    eax = MEM32(eax + 0xC);
    MEM32(esp + 0x18) = ecx;
    MEM32(esp + 0x1C) = edx;
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0x20) = eax;
    eax = MEM32(esp + 0x58);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x6C)); /* fmul dword ptr [esp + 0x6c] */
    POP32(esp, esi);
    fp_push(MEMF(esp + 0x34)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x68)); /* fmul dword ptr [esp + 0x68] */
    fp_push(MEMF(esp + 0x38)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x68)); /* fmul dword ptr [esp + 0x68] */
    MEMF(esp + 0x48) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x20)); /* fadd dword ptr [esp + 0x20] */
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x24)); /* fadd dword ptr [esp + 0x24] */
    fp_push(MEMF(esp + 0x48)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x28)); /* fadd dword ptr [esp + 0x28] */
    fp_push(MEMF(esp + 0x30)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x68)); /* fmul dword ptr [esp + 0x68] */
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x68)); /* fmul dword ptr [esp + 0x68] */
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x68)); /* fmul dword ptr [esp + 0x68] */
    fp_push(MEMF(esp)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x30)); /* fadd dword ptr [esp + 0x30] */
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x34)); /* fadd dword ptr [esp + 0x34] */
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + g_fp_stack[(g_fp_top + 2) & 7]); /* fadd st(2) */
    MEMF(esp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x68)); /* fmul dword ptr [esp + 0x68] */
    fp_st1() = fp_top(); fp_pop(); /* fstp st(1) */
    fp_push(MEMF(esp + 0x34)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x68)); /* fmul dword ptr [esp + 0x68] */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x38)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x68)); /* fmul dword ptr [esp + 0x68] */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x10)); /* fadd dword ptr [esp + 0x10] */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x24)); /* fadd dword ptr [esp + 0x24] */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x28)); /* fadd dword ptr [esp + 0x28] */
    { double _t = fp_top(); fp_top() = g_fp_stack[(g_fp_top + 2) & 7]; g_fp_stack[(g_fp_top + 2) & 7] = _t; } /* fxch st(2) */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x50;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00126630
 * Original: 0x00126630 - 0x001268A1 (625 bytes, 178 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00126630(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00126630: ;
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x50;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x60);
    fp_push(MEMF(eax)); /* fld float */
    ecx = MEM32(esp + 0x5C);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x49E748)); /* fmul dword ptr [0x49e748] */
    edx = MEM32(esp + 0x58);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x68);
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x49E748)); /* fmul dword ptr [0x49e748] */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x49E748)); /* fmul dword ptr [0x49e748] */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x49E748)); /* fmul dword ptr [0x49e748] */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x49E748)); /* fmul dword ptr [0x49e748] */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x49E748)); /* fmul dword ptr [0x49e748] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edx)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    MEMF(esp + 0x44) = (float)fp_top(); /* fst */
    fp_push(MEMF(edx + 4)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_push(MEMF(edx + 8)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    MEMF(esp + 0x64) = (float)fp_top(); /* fst */
    fp_push(MEMF(esp + 0x44)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 4)); /* fadd dword ptr [esp + 4] */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 8)); /* fadd dword ptr [esp + 8] */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0xC)); /* fadd dword ptr [esp + 0xc] */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x14)); /* fsub dword ptr [esp + 0x14] */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x18)); /* fsub dword ptr [esp + 0x18] */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x1C)); /* fsub dword ptr [esp + 0x1c] */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi)); /* fadd dword ptr [esi] */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 4)); /* fadd dword ptr [esi + 4] */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 8)); /* fadd dword ptr [esi + 8] */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x49F114)); /* fmul dword ptr [0x49f114] */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x49F114)); /* fmul dword ptr [0x49f114] */
    fp_push(MEMF(eax + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x49F114)); /* fmul dword ptr [0x49f114] */
    MEMF(esp + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x49E308)); /* fmul dword ptr [0x49e308] */
    fp_push(MEMF(ecx + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x49E308)); /* fmul dword ptr [0x49e308] */
    fp_push(MEMF(ecx + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x49E308)); /* fmul dword ptr [0x49e308] */
    MEMF(esp + 0x4C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edx)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_top()); /* fadd st(0), st(0) */
    fp_push(MEMF(edx + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_top()); /* fadd st(0), st(0) */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edx + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_top()); /* fadd st(0), st(0) */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() - g_fp_stack[(g_fp_top + 2) & 7]); /* fsub st(2) */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    g_fp_stack[(g_fp_top + 2) & 7] = fp_top(); fp_pop(); /* fstp st(2) */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x4C)); /* fsub dword ptr [esp + 0x4c] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + g_fp_stack[(g_fp_top + 3) & 7]); /* fadd st(3) */
    MEMF(esp + 0x44) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_st1()); /* fadd st(1) */
    g_fp_stack[(g_fp_top + 2) & 7] = fp_top(); fp_pop(); /* fstp st(2) */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x3C)); /* fadd dword ptr [esp + 0x3c] */
    fp_push(MEMF(esp + 0x44)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi)); /* fsub dword ptr [esi] */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 4)); /* fsub dword ptr [esi + 4] */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 8)); /* fsub dword ptr [esi + 8] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMF(esp + 0x44) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x64)); /* fld float */
    fp_push(MEMF(esp + 0x44)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax)); /* fadd dword ptr [eax] */
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 4)); /* fadd dword ptr [eax + 4] */
    MEMF(esp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 8)); /* fadd dword ptr [eax + 8] */
    fp_push(MEMF(ecx)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_top()); /* fadd st(0), st(0) */
    fp_push(MEMF(ecx + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_top()); /* fadd st(0), st(0) */
    MEMF(esp + 0x48) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_top()); /* fadd st(0), st(0) */
    MEMF(esp + 0x4C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x6C)); /* fmul dword ptr [esp + 0x6c] */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x6C)); /* fmul dword ptr [esp + 0x6c] */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x6C)); /* fmul dword ptr [esp + 0x6c] */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 4)); /* fadd dword ptr [esp + 4] */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 8)); /* fadd dword ptr [esp + 8] */
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0xC)); /* fadd dword ptr [esp + 0xc] */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x6C)); /* fmul dword ptr [esp + 0x6c] */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x6C)); /* fmul dword ptr [esp + 0x6c] */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x6C)); /* fmul dword ptr [esp + 0x6c] */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x34)); /* fadd dword ptr [esp + 0x34] */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x38)); /* fadd dword ptr [esp + 0x38] */
    MEMF(esp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + g_fp_stack[(g_fp_top + 3) & 7]); /* fadd st(3) */
    MEMF(esp + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x6C)); /* fmul dword ptr [esp + 0x6c] */
    fp_push(MEMF(esp + 0x38)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x6C)); /* fmul dword ptr [esp + 0x6c] */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x3C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x6C)); /* fmul dword ptr [esp + 0x6c] */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_st1()); /* fadd st(1) */
    g_fp_stack[(g_fp_top + 2) & 7] = fp_top(); fp_pop(); /* fstp st(2) */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x48)); /* fadd dword ptr [esp + 0x48] */
    MEMF(esp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x4C)); /* fadd dword ptr [esp + 0x4c] */
    eax = MEM32(esp + 0x58);
    POP32(esp, esi);
    MEMF(esp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x496B98)); /* fmul dword ptr [0x496b98] */
    fp_push(MEMF(esp + 0x34)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x496B98)); /* fmul dword ptr [0x496b98] */
    fp_push(MEMF(esp + 0x38)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x496B98)); /* fmul dword ptr [0x496b98] */
    { double _t = fp_top(); fp_top() = g_fp_stack[(g_fp_top + 2) & 7]; g_fp_stack[(g_fp_top + 2) & 7] = _t; } /* fxch st(2) */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x50;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001268B0
 * Original: 0x001268B0 - 0x00126A87 (471 bytes, 158 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001268B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001268B0: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMD(0x4A7068)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp qword ptr [0x4a7068] */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x44);
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    PUSH32(esp, edi);
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001268EA; /* jne: not equal / not zero */

loc_001268CC: ;
    fp_push(MEMF(esp + 0x4C)); /* fld float */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x001268DBu); RECOMP_ABI_CALL(0x002A9EA3u, sub_002A9EA3); /* call 0x002A9EA3 */

loc_001268DB: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x001268E3u); RECOMP_ABI_CALL(0x000EB38Cu, sub_000EB38C); /* call 0x000EB38C */

loc_001268E3: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x48) = eax;
    goto loc_001268F1;

loc_001268EA: ;
    eax = esi + -1;
    MEM32(esp + 0x48) = eax;

loc_001268F1: ;
    ecx = esi + -1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_001268FD; /* jae: above or equal (unsigned >=) */

loc_001268F8: ;
    ebp = eax + 1;
    goto loc_001268FF;

loc_001268FD: ;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001268FF: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ecx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00126908; /* jae: above or equal (unsigned >=) */

loc_00126903: ;
    edi = ebp + 1;
    goto loc_0012690A;

loc_00126908: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0012690A: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00126913; /* jae: above or equal (unsigned >=) */

loc_0012690E: ;
    ebx = edi + 1;
    goto loc_00126915;

loc_00126913: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00126915: ;
    fp_push(MEMF(esp + 0x4C)); /* fld float */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00126924u); RECOMP_ABI_CALL(0x002A9EA3u, sub_002A9EA3); /* call 0x002A9EA3 */

loc_00126924: ;
    eax = MEM32(esp + 0x58);
    esi = MEM32(esp + 0x4C);
    fp_top() = RECOMP_FP_PC(MEMF(esp + 0x54) - fp_top()); /* fsubr dword ptr [esp + 0x54] */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEMF(esp + 0x4C) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_EQ(_fa, _fb)) goto loc_00126989; /* je: equal / zero */

loc_0012693B: ;
    ecx = MEM32(esp + 0x4C);
    PUSH32(esp, ecx);
    edx = ebx;
    edx = edx << 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x50);
    eax = edi;
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = ebp;
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = edx << 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, ecx);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    eax = esp + 0x44;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0012696Cu); RECOMP_ABI_CALL(0x00126630u, sub_00126630); /* call 0x00126630 */

loc_0012696C: ;
    edx = MEM32(eax);
    ecx = MEM32(esp + 0x68);
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    edx = MEM32(eax + 8);
    MEM32(ecx + 8) = edx;
    eax = MEM32(eax + 0xC);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 0xC) = eax;

loc_00126989: ;
    eax = MEM32(esp + 0x54);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00126A7F; /* je: equal / zero */

loc_00126995: ;
    ecx = MEM32(esp + 0x48);
    ebx = ebx << 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    fp_push(MEMF(ebx + esi)); /* fld float */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + esi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = ebp << 4;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ebp + esi)); /* fsub dword ptr [ebp + esi] */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + esi;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push(MEMF(ebx + 4)); /* fld float */
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ebp + 4)); /* fsub dword ptr [ebp + 4] */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push(MEMF(ebx + 8)); /* fld float */
    edi = edi << 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ebp + 8)); /* fsub dword ptr [ebp + 8] */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + esi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x4C)); /* fmul dword ptr [esp + 0x4c] */
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x4C)); /* fmul dword ptr [esp + 0x4c] */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x4C)); /* fmul dword ptr [esp + 0x4c] */
    fp_push(MEMF(edi)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx)); /* fsub dword ptr [ecx] */
    fp_push(MEMF(edi + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + 4)); /* fsub dword ptr [ecx + 4] */
    fp_push(MEMF(edi + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + 8)); /* fsub dword ptr [ecx + 8] */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x496454)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x4C)); /* fsub dword ptr [esp + 0x4c] */
    MEMF(esp + 0x4C) = (float)fp_top(); /* fst */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x4C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    g_fp_stack[(g_fp_top + 2) & 7] = fp_top(); fp_pop(); /* fstp st(2) */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x4C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x28)); /* fmul dword ptr [esp + 0x28] */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x30)); /* fadd dword ptr [esp + 0x30] */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() + g_fp_stack[(g_fp_top + 2) & 7]); /* fadd st(2) */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_st1()); /* fadd st(1) */
    g_fp_stack[(g_fp_top + 2) & 7] = fp_top(); fp_pop(); /* fstp st(2) */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x496B98)); /* fmul dword ptr [0x496b98] */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x496B98)); /* fmul dword ptr [0x496b98] */
    { double _t = fp_top(); fp_top() = g_fp_stack[(g_fp_top + 2) & 7]; g_fp_stack[(g_fp_top + 2) & 7] = _t; } /* fxch st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x496B98)); /* fmul dword ptr [0x496b98] */
    MEMF(esp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x38);
    MEM32(esp + 0x18) = ecx;
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x10);
    MEM32(eax) = edx;
    edx = MEM32(esp + 0x18);
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x14);
    MEM32(eax + 4) = ecx;
    ecx = MEM32(esp + 0x1C);
    MEM32(eax + 8) = edx;
    MEM32(eax + 0xC) = ecx;

loc_00126A7F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00126E90
 * Original: 0x00126E90 - 0x00127022 (402 bytes, 94 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00126E90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00126E90: ;
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x60;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    eax = esp + 0x50;
    PUSH32(esp, eax);
    ecx = esp + 0x44;
    PUSH32(esp, ecx);
    edx = esp + 0x38;
    PUSH32(esp, edx);
    ecx = 0x63F5E0;
    MEM32(esp + 0x3C) = 0x43D20000;
    MEM32(esp + 0x40) = 0x43B40000;
    MEM32(esp + 0x44) = 0x3E99999A;
    MEM32(esp + 0x4C) = 0x43D20000;
    MEM32(esp + 0x50) = 0x43DC0000;
    MEM32(esp + 0x54) = 0x3E99999A;
    MEM32(esp + 0x5C) = 0x44110000;
    MEM32(esp + 0x60) = 0x43DC0000;
    MEM32(esp + 0x64) = 0x3E99999A;
    MEM32(esp + 0x6C) = 0x44110000;
    MEM32(esp + 0x70) = 0x43B40000;
    MEM32(esp + 0x74) = 0x3E99999A;
    MEM32(esp + 0x2C) = 0;
    MEM32(esp + 0x1C) = 0;
    MEM32(esp + 0x30) = 0;
    MEM32(esp + 0x20) = 0x3F800000;
    MEM32(esp + 0x34) = 0x3F800000;
    MEM32(esp + 0x24) = 0x3F800000;
    PUSH32(esp, 0x00126F42u); RECOMP_ABI_CALL(0x0013FC90u, sub_0013FC90); /* call 0x0013FC90 */

loc_00126F42: ;
    SET_LO8(ebx, MEM8(esp + 0x70));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    esi = MEM32(esp + 0x6C);
    MEM32(eax + 0x68) = esi;
    MEM8(eax + 5) = LO8(ebx);
    if (CMP_NE(_fa, _fb)) goto loc_00126F61; /* jne: not equal / not zero */

loc_00126F54: ;
    ecx = 0x3F800000;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    goto loc_00126F69;

loc_00126F61: ;
    MEM8(eax + 3) = 0;
    MEM8(eax + 4) = 0;

loc_00126F69: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    ecx = MEM32(0x638988);
    edx = MEM32(ecx + 0xC0);
    ecx = MEM32(ecx + 0xC4);
    MEM32(esp + 0x70) = edx;
    MEM32(esp + 0x6C) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00126F8D; /* je: equal / zero */

loc_00126F87: ;
    MEM32(eax + 8) = edx;
    MEM32(eax + 0xC) = ecx;

loc_00126F8D: ;
    edx = esp + 8;
    PUSH32(esp, edx);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x00126F9Eu); RECOMP_ABI_CALL(0x0013F220u, sub_0013F220); /* call 0x0013F220 */

loc_00126F9E: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    edx = esp + 0x30;
    PUSH32(esp, edx);
    eax = esp + 0x64;
    PUSH32(esp, eax);
    ecx = esp + 0x58;
    PUSH32(esp, ecx);
    ecx = 0x63F5E0;
    MEM32(esp + 0x2C) = 0x3F800000;
    MEM32(esp + 0x1C) = 0x3F800000;
    MEM32(esp + 0x30) = 0x3F800000;
    MEM32(esp + 0x20) = 0;
    MEM32(esp + 0x34) = 0;
    MEM32(esp + 0x24) = 0;
    PUSH32(esp, 0x00126FEBu); RECOMP_ABI_CALL(0x0013FC90u, sub_0013FC90); /* call 0x0013FC90 */

loc_00126FEB: ;
    MEM32(eax + 0x68) = esi;
    POP32(esp, esi);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    MEM8(eax + 5) = 1;
    MEM8(eax + 3) = 0;
    MEM8(eax + 4) = 0;
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_0012700E; /* je: equal / zero */

loc_00127000: ;
    edx = MEM32(esp + 0x68);
    ecx = MEM32(esp + 0x64);
    MEM32(eax + 8) = edx;
    MEM32(eax + 0xC) = ecx;

loc_0012700E: ;
    edx = esp;
    PUSH32(esp, edx);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x0012701Eu); RECOMP_ABI_CALL(0x0013F220u, sub_0013F220); /* call 0x0013F220 */

loc_0012701E: ;
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x60;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00127030
 * Original: 0x00127030 - 0x0012706D (61 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00127030(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00127030: ;
    SET_LO8(eax, MEM8(esp + 0x10));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    eax = MEM32(esp + 0xC);
    if (CMP_EQ(_fa, _fb)) goto loc_0012705A; /* je: equal / zero */

loc_0012703C: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    ecx = eax + -1;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(esi)) >> 32) & 1);
    ecx = ecx + esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = MEM32(esp + 0xC);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    { uint64_t _t = (uint64_t)(edx) + (uint64_t)(esi) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); edx = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00127058u); RECOMP_ABI_CALL(0x002A90E0u, sub_002A90E0); /* call 0x002A90E0 */

loc_00127058: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0012705A: ;
    ecx = MEM32(esp + 8);
    edx = MEM32(esp + 4);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0012706Cu); RECOMP_ABI_CALL(0x002A90E0u, sub_002A90E0); /* call 0x002A90E0 */

loc_0012706C: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00127070
 * Original: 0x00127070 - 0x0012713F (207 bytes, 61 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00127070(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00127070: ;
    _fb = (uint32_t)(0x488) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x488;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x50C524);
    ecx = MEM32(0x50ED44);
    PUSH32(esp, esi);
    MEM32(esp + 0x488) = eax;
    PUSH32(esp, edi);
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00127095u); RECOMP_ABI_CALL(0x002AC9D2u, sub_002AC9D2); /* call 0x002AC9D2 */

loc_00127095: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00127108; /* je: equal / zero */

loc_0012709C: ;
    esi = MEM32(esp + 0x494);

loc_001270A3: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001270BC; /* je: equal / zero */

loc_001270A7: ;
    edx = esp + 0x24C;
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001270B5u); RECOMP_ABI_CALL(0x002A929Au, sub_002A929A); /* call 0x002A929A */

loc_001270B5: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001270F3; /* jne: not equal / not zero */

loc_001270BC: ;
    eax = MEM32(0x50ED38);
    PUSH32(esp, eax);
    ecx = esp + 0x14C;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x4A826C);
    PUSH32(esp, 0x639330);
    PUSH32(esp, 0x001270D9u); RECOMP_ABI_CALL(0x000EB2C2u, sub_000EB2C2); /* call 0x000EB2C2 */

loc_001270D9: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 0x34C;
    PUSH32(esp, edx);
    PUSH32(esp, 0x639330);
    PUSH32(esp, 0x001270EEu); RECOMP_ABI_CALL(0x002ACBE5u, sub_002ACBE5); /* call 0x002ACBE5 */

loc_001270EE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012711F; /* jne: not equal / not zero */

loc_001270F3: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001270FEu); RECOMP_ABI_CALL(0x002ACADCu, sub_002ACADC); /* call 0x002ACADC */

loc_001270FE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001270A3; /* jne: not equal / not zero */

loc_00127102: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00127108u); RECOMP_ABI_CALL(0x002ACB23u, sub_002ACB23); /* call 0x002ACB23 */

loc_00127108: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    ecx = MEM32(esp + 0x484);
    PUSH32(esp, 0x00127118u); RECOMP_ABI_CALL(0x000EB37Bu, sub_000EB37B); /* call 0x000EB37B */

loc_00127118: ;
    _fb = (uint32_t)(0x488) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x488;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0012711F: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00127125u); RECOMP_ABI_CALL(0x000F8528u, sub_000F8528); /* call 0x000F8528 */

loc_00127125: ;
    ecx = MEM32(esp + 0x48C);
    POP32(esp, edi);
    eax = 0x639330;
    POP32(esp, esi);
    PUSH32(esp, 0x00127138u); RECOMP_ABI_CALL(0x000EB37Bu, sub_000EB37B); /* call 0x000EB37B */

loc_00127138: ;
    _fb = (uint32_t)(0x488) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x488;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001272A0
 * Original: 0x001272A0 - 0x00127414 (372 bytes, 130 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001272A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001272A0: ;
    _fb = (uint32_t)(0x124) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x124;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x50C524);
    ecx = MEM32(esp + 0x128);
    edx = MEM32(0x50ED44);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x104);
    MEM32(esp + 0x12C) = eax;
    eax = esp + 0x28;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, 4);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x001272D8u); RECOMP_ABI_CALL(0x002AC69Fu, sub_002AC69F); /* call 0x002AC69F */

loc_001272D8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001273FD; /* jne: not equal / not zero */

loc_001272E0: ;
    eax = esp + 0x24;
    edx = eax + 1;

loc_001272E7: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001272E7; /* jne: not equal / not zero */

loc_001272EE: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = esp + eax + 0x24;
    eax = MEM32(0x50ED38);
    MEM32(esp + 8) = edx;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    /* nop */

loc_00127300: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00127300; /* jne: not equal / not zero */

loc_0012730A: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x80);
    PUSH32(esp, 4);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x40000000);
    eax = esp + 0x3C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00127326u); RECOMP_ABI_CALL(0x000FC1E2u, sub_000FC1E2); /* call 0x000FC1E2 */

loc_00127326: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00127344; /* jne: not equal / not zero */

loc_0012732D: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    ecx = MEM32(esp + 0x120);
    PUSH32(esp, 0x0012733Du); RECOMP_ABI_CALL(0x000EB37Bu, sub_000EB37B); /* call 0x000EB37B */

loc_0012733D: ;
    _fb = (uint32_t)(0x124) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x124;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00127344: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x13C);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x13C);
    PUSH32(esp, 0);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00127363u); RECOMP_ABI_CALL(0x000F8886u, sub_000F8886); /* call 0x000F8886 */

loc_00127363: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001273BF; /* jne: not equal / not zero */

loc_0012736A: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x00127371u); RECOMP_ABI_CALL(0x000FDCA9u, sub_000FDCA9); /* call 0x000FDCA9 */

loc_00127371: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001273AF; /* je: equal / zero */

loc_00127378: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00127380u); RECOMP_ABI_CALL(0x000FDCBDu, sub_000FDCBD); /* call 0x000FDCBD */

loc_00127380: ;
    edx = esp + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0012738Bu); RECOMP_ABI_CALL(0x000FDD0Bu, sub_000FDD0B); /* call 0x000FDD0B */

loc_0012738B: ;
    PUSH32(esp, 0);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, 0x14);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0012739Fu); RECOMP_ABI_CALL(0x000F8886u, sub_000F8886); /* call 0x000F8886 */

loc_0012739F: ;
    PUSH32(esp, esi);
    edi = eax;
    PUSH32(esp, 0x001273A7u); RECOMP_ABI_CALL(0x000F895Cu, sub_000F895C); /* call 0x000F895C */

loc_001273A7: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001273ADu); RECOMP_ABI_CALL(0x000F8528u, sub_000F8528); /* call 0x000F8528 */

loc_001273AD: ;
    goto loc_001273CF;

loc_001273AF: ;
    PUSH32(esp, esi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x001273B7u); RECOMP_ABI_CALL(0x000F895Cu, sub_000F895C); /* call 0x000F895C */

loc_001273B7: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001273BDu); RECOMP_ABI_CALL(0x000F8528u, sub_000F8528); /* call 0x000F8528 */

loc_001273BD: ;
    goto loc_001273CF;

loc_001273BF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001273C5u); RECOMP_ABI_CALL(0x000F8528u, sub_000F8528); /* call 0x000F8528 */

loc_001273C5: ;
    edx = esp + 0x2C;
    PUSH32(esp, edx);
    PUSH32(esp, 0x001273CFu); RECOMP_ABI_CALL(0x000FE145u, sub_000FE145); /* call 0x000FE145 */

loc_001273CF: ;
    eax = MEM32(0x50ED40);
    edx = MEM32(esp + 0x10);
    POP32(esp, ebp);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    POP32(esp, ebx);
    /* nop */

loc_001273E0: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001273E0; /* jne: not equal / not zero */

loc_001273EA: ;
    ecx = MEM32(0x50ED3C);
    PUSH32(esp, 0);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001273FDu); RECOMP_ABI_CALL(0x000FC64Fu, sub_000FC64F); /* call 0x000FC64F */

loc_001273FD: ;
    ecx = MEM32(esp + 0x128);
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    PUSH32(esp, 0x0012740Du); RECOMP_ABI_CALL(0x000EB37Bu, sub_000EB37B); /* call 0x000EB37B */

loc_0012740D: ;
    _fb = (uint32_t)(0x124) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x124;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00127420
 * Original: 0x00127420 - 0x00127588 (360 bytes, 120 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00127420(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00127420: ;
    _fb = (uint32_t)(0x378) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x378;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x50C524);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x388);
    PUSH32(esp, edi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    MEM32(esp + 0x388) = eax;
    MEM32(esp + 0x14) = ebx;
    PUSH32(esp, 0x00127449u); RECOMP_ABI_CALL(0x00127070u, sub_00127070); /* call 0x00127070 */

loc_00127449: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012750A; /* je: equal / zero */

loc_00127454: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x80);
    PUSH32(esp, 3);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x80000000u);
    PUSH32(esp, eax);
    MEM32(esp + 0x2C) = 1;
    PUSH32(esp, 0x00127471u); RECOMP_ABI_CALL(0x000FC1E2u, sub_000FC1E2); /* call 0x000FC1E2 */

loc_00127471: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012755E; /* je: equal / zero */

loc_0012747C: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00127483u); RECOMP_ABI_CALL(0x000F91C2u, sub_000F91C2); /* call 0x000F91C2 */

loc_00127483: ;
    edi = MEM32(esp + 0x394);
    ecx = edi + 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x14) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0012755E; /* jne: not equal / not zero */

loc_00127499: ;
    ebp = MEM32(esp + 0x390);
    PUSH32(esp, ebx);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001274AEu); RECOMP_ABI_CALL(0x000F8799u, sub_000F8799); /* call 0x000F8799 */

loc_001274AE: ;
    PUSH32(esp, ebx);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, 0x14);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001274C1u); RECOMP_ABI_CALL(0x000F8799u, sub_000F8799); /* call 0x000F8799 */

loc_001274C1: ;
    ebx = eax;
    _fa = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x14), 0x14 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_001274CC; /* jae: above or equal (unsigned >=) */

loc_001274CA: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001274CC: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001274D2u); RECOMP_ABI_CALL(0x000F8528u, sub_000F8528); /* call 0x000F8528 */

loc_001274D2: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x001274D9u); RECOMP_ABI_CALL(0x000FDCA9u, sub_000FDCA9); /* call 0x000FDCA9 */

loc_001274D9: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00127506; /* je: equal / zero */

loc_001274E0: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001274E8u); RECOMP_ABI_CALL(0x000FDCBDu, sub_000FDCBD); /* call 0x000FDCBD */

loc_001274E8: ;
    edx = esp + 0x2C;
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001274F3u); RECOMP_ABI_CALL(0x000FDD0Bu, sub_000FDD0B); /* call 0x000FDD0B */

loc_001274F3: ;
    ecx = 5;
    edi = esp + 0x18;
    esi = esp + 0x2C;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(4);
    while (ecx != 0) {
        _flags = (MEM32(esi) == MEM32(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsd */
    if ((_flags != 0)) goto loc_0012755E; /* je: equal / zero */

loc_00127506: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0012755E;

loc_0012750A: ;
    edx = MEM32(0x50ED44);
    ecx = esp + 0x40;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0012751Bu); RECOMP_ABI_CALL(0x002AC9D2u, sub_002AC9D2); /* call 0x002AC9D2 */

loc_0012751B: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012755E; /* je: equal / zero */

loc_00127522: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012753B; /* je: equal / zero */

loc_00127526: ;
    eax = esp + 0x284;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00127534u); RECOMP_ABI_CALL(0x002A929Au, sub_002A929A); /* call 0x002A929A */

loc_00127534: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00127543; /* jne: not equal / not zero */

loc_0012753B: ;
    MEM32(esp + 0x10) = 1;

loc_00127543: ;
    ecx = esp + 0x40;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0012754Eu); RECOMP_ABI_CALL(0x002ACADCu, sub_002ACADC); /* call 0x002ACADC */

loc_0012754E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00127558; /* je: equal / zero */

loc_00127552: ;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x10), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00127522; /* je: equal / zero */

loc_00127558: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0012755Eu); RECOMP_ABI_CALL(0x002ACB23u, sub_002ACB23); /* call 0x002ACB23 */

loc_0012755E: ;
    eax = MEM32(esp + 0x398);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012756F; /* je: equal / zero */

loc_00127569: ;
    edx = MEM32(esp + 0x10);
    MEM32(eax) = edx;

loc_0012756F: ;
    ecx = MEM32(esp + 0x384);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = ebx;
    POP32(esp, ebx);
    PUSH32(esp, 0x00127581u); RECOMP_ABI_CALL(0x000EB37Bu, sub_000EB37B); /* call 0x000EB37B */

loc_00127581: ;
    _fb = (uint32_t)(0x378) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x378;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00127590
 * Original: 0x00127590 - 0x0012762A (154 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00127590(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00127590: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x3BC1C8);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x18));
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x50C524);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x55);
    ecx = esp + 0x14;
    MEM32(esp + 0x20) = eax;
    PUSH32(esp, 0x001275BEu); RECOMP_ABI_CALL(0x00140950u, sub_00140950); /* call 0x00140950 */

loc_001275BE: ;
    MEM32(esp + 0x28) = 0;
    PUSH32(esp, 0x001275CBu); RECOMP_ABI_CALL(0x001409B0u, sub_001409B0); /* call 0x001409B0 */

loc_001275CB: ;
    ecx = MEM32(esp + 0x30);
    edx = eax + ecx;
    ecx = MEM32(0x50ED44);
    PUSH32(esp, 0);
    esi = edx + eax * 2;
    PUSH32(esp, 0);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001275EAu); RECOMP_ABI_CALL(0x000FAE5Eu, sub_000FAE5E); /* call 0x000FAE5E */

loc_001275EA: ;
    ebx = eax;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _cf = (int)((ebx) != 0);
    ebx = (uint32_t)(-(int32_t)ebx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    SET_LO8(ebx, _cf ? 0xFFFFFFFF : 0); /* sbb self (CF extend) */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sbb result */
    SET_LO8(ebx, LO8(ebx) + 1);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_001275FD; /* je: equal / zero */

loc_001275F5: ;
    _fa = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 8), esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_001275FD; /* jae: above or equal (unsigned >=) */

loc_001275FB: ;
    _cf = 0; /* xor clears CF */
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_001275FD: ;
    ecx = esp + 0x10;
    MEM32(esp + 0x28) = 0xFFFFFFFFu;
    PUSH32(esp, 0x0012760Eu); RECOMP_ABI_CALL(0x00140D30u, sub_00140D30); /* call 0x00140D30 */

loc_0012760E: ;
    ecx = MEM32(esp + 0x20);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    ecx = MEM32(esp + 0x18);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    PUSH32(esp, 0x00127626u); RECOMP_ABI_CALL(0x000EB37Bu, sub_000EB37B); /* call 0x000EB37B */

loc_00127626: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x24)) >> 32) & 1);
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00127630
 * Original: 0x00127630 - 0x001276B7 (135 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00127630(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00127630: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x3BC1E8);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x18));
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x50C524);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x1C) = eax;
    PUSH32(esp, 0x55);
    ecx = esp + 0x14;
    PUSH32(esp, 0x0012765Eu); RECOMP_ABI_CALL(0x00140950u, sub_00140950); /* call 0x00140950 */

loc_0012765E: ;
    MEM32(esp + 0x28) = 0;
    PUSH32(esp, 0x0012766Bu); RECOMP_ABI_CALL(0x001409B0u, sub_001409B0); /* call 0x001409B0 */

loc_0012766B: ;
    ecx = MEM32(esp + 0x30);
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = eax + -1;
    PUSH32(esp, edx);
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(ecx)) >> 32) & 1);
    esi = esi + ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    { uint64_t _t = (uint64_t)(edi) + (uint64_t)(edx) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); edi = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00127683u); RECOMP_ABI_CALL(0x002A90E0u, sub_002A90E0); /* call 0x002A90E0 */

loc_00127683: ;
    ecx = esp + 0x10;
    MEM32(esp + 0xC) = edx;
    esi = eax + 3;
    MEM32(esp + 0x28) = 0xFFFFFFFFu;
    PUSH32(esp, 0x0012769Bu); RECOMP_ABI_CALL(0x00140D30u, sub_00140D30); /* call 0x00140D30 */

loc_0012769B: ;
    ecx = MEM32(esp + 0x20);
    POP32(esp, edi);
    MEM32(XBOX_FS_BASE) = ecx;
    ecx = MEM32(esp + 0x18);
    eax = esi;
    POP32(esp, esi);
    PUSH32(esp, 0x001276B3u); RECOMP_ABI_CALL(0x000EB37Bu, sub_000EB37B); /* call 0x000EB37B */

loc_001276B3: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x24)) >> 32) & 1);
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001276F0
 * Original: 0x001276F0 - 0x001276F3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001276F0(void)
{

loc_001276F0: ;
    eax = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00127700
 * Original: 0x00127700 - 0x00127703 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00127700(void)
{

loc_00127700: ;
    eax = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00127710
 * Original: 0x00127710 - 0x00127717 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00127710(void)
{

loc_00127710: ;
    eax = ecx + 0xC0;
    esp += 4; return; /* ret */

}

/**
 * sub_00127720
 * Original: 0x00127720 - 0x00127727 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00127720(void)
{

loc_00127720: ;
    eax = ecx + 0x350;
    esp += 4; return; /* ret */

}

/**
 * sub_00127730
 * Original: 0x00127730 - 0x00127764 (52 bytes, 15 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00127730(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00127730: ;
    ecx = MEM32(esp + 4);
    fp_push(MEMF(ecx)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x496454)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x496454] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0012774C; /* jne: not equal / not zero */

loc_00127743: ;
    MEM32(ecx) = 0x3F800000;
    esp += 8; return; /* ret 4 */

loc_0012774C: ;
    fp_push(MEMF(ecx)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x4964E8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x4964e8] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00127761; /* jp: parity */

loc_0012775B: ;
    MEM32(ecx) = 0;

loc_00127761: ;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00127770
 * Original: 0x00127770 - 0x00127782 (18 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00127770(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00127770: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 4) = ecx;
    MEM8(eax + 0x10) = LO8(ecx);
    MEM32(eax + 0x14) = 0x64;
    esp += 4; return; /* ret */

}

/**
 * sub_00127790
 * Original: 0x00127790 - 0x00127791 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00127790(void)
{

loc_00127790: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001277A0
 * Original: 0x001277A0 - 0x00127826 (134 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001277A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001277A0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x400) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x400 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001277EF; /* je: equal / zero */

loc_001277A7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x400000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x400000 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001277E8; /* je: equal / zero */

loc_001277AE: ;
    PUSH32(esp, 0x8006);
    PUSH32(esp, 0x4A);
    PUSH32(esp, 0x001277BAu); RECOMP_ABI_CALL(0x0012F6B0u, sub_0012F6B0); /* call 0x0012F6B0 */

loc_001277BA: ;
    ecx = eax;
    PUSH32(esp, 0x001277C1u); RECOMP_ABI_CALL(0x0012F5A0u, sub_0012F5A0); /* call 0x0012F5A0 */

loc_001277C1: ;
    PUSH32(esp, 0x302);
    PUSH32(esp, 0x3E);
    PUSH32(esp, 0x001277CDu); RECOMP_ABI_CALL(0x0012F6B0u, sub_0012F6B0); /* call 0x0012F6B0 */

loc_001277CD: ;
    ecx = eax;
    PUSH32(esp, 0x001277D4u); RECOMP_ABI_CALL(0x0012F5A0u, sub_0012F5A0); /* call 0x0012F5A0 */

loc_001277D4: ;
    PUSH32(esp, 0x303);
    PUSH32(esp, 0x3F);
    PUSH32(esp, 0x001277E0u); RECOMP_ABI_CALL(0x0012F6B0u, sub_0012F6B0); /* call 0x0012F6B0 */

loc_001277E0: ;
    ecx = eax;
    PUSH32(esp, 0x001277E7u); RECOMP_ABI_CALL(0x0012F5A0u, sub_0012F5A0); /* call 0x0012F5A0 */

loc_001277E7: ;
    esp += 4; return; /* ret */

loc_001277E8: ;
    PUSH32(esp, 0x800B);
    goto loc_001277F4;

loc_001277EF: ;
    PUSH32(esp, 0x8006);

loc_001277F4: ;
    PUSH32(esp, 0x4A);
    PUSH32(esp, 0x001277FBu); RECOMP_ABI_CALL(0x0012F6B0u, sub_0012F6B0); /* call 0x0012F6B0 */

loc_001277FB: ;
    ecx = eax;
    PUSH32(esp, 0x00127802u); RECOMP_ABI_CALL(0x0012F5A0u, sub_0012F5A0); /* call 0x0012F5A0 */

loc_00127802: ;
    PUSH32(esp, 0x302);
    PUSH32(esp, 0x3E);
    PUSH32(esp, 0x0012780Eu); RECOMP_ABI_CALL(0x0012F6B0u, sub_0012F6B0); /* call 0x0012F6B0 */

loc_0012780E: ;
    ecx = eax;
    PUSH32(esp, 0x00127815u); RECOMP_ABI_CALL(0x0012F5A0u, sub_0012F5A0); /* call 0x0012F5A0 */

loc_00127815: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x3F);
    PUSH32(esp, 0x0012781Eu); RECOMP_ABI_CALL(0x0012F6B0u, sub_0012F6B0); /* call 0x0012F6B0 */

loc_0012781E: ;
    ecx = eax;
    PUSH32(esp, 0x00127825u); RECOMP_ABI_CALL(0x0012F5A0u, sub_0012F5A0); /* call 0x0012F5A0 */

loc_00127825: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00127830
 * Original: 0x00127830 - 0x0012791A (234 bytes, 68 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00127830(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00127830: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x10);
    fp_push(MEMF(eax)); /* fld float */
    PUSH32(esp, esi);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x496B98)); /* fsub dword ptr [0x496b98] */
    esi = MEM32(esp + 0x18);
    PUSH32(esp, ecx);
    ecx = esp + 0x18;
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    edx = esp + 0x1C;
    MEMF(esi) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 4)); /* fld float */
    eax = MEM32(esp + 0x14);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x496B98)); /* fsub dword ptr [0x496b98] */
    MEMF(esi + 4) = (float)fp_top(); /* fst */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x497CAC)); /* fmul dword ptr [0x497cac] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0012787Bu); RECOMP_ABI_CALL(0x0010D170u, sub_0010D170); /* call 0x0010D170 */

loc_0012787B: ;
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x14)); /* fmul dword ptr [esp + 0x14] */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 4)); /* fmul dword ptr [esp + 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(esi + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 4)); /* fmul dword ptr [esp + 4] */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 8)); /* fmul dword ptr [esp + 8] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x496B98)); /* fadd dword ptr [0x496b98] */
    MEMF(esi) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x496B98)); /* fadd dword ptr [0x496b98] */
    MEMF(esi + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x4964E8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x4964e8] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001278D0; /* jp: parity */

loc_001278C8: ;
    MEM32(esi) = 0;
    goto loc_001278E5;

loc_001278D0: ;
    fp_push(MEMF(esi)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x496454)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x496454] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001278E5; /* jne: not equal / not zero */

loc_001278DF: ;
    MEM32(esi) = 0x3F800000;

loc_001278E5: ;
    fp_push(MEMF(esi + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x4964E8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x4964e8] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001278FC; /* jp: parity */

loc_001278F5: ;
    MEM32(esi + 4) = 0;

loc_001278FC: ;
    fp_push(MEMF(esi + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x496454)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x496454] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00127913; /* jne: not equal / not zero */

loc_0012790C: ;
    MEM32(esi + 4) = 0x3F800000;

loc_00127913: ;
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00127920
 * Original: 0x00127920 - 0x00127954 (52 bytes, 17 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00127920(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00127920: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 8);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = esp + 8;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00127937u); RECOMP_ABI_CALL(0x000FF165u, sub_000FF165); /* call 0x000FF165 */

loc_00127937: ;
    fp_push(MEMF(esp)); /* fld float */
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 4);
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 8);
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = edx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00127960
 * Original: 0x00127960 - 0x00127AB3 (339 bytes, 91 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00127960(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00127960: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x28);
    fp_push(MEMF(eax)); /* fld float */
    ecx = MEM32(eax + 8);
    fp_push(MEMF(eax + 4)); /* fld float */
    edx = MEM32(eax + 0xC);
    fp_push(MEMF(0x50EEC0)); /* fld float */
    MEM32(esp + 8) = ecx;
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    MEM32(esp + 0xC) = edx;
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x50EEC0)); /* fld float */
    eax = MEM32(esp + 0x10);
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEM32(esp) = eax;
    g_fp_stack[(g_fp_top + 2) & 7] = fp_top(); fp_pop(); /* fstp st(2) */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x50EEC0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 8)); /* fmul dword ptr [esp + 8] */
    MEMF(esp + 0x18) = (float)fp_top(); /* fst */
    fp_push(MEMF(0x50EEC0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0xC)); /* fmul dword ptr [esp + 0xc] */
    MEMF(esp + 0x1C) = (float)fp_top(); /* fst */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x496454)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x496454] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001279DF; /* jne: not equal / not zero */

loc_001279D6: ;
    MEM32(esp) = 0x3F800000;
    goto loc_001279F7;

loc_001279DF: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x4964E8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x4964e8] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001279F7; /* jp: parity */

loc_001279F0: ;
    MEM32(esp) = 0;

loc_001279F7: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x496454)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x496454] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00127A10; /* jne: not equal / not zero */

loc_00127A04: ;
    fp_pop(); /* fstp st(0) */
    MEM32(esp + 4) = 0x3F800000;
    goto loc_00127A25;

loc_00127A10: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x4964E8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x4964e8] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00127A25; /* jp: parity */

loc_00127A1D: ;
    MEM32(esp + 4) = 0;

loc_00127A25: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x496454)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x496454] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00127A40; /* jne: not equal / not zero */

loc_00127A36: ;
    MEM32(esp + 8) = 0x3F800000;
    goto loc_00127A59;

loc_00127A40: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x4964E8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x4964e8] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00127A59; /* jp: parity */

loc_00127A51: ;
    MEM32(esp + 8) = 0;

loc_00127A59: ;
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x496454)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x496454] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00127A74; /* jne: not equal / not zero */

loc_00127A6A: ;
    MEM32(esp + 0xC) = 0x3F800000;
    goto loc_00127A8D;

loc_00127A74: ;
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x4964E8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x4964e8] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00127A8D; /* jp: parity */

loc_00127A85: ;
    MEM32(esp + 0xC) = 0;

loc_00127A8D: ;
    eax = MEM32(esp + 0x24);
    edx = MEM32(esp);
    ecx = eax;
    MEM32(ecx) = edx;
    edx = MEM32(esp + 4);
    MEM32(ecx + 4) = edx;
    edx = MEM32(esp + 8);
    MEM32(ecx + 8) = edx;
    edx = MEM32(esp + 0xC);
    MEM32(ecx + 0xC) = edx;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00127B00
 * Original: 0x00127B00 - 0x00127B10 (16 bytes, 5 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00127B00(void)
{

loc_00127B00: ;
    eax = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = edx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00127DB0
 * Original: 0x00127DB0 - 0x00127DF1 (65 bytes, 24 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00127DB0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00127DB0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    esi = ecx;
    PUSH32(esp, 0x00127DBDu); RECOMP_ABI_CALL(0x00011F9Bu, sub_00011F9B); /* call 0x00011F9B */

loc_00127DBD: ;
    ecx = eax;
    PUSH32(esp, 0x00127DC4u); RECOMP_ABI_CALL(0x001155C0u, sub_001155C0); /* call 0x001155C0 */

loc_00127DC4: ;
    edi = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x18);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00127DD4u); RECOMP_ABI_CALL(0x001179F0u, sub_001179F0); /* call 0x001179F0 */

loc_00127DD4: ;
    MEM32(esi + 8) = eax;
    PUSH32(esp, edi);
    MEM32(0x639434) = eax;
    PUSH32(esp, 0x00127DE2u); RECOMP_ABI_CALL(0x0011D960u, sub_0011D960); /* call 0x0011D960 */

loc_00127DE2: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM32(esi + 0xC) = eax;
    MEM8(esi + 0x10) = 1;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00127E00
 * Original: 0x00127E00 - 0x00127E42 (66 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00127E00(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00127E00: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00127E0Au); RECOMP_ABI_CALL(0x00011F9Bu, sub_00011F9B); /* call 0x00011F9B */

loc_00127E0A: ;
    ecx = eax;
    PUSH32(esp, 0x00127E11u); RECOMP_ABI_CALL(0x001155C0u, sub_001155C0); /* call 0x001155C0 */

loc_00127E11: ;
    esi = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00127E21u); RECOMP_ABI_CALL(0x001179F0u, sub_001179F0); /* call 0x001179F0 */

loc_00127E21: ;
    PUSH32(esp, esi);
    MEM32(0x50ED98) = eax;
    MEM32(0x639434) = eax;
    PUSH32(esp, 0x00127E31u); RECOMP_ABI_CALL(0x0011D960u, sub_0011D960); /* call 0x0011D960 */

loc_00127E31: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x50ED9C) = eax;
    MEM8(0x50EDA0) = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00127E50
 * Original: 0x00127E50 - 0x00127E64 (20 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00127E50(void)
{

loc_00127E50: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    MEM32(0x50ED90) = eax;
    MEM32(0x50ED94) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00127EB0
 * Original: 0x00127EB0 - 0x00127EB3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00127EB0(void)
{

loc_00127EB0: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_00127EC0
 * Original: 0x00127EC0 - 0x00127EC8 (8 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00127EC0(void)
{

loc_00127EC0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00127EC7u); RECOMP_ABI_CALL(0x000FEF0Eu, sub_000FEF0E); /* call 0x000FEF0E */

loc_00127EC7: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00128693
 * Original: 0x00128693 - 0x001287F0 (349 bytes, 109 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00128693(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00128693: ;
    POP32(esp, ebp);
    MEM32(ebx + 0x24) = eax;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x60;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

    /* nop */

loc_001286B0: ;
    fp_push(MEMF(esp + 0x74)); /* fld float */
    edi = MEM32(ebx + 0x34);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + -8)); /* fmul dword ptr [esi - 8] */
    fp_push(MEMF(esp + 0x74)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + -4)); /* fmul dword ptr [esi - 4] */
    fp_push(MEMF(esp + 0x74)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi)); /* fmul dword ptr [esi] */
    MEMF(esp + 0x68) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x68);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEM32(esp + 0x38) = edx;
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x30);
    MEM32(esp + 0x40) = eax;
    eax = MEM32(esp + 0x3C);
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x34);
    MEM32(esp + 0x4C) = eax;
    eax = ebx + 0x40;
    MEM32(esp + 0x44) = ecx;
    PUSH32(esp, eax);
    ecx = esp + 0x44;
    MEM32(esp + 0x4C) = edx;
    PUSH32(esp, ecx);
    edx = esp + 0x58;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0012870Cu); RECOMP_ABI_CALL(0x000FF165u, sub_000FF165); /* call 0x000FF165 */

loc_0012870C: ;
    eax = MEM32(esp + 0x50);
    ecx = MEM32(esp + 0x54);
    edx = MEM32(esp + 0x58);
    MEM32(edi) = eax;
    MEM32(edi + 4) = ecx;
    MEM32(edi + 8) = edx;
    fp_push(MEMF(ebp + 0x10)); /* fld float */
    PUSH32(esp, 0x00128728u); RECOMP_ABI_CALL(0x000EB38Cu, sub_000EB38C); /* call 0x000EB38C */

loc_00128728: ;
    fp_push(MEMF(ebp + 0x1C)); /* fld float */
    edi = eax;
    edi = edi & 0xFF;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0x00128738u); RECOMP_ABI_CALL(0x000EB38Cu, sub_000EB38C); /* call 0x000EB38C */

loc_00128738: ;
    fp_push(MEMF(ebp + 0x14)); /* fld float */
    eax = eax << 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = edi | eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edi = edi << 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, 0x00128748u); RECOMP_ABI_CALL(0x000EB38Cu, sub_000EB38C); /* call 0x000EB38C */

loc_00128748: ;
    fp_push(MEMF(ebp + 0x18)); /* fld float */
    eax = eax & 0xFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = edi | eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edi = edi << 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, 0x0012875Au); RECOMP_ABI_CALL(0x000EB38Cu, sub_000EB38C); /* call 0x000EB38C */

loc_0012875A: ;
    fp_push(MEMF(0x4964E8)); /* fld float */
    eax = eax & 0xFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = edi | eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = MEM32(ebx + 0x34);
    MEM32(eax + 0xC) = edi;
    fp_push(MEMF(ebp + 0x90)); /* fld float */
    edi = MEM32(esp + 0x10);
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    ecx = ebp + 0x90;
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_001287AB; /* jnp: not parity */

loc_00128786: ;
    edx = esp + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    ecx = ebx;
    PUSH32(esp, 0x00128794u); RECOMP_ABI_CALL(0x00127830u, sub_00127830); /* call 0x00127830 */

loc_00128794: ;
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001287A3u); RECOMP_ABI_CALL(0x0011BC30u, sub_0011BC30); /* call 0x0011BC30 */

loc_001287A3: ;
    edx = MEM32(ebx + 0x34);
    MEM32(edx + 0x10) = eax;
    goto loc_001287BD;

loc_001287AB: ;
    ecx = MEM32(edi + 4);
    eax = MEM32(edi);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001287B7u); RECOMP_ABI_CALL(0x0011BC30u, sub_0011BC30); /* call 0x0011BC30 */

loc_001287B7: ;
    ecx = MEM32(ebx + 0x34);
    MEM32(ecx + 0x10) = eax;

loc_001287BD: ;
    ecx = MEM32(ebx + 0x34);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x14;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x50EEC8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x50EEC8 (32-bit) */
    MEM32(esp + 0x10) = edi;
    MEM32(ebx + 0x34) = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_001286B0; /* jl: less (signed <) */

loc_001287DF: ;
    eax = MEM32(ebx + 0x24);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(ebx + 0x24) = eax;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x60;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001289B0
 * Original: 0x001289B0 - 0x001289D5 (37 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001289B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001289B0: ;
    _fa = (uint32_t)(MEM8(0x639438)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x639438), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001289C3; /* jne: not equal / not zero */

loc_001289B9: ;
    ecx = 0x50ED90;
    PUSH32(esp, 0x001289C3u); RECOMP_ABI_CALL(0x001287F0u, sub_001287F0); /* call 0x001287F0 */

loc_001289C3: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(0x639438) = LO8(eax);
    MEM32(0x50ED90) = eax;
    MEM32(0x50ED94) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00128A20
 * Original: 0x00128A20 - 0x00128AC5 (165 bytes, 54 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00128A20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00128A20: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x82;
    edi = edx;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = MEM32(esp + 0x14);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = 1;
    esi = edx + 0xEC;
    MEM32(edx) = ebx;
    MEM32(edx + 0x1F0) = edi;
    MEM32(edx + 0x1EC) = ebx;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_00128A53: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(esi + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00128A53; /* jne: not equal / not zero */

loc_00128A5D: ;
    _fa = (uint32_t)(MEM32(0x5CE868)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x5CE868), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00128A83; /* je: equal / zero */

loc_00128A65: ;
    _fa = (uint32_t)(MEM32(0x5CE86C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x5CE86C), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00128A7B; /* je: equal / zero */

loc_00128A6D: ;
    fp_push(MEMF(0x497790)); /* fld float */
    MEM32(edx + 0x1F4) = edi;
    goto loc_00128A8F;

loc_00128A7B: ;
    fp_push(MEMF(0x4978D4)); /* fld float */
    goto loc_00128A89;

loc_00128A83: ;
    fp_push(MEMF(0x4AB80C)); /* fld float */

loc_00128A89: ;
    MEM32(edx + 0x1F4) = ebx;

loc_00128A8F: ;
    eax = edx + 4;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = eax;
    MEM32(edx) = ecx;
    MEM32(edx + 4) = ecx;
    MEM32(edx + 8) = ecx;
    MEM32(edx + 0xC) = ecx;
    MEM32(edx + 0x10) = ecx;
    MEM32(edx + 0x14) = ecx;
    MEM32(edx + 0x18) = ecx;
    MEM32(edx + 0x1C) = ecx;
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, eax);
    MEM32(eax + 4) = edi;
    MEM32(eax + 8) = edi;
    MEM32(eax + 0xC) = ebx;
    PUSH32(esp, 0x00128ABEu); RECOMP_ABI_CALL(0x002DC6A0u, sub_002DC6A0); /* call 0x002DC6A0 */

loc_00128ABE: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00128AD0
 * Original: 0x00128AD0 - 0x00128AD5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00128AD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00128AD0: ;
    g_seh_ebp = ebp; sub_002DC580(); return; /* tail jmp 0x002DC580 */

}

/**
 * sub_00128AE0
 * Original: 0x00128AE0 - 0x00128C3B (347 bytes, 111 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00128AE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00128AE0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ebx + 0x24;
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0xC;
    edi = esi;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = MEM32(esp + 0x1C);
    MEM32(esi + 0x20) = eax;
    eax = MEM32(esp + 0x18);
    edi = 1;
    PUSH32(esp, esi);
    MEM32(esi) = edi;
    MEM32(esi + 4) = 0x3D0900;
    MEM32(esi + 8) = eax;
    MEM32(esi + 0xC) = ecx;
    MEM32(esi + 0x10) = edi;
    MEM32(esi + 0x14) = edi;
    PUSH32(esp, 0x00128B21u); RECOMP_ABI_CALL(0x002E0690u, sub_002E0690); /* call 0x002E0690 */

loc_00128B21: ;
    ebp = MEM32(esp + 0x2C);
    PUSH32(esp, 0x150);
    PUSH32(esp, 0x4AB830);
    PUSH32(esp, 0x4AB810);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    MEM32(esi + 0x1C) = eax;
    PUSH32(esp, 0x00128B3Fu); RECOMP_ABI_CALL(0x001050A0u, sub_001050A0); /* call 0x001050A0 */

loc_00128B3F: ;
    MEM32(esi + 0x18) = eax;
    PUSH32(esp, esi);
    MEM32(ebx + 0xE8) = eax;
    PUSH32(esp, 0x00128B4Eu); RECOMP_ABI_CALL(0x002E1180u, sub_002E1180); /* call 0x002E1180 */

loc_00128B4E: ;
    edi = eax;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00128B73; /* jne: not equal / not zero */

loc_00128B57: ;
    edx = MEM32(esi + 0x1C);
    PUSH32(esp, 0x160);
    PUSH32(esp, 0x4AB830);
    PUSH32(esp, 0x4AB810);
    PUSH32(esp, edx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00128B70u); RECOMP_ABI_CALL(0x001031A0u, sub_001031A0); /* call 0x001031A0 */

loc_00128B70: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00128B73: ;
    PUSH32(esp, 2);
    PUSH32(esp, edi);
    MEM32(ebx) = edi;
    PUSH32(esp, 0x00128B7Du); RECOMP_ABI_CALL(0x002DD430u, sub_002DD430); /* call 0x002DD430 */

loc_00128B7D: ;
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00128B85u); RECOMP_ABI_CALL(0x002DECB0u, sub_002DECB0); /* call 0x002DECB0 */

loc_00128B85: ;
    PUSH32(esp, 0x00128B8Au); RECOMP_ABI_CALL(0x002DE3E0u, sub_002DE3E0); /* call 0x002DE3E0 */

loc_00128B8A: ;
    PUSH32(esp, 0x17E);
    PUSH32(esp, 0x4AB830);
    PUSH32(esp, 0x4AB810);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    MEM32(ebx + 0x200) = eax;
    PUSH32(esp, 0x00128BA8u); RECOMP_ABI_CALL(0x001050A0u, sub_001050A0); /* call 0x001050A0 */

loc_00128BA8: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0x6C9420;
    MEM32(ebx + 0x1FC) = eax;
    PUSH32(esp, 0x00128BBBu); RECOMP_ABI_CALL(0x001B1920u, sub_001B1920); /* call 0x001B1920 */

loc_00128BBB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00128BF4; /* jne: not equal / not zero */

loc_00128BC0: ;
    eax = MEM32(esp + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00128BF4; /* je: equal / zero */

loc_00128BC8: ;
    eax = MEM32(ebx + 0x200);
    ecx = MEM32(ebx + 0x1FC);
    edx = MEM32(ebx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00128BDEu); RECOMP_ABI_CALL(0x002DEC50u, sub_002DEC50); /* call 0x002DEC50 */

loc_00128BDE: ;
    eax = MEM32(0x6CA398);
    ecx = MEM32(ebx);
    _fb = (uint32_t)(5) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00128BEFu); RECOMP_ABI_CALL(0x002DE410u, sub_002DE410); /* call 0x002DE410 */

loc_00128BEF: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00128C06;

loc_00128BF4: ;
    edx = MEM32(0x6CA398);
    eax = MEM32(ebx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00128C03u); RECOMP_ABI_CALL(0x002DDD10u, sub_002DDD10); /* call 0x002DDD10 */

loc_00128C03: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00128C06: ;
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, ecx);
    ecx = 0x64CDE8;
    PUSH32(esp, 0x00128C15u); RECOMP_ABI_CALL(0x00141000u, sub_00141000); /* call 0x00141000 */

loc_00128C15: ;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00128C1Cu); RECOMP_ABI_CALL(0x002DD6F0u, sub_002DD6F0); /* call 0x002DD6F0 */

loc_00128C1C: ;
    edx = ebx + 0xEC;
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00128C29u); RECOMP_ABI_CALL(0x002DD0D0u, sub_002DD0D0); /* call 0x002DD0D0 */

loc_00128C29: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(ebx + 0x1F8) = 0;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00128B09
 * Original: 0x00128B09 - 0x00128C3B (306 bytes, 95 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00128B09(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00128B09: ;
    MEM32(esi + 4) = 0x3D0900;
    MEM32(esi + 8) = eax;
    MEM32(esi + 0xC) = ecx;
    MEM32(esi + 0x10) = edi;
    MEM32(esi + 0x14) = edi;
    PUSH32(esp, 0x00128B21u); RECOMP_ABI_CALL(0x002E0690u, sub_002E0690); /* call 0x002E0690 */

loc_00128B21: ;
    ebp = MEM32(esp + 0x2C);
    PUSH32(esp, 0x150);
    PUSH32(esp, 0x4AB830);
    PUSH32(esp, 0x4AB810);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    MEM32(esi + 0x1C) = eax;
    PUSH32(esp, 0x00128B3Fu); RECOMP_ABI_CALL(0x001050A0u, sub_001050A0); /* call 0x001050A0 */

loc_00128B3F: ;
    MEM32(esi + 0x18) = eax;
    PUSH32(esp, esi);
    MEM32(ebx + 0xE8) = eax;
    PUSH32(esp, 0x00128B4Eu); RECOMP_ABI_CALL(0x002E1180u, sub_002E1180); /* call 0x002E1180 */

loc_00128B4E: ;
    edi = eax;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00128B73; /* jne: not equal / not zero */

loc_00128B57: ;
    edx = MEM32(esi + 0x1C);
    PUSH32(esp, 0x160);
    PUSH32(esp, 0x4AB830);
    PUSH32(esp, 0x4AB810);
    PUSH32(esp, edx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00128B70u); RECOMP_ABI_CALL(0x001031A0u, sub_001031A0); /* call 0x001031A0 */

loc_00128B70: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00128B73: ;
    PUSH32(esp, 2);
    PUSH32(esp, edi);
    MEM32(ebx) = edi;
    PUSH32(esp, 0x00128B7Du); RECOMP_ABI_CALL(0x002DD430u, sub_002DD430); /* call 0x002DD430 */

loc_00128B7D: ;
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00128B85u); RECOMP_ABI_CALL(0x002DECB0u, sub_002DECB0); /* call 0x002DECB0 */

loc_00128B85: ;
    PUSH32(esp, 0x00128B8Au); RECOMP_ABI_CALL(0x002DE3E0u, sub_002DE3E0); /* call 0x002DE3E0 */

loc_00128B8A: ;
    PUSH32(esp, 0x17E);
    PUSH32(esp, 0x4AB830);
    PUSH32(esp, 0x4AB810);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    MEM32(ebx + 0x200) = eax;
    PUSH32(esp, 0x00128BA8u); RECOMP_ABI_CALL(0x001050A0u, sub_001050A0); /* call 0x001050A0 */

loc_00128BA8: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0x6C9420;
    MEM32(ebx + 0x1FC) = eax;
    PUSH32(esp, 0x00128BBBu); RECOMP_ABI_CALL(0x001B1920u, sub_001B1920); /* call 0x001B1920 */

loc_00128BBB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00128BF4; /* jne: not equal / not zero */

loc_00128BC0: ;
    eax = MEM32(esp + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00128BF4; /* je: equal / zero */

loc_00128BC8: ;
    eax = MEM32(ebx + 0x200);
    ecx = MEM32(ebx + 0x1FC);
    edx = MEM32(ebx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00128BDEu); RECOMP_ABI_CALL(0x002DEC50u, sub_002DEC50); /* call 0x002DEC50 */

loc_00128BDE: ;
    eax = MEM32(0x6CA398);
    ecx = MEM32(ebx);
    _fb = (uint32_t)(5) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00128BEFu); RECOMP_ABI_CALL(0x002DE410u, sub_002DE410); /* call 0x002DE410 */

loc_00128BEF: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00128C06;

loc_00128BF4: ;
    edx = MEM32(0x6CA398);
    eax = MEM32(ebx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00128C03u); RECOMP_ABI_CALL(0x002DDD10u, sub_002DDD10); /* call 0x002DDD10 */

loc_00128C03: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00128C06: ;
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, ecx);
    ecx = 0x64CDE8;
    PUSH32(esp, 0x00128C15u); RECOMP_ABI_CALL(0x00141000u, sub_00141000); /* call 0x00141000 */

loc_00128C15: ;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00128C1Cu); RECOMP_ABI_CALL(0x002DD6F0u, sub_002DD6F0); /* call 0x002DD6F0 */

loc_00128C1C: ;
    edx = ebx + 0xEC;
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00128C29u); RECOMP_ABI_CALL(0x002DD0D0u, sub_002DD0D0); /* call 0x002DD0D0 */

loc_00128C29: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(ebx + 0x1F8) = 0;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00128BE9
 * Original: 0x00128BE9 - 0x00128C3B (82 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00128BE9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00128BE9: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00128BEFu); RECOMP_ABI_CALL(0x002DE410u, sub_002DE410); /* call 0x002DE410 */

loc_00128BEF: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00128C06;

    edx = MEM32(0x6CA398);
    eax = MEM32(ebx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00128C03u); RECOMP_ABI_CALL(0x002DDD10u, sub_002DDD10); /* call 0x002DDD10 */

loc_00128C03: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00128C06: ;
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, ecx);
    ecx = 0x64CDE8;
    PUSH32(esp, 0x00128C15u); RECOMP_ABI_CALL(0x00141000u, sub_00141000); /* call 0x00141000 */

loc_00128C15: ;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00128C1Cu); RECOMP_ABI_CALL(0x002DD6F0u, sub_002DD6F0); /* call 0x002DD6F0 */

loc_00128C1C: ;
    edx = ebx + 0xEC;
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00128C29u); RECOMP_ABI_CALL(0x002DD0D0u, sub_002DD0D0); /* call 0x002DD0D0 */

loc_00128C29: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(ebx + 0x1F8) = 0;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00128C40
 * Original: 0x00128C40 - 0x00128CBF (127 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00128C40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00128C40: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    ecx = 0x6C9420;
    MEM32(esi + 0x1F8) = 0;
    PUSH32(esp, 0x00128C5Au); RECOMP_ABI_CALL(0x001B1920u, sub_001B1920); /* call 0x001B1920 */

loc_00128C5A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00128C72; /* jne: not equal / not zero */

loc_00128C5F: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00128C72; /* je: equal / zero */

loc_00128C67: ;
    eax = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00128C6Fu); RECOMP_ABI_CALL(0x002DEC90u, sub_002DEC90); /* call 0x002DEC90 */

loc_00128C6F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00128C72: ;
    ecx = MEM32(esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00128C7Au); RECOMP_ABI_CALL(0x002E1170u, sub_002E1170); /* call 0x002E1170 */

loc_00128C7A: ;
    edx = MEM32(esi + 0x200);
    edi = MEM32(esp + 0x18);
    PUSH32(esp, 0x1CC);
    PUSH32(esp, 0x4AB838);
    PUSH32(esp, 0x4AB810);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    MEM32(esi) = 0;
    PUSH32(esp, 0x00128CA0u); RECOMP_ABI_CALL(0x001031A0u, sub_001031A0); /* call 0x001031A0 */

loc_00128CA0: ;
    eax = MEM32(esi + 0x40);
    PUSH32(esp, 0x1CD);
    PUSH32(esp, 0x4AB838);
    PUSH32(esp, 0x4AB810);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00128CB9u); RECOMP_ABI_CALL(0x001031A0u, sub_001031A0); /* call 0x001031A0 */

loc_00128CB9: ;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00128CC0
 * Original: 0x00128CC0 - 0x00128DB6 (246 bytes, 81 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00128CC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00128CC0: ;
    _fb = (uint32_t)(0x90) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x90;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ecx = 0x67C658;
    PUSH32(esp, 0x00128CD2u); RECOMP_ABI_CALL(0x0015AFA0u, sub_0015AFA0); /* call 0x0015AFA0 */

loc_00128CD2: ;
    PUSH32(esp, 0x00128CD7u); RECOMP_ABI_CALL(0x002B4660u, sub_002B4660); /* call 0x002B4660 */

loc_00128CD7: ;
    ebx = MEM32(esp + 0x9C);
    ecx = MEM32(ebx);
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00128CEBu); RECOMP_ABI_CALL(0x002DFBD0u, sub_002DFBD0); /* call 0x002DFBD0 */

loc_00128CEB: ;
    eax = MEM32(esp + 0x10);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00128D28; /* je: equal / zero */

loc_00128CF6: ;
    eax = MEM32(ebx);
    PUSH32(esp, edi);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00128D04u); RECOMP_ABI_CALL(0x00142640u, sub_00142640); /* call 0x00142640 */

loc_00128D04: ;
    edi = ebx + 0x58;
    ecx = 0x24;
    esi = esp + 0x14;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    ecx = MEM32(ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00128D1Au); RECOMP_ABI_CALL(0x002DF070u, sub_002DF070); /* call 0x002DF070 */

loc_00128D1A: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebx + 0x1F8) = 1;
    POP32(esp, edi);

loc_00128D28: ;
    edx = MEM32(ebx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00128D30u); RECOMP_ABI_CALL(0x002DD390u, sub_002DD390); /* call 0x002DD390 */

loc_00128D30: ;
    esi = eax;
    eax = MEM32(0x639648);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00128D44; /* jne: not equal / not zero */

loc_00128D3E: ;
    _fa = (uint32_t)(MEM32(ebx + 0x7C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x7C), 0xA (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00128D4D; /* jg: greater (signed >) */

loc_00128D44: ;
    _fa = (uint32_t)(MEM32(ebx + 0x7C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x12C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x7C), 0x12C (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00128D74; /* jle: less or equal (signed <=) */

loc_00128D4D: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0x800);
    ecx = 0x67C658;
    PUSH32(esp, 0x00128D5Eu); RECOMP_ABI_CALL(0x0015AE70u, sub_0015AE70); /* call 0x0015AE70 */

loc_00128D5E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00128D82; /* jne: not equal / not zero */

loc_00128D62: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0x40);
    ecx = 0x67C658;
    PUSH32(esp, 0x00128D70u); RECOMP_ABI_CALL(0x0015AE70u, sub_0015AE70); /* call 0x0015AE70 */

loc_00128D70: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00128D82; /* jne: not equal / not zero */

loc_00128D74: ;
    eax = MEM32(0x6CA39C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00128D90; /* je: equal / zero */

loc_00128D7D: ;
    _fa = (uint32_t)(MEM32(ebx + 0x7C)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x7C), eax (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00128D90; /* jle: less or equal (signed <=) */

loc_00128D82: ;
    POP32(esp, esi);
    eax = 3;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x90) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x90;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00128D90: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00128DA8; /* je: equal / zero */

loc_00128D95: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00128DA8; /* je: equal / zero */

loc_00128D9A: ;
    MEM32(ebx + 0x54) = esi;
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x90) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x90;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00128DA8: ;
    POP32(esp, esi);
    eax = 4;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x90) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x90;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00128DC0
 * Original: 0x00128DC0 - 0x00128DD9 (25 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00128DC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00128DC0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(MEM32(eax + 0x54)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x54), 2 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00128DD8; /* jl: less (signed <) */

loc_00128DCA: ;
    _fa = (uint32_t)(MEM32(eax + 0x1F8)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x1F8), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00128DD8; /* jne: not equal / not zero */

loc_00128DD3: ;
    g_seh_ebp = ebp; sub_00142100(); return; /* tail jmp 0x00142100 */

loc_00128DD8: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00128DE0
 * Original: 0x00128DE0 - 0x00128E81 (161 bytes, 54 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00128DE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00128DE0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x18);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00128DF3u); RECOMP_ABI_CALL(0x00142420u, sub_00142420); /* call 0x00142420 */

loc_00128DF3: ;
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x639440);
    PUSH32(esp, 0x00128E02u); RECOMP_ABI_CALL(0x00128A20u, sub_00128A20); /* call 0x00128A20 */

loc_00128E02: ;
    ebx = MEM32(esp + 0x3C);
    ebp = MEM32(esp + 0x38);
    ecx = MEM32(esp + 0x34);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x639440);
    PUSH32(esp, 0x00128E1Du); RECOMP_ABI_CALL(0x00128AE0u, sub_00128AE0); /* call 0x00128AE0 */

loc_00128E1D: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x00128E24u); RECOMP_ABI_CALL(0x001420C0u, sub_001420C0); /* call 0x001420C0 */

loc_00128E24: ;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = 1;
    /* nop */

loc_00128E30: ;
    PUSH32(esp, 0x00128E35u); RECOMP_ABI_CALL(0x001420E0u, sub_001420E0); /* call 0x001420E0 */

loc_00128E35: ;
    PUSH32(esp, 0x639440);
    PUSH32(esp, 0x00128E3Fu); RECOMP_ABI_CALL(0x00128CC0u, sub_00128CC0); /* call 0x00128CC0 */

loc_00128E3F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = eax;
    PUSH32(esp, 0x00128E49u); RECOMP_ABI_CALL(0x00142070u, sub_00142070); /* call 0x00142070 */

loc_00128E49: ;
    _fa = (uint32_t)(MEM32(0x63962C)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x63962C), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00128E57; /* je: equal / zero */

loc_00128E51: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00128E30; /* je: equal / zero */

loc_00128E55: ;
    goto loc_00128E5C;

loc_00128E57: ;
    esi = 3;

loc_00128E5C: ;
    PUSH32(esp, 0x00128E61u); RECOMP_ABI_CALL(0x001420D0u, sub_001420D0); /* call 0x001420D0 */

loc_00128E61: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x639440);
    PUSH32(esp, 0x00128E6Du); RECOMP_ABI_CALL(0x00128C40u, sub_00128C40); /* call 0x00128C40 */

loc_00128E6D: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00128E75u); RECOMP_ABI_CALL(0x002DC580u, sub_002DC580); /* call 0x002DC580 */

loc_00128E75: ;
    PUSH32(esp, 0x00128E7Au); RECOMP_ABI_CALL(0x00141F10u, sub_00141F10); /* call 0x00141F10 */

loc_00128E7A: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00128E90
 * Original: 0x00128E90 - 0x00128EB4 (36 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00128E90(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00128E90: ;
    ecx = MEM32(esp + 4);
    _fb = (uint32_t)(0x8000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x8000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0xFF);
    eax = 0x80008001u;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((0xF) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = edx;
    eax = eax >> 0x1F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00128EC0
 * Original: 0x00128EC0 - 0x00128EE5 (37 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00128EC0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00128EC0: ;
    edx = MEM32(esp + 4);
    ecx = 0x8000;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0xFF);
    eax = 0x80008001u;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((0xF) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = edx;
    eax = eax >> 0x1F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00128EF0
 * Original: 0x00128EF0 - 0x00128EF9 (9 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00128EF0(void)
{

loc_00128EF0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x00128EF7u); RECOMP_ABI_CALL(0x0013A900u, sub_0013A900); /* call 0x0013A900 */

loc_00128EF7: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00128F00
 * Original: 0x00128F00 - 0x00128F28 (40 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00128F00(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00128F00: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    edx = eax;
    edx = (uint32_t)((int32_t)edx * (int32_t)0xE4);
    _fb = (uint32_t)(0x63AC20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x63AC20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 0x10) = edx;
    MEM32(eax * 4 + 0x63965C) = ecx;
    MEM32(eax * 4 + 0x63964C) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00128F30
 * Original: 0x00128F30 - 0x0012903D (269 bytes, 85 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00128F30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00128F30: ;
    eax = MEM32(0x63964C);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_00128F48; /* jne: not equal / not zero */

loc_00128F44: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00128F4C;

loc_00128F48: ;
    edx = MEM32(esp + 0x10);

loc_00128F4C: ;
    edi = MEM32(esp + 0x30);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00128F58; /* jne: not equal / not zero */

loc_00128F54: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00128F5C;

loc_00128F58: ;
    ecx = MEM32(esp + 0x10);

loc_00128F5C: ;
    eax = MEM32(0x639650);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00128F6A; /* jne: not equal / not zero */

loc_00128F65: ;
    edx = 1;

loc_00128F6A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00128F73; /* jne: not equal / not zero */

loc_00128F6E: ;
    ecx = 1;

loc_00128F73: ;
    eax = MEM32(0x639654);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00128F81; /* jne: not equal / not zero */

loc_00128F7C: ;
    edx = 2;

loc_00128F81: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00128F8A; /* jne: not equal / not zero */

loc_00128F85: ;
    ecx = 2;

loc_00128F8A: ;
    eax = MEM32(0x639658);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00128F98; /* jne: not equal / not zero */

loc_00128F93: ;
    edx = 3;

loc_00128F98: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00128FA1; /* jne: not equal / not zero */

loc_00128F9C: ;
    ecx = 3;

loc_00128FA1: ;
    esi = MEM32(ecx * 4 + 0x63964C);
    eax = MEM32(edx * 4 + 0x63964C);
    MEM32(edx * 4 + 0x63964C) = esi;
    MEM32(ecx * 4 + 0x63964C) = eax;
    eax = MEM32(edx * 4 + 0x63965C);
    edx = edx * 4 + 0x63965C;
    ebx = eax;
    esi = MEM32(ebx);
    edi = MEM32(ebx + 4);
    ebp = MEM32(ebx + 8);
    MEM32(esp + 0x1C) = ebp;
    ebp = MEM32(ebx + 0xC);
    ebx = MEM32(ebx + 0x10);
    MEM32(esp + 0x24) = ebx;
    ebx = MEM32(ecx * 4 + 0x63965C);
    ecx = ecx * 4 + 0x63965C;
    MEM32(esp + 0x20) = ebp;
    ebp = MEM32(ebx);
    MEM32(eax) = ebp;
    ebp = MEM32(ebx + 4);
    MEM32(eax + 4) = ebp;
    ebp = MEM32(ebx + 8);
    MEM32(eax + 8) = ebp;
    ebp = MEM32(ebx + 0xC);
    MEM32(eax + 0xC) = ebp;
    ebx = MEM32(ebx + 0x10);
    MEM32(eax + 0x10) = ebx;
    eax = MEM32(ecx);
    MEM32(eax) = esi;
    esi = MEM32(esp + 0x1C);
    MEM32(eax + 4) = edi;
    MEM32(eax + 8) = esi;
    esi = MEM32(esp + 0x20);
    MEM32(eax + 0xC) = esi;
    esi = MEM32(esp + 0x24);
    MEM32(eax + 0x10) = esi;
    esi = MEM32(ecx);
    eax = MEM32(edx);
    POP32(esp, edi);
    MEM32(edx) = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(ecx) = eax;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00129040
 * Original: 0x00129040 - 0x00129056 (22 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00129040(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00129040: ;
    ecx = MEM32(esp + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00129046: ;
    _fa = (uint32_t)(MEM32(eax * 4 + 0x63964C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax * 4 + 0x63964C), ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00129055; /* je: equal / zero */

loc_0012904F: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00129046; /* jle: less or equal (signed <=) */

loc_00129055: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00129060
 * Original: 0x00129060 - 0x00129098 (56 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00129060(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00129060: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = MEM32(esp + 4);
    if (CMP_NE(_fa, _fb)) goto loc_00129084; /* jne: not equal / not zero */

loc_0012906C: ;
    eax = 1;
    eax = eax << LO8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = MEM32(0x639674);
    eax = ~eax;
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(0x639674) = ecx;
    esp += 4; return; /* ret */

loc_00129084: ;
    eax = MEM32(0x639674);
    edx = 1;
    edx = edx << LO8(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax | edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x639674) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_001290A0
 * Original: 0x001290A0 - 0x001290AF (15 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001290A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001290A0: ;
    eax = MEM32(0x639674);
    ecx = MEM32(esp + 4);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((LO8(ecx)) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}

/**
 * sub_001290B0
 * Original: 0x001290B0 - 0x001290C5 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001290B0(void)
{

loc_001290B0: ;
    SET_LO8(ecx, 0x7F);
    MEM8(eax + 6) = LO8(ecx);
    MEM8(eax + 7) = LO8(ecx);
    MEM8(eax + 8) = LO8(ecx);
    MEM8(eax + 9) = LO8(ecx);
    MEM16(eax + 4) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_001290D0
 * Original: 0x001290D0 - 0x001290E9 (25 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001290D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001290D0: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(ecx + 0xD1)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 0xD1), 0 (16-bit) */
    if (CMP_A(_fa, _fb)) goto loc_001290E6; /* ja: above (unsigned >) */

loc_001290DC: ;
    _fa = (uint32_t)(MEM16(ecx + 0xD3)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 0xD3), 0 (16-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001290E8; /* jbe: below or equal (unsigned <=) */

loc_001290E6: ;
    SET_LO8(eax, 1);

loc_001290E8: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00129130
 * Original: 0x00129130 - 0x00129166 (54 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00129130(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00129130: ;
    PUSH32(esp, esi);
    esi = eax;
    _fa = (uint32_t)(MEM16(esi + 0xD1)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 0xD1), 0 (16-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00129147; /* ja: above (unsigned >) */

loc_0012913D: ;
    _fa = (uint32_t)(MEM16(esi + 0xD3)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 0xD3), 0 (16-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00129164; /* jbe: below or equal (unsigned <=) */

loc_00129147: ;
    eax = MEM32(esi + 0xB8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00129164; /* jle: less or equal (signed <=) */

loc_00129151: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012915D; /* jne: not equal / not zero */

loc_00129156: ;
    PUSH32(esp, 0x0012915Bu); RECOMP_ABI_CALL(0x001290F0u, sub_001290F0); /* call 0x001290F0 */

loc_0012915B: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0012915D: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + 0xB8) = eax;

loc_00129164: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00129170
 * Original: 0x00129170 - 0x001291FD (141 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00129170(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00129170: ;
    eax = MEM32(0x63ACFC);
    PUSH32(esp, esi);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00129183; /* je: equal / zero */

loc_0012917E: ;
    edx = 1;

loc_00129183: ;
    eax = MEM32(0x63AD00);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00129191; /* je: equal / zero */

loc_0012918C: ;
    esi = 1;

loc_00129191: ;
    eax = MEM32(0x63ADE0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012919D; /* je: equal / zero */

loc_0012919A: ;
    edx = edx | 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0012919D: ;
    eax = MEM32(0x63ADE4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001291A9; /* je: equal / zero */

loc_001291A6: ;
    esi = esi | 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_001291A9: ;
    eax = MEM32(0x63AEC4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001291B5; /* je: equal / zero */

loc_001291B2: ;
    edx = edx | 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_001291B5: ;
    eax = MEM32(0x63AEC8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001291C1; /* je: equal / zero */

loc_001291BE: ;
    esi = esi | 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_001291C1: ;
    eax = MEM32(0x63AFA8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001291CD; /* je: equal / zero */

loc_001291CA: ;
    edx = edx | 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_001291CD: ;
    eax = MEM32(0x63AFAC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001291D9; /* je: equal / zero */

loc_001291D6: ;
    esi = esi | 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_001291D9: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001291E5; /* jne: not equal / not zero */

loc_001291DD: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001291E5; /* jne: not equal / not zero */

loc_001291E1: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    goto loc_001291E7;

loc_001291E5: ;
    SET_LO8(eax, 1);

loc_001291E7: ;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001291F1; /* je: equal / zero */

loc_001291EF: ;
    MEM32(ecx) = edx;

loc_001291F1: ;
    ecx = MEM32(esp + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001291FB; /* je: equal / zero */

loc_001291F9: ;
    MEM32(ecx) = esi;

loc_001291FB: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00129480
 * Original: 0x00129480 - 0x00129626 (422 bytes, 135 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00129480(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00129480: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = eax;
    _fa = (uint32_t)(MEM16(esi + 0xD1)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 0xD1), 0 (16-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00129498; /* ja: above (unsigned >) */

loc_0012948E: ;
    _fa = (uint32_t)(MEM16(esi + 0xD3)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 0xD3), 0 (16-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001294B5; /* jbe: below or equal (unsigned <=) */

loc_00129498: ;
    eax = MEM32(esi + 0xB8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001294B5; /* jle: less or equal (signed <=) */

loc_001294A2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001294AE; /* jne: not equal / not zero */

loc_001294A7: ;
    PUSH32(esp, 0x001294ACu); RECOMP_ABI_CALL(0x001290F0u, sub_001290F0); /* call 0x001290F0 */

loc_001294AC: ;
    goto loc_001294B5;

loc_001294AE: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + 0xB8) = eax;

loc_001294B5: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(esi + 0xD1)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 0xD1), 0 (16-bit) */
    if (CMP_A(_fa, _fb)) goto loc_001294CB; /* ja: above (unsigned >) */

loc_001294C1: ;
    _fa = (uint32_t)(MEM16(esi + 0xD3)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 0xD3), 0 (16-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001294CD; /* jbe: below or equal (unsigned <=) */

loc_001294CB: ;
    SET_LO8(eax, 1);

loc_001294CD: ;
    MEM8(edi + 3) = LO8(eax);
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0xA);
    _fb = (uint32_t)(0x8000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x8000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0xFF);
    SET_LO16(ebx, MEM16(esi));
    eax = 0x80008001u;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((0xF) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = edx;
    eax = eax >> 0x1F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(edi + 6) = LO8(eax);
    edx = (uint32_t)(int32_t)SMEM16(esi + 0xC);
    ecx = 0x8000;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0xFF);
    eax = 0x80008001u;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((0xF) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = edx;
    eax = eax >> 0x1F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(edi + 7) = LO8(eax);
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0xE);
    _fb = (uint32_t)(0x8000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x8000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0xFF);
    eax = 0x80008001u;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((0xF) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ecx = edx;
    ecx = ecx >> 0x1F;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(edi + 8) = LO8(ecx);
    edx = (uint32_t)(int32_t)SMEM16(esi + 0x10);
    ecx = 0x8000;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0xFF);
    eax = 0x80008001u;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((0xF) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = edx;
    eax = eax >> 0x1F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(edi + 9) = LO8(eax);
    MEM16(edi + 4) = 0;
    SET_LO8(eax, MEM8(esi + 2));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00129580; /* je: equal / zero */

loc_0012957A: ;
    MEM16(edi + 4) = 0x40;

loc_00129580: ;
    SET_LO8(eax, MEM8(esi + 3));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012958B; /* je: equal / zero */

loc_00129587: ;
    MEM8(edi + 4) = MEM8(edi + 4) | 0x20;
    _fa = (uint32_t)(MEM8(edi + 4)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */

loc_0012958B: ;
    SET_LO8(eax, MEM8(esi + 4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00129596; /* je: equal / zero */

loc_00129592: ;
    MEM8(edi + 4) = MEM8(edi + 4) | 0x80;
    _fa = (uint32_t)(MEM8(edi + 4)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */

loc_00129596: ;
    SET_LO8(eax, MEM8(esi + 5));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001295A1; /* je: equal / zero */

loc_0012959D: ;
    MEM8(edi + 4) = MEM8(edi + 4) | 0x10;
    _fa = (uint32_t)(MEM8(edi + 4)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */

loc_001295A1: ;
    SET_LO8(eax, MEM8(esi + 7));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001295AC; /* je: equal / zero */

loc_001295A8: ;
    MEM8(edi + 4) = MEM8(edi + 4) | 1;
    _fa = (uint32_t)(MEM8(edi + 4)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */

loc_001295AC: ;
    SET_LO8(eax, MEM8(esi + 6));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001295B7; /* je: equal / zero */

loc_001295B3: ;
    MEM8(edi + 4) = MEM8(edi + 4) | 2;
    _fa = (uint32_t)(MEM8(edi + 4)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */

loc_001295B7: ;
    SET_LO8(eax, MEM8(esi + 8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001295C2; /* je: equal / zero */

loc_001295BE: ;
    MEM8(edi + 4) = MEM8(edi + 4) | 4;
    _fa = (uint32_t)(MEM8(edi + 4)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */

loc_001295C2: ;
    SET_LO8(eax, MEM8(esi + 9));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001295CD; /* je: equal / zero */

loc_001295C9: ;
    MEM8(edi + 4) = MEM8(edi + 4) | 8;
    _fa = (uint32_t)(MEM8(edi + 4)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */

loc_001295CD: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001295D6; /* je: equal / zero */

loc_001295D2: ;
    MEM8(edi + 5) = MEM8(edi + 5) | 0x10;
    _fa = (uint32_t)(MEM8(edi + 5)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */

loc_001295D6: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001295DF; /* je: equal / zero */

loc_001295DB: ;
    MEM8(edi + 5) = MEM8(edi + 5) | 0x40;
    _fa = (uint32_t)(MEM8(edi + 5)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */

loc_001295DF: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001295E8; /* je: equal / zero */

loc_001295E4: ;
    MEM8(edi + 5) = MEM8(edi + 5) | 0x80;
    _fa = (uint32_t)(MEM8(edi + 5)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */

loc_001295E8: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001295F1; /* je: equal / zero */

loc_001295ED: ;
    MEM8(edi + 5) = MEM8(edi + 5) | 0x20;
    _fa = (uint32_t)(MEM8(edi + 5)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */

loc_001295F1: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 0x20 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001295FA; /* je: equal / zero */

loc_001295F6: ;
    MEM8(edi + 5) = MEM8(edi + 5) | 1;
    _fa = (uint32_t)(MEM8(edi + 5)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */

loc_001295FA: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00129603; /* je: equal / zero */

loc_001295FF: ;
    MEM8(edi + 5) = MEM8(edi + 5) | 8;
    _fa = (uint32_t)(MEM8(edi + 5)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */

loc_00129603: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 0x40 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0012960C; /* je: equal / zero */

loc_00129608: ;
    MEM8(edi + 5) = MEM8(edi + 5) | 2;
    _fa = (uint32_t)(MEM8(edi + 5)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */

loc_0012960C: ;
    POP32(esp, esi);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    POP32(esp, ebx);
    if ((((uint8_t)((uint8_t)(_fa) - (uint8_t)(_fb)) >> 7) == 0)) goto loc_0012961E; /* jns: not sign (positive) */

loc_00129612: ;
    SET_LO16(ecx, MEM16(edi));
    MEM8(edi + 5) = MEM8(edi + 5) | 4;
    _fa = (uint32_t)(MEM8(edi + 5)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM16(edi + 4) = MEM16(edi + 4) & LO16(ecx);
    _fa = (uint32_t)(MEM16(edi + 4)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    esp += 4; return; /* ret */

loc_0012961E: ;
    SET_LO16(edx, MEM16(edi));
    MEM16(edi + 4) = MEM16(edi + 4) & LO16(edx);
    _fa = (uint32_t)(MEM16(edi + 4)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}

/**
 * sub_00129630
 * Original: 0x00129630 - 0x001296CA (154 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00129630(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00129630: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x63966C) = ebp;
    esi = 0x63AC20;

loc_00129643: ;
    edi = MEM32(ebp + 0x63965C);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0012964Fu); RECOMP_ABI_CALL(0x0013A2C0u, sub_0013A2C0); /* call 0x0013A2C0 */

loc_0012964F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001296B2; /* je: equal / zero */

loc_00129656: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001296B2; /* je: equal / zero */

loc_0012965A: ;
    eax = MEM32(esi + 0xD8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012969C; /* je: equal / zero */

loc_00129664: ;
    ecx = MEM32(ebp + 0x63964C);
    eax = 1;
    eax = eax << LO8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = ebx | eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = esi;
    PUSH32(esp, 0x0012967Au); RECOMP_ABI_CALL(0x00129480u, sub_00129480); /* call 0x00129480 */

loc_0012967A: ;
    SET_LO8(eax, MEM8(edi + 3));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001296B2; /* je: equal / zero */

loc_00129681: ;
    ecx = MEM32(ebp + 0x63964C);
    eax = MEM32(0x63966C);
    edx = 1;
    edx = edx << LO8(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax | edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x63966C) = eax;
    goto loc_001296B2;

loc_0012969C: ;
    MEM8(edi + 6) = 0x7F;
    MEM8(edi + 7) = 0x7F;
    MEM8(edi + 8) = 0x7F;
    MEM8(edi + 9) = 0x7F;
    MEM16(edi + 4) = 0;

loc_001296B2: ;
    _fb = (uint32_t)(0xE4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xE4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 4;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x63AECC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x63AECC (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00129643; /* jle: less or equal (signed <=) */

loc_001296C3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001296D0
 * Original: 0x001296D0 - 0x00129777 (167 bytes, 59 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001296D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001296D0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ebx;
    esi = (uint32_t)((int32_t)esi * (int32_t)0xE4);
    PUSH32(esp, edi);
    edi = MEM32(ebx * 4 + 0x63965C);
    _fb = (uint32_t)(0x63AC20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x63AC20;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebx);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    MEM32(0x63966C) = ebp;
    PUSH32(esp, 0x001296FCu); RECOMP_ABI_CALL(0x0013A540u, sub_0013A540); /* call 0x0013A540 */

loc_001296FC: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012976B; /* je: equal / zero */

loc_00129703: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012976B; /* je: equal / zero */

loc_00129707: ;
    eax = MEM32(esi + 0xD8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00129757; /* je: equal / zero */

loc_00129711: ;
    ecx = MEM32(ebx * 4 + 0x63964C);
    ebx = ebx * 4 + 0x63964C;
    ebp = 1;
    eax = esi;
    ebp = ebp << LO8(ecx);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, 0x0012972Du); RECOMP_ABI_CALL(0x00129480u, sub_00129480); /* call 0x00129480 */

loc_0012972D: ;
    SET_LO8(eax, MEM8(edi + 3));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012976B; /* je: equal / zero */

loc_00129734: ;
    ecx = MEM32(ebx);
    eax = 1;
    eax = eax << LO8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = MEM32(0x63966C);
    POP32(esp, edi);
    POP32(esp, esi);
    ecx = ecx | eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    POP32(esp, ebp);
    MEM32(0x63966C) = ecx;
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00129757: ;
    SET_LO8(eax, 0x7F);
    MEM8(edi + 6) = LO8(eax);
    MEM8(edi + 7) = LO8(eax);
    MEM8(edi + 8) = LO8(eax);
    MEM8(edi + 9) = LO8(eax);
    MEM16(edi + 4) = 0;

loc_0012976B: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    POP32(esp, ebp);
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00129780
 * Original: 0x00129780 - 0x0012978B (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00129780(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00129780: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_push(0.30102999566398119521); /* fldlg2 */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    { fp_st1() = fp_st1() * log2(fp_top()); fp_pop(); } /* fyl2x */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00129790
 * Original: 0x00129790 - 0x00129795 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00129790(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00129790: ;
    g_seh_ebp = ebp; sub_003FA961(); return; /* tail jmp 0x003FA961 */

}

/**
 * sub_001297A0
 * Original: 0x001297A0 - 0x001297A5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001297A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001297A0: ;
    g_seh_ebp = ebp; sub_003FCB94(); return; /* tail jmp 0x003FCB94 */

}

/**
 * sub_001297B0
 * Original: 0x001297B0 - 0x001297B5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001297B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001297B0: ;
    g_seh_ebp = ebp; sub_00400107(); return; /* tail jmp 0x00400107 */

}

/**
 * sub_001297C0
 * Original: 0x001297C0 - 0x001297C5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001297C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001297C0: ;
    g_seh_ebp = ebp; sub_003FFB2A(); return; /* tail jmp 0x003FFB2A */

}

/**
 * sub_001297D0
 * Original: 0x001297D0 - 0x001297D5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001297D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001297D0: ;
    g_seh_ebp = ebp; sub_003FA997(); return; /* tail jmp 0x003FA997 */

}

/**
 * sub_001297E0
 * Original: 0x001297E0 - 0x001297E5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001297E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001297E0: ;
    g_seh_ebp = ebp; sub_003FCD76(); return; /* tail jmp 0x003FCD76 */

}

/**
 * sub_001297F0
 * Original: 0x001297F0 - 0x001297F5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001297F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001297F0: ;
    g_seh_ebp = ebp; sub_003FEC49(); return; /* tail jmp 0x003FEC49 */

}

/**
 * sub_00129800
 * Original: 0x00129800 - 0x00129805 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00129800(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00129800: ;
    g_seh_ebp = ebp; sub_003FCE1E(); return; /* tail jmp 0x003FCE1E */

}

/**
 * sub_00129810
 * Original: 0x00129810 - 0x00129815 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00129810(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00129810: ;
    g_seh_ebp = ebp; sub_003FCE66(); return; /* tail jmp 0x003FCE66 */

}

/**
 * sub_00129820
 * Original: 0x00129820 - 0x00129825 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00129820(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00129820: ;
    g_seh_ebp = ebp; sub_003FCEA2(); return; /* tail jmp 0x003FCEA2 */

}

/**
 * sub_00129830
 * Original: 0x00129830 - 0x00129835 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00129830(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00129830: ;
    g_seh_ebp = ebp; sub_003FCF02(); return; /* tail jmp 0x003FCF02 */

}

/**
 * sub_00129840
 * Original: 0x00129840 - 0x00129845 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00129840(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00129840: ;
    g_seh_ebp = ebp; sub_003FF629(); return; /* tail jmp 0x003FF629 */

}

/**
 * sub_00129850
 * Original: 0x00129850 - 0x00129851 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00129850(void)
{

loc_00129850: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00129860
 * Original: 0x00129860 - 0x00129896 (54 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00129860(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00129860: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    esi = ecx;
    PUSH32(esp, 0);
    eax = esi + 4;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    MEM32(esi) = 0;
    PUSH32(esp, 0x0012987Au); RECOMP_ABI_CALL(0x0015BB60u, sub_0015BB60); /* call 0x0015BB60 */

loc_0012987A: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x3C) = 0;
    MEM32(esi + 0x68) = 0;
    MEM32(esi + 0x6C) = 0x3F800000;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001298D0
 * Original: 0x001298D0 - 0x00129909 (57 bytes, 25 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001298D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001298D0: ;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(ecx);
    ecx = MEM32(esp + 4);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00129906; /* ja: above (unsigned >) */

loc_001298E2: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, edi);

loc_001298E8: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ecx) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001298FC; /* je: equal / zero */

loc_001298EC: ;
    edi = MEM32(ecx + 4);
    ecx = ecx + edi + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001298E8; /* jbe: below or equal (unsigned <=) */

loc_001298F7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

loc_001298FC: ;
    edx = MEM32(esp + 0x10);
    POP32(esp, edi);
    MEM32(edx) = ecx;
    SET_LO8(eax, 1);
    POP32(esp, esi);

loc_00129906: ;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00129910
 * Original: 0x00129910 - 0x0012996B (91 bytes, 24 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00129910(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00129910: ;
    eax = (uint32_t)(int32_t)SMEM16(esp + 4);
    MEM32(esp + 4) = eax;
    fp_push((double)SMEM32(esp + 4)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(ecx + 0x6C)); /* fdiv dword ptr [ecx + 0x6c] */
    MEMF(esp + 4) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x4964E8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x4964e8] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00129963; /* jne: not equal / not zero */

loc_00129931: ;
    fp_push(MEMD(0x496BA0)); /* fld double */
    fp_push(MEMF(0x496454)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 4)); /* fsub dword ptr [esp + 4] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x639704)); /* fmul dword ptr [0x639704] */
    PUSH32(esp, 0x0012994Cu); RECOMP_ABI_CALL(0x002A9970u, sub_002A9970); /* call 0x002A9970 */

loc_0012994C: ;
    fp_top() = -fp_top(); /* fchs */
    PUSH32(esp, 0x00129953u); RECOMP_ABI_CALL(0x000EB38Cu, sub_000EB38C); /* call 0x000EB38C */

loc_00129953: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0012995C; /* jle: less or equal (signed <=) */

loc_00129957: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

loc_0012995C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFE700u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFE700u (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00129968; /* jge: greater or equal (signed >=) */

loc_00129963: ;
    eax = 0xFFFFE700u;

loc_00129968: ;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00129970
 * Original: 0x00129970 - 0x001299B6 (70 bytes, 21 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00129970(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00129970: ;
    eax = (uint32_t)(int32_t)SMEM16(esp + 8);
    eax = eax << 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(esp + 8) = eax;
    PUSH32(esp, esi);
    esi = ecx;
    fp_push((double)SMEM32(esp + 0xC)); /* fild */
    fp_push(0.30102999566398119521); /* fldlg2 */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    { fp_st1() = fp_st1() * log2(fp_top()); fp_pop(); } /* fyl2x */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x639680)); /* fsub dword ptr [0x639680] */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(0x639708)); /* fdiv dword ptr [0x639708] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x4AB8E0)); /* fmul dword ptr [0x4ab8e0] */
    PUSH32(esp, 0x001299A0u); RECOMP_ABI_CALL(0x000EB38Cu, sub_000EB38C); /* call 0x000EB38C */

loc_001299A0: ;
    ecx = MEM32(esp + 8);
    edx = MEM32(esi + 0x78);
    ecx = ecx + ecx * 8;
    ecx = MEM32(edx + ecx * 4 + 0x1C);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = ecx;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001299C0
 * Original: 0x001299C0 - 0x001299F0 (48 bytes, 21 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001299C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001299C0: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001299CBu); RECOMP_ABI_CALL(0x00106120u, sub_00106120); /* call 0x00106120 */

loc_001299CB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001299EC; /* je: equal / zero */

loc_001299D2: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);

loc_001299D7: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x001299DEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001299DCu); } /* indirect call */
    }

loc_001299DE: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001299E4u); RECOMP_ABI_CALL(0x00106150u, sub_00106150); /* call 0x00106150 */

loc_001299E4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001299D7; /* jne: not equal / not zero */

loc_001299EB: ;
    POP32(esp, esi);

loc_001299EC: ;
    POP32(esp, edi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001299F0
 * Original: 0x001299F0 - 0x00129A10 (32 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001299F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001299F0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00129A08; /* je: equal / zero */

loc_001299F8: ;
    eax = MEM32(eax + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00129A08; /* je: equal / zero */

loc_001299FF: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_003FCE66(); return; /* tail jmp 0x003FCE66 */

loc_00129A08: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00129A10
 * Original: 0x00129A10 - 0x00129A19 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00129A10(void)
{

loc_00129A10: ;
    eax = ecx;
    MEM32(eax) = 0x4AB8E4;
    esp += 4; return; /* ret */

}

/**
 * sub_00129A70
 * Original: 0x00129A70 - 0x00129A79 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00129A70(void)
{

loc_00129A70: ;
    eax = ecx;
    MEM32(eax) = 0x639688;
    esp += 4; return; /* ret */

}

/**
 * sub_00129B40
 * Original: 0x00129B40 - 0x00129B4D (13 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00129B40(void)
{

loc_00129B40: ;
    eax = MEM32(ecx);
    ecx = MEM32(eax);
    edx = MEM32(esp + 4);
    MEM32(edx) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00129B60
 * Original: 0x00129B60 - 0x00129B69 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00129B60(void)
{

loc_00129B60: ;
    eax = ecx;
    MEM32(eax) = 0x4AB918;
    esp += 4; return; /* ret */

}

/**
 * sub_00129B70
 * Original: 0x00129B70 - 0x00129B7C (12 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00129B70(void)
{

loc_00129B70: ;
    eax = MEM32(ecx);
    ecx = MEM32(esp + 4);
    MEM32(eax + 0x6C) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00129B80
 * Original: 0x00129B80 - 0x00129B86 (6 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00129B80(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00129B80: ;
    eax = MEM32(ecx);
    fp_push(MEMF(eax + 0x6C)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00129D90
 * Original: 0x00129D90 - 0x00129D99 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00129D90(void)
{

loc_00129D90: ;
    eax = ecx;
    MEM32(eax) = 0x4AB934;
    esp += 4; return; /* ret */

}

/**
 * sub_00129DA0
 * Original: 0x00129DA0 - 0x00129DCF (47 bytes, 20 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00129DA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00129DA0: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x14;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x00129DACu); RECOMP_ABI_CALL(0x00106120u, sub_00106120); /* call 0x00106120 */

loc_00129DAC: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00129DCB; /* je: equal / zero */

loc_00129DB3: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);

loc_00129DB8: ;
    _fa = (uint32_t)(MEM32(eax + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x1C), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00129DCA; /* je: equal / zero */

loc_00129DBD: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00129DC3u); RECOMP_ABI_CALL(0x00106150u, sub_00106150); /* call 0x00106150 */

loc_00129DC3: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00129DB8; /* jne: not equal / not zero */

loc_00129DCA: ;
    POP32(esp, edi);

loc_00129DCB: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00129DD0
 * Original: 0x00129DD0 - 0x00129E3C (108 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00129DD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00129DD0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = MEM32(edi);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x14;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    MEM32(esp + 0xC) = 0x4AB934;
    PUSH32(esp, 0x00129DE8u); RECOMP_ABI_CALL(0x00106120u, sub_00106120); /* call 0x00106120 */

loc_00129DE8: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00129E08; /* je: equal / zero */

loc_00129DEF: ;
    /* nop */

loc_00129DF0: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xC);
    ecx = esp + 0xC;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00129DFBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00129DF9u); } /* indirect call */
    }

loc_00129DFB: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00129E01u); RECOMP_ABI_CALL(0x00106150u, sub_00106150); /* call 0x00106150 */

loc_00129E01: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00129DF0; /* jne: not equal / not zero */

loc_00129E08: ;
    esi = MEM32(edi);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x40;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x00129E13u); RECOMP_ABI_CALL(0x00106120u, sub_00106120); /* call 0x00106120 */

loc_00129E13: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00129E38; /* je: equal / zero */

loc_00129E1A: ;
    /* nop */

loc_00129E20: ;
    edx = MEM32(esp + 8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esp + 0xC;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00129E2Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00129E29u); } /* indirect call */
    }

loc_00129E2B: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00129E31u); RECOMP_ABI_CALL(0x00106150u, sub_00106150); /* call 0x00106150 */

loc_00129E31: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00129E20; /* jne: not equal / not zero */

loc_00129E38: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00129E40
 * Original: 0x00129E40 - 0x00129E72 (50 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00129E40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00129E40: ;
    PUSH32(esp, 0x00129E45u); RECOMP_ABI_CALL(0x002ACD43u, sub_002ACD43); /* call 0x002ACD43 */

loc_00129E45: ;
    ecx = eax;
    ecx = ecx & 0xFFFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00129E55; /* jne: not equal / not zero */

loc_00129E52: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_00129E55: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00129E6C; /* je: equal / zero */

loc_00129E59: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00129E6C; /* jne: not equal / not zero */

loc_00129E5E: ;
    eax = eax & 0x10000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | 0x20000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = eax >> 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esp += 4; return; /* ret */

loc_00129E6C: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00129EC0
 * Original: 0x00129EC0 - 0x00129F15 (85 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00129EC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00129EC0: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x49D538)); /* fmul dword ptr [0x49d538] */
    MEMF(esp + 4) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x4964E8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x4964e8] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00129F0F; /* jne: not equal / not zero */

loc_00129EDB: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x496454)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x496454] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00129EEF; /* jne: not equal / not zero */

loc_00129EEC: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_00129EEF: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_push(0.69314718055994530942); /* fldln2 */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    { fp_st1() = fp_st1() * log2(fp_top()); fp_pop(); } /* fyl2x */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x4AB938)); /* fmul dword ptr [0x4ab938] */
    PUSH32(esp, 0x00129F04u); RECOMP_ABI_CALL(0x000EB38Cu, sub_000EB38C); /* call 0x000EB38C */

loc_00129F04: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00129EEC; /* jg: greater (signed >) */

loc_00129F08: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFC40u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFC40u (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00129F14; /* jge: greater or equal (signed >=) */

loc_00129F0F: ;
    eax = 0xFFFFFC40u;

loc_00129F14: ;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00129F20
 * Original: 0x00129F20 - 0x00129F78 (88 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00129F20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00129F20: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x49D538)); /* fmul dword ptr [0x49d538] */
    MEMF(esp + 4) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x4964E8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x4964e8] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00129F72; /* jne: not equal / not zero */

loc_00129F3B: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x496454)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x496454] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00129F4F; /* jne: not equal / not zero */

loc_00129F4C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_00129F4F: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_push(0.69314718055994530942); /* fldln2 */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    { fp_st1() = fp_st1() * log2(fp_top()); fp_pop(); } /* fyl2x */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x49D450)); /* fmul dword ptr [0x49d450] */
    PUSH32(esp, 0x00129F64u); RECOMP_ABI_CALL(0x000EB38Cu, sub_000EB38C); /* call 0x000EB38C */

loc_00129F64: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x64);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00129F4C; /* jg: greater (signed >) */

loc_00129F6B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFE700u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFE700u (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00129F77; /* jge: greater or equal (signed >=) */

loc_00129F72: ;
    eax = 0xFFFFE700u;

loc_00129F77: ;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00129F80
 * Original: 0x00129F80 - 0x00129F90 (16 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00129F80(void)
{

loc_00129F80: ;
    eax = ecx;
    MEM32(eax) = 0x4AB93C;
    MEM32(eax + 4) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_00129FF0
 * Original: 0x00129FF0 - 0x0012A02A (58 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00129FF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00129FF0: ;
    SET_LO8(ecx, MEM8(0x63967C));
    eax = 1;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0012A024; /* jne: not equal / not zero */

loc_00129FFF: ;
    edx = MEM32(0x63967C);
    edx = edx | eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0x3C4BF0);
    MEM32(0x63967C) = edx;
    MEM32(0x639678) = 0x639688;
    PUSH32(esp, 0x0012A021u); RECOMP_ABI_CALL(0x000EB50Au, sub_000EB50A); /* call 0x000EB50A */

loc_0012A021: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0012A024: ;
    eax = 0x639678;
    esp += 4; return; /* ret */

}

/**
 * sub_0012A2E0
 * Original: 0x0012A2E0 - 0x0012A2FC (28 bytes, 8 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012A2E0(void)
{

loc_0012A2E0: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    ecx = esp + 4;
    MEM32(esp + 4) = 0x4AB934;
    { uint32_t _icall_target = MEM32(0x4AB934); PUSH32(esp, 0x0012A2F8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0012A2F2u); } /* indirect call */
    }

loc_0012A2F8: ;
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0012A300
 * Original: 0x0012A300 - 0x0012A34B (75 bytes, 29 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012A300(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012A300: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x14;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x0012A30Cu); RECOMP_ABI_CALL(0x00106120u, sub_00106120); /* call 0x00106120 */

loc_0012A30C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012A347; /* je: equal / zero */

loc_0012A313: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);

loc_0012A318: ;
    _fa = (uint32_t)(MEM32(eax + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x1C), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012A32F; /* je: equal / zero */

loc_0012A31D: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0012A323u); RECOMP_ABI_CALL(0x00106150u, sub_00106150); /* call 0x00106150 */

loc_0012A323: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012A318; /* jne: not equal / not zero */

loc_0012A32A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0012A32F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012A346; /* je: equal / zero */

loc_0012A333: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    MEM32(esp + 0x10) = 0x4AB934;
    { uint32_t _icall_target = MEM32(0x4AB934); PUSH32(esp, 0x0012A346u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0012A340u); } /* indirect call */
    }

loc_0012A346: ;
    POP32(esp, edi);

loc_0012A347: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0012A350
 * Original: 0x0012A350 - 0x0012A37C (44 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012A350(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012A350: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0xC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esp + 4;
    MEM32(esp + 4) = 0x4AB93C;
    MEM32(esp + 8) = 0;
    { uint32_t _icall_target = MEM32(0x4AB93C); PUSH32(esp, 0x0012A372u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0012A36Cu); } /* indirect call */
    }

loc_0012A372: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0012A380
 * Original: 0x0012A380 - 0x0012A3F3 (115 bytes, 45 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012A380(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012A380: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(ecx);
    PUSH32(esp, edi);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x14;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    edi = edi | 0xFFFFFFFFu;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0x0012A393u); RECOMP_ABI_CALL(0x00106120u, sub_00106120); /* call 0x00106120 */

loc_0012A393: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012A3E9; /* je: equal / zero */

loc_0012A39A: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x18);
    /* nop */

loc_0012A3A0: ;
    _fa = (uint32_t)(MEM32(eax + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x1C), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012A3BD; /* je: equal / zero */

loc_0012A3A5: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0012A3ABu); RECOMP_ABI_CALL(0x00106150u, sub_00106150); /* call 0x00106150 */

loc_0012A3AB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012A3A0; /* jne: not equal / not zero */

loc_0012A3B2: ;
    POP32(esp, ebx);
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0012A3BD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012A3B2; /* je: equal / zero */

loc_0012A3C1: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    MEM32(esp + 0x10) = 0x4AB93C;
    MEM32(esp + 0x14) = 0;
    { uint32_t _icall_target = MEM32(0x4AB93C); PUSH32(esp, 0x0012A3DCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0012A3D6u); } /* indirect call */
    }

loc_0012A3DC: ;
    eax = MEM32(esp + 0x10);
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0012A3E9: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0012A400
 * Original: 0x0012A400 - 0x0012A46B (107 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012A400(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012A400: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = MEM32(edi);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x14;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    MEM32(esp + 0xC) = 0x4AB93C;
    MEM32(esp + 0x10) = 0;
    PUSH32(esp, 0x0012A422u); RECOMP_ABI_CALL(0x00106120u, sub_00106120); /* call 0x00106120 */

loc_0012A422: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012A448; /* je: equal / zero */

loc_0012A429: ;
    /* nop */

loc_0012A430: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xC);
    ecx = esp + 0xC;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0012A43Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0012A439u); } /* indirect call */
    }

loc_0012A43B: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0012A441u); RECOMP_ABI_CALL(0x00106150u, sub_00106150); /* call 0x00106150 */

loc_0012A441: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012A430; /* jne: not equal / not zero */

loc_0012A448: ;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012A465; /* je: equal / zero */

loc_0012A451: ;
    ecx = MEM32(edi);
    edx = esp + 8;
    PUSH32(esp, edx);
    eax = ecx + 0x40;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0012A461u); RECOMP_ABI_CALL(0x001299C0u, sub_001299C0); /* call 0x001299C0 */

loc_0012A461: ;
    eax = MEM32(esp + 0xC);

loc_0012A465: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0012A4F0
 * Original: 0x0012A4F0 - 0x0012A544 (84 bytes, 38 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012A4F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012A4F0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = MEM32(edi);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x14;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x0012A4FFu); RECOMP_ABI_CALL(0x00106120u, sub_00106120); /* call 0x00106120 */

loc_0012A4FF: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012A53F; /* je: equal / zero */

loc_0012A506: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10);
    goto loc_0012A510;

    /* nop */

loc_0012A510: ;
    _fa = (uint32_t)(MEM32(eax + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x1C), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012A528; /* je: equal / zero */

loc_0012A515: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0012A51Bu); RECOMP_ABI_CALL(0x00106150u, sub_00106150); /* call 0x00106150 */

loc_0012A51B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012A510; /* jne: not equal / not zero */

loc_0012A522: ;
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_0012A528: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012A53E; /* je: equal / zero */

loc_0012A52C: ;
    ecx = MEM32(esp + 0x18);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0012A53Eu); RECOMP_ABI_CALL(0x0012A470u, sub_0012A470); /* call 0x0012A470 */

loc_0012A53E: ;
    POP32(esp, ebx);

loc_0012A53F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0012A580
 * Original: 0x0012A580 - 0x0012A5A0 (32 bytes, 9 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012A580(void)
{

loc_0012A580: ;
    edx = MEM32(esp + 8);
    eax = ecx;
    ecx = MEM32(esp + 4);
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0xC);
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = 0x3F800000;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0012A5A0
 * Original: 0x0012A5A0 - 0x0012A5CA (42 bytes, 15 insns)
 * CC: cdecl, 1 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0012A5A0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0012A5A0: ;
    eax = ecx;
    ecx = MEM32(esp + 4);
    fp_push(MEMF(ecx)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax)); /* fadd dword ptr [eax] */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 4)); /* fadd dword ptr [eax + 4] */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 8)); /* fadd dword ptr [eax + 8] */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 0xC)); /* fadd dword ptr [eax + 0xc] */
    MEMF(eax + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0012A5D0
 * Original: 0x0012A5D0 - 0x0012A5FB (43 bytes, 14 insns)
 * CC: cdecl, 1 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0012A5D0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0012A5D0: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    eax = ecx;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax)); /* fmul dword ptr [eax] */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 4)); /* fmul dword ptr [eax + 4] */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 8)); /* fmul dword ptr [eax + 8] */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0xC)); /* fmul dword ptr [eax + 0xc] */
    MEMF(eax + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0012A600
 * Original: 0x0012A600 - 0x0012A61A (26 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012A600(void)
{

loc_0012A600: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 8);
    PUSH32(esp, eax);
    eax = MEM32(esp + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0012A619u); RECOMP_ABI_CALL(0x000FFED6u, sub_000FFED6); /* call 0x000FFED6 */

loc_0012A619: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0012A620
 * Original: 0x0012A620 - 0x0012A627 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012A620(void)
{

loc_0012A620: ;
    MEM32(ecx) = 0x4ABAA0;
    esp += 4; return; /* ret */

}

/**
 * sub_0012A630
 * Original: 0x0012A630 - 0x0012A634 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012A630(void)
{

loc_0012A630: ;
    eax = ecx + 0x6C;
    esp += 4; return; /* ret */

}

/**
 * sub_0012A640
 * Original: 0x0012A640 - 0x0012A657 (23 bytes, 5 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012A640(void)
{

loc_0012A640: ;
    eax = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    MEM32(ecx + 0x9C) = eax;
    MEM32(ecx + 0xA0) = edx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0012A660
 * Original: 0x0012A660 - 0x0012A66D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012A660(void)
{

loc_0012A660: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x9C) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0012A670
 * Original: 0x0012A670 - 0x0012A67D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012A670(void)
{

loc_0012A670: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0xA0) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0012A680
 * Original: 0x0012A680 - 0x0012A687 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012A680(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0012A680: ;
    fp_push(MEMF(ecx + 0x9C)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0012A690
 * Original: 0x0012A690 - 0x0012A6AE (30 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012A690(void)
{

loc_0012A690: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax);
    MEM32(ecx + 0x5C) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 0x60) = edx;
    edx = MEM32(eax + 8);
    MEM32(ecx + 0x64) = edx;
    eax = MEM32(eax + 0xC);
    MEM32(ecx + 0x68) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0012A6B0
 * Original: 0x0012A6B0 - 0x0012A6B4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012A6B0(void)
{

loc_0012A6B0: ;
    eax = MEM32(ecx + 0xC);
    esp += 4; return; /* ret */

}

/**
 * sub_0012A6C0
 * Original: 0x0012A6C0 - 0x0012A6D1 (17 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012A6C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012A6C0: ;
    eax = MEM32(esp + 4);
    eax = eax << 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax + ecx + 0x8F4;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0012A6E0
 * Original: 0x0012A6E0 - 0x0012A6E7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012A6E0(void)
{

loc_0012A6E0: ;
    eax = MEM32(ecx + 0x938);
    esp += 4; return; /* ret */

}

/**
 * sub_0012A6F0
 * Original: 0x0012A6F0 - 0x0012A6FD (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012A6F0(void)
{

loc_0012A6F0: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x944) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0012A700
 * Original: 0x0012A700 - 0x0012A704 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012A700(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0012A700: ;
    fp_push(MEMF(ecx + 0x70)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0012A710
 * Original: 0x0012A710 - 0x0012A714 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012A710(void)
{

loc_0012A710: ;
    eax = ecx + 0x78;
    esp += 4; return; /* ret */

}

/**
 * sub_0012A720
 * Original: 0x0012A720 - 0x0012A72A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012A720(void)
{

loc_0012A720: ;
    SET_LO8(eax, MEM8(esp + 4));
    MEM8(ecx + 0x18) = LO8(eax);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0012A730
 * Original: 0x0012A730 - 0x0012A734 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012A730(void)
{

loc_0012A730: ;
    SET_LO8(eax, MEM8(ecx + 0x18));
    esp += 4; return; /* ret */

}

/**
 * sub_0012A740
 * Original: 0x0012A740 - 0x0012A74D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012A740(void)
{

loc_0012A740: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x84) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0012A750
 * Original: 0x0012A750 - 0x0012A757 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012A750(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0012A750: ;
    fp_push(MEMF(ecx + 0x84)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0012A760
 * Original: 0x0012A760 - 0x0012A764 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012A760(void)
{

loc_0012A760: ;
    eax = MEM32(ecx + 0x6C);
    esp += 4; return; /* ret */

}

/**
 * sub_0012A770
 * Original: 0x0012A770 - 0x0012A774 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012A770(void)
{

loc_0012A770: ;
    eax = MEM32(ecx + 0x64);
    esp += 4; return; /* ret */

}

/**
 * sub_0012A780
 * Original: 0x0012A780 - 0x0012A787 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012A780(void)
{

loc_0012A780: ;
    eax = MEM32(ecx + 0xD0);
    esp += 4; return; /* ret */

}

/**
 * sub_0012A790
 * Original: 0x0012A790 - 0x0012A7AD (29 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012A790(void)
{

loc_0012A790: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + eax * 8 + 0xDC) = 0;
    MEM32(ecx + eax * 8 + 0xE0) = 0x7F7FFFFF;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0012A7B0
 * Original: 0x0012A7B0 - 0x0012A7BE (14 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012A7B0(void)
{

loc_0012A7B0: ;
    eax = MEM32(esp + 4);
    eax = MEM32(ecx + eax * 8 + 0xDC);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0012A7C0
 * Original: 0x0012A7C0 - 0x0012A7DD (29 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012A7C0(void)
{

loc_0012A7C0: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + eax * 8 + 0xF4) = 0;
    MEM32(ecx + eax * 8 + 0xF8) = 0x7F7FFFFF;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0012A7E0
 * Original: 0x0012A7E0 - 0x0012A7EE (14 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012A7E0(void)
{

loc_0012A7E0: ;
    eax = MEM32(esp + 4);
    eax = MEM32(ecx + eax * 8 + 0xF4);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0012A7F0
 * Original: 0x0012A7F0 - 0x0012A7FE (14 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012A7F0(void)
{

loc_0012A7F0: ;
    eax = MEM32(esp + 4);
    eax = ecx + eax * 8 + 0xF4;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0012A800
 * Original: 0x0012A800 - 0x0012A80A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012A800(void)
{

loc_0012A800: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x5C) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0012A810
 * Original: 0x0012A810 - 0x0012A814 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012A810(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0012A810: ;
    fp_push(MEMF(ecx + 0x5C)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0012A820
 * Original: 0x0012A820 - 0x0012A82A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012A820(void)
{

loc_0012A820: ;
    SET_LO8(eax, MEM8(esp + 4));
    MEM8(ecx + 0x61) = LO8(eax);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0012A830
 * Original: 0x0012A830 - 0x0012A83A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012A830(void)
{

loc_0012A830: ;
    SET_LO8(eax, MEM8(esp + 4));
    MEM8(ecx + 0x62) = LO8(eax);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0012A840
 * Original: 0x0012A840 - 0x0012A847 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012A840(void)
{

loc_0012A840: ;
    eax = MEM32(ecx + 0xCC);
    esp += 4; return; /* ret */

}

/**
 * sub_0012A850
 * Original: 0x0012A850 - 0x0012A857 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012A850(void)
{

loc_0012A850: ;
    eax = MEM32(ecx + 0xD8);
    esp += 4; return; /* ret */

}

/**
 * sub_0012A860
 * Original: 0x0012A860 - 0x0012A87E (30 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012A860(void)
{

loc_0012A860: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax);
    MEM32(ecx + 0x3C) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 0x40) = edx;
    edx = MEM32(eax + 8);
    MEM32(ecx + 0x44) = edx;
    eax = MEM32(eax + 0xC);
    MEM32(ecx + 0x48) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0012A880
 * Original: 0x0012A880 - 0x0012A89E (30 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012A880(void)
{

loc_0012A880: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax);
    MEM32(ecx + 0x4C) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 0x50) = edx;
    edx = MEM32(eax + 8);
    MEM32(ecx + 0x54) = edx;
    eax = MEM32(eax + 0xC);
    MEM32(ecx + 0x58) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0012A8A0
 * Original: 0x0012A8A0 - 0x0012A8A7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012A8A0(void)
{

loc_0012A8A0: ;
    eax = MEM32(ecx + 0x408);
    esp += 4; return; /* ret */

}

/**
 * sub_0012A8B0
 * Original: 0x0012A8B0 - 0x0012A8C8 (24 bytes, 9 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012A8B0(void)
{

loc_0012A8B0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = ecx + 0xD0;
    ecx = 0x10;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0012A8D0
 * Original: 0x0012A8D0 - 0x0012A8E8 (24 bytes, 9 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012A8D0(void)
{

loc_0012A8D0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = ecx + 0x110;
    ecx = 0x10;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0012A8F0
 * Original: 0x0012A8F0 - 0x0012A8FD (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012A8F0(void)
{

loc_0012A8F0: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x178) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0012A900
 * Original: 0x0012A900 - 0x0012A90D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012A900(void)
{

loc_0012A900: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x17C) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0012A910
 * Original: 0x0012A910 - 0x0012A944 (52 bytes, 12 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012A910(void)
{

loc_0012A910: ;
    SET_LO8(eax, MEM8(esp + 4));
    MEM8(ecx + 0x164) = LO8(eax);
    eax = MEM32(esp + 8);
    edx = MEM32(eax);
    MEM32(ecx + 0x168) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 0x16C) = edx;
    edx = MEM32(eax + 8);
    MEM32(ecx + 0x170) = edx;
    eax = MEM32(eax + 0xC);
    MEM32(ecx + 0x174) = eax;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0012A950
 * Original: 0x0012A950 - 0x0012A95A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012A950(void)
{

loc_0012A950: ;
    SET_LO8(eax, MEM8(esp + 4));
    MEM8(ecx + 0x24) = LO8(eax);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0012A960
 * Original: 0x0012A960 - 0x0012A964 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012A960(void)
{

loc_0012A960: ;
    SET_LO8(eax, MEM8(ecx + 0x24));
    esp += 4; return; /* ret */

}

/**
 * sub_0012A970
 * Original: 0x0012A970 - 0x0012A974 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012A970(void)
{

loc_0012A970: ;
    eax = MEM32(ecx + 0x78);
    esp += 4; return; /* ret */

}

/**
 * sub_0012A980
 * Original: 0x0012A980 - 0x0012A987 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012A980(void)
{

loc_0012A980: ;
    eax = MEM32(ecx + 0xB0);
    esp += 4; return; /* ret */

}

/**
 * sub_0012A990
 * Original: 0x0012A990 - 0x0012A994 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012A990(void)
{

loc_0012A990: ;
    eax = MEM32(ecx + 0x14);
    esp += 4; return; /* ret */

}

/**
 * sub_0012A9A0
 * Original: 0x0012A9A0 - 0x0012A9AB (11 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012A9A0(void)
{

loc_0012A9A0: ;
    eax = MEM32(esp + 4);
    eax = MEM32(ecx + eax * 4 + 0x18);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0012A9B0
 * Original: 0x0012A9B0 - 0x0012A9B3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012A9B0(void)
{

loc_0012A9B0: ;
    eax = MEM32(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0012A9C0
 * Original: 0x0012A9C0 - 0x0012A9CB (11 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012A9C0(void)
{

loc_0012A9C0: ;
    eax = MEM32(esp + 4);
    eax = MEM32(ecx + eax * 4 + 4);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0012A9D0
 * Original: 0x0012A9D0 - 0x0012A9DE (14 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012A9D0(void)
{

loc_0012A9D0: ;
    eax = MEM32(esp + 4);
    eax = MEM32(ecx + eax * 4 + 0x150);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0012A9E0
 * Original: 0x0012A9E0 - 0x0012A9E7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012A9E0(void)
{

loc_0012A9E0: ;
    SET_LO8(eax, MEM8(ecx + 0x180));
    esp += 4; return; /* ret */

}

/**
 * sub_0012A9F0
 * Original: 0x0012A9F0 - 0x0012A9F7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012A9F0(void)
{

loc_0012A9F0: ;
    eax = MEM32(ecx + 0x184);
    esp += 4; return; /* ret */

}

/**
 * sub_0012AA00
 * Original: 0x0012AA00 - 0x0012AA04 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012AA00(void)
{

loc_0012AA00: ;
    eax = ecx + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_0012AA10
 * Original: 0x0012AA10 - 0x0012AA14 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012AA10(void)
{

loc_0012AA10: ;
    eax = ecx + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_0012AA20
 * Original: 0x0012AA20 - 0x0012AA47 (39 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012AA20(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012AA20: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xD8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0012AA2Fu); RECOMP_ABI_CALL(0x00142670u, sub_00142670); /* call 0x00142670 */

loc_0012AA2F: ;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0012AA39u); RECOMP_ABI_CALL(0x00142840u, sub_00142840); /* call 0x00142840 */

loc_0012AA39: ;
    eax = MEM32(esi + 0x64);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0x64) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0012AA50
 * Original: 0x0012AA50 - 0x0012AACF (127 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012AA50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012AA50: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0012AA59u); RECOMP_ABI_CALL(0x0014B9C0u, sub_0014B9C0); /* call 0x0014B9C0 */

loc_0012AA59: ;
    ecx = MEM32(esi + 0xC8);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012AA69; /* je: equal / zero */

loc_0012AA65: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0012AA69u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0012AA67u); } /* indirect call */
    }

loc_0012AA69: ;
    MEM32(esi + 0xD4) = ebx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0xC8) = ebx;
    edx = esi + 0xDC;
    MEM32(edx) = ecx;
    MEM32(edx + 4) = ecx;
    MEM32(edx + 8) = ecx;
    MEM32(edx + 0xC) = ecx;
    MEM32(edx + 0x10) = ecx;
    MEM32(edx + 0x14) = ecx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esi + 0xF4;
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0xC) = eax;
    MEM32(ecx + 0x10) = eax;
    MEM32(ecx + 0x14) = eax;
    eax = MEM32(esi + 0xD4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esi + 0xC4) = ebx;
    MEM32(esi + 0xCC) = ebx;
    MEM32(esi + 0xD0) = ebx;
    MEM32(esi + 0x64) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_0012AAC9; /* je: equal / zero */

loc_0012AAC6: ;
    MEM8(eax + 0x24) = LO8(ebx);

loc_0012AAC9: ;
    MEM32(esi + 0x68) = ebx;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0012AAD0
 * Original: 0x0012AAD0 - 0x0012AAD3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012AAD0(void)
{

loc_0012AAD0: ;
    eax = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_0012AAE0
 * Original: 0x0012AAE0 - 0x0012AAE1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012AAE0(void)
{

loc_0012AAE0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0012AAF0
 * Original: 0x0012AAF0 - 0x0012AC9E (430 bytes, 141 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012AAF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0012AAF0: ;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 8);
    ecx = MEM32(eax);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    PUSH32(esp, edi);
    MEM32(esp + 0xC) = 0;
    if (CMP_LE(_fas, _fbs)) goto loc_0012AB3D; /* jle: less or equal (signed <=) */

loc_0012AB0B: ;
    goto loc_0012AB10;

    /* nop */

loc_0012AB10: ;
    eax = MEM32(esi + 8);
    ecx = MEM32(eax + 8);
    edx = MEM32(eax + 0xC);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = MEM32(edx + ecx * 4);
    eax = edi + 0x2C;
    PUSH32(esp, 0x4A4654);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0012AB2Cu); RECOMP_ABI_CALL(0x002A8FEBu, sub_002A8FEB); /* call 0x002A8FEB */

loc_0012AB2C: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012AB4B; /* je: equal / zero */

loc_0012AB33: ;
    ecx = MEM32(esi + 8);
    eax = MEM32(ecx);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0012AB10; /* jl: less (signed <) */

loc_0012AB3D: ;
    POP32(esp, edi);
    MEM32(esi + 0x70) = 0x43480000;
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0012AB4B: ;
    edx = MEM32(esi + 8);
    eax = MEM32(edx);
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0012AC39; /* jle: less or equal (signed <=) */

loc_0012AB5B: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_0012AB60: ;
    eax = MEM32(esi + 8);
    ecx = MEM32(eax + 8);
    edx = MEM32(eax + 0xC);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebp;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(edx + ecx * 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012AC25; /* je: equal / zero */

loc_0012AB76: ;
    eax = MEM32(esi + 0xC4);
    eax = MEM32(eax + 0x28);
    SET_LO8(edx, MEM8(eax + ebx + 0x340));
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 8 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0012AC25; /* jne: not equal / not zero */

loc_0012AB91: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012ABA4; /* je: equal / zero */

loc_0012AB97: ;
    _fa = (uint32_t)(MEM8(eax + 0x340)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x340), 8 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0012AC25; /* jne: not equal / not zero */

loc_0012ABA4: ;
    fp_push(MEMF(ecx + 0xC)); /* fld float */
    edx = esp + 0x1C;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(edi + 0xC)); /* fsub dword ptr [edi + 0xc] */
    MEM32(esp + 0x18) = edx;
    fp_push(MEMF(ecx + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(edi + 0x10)); /* fsub dword ptr [edi + 0x10] */
    fp_push(MEMF(ecx + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(edi + 0x14)); /* fsub dword ptr [edi + 0x14] */
    MEM32(esp + 0x28) = 0x3F800000;
    MEM8(0x50FF48) = 1;
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x34);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEM32(esp + 0x24) = ecx;
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x18);
    xmm1 = XMM_MEM(edx); /* movups */
    xmm2 = xmm1; /* movaps */
    xmm1 = XMM_MUL(xmm1, xmm2); /* mulps */
    xmm0 = xmm1; /* movaps */
    xmm0 = XMM_SHUFFLE(xmm0, xmm0, 0x93); /* shufps */
    xmm1 = XMM_ADD(xmm1, xmm0); /* addps */
    xmm0 = XMM_SHUFFLE(xmm0, xmm0, 0x93); /* shufps */
    xmm1 = XMM_ADD(xmm1, xmm0); /* addps */
    xmm0 = XMM_SHUFFLE(xmm0, xmm0, 0x93); /* shufps */
    xmm1 = XMM_ADD(xmm1, xmm0); /* addps */
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x10)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x10] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0012AC25; /* jne: not equal / not zero */

loc_0012AC1D: ;
    eax = MEM32(esp + 0x14);
    MEM32(esp + 0x10) = eax;

loc_0012AC25: ;
    ecx = MEM32(esi + 8);
    eax = MEM32(ecx);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x390) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x390;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0012AB60; /* jl: less (signed <) */

loc_0012AC39: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    eax = MEM32(esi + 0xD0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    POP32(esp, ebp);
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0xC);
    MEM32(esi + 0x70) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_0012AC97; /* je: equal / zero */

loc_0012AC55: ;
    eax = (uint32_t)(int32_t)SMEM16(eax + 0x1DFE);
    fp_push(MEMF(esp + 0xC)); /* fld float */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x34) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x34 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012AC6F; /* je: equal / zero */

loc_0012AC65: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x37) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x37 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012AC6F; /* je: equal / zero */

loc_0012AC6A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x52) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x52 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012AC77; /* jne: not equal / not zero */

loc_0012AC6F: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x496B28)); /* fld float */

loc_0012AC77: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0012AC8E; /* jne: not equal / not zero */

loc_0012AC84: ;
    POP32(esp, edi);
    MEMF(esi + 0x74) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0012AC8E: ;
    eax = MEM32(esp + 0xC);
    fp_pop(); /* fstp st(0) */
    MEM32(esi + 0x74) = eax;

loc_0012AC97: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0012ACA0
 * Original: 0x0012ACA0 - 0x0012ACD6 (54 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012ACA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012ACA0: ;
    ecx = MEM32(0x63AFD4);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0xB0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0012ACB7u); RECOMP_ABI_CALL(0x0012EF50u, sub_0012EF50); /* call 0x0012EF50 */

loc_0012ACB7: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012ACD4; /* jne: not equal / not zero */

loc_0012ACBB: ;
    eax = MEM32(0x63AFD4);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0012ACCAu); RECOMP_ABI_CALL(0x00148130u, sub_00148130); /* call 0x00148130 */

loc_0012ACCA: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012ACD4; /* jne: not equal / not zero */

loc_0012ACCE: ;
    MEM32(0x639718) = MEM32(0x639718) + 1;
    _fa = (uint32_t)(MEM32(0x639718)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0012ACD4: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0012ACE0
 * Original: 0x0012ACE0 - 0x0012AD43 (99 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012ACE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012ACE0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0012ACEEu); RECOMP_ABI_CALL(0x00011F9Bu, sub_00011F9B); /* call 0x00011F9B */

loc_0012ACEE: ;
    ecx = eax;
    PUSH32(esp, 0x0012ACF5u); RECOMP_ABI_CALL(0x00116660u, sub_00116660); /* call 0x00116660 */

loc_0012ACF5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012AD08; /* je: equal / zero */

loc_0012ACF9: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0012AD01u); RECOMP_ABI_CALL(0x0012F6B0u, sub_0012F6B0); /* call 0x0012F6B0 */

loc_0012AD01: ;
    ecx = eax;
    PUSH32(esp, 0x0012AD08u); RECOMP_ABI_CALL(0x0012F340u, sub_0012F340); /* call 0x0012F340 */

loc_0012AD08: ;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_0012AD32; /* je: equal / zero */

loc_0012AD11: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0012AD17u); RECOMP_ABI_CALL(0x00011F9Bu, sub_00011F9B); /* call 0x00011F9B */

loc_0012AD17: ;
    ecx = eax;
    PUSH32(esp, 0x0012AD1Eu); RECOMP_ABI_CALL(0x00116660u, sub_00116660); /* call 0x00116660 */

loc_0012AD1E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012AD42; /* je: equal / zero */

loc_0012AD22: ;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, 0x0012AD2Au); RECOMP_ABI_CALL(0x0012F6B0u, sub_0012F6B0); /* call 0x0012F6B0 */

loc_0012AD2A: ;
    ecx = eax;
    PUSH32(esp, 0x0012AD31u); RECOMP_ABI_CALL(0x0012F340u, sub_0012F340); /* call 0x0012F340 */

loc_0012AD31: ;
    esp += 4; return; /* ret */

loc_0012AD32: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x0012AD3Bu); RECOMP_ABI_CALL(0x0012F6B0u, sub_0012F6B0); /* call 0x0012F6B0 */

loc_0012AD3B: ;
    ecx = eax;
    PUSH32(esp, 0x0012AD42u); RECOMP_ABI_CALL(0x0012F340u, sub_0012F340); /* call 0x0012F340 */

loc_0012AD42: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0012AD50
 * Original: 0x0012AD50 - 0x0012AD89 (57 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012AD50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012AD50: ;
    ecx = MEM32(0x63AFD4);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0xB0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0012AD67u); RECOMP_ABI_CALL(0x0012EF50u, sub_0012EF50); /* call 0x0012EF50 */

loc_0012AD67: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012AD87; /* jne: not equal / not zero */

loc_0012AD6B: ;
    eax = MEM32(0x63AFD4);
    PUSH32(esp, 0x12ACE0);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0012AD7Du); RECOMP_ABI_CALL(0x00148130u, sub_00148130); /* call 0x00148130 */

loc_0012AD7D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012AD87; /* jne: not equal / not zero */

loc_0012AD81: ;
    MEM32(0x639718) = MEM32(0x639718) + 1;
    _fa = (uint32_t)(MEM32(0x639718)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0012AD87: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0012AD90
 * Original: 0x0012AD90 - 0x0012ADF0 (96 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012AD90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012AD90: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0012AD9Bu); RECOMP_ABI_CALL(0x0012ACE0u, sub_0012ACE0); /* call 0x0012ACE0 */

loc_0012AD9B: ;
    SET_LO8(eax, MEM8(esi + 8));
    ecx = MEM32(0x63AFB4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x20 (8-bit) */
    POP32(esp, esi);
    if (TEST_Z(_fa, _fb)) goto loc_0012ADCE; /* je: equal / zero */

loc_0012ADAC: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012ADBB; /* jne: not equal / not zero */

loc_0012ADB0: ;
    ecx = 0x63AFB8;
    MEM32(0x63AFB4) = ecx;

loc_0012ADBB: ;
    eax = MEM32(0x639710);
    edx = MEM32(eax * 4 + 0x63A218);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0012ADCDu); RECOMP_ABI_CALL(0x0013B2F0u, sub_0013B2F0); /* call 0x0013B2F0 */

loc_0012ADCD: ;
    esp += 4; return; /* ret */

loc_0012ADCE: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012ADDD; /* jne: not equal / not zero */

loc_0012ADD2: ;
    ecx = 0x63AFB8;
    MEM32(0x63AFB4) = ecx;

loc_0012ADDD: ;
    eax = MEM32(0x63970C);
    edx = MEM32(eax * 4 + 0x63A218);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0012ADEFu); RECOMP_ABI_CALL(0x0013B2F0u, sub_0013B2F0); /* call 0x0013B2F0 */

loc_0012ADEF: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0012ADF0
 * Original: 0x0012ADF0 - 0x0012AE29 (57 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012ADF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012ADF0: ;
    ecx = MEM32(0x63AFD4);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0xB0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0012AE07u); RECOMP_ABI_CALL(0x0012EF50u, sub_0012EF50); /* call 0x0012EF50 */

loc_0012AE07: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012AE27; /* jne: not equal / not zero */

loc_0012AE0B: ;
    eax = MEM32(0x63AFD4);
    PUSH32(esp, 0x12AD90);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0012AE1Du); RECOMP_ABI_CALL(0x00148130u, sub_00148130); /* call 0x00148130 */

loc_0012AE1D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012AE27; /* jne: not equal / not zero */

loc_0012AE21: ;
    MEM32(0x639718) = MEM32(0x639718) + 1;
    _fa = (uint32_t)(MEM32(0x639718)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0012AE27: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0012AE30
 * Original: 0x0012AE30 - 0x0012AF0F (223 bytes, 86 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012AE30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0012AE30: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0012AE40;

    /* nop */

loc_0012AE40: ;
    eax = MEM32(ebx + edi * 8);
    fp_push(MEMF(esp + 0x14)); /* fld float */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012AE63; /* je: equal / zero */

loc_0012AE4B: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ebx + edi * 8 + 4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ebx + edi*8 + 4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0012AE75; /* jnp: not parity */

loc_0012AE56: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 3 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0012AE40; /* jl: less (signed <) */

loc_0012AE5C: ;
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

loc_0012AE63: ;
    eax = MEM32(esp + 0x10);
    MEMF(ebx + edi * 8 + 4) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(ebx + edi * 8) = eax;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

loc_0012AE75: ;
    PUSH32(esp, esi);
    esi = edi + 1;
    edx = 3;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 4 (32-bit) */
    ecx = 2;
    if (CMP_L(_fas, _fbs)) goto loc_0012AEDC; /* jl: less (signed <) */

loc_0012AE8A: ;
    edx = edx | 0xFFFFFFFFu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = edx >> 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = edx * 4;
    PUSH32(esp, ebp);
    ebp = ecx;
    ecx = 2;
    eax = ebx + 8;
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - ebp;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_0012AEA7: ;
    ebp = MEM32(eax);
    MEM32(eax + 8) = ebp;
    ebp = MEM32(eax + 4);
    MEM32(eax + 0xC) = ebp;
    ebp = MEM32(eax + -8);
    MEM32(eax) = ebp;
    ebp = MEM32(eax + -4);
    MEM32(eax + 4) = ebp;
    ebp = MEM32(eax + -16);
    MEM32(eax + -8) = ebp;
    ebp = MEM32(eax + -12);
    MEM32(eax + -4) = ebp;
    ebp = MEM32(eax + -24);
    MEM32(eax + -16) = ebp;
    ebp = MEM32(eax + -20);
    MEM32(eax + -12) = ebp;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0012AEA7; /* jne: not equal / not zero */

loc_0012AEDB: ;
    POP32(esp, ebp);

loc_0012AEDC: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0012AEF8; /* jl: less (signed <) */

loc_0012AEE0: ;
    eax = ebx + ecx * 8 + -4;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0012AEE7: ;
    edx = MEM32(eax + -4);
    MEM32(eax + 4) = edx;
    edx = MEM32(eax);
    MEM32(eax + 8) = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0012AEE7; /* jne: not equal / not zero */

loc_0012AEF8: ;
    eax = MEM32(esp + 0x14);
    fp_push(MEMF(esp + 0x18)); /* fld float */
    MEM32(ebx + edi * 8) = eax;
    MEMF(ebx + edi * 8 + 4) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, esi);
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0012AF10
 * Original: 0x0012AF10 - 0x0012AF29 (25 bytes, 8 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012AF10(void)
{

loc_0012AF10: ;
    eax = MEM32(esp + 8);
    edx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    eax = ecx + 0xDC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0012AF26u); RECOMP_ABI_CALL(0x0012AE30u, sub_0012AE30); /* call 0x0012AE30 */

loc_0012AF26: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0012AF30
 * Original: 0x0012AF30 - 0x0012AF49 (25 bytes, 8 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012AF30(void)
{

loc_0012AF30: ;
    eax = MEM32(esp + 8);
    edx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    eax = ecx + 0xF4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0012AF46u); RECOMP_ABI_CALL(0x0012AE30u, sub_0012AE30); /* call 0x0012AE30 */

loc_0012AF46: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0012AF50
 * Original: 0x0012AF50 - 0x0012AF53 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012AF50(void)
{

loc_0012AF50: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_0012AF60
 * Original: 0x0012AF60 - 0x0012AF63 (3 bytes, 1 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012AF60(void)
{

loc_0012AF60: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0012B260
 * Original: 0x0012B260 - 0x0012B2CB (107 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0012B260(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0012B260: ;
    edx = MEM32(esp + 4);
    eax = MEM32(edx + 8);
    eax = MEM32(eax + 0xC4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012B285; /* je: equal / zero */

loc_0012B271: ;
    eax = MEM32(eax + 0x1150);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012B281; /* je: equal / zero */

loc_0012B27C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012B285; /* jne: not equal / not zero */

loc_0012B281: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 4; return; /* ret */

loc_0012B285: ;
    ecx = MEM32(esp + 8);
    eax = MEM32(ecx + 8);
    eax = MEM32(eax + 0xC4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012B2A6; /* je: equal / zero */

loc_0012B296: ;
    eax = MEM32(eax + 0x1150);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012B2C2; /* je: equal / zero */

loc_0012B2A1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012B2C2; /* je: equal / zero */

loc_0012B2A6: ;
    fp_push(MEMF(edx)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ecx] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0012B2B7; /* jp: parity */

loc_0012B2B1: ;
    eax = 0xFFFFFFFFu;
    esp += 4; return; /* ret */

loc_0012B2B7: ;
    fp_push(MEMF(edx)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ecx] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0012B2C8; /* jne: not equal / not zero */

loc_0012B2C2: ;
    eax = 1;
    esp += 4; return; /* ret */

loc_0012B2C8: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0012B2D0
 * Original: 0x0012B2D0 - 0x0012B2DA (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012B2D0(void)
{

loc_0012B2D0: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0x18);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0012B2E0
 * Original: 0x0012B2E0 - 0x0012B336 (86 bytes, 30 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012B2E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012B2E0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    ecx = MEM32(0x510B74);
    PUSH32(esp, 2);
    PUSH32(esp, 0x0012B2F1u); RECOMP_ABI_CALL(0x0017A1A0u, sub_0017A1A0); /* call 0x0017A1A0 */

loc_0012B2F1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012B328; /* je: equal / zero */

loc_0012B2F5: ;
    edi = MEM32(esp + 0xC);
    /* nop */

loc_0012B300: ;
    ecx = MEM32(eax + 4);
    MEM32(esi + 0x444) = ecx;
    ecx = MEM32(ecx + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012B318; /* je: equal / zero */

loc_0012B310: ;
    _fa = (uint32_t)(MEM32(ecx + 0xD0)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0xD0), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012B32F; /* je: equal / zero */

loc_0012B318: ;
    ecx = MEM32(0x510B74);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0012B324u); RECOMP_ABI_CALL(0x0017A200u, sub_0017A200); /* call 0x0017A200 */

loc_0012B324: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012B300; /* jne: not equal / not zero */

loc_0012B328: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0012B32F: ;
    POP32(esp, edi);
    eax = ecx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0012B340
 * Original: 0x0012B340 - 0x0012B355 (21 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012B340(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012B340: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0x6C);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x3238);
    _fb = (uint32_t)(0x5D1AB8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x5D1AB8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0012B360
 * Original: 0x0012B360 - 0x0012B37B (27 bytes, 8 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012B360(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012B360: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0012B36Au); RECOMP_ABI_CALL(0x0012B2E0u, sub_0012B2E0); /* call 0x0012B2E0 */

loc_0012B36A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012B378; /* je: equal / zero */

loc_0012B36E: ;
    ecx = MEM32(esp + 8);
    MEM32(eax + 0x84) = ecx;

loc_0012B378: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0012B380
 * Original: 0x0012B380 - 0x0012B39F (31 bytes, 9 insns)
 * CC: cdecl, 1 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0012B380(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0012B380: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0012B38Au); RECOMP_ABI_CALL(0x0012B2E0u, sub_0012B2E0); /* call 0x0012B2E0 */

loc_0012B38A: ;
    fp_push(MEMF(0x496454)); /* fld float */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012B39C; /* je: equal / zero */

loc_0012B394: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(eax + 0x84)); /* fld float */

loc_0012B39C: ;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0012B3A0
 * Original: 0x0012B3A0 - 0x0012B3A1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012B3A0(void)
{

loc_0012B3A0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0012B4C0
 * Original: 0x0012B4C0 - 0x0012B4EF (47 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012B4C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012B4C0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = ecx;
    PUSH32(esp, edi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = ebx + 8;
    /* nop */

loc_0012B4D0: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 0x404)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ebx + 0x404) (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0012B4E2; /* jg: greater (signed >) */

loc_0012B4D8: ;
    ecx = MEM32(edi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012B4E2; /* je: equal / zero */

loc_0012B4DE: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0012B4E2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0012B4E0u); } /* indirect call */
    }

loc_0012B4E2: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x10;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x40 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0012B4D0; /* jl: less (signed <) */

loc_0012B4EB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0012B4F0
 * Original: 0x0012B4F0 - 0x0012B4F8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012B4F0(void)
{

loc_0012B4F0: ;
    MEM32(ecx + 0xC) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_0012B500
 * Original: 0x0012B500 - 0x0012B508 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012B500(void)
{

loc_0012B500: ;
    MEM32(ecx + 0x50) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_0012B510
 * Original: 0x0012B510 - 0x0012B555 (69 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012B510(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012B510: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xC);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 3 (32-bit) */
    MEM32(esi + 0xC) = eax;
    SET_LO8(eax, (CMP_LE(_fas, _fbs)) ? 1 : 0); /* setle */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM8(0x50FF48) = LO8(eax);
    if (CMP_NE(_fa, _fb)) goto loc_0012B54C; /* jne: not equal / not zero */

loc_0012B52B: ;
    PUSH32(esp, 0x95);
    PUSH32(esp, 0x4ABAC4);
    PUSH32(esp, 0x4ABAA4);
    PUSH32(esp, 0x4965F0);
    PUSH32(esp, 0x4965D8);
    PUSH32(esp, 0x0012B549u); RECOMP_ABI_CALL(0x0014E700u, sub_0014E700); /* call 0x0014E700 */

loc_0012B549: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0012B54C: ;
    eax = MEM32(esi + 0xC);
    eax = esi + eax * 4 + -4;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0012B560
 * Original: 0x0012B560 - 0x0012B5A5 (69 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012B560(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012B560: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x50);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x14 (32-bit) */
    MEM32(esi + 0x50) = eax;
    SET_LO8(eax, (CMP_LE(_fas, _fbs)) ? 1 : 0); /* setle */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM8(0x50FF48) = LO8(eax);
    if (CMP_NE(_fa, _fb)) goto loc_0012B59C; /* jne: not equal / not zero */

loc_0012B57B: ;
    PUSH32(esp, 0x95);
    PUSH32(esp, 0x4ABAEC);
    PUSH32(esp, 0x4ABAA4);
    PUSH32(esp, 0x4965F0);
    PUSH32(esp, 0x4965D8);
    PUSH32(esp, 0x0012B599u); RECOMP_ABI_CALL(0x0014E700u, sub_0014E700); /* call 0x0014E700 */

loc_0012B599: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0012B59C: ;
    eax = MEM32(esi + 0x50);
    eax = esi + eax * 4 + -4;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0012B5B0
 * Original: 0x0012B5B0 - 0x0012B5B8 (8 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012B5B0(void)
{

loc_0012B5B0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0012B5B6u); RECOMP_ABI_CALL(0x0010C8D0u, sub_0010C8D0); /* call 0x0010C8D0 */

loc_0012B5B6: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0012B5C0
 * Original: 0x0012B5C0 - 0x0012B5D6 (22 bytes, 8 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012B5C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012B5C0: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0012B5D0u); RECOMP_ABI_CALL(0x0010C9A0u, sub_0010C9A0); /* call 0x0010C9A0 */

loc_0012B5D0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0012B770
 * Original: 0x0012B770 - 0x0012B7A4 (52 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012B770(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012B770: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x14);
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(esp) = ecx;
    PUSH32(esp, 1);
    ecx = esp + 4;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x5B);
    MEM32(esp + 0x10) = edx;
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x18) = 0x3F800000;
    PUSH32(esp, 0x0012B7A0u); RECOMP_ABI_CALL(0x00118440u, sub_00118440); /* call 0x00118440 */

loc_0012B7A0: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0012B7B0
 * Original: 0x0012B7B0 - 0x0012B7C2 (18 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012B7B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012B7B0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0x35);
    PUSH32(esp, 0x0012B7BEu); RECOMP_ABI_CALL(0x00118440u, sub_00118440); /* call 0x00118440 */

loc_0012B7BE: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0012BEAE
 * Original: 0x0012BEAE - 0x0012BF56 (168 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012BEAE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0012BEAE: ;
    edi = edi;
    RECOMP_UNIMPL("in al, dx", 0x0012BEB0u); /* TODO: in al, dx */
    edx = 0xBC410012u;
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(MEM8(eax)) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    if (_flags /* jle: less or equal (signed <=) */) { g_seh_ebp = ebp; sub_0012BE75(); return; }

loc_0012BEBA: ;
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(MEM8(eax)) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    RECOMP_UNIMPL("insb byte ptr es:[edi], dx", 0x0012BEBCu); /* TODO: insb byte ptr es:[edi], dx */
    ebx = 0xBB2C0012u;
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(MEM8(eax)) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    if (((1) & 31u)) _cf = (int)(((uint32_t)((int32_t)(int8_t)(MEM8(ebx + -1145176046))) >> ((((1) & 31u)) - 1)) & 1);
    MEM8(ebx + -1145176046) = (uint32_t)(((int32_t)(int8_t)(MEM8(ebx + -1145176046))) >> ((1) & 31u));
    _fa = (uint32_t)(MEM8(ebx + -1145176046)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sar result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(MEM8(eax)) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(MEM8(edx + edx + 0x12BC5A00)) + (uint64_t)(HI8(ebx)) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); MEM8(edx + edx + 0x12BC5A00) = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(MEM8(edx + edx + 0x12BC5A00)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    _fb = (uint32_t)(HI8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(ebx + -68)) + (uint64_t)(HI8(ecx))) >> 8) & 1);
    MEM8(ebx + -68) = MEM8(ebx + -68) + HI8(ecx);
    _fa = (uint32_t)(MEM8(ebx + -68)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(MEM8(eax)) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(ecx)) + (uint64_t)(ecx)) >> 32) & 1);
    MEM32(ecx) = MEM32(ecx) + ecx;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(MEM8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(LO8(eax)) + (uint64_t)(MEM8(ebx))) >> 8) & 1);
    SET_LO8(eax, LO8(eax) + MEM8(ebx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _cf = 0; /* logical op clears CF */
    MEM32(ecx) = MEM32(ecx) | ecx;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fb = (uint32_t)(9) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(LO8(eax)) + (uint64_t)(9)) >> 8) & 1);
    SET_LO8(eax, LO8(eax) + 9);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _cf = 0; /* logical op clears CF */
    MEM32(ecx) = MEM32(ecx) | ecx;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fb = (uint32_t)(0x7090906) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x7090906)) >> 32) & 1);
    eax = eax + 0x7090906;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = 0; /* logical op clears CF */
    MEM32(ecx) = MEM32(ecx) | ecx;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _cf = 0; /* logical op clears CF */
    MEM32(ecx) = MEM32(ecx) | ecx;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _cf = 0; /* logical op clears CF */
    MEM32(ecx) = MEM32(ecx) | ecx;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _cf = 0; /* logical op clears CF */
    MEM32(ecx) = MEM32(ecx) | ecx;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _cf = 0; /* logical op clears CF */
    MEM32(ecx) = MEM32(ecx) | ecx;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _cf = 0; /* logical op clears CF */
    MEM32(ecx) = MEM32(ecx) | ecx;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _cf = 0; /* logical op clears CF */
    MEM32(ecx) = MEM32(ecx) | ecx;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _cf = 0; /* logical op clears CF */
    MEM32(eax) = MEM32(eax) | ecx;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + 0x28) = eax;
    MEM32(ecx + 0x38) = eax;
    edx = 0x7F7FFFFF;
    MEM32(ecx + 0xDC) = eax;
    MEM32(ecx + 0xE0) = edx;
    MEM32(ecx + 0xF4) = eax;
    MEM32(ecx + 0xF8) = edx;
    MEM32(ecx + 0xE4) = eax;
    MEM32(ecx + 0xE8) = edx;
    MEM32(ecx + 0xFC) = eax;
    MEM32(ecx + 0x100) = edx;
    MEM32(ecx + 0xEC) = eax;
    MEM32(ecx + 0xF0) = edx;
    MEM32(ecx + 0x104) = eax;
    MEM32(ecx + 0x108) = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_0012BF60
 * Original: 0x0012BF60 - 0x0012C0D3 (371 bytes, 109 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0012BF60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0012BF60: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x118) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x118;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0xCC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012C0CD; /* je: equal / zero */

loc_0012BF7E: ;
    eax = MEM32(edi + 0x64);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012C0CD; /* je: equal / zero */

loc_0012BF89: ;
    fp_push(MEMF(0x496454)); /* fld float */
    eax = edi + 0x168;
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(edi + 0x1AC)); /* fdiv dword ptr [edi + 0x1ac] */
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    MEM32(esp + 0xC) = ecx;
    ecx = MEM32(eax + 8);
    MEM32(esp + 0x10) = edx;
    edx = MEM32(eax + 0xC);
    eax = MEM32(edi + 0x74);
    MEM32(esp + 0x14) = ecx;
    ecx = eax;
    PUSH32(esp, ecx);
    MEM32(esp + 0x1C) = edx;
    esi = edi + 0x3C;
    edx = esp + 0x10;
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    MEM32(esp + 0x28) = eax;
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0012BFD2u); RECOMP_ABI_CALL(0x0001691Au, sub_0001691A); /* call 0x0001691A */

loc_0012BFD2: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0012BFD9u); RECOMP_ABI_CALL(0x00121D00u, sub_00121D00); /* call 0x00121D00 */

loc_0012BFD9: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi)); /* fsub dword ptr [esi] */
    PUSH32(esp, 1);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x35);
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(edi + 0x40)); /* fsub dword ptr [edi + 0x40] */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(edi + 0x44)); /* fsub dword ptr [edi + 0x44] */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x496454)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(edi + 0x1AC)); /* fdiv dword ptr [edi + 0x1ac] */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0012C017u); RECOMP_ABI_CALL(0x00118440u, sub_00118440); /* call 0x00118440 */

loc_0012C017: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0012C02Au); RECOMP_ABI_CALL(0x000FFED6u, sub_000FFED6); /* call 0x000FFED6 */

loc_0012C02A: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0012C02Fu); RECOMP_ABI_CALL(0x0001691Au, sub_0001691A); /* call 0x0001691A */

loc_0012C02F: ;
    _fb = (uint32_t)(0xA0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xA0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    edx = esp + 0x24;
    PUSH32(esp, edx);
    eax = esp + 0xA8;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0012C047u); RECOMP_ABI_CALL(0x000FF9A4u, sub_000FF9A4); /* call 0x000FF9A4 */

loc_0012C047: ;
    ecx = esp + 0xA0;
    PUSH32(esp, ecx);
    edx = esp + 0x64;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0012C059u); RECOMP_ABI_CALL(0x000FFAA2u, sub_000FFAA2); /* call 0x000FFAA2 */

loc_0012C059: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0012C05Eu); RECOMP_ABI_CALL(0x0001691Au, sub_0001691A); /* call 0x0001691A */

loc_0012C05E: ;
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x60;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    eax = esp + 0xE4;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0012C06Fu); RECOMP_ABI_CALL(0x000FFAA2u, sub_000FFAA2); /* call 0x000FFAA2 */

loc_0012C06F: ;
    ecx = esp + 0x60;
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0012C079u); RECOMP_ABI_CALL(0x0012B6D0u, sub_0012B6D0); /* call 0x0012B6D0 */

loc_0012C079: ;
    edx = esp + 0xE4;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0012C086u); RECOMP_ABI_CALL(0x0012B5E0u, sub_0012B5E0); /* call 0x0012B5E0 */

loc_0012C086: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, 2);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0012C094u); RECOMP_ABI_CALL(0x0012BAA0u, sub_0012BAA0); /* call 0x0012BAA0 */

loc_0012C094: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x90);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0012C0A0u); RECOMP_ABI_CALL(0x0012F6B0u, sub_0012F6B0); /* call 0x0012F6B0 */

loc_0012C0A0: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0012C0A7u); RECOMP_ABI_CALL(0x0012F5A0u, sub_0012F5A0); /* call 0x0012F5A0 */

loc_0012C0A7: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0012C0ACu); RECOMP_ABI_CALL(0x00114AE0u, sub_00114AE0); /* call 0x00114AE0 */

loc_0012C0AC: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0012C0B3u); RECOMP_ABI_CALL(0x001372C0u, sub_001372C0); /* call 0x001372C0 */

loc_0012C0B3: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0012C0B8u); RECOMP_ABI_CALL(0x0001691Au, sub_0001691A); /* call 0x0001691A */

loc_0012C0B8: ;
    esi = eax;
    _fb = (uint32_t)(0xA0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xA0;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x4C0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x4C0;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0x10;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */

loc_0012C0CD: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0012CBD0
 * Original: 0x0012CBD0 - 0x0012CBDA (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012CBD0(void)
{

loc_0012CBD0: ;
    eax = ecx;
    MEM32(eax + 0xC) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_0012CBE0
 * Original: 0x0012CBE0 - 0x0012CBEA (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012CBE0(void)
{

loc_0012CBE0: ;
    eax = ecx;
    MEM32(eax + 0x50) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_0012CBF0
 * Original: 0x0012CBF0 - 0x0012CC77 (135 bytes, 40 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012CBF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012CBF0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xC);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    SET_LO8(eax, (CMP_LE(_fas, _fbs)) ? 1 : 0); /* setle */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM8(0x50FF48) = LO8(eax);
    if (CMP_NE(_fa, _fb)) goto loc_0012CC27; /* jne: not equal / not zero */

loc_0012CC06: ;
    PUSH32(esp, 0xAA);
    PUSH32(esp, 0x4ABAC4);
    PUSH32(esp, 0x4ABAA4);
    PUSH32(esp, 0x496664);
    PUSH32(esp, 0x4965D8);
    PUSH32(esp, 0x0012CC24u); RECOMP_ABI_CALL(0x0014E700u, sub_0014E700); /* call 0x0014E700 */

loc_0012CC24: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0012CC27: ;
    edx = MEM32(esp + 8);
    eax = MEM32(edx);
    ecx = MEM32(esi + 0xC);
    MEM32(esi + ecx * 4) = eax;
    eax = MEM32(esi + 0xC);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 3 (32-bit) */
    MEM32(esi + 0xC) = eax;
    SET_LO8(eax, (CMP_LE(_fas, _fbs)) ? 1 : 0); /* setle */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM8(0x50FF48) = LO8(eax);
    if (CMP_NE(_fa, _fb)) goto loc_0012CC6C; /* jne: not equal / not zero */

loc_0012CC4B: ;
    PUSH32(esp, 0x95);
    PUSH32(esp, 0x4ABAC4);
    PUSH32(esp, 0x4ABAA4);
    PUSH32(esp, 0x4965F0);
    PUSH32(esp, 0x4965D8);
    PUSH32(esp, 0x0012CC69u); RECOMP_ABI_CALL(0x0014E700u, sub_0014E700); /* call 0x0014E700 */

loc_0012CC69: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0012CC6C: ;
    ecx = MEM32(esi + 0xC);
    eax = esi + ecx * 4 + -4;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0012CC80
 * Original: 0x0012CC80 - 0x0012CD07 (135 bytes, 40 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012CC80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012CC80: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x50);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x14 (32-bit) */
    SET_LO8(eax, (CMP_LE(_fas, _fbs)) ? 1 : 0); /* setle */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM8(0x50FF48) = LO8(eax);
    if (CMP_NE(_fa, _fb)) goto loc_0012CCB7; /* jne: not equal / not zero */

loc_0012CC96: ;
    PUSH32(esp, 0x9F);
    PUSH32(esp, 0x4ABAEC);
    PUSH32(esp, 0x4ABAA4);
    PUSH32(esp, 0x496664);
    PUSH32(esp, 0x4965D8);
    PUSH32(esp, 0x0012CCB4u); RECOMP_ABI_CALL(0x0014E700u, sub_0014E700); /* call 0x0014E700 */

loc_0012CCB4: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0012CCB7: ;
    edx = MEM32(esp + 8);
    eax = MEM32(edx);
    ecx = MEM32(esi + 0x50);
    MEM32(esi + ecx * 4) = eax;
    eax = MEM32(esi + 0x50);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x14 (32-bit) */
    MEM32(esi + 0x50) = eax;
    SET_LO8(eax, (CMP_LE(_fas, _fbs)) ? 1 : 0); /* setle */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM8(0x50FF48) = LO8(eax);
    if (CMP_NE(_fa, _fb)) goto loc_0012CCFC; /* jne: not equal / not zero */

loc_0012CCDB: ;
    PUSH32(esp, 0x95);
    PUSH32(esp, 0x4ABAEC);
    PUSH32(esp, 0x4ABAA4);
    PUSH32(esp, 0x4965F0);
    PUSH32(esp, 0x4965D8);
    PUSH32(esp, 0x0012CCF9u); RECOMP_ABI_CALL(0x0014E700u, sub_0014E700); /* call 0x0014E700 */

loc_0012CCF9: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0012CCFC: ;
    ecx = MEM32(esi + 0x50);
    eax = esi + ecx * 4 + -4;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0012CD10
 * Original: 0x0012CD10 - 0x0012CE2C (284 bytes, 72 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012CD10(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012CD10: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x3BC240);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    eax = MEM32(esp + 0x24);
    edx = MEM32(esp + 0x1C);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    ecx = MEM32(esp + 0x2C);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x28);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esi;
    MEM32(esp + 0x1C) = esi;
    PUSH32(esp, 0x0012CD4Au); RECOMP_ABI_CALL(0x0014BD60u, sub_0014BD60); /* call 0x0014BD60 */

loc_0012CD4A: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi) = 0x4ABBD8;
    ebx = esi + 0x10C;
    MEM32(esi + 0x28) = edi;
    ecx = ebx;
    MEM32(esp + 0x18) = edi;
    MEM32(esi + 0x38) = edi;
    PUSH32(esp, 0x0012CD69u); RECOMP_ABI_CALL(0x0014B1C0u, sub_0014B1C0); /* call 0x0014B1C0 */

loc_0012CD69: ;
    ecx = esi + 0x1F8;
    MEM8(esp + 0x18) = 1;
    PUSH32(esp, 0x0012CD79u); RECOMP_ABI_CALL(0x0014B1C0u, sub_0014B1C0); /* call 0x0014B1C0 */

loc_0012CD79: ;
    ecx = esi + 0x2E4;
    MEM8(esp + 0x18) = 2;
    PUSH32(esp, 0x0012CD89u); RECOMP_ABI_CALL(0x0014B1C0u, sub_0014B1C0); /* call 0x0014B1C0 */

loc_0012CD89: ;
    ecx = esi + 0x3D0;
    MEM8(esp + 0x18) = 3;
    PUSH32(esp, 0x0012CD99u); RECOMP_ABI_CALL(0x0014B1C0u, sub_0014B1C0); /* call 0x0014B1C0 */

loc_0012CD99: ;
    ecx = MEM32(esp + 0x20);
    MEM32(esi + 0x6C) = ecx;
    MEM32(esi + 0xC8) = edi;
    edx = MEM32(0x50D86C);
    PUSH32(esp, edx);
    PUSH32(esp, 0x28);
    MEM8(esp + 0x20) = 4;
    PUSH32(esp, 0x0012CDB9u); RECOMP_ABI_CALL(0x00102BE0u, sub_00102BE0); /* call 0x00102BE0 */

loc_0012CDB9: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x100);
    PUSH32(esp, 4);
    ecx = eax;
    MEM32(esi + 0xD8) = eax;
    PUSH32(esp, 0x0012CDD0u); RECOMP_ABI_CALL(0x00142B30u, sub_00142B30); /* call 0x00142B30 */

loc_0012CDD0: ;
    MEM32(esi + 0x84) = 0x3F800000;
    MEM32(esi + 0x168) = edi;
    MEM32(esi + 0x16C) = edi;
    MEM32(esi + 0x170) = edi;
    MEM32(esi + 0x174) = edi;
    eax = 0x461C4000;
    MEM32(ebx + 0x9C) = edi;
    MEM32(ebx + 0xA0) = eax;
    ecx = esi;
    MEM32(esi + 0x1A8) = edi;
    MEM32(esi + 0x1AC) = eax;
    PUSH32(esp, 0x0012CE16u); RECOMP_ABI_CALL(0x0012AA50u, sub_0012AA50); /* call 0x0012AA50 */

loc_0012CE16: ;
    ecx = MEM32(esp + 0x10);
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 24; return; /* ret 20 */

}

/**
 * sub_0012CE30
 * Original: 0x0012CE30 - 0x0012D17C (844 bytes, 266 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0012CE30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0012CE30: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x164) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x164;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = ecx;
    eax = MEM32(ebx + 0xCC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_0012CE78; /* je: equal / zero */

loc_0012CE4B: ;
    eax = MEM32(ebx + 0xD0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012CE78; /* je: equal / zero */

loc_0012CE55: ;
    ecx = MEM32(ebx + 0xC4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012CE78; /* je: equal / zero */

loc_0012CE5F: ;
    SET_LO8(eax, MEM8(0x632B53));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012CE78; /* je: equal / zero */

loc_0012CE68: ;
    fp_push(MEMF(ebx + 0x5C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x4ABBDC)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x4abbdc] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0012CE83; /* jne: not equal / not zero */

loc_0012CE78: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_0012CE83: ;
    eax = MEM32(ecx + 0x1150);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012CEAF; /* je: equal / zero */

loc_0012CE8E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012CEAF; /* je: equal / zero */

loc_0012CE93: ;
    ecx = MEM32(ecx + 0x1154);
    eax = ecx + -13;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3B (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0012CEB3; /* ja: above (unsigned >) */

loc_0012CEA1: ;
    eax = ZX8(MEM8(eax + 0x12D184));
    { uint32_t _jt = MEM32(eax * 4 + 0x12D17C); /* switch: 2 entries, 2 targets */
    if (_jt == 0x0012CEAFu) goto loc_0012CEAF;
    if (_jt == 0x0012CEB3u) goto loc_0012CEB3;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0012CEAF: ;
    PUSH32(esp, 1);
    goto loc_0012CEB5;

loc_0012CEB3: ;
    PUSH32(esp, 0);

loc_0012CEB5: ;
    PUSH32(esp, 0x90);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0012CEBFu); RECOMP_ABI_CALL(0x0012F6B0u, sub_0012F6B0); /* call 0x0012F6B0 */

loc_0012CEBF: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0012CEC6u); RECOMP_ABI_CALL(0x0012F5A0u, sub_0012F5A0); /* call 0x0012F5A0 */

loc_0012CEC6: ;
    ecx = MEM32(ebx + 0x84);
    edi = MEM32(ebp + 8);
    MEM32(edi + 0x944) = ecx;
    edx = MEM32(ebx + 0x70);
    PUSH32(esp, edx);
    esi = ebx + 0x3C;
    PUSH32(esp, esi);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0012CEE4u); RECOMP_ABI_CALL(0x0014B4F0u, sub_0014B4F0); /* call 0x0014B4F0 */

loc_0012CEE4: ;
    ecx = MEM32(esi + 4);
    eax = MEM32(esi);
    edx = MEM32(esi + 8);
    MEM32(esp + 0x14) = ecx;
    PUSH32(esp, 1);
    ecx = esp + 0x14;
    MEM32(esp + 0x14) = eax;
    eax = MEM32(esi + 0xC);
    PUSH32(esp, ecx);
    ecx = edi;
    MEM32(esp + 0x20) = edx;
    MEM32(esp + 0x24) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0012CF0Du); RECOMP_ABI_CALL(0x0014B3B0u, sub_0014B3B0); /* call 0x0014B3B0 */

loc_0012CF0D: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    edx = esp + 0x7C;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0012CF1Du); RECOMP_ABI_CALL(0x000FFED6u, sub_000FFED6); /* call 0x000FFED6 */

loc_0012CF1D: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0012CF22u); RECOMP_ABI_CALL(0x0001691Au, sub_0001691A); /* call 0x0001691A */

loc_0012CF22: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    eax = esp + 0x74;
    PUSH32(esp, eax);
    ecx = esp + 0x38;
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0012CF35u); RECOMP_ABI_CALL(0x000FF9A4u, sub_000FF9A4); /* call 0x000FF9A4 */

loc_0012CF35: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0012CF3Au); RECOMP_ABI_CALL(0x0001691Au, sub_0001691A); /* call 0x0001691A */

loc_0012CF3A: ;
    esi = eax;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x20;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0x10;
    edi = esp + 0x130;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0012CF52u); RECOMP_ABI_CALL(0x0001691Au, sub_0001691A); /* call 0x0001691A */

loc_0012CF52: ;
    edi = eax;
    edx = esp + 0x30;
    PUSH32(esp, edx);
    eax = esp + 0xF4;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x20;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0x10;
    esi = esp + 0x34;
    PUSH32(esp, eax);
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0012CF74u); RECOMP_ABI_CALL(0x000FFAA2u, sub_000FFAA2); /* call 0x000FFAA2 */

loc_0012CF74: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0012CF79u); RECOMP_ABI_CALL(0x0001691Au, sub_0001691A); /* call 0x0001691A */

loc_0012CF79: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0012CF80u); RECOMP_ABI_CALL(0x000125D6u, sub_000125D6); /* call 0x000125D6 */

loc_0012CF80: ;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x40;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esp + 0xB4;
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0012CF91u); RECOMP_ABI_CALL(0x000FFAA2u, sub_000FFAA2); /* call 0x000FFAA2 */

loc_0012CF91: ;
    edx = esp + 0xF0;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0012CF9Eu); RECOMP_ABI_CALL(0x0012B6D0u, sub_0012B6D0); /* call 0x0012B6D0 */

loc_0012CF9E: ;
    eax = esp + 0xB4;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0012CFABu); RECOMP_ABI_CALL(0x0012B5E0u, sub_0012B5E0); /* call 0x0012B5E0 */

loc_0012CFAB: ;
    eax = MEM32(ebx + 0xC4);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012D002; /* je: equal / zero */

loc_0012CFBA: ;
    SET_LO8(ecx, MEM8(eax + 0x1048));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012D002; /* je: equal / zero */

loc_0012CFC4: ;
    eax = MEM32(ebx + 0xDC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012D002; /* je: equal / zero */

loc_0012CFCE: ;
    _fb = (uint32_t)(0x5C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x5C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(eax);
    MEM32(esp + 0x20) = ecx;
    edx = MEM32(eax + 4);
    MEM32(esp + 0x24) = edx;
    ecx = MEM32(eax + 8);
    MEM32(esp + 0x28) = ecx;
    edx = MEM32(eax + 0xC);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    MEM32(esp + 0x34) = edx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0012CFFBu); RECOMP_ABI_CALL(0x0001691Au, sub_0001691A); /* call 0x0001691A */

loc_0012CFFB: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0012D002u); RECOMP_ABI_CALL(0x00121B50u, sub_00121B50); /* call 0x00121B50 */

loc_0012D002: ;
    edi = ebx + 0x78;
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0012D00Bu); RECOMP_ABI_CALL(0x0012B770u, sub_0012B770); /* call 0x0012B770 */

loc_0012D00B: ;
    eax = MEM32(ebx + 0x64);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    MEM32(edi) = esi;
    MEM32(ebx + 0x7C) = esi;
    MEM32(ebx + 0x80) = esi;
    if (CMP_NE(_fa, _fb)) goto loc_0012D041; /* jne: not equal / not zero */

loc_0012D020: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x90);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0012D02Bu); RECOMP_ABI_CALL(0x0012F6B0u, sub_0012F6B0); /* call 0x0012F6B0 */

loc_0012D02B: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0012D032u); RECOMP_ABI_CALL(0x0012F5A0u, sub_0012F5A0); /* call 0x0012F5A0 */

loc_0012D032: ;
    ecx = MEM32(ebp + 8);
    PUSH32(esp, 1);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0012D03Cu); RECOMP_ABI_CALL(0x0014A5D0u, sub_0014A5D0); /* call 0x0014A5D0 */

loc_0012D03C: ;
    goto loc_0012D159;

loc_0012D041: ;
    PUSH32(esp, 2);
    PUSH32(esp, 5);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0012D04Bu); RECOMP_ABI_CALL(0x0012F6B0u, sub_0012F6B0); /* call 0x0012F6B0 */

loc_0012D04B: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0012D052u); RECOMP_ABI_CALL(0x0012F450u, sub_0012F450); /* call 0x0012F450 */

loc_0012D052: ;
    PUSH32(esp, 4);
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0012D05Cu); RECOMP_ABI_CALL(0x0012F6B0u, sub_0012F6B0); /* call 0x0012F6B0 */

loc_0012D05C: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0012D063u); RECOMP_ABI_CALL(0x0012F450u, sub_0012F450); /* call 0x0012F450 */

loc_0012D063: ;
    PUSH32(esp, 4);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0012D06Eu); RECOMP_ABI_CALL(0x0012F6B0u, sub_0012F6B0); /* call 0x0012F6B0 */

loc_0012D06E: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0012D075u); RECOMP_ABI_CALL(0x0012F450u, sub_0012F450); /* call 0x0012F450 */

loc_0012D075: ;
    PUSH32(esp, 0xFF000000u);
    PUSH32(esp, 0x1D);
    PUSH32(esp, 1);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0012D083u); RECOMP_ABI_CALL(0x0012F6B0u, sub_0012F6B0); /* call 0x0012F6B0 */

loc_0012D083: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0012D08Au); RECOMP_ABI_CALL(0x0012F450u, sub_0012F450); /* call 0x0012F450 */

loc_0012D08A: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0xC);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0012D094u); RECOMP_ABI_CALL(0x0012F6B0u, sub_0012F6B0); /* call 0x0012F6B0 */

loc_0012D094: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0012D09Bu); RECOMP_ABI_CALL(0x0012F450u, sub_0012F450); /* call 0x0012F450 */

loc_0012D09B: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0xE);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0012D0A4u); RECOMP_ABI_CALL(0x0012F6B0u, sub_0012F6B0); /* call 0x0012F6B0 */

loc_0012D0A4: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0012D0ABu); RECOMP_ABI_CALL(0x0012F450u, sub_0012F450); /* call 0x0012F450 */

loc_0012D0AB: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0xF);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0012D0B5u); RECOMP_ABI_CALL(0x0012F6B0u, sub_0012F6B0); /* call 0x0012F6B0 */

loc_0012D0B5: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0012D0BCu); RECOMP_ABI_CALL(0x0012F450u, sub_0012F450); /* call 0x0012F450 */

loc_0012D0BC: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0x10);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0012D0C6u); RECOMP_ABI_CALL(0x0012F6B0u, sub_0012F6B0); /* call 0x0012F6B0 */

loc_0012D0C6: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0012D0CDu); RECOMP_ABI_CALL(0x0012F450u, sub_0012F450); /* call 0x0012F450 */

loc_0012D0CD: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x12);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0012D0D6u); RECOMP_ABI_CALL(0x0012F6B0u, sub_0012F6B0); /* call 0x0012F6B0 */

loc_0012D0D6: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0012D0DDu); RECOMP_ABI_CALL(0x0012F450u, sub_0012F450); /* call 0x0012F450 */

loc_0012D0DD: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x13);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0012D0E7u); RECOMP_ABI_CALL(0x0012F6B0u, sub_0012F6B0); /* call 0x0012F6B0 */

loc_0012D0E7: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0012D0EEu); RECOMP_ABI_CALL(0x0012F450u, sub_0012F450); /* call 0x0012F450 */

loc_0012D0EE: ;
    eax = MEM32(ebx + 0xC4);
    _fa = (uint32_t)(MEM8(eax + 0x1048)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x1048), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012D102; /* jne: not equal / not zero */

loc_0012D0FD: ;
    esi = 4;

loc_0012D102: ;
    _fa = (uint32_t)(MEM8(eax + 0x1049)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x1049), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012D110; /* jne: not equal / not zero */

loc_0012D10B: ;
    esi = esi | 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_0012D121;

loc_0012D110: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0012D115u); RECOMP_ABI_CALL(0x00114AE0u, sub_00114AE0); /* call 0x00114AE0 */

loc_0012D115: ;
    _fa = (uint32_t)(MEM8(eax + 0x180)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x180), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012D121; /* jne: not equal / not zero */

loc_0012D11E: ;
    esi = esi | 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0012D121: ;
    SET_LO8(eax, MEM8(0x632B56));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012D12D; /* je: equal / zero */

loc_0012D12A: ;
    esi = esi | 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0012D12D: ;
    fp_push(MEMF(ebx + 0x5C)); /* fld float */
    edx = MEM32(ebp + 8);
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x49EED8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x49eed8] */
    ecx = MEM32(edx + 0x938);
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0012D150; /* jne: not equal / not zero */

loc_0012D146: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0012D150; /* jle: less or equal (signed <=) */

loc_0012D14B: ;
    ecx = 1;

loc_0012D150: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0012D159u); RECOMP_ABI_CALL(0x0012BAA0u, sub_0012BAA0); /* call 0x0012BAA0 */

loc_0012D159: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0012D15Eu); RECOMP_ABI_CALL(0x0001691Au, sub_0001691A); /* call 0x0001691A */

loc_0012D15E: ;
    edi = eax;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x20;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0x10;
    esi = esp + 0x130;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0012D1C0
 * Original: 0x0012D1C0 - 0x0012D3A4 (484 bytes, 129 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012D1C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0012D1C0: ;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x40);
    MEM32(edi + 0x28) = 0;
    esi = MEM32(edi + 0xF4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    ecx = MEM32(edi + 0xF8);
    edx = MEM32(edi + 0xFC);
    MEM32(esp + 0x10) = eax;
    eax = MEM32(edi + 0x100);
    MEM32(esp + 0x1C) = ecx;
    MEM32(esp + 0x18) = edx;
    MEM32(esp + 0x20) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0012D374; /* je: equal / zero */

loc_0012D202: ;
    ebx = edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012D374; /* je: equal / zero */

loc_0012D20C: ;
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x1C)); /* fadd dword ptr [esp + 0x1c] */
    fp_top() = RECOMP_FP_PC(MEMF(esp + 0x1C) / fp_top()); /* fdivr dword ptr [esp + 0x1c] */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x496B98)); /* fsub dword ptr [0x496b98] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x4ABBE0)); /* fmul dword ptr [0x4abbe0] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x496B98)); /* fadd dword ptr [0x496b98] */
    MEMF(esp + 0xC) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x4964E8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x4964e8] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0012D245; /* jp: parity */

loc_0012D23B: ;
    MEM32(esp + 0xC) = 0;
    goto loc_0012D25E;

loc_0012D245: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x496454)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x496454] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0012D25E; /* jne: not equal / not zero */

loc_0012D256: ;
    MEM32(esp + 0xC) = 0x3F800000;

loc_0012D25E: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    PUSH32(esp, ebp);
    ecx = esi;
    PUSH32(esp, 0x0012D26Bu); RECOMP_ABI_CALL(0x0014B0D0u, sub_0014B0D0); /* call 0x0014B0D0 */

loc_0012D26B: ;
    PUSH32(esp, ebp);
    ecx = ebx;
    PUSH32(esp, 0x0012D273u); RECOMP_ABI_CALL(0x0014B0D0u, sub_0014B0D0); /* call 0x0014B0D0 */

loc_0012D273: ;
    fp_push(MEMF(ebx + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 8)); /* fsub dword ptr [esi + 8] */
    eax = MEM32(esp + 0x10);
    fp_push(MEMF(ebx + 0xC)); /* fld float */
    MEM32(esp + 0x20) = eax;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0xC)); /* fsub dword ptr [esi + 0xc] */
    fp_push(MEMF(ebx + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0x10)); /* fsub dword ptr [esi + 0x10] */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x28);
    fp_push(MEMF(ebx + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0x14)); /* fsub dword ptr [esi + 0x14] */
    MEM32(esp + 0x38) = ecx;
    ecx = esp + 0x30;
    MEM32(esp + 0x18) = ecx;
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x2C);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEM32(esp + 0x3C) = edx;
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    edx = esp + 0x30;
    MEM32(esp + 0x14) = edx;
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    MEM8(0x50FF48) = 1;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm0 = XMM_SHUFFLE(xmm0, xmm0, 0); /* shufps */
    ecx = MEM32(esp + 0x18);
    xmm1 = XMM_MEM(ecx); /* movups */
    xmm0 = XMM_MUL(xmm0, xmm1); /* mulps */
    eax = MEM32(esp + 0x14);
    XMM_STORE(eax, xmm0); /* movups */
    fp_push(MEMF(esp + 0x30)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 8)); /* fadd dword ptr [esi + 8] */
    ecx = MEM32(esi + 0xA0);
    fp_push(MEMF(esp + 0x34)); /* fld float */
    eax = MEM32(ebx + 0xA0);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0xC)); /* fadd dword ptr [esi + 0xc] */
    MEM32(esp + 0x20) = eax;
    fp_push(MEMF(esp + 0x38)); /* fld float */
    MEM32(esp + 0x18) = ecx;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x10)); /* fadd dword ptr [esi + 0x10] */
    edx = ecx;
    MEM32(esp + 0x14) = edx;
    POP32(esp, ebp);
    MEMF(esp + 0x44) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x44);
    fp_push(MEMF(esp + 0x38)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x14)); /* fadd dword ptr [esi + 0x14] */
    MEM32(edi + 0x434) = eax;
    eax = edi + 0x3D0;
    MEMF(esp + 0x48) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x48);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEM32(edi + 0x438) = ecx;
    MEMF(edi + 0x42C) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(edi + 0x430) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(eax + 0x9C) = 0;
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x14)); /* fsub dword ptr [esp + 0x14] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0xC)); /* fmul dword ptr [esp + 0xc] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x10)); /* fadd dword ptr [esp + 0x10] */
    MEMF(eax + 0xA0) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(edi + 0xDC) = eax;

loc_0012D374: ;
    esi = edi + 0xDC;
    ebx = 3;
    /* nop */

loc_0012D380: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012D397; /* je: equal / zero */

loc_0012D386: ;
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    ecx = edi + 0x1C;
    MEM32(esp + 0x20) = eax;
    PUSH32(esp, 0x0012D397u); RECOMP_ABI_CALL(0x0012CBF0u, sub_0012CBF0); /* call 0x0012CBF0 */

loc_0012D397: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0012D380; /* jne: not equal / not zero */

loc_0012D39D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0012D7E8
 * Original: 0x0012D7E8 - 0x0012D90D (293 bytes, 75 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012D7E8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0012D7E8: ;
    MEM32(esp + 0x54) = edx;
    edx = MEM32(esp + 0x40);
    MEM32(esp + 0x58) = eax;
    MEM32(esp + 0x5C) = ecx;
    MEM32(esp + 0x60) = edx;
    MEM32(esp + 0x44) = 0;
    MEM32(esp + 0x48) = 0;
    MEM32(esi + 0x1A8) = ebp;
    MEM32(esi + 0x1AC) = 0x461C4000;
    goto loc_0012D822;

    fp_push(MEMF(esp + 0x4C)); /* fld float */

loc_0012D822: ;
    fp_push(MEMF(esp + 0x44)); /* fld float */
    eax = MEM32(esi + 0x1AC);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    MEM32(esp + 0x20) = eax;
    edi = esi + 0xF4;
    ebx = 3;
    MEMF(esp + 0x44) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x48)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    MEMF(esp + 0x48) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    MEMF(esp + 0x4C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x50)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    MEMF(esp + 0x50) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x54)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x44)); /* fadd dword ptr [esp + 0x44] */
    fp_push(MEMF(esp + 0x58)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x48)); /* fadd dword ptr [esp + 0x48] */
    fp_push(MEMF(esp + 0x5C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x4C)); /* fadd dword ptr [esp + 0x4c] */
    MEMF(esp + 0x5C) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x5C);
    fp_push(MEMF(esp + 0x50)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x60)); /* fadd dword ptr [esp + 0x60] */
    MEMF(esp + 0x60) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x60);
    fp_push(MEMF(esi + 0x1A8)); /* fld float */
    MEM32(esi + 0x170) = ecx;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    MEM32(esi + 0x174) = edx;
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_st1()); /* fadd st(1) */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x14);
    fp_pop(); /* fstp st(0) */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMF(esi + 0x168) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esi + 0x16C) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esi + 0x1A8) = eax;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x20)); /* fsub dword ptr [esp + 0x20] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x20)); /* fadd dword ptr [esp + 0x20] */
    MEMF(esi + 0x1AC) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esi + 0x38) = ebp;

loc_0012D8E8: ;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012D8FF; /* je: equal / zero */

loc_0012D8EE: ;
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    ecx = esi + 0x2C;
    MEM32(esp + 0x28) = eax;
    PUSH32(esp, 0x0012D8FFu); RECOMP_ABI_CALL(0x0012CBF0u, sub_0012CBF0); /* call 0x0012CBF0 */

loc_0012D8FF: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0012D8E8; /* jne: not equal / not zero */

loc_0012D905: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x54;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0012D910
 * Original: 0x0012D910 - 0x0012D94E (62 bytes, 16 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012D910(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012D910: ;
    edx = ecx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(edx + 0x498) = eax;
    PUSH32(esp, edi);
    MEM32(edx + 0x408) = eax;
    MEM32(0x639714) = edx;
    MEM8(edx + 0x440) = LO8(eax);
    MEM32(edx + 0x404) = eax;
    MEM32(edx + 0x400) = eax;
    MEM32(edx + 0x498) = eax;
    ecx = 0x100;
    edi = edx;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = edx;
    POP32(esp, edi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0012D950
 * Original: 0x0012D950 - 0x0012DA0A (186 bytes, 57 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0012D950(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012D950: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0012D959u); RECOMP_ABI_CALL(0x0012C850u, sub_0012C850); /* call 0x0012C850 */

loc_0012D959: ;
    ecx = MEM32(0x510B74);
    PUSH32(esp, 2);
    PUSH32(esp, 0x0012D966u); RECOMP_ABI_CALL(0x0017A1A0u, sub_0017A1A0); /* call 0x0017A1A0 */

loc_0012D966: ;
    ebp = eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    MEM32(esi + 0x404) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_0012D9E7; /* je: equal / zero */

loc_0012D976: ;
    PUSH32(esp, edi);
    goto loc_0012D980;

    /* nop */

loc_0012D980: ;
    eax = MEM32(ebp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0x444) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0012D9E6; /* je: equal / zero */

loc_0012D98D: ;
    MEM32(0x63AFD4) = eax;
    eax = MEM32(esi + 0x444);
    edi = MEM32(eax + 0x18);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012D9E6; /* je: equal / zero */

loc_0012D99F: ;
    _fa = (uint32_t)(MEM8(edi + 0x18)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi + 0x18), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012D9CE; /* jne: not equal / not zero */

loc_0012D9A5: ;
    eax = MEM32(esi + 0x408);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0012D9B3u); RECOMP_ABI_CALL(0x0012CE30u, sub_0012CE30); /* call 0x0012CE30 */

loc_0012D9B3: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012D9CE; /* jne: not equal / not zero */

loc_0012D9B7: ;
    ecx = MEM32(edi + 4);
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012D9CE; /* je: equal / zero */

loc_0012D9BF: ;
    edx = MEM32(edi + 0xCC);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0012D9CEu); RECOMP_ABI_CALL(0x0012AF70u, sub_0012AF70); /* call 0x0012AF70 */

loc_0012D9CE: ;
    MEM32(esi + 0x404) = MEM32(esi + 0x404) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x404)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = MEM32(0x510B74);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0012D9E0u); RECOMP_ABI_CALL(0x0017A200u, sub_0017A200); /* call 0x0017A200 */

loc_0012D9E0: ;
    ebp = eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012D980; /* jne: not equal / not zero */

loc_0012D9E6: ;
    POP32(esp, edi);

loc_0012D9E7: ;
    ecx = MEM32(0x63AFB4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012D9FC; /* jne: not equal / not zero */

loc_0012D9F1: ;
    ecx = 0x63AFB8;
    MEM32(0x63AFB4) = ecx;

loc_0012D9FC: ;
    PUSH32(esp, 0x0012DA01u); RECOMP_ABI_CALL(0x0013B230u, sub_0013B230); /* call 0x0013B230 */

loc_0012DA01: ;
    ecx = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    g_seh_ebp = ebp; sub_0012B3B0(); return; /* tail jmp 0x0012B3B0 */

}

/**
 * sub_0012DBC0
 * Original: 0x0012DBC0 - 0x0012DC41 (129 bytes, 37 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012DBC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012DBC0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x3BC263);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    eax = MEM32(0x50D86C);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x500);
    PUSH32(esp, 0x0012DBE7u); RECOMP_ABI_CALL(0x00102BE0u, sub_00102BE0); /* call 0x00102BE0 */

loc_0012DBE7: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 4) = eax;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    MEM32(esp + 0x10) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_0012DC0C; /* je: equal / zero */

loc_0012DBF8: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x32);
    PUSH32(esp, 0x80);
    PUSH32(esp, 0x10);
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x0012DC0Au); RECOMP_ABI_CALL(0x0012CD10u, sub_0012CD10); /* call 0x0012CD10 */

loc_0012DC0A: ;
    esi = eax;

loc_0012DC0C: ;
    ecx = MEM32(esp + 0x18);
    MEM32(esi + 0x14) = ecx;
    ecx = MEM32(esi + 0xD8);
    MEM32(esp + 0x10) = 0xFFFFFFFFu;
    PUSH32(esp, 0x0012DC26u); RECOMP_ABI_CALL(0x00142C70u, sub_00142C70); /* call 0x00142C70 */

loc_0012DC26: ;
    ecx = MEM32(esp + 8);
    eax = esi;
    MEM8(0x50FF48) = 1;
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0012DC50
 * Original: 0x0012DC50 - 0x0012DCCC (124 bytes, 39 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012DC50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012DC50: ;
    PUSH32(esp, edi);
    edi = ecx;
    ecx = 0x639744;
    PUSH32(esp, 0x0012DC5Du); RECOMP_ABI_CALL(0x0012E090u, sub_0012E090); /* call 0x0012E090 */

loc_0012DC5D: ;
    eax = MEM32(esp + 8);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = MEM32(eax + edi + 0xC);
    eax = MEM32(ecx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(edi + 0x444) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0012DCC8; /* je: equal / zero */

loc_0012DC75: ;
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x18);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012DCC7; /* je: equal / zero */

loc_0012DC7D: ;
    MEM32(0x63AFD4) = eax;
    _fa = (uint32_t)(MEM8(esi + 0x18)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x18), 1 (8-bit) */
    edx = MEM32(edi + 0x444);
    MEM32(esi + 0xC4) = edx;
    if (CMP_NE(_fa, _fb)) goto loc_0012DCBD; /* jne: not equal / not zero */

loc_0012DC94: ;
    eax = MEM32(edi + 0x408);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0012DCA2u); RECOMP_ABI_CALL(0x0012CE30u, sub_0012CE30); /* call 0x0012CE30 */

loc_0012DCA2: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012DCBD; /* jne: not equal / not zero */

loc_0012DCA6: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012DCBD; /* je: equal / zero */

loc_0012DCAE: ;
    ecx = MEM32(esi + 0xCC);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x0012DCBDu); RECOMP_ABI_CALL(0x0012AF70u, sub_0012AF70); /* call 0x0012AF70 */

loc_0012DCBD: ;
    ecx = 0x639744;
    PUSH32(esp, 0x0012DCC7u); RECOMP_ABI_CALL(0x0012E070u, sub_0012E070); /* call 0x0012E070 */

loc_0012DCC7: ;
    POP32(esp, esi);

loc_0012DCC8: ;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0012DF10
 * Original: 0x0012DF10 - 0x0012DF15 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012DF10(void)
{

loc_0012DF10: ;
    eax = MEM32(esp + 4);
    esp += 4; return; /* ret */

}

/**
 * sub_0012DF20
 * Original: 0x0012DF20 - 0x0012DF2A (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012DF20(void)
{

loc_0012DF20: ;
    eax = ecx;
    MEM32(eax + 4) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_0012DF30
 * Original: 0x0012DF30 - 0x0012E00F (223 bytes, 62 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012DF30(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0012DF30: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    eax = MEM32(esp + 0x18);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x18)); /* fsub dword ptr [esp + 0x18] */
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, 1);
    edx = esp + 4;
    fp_top() = RECOMP_FP_PC(MEMF(0x496454) / fp_top()); /* fdivr dword ptr [0x496454] */
    PUSH32(esp, edx);
    PUSH32(esp, 0x13);
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 0x18) = ecx;
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x30)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x2C)); /* fsub dword ptr [esp + 0x2c] */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0012DF6Fu); RECOMP_ABI_CALL(0x00118440u, sub_00118440); /* call 0x00118440 */

loc_0012DF6F: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 1);
    PUSH32(esp, 0x5C);
    PUSH32(esp, 0x0012DF7Bu); RECOMP_ABI_CALL(0x0012F6B0u, sub_0012F6B0); /* call 0x0012F6B0 */

loc_0012DF7B: ;
    ecx = eax;
    PUSH32(esp, 0x0012DF82u); RECOMP_ABI_CALL(0x0012F5A0u, sub_0012F5A0); /* call 0x0012F5A0 */

loc_0012DF82: ;
    eax = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, 0x8A);
    PUSH32(esp, 0x0012DF91u); RECOMP_ABI_CALL(0x0012F6B0u, sub_0012F6B0); /* call 0x0012F6B0 */

loc_0012DF91: ;
    ecx = eax;
    PUSH32(esp, 0x0012DF98u); RECOMP_ABI_CALL(0x0012F5A0u, sub_0012F5A0); /* call 0x0012F5A0 */

loc_0012DF98: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x5D);
    PUSH32(esp, 0x0012DFA1u); RECOMP_ABI_CALL(0x0012F6B0u, sub_0012F6B0); /* call 0x0012F6B0 */

loc_0012DFA1: ;
    ecx = eax;
    PUSH32(esp, 0x0012DFA8u); RECOMP_ABI_CALL(0x0012F5A0u, sub_0012F5A0); /* call 0x0012F5A0 */

loc_0012DFA8: ;
    MEM32(esp + 0x18) = 0;
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x5E);
    PUSH32(esp, 0x0012DFBCu); RECOMP_ABI_CALL(0x0012F6B0u, sub_0012F6B0); /* call 0x0012F6B0 */

loc_0012DFBC: ;
    ecx = eax;
    PUSH32(esp, 0x0012DFC3u); RECOMP_ABI_CALL(0x0012F5A0u, sub_0012F5A0); /* call 0x0012F5A0 */

loc_0012DFC3: ;
    MEM32(esp + 0x18) = 0x3F800000;
    edx = MEM32(esp + 0x18);
    PUSH32(esp, edx);
    PUSH32(esp, 0x5F);
    PUSH32(esp, 0x0012DFD7u); RECOMP_ABI_CALL(0x0012F6B0u, sub_0012F6B0); /* call 0x0012F6B0 */

loc_0012DFD7: ;
    ecx = eax;
    PUSH32(esp, 0x0012DFDEu); RECOMP_ABI_CALL(0x0012F5A0u, sub_0012F5A0); /* call 0x0012F5A0 */

loc_0012DFDE: ;
    MEM32(esp + 0x18) = 0;
    eax = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, 0x60);
    PUSH32(esp, 0x0012DFF2u); RECOMP_ABI_CALL(0x0012F6B0u, sub_0012F6B0); /* call 0x0012F6B0 */

loc_0012DFF2: ;
    ecx = eax;
    PUSH32(esp, 0x0012DFF9u); RECOMP_ABI_CALL(0x0012F5A0u, sub_0012F5A0); /* call 0x0012F5A0 */

loc_0012DFF9: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x61);
    PUSH32(esp, 0x0012E002u); RECOMP_ABI_CALL(0x0012F6B0u, sub_0012F6B0); /* call 0x0012F6B0 */

loc_0012E002: ;
    ecx = eax;
    PUSH32(esp, 0x0012E009u); RECOMP_ABI_CALL(0x0012F5A0u, sub_0012F5A0); /* call 0x0012F5A0 */

loc_0012E009: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 24; return; /* ret 20 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0012E010
 * Original: 0x0012E010 - 0x0012E06D (93 bytes, 29 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012E010(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0012E010: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(ecx + 4) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_0012E069; /* je: equal / zero */

loc_0012E01C: ;
    fp_push((double)SMEM32(esi + 0x18)); /* fild */
    eax = MEM32(esi);
    edx = MEM32(esi + 4);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x4A8598)); /* fmul dword ptr [0x4a8598] */
    eax = eax | 0xFFFFFF00u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = eax << 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax | edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = MEM32(esi + 8);
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(esi + 0x14)); /* fild */
    eax = eax << 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax | edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x4A8598)); /* fmul dword ptr [0x4a8598] */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(esi + 0x10)); /* fild */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(esi + 0xC)); /* fild */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0012E063u); RECOMP_ABI_CALL(0x0012DF30u, sub_0012DF30); /* call 0x0012DF30 */

loc_0012E063: ;
    MEM32(0x63973C) = esi;

loc_0012E069: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0012E070
 * Original: 0x0012E070 - 0x0012E084 (20 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012E070(void)
{

loc_0012E070: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x5C);
    MEM8(ecx) = 1;
    PUSH32(esp, 0x0012E07Cu); RECOMP_ABI_CALL(0x0012F6B0u, sub_0012F6B0); /* call 0x0012F6B0 */

loc_0012E07C: ;
    ecx = eax;
    PUSH32(esp, 0x0012E083u); RECOMP_ABI_CALL(0x0012F5A0u, sub_0012F5A0); /* call 0x0012F5A0 */

loc_0012E083: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0012E090
 * Original: 0x0012E090 - 0x0012E0A4 (20 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012E090(void)
{

loc_0012E090: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x5C);
    MEM8(ecx) = 0;
    PUSH32(esp, 0x0012E09Cu); RECOMP_ABI_CALL(0x0012F6B0u, sub_0012F6B0); /* call 0x0012F6B0 */

loc_0012E09C: ;
    ecx = eax;
    PUSH32(esp, 0x0012E0A3u); RECOMP_ABI_CALL(0x0012F5A0u, sub_0012F5A0); /* call 0x0012F5A0 */

loc_0012E0A3: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0012E0B0
 * Original: 0x0012E0B0 - 0x0012E15A (170 bytes, 54 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012E0B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012E0B0: ;
    SET_LO8(eax, MEM8(0x639740));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0012E0F0; /* je: equal / zero */

loc_0012E0BD: ;
    eax = MEM32(esp + 0xC);
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0012E11B; /* jg: greater (signed >) */

loc_0012E0C9: ;
    esi = 0x639720;

loc_0012E0CE: ;
    _fa = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 4), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012E0EB; /* je: equal / zero */

loc_0012E0D3: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x5C);
    PUSH32(esp, 0x0012E0DCu); RECOMP_ABI_CALL(0x0012F6B0u, sub_0012F6B0); /* call 0x0012F6B0 */

loc_0012E0DC: ;
    ecx = eax;
    PUSH32(esp, 0x0012E0E3u); RECOMP_ABI_CALL(0x0012F5A0u, sub_0012F5A0); /* call 0x0012F5A0 */

loc_0012E0E3: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x0012E0EBu); RECOMP_ABI_CALL(0x0012E010u, sub_0012E010); /* call 0x0012E010 */

loc_0012E0EB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0012E0F0: ;
    ecx = MEM32(esp + 0xC);
    eax = MEM32(ecx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012E10B; /* jne: not equal / not zero */

loc_0012E0FB: ;
    _fa = (uint32_t)(MEM32(0x632FF0)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x632FF0), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012E128; /* jne: not equal / not zero */

loc_0012E104: ;
    esi = 0x50EEE0;
    goto loc_0012E0CE;

loc_0012E10B: ;
    _fa = (uint32_t)(MEM32(0x632FF0)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x632FF0), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012E11B; /* jne: not equal / not zero */

loc_0012E114: ;
    esi = 0x50EEE0;
    goto loc_0012E0CE;

loc_0012E11B: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1C);
    esi = eax + 0x50EEC4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012E0CE; /* jne: not equal / not zero */

loc_0012E128: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x5C);
    PUSH32(esp, 0x0012E131u); RECOMP_ABI_CALL(0x0012F6B0u, sub_0012F6B0); /* call 0x0012F6B0 */

loc_0012E131: ;
    ecx = eax;
    PUSH32(esp, 0x0012E138u); RECOMP_ABI_CALL(0x0012F5A0u, sub_0012F5A0); /* call 0x0012F5A0 */

loc_0012E138: ;
    PUSH32(esp, 0xFF000000u);
    PUSH32(esp, 0x8A);
    PUSH32(esp, 0x0012E147u); RECOMP_ABI_CALL(0x0012F6B0u, sub_0012F6B0); /* call 0x0012F6B0 */

loc_0012E147: ;
    ecx = eax;
    PUSH32(esp, 0x0012E14Eu); RECOMP_ABI_CALL(0x0012F5A0u, sub_0012F5A0); /* call 0x0012F5A0 */

loc_0012E14E: ;
    MEM32(edi + 4) = 0;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0012E160
 * Original: 0x0012E160 - 0x0012E170 (16 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012E160(void)
{

loc_0012E160: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    ecx = 0x639744;
    PUSH32(esp, 0x0012E16Fu); RECOMP_ABI_CALL(0x0012E010u, sub_0012E010); /* call 0x0012E010 */

loc_0012E16F: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0012E170
 * Original: 0x0012E170 - 0x0012E19B (43 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012E170(void)
{

loc_0012E170: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    MEM8(0x639740) = 1;
    ecx = 7;
    edi = 0x639720;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    PUSH32(esp, 0x639720);
    ecx = 0x639744;
    PUSH32(esp, 0x0012E198u); RECOMP_ABI_CALL(0x0012E010u, sub_0012E010); /* call 0x0012E010 */

loc_0012E198: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0012E1A0
 * Original: 0x0012E1A0 - 0x0012E1A8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012E1A0(void)
{

loc_0012E1A0: ;
    MEM8(0x639740) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_0012E1B0
 * Original: 0x0012E1B0 - 0x0012E1C4 (20 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012E1B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012E1B0: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0012E1BCu); RECOMP_ABI_CALL(0x002ACE95u, sub_002ACE95); /* call 0x002ACE95 */

loc_0012E1BC: ;
    eax = MEM32(esp + 0xC);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0012E1D0
 * Original: 0x0012E1D0 - 0x0012E296 (198 bytes, 63 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012E1D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012E1D0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    eax = eax & 0xFFFFFBFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = eax;
    eax = MEM32(0x50EF70);
    esi = esi | 0xFFFFFFFFu;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edi = edi & 0x400;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012E291; /* je: equal / zero */

loc_0012E1F5: ;
    eax = 0x50EF88;
    /* nop */

loc_0012E200: ;
    edx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(edx) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012E212; /* je: equal / zero */

loc_0012E206: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x50F078) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x50F078 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0012E200; /* jb: below (unsigned <) */

loc_0012E210: ;
    goto loc_0012E249;

loc_0012E212: ;
    ecx = MEM32(eax + 4);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0012E244; /* je: equal / zero */

loc_0012E21A: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0012E232; /* je: equal / zero */

loc_0012E21D: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0012E249; /* jne: not equal / not zero */

loc_0012E220: ;
    eax = MEM32(eax + 8);
    PUSH32(esp, eax);
    ecx = 0x6322F8;
    PUSH32(esp, 0x0012E22Eu); RECOMP_ABI_CALL(0x00106A20u, sub_00106A20); /* call 0x00106A20 */

loc_0012E22E: ;
    esi = eax;
    goto loc_0012E249;

loc_0012E232: ;
    ecx = MEM32(eax + 8);
    PUSH32(esp, ecx);
    ecx = 0x6322F8;
    PUSH32(esp, 0x0012E240u); RECOMP_ABI_CALL(0x00106930u, sub_00106930); /* call 0x00106930 */

loc_0012E240: ;
    esi = eax;
    goto loc_0012E249;

loc_0012E244: ;
    edx = MEM32(eax + 8);
    esi = MEM32(edx);

loc_0012E249: ;
    PUSH32(esp, 0x0012E24Eu); RECOMP_ABI_CALL(0x00102CE0u, sub_00102CE0); /* call 0x00102CE0 */

loc_0012E24E: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x0012E255u); RECOMP_ABI_CALL(0x00102D00u, sub_00102D00); /* call 0x00102D00 */

loc_0012E255: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM8(0x50FF48) = LO8(eax);
    if (CMP_NE(_fa, _fb)) goto loc_0012E288; /* jne: not equal / not zero */

loc_0012E267: ;
    PUSH32(esp, 0x15A);
    PUSH32(esp, 0x4ABCE8);
    PUSH32(esp, 0x4ABCC8);
    PUSH32(esp, 0x4ABCB0);
    PUSH32(esp, 0x4ABC80);
    PUSH32(esp, 0x0012E285u); RECOMP_ABI_CALL(0x0014E700u, sub_0014E700); /* call 0x0014E700 */

loc_0012E285: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0012E288: ;
    PUSH32(esp, 0x0012E28Du); RECOMP_ABI_CALL(0x00102CA0u, sub_00102CA0); /* call 0x00102CA0 */

loc_0012E28D: ;
    eax = edi;
    eax = eax | esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0012E291: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0012E2A0
 * Original: 0x0012E2A0 - 0x0012E2E9 (73 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012E2A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012E2A0: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    eax = esp + 4;
    PUSH32(esp, eax);
    esi = 0x4000000;
    PUSH32(esp, 0x0012E2B3u); RECOMP_ABI_CALL(0x002ACE95u, sub_002ACE95); /* call 0x002ACE95 */

loc_0012E2B3: ;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x10), esi (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0012E2C7; /* jae: above or equal (unsigned >=) */

loc_0012E2B9: ;
    ecx = esp + 4;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0012E2C3u); RECOMP_ABI_CALL(0x002ACE95u, sub_002ACE95); /* call 0x002ACE95 */

loc_0012E2C3: ;
    esi = MEM32(esp + 0x10);

loc_0012E2C7: ;
    edx = esp + 4;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0012E2D1u); RECOMP_ABI_CALL(0x002ACE95u, sub_002ACE95); /* call 0x002ACE95 */

loc_0012E2D1: ;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x4ABD0C);
    PUSH32(esp, 0x0012E2E1u); RECOMP_ABI_CALL(0x00106EB0u, sub_00106EB0); /* call 0x00106EB0 */

loc_0012E2E1: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0012E610
 * Original: 0x0012E610 - 0x0012E61D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012E610(void)
{

loc_0012E610: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x116C) = eax;
    esp += 8; return; /* ret 4 */

}
