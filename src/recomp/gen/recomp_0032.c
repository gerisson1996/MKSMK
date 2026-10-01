/**
 * MKSM - Recompiled code chunk 32
 * Functions: 500 (0x001F3130 - 0x001FC9B0)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_001F3130
 * Original: 0x001F3130 - 0x001F316F (63 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F3130(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F3130: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0xFA0);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC8 (32-bit) */
    MEM32(esi + 0xFA0) = ecx;
    if (CMP_LE(_fas, _fbs)) goto loc_001F3160; /* jle: less or equal (signed <=) */

loc_001F3149: ;
    PUSH32(esp, 0x95);
    PUSH32(esp, 0x496604);
    PUSH32(esp, 0x4965F0);
    PUSH32(esp, 0x001F315Du); RECOMP_ABI_CALL(0x000EB51Cu, sub_000EB51C); /* call 0x000EB51C */

loc_001F315D: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001F3160: ;
    eax = MEM32(esi + 0xFA0);
    eax = eax + eax * 4;
    eax = esi + eax * 4 + -20;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001F3170
 * Original: 0x001F3170 - 0x001F3186 (22 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F3170(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F3170: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 4) = ecx;
    MEM32(eax + 0x14) = ecx;
    MEM32(eax) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x18) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_001F3190
 * Original: 0x001F3190 - 0x001F31D7 (71 bytes, 33 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F3190(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_001F3190: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;

loc_001F3198: ;
    SET_LO8(edx, MEM8(eax));
    SET_LO8(ebx, MEM8(esi));
    SET_LO8(ecx, LO8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001F31C8; /* jne: not equal / not zero */

loc_001F31A2: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_001F31BC; /* je: equal / zero */

loc_001F31A6: ;
    SET_LO8(edx, MEM8(eax + 1));
    SET_LO8(ebx, MEM8(esi + 1));
    SET_LO8(ecx, LO8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001F31C8; /* jne: not equal / not zero */

loc_001F31B2: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(2)) >> 32) & 1);
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(2)) >> 32) & 1);
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_001F3198; /* jne: not equal / not zero */

loc_001F31BC: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    POP32(esp, esi);
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_001F31C8: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    POP32(esp, esi);
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001F31E0
 * Original: 0x001F31E0 - 0x001F3223 (67 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F31E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F31E0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x001F31E9u); RECOMP_ABI_CALL(0x00189EF0u, sub_00189EF0); /* call 0x00189EF0 */

loc_001F31E9: ;
    eax = MEM32(esi + 0x6D60);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1C);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    edi = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_001F3219; /* je: equal / zero */

loc_001F31FA: ;
    /* nop */

loc_001F3200: ;
    ecx = edi;
    PUSH32(esp, 0x001F3207u); RECOMP_ABI_CALL(0x001F3000u, sub_001F3000); /* call 0x001F3000 */

loc_001F3207: ;
    ecx = MEM32(esi + 0x6D60);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x1C);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x1C;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F3200; /* jne: not equal / not zero */

loc_001F3219: ;
    POP32(esp, edi);
    MEM8(esi + 0x6D65) = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001F3230
 * Original: 0x001F3230 - 0x001F3278 (72 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F3230(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F3230: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xFA0);
    eax = eax + eax * 4;
    ecx = esi + eax * 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    PUSH32(esp, edi);
    edi = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_001F3275; /* je: equal / zero */

loc_001F3246: ;
    goto loc_001F3250;

    /* nop */
    /* nop */

loc_001F3250: ;
    ecx = MEM32(edi + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(0x71B330) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_001F3262; /* je: equal / zero */

loc_001F325D: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x001F3262u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001F325Fu); } /* indirect call */
    }

loc_001F3262: ;
    eax = MEM32(esi + 0xFA0);
    eax = eax + eax * 4;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x14;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi + eax * 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F3250; /* jne: not equal / not zero */

loc_001F3275: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001F3280
 * Original: 0x001F3280 - 0x001F32B8 (56 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F3280(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F3280: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xFA0);
    eax = eax + eax * 4;
    ecx = esi + eax * 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    PUSH32(esp, edi);
    edi = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_001F32B5; /* je: equal / zero */

loc_001F3296: ;
    ecx = MEM32(edi + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F32A2; /* je: equal / zero */

loc_001F329D: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x001F32A2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001F329Fu); } /* indirect call */
    }

loc_001F32A2: ;
    eax = MEM32(esi + 0xFA0);
    eax = eax + eax * 4;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x14;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi + eax * 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F3296; /* jne: not equal / not zero */

loc_001F32B5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001F32C0
 * Original: 0x001F32C0 - 0x001F32F0 (48 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F32C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F32C0: ;
    PUSH32(esp, esi);
    eax = ecx;
    PUSH32(esp, edi);
    edx = eax + 0x14;
    edi = 0x3E8;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = edi;

loc_001F32D0: ;
    MEM32(edx + -16) = esi;
    MEM32(edx) = esi;
    MEM32(edx + -20) = esi;
    MEM32(edx + -12) = esi;
    MEM32(edx + -4) = esi;
    MEM32(edx + 4) = esi;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x1C;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001F32D0; /* jne: not equal / not zero */

loc_001F32E7: ;
    POP32(esp, edi);
    MEM32(eax + 0x6D60) = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001F32F0
 * Original: 0x001F32F0 - 0x001F3348 (88 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F32F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F32F0: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_001F3343; /* je: equal / zero */

loc_001F3300: ;
    ebp = MEM32(esp + 0x1C);

loc_001F3304: ;
    esi = edi;
    ecx = ebp;

loc_001F3308: ;
    SET_LO8(ebx, MEM8(ecx));
    SET_LO8(edx, LO8(ebx));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(MEM8(esi)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), MEM8(esi) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001F332C; /* jne: not equal / not zero */

loc_001F3310: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_001F3328; /* je: equal / zero */

loc_001F3314: ;
    SET_LO8(ebx, MEM8(ecx + 1));
    SET_LO8(edx, LO8(ebx));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(MEM8(esi + 1)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), MEM8(esi + 1) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001F332C; /* jne: not equal / not zero */

loc_001F331E: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(2)) >> 32) & 1);
    ecx = ecx + 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(2)) >> 32) & 1);
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_001F3308; /* jne: not equal / not zero */

loc_001F3328: ;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_001F3331;

loc_001F332C: ;
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint64_t _t = (uint64_t)(ecx) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); ecx = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */

loc_001F3331: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_001F3341; /* je: equal / zero */

loc_001F3335: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(0x14)) >> 32) & 1);
    edi = edi + 0x14;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001F3304; /* jne: not equal / not zero */

loc_001F333C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_001F3341: ;
    eax = edi;

loc_001F3343: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001F3350
 * Original: 0x001F3350 - 0x001F3388 (56 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F3350(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F3350: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0);
    ecx = esp + 8;
    MEM8(esi) = 0;
    PUSH32(esp, 0x001F3364u); RECOMP_ABI_CALL(0x00014C78u, sub_00014C78); /* call 0x00014C78 */

loc_001F3364: ;
    eax = esp + 4;
    edx = esi;
    ecx = eax;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = edi;

loc_001F3370: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F3370; /* jne: not equal / not zero */

loc_001F337A: ;
    MEM32(esi + 0x10) = 0;
    eax = esi;
    POP32(esp, esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001F3390
 * Original: 0x001F3390 - 0x001F33C6 (54 bytes, 24 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F3390(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F3390: ;
    edx = MEM32(esp + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    eax = ecx;
    MEM8(eax) = 0;
    if (CMP_NE(_fa, _fb)) goto loc_001F33A9; /* jne: not equal / not zero */

loc_001F339D: ;
    ecx = MEM32(esp + 8);
    MEM8(eax) = LO8(edx);
    MEM32(eax + 0x10) = ecx;
    esp += 12; return; /* ret 8 */

loc_001F33A9: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = eax;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    /* nop */

loc_001F33B0: ;
    SET_LO8(ebx, MEM8(edx));
    MEM8(esi + edx) = LO8(ebx);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F33B0; /* jne: not equal / not zero */

loc_001F33BA: ;
    edx = MEM32(esp + 0x10);
    POP32(esp, esi);
    MEM32(eax + 0x10) = edx;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001F33D0
 * Original: 0x001F33D0 - 0x001F33E0 (16 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F33D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F33D0: ;
    ecx = MEM32(0x71B328);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F33DF; /* je: equal / zero */

loc_001F33DA: ;
    g_seh_ebp = ebp; sub_001F3230(); return; /* tail jmp 0x001F3230 */

loc_001F33DF: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001F33E0
 * Original: 0x001F33E0 - 0x001F33F0 (16 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F33E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F33E0: ;
    ecx = MEM32(0x71B328);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F33EF; /* je: equal / zero */

loc_001F33EA: ;
    g_seh_ebp = ebp; sub_001F3280(); return; /* tail jmp 0x001F3280 */

loc_001F33EF: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001F3420
 * Original: 0x001F3420 - 0x001F349A (122 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F3420(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F3420: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = esp + 0x14;
    MEM32(esp + 0x10) = ecx;
    ebp = ecx;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = 0xC8;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_001F3440: ;
    MEM8(ebp) = LO8(eax);
    MEM8(esp + 0x14) = LO8(eax);
    esi = esp + 0x14;
    goto loc_001F3450;

    /* nop */

loc_001F3450: ;
    SET_LO8(edx, MEM8(esi));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0x41 (8-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001F345F; /* jl: less (signed <) */

loc_001F3457: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0x5A) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0x5A (8-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_001F345F; /* jg: greater (signed >) */

loc_001F345C: ;
    _fb = (uint32_t)(0x20) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(edx, LO8(edx) + 0x20);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */

loc_001F345F: ;
    MEM8(esi) = LO8(edx);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(eax) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F3450; /* jne: not equal / not zero */

loc_001F3466: ;
    edx = esp + 0x14;
    /* nop */

loc_001F3470: ;
    SET_LO8(ebx, MEM8(edx));
    MEM8(edi + edx) = LO8(ebx);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), LO8(eax) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F3470; /* jne: not equal / not zero */

loc_001F347A: ;
    MEM32(ebp + 0x10) = eax;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x14;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x14;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001F3440; /* jne: not equal / not zero */

loc_001F3486: ;
    ecx = MEM32(esp + 0x10);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(ecx + 0xFA0) = eax;
    eax = ecx;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001F34A0
 * Original: 0x001F34A0 - 0x001F34D5 (53 bytes, 24 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F34A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F34A0: ;
    eax = ecx;
    ecx = MEM32(esp + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F34B5; /* jne: not equal / not zero */

loc_001F34AA: ;
    MEM8(eax) = LO8(ecx);
    ecx = MEM32(ecx + 0x10);
    MEM32(eax + 0x10) = ecx;
    esp += 8; return; /* ret 4 */

loc_001F34B5: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = eax;
    edx = ecx;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    /* nop */

loc_001F34C0: ;
    SET_LO8(ebx, MEM8(edx));
    MEM8(esi + edx) = LO8(ebx);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F34C0; /* jne: not equal / not zero */

loc_001F34CA: ;
    ecx = MEM32(ecx + 0x10);
    POP32(esp, esi);
    POP32(esp, ebx);
    MEM32(eax + 0x10) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001F34E0
 * Original: 0x001F34E0 - 0x001F34EC (12 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F34E0(void)
{

loc_001F34E0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x001F34E8u); RECOMP_ABI_CALL(0x001F3420u, sub_001F3420); /* call 0x001F3420 */

loc_001F34E8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001F34F0
 * Original: 0x001F34F0 - 0x001F3522 (50 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F34F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F34F0: ;
    eax = MEM32(0x71B328);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(eax + 0xFA0);
    edx = MEM32(esi);
    PUSH32(esp, edi);
    ecx = ecx + ecx * 4;
    PUSH32(esp, edx);
    edi = eax + ecx * 4;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001F350Fu); RECOMP_ABI_CALL(0x001F32F0u, sub_001F32F0); /* call 0x001F32F0 */

loc_001F350F: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, edi);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax & ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0x10) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001F3530
 * Original: 0x001F3530 - 0x001F3591 (97 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F3530(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F3530: ;
    PUSH32(esp, ebx);
    ebx = ecx;
    eax = MEM32(ebx + 0x6D60);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1C);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    PUSH32(esp, esi);
    esi = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_001F358E; /* je: equal / zero */

loc_001F3545: ;
    PUSH32(esp, edi);
    goto loc_001F3550;

    /* nop */
    /* nop */

loc_001F3550: ;
    eax = MEM32(0x71B328);
    ecx = MEM32(eax + 0xFA0);
    edx = MEM32(esi);
    ecx = ecx + ecx * 4;
    PUSH32(esp, edx);
    edi = eax + ecx * 4;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001F356Bu); RECOMP_ABI_CALL(0x001F32F0u, sub_001F32F0); /* call 0x001F32F0 */

loc_001F356B: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x1C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax & ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + -12) = eax;
    edx = MEM32(ebx + 0x6D60);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x1C);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F3550; /* jne: not equal / not zero */

loc_001F358D: ;
    POP32(esp, edi);

loc_001F358E: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001F35A0
 * Original: 0x001F35A0 - 0x001F3640 (160 bytes, 50 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F35A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F35A0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xFA0);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC8 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001F35C8; /* jle: less or equal (signed <=) */

loc_001F35B1: ;
    PUSH32(esp, 0xAA);
    PUSH32(esp, 0x496604);
    PUSH32(esp, 0x496664);
    PUSH32(esp, 0x001F35C5u); RECOMP_ABI_CALL(0x000EB51Cu, sub_000EB51C); /* call 0x000EB51C */

loc_001F35C5: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001F35C8: ;
    eax = MEM32(esi + 0xFA0);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    ecx = eax + eax * 4;
    ebx = esi + ecx * 4;
    if (CMP_NE(_fa, _fb)) goto loc_001F35E3; /* jne: not equal / not zero */

loc_001F35DE: ;
    MEM8(ebx) = 0;
    goto loc_001F35FA;

loc_001F35E3: ;
    edx = ebx;
    eax = edi;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    /* nop */

loc_001F35F0: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F35F0; /* jne: not equal / not zero */

loc_001F35FA: ;
    edx = MEM32(edi + 0x10);
    MEM32(ebx + 0x10) = edx;
    ecx = MEM32(esi + 0xFA0);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC8 (32-bit) */
    POP32(esp, edi);
    MEM32(esi + 0xFA0) = ecx;
    POP32(esp, ebx);
    if (CMP_LE(_fas, _fbs)) goto loc_001F362F; /* jle: less or equal (signed <=) */

loc_001F3618: ;
    PUSH32(esp, 0x95);
    PUSH32(esp, 0x496604);
    PUSH32(esp, 0x4965F0);
    PUSH32(esp, 0x001F362Cu); RECOMP_ABI_CALL(0x000EB51Cu, sub_000EB51C); /* call 0x000EB51C */

loc_001F362C: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001F362F: ;
    eax = MEM32(esi + 0xFA0);
    eax = eax + eax * 4;
    eax = esi + eax * 4 + -20;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001F3640
 * Original: 0x001F3640 - 0x001F3696 (86 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F3640(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F3640: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x001F3648u); RECOMP_ABI_CALL(0x001F32C0u, sub_001F32C0); /* call 0x001F32C0 */

loc_001F3648: ;
    eax = MEM32(0x71B328);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F367A; /* jne: not equal / not zero */

loc_001F3651: ;
    SET_LO8(ecx, MEM8(0x71C2DC));
    eax = 1;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F3670; /* jne: not equal / not zero */

loc_001F3660: ;
    MEM32(0x71C2DC) = MEM32(0x71C2DC) | eax;
    _fa = (uint32_t)(MEM32(0x71C2DC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = 0x71B338;
    PUSH32(esp, 0x001F3670u); RECOMP_ABI_CALL(0x001F3420u, sub_001F3420); /* call 0x001F3420 */

loc_001F3670: ;
    MEM32(0x71B328) = 0x71B338;

loc_001F367A: ;
    MEM32(esi + 0x6D60) = 0;
    MEM8(esi + 0x6D64) = 0;
    MEM8(esi + 0x6D65) = 0;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001F36A0
 * Original: 0x001F36A0 - 0x001F36E7 (71 bytes, 29 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F36A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F36A0: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x1C);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xFA0);
    PUSH32(esp, edi);
    eax = eax + eax * 4;
    edi = esi + eax * 4;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001F36C0u); RECOMP_ABI_CALL(0x001F32F0u, sub_001F32F0); /* call 0x001F32F0 */

loc_001F36C0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F36DE; /* jne: not equal / not zero */

loc_001F36C7: ;
    ecx = MEM32(esp + 0x28);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ecx = esp + 0x14;
    PUSH32(esp, 0x001F36D6u); RECOMP_ABI_CALL(0x001F3390u, sub_001F3390); /* call 0x001F3390 */

loc_001F36D6: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001F36DEu); RECOMP_ABI_CALL(0x001F35A0u, sub_001F35A0); /* call 0x001F35A0 */

loc_001F36DE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001F36F0
 * Original: 0x001F36F0 - 0x001F3772 (130 bytes, 42 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F36F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F36F0: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x50C524);
    PUSH32(esp, esi);
    MEM32(esp + 0x28) = eax;
    eax = MEM32(esp + 0x30);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    ecx = esp + 0x20;
    PUSH32(esp, 0x001F370Cu); RECOMP_ABI_CALL(0x00014C78u, sub_00014C78); /* call 0x00014C78 */

loc_001F370C: ;
    edi = MEM32(0x71B328);
    eax = MEM32(edi + 0xFA0);
    ecx = eax + eax * 4;
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    esi = edi + ecx * 4;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001F372Au); RECOMP_ABI_CALL(0x001F32F0u, sub_001F32F0); /* call 0x001F32F0 */

loc_001F372A: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F3761; /* jne: not equal / not zero */

loc_001F3731: ;
    MEM8(esp + 8) = 0;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_001F3740;

    /* nop */

loc_001F3740: ;
    SET_LO8(ecx, MEM8(esp + eax + 0x1C));
    MEM8(esp + eax + 8) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F3740; /* jne: not equal / not zero */

loc_001F374D: ;
    eax = MEM32(esp + 0x38);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    ecx = edi;
    MEM32(esp + 0x1C) = eax;
    PUSH32(esp, 0x001F3761u); RECOMP_ABI_CALL(0x001F35A0u, sub_001F35A0); /* call 0x001F35A0 */

loc_001F3761: ;
    ecx = MEM32(esp + 0x2C);
    POP32(esp, edi);
    POP32(esp, esi);
    PUSH32(esp, 0x001F376Cu); RECOMP_ABI_CALL(0x000EB37Bu, sub_000EB37B); /* call 0x000EB37B */

loc_001F376C: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001F3780
 * Original: 0x001F3780 - 0x001F3783 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F3780(void)
{

loc_001F3780: ;
    eax = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_001F3790
 * Original: 0x001F3790 - 0x001F379C (12 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F3790(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F3790: ;
    eax = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esp + 4) (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001F37A0
 * Original: 0x001F37A0 - 0x001F37D3 (51 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F37A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F37A0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 4);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001F37D0; /* jle: less or equal (signed <=) */

loc_001F37AD: ;
    /* nop */

loc_001F37B0: ;
    eax = MEM32(edi + 8);
    ecx = MEM32(eax + esi * 4);
    PUSH32(esp, ecx);
    ecx = MEM32(0x6C416C);
    PUSH32(esp, 0x001F37C2u); RECOMP_ABI_CALL(0x001A6EC0u, sub_001A6EC0); /* call 0x001A6EC0 */

loc_001F37C2: ;
    edx = MEM32(edi + 8);
    MEM32(edx + esi * 4) = eax;
    eax = MEM32(edi + 4);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001F37B0; /* jl: less (signed <) */

loc_001F37D0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001F37E0
 * Original: 0x001F37E0 - 0x001F37E3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F37E0(void)
{

loc_001F37E0: ;
    eax = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_001F37F0
 * Original: 0x001F37F0 - 0x001F37FD (13 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F37F0(void)
{

loc_001F37F0: ;
    eax = MEM32(ecx + 0x2D0);
    eax = eax + eax * 2;
    eax = ecx + eax * 4;
    esp += 4; return; /* ret */

}

/**
 * sub_001F3800
 * Original: 0x001F3800 - 0x001F3879 (121 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F3800(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F3800: ;
    PUSH32(esp, ebx);
    ebx = ecx;
    SET_LO8(eax, MEM8(ebx + 0x2D4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F3877; /* jne: not equal / not zero */

loc_001F380D: ;
    eax = MEM32(ebx + 0x2D0);
    eax = eax + eax * 2;
    ecx = ebx + eax * 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    MEM8(ebx + 0x2D4) = 1;
    if (CMP_EQ(_fa, _fb)) goto loc_001F3877; /* je: equal / zero */

loc_001F3824: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ebx + 4;
    /* nop */

loc_001F3830: ;
    eax = MEM32(esi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001F385F; /* jle: less or equal (signed <=) */

loc_001F3838: ;
    goto loc_001F3840;

    /* nop */

loc_001F3840: ;
    edx = MEM32(esi + 4);
    eax = MEM32(edx + edi * 4);
    ecx = MEM32(0x6C416C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001F3852u); RECOMP_ABI_CALL(0x001A6EC0u, sub_001A6EC0); /* call 0x001A6EC0 */

loc_001F3852: ;
    ecx = MEM32(esi + 4);
    MEM32(ecx + edi * 4) = eax;
    eax = MEM32(esi);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001F3840; /* jl: less (signed <) */

loc_001F385F: ;
    eax = MEM32(ebx + 0x2D0);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = eax + eax * 2;
    eax = ebx + edx * 4;
    ecx = esi + -4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F3830; /* jne: not equal / not zero */

loc_001F3875: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_001F3877: ;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001F3880
 * Original: 0x001F3880 - 0x001F38A4 (36 bytes, 15 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F3880(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F3880: ;
    edx = MEM32(ecx + 0x2D0);
    PUSH32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001F389D; /* jle: less or equal (signed <=) */

loc_001F388D: ;
    esi = MEM32(esp + 8);

loc_001F3891: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F38A0; /* je: equal / zero */

loc_001F3895: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001F3891; /* jl: less (signed <) */

loc_001F389D: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_001F38A0: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001F38B0
 * Original: 0x001F38B0 - 0x001F38BD (13 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F38B0(void)
{

loc_001F38B0: ;
    eax = ecx;
    MEM32(eax + 0x2D0) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_001F38C0
 * Original: 0x001F38C0 - 0x001F38D1 (17 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F38C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F38C0: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 0x2D0) = ecx;
    MEM8(eax + 0x2D4) = LO8(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001F38E0
 * Original: 0x001F38E0 - 0x001F3917 (55 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F38E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F38E0: ;
    eax = MEM32(0x71C2E0);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F3916; /* jne: not equal / not zero */

loc_001F38EB: ;
    SET_LO8(edx, MEM8(0x71C5C0));
    eax = 1;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(edx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F390C; /* jne: not equal / not zero */

loc_001F38FA: ;
    MEM32(0x71C5C0) = MEM32(0x71C5C0) | eax;
    _fa = (uint32_t)(MEM32(0x71C5C0)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x71C5B8) = ecx;
    MEM8(0x71C5BC) = LO8(ecx);

loc_001F390C: ;
    eax = 0x71C2E8;
    MEM32(0x71C2E0) = eax;

loc_001F3916: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001F3920
 * Original: 0x001F3920 - 0x001F3A74 (340 bytes, 132 insns)
 * Category: game_debug
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F3920(void)
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

loc_001F3920: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x30);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 3 (32-bit) */
    SET_LO8(eax, (CMP_GE(_fas, _fbs)) ? 1 : 0); /* setge */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM8(0x50FF48) = LO8(eax);
    if (CMP_NE(_fa, _fb)) goto loc_001F3958; /* jne: not equal / not zero */

loc_001F393A: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x4B3440);
    PUSH32(esp, 0x4B3414);
    PUSH32(esp, 0x4B3408);
    PUSH32(esp, 0x49657C);
    PUSH32(esp, 0x001F3955u); RECOMP_ABI_CALL(0x0014E700u, sub_0014E700); /* call 0x0014E700 */

loc_001F3955: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001F3958: ;
    edi = MEM32(esp + 0x34);
    fp_push(MEMF(edi)); /* fld float */
    eax = ebp + -1;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    ecx = 1;
    MEM32(esp + 0x38) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_001F39C6; /* jl: less (signed <) */

loc_001F3971: ;
    ebx = ebp + -3;
    edx = edi + 0x30;

loc_001F3977: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(edx + -32)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [edx - 0x20] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001F3988; /* jp: parity */

loc_001F3981: ;
    fp_pop(); /* fstp st(0) */
    esi = ecx;
    fp_push(MEMF(edx + -32)); /* fld float */

loc_001F3988: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(edx + -16)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [edx - 0x10] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001F399A; /* jp: parity */

loc_001F3992: ;
    fp_pop(); /* fstp st(0) */
    esi = ecx + 1;
    fp_push(MEMF(edx + -16)); /* fld float */

loc_001F399A: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(edx)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [edx] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001F39AA; /* jp: parity */

loc_001F39A3: ;
    fp_pop(); /* fstp st(0) */
    esi = ecx + 2;
    fp_push(MEMF(edx)); /* fld float */

loc_001F39AA: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(edx + 0x10)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [edx + 0x10] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001F39BC; /* jp: parity */

loc_001F39B4: ;
    fp_pop(); /* fstp st(0) */
    esi = ecx + 3;
    fp_push(MEMF(edx + 0x10)); /* fld float */

loc_001F39BC: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x40;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001F3977; /* jl: less (signed <) */

loc_001F39C6: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001F39E8; /* jge: greater or equal (signed >=) */

loc_001F39CA: ;
    edx = ecx;
    edx = edx << 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001F39D1: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(edx)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [edx] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001F39E0; /* jp: parity */

loc_001F39DA: ;
    fp_pop(); /* fstp st(0) */
    esi = ecx;
    fp_push(MEMF(edx)); /* fld float */

loc_001F39E0: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001F39D1; /* jl: less (signed <) */

loc_001F39E8: ;
    esi = esi << 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    fp_pop(); /* fstp st(0) */
    ecx = MEM32(esi + edi + 0xC);
    fp_push(MEMF(esi + edi)); /* fld float */
    edx = MEM32(esi + edi + 8);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x49778C)); /* fadd dword ptr [0x49778c] */
    eax = esi + edi;
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 4);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    edx = esp + 0x20;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, edx);
    PUSH32(esp, 0x001F3A15u); RECOMP_ABI_CALL(0x0015BB60u, sub_0015BB60); /* call 0x0015BB60 */

loc_001F3A15: ;
    PUSH32(esp, ebp);
    eax = esp + 0x28;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001F3A21u); RECOMP_ABI_CALL(0x001B8070u, sub_001B8070); /* call 0x001B8070 */

loc_001F3A21: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F3A6C; /* je: equal / zero */

loc_001F3A28: ;
    ebx = MEM32(esp + 0x38);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001F3A6C; /* jle: less or equal (signed <=) */

loc_001F3A32: ;
    esi = ebx;
    esi = esi << 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    /* nop */

loc_001F3A40: ;
    ecx = esp + 0x20;
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001F3A4Bu); RECOMP_ABI_CALL(0x0015BDF0u, sub_0015BDF0); /* call 0x0015BDF0 */

loc_001F3A4B: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001F3A52u); RECOMP_ABI_CALL(0x0015BDF0u, sub_0015BDF0); /* call 0x0015BDF0 */

loc_001F3A52: ;
    edx = esp + 0x30;
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001F3A5Du); RECOMP_ABI_CALL(0x0015BDF0u, sub_0015BDF0); /* call 0x0015BDF0 */

loc_001F3A5D: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x10;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_001F3A40; /* jg: greater (signed >) */

loc_001F3A6C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
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
 * sub_001F3A80
 * Original: 0x001F3A80 - 0x001F3A83 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F3A80(void)
{

loc_001F3A80: ;
    eax = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_001F3A90
 * Original: 0x001F3A90 - 0x001F3AB5 (37 bytes, 14 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F3A90(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F3A90: ;
    edx = MEM32(esp + 4);
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    MEM32(esi + 0x10) = eax;
    MEM32(esi + 0x14) = ecx;
    PUSH32(esp, 0x001F3AACu); RECOMP_ABI_CALL(0x0015BDF0u, sub_0015BDF0); /* call 0x0015BDF0 */

loc_001F3AAC: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001F3AC0
 * Original: 0x001F3AC0 - 0x001F3ACD (13 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F3AC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F3AC0: ;
    eax = MEM32(ecx + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esp + 4) (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001F3AD0
 * Original: 0x001F3AD0 - 0x001F3AEF (31 bytes, 11 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F3AD0(void)
{

loc_001F3AD0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, esi);
    PUSH32(esp, 0x4B3464);
    MEM32(esi) = 0x4B3460;
    PUSH32(esp, 0x001F3AE4u); RECOMP_ABI_CALL(0x0016F970u, sub_0016F970); /* call 0x0016F970 */

loc_001F3AE4: ;
    ecx = eax;
    PUSH32(esp, 0x001F3AEBu); RECOMP_ABI_CALL(0x0016D700u, sub_0016D700); /* call 0x0016D700 */

loc_001F3AEB: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001F3AF0
 * Original: 0x001F3AF0 - 0x001F3AFB (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F3AF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F3AF0: ;
    _fa = (uint32_t)(MEM32(ecx + 0xF0)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0xF0), 0xA (32-bit) */
    SET_LO8(eax, (CMP_GE(_fas, _fbs)) ? 1 : 0); /* setge */
    esp += 4; return; /* ret */

}

/**
 * sub_001F3B00
 * Original: 0x001F3B00 - 0x001F3B03 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F3B00(void)
{

loc_001F3B00: ;
    eax = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_001F3B10
 * Original: 0x001F3B10 - 0x001F3B1D (13 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F3B10(void)
{

loc_001F3B10: ;
    eax = MEM32(ecx + 0xF0);
    eax = eax + eax * 2;
    eax = ecx + eax * 8;
    esp += 4; return; /* ret */

}

/**
 * sub_001F3B20
 * Original: 0x001F3B20 - 0x001F3B2B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F3B20(void)
{

loc_001F3B20: ;
    MEM32(ecx + 0xF0) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_001F3B30
 * Original: 0x001F3B30 - 0x001F3B36 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F3B30(void)
{

loc_001F3B30: ;
    eax = 0xE;
    esp += 4; return; /* ret */

}

/**
 * sub_001F3B40
 * Original: 0x001F3B40 - 0x001F3B43 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F3B40(void)
{

loc_001F3B40: ;
    eax = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_001F3B50
 * Original: 0x001F3B50 - 0x001F3B5F (15 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F3B50(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F3B50: ;
    eax = MEM32(ecx + 0xD58);
    eax = (uint32_t)((int32_t)eax * (int32_t)0xF4);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001F3B60
 * Original: 0x001F3B60 - 0x001F3B8C (44 bytes, 15 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F3B60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F3B60: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xE (32-bit) */
    esi = ecx;
    if (CMP_LE(_fas, _fbs)) goto loc_001F3B81; /* jle: less or equal (signed <=) */

loc_001F3B6D: ;
    PUSH32(esp, 0x4A);
    PUSH32(esp, 0x496604);
    PUSH32(esp, 0x497950);
    PUSH32(esp, 0x001F3B7Eu); RECOMP_ABI_CALL(0x000EB51Cu, sub_000EB51C); /* call 0x000EB51C */

loc_001F3B7E: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001F3B81: ;
    MEM32(esi + 0xD58) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001F3B90
 * Original: 0x001F3B90 - 0x001F3B9D (13 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F3B90(void)
{

loc_001F3B90: ;
    eax = ecx;
    MEM32(eax + 0xF0) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_001F3BA0
 * Original: 0x001F3BA0 - 0x001F3BAB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F3BA0(void)
{

loc_001F3BA0: ;
    MEM32(ecx + 0xD58) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_001F3BB0
 * Original: 0x001F3BB0 - 0x001F3BD1 (33 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F3BB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F3BB0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F3BCE; /* je: equal / zero */

loc_001F3BBC: ;
    edx = MEM32(esp + 0xC);
    edx = MEM32(edx);

loc_001F3BC2: ;
    _fa = (uint32_t)(MEM32(eax + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x10), edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F3BD0; /* je: equal / zero */

loc_001F3BC7: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F3BC2; /* jne: not equal / not zero */

loc_001F3BCE: ;
    eax = ecx;

loc_001F3BD0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001F3BE0
 * Original: 0x001F3BE0 - 0x001F3C18 (56 bytes, 18 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F3BE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F3BE0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xD58);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001F3C09; /* jl: less (signed <) */

loc_001F3BF2: ;
    PUSH32(esp, 0x8A);
    PUSH32(esp, 0x496604);
    PUSH32(esp, 0x497960);
    PUSH32(esp, 0x001F3C06u); RECOMP_ABI_CALL(0x000EB51Cu, sub_000EB51C); /* call 0x000EB51C */

loc_001F3C06: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001F3C09: ;
    eax = edi;
    eax = (uint32_t)((int32_t)eax * (int32_t)0xF4);
    POP32(esp, edi);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001F3C20
 * Original: 0x001F3C20 - 0x001F3C5D (61 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F3C20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F3C20: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0xF0);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    MEM32(esi + 0xF0) = ecx;
    if (CMP_LE(_fas, _fbs)) goto loc_001F3C4E; /* jle: less or equal (signed <=) */

loc_001F3C37: ;
    PUSH32(esp, 0x95);
    PUSH32(esp, 0x496604);
    PUSH32(esp, 0x4965F0);
    PUSH32(esp, 0x001F3C4Bu); RECOMP_ABI_CALL(0x000EB51Cu, sub_000EB51C); /* call 0x000EB51C */

loc_001F3C4B: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001F3C4E: ;
    eax = MEM32(esi + 0xF0);
    eax = eax + eax * 2;
    eax = esi + eax * 8 + -24;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001F3C60
 * Original: 0x001F3C60 - 0x001F3C6B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F3C60(void)
{

loc_001F3C60: ;
    MEM32(ecx + 0xF0) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_001F3C70
 * Original: 0x001F3C70 - 0x001F3CAF (63 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F3C70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F3C70: ;
    edx = MEM32(ecx + 0xD58);
    edx = (uint32_t)((int32_t)edx * (int32_t)0xF4);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    eax = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_001F3CAE; /* je: equal / zero */

loc_001F3C84: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    goto loc_001F3C90;

    /* nop */

loc_001F3C90: ;
    MEM32(eax + 0xF0) = edx;
    esi = MEM32(ecx + 0xD58);
    esi = (uint32_t)((int32_t)esi * (int32_t)0xF4);
    _fb = (uint32_t)(0xF4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xF4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F3C90; /* jne: not equal / not zero */

loc_001F3CAD: ;
    POP32(esp, esi);

loc_001F3CAE: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001F3CB0
 * Original: 0x001F3CB0 - 0x001F3CBA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F3CB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F3CB0: ;
    ecx = 0x71C5C8;
    g_seh_ebp = ebp; sub_001F3C70(); return; /* tail jmp 0x001F3C70 */

}

/**
 * sub_001F3CC0
 * Original: 0x001F3CC0 - 0x001F3CDF (31 bytes, 11 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F3CC0(void)
{

loc_001F3CC0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, esi);
    PUSH32(esp, 0x4B3478);
    MEM32(esi) = 0x4B3474;
    PUSH32(esp, 0x001F3CD4u); RECOMP_ABI_CALL(0x0016F970u, sub_0016F970); /* call 0x0016F970 */

loc_001F3CD4: ;
    ecx = eax;
    PUSH32(esp, 0x001F3CDBu); RECOMP_ABI_CALL(0x0016D700u, sub_0016D700); /* call 0x0016D700 */

loc_001F3CDB: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001F3CE0
 * Original: 0x001F3CE0 - 0x001F3D93 (179 bytes, 60 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F3CE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F3CE0: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x20);
    esi = MEM32(edi + 0x10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    ebp = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_001F3D88; /* jl: less (signed <) */

loc_001F3CF7: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x71D320)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(0x71D320) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001F3D16; /* jl: less (signed <) */

loc_001F3CFF: ;
    PUSH32(esp, 0x8A);
    PUSH32(esp, 0x496604);
    PUSH32(esp, 0x497960);
    PUSH32(esp, 0x001F3D13u); RECOMP_ABI_CALL(0x000EB51Cu, sub_000EB51C); /* call 0x000EB51C */

loc_001F3D13: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001F3D16: ;
    eax = MEM32(ebp + 4);
    esi = (uint32_t)((int32_t)esi * (int32_t)0xF4);
    _fb = (uint32_t)(0x71C5C8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x71C5C8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x20) = eax;
    eax = MEM32(esi + 0xF0);
    PUSH32(esp, ebx);
    ecx = eax + eax * 2;
    edx = esp + 0x24;
    PUSH32(esp, edx);
    ebx = esi + ecx * 8;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001F3D42u); RECOMP_ABI_CALL(0x001F3BB0u, sub_001F3BB0); /* call 0x001F3BB0 */

loc_001F3D42: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_001F3D88; /* je: equal / zero */

loc_001F3D4A: ;
    PUSH32(esp, eax);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001F3D55u); RECOMP_ABI_CALL(0x0015BDF0u, sub_0015BDF0); /* call 0x0015BDF0 */

loc_001F3D55: ;
    ecx = MEM32(ebp + 8);
    SET_LO8(eax, 1);
    MEM8(ecx + 4) = LO8(eax);
    edx = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x18);
    MEM32(edi + 0x38) = edx;
    edx = MEM32(esp + 0x1C);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + 0x3C) = ecx;
    MEM32(edi + 0x40) = edx;
    MEM32(edi + 0x44) = 0x3F800000;
    MEM8(edi + 0x34) = LO8(eax);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_001F3D88: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebp);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001F3DA0
 * Original: 0x001F3DA0 - 0x001F3DAD (13 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F3DA0(void)
{

loc_001F3DA0: ;
    eax = ecx;
    MEM32(eax + 0xF0) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_001F3DB0
 * Original: 0x001F3DB0 - 0x001F3E44 (148 bytes, 43 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F3DB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F3DB0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xF0);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001F3DD6; /* jle: less or equal (signed <=) */

loc_001F3DBF: ;
    PUSH32(esp, 0xAA);
    PUSH32(esp, 0x496604);
    PUSH32(esp, 0x496664);
    PUSH32(esp, 0x001F3DD3u); RECOMP_ABI_CALL(0x000EB51Cu, sub_000EB51C); /* call 0x000EB51C */

loc_001F3DD3: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001F3DD6: ;
    eax = MEM32(esi + 0xF0);
    ecx = eax + eax * 2;
    eax = MEM32(esp + 8);
    edx = esi + ecx * 8;
    ecx = MEM32(eax);
    MEM32(edx) = ecx;
    ecx = MEM32(eax + 4);
    MEM32(edx + 4) = ecx;
    ecx = MEM32(eax + 8);
    MEM32(edx + 8) = ecx;
    ecx = MEM32(eax + 0xC);
    MEM32(edx + 0xC) = ecx;
    ecx = MEM32(eax + 0x10);
    MEM32(edx + 0x10) = ecx;
    eax = MEM32(eax + 0x14);
    MEM32(edx + 0x14) = eax;
    ecx = MEM32(esi + 0xF0);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    MEM32(esi + 0xF0) = ecx;
    if (CMP_LE(_fas, _fbs)) goto loc_001F3E33; /* jle: less or equal (signed <=) */

loc_001F3E1C: ;
    PUSH32(esp, 0x95);
    PUSH32(esp, 0x496604);
    PUSH32(esp, 0x4965F0);
    PUSH32(esp, 0x001F3E30u); RECOMP_ABI_CALL(0x000EB51Cu, sub_000EB51C); /* call 0x000EB51C */

loc_001F3E30: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001F3E33: ;
    eax = MEM32(esi + 0xF0);
    ecx = eax + eax * 2;
    eax = esi + ecx * 8 + -24;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001F3E50
 * Original: 0x001F3E50 - 0x001F3EB4 (100 bytes, 36 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F3E50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F3E50: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xF0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001F3EAD; /* jge: greater or equal (signed >=) */

loc_001F3E61: ;
    edx = MEM32(esp + 0x24);
    eax = eax + eax * 2;
    ecx = esi + eax * 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    eax = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_001F3E7D; /* je: equal / zero */

loc_001F3E71: ;
    _fa = (uint32_t)(MEM32(eax + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x10), edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F3E7F; /* je: equal / zero */

loc_001F3E76: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F3E71; /* jne: not equal / not zero */

loc_001F3E7D: ;
    eax = ecx;

loc_001F3E7F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F3EAD; /* jne: not equal / not zero */

loc_001F3E83: ;
    ecx = MEM32(esp + 0x28);
    MEM32(esp + 0x14) = edx;
    edx = MEM32(esp + 0x20);
    PUSH32(esp, edx);
    eax = esp + 8;
    PUSH32(esp, eax);
    MEM32(esp + 0x20) = ecx;
    PUSH32(esp, 0x001F3E9Eu); RECOMP_ABI_CALL(0x0015BDF0u, sub_0015BDF0); /* call 0x0015BDF0 */

loc_001F3E9E: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 4;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x001F3EADu); RECOMP_ABI_CALL(0x001F3DB0u, sub_001F3DB0); /* call 0x001F3DB0 */

loc_001F3EAD: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001F3EC0
 * Original: 0x001F3EC0 - 0x001F3F0E (78 bytes, 23 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F3EC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F3EC0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001F3F0A; /* jl: less (signed <) */

loc_001F3EC9: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x71D320)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(0x71D320) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001F3EE8; /* jl: less (signed <) */

loc_001F3ED1: ;
    PUSH32(esp, 0x8A);
    PUSH32(esp, 0x496604);
    PUSH32(esp, 0x497960);
    PUSH32(esp, 0x001F3EE5u); RECOMP_ABI_CALL(0x000EB51Cu, sub_000EB51C); /* call 0x000EB51C */

loc_001F3EE5: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001F3EE8: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0xF4);
    PUSH32(esp, edx);
    _fb = (uint32_t)(0x71C5C8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x71C5C8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x001F3F0Au); RECOMP_ABI_CALL(0x001F3E50u, sub_001F3E50); /* call 0x001F3E50 */

loc_001F3F0A: ;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_001F3F10
 * Original: 0x001F3F10 - 0x001F3F9D (141 bytes, 48 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F3F10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F3F10: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x1C);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x10);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    ebx = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_001F3F92; /* jl: less (signed <) */

loc_001F3F23: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x71D320)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(0x71D320) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001F3F42; /* jl: less (signed <) */

loc_001F3F2B: ;
    PUSH32(esp, 0x8A);
    PUSH32(esp, 0x496604);
    PUSH32(esp, 0x497960);
    PUSH32(esp, 0x001F3F3Fu); RECOMP_ABI_CALL(0x000EB51Cu, sub_000EB51C); /* call 0x000EB51C */

loc_001F3F3F: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001F3F42: ;
    eax = MEM32(ebx + 4);
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = edi;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0xF4);
    _fb = (uint32_t)(0x71C5C8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x71C5C8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x001F3F5Eu); RECOMP_ABI_CALL(0x001F3FA0u, sub_001F3FA0); /* call 0x001F3FA0 */

loc_001F3F5E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F3F92; /* je: equal / zero */

loc_001F3F62: ;
    edx = MEM32(ebx + 8);
    SET_LO8(eax, 1);
    MEM8(edx + 4) = LO8(eax);
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 0x10);
    MEM32(esi + 0x38) = ecx;
    ecx = MEM32(esp + 0x14);
    POP32(esp, edi);
    MEM32(esi + 0x3C) = edx;
    MEM32(esi + 0x40) = ecx;
    MEM32(esi + 0x44) = 0x3F800000;
    MEM8(esi + 0x34) = LO8(eax);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_001F3F92: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001F3FA0
 * Original: 0x001F3FA0 - 0x001F3FE0 (64 bytes, 24 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F3FA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F3FA0: ;
    eax = ecx;
    ecx = MEM32(eax + 0xF0);
    ecx = ecx + ecx * 2;
    ecx = eax + ecx * 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F3FC2; /* je: equal / zero */

loc_001F3FB2: ;
    edx = MEM32(esp + 8);

loc_001F3FB6: ;
    _fa = (uint32_t)(MEM32(eax + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x14), edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F3FC4; /* je: equal / zero */

loc_001F3FBB: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F3FB6; /* jne: not equal / not zero */

loc_001F3FC2: ;
    eax = ecx;

loc_001F3FC4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F3FDB; /* je: equal / zero */

loc_001F3FC8: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001F3FD3u); RECOMP_ABI_CALL(0x0015BDF0u, sub_0015BDF0); /* call 0x0015BDF0 */

loc_001F3FD3: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(eax, 1);
    esp += 12; return; /* ret 8 */

loc_001F3FDB: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001F3FE0
 * Original: 0x001F3FE0 - 0x001F4022 (66 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001F3FE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F3FE0: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebp = ecx;
    PUSH32(esp, edi);
    esi = ebp;
    edi = 0xE;
    /* nop */

loc_001F3FF0: ;
    PUSH32(esp, 0x1F3A80);
    PUSH32(esp, 0xA);
    PUSH32(esp, 0x18);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001F3FFFu); RECOMP_ABI_CALL(0x000150B5u, sub_000150B5); /* call 0x000150B5 */

loc_001F3FFF: ;
    MEM32(esi + 0xF0) = 0;
    _fb = (uint32_t)(0xF4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xF4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001F3FF0; /* jne: not equal / not zero */

loc_001F4012: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebp + 0xD58) = 0;
    eax = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_001F4030
 * Original: 0x001F4030 - 0x001F4046 (22 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F4030(void)
{

loc_001F4030: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x001F4038u); RECOMP_ABI_CALL(0x001F3FE0u, sub_001F3FE0); /* call 0x001F3FE0 */

loc_001F4038: ;
    MEM32(esi + 0xD58) = 0xE;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001F4050
 * Original: 0x001F4050 - 0x001F4054 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F4050(void)
{

loc_001F4050: ;
    eax = MEM32(ecx + 4);
    esp += 4; return; /* ret */

}

/**
 * sub_001F4060
 * Original: 0x001F4060 - 0x001F4064 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F4060(void)
{

loc_001F4060: ;
    eax = MEM32(ecx + 8);
    esp += 4; return; /* ret */

}

/**
 * sub_001F4070
 * Original: 0x001F4070 - 0x001F40A1 (49 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F4070(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F4070: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F409C; /* je: equal / zero */

loc_001F407A: ;
    eax = esi;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)MEM32(ecx + 4)));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)MEM32(ecx + 4))); }
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F4087; /* jne: not equal / not zero */

loc_001F4084: ;
    edi = MEM32(ecx + 8);

loc_001F4087: ;
    eax = esi + -1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ecx) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_001F409C; /* jne: not equal / not zero */

loc_001F4090: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx) = eax;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + 4) = edx;
    MEM32(ecx + 8) = esi;

loc_001F409C: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001F40B0
 * Original: 0x001F40B0 - 0x001F42AA (506 bytes, 147 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F40B0(void)
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

loc_001F40B0: ;
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(0x67D13C);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x10) = ebp;

loc_001F40C5: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F40CE; /* jne: not equal / not zero */

loc_001F40CA: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_001F40DA;

loc_001F40CE: ;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x10C);
    _fb = (uint32_t)(0x67CF24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x67CF24;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001F40DA: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0xEC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0xEC) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001F42A0; /* jge: greater or equal (signed >=) */

loc_001F40EA: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x001F40F1u); RECOMP_ABI_CALL(0x0015A430u, sub_0015A430); /* call 0x0015A430 */

loc_001F40F1: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x3E8;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    PUSH32(esp, 1);
    MEM32(esp + 0x1C) = edx;
    fp_push((double)SMEM32(esp + 0x1C)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x49F158)); /* fmul dword ptr [0x49f158] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x58)); /* fmul dword ptr [esp + 0x58] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x496B98)); /* fmul dword ptr [0x496b98] */
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x58)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x001F4126u); RECOMP_ABI_CALL(0x0015A430u, sub_0015A430); /* call 0x0015A430 */

loc_001F4126: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x3E8;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    PUSH32(esp, 1);
    MEM32(esp + 0x40) = 0x3F800000;
    MEM32(esp + 0x20) = edx;
    fp_push((double)SMEM32(esp + 0x20)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x49F158)); /* fmul dword ptr [0x49f158] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x5C)); /* fmul dword ptr [esp + 0x5c] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x496B98)); /* fmul dword ptr [0x496b98] */
    MEMF(esp + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x001F4159u); RECOMP_ABI_CALL(0x0015A430u, sub_0015A430); /* call 0x0015A430 */

loc_001F4159: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x3E8;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    ecx = MEM32(0x67D13C);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    MEM32(esp + 0x14) = edx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x49F158)); /* fmul dword ptr [0x49f158] */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_NE(_fa, _fb)) goto loc_001F4185; /* jne: not equal / not zero */

loc_001F4181: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_001F4192;

loc_001F4185: ;
    eax = ecx;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x10C);
    _fb = (uint32_t)(0x67CF24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x67CF24;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001F4192: ;
    esi = MEM32(eax + 0xF0);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ebp;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esi + 0x70);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    edi = esi + 0x70;
    if (CMP_EQ(_fa, _fb)) goto loc_001F41AE; /* je: equal / zero */

loc_001F41A5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F4291; /* jne: not equal / not zero */

loc_001F41AE: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F4291; /* je: equal / zero */

loc_001F41B9: ;
    _fa = (uint32_t)(MEM8(eax + 0x40)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x40), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F4291; /* jne: not equal / not zero */

loc_001F41C3: ;
    eax = MEM32(esi + 0xE0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F4291; /* je: equal / zero */

loc_001F41D1: ;
    edx = MEM32(eax + 0xC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F4291; /* je: equal / zero */

loc_001F41DC: ;
    edx = MEM32(esi + 8);
    eax = MEM32(edx + 0x54);
    PUSH32(esp, eax);
    PUSH32(esp, 0x5CE880);
    PUSH32(esp, 0x001F41EDu); RECOMP_ABI_CALL(0x00109240u, sub_00109240); /* call 0x00109240 */

loc_001F41ED: ;
    ecx = MEM32(eax + 0x30);
    MEM32(esp + 0x20) = ecx;
    edx = MEM32(eax + 0x34);
    MEM32(esp + 0x24) = edx;
    eax = MEM32(eax + 0x38);
    edx = MEM32(esp + 0x54);
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    MEM32(esp + 0x2C) = eax;
    PUSH32(esp, edx);
    eax = esp + 0x48;
    PUSH32(esp, eax);
    MEM32(esp + 0x38) = 0x3F800000;
    PUSH32(esp, 0x001F421Eu); RECOMP_ABI_CALL(0x0015BD20u, sub_0015BD20); /* call 0x0015BD20 */

loc_001F421E: ;
    ecx = esp + 0x4C;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001F4228u); RECOMP_ABI_CALL(0x0015C1D0u, sub_0015C1D0); /* call 0x0015C1D0 */

loc_001F4228: ;
    fp_push(MEMF(esp + 0x70)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x4964E8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x4964e8] */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_001F4249; /* jnp: not parity */

loc_001F423C: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x58)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x58] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001F428B; /* jp: parity */

loc_001F4247: ;
    goto loc_001F424B;

loc_001F4249: ;
    fp_pop(); /* fstp st(0) */

loc_001F424B: ;
    edx = esp + 0x28;
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x001F4257u); RECOMP_ABI_CALL(0x00164290u, sub_00164290); /* call 0x00164290 */

loc_001F4257: ;
    eax = MEM32(esi + 0xC);
    ecx = MEM32(eax + 0x3C);
    edx = MEM32(esp + 0x54);
    eax = MEM32(esp + 0x14);
    MEM32(ecx + 0x14) = edx;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x001F4270u); RECOMP_ABI_CALL(0x00162570u, sub_00162570); /* call 0x00162570 */

loc_001F4270: ;
    ecx = MEM32(esi + 0xC);
    edx = MEM32(ecx + 0x3C);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 3);
    ecx = edi;
    MEM32(edx + 0x18) = 0x3C23D70A;
    PUSH32(esp, 0x001F428Au); RECOMP_ABI_CALL(0x001659C0u, sub_001659C0); /* call 0x001659C0 */

loc_001F428A: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001F428B: ;
    ecx = MEM32(0x67D13C);

loc_001F4291: ;
    MEM32(esp + 0x10) = MEM32(esp + 0x10) + 1;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x210) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x210;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_001F40C5;

loc_001F42A0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = ebx;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001F42B0
 * Original: 0x001F42B0 - 0x001F42D3 (35 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F42B0(void)
{

loc_001F42B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, esi);
    PUSH32(esp, 0x4B349C);
    MEM8(esi + 8) = 0;
    MEM32(esi) = 0x4B348C;
    PUSH32(esp, 0x001F42C8u); RECOMP_ABI_CALL(0x0016F970u, sub_0016F970); /* call 0x0016F970 */

loc_001F42C8: ;
    ecx = eax;
    PUSH32(esp, 0x001F42CFu); RECOMP_ABI_CALL(0x0016D710u, sub_0016D710); /* call 0x0016D710 */

loc_001F42CF: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001F42E0
 * Original: 0x001F42E0 - 0x001F434C (108 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F42E0(void)
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

loc_001F42E0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0xC);
    eax = MEM32(eax + 8);
    fp_push((double)SMEM32(eax)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x49F158)); /* fmul dword ptr [0x49f158] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(eax + 4)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x49F158)); /* fmul dword ptr [0x49f158] */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(eax + 8)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x49F158)); /* fmul dword ptr [0x49f158] */
    MEMF(esp + 0xC) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x4964E8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x4964e8] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001F4326; /* jp: parity */

loc_001F431C: ;
    ecx = MEM32(0x5176EC);
    MEM32(esp + 0xC) = ecx;

loc_001F4326: ;
    edx = MEM32(esp);
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 4);
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x14;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    PUSH32(esp, 0x001F4346u); RECOMP_ABI_CALL(0x001F40B0u, sub_001F40B0); /* call 0x001F40B0 */

loc_001F4346: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001F4350
 * Original: 0x001F4350 - 0x001F439E (78 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F4350(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F4350: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    edx = MEM32(esp + 0xC);
    eax = eax << 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(eax + 0x71D334) = ecx;
    ecx = MEM32(esp + 0x10);
    MEM32(eax + 0x71D338) = edx;
    edx = MEM32(esp + 0x14);
    MEM32(eax + 0x71D33C) = ecx;
    ecx = MEM32(esp + 0x18);
    MEM32(eax + 0x71D340) = edx;
    edx = MEM32(esp + 0x1C);
    MEM32(eax + 0x71D328) = 1;
    MEM32(eax + 0x71D344) = ecx;
    MEM32(eax + 0x71D348) = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_001F43A0
 * Original: 0x001F43A0 - 0x001F43F9 (89 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F43A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F43A0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = edi;
    esi = esi << 6;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = MEM32(esi + 0x71D34C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_001F43F6; /* jg: greater (signed >) */

loc_001F43B6: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x14);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001F43D3; /* jle: less or equal (signed <=) */

loc_001F43C1: ;
    edx = esi + 0x71D350;

loc_001F43C7: ;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F43F5; /* je: equal / zero */

loc_001F43CB: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001F43C7; /* jl: less (signed <) */

loc_001F43D3: ;
    ecx = edi;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x3238);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x5D1ADC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(ecx + 0x5D1ADC) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F43F5; /* je: equal / zero */

loc_001F43E3: ;
    edi = edi << 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi * 4 + 0x71D350) = ebx;
    MEM32(esi + 0x71D34C) = MEM32(esi + 0x71D34C) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x71D34C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001F43F5: ;
    POP32(esp, ebx);

loc_001F43F6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001F4400
 * Original: 0x001F4400 - 0x001F4484 (132 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F4400(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F4400: ;
    edx = MEM32(esp + 4);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    eax = edx;
    eax = eax << 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 3 (32-bit) */
    MEM32(eax + 0x71D328) = ecx;
    MEM32(eax + 0x71D334) = ecx;
    MEM32(eax + 0x71D338) = ecx;
    MEM32(eax + 0x71D33C) = ecx;
    MEM32(eax + 0x71D340) = ecx;
    MEM32(eax + 0x71D344) = ecx;
    MEM32(eax + 0x71D348) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_001F4445; /* je: equal / zero */

loc_001F443F: ;
    MEM32(eax + 0x71D32C) = ecx;

loc_001F4445: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F4477; /* je: equal / zero */

loc_001F444A: ;
    edx = edx << 6;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(eax + 0x71D34C) = ecx;
    MEM32(edx + 0x71D350) = ecx;
    MEM32(edx + 0x71D354) = ecx;
    MEM32(edx + 0x71D358) = ecx;
    MEM32(edx + 0x71D35C) = ecx;
    MEM32(edx + 0x71D360) = ecx;
    MEM32(edx + 0x71D364) = ecx;

loc_001F4477: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 1 (32-bit) */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_001F4483; /* je: equal / zero */

loc_001F447D: ;
    MEM32(eax + 0x71D330) = ecx;

loc_001F4483: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001F4490
 * Original: 0x001F4490 - 0x001F44EB (91 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F4490(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F4490: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = ebx;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x3238);
    _fb = (uint32_t)(0x5D1AB8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x5D1AB8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esi + 0x1E04);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F44E8; /* jne: not equal / not zero */

loc_001F44AE: ;
    PUSH32(esp, edi);
    edi = ebx;
    edi = edi << 6;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = MEM32(edi + 0x71D340);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001F44C1u); RECOMP_ABI_CALL(0x001C29C0u, sub_001C29C0); /* call 0x001C29C0 */

loc_001F44C1: ;
    ecx = MEM32(edi + 0x71D33C);
    edx = MEM32(edi + 0x71D338);
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001F44DAu); RECOMP_ABI_CALL(0x001C2880u, sub_001C2880); /* call 0x001C2880 */

loc_001F44DA: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x1E04) = 0;
    POP32(esp, edi);

loc_001F44E8: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001F44F0
 * Original: 0x001F44F0 - 0x001F4503 (19 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F44F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F44F0: ;
    eax = MEM32(esp + 4);
    eax = eax << 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = MEM32(eax + 0x71D32C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    esp += 4; return; /* ret */

}

/**
 * sub_001F4510
 * Original: 0x001F4510 - 0x001F464A (314 bytes, 80 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F4510(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F4510: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ebx;
    esi = esi << 6;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = MEM32(esi + 0x71D328);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebp = ebp | 0xFFFFFFFFu;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F4645; /* je: equal / zero */

loc_001F4530: ;
    _fa = (uint32_t)(MEM32(esi + 0x71D34C)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x71D34C), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F4645; /* je: equal / zero */

loc_001F453C: ;
    ecx = MEM32(esi + 0x71D334);
    eax = ebx;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x3238);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x5D1AD4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax + 0x5D1AD4) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F4645; /* jne: not equal / not zero */

loc_001F4556: ;
    ecx = MEM32(esi + 0x71D344);
    _fa = (uint32_t)(MEM32(esi + 0x71D330)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x71D330), ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001F459B; /* jl: less (signed <) */

loc_001F4564: ;
    eax = MEM32(esi + 0x71D348);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x14) = eax;
    if ((_fa == 0)) goto loc_001F4584; /* je: equal / zero */

loc_001F4572: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001F4578u); RECOMP_ABI_CALL(0x0015A430u, sub_0015A430); /* call 0x0015A430 */

loc_001F4578: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)MEM32(esp + 0x18)));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)MEM32(esp + 0x18))); }
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F459B; /* jne: not equal / not zero */

loc_001F4584: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001F458Au); RECOMP_ABI_CALL(0x0015A430u, sub_0015A430); /* call 0x0015A430 */

loc_001F458A: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)MEM32(esi + 0x71D34C)));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)MEM32(esi + 0x71D34C))); }
    ebp = MEM32(esi + edx * 4 + 0x71D350);

loc_001F459B: ;
    edx = MEM32(esi + 0x71D330);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x71D348)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(esi + 0x71D348) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001F45C0; /* jl: less (signed <) */

loc_001F45A9: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001F45AFu); RECOMP_ABI_CALL(0x0015A430u, sub_0015A430); /* call 0x0015A430 */

loc_001F45AF: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)MEM32(esi + 0x71D34C)));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)MEM32(esi + 0x71D34C))); }
    ebp = MEM32(esi + edx * 4 + 0x71D350);

loc_001F45C0: ;
    ecx = MEM32(esi + 0x71D330);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0xFFFFFFFFu (32-bit) */
    MEM32(esi + 0x71D330) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_001F4645; /* je: equal / zero */

loc_001F45D2: ;
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001F45D9u); RECOMP_ABI_CALL(0x001F4490u, sub_001F4490); /* call 0x001F4490 */

loc_001F45D9: ;
    MEM32(esi + 0x71D32C) = 1;
    MEM32(esi + 0x71D328) = edi;
    MEM32(esi + 0x71D334) = edi;
    MEM32(esi + 0x71D338) = edi;
    MEM32(esi + 0x71D33C) = edi;
    MEM32(esi + 0x71D340) = edi;
    MEM32(esi + 0x71D344) = edi;
    MEM32(esi + 0x71D348) = edi;
    MEM32(esi + 0x71D34C) = edi;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = ebx << 6;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = ebx;
    MEM32(eax + 0x71D350) = edi;
    MEM32(eax + 0x71D354) = edi;
    MEM32(eax + 0x71D358) = edi;
    MEM32(eax + 0x71D35C) = edi;
    MEM32(eax + 0x71D360) = edi;
    MEM32(eax + 0x71D364) = edi;
    MEM32(esi + 0x71D330) = edi;

loc_001F4645: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001F4650
 * Original: 0x001F4650 - 0x001F4653 (3 bytes, 1 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F4650(void)
{

loc_001F4650: ;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_001F4660
 * Original: 0x001F4660 - 0x001F4663 (3 bytes, 1 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F4660(void)
{

loc_001F4660: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001F4670
 * Original: 0x001F4670 - 0x001F4673 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F4670(void)
{

loc_001F4670: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001F4680
 * Original: 0x001F4680 - 0x001F4688 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F4680(void)
{

loc_001F4680: ;
    eax = MEM32(ecx + 4);
    eax = MEM32(ecx + eax * 4 + 0x3C);
    esp += 4; return; /* ret */

}

/**
 * sub_001F4690
 * Original: 0x001F4690 - 0x001F4695 (5 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F4690(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F4690: ;
    g_seh_ebp = ebp; sub_0018EBA0(); return; /* tail jmp 0x0018EBA0 */

}

/**
 * sub_001F46A0
 * Original: 0x001F46A0 - 0x001F46E2 (66 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F46A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F46A0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM16(ecx + 0x21C) = LO16(eax);
    MEM16(ecx + 0x210) = 0x14;
    MEM16(ecx + 0x212) = LO16(eax);
    MEM16(ecx + 0x214) = 0x258;
    MEM16(ecx + 0x216) = 0x898;
    SET_LO8(edx, MEM8(0x51430C));
    MEM8(ecx + 0x218) = LO8(edx);
    MEM8(ecx + 0x219) = LO8(eax);
    g_seh_ebp = ebp; sub_0018E8D0(); return; /* tail jmp 0x0018E8D0 */

}

/**
 * sub_001F46F0
 * Original: 0x001F46F0 - 0x001F473F (79 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F46F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F46F0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xC4);
    ecx = MEM32(esi + 0xBC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001F4705u); RECOMP_ABI_CALL(0x00153840u, sub_00153840); /* call 0x00153840 */

loc_001F4705: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x40);
    ecx = esi;
    PUSH32(esp, 0x001F4710u); RECOMP_ABI_CALL(0x00195F80u, sub_00195F80); /* call 0x00195F80 */

loc_001F4710: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x400);
    ecx = esi;
    PUSH32(esp, 0x001F471Eu); RECOMP_ABI_CALL(0x00195F80u, sub_00195F80); /* call 0x00195F80 */

loc_001F471E: ;
    PUSH32(esp, 0x100);
    ecx = esi;
    PUSH32(esp, 0x001F472Au); RECOMP_ABI_CALL(0x00195F50u, sub_00195F50); /* call 0x00195F50 */

loc_001F472A: ;
    ecx = MEM32(esi + 0xBC);
    MEM16(esi + 0x21C) = 0;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_001538E0(); return; /* tail jmp 0x001538E0 */

}

/**
 * sub_001F4740
 * Original: 0x001F4740 - 0x001F474B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F4740(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F4740: ;
    ecx = MEM32(ecx + 0xBC);
    g_seh_ebp = ebp; sub_00153830(); return; /* tail jmp 0x00153830 */

}

/**
 * sub_001F4750
 * Original: 0x001F4750 - 0x001F4803 (179 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F4750(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F4750: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    esi = ecx;
    PUSH32(esp, 0x001F475Au); RECOMP_ABI_CALL(0x001836C0u, sub_001836C0); /* call 0x001836C0 */

loc_001F475A: ;
    SET_LO8(ecx, MEM8(eax + 0x328));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F4801; /* jne: not equal / not zero */

loc_001F476B: ;
    eax = MEM32(esi + 0xBC);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 0xD0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001F477Eu); RECOMP_ABI_CALL(0x0019B800u, sub_0019B800); /* call 0x0019B800 */

loc_001F477E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F4801; /* jne: not equal / not zero */

loc_001F4786: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F4801; /* jne: not equal / not zero */

loc_001F478B: ;
    SET_LO16(edx, (uint32_t)(int32_t)SMEM8(esi + 0x219));
    eax = MEM32(esi + 0xBC);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 0xD0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x98);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001F47ACu); RECOMP_ABI_CALL(0x0019B8C0u, sub_0019B8C0); /* call 0x0019B8C0 */

loc_001F47AC: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x40 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F4801; /* je: equal / zero */

loc_001F47B4: ;
    edx = MEM32(esi + 0xBC);
    PUSH32(esp, eax);
    eax = (uint32_t)(int32_t)SMEM16(edx + 0xD0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001F47C8u); RECOMP_ABI_CALL(0x0019BBB0u, sub_0019BBB0); /* call 0x0019BBB0 */

loc_001F47C8: ;
    SET_LO16(ecx, MEM16(esi + 0x210));
    edx = MEM32(esi + 0xC4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0xA);
    PUSH32(esp, 0x3F800000);
    MEM16(esi + 0x212) = LO16(ecx);
    ecx = MEM32(esi + 0xBC);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001F47F2u); RECOMP_ABI_CALL(0x001546E0u, sub_001546E0); /* call 0x001546E0 */

loc_001F47F2: ;
    eax = MEM32(esi + 0xBC);
    MEM16(eax + 0x316) = 0;

loc_001F4801: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001F4810
 * Original: 0x001F4810 - 0x001F49FB (491 bytes, 137 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F4810(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F4810: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xBC);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 0xD0);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x001F4829u); RECOMP_ABI_CALL(0x0019B800u, sub_0019B800); /* call 0x0019B800 */

loc_001F4829: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F49F8; /* jne: not equal / not zero */

loc_001F4835: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F49F8; /* jne: not equal / not zero */

loc_001F483E: ;
    ecx = MEM32(esi + 0xBC);
    PUSH32(esp, 0x001F4849u); RECOMP_ABI_CALL(0x001536B0u, sub_001536B0); /* call 0x001536B0 */

loc_001F4849: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F49F8; /* je: equal / zero */

loc_001F4851: ;
    ecx = MEM32(esi + 0xBC);
    _fa = (uint32_t)(MEM16(ecx + 0x318)) & 0xFFFFu; _fb = (uint32_t)(LO16(edi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 0x318), LO16(edi) (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F49F8; /* je: equal / zero */

loc_001F4864: ;
    edx = MEM32(esi + 0x1F0);
    eax = MEM32(esi + 0xC4);
    PUSH32(esp, 0xA);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001F4879u); RECOMP_ABI_CALL(0x001546E0u, sub_001546E0); /* call 0x001546E0 */

loc_001F4879: ;
    PUSH32(esp, 0x1000000);
    ecx = esi;
    PUSH32(esp, 0x001F4885u); RECOMP_ABI_CALL(0x00195F10u, sub_00195F10); /* call 0x00195F10 */

loc_001F4885: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F48A8; /* jne: not equal / not zero */

loc_001F488A: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x001F4891u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001F488Eu); } /* indirect call */
    }

loc_001F4891: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F49F8; /* jne: not equal / not zero */

loc_001F4899: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x001F48A0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001F489Du); } /* indirect call */
    }

loc_001F48A0: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F49F8; /* jne: not equal / not zero */

loc_001F48A8: ;
    _fa = (uint32_t)(MEM16(esi + 0x212)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 0x212), 0 (16-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_001F49F8; /* jg: greater (signed >) */

loc_001F48B6: ;
    eax = MEM32(esi + 0xB8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F48E5; /* je: equal / zero */

loc_001F48C0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x001F48C7u); RECOMP_ABI_CALL(0x001836C0u, sub_001836C0); /* call 0x001836C0 */

loc_001F48C7: ;
    ecx = MEM32(esi + 0xB8);
    edx = ZX16(MEM16(ecx + 0xB8));
    ecx = MEM32(eax + 0x314);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_001F49F8; /* jb: below (unsigned <) */

loc_001F48E5: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x001F48ECu); RECOMP_ABI_CALL(0x0015A430u, sub_0015A430); /* call 0x0015A430 */

loc_001F48EC: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x64;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x50) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x50 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001F49F8; /* jl: less (signed <) */

loc_001F4900: ;
    edx = MEM32(esi + 0xC4);
    eax = MEM32(esi + 0xBC);
    PUSH32(esp, ebx);
    PUSH32(esp, 0xB4);
    PUSH32(esp, 0x384);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    PUSH32(esp, 0x001F4920u); RECOMP_ABI_CALL(0x00155270u, sub_00155270); /* call 0x00155270 */

loc_001F4920: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F4958; /* je: equal / zero */

loc_001F4927: ;
    SET_LO16(ecx, (uint32_t)(int32_t)SMEM8(esi + 0x219));
    edx = MEM32(esi + 0xBC);
    eax = (uint32_t)(int32_t)SMEM16(edx + 0xD0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x90);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001F4948u); RECOMP_ABI_CALL(0x0019B8C0u, sub_0019B8C0); /* call 0x0019B8C0 */

loc_001F4948: ;
    edi = eax;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x40 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F49F7; /* je: equal / zero */

loc_001F4956: ;
    SET_LO8(ebx, 1);

loc_001F4958: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x001F495Fu); RECOMP_ABI_CALL(0x001836C0u, sub_001836C0); /* call 0x001836C0 */

loc_001F495F: ;
    SET_LO8(ecx, MEM8(eax + 0x328));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F49F7; /* jne: not equal / not zero */

loc_001F4970: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F499D; /* jne: not equal / not zero */

loc_001F4974: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x40); PUSH32(esp, 0x001F497Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001F4978u); } /* indirect call */
    }

loc_001F497B: ;
    SET_LO16(ecx, (uint32_t)(int32_t)SMEM8(esi + 0x219));
    edx = MEM32(esi + 0xBC);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    eax = (uint32_t)(int32_t)SMEM16(edx + 0xD0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001F4998u); RECOMP_ABI_CALL(0x0019B8C0u, sub_0019B8C0); /* call 0x0019B8C0 */

loc_001F4998: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = eax;

loc_001F499D: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x40 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F49F7; /* je: equal / zero */

loc_001F49A2: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x29) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x29 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_LE(_fas, _fbs)) goto loc_001F49B3; /* jle: less or equal (signed <=) */

loc_001F49A8: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x48); PUSH32(esp, 0x001F49AFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001F49ACu); } /* indirect call */
    }

loc_001F49AF: ;
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001F49B3: ;
    eax = MEM32(esi + 0xBC);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 0xD0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001F49C6u); RECOMP_ABI_CALL(0x0019BBB0u, sub_0019BBB0); /* call 0x0019BBB0 */

loc_001F49C6: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x001F49CDu); RECOMP_ABI_CALL(0x001836C0u, sub_001836C0); /* call 0x001836C0 */

loc_001F49CD: ;
    MEM32(eax + 0x314) = 0;
    SET_LO16(edx, MEM16(esi + 0x210));
    eax = MEM32(esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(esi + 0x21C) = MEM16(esi + 0x21C) + 1;
    _fa = (uint32_t)(MEM16(esi + 0x21C)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esi;
    MEM16(esi + 0x212) = LO16(edx);
    { uint32_t _icall_target = MEM32(eax + 0x48); PUSH32(esp, 0x001F49F7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001F49F4u); } /* indirect call */
    }

loc_001F49F7: ;
    POP32(esp, ebx);

loc_001F49F8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001F4A00
 * Original: 0x001F4A00 - 0x001F4D37 (823 bytes, 295 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F4A00(void)
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

loc_001F4A00: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    eax = esp + 8;
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x001F4A10u); RECOMP_ABI_CALL(0x0018EB00u, sub_0018EB00); /* call 0x0018EB00 */

loc_001F4A10: ;
    ecx = MEM32(esi + 0xC4);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x001F4A1Eu); RECOMP_ABI_CALL(0x0018EB60u, sub_0018EB60); /* call 0x0018EB60 */

loc_001F4A1E: ;
    ecx = esi;
    PUSH32(esp, 0x001F4A25u); RECOMP_ABI_CALL(0x0018F5B0u, sub_0018F5B0); /* call 0x0018F5B0 */

loc_001F4A25: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F4A33; /* je: equal / zero */

loc_001F4A29: ;
    eax = 0x2A;
    POP32(esp, esi);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001F4A33: ;
    edx = MEM32(esi + 0xBC);
    eax = MEM32(edx + 0x16C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F4A59; /* je: equal / zero */

loc_001F4A44: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F4A59; /* je: equal / zero */

loc_001F4A49: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    ecx = esi + 0x54;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001F4A57u); RECOMP_ABI_CALL(0x00170C00u, sub_00170C00); /* call 0x00170C00 */

loc_001F4A57: ;
    goto loc_001F4A67;

loc_001F4A59: ;
    edx = esp + 8;
    PUSH32(esp, edx);
    eax = esi + 0x54;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001F4A67u); RECOMP_ABI_CALL(0x00170BD0u, sub_00170BD0); /* call 0x00170BD0 */

loc_001F4A67: ;
    eax = ZX16(MEM16(esi + 0x214));
    ecx = eax;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)eax);
    MEM32(esp + 0xC) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    fp_push((double)SMEM32(esp + 8)); /* fild */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fcompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001F4A90; /* jp: parity */

loc_001F4A8A: ;
    fp_pop(); /* fstp st(0) */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_001F4AB9;

loc_001F4A90: ;
    eax = ZX16(MEM16(esi + 0x216));
    edx = eax;
    edx = (uint32_t)((int32_t)edx * (int32_t)eax);
    MEM32(esp + 8) = edx;
    edi = 1;
    fp_push((double)SMEM32(esp + 8)); /* fild */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fcompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_001F4AB9; /* jnp: not parity */

loc_001F4AB4: ;
    edi = 2;

loc_001F4AB9: ;
    eax = MEM32(esi + 0xC4);
    ecx = MEM32(eax + 0x31C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F4D2C; /* je: equal / zero */

loc_001F4ACD: ;
    ecx = MEM32(esi + 0xBC);
    ecx = (uint32_t)(int32_t)SMEM16(ecx + 0xD0);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x3238);
    _fb = (uint32_t)(0x5CE880) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x5CE880;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x001F4AEBu); RECOMP_ABI_CALL(0x0015DA30u, sub_0015DA30); /* call 0x0015DA30 */

loc_001F4AEB: ;
    edx = MEM32(esi + 0xBC);
    fp_top() = RECOMP_FP_PC(MEMF(esp + 0x10) - fp_top()); /* fsubr dword ptr [esp + 0x10] */
    ecx = MEM32(edx + 0x16C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 2 (32-bit) */
    fp_top() = fabs(fp_top()); /* fabs */
    if (CMP_EQ(_fa, _fb)) goto loc_001F4B07; /* je: equal / zero */

loc_001F4B02: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F4B4A; /* jne: not equal / not zero */

loc_001F4B07: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esi + 0x58)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esi + 0x58] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F4B4A; /* jne: not equal / not zero */

loc_001F4B15: ;
    fp_pop(); /* fstp st(0) */
    eax = SX16(LO16(edi));

loc_001F4B1A: ;
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_001F4B3F; /* je: equal / zero */

loc_001F4B1F: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_001F4B34; /* je: equal / zero */

loc_001F4B22: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001F4D2C; /* jne: not equal / not zero */

loc_001F4B29: ;
    POP32(esp, edi);
    eax = 0x2D;
    POP32(esp, esi);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001F4B34: ;
    POP32(esp, edi);
    eax = 0x2C;
    POP32(esp, esi);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001F4B3F: ;
    POP32(esp, edi);
    eax = 0x2B;
    POP32(esp, esi);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001F4B4A: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F4B54; /* je: equal / zero */

loc_001F4B4F: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F4BA9; /* jne: not equal / not zero */

loc_001F4B54: ;
    edx = MEM32(edx + 0x154);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x64);
    MEM32(esp + 8) = edx;
    fp_push((double)SMEM32(esp + 8)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x49F28C)); /* fmul dword ptr [0x49f28c] */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fcompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F4BAB; /* jne: not equal / not zero */

loc_001F4B76: ;
    eax = SX16(LO16(edi));
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_001F4B9E; /* je: equal / zero */

loc_001F4B7E: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_001F4B93; /* je: equal / zero */

loc_001F4B81: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001F4D2C; /* jne: not equal / not zero */

loc_001F4B88: ;
    POP32(esp, edi);
    eax = 0x30;
    POP32(esp, esi);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001F4B93: ;
    POP32(esp, edi);
    eax = 0x2F;
    POP32(esp, esi);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001F4B9E: ;
    POP32(esp, edi);
    eax = 0x2E;
    POP32(esp, esi);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001F4BA9: ;
    fp_pop(); /* fstp st(0) */

loc_001F4BAB: ;
    eax = MEM32(esi + 0xC4);
    ecx = MEM32(eax + 0x31C);
    PUSH32(esp, 0x001F4BBCu); RECOMP_ABI_CALL(0x0015DF50u, sub_0015DF50); /* call 0x0015DF50 */

loc_001F4BBC: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F4C2B; /* je: equal / zero */

loc_001F4BC0: ;
    ecx = MEM32(esi + 0xBC);
    eax = MEM32(ecx + 0x16C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F4C2B; /* je: equal / zero */

loc_001F4BD1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F4C2B; /* je: equal / zero */

loc_001F4BD6: ;
    esi = MEM32(esi + 0xB4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    eax = SX16(LO16(edi));
    if (CMP_EQ(_fa, _fb)) goto loc_001F4B1A; /* je: equal / zero */

loc_001F4BE7: ;
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_001F4C1A; /* je: equal / zero */

loc_001F4BEC: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_001F4C07; /* je: equal / zero */

loc_001F4BEF: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001F4D2C; /* jne: not equal / not zero */

loc_001F4BF6: ;
    edx = MEM32(esi + 4);
    esi = MEM32(esi + edx * 4 + 0x3C);
    POP32(esp, edi);
    eax = esi + esi * 2 + 0x58;
    POP32(esp, esi);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001F4C07: ;
    eax = MEM32(esi + 4);
    esi = MEM32(esi + eax * 4 + 0x3C);
    _fb = (uint32_t)(0x1D) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x1D;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    eax = esi + esi * 2;
    POP32(esp, esi);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001F4C1A: ;
    ecx = MEM32(esi + 4);
    esi = MEM32(esi + ecx * 4 + 0x3C);
    POP32(esp, edi);
    eax = esi + esi * 2 + 0x56;
    POP32(esp, esi);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001F4C2B: ;
    edx = MEM32(esi + 0xC4);
    ecx = MEM32(edx + 0x31C);
    PUSH32(esp, 0x001F4C3Cu); RECOMP_ABI_CALL(0x0015DFF0u, sub_0015DFF0); /* call 0x0015DFF0 */

loc_001F4C3C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F4C73; /* je: equal / zero */

loc_001F4C40: ;
    eax = SX16(LO16(edi));
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_001F4C68; /* je: equal / zero */

loc_001F4C48: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_001F4C5D; /* je: equal / zero */

loc_001F4C4B: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001F4D2C; /* jne: not equal / not zero */

loc_001F4C52: ;
    POP32(esp, edi);
    eax = 0x36;
    POP32(esp, esi);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001F4C5D: ;
    POP32(esp, edi);
    eax = 0x35;
    POP32(esp, esi);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001F4C68: ;
    POP32(esp, edi);
    eax = 0x34;
    POP32(esp, esi);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001F4C73: ;
    eax = MEM32(esi + 0xC4);
    eax = MEM32(eax + 0x31C);
    PUSH32(esp, eax);
    ecx = 0x699E20;
    PUSH32(esp, 0x001F4C8Au); RECOMP_ABI_CALL(0x00199AB0u, sub_00199AB0); /* call 0x00199AB0 */

loc_001F4C8A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    eax = SX16(LO16(edi));
    if (CMP_EQ(_fa, _fb)) goto loc_001F4CC1; /* je: equal / zero */

loc_001F4C91: ;
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_001F4CB6; /* je: equal / zero */

loc_001F4C96: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_001F4CAB; /* je: equal / zero */

loc_001F4C99: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001F4D2C; /* jne: not equal / not zero */

loc_001F4CA0: ;
    POP32(esp, edi);
    eax = 0x33;
    POP32(esp, esi);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001F4CAB: ;
    POP32(esp, edi);
    eax = 0x32;
    POP32(esp, esi);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001F4CB6: ;
    POP32(esp, edi);
    eax = 0x31;
    POP32(esp, esi);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001F4CC1: ;
    esi = MEM32(esi + 0xB4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F4D0B; /* je: equal / zero */

loc_001F4CCB: ;
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_001F4CFA; /* je: equal / zero */

loc_001F4CD0: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_001F4CE7; /* je: equal / zero */

loc_001F4CD3: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001F4D2C; /* jne: not equal / not zero */

loc_001F4CD6: ;
    ecx = MEM32(esi + 4);
    esi = MEM32(esi + ecx * 4 + 0x3C);
    POP32(esp, edi);
    eax = esi + esi * 2 + 0x40;
    POP32(esp, esi);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001F4CE7: ;
    edx = MEM32(esi + 4);
    esi = MEM32(esi + edx * 4 + 0x3C);
    _fb = (uint32_t)(0x15) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x15;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    eax = esi + esi * 2;
    POP32(esp, esi);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001F4CFA: ;
    eax = MEM32(esi + 4);
    esi = MEM32(esi + eax * 4 + 0x3C);
    POP32(esp, edi);
    eax = esi + esi * 2 + 0x3E;
    POP32(esp, esi);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001F4D0B: ;
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_001F4D2C; /* je: equal / zero */

loc_001F4D10: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_001F4D21; /* je: equal / zero */

loc_001F4D13: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001F4D2C; /* jne: not equal / not zero */

loc_001F4D16: ;
    POP32(esp, edi);
    eax = 0x29;
    POP32(esp, esi);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001F4D21: ;
    POP32(esp, edi);
    eax = 0x28;
    POP32(esp, esi);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001F4D2C: ;
    POP32(esp, edi);
    eax = 0x27;
    POP32(esp, esi);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001F4D40
 * Original: 0x001F4D40 - 0x001F4E63 (291 bytes, 100 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F4D40(void)
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

loc_001F4D40: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xC4);
    ecx = MEM32(eax + 0x31C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F4D69; /* je: equal / zero */

loc_001F4D56: ;
    PUSH32(esp, 0x001F4D5Bu); RECOMP_ABI_CALL(0x0015DFF0u, sub_0015DFF0); /* call 0x0015DFF0 */

loc_001F4D5B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F4D69; /* je: equal / zero */

loc_001F4D5F: ;
    eax = 0x94;
    POP32(esp, esi);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001F4D69: ;
    ecx = esp + 8;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x001F4D75u); RECOMP_ABI_CALL(0x0018EB00u, sub_0018EB00); /* call 0x0018EB00 */

loc_001F4D75: ;
    edx = MEM32(esi + 0xBC);
    eax = MEM32(edx + 0x16C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F4D9B; /* je: equal / zero */

loc_001F4D86: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F4D9B; /* je: equal / zero */

loc_001F4D8B: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    ecx = esi + 0x54;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001F4D99u); RECOMP_ABI_CALL(0x00170C00u, sub_00170C00); /* call 0x00170C00 */

loc_001F4D99: ;
    goto loc_001F4DA9;

loc_001F4D9B: ;
    edx = esp + 8;
    PUSH32(esp, edx);
    eax = esi + 0x54;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001F4DA9u); RECOMP_ABI_CALL(0x00170BD0u, sub_00170BD0); /* call 0x00170BD0 */

loc_001F4DA9: ;
    eax = ZX16(MEM16(esi + 0x214));
    ecx = eax;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)eax);
    MEM32(esp + 0xC) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    fp_push((double)SMEM32(esp + 8)); /* fild */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fcompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001F4DD5; /* jp: parity */

loc_001F4DCC: ;
    fp_pop(); /* fstp st(0) */
    edi = 0x22;
    goto loc_001F4E20;

loc_001F4DD5: ;
    eax = ZX16(MEM16(esi + 0x216));
    edx = eax;
    edx = (uint32_t)((int32_t)edx * (int32_t)eax);
    MEM32(esp + 8) = edx;
    fp_push((double)SMEM32(esp + 8)); /* fild */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fcompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001F4DFD; /* jp: parity */

loc_001F4DF4: ;
    fp_pop(); /* fstp st(0) */
    edi = 0x23;
    goto loc_001F4E20;

loc_001F4DFD: ;
    eax = MEM32(esi + 0x1DC);
    ecx = eax;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)eax);
    MEM32(esp + 8) = ecx;
    fp_push((double)SMEM32(esp + 8)); /* fild */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fcompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001F4E4C; /* jp: parity */

loc_001F4E1B: ;
    edi = 0x24;

loc_001F4E20: ;
    edx = MEM32(esi + 0xC4);
    ecx = MEM32(edx + 0x31C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F4E44; /* je: equal / zero */

loc_001F4E30: ;
    PUSH32(esp, 0x001F4E35u); RECOMP_ABI_CALL(0x0015DF50u, sub_0015DF50); /* call 0x0015DF50 */

loc_001F4E35: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F4E44; /* je: equal / zero */

loc_001F4E39: ;
    POP32(esp, edi);
    eax = 0x93;
    POP32(esp, esi);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001F4E44: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001F4E4C: ;
    edx = MEM32(esi + 0x1DC);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xFFFFFFFFu (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x24;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001F4E70
 * Original: 0x001F4E70 - 0x001F50D4 (612 bytes, 199 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F4E70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F4E70: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0xFFFFFFE5u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFE5u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1A (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_A(_fa, _fb)) goto loc_001F50D0; /* ja: above (unsigned >) */

loc_001F4E83: ;
    eax = ZX8(MEM8(eax + 0x1F5108));
    PUSH32(esp, edi);
    { uint32_t _jt = MEM32(eax * 4 + 0x1F50D4); /* switch: 13 entries, 13 targets */
    if (_jt == 0x001F4E92u) goto loc_001F4E92;
    if (_jt == 0x001F4EBCu) goto loc_001F4EBC;
    if (_jt == 0x001F4EF3u) goto loc_001F4EF3;
    if (_jt == 0x001F4F1Eu) goto loc_001F4F1E;
    if (_jt == 0x001F4F40u) goto loc_001F4F40;
    if (_jt == 0x001F4F6Bu) goto loc_001F4F6B;
    if (_jt == 0x001F4FAEu) goto loc_001F4FAE;
    if (_jt == 0x001F501Au) goto loc_001F501A;
    if (_jt == 0x001F5028u) goto loc_001F5028;
    if (_jt == 0x001F504Bu) goto loc_001F504B;
    if (_jt == 0x001F5072u) goto loc_001F5072;
    if (_jt == 0x001F5085u) goto loc_001F5085;
    if (_jt == 0x001F50CFu) goto loc_001F50CF;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_001F4E92: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(esi + 0xEA));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0 (16-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001F50CF; /* jle: less or equal (signed <=) */

loc_001F4EA4: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(ecx, MEM16(esi + 0xEC));
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001F4EB7u); RECOMP_ABI_CALL(0x001911D0u, sub_001911D0); /* call 0x001911D0 */

loc_001F4EB7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_001F4EBC: ;
    SET_LO16(eax, MEM16(esi + 0xEA));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0 (16-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001F50CF; /* jle: less or equal (signed <=) */

loc_001F4ECC: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 1 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F4ED6; /* jne: not equal / not zero */

loc_001F4ED2: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_001F4EDC;

loc_001F4ED6: ;
    eax = SX16(LO16(eax));
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_001F4EDC: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(edx, MEM16(esi + 0xEC));
    ecx = esi;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001F4EEEu); RECOMP_ABI_CALL(0x001911D0u, sub_001911D0); /* call 0x001911D0 */

loc_001F4EEE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_001F4EF3: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(esi + 0xEA));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(3) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 3 (16-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001F50CF; /* jge: greater or equal (signed >=) */

loc_001F4F06: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(ecx, MEM16(esi + 0xEC));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001F4F19u); RECOMP_ABI_CALL(0x001911D0u, sub_001911D0); /* call 0x001911D0 */

loc_001F4F19: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_001F4F1E: ;
    SET_LO16(eax, MEM16(esi + 0xEA));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(3) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 3 (16-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001F50CF; /* jge: greater or equal (signed >=) */

loc_001F4F2F: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(2) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 2 (16-bit) */
    eax = SX16(LO16(eax));
    if (CMP_GE(_fas, _fbs)) goto loc_001F4F3D; /* jge: greater or equal (signed >=) */

loc_001F4F38: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_001F4EDC;

loc_001F4F3D: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_001F4EDC;

loc_001F4F40: ;
    eax = (uint32_t)(int32_t)SMEM16(esi + 0xEC);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = eax & 0x80000007u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fas >= 0)) goto loc_001F4F54; /* jns: not sign (positive) */

loc_001F4F4F: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax | 0xFFFFFFF8u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001F4F54: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(ecx, MEM16(esi + 0xEA));
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x001F4F66u); RECOMP_ABI_CALL(0x001911D0u, sub_001911D0); /* call 0x001911D0 */

loc_001F4F66: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_001F4F6B: ;
    SET_LO16(eax, MEM16(esi + 0xEC));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F4F93; /* jne: not equal / not zero */

loc_001F4F77: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(edx, MEM16(esi + 0xEA));
    eax = 7;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, edx);
    PUSH32(esp, 0x001F4F8Eu); RECOMP_ABI_CALL(0x001911D0u, sub_001911D0); /* call 0x001911D0 */

loc_001F4F8E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_001F4F93: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(edx, MEM16(esi + 0xEA));
    eax = SX16(LO16(eax));
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, edx);
    PUSH32(esp, 0x001F4FA9u); RECOMP_ABI_CALL(0x001911D0u, sub_001911D0); /* call 0x001911D0 */

loc_001F4FA9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_001F4FAE: ;
    eax = MEM32(esi + 0xBC);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 0xD0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001F4FC1u); RECOMP_ABI_CALL(0x0019BB90u, sub_0019BB90); /* call 0x0019BB90 */

loc_001F4FC1: ;
    edx = MEM32(esi);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x400);
    ecx = esi;
    edi = eax;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x001F4FD2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001F4FCFu); } /* indirect call */
    }

loc_001F4FD2: ;
    PUSH32(esp, 0x20000);
    ecx = esi;
    PUSH32(esp, 0x001F4FDEu); RECOMP_ABI_CALL(0x00195F10u, sub_00195F10); /* call 0x00195F10 */

loc_001F4FDE: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F500B; /* jne: not equal / not zero */

loc_001F4FE3: ;
    eax = (uint32_t)(int32_t)SMEM16(esi + 0xEC);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001F4FF2u); RECOMP_ABI_CALL(0x00190330u, sub_00190330); /* call 0x00190330 */

loc_001F4FF2: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(ecx, MEM16(esi + 0xEA));
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x001F5004u); RECOMP_ABI_CALL(0x001911D0u, sub_001911D0); /* call 0x001911D0 */

loc_001F5004: ;
    ecx = esi;
    PUSH32(esp, 0x001F500Bu); RECOMP_ABI_CALL(0x0018F8B0u, sub_0018F8B0); /* call 0x0018F8B0 */

loc_001F500B: ;
    ecx = esi;
    MEM32(esi + 0x40) = edi;
    PUSH32(esp, 0x001F5015u); RECOMP_ABI_CALL(0x0018F9E0u, sub_0018F9E0); /* call 0x0018F9E0 */

loc_001F5015: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_001F501A: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x15);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x001F5023u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001F5020u); } /* indirect call */
    }

loc_001F5023: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_001F5028: ;
    eax = MEM32(esi + 0xBC);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 0xD0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001F503Bu); RECOMP_ABI_CALL(0x0019BB90u, sub_0019BB90); /* call 0x0019BB90 */

loc_001F503B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001F5046u); RECOMP_ABI_CALL(0x00190150u, sub_00190150); /* call 0x00190150 */

loc_001F5046: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_001F504B: ;
    edx = MEM32(esi + 0xBC);
    eax = (uint32_t)(int32_t)SMEM16(edx + 0xD0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001F505Eu); RECOMP_ABI_CALL(0x0019BB90u, sub_0019BB90); /* call 0x0019BB90 */

loc_001F505E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x001F506Au); RECOMP_ABI_CALL(0x001F46F0u, sub_001F46F0); /* call 0x001F46F0 */

loc_001F506A: ;
    MEM32(esi + 0x40) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_001F5072: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x44); PUSH32(esp, 0x001F5079u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001F5076u); } /* indirect call */
    }

loc_001F5079: ;
    SET_LO16(ecx, (uint32_t)(int32_t)SMEM8(esi + 0x219));
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    goto loc_001F5093;

loc_001F5085: ;
    SET_LO16(ecx, (uint32_t)(int32_t)SMEM8(esi + 0x219));
    PUSH32(esp, ecx);
    PUSH32(esp, 0x8C);

loc_001F5093: ;
    edx = MEM32(esi + 0xBC);
    eax = (uint32_t)(int32_t)SMEM16(edx + 0xD0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001F50A6u); RECOMP_ABI_CALL(0x0019B8C0u, sub_0019B8C0); /* call 0x0019B8C0 */

loc_001F50A6: ;
    edi = eax;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x29) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x29 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001F50C7; /* jge: greater or equal (signed >=) */

loc_001F50B0: ;
    ecx = MEM32(esi + 0xBC);
    edx = (uint32_t)(int32_t)SMEM16(ecx + 0xD0);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001F50C4u); RECOMP_ABI_CALL(0x0019BBB0u, sub_0019BBB0); /* call 0x0019BBB0 */

loc_001F50C4: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001F50C7: ;
    eax = MEM32(esi);
    ecx = esi;
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x48); PUSH32(esp, 0x001F50CFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001F50CCu); } /* indirect call */
    }

loc_001F50CF: ;
    POP32(esp, edi);

loc_001F50D0: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001F5130
 * Original: 0x001F5130 - 0x001F5250 (288 bytes, 100 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F5130(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F5130: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F5162; /* je: equal / zero */

loc_001F513A: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x001F5140u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001F513Du); } /* indirect call */
    }

loc_001F5140: ;
    eax = MEM32(esi + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    MEM32(esi + 0x38) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_001F515E; /* je: equal / zero */

loc_001F514F: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x001F5157u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001F5154u); } /* indirect call */
    }

loc_001F5157: ;
    MEM32(esi + 0x2C) = 1;

loc_001F515E: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001F5162: ;
    eax = MEM32(esi + 0xC4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F51B5; /* je: equal / zero */

loc_001F516C: ;
    ecx = esi;
    PUSH32(esp, 0x001F5173u); RECOMP_ABI_CALL(0x0018F5B0u, sub_0018F5B0); /* call 0x0018F5B0 */

loc_001F5173: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F51B5; /* je: equal / zero */

loc_001F5177: ;
    PUSH32(esp, 0x20000);
    ecx = esi;
    PUSH32(esp, 0x001F5183u); RECOMP_ABI_CALL(0x00195F10u, sub_00195F10); /* call 0x00195F10 */

loc_001F5183: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F51A1; /* je: equal / zero */

loc_001F5188: ;
    SET_LO16(eax, MEM16(esi + 0x1E4));
    ecx = esi;
    MEM16(esi + 0x1CE) = LO16(eax);
    PUSH32(esp, 0x001F519Du); RECOMP_ABI_CALL(0x00190D20u, sub_00190D20); /* call 0x00190D20 */

loc_001F519D: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001F51A1: ;
    ecx = esi;
    MEM16(esi + 0x1CE) = 0xB4;
    PUSH32(esp, 0x001F51B1u); RECOMP_ABI_CALL(0x00190D20u, sub_00190D20); /* call 0x00190D20 */

loc_001F51B1: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001F51B5: ;
    _fa = (uint32_t)(MEM16(esi + 0x21C)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 0x21C), 0 (16-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001F5248; /* jle: less or equal (signed <=) */

loc_001F51C3: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x001F51CAu); RECOMP_ABI_CALL(0x0015A430u, sub_0015A430); /* call 0x0015A430 */

loc_001F51CA: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x64;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x218);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001F5248; /* jge: greater or equal (signed >=) */

loc_001F51E0: ;
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0xEC);
    edx = (uint32_t)(int32_t)SMEM16(esi + 0xEA);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x001F51F7u); RECOMP_ABI_CALL(0x001915D0u, sub_001915D0); /* call 0x001915D0 */

loc_001F51F7: ;
    PUSH32(esp, 0x20000);
    ecx = esi;
    PUSH32(esp, 0x001F5203u); RECOMP_ABI_CALL(0x00195F10u, sub_00195F10); /* call 0x00195F10 */

loc_001F5203: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F5231; /* je: equal / zero */

loc_001F5208: ;
    ecx = MEM32(esi + 0xC4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    edi = esi + 0x54;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x001F5218u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001F5215u); } /* indirect call */
    }

loc_001F5218: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x001F5220u); RECOMP_ABI_CALL(0x0018EB10u, sub_0018EB10); /* call 0x0018EB10 */

loc_001F5220: ;
    edx = MEM32(esi);
    POP32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x400);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x001F522Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001F522Au); } /* indirect call */
    }

loc_001F522D: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001F5231: ;
    ecx = esi;
    PUSH32(esp, 0x001F5238u); RECOMP_ABI_CALL(0x0018F8B0u, sub_0018F8B0); /* call 0x0018F8B0 */

loc_001F5238: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x400);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x001F5244u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001F5241u); } /* indirect call */
    }

loc_001F5244: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001F5248: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001F5250
 * Original: 0x001F5250 - 0x001F5251 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F5250(void)
{

loc_001F5250: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001F5260
 * Original: 0x001F5260 - 0x001F5265 (5 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F5260(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F5260: ;
    g_seh_ebp = ebp; sub_00190B90(); return; /* tail jmp 0x00190B90 */

}

/**
 * sub_001F5270
 * Original: 0x001F5270 - 0x001F5366 (246 bytes, 82 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F5270(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F5270: ;
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x50;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    ecx = MEM32(esi + 0xB8);
    PUSH32(esp, 0x2000);
    PUSH32(esp, 0);
    PUSH32(esp, 0x001F528Au); RECOMP_ABI_CALL(0x0019C570u, sub_0019C570); /* call 0x0019C570 */

loc_001F528A: ;
    ecx = MEM32(esi + 0xB8);
    edi = eax;
    PUSH32(esp, 0x2000);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001F529Du); RECOMP_ABI_CALL(0x0019C570u, sub_0019C570); /* call 0x0019C570 */

loc_001F529D: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F535D; /* je: equal / zero */

loc_001F52A7: ;
    ecx = MEM32(esi + 0xBC);
    edx = MEM32(ecx + 0x31C);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0xFFFFFFFFu);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001F52C4u); RECOMP_ABI_CALL(0x00107EE0u, sub_00107EE0); /* call 0x00107EE0 */

loc_001F52C4: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0xC47A0000u);
    PUSH32(esp, 0);
    eax = esp + 0x2C;
    PUSH32(esp, 0x44BB8000);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001F52DFu); RECOMP_ABI_CALL(0x0015BB60u, sub_0015BB60); /* call 0x0015BB60 */

loc_001F52DF: ;
    ecx = esp + 0x34;
    PUSH32(esp, ecx);
    edx = esp + 0x48;
    PUSH32(esp, edx);
    eax = ecx;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001F52F1u); RECOMP_ABI_CALL(0x00170900u, sub_00170900); /* call 0x00170900 */

loc_001F52F1: ;
    ecx = MEM32(edi + 0xBC);
    edx = MEM32(ecx);
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x001F5304u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001F5301u); } /* indirect call */
    }

loc_001F5304: ;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0xC47A0000u);
    PUSH32(esp, 0);
    ecx = esp + 0x18;
    PUSH32(esp, 0xC4BB8000u);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001F531Fu); RECOMP_ABI_CALL(0x0015BB60u, sub_0015BB60); /* call 0x0015BB60 */

loc_001F531F: ;
    edx = esp + 0x20;
    PUSH32(esp, edx);
    eax = esp + 0x34;
    PUSH32(esp, eax);
    ecx = edx;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001F5331u); RECOMP_ABI_CALL(0x00170900u, sub_00170900); /* call 0x00170900 */

loc_001F5331: ;
    ecx = MEM32(ebx + 0xBC);
    edx = MEM32(ecx);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x001F5344u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001F5341u); } /* indirect call */
    }

loc_001F5344: ;
    PUSH32(esp, 0x5C);
    ecx = esi;
    MEM32(esi + 0x3C) = 0;
    PUSH32(esp, 0x001F5354u); RECOMP_ABI_CALL(0x00190150u, sub_00190150); /* call 0x00190150 */

loc_001F5354: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x50;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001F535D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x50;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001F5370
 * Original: 0x001F5370 - 0x001F5496 (294 bytes, 88 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F5370(void)
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

loc_001F5370: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x001F537Bu); RECOMP_ABI_CALL(0x001912B0u, sub_001912B0); /* call 0x001912B0 */

loc_001F537B: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F5385; /* jne: not equal / not zero */

loc_001F5380: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001F5385: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(esi + 0x212));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0 (16-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001F539B; /* jle: less or equal (signed <=) */

loc_001F5393: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM16(esi + 0x212) = LO16(eax);

loc_001F539B: ;
    PUSH32(esp, 0x100);
    ecx = esi;
    PUSH32(esp, 0x001F53A7u); RECOMP_ABI_CALL(0x00195F30u, sub_00195F30); /* call 0x00195F30 */

loc_001F53A7: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0 (16-bit) */
    ecx = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_001F53B5; /* je: equal / zero */

loc_001F53AE: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x3C); PUSH32(esp, 0x001F53B3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001F53B0u); } /* indirect call */
    }

loc_001F53B3: ;
    goto loc_001F53FA;

loc_001F53B5: ;
    PUSH32(esp, 0x40000000);
    PUSH32(esp, 0x001F53BFu); RECOMP_ABI_CALL(0x00195F30u, sub_00195F30); /* call 0x00195F30 */

loc_001F53BF: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F53FA; /* je: equal / zero */

loc_001F53C4: ;
    ecx = MEM32(esi + 0x1F0);
    edx = MEM32(esi + 0xC4);
    PUSH32(esp, 0xA);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0xBC);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001F53DFu); RECOMP_ABI_CALL(0x001546E0u, sub_001546E0); /* call 0x001546E0 */

loc_001F53DF: ;
    eax = MEM32(esi + 0x3C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x40)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x40) (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001F53FA; /* jbe: below or equal (unsigned <=) */

loc_001F53E7: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x100);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x001F53F3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001F53F0u); } /* indirect call */
    }

loc_001F53F3: ;
    ecx = esi;
    PUSH32(esp, 0x001F53FAu); RECOMP_ABI_CALL(0x001F46F0u, sub_001F46F0); /* call 0x001F46F0 */

loc_001F53FA: ;
    PUSH32(esp, 0x400);
    ecx = esi;
    PUSH32(esp, 0x001F5406u); RECOMP_ABI_CALL(0x00195F30u, sub_00195F30); /* call 0x00195F30 */

loc_001F5406: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F5419; /* jne: not equal / not zero */

loc_001F540B: ;
    PUSH32(esp, 0x40);
    ecx = esi;
    PUSH32(esp, 0x001F5414u); RECOMP_ABI_CALL(0x00195F30u, sub_00195F30); /* call 0x00195F30 */

loc_001F5414: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F5473; /* je: equal / zero */

loc_001F5419: ;
    ecx = MEM32(esi + 0xBC);
    _fa = (uint32_t)(MEM16(ecx + 0x318)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 0x318), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F5473; /* jne: not equal / not zero */

loc_001F5429: ;
    _fa = (uint32_t)(MEM16(esi + 0x212)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 0x212), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F5473; /* jne: not equal / not zero */

loc_001F5433: ;
    eax = MEM32(ecx);
    edx = esp + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x001F543Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001F543Au); } /* indirect call */
    }

loc_001F543D: ;
    ecx = MEM32(esi + 0xC4);
    eax = MEM32(ecx);
    edx = esp + 0x14;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x001F544Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001F544Au); } /* indirect call */
    }

loc_001F544D: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001F545Cu); RECOMP_ABI_CALL(0x0015C2C0u, sub_0015C2C0); /* call 0x0015C2C0 */

loc_001F545C: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x4B34AC)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x4b34ac] */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001F5473; /* jp: parity */

loc_001F546C: ;
    ecx = esi;
    PUSH32(esp, 0x001F5473u); RECOMP_ABI_CALL(0x001F4750u, sub_001F4750); /* call 0x001F4750 */

loc_001F5473: ;
    edx = MEM32(esi + 0xBC);
    eax = MEM32(edx + 0x31C);
    SET_LO16(ecx, MEM16(eax + 0x2424));
    MEM16(esi + 0x21A) = LO16(ecx);
    SET_LO16(eax, 1);
    POP32(esp, esi);
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
 * sub_001F54A0
 * Original: 0x001F54A0 - 0x001F5535 (149 bytes, 48 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F54A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F54A0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x8000 (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_001F54CC; /* jne: not equal / not zero */

loc_001F54B0: ;
    SET_LO16(eax, MEM16(esi + 0x210));
    SET_LO16(ecx, MEM16(esi + 0x1E4));
    MEM16(esi + 0x212) = LO16(eax);
    MEM16(esi + 0x1CE) = LO16(ecx);

loc_001F54CC: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F54D9; /* jne: not equal / not zero */

loc_001F54D1: ;
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x001F54D9u); RECOMP_ABI_CALL(0x00191740u, sub_00191740); /* call 0x00191740 */

loc_001F54D9: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F551F; /* jne: not equal / not zero */

loc_001F54DE: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x10);
    ecx = esi;
    PUSH32(esp, 0x001F54E9u); RECOMP_ABI_CALL(0x00195F80u, sub_00195F80); /* call 0x00195F80 */

loc_001F54E9: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x40);
    ecx = esi;
    PUSH32(esp, 0x001F54F4u); RECOMP_ABI_CALL(0x00195F80u, sub_00195F80); /* call 0x00195F80 */

loc_001F54F4: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x400);
    ecx = esi;
    PUSH32(esp, 0x001F5502u); RECOMP_ABI_CALL(0x00195F80u, sub_00195F80); /* call 0x00195F80 */

loc_001F5502: ;
    PUSH32(esp, 0x100);
    ecx = esi;
    PUSH32(esp, 0x001F550Eu); RECOMP_ABI_CALL(0x00195F30u, sub_00195F30); /* call 0x00195F30 */

loc_001F550E: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F5530; /* jne: not equal / not zero */

loc_001F5513: ;
    ecx = esi;
    PUSH32(esp, 0x001F551Au); RECOMP_ABI_CALL(0x001F46F0u, sub_001F46F0); /* call 0x001F46F0 */

loc_001F551A: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_001F551F: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x100) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x100 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F5530; /* jne: not equal / not zero */

loc_001F5527: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x10);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x001F5530u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001F552Du); } /* indirect call */
    }

loc_001F5530: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001F5540
 * Original: 0x001F5540 - 0x001F5544 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F5540(void)
{

loc_001F5540: ;
    SET_LO8(eax, MEM8(ecx + 4));
    esp += 4; return; /* ret */

}

/**
 * sub_001F5550
 * Original: 0x001F5550 - 0x001F5554 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F5550(void)
{

loc_001F5550: ;
    eax = MEM32(ecx + 8);
    esp += 4; return; /* ret */

}

/**
 * sub_001F5560
 * Original: 0x001F5560 - 0x001F5568 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F5560(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F5560: ;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 4), 0xFFFFFFFFu (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    esp += 4; return; /* ret */

}

/**
 * sub_001F5570
 * Original: 0x001F5570 - 0x001F5574 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F5570(void)
{

loc_001F5570: ;
    eax = MEM32(ecx + 4);
    esp += 4; return; /* ret */

}

/**
 * sub_001F5580
 * Original: 0x001F5580 - 0x001F5592 (18 bytes, 6 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F5580(void)
{

loc_001F5580: ;
    edx = MEM32(ecx + 8);
    eax = MEM32(esp + 4);
    MEM32(eax) = edx;
    ecx = MEM32(ecx + 0xC);
    MEM32(eax + 4) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001F55A0
 * Original: 0x001F55A0 - 0x001F55B1 (17 bytes, 5 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F55A0(void)
{

loc_001F55A0: ;
    eax = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0xC) = edx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001F55C0
 * Original: 0x001F55C0 - 0x001F55E0 (32 bytes, 10 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F55C0(void)
{

loc_001F55C0: ;
    edx = MEM32(esp + 8);
    eax = ecx;
    ecx = MEM32(esp + 4);
    MEM32(eax + 4) = ecx;
    ecx = MEM32(esp + 0xC);
    MEM32(eax + 8) = edx;
    edx = MEM32(esp + 0x10);
    MEM32(eax + 0xC) = ecx;
    MEM32(eax) = edx;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_001F55F0
 * Original: 0x001F55F0 - 0x001F5603 (19 bytes, 4 insns)
 * CC: cdecl, 1 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_001F55F0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_001F55F0: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x49EF28)); /* fmul dword ptr [0x49ef28] */
    MEMF(ecx + 0xAC) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001F5610
 * Original: 0x001F5610 - 0x001F5633 (35 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F5610(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F5610: ;
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0xA0));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F5631; /* je: equal / zero */

loc_001F561D: ;
    eax = MEM32(esi);
    PUSH32(esp, 0xFFFFFFFBu);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001F5627u); RECOMP_ABI_CALL(0x00011645u, sub_00011645); /* call 0x00011645 */

loc_001F5627: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(esi + 0xA4) = 0;

loc_001F5631: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001F5640
 * Original: 0x001F5640 - 0x001F5663 (35 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F5640(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F5640: ;
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0xA0));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F5661; /* je: equal / zero */

loc_001F564D: ;
    eax = MEM32(esi);
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001F5657u); RECOMP_ABI_CALL(0x00011645u, sub_00011645); /* call 0x00011645 */

loc_001F5657: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(esi + 0xA4) = 1;

loc_001F5661: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001F5670
 * Original: 0x001F5670 - 0x001F5685 (21 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F5670(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F5670: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + 0xA8) = eax;
    MEM8(ecx + 0xA2) = LO8(eax);
    MEM8(ecx + 0xA1) = LO8(eax);
    esp += 4; return; /* ret */

}

/**
 * sub_001F5690
 * Original: 0x001F5690 - 0x001F56E7 (87 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F5690(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F5690: ;
    MEM32(esi) = 0;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(edx) = 0;
    _fa = (uint32_t)(MEM16(ecx + 0xE2)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 0xE2), LO16(eax) (16-bit) */
    PUSH32(esp, edi);
    if (CMP_LE(_fas, _fbs)) goto loc_001F56CF; /* jle: less or equal (signed <=) */

loc_001F56A8: ;
    goto loc_001F56B0;

    /* nop */

loc_001F56B0: ;
    edi = MEM32(ecx + 0xF4);
    edi = (uint32_t)(int32_t)SMEM16(edi + eax * 2);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ecx + 4) (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_001F56CF; /* jg: greater (signed >) */

loc_001F56BF: ;
    MEM32(esi) = eax;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(edx) = eax;
    edi = (uint32_t)(int32_t)SMEM16(ecx + 0xE2);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001F56B0; /* jl: less (signed <) */

loc_001F56CF: ;
    eax = (uint32_t)(int32_t)SMEM16(ecx + 0xE2);
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), eax (32-bit) */
    POP32(esp, edi);
    if (CMP_L(_fas, _fbs)) goto loc_001F56E6; /* jl: less (signed <) */

loc_001F56DB: ;
    eax = MEM32(esi);
    MEM32(edx) = eax;
    MEM32(ecx + 4) = 0;

loc_001F56E6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001F56F0
 * Original: 0x001F56F0 - 0x001F594C (604 bytes, 180 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F56F0(void)
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

loc_001F56F0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x3BCC78);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _fb = (uint32_t)(0x68) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x68;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    ecx = edi;
    edx = esp + 0x10;
    esi = esp + 0xC;
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0xC) = eax;
    PUSH32(esp, 0x001F5724u); RECOMP_ABI_CALL(0x001F5690u, sub_001F5690); /* call 0x001F5690 */

loc_001F5724: ;
    ebp = (uint32_t)(int32_t)SMEM16(edi + 0xEC);
    edx = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0xC);
    eax = MEM32(edi + 0xF0);
    esi = ebp;
    ebp = (uint32_t)((int32_t)ebp * (int32_t)edx);
    esi = (uint32_t)((int32_t)esi * (int32_t)ecx);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(edi + 0xF4);
    ecx = (uint32_t)(int32_t)SMEM16(eax + ecx * 2);
    eax = (uint32_t)(int32_t)SMEM16(eax + edx * 2);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    edx = MEM32(edi + 4);
    MEM32(esp + 0x10) = 0;
    if (CMP_LE(_fas, _fbs)) goto loc_001F577A; /* jle: less or equal (signed <=) */

loc_001F5762: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x10) = edx;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    MEM32(esp + 0xC) = eax;
    fp_top() = RECOMP_FP_PC(fp_top() / (double)SMEM32(esp + 0xC)); /* fidiv dword ptr [esp + 0xc] */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */

loc_001F577A: ;
    _fa = (uint32_t)(MEM8(edi + 0xEE)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi + 0xEE), 1 (8-bit) */
    ebx = MEM32(esp + 0x10);
    if (TEST_Z(_fa, _fb)) goto loc_001F57F3; /* je: equal / zero */

loc_001F5787: ;
    eax = MEM32(esi + 8);
    ecx = MEM32(esi + 4);
    edx = MEM32(esi);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    eax = esp + 0x44;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001F57A1u); RECOMP_ABI_CALL(0x0015BB60u, sub_0015BB60); /* call 0x0015BB60 */

loc_001F57A1: ;
    ecx = MEM32(ebp + 8);
    edx = MEM32(ebp + 4);
    eax = MEM32(ebp);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esp + 0x38;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001F57BCu); RECOMP_ABI_CALL(0x0015BB60u, sub_0015BB60); /* call 0x0015BB60 */

loc_001F57BC: ;
    PUSH32(esp, ebx);
    edx = esp + 0x60;
    PUSH32(esp, edx);
    eax = esp + 0x44;
    PUSH32(esp, eax);
    ecx = esp + 0x58;
    PUSH32(esp, ecx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0xC;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x001F57D7u); RECOMP_ABI_CALL(0x0015C200u, sub_0015C200); /* call 0x0015C200 */

loc_001F57D7: ;
    eax = MEM32(esp + 0x60);
    edx = MEM32(esp + 0x5C);
    ecx = MEM32(esp + 0x64);
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + 0x10) = eax;
    MEM32(edi + 0xC) = edx;
    MEM32(edi + 0x14) = ecx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_001F57FE;

loc_001F57F3: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(edi + 0xC) = eax;
    MEM32(edi + 0x10) = eax;
    MEM32(edi + 0x14) = eax;

loc_001F57FE: ;
    _fa = (uint32_t)(MEM8(edi + 0xEE)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi + 0xEE), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F58B9; /* je: equal / zero */

loc_001F580B: ;
    fp_push(MEMF(esi + 0xC)); /* fld float */
    edx = MEM32(esi);
    fp_push(MEMF(esi + 8)); /* fld float */
    MEM32(esp + 0x28) = edx;
    fp_push(MEMF(esi + 4)); /* fld float */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    MEM32(esp + 0x7C) = eax;
    fp_push(MEMF(ebp + 8)); /* fld float */
    eax = MEM32(ebp);
    fp_push(MEMF(ebp + 4)); /* fld float */
    MEM32(esp + 0x18) = eax;
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = esp + 0x34;
    MEM8(esp + 0x7C) = 1;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x10;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x001F585Au); RECOMP_ABI_CALL(0x001BCAF0u, sub_001BCAF0); /* call 0x001BCAF0 */

loc_001F585A: ;
    ecx = esp + 0x34;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    eax = esp + 0x30;
    PUSH32(esp, eax);
    MEM8(esp + 0x8C) = 2;
    PUSH32(esp, 0x001F5877u); RECOMP_ABI_CALL(0x001BD0C0u, sub_001BD0C0); /* call 0x001BD0C0 */

loc_001F5877: ;
    ecx = MEM32(esp + 0x94);
    PUSH32(esp, ecx);
    edx = esp + 0x48;
    PUSH32(esp, edx);
    PUSH32(esp, 0x001F5889u); RECOMP_ABI_CALL(0x001BCFD0u, sub_001BCFD0); /* call 0x001BCFD0 */

loc_001F5889: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0x34;
    MEM8(esp + 0x7C) = 1;
    PUSH32(esp, 0x001F589Au); RECOMP_ABI_CALL(0x001BCB00u, sub_001BCB00); /* call 0x001BCB00 */

loc_001F589A: ;
    ecx = esp + 0x14;
    MEM8(esp + 0x7C) = 0;
    PUSH32(esp, 0x001F58A8u); RECOMP_ABI_CALL(0x001BCB00u, sub_001BCB00); /* call 0x001BCB00 */

loc_001F58A8: ;
    ecx = esp + 0x24;
    MEM32(esp + 0x7C) = 0xFFFFFFFFu;
    PUSH32(esp, 0x001F58B9u); RECOMP_ABI_CALL(0x001BCB00u, sub_001BCB00); /* call 0x001BCB00 */

loc_001F58B9: ;
    _fa = (uint32_t)(MEM8(edi + 0xEE)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi + 0xEE), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F5933; /* je: equal / zero */

loc_001F58C2: ;
    eax = MEM32(esi + 8);
    ecx = MEM32(esi + 4);
    edx = MEM32(esi);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    eax = esp + 0x64;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001F58DCu); RECOMP_ABI_CALL(0x0015BB60u, sub_0015BB60); /* call 0x0015BB60 */

loc_001F58DC: ;
    ecx = MEM32(ebp + 8);
    edx = MEM32(ebp + 4);
    eax = MEM32(ebp);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esp + 0x88;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001F58FAu); RECOMP_ABI_CALL(0x0015BB60u, sub_0015BB60); /* call 0x0015BB60 */

loc_001F58FA: ;
    PUSH32(esp, ebx);
    edx = esp + 0x80;
    PUSH32(esp, edx);
    eax = esp + 0x94;
    PUSH32(esp, eax);
    ecx = esp + 0x78;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001F5915u); RECOMP_ABI_CALL(0x0015C200u, sub_0015C200); /* call 0x0015C200 */

loc_001F5915: ;
    edx = MEM32(esp + 0x7C);
    eax = MEM32(esp + 0x80);
    ecx = MEM32(esp + 0x84);
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + 0x24) = edx;
    MEM32(edi + 0x28) = eax;
    MEM32(edi + 0x2C) = ecx;

loc_001F5933: ;
    eax = MEM32(edi + 4);
    ecx = MEM32(esp + 0x74);
    POP32(esp, esi);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, ebp);
    MEM32(edi + 4) = eax;
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x74) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x74;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001F5950
 * Original: 0x001F5950 - 0x001F5D69 (1049 bytes, 306 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F5950(void)
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

loc_001F5950: ;
    _fb = (uint32_t)(0xDC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xDC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xC);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_001F597D; /* je: equal / zero */

loc_001F5967: ;
    _fa = (uint32_t)(MEM8(esp + 0xF4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esp + 0xF4), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F597D; /* jne: not equal / not zero */

loc_001F5971: ;
    PUSH32(esp, ebp);
    PUSH32(esp, ebp);
    PUSH32(esp, 2);
    ecx = eax + 0x70;
    PUSH32(esp, 0x001F597Du); RECOMP_ABI_CALL(0x001659C0u, sub_001659C0); /* call 0x001659C0 */

loc_001F597D: ;
    edi = MEM32(esi + 0x10);
    eax = MEM32(edi + 0xC);
    ecx = MEM32(edi + 0x10);
    edx = MEM32(edi + 0x14);
    MEM32(edi + 0x30) = eax;
    eax = MEM32(edi + 0x18);
    MEM32(edi + 0x34) = ecx;
    ecx = MEM32(edi + 0x1C);
    MEM32(edi + 0x38) = edx;
    edx = MEM32(edi + 0x20);
    MEM32(edi + 0x3C) = eax;
    eax = MEM32(edi + 0x24);
    MEM32(edi + 0x40) = ecx;
    ecx = MEM32(edi + 0x28);
    MEM32(edi + 0x44) = edx;
    edx = MEM32(edi + 0x2C);
    MEM32(edi + 0x48) = eax;
    eax = MEM32(edi + 0xC);
    MEM32(edi + 0x4C) = ecx;
    ecx = MEM32(edi + 0x10);
    MEM32(edi + 0x50) = edx;
    edx = MEM32(edi + 0x14);
    MEM32(edi + 0x54) = eax;
    MEM32(edi + 0x58) = ecx;
    MEM32(edi + 0x5C) = edx;
    ecx = MEM32(esi + 0x98);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F5A4C; /* jne: not equal / not zero */

loc_001F59D3: ;
    fp_push(MEMF(esi + 0xAC)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x4964E8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x4964e8] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001F5A14; /* jp: parity */

loc_001F59E6: ;
    fp_push((double)SMEM32(esi + 0x9C)); /* fild */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esi + 0xA8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [esi + 0xa8] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F5A12; /* jne: not equal / not zero */

loc_001F59F9: ;
    fp_push(MEMF(esi + 0xAC)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    MEMF(esi + 0xAC) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esi + 0xA8) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_001F5AD0;

loc_001F5A12: ;
    fp_pop(); /* fstp st(0) */

loc_001F5A14: ;
    fp_push((double)SMEM32(edi + 0xE4)); /* fild */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esi + 0xA8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esi + 0xa8] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001F5AD0; /* jp: parity */

loc_001F5A2B: ;
    fp_push(MEMF(esi + 0xAC)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    MEMF(esi + 0xAC) = (float)fp_top(); /* fst */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_top()); /* fadd st(0), st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0xA8)); /* fadd dword ptr [esi + 0xa8] */
    MEMF(esi + 0xA8) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_001F5AD0;

loc_001F5A4C: ;
    fp_push((double)SMEM32(edi + 0xE4)); /* fild */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esi + 0xA8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esi + 0xa8] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_001F5A72; /* jnp: not parity */

loc_001F5A5F: ;
    fp_push(MEMF(esi + 0xA8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x4964E8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x4964e8] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001F5AD0; /* jp: parity */

loc_001F5A72: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F5A9C; /* jne: not equal / not zero */

loc_001F5A77: ;
    fp_push(MEMF(esi + 0xAC)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    MEMF(esi + 0xAC) = (float)fp_top(); /* fst */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_top()); /* fadd st(0), st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0xA8)); /* fadd dword ptr [esi + 0xa8] */
    MEMF(esi + 0xA8) = (float)fp_top(); fp_pop(); /* fstp */
    MEM8(0x699E00) = 1;
    goto loc_001F5AD0;

loc_001F5A9C: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F5AB6; /* jne: not equal / not zero */

loc_001F5AA1: ;
    fp_push((double)SMEM32(esi + 0x9C)); /* fild */
    MEMF(esi + 0xA8) = (float)fp_top(); fp_pop(); /* fstp */
    MEM8(0x699E00) = 1;
    goto loc_001F5AD0;

loc_001F5AB6: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F5AC9; /* jne: not equal / not zero */

loc_001F5ABA: ;
    MEM32(esi + 0xA8) = ebp;
    MEM8(0x699E00) = 1;
    goto loc_001F5AD0;

loc_001F5AC9: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F5AD0; /* jne: not equal / not zero */

loc_001F5ACE: ;
    SET_LO8(ebx, LO8(ecx));

loc_001F5AD0: ;
    SET_LO8(eax, MEM8(esi + 0xA2));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F5D5C; /* jne: not equal / not zero */

loc_001F5ADE: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F5AF2; /* je: equal / zero */

loc_001F5AE2: ;
    eax = MEM32(esi + 0x98);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001F5AF2; /* jne: not equal / not zero */

loc_001F5AEB: ;
    MEM8(esi + 0xA2) = 1;

loc_001F5AF2: ;
    fp_push(MEMF(esi + 0xA8)); /* fld float */
    PUSH32(esp, 0x001F5AFDu); RECOMP_ABI_CALL(0x000EB38Cu, sub_000EB38C); /* call 0x000EB38C */

loc_001F5AFD: ;
    MEM32(edi + 4) = eax;
    eax = esp + 0x2C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001F5B0Au); RECOMP_ABI_CALL(0x0015BE90u, sub_0015BE90); /* call 0x0015BE90 */

loc_001F5B0A: ;
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001F5B14u); RECOMP_ABI_CALL(0x001F56F0u, sub_001F56F0); /* call 0x001F56F0 */

loc_001F5B14: ;
    fp_push(MEMF(0x496454)); /* fld float */
    edx = MEM32(edi + 0x24);
    eax = MEM32(edi + 0x28);
    ecx = MEM32(edi + 0x2C);
    MEM32(esp + 0x1C) = edx;
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    MEM32(esp + 0x18) = eax;
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x18) = ecx;
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001F5B73; /* jp: parity */

loc_001F5B3F: ;
    fp_push(MEMF(0x496454)); /* fld float */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001F5B73; /* jp: parity */

loc_001F5B52: ;
    fp_push(MEMF(0x496454)); /* fld float */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001F5B73; /* jp: parity */

loc_001F5B65: ;
    MEM32(edi + 0x50) = ebp;
    MEM32(edi + 0x4C) = ebp;
    MEM32(edi + 0x48) = ebp;
    goto loc_001F5C6A;

loc_001F5B73: ;
    fp_push(MEMF(0x4964E8)); /* fld float */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001F5BC4; /* jp: parity */

loc_001F5B86: ;
    fp_push(MEMF(0x4964E8)); /* fld float */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001F5BC4; /* jp: parity */

loc_001F5B99: ;
    fp_push(MEMF(0x4964E8)); /* fld float */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001F5BC4; /* jp: parity */

loc_001F5BAC: ;
    MEM32(esp + 0x14) = 0x3A83126F;
    MEM32(esp + 0x10) = 0x3A83126F;
    MEM32(esp + 0x18) = 0x3A83126F;

loc_001F5BC4: ;
    edx = MEM32(esp + 0x14);
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0x18);
    MEM32(esp + 0x1C) = edx;
    edx = esp + 0x1C;
    MEM32(esp + 0x20) = eax;
    PUSH32(esp, edx);
    eax = esp + 0x70;
    PUSH32(esp, eax);
    MEM32(esp + 0x2C) = ecx;
    MEM32(esp + 0x30) = 0x3F800000;
    PUSH32(esp, 0x001F5BF3u); RECOMP_ABI_CALL(0x0015C1A0u, sub_0015C1A0); /* call 0x0015C1A0 */

loc_001F5BF3: ;
    ecx = esp + 0x74;
    PUSH32(esp, ecx);
    edx = esp + 0xB8;
    PUSH32(esp, edx);
    PUSH32(esp, 0x001F5C05u); RECOMP_ABI_CALL(0x0015CDC0u, sub_0015CDC0); /* call 0x0015CDC0 */

loc_001F5C05: ;
    eax = esp + 0xBC;
    PUSH32(esp, eax);
    ecx = esp + 0x40;
    PUSH32(esp, ecx);
    edx = ecx;
    PUSH32(esp, edx);
    PUSH32(esp, 0x001F5C1Au); RECOMP_ABI_CALL(0x0015CC90u, sub_0015CC90); /* call 0x0015CC90 */

loc_001F5C1A: ;
    fp_push(MEMF(esp + 0x30)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(edi + 0x48)); /* fsub dword ptr [edi + 0x48] */
    eax = MEM32(esp + 0x30);
    ecx = MEM32(esp + 0x2C);
    edx = MEM32(esp + 0x34);
    MEMF(edi + 0x48) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(edi + 0x4C)); /* fsub dword ptr [edi + 0x4c] */
    MEMF(edi + 0x4C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x34)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(edi + 0x50)); /* fsub dword ptr [edi + 0x50] */
    MEMF(edi + 0x50) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(0x5CAC60) = eax;
    MEM32(0x5CAC64) = ecx;
    MEM32(0x5CAC68) = edx;
    eax = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x5CABB0);
    PUSH32(esp, 0x5CE880);
    PUSH32(esp, 0x001F5C67u); RECOMP_ABI_CALL(0x00109280u, sub_00109280); /* call 0x00109280 */

loc_001F5C67: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001F5C6A: ;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F5CBB; /* je: equal / zero */

loc_001F5C70: ;
    ecx = MEM32(edi + 0x14);
    edx = MEM32(edi + 0x10);
    eax = MEM32(edi + 0xC);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001F5C8Bu); RECOMP_ABI_CALL(0x0015BB60u, sub_0015BB60); /* call 0x0015BB60 */

loc_001F5C8B: ;
    edx = esp + 0x30;
    PUSH32(esp, edx);
    eax = esp + 0x44;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001F5C9Au); RECOMP_ABI_CALL(0x0015BBA0u, sub_0015BBA0); /* call 0x0015BBA0 */

loc_001F5C9A: ;
    ecx = MEM32(esi + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x5CE880);
    PUSH32(esp, 0x001F5CA8u); RECOMP_ABI_CALL(0x00109240u, sub_00109240); /* call 0x00109240 */

loc_001F5CA8: ;
    edx = esp + 0x50;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = edx;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001F5CB6u); RECOMP_ABI_CALL(0x0015CC90u, sub_0015CC90); /* call 0x0015CC90 */

loc_001F5CB6: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_001F5CF3;

loc_001F5CBB: ;
    fp_push(MEMF(esi + 0x18)); /* fld float */
    ecx = esp + 0x1C;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edi + 0xC)); /* fadd dword ptr [edi + 0xc] */
    PUSH32(esp, ecx);
    edx = esp + 0x30;
    PUSH32(esp, edx);
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0x30) = 0x3F800000;
    fp_push(MEMF(esi + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edi + 0x10)); /* fadd dword ptr [edi + 0x10] */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edi + 0x14)); /* fadd dword ptr [edi + 0x14] */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x001F5CF0u); RECOMP_ABI_CALL(0x0015BBA0u, sub_0015BBA0); /* call 0x0015BBA0 */

loc_001F5CF0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001F5CF3: ;
    eax = MEM32(esp + 0x5C);
    MEM32(edi + 0xC) = eax;
    ecx = MEM32(esp + 0x60);
    MEM32(edi + 0x10) = ecx;
    edx = MEM32(esp + 0x64);
    MEM32(edi + 0x14) = edx;
    eax = MEM32(esi);
    PUSH32(esp, eax);
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x5CE880);
    PUSH32(esp, 0x001F5D1Au); RECOMP_ABI_CALL(0x001090B0u, sub_001090B0); /* call 0x001090B0 */

loc_001F5D1A: ;
    ebx = edi + 0xA0;
    edx = edi + 0x60;
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001F5D2Au); RECOMP_ABI_CALL(0x0015C280u, sub_0015C280); /* call 0x0015C280 */

loc_001F5D2A: ;
    eax = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x5CE880);
    PUSH32(esp, 0x001F5D37u); RECOMP_ABI_CALL(0x00109240u, sub_00109240); /* call 0x00109240 */

loc_001F5D37: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001F5D3Eu); RECOMP_ABI_CALL(0x0015C280u, sub_0015C280); /* call 0x0015C280 */

loc_001F5D3E: ;
    fp_push(MEMF(edi + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(edi + 0x54)); /* fsub dword ptr [edi + 0x54] */
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(edi + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edi + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(edi + 0x58)); /* fsub dword ptr [edi + 0x58] */
    MEMF(edi + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edi + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(edi + 0x5C)); /* fsub dword ptr [edi + 0x5c] */
    MEMF(edi + 0x38) = (float)fp_top(); fp_pop(); /* fstp */

loc_001F5D5C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xDC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xDC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001F5D70
 * Original: 0x001F5D70 - 0x001F5DD7 (103 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F5D70(void)
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

loc_001F5D70: ;
    SET_LO8(eax, MEM8(ecx + 0xA0));
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(edx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F5D84; /* jne: not equal / not zero */

loc_001F5D7C: ;
    MEM8(0x699E00) = 1;
    esp += 4; return; /* ret */

loc_001F5D84: ;
    _fa = (uint32_t)(MEM8(ecx + 0xA1)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0xA1), LO8(edx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F5DB8; /* jne: not equal / not zero */

loc_001F5D8C: ;
    _fa = (uint32_t)(MEM8(ecx + 0xA2)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0xA2), LO8(edx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F5DB8; /* jne: not equal / not zero */

loc_001F5D94: ;
    fp_push(MEMF(ecx + 0xAC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0xA8)); /* fadd dword ptr [ecx + 0xa8] */
    MEMF(ecx + 0xA8) = (float)fp_top(); fp_pop(); /* fstp */
    SET_LO8(eax, MEM8(0x699E0C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(edx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F5DD6; /* jne: not equal / not zero */

loc_001F5DAF: ;
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001F5DB7u); RECOMP_ABI_CALL(0x001F5950u, sub_001F5950); /* call 0x001F5950 */

loc_001F5DB7: ;
    esp += 4; return; /* ret */

loc_001F5DB8: ;
    eax = MEM32(ecx + 0x10);
    MEM32(eax + 0x38) = edx;
    MEM32(eax + 0x34) = edx;
    MEM32(eax + 0x30) = edx;
    MEM32(eax + 0x44) = edx;
    MEM32(eax + 0x40) = edx;
    MEM32(eax + 0x3C) = edx;
    MEM32(eax + 0x50) = edx;
    MEM32(eax + 0x4C) = edx;
    MEM32(eax + 0x48) = edx;

loc_001F5DD6: ;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001F5DE0
 * Original: 0x001F5DE0 - 0x001F5E26 (70 bytes, 24 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F5DE0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F5DE0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    esi = ecx;
    PUSH32(esp, 0x001F5DEBu); RECOMP_ABI_CALL(0x0001427Du, sub_0001427D); /* call 0x0001427D */

loc_001F5DEB: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, 0x1F4);
    PUSH32(esp, 0x4B34E0);
    PUSH32(esp, 0x4B34B8);
    PUSH32(esp, 1);
    PUSH32(esp, 0xF8);
    PUSH32(esp, eax);
    MEM32(esi + 8) = ecx;
    PUSH32(esp, 0x001F5E0Eu); RECOMP_ABI_CALL(0x001050A0u, sub_001050A0); /* call 0x001050A0 */

loc_001F5E0E: ;
    edi = eax;
    MEM32(esi + 0x10) = edi;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0x3E;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001F5E30
 * Original: 0x001F5E30 - 0x001F5E38 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F5E30(void)
{

loc_001F5E30: ;
    MEM32(ecx + 0x10) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_001F5E40
 * Original: 0x001F5E40 - 0x001F5E89 (73 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F5E40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F5E40: ;
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F5E87; /* je: equal / zero */

loc_001F5E4A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x719258)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0x719258) (32-bit) */
    PUSH32(esp, esi);
    if (CMP_GE(_fas, _fbs)) goto loc_001F5E6F; /* jge: greater or equal (signed >=) */

loc_001F5E53: ;
    ecx = MEM32(0x719254);
    esi = MEM32(ecx + eax * 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F5E6F; /* je: equal / zero */

loc_001F5E60: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x001F5E67u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001F5E64u); } /* indirect call */
    }

loc_001F5E67: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F5E6F; /* jne: not equal / not zero */

loc_001F5E6B: ;
    eax = esi;
    goto loc_001F5E71;

loc_001F5E6F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001F5E71: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(edi + 0xC) = eax;
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_001F5E87; /* je: equal / zero */

loc_001F5E79: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 2);
    ecx = eax + 0x70;
    PUSH32(esp, 0x001F5E87u); RECOMP_ABI_CALL(0x001659C0u, sub_001659C0); /* call 0x001659C0 */

loc_001F5E87: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_001F5E90
 * Original: 0x001F5E90 - 0x001F5EDE (78 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001F5E90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F5E90: ;
    PUSH32(esp, ebp);
    ebp = ecx;
    MEM8(ebp + 0xA5) = 0;
    ecx = MEM32(0x713D28);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F5EDC; /* je: equal / zero */

loc_001F5EA4: ;
    eax = MEM32(ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001F5EADu); RECOMP_ABI_CALL(0x001E1460u, sub_001E1460); /* call 0x001E1460 */

loc_001F5EAD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F5EDC; /* je: equal / zero */

loc_001F5EB1: ;
    _fa = (uint32_t)(MEM8(eax + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 4), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F5EDC; /* je: equal / zero */

loc_001F5EB7: ;
    edx = MEM32(eax + 8);
    PUSH32(esp, esi);
    ecx = edx;
    ecx = ecx & 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = ecx | esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, edi);
    edi = MEM32(eax + 0xC);
    if ((_fa == 0)) goto loc_001F5EDA; /* je: equal / zero */

loc_001F5ECA: ;
    MEM8(ebp + 0xA5) = 1;
    edx = edx & 0xFFFFFFFDu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax + 8) = edx;
    MEM32(eax + 0xC) = edi;

loc_001F5EDA: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_001F5EDC: ;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_001F5EE0
 * Original: 0x001F5EE0 - 0x001F5F01 (33 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F5EE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F5EE0: ;
    eax = MEM32(ecx + 0x10);
    SET_LO16(eax, MEM16(eax + 0xEE));
    SET_LO8(edx, 0); /* xor self */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F5EF2; /* je: equal / zero */

loc_001F5EF0: ;
    SET_LO8(edx, 1);

loc_001F5EF2: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F5EFB; /* jne: not equal / not zero */

loc_001F5EF6: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F5F00; /* jne: not equal / not zero */

loc_001F5EFB: ;
    g_seh_ebp = ebp; sub_001F5E40(); return; /* tail jmp 0x001F5E40 */

loc_001F5F00: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001F5F10
 * Original: 0x001F5F10 - 0x001F5F67 (87 bytes, 26 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F5F10(void)
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

loc_001F5F10: ;
    fp_push(MEMF(0x4976B4)); /* fld float */
    PUSH32(esp, esi);
    fp_push(MEMF(esp + 8)); /* fld float */
    esi = ecx;
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001F5F36; /* jp: parity */

loc_001F5F26: ;
    eax = MEM32(esi);
    ecx = MEM32(0x5CABA4);
    MEM8(ecx + eax) = 0;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_001F5F36: ;
    fp_push(MEMF(0x496454)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 8)); /* fsub dword ptr [esp + 8] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x49653C)); /* fmul dword ptr [0x49653c] */
    PUSH32(esp, 0x001F5F4Bu); RECOMP_ABI_CALL(0x000EB38Cu, sub_000EB38C); /* call 0x000EB38C */

loc_001F5F4B: ;
    eax = SX8(LO8(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001F5F58; /* jge: greater or equal (signed >=) */

loc_001F5F53: ;
    eax = 1;

loc_001F5F58: ;
    edx = MEM32(esi);
    ecx = MEM32(0x5CABA4);
    MEM8(ecx + edx) = LO8(eax);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001F5F70
 * Original: 0x001F5F70 - 0x001F5FC0 (80 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F5F70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F5F70: ;
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0xA0));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F5FBE; /* je: equal / zero */

loc_001F5F7D: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    MEM8(esi + 0xA2) = 0;
    MEM32(esi + 0xA8) = 0;
    MEM32(esi + 0xAC) = 0x3F800000;
    PUSH32(esp, 0x001F5FA1u); RECOMP_ABI_CALL(0x001F5950u, sub_001F5950); /* call 0x001F5950 */

loc_001F5FA1: ;
    eax = MEM32(esi + 0x10);
    MEM32(eax + 4) = 0;
    edx = MEM32(0x5CABA4);
    ecx = MEM32(esi);
    MEM8(edx + ecx) = 0;
    MEM8(esi + 0xA1) = 1;

loc_001F5FBE: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001F5FC0
 * Original: 0x001F5FC0 - 0x001F65D9 (1561 bytes, 500 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F5FC0(void)
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

loc_001F5FC0: ;
    _fb = (uint32_t)(0x330) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x330;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x50C524);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x340);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0xC);
    PUSH32(esp, 0);
    MEM32(esp + 0x340) = eax;
    ebp = ecx;
    PUSH32(esp, 0x001F5FE9u); RECOMP_ABI_CALL(0x0001427Du, sub_0001427D); /* call 0x0001427D */

loc_001F5FE9: ;
    PUSH32(esp, 0x1F4);
    PUSH32(esp, 0x4B34E0);
    PUSH32(esp, 0x4B34B8);
    PUSH32(esp, 1);
    PUSH32(esp, 0xF8);
    PUSH32(esp, eax);
    MEM32(ebp + 8) = edi;
    PUSH32(esp, 0x001F6008u); RECOMP_ABI_CALL(0x001050A0u, sub_001050A0); /* call 0x001050A0 */

loc_001F6008: ;
    edi = eax;
    MEM32(ebp + 0x10) = edi;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x3E;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = MEM32(esi + 4);
    ebx = MEM32(ebp + 0x10);
    ecx = MEM32(0x6C416C);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    _fb = (uint32_t)(0xE0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0xE0;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x001F6031u); RECOMP_ABI_CALL(0x001A6EC0u, sub_001A6EC0); /* call 0x001A6EC0 */

loc_001F6031: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    MEM32(ebp) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_001F61EE; /* jne: not equal / not zero */

loc_001F603D: ;
    eax = 0x4B3560;
    edx = esp + 0x23C;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    goto loc_001F6050;

    /* nop */

loc_001F6050: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F6050; /* jne: not equal / not zero */

loc_001F605A: ;
    edx = MEM32(0x699DF8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F60E5; /* jne: not equal / not zero */

loc_001F6067: ;
    goto loc_001F6070;

    /* nop */

loc_001F6070: ;
    SET_LO8(ecx, MEM8(eax + 0x4B3544));
    MEM8(esp + eax + 0x3C) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F6070; /* jne: not equal / not zero */

loc_001F607F: ;
    eax = esp + 0x3C;
    esi = eax;

loc_001F6085: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F6085; /* jne: not equal / not zero */

loc_001F608C: ;
    edi = esp + 0x23C;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_001F6096: ;
    SET_LO8(ecx, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F6096; /* jne: not equal / not zero */

loc_001F609E: ;
    edx = MEM32(0x699DFC);
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
    ecx = esp + 0x3C;
    PUSH32(esp, ecx);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, edx);
    PUSH32(esp, 0x001F60BEu); RECOMP_ABI_CALL(0x0001131Bu, sub_0001131B); /* call 0x0001131B */

loc_001F60BE: ;
    eax = esp + 0x44;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = eax;

loc_001F60C7: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F60C7; /* jne: not equal / not zero */

loc_001F60CE: ;
    edi = esp + 0x23C;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_001F60D8: ;
    SET_LO8(ecx, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F60D8; /* jne: not equal / not zero */

loc_001F60E0: ;
    goto loc_001F61E0;

loc_001F60E5: ;
    SET_LO8(ecx, MEM8(eax + 0x4B3534));
    MEM8(esp + eax + 0x3C) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F60E5; /* jne: not equal / not zero */

loc_001F60F4: ;
    eax = esp + 0x3C;
    esi = eax;
    /* nop */

loc_001F6100: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F6100; /* jne: not equal / not zero */

loc_001F6107: ;
    edi = esp + 0x23C;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_001F6111: ;
    SET_LO8(ecx, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F6111; /* jne: not equal / not zero */

loc_001F6119: ;
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
    eax = esp + 0x3C;
    PUSH32(esp, eax);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, edx);
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < _n; _i++) _d[_i] = _s[_i]; }
      esi += ecx; edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = MEM8(esi - _i); esi -= ecx; edi -= ecx; }
    ecx = 0; /* rep movsb */
    PUSH32(esp, 0x001F6133u); RECOMP_ABI_CALL(0x0001131Bu, sub_0001131B); /* call 0x0001131B */

loc_001F6133: ;
    eax = esp + 0x44;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = eax;
    /* nop */

loc_001F6140: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F6140; /* jne: not equal / not zero */

loc_001F6147: ;
    edi = esp + 0x23C;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_001F6151: ;
    SET_LO8(ecx, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F6151; /* jne: not equal / not zero */

loc_001F6159: ;
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
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_001F6170: ;
    SET_LO8(ecx, MEM8(eax + 0x4B3518));
    MEM8(esp + eax + 0x3C) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F6170; /* jne: not equal / not zero */

loc_001F617F: ;
    eax = esp + 0x3C;
    esi = eax;

loc_001F6185: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F6185; /* jne: not equal / not zero */

loc_001F618C: ;
    edi = esp + 0x23C;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_001F6196: ;
    SET_LO8(ecx, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F6196; /* jne: not equal / not zero */

loc_001F619E: ;
    edx = MEM32(0x699DFC);
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
    ecx = esp + 0x3C;
    PUSH32(esp, ecx);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, edx);
    PUSH32(esp, 0x001F61BEu); RECOMP_ABI_CALL(0x0001131Bu, sub_0001131B); /* call 0x0001131B */

loc_001F61BE: ;
    eax = esp + 0x44;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = eax;

loc_001F61C7: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F61C7; /* jne: not equal / not zero */

loc_001F61CE: ;
    edi = esp + 0x23C;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_001F61D8: ;
    SET_LO8(ecx, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F61D8; /* jne: not equal / not zero */

loc_001F61E0: ;
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

loc_001F61EE: ;
    eax = MEM32(esp + 0x344);
    MEM32(ebp + 4) = 0xFFFFFFFFu;
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F6219; /* je: equal / zero */

loc_001F6203: ;
    PUSH32(esp, ecx);
    ecx = MEM32(0x6C416C);
    PUSH32(esp, 0x001F620Fu); RECOMP_ABI_CALL(0x001A6EC0u, sub_001A6EC0); /* call 0x001A6EC0 */

loc_001F620F: ;
    MEM32(ebp + 4) = eax;
    eax = MEM32(esp + 0x344);

loc_001F6219: ;
    ecx = MEM32(eax + 0x14);
    MEM32(ebp + 0x98) = ecx;
    edx = MEM32(eax + 0x18);
    MEM32(ebp + 0x9C) = edx;
    MEM8(ebp + 0xA3) = 0;
    MEM8(ebp + 0xA5) = 0;
    esi = MEM32(eax);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x10) = esi;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(ebx + 0xE) = LO16(edi);
    _fa = (uint32_t)(MEM8(esi + 1)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 1), 4 (8-bit) */
    eax = 8;
    if (TEST_Z(_fa, _fb)) goto loc_001F6262; /* je: equal / zero */

loc_001F6252: ;
    MEM16(ebx + 0xE) = 1;
    edi = 0xC;
    eax = 0x14;

loc_001F6262: ;
    _fa = (uint32_t)(MEM8(esi + 1)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 1), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F6272; /* je: equal / zero */

loc_001F6268: ;
    MEM8(ebx + 0xE) = MEM8(ebx + 0xE) | 2;
    _fa = (uint32_t)(MEM8(ebx + 0xE)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x10;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001F6272: ;
    _fa = (uint32_t)(MEM8(esi + 1)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 1), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F6282; /* je: equal / zero */

loc_001F6278: ;
    MEM8(ebx + 0xE) = MEM8(ebx + 0xE) | 4;
    _fa = (uint32_t)(MEM8(ebx + 0xE)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0xC;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001F6282: ;
    ecx = MEM32(esp + 0x344);
    edx = MEM32(ecx + 0xC);
    edx = (uint32_t)((int32_t)edx * (int32_t)eax);
    eax = MEM32(esp + 0x10);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    MEM32(esp + 0x14) = eax;
    PUSH32(esp, 0x001F62A0u); RECOMP_ABI_CALL(0x0001427Du, sub_0001427D); /* call 0x0001427D */

loc_001F62A0: ;
    edx = MEM32(esp + 0x348);
    ecx = eax;
    MEM8(ebx) = 0;
    MEM8(ebx + 1) = 1;
    SET_LO16(eax, MEM16(ebp + 8));
    MEM16(ebx + 2) = LO16(eax);
    MEM32(ebx + 8) = 0;
    eax = MEM32(edx + 0x10);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebx + 4) = eax;
    MEM16(ebx + 0xC) = LO16(edi);
    eax = MEM32(ebp + 8);
    PUSH32(esp, 0x282);
    eax = (uint32_t)((int32_t)eax * (int32_t)edi);
    PUSH32(esp, 0x4B34FC);
    PUSH32(esp, 0x4B34B8);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    MEM32(esp + 0x30) = ecx;
    PUSH32(esp, 0x001F62ECu); RECOMP_ABI_CALL(0x001050A0u, sub_001050A0); /* call 0x001050A0 */

loc_001F62EC: ;
    edx = MEM32(esp + 0x30);
    PUSH32(esp, 0x283);
    PUSH32(esp, 0x4B34FC);
    MEM32(ebx + 0x10) = eax;
    eax = MEM32(ebp + 8);
    PUSH32(esp, 0x4B34B8);
    PUSH32(esp, 1);
    ecx = eax + eax;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001F6311u); RECOMP_ABI_CALL(0x001050A0u, sub_001050A0); /* call 0x001050A0 */

loc_001F6311: ;
    MEM32(ebx + 0x14) = eax;
    ecx = MEM32(ebp + 8);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)edi);
    edi = MEM32(ebx + 0x10);
    edx = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(esp + 0x5C) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = edx;
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = LO8(eax); edi -= ecx; }
    ecx = 0; /* rep stosb */
    eax = MEM32(ebp + 8);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x14) = edx;
    if (CMP_LE(_fas, _fbs)) goto loc_001F6493; /* jle: less or equal (signed <=) */

loc_001F6345: ;
    edi = MEM32(esp + 0x28);
    /* nop */

loc_001F6350: ;
    ecx = (uint32_t)(int32_t)SMEM16(ebx + 0xC);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)edx);
    _fb = (uint32_t)(MEM32(ebx + 0x10)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + MEM32(ebx + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO16(edx, MEM16(esi + 2));
    MEM16(edi) = LO16(edx);
    SET_LO8(edx, MEM8(esi + 1));
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 2;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 4 (8-bit) */
    eax = esi + 8;
    if (TEST_Z(_fa, _fb)) goto loc_001F63AC; /* je: equal / zero */

loc_001F636F: ;
    edx = MEM32(eax);
    MEM32(esp + 0x18) = edx;
    edx = MEM32(eax + 4);
    MEM32(esp + 0x1C) = edx;
    edx = MEM32(eax + 8);
    MEM32(esp + 0x20) = edx;
    edx = MEM32(eax);
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx) = edx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(ebp + 0xA3) = 1;
    goto loc_001F63C4;

loc_001F63AC: ;
    MEM32(esp + 0x18) = 0;
    MEM32(esp + 0x1C) = 0;
    MEM32(esp + 0x20) = 0;

loc_001F63C4: ;
    _fa = (uint32_t)(MEM8(esi + 1)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 1), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F63F5; /* je: equal / zero */

loc_001F63CA: ;
    edx = MEM32(eax);
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx) = edx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001F63F5: ;
    _fa = (uint32_t)(MEM8(esi + 1)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 1), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F6427; /* je: equal / zero */

loc_001F63FB: ;
    edx = MEM32(eax + 4);
    fp_push(MEMF(eax)); /* fld float */
    MEM32(esp + 0x30) = edx;
    edx = MEM32(eax + 8);
    MEM32(esp + 0x34) = edx;
    edx = MEM32(eax);
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx) = edx;
    edx = MEM32(eax);
    MEM32(ecx + 4) = edx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_001F643D;

loc_001F6427: ;
    fp_push(MEMF(0x496454)); /* fld float */
    MEM32(esp + 0x30) = 0x3F800000;
    MEM32(esp + 0x34) = 0x3F800000;

loc_001F643D: ;
    edx = MEM32(esp + 0x14);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F647F; /* jne: not equal / not zero */

loc_001F6445: ;
    ecx = MEM32(ebp + 0x10);
    esi = MEM32(esp + 0x18);
    MEM32(ecx + 0xC) = esi;
    ecx = MEM32(ebp + 0x10);
    esi = MEM32(esp + 0x1C);
    MEM32(ecx + 0x10) = esi;
    ecx = MEM32(ebp + 0x10);
    esi = MEM32(esp + 0x20);
    MEM32(ecx + 0x14) = esi;
    ecx = MEM32(ebp + 0x10);
    esi = MEM32(esp + 0x30);
    MEMF(ecx + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(ebp + 0x10);
    MEM32(ecx + 0x28) = esi;
    ecx = MEM32(ebp + 0x10);
    esi = MEM32(esp + 0x34);
    MEM32(ecx + 0x2C) = esi;
    goto loc_001F6481;

loc_001F647F: ;
    fp_pop(); /* fstp st(0) */

loc_001F6481: ;
    esi = eax;
    eax = MEM32(ebp + 8);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    MEM32(esp + 0x14) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_001F6350; /* jl: less (signed <) */

loc_001F6493: ;
    eax = MEM32(ebp);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F6572; /* je: equal / zero */

loc_001F649F: ;
    PUSH32(esp, 1);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    edx = esp + 0x50;
    PUSH32(esp, edx);
    PUSH32(esp, 0x5CE880);
    MEM8(ebp + 0xA0) = 1;
    PUSH32(esp, 0x001F64BDu); RECOMP_ABI_CALL(0x001086C0u, sub_001086C0); /* call 0x001086C0 */

loc_001F64BD: ;
    eax = MEM32(esp + 0xD8);
    edx = MEM32(esp + 0xDC);
    ecx = eax;
    MEM32(ebp + 0x18) = eax;
    eax = edx;
    MEM32(ebp + 0x2C) = eax;
    eax = MEM32(ebp);
    MEM32(ebp + 0x28) = ecx;
    ecx = MEM32(esp + 0xE0);
    MEM32(ebp + 0x1C) = edx;
    PUSH32(esp, eax);
    edx = ecx;
    esi = 0x3F800000;
    PUSH32(esp, 0x5CE880);
    MEM32(ebp + 0x20) = ecx;
    MEM32(ebp + 0x30) = edx;
    MEM32(ebp + 0x24) = esi;
    MEM32(ebp + 0x34) = esi;
    PUSH32(esp, 0x001F6503u); RECOMP_ABI_CALL(0x00109240u, sub_00109240); /* call 0x00109240 */

loc_001F6503: ;
    PUSH32(esp, eax);
    ecx = ebp + 0x58;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001F650Du); RECOMP_ABI_CALL(0x0015C280u, sub_0015C280); /* call 0x0015C280 */

loc_001F650D: ;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebx);
    PUSH32(esp, 1);
    ecx = ebp;
    MEM32(ebp + 0xAC) = esi;
    MEM32(ebp + 0xA8) = ebx;
    PUSH32(esp, 0x001F6526u); RECOMP_ABI_CALL(0x001F5950u, sub_001F5950); /* call 0x001F5950 */

loc_001F6526: ;
    edx = MEM32(ebp + 0x10);
    MEM32(edx + 4) = ebx;
    MEM8(ebp + 0xA5) = LO8(ebx);
    ecx = MEM32(0x713D28);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F6579; /* je: equal / zero */

loc_001F653C: ;
    eax = MEM32(ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001F6545u); RECOMP_ABI_CALL(0x001E1460u, sub_001E1460); /* call 0x001E1460 */

loc_001F6545: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F6579; /* je: equal / zero */

loc_001F6549: ;
    _fa = (uint32_t)(MEM8(eax + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 4), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F6579; /* je: equal / zero */

loc_001F654F: ;
    edx = MEM32(eax + 8);
    edi = MEM32(eax + 0xC);
    ecx = edx;
    ecx = ecx & 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = ecx | esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    if ((_fa == 0)) goto loc_001F6579; /* je: equal / zero */

loc_001F6560: ;
    MEM8(ebp + 0xA5) = 1;
    edx = edx & 0xFFFFFFFDu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax + 8) = edx;
    MEM32(eax + 0xC) = edi;
    goto loc_001F6579;

loc_001F6572: ;
    MEM8(ebp + 0xA0) = 0;

loc_001F6579: ;
    eax = MEM32(ebp);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F65BC; /* je: equal / zero */

loc_001F6581: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x719258)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0x719258) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001F65A5; /* jge: greater or equal (signed >=) */

loc_001F6589: ;
    ecx = MEM32(0x719254);
    esi = MEM32(ecx + eax * 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F65A5; /* je: equal / zero */

loc_001F6596: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x001F659Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001F659Au); } /* indirect call */
    }

loc_001F659D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F65A5; /* jne: not equal / not zero */

loc_001F65A1: ;
    eax = esi;
    goto loc_001F65A7;

loc_001F65A5: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001F65A7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + 0xC) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_001F65BC; /* je: equal / zero */

loc_001F65AE: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 2);
    ecx = eax + 0x70;
    PUSH32(esp, 0x001F65BCu); RECOMP_ABI_CALL(0x001659C0u, sub_001659C0); /* call 0x001659C0 */

loc_001F65BC: ;
    ecx = MEM32(esp + 0x33C);
    eax = MEM32(esp + 0x10);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    PUSH32(esp, 0x001F65D0u); RECOMP_ABI_CALL(0x000EB37Bu, sub_000EB37B); /* call 0x000EB37B */

loc_001F65D0: ;
    _fb = (uint32_t)(0x330) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x330;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001F65E0
 * Original: 0x001F65E0 - 0x001F6651 (113 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F65E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F65E0: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 4);
    _fa = (uint32_t)(MEM32(ecx + eax * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + eax * 4), 0 (32-bit) */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    if (CMP_EQ(_fa, _fb)) goto loc_001F65FE; /* je: equal / zero */

loc_001F65F3: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F6647; /* je: equal / zero */

loc_001F65F8: ;
    _fa = (uint32_t)(MEM32(ecx + eax * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + eax * 4), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F65F3; /* jne: not equal / not zero */

loc_001F65FE: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    edx = eax * 4;
    PUSH32(esp, edi);
    esi = eax;
    edi = edx + ecx;
    /* nop */

loc_001F6610: ;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F661E; /* je: equal / zero */

loc_001F6615: ;
    edi = MEM32(ecx + eax * 4 + 4);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F6615; /* jne: not equal / not zero */

loc_001F661E: ;
    _fa = (uint32_t)(MEM32(edx + ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + ecx), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F662F; /* jne: not equal / not zero */

loc_001F6624: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F664C; /* je: equal / zero */

loc_001F6629: ;
    _fa = (uint32_t)(MEM32(ecx + esi * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + esi * 4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F6624; /* je: equal / zero */

loc_001F662F: ;
    edx = esi * 4;
    ebp = MEM32(edx + ecx);
    edi = ecx + eax * 4;
    MEM32(edi) = ebp;
    MEM32(edx + ecx) = 0;
    goto loc_001F6610;

loc_001F6647: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_001F664C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001F6660
 * Original: 0x001F6660 - 0x001F6661 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F6660(void)
{

loc_001F6660: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001F6670
 * Original: 0x001F6670 - 0x001F6673 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F6670(void)
{

loc_001F6670: ;
    eax = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_001F6680
 * Original: 0x001F6680 - 0x001F66B0 (48 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F6680(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F6680: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x22);
    PUSH32(esp, eax);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x001F668Fu); RECOMP_ABI_CALL(0x000F0680u, sub_000F0680); /* call 0x000F0680 */

loc_001F668F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F66A7; /* je: equal / zero */

loc_001F6696: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x22);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001F66A0u); RECOMP_ABI_CALL(0x000F0680u, sub_000F0680); /* call 0x000F0680 */

loc_001F66A0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F6696; /* jne: not equal / not zero */

loc_001F66A7: ;
    eax = esi;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001F66B0
 * Original: 0x001F66B0 - 0x001F6852 (418 bytes, 152 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F66B0(void)
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

loc_001F66B0: ;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x50C524);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x34);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    MEM32(esp + 0x2C) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_001F66CD; /* je: equal / zero */

loc_001F66C5: ;
    eax = MEM32(esp + 0x38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F66DD; /* jne: not equal / not zero */

loc_001F66CD: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebp);
    ecx = MEM32(esp + 0x28);
    PUSH32(esp, 0x001F66D9u); RECOMP_ABI_CALL(0x000EB37Bu, sub_000EB37B); /* call 0x000EB37B */

loc_001F66D9: ;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001F66DD: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x001F66E7u); RECOMP_ABI_CALL(0x001F6680u, sub_001F6680); /* call 0x001F6680 */

loc_001F66E7: ;
    esi = eax;
    eax = MEM32(0x50D86C);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x32);
    esi = (uint32_t)((int32_t)esi * (int32_t)0x1C);
    PUSH32(esp, 0x4B35E8);
    PUSH32(esp, 0x4B35C0);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001F6707u); RECOMP_ABI_CALL(0x001050A0u, sub_001050A0); /* call 0x001050A0 */

loc_001F6707: ;
    ebx = eax;
    ecx = esi;
    edx = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = ebx;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = edx;
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = LO8(eax); edi -= ecx; }
    ecx = 0; /* rep stosb */
    eax = MEM32(esp + 0x68);
    PUSH32(esp, 0x22);
    PUSH32(esp, ebp);
    MEM32(esp + 0x38) = ebx;
    MEM32(eax) = esi;
    PUSH32(esp, 0x001F672Fu); RECOMP_ABI_CALL(0x000F0680u, sub_000F0680); /* call 0x000F0680 */

loc_001F672F: ;
    esi = eax;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F674B; /* jne: not equal / not zero */

loc_001F6738: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebp);
    ecx = MEM32(esp + 0x28);
    PUSH32(esp, 0x001F6747u); RECOMP_ABI_CALL(0x000EB37Bu, sub_000EB37B); /* call 0x000EB37B */

loc_001F6747: ;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001F674B: ;
    ecx = MEM32(esp + 0x44);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + ecx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x14) = ebp;
    MEM32(esp + 0x40) = 0;
    edi = ebx + 0x10;

loc_001F6760: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(esp + 0x14) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001F6829; /* jge: greater or equal (signed >=) */

loc_001F676A: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x22);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001F6773u); RECOMP_ABI_CALL(0x000F0680u, sub_000F0680); /* call 0x000F0680 */

loc_001F6773: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F6738; /* je: equal / zero */

loc_001F677A: ;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001F6786; /* jle: less or equal (signed <=) */

loc_001F6781: ;
    eax = 0xF;

loc_001F6786: ;
    PUSH32(esp, eax);
    edx = edi + -16;
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    MEM8(edi) = 0;
    MEM32(edi + 4) = 0;
    PUSH32(esp, 0x001F679Bu); RECOMP_ABI_CALL(0x000EBBD0u, sub_000EBBD0); /* call 0x000EBBD0 */

loc_001F679B: ;
    PUSH32(esp, 0x3C);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001F67A3u); RECOMP_ABI_CALL(0x000F0680u, sub_000F0680); /* call 0x000F0680 */

loc_001F67A3: ;
    PUSH32(esp, 0x3E);
    PUSH32(esp, esi);
    ebx = eax;
    PUSH32(esp, 0x001F67ADu); RECOMP_ABI_CALL(0x000F0680u, sub_000F0680); /* call 0x000F0680 */

loc_001F67AD: ;
    esi = eax;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F6738; /* je: equal / zero */

loc_001F67B6: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebp = esi;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebp = ebp - ebx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    eax = esp + 0x1C;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001F67C7u); RECOMP_ABI_CALL(0x000EBBD0u, sub_000EBBD0); /* call 0x000EBBD0 */

loc_001F67C7: ;
    ecx = esp + 0x24;
    PUSH32(esp, 0x2E);
    PUSH32(esp, ecx);
    MEM8(esp + ebp + 0x2C) = 0;
    PUSH32(esp, 0x001F67D8u); RECOMP_ABI_CALL(0x002A98E0u, sub_002A98E0); /* call 0x002A98E0 */

loc_001F67D8: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F67F1; /* jne: not equal / not zero */

loc_001F67DF: ;
    edx = esp + 0x18;
    PUSH32(esp, edx);
    MEM8(edi) = 1;
    PUSH32(esp, 0x001F67ECu); RECOMP_ABI_CALL(0x000EBE27u, sub_000EBE27); /* call 0x000EBE27 */

loc_001F67EC: ;
    MEM32(edi + 4) = eax;
    goto loc_001F6801;

loc_001F67F1: ;
    eax = esp + 0x18;
    PUSH32(esp, eax);
    MEM8(edi) = 0;
    PUSH32(esp, 0x001F67FEu); RECOMP_ABI_CALL(0x000EBD73u, sub_000EBD73); /* call 0x000EBD73 */

loc_001F67FE: ;
    MEMF(edi + 8) = (float)fp_top(); fp_pop(); /* fstp */

loc_001F6801: ;
    eax = MEM32(esp + 0x44);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x22);
    PUSH32(esp, esi);
    MEM32(esp + 0x48) = eax;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x1C;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x001F6818u); RECOMP_ABI_CALL(0x000F0680u, sub_000F0680); /* call 0x000F0680 */

loc_001F6818: ;
    ebx = MEM32(esp + 0x18);
    esi = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F6760; /* jne: not equal / not zero */

loc_001F6829: ;
    eax = MEM32(esp + 0x40);
    ecx = MEM32(esp + 0x38);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1C);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(eax) = 0x564F45;
    MEM32(eax + 0x18) = 0;
    eax = ebx;
    POP32(esp, ebx);
    POP32(esp, ebp);
    PUSH32(esp, 0x001F684Eu); RECOMP_ABI_CALL(0x000EB37Bu, sub_000EB37B); /* call 0x000EB37B */

loc_001F684E: ;
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
 * sub_001F6860
 * Original: 0x001F6860 - 0x001F6863 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F6860(void)
{

loc_001F6860: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_001F6870
 * Original: 0x001F6870 - 0x001F6874 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F6870(void)
{

loc_001F6870: ;
    SET_LO8(eax, MEM8(ecx + 0x10));
    esp += 4; return; /* ret */

}

/**
 * sub_001F6880
 * Original: 0x001F6880 - 0x001F688D (13 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F6880(void)
{

loc_001F6880: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x2C) = eax;
    MEM32(eax + 0x28) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001F6890
 * Original: 0x001F6890 - 0x001F6897 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F6890(void)
{

loc_001F6890: ;
    eax = MEM32(ecx + 0x168);
    esp += 4; return; /* ret */

}

/**
 * sub_001F68A0
 * Original: 0x001F68A0 - 0x001F68B7 (23 bytes, 5 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F68A0(void)
{

loc_001F68A0: ;
    eax = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    MEM32(ecx + 0x170) = eax;
    MEM32(ecx + 0x174) = edx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001F68C0
 * Original: 0x001F68C0 - 0x001F68C7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F68C0(void)
{

loc_001F68C0: ;
    eax = MEM32(ecx + 0x16C);
    esp += 4; return; /* ret */

}

/**
 * sub_001F68D0
 * Original: 0x001F68D0 - 0x001F68D4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F68D0(void)
{

loc_001F68D0: ;
    eax = MEM32(ecx + 0x14);
    esp += 4; return; /* ret */

}

/**
 * sub_001F68E0
 * Original: 0x001F68E0 - 0x001F68E7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F68E0(void)
{

loc_001F68E0: ;
    eax = MEM32(ecx + 0x90);
    esp += 4; return; /* ret */

}

/**
 * sub_001F68F0
 * Original: 0x001F68F0 - 0x001F6907 (23 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F68F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F68F0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 0x14) = eax;
    MEM32(ecx + 0x18) = eax;
    MEM32(ecx + 0x1C) = eax;
    MEM32(ecx + 0x20) = eax;
    MEM32(ecx + 0x30) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_001F6910
 * Original: 0x001F6910 - 0x001F69EA (218 bytes, 69 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F6910(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F6910: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x38);
    ecx = MEM32(eax + 0x168);
    edx = MEM32(ecx + 0x14);
    eax = MEM32(edx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x719258)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0x719258) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001F6974; /* jge: greater or equal (signed >=) */

loc_001F6929: ;
    ecx = MEM32(0x719254);
    ecx = MEM32(ecx + eax * 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F6974; /* je: equal / zero */

loc_001F6936: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x001F693Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001F6938u); } /* indirect call */
    }

loc_001F693B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F6974; /* jne: not equal / not zero */

loc_001F693F: ;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x38);
    ecx = MEM32(eax + 0x168);
    PUSH32(esp, 0x1CB530);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001F6957u); RECOMP_ABI_CALL(0x001F0150u, sub_001F0150); /* call 0x001F0150 */

loc_001F6957: ;
    edx = MEM32(esi + 0x38);
    eax = MEM32(edx + 0x168);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1CA3D0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001F6971u); RECOMP_ABI_CALL(0x001F0150u, sub_001F0150); /* call 0x001F0150 */

loc_001F6971: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001F6974: ;
    ecx = MEM32(esi + 0x38);
    eax = MEM32(ecx + 0x168);
    ecx = MEM32(eax + 0x2C);
    MEM32(eax + 0xB8) = 0xFFFFFFFFu;
    ecx = ecx & 0xFFFFFFCFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax + 0x2C) = ecx;
    edx = MEM32(esi + 0x38);
    eax = MEM32(edx + 0x168);
    MEM32(eax + 0x2C) = MEM32(eax + 0x2C) | 4;
    _fa = (uint32_t)(MEM32(eax + 0x2C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = MEM32(esi + 0x38);
    ecx = MEM32(eax + 0x168);
    edx = MEM32(ecx + 0x14);
    eax = MEM32(edx + 0x70);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_001F69D3; /* je: equal / zero */

loc_001F69AF: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001F69E8; /* jne: not equal / not zero */

loc_001F69B2: ;
    eax = MEM32(esi + 0x38);
    ecx = MEM32(eax + 0x168);
    edx = MEM32(ecx + 0x14);
    esi = MEM32(edx + 0x74);
    eax = MEM32(edx + 0x78);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    MEM32(ecx + 0xB0) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001F69D3: ;
    ecx = MEM32(esi + 0x38);
    eax = MEM32(ecx + 0x168);
    edx = MEM32(eax + 0x14);
    ecx = MEM32(edx + 0x78);
    MEM32(eax + 0xB0) = ecx;

loc_001F69E8: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001F69F0
 * Original: 0x001F69F0 - 0x001F6A81 (145 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F69F0(void)
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

loc_001F69F0: ;
    PUSH32(esp, esi);
    esi = ecx;
    fp_push((double)SMEM32(esi + 8)); /* fild */
    PUSH32(esp, edi);
    fp_top() = RECOMP_FP_PC(fp_top() / (double)SMEM32(esi + 0xC)); /* fidiv dword ptr [esi + 0xc] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x49F110)); /* fmul dword ptr [0x49f110] */
    PUSH32(esp, 0x001F6A05u); RECOMP_ABI_CALL(0x000EB38Cu, sub_000EB38C); /* call 0x000EB38C */

loc_001F6A05: ;
    edi = eax;
    eax = MEM32(esi + 0x38);
    ecx = MEM32(eax + 0x168);
    edx = MEM32(ecx + 0x14);
    eax = MEM32(edx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x719258)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0x719258) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001F6A7E; /* jge: greater or equal (signed >=) */

loc_001F6A1D: ;
    ecx = MEM32(0x719254);
    eax = MEM32(ecx + eax * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F6A7E; /* je: equal / zero */

loc_001F6A2A: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x001F6A31u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001F6A2Eu); } /* indirect call */
    }

loc_001F6A31: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F6A7E; /* jne: not equal / not zero */

loc_001F6A35: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F6A58; /* jne: not equal / not zero */

loc_001F6A39: ;
    eax = MEM32(esi + 0x38);
    ecx = MEM32(eax + 0x168);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, 0x1CA3A0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001F6A52u); RECOMP_ABI_CALL(0x001EFFF0u, sub_001EFFF0); /* call 0x001EFFF0 */

loc_001F6A52: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001F6A58: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x80 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F6A62; /* jne: not equal / not zero */

loc_001F6A60: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001F6A62: ;
    edx = MEM32(esi + 0x38);
    eax = MEM32(edx + 0x168);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, 0x1CA390);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001F6A7Bu); RECOMP_ABI_CALL(0x001EFFF0u, sub_001EFFF0); /* call 0x001EFFF0 */

loc_001F6A7B: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001F6A7E: ;
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
 * sub_001F6A90
 * Original: 0x001F6A90 - 0x001F6ABA (42 bytes, 14 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F6A90(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F6A90: ;
    eax = MEM32(esp + 8);
    edx = MEM32(esp + 4);
    MEM32(ecx + 0x30) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx) = eax;
    MEM32(ecx + 0x20) = eax;
    MEM32(ecx + 0x14) = edx;
    MEM32(ecx + 0x1C) = edx;
    MEM32(ecx + 0x18) = eax;
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 0x24) = eax;
    MEM8(ecx + 0x10) = LO8(eax);
    MEM8(ecx + 0x34) = LO8(eax);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001F6AC0
 * Original: 0x001F6AC0 - 0x001F6AE6 (38 bytes, 13 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F6AC0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F6AC0: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x38) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 0x14) = eax;
    MEM32(ecx + 0x18) = eax;
    MEM32(ecx + 0x1C) = eax;
    MEM32(ecx + 0x20) = eax;
    MEM32(ecx + 0x30) = eax;
    MEM32(ecx + 0x28) = eax;
    MEM32(ecx + 0x2C) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001F6AF0
 * Original: 0x001F6AF0 - 0x001F6BC4 (212 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F6AF0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F6AF0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 0x14) = eax;
    MEM32(ecx + 0x18) = eax;
    MEM32(ecx + 0x1C) = eax;
    MEM32(ecx + 0x20) = eax;
    MEM32(ecx + 0x30) = eax;
    MEM32(ecx + 0x3C) = eax;
    MEM32(ecx + 0x40) = eax;
    MEM32(ecx + 0x50) = eax;
    MEM32(ecx + 0x54) = eax;
    MEM32(ecx + 0x58) = eax;
    MEM32(ecx + 0x5C) = eax;
    MEM32(ecx + 0x6C) = eax;
    MEM32(ecx + 0x78) = eax;
    MEM32(ecx + 0x7C) = eax;
    MEM32(ecx + 0x8C) = eax;
    MEM32(ecx + 0x90) = eax;
    MEM32(ecx + 0x94) = eax;
    MEM32(ecx + 0x98) = eax;
    MEM32(ecx + 0xA8) = eax;
    MEM32(ecx + 0xB4) = eax;
    MEM32(ecx + 0xB8) = eax;
    MEM32(ecx + 0xC8) = eax;
    MEM32(ecx + 0xCC) = eax;
    MEM32(ecx + 0xD0) = eax;
    MEM32(ecx + 0xD4) = eax;
    MEM32(ecx + 0xE4) = eax;
    MEM32(ecx + 0xF0) = eax;
    MEM32(ecx + 0xF4) = eax;
    MEM32(ecx + 0x104) = eax;
    MEM32(ecx + 0x108) = eax;
    MEM32(ecx + 0x10C) = eax;
    MEM32(ecx + 0x110) = eax;
    MEM32(ecx + 0x120) = eax;
    MEM32(ecx + 0x12C) = eax;
    MEM32(ecx + 0x130) = eax;
    MEM32(ecx + 0x140) = eax;
    MEM32(ecx + 0x144) = eax;
    MEM32(ecx + 0x148) = eax;
    MEM32(ecx + 0x14C) = eax;
    MEM32(ecx + 0x15C) = eax;
    MEM32(ecx + 0x168) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_001F6BD0
 * Original: 0x001F6BD0 - 0x001F6D09 (313 bytes, 79 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F6BD0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F6BD0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + 0x38) = ecx;
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 0x14) = eax;
    MEM32(ecx + 0x18) = eax;
    MEM32(ecx + 0x1C) = eax;
    MEM32(ecx + 0x20) = eax;
    MEM32(ecx + 0x30) = eax;
    MEM32(ecx + 0x28) = eax;
    MEM32(ecx + 0x2C) = eax;
    edx = ecx + 0xF0;
    MEM32(ecx + 0x74) = ecx;
    MEM32(ecx + 0x3C) = eax;
    MEM32(ecx + 0x40) = eax;
    MEM32(ecx + 0x50) = eax;
    MEM32(ecx + 0x54) = eax;
    MEM32(ecx + 0x58) = eax;
    MEM32(ecx + 0x5C) = eax;
    MEM32(ecx + 0x6C) = eax;
    MEM32(ecx + 0x64) = eax;
    MEM32(ecx + 0x68) = eax;
    MEM32(ecx + 0xB0) = ecx;
    MEM32(ecx + 0x78) = eax;
    MEM32(ecx + 0x7C) = eax;
    MEM32(ecx + 0x8C) = eax;
    MEM32(ecx + 0x90) = eax;
    MEM32(ecx + 0x94) = eax;
    MEM32(ecx + 0x98) = eax;
    MEM32(ecx + 0xA8) = eax;
    MEM32(ecx + 0xA0) = eax;
    MEM32(ecx + 0xA4) = eax;
    esi = ecx + 0x78;
    MEM32(ecx + 0xEC) = ecx;
    MEM32(ecx + 0xB4) = eax;
    MEM32(ecx + 0xB8) = eax;
    MEM32(ecx + 0xC8) = eax;
    MEM32(ecx + 0xCC) = eax;
    MEM32(ecx + 0xD0) = eax;
    MEM32(ecx + 0xD4) = eax;
    MEM32(ecx + 0xE4) = eax;
    MEM32(ecx + 0xDC) = eax;
    MEM32(ecx + 0xE0) = eax;
    MEM32(edx + 0x38) = ecx;
    MEM32(edx) = eax;
    MEM32(edx + 4) = eax;
    MEM32(edx + 0x14) = eax;
    MEM32(edx + 0x18) = eax;
    MEM32(edx + 0x1C) = eax;
    MEM32(edx + 0x20) = eax;
    MEM32(edx + 0x30) = eax;
    MEM32(edx + 0x28) = eax;
    MEM32(edx + 0x2C) = eax;
    MEM32(ecx + 0x164) = ecx;
    MEM32(ecx + 0x12C) = eax;
    MEM32(ecx + 0x130) = eax;
    MEM32(ecx + 0x140) = eax;
    MEM32(ecx + 0x144) = eax;
    MEM32(ecx + 0x148) = eax;
    MEM32(ecx + 0x14C) = eax;
    MEM32(ecx + 0x15C) = eax;
    MEM32(ecx + 0x154) = eax;
    MEM32(ecx + 0x158) = eax;
    edi = ecx + 0x12C;
    ebx = esi + 0x3C;
    MEM32(esi + 0x2C) = ebx;
    MEM32(ebx + 0x28) = esi;
    MEM32(ebx + 0x2C) = edx;
    MEM32(edx + 0x28) = ebx;
    MEM32(edx + 0x2C) = edi;
    MEM32(edi + 0x28) = edx;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ecx + 0x168) = eax;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001F6D10
 * Original: 0x001F6D10 - 0x001F6D29 (25 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F6D10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F6D10: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x1C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001F6D15: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F6D26; /* jne: not equal / not zero */

loc_001F6D1A: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x3C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001F6D15; /* jl: less (signed <) */

loc_001F6D23: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_001F6D26: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_001F6D30
 * Original: 0x001F6D30 - 0x001F6D49 (25 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F6D30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F6D30: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001F6D35: ;
    _fa = (uint32_t)(MEM8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F6D46; /* jne: not equal / not zero */

loc_001F6D3A: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x3C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001F6D35; /* jl: less (signed <) */

loc_001F6D43: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_001F6D46: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_001F6D50
 * Original: 0x001F6D50 - 0x001F6DA9 (89 bytes, 28 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F6D50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F6D50: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x168);
    MEM32(esi + 0x16C) = eax;
    edx = MEM32(ecx + 0x14);
    eax = MEM32(edx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x719258)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0x719258) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001F6DA5; /* jge: greater or equal (signed >=) */

loc_001F6D70: ;
    ecx = MEM32(0x719254);
    ecx = MEM32(ecx + eax * 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F6DA5; /* je: equal / zero */

loc_001F6D7D: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x001F6D82u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001F6D7Fu); } /* indirect call */
    }

loc_001F6D82: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F6DA5; /* jne: not equal / not zero */

loc_001F6D86: ;
    eax = MEM32(esi + 0x16C);
    ecx = MEM32(esi + 0x168);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0x1CA930);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001F6DA2u); RECOMP_ABI_CALL(0x001F0150u, sub_001F0150); /* call 0x001F0150 */

loc_001F6DA2: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001F6DA5: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001F6DB0
 * Original: 0x001F6DB0 - 0x001F6DD7 (39 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F6DB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F6DB0: ;
    eax = MEM32(ecx + 0x14);
    MEM32(ecx + 0x1C) = eax;
    SET_LO8(eax, MEM8(ecx + 0x34));
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(edx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F6DD6; /* je: equal / zero */

loc_001F6DBF: ;
    eax = MEM32(ecx + 0x30);
    MEM32(eax) = edx;
    MEM32(eax + 4) = edx;
    MEM32(eax + 0x14) = edx;
    MEM32(eax + 0x18) = edx;
    MEM32(eax + 0x1C) = edx;
    MEM32(eax + 0x20) = edx;
    MEM32(eax + 0x30) = edx;

loc_001F6DD6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001F6DE0
 * Original: 0x001F6DE0 - 0x001F6E0E (46 bytes, 15 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F6DE0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F6DE0: ;
    eax = MEM32(esp + 0xC);
    edx = MEM32(esp + 4);
    MEM32(ecx + 0x30) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx) = eax;
    MEM32(ecx + 0x20) = eax;
    MEM32(ecx + 0x18) = eax;
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 0x24) = eax;
    MEM8(ecx + 0x10) = LO8(eax);
    MEM32(ecx + 0x1C) = eax;
    SET_LO8(eax, MEM8(esp + 8));
    MEM32(ecx + 0x14) = edx;
    MEM8(ecx + 0x34) = LO8(eax);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001F6E10
 * Original: 0x001F6E10 - 0x001F6E3E (46 bytes, 15 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F6E10(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F6E10: ;
    eax = MEM32(esp + 0xC);
    edx = MEM32(esp + 4);
    MEM32(ecx + 0x30) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx) = eax;
    MEM32(ecx + 0x20) = eax;
    MEM32(ecx + 0x18) = eax;
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 0x24) = eax;
    MEM8(ecx + 0x10) = LO8(eax);
    MEM32(ecx + 0x1C) = eax;
    SET_LO8(eax, MEM8(esp + 8));
    MEM32(ecx + 0x14) = edx;
    MEM8(ecx + 0x34) = LO8(eax);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001F6E40
 * Original: 0x001F6E40 - 0x001F6E6F (47 bytes, 15 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F6E40(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F6E40: ;
    eax = MEM32(esp + 0xC);
    edx = MEM32(esp + 4);
    MEM32(ecx + 0x6C) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + 0x3C) = eax;
    MEM32(ecx + 0x5C) = eax;
    MEM32(ecx + 0x54) = eax;
    MEM32(ecx + 0x40) = eax;
    MEM32(ecx + 0x60) = eax;
    MEM8(ecx + 0x4C) = LO8(eax);
    MEM32(ecx + 0x58) = eax;
    SET_LO8(eax, MEM8(esp + 8));
    MEM32(ecx + 0x50) = edx;
    MEM8(ecx + 0x70) = LO8(eax);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001F6E70
 * Original: 0x001F6E70 - 0x001F701D (429 bytes, 136 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F6E70(void)
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

loc_001F6E70: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x38);
    ecx = MEM32(eax + 0x168);
    edx = MEM32(ecx + 0x14);
    eax = MEM32(edx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x719258)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0x719258) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001F7018; /* jge: greater or equal (signed >=) */

loc_001F6E90: ;
    ecx = MEM32(0x719254);
    PUSH32(esp, ebp);
    ebp = MEM32(ecx + eax * 4);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F7017; /* je: equal / zero */

loc_001F6EA2: ;
    edx = MEM32(ebp);
    ecx = ebp;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x001F6EAAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001F6EA7u); } /* indirect call */
    }

loc_001F6EAA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F7017; /* jne: not equal / not zero */

loc_001F6EB2: ;
    eax = MEM32(edi + 0x1C);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 9 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F6F13; /* jne: not equal / not zero */

loc_001F6EBA: ;
    ecx = ebp + 0x8C;
    PUSH32(esp, ecx);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, 0x001F6ECBu); RECOMP_ABI_CALL(0x0015BDF0u, sub_0015BDF0); /* call 0x0015BDF0 */

loc_001F6ECB: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x49E578)); /* fmul dword ptr [0x49e578] */
    eax = MEM32(edi + 0x38);
    MEM32(esp + 0x1C) = 0x3F800000;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x49E578)); /* fmul dword ptr [0x49e578] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x49E578)); /* fmul dword ptr [0x49e578] */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(eax + 0x168);
    edx = MEM32(ecx + 0x14);
    eax = MEM32(edx + 0x60);
    MEM32(esp + 0x18) = eax;

loc_001F6F13: ;
    ecx = MEM32(edi + 0x1C);
    eax = MEM32(ecx + 4);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_001F6F9C; /* je: equal / zero */

loc_001F6F1E: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001F7017; /* jne: not equal / not zero */

loc_001F6F25: ;
    edx = MEM32(edi + 0x38);
    eax = MEM32(edx + 0x168);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 0x1CA3D0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001F6F3Fu); RECOMP_ABI_CALL(0x001F0150u, sub_001F0150); /* call 0x001F0150 */

loc_001F6F3F: ;
    ecx = MEM32(edi + 0x38);
    edx = MEM32(ecx + 0x168);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1CB530);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001F6F59u); RECOMP_ABI_CALL(0x001F0150u, sub_001F0150); /* call 0x001F0150 */

loc_001F6F59: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 3);
    ecx = ebp + 0x70;
    PUSH32(esp, 0x001F6F6Au); RECOMP_ABI_CALL(0x001659C0u, sub_001659C0); /* call 0x001659C0 */

loc_001F6F6A: ;
    eax = MEM32(edi + 0x1C);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 9 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F7017; /* jne: not equal / not zero */

loc_001F6F76: ;
    edx = MEM32(edi + 0x38);
    eax = MEM32(edx + 0x168);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x1CA490);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001F6F93u); RECOMP_ABI_CALL(0x001F0150u, sub_001F0150); /* call 0x001F0150 */

loc_001F6F93: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebp);
    POP32(esp, edi);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001F6F9C: ;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x19C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F7016; /* je: equal / zero */

loc_001F6FA7: ;
    eax = MEM32(esi + 0x19C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F6FEE; /* je: equal / zero */

loc_001F6FB1: ;
    SET_LO8(edx, 8);
    PUSH32(esp, ebx);

loc_001F6FB4: ;
    ecx = MEM32(eax + 0x194);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F6FED; /* je: equal / zero */

loc_001F6FBE: ;
    ebx = MEM32(ecx + 4);
    ebx = ebx >> 6;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F6FCF; /* je: equal / zero */

loc_001F6FC9: ;
    ecx = MEM32(ecx + 0x194);

loc_001F6FCF: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F6FED; /* je: equal / zero */

loc_001F6FD3: ;
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(MEM8(ecx + 8)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 8), 0x20 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F6FED; /* je: equal / zero */

loc_001F6FDC: ;
    _fa = (uint32_t)(MEM8(eax + 4)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 4), LO8(edx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F6FED; /* jne: not equal / not zero */

loc_001F6FE1: ;
    esi = eax;
    eax = MEM32(esi + 0x19C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F6FB4; /* jne: not equal / not zero */

loc_001F6FED: ;
    POP32(esp, ebx);

loc_001F6FEE: ;
    PUSH32(esp, 1);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x001F6FF6u); RECOMP_ABI_CALL(0x001CA3D0u, sub_001CA3D0); /* call 0x001CA3D0 */

loc_001F6FF6: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    PUSH32(esp, 0x001F7000u); RECOMP_ABI_CALL(0x00166190u, sub_00166190); /* call 0x00166190 */

loc_001F7000: ;
    edx = MEM32(edi + 0x1C);
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), 9 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F7016; /* jne: not equal / not zero */

loc_001F7008: ;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001F7013u); RECOMP_ABI_CALL(0x001CA490u, sub_001CA490); /* call 0x001CA490 */

loc_001F7013: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001F7016: ;
    POP32(esp, esi);

loc_001F7017: ;
    POP32(esp, ebp);

loc_001F7018: ;
    POP32(esp, edi);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001F7020
 * Original: 0x001F7020 - 0x001F7525 (1285 bytes, 504 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F7020(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F7020: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x1C);
    ecx = MEM32(eax);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x17) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x17 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_001F7520; /* ja: above (unsigned >) */

loc_001F7034: ;
    PUSH32(esp, edi);
    { uint32_t _jt = MEM32(ecx * 4 + 0x1F7528); /* switch: 29 entries, 26 targets */
    if (_jt == 0x001F703Cu) goto loc_001F703C;
    if (_jt == 0x001F7052u) goto loc_001F7052;
    if (_jt == 0x001F7075u) goto loc_001F7075;
    if (_jt == 0x001F70AAu) goto loc_001F70AA;
    if (_jt == 0x001F70D2u) goto loc_001F70D2;
    if (_jt == 0x001F70DEu) goto loc_001F70DE;
    if (_jt == 0x001F70F6u) goto loc_001F70F6;
    if (_jt == 0x001F7110u) goto loc_001F7110;
    if (_jt == 0x001F718Bu) goto loc_001F718B;
    if (_jt == 0x001F71CDu) goto loc_001F71CD;
    if (_jt == 0x001F71E9u) goto loc_001F71E9;
    if (_jt == 0x001F721Au) goto loc_001F721A;
    if (_jt == 0x001F7236u) goto loc_001F7236;
    if (_jt == 0x001F7252u) goto loc_001F7252;
    if (_jt == 0x001F726Eu) goto loc_001F726E;
    if (_jt == 0x001F72B7u) goto loc_001F72B7;
    if (_jt == 0x001F72CFu) goto loc_001F72CF;
    if (_jt == 0x001F7315u) goto loc_001F7315;
    if (_jt == 0x001F735Cu) goto loc_001F735C;
    if (_jt == 0x001F73A3u) goto loc_001F73A3;
    if (_jt == 0x001F73B7u) goto loc_001F73B7;
    if (_jt == 0x001F73EDu) goto loc_001F73ED;
    if (_jt == 0x001F7448u) goto loc_001F7448;
    if (_jt == 0x001F7495u) goto loc_001F7495;
    if (_jt == 0x001F74BBu) goto loc_001F74BB;
    if (_jt == 0x001F7517u) goto loc_001F7517;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_001F703C: ;
    ecx = MEM32(eax + 4);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM32(esi + 0x20) = eax;
    MEM32(esi + 0x1C) = eax;
    SET_LO8(ebx, 1);
    MEM32(esi) = ecx;
    POP32(esp, esi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_001F7052: ;
    MEM32(esi) = MEM32(esi) - 1;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001F7067; /* jne: not equal / not zero */

loc_001F7056: ;
    MEM32(esi + 0x20) = ebx;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM32(esi + 0x1C) = eax;
    SET_LO8(ebx, 1);
    POP32(esp, esi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_001F7067: ;
    edx = MEM32(esi + 0x20);
    POP32(esp, edi);
    SET_LO8(ebx, 1);
    MEM32(esi + 0x1C) = edx;
    POP32(esp, esi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_001F7075: ;
    _fa = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x18), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F708D; /* jne: not equal / not zero */

loc_001F707A: ;
    MEM8(esi + 0x10) = 1;
    ecx = MEM32(eax + 4);
    MEM32(esi + 8) = ecx;
    edx = MEM32(eax + 4);
    MEM32(esi + 0xC) = edx;
    MEM32(esi + 0x18) = eax;

loc_001F708D: ;
    MEM32(esi + 8) = MEM32(esi + 8) - 1;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001F709D; /* jne: not equal / not zero */

loc_001F7092: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x18) = ebx;
    MEM32(esi + 0x1C) = eax;
    SET_LO8(ebx, 1);

loc_001F709D: ;
    ecx = esi;
    PUSH32(esp, 0x001F70A4u); RECOMP_ABI_CALL(0x001F69F0u, sub_001F69F0); /* call 0x001F69F0 */

loc_001F70A4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_001F70AA: ;
    _fa = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x18), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F70B8; /* jne: not equal / not zero */

loc_001F70AF: ;
    ecx = MEM32(eax + 4);
    MEM32(esi + 4) = ecx;
    MEM32(esi + 0x18) = eax;

loc_001F70B8: ;
    MEM32(esi + 4) = MEM32(esi + 4) - 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001F751F; /* jne: not equal / not zero */

loc_001F70C1: ;
    MEM32(esi + 0x18) = ebx;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM32(esi + 0x1C) = eax;
    SET_LO8(ebx, 1);
    POP32(esp, esi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_001F70D2: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM32(esi + 0x1C) = eax;
    POP32(esp, esi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_001F70DE: ;
    ecx = esi;
    PUSH32(esp, 0x001F70E5u); RECOMP_ABI_CALL(0x001F6E70u, sub_001F6E70); /* call 0x001F6E70 */

loc_001F70E5: ;
    eax = MEM32(esi + 0x1C);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM32(esi + 0x1C) = eax;
    SET_LO8(ebx, 1);
    POP32(esp, esi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_001F70F6: ;
    POP32(esp, edi);
    MEM32(esi) = ebx;
    MEM32(esi + 4) = ebx;
    MEM32(esi + 0x14) = ebx;
    MEM32(esi + 0x18) = ebx;
    MEM32(esi + 0x1C) = ebx;
    MEM32(esi + 0x20) = ebx;
    MEM32(esi + 0x30) = ebx;
    POP32(esp, esi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_001F7110: ;
    edx = MEM32(eax + 8);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_001F7169; /* je: equal / zero */

loc_001F7119: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_001F7144; /* je: equal / zero */

loc_001F711C: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001F716B; /* jne: not equal / not zero */

loc_001F711F: ;
    edx = MEM32(eax + 4);
    ecx = 2;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = 0x699E08;
    PUSH32(esp, 0x001F7133u); RECOMP_ABI_CALL(0x00199830u, sub_00199830); /* call 0x00199830 */

loc_001F7133: ;
    eax = MEM32(esi + 0x1C);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM32(esi + 0x1C) = eax;
    SET_LO8(ebx, 1);
    POP32(esp, esi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_001F7144: ;
    edx = MEM32(eax + 4);
    ecx = 1;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = 0x699E08;
    PUSH32(esp, 0x001F7158u); RECOMP_ABI_CALL(0x00199830u, sub_00199830); /* call 0x00199830 */

loc_001F7158: ;
    eax = MEM32(esi + 0x1C);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM32(esi + 0x1C) = eax;
    SET_LO8(ebx, 1);
    POP32(esp, esi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_001F7169: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001F716B: ;
    edx = MEM32(eax + 4);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = 0x699E08;
    PUSH32(esp, 0x001F717Au); RECOMP_ABI_CALL(0x00199830u, sub_00199830); /* call 0x00199830 */

loc_001F717A: ;
    eax = MEM32(esi + 0x1C);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM32(esi + 0x1C) = eax;
    SET_LO8(ebx, 1);
    POP32(esp, esi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_001F718B: ;
    ecx = MEM32(0x70AB40);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F7514; /* je: equal / zero */

loc_001F7199: ;
    eax = MEM32(esi + 0x38);
    eax = MEM32(eax + 0x168);
    edx = MEM32(eax + 0x14);
    eax = MEM32(edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001F71ADu); RECOMP_ABI_CALL(0x001DAEF0u, sub_001DAEF0); /* call 0x001DAEF0 */

loc_001F71AD: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F7514; /* je: equal / zero */

loc_001F71B7: ;
    ecx = MEM32(esi + 0x1C);
    eax = MEM32(ecx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_001F7514; /* ja: above (unsigned >) */

loc_001F71C6: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x1F7588); /* switch: 5 entries, 5 targets */
    if (_jt == 0x001F71CDu) goto loc_001F71CD;
    if (_jt == 0x001F71E9u) goto loc_001F71E9;
    if (_jt == 0x001F721Au) goto loc_001F721A;
    if (_jt == 0x001F7236u) goto loc_001F7236;
    if (_jt == 0x001F7252u) goto loc_001F7252;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_001F71CD: ;
    ecx = MEM32(edi + 0x90);
    PUSH32(esp, 0x001F71D8u); RECOMP_ABI_CALL(0x001DA710u, sub_001DA710); /* call 0x001DA710 */

loc_001F71D8: ;
    eax = MEM32(esi + 0x1C);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM32(esi + 0x1C) = eax;
    SET_LO8(ebx, 1);
    POP32(esp, esi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_001F71E9: ;
    ecx = MEM32(edi + 0x90);
    PUSH32(esp, 0x001F71F4u); RECOMP_ABI_CALL(0x001DA6F0u, sub_001DA6F0); /* call 0x001DA6F0 */

loc_001F71F4: ;
    edx = MEM32(edi + 0x90);
    eax = MEM32(edx + 0x14);
    ecx = MEM32(0x70AB40);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001F7209u); RECOMP_ABI_CALL(0x001DADA0u, sub_001DADA0); /* call 0x001DADA0 */

loc_001F7209: ;
    eax = MEM32(esi + 0x1C);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM32(esi + 0x1C) = eax;
    SET_LO8(ebx, 1);
    POP32(esp, esi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_001F721A: ;
    ecx = MEM32(edi + 0x90);
    PUSH32(esp, 0x001F7225u); RECOMP_ABI_CALL(0x001DA700u, sub_001DA700); /* call 0x001DA700 */

loc_001F7225: ;
    eax = MEM32(esi + 0x1C);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM32(esi + 0x1C) = eax;
    SET_LO8(ebx, 1);
    POP32(esp, esi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_001F7236: ;
    ecx = MEM32(edi + 0x90);
    PUSH32(esp, 0x001F7241u); RECOMP_ABI_CALL(0x001DA740u, sub_001DA740); /* call 0x001DA740 */

loc_001F7241: ;
    eax = MEM32(esi + 0x1C);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM32(esi + 0x1C) = eax;
    SET_LO8(ebx, 1);
    POP32(esp, esi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_001F7252: ;
    ecx = MEM32(edi + 0x90);
    PUSH32(esp, 0x001F725Du); RECOMP_ABI_CALL(0x001DA760u, sub_001DA760); /* call 0x001DA760 */

loc_001F725D: ;
    eax = MEM32(esi + 0x1C);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM32(esi + 0x1C) = eax;
    SET_LO8(ebx, 1);
    POP32(esp, esi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_001F726E: ;
    ecx = MEM32(esi + 0x38);
    eax = MEM32(ecx + 0x168);
    edx = MEM32(eax + 0x14);
    ecx = MEM32(edx + 0x6C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F7514; /* je: equal / zero */

loc_001F7285: ;
    edx = MEM32(eax + 0x248);
    _fa = (uint32_t)(MEM32(ecx + edx * 4 + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + edx * 4 + 4), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F7514; /* je: equal / zero */

loc_001F7296: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    MEM32(eax + 0x248) = edx;
    PUSH32(esp, 0x001F72A3u); RECOMP_ABI_CALL(0x001CA640u, sub_001CA640); /* call 0x001CA640 */

loc_001F72A3: ;
    eax = MEM32(esi + 0x1C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM32(esi + 0x1C) = eax;
    SET_LO8(ebx, 1);
    POP32(esp, esi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_001F72B7: ;
    ecx = esi;
    PUSH32(esp, 0x001F72BEu); RECOMP_ABI_CALL(0x001F6910u, sub_001F6910); /* call 0x001F6910 */

loc_001F72BE: ;
    eax = MEM32(esi + 0x1C);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM32(esi + 0x1C) = eax;
    SET_LO8(ebx, 1);
    POP32(esp, esi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_001F72CF: ;
    ecx = MEM32(esi + 0x2C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    eax = MEM32(eax + 4);
    if (CMP_EQ(_fa, _fb)) goto loc_001F7514; /* je: equal / zero */

loc_001F72DD: ;
    /* nop */

loc_001F72E0: ;
    _fa = (uint32_t)(MEM32(ecx + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x1C), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F72FD; /* je: equal / zero */

loc_001F72E5: ;
    ecx = MEM32(ecx + 0x2C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F72E0; /* jne: not equal / not zero */

loc_001F72EC: ;
    eax = MEM32(esi + 0x1C);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM32(esi + 0x1C) = eax;
    SET_LO8(ebx, 1);
    POP32(esp, esi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_001F72FD: ;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001F7304u); RECOMP_ABI_CALL(0x001F6A90u, sub_001F6A90); /* call 0x001F6A90 */

loc_001F7304: ;
    eax = MEM32(esi + 0x1C);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM32(esi + 0x1C) = eax;
    SET_LO8(ebx, 1);
    POP32(esp, esi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_001F7315: ;
    ecx = MEM32(eax + 8);
    edx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x38);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001F732Bu); RECOMP_ABI_CALL(0x001F6E10u, sub_001F6E10); /* call 0x001F6E10 */

loc_001F732B: ;
    eax = MEM32(esi + 0x38);
    ecx = MEM32(eax + 0x168);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 0x1CB750);
    PUSH32(esp, 0x1CBE90);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001F7348u); RECOMP_ABI_CALL(0x001F0150u, sub_001F0150); /* call 0x001F0150 */

loc_001F7348: ;
    eax = MEM32(esi + 0x1C);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM32(esi + 0x1C) = eax;
    SET_LO8(ebx, 1);
    POP32(esp, esi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_001F735C: ;
    ecx = MEM32(eax + 8);
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    ecx = MEM32(esi + 0x38);
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001F7372u); RECOMP_ABI_CALL(0x001F6E40u, sub_001F6E40); /* call 0x001F6E40 */

loc_001F7372: ;
    ecx = MEM32(esi + 0x38);
    edx = MEM32(ecx + 0x168);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 0x1CB750);
    PUSH32(esp, 0x1CBE90);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001F738Fu); RECOMP_ABI_CALL(0x001F0150u, sub_001F0150); /* call 0x001F0150 */

loc_001F738F: ;
    eax = MEM32(esi + 0x1C);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM32(esi + 0x1C) = eax;
    SET_LO8(ebx, 1);
    POP32(esp, esi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_001F73A3: ;
    ecx = MEM32(eax + 4);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM32(esi + 0x1C) = eax;
    SET_LO8(ebx, 1);
    MEM32(esi + 0x24) = ecx;
    POP32(esp, esi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_001F73B7: ;
    eax = MEM32(eax + 4);
    ecx = MEM32(0x6C416C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001F73C6u); RECOMP_ABI_CALL(0x001A6E80u, sub_001A6E80); /* call 0x001A6E80 */

loc_001F73C6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F7514; /* je: equal / zero */

loc_001F73CF: ;
    ecx = MEM32(0x6CE72C);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001F73DCu); RECOMP_ABI_CALL(0x001CC190u, sub_001CC190); /* call 0x001CC190 */

loc_001F73DC: ;
    eax = MEM32(esi + 0x1C);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM32(esi + 0x1C) = eax;
    SET_LO8(ebx, 1);
    POP32(esp, esi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_001F73ED: ;
    edx = MEM32(esi + 0x38);
    eax = MEM32(edx + 0x168);
    eax = MEM32(eax + 0x14);
    ecx = MEM32(eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001F7401u); RECOMP_ABI_CALL(0x001DD860u, sub_001DD860); /* call 0x001DD860 */

loc_001F7401: ;
    edi = eax;
    eax = MEM32(esi + 0x18);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F7439; /* jne: not equal / not zero */

loc_001F740D: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001F7439; /* jl: less (signed <) */

loc_001F7411: ;
    edx = MEM32(esi + 0x1C);
    _fa = (uint32_t)(MEM32(edx + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 8), ebx (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_001F7431; /* je: equal / zero */

loc_001F741A: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001F7420u); RECOMP_ABI_CALL(0x001DCEE0u, sub_001DCEE0); /* call 0x001DCEE0 */

loc_001F7420: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001F7426u); RECOMP_ABI_CALL(0x001DD650u, sub_001DD650); /* call 0x001DD650 */

loc_001F7426: ;
    eax = MEM32(esi + 0x1C);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x18) = eax;
    goto loc_001F7439;

loc_001F7431: ;
    PUSH32(esp, 0x001F7436u); RECOMP_ABI_CALL(0x001DD620u, sub_001DD620); /* call 0x001DD620 */

loc_001F7436: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001F7439: ;
    ecx = MEM32(esi + 0x1C);
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 4), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F7481; /* je: equal / zero */

loc_001F7441: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001F7481; /* jl: less (signed <) */

loc_001F7445: ;
    PUSH32(esp, edi);
    goto loc_001F7471;

loc_001F7448: ;
    edx = MEM32(esi + 0x38);
    eax = MEM32(edx + 0x168);
    eax = MEM32(eax + 0x14);
    ecx = MEM32(eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001F745Cu); RECOMP_ABI_CALL(0x001DD860u, sub_001DD860); /* call 0x001DD860 */

loc_001F745C: ;
    ecx = MEM32(esi + 0x18);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F746C; /* jne: not equal / not zero */

loc_001F7466: ;
    edx = MEM32(esi + 0x1C);
    MEM32(esi + 0x18) = edx;

loc_001F746C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001F7481; /* jl: less (signed <) */

loc_001F7470: ;
    PUSH32(esp, eax);

loc_001F7471: ;
    PUSH32(esp, 0x001F7476u); RECOMP_ABI_CALL(0x001DD6A0u, sub_001DD6A0); /* call 0x001DD6A0 */

loc_001F7476: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F751F; /* jne: not equal / not zero */

loc_001F7481: ;
    eax = MEM32(esi + 0x1C);
    MEM32(esi + 0x18) = ebx;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM32(esi + 0x1C) = eax;
    SET_LO8(ebx, 1);
    POP32(esp, esi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_001F7495: ;
    edx = MEM32(eax + 8);
    eax = MEM32(eax + 4);
    ecx = MEM32(esi + 0x38);
    MEM32(ecx + 0x170) = eax;
    MEM32(ecx + 0x174) = edx;
    eax = MEM32(esi + 0x1C);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM32(esi + 0x1C) = eax;
    SET_LO8(ebx, 1);
    POP32(esp, esi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_001F74BB: ;
    ecx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    ecx = eax;
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_001F74F6; /* je: equal / zero */

loc_001F74CC: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_001F74DB; /* je: equal / zero */

loc_001F74CF: ;
    ecx = eax + -2;
    eax = 1;
    eax = eax << LO8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    goto loc_001F74F9;

loc_001F74DB: ;
    ecx = MEM32(esi + 0x38);
    eax = MEM32(ecx + 0x168);
    ecx = MEM32(eax + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001F74F6; /* jl: less (signed <) */

loc_001F74EB: ;
    eax = 1;
    eax = eax << LO8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = ~eax;
    goto loc_001F74F9;

loc_001F74F6: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_001F74F9: ;
    ecx = MEM32(esi + 0x38);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ebx) (8-bit) */
    edx = MEM32(ecx + 0x16C);
    if (CMP_EQ(_fa, _fb)) goto loc_001F750A; /* je: equal / zero */

loc_001F7506: ;
    edx = edx | eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_001F750E;

loc_001F750A: ;
    eax = ~eax;
    edx = edx & eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_001F750E: ;
    PUSH32(esp, edx);
    PUSH32(esp, 0x001F7514u); RECOMP_ABI_CALL(0x001F6D50u, sub_001F6D50); /* call 0x001F6D50 */

loc_001F7514: ;
    eax = MEM32(esi + 0x1C);

loc_001F7517: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x1C) = eax;
    SET_LO8(ebx, 1);

loc_001F751F: ;
    POP32(esp, edi);

loc_001F7520: ;
    POP32(esp, esi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001F75C0
 * Original: 0x001F75C0 - 0x001F762A (106 bytes, 25 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F75C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F75C0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x001F75C9u); RECOMP_ABI_CALL(0x001F6AF0u, sub_001F6AF0); /* call 0x001F6AF0 */

loc_001F75C9: ;
    eax = MEM32(esp + 0x10);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebx);
    MEM32(esi + 0x168) = eax;
    MEM32(esi + 0x170) = 0xFFFFFFFFu;
    MEM32(esi + 0x174) = ebx;
    PUSH32(esp, 0x001F75EBu); RECOMP_ABI_CALL(0x001F6D50u, sub_001F6D50); /* call 0x001F6D50 */

loc_001F75EB: ;
    eax = MEM32(esp + 0xC);
    MEM32(esi + 0xA8) = ebx;
    MEM32(esi + 0x78) = ebx;
    MEM32(esi + 0x98) = ebx;
    MEM32(esi + 0x90) = ebx;
    MEM32(esi + 0x7C) = ebx;
    MEM32(esi + 0x9C) = ebx;
    MEM8(esi + 0x88) = LO8(ebx);
    MEM8(esi + 0xAC) = LO8(ebx);
    MEM32(esi + 0x8C) = eax;
    MEM32(esi + 0x94) = eax;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001F7630
 * Original: 0x001F7630 - 0x001F765B (43 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F7630(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F7630: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    edi = 6;
    /* nop */

loc_001F7640: ;
    eax = MEM32(esi + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F7652; /* je: equal / zero */

loc_001F7647: ;
    ecx = esi;
    PUSH32(esp, 0x001F764Eu); RECOMP_ABI_CALL(0x001F7020u, sub_001F7020); /* call 0x001F7020 */

loc_001F764E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F7647; /* jne: not equal / not zero */

loc_001F7652: ;
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x3C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001F7640; /* jne: not equal / not zero */

loc_001F7658: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001F7660
 * Original: 0x001F7660 - 0x001F7750 (240 bytes, 73 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F7660(void)
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

loc_001F7660: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x50);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F7694; /* je: equal / zero */

loc_001F766D: ;
    _fa = (uint32_t)(MEM32(edi + 0x58)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x58), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F7694; /* jne: not equal / not zero */

loc_001F7672: ;
    eax = MEM32(edi + 0x50);
    MEM32(edi + 0x58) = eax;
    _fa = (uint32_t)(MEM8(edi + 0x70)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi + 0x70), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F7694; /* je: equal / zero */

loc_001F767D: ;
    eax = MEM32(edi + 0x6C);
    MEM32(eax) = ebx;
    MEM32(eax + 4) = ebx;
    MEM32(eax + 0x14) = ebx;
    MEM32(eax + 0x18) = ebx;
    MEM32(eax + 0x1C) = ebx;
    MEM32(eax + 0x20) = ebx;
    MEM32(eax + 0x30) = ebx;

loc_001F7694: ;
    _fa = (uint32_t)(MEM32(edi + 0x170)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x170), ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001F774B; /* jl: less (signed <) */

loc_001F76A0: ;
    ecx = MEM32(edi + 0x174);
    eax = ecx;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    if ((_fa == 0)) goto loc_001F76CC; /* je: equal / zero */

loc_001F76B1: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_001F76C1; /* je: equal / zero */

loc_001F76B4: ;
    _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFFEu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F774A; /* jne: not equal / not zero */

loc_001F76BF: ;
    goto loc_001F76CC;

loc_001F76C1: ;
    ecx = MEM32(edi + 0x168);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ecx + 0x20) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F774A; /* je: equal / zero */

loc_001F76CC: ;
    eax = MEM32(esp + 0x14);
    esi = (uint32_t)((int32_t)esi * (int32_t)0x3238);
    PUSH32(esp, ebp);
    fp_push(MEMF(esi + 0x5D1B38)); /* fld float */
    ebp = esi + 0x5D44D8;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax)); /* fsub dword ptr [eax] */
    MEM32(esi + 0x5D44DC) = ebx;
    PUSH32(esp, ebp);
    MEMF(ebp) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x5D1B40)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax + 8)); /* fsub dword ptr [eax + 8] */
    MEMF(esi + 0x5D44E0) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x001F7703u); RECOMP_ABI_CALL(0x0015C610u, sub_0015C610); /* call 0x0015C610 */

loc_001F7703: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x4B360C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x4b360c] */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001F7722; /* jp: parity */

loc_001F7713: ;
    MEM32(ebp) = 0x3F800000;
    MEM32(esi + 0x5D44E0) = ebx;
    goto loc_001F772B;

loc_001F7722: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x001F7728u); RECOMP_ABI_CALL(0x0015BF80u, sub_0015BF80); /* call 0x0015BF80 */

loc_001F7728: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001F772B: ;
    ecx = MEM32(esi + 0x5D1B20);
    edx = MEM32(edi + 0x170);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x324);
    PUSH32(esp, edx);
    ecx = ecx + 0x6CE7C8;
    PUSH32(esp, 0x001F7749u); RECOMP_ABI_CALL(0x001D02B0u, sub_001D02B0); /* call 0x001D02B0 */

loc_001F7749: ;
    POP32(esp, ebp);

loc_001F774A: ;
    POP32(esp, esi);

loc_001F774B: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001F7770
 * Original: 0x001F7770 - 0x001F7786 (22 bytes, 8 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F7770(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_001F7770: ;
    eax = MEM32(ecx + 0xC0);
    ecx = MEM32(esp + 4);
    _cf = 0; /* logical op clears CF */
    eax = eax & ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(ecx));
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001F7790
 * Original: 0x001F7790 - 0x001F7793 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F7790(void)
{

loc_001F7790: ;
    eax = MEM32(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001F77A0
 * Original: 0x001F77A0 - 0x001F77AE (14 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F77A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F77A0: ;
    PUSH32(esp, edi);
    edi = ecx;
    ecx = 0x1D;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_001F77B0
 * Original: 0x001F77B0 - 0x001F79CC (540 bytes, 204 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F77B0(void)
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

loc_001F77B0: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x30);
    eax = MEM32(edi);
    ecx = esp + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x001F77C8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001F77C5u); } /* indirect call */
    }

loc_001F77C8: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x001F77CFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001F77CCu); } /* indirect call */
    }

loc_001F77CF: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x3238);
    _fb = (uint32_t)(0x5CE880) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x5CE880;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = 0x699E20;
    PUSH32(esp, 0x001F77EAu); RECOMP_ABI_CALL(0x0019A0C0u, sub_0019A0C0); /* call 0x0019A0C0 */

loc_001F77EA: ;
    eax = MEM32(esi + 4);
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x10000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F783A; /* je: equal / zero */

loc_001F77F6: ;
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x28);
    edx = MEM32(edi + 0x31C);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x5CABB0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001F7814u); RECOMP_ABI_CALL(0x001086C0u, sub_001086C0); /* call 0x001086C0 */

loc_001F7814: ;
    eax = MEM32(0x5CAC38);
    ecx = MEM32(0x5CAC34);
    edx = MEM32(0x5CAC30);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    eax = esp + 0x38;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001F7837u); RECOMP_ABI_CALL(0x0015BB60u, sub_0015BB60); /* call 0x0015BB60 */

loc_001F7837: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001F783A: ;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(esi + 4), 0x40000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F7868; /* je: equal / zero */

loc_001F7843: ;
    eax = MEM32(esi + 0x6C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F7868; /* je: equal / zero */

loc_001F784A: ;
    ecx = eax;
    edx = MEM32(ecx);
    eax = esp + 0x1C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x001F7856u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001F7853u); } /* indirect call */
    }

loc_001F7856: ;
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, 0x001F7865u); RECOMP_ABI_CALL(0x0010DE90u, sub_0010DE90); /* call 0x0010DE90 */

loc_001F7865: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001F7868: ;
    eax = MEM32(esi + 0x44);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x13) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x13 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_001F79C1; /* ja: above (unsigned >) */

loc_001F7875: ;
    eax = ZX8(MEM8(eax + 0x1F79F0));
    { uint32_t _jt = MEM32(eax * 4 + 0x1F79CC); /* switch: 9 entries, 9 targets */
    if (_jt == 0x001F7883u) goto loc_001F7883;
    if (_jt == 0x001F78B3u) goto loc_001F78B3;
    if (_jt == 0x001F78E3u) goto loc_001F78E3;
    if (_jt == 0x001F7917u) goto loc_001F7917;
    if (_jt == 0x001F794Bu) goto loc_001F794B;
    if (_jt == 0x001F796Bu) goto loc_001F796B;
    if (_jt == 0x001F798Bu) goto loc_001F798B;
    if (_jt == 0x001F79BFu) goto loc_001F79BF;
    if (_jt == 0x001F79C1u) goto loc_001F79C1;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_001F7883: ;
    ecx = MEM32(esi + 0x68);
    fp_push((double)SMEM32(esi + 0x68)); /* fild */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001F7893; /* jge: greater or equal (signed >=) */

loc_001F788D: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x49F3D8)); /* fadd dword ptr [0x49f3d8] */

loc_001F7893: ;
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x48;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 0x10;
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001F78A5u); RECOMP_ABI_CALL(0x001F05B0u, sub_001F05B0); /* call 0x001F05B0 */

loc_001F78A5: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(ebx, LO8(eax));
    POP32(esp, ebx);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_001F78B3: ;
    eax = MEM32(esi + 0x68);
    fp_push((double)SMEM32(esi + 0x68)); /* fild */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001F78C3; /* jge: greater or equal (signed >=) */

loc_001F78BD: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x49F3D8)); /* fadd dword ptr [0x49f3d8] */

loc_001F78C3: ;
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x48;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0x10;
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001F78D5u); RECOMP_ABI_CALL(0x001F05E0u, sub_001F05E0); /* call 0x001F05E0 */

loc_001F78D5: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(ebx, LO8(eax));
    POP32(esp, ebx);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_001F78E3: ;
    edx = MEM32(esi + 0x68);
    fp_push((double)SMEM32(esi + 0x68)); /* fild */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001F78F3; /* jge: greater or equal (signed >=) */

loc_001F78ED: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x49F3D8)); /* fadd dword ptr [0x49f3d8] */

loc_001F78F3: ;
    PUSH32(esp, ecx);
    eax = esi + 0x58;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, eax);
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x48;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0x14;
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001F7909u); RECOMP_ABI_CALL(0x001F0650u, sub_001F0650); /* call 0x001F0650 */

loc_001F7909: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(ebx, LO8(eax));
    POP32(esp, ebx);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_001F7917: ;
    edx = MEM32(esi + 0x68);
    fp_push((double)SMEM32(esi + 0x68)); /* fild */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001F7927; /* jge: greater or equal (signed >=) */

loc_001F7921: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x49F3D8)); /* fadd dword ptr [0x49f3d8] */

loc_001F7927: ;
    PUSH32(esp, ecx);
    eax = esi + 0x58;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, eax);
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x48;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0x14;
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001F793Du); RECOMP_ABI_CALL(0x001F06A0u, sub_001F06A0); /* call 0x001F06A0 */

loc_001F793D: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_001F794B: ;
    edx = esi + 0x58;
    PUSH32(esp, edx);
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x48;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp + 0x10;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001F795Du); RECOMP_ABI_CALL(0x001F0750u, sub_001F0750); /* call 0x001F0750 */

loc_001F795D: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(ebx, LO8(eax));
    POP32(esp, ebx);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_001F796B: ;
    ecx = esi + 0x58;
    PUSH32(esp, ecx);
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x48;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 0x10;
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001F797Du); RECOMP_ABI_CALL(0x001F07A0u, sub_001F07A0); /* call 0x001F07A0 */

loc_001F797D: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(ebx, LO8(eax));
    POP32(esp, ebx);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_001F798B: ;
    eax = MEM32(esi + 0x68);
    fp_push((double)SMEM32(esi + 0x68)); /* fild */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001F799B; /* jge: greater or equal (signed >=) */

loc_001F7995: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x49F3D8)); /* fadd dword ptr [0x49f3d8] */

loc_001F799B: ;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x5C);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, ecx);
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x48;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 0x14;
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001F79B1u); RECOMP_ABI_CALL(0x001F0800u, sub_001F0800); /* call 0x001F0800 */

loc_001F79B1: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(ebx, LO8(eax));
    POP32(esp, ebx);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_001F79BF: ;
    SET_LO8(ebx, 1);

loc_001F79C1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001F7A10
 * Original: 0x001F7A10 - 0x001F7A23 (19 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001F7A10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F7A10: ;
    ecx = MEM32(ecx + 0x3C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F7A20; /* je: equal / zero */

loc_001F7A17: ;
    eax = ecx;
    ecx = MEM32(ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F7A17; /* jne: not equal / not zero */

loc_001F7A1F: ;
    esp += 4; return; /* ret */

loc_001F7A20: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_001F7A30
 * Original: 0x001F7A30 - 0x001F7F62 (1330 bytes, 424 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F7A30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F7A30: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    MEM8(esp + 0x13) = 1;
    MEM32(esp + 0x14) = 0;
    if (CMP_NE(_fa, _fb)) goto loc_001F7A6A; /* jne: not equal / not zero */

loc_001F7A4E: ;
    ebx = MEM32(esp + 0x20);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ecx = 0x6DAE68;
    MEM8(esp + 0x1B) = 0;
    PUSH32(esp, 0x001F7A63u); RECOMP_ABI_CALL(0x001D0B90u, sub_001D0B90); /* call 0x001D0B90 */

loc_001F7A63: ;
    edi = eax;
    goto loc_001F7B93;

loc_001F7A6A: ;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, 0x80000 (32-bit) */
    MEM32(esp + 0x14) = ebp;
    if (TEST_Z(_fa, _fb)) goto loc_001F7A80; /* je: equal / zero */

loc_001F7A79: ;
    eax = MEM32(esi + 0x6C);
    MEM32(esp + 0x14) = eax;

loc_001F7A80: ;
    eax = MEM32(esi + 0x30);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F7AAA; /* je: equal / zero */

loc_001F7A87: ;
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F7A9E; /* je: equal / zero */

loc_001F7A8C: ;
    edx = MEM32(ebp + 0xC0);
    edx = edx & eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F7F58; /* jne: not equal / not zero */

loc_001F7A9C: ;
    goto loc_001F7AAA;

loc_001F7A9E: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC0)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(ebp + 0xC0), eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F7F58; /* je: equal / zero */

loc_001F7AAA: ;
    _fa = (uint32_t)(MEM16(esi + 0x2A)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 0x2A), 0 (16-bit) */
    if (CMP_A(_fa, _fb)) goto loc_001F7F58; /* ja: above (unsigned >) */

loc_001F7AB5: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, 0x40000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F7AC6; /* je: equal / zero */

loc_001F7ABD: ;
    _fa = (uint32_t)(MEM32(esi + 0x6C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x6C), ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F7F58; /* je: equal / zero */

loc_001F7AC6: ;
    PUSH32(esp, ebp);
    ecx = esi;
    PUSH32(esp, 0x001F7ACEu); RECOMP_ABI_CALL(0x001F77B0u, sub_001F77B0); /* call 0x001F77B0 */

loc_001F7ACE: ;
    SET_LO8(ebx, LO8(eax));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F7B79; /* je: equal / zero */

loc_001F7AD8: ;
    eax = MEM32(esi + 0x40);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F7AE7; /* je: equal / zero */

loc_001F7ADF: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x001F7AE2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001F7AE0u); } /* indirect call */
    }

loc_001F7AE2: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(ebx, LO8(eax));

loc_001F7AE7: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F7B79; /* je: equal / zero */

loc_001F7AEF: ;
    _fa = (uint32_t)(MEM8(esi + 4)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 4), 0x40 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F7B1C; /* je: equal / zero */

loc_001F7AF5: ;
    eax = MEM32(ebp);
    ecx = ebp;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x001F7AFDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001F7AFAu); } /* indirect call */
    }

loc_001F7AFD: ;
    eax = eax & 0x1400;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1400) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1400 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F7B1C; /* jne: not equal / not zero */

loc_001F7B09: ;
    eax = MEM32(ebp + 0x31C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F7B1C; /* je: equal / zero */

loc_001F7B13: ;
    ecx = MEM32(esi + 0x34);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax + 0x24) (32-bit) */
    SET_LO8(ebx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */

loc_001F7B1C: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F7B79; /* je: equal / zero */

loc_001F7B20: ;
    SET_LO8(eax, MEM8(esi + 4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if ((((uint8_t)((uint8_t)(_fa) - (uint8_t)(_fb)) >> 7) == 0)) goto loc_001F7B79; /* jns: not sign (positive) */

loc_001F7B27: ;
    edx = MEM32(ebp);
    ecx = ebp;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x001F7B2Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001F7B2Cu); } /* indirect call */
    }

loc_001F7B2F: ;
    eax = eax & 0x1400;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1400) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1400 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F7B79; /* jne: not equal / not zero */

loc_001F7B3B: ;
    eax = MEM32(ebp + 0x31C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F7B79; /* je: equal / zero */

loc_001F7B45: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F7B6D; /* je: equal / zero */

loc_001F7B4D: ;
    eax = MEM32(esi + 0x34);
    ecx = MEM32(ebp + 0x1A8);
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ecx = 0x6DAE68;
    SET_LO8(ebx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    PUSH32(esp, 0x001F7B69u); RECOMP_ABI_CALL(0x001D0B50u, sub_001D0B50); /* call 0x001D0B50 */

loc_001F7B69: ;
    edi = eax;
    goto loc_001F7B87;

loc_001F7B6D: ;
    edx = MEM32(ebp + 0x1A8);
    _fa = (uint32_t)(MEM32(esi + 0x34)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(esi + 0x34), edx (32-bit) */
    SET_LO8(ebx, (TEST_NZ(_fa, _fb)) ? 1 : 0); /* setne */

loc_001F7B79: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ecx = 0x6DAE68;
    PUSH32(esp, 0x001F7B85u); RECOMP_ABI_CALL(0x001D0B50u, sub_001D0B50); /* call 0x001D0B50 */

loc_001F7B85: ;
    edi = eax;

loc_001F7B87: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F7E0D; /* je: equal / zero */

loc_001F7B8F: ;
    ebx = MEM32(esp + 0x20);

loc_001F7B93: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(esi + 0x2C));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0 (16-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001F7BAD; /* jbe: below or equal (unsigned <=) */

loc_001F7B9E: ;
    POP32(esp, edi);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM16(esi + 0x2C) = LO16(eax);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_001F7BAD: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F7D35; /* jne: not equal / not zero */

loc_001F7BB5: ;
    ecx = 0x6DAE68;
    PUSH32(esp, 0x001F7BBFu); RECOMP_ABI_CALL(0x001D0C00u, sub_001D0C00); /* call 0x001D0C00 */

loc_001F7BBF: ;
    edi = eax;
    eax = MEM32(esi + 0x20);
    MEM32(edi) = eax;
    ecx = MEM32(esi + 0x24);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(edi + 4) = ecx;
    SET_LO8(ecx, MEM8(esp + 0x13));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    MEM32(edi + 0x14) = esi;
    MEM32(edi + 8) = eax;
    edx = MEM32(0x5CE878);
    MEM32(edi + 0x1C) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_001F7C27; /* je: equal / zero */

loc_001F7BE5: ;
    MEM32(edi + 0x18) = ebp;
    eax = MEM32(ebp);
    ecx = ebp;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x001F7BF0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001F7BEDu); } /* indirect call */
    }

loc_001F7BF0: ;
    ecx = MEM32(edi + 0x14);
    MEM32(edi + 0xC) = eax;
    MEM32(ecx + 0x18) = 0xFFFFFFFFu;
    edx = MEM32(ebp);
    ecx = ebp;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x001F7C05u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001F7C02u); } /* indirect call */
    }

loc_001F7C05: ;
    eax = eax & 0x1400;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1400) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1400 (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(edi + 0x10) = ecx;
    SET_LO8(eax, MEM8(esi + 0x1C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F7C3E; /* je: equal / zero */

loc_001F7C1F: ;
    edx = MEM32(edi + 0x14);
    MEM32(edx + 0x18) = ebx;
    goto loc_001F7C3E;

loc_001F7C27: ;
    SET_LO8(ecx, MEM8(esi + 0x1C));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F7C3E; /* je: equal / zero */

loc_001F7C2E: ;
    MEM32(esi + 0x18) = ebx;
    MEM32(edi + 0x18) = eax;
    MEM32(edi + 0xC) = 0xFFFFFFFFu;
    MEM32(edi + 0x10) = eax;

loc_001F7C3E: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x90) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x90 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F7D09; /* jne: not equal / not zero */

loc_001F7C4A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x100000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x100000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F7CAE; /* je: equal / zero */

loc_001F7C51: ;
    PUSH32(esp, 0x1400);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x001F7C5Cu); RECOMP_ABI_CALL(0x00012ECDu, sub_00012ECD); /* call 0x00012ECD */

loc_001F7C5C: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F7CAE; /* je: equal / zero */

loc_001F7C63: ;
    eax = MEM32(ebp + 0x31C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F7CAE; /* je: equal / zero */

loc_001F7C6D: ;
    eax = MEM32(ebp);
    ecx = ebp;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x001F7C75u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001F7C72u); } /* indirect call */
    }

loc_001F7C75: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x3238);
    _fb = (uint32_t)(0x5CE880) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x5CE880;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(ecx, MEM8(eax + 0x2C3C));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F7E86; /* je: equal / zero */

loc_001F7C8E: ;
    ecx = MEM32(eax + 0x2C4C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esi + 0x20) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F7E86; /* jne: not equal / not zero */

loc_001F7C9D: ;
    eax = MEM32(edi + 0x14);
    edx = MEM32(esp + 0x14);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(ecx, MEM16(eax));
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    goto loc_001F7CF6;

loc_001F7CAE: ;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x200000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(esi + 4), 0x200000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F7CE7; /* je: equal / zero */

loc_001F7CB7: ;
    edx = MEM32(ebp);
    ecx = ebp;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x001F7CBFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001F7CBCu); } /* indirect call */
    }

loc_001F7CBF: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x3238);
    _fb = (uint32_t)(0x5CE880) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x5CE880;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(ecx, MEM8(eax + 0x2C3C));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F7E86; /* je: equal / zero */

loc_001F7CD8: ;
    eax = MEM32(eax + 0x2C4C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x20) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F7E86; /* je: equal / zero */

loc_001F7CE7: ;
    edx = MEM32(edi + 0x14);
    ecx = MEM32(esp + 0x14);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(edx));
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);

loc_001F7CF6: ;
    ecx = 0x6DAE68;
    PUSH32(esp, 0x001F7D00u); RECOMP_ABI_CALL(0x001D11A0u, sub_001D11A0); /* call 0x001D11A0 */

loc_001F7D00: ;
    MEM32(edi + 0x20) = 2;
    goto loc_001F7D10;

loc_001F7D09: ;
    MEM32(edi + 0x20) = 1;

loc_001F7D10: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F7DF5; /* je: equal / zero */

loc_001F7D1C: ;
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x10 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F7DF5; /* jne: not equal / not zero */

loc_001F7D25: ;
    PUSH32(esp, esi);
    ecx = 0x6DAE68;
    PUSH32(esp, 0x001F7D30u); RECOMP_ABI_CALL(0x001D1010u, sub_001D1010); /* call 0x001D1010 */

loc_001F7D30: ;
    goto loc_001F7DF5;

loc_001F7D35: ;
    ecx = MEM32(0x5CE878);
    MEM32(edi + 0x1C) = ecx;
    ecx = MEM32(edi + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F7F58; /* je: equal / zero */

loc_001F7D4A: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F7D67; /* je: equal / zero */

loc_001F7D52: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F7D67; /* jne: not equal / not zero */

loc_001F7D57: ;
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0xC) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0xC (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F7D67; /* jne: not equal / not zero */

loc_001F7D5C: ;
    PUSH32(esp, edi);
    ecx = 0x6DAE68;
    PUSH32(esp, 0x001F7D67u); RECOMP_ABI_CALL(0x001D0FC0u, sub_001D0FC0); /* call 0x001D0FC0 */

loc_001F7D67: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x40 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F7D95; /* je: equal / zero */

loc_001F7D6F: ;
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp HI8(eax), 0 (8-bit) */
    if ((((uint8_t)((uint8_t)(_fas) - (uint8_t)(_fbs)) >> 7) != 0)) goto loc_001F7D95; /* js: sign (negative) */

loc_001F7D73: ;
    eax = MEM32(edi + 0x14);
    edx = MEM32(esp + 0x14);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(ecx, MEM16(eax));
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = 0x6DAE68;
    PUSH32(esp, 0x001F7D8Cu); RECOMP_ABI_CALL(0x001D11A0u, sub_001D11A0); /* call 0x001D11A0 */

loc_001F7D8C: ;
    MEM32(edi + 0x20) = 2;
    goto loc_001F7DE6;

loc_001F7D95: ;
    edx = MEM32(esi + 8);
    ebx = MEM32(edi + 8);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + 8) = ebx;
    SET_LO16(eax, MEM16(esi + 0x72));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0 (16-bit) */
    ecx = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_001F7DE6; /* je: equal / zero */

loc_001F7DAB: ;
    eax = ZX16(LO16(eax));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001F7DE6; /* jle: less or equal (signed <=) */

loc_001F7DB2: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp HI8(eax), 0 (8-bit) */
    if ((((uint8_t)((uint8_t)(_fa) - (uint8_t)(_fb)) >> 7) == 0)) goto loc_001F7DDF; /* jns: not sign (positive) */

loc_001F7DB9: ;
    _fa = (uint32_t)(MEM32(edi + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x20), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F7DDF; /* jne: not equal / not zero */

loc_001F7DBF: ;
    edx = MEM32(edi + 0x14);
    ecx = MEM32(esp + 0x14);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(edx));
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    ecx = 0x6DAE68;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001F7DD8u); RECOMP_ABI_CALL(0x001D11A0u, sub_001D11A0); /* call 0x001D11A0 */

loc_001F7DD8: ;
    MEM32(edi + 0x20) = 2;

loc_001F7DDF: ;
    MEM32(edi + 8) = 0;

loc_001F7DE6: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x20 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F7DF5; /* je: equal / zero */

loc_001F7DEE: ;
    MEM32(edi + 0x20) = 3;

loc_001F7DF5: ;
    MEM32(0x6DAE70) = MEM32(0x6DAE70) + 1;
    _fa = (uint32_t)(MEM32(0x6DAE70)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    SET_LO16(ecx, MEM16(esi + 0x2E));
    POP32(esp, edi);
    MEM16(esi + 0x2C) = LO16(ecx);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_001F7E0D: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ecx = 0x6DAE68;
    PUSH32(esp, 0x001F7E19u); RECOMP_ABI_CALL(0x001D0B50u, sub_001D0B50); /* call 0x001D0B50 */

loc_001F7E19: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F7F58; /* je: equal / zero */

loc_001F7E23: ;
    eax = MEM32(edi + 0x20);
    edx = MEM32(0x5CE878);
    ebx = 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(edi + 0x1C) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_001F7F58; /* je: equal / zero */

loc_001F7E3C: ;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 0x10 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F7E9B; /* jne: not equal / not zero */

loc_001F7E44: ;
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp HI8(ecx), 0 (8-bit) */
    if ((((uint8_t)((uint8_t)(_fa) - (uint8_t)(_fb)) >> 7) == 0)) goto loc_001F7E4D; /* jns: not sign (positive) */

loc_001F7E48: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F7E86; /* je: equal / zero */

loc_001F7E4D: ;
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F7E69; /* je: equal / zero */

loc_001F7E52: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F7E5C; /* je: equal / zero */

loc_001F7E57: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F7E69; /* jne: not equal / not zero */

loc_001F7E5C: ;
    MEM32(edi + 0x20) = ebx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_001F7E69: ;
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F7E86; /* je: equal / zero */

loc_001F7E6E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F7E78; /* je: equal / zero */

loc_001F7E73: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F7E86; /* jne: not equal / not zero */

loc_001F7E78: ;
    PUSH32(esp, esi);
    ecx = 0x6DAE68;
    MEM32(edi + 0x20) = ebx;
    PUSH32(esp, 0x001F7E86u); RECOMP_ABI_CALL(0x001D1010u, sub_001D1010); /* call 0x001D1010 */

loc_001F7E86: ;
    PUSH32(esp, edi);
    ecx = 0x6DAE68;
    PUSH32(esp, 0x001F7E91u); RECOMP_ABI_CALL(0x001D0FC0u, sub_001D0FC0); /* call 0x001D0FC0 */

loc_001F7E91: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_001F7E9B: ;
    ecx = 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F7ED9; /* jne: not equal / not zero */

loc_001F7EA4: ;
    MEM32(edi + 8) = 0;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp HI8(eax), 0 (8-bit) */
    if ((((uint8_t)((uint8_t)(_fa) - (uint8_t)(_fb)) >> 7) == 0)) goto loc_001F7EB7; /* jns: not sign (positive) */

loc_001F7EB2: ;
    MEM32(edi + 0x20) = ecx;
    goto loc_001F7F25;

loc_001F7EB7: ;
    ecx = MEM32(edi + 0x14);
    eax = MEM32(esp + 0x14);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(edi + 0x20) = 2;
    SET_LO16(edx, MEM16(ecx));
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    ecx = 0x6DAE68;
    PUSH32(esp, edx);
    PUSH32(esp, 0x001F7ED7u); RECOMP_ABI_CALL(0x001D11A0u, sub_001D11A0); /* call 0x001D11A0 */

loc_001F7ED7: ;
    goto loc_001F7F25;

loc_001F7ED9: ;
    edx = MEM32(esi + 8);
    ebp = MEM32(edi + 8);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + edx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    MEM32(edi + 8) = ebp;
    if (CMP_NE(_fa, _fb)) goto loc_001F7EF0; /* jne: not equal / not zero */

loc_001F7EE9: ;
    MEM32(edi + 0x20) = 3;

loc_001F7EF0: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp HI8(eax), 0 (8-bit) */
    if ((((uint8_t)((uint8_t)(_fa) - (uint8_t)(_fb)) >> 7) == 0)) goto loc_001F7F25; /* jns: not sign (positive) */

loc_001F7EF7: ;
    eax = ZX16(MEM16(esi + 0x72));
    _fa = (uint32_t)(MEM32(edi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 8), eax (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001F7F25; /* jle: less or equal (signed <=) */

loc_001F7F00: ;
    _fa = (uint32_t)(MEM32(edi + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x20), ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F7F25; /* jne: not equal / not zero */

loc_001F7F05: ;
    edx = MEM32(edi + 0x14);
    ecx = MEM32(esp + 0x14);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(edx));
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    ecx = 0x6DAE68;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001F7F1Eu); RECOMP_ABI_CALL(0x001D11A0u, sub_001D11A0); /* call 0x001D11A0 */

loc_001F7F1E: ;
    MEM32(edi + 0x20) = 2;

loc_001F7F25: ;
    _fa = (uint32_t)(MEM32(edi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x708) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 8), 0x708 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001F7F58; /* jle: less or equal (signed <=) */

loc_001F7F2E: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 8 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F7E5C; /* jne: not equal / not zero */

loc_001F7F3A: ;
    PUSH32(esp, edi);
    ecx = 0x6DAE68;
    PUSH32(esp, 0x001F7F45u); RECOMP_ABI_CALL(0x001D0FC0u, sub_001D0FC0); /* call 0x001D0FC0 */

loc_001F7F45: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001F7F58; /* je: equal / zero */

loc_001F7F4D: ;
    PUSH32(esp, esi);
    ecx = 0x6DAE68;
    PUSH32(esp, 0x001F7F58u); RECOMP_ABI_CALL(0x001D1010u, sub_001D1010); /* call 0x001D1010 */

loc_001F7F58: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001F7F70
 * Original: 0x001F7F70 - 0x001F7F75 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F7F70(void)
{

loc_001F7F70: ;
    eax = MEM32(esp + 8);
    esp += 4; return; /* ret */

}

/**
 * sub_001F7F80
 * Original: 0x001F7F80 - 0x001F7F81 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F7F80(void)
{

loc_001F7F80: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001F7F90
 * Original: 0x001F7F90 - 0x001F7FB0 (32 bytes, 9 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F7F90(void)
{

loc_001F7F90: ;
    edx = MEM32(esp + 8);
    eax = ecx;
    ecx = MEM32(esp + 4);
    MEM32(eax + 4) = ecx;
    ecx = MEM32(esp + 0xC);
    MEM32(eax) = 0;
    MEM32(eax + 8) = edx;
    MEM32(eax + 0xC) = ecx;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001F7FC0
 * Original: 0x001F7FC0 - 0x001F7FCA (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F7FC0(void)
{

loc_001F7FC0: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 8) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001F7FD0
 * Original: 0x001F7FD0 - 0x001F7FD9 (9 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F7FD0(void)
{

loc_001F7FD0: ;
    eax = MEM32(esp + 4);
    MEM32(ecx) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001F7FE0
 * Original: 0x001F7FE0 - 0x001F7FEE (14 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F7FE0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F7FE0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0xC) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_001F7FF0
 * Original: 0x001F7FF0 - 0x001F84AC (1212 bytes, 429 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F7FF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F7FF0: ;
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 4);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1A (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_001F84A6; /* ja: above (unsigned >) */

loc_001F8000: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    { uint32_t _jt = MEM32(eax * 4 + 0x1F84AC); /* switch: 27 entries, 24 targets */
    if (_jt == 0x001F8009u) goto loc_001F8009;
    if (_jt == 0x001F8023u) goto loc_001F8023;
    if (_jt == 0x001F803Fu) goto loc_001F803F;
    if (_jt == 0x001F8051u) goto loc_001F8051;
    if (_jt == 0x001F806Bu) goto loc_001F806B;
    if (_jt == 0x001F8085u) goto loc_001F8085;
    if (_jt == 0x001F80A2u) goto loc_001F80A2;
    if (_jt == 0x001F80C1u) goto loc_001F80C1;
    if (_jt == 0x001F80FCu) goto loc_001F80FC;
    if (_jt == 0x001F81FBu) goto loc_001F81FB;
    if (_jt == 0x001F821Au) goto loc_001F821A;
    if (_jt == 0x001F8239u) goto loc_001F8239;
    if (_jt == 0x001F8261u) goto loc_001F8261;
    if (_jt == 0x001F8289u) goto loc_001F8289;
    if (_jt == 0x001F82D7u) goto loc_001F82D7;
    if (_jt == 0x001F831Eu) goto loc_001F831E;
    if (_jt == 0x001F834Au) goto loc_001F834A;
    if (_jt == 0x001F8384u) goto loc_001F8384;
    if (_jt == 0x001F83A5u) goto loc_001F83A5;
    if (_jt == 0x001F83C6u) goto loc_001F83C6;
    if (_jt == 0x001F83F3u) goto loc_001F83F3;
    if (_jt == 0x001F840Du) goto loc_001F840D;
    if (_jt == 0x001F843Du) goto loc_001F843D;
    if (_jt == 0x001F84A4u) goto loc_001F84A4;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_001F8009: ;
    eax = MEM32(edi + 8);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, eax);
    ecx = 0x6DBFB0;
    PUSH32(esp, 0x001F801Bu); RECOMP_ABI_CALL(0x001D2600u, sub_001D2600); /* call 0x001D2600 */

loc_001F801B: ;
    eax = MEM32(edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, edi);
    esp += 12; return; /* ret 8 */

loc_001F8023: ;
    ecx = MEM32(edi + 0xC);
    edx = MEM32(edi + 8);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = 0x6DBFB0;
    PUSH32(esp, 0x001F8037u); RECOMP_ABI_CALL(0x001D2600u, sub_001D2600); /* call 0x001D2600 */

loc_001F8037: ;
    eax = MEM32(edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, edi);
    esp += 12; return; /* ret 8 */

loc_001F803F: ;
    ecx = 0x510040;
    PUSH32(esp, 0x001F8049u); RECOMP_ABI_CALL(0x0016C9B0u, sub_0016C9B0); /* call 0x0016C9B0 */

loc_001F8049: ;
    eax = MEM32(edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, edi);
    esp += 12; return; /* ret 8 */

loc_001F8051: ;
    eax = MEM32(edi + 0xC);
    ecx = MEM32(edi + 8);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = 0x699E08;
    PUSH32(esp, 0x001F8063u); RECOMP_ABI_CALL(0x00199830u, sub_00199830); /* call 0x00199830 */

loc_001F8063: ;
    eax = MEM32(edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, edi);
    esp += 12; return; /* ret 8 */

loc_001F806B: ;
    edx = MEM32(edi + 8);
    eax = MEM32(edi + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = 0x699E08;
    PUSH32(esp, 0x001F807Du); RECOMP_ABI_CALL(0x00199360u, sub_00199360); /* call 0x00199360 */

loc_001F807D: ;
    eax = MEM32(edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, edi);
    esp += 12; return; /* ret 8 */

loc_001F8085: ;
    eax = MEM32(edi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F84A4; /* je: equal / zero */

loc_001F8091: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001F8097u); RECOMP_ABI_CALL(0x001A3D30u, sub_001A3D30); /* call 0x001A3D30 */

loc_001F8097: ;
    eax = MEM32(edi);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, edi);
    esp += 12; return; /* ret 8 */

loc_001F80A2: ;
    eax = MEM32(edi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F84A4; /* je: equal / zero */

loc_001F80AE: ;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001F80B6u); RECOMP_ABI_CALL(0x001A51E0u, sub_001A51E0); /* call 0x001A51E0 */

loc_001F80B6: ;
    eax = MEM32(edi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, edi);
    esp += 12; return; /* ret 8 */

loc_001F80C1: ;
    esi = MEM32(esp + 0x14);
    PUSH32(esp, 0x1400);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001F80D0u); RECOMP_ABI_CALL(0x00012ECDu, sub_00012ECD); /* call 0x00012ECD */

loc_001F80D0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F84A4; /* je: equal / zero */

loc_001F80DB: ;
    eax = MEM32(esi + 0xCC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F84A4; /* je: equal / zero */

loc_001F80E9: ;
    ecx = eax;
    eax = MEM32(edi + 8);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x001F80F4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001F80F1u); } /* indirect call */
    }

loc_001F80F4: ;
    eax = MEM32(edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, edi);
    esp += 12; return; /* ret 8 */

loc_001F80FC: ;
    eax = MEM32(0x5142B4);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esp + 0x14) = ebx;
    if (CMP_LE(_fas, _fbs)) goto loc_001F84A4; /* jle: less or equal (signed <=) */

loc_001F810F: ;
    PUSH32(esp, ebp);

loc_001F8110: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x001F8119u); RECOMP_ABI_CALL(0x001836C0u, sub_001836C0); /* call 0x001836C0 */

loc_001F8119: ;
    ecx = MEM32(eax + 4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x001F8126u); RECOMP_ABI_CALL(0x0019C4B0u, sub_0019C4B0); /* call 0x0019C4B0 */

loc_001F8126: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F81D5; /* je: equal / zero */

loc_001F8130: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x001F8137u); RECOMP_ABI_CALL(0x001836C0u, sub_001836C0); /* call 0x001836C0 */

loc_001F8137: ;
    ecx = MEM32(eax + 4);
    edx = ZX16(MEM16(ecx + ebx + 0xA8));
    eax = MEM32(edi + 8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F81D5; /* jne: not equal / not zero */

loc_001F8150: ;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebp);
    PUSH32(esp, 0x001F8158u); RECOMP_ABI_CALL(0x001836C0u, sub_001836C0); /* call 0x001836C0 */

loc_001F8158: ;
    eax = MEM32(eax + 4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM16(eax + ebx + 0xA0)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebp)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + ebx + 0xA0), LO16(ebp) (16-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001F81D5; /* jle: less or equal (signed <=) */

loc_001F8168: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F81A4; /* je: equal / zero */

loc_001F816C: ;
    edx = MEM32(esi + 0xBC);
    eax = (uint32_t)(int32_t)SMEM16(edx + 0xD0);
    ecx = MEM32(edi + 0xC);
    PUSH32(esp, ecx);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x001F8184u); RECOMP_ABI_CALL(0x00176270u, sub_00176270); /* call 0x00176270 */

loc_001F8184: ;
    ecx = MEM32(esi + 0xBC);
    edx = (uint32_t)(int32_t)SMEM16(ecx + 0xD0);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = (uint32_t)((int32_t)edx * (int32_t)0x3238);
    MEM32(edx + 0x5D0684) = 6;

loc_001F81A4: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x001F81ACu); RECOMP_ABI_CALL(0x001836C0u, sub_001836C0); /* call 0x001836C0 */

loc_001F81AC: ;
    ecx = MEM32(eax + 4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x001F81B9u); RECOMP_ABI_CALL(0x0019C4B0u, sub_0019C4B0); /* call 0x0019C4B0 */

loc_001F81B9: ;
    PUSH32(esp, 0);
    esi = eax;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x001F81C3u); RECOMP_ABI_CALL(0x001836C0u, sub_001836C0); /* call 0x001836C0 */

loc_001F81C3: ;
    eax = MEM32(eax + 4);
    ecx = (uint32_t)(int32_t)SMEM16(eax + ebx + 0xA0);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001F8168; /* jl: less (signed <) */

loc_001F81D5: ;
    eax = MEM32(esp + 0x18);
    ecx = MEM32(0x5142B4);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xD0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0xD0;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x18) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_001F8110; /* jl: less (signed <) */

loc_001F81F2: ;
    eax = MEM32(edi);
    POP32(esp, ebp);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, edi);
    esp += 12; return; /* ret 8 */

loc_001F81FB: ;
    eax = MEM32(edi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F84A4; /* je: equal / zero */

loc_001F8207: ;
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001F820Fu); RECOMP_ABI_CALL(0x00011645u, sub_00011645); /* call 0x00011645 */

loc_001F820F: ;
    eax = MEM32(edi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, edi);
    esp += 12; return; /* ret 8 */

loc_001F821A: ;
    eax = MEM32(edi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F84A4; /* je: equal / zero */

loc_001F8226: ;
    PUSH32(esp, 0xFFFFFFFBu);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001F822Eu); RECOMP_ABI_CALL(0x00011645u, sub_00011645); /* call 0x00011645 */

loc_001F822E: ;
    eax = MEM32(edi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, edi);
    esp += 12; return; /* ret 8 */

loc_001F8239: ;
    edx = MEM32(edi + 8);
    PUSH32(esp, edx);
    PUSH32(esp, 3);
    ecx = 0x699E08;
    PUSH32(esp, 0x001F8249u); RECOMP_ABI_CALL(0x00199830u, sub_00199830); /* call 0x00199830 */

loc_001F8249: ;
    eax = MEM32(edi + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    ecx = 0x699E08;
    PUSH32(esp, 0x001F8259u); RECOMP_ABI_CALL(0x00199830u, sub_00199830); /* call 0x00199830 */

loc_001F8259: ;
    eax = MEM32(edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, edi);
    esp += 12; return; /* ret 8 */

loc_001F8261: ;
    ecx = MEM32(edi + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    ecx = 0x699E08;
    PUSH32(esp, 0x001F8271u); RECOMP_ABI_CALL(0x00199830u, sub_00199830); /* call 0x00199830 */

loc_001F8271: ;
    edx = MEM32(edi + 8);
    PUSH32(esp, edx);
    PUSH32(esp, 4);
    ecx = 0x699E08;
    PUSH32(esp, 0x001F8281u); RECOMP_ABI_CALL(0x00199830u, sub_00199830); /* call 0x00199830 */

loc_001F8281: ;
    eax = MEM32(edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, edi);
    esp += 12; return; /* ret 8 */

loc_001F8289: ;
    eax = MEM32(edi + 8);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx = 0x710868;
    PUSH32(esp, 0x001F8299u); RECOMP_ABI_CALL(0x001DBD30u, sub_001DBD30); /* call 0x001DBD30 */

loc_001F8299: ;
    esi = MEM32(esp + 0x14);
    PUSH32(esp, 0x1400);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001F82A8u); RECOMP_ABI_CALL(0x00012ECDu, sub_00012ECD); /* call 0x00012ECD */

loc_001F82A8: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = 0x710868;
    PUSH32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_001F82CA; /* je: equal / zero */

loc_001F82BD: ;
    PUSH32(esp, 0x001F82C2u); RECOMP_ABI_CALL(0x001DBA30u, sub_001DBA30); /* call 0x001DBA30 */

loc_001F82C2: ;
    eax = MEM32(edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, edi);
    esp += 12; return; /* ret 8 */

loc_001F82CA: ;
    PUSH32(esp, 0x001F82CFu); RECOMP_ABI_CALL(0x001DBAA0u, sub_001DBAA0); /* call 0x001DBAA0 */

loc_001F82CF: ;
    eax = MEM32(edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, edi);
    esp += 12; return; /* ret 8 */

loc_001F82D7: ;
    esi = MEM32(esp + 0x14);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(ecx, MEM16(edi + 8));
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    ecx = 0x6CD5D0;
    PUSH32(esp, 0x001F82EDu); RECOMP_ABI_CALL(0x001C60E0u, sub_001C60E0); /* call 0x001C60E0 */

loc_001F82ED: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(edx, MEM16(edi + 8));
    PUSH32(esp, esi);
    ecx = 0x6CD5D0;
    PUSH32(esp, edx);
    PUSH32(esp, 0x001F82FFu); RECOMP_ABI_CALL(0x001C5E40u, sub_001C5E40); /* call 0x001C5E40 */

loc_001F82FF: ;
    eax = MEM32(esp + 0x10);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(ecx, MEM16(edi + 8));
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    ecx = 0x6CD5D0;
    PUSH32(esp, 0x001F8316u); RECOMP_ABI_CALL(0x001C5E80u, sub_001C5E80); /* call 0x001C5E80 */

loc_001F8316: ;
    eax = MEM32(edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, edi);
    esp += 12; return; /* ret 8 */

loc_001F831E: ;
    edx = MEM32(edi + 8);
    PUSH32(esp, edx);
    ecx = 0x6DAE68;
    PUSH32(esp, 0x001F832Cu); RECOMP_ABI_CALL(0x001D14E0u, sub_001D14E0); /* call 0x001D14E0 */

loc_001F832C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F84A4; /* jne: not equal / not zero */

loc_001F8334: ;
    eax = MEM32(edi + 8);
    PUSH32(esp, eax);
    ecx = 0x6DAE68;
    PUSH32(esp, 0x001F8342u); RECOMP_ABI_CALL(0x001D0AD0u, sub_001D0AD0); /* call 0x001D0AD0 */

loc_001F8342: ;
    eax = MEM32(edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, edi);
    esp += 12; return; /* ret 8 */

loc_001F834A: ;
    ecx = MEM32(edi + 8);
    PUSH32(esp, ecx);
    ecx = 0x6DAE68;
    PUSH32(esp, 0x001F8358u); RECOMP_ABI_CALL(0x001D1510u, sub_001D1510); /* call 0x001D1510 */

loc_001F8358: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F84A4; /* jne: not equal / not zero */

loc_001F8360: ;
    edx = MEM32(edi + 8);
    PUSH32(esp, edx);
    ecx = 0x6DAE68;
    PUSH32(esp, 0x001F836Eu); RECOMP_ABI_CALL(0x001D0C90u, sub_001D0C90); /* call 0x001D0C90 */

loc_001F836E: ;
    eax = ZX16(MEM16(eax));
    PUSH32(esp, eax);
    ecx = 0x6DAE68;
    PUSH32(esp, 0x001F837Cu); RECOMP_ABI_CALL(0x001D0AD0u, sub_001D0AD0); /* call 0x001D0AD0 */

loc_001F837C: ;
    eax = MEM32(edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, edi);
    esp += 12; return; /* ret 8 */

loc_001F8384: ;
    ecx = MEM32(edi + 8);
    PUSH32(esp, ecx);
    ecx = 0x6DAE68;
    PUSH32(esp, 0x001F8392u); RECOMP_ABI_CALL(0x001D0C80u, sub_001D0C80); /* call 0x001D0C80 */

loc_001F8392: ;
    PUSH32(esp, eax);
    ecx = 0x6DAE68;
    PUSH32(esp, 0x001F839Du); RECOMP_ABI_CALL(0x001D1010u, sub_001D1010); /* call 0x001D1010 */

loc_001F839D: ;
    eax = MEM32(edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, edi);
    esp += 12; return; /* ret 8 */

loc_001F83A5: ;
    edx = MEM32(edi + 8);
    PUSH32(esp, edx);
    ecx = 0x6DAE68;
    PUSH32(esp, 0x001F83B3u); RECOMP_ABI_CALL(0x001D0C90u, sub_001D0C90); /* call 0x001D0C90 */

loc_001F83B3: ;
    PUSH32(esp, eax);
    ecx = 0x6DAE68;
    PUSH32(esp, 0x001F83BEu); RECOMP_ABI_CALL(0x001D1010u, sub_001D1010); /* call 0x001D1010 */

loc_001F83BE: ;
    eax = MEM32(edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, edi);
    esp += 12; return; /* ret 8 */

loc_001F83C6: ;
    eax = MEM32(edi + 8);
    PUSH32(esp, eax);
    ecx = 0x6DAE68;
    PUSH32(esp, 0x001F83D4u); RECOMP_ABI_CALL(0x001D0C80u, sub_001D0C80); /* call 0x001D0C80 */

loc_001F83D4: ;
    ecx = MEM32(esp + 0x14);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(edx, MEM16(edi + 8));
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = 0x6DAE68;
    PUSH32(esp, edx);
    PUSH32(esp, 0x001F83EBu); RECOMP_ABI_CALL(0x001D11A0u, sub_001D11A0); /* call 0x001D11A0 */

loc_001F83EB: ;
    eax = MEM32(edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, edi);
    esp += 12; return; /* ret 8 */

loc_001F83F3: ;
    eax = MEM32(edi + 0xC);
    ecx = MEM32(edi + 8);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = 0x6DAE68;
    PUSH32(esp, 0x001F8405u); RECOMP_ABI_CALL(0x001D0C50u, sub_001D0C50); /* call 0x001D0C50 */

loc_001F8405: ;
    eax = MEM32(edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, edi);
    esp += 12; return; /* ret 8 */

loc_001F840D: ;
    edx = MEM32(edi + 8);
    PUSH32(esp, edx);
    ecx = 0x6DAE68;
    PUSH32(esp, 0x001F841Bu); RECOMP_ABI_CALL(0x001D0C90u, sub_001D0C90); /* call 0x001D0C90 */

loc_001F841B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F84A4; /* je: equal / zero */

loc_001F8423: ;
    ecx = MEM32(edi + 0xC);
    edx = ZX16(MEM16(eax));
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = 0x6DAE68;
    PUSH32(esp, 0x001F8435u); RECOMP_ABI_CALL(0x001D0C50u, sub_001D0C50); /* call 0x001D0C50 */

loc_001F8435: ;
    eax = MEM32(edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, edi);
    esp += 12; return; /* ret 8 */

loc_001F843D: ;
    eax = MEM32(edi + 8);
    ecx = MEM32(0x6C416C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001F844Cu); RECOMP_ABI_CALL(0x001A6E80u, sub_001A6E80); /* call 0x001A6E80 */

loc_001F844C: ;
    ecx = MEM32(edi + 8);
    PUSH32(esp, ecx);
    ecx = MEM32(0x6C416C);
    esi = eax;
    PUSH32(esp, 0x001F845Du); RECOMP_ABI_CALL(0x001A6E80u, sub_001A6E80); /* call 0x001A6E80 */

loc_001F845D: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    ebx = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_001F84A4; /* je: equal / zero */

loc_001F8464: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F84A4; /* je: equal / zero */

loc_001F8469: ;
    PUSH32(esp, 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001F8471u); RECOMP_ABI_CALL(0x00011645u, sub_00011645); /* call 0x00011645 */

loc_001F8471: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x5CABB0);
    PUSH32(esp, 0x5CE880);
    PUSH32(esp, 0x001F8489u); RECOMP_ABI_CALL(0x001086C0u, sub_001086C0); /* call 0x001086C0 */

loc_001F8489: ;
    PUSH32(esp, 0xFFFFFFFBu);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001F8491u); RECOMP_ABI_CALL(0x00011645u, sub_00011645); /* call 0x00011645 */

loc_001F8491: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x5CABB0);
    PUSH32(esp, 0x5CE880);
    PUSH32(esp, 0x001F84A1u); RECOMP_ABI_CALL(0x00108890u, sub_00108890); /* call 0x00108890 */

loc_001F84A1: ;
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001F84A4: ;
    POP32(esp, esi);
    POP32(esp, ebx);

loc_001F84A6: ;
    eax = MEM32(edi);
    POP32(esp, edi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001F8540
 * Original: 0x001F8540 - 0x001F859A (90 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F8540(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F8540: ;
    eax = MEM32(ecx + 4);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001F854F; /* jl: less (signed <) */

loc_001F854B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001F854F: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, edi);
    MEM32(ecx + 4) = eax;
    eax = MEM32(ecx + 0xC);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F8570; /* je: equal / zero */

loc_001F855D: ;
    edx = MEM32(eax);
    MEM32(ecx + 0xC) = edx;
    MEM32(eax) = edi;
    MEM32(eax + 4) = edi;
    MEM32(eax + 8) = edi;
    MEM32(eax + 0xC) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001F8570: ;
    edx = MEM32(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001F857B; /* jl: less (signed <) */

loc_001F8576: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001F857B: ;
    eax = edx;
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x71D6B0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x71D6B0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = edx + 1;
    MEM32(ecx) = edx;
    if ((_fa == 0)) goto loc_001F8597; /* je: equal / zero */

loc_001F858C: ;
    MEM32(eax) = edi;
    MEM32(eax + 4) = edi;
    MEM32(eax + 8) = edi;
    MEM32(eax + 0xC) = edi;

loc_001F8597: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001F85A0
 * Original: 0x001F85A0 - 0x001F85C0 (32 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F85A0(void)
{

loc_001F85A0: ;
    ecx = 0x51778C;
    PUSH32(esp, 0x001F85AAu); RECOMP_ABI_CALL(0x001F8540u, sub_001F8540); /* call 0x001F8540 */

loc_001F85AA: ;
    ecx = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    MEM32(eax + 4) = ecx;
    ecx = MEM32(esp + 0xC);
    MEM32(eax + 8) = edx;
    MEM32(eax + 0xC) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_001F85C0
 * Original: 0x001F85C0 - 0x001F8608 (72 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F85C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F85C0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = 0x51778C;
    PUSH32(esp, 0x001F85CCu); RECOMP_ABI_CALL(0x001F8540u, sub_001F8540); /* call 0x001F8540 */

loc_001F85CC: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x18);
    esi = eax;
    eax = MEM32(esp + 0x10);
    MEM32(esi + 4) = eax;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    MEM32(esi + 8) = ecx;
    MEM32(esi + 0xC) = edx;
    PUSH32(esp, 0x001F85EDu); RECOMP_ABI_CALL(0x001D0930u, sub_001D0930); /* call 0x001D0930 */

loc_001F85ED: ;
    edi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = edi;
    PUSH32(esp, 0x001F85F9u); RECOMP_ABI_CALL(0x001F7A10u, sub_001F7A10); /* call 0x001F7A10 */

loc_001F85F9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F8602; /* je: equal / zero */

loc_001F85FD: ;
    POP32(esp, edi);
    MEM32(eax) = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001F8602: ;
    MEM32(edi + 0x3C) = esi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001F8610
 * Original: 0x001F8610 - 0x001F865A (74 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F8610(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F8610: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax + 0x1C);
    eax = MEM32(eax + 8);
    PUSH32(esp, esi);
    MEM32(edx) = eax;
    PUSH32(esp, edi);
    esi = eax + 0xC;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x100;
    edi = edx + 4;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = MEM32(edx);
    edi = MEM32(eax);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001F8652; /* jle: less or equal (signed <=) */

loc_001F8637: ;
    eax = esi;
    /* nop */

loc_001F8640: ;
    esi = MEM32(eax);
    MEM32(edx + esi * 4 + 4) = eax;
    esi = MEM32(edx);
    edi = MEM32(esi);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001F8640; /* jl: less (signed <) */

loc_001F8652: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001F8660
 * Original: 0x001F8660 - 0x001F876B (267 bytes, 97 insns)
 * Category: game_io
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F8660(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F8660: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x24);
    eax = MEM32(edi + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001F8674u); RECOMP_ABI_CALL(0x0011D960u, sub_0011D960); /* call 0x0011D960 */

loc_001F8674: ;
    ebp = MEM32(edi + 0x1C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    esi = eax;
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM32(esp + 0x18) = esi;
    MEM8(0x50FF48) = LO8(eax);
    if (CMP_NE(_fa, _fb)) goto loc_001F86AC; /* jne: not equal / not zero */

loc_001F868E: ;
    PUSH32(esp, 0x2F);
    PUSH32(esp, 0x4B3650);
    PUSH32(esp, 0x4B3620);
    PUSH32(esp, 0x4B3610);
    PUSH32(esp, 0x49657C);
    PUSH32(esp, 0x001F86A9u); RECOMP_ABI_CALL(0x0014E700u, sub_0014E700); /* call 0x0014E700 */

loc_001F86A9: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001F86AC: ;
    edx = MEM32(edi + 4);
    ecx = esi;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x404);
    PUSH32(esp, 0x31);
    PUSH32(esp, 0x4B3650);
    PUSH32(esp, 0x4B3620);
    PUSH32(esp, 1);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001F86CFu); RECOMP_ABI_CALL(0x001050A0u, sub_001050A0); /* call 0x001050A0 */

loc_001F86CF: ;
    ebx = eax;
    MEM32(ebp) = ebx;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    eax = ebx + 8;
    MEM32(ebx) = esi;
    MEM32(ebx + 4) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_001F875E; /* jle: less or equal (signed <=) */

loc_001F86E5: ;
    MEM32(esp + 0x10) = ebp;
    goto loc_001F86F0;

loc_001F86EB: ;
    edi = MEM32(esp + 0x24);
    /* nop */

loc_001F86F0: ;
    esi = MEM32(ebx + 4);
    eax = MEM32(esp + 0x10);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(edi + 8);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001F870Du); RECOMP_ABI_CALL(0x0011D970u, sub_0011D970); /* call 0x0011D970 */

loc_001F870D: ;
    ecx = MEM32(esp + 0x24);
    MEM32(esi) = ecx;
    edx = MEM32(esp + 0x24);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x100;
    edi = esi + 4;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = MEM32(esi);
    edi = MEM32(eax);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xC;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001F8747; /* jle: less or equal (signed <=) */

loc_001F8733: ;
    eax = edx;

loc_001F8735: ;
    edx = MEM32(eax);
    MEM32(esi + edx * 4 + 4) = eax;
    edx = MEM32(esi);
    edi = MEM32(edx);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001F8735; /* jl: less (signed <) */

loc_001F8747: ;
    ecx = MEM32(esp + 0x10);
    eax = MEM32(esp + 0x18);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x404;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    MEM32(esp + 0x10) = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_001F86EB; /* jl: less (signed <) */

loc_001F875E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 1;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001F8770
 * Original: 0x001F8770 - 0x001F87A3 (51 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F8770(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F8770: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F8784; /* jne: not equal / not zero */

loc_001F8779: ;
    eax = MEM32(esp + 0xC);
    MEM32(eax) = 0;
    esp += 4; return; /* ret */

loc_001F8784: ;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 8);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1F8660);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001F879Fu); RECOMP_ABI_CALL(0x0017A840u, sub_0017A840); /* call 0x0017A840 */

loc_001F879F: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001F87B0
 * Original: 0x001F87B0 - 0x001F87D8 (40 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F87B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F87B0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F87D7; /* je: equal / zero */

loc_001F87B9: ;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 8);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1F8610);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001F87D4u); RECOMP_ABI_CALL(0x0017A840u, sub_0017A840); /* call 0x0017A840 */

loc_001F87D4: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001F87D7: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001F87E0
 * Original: 0x001F87E0 - 0x001F87E8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F87E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F87E0: ;
    MEM16(ecx + 0x364) = MEM16(ecx + 0x364) - 1;
    _fa = (uint32_t)(MEM16(ecx + 0x364)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

}

/**
 * sub_001F87F0
 * Original: 0x001F87F0 - 0x001F8807 (23 bytes, 6 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F87F0(void)
{

loc_001F87F0: ;
    ecx = 0x710868;
    PUSH32(esp, 0x001F87FAu); RECOMP_ABI_CALL(0x001DBC50u, sub_001DBC50); /* call 0x001DBC50 */

loc_001F87FA: ;
    ecx = MEM32(esp + 4);
    ecx = ecx + ecx * 4;
    eax = eax + ecx * 4;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001F8810
 * Original: 0x001F8810 - 0x001F8815 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F8810(void)
{

loc_001F8810: ;
    MEM8(ecx + 0xC) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_001F8820
 * Original: 0x001F8820 - 0x001F8830 (16 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F8820(void)
{

loc_001F8820: ;
    MEM8(ecx + 0xC) = 0;
    PUSH32(esp, ecx);
    ecx = 0x710868;
    PUSH32(esp, 0x001F882Fu); RECOMP_ABI_CALL(0x001DBCE0u, sub_001DBCE0); /* call 0x001DBCE0 */

loc_001F882F: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001F8880
 * Original: 0x001F8880 - 0x001F8B89 (777 bytes, 250 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F8880(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001F8880: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x20));
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x2C);
    ebx = ecx;
    ecx = ZX8(MEM8(esi + 4));
    eax = ecx;
    _fb = (uint32_t)(0xC8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(0xC8));
    eax = eax - 0xC8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    if ((_fa == 0)) goto loc_001F88C1; /* je: equal / zero */

loc_001F8899: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(2));
    eax = eax - 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_001F88B5; /* je: equal / zero */

loc_001F889E: ;
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(3));
    eax = eax - 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_001F88A9; /* je: equal / zero */

loc_001F88A3: ;
    edi = MEM32(ebx + ecx * 4 + 0x30);
    goto loc_001F88CD;

loc_001F88A9: ;
    ecx = 0x510040;
    PUSH32(esp, 0x001F88B3u); RECOMP_ABI_CALL(0x0016B230u, sub_0016B230); /* call 0x0016B230 */

loc_001F88B3: ;
    goto loc_001F88CB;

loc_001F88B5: ;
    ecx = 0x510040;
    PUSH32(esp, 0x001F88BFu); RECOMP_ABI_CALL(0x0016B220u, sub_0016B220); /* call 0x0016B220 */

loc_001F88BF: ;
    goto loc_001F88CB;

loc_001F88C1: ;
    ecx = 0x510040;
    PUSH32(esp, 0x001F88CBu); RECOMP_ABI_CALL(0x0016B210u, sub_0016B210); /* call 0x0016B210 */

loc_001F88CB: ;
    edi = eax;

loc_001F88CD: ;
    eax = ZX16(MEM16(esi + 2));
    _fb = (uint32_t)(0xFFFFFFC9u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFC9u)) >> 32) & 1);
    eax = eax + 0xFFFFFFC9u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 7 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_001F8B7E; /* ja: above (unsigned >) */

loc_001F88DD: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x1F8B8C); /* switch: 8 entries, 8 targets */
    if (_jt == 0x001F88E4u) goto loc_001F88E4;
    if (_jt == 0x001F88FAu) goto loc_001F88FA;
    if (_jt == 0x001F8937u) goto loc_001F8937;
    if (_jt == 0x001F894Du) goto loc_001F894D;
    if (_jt == 0x001F89D4u) goto loc_001F89D4;
    if (_jt == 0x001F8A5Bu) goto loc_001F8A5B;
    if (_jt == 0x001F8AA1u) goto loc_001F8AA1;
    if (_jt == 0x001F8AE7u) goto loc_001F8AE7;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_001F88E4: ;
    eax = (uint32_t)(int32_t)SMEM16(esi + 6);
    ecx = ZX16(MEM16(ebx + 0x14));
    POP32(esp, edi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    POP32(esp, esi);
    SET_LO8(eax, (CMP_GE(_fas, _fbs)) ? 1 : 0); /* setge */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x20)) >> 32) & 1);
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_001F88FA: ;
    eax = MEM32(ebx + 0xA8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    edx = MEM32(edi + 0x31C);
    ecx = MEM32(edx + 0x24);
    if (CMP_NE(_fa, _fb)) goto loc_001F891E; /* jne: not equal / not zero */

loc_001F890D: ;
    MEM32(ebx + 0xA8) = ecx;

loc_001F8913: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _cf = 0; /* xor clears CF */
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x20)) >> 32) & 1);
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_001F891E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_001F8913; /* je: equal / zero */

loc_001F8922: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebx + 0xA8) = 0;
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x20)) >> 32) & 1);
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_001F8937: ;
    ecx = edi;
    PUSH32(esp, 0x001F893Eu); RECOMP_ABI_CALL(0x00153880u, sub_00153880); /* call 0x00153880 */

loc_001F893E: ;
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    POP32(esp, edi);
    SET_LO8(eax, _cf ? 0xFFFFFFFF : 0); /* sbb self (CF extend) */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sbb result */
    POP32(esp, esi);
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x20)) >> 32) & 1);
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_001F894D: ;
    eax = MEM32(esi + 0x10);
    ecx = MEM32(esi + 0xC);
    edx = MEM32(esi + 8);
    if (0xB) _cf = (int)(((eax) >> (32 - (0xB))) & 1);
    eax = eax << 0xB;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    if (((0xB) & 31u)) _cf = (int)(((uint32_t)((int32_t)(int32_t)(eax)) >> ((((0xB) & 31u)) - 1)) & 1);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((0xB) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    MEM32(esp + 0x30) = eax;
    fp_push((double)SMEM32(esp + 0x30)); /* fild */
    if (0xB) _cf = (int)(((ecx) >> (32 - (0xB))) & 1);
    ecx = ecx << 0xB;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, 0x3F800000);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0xC));
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    if (((0xB) & 31u)) _cf = (int)(((uint32_t)((int32_t)(int32_t)(ecx)) >> ((((0xB) & 31u)) - 1)) & 1);
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((0xB) & 31u));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    MEM32(esp + 0x40) = ecx;
    fp_push((double)SMEM32(esp + 0x40)); /* fild */
    if (0xB) _cf = (int)(((edx) >> (32 - (0xB))) & 1);
    edx = edx << 0xB;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    if (((0xB) & 31u)) _cf = (int)(((uint32_t)((int32_t)(int32_t)(edx)) >> ((((0xB) & 31u)) - 1)) & 1);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((0xB) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    MEM32(esp + 0x40) = edx;
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    eax = esp + 0x2C;
    fp_push((double)SMEM32(esp + 0x40)); /* fild */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, eax);
    PUSH32(esp, 0x001F899Du); RECOMP_ABI_CALL(0x0015BB60u, sub_0015BB60); /* call 0x0015BB60 */

loc_001F899D: ;
    edx = MEM32(edi);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x14)) >> 32) & 1);
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x001F89ACu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001F89A9u); } /* indirect call */
    }

loc_001F89AC: ;
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    PUSH32(esp, 0x001F89BBu); RECOMP_ABI_CALL(0x0015C2C0u, sub_0015C2C0); /* call 0x0015C2C0 */

loc_001F89BB: ;
    eax = (uint32_t)(int32_t)SMEM16(esi + 6);
    ecx = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)eax);
    MEM32(esp + 0x30) = ecx;
    fp_push((double)SMEM32(esp + 0x30)); /* fild */
    goto loc_001F8B6F;

loc_001F89D4: ;
    edx = MEM32(esi + 0x10);
    eax = MEM32(esi + 0xC);
    ecx = MEM32(esi + 8);
    if (0xB) _cf = (int)(((edx) >> (32 - (0xB))) & 1);
    edx = edx << 0xB;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    if (((0xB) & 31u)) _cf = (int)(((uint32_t)((int32_t)(int32_t)(edx)) >> ((((0xB) & 31u)) - 1)) & 1);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((0xB) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    MEM32(esp + 0x30) = edx;
    fp_push((double)SMEM32(esp + 0x30)); /* fild */
    if (0xB) _cf = (int)(((eax) >> (32 - (0xB))) & 1);
    eax = eax << 0xB;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, 0x3F800000);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0xC));
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    if (((0xB) & 31u)) _cf = (int)(((uint32_t)((int32_t)(int32_t)(eax)) >> ((((0xB) & 31u)) - 1)) & 1);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((0xB) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    MEM32(esp + 0x40) = eax;
    fp_push((double)SMEM32(esp + 0x40)); /* fild */
    if (0xB) _cf = (int)(((ecx) >> (32 - (0xB))) & 1);
    ecx = ecx << 0xB;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    if (((0xB) & 31u)) _cf = (int)(((uint32_t)((int32_t)(int32_t)(ecx)) >> ((((0xB) & 31u)) - 1)) & 1);
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((0xB) & 31u));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    MEM32(esp + 0x40) = ecx;
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    edx = esp + 0x2C;
    fp_push((double)SMEM32(esp + 0x40)); /* fild */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, edx);
    PUSH32(esp, 0x001F8A24u); RECOMP_ABI_CALL(0x0015BB60u, sub_0015BB60); /* call 0x0015BB60 */

loc_001F8A24: ;
    eax = MEM32(edi);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x14)) >> 32) & 1);
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x001F8A33u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001F8A30u); } /* indirect call */
    }

loc_001F8A33: ;
    edx = esp + 0xC;
    PUSH32(esp, edx);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001F8A42u); RECOMP_ABI_CALL(0x00170C00u, sub_00170C00); /* call 0x00170C00 */

loc_001F8A42: ;
    eax = (uint32_t)(int32_t)SMEM16(esi + 6);
    ecx = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)eax);
    MEM32(esp + 0x30) = ecx;
    fp_push((double)SMEM32(esp + 0x30)); /* fild */
    goto loc_001F8B6F;

loc_001F8A5B: ;
    edx = MEM32(edi);
    eax = esp + 0x1C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x001F8A67u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001F8A64u); } /* indirect call */
    }

loc_001F8A67: ;
    ecx = ZX8(MEM8(esi + 5));
    ecx = MEM32(ebx + ecx * 4 + 0x30);
    edx = MEM32(ecx);
    eax = esp + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x001F8A79u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001F8A76u); } /* indirect call */
    }

loc_001F8A79: ;
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    PUSH32(esp, 0x001F8A88u); RECOMP_ABI_CALL(0x00170C00u, sub_00170C00); /* call 0x00170C00 */

loc_001F8A88: ;
    eax = (uint32_t)(int32_t)SMEM16(esi + 6);
    ecx = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)eax);
    MEM32(esp + 0x30) = ecx;
    fp_push((double)SMEM32(esp + 0x30)); /* fild */
    goto loc_001F8B6F;

loc_001F8AA1: ;
    edx = MEM32(edi);
    eax = esp + 0x1C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x001F8AADu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001F8AAAu); } /* indirect call */
    }

loc_001F8AAD: ;
    ecx = ZX8(MEM8(esi + 5));
    ecx = MEM32(ebx + ecx * 4 + 0x30);
    edx = MEM32(ecx);
    eax = esp + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x001F8ABFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001F8ABCu); } /* indirect call */
    }

loc_001F8ABF: ;
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    PUSH32(esp, 0x001F8ACEu); RECOMP_ABI_CALL(0x0015C2C0u, sub_0015C2C0); /* call 0x0015C2C0 */

loc_001F8ACE: ;
    eax = (uint32_t)(int32_t)SMEM16(esi + 6);
    ecx = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)eax);
    MEM32(esp + 0x30) = ecx;
    fp_push((double)SMEM32(esp + 0x30)); /* fild */
    goto loc_001F8B6F;

loc_001F8AE7: ;
    edx = MEM32(esi + 0x10);
    eax = MEM32(esi + 0xC);
    ecx = MEM32(esi + 8);
    if (0xB) _cf = (int)(((edx) >> (32 - (0xB))) & 1);
    edx = edx << 0xB;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    if (((0xB) & 31u)) _cf = (int)(((uint32_t)((int32_t)(int32_t)(edx)) >> ((((0xB) & 31u)) - 1)) & 1);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((0xB) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    MEM32(esp + 0x30) = edx;
    fp_push((double)SMEM32(esp + 0x30)); /* fild */
    if (0xB) _cf = (int)(((eax) >> (32 - (0xB))) & 1);
    eax = eax << 0xB;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, 0x3F800000);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0xC));
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    if (((0xB) & 31u)) _cf = (int)(((uint32_t)((int32_t)(int32_t)(eax)) >> ((((0xB) & 31u)) - 1)) & 1);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((0xB) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    MEM32(esp + 0x40) = eax;
    fp_push((double)SMEM32(esp + 0x40)); /* fild */
    if (0xB) _cf = (int)(((ecx) >> (32 - (0xB))) & 1);
    ecx = ecx << 0xB;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    if (((0xB) & 31u)) _cf = (int)(((uint32_t)((int32_t)(int32_t)(ecx)) >> ((((0xB) & 31u)) - 1)) & 1);
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((0xB) & 31u));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    MEM32(esp + 0x40) = ecx;
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    edx = esp + 0x2C;
    fp_push((double)SMEM32(esp + 0x40)); /* fild */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, edx);
    PUSH32(esp, 0x001F8B37u); RECOMP_ABI_CALL(0x0015BB60u, sub_0015BB60); /* call 0x0015BB60 */

loc_001F8B37: ;
    eax = ZX8(MEM8(esi + 4));
    ecx = MEM32(ebx + eax * 4 + 0x44);
    edx = MEM32(ecx);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x14)) >> 32) & 1);
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x001F8B4Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001F8B49u); } /* indirect call */
    }

loc_001F8B4C: ;
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    PUSH32(esp, 0x001F8B5Bu); RECOMP_ABI_CALL(0x0015C2C0u, sub_0015C2C0); /* call 0x0015C2C0 */

loc_001F8B5B: ;
    eax = (uint32_t)(int32_t)SMEM16(esi + 6);
    ecx = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)eax);
    MEM32(esp + 0x30) = ecx;
    fp_push((double)SMEM32(esp + 0x30)); /* fild */

loc_001F8B6F: ;
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fcompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001F8913; /* jp: parity */

loc_001F8B7E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x20)) >> 32) & 1);
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001F8BB0
 * Original: 0x001F8BB0 - 0x001F9C03 (4179 bytes, 1484 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F8BB0(void)
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

loc_001F8BB0: ;
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x64;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x74);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = ZX8(MEM8(esi + 4));
    eax = ecx;
    _fb = (uint32_t)(0xC8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0xC8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_001F8BF2; /* je: equal / zero */

loc_001F8BCA: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_001F8BE6; /* je: equal / zero */

loc_001F8BCF: ;
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_001F8BDA; /* je: equal / zero */

loc_001F8BD4: ;
    ebx = MEM32(edi + ecx * 4 + 0x30);
    goto loc_001F8BFE;

loc_001F8BDA: ;
    ecx = 0x510040;
    PUSH32(esp, 0x001F8BE4u); RECOMP_ABI_CALL(0x0016B230u, sub_0016B230); /* call 0x0016B230 */

loc_001F8BE4: ;
    goto loc_001F8BFC;

loc_001F8BE6: ;
    ecx = 0x510040;
    PUSH32(esp, 0x001F8BF0u); RECOMP_ABI_CALL(0x0016B220u, sub_0016B220); /* call 0x0016B220 */

loc_001F8BF0: ;
    goto loc_001F8BFC;

loc_001F8BF2: ;
    ecx = 0x510040;
    PUSH32(esp, 0x001F8BFCu); RECOMP_ABI_CALL(0x0016B210u, sub_0016B210); /* call 0x0016B210 */

loc_001F8BFC: ;
    ebx = eax;

loc_001F8BFE: ;
    eax = MEM32(esi + 8);
    eax = eax << 0xB;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((0xB) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    MEM32(esp + 0x78) = eax;
    fp_push((double)SMEM32(esp + 0x78)); /* fild */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x18);
    MEM32(esp + 0x10) = ecx;
    ecx = MEM32(esi + 0xC);
    ecx = ecx << 0xB;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((0xB) & 31u));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    MEM32(esp + 0x78) = ecx;
    fp_push((double)SMEM32(esp + 0x78)); /* fild */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x1C);
    MEM32(esp + 0x14) = edx;
    edx = MEM32(esi + 0x10);
    edx = edx << 0xB;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((0xB) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    MEM32(esp + 0x78) = edx;
    fp_push((double)SMEM32(esp + 0x78)); /* fild */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    ebp = MEM32(esp + 0x20);
    MEM32(esp + 0x78) = ebp;
    ebp = ZX16(MEM16(esi + 2));
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0x52) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0x52 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_001F980C; /* ja: above (unsigned >) */

loc_001F8C62: ;
    { uint32_t _jt = MEM32(ebp * 4 + 0x1F9C04); /* switch: 83 entries, 68 targets */
    if (_jt == 0x001F8C69u) goto loc_001F8C69;
    if (_jt == 0x001F8C84u) goto loc_001F8C84;
    if (_jt == 0x001F8C9Cu) goto loc_001F8C9C;
    if (_jt == 0x001F8CB4u) goto loc_001F8CB4;
    if (_jt == 0x001F8CF0u) goto loc_001F8CF0;
    if (_jt == 0x001F8D03u) goto loc_001F8D03;
    if (_jt == 0x001F8D63u) goto loc_001F8D63;
    if (_jt == 0x001F8DC3u) goto loc_001F8DC3;
    if (_jt == 0x001F8DD4u) goto loc_001F8DD4;
    if (_jt == 0x001F8E14u) goto loc_001F8E14;
    if (_jt == 0x001F8E25u) goto loc_001F8E25;
    if (_jt == 0x001F8E65u) goto loc_001F8E65;
    if (_jt == 0x001F8E82u) goto loc_001F8E82;
    if (_jt == 0x001F8E9Fu) goto loc_001F8E9F;
    if (_jt == 0x001F8EE9u) goto loc_001F8EE9;
    if (_jt == 0x001F8F12u) goto loc_001F8F12;
    if (_jt == 0x001F8F2Du) goto loc_001F8F2D;
    if (_jt == 0x001F8F48u) goto loc_001F8F48;
    if (_jt == 0x001F8F7Cu) goto loc_001F8F7C;
    if (_jt == 0x001F8F97u) goto loc_001F8F97;
    if (_jt == 0x001F8FDBu) goto loc_001F8FDB;
    if (_jt == 0x001F9037u) goto loc_001F9037;
    if (_jt == 0x001F9078u) goto loc_001F9078;
    if (_jt == 0x001F909Au) goto loc_001F909A;
    if (_jt == 0x001F90F6u) goto loc_001F90F6;
    if (_jt == 0x001F915Bu) goto loc_001F915B;
    if (_jt == 0x001F91C1u) goto loc_001F91C1;
    if (_jt == 0x001F91FFu) goto loc_001F91FF;
    if (_jt == 0x001F9240u) goto loc_001F9240;
    if (_jt == 0x001F92A4u) goto loc_001F92A4;
    if (_jt == 0x001F9308u) goto loc_001F9308;
    if (_jt == 0x001F9349u) goto loc_001F9349;
    if (_jt == 0x001F93D4u) goto loc_001F93D4;
    if (_jt == 0x001F949Cu) goto loc_001F949C;
    if (_jt == 0x001F9525u) goto loc_001F9525;
    if (_jt == 0x001F95A0u) goto loc_001F95A0;
    if (_jt == 0x001F9618u) goto loc_001F9618;
    if (_jt == 0x001F9679u) goto loc_001F9679;
    if (_jt == 0x001F96D5u) goto loc_001F96D5;
    if (_jt == 0x001F9756u) goto loc_001F9756;
    if (_jt == 0x001F976Du) goto loc_001F976D;
    if (_jt == 0x001F9784u) goto loc_001F9784;
    if (_jt == 0x001F979Du) goto loc_001F979D;
    if (_jt == 0x001F97B8u) goto loc_001F97B8;
    if (_jt == 0x001F97D3u) goto loc_001F97D3;
    if (_jt == 0x001F97EEu) goto loc_001F97EE;
    if (_jt == 0x001F980Cu) goto loc_001F980C;
    if (_jt == 0x001F9844u) goto loc_001F9844;
    if (_jt == 0x001F985Fu) goto loc_001F985F;
    if (_jt == 0x001F9892u) goto loc_001F9892;
    if (_jt == 0x001F98D0u) goto loc_001F98D0;
    if (_jt == 0x001F98E9u) goto loc_001F98E9;
    if (_jt == 0x001F990Eu) goto loc_001F990E;
    if (_jt == 0x001F9921u) goto loc_001F9921;
    if (_jt == 0x001F9934u) goto loc_001F9934;
    if (_jt == 0x001F9946u) goto loc_001F9946;
    if (_jt == 0x001F995Au) goto loc_001F995A;
    if (_jt == 0x001F9979u) goto loc_001F9979;
    if (_jt == 0x001F99D2u) goto loc_001F99D2;
    if (_jt == 0x001F99F6u) goto loc_001F99F6;
    if (_jt == 0x001F9A36u) goto loc_001F9A36;
    if (_jt == 0x001F9A71u) goto loc_001F9A71;
    if (_jt == 0x001F9A99u) goto loc_001F9A99;
    if (_jt == 0x001F9ABBu) goto loc_001F9ABB;
    if (_jt == 0x001F9AE7u) goto loc_001F9AE7;
    if (_jt == 0x001F9B02u) goto loc_001F9B02;
    if (_jt == 0x001F9B36u) goto loc_001F9B36;
    if (_jt == 0x001F9B62u) goto loc_001F9B62;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_001F8C69: ;
    PUSH32(esp, edi);
    ecx = 0x710868;
    MEM8(edi + 0xC) = 0;
    PUSH32(esp, 0x001F8C78u); RECOMP_ABI_CALL(0x001DBCE0u, sub_001DBCE0); /* call 0x001DBCE0 */

loc_001F8C78: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x64;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_001F8C84: ;
    PUSH32(esp, 0x001F8C89u); RECOMP_ABI_CALL(0x00016BA9u, sub_00016BA9); /* call 0x00016BA9 */

loc_001F8C89: ;
    ecx = eax;
    PUSH32(esp, 0x001F8C90u); RECOMP_ABI_CALL(0x0016CE50u, sub_0016CE50); /* call 0x0016CE50 */

loc_001F8C90: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x64;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_001F8C9C: ;
    PUSH32(esp, 0x001F8CA1u); RECOMP_ABI_CALL(0x00016BA9u, sub_00016BA9); /* call 0x00016BA9 */

loc_001F8CA1: ;
    ecx = eax;
    PUSH32(esp, 0x001F8CA8u); RECOMP_ABI_CALL(0x0016CE70u, sub_0016CE70); /* call 0x0016CE70 */

loc_001F8CA8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x64;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_001F8CB4: ;
    eax = MEM32(esp + 0x78);
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    eax = esp + 0x44;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001F8CD2u); RECOMP_ABI_CALL(0x0015BB60u, sub_0015BB60); /* call 0x0015BB60 */

loc_001F8CD2: ;
    ecx = ZX8(MEM8(esi + 4));
    PUSH32(esp, ecx);
    edx = esp + 0x4C;
    PUSH32(esp, edx);
    PUSH32(esp, 0x001F8CE1u); RECOMP_ABI_CALL(0x00157B10u, sub_00157B10); /* call 0x00157B10 */

loc_001F8CE1: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x64;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_001F8CF0: ;
    ecx = MEM32(edi + 0x30);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F8D6E; /* jne: not equal / not zero */

loc_001F8CF7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x64;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_001F8D03: ;
    ecx = MEM32(edi + 0x34);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F9844; /* je: equal / zero */

loc_001F8D0E: ;
    edx = MEM32(ecx);
    eax = esp + 0x24;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x001F8D18u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001F8D15u); } /* indirect call */
    }

loc_001F8D18: ;
    ecx = MEM32(esp + 0x78);
    edx = MEM32(esp + 0x14);
    eax = MEM32(esp + 0x10);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esp + 0x44;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001F8D36u); RECOMP_ABI_CALL(0x0015BB60u, sub_0015BB60); /* call 0x0015BB60 */

loc_001F8D36: ;
    edx = esp + 0x38;
    PUSH32(esp, edx);
    eax = esp + 0x4C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001F8D45u); RECOMP_ABI_CALL(0x0010DE70u, sub_0010DE70); /* call 0x0010DE70 */

loc_001F8D45: ;
    ecx = ZX8(MEM8(esi + 4));
    PUSH32(esp, ecx);
    edx = esp + 0x54;
    PUSH32(esp, edx);
    PUSH32(esp, 0x001F8D54u); RECOMP_ABI_CALL(0x00157B10u, sub_00157B10); /* call 0x00157B10 */

loc_001F8D54: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x64;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_001F8D63: ;
    ecx = MEM32(edi + 0x38);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F9844; /* je: equal / zero */

loc_001F8D6E: ;
    eax = MEM32(ecx);
    edx = esp + 0x24;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x001F8D78u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001F8D75u); } /* indirect call */
    }

loc_001F8D78: ;
    eax = MEM32(esp + 0x78);
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    eax = esp + 0x44;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001F8D96u); RECOMP_ABI_CALL(0x0015BB60u, sub_0015BB60); /* call 0x0015BB60 */

loc_001F8D96: ;
    ecx = esp + 0x38;
    PUSH32(esp, ecx);
    edx = esp + 0x4C;
    PUSH32(esp, edx);
    PUSH32(esp, 0x001F8DA5u); RECOMP_ABI_CALL(0x0010DE70u, sub_0010DE70); /* call 0x0010DE70 */

loc_001F8DA5: ;
    eax = ZX8(MEM8(esi + 4));
    PUSH32(esp, eax);
    ecx = esp + 0x54;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001F8DB4u); RECOMP_ABI_CALL(0x00157B10u, sub_00157B10); /* call 0x00157B10 */

loc_001F8DB4: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x64;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_001F8DC3: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x001F8DCAu); RECOMP_ABI_CALL(0x001836C0u, sub_001836C0); /* call 0x001836C0 */

loc_001F8DCA: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax;
    PUSH32(esp, 0x001F8DD4u); RECOMP_ABI_CALL(0x001837D0u, sub_001837D0); /* call 0x001837D0 */

loc_001F8DD4: ;
    ecx = 0x510040;
    PUSH32(esp, 0x001F8DDEu); RECOMP_ABI_CALL(0x0016B210u, sub_0016B210); /* call 0x0016B210 */

loc_001F8DDE: ;
    MEM16(eax + 0x364) = MEM16(eax + 0x364) + 1;
    _fa = (uint32_t)(MEM16(eax + 0x364)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    ecx = 0x510040;
    PUSH32(esp, 0x001F8DEFu); RECOMP_ABI_CALL(0x0016B220u, sub_0016B220); /* call 0x0016B220 */

loc_001F8DEF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F980C; /* je: equal / zero */

loc_001F8DF7: ;
    ecx = 0x510040;
    PUSH32(esp, 0x001F8E01u); RECOMP_ABI_CALL(0x0016B220u, sub_0016B220); /* call 0x0016B220 */

loc_001F8E01: ;
    MEM16(eax + 0x364) = MEM16(eax + 0x364) + 1;
    _fa = (uint32_t)(MEM16(eax + 0x364)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x64;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_001F8E14: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x001F8E1Bu); RECOMP_ABI_CALL(0x001836C0u, sub_001836C0); /* call 0x001836C0 */

loc_001F8E1B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax;
    PUSH32(esp, 0x001F8E25u); RECOMP_ABI_CALL(0x00183840u, sub_00183840); /* call 0x00183840 */

loc_001F8E25: ;
    ecx = 0x510040;
    PUSH32(esp, 0x001F8E2Fu); RECOMP_ABI_CALL(0x0016B210u, sub_0016B210); /* call 0x0016B210 */

loc_001F8E2F: ;
    MEM16(eax + 0x364) = MEM16(eax + 0x364) - 1;
    _fa = (uint32_t)(MEM16(eax + 0x364)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    ecx = 0x510040;
    PUSH32(esp, 0x001F8E40u); RECOMP_ABI_CALL(0x0016B220u, sub_0016B220); /* call 0x0016B220 */

loc_001F8E40: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F980C; /* je: equal / zero */

loc_001F8E48: ;
    ecx = 0x510040;
    PUSH32(esp, 0x001F8E52u); RECOMP_ABI_CALL(0x0016B220u, sub_0016B220); /* call 0x0016B220 */

loc_001F8E52: ;
    MEM16(eax + 0x364) = MEM16(eax + 0x364) - 1;
    _fa = (uint32_t)(MEM16(eax + 0x364)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x64;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_001F8E65: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x001F8E6Cu); RECOMP_ABI_CALL(0x001836C0u, sub_001836C0); /* call 0x001836C0 */

loc_001F8E6C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax;
    PUSH32(esp, 0x001F8E76u); RECOMP_ABI_CALL(0x001837D0u, sub_001837D0); /* call 0x001837D0 */

loc_001F8E76: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x64;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_001F8E82: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x001F8E89u); RECOMP_ABI_CALL(0x001836C0u, sub_001836C0); /* call 0x001836C0 */

loc_001F8E89: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax;
    PUSH32(esp, 0x001F8E93u); RECOMP_ABI_CALL(0x00183840u, sub_00183840); /* call 0x00183840 */

loc_001F8E93: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x64;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_001F8E9F: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F9844; /* je: equal / zero */

loc_001F8EA7: ;
    ecx = MEM32(ebx + 0xCC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F980C; /* je: equal / zero */

loc_001F8EB5: ;
    SET_LO16(esi, MEM16(esi + 6));
    _fa = (uint32_t)(LO16(esi)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(esi), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F8ED4; /* jne: not equal / not zero */

loc_001F8EBE: ;
    PUSH32(esp, 0xFFDC);
    PUSH32(esp, 0x001F8EC8u); RECOMP_ABI_CALL(0x00190B30u, sub_00190B30); /* call 0x00190B30 */

loc_001F8EC8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x64;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_001F8ED4: ;
    edx = SX16(LO16(esi));
    PUSH32(esp, edx);
    PUSH32(esp, 0x001F8EDDu); RECOMP_ABI_CALL(0x00190B30u, sub_00190B30); /* call 0x00190B30 */

loc_001F8EDD: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x64;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_001F8EE9: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F9844; /* je: equal / zero */

loc_001F8EF1: ;
    ebx = MEM32(ebx + 0xCC);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F980C; /* je: equal / zero */

loc_001F8EFF: ;
    ecx = ebx;
    PUSH32(esp, 0x001F8F06u); RECOMP_ABI_CALL(0x00190B70u, sub_00190B70); /* call 0x00190B70 */

loc_001F8F06: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x64;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_001F8F12: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F9844; /* je: equal / zero */

loc_001F8F1A: ;
    MEM16(ebx + 0x364) = MEM16(ebx + 0x364) + 1;
    _fa = (uint32_t)(MEM16(ebx + 0x364)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x64;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_001F8F2D: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F9844; /* je: equal / zero */

loc_001F8F35: ;
    MEM16(ebx + 0x364) = MEM16(ebx + 0x364) - 1;
    _fa = (uint32_t)(MEM16(ebx + 0x364)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x64;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_001F8F48: ;
    eax = ZX8(MEM8(esi + 4));
    ecx = MEM32(edi + eax * 4 + 0x30);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F9844; /* je: equal / zero */

loc_001F8F58: ;
    ecx = ZX8(MEM8(esi + 5));
    edi = MEM32(edi + ecx * 4 + 0x30);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F9844; /* je: equal / zero */

loc_001F8F68: ;
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x001F8F70u); RECOMP_ABI_CALL(0x00153840u, sub_00153840); /* call 0x00153840 */

loc_001F8F70: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x64;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_001F8F7C: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F9844; /* je: equal / zero */

loc_001F8F84: ;
    ecx = ebx;
    PUSH32(esp, 0x001F8F8Bu); RECOMP_ABI_CALL(0x00153830u, sub_00153830); /* call 0x00153830 */

loc_001F8F8B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x64;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_001F8F97: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F9844; /* je: equal / zero */

loc_001F8F9F: ;
    PUSH32(esp, edx);
    edx = (uint32_t)(int32_t)SMEM16(esi + 6);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    eax = (uint32_t)(int32_t)SMEM16(ebx + 0xD0);
    PUSH32(esp, edx);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x001F8FB5u); RECOMP_ABI_CALL(0x0014F4A0u, sub_0014F4A0); /* call 0x0014F4A0 */

loc_001F8FB5: ;
    ecx = (uint32_t)(int32_t)SMEM16(ebx + 0xD0);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x3238);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(ecx + 0x5D0684) = 6;
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x64;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_001F8FDB: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F9844; /* je: equal / zero */

loc_001F8FE3: ;
    edx = (uint32_t)(int32_t)SMEM16(esi + 6);
    eax = (uint32_t)(int32_t)SMEM16(ebx + 0xD0);
    PUSH32(esp, 8);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x001F8FFAu); RECOMP_ABI_CALL(0x001C2880u, sub_001C2880); /* call 0x001C2880 */

loc_001F8FFA: ;
    ecx = (uint32_t)(int32_t)SMEM16(ebx + 0xD0);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x3238);
    MEM32(ecx + 0x5CE8D4) = 0;
    edx = (uint32_t)(int32_t)SMEM16(ebx + 0xD0);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = (uint32_t)((int32_t)edx * (int32_t)0x3238);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(edx + 0x5D0684) = 0xC4;
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x64;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_001F9037: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F9844; /* je: equal / zero */

loc_001F903F: ;
    eax = MEM32(esp + 0x78);
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    eax = esp + 0x34;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001F905Du); RECOMP_ABI_CALL(0x0015BB60u, sub_0015BB60); /* call 0x0015BB60 */

loc_001F905D: ;
    edx = MEM32(ebx);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp + 0x24;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x001F906Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001F9069u); } /* indirect call */
    }

loc_001F906C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x64;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_001F9078: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F9844; /* je: equal / zero */

loc_001F9080: ;
    eax = MEM32(ebx + 0x198);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F980C; /* jne: not equal / not zero */

loc_001F908E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x64;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_001F909A: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F9844; /* je: equal / zero */

loc_001F90A2: ;
    ecx = MEM32(ebx + 0x198);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F9844; /* je: equal / zero */

loc_001F90B0: ;
    edx = MEM32(ecx);
    eax = esp + 0x34;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x001F90BAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001F90B7u); } /* indirect call */
    }

loc_001F90BA: ;
    edx = MEM32(ebx);
    eax = esp + 0x24;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x001F90C6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001F90C3u); } /* indirect call */
    }

loc_001F90C6: ;
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    edx = esp + 0x38;
    PUSH32(esp, edx);
    PUSH32(esp, 0x001F90D5u); RECOMP_ABI_CALL(0x0010DE90u, sub_0010DE90); /* call 0x0010DE90 */

loc_001F90D5: ;
    eax = esp + 0x3C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001F90DFu); RECOMP_ABI_CALL(0x0015BF80u, sub_0015BF80); /* call 0x0015BF80 */

loc_001F90DF: ;
    ecx = (uint32_t)(int32_t)SMEM16(esi + 6);
    MEM32(esp + 0x84) = ecx;
    fp_push((double)SMEM32(esp + 0x84)); /* fild */
    goto loc_001F93A9;

loc_001F90F6: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F9844; /* je: equal / zero */

loc_001F90FE: ;
    ecx = ZX8(MEM8(esi + 5));
    eax = MEM32(edi + ecx * 4 + 0x30);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F9844; /* je: equal / zero */

loc_001F910E: ;
    edx = ZX8(MEM8(esi + 5));
    ecx = MEM32(edi + edx * 4 + 0x30);
    eax = MEM32(ecx);
    edx = esp + 0x34;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x001F9120u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001F911Du); } /* indirect call */
    }

loc_001F9120: ;
    eax = MEM32(ebx);
    ecx = esp + 0x24;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x001F912Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001F9129u); } /* indirect call */
    }

loc_001F912C: ;
    edx = esp + 0x24;
    PUSH32(esp, edx);
    eax = esp + 0x38;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001F913Bu); RECOMP_ABI_CALL(0x0010DE90u, sub_0010DE90); /* call 0x0010DE90 */

loc_001F913B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x3F800000);
    ecx = esp + 0x38;
    PUSH32(esp, ecx);
    ecx = ebx;
    PUSH32(esp, 0x001F914Fu); RECOMP_ABI_CALL(0x00154650u, sub_00154650); /* call 0x00154650 */

loc_001F914F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x64;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_001F915B: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F9844; /* je: equal / zero */

loc_001F9163: ;
    edx = ZX8(MEM8(esi + 5));
    eax = MEM32(edi + edx * 4 + 0x30);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F9844; /* je: equal / zero */

loc_001F9173: ;
    eax = ZX8(MEM8(esi + 5));
    ecx = MEM32(edi + eax * 4 + 0x30);
    edx = MEM32(ecx);
    eax = esp + 0x34;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x001F9185u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001F9182u); } /* indirect call */
    }

loc_001F9185: ;
    edx = MEM32(ebx);
    eax = esp + 0x24;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x001F9191u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001F918Eu); } /* indirect call */
    }

loc_001F9191: ;
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    edx = esp + 0x38;
    PUSH32(esp, edx);
    PUSH32(esp, 0x001F91A0u); RECOMP_ABI_CALL(0x0010DE90u, sub_0010DE90); /* call 0x0010DE90 */

loc_001F91A0: ;
    eax = esp + 0x3C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001F91AAu); RECOMP_ABI_CALL(0x0015BF80u, sub_0015BF80); /* call 0x0015BF80 */

loc_001F91AA: ;
    ecx = (uint32_t)(int32_t)SMEM16(esi + 6);
    MEM32(esp + 0x84) = ecx;
    fp_push((double)SMEM32(esp + 0x84)); /* fild */
    goto loc_001F93A9;

loc_001F91C1: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F9844; /* je: equal / zero */

loc_001F91C9: ;
    ecx = MEM32(esp + 0x78);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    eax = esp + 0x34;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001F91E4u); RECOMP_ABI_CALL(0x0015BB60u, sub_0015BB60); /* call 0x0015BB60 */

loc_001F91E4: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    ecx = ebx;
    PUSH32(esp, 0x001F91F3u); RECOMP_ABI_CALL(0x00154600u, sub_00154600); /* call 0x00154600 */

loc_001F91F3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x64;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_001F91FF: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F9844; /* je: equal / zero */

loc_001F9207: ;
    edx = MEM32(esp + 0x78);
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = esp + 0x34;
    PUSH32(esp, edx);
    PUSH32(esp, 0x001F9225u); RECOMP_ABI_CALL(0x0015BB60u, sub_0015BB60); /* call 0x0015BB60 */

loc_001F9225: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp + 0x24;
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x001F9234u); RECOMP_ABI_CALL(0x00154600u, sub_00154600); /* call 0x00154600 */

loc_001F9234: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x64;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_001F9240: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F9844; /* je: equal / zero */

loc_001F9248: ;
    ecx = MEM32(esp + 0x78);
    edx = MEM32(esp + 0x14);
    eax = MEM32(esp + 0x10);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esp + 0x44;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001F9266u); RECOMP_ABI_CALL(0x0015BB60u, sub_0015BB60); /* call 0x0015BB60 */

loc_001F9266: ;
    edx = MEM32(ebx);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp + 0x24;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x001F9275u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001F9272u); } /* indirect call */
    }

loc_001F9275: ;
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    edx = esp + 0x38;
    PUSH32(esp, edx);
    PUSH32(esp, 0x001F9284u); RECOMP_ABI_CALL(0x0010DE90u, sub_0010DE90); /* call 0x0010DE90 */

loc_001F9284: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x3F800000);
    eax = esp + 0x38;
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x001F9298u); RECOMP_ABI_CALL(0x00154630u, sub_00154630); /* call 0x00154630 */

loc_001F9298: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x64;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_001F92A4: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F9844; /* je: equal / zero */

loc_001F92AC: ;
    ecx = MEM32(esp + 0x78);
    edx = MEM32(esp + 0x14);
    eax = MEM32(esp + 0x10);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esp + 0x44;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001F92CAu); RECOMP_ABI_CALL(0x0015BB60u, sub_0015BB60); /* call 0x0015BB60 */

loc_001F92CA: ;
    edx = MEM32(ebx);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp + 0x24;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x001F92D9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001F92D6u); } /* indirect call */
    }

loc_001F92D9: ;
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    edx = esp + 0x38;
    PUSH32(esp, edx);
    PUSH32(esp, 0x001F92E8u); RECOMP_ABI_CALL(0x0010DE90u, sub_0010DE90); /* call 0x0010DE90 */

loc_001F92E8: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x3F800000);
    eax = esp + 0x38;
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x001F92FCu); RECOMP_ABI_CALL(0x00154650u, sub_00154650); /* call 0x00154650 */

loc_001F92FC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x64;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_001F9308: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F9844; /* je: equal / zero */

loc_001F9310: ;
    ecx = MEM32(esp + 0x78);
    edx = MEM32(esp + 0x14);
    eax = MEM32(esp + 0x10);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esp + 0x44;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001F932Eu); RECOMP_ABI_CALL(0x0015BB60u, sub_0015BB60); /* call 0x0015BB60 */

loc_001F932E: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 0x34;
    PUSH32(esp, edx);
    ecx = ebx;
    PUSH32(esp, 0x001F933Du); RECOMP_ABI_CALL(0x00154670u, sub_00154670); /* call 0x00154670 */

loc_001F933D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x64;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_001F9349: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F9844; /* je: equal / zero */

loc_001F9351: ;
    eax = MEM32(esp + 0x78);
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    eax = esp + 0x44;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001F936Fu); RECOMP_ABI_CALL(0x0015BB60u, sub_0015BB60); /* call 0x0015BB60 */

loc_001F936F: ;
    edx = MEM32(ebx);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp + 0x24;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x001F937Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001F937Bu); } /* indirect call */
    }

loc_001F937E: ;
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    edx = esp + 0x38;
    PUSH32(esp, edx);
    PUSH32(esp, 0x001F938Du); RECOMP_ABI_CALL(0x0010DE90u, sub_0010DE90); /* call 0x0010DE90 */

loc_001F938D: ;
    eax = esp + 0x3C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001F9397u); RECOMP_ABI_CALL(0x0015BF80u, sub_0015BF80); /* call 0x0015BF80 */

loc_001F9397: ;
    ecx = (uint32_t)(int32_t)SMEM16(esi + 6);
    MEM32(esp + 0x84) = ecx;
    fp_push((double)SMEM32(esp + 0x84)); /* fild */

loc_001F93A9: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 0x38;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, edx);
    PUSH32(esp, 0x001F93B9u); RECOMP_ABI_CALL(0x0015C020u, sub_0015C020); /* call 0x0015C020 */

loc_001F93B9: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp + 0x34;
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x001F93C8u); RECOMP_ABI_CALL(0x00154600u, sub_00154600); /* call 0x00154600 */

loc_001F93C8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x64;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_001F93D4: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F9844; /* je: equal / zero */

loc_001F93DC: ;
    ecx = MEM32(esp + 0x78);
    edx = MEM32(esp + 0x14);
    eax = MEM32(esp + 0x10);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esp + 0x44;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001F93FAu); RECOMP_ABI_CALL(0x0015BB60u, sub_0015BB60); /* call 0x0015BB60 */

loc_001F93FA: ;
    edx = MEM32(ebx);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp + 0x24;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x001F9409u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001F9406u); } /* indirect call */
    }

loc_001F9409: ;
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    edx = esp + 0x38;
    PUSH32(esp, edx);
    eax = edx;
    PUSH32(esp, eax);
    MEM32(esp + 0x34) = 0;
    MEM32(esp + 0x44) = 0;
    PUSH32(esp, 0x001F942Bu); RECOMP_ABI_CALL(0x0015BD20u, sub_0015BD20); /* call 0x0015BD20 */

loc_001F942B: ;
    ecx = esp + 0x40;
    PUSH32(esp, ecx);
    edx = ecx;
    PUSH32(esp, edx);
    PUSH32(esp, 0x001F9438u); RECOMP_ABI_CALL(0x0015BC50u, sub_0015BC50); /* call 0x0015BC50 */

loc_001F9438: ;
    eax = (uint32_t)(int32_t)SMEM16(esi + 6);
    MEM32(esp + 0x8C) = eax;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0x38;
    fp_push((double)SMEM32(esp + 0x7C)); /* fild */
    edx = ecx;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001F945Au); RECOMP_ABI_CALL(0x0015BD50u, sub_0015BD50); /* call 0x0015BD50 */

loc_001F945A: ;
    eax = esp + 0x40;
    PUSH32(esp, eax);
    ecx = esp + 0x34;
    PUSH32(esp, ecx);
    edx = ecx;
    PUSH32(esp, edx);
    PUSH32(esp, 0x001F946Cu); RECOMP_ABI_CALL(0x0015BCF0u, sub_0015BCF0); /* call 0x0015BCF0 */

loc_001F946C: ;
    ecx = MEM32(ebx + 0x31C);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x001F947Au); RECOMP_ABI_CALL(0x0015DA30u, sub_0015DA30); /* call 0x0015DA30 */

loc_001F947A: ;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x49778C)); /* fsub dword ptr [0x49778c] */
    ecx = esp + 0x24;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x001F9490u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001F948Du); } /* indirect call */
    }

loc_001F9490: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x64;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_001F949C: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F9844; /* je: equal / zero */

loc_001F94A4: ;
    eax = (uint32_t)(int32_t)SMEM16(esi + 6);
    edx = MEM32(ebx + 0x31C);
    MEM32(esp + 0x78) = eax;
    fp_push((double)SMEM32(esp + 0x78)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edx + 0x94)); /* fadd dword ptr [edx + 0x94] */
    MEMF(esp + 0x78) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x4978AC)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x4978ac] */
    fp_push(MEMF(esp + 0x78)); /* fld float */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001F94D9; /* jne: not equal / not zero */

loc_001F94D1: ;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x4978A8)); /* fsub dword ptr [0x4978a8] */
    goto loc_001F94F0;

loc_001F94D9: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x4978A4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x4978a4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001F94F4; /* jp: parity */

loc_001F94E6: ;
    fp_push(MEMF(esp + 0x78)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x4978A8)); /* fadd dword ptr [0x4978a8] */

loc_001F94F0: ;
    MEMF(esp + 0x78) = (float)fp_top(); fp_pop(); /* fstp */

loc_001F94F4: ;
    ecx = MEM32(esp + 0x78);
    PUSH32(esp, ecx);
    edx = esp + 0x28;
    PUSH32(esp, edx);
    PUSH32(esp, 0x001F9503u); RECOMP_ABI_CALL(0x00170970u, sub_00170970); /* call 0x00170970 */

loc_001F9503: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0xA);
    PUSH32(esp, 0x3F800000);
    eax = esp + 0x2C;
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x001F9519u); RECOMP_ABI_CALL(0x001539E0u, sub_001539E0); /* call 0x001539E0 */

loc_001F9519: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x64;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_001F9525: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F9844; /* je: equal / zero */

loc_001F952D: ;
    ecx = (uint32_t)(int32_t)SMEM16(esi + 6);
    MEM32(esp + 0x78) = ecx;
    PUSH32(esp, ecx);
    edx = esp + 0x28;
    fp_push((double)SMEM32(esp + 0x7C)); /* fild */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, edx);
    PUSH32(esp, 0x001F9547u); RECOMP_ABI_CALL(0x00170970u, sub_00170970); /* call 0x00170970 */

loc_001F9547: ;
    SET_LO8(eax, MEM8(esi + 5));
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    PUSH32(esp, 0xA);
    if (CMP_EQ(_fa, _fb)) goto loc_001F9583; /* je: equal / zero */

loc_001F9553: ;
    eax = ZX8(LO8(eax));
    MEM32(esp + 0x7C) = eax;
    PUSH32(esp, ecx);
    ecx = esp + 0x2C;
    fp_push((double)SMEM32(esp + 0x80)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x49D538)); /* fmul dword ptr [0x49d538] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, ecx);
    ecx = ebx;
    PUSH32(esp, 0x001F9577u); RECOMP_ABI_CALL(0x001539E0u, sub_001539E0); /* call 0x001539E0 */

loc_001F9577: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x64;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_001F9583: ;
    PUSH32(esp, 0x3F800000);
    edx = esp + 0x2C;
    PUSH32(esp, edx);
    ecx = ebx;
    PUSH32(esp, 0x001F9594u); RECOMP_ABI_CALL(0x001539E0u, sub_001539E0); /* call 0x001539E0 */

loc_001F9594: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x64;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_001F95A0: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F9844; /* je: equal / zero */

loc_001F95A8: ;
    ecx = MEM32(ebx + 0x198);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F9844; /* je: equal / zero */

loc_001F95B6: ;
    eax = MEM32(ecx);
    edx = esp + 0x24;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x001F95C0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001F95BDu); } /* indirect call */
    }

loc_001F95C0: ;
    SET_LO16(esi, MEM16(esi + 6));
    _fa = (uint32_t)(LO16(esi)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(esi), 0 (16-bit) */
    PUSH32(esp, 0xA);
    if (CMP_EQ(_fa, _fb)) goto loc_001F95FB; /* je: equal / zero */

loc_001F95CB: ;
    eax = SX16(LO16(esi));
    MEM32(esp + 0x7C) = eax;
    PUSH32(esp, ecx);
    ecx = esp + 0x2C;
    fp_push((double)SMEM32(esp + 0x80)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x49D538)); /* fmul dword ptr [0x49d538] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, ecx);
    ecx = ebx;
    PUSH32(esp, 0x001F95EFu); RECOMP_ABI_CALL(0x00154490u, sub_00154490); /* call 0x00154490 */

loc_001F95EF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x64;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_001F95FB: ;
    PUSH32(esp, 0x3F800000);
    edx = esp + 0x2C;
    PUSH32(esp, edx);
    ecx = ebx;
    PUSH32(esp, 0x001F960Cu); RECOMP_ABI_CALL(0x00154490u, sub_00154490); /* call 0x00154490 */

loc_001F960C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x64;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_001F9618: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F9844; /* je: equal / zero */

loc_001F9620: ;
    eax = ZX8(MEM8(esi + 5));
    ecx = MEM32(edi + eax * 4 + 0x30);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F9844; /* je: equal / zero */

loc_001F9630: ;
    ecx = ZX8(MEM8(esi + 5));
    edi = MEM32(edi + ecx * 4 + 0x30);
    edx = MEM32(edi);
    eax = esp + 0x24;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x001F9644u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001F9641u); } /* indirect call */
    }

loc_001F9644: ;
    SET_LO16(esi, MEM16(esi + 6));
    _fa = (uint32_t)(LO16(esi)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(esi), 0 (16-bit) */
    PUSH32(esp, 0xA);
    if (CMP_EQ(_fa, _fb)) goto loc_001F965C; /* je: equal / zero */

loc_001F964F: ;
    ecx = SX16(LO16(esi));
    MEM32(esp + 0x7C) = ecx;
    fp_push((double)SMEM32(esp + 0x7C)); /* fild */
    goto loc_001F96B3;

loc_001F965C: ;
    PUSH32(esp, 0x3F800000);
    eax = esp + 0x2C;
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x001F966Du); RECOMP_ABI_CALL(0x00154490u, sub_00154490); /* call 0x00154490 */

loc_001F966D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x64;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_001F9679: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F9844; /* je: equal / zero */

loc_001F9681: ;
    ecx = ZX8(MEM8(esi + 5));
    edi = MEM32(edi + ecx * 4 + 0x44);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F9844; /* je: equal / zero */

loc_001F9691: ;
    edx = MEM32(edi);
    eax = esp + 0x24;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x001F969Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001F969Au); } /* indirect call */
    }

loc_001F969D: ;
    SET_LO16(esi, MEM16(esi + 6));
    _fa = (uint32_t)(LO16(esi)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(esi), 0 (16-bit) */
    PUSH32(esp, 0xA);
    if (CMP_EQ(_fa, _fb)) goto loc_001F965C; /* je: equal / zero */

loc_001F96A8: ;
    ecx = SX16(LO16(esi));
    MEM32(esp + 0x7C) = ecx;
    fp_push((double)SMEM32(esp + 0x7C)); /* fild */

loc_001F96B3: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x49D538)); /* fmul dword ptr [0x49d538] */
    PUSH32(esp, ecx);
    edx = esp + 0x2C;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, edx);
    ecx = ebx;
    PUSH32(esp, 0x001F96C9u); RECOMP_ABI_CALL(0x00154490u, sub_00154490); /* call 0x00154490 */

loc_001F96C9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x64;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_001F96D5: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F9844; /* je: equal / zero */

loc_001F96DD: ;
    ecx = MEM32(esp + 0x78);
    edx = MEM32(esp + 0x14);
    eax = MEM32(esp + 0x10);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esp + 0x34;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001F96FBu); RECOMP_ABI_CALL(0x0015BB60u, sub_0015BB60); /* call 0x0015BB60 */

loc_001F96FB: ;
    SET_LO16(esi, MEM16(esi + 6));
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO16(esi)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(esi), 0 (16-bit) */
    PUSH32(esp, 0xA);
    if (CMP_EQ(_fa, _fb)) goto loc_001F9739; /* je: equal / zero */

loc_001F9709: ;
    edx = SX16(LO16(esi));
    MEM32(esp + 0x7C) = edx;
    PUSH32(esp, ecx);
    eax = esp + 0x2C;
    fp_push((double)SMEM32(esp + 0x80)); /* fild */
    ecx = ebx;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x49D538)); /* fmul dword ptr [0x49d538] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, eax);
    PUSH32(esp, 0x001F972Du); RECOMP_ABI_CALL(0x00154490u, sub_00154490); /* call 0x00154490 */

loc_001F972D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x64;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_001F9739: ;
    PUSH32(esp, 0x3F800000);
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    ecx = ebx;
    PUSH32(esp, 0x001F974Au); RECOMP_ABI_CALL(0x00154490u, sub_00154490); /* call 0x00154490 */

loc_001F974A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x64;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_001F9756: ;
    PUSH32(esp, ebx);
    ecx = 0x510040;
    PUSH32(esp, 0x001F9761u); RECOMP_ABI_CALL(0x0016B7F0u, sub_0016B7F0); /* call 0x0016B7F0 */

loc_001F9761: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x64;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_001F976D: ;
    PUSH32(esp, ebx);
    ecx = 0x510040;
    PUSH32(esp, 0x001F9778u); RECOMP_ABI_CALL(0x0016C720u, sub_0016C720); /* call 0x0016C720 */

loc_001F9778: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x64;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_001F9784: ;
    edx = (uint32_t)(int32_t)SMEM16(esi + 6);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001F978Eu); RECOMP_ABI_CALL(0x001A3D30u, sub_001A3D30); /* call 0x001A3D30 */

loc_001F978E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x64;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_001F979D: ;
    eax = (uint32_t)(int32_t)SMEM16(esi + 6);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001F97A9u); RECOMP_ABI_CALL(0x001A51E0u, sub_001A51E0); /* call 0x001A51E0 */

loc_001F97A9: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x64;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_001F97B8: ;
    ecx = (uint32_t)(int32_t)SMEM16(esi + 6);
    PUSH32(esp, 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001F97C4u); RECOMP_ABI_CALL(0x00011645u, sub_00011645); /* call 0x00011645 */

loc_001F97C4: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x64;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_001F97D3: ;
    edx = (uint32_t)(int32_t)SMEM16(esi + 6);
    PUSH32(esp, 0xFFFFFFFCu);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001F97DFu); RECOMP_ABI_CALL(0x00011645u, sub_00011645); /* call 0x00011645 */

loc_001F97DF: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x64;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_001F97EE: ;
    eax = MEM32(edi + 0x18);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x001F97F9u); RECOMP_ABI_CALL(0x001F87F0u, sub_001F87F0); /* call 0x001F87F0 */

loc_001F97F9: ;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x001F9801u); RECOMP_ABI_CALL(0x001F8880u, sub_001F8880); /* call 0x001F8880 */

loc_001F9801: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F9818; /* je: equal / zero */

loc_001F9805: ;
    eax = MEM32(edi + 0x18);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(edi + 0x18) = eax;

loc_001F980C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x64;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_001F9818: ;
    esi = ZX8(MEM8(esi + 4));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 1 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001F9841; /* jle: less or equal (signed <=) */

loc_001F9822: ;
    ecx = MEM32(edi + 0x18);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x001F982Fu); RECOMP_ABI_CALL(0x001F87F0u, sub_001F87F0); /* call 0x001F87F0 */

loc_001F982F: ;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x001F9837u); RECOMP_ABI_CALL(0x001F8BB0u, sub_001F8BB0); /* call 0x001F8BB0 */

loc_001F9837: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F9850; /* je: equal / zero */

loc_001F983B: ;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 1 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_001F9822; /* jg: greater (signed >) */

loc_001F9841: ;
    MEM32(edi + 0x18) = MEM32(edi + 0x18) - 1;
    _fa = (uint32_t)(MEM32(edi + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_001F9844: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x64;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_001F9850: ;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(edi + 0x18) = MEM32(edi + 0x18) - esi;
    _fa = (uint32_t)(MEM32(edi + 0x18)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x64;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_001F985F: ;
    edx = MEM32(edi + 0x18);
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x001F986Au); RECOMP_ABI_CALL(0x001F87F0u, sub_001F87F0); /* call 0x001F87F0 */

loc_001F986A: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x41) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax), 0x41 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F980C; /* je: equal / zero */

loc_001F9873: ;
    SET_LO16(esi, MEM16(esi + 6));

loc_001F9877: ;
    _fa = (uint32_t)(LO16(esi)) & 0xFFFFu; _fb = (uint32_t)(MEM16(eax + 4)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(esi), MEM16(eax + 4) (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F980C; /* je: equal / zero */

loc_001F987D: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x41) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax), 0x41 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F9877; /* jne: not equal / not zero */

loc_001F9886: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x64;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_001F9892: ;
    eax = MEM32(edi + 0x18);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x001F98A0u); RECOMP_ABI_CALL(0x001F87F0u, sub_001F87F0); /* call 0x001F87F0 */

loc_001F98A0: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x41) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax), 0x41 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F980C; /* je: equal / zero */

loc_001F98AD: ;
    SET_LO16(esi, MEM16(esi + 6));

loc_001F98B1: ;
    _fa = (uint32_t)(LO16(esi)) & 0xFFFFu; _fb = (uint32_t)(MEM16(eax + 4)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(esi), MEM16(eax + 4) (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F980C; /* je: equal / zero */

loc_001F98BB: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x41) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax), 0x41 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F98B1; /* jne: not equal / not zero */

loc_001F98C4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x64;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_001F98D0: ;
    ecx = (uint32_t)(int32_t)SMEM16(esi + 6);
    eax = MEM32(edi + 0x18);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + 0x18) = eax;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x64;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_001F98E9: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x001F98F0u); RECOMP_ABI_CALL(0x0015A430u, sub_0015A430); /* call 0x0015A430 */

loc_001F98F0: ;
    ecx = (uint32_t)(int32_t)SMEM16(esi + 6);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    eax = MEM32(edi + 0x18);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + 0x18) = eax;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x64;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_001F990E: ;
    MEM32(edi + 0x18) = 0;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x64;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_001F9921: ;
    edx = (uint32_t)(int32_t)SMEM16(esi + 6);
    MEM32(edi + 0x18) = edx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x64;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_001F9934: ;
    eax = MEM32(edi + 0x1C);
    MEM32(edi + 0x18) = eax;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x64;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_001F9946: ;
    SET_LO16(ecx, MEM16(esi + 6));
    MEM16(edi + 0x14) = LO16(ecx);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x64;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_001F995A: ;
    edx = (uint32_t)(int32_t)SMEM16(esi + 6);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, edx);
    ecx = 0x6DBFB0;
    PUSH32(esp, 0x001F996Du); RECOMP_ABI_CALL(0x001D2600u, sub_001D2600); /* call 0x001D2600 */

loc_001F996D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x64;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_001F9979: ;
    eax = (uint32_t)(int32_t)SMEM16(esi + 6);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx = 0x710868;
    PUSH32(esp, 0x001F998Au); RECOMP_ABI_CALL(0x001DBD30u, sub_001DBD30); /* call 0x001DBD30 */

loc_001F998A: ;
    ecx = MEM32(edi + 0x40);
    edx = MEM32(edi + 0x3C);
    eax = MEM32(edi + 0x38);
    PUSH32(esp, ecx);
    ecx = MEM32(edi + 0x34);
    PUSH32(esp, edx);
    edx = MEM32(edi + 0x30);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = 0x710868;
    PUSH32(esp, 0x001F99A8u); RECOMP_ABI_CALL(0x001DBA30u, sub_001DBA30); /* call 0x001DBA30 */

loc_001F99A8: ;
    eax = MEM32(edi + 0x54);
    ecx = MEM32(edi + 0x50);
    edx = MEM32(edi + 0x4C);
    PUSH32(esp, eax);
    eax = MEM32(edi + 0x48);
    PUSH32(esp, ecx);
    ecx = MEM32(edi + 0x44);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = 0x710868;
    PUSH32(esp, 0x001F99C6u); RECOMP_ABI_CALL(0x001DBAA0u, sub_001DBAA0); /* call 0x001DBAA0 */

loc_001F99C6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x64;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_001F99D2: ;
    edx = ZX8(MEM8(esi + 4));
    eax = MEM32(edi + edx * 4 + 0x30);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(ecx, MEM16(esi + 6));
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = 0x6CD5D0;
    PUSH32(esp, 0x001F99ECu); RECOMP_ABI_CALL(0x001C60E0u, sub_001C60E0); /* call 0x001C60E0 */

loc_001F99EC: ;
    edx = ZX8(MEM8(esi + 4));
    eax = MEM32(edi + edx * 4 + 0x30);
    goto loc_001F9A18;

loc_001F99F6: ;
    edx = ZX8(MEM8(esi + 4));
    eax = MEM32(edi + edx * 4 + 0x44);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(ecx, MEM16(esi + 6));
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = 0x6CD5D0;
    PUSH32(esp, 0x001F9A10u); RECOMP_ABI_CALL(0x001C60E0u, sub_001C60E0); /* call 0x001C60E0 */

loc_001F9A10: ;
    edx = ZX8(MEM8(esi + 4));
    eax = MEM32(edi + edx * 4 + 0x44);

loc_001F9A18: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(ecx, MEM16(esi + 6));
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = 0x6CD5D0;
    PUSH32(esp, 0x001F9A2Au); RECOMP_ABI_CALL(0x001C5E40u, sub_001C5E40); /* call 0x001C5E40 */

loc_001F9A2A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x64;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_001F9A36: ;
    edx = MEM32(edi + ecx * 4 + 0x30);
    ecx = (uint32_t)(int32_t)SMEM16(esi + 6);
    eax = MEM32(edi + eax * 4 + 0x30);
    PUSH32(esp, edx);
    edx = MEM32(edi + ecx * 4 + 0x30);
    PUSH32(esp, eax);
    eax = ZX8(MEM8(esi + 5));
    ecx = MEM32(edi + eax * 4 + 0x30);
    PUSH32(esp, edx);
    edx = ZX8(MEM8(esi + 4));
    eax = MEM32(edi + edx * 4 + 0x30);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = 0x710868;
    PUSH32(esp, 0x001F9A65u); RECOMP_ABI_CALL(0x001DBA30u, sub_001DBA30); /* call 0x001DBA30 */

loc_001F9A65: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x64;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_001F9A71: ;
    ecx = (uint32_t)(int32_t)SMEM16(esi + 6);
    edx = ZX8(MEM8(esi + 5));
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = 0x510040;
    PUSH32(esp, 0x001F9A85u); RECOMP_ABI_CALL(0x0016B2D0u, sub_0016B2D0); /* call 0x0016B2D0 */

loc_001F9A85: ;
    ecx = ZX8(MEM8(esi + 4));
    MEM32(edi + ecx * 4 + 0x30) = eax;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x64;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_001F9A99: ;
    edx = ZX8(MEM8(esi + 4));
    eax = ZX8(MEM8(esi + 5));
    ecx = MEM32(edi + edx * 4 + 0x98);
    MEM32(edi + eax * 4 + 0x98) = ecx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x64;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_001F9ABB: ;
    edx = ZX8(MEM8(esi + 4));
    ecx = ZX8(MEM8(esi + 5));
    edx = edx << 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = edx + edi + 0x58;
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    edx = ecx + edi + 0x58;
    PUSH32(esp, edx);
    PUSH32(esp, 0x001F9AD8u); RECOMP_ABI_CALL(0x0015BDF0u, sub_0015BDF0); /* call 0x0015BDF0 */

loc_001F9AD8: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x64;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_001F9AE7: ;
    eax = (uint32_t)(int32_t)SMEM16(esi + 6);
    ecx = ZX8(MEM8(esi + 4));
    MEM32(edi + ecx * 4 + 0x98) = eax;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x64;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_001F9B02: ;
    edx = MEM32(esp + 0x78);
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, edx);
    edx = ZX8(MEM8(esi + 4));
    PUSH32(esp, eax);
    edx = edx << 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, ecx);
    eax = edx + edi + 0x58;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001F9B27u); RECOMP_ABI_CALL(0x0015BB60u, sub_0015BB60); /* call 0x0015BB60 */

loc_001F9B27: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x64;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_001F9B36: ;
    ecx = (uint32_t)(int32_t)SMEM16(esi + 6);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001F9B40u); RECOMP_ABI_CALL(0x001CD160u, sub_001CD160); /* call 0x001CD160 */

loc_001F9B40: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = 0x710858;
    PUSH32(esp, 0x001F9B4Eu); RECOMP_ABI_CALL(0x001DB710u, sub_001DB710); /* call 0x001DB710 */

loc_001F9B4E: ;
    edx = ZX8(MEM8(esi + 4));
    MEM32(edi + edx * 4 + 0x44) = eax;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x64;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_001F9B62: ;
    eax = ZX8(MEM8(esi + 4));
    edi = MEM32(edi + eax * 4 + 0x44);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F980C; /* je: equal / zero */

loc_001F9B72: ;
    eax = MEM32(esp + 0x20);
    ecx = MEM32(esp + 0x18);
    edx = MEM32(esp + 0x1C);
    MEM32(esp + 0x5C) = eax;
    MEM32(esp + 0x54) = ecx;
    eax = esp + 0x64;
    MEM32(esp + 0x58) = edx;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x001F9B96u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001F9B93u); } /* indirect call */
    }

loc_001F9B96: ;
    ecx = esp + 0x64;
    PUSH32(esp, ecx);
    edx = esp + 0x58;
    PUSH32(esp, edx);
    eax = esp + 0x4C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001F9BAAu); RECOMP_ABI_CALL(0x0015BD20u, sub_0015BD20); /* call 0x0015BD20 */

loc_001F9BAA: ;
    ecx = esp + 0x50;
    PUSH32(esp, ecx);
    edx = ecx;
    PUSH32(esp, edx);
    PUSH32(esp, 0x001F9BB7u); RECOMP_ABI_CALL(0x0015BC50u, sub_0015BC50); /* call 0x0015BC50 */

loc_001F9BB7: ;
    eax = (uint32_t)(int32_t)SMEM16(esi + 6);
    MEM32(esp + 0x8C) = eax;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0x48;
    fp_push((double)SMEM32(esp + 0x7C)); /* fild */
    edx = ecx;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001F9BD9u); RECOMP_ABI_CALL(0x0015BD50u, sub_0015BD50); /* call 0x0015BD50 */

loc_001F9BD9: ;
    eax = esp + 0x50;
    PUSH32(esp, eax);
    ecx = esp + 0x74;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001F9BE8u); RECOMP_ABI_CALL(0x0010DE70u, sub_0010DE70); /* call 0x0010DE70 */

loc_001F9BE8: ;
    edx = MEM32(edi);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp + 0x64;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x001F9BF7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001F9BF4u); } /* indirect call */
    }

loc_001F9BF7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x64;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001F9D50
 * Original: 0x001F9D50 - 0x001F9DA8 (88 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F9D50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F9D50: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM16(esi + 0x14) = MEM16(esi + 0x14) + 1;
    _fa = (uint32_t)(MEM16(esi + 0x14)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x18);
    ecx = 0x710868;
    PUSH32(esp, 0x001F9D65u); RECOMP_ABI_CALL(0x001DBC50u, sub_001DBC50); /* call 0x001DBC50 */

loc_001F9D65: ;
    ecx = edi + edi * 4;
    SET_LO16(edx, MEM16(eax + ecx * 4));
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(MEM16(esi + 0x14)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), MEM16(esi + 0x14) (16-bit) */
    eax = eax + ecx * 4;
    if (CMP_A(_fa, _fb)) goto loc_001F9DA5; /* ja: above (unsigned >) */

loc_001F9D75: ;
    edi = MEM32(esi + 0x18);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    ecx = esi;
    MEM32(esi + 0x18) = edi;
    PUSH32(esp, 0x001F9D84u); RECOMP_ABI_CALL(0x001F8BB0u, sub_001F8BB0); /* call 0x001F8BB0 */

loc_001F9D84: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F9DA5; /* je: equal / zero */

loc_001F9D88: ;
    edi = MEM32(esi + 0x18);
    ecx = 0x710868;
    PUSH32(esp, 0x001F9D95u); RECOMP_ABI_CALL(0x001DBC50u, sub_001DBC50); /* call 0x001DBC50 */

loc_001F9D95: ;
    ecx = edi + edi * 4;
    SET_LO16(edx, MEM16(eax + ecx * 4));
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(MEM16(esi + 0x14)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), MEM16(esi + 0x14) (16-bit) */
    eax = eax + ecx * 4;
    if (CMP_BE(_fa, _fb)) goto loc_001F9D75; /* jbe: below or equal (unsigned <=) */

loc_001F9DA5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001F9DB0
 * Original: 0x001F9DB0 - 0x001F9DB4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F9DB0(void)
{

loc_001F9DB0: ;
    SET_LO8(eax, MEM8(ecx + 0x29));
    esp += 4; return; /* ret */

}

/**
 * sub_001F9DC0
 * Original: 0x001F9DC0 - 0x001F9DCC (12 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F9DC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F9DC0: ;
    edx = MEM32(ecx + 0x24);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xFFFFFFFFu (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    esp += 4; return; /* ret */

}

/**
 * sub_001F9DD0
 * Original: 0x001F9DD0 - 0x001F9DDE (14 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F9DD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F9DD0: ;
    eax = MEM32(ecx + 0x44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F9DDA; /* jne: not equal / not zero */

loc_001F9DD7: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_001F9DDA: ;
    SET_LO8(eax, MEM8(eax + 0x29));
    esp += 4; return; /* ret */

}

/**
 * sub_001F9DE0
 * Original: 0x001F9DE0 - 0x001F9E0B (43 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F9DE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F9DE0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F9E09; /* je: equal / zero */

loc_001F9DEA: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001F9DF0u); RECOMP_ABI_CALL(0x001FCC70u, sub_001FCC70); /* call 0x001FCC70 */

loc_001F9DF0: ;
    eax = MEM32(esi + 0x44);
    SET_LO8(ecx, MEM8(eax + 0x29));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001F9E09; /* jne: not equal / not zero */

loc_001F9DFA: ;
    _fa = (uint32_t)(MEM32(eax + 0x24)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x24), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F9E09; /* je: equal / zero */

loc_001F9E00: ;
    ecx = MEM32(esi + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001F9E09u); RECOMP_ABI_CALL(0x001FE5A0u, sub_001FE5A0); /* call 0x001FE5A0 */

loc_001F9E09: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001F9E10
 * Original: 0x001F9E10 - 0x001F9E32 (34 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F9E10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F9E10: ;
    eax = ecx;
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F9E31; /* je: equal / zero */

loc_001F9E19: ;
    edx = MEM32(eax + 0x44);
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(edx + 0x29));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F9E30; /* je: equal / zero */

loc_001F9E24: ;
    _fa = (uint32_t)(MEM32(edx + 0x24)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 0x24), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F9E30; /* je: equal / zero */

loc_001F9E2A: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001F9E30u); RECOMP_ABI_CALL(0x001FE4D0u, sub_001FE4D0); /* call 0x001FE4D0 */

loc_001F9E30: ;
    POP32(esp, ebx);

loc_001F9E31: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001F9E40
 * Original: 0x001F9E40 - 0x001F9E44 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F9E40(void)
{

loc_001F9E40: ;
    eax = (uint32_t)(int32_t)SMEM8(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001F9E50
 * Original: 0x001F9E50 - 0x001F9E67 (23 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F9E50(void)
{

loc_001F9E50: ;
    eax = ecx;
    MEM32(eax) = 0;
    MEM32(eax + 4) = 0;
    MEM32(eax + 8) = 0x80000000u;
    esp += 4; return; /* ret */

}

/**
 * sub_001F9E70
 * Original: 0x001F9E70 - 0x001F9E95 (37 bytes, 17 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F9E70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F9E70: ;
    edx = MEM32(ecx + 4);
    PUSH32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001F9E8E; /* jle: less or equal (signed <=) */

loc_001F9E7A: ;
    esi = MEM32(esp + 8);
    esi = MEM32(esi);
    ecx = MEM32(ecx);

loc_001F9E82: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F9E91; /* je: equal / zero */

loc_001F9E86: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001F9E82; /* jl: less (signed <) */

loc_001F9E8E: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_001F9E91: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001F9EA0
 * Original: 0x001F9EA0 - 0x001F9EB7 (23 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F9EA0(void)
{

loc_001F9EA0: ;
    eax = ecx;
    MEM32(eax) = 0;
    MEM32(eax + 4) = 0;
    MEM32(eax + 8) = 0x80000000u;
    esp += 4; return; /* ret */

}

/**
 * sub_001F9EC0
 * Original: 0x001F9EC0 - 0x001F9EE5 (37 bytes, 17 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F9EC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F9EC0: ;
    edx = MEM32(ecx + 4);
    PUSH32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001F9EDE; /* jle: less or equal (signed <=) */

loc_001F9ECA: ;
    esi = MEM32(esp + 8);
    esi = MEM32(esi);
    ecx = MEM32(ecx);

loc_001F9ED2: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F9EE1; /* je: equal / zero */

loc_001F9ED6: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001F9ED2; /* jl: less (signed <) */

loc_001F9EDE: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_001F9EE1: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001F9EF0
 * Original: 0x001F9EF0 - 0x001F9F07 (23 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F9EF0(void)
{

loc_001F9EF0: ;
    eax = ecx;
    MEM32(eax) = 0;
    MEM32(eax + 4) = 0;
    MEM32(eax + 8) = 0x80000000u;
    esp += 4; return; /* ret */

}

/**
 * sub_001F9F10
 * Original: 0x001F9F10 - 0x001F9F35 (37 bytes, 17 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F9F10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F9F10: ;
    edx = MEM32(ecx + 4);
    PUSH32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001F9F2E; /* jle: less or equal (signed <=) */

loc_001F9F1A: ;
    esi = MEM32(esp + 8);
    esi = MEM32(esi);
    ecx = MEM32(ecx);

loc_001F9F22: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F9F31; /* je: equal / zero */

loc_001F9F26: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001F9F22; /* jl: less (signed <) */

loc_001F9F2E: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_001F9F31: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001F9F40
 * Original: 0x001F9F40 - 0x001F9F57 (23 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F9F40(void)
{

loc_001F9F40: ;
    eax = ecx;
    MEM32(eax) = 0;
    MEM32(eax + 4) = 0;
    MEM32(eax + 8) = 0x80000000u;
    esp += 4; return; /* ret */

}

/**
 * sub_001F9F60
 * Original: 0x001F9F60 - 0x001F9F6C (12 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F9F60(void)
{

loc_001F9F60: ;
    eax = MEM32(ecx);
    ecx = MEM32(esp + 4);
    eax = eax + ecx * 4;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001F9F70
 * Original: 0x001F9F70 - 0x001F9F95 (37 bytes, 17 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F9F70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F9F70: ;
    edx = MEM32(ecx + 4);
    PUSH32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001F9F8E; /* jle: less or equal (signed <=) */

loc_001F9F7A: ;
    esi = MEM32(esp + 8);
    esi = MEM32(esi);
    ecx = MEM32(ecx);

loc_001F9F82: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F9F91; /* je: equal / zero */

loc_001F9F86: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001F9F82; /* jl: less (signed <) */

loc_001F9F8E: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_001F9F91: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001F9FA0
 * Original: 0x001F9FA0 - 0x001F9FAC (12 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F9FA0(void)
{

loc_001F9FA0: ;
    eax = MEM32(ecx);
    ecx = MEM32(esp + 4);
    eax = eax + ecx * 4;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001F9FB0
 * Original: 0x001F9FB0 - 0x001F9FD5 (37 bytes, 17 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F9FB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F9FB0: ;
    edx = MEM32(ecx + 4);
    PUSH32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001F9FCE; /* jle: less or equal (signed <=) */

loc_001F9FBA: ;
    esi = MEM32(esp + 8);
    esi = MEM32(esi);
    ecx = MEM32(ecx);

loc_001F9FC2: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001F9FD1; /* je: equal / zero */

loc_001F9FC6: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001F9FC2; /* jl: less (signed <) */

loc_001F9FCE: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_001F9FD1: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001F9FE0
 * Original: 0x001F9FE0 - 0x001F9FE9 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F9FE0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F9FE0: ;
    eax = MEM32(ecx + 8);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}

/**
 * sub_001F9FF0
 * Original: 0x001F9FF0 - 0x001FA00E (30 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001F9FF0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001F9FF0: ;
    edx = MEM32(esp + 0xC);
    ecx = MEM32(0x62EBAC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0xC);
    edx = edx << 3;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, edx);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x001FA00Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001FA00Au); } /* indirect call */
    }

loc_001FA00D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001FA010
 * Original: 0x001FA010 - 0x001FA019 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FA010(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001FA010: ;
    eax = MEM32(ecx + 8);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}

/**
 * sub_001FA020
 * Original: 0x001FA020 - 0x001FA029 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FA020(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001FA020: ;
    eax = MEM32(ecx + 8);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}

/**
 * sub_001FA030
 * Original: 0x001FA030 - 0x001FA039 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FA030(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001FA030: ;
    eax = MEM32(ecx + 8);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}

/**
 * sub_001FA040
 * Original: 0x001FA040 - 0x001FA05F (31 bytes, 9 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FA040(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001FA040: ;
    edx = MEM32(esp + 8);
    eax = ecx;
    ecx = MEM32(esp + 4);
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0xC);
    ecx = ecx | 0x80000000u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = ecx;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001FA060
 * Original: 0x001FA060 - 0x001FA069 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FA060(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001FA060: ;
    eax = MEM32(ecx + 8);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}

/**
 * sub_001FA070
 * Original: 0x001FA070 - 0x001FA079 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FA070(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001FA070: ;
    eax = MEM32(ecx + 8);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}

/**
 * sub_001FA080
 * Original: 0x001FA080 - 0x001FA09E (30 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FA080(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001FA080: ;
    edx = MEM32(esp + 0xC);
    ecx = MEM32(0x62EBAC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0xC);
    edx = edx << 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, edx);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x001FA09Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001FA09Au); } /* indirect call */
    }

loc_001FA09D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001FA0A0
 * Original: 0x001FA0A0 - 0x001FA0BE (30 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FA0A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001FA0A0: ;
    edx = MEM32(esp + 0xC);
    ecx = MEM32(0x62EBAC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0xC);
    edx = edx << 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, edx);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x001FA0BDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001FA0BAu); } /* indirect call */
    }

loc_001FA0BD: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001FA0C0
 * Original: 0x001FA0C0 - 0x001FA0DE (30 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FA0C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001FA0C0: ;
    edx = MEM32(esp + 0xC);
    ecx = MEM32(0x62EBAC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0xC);
    edx = edx << 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, edx);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x001FA0DDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001FA0DAu); } /* indirect call */
    }

loc_001FA0DD: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001FA0E0
 * Original: 0x001FA0E0 - 0x001FA0FE (30 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FA0E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001FA0E0: ;
    edx = MEM32(esp + 0xC);
    ecx = MEM32(0x62EBAC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0xC);
    edx = edx << 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, edx);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x001FA0FDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001FA0FAu); } /* indirect call */
    }

loc_001FA0FD: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001FA100
 * Original: 0x001FA100 - 0x001FA11E (30 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FA100(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001FA100: ;
    edx = MEM32(esp + 0xC);
    ecx = MEM32(0x62EBAC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0xC);
    edx = edx << 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, edx);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x001FA11Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001FA11Au); } /* indirect call */
    }

loc_001FA11D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001FA120
 * Original: 0x001FA120 - 0x001FA121 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FA120(void)
{

loc_001FA120: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001FA130
 * Original: 0x001FA130 - 0x001FA13A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FA130(void)
{

loc_001FA130: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x20) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001FA140
 * Original: 0x001FA140 - 0x001FA151 (17 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FA140(void)
{

loc_001FA140: ;
    eax = ecx;
    MEM32(eax + 4) = 0x3F000000;
    MEM32(eax + 8) = 0x3ECCCCCD;
    esp += 4; return; /* ret */

}

/**
 * sub_001FA160
 * Original: 0x001FA160 - 0x001FA169 (9 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FA160(void)
{

loc_001FA160: ;
    SET_LO8(eax, MEM8(esp + 4));
    MEM8(ecx) = LO8(eax);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001FA170
 * Original: 0x001FA170 - 0x001FA174 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FA170(void)
{

loc_001FA170: ;
    eax = (uint32_t)(int32_t)SMEM8(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001FA180
 * Original: 0x001FA180 - 0x001FA18C (12 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FA180(void)
{

loc_001FA180: ;
    eax = MEM32(ecx);
    ecx = MEM32(esp + 4);
    eax = eax + ecx * 4;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001FA190
 * Original: 0x001FA190 - 0x001FA19C (12 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FA190(void)
{

loc_001FA190: ;
    eax = MEM32(ecx);
    ecx = MEM32(esp + 4);
    eax = eax + ecx * 4;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001FA1A0
 * Original: 0x001FA1A0 - 0x001FA1AC (12 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FA1A0(void)
{

loc_001FA1A0: ;
    eax = MEM32(ecx);
    ecx = MEM32(esp + 4);
    eax = eax + ecx * 4;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001FA1B0
 * Original: 0x001FA1B0 - 0x001FA1D1 (33 bytes, 13 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FA1B0(void)
{

loc_001FA1B0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x001FA1BEu); RECOMP_ABI_CALL(0x002066F0u, sub_002066F0); /* call 0x002066F0 */

loc_001FA1BE: ;
    SET_LO8(eax, MEM8(esi + 0x48));
    MEM8(edi + 0x18) = LO8(eax);
    SET_LO16(ecx, MEM16(esi + 0x5C));
    MEM16(edi + 0x1A) = LO16(ecx);
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001FA1E0
 * Original: 0x001FA1E0 - 0x001FA1F5 (21 bytes, 6 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FA1E0(void)
{

loc_001FA1E0: ;
    eax = MEM32(esp + 4);
    SET_LO8(edx, MEM8(eax + 0x18));
    MEM8(ecx + 0x48) = LO8(edx);
    SET_LO16(eax, MEM16(eax + 0x1A));
    MEM16(ecx + 0x5C) = LO16(eax);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001FA200
 * Original: 0x001FA200 - 0x001FA24B (75 bytes, 26 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FA200(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FA200: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x98);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_LE(_fas, _fbs)) goto loc_001FA224; /* jle: less or equal (signed <=) */

loc_001FA20E: ;
    edx = MEM32(ecx + 0x94);
    edi = MEM32(esp + 0xC);

loc_001FA218: ;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001FA227; /* je: equal / zero */

loc_001FA21C: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001FA218; /* jl: less (signed <) */

loc_001FA224: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_001FA227: ;
    edx = MEM32(ecx + 0x94);
    POP32(esp, edi);
    MEM32(edx + eax * 4) = 0;
    eax = MEM32(ecx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_001FA248; /* je: equal / zero */

loc_001FA23D: ;
    MEM32(esp + 4) = ecx;
    ecx = eax;
    g_seh_ebp = ebp; sub_001FE630(); return; /* tail jmp 0x001FE630 */

loc_001FA248: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001FA250
 * Original: 0x001FA250 - 0x001FA29B (75 bytes, 26 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FA250(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FA250: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x8C);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_LE(_fas, _fbs)) goto loc_001FA274; /* jle: less or equal (signed <=) */

loc_001FA25E: ;
    edx = MEM32(ecx + 0x88);
    edi = MEM32(esp + 0xC);

loc_001FA268: ;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001FA277; /* je: equal / zero */

loc_001FA26C: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001FA268; /* jl: less (signed <) */

loc_001FA274: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_001FA277: ;
    edx = MEM32(ecx + 0x88);
    POP32(esp, edi);
    MEM32(edx + eax * 4) = 0;
    eax = MEM32(ecx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_001FA298; /* je: equal / zero */

loc_001FA28D: ;
    MEM32(esp + 4) = ecx;
    ecx = eax;
    g_seh_ebp = ebp; sub_001FE630(); return; /* tail jmp 0x001FE630 */

loc_001FA298: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001FA2A0
 * Original: 0x001FA2A0 - 0x001FA2E5 (69 bytes, 26 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FA2A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FA2A0: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x80);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_LE(_fas, _fbs)) goto loc_001FA2C1; /* jle: less or equal (signed <=) */

loc_001FA2AE: ;
    edx = MEM32(ecx + 0x7C);
    edi = MEM32(esp + 0xC);

loc_001FA2B5: ;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001FA2C4; /* je: equal / zero */

loc_001FA2B9: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001FA2B5; /* jl: less (signed <) */

loc_001FA2C1: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_001FA2C4: ;
    edx = MEM32(ecx + 0x7C);
    POP32(esp, edi);
    MEM32(edx + eax * 4) = 0;
    eax = MEM32(ecx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_001FA2E2; /* je: equal / zero */

loc_001FA2D7: ;
    MEM32(esp + 4) = ecx;
    ecx = eax;
    g_seh_ebp = ebp; sub_001FE630(); return; /* tail jmp 0x001FE630 */

loc_001FA2E2: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001FA2F0
 * Original: 0x001FA2F0 - 0x001FA32F (63 bytes, 25 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FA2F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001FA2F0: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x74);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_LE(_fas, _fbs)) goto loc_001FA30E; /* jle: less or equal (signed <=) */

loc_001FA2FB: ;
    edx = MEM32(ecx + 0x70);
    edi = MEM32(esp + 0xC);

loc_001FA302: ;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001FA320; /* je: equal / zero */

loc_001FA306: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001FA302; /* jl: less (signed <) */

loc_001FA30E: ;
    edx = MEM32(ecx + 0x70);
    POP32(esp, edi);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, esi);
    MEM32(edx + eax * 4) = 0;
    esp += 8; return; /* ret 4 */

loc_001FA320: ;
    ecx = MEM32(ecx + 0x70);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ecx + eax * 4) = 0;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001FA330
 * Original: 0x001FA330 - 0x001FA36F (63 bytes, 25 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FA330(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001FA330: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x64);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_LE(_fas, _fbs)) goto loc_001FA34E; /* jle: less or equal (signed <=) */

loc_001FA33B: ;
    edx = MEM32(ecx + 0x60);
    edi = MEM32(esp + 0xC);

loc_001FA342: ;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001FA360; /* je: equal / zero */

loc_001FA346: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001FA342; /* jl: less (signed <) */

loc_001FA34E: ;
    edx = MEM32(ecx + 0x60);
    POP32(esp, edi);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, esi);
    MEM32(edx + eax * 4) = 0;
    esp += 8; return; /* ret 4 */

loc_001FA360: ;
    ecx = MEM32(ecx + 0x60);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ecx + eax * 4) = 0;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001FA370
 * Original: 0x001FA370 - 0x001FA395 (37 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FA370(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001FA370: ;
    edx = ecx;
    eax = MEM32(edx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_001FA394; /* js: sign (negative) */

loc_001FA379: ;
    ecx = MEM32(0x62EBAC);
    PUSH32(esp, esi);
    esi = MEM32(ecx);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x10);
    eax = eax << 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    eax = MEM32(edx);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(esi + 0x14); PUSH32(esp, 0x001FA393u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001FA390u); } /* indirect call */
    }

loc_001FA393: ;
    POP32(esp, esi);

loc_001FA394: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001FA3A0
 * Original: 0x001FA3A0 - 0x001FA3E1 (65 bytes, 25 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FA3A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001FA3A0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 8);
    eax = MEM32(esi + 4);
    ecx = ecx & 0x7FFFFFFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001FA3CC; /* jne: not equal / not zero */

loc_001FA3B3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001FA3BB; /* je: equal / zero */

loc_001FA3B7: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_001FA3C0;

loc_001FA3BB: ;
    eax = 1;

loc_001FA3C0: ;
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001FA3C9u); RECOMP_ABI_CALL(0x00101B30u, sub_00101B30); /* call 0x00101B30 */

loc_001FA3C9: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001FA3CC: ;
    edx = MEM32(esi + 4);
    eax = MEM32(esi);
    ecx = MEM32(esp + 8);
    ecx = MEM32(ecx);
    MEM32(eax + edx * 4) = ecx;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001FA3F0
 * Original: 0x001FA3F0 - 0x001FA431 (65 bytes, 25 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FA3F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001FA3F0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 8);
    eax = MEM32(esi + 4);
    ecx = ecx & 0x7FFFFFFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001FA41C; /* jne: not equal / not zero */

loc_001FA403: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001FA40B; /* je: equal / zero */

loc_001FA407: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_001FA410;

loc_001FA40B: ;
    eax = 1;

loc_001FA410: ;
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001FA419u); RECOMP_ABI_CALL(0x00101B30u, sub_00101B30); /* call 0x00101B30 */

loc_001FA419: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001FA41C: ;
    edx = MEM32(esi + 4);
    eax = MEM32(esi);
    ecx = MEM32(esp + 8);
    ecx = MEM32(ecx);
    MEM32(eax + edx * 4) = ecx;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001FA440
 * Original: 0x001FA440 - 0x001FA481 (65 bytes, 25 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FA440(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001FA440: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 8);
    eax = MEM32(esi + 4);
    ecx = ecx & 0x7FFFFFFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001FA46C; /* jne: not equal / not zero */

loc_001FA453: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001FA45B; /* je: equal / zero */

loc_001FA457: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_001FA460;

loc_001FA45B: ;
    eax = 1;

loc_001FA460: ;
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001FA469u); RECOMP_ABI_CALL(0x00101B30u, sub_00101B30); /* call 0x00101B30 */

loc_001FA469: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001FA46C: ;
    edx = MEM32(esi + 4);
    eax = MEM32(esi);
    ecx = MEM32(esp + 8);
    ecx = MEM32(ecx);
    MEM32(eax + edx * 4) = ecx;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001FA490
 * Original: 0x001FA490 - 0x001FA4D1 (65 bytes, 25 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FA490(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001FA490: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 8);
    eax = MEM32(esi + 4);
    ecx = ecx & 0x7FFFFFFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001FA4BC; /* jne: not equal / not zero */

loc_001FA4A3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001FA4AB; /* je: equal / zero */

loc_001FA4A7: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_001FA4B0;

loc_001FA4AB: ;
    eax = 1;

loc_001FA4B0: ;
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001FA4B9u); RECOMP_ABI_CALL(0x00101B30u, sub_00101B30); /* call 0x00101B30 */

loc_001FA4B9: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001FA4BC: ;
    edx = MEM32(esi + 4);
    eax = MEM32(esi);
    ecx = MEM32(esp + 8);
    ecx = MEM32(ecx);
    MEM32(eax + edx * 4) = ecx;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001FA4E0
 * Original: 0x001FA4E0 - 0x001FA521 (65 bytes, 25 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FA4E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001FA4E0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 8);
    eax = MEM32(esi + 4);
    ecx = ecx & 0x7FFFFFFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001FA50C; /* jne: not equal / not zero */

loc_001FA4F3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001FA4FB; /* je: equal / zero */

loc_001FA4F7: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_001FA500;

loc_001FA4FB: ;
    eax = 1;

loc_001FA500: ;
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001FA509u); RECOMP_ABI_CALL(0x00101B30u, sub_00101B30); /* call 0x00101B30 */

loc_001FA509: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001FA50C: ;
    edx = MEM32(esi + 4);
    eax = MEM32(esi);
    ecx = MEM32(esp + 8);
    ecx = MEM32(ecx);
    MEM32(eax + edx * 4) = ecx;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001FA530
 * Original: 0x001FA530 - 0x001FA555 (37 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FA530(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001FA530: ;
    edx = ecx;
    eax = MEM32(edx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_001FA554; /* js: sign (negative) */

loc_001FA539: ;
    ecx = MEM32(0x62EBAC);
    PUSH32(esp, esi);
    esi = MEM32(ecx);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x10);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    eax = MEM32(edx);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(esi + 0x14); PUSH32(esp, 0x001FA553u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001FA550u); } /* indirect call */
    }

loc_001FA553: ;
    POP32(esp, esi);

loc_001FA554: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001FA560
 * Original: 0x001FA560 - 0x001FA585 (37 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FA560(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001FA560: ;
    edx = ecx;
    eax = MEM32(edx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_001FA584; /* js: sign (negative) */

loc_001FA569: ;
    ecx = MEM32(0x62EBAC);
    PUSH32(esp, esi);
    esi = MEM32(ecx);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x10);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    eax = MEM32(edx);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(esi + 0x14); PUSH32(esp, 0x001FA583u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001FA580u); } /* indirect call */
    }

loc_001FA583: ;
    POP32(esp, esi);

loc_001FA584: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001FA590
 * Original: 0x001FA590 - 0x001FA5B5 (37 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FA590(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001FA590: ;
    edx = ecx;
    eax = MEM32(edx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_001FA5B4; /* js: sign (negative) */

loc_001FA599: ;
    ecx = MEM32(0x62EBAC);
    PUSH32(esp, esi);
    esi = MEM32(ecx);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x10);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    eax = MEM32(edx);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(esi + 0x14); PUSH32(esp, 0x001FA5B3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001FA5B0u); } /* indirect call */
    }

loc_001FA5B3: ;
    POP32(esp, esi);

loc_001FA5B4: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001FA5C0
 * Original: 0x001FA5C0 - 0x001FA5E5 (37 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FA5C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001FA5C0: ;
    edx = ecx;
    eax = MEM32(edx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_001FA5E4; /* js: sign (negative) */

loc_001FA5C9: ;
    ecx = MEM32(0x62EBAC);
    PUSH32(esp, esi);
    esi = MEM32(ecx);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x10);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    eax = MEM32(edx);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(esi + 0x14); PUSH32(esp, 0x001FA5E3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001FA5E0u); } /* indirect call */
    }

loc_001FA5E3: ;
    POP32(esp, esi);

loc_001FA5E4: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001FA5F0
 * Original: 0x001FA5F0 - 0x001FA615 (37 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FA5F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001FA5F0: ;
    edx = ecx;
    eax = MEM32(edx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_001FA614; /* js: sign (negative) */

loc_001FA5F9: ;
    ecx = MEM32(0x62EBAC);
    PUSH32(esp, esi);
    esi = MEM32(ecx);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x10);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    eax = MEM32(edx);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(esi + 0x14); PUSH32(esp, 0x001FA613u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001FA610u); } /* indirect call */
    }

loc_001FA613: ;
    POP32(esp, esi);

loc_001FA614: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001FA620
 * Original: 0x001FA620 - 0x001FA645 (37 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FA620(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001FA620: ;
    edx = ecx;
    eax = MEM32(edx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_001FA644; /* js: sign (negative) */

loc_001FA629: ;
    ecx = MEM32(0x62EBAC);
    PUSH32(esp, esi);
    esi = MEM32(ecx);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x10);
    eax = eax << 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    eax = MEM32(edx);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(esi + 0x14); PUSH32(esp, 0x001FA643u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001FA640u); } /* indirect call */
    }

loc_001FA643: ;
    POP32(esp, esi);

loc_001FA644: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001FA650
 * Original: 0x001FA650 - 0x001FA671 (33 bytes, 13 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FA650(void)
{

loc_001FA650: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x001FA65Eu); RECOMP_ABI_CALL(0x002067F0u, sub_002067F0); /* call 0x002067F0 */

loc_001FA65E: ;
    SET_LO8(eax, MEM8(edi + 0x18));
    MEM8(esi + 0x48) = LO8(eax);
    SET_LO16(ecx, MEM16(edi + 0x1A));
    POP32(esp, edi);
    MEM16(esi + 0x5C) = LO16(ecx);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001FA680
 * Original: 0x001FA680 - 0x001FA6C6 (70 bytes, 24 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FA680(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001FA680: ;
    eax = MEM32(ecx + 0x98);
    PUSH32(esp, esi);
    esi = ecx + 0x94;
    ecx = MEM32(esi + 8);
    ecx = ecx & 0x7FFFFFFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001FA6B3; /* jne: not equal / not zero */

loc_001FA69A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001FA6A2; /* je: equal / zero */

loc_001FA69E: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_001FA6A7;

loc_001FA6A2: ;
    eax = 1;

loc_001FA6A7: ;
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001FA6B0u); RECOMP_ABI_CALL(0x00101B30u, sub_00101B30); /* call 0x00101B30 */

loc_001FA6B0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001FA6B3: ;
    edx = MEM32(esi + 4);
    eax = MEM32(esi);
    ecx = MEM32(esp + 8);
    MEM32(eax + edx * 4) = ecx;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001FA6D0
 * Original: 0x001FA6D0 - 0x001FA716 (70 bytes, 24 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FA6D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001FA6D0: ;
    eax = MEM32(ecx + 0x8C);
    PUSH32(esp, esi);
    esi = ecx + 0x88;
    ecx = MEM32(esi + 8);
    ecx = ecx & 0x7FFFFFFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001FA703; /* jne: not equal / not zero */

loc_001FA6EA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001FA6F2; /* je: equal / zero */

loc_001FA6EE: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_001FA6F7;

loc_001FA6F2: ;
    eax = 1;

loc_001FA6F7: ;
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001FA700u); RECOMP_ABI_CALL(0x00101B30u, sub_00101B30); /* call 0x00101B30 */

loc_001FA700: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001FA703: ;
    edx = MEM32(esi + 4);
    eax = MEM32(esi);
    ecx = MEM32(esp + 8);
    MEM32(eax + edx * 4) = ecx;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001FA720
 * Original: 0x001FA720 - 0x001FA763 (67 bytes, 24 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FA720(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001FA720: ;
    eax = MEM32(ecx + 0x80);
    PUSH32(esp, esi);
    esi = ecx + 0x7C;
    ecx = MEM32(esi + 8);
    ecx = ecx & 0x7FFFFFFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001FA750; /* jne: not equal / not zero */

loc_001FA737: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001FA73F; /* je: equal / zero */

loc_001FA73B: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_001FA744;

loc_001FA73F: ;
    eax = 1;

loc_001FA744: ;
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001FA74Du); RECOMP_ABI_CALL(0x00101B30u, sub_00101B30); /* call 0x00101B30 */

loc_001FA74D: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001FA750: ;
    edx = MEM32(esi + 4);
    eax = MEM32(esi);
    ecx = MEM32(esp + 8);
    MEM32(eax + edx * 4) = ecx;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001FA770
 * Original: 0x001FA770 - 0x001FA7B0 (64 bytes, 24 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FA770(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001FA770: ;
    eax = MEM32(ecx + 0x74);
    PUSH32(esp, esi);
    esi = ecx + 0x70;
    ecx = MEM32(esi + 8);
    ecx = ecx & 0x7FFFFFFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001FA79D; /* jne: not equal / not zero */

loc_001FA784: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001FA78C; /* je: equal / zero */

loc_001FA788: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_001FA791;

loc_001FA78C: ;
    eax = 1;

loc_001FA791: ;
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001FA79Au); RECOMP_ABI_CALL(0x00101B30u, sub_00101B30); /* call 0x00101B30 */

loc_001FA79A: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001FA79D: ;
    edx = MEM32(esi + 4);
    eax = MEM32(esi);
    ecx = MEM32(esp + 8);
    MEM32(eax + edx * 4) = ecx;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001FA7B0
 * Original: 0x001FA7B0 - 0x001FA7F0 (64 bytes, 24 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FA7B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001FA7B0: ;
    eax = MEM32(ecx + 0x64);
    PUSH32(esp, esi);
    esi = ecx + 0x60;
    ecx = MEM32(esi + 8);
    ecx = ecx & 0x7FFFFFFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001FA7DD; /* jne: not equal / not zero */

loc_001FA7C4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001FA7CC; /* je: equal / zero */

loc_001FA7C8: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_001FA7D1;

loc_001FA7CC: ;
    eax = 1;

loc_001FA7D1: ;
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001FA7DAu); RECOMP_ABI_CALL(0x00101B30u, sub_00101B30); /* call 0x00101B30 */

loc_001FA7DA: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001FA7DD: ;
    edx = MEM32(esi + 4);
    eax = MEM32(esi);
    ecx = MEM32(esp + 8);
    MEM32(eax + edx * 4) = ecx;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001FA820
 * Original: 0x001FA820 - 0x001FA845 (37 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FA820(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001FA820: ;
    edx = ecx;
    eax = MEM32(edx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_001FA844; /* js: sign (negative) */

loc_001FA829: ;
    ecx = MEM32(0x62EBAC);
    PUSH32(esp, esi);
    esi = MEM32(ecx);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x10);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    eax = MEM32(edx);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(esi + 0x14); PUSH32(esp, 0x001FA843u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001FA840u); } /* indirect call */
    }

loc_001FA843: ;
    POP32(esp, esi);

loc_001FA844: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001FA850
 * Original: 0x001FA850 - 0x001FA875 (37 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FA850(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001FA850: ;
    edx = ecx;
    eax = MEM32(edx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_001FA874; /* js: sign (negative) */

loc_001FA859: ;
    ecx = MEM32(0x62EBAC);
    PUSH32(esp, esi);
    esi = MEM32(ecx);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x10);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    eax = MEM32(edx);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(esi + 0x14); PUSH32(esp, 0x001FA873u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001FA870u); } /* indirect call */
    }

loc_001FA873: ;
    POP32(esp, esi);

loc_001FA874: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001FA880
 * Original: 0x001FA880 - 0x001FA8A5 (37 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FA880(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001FA880: ;
    edx = ecx;
    eax = MEM32(edx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_001FA8A4; /* js: sign (negative) */

loc_001FA889: ;
    ecx = MEM32(0x62EBAC);
    PUSH32(esp, esi);
    esi = MEM32(ecx);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x10);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    eax = MEM32(edx);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(esi + 0x14); PUSH32(esp, 0x001FA8A3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001FA8A0u); } /* indirect call */
    }

loc_001FA8A3: ;
    POP32(esp, esi);

loc_001FA8A4: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001FA8B0
 * Original: 0x001FA8B0 - 0x001FA8D5 (37 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FA8B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001FA8B0: ;
    edx = ecx;
    eax = MEM32(edx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_001FA8D4; /* js: sign (negative) */

loc_001FA8B9: ;
    ecx = MEM32(0x62EBAC);
    PUSH32(esp, esi);
    esi = MEM32(ecx);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x10);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    eax = MEM32(edx);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(esi + 0x14); PUSH32(esp, 0x001FA8D3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001FA8D0u); } /* indirect call */
    }

loc_001FA8D3: ;
    POP32(esp, esi);

loc_001FA8D4: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001FA8E0
 * Original: 0x001FA8E0 - 0x001FA92A (74 bytes, 27 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FA8E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001FA8E0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi) = 0x4B3668;
    if (CMP_EQ(_fa, _fb)) goto loc_001FA901; /* je: equal / zero */

loc_001FA8F0: ;
    MEM16(ecx + 6) = MEM16(ecx + 6) - 1;
    _fa = (uint32_t)(MEM16(ecx + 6)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(ecx + 6)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 6), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001FA901; /* jne: not equal / not zero */

loc_001FA8FB: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x001FA901u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001FA8FFu); } /* indirect call */
    }

loc_001FA901: ;
    eax = MEM32(esi + 0x38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_001FA922; /* js: sign (negative) */

loc_001FA908: ;
    ecx = MEM32(0x62EBAC);
    edx = MEM32(ecx);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x10);
    eax = eax << 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x30);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x001FA922u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001FA91Fu); } /* indirect call */
    }

loc_001FA922: ;
    MEM32(esi) = 0x4AE714;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001FA930
 * Original: 0x001FA930 - 0x001FA955 (37 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FA930(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001FA930: ;
    edx = ecx;
    eax = MEM32(edx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_001FA954; /* js: sign (negative) */

loc_001FA939: ;
    ecx = MEM32(0x62EBAC);
    PUSH32(esp, esi);
    esi = MEM32(ecx);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x10);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    eax = MEM32(edx);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(esi + 0x14); PUSH32(esp, 0x001FA953u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001FA950u); } /* indirect call */
    }

loc_001FA953: ;
    POP32(esp, esi);

loc_001FA954: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001FA960
 * Original: 0x001FA960 - 0x001FA978 (24 bytes, 7 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FA960(void)
{

loc_001FA960: ;
    edx = MEM32(esp + 4);
    eax = ecx;
    ecx = eax + 0xC;
    MEM32(eax) = ecx;
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = 0x80000001u;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001FA980
 * Original: 0x001FA980 - 0x001FA9E8 (104 bytes, 37 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FA980(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001FA980: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi) = 0x4B3668;
    if (CMP_EQ(_fa, _fb)) goto loc_001FA9A1; /* je: equal / zero */

loc_001FA990: ;
    MEM16(ecx + 6) = MEM16(ecx + 6) - 1;
    _fa = (uint32_t)(MEM16(ecx + 6)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(ecx + 6)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 6), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001FA9A1; /* jne: not equal / not zero */

loc_001FA99B: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x001FA9A1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001FA99Fu); } /* indirect call */
    }

loc_001FA9A1: ;
    eax = MEM32(esi + 0x38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_001FA9C2; /* js: sign (negative) */

loc_001FA9A8: ;
    ecx = MEM32(0x62EBAC);
    edx = MEM32(ecx);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x10);
    eax = eax << 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x30);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x001FA9C2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001FA9BFu); } /* indirect call */
    }

loc_001FA9C2: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    MEM32(esi) = 0x4AE714;
    if (TEST_Z(_fa, _fb)) goto loc_001FA9E2; /* je: equal / zero */

loc_001FA9CF: ;
    eax = ZX16(MEM16(esi + 4));
    ecx = MEM32(0x62EBAC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xE);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x001FA9E2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001FA9DFu); } /* indirect call */
    }

loc_001FA9E2: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001FA9F0
 * Original: 0x001FA9F0 - 0x001FAA93 (163 bytes, 42 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FA9F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001FA9F0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x001FA9FEu); RECOMP_ABI_CALL(0x002068A0u, sub_002068A0); /* call 0x002068A0 */

loc_001FA9FE: ;
    MEM32(esi) = 0x4B367C;
    MEM32(esi + 0x4C) = 0x3F000000;
    MEM32(esi + 0x50) = 0x3ECCCCCD;
    MEM32(esi + 0x68) = 0x80000001u;
    eax = esi + 0x6C;
    MEM32(esi + 0x60) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x64) = eax;
    MEM32(esi + 0x70) = eax;
    MEM32(esi + 0x74) = eax;
    ecx = 0x80000000u;
    MEM32(esi + 0x78) = ecx;
    MEM32(esi + 0x7C) = eax;
    MEM32(esi + 0x80) = eax;
    MEM32(esi + 0x84) = ecx;
    MEM32(esi + 0x88) = eax;
    MEM32(esi + 0x8C) = eax;
    MEM32(esi + 0x90) = ecx;
    MEM32(esi + 0x94) = eax;
    MEM32(esi + 0x98) = eax;
    MEM32(esi + 0x9C) = ecx;
    MEM32(esi + 0x2C) = esi;
    SET_LO8(ecx, MEM8(edi + 0x18));
    MEM8(esi + 0x48) = LO8(ecx);
    SET_LO8(ecx, MEM8(esi + 0x40));
    MEM32(esi + 0x44) = eax;
    SET_LO8(ecx, LO8(ecx) & 0xFE);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEM8(esi + 0x40) = LO8(ecx);
    SET_LO16(edx, MEM16(edi + 0x1A));
    MEM32(esi + 0x54) = eax;
    POP32(esp, edi);
    MEM16(esi + 0x5C) = LO16(edx);
    MEM32(esi + 0x58) = 0xFFFFFFFFu;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001FAAA0
 * Original: 0x001FAAA0 - 0x001FABC5 (293 bytes, 100 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FAAA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001FAAA0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, esi);
    MEM32(esi) = 0x4B367C;
    PUSH32(esp, 0x001FAAAFu); RECOMP_ABI_CALL(0x00207ED0u, sub_00207ED0); /* call 0x00207ED0 */

loc_001FAAAF: ;
    ecx = MEM32(esi + 0x54);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001FAACA; /* je: equal / zero */

loc_001FAAB9: ;
    MEM16(ecx + 6) = MEM16(ecx + 6) - 1;
    _fa = (uint32_t)(MEM16(ecx + 6)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(ecx + 6)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 6), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001FAACA; /* jne: not equal / not zero */

loc_001FAAC4: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x001FAACAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001FAAC8u); } /* indirect call */
    }

loc_001FAACA: ;
    eax = MEM32(esi + 0x9C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_001FAAF1; /* js: sign (negative) */

loc_001FAAD4: ;
    ecx = MEM32(0x62EBAC);
    edx = MEM32(ecx);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x10);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x94);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x001FAAF1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001FAAEEu); } /* indirect call */
    }

loc_001FAAF1: ;
    eax = MEM32(esi + 0x90);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_001FAB18; /* js: sign (negative) */

loc_001FAAFB: ;
    ecx = MEM32(0x62EBAC);
    edx = MEM32(ecx);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x10);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x88);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x001FAB18u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001FAB15u); } /* indirect call */
    }

loc_001FAB18: ;
    eax = MEM32(esi + 0x84);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_001FAB3C; /* js: sign (negative) */

loc_001FAB22: ;
    ecx = MEM32(0x62EBAC);
    edx = MEM32(ecx);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x10);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x7C);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x001FAB3Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001FAB39u); } /* indirect call */
    }

loc_001FAB3C: ;
    eax = MEM32(esi + 0x78);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_001FAB5D; /* js: sign (negative) */

loc_001FAB43: ;
    ecx = MEM32(0x62EBAC);
    edx = MEM32(ecx);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x10);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x70);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x001FAB5Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001FAB5Au); } /* indirect call */
    }

loc_001FAB5D: ;
    eax = MEM32(esi + 0x68);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_001FAB7E; /* js: sign (negative) */

loc_001FAB64: ;
    ecx = MEM32(0x62EBAC);
    edx = MEM32(ecx);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x10);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x60);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x001FAB7Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001FAB7Bu); } /* indirect call */
    }

loc_001FAB7E: ;
    ecx = MEM32(esi + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi) = 0x4B3668;
    if (CMP_EQ(_fa, _fb)) goto loc_001FAB9C; /* je: equal / zero */

loc_001FAB8B: ;
    MEM16(ecx + 6) = MEM16(ecx + 6) - 1;
    _fa = (uint32_t)(MEM16(ecx + 6)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(ecx + 6)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 6), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001FAB9C; /* jne: not equal / not zero */

loc_001FAB96: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x001FAB9Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001FAB9Au); } /* indirect call */
    }

loc_001FAB9C: ;
    eax = MEM32(esi + 0x38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_001FABBD; /* js: sign (negative) */

loc_001FABA3: ;
    ecx = MEM32(0x62EBAC);
    edx = MEM32(ecx);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x10);
    eax = eax << 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x30);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x001FABBDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001FABBAu); } /* indirect call */
    }

loc_001FABBD: ;
    MEM32(esi) = 0x4AE714;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001FABD0
 * Original: 0x001FABD0 - 0x001FABF8 (40 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FABD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001FABD0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x001FABD8u); RECOMP_ABI_CALL(0x001FAAA0u, sub_001FAAA0); /* call 0x001FAAA0 */

loc_001FABD8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001FABF2; /* je: equal / zero */

loc_001FABDF: ;
    edx = ZX16(MEM16(esi + 4));
    ecx = MEM32(0x62EBAC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x24);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x001FABF2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001FABEFu); } /* indirect call */
    }

loc_001FABF2: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001FAC00
 * Original: 0x001FAC00 - 0x001FAC30 (48 bytes, 20 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FAC00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001FAC00: ;
    edx = MEM32(esp + 4);
    _fb = (uint32_t)(0xF) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0xC);
    edx = edx & 0xFFFFFFF0u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001FAC1C; /* jle: less or equal (signed <=) */

loc_001FAC12: ;
    eax = MEM32(ecx);
    POP32(esp, esi);
    MEM32(esp + 4) = edx;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x24)); return; /* indirect tail jmp */

loc_001FAC1C: ;
    eax = MEM32(ecx + 8);
    PUSH32(esp, edi);
    edi = eax + edx;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ecx + 8) = edi;
    POP32(esp, edi);
    MEM32(ecx + 0xC) = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001FAC30
 * Original: 0x001FAC30 - 0x001FAC6B (59 bytes, 25 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FAC30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001FAC30: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(0xF) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax & 0xFFFFFFF0u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, esi);
    if ((_fa == 0)) goto loc_001FAC57; /* je: equal / zero */

loc_001FAC3D: ;
    edx = MEM32(ecx + 0x14);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001FAC4C; /* je: equal / zero */

loc_001FAC48: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001FAC57; /* jne: not equal / not zero */

loc_001FAC4C: ;
    edx = MEM32(ecx);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x001FAC53u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001FAC50u); } /* indirect call */
    }

loc_001FAC53: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_001FAC57: ;
    esi = MEM32(ecx + 8);
    edx = MEM32(ecx + 0xC);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 8) = esi;
    MEM32(ecx + 0xC) = edx;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001FAC70
 * Original: 0x001FAC70 - 0x001FAC89 (25 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FAC70(void)
{

loc_001FAC70: ;
    ecx = MEM32(0x62EBAC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, 0x1E);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x001FAC83u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001FAC80u); } /* indirect call */
    }

loc_001FAC83: ;
    MEM16(eax + 4) = LO16(esi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001FAC90
 * Original: 0x001FAC90 - 0x001FACA7 (23 bytes, 6 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FAC90(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001FAC90: ;
    eax = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    eax = eax << 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(ecx + eax * 4 + 0x118C);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001FACB0
 * Original: 0x001FACB0 - 0x001FACC7 (23 bytes, 6 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FACB0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001FACB0: ;
    eax = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    eax = eax << 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(ecx + eax * 4 + 0x218C);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001FACD0
 * Original: 0x001FACD0 - 0x001FACD4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FACD0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_001FACD0: ;
    fp_push(MEMF(ecx + 8)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001FACE0
 * Original: 0x001FACE0 - 0x001FAD0A (42 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FACE0(void)
{

loc_001FACE0: ;
    eax = ecx;
    ecx = 0x3DCCCCCD;
    MEM8(eax) = 1;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = 0;
    MEM8(eax + 0x10) = 1;
    MEM32(eax + 0x14) = 0x3C23D70A;
    MEM32(eax + 0x18) = 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_001FAD10
 * Original: 0x001FAD10 - 0x001FAD13 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FAD10(void)
{

loc_001FAD10: ;
    eax = MEM32(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001FAD20
 * Original: 0x001FAD20 - 0x001FAD24 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FAD20(void)
{

loc_001FAD20: ;
    eax = MEM32(ecx + 4);
    esp += 4; return; /* ret */

}

/**
 * sub_001FAD30
 * Original: 0x001FAD30 - 0x001FAD49 (25 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FAD30(void)
{

loc_001FAD30: ;
    ecx = MEM32(0x62EBAC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, 0x19);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x001FAD43u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001FAD40u); } /* indirect call */
    }

loc_001FAD43: ;
    MEM16(eax + 4) = LO16(esi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001FAD50
 * Original: 0x001FAD50 - 0x001FAD57 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FAD50(void)
{

loc_001FAD50: ;
    MEM32(ecx) = 0x4AE714;
    esp += 4; return; /* ret */

}

/**
 * sub_001FAD60
 * Original: 0x001FAD60 - 0x001FAD69 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FAD60(void)
{

loc_001FAD60: ;
    eax = ecx;
    MEM32(eax) = 0x4B3694;
    esp += 4; return; /* ret */

}

/**
 * sub_001FAD70
 * Original: 0x001FAD70 - 0x001FAD77 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FAD70(void)
{

loc_001FAD70: ;
    MEM32(ecx) = 0x4AE714;
    esp += 4; return; /* ret */

}

/**
 * sub_001FAD80
 * Original: 0x001FAD80 - 0x001FADA9 (41 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FAD80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001FAD80: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x4AE714;
    if (TEST_Z(_fa, _fb)) goto loc_001FADA3; /* je: equal / zero */

loc_001FAD90: ;
    edx = ZX16(MEM16(esi + 4));
    ecx = MEM32(0x62EBAC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xE);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x001FADA3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001FADA0u); } /* indirect call */
    }

loc_001FADA3: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001FADB0
 * Original: 0x001FADB0 - 0x001FADB6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FADB0(void)
{

loc_001FADB0: ;
    eax = 0x72078C;
    esp += 4; return; /* ret */

}

/**
 * sub_001FADC0
 * Original: 0x001FADC0 - 0x001FADC6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FADC0(void)
{

loc_001FADC0: ;
    eax = 0x720790;
    esp += 4; return; /* ret */

}

/**
 * sub_001FADD0
 * Original: 0x001FADD0 - 0x001FADE0 (16 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FADD0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_001FADD0: ;
    eax = MEM32(0x72078C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x720790)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0x720790) (32-bit) */
    _cf = (int)(_fa < _fb);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    esp += 4; return; /* ret */

}

/**
 * sub_001FADF0
 * Original: 0x001FADF0 - 0x001FADF4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FADF0(void)
{

loc_001FADF0: ;
    eax = ecx + 0x20;
    esp += 4; return; /* ret */

}

/**
 * sub_001FAE00
 * Original: 0x001FAE00 - 0x001FAE07 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FAE00(void)
{

loc_001FAE00: ;
    eax = MEM32(ecx + 0xCC);
    esp += 4; return; /* ret */

}

/**
 * sub_001FAE10
 * Original: 0x001FAE10 - 0x001FAE14 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FAE10(void)
{

loc_001FAE10: ;
    eax = MEM32(ecx + 0x2C);
    esp += 4; return; /* ret */

}

/**
 * sub_001FAE20
 * Original: 0x001FAE20 - 0x001FAE24 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FAE20(void)
{

loc_001FAE20: ;
    eax = ecx + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_001FAE30
 * Original: 0x001FAE30 - 0x001FAE34 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FAE30(void)
{

loc_001FAE30: ;
    eax = ecx + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_001FAE40
 * Original: 0x001FAE40 - 0x001FAE47 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FAE40(void)
{

loc_001FAE40: ;
    eax = ecx + 0x120;
    esp += 4; return; /* ret */

}

/**
 * sub_001FAE50
 * Original: 0x001FAE50 - 0x001FAE57 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FAE50(void)
{

loc_001FAE50: ;
    eax = MEM32(ecx + 0xD0);
    esp += 4; return; /* ret */

}

/**
 * sub_001FAE60
 * Original: 0x001FAE60 - 0x001FAE73 (19 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FAE60(void)
{

loc_001FAE60: ;
    ecx = MEM32(0x62EBAC);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x18);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x001FAE72u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001FAE6Fu); } /* indirect call */
    }

loc_001FAE72: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001FAE80
 * Original: 0x001FAE80 - 0x001FAE87 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FAE80(void)
{

loc_001FAE80: ;
    MEM32(ecx) = 0x4B36A8;
    esp += 4; return; /* ret */

}

/**
 * sub_001FAE90
 * Original: 0x001FAE90 - 0x001FAEB6 (38 bytes, 14 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FAE90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001FAE90: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x4B36A8;
    if (TEST_Z(_fa, _fb)) goto loc_001FAEB0; /* je: equal / zero */

loc_001FAEA0: ;
    ecx = MEM32(0x62EBAC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x18);
    PUSH32(esp, 4);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x001FAEB0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001FAEADu); } /* indirect call */
    }

loc_001FAEB0: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001FAEC0
 * Original: 0x001FAEC0 - 0x001FAED9 (25 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FAEC0(void)
{

loc_001FAEC0: ;
    ecx = MEM32(0x62EBAC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, 0x28);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x001FAED3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001FAED0u); } /* indirect call */
    }

loc_001FAED3: ;
    MEM16(eax + 4) = LO16(esi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001FAEE0
 * Original: 0x001FAEE0 - 0x001FAEE4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FAEE0(void)
{

loc_001FAEE0: ;
    eax = ecx + 0x3C;
    esp += 4; return; /* ret */

}

/**
 * sub_001FAEF0
 * Original: 0x001FAEF0 - 0x001FAEF4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FAEF0(void)
{

loc_001FAEF0: ;
    eax = ecx + 0x4C;
    esp += 4; return; /* ret */

}

/**
 * sub_001FAF00
 * Original: 0x001FAF00 - 0x001FAF04 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FAF00(void)
{

loc_001FAF00: ;
    eax = ecx + 0x58;
    esp += 4; return; /* ret */

}

/**
 * sub_001FAF10
 * Original: 0x001FAF10 - 0x001FAF14 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FAF10(void)
{

loc_001FAF10: ;
    eax = MEM32(ecx + 0x24);
    esp += 4; return; /* ret */

}

/**
 * sub_001FAF20
 * Original: 0x001FAF20 - 0x001FAF27 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FAF20(void)
{

loc_001FAF20: ;
    MEM32(ecx) = 0x4AE740;
    esp += 4; return; /* ret */

}

/**
 * sub_001FAF30
 * Original: 0x001FAF30 - 0x001FAF40 (16 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FAF30(void)
{

loc_001FAF30: ;
    eax = ecx;
    MEM32(eax) = 0x4B36B4;
    MEM32(eax + 0x34) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_001FAF50
 * Original: 0x001FAF50 - 0x001FAF6F (31 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FAF50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001FAF50: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x4AE740;
    if (TEST_Z(_fa, _fb)) goto loc_001FAF69; /* je: equal / zero */

loc_001FAF60: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001FAF66u); RECOMP_ABI_CALL(0x000EB425u, sub_000EB425); /* call 0x000EB425 */

loc_001FAF66: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001FAF69: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001FAF70
 * Original: 0x001FAF70 - 0x001FAF77 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FAF70(void)
{

loc_001FAF70: ;
    MEM32(ecx) = 0x4AE740;
    esp += 4; return; /* ret */

}

/**
 * sub_001FAF80
 * Original: 0x001FAF80 - 0x001FAF93 (19 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FAF80(void)
{

loc_001FAF80: ;
    ecx = MEM32(0x62EBAC);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1E);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x001FAF92u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001FAF8Fu); } /* indirect call */
    }

loc_001FAF92: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001FAFA0
 * Original: 0x001FAFA0 - 0x001FAFB8 (24 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FAFA0(void)
{

loc_001FAFA0: ;
    ecx = MEM32(0x62EBAC);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1E);
    PUSH32(esp, 0x104);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x001FAFB7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001FAFB4u); } /* indirect call */
    }

loc_001FAFB7: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001FAFC0
 * Original: 0x001FAFC0 - 0x001FAFD5 (21 bytes, 6 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FAFC0(void)
{

loc_001FAFC0: ;
    edx = MEM32(esp + 8);
    eax = MEM32(esp + 0xC);
    eax = eax + edx * 8;
    edx = MEM32(esp + 4);
    MEM32(ecx + eax * 4) = edx;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001FAFE0
 * Original: 0x001FAFE0 - 0x001FAFE7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FAFE0(void)
{

loc_001FAFE0: ;
    eax = ecx + 0x100;
    esp += 4; return; /* ret */

}

/**
 * sub_001FAFF0
 * Original: 0x001FAFF0 - 0x001FB018 (40 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FAFF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001FAFF0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x001FAFF8u); RECOMP_ABI_CALL(0x0021A0E0u, sub_0021A0E0); /* call 0x0021A0E0 */

loc_001FAFF8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001FB012; /* je: equal / zero */

loc_001FAFFF: ;
    ecx = MEM32(0x62EBAC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1E);
    PUSH32(esp, 0x104);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x001FB012u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001FB00Fu); } /* indirect call */
    }

loc_001FB012: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001FB020
 * Original: 0x001FB020 - 0x001FB029 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FB020(void)
{

loc_001FB020: ;
    eax = ecx;
    MEM32(eax) = 0x4B36A8;
    esp += 4; return; /* ret */

}

/**
 * sub_001FB030
 * Original: 0x001FB030 - 0x001FB034 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FB030(void)
{

loc_001FB030: ;
    eax = MEM32(ecx + 4);
    esp += 4; return; /* ret */

}

/**
 * sub_001FB040
 * Original: 0x001FB040 - 0x001FB04A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FB040(void)
{

loc_001FB040: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 4) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001FB050
 * Original: 0x001FB050 - 0x001FB05A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FB050(void)
{

loc_001FB050: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 8) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001FB060
 * Original: 0x001FB060 - 0x001FB064 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FB060(void)
{

loc_001FB060: ;
    eax = MEM32(ecx + 0x3C);
    esp += 4; return; /* ret */

}

/**
 * sub_001FB070
 * Original: 0x001FB070 - 0x001FB074 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FB070(void)
{

loc_001FB070: ;
    eax = MEM32(ecx + 0x44);
    esp += 4; return; /* ret */

}

/**
 * sub_001FB080
 * Original: 0x001FB080 - 0x001FB08A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FB080(void)
{

loc_001FB080: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x44) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001FB090
 * Original: 0x001FB090 - 0x001FB097 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FB090(void)
{

loc_001FB090: ;
    eax = ecx + 0x94;
    esp += 4; return; /* ret */

}

/**
 * sub_001FB0A0
 * Original: 0x001FB0A0 - 0x001FB0A7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FB0A0(void)
{

loc_001FB0A0: ;
    eax = ecx + 0x88;
    esp += 4; return; /* ret */

}

/**
 * sub_001FB0B0
 * Original: 0x001FB0B0 - 0x001FB0BA (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FB0B0(void)
{

loc_001FB0B0: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x58) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001FB0C0
 * Original: 0x001FB0C0 - 0x001FB0C4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FB0C0(void)
{

loc_001FB0C0: ;
    eax = MEM32(ecx + 0x38);
    esp += 4; return; /* ret */

}

/**
 * sub_001FB0D0
 * Original: 0x001FB0D0 - 0x001FB0D4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FB0D0(void)
{

loc_001FB0D0: ;
    eax = MEM32(ecx + 0x10);
    esp += 4; return; /* ret */

}

/**
 * sub_001FB0E0
 * Original: 0x001FB0E0 - 0x001FB0EA (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FB0E0(void)
{

loc_001FB0E0: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x10) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001FB0F0
 * Original: 0x001FB0F0 - 0x001FB0FA (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FB0F0(void)
{

loc_001FB0F0: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0xC) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001FB100
 * Original: 0x001FB100 - 0x001FB12A (42 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FB100(void)
{

loc_001FB100: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax);
    MEM32(ecx + 0xE0) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 0xE4) = edx;
    edx = MEM32(eax + 8);
    MEM32(ecx + 0xE8) = edx;
    eax = MEM32(eax + 0xC);
    MEM32(ecx + 0xEC) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001FB130
 * Original: 0x001FB130 - 0x001FB134 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FB130(void)
{

loc_001FB130: ;
    eax = MEM32(ecx + 0xC);
    esp += 4; return; /* ret */

}

/**
 * sub_001FB140
 * Original: 0x001FB140 - 0x001FB144 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FB140(void)
{

loc_001FB140: ;
    eax = MEM32(ecx + 0x10);
    esp += 4; return; /* ret */

}

/**
 * sub_001FB150
 * Original: 0x001FB150 - 0x001FB15A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FB150(void)
{

loc_001FB150: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x14) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001FB160
 * Original: 0x001FB160 - 0x001FB16D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FB160(void)
{

loc_001FB160: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0xC0) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001FB170
 * Original: 0x001FB170 - 0x001FB177 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FB170(void)
{

loc_001FB170: ;
    eax = MEM32(ecx + 0xC0);
    esp += 4; return; /* ret */

}

/**
 * sub_001FB180
 * Original: 0x001FB180 - 0x001FB184 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FB180(void)
{

loc_001FB180: ;
    eax = MEM32(ecx + 4);
    esp += 4; return; /* ret */

}

/**
 * sub_001FB190
 * Original: 0x001FB190 - 0x001FB194 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FB190(void)
{

loc_001FB190: ;
    eax = MEM32(ecx + 4);
    esp += 4; return; /* ret */

}

/**
 * sub_001FB1A0
 * Original: 0x001FB1A0 - 0x001FB1A4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FB1A0(void)
{

loc_001FB1A0: ;
    eax = MEM32(ecx + 4);
    esp += 4; return; /* ret */

}

/**
 * sub_001FB1B0
 * Original: 0x001FB1B0 - 0x001FB1B7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FB1B0(void)
{

loc_001FB1B0: ;
    eax = MEM32(ecx + 0x248);
    esp += 4; return; /* ret */

}

/**
 * sub_001FB1C0
 * Original: 0x001FB1C0 - 0x001FB1EE (46 bytes, 16 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FB1C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001FB1C0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    MEM16(edi + 6) = MEM16(edi + 6) + 1;
    _fa = (uint32_t)(MEM16(edi + 6)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    esi = ecx;
    ecx = MEM32(esi + 0x248);
    MEM16(ecx + 6) = MEM16(ecx + 6) - 1;
    _fa = (uint32_t)(MEM16(ecx + 6)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(ecx + 6)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 6), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001FB1E3; /* jne: not equal / not zero */

loc_001FB1DD: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x001FB1E3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001FB1E1u); } /* indirect call */
    }

loc_001FB1E3: ;
    MEM32(esi + 0x248) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001FB1F0
 * Original: 0x001FB1F0 - 0x001FB348 (344 bytes, 82 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FB1F0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_001FB1F0: ;
    edx = MEM32(ecx + 0xE0);
    eax = MEM32(esp + 4);
    MEM32(eax) = edx;
    edx = MEM32(ecx + 0xE4);
    MEM32(eax + 4) = edx;
    edx = MEM32(ecx + 0xE8);
    MEM32(eax + 8) = edx;
    edx = MEM32(ecx + 0xEC);
    MEM32(eax + 0xC) = edx;
    SET_LO8(edx, MEM8(ecx + 0x238));
    MEM8(eax + 0x10) = LO8(edx);
    edx = MEM32(ecx + 0x210);
    MEM32(eax + 0x20) = edx;
    edx = MEM32(ecx + 0x214);
    MEM32(eax + 0x24) = edx;
    edx = MEM32(ecx + 0x218);
    MEM32(eax + 0x28) = edx;
    edx = MEM32(ecx + 0x21C);
    MEM32(eax + 0x2C) = edx;
    edx = MEM32(ecx + 0x220);
    MEM32(eax + 0x30) = edx;
    edx = MEM32(ecx + 0x224);
    MEM32(eax + 0x34) = edx;
    edx = MEM32(ecx + 0x228);
    MEM32(eax + 0x38) = edx;
    edx = MEM32(ecx + 0x22C);
    MEM32(eax + 0x3C) = edx;
    edx = MEM32(ecx + 0x230);
    MEM32(eax + 0x14) = edx;
    edx = MEM32(ecx + 0x164);
    MEM32(eax + 0x40) = edx;
    edx = MEM32(ecx + 0x168);
    MEM32(eax + 0x44) = edx;
    edx = MEM32(ecx + 0x17C);
    MEM32(eax + 0x48) = edx;
    edx = MEM32(ecx + 0xCC);
    edx = MEM32(edx + 8);
    MEM32(eax + 0x5C) = edx;
    edx = MEM32(ecx + 0xCC);
    edx = MEM32(edx + 0xC);
    edx = MEM32(edx + 4);
    MEM32(eax + 0x64) = edx;
    edx = MEM32(ecx + 0xCC);
    edx = MEM32(edx + 0xC);
    edx = MEM32(edx + 8);
    MEM32(eax + 0x68) = edx;
    edx = MEM32(ecx + 0xCC);
    edx = MEM32(edx + 0xC);
    edx = MEM32(edx + 0xC);
    MEM32(eax + 0x6C) = edx;
    edx = MEM32(ecx + 0xCC);
    edx = MEM32(edx + 0xC);
    SET_LO8(edx, MEM8(edx));
    MEM8(eax + 0x60) = LO8(edx);
    edx = MEM32(ecx + 0xCC);
    edx = MEM32(edx + 0xC);
    SET_LO8(edx, MEM8(edx + 0x10));
    MEM8(eax + 0x70) = LO8(edx);
    edx = MEM32(ecx + 0xCC);
    edx = MEM32(edx + 0xC);
    edx = MEM32(edx + 0x14);
    MEM32(eax + 0x74) = edx;
    edx = MEM32(ecx + 0xCC);
    edx = MEM32(edx + 0xC);
    edx = MEM32(edx + 0x18);
    MEM32(eax + 0x78) = edx;
    SET_LO8(edx, MEM8(ecx + 0x23A));
    MEM8(eax + 0x4C) = LO8(edx);
    edx = MEM32(ecx + 0x23C);
    MEM32(eax + 0x50) = edx;
    fp_push(MEMF(ecx + 0x240)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(ecx + 0x23C)); /* fdiv dword ptr [ecx + 0x23c] */
    MEMF(eax + 0x54) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(ecx + 0x244);
    MEM32(eax + 0x58) = edx;
    SET_LO8(edx, MEM8(ecx + 0x239));
    MEM8(eax + 0x7C) = LO8(edx);
    edx = MEM32(ecx + 0x30);
    MEM32(eax + 0x80) = edx;
    ecx = MEM32(ecx + 0x34);
    MEM32(eax + 0x84) = ecx;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001FB350
 * Original: 0x001FB350 - 0x001FB3D7 (135 bytes, 29 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FB350(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_001FB350: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax);
    MEM32(ecx + 0xE0) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 0xE4) = edx;
    edx = MEM32(eax + 8);
    MEM32(ecx + 0xE8) = edx;
    edx = MEM32(eax + 0xC);
    MEM32(ecx + 0xEC) = edx;
    edx = MEM32(eax + 0x40);
    MEM32(ecx + 0x164) = edx;
    edx = MEM32(eax + 0x44);
    MEM32(ecx + 0x168) = edx;
    fp_push(MEMF(eax + 0x40)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x496B98)); /* fmul dword ptr [0x496b98] */
    MEMF(ecx + 0x16C) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(eax + 0x48);
    MEM32(ecx + 0x17C) = edx;
    fp_push((double)SMEM32(eax + 0x48)); /* fild */
    fp_top() = RECOMP_FP_PC(MEMF(0x496454) / fp_top()); /* fdivr dword ptr [0x496454] */
    MEMF(ecx + 0x180) = (float)fp_top(); /* fst */
    MEMF(ecx + 0x1AC) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(ecx + 0x178);
    MEM32(ecx + 0x1A8) = edx;
    edx = MEM32(eax + 0x80);
    MEM32(ecx + 0x30) = edx;
    eax = MEM32(eax + 0x84);
    MEM32(ecx + 0x34) = eax;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001FB3E0
 * Original: 0x001FB3E0 - 0x001FB3E9 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FB3E0(void)
{

loc_001FB3E0: ;
    eax = ecx;
    MEM32(eax) = 0x4B36BC;
    esp += 4; return; /* ret */

}

/**
 * sub_001FB3F0
 * Original: 0x001FB3F0 - 0x001FB3F7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FB3F0(void)
{

loc_001FB3F0: ;
    MEM32(ecx) = 0x4AE714;
    esp += 4; return; /* ret */

}

/**
 * sub_001FB400
 * Original: 0x001FB400 - 0x001FB407 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FB400(void)
{

loc_001FB400: ;
    MEM32(ecx) = 0x4AE714;
    esp += 4; return; /* ret */

}

/**
 * sub_001FB410
 * Original: 0x001FB410 - 0x001FB44E (62 bytes, 19 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001FB410(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001FB410: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 0xC);
    edx = MEM32(ecx + 0xD0);
    ecx = MEM32(ecx + 0xC4);
    PUSH32(esp, eax);
    eax = MEM32(ebp + 8);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esp + 0x10;
    MEM32(esp + 0x10) = 0x4B36B4;
    MEM32(esp + 0x44) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001FB448u); RECOMP_ABI_CALL(0x00219FB0u, sub_00219FB0); /* call 0x00219FB0 */

loc_001FB448: ;
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001FB450
 * Original: 0x001FB450 - 0x001FB45C (12 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FB450(void)
{

loc_001FB450: ;
    eax = MEM32(ecx);
    ecx = MEM32(esp + 4);
    eax = eax + ecx * 4;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001FB460
 * Original: 0x001FB460 - 0x001FB468 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FB460(void)
{

loc_001FB460: ;
    MEM32(ecx + 4) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_001FB470
 * Original: 0x001FB470 - 0x001FB486 (22 bytes, 8 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FB470(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001FB470: ;
    eax = MEM32(ecx + 4);
    edx = MEM32(esp + 4);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ecx + 4) = eax;
    ecx = MEM32(ecx);
    eax = MEM32(ecx + eax * 4);
    MEM32(ecx + edx * 4) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001FB490
 * Original: 0x001FB490 - 0x001FB4B9 (41 bytes, 18 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FB490(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001FB490: ;
    eax = MEM32(ecx + 4);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = eax;
    MEM32(ecx + 4) = eax;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001FB4B6; /* jge: greater or equal (signed >=) */

loc_001FB4A1: ;
    PUSH32(esp, esi);

loc_001FB4A2: ;
    edx = MEM32(ecx);
    esi = MEM32(edx + eax * 4 + 4);
    edx = edx + eax * 4;
    MEM32(edx) = esi;
    edx = MEM32(ecx + 4);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001FB4A2; /* jl: less (signed <) */

loc_001FB4B5: ;
    POP32(esp, esi);

loc_001FB4B6: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001FB4C0
 * Original: 0x001FB4C0 - 0x001FB4C3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FB4C0(void)
{

loc_001FB4C0: ;
    eax = MEM32(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001FB4D0
 * Original: 0x001FB4D0 - 0x001FB4DC (12 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FB4D0(void)
{

loc_001FB4D0: ;
    eax = MEM32(ecx);
    ecx = MEM32(esp + 4);
    eax = eax + ecx * 4;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001FB4E0
 * Original: 0x001FB4E0 - 0x001FB4F6 (22 bytes, 8 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FB4E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001FB4E0: ;
    eax = MEM32(ecx + 4);
    edx = MEM32(esp + 4);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ecx + 4) = eax;
    ecx = MEM32(ecx);
    eax = MEM32(ecx + eax * 4);
    MEM32(ecx + edx * 4) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001FB500
 * Original: 0x001FB500 - 0x001FB503 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FB500(void)
{

loc_001FB500: ;
    eax = MEM32(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001FB510
 * Original: 0x001FB510 - 0x001FB51B (11 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FB510(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001FB510: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001FB520
 * Original: 0x001FB520 - 0x001FB537 (23 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FB520(void)
{

loc_001FB520: ;
    eax = ecx;
    MEM32(eax) = 0;
    MEM32(eax + 4) = 0;
    MEM32(eax + 8) = 0x80000000u;
    esp += 4; return; /* ret */

}

/**
 * sub_001FB540
 * Original: 0x001FB540 - 0x001FB54C (12 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FB540(void)
{

loc_001FB540: ;
    eax = MEM32(ecx);
    ecx = MEM32(esp + 4);
    eax = eax + ecx * 4;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001FB550
 * Original: 0x001FB550 - 0x001FB575 (37 bytes, 17 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FB550(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001FB550: ;
    edx = MEM32(ecx + 4);
    PUSH32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001FB56E; /* jle: less or equal (signed <=) */

loc_001FB55A: ;
    esi = MEM32(esp + 8);
    esi = MEM32(esi);
    ecx = MEM32(ecx);

loc_001FB562: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001FB571; /* je: equal / zero */

loc_001FB566: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001FB562; /* jl: less (signed <) */

loc_001FB56E: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_001FB571: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001FB580
 * Original: 0x001FB580 - 0x001FB597 (23 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FB580(void)
{

loc_001FB580: ;
    eax = ecx;
    MEM32(eax) = 0;
    MEM32(eax + 4) = 0;
    MEM32(eax + 8) = 0x80000000u;
    esp += 4; return; /* ret */

}

/**
 * sub_001FB5A0
 * Original: 0x001FB5A0 - 0x001FB5AC (12 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FB5A0(void)
{

loc_001FB5A0: ;
    eax = MEM32(ecx);
    ecx = MEM32(esp + 4);
    eax = eax + ecx * 4;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001FB5B0
 * Original: 0x001FB5B0 - 0x001FB5B4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FB5B0(void)
{

loc_001FB5B0: ;
    eax = MEM32(ecx + 4);
    esp += 4; return; /* ret */

}

/**
 * sub_001FB5C0
 * Original: 0x001FB5C0 - 0x001FB5C4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FB5C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001FB5C0: ;
    MEM32(ecx + 4) = MEM32(ecx + 4) - 1;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

}

/**
 * sub_001FB5D0
 * Original: 0x001FB5D0 - 0x001FB5D3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FB5D0(void)
{

loc_001FB5D0: ;
    eax = MEM32(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001FB5E0
 * Original: 0x001FB5E0 - 0x001FB5E9 (9 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FB5E0(void)
{

loc_001FB5E0: ;
    eax = MEM32(ecx + 4);
    ecx = MEM32(ecx);
    eax = ecx + eax * 4;
    esp += 4; return; /* ret */

}

/**
 * sub_001FB5F0
 * Original: 0x001FB5F0 - 0x001FB607 (23 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FB5F0(void)
{

loc_001FB5F0: ;
    eax = ecx;
    MEM32(eax) = 0;
    MEM32(eax + 4) = 0;
    MEM32(eax + 8) = 0x80000000u;
    esp += 4; return; /* ret */

}

/**
 * sub_001FB610
 * Original: 0x001FB610 - 0x001FB61C (12 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FB610(void)
{

loc_001FB610: ;
    eax = MEM32(ecx);
    ecx = MEM32(esp + 4);
    eax = eax + ecx * 8;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001FB620
 * Original: 0x001FB620 - 0x001FB624 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FB620(void)
{

loc_001FB620: ;
    eax = MEM32(ecx + 4);
    esp += 4; return; /* ret */

}

/**
 * sub_001FB630
 * Original: 0x001FB630 - 0x001FB638 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FB630(void)
{

loc_001FB630: ;
    MEM32(ecx + 4) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_001FB640
 * Original: 0x001FB640 - 0x001FB657 (23 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FB640(void)
{

loc_001FB640: ;
    eax = ecx;
    MEM32(eax) = 0;
    MEM32(eax + 4) = 0;
    MEM32(eax + 8) = 0x80000000u;
    esp += 4; return; /* ret */

}

/**
 * sub_001FB660
 * Original: 0x001FB660 - 0x001FB66C (12 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FB660(void)
{

loc_001FB660: ;
    eax = MEM32(ecx);
    ecx = MEM32(esp + 4);
    eax = eax + ecx * 4;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001FB670
 * Original: 0x001FB670 - 0x001FB695 (37 bytes, 17 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FB670(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001FB670: ;
    edx = MEM32(ecx + 4);
    PUSH32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001FB68E; /* jle: less or equal (signed <=) */

loc_001FB67A: ;
    esi = MEM32(esp + 8);
    esi = MEM32(esi);
    ecx = MEM32(ecx);

loc_001FB682: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001FB691; /* je: equal / zero */

loc_001FB686: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001FB682; /* jl: less (signed <) */

loc_001FB68E: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_001FB691: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001FB6A0
 * Original: 0x001FB6A0 - 0x001FB6B7 (23 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FB6A0(void)
{

loc_001FB6A0: ;
    eax = ecx;
    MEM32(eax) = 0;
    MEM32(eax + 4) = 0;
    MEM32(eax + 8) = 0x80000000u;
    esp += 4; return; /* ret */

}

/**
 * sub_001FB6C0
 * Original: 0x001FB6C0 - 0x001FB6CC (12 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FB6C0(void)
{

loc_001FB6C0: ;
    eax = MEM32(ecx);
    ecx = MEM32(esp + 4);
    eax = eax + ecx * 4;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001FB6D0
 * Original: 0x001FB6D0 - 0x001FB6F5 (37 bytes, 17 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FB6D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001FB6D0: ;
    edx = MEM32(ecx + 4);
    PUSH32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001FB6EE; /* jle: less or equal (signed <=) */

loc_001FB6DA: ;
    esi = MEM32(esp + 8);
    esi = MEM32(esi);
    ecx = MEM32(ecx);

loc_001FB6E2: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001FB6F1; /* je: equal / zero */

loc_001FB6E6: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001FB6E2; /* jl: less (signed <) */

loc_001FB6EE: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_001FB6F1: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001FB700
 * Original: 0x001FB700 - 0x001FB717 (23 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FB700(void)
{

loc_001FB700: ;
    eax = ecx;
    MEM32(eax) = 0;
    MEM32(eax + 4) = 0;
    MEM32(eax + 8) = 0x80000000u;
    esp += 4; return; /* ret */

}

/**
 * sub_001FB720
 * Original: 0x001FB720 - 0x001FB72C (12 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FB720(void)
{

loc_001FB720: ;
    eax = MEM32(ecx);
    ecx = MEM32(esp + 4);
    eax = eax + ecx * 4;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001FB730
 * Original: 0x001FB730 - 0x001FB755 (37 bytes, 17 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FB730(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001FB730: ;
    edx = MEM32(ecx + 4);
    PUSH32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001FB74E; /* jle: less or equal (signed <=) */

loc_001FB73A: ;
    esi = MEM32(esp + 8);
    esi = MEM32(esi);
    ecx = MEM32(ecx);

loc_001FB742: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001FB751; /* je: equal / zero */

loc_001FB746: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001FB742; /* jl: less (signed <) */

loc_001FB74E: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_001FB751: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001FB760
 * Original: 0x001FB760 - 0x001FB777 (23 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FB760(void)
{

loc_001FB760: ;
    eax = ecx;
    MEM32(eax) = 0;
    MEM32(eax + 4) = 0;
    MEM32(eax + 8) = 0x80000000u;
    esp += 4; return; /* ret */

}

/**
 * sub_001FB780
 * Original: 0x001FB780 - 0x001FB78C (12 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FB780(void)
{

loc_001FB780: ;
    eax = MEM32(ecx);
    ecx = MEM32(esp + 4);
    eax = eax + ecx * 4;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001FB790
 * Original: 0x001FB790 - 0x001FB7B5 (37 bytes, 17 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FB790(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001FB790: ;
    edx = MEM32(ecx + 4);
    PUSH32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001FB7AE; /* jle: less or equal (signed <=) */

loc_001FB79A: ;
    esi = MEM32(esp + 8);
    esi = MEM32(esi);
    ecx = MEM32(ecx);

loc_001FB7A2: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001FB7B1; /* je: equal / zero */

loc_001FB7A6: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001FB7A2; /* jl: less (signed <) */

loc_001FB7AE: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_001FB7B1: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001FB7C0
 * Original: 0x001FB7C0 - 0x001FB7D7 (23 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FB7C0(void)
{

loc_001FB7C0: ;
    eax = ecx;
    MEM32(eax) = 0;
    MEM32(eax + 4) = 0;
    MEM32(eax + 8) = 0x80000000u;
    esp += 4; return; /* ret */

}

/**
 * sub_001FB7E0
 * Original: 0x001FB7E0 - 0x001FB7EC (12 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FB7E0(void)
{

loc_001FB7E0: ;
    eax = MEM32(ecx);
    ecx = MEM32(esp + 4);
    eax = eax + ecx * 4;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001FB7F0
 * Original: 0x001FB7F0 - 0x001FB815 (37 bytes, 17 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FB7F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001FB7F0: ;
    edx = MEM32(ecx + 4);
    PUSH32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001FB80E; /* jle: less or equal (signed <=) */

loc_001FB7FA: ;
    esi = MEM32(esp + 8);
    esi = MEM32(esi);
    ecx = MEM32(ecx);

loc_001FB802: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001FB811; /* je: equal / zero */

loc_001FB806: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001FB802; /* jl: less (signed <) */

loc_001FB80E: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_001FB811: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001FB820
 * Original: 0x001FB820 - 0x001FB837 (23 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FB820(void)
{

loc_001FB820: ;
    eax = ecx;
    MEM32(eax) = 0;
    MEM32(eax + 4) = 0;
    MEM32(eax + 8) = 0x80000000u;
    esp += 4; return; /* ret */

}

/**
 * sub_001FB840
 * Original: 0x001FB840 - 0x001FB84C (12 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FB840(void)
{

loc_001FB840: ;
    eax = MEM32(ecx);
    ecx = MEM32(esp + 4);
    eax = eax + ecx * 4;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001FB850
 * Original: 0x001FB850 - 0x001FB875 (37 bytes, 17 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FB850(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001FB850: ;
    edx = MEM32(ecx + 4);
    PUSH32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001FB86E; /* jle: less or equal (signed <=) */

loc_001FB85A: ;
    esi = MEM32(esp + 8);
    esi = MEM32(esi);
    ecx = MEM32(ecx);

loc_001FB862: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001FB871; /* je: equal / zero */

loc_001FB866: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001FB862; /* jl: less (signed <) */

loc_001FB86E: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_001FB871: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001FB880
 * Original: 0x001FB880 - 0x001FB897 (23 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FB880(void)
{

loc_001FB880: ;
    eax = ecx;
    MEM32(eax) = 0;
    MEM32(eax + 4) = 0;
    MEM32(eax + 8) = 0x80000000u;
    esp += 4; return; /* ret */

}

/**
 * sub_001FB8A0
 * Original: 0x001FB8A0 - 0x001FB8AC (12 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FB8A0(void)
{

loc_001FB8A0: ;
    eax = MEM32(ecx);
    ecx = MEM32(esp + 4);
    eax = eax + ecx * 4;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001FB8B0
 * Original: 0x001FB8B0 - 0x001FB8B4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FB8B0(void)
{

loc_001FB8B0: ;
    eax = MEM32(ecx + 4);
    esp += 4; return; /* ret */

}

/**
 * sub_001FB8C0
 * Original: 0x001FB8C0 - 0x001FB8E5 (37 bytes, 17 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FB8C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001FB8C0: ;
    edx = MEM32(ecx + 4);
    PUSH32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001FB8DE; /* jle: less or equal (signed <=) */

loc_001FB8CA: ;
    esi = MEM32(esp + 8);
    esi = MEM32(esi);
    ecx = MEM32(ecx);

loc_001FB8D2: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001FB8E1; /* je: equal / zero */

loc_001FB8D6: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001FB8D2; /* jl: less (signed <) */

loc_001FB8DE: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_001FB8E1: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001FB8F0
 * Original: 0x001FB8F0 - 0x001FB907 (23 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FB8F0(void)
{

loc_001FB8F0: ;
    eax = ecx;
    MEM32(eax) = 0;
    MEM32(eax + 4) = 0;
    MEM32(eax + 8) = 0x80000000u;
    esp += 4; return; /* ret */

}

/**
 * sub_001FB910
 * Original: 0x001FB910 - 0x001FB91C (12 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FB910(void)
{

loc_001FB910: ;
    eax = MEM32(ecx);
    ecx = MEM32(esp + 4);
    eax = eax + ecx * 4;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001FB920
 * Original: 0x001FB920 - 0x001FB924 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FB920(void)
{

loc_001FB920: ;
    eax = MEM32(ecx + 4);
    esp += 4; return; /* ret */

}

/**
 * sub_001FB930
 * Original: 0x001FB930 - 0x001FB955 (37 bytes, 17 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FB930(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001FB930: ;
    edx = MEM32(ecx + 4);
    PUSH32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001FB94E; /* jle: less or equal (signed <=) */

loc_001FB93A: ;
    esi = MEM32(esp + 8);
    esi = MEM32(esi);
    ecx = MEM32(ecx);

loc_001FB942: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001FB951; /* je: equal / zero */

loc_001FB946: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001FB942; /* jl: less (signed <) */

loc_001FB94E: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_001FB951: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001FB960
 * Original: 0x001FB960 - 0x001FB977 (23 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FB960(void)
{

loc_001FB960: ;
    eax = ecx;
    MEM32(eax) = 0;
    MEM32(eax + 4) = 0;
    MEM32(eax + 8) = 0x80000000u;
    esp += 4; return; /* ret */

}

/**
 * sub_001FB980
 * Original: 0x001FB980 - 0x001FB98C (12 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FB980(void)
{

loc_001FB980: ;
    eax = MEM32(ecx);
    ecx = MEM32(esp + 4);
    eax = eax + ecx * 4;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001FB990
 * Original: 0x001FB990 - 0x001FB99C (12 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FB990(void)
{

loc_001FB990: ;
    eax = MEM32(ecx);
    ecx = MEM32(esp + 4);
    eax = eax + ecx * 4;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001FB9A0
 * Original: 0x001FB9A0 - 0x001FB9A4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FB9A0(void)
{

loc_001FB9A0: ;
    eax = MEM32(ecx + 4);
    esp += 4; return; /* ret */

}

/**
 * sub_001FB9B0
 * Original: 0x001FB9B0 - 0x001FB9B8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FB9B0(void)
{

loc_001FB9B0: ;
    MEM32(ecx + 4) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_001FB9C0
 * Original: 0x001FB9C0 - 0x001FB9D6 (22 bytes, 8 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FB9C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001FB9C0: ;
    eax = MEM32(ecx + 4);
    edx = MEM32(esp + 4);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ecx + 4) = eax;
    ecx = MEM32(ecx);
    eax = MEM32(ecx + eax * 4);
    MEM32(ecx + edx * 4) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001FB9E0
 * Original: 0x001FB9E0 - 0x001FBA05 (37 bytes, 17 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FB9E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001FB9E0: ;
    edx = MEM32(ecx + 4);
    PUSH32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001FB9FE; /* jle: less or equal (signed <=) */

loc_001FB9EA: ;
    esi = MEM32(esp + 8);
    esi = MEM32(esi);
    ecx = MEM32(ecx);

loc_001FB9F2: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001FBA01; /* je: equal / zero */

loc_001FB9F6: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001FB9F2; /* jl: less (signed <) */

loc_001FB9FE: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_001FBA01: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001FBA10
 * Original: 0x001FBA10 - 0x001FBA13 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FBA10(void)
{

loc_001FBA10: ;
    eax = MEM32(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001FBA20
 * Original: 0x001FBA20 - 0x001FBA29 (9 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FBA20(void)
{

loc_001FBA20: ;
    eax = MEM32(ecx + 4);
    ecx = MEM32(ecx);
    eax = ecx + eax * 4;
    esp += 4; return; /* ret */

}

/**
 * sub_001FBA30
 * Original: 0x001FBA30 - 0x001FBA47 (23 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FBA30(void)
{

loc_001FBA30: ;
    eax = ecx;
    MEM32(eax) = 0;
    MEM32(eax + 4) = 0;
    MEM32(eax + 8) = 0x80000000u;
    esp += 4; return; /* ret */

}

/**
 * sub_001FBA50
 * Original: 0x001FBA50 - 0x001FBA5C (12 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FBA50(void)
{

loc_001FBA50: ;
    eax = MEM32(ecx);
    ecx = MEM32(esp + 4);
    eax = eax + ecx * 4;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001FBA60
 * Original: 0x001FBA60 - 0x001FBA6C (12 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FBA60(void)
{

loc_001FBA60: ;
    eax = MEM32(ecx);
    ecx = MEM32(esp + 4);
    eax = eax + ecx * 4;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001FBA70
 * Original: 0x001FBA70 - 0x001FBA74 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FBA70(void)
{

loc_001FBA70: ;
    eax = MEM32(ecx + 4);
    esp += 4; return; /* ret */

}

/**
 * sub_001FBA80
 * Original: 0x001FBA80 - 0x001FBA96 (22 bytes, 8 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FBA80(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001FBA80: ;
    eax = MEM32(ecx + 4);
    edx = MEM32(esp + 4);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ecx + 4) = eax;
    ecx = MEM32(ecx);
    eax = MEM32(ecx + eax * 4);
    MEM32(ecx + edx * 4) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001FBAA0
 * Original: 0x001FBAA0 - 0x001FBAC5 (37 bytes, 17 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FBAA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001FBAA0: ;
    edx = MEM32(ecx + 4);
    PUSH32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001FBABE; /* jle: less or equal (signed <=) */

loc_001FBAAA: ;
    esi = MEM32(esp + 8);
    esi = MEM32(esi);
    ecx = MEM32(ecx);

loc_001FBAB2: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001FBAC1; /* je: equal / zero */

loc_001FBAB6: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001FBAB2; /* jl: less (signed <) */

loc_001FBABE: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_001FBAC1: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001FBAD0
 * Original: 0x001FBAD0 - 0x001FBAD3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FBAD0(void)
{

loc_001FBAD0: ;
    eax = MEM32(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001FBAE0
 * Original: 0x001FBAE0 - 0x001FBAEF (15 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FBAE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001FBAE0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_001FBAEE; /* jg: greater (signed >) */

loc_001FBAEC: ;
    eax = ecx;

loc_001FBAEE: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001FBAF0
 * Original: 0x001FBAF0 - 0x001FBB07 (23 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FBAF0(void)
{

loc_001FBAF0: ;
    eax = ecx;
    MEM32(eax) = 0;
    MEM32(eax + 4) = 0;
    MEM32(eax + 8) = 0x80000000u;
    esp += 4; return; /* ret */

}

/**
 * sub_001FBB10
 * Original: 0x001FBB10 - 0x001FBB1F (15 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FBB10(void)
{

loc_001FBB10: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(ecx);
    eax = eax + eax * 2;
    eax = ecx + eax * 4;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001FBB20
 * Original: 0x001FBB20 - 0x001FBB24 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FBB20(void)
{

loc_001FBB20: ;
    eax = MEM32(ecx + 4);
    esp += 4; return; /* ret */

}

/**
 * sub_001FBB30
 * Original: 0x001FBB30 - 0x001FBB47 (23 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FBB30(void)
{

loc_001FBB30: ;
    eax = ecx;
    MEM32(eax) = 0;
    MEM32(eax + 4) = 0;
    MEM32(eax + 8) = 0x80000000u;
    esp += 4; return; /* ret */

}

/**
 * sub_001FBB50
 * Original: 0x001FBB50 - 0x001FBB5C (12 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FBB50(void)
{

loc_001FBB50: ;
    eax = MEM32(ecx);
    ecx = MEM32(esp + 4);
    eax = eax + ecx * 4;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001FBB60
 * Original: 0x001FBB60 - 0x001FBB64 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FBB60(void)
{

loc_001FBB60: ;
    eax = MEM32(ecx + 4);
    esp += 4; return; /* ret */

}

/**
 * sub_001FBB70
 * Original: 0x001FBB70 - 0x001FBB87 (23 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FBB70(void)
{

loc_001FBB70: ;
    eax = ecx;
    MEM32(eax) = 0;
    MEM32(eax + 4) = 0;
    MEM32(eax + 8) = 0x80000000u;
    esp += 4; return; /* ret */

}

/**
 * sub_001FBB90
 * Original: 0x001FBB90 - 0x001FBB9E (14 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FBB90(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001FBB90: ;
    eax = MEM32(esp + 4);
    edx = MEM32(ecx);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001FBBA0
 * Original: 0x001FBBA0 - 0x001FBBA4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FBBA0(void)
{

loc_001FBBA0: ;
    eax = MEM32(ecx + 4);
    esp += 4; return; /* ret */

}

/**
 * sub_001FBBB0
 * Original: 0x001FBBB0 - 0x001FBBBC (12 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FBBB0(void)
{

loc_001FBBB0: ;
    eax = MEM32(ecx);
    ecx = MEM32(esp + 4);
    eax = eax + ecx * 8;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001FBBC0
 * Original: 0x001FBBC0 - 0x001FBBC4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FBBC0(void)
{

loc_001FBBC0: ;
    eax = MEM32(ecx + 4);
    esp += 4; return; /* ret */

}

/**
 * sub_001FBBD0
 * Original: 0x001FBBD0 - 0x001FBBD8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FBBD0(void)
{

loc_001FBBD0: ;
    MEM32(ecx + 4) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_001FBBE0
 * Original: 0x001FBBE0 - 0x001FBBE3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FBBE0(void)
{

loc_001FBBE0: ;
    eax = MEM32(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001FBBF0
 * Original: 0x001FBBF0 - 0x001FBBF9 (9 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FBBF0(void)
{

loc_001FBBF0: ;
    eax = MEM32(ecx + 4);
    ecx = MEM32(ecx);
    eax = ecx + eax * 8;
    esp += 4; return; /* ret */

}

/**
 * sub_001FBC00
 * Original: 0x001FBC00 - 0x001FBC17 (23 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FBC00(void)
{

loc_001FBC00: ;
    eax = ecx;
    MEM32(eax) = 0;
    MEM32(eax + 4) = 0;
    MEM32(eax + 8) = 0x80000000u;
    esp += 4; return; /* ret */

}

/**
 * sub_001FBC20
 * Original: 0x001FBC20 - 0x001FBC37 (23 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FBC20(void)
{

loc_001FBC20: ;
    eax = ecx;
    MEM32(eax) = 0;
    MEM32(eax + 4) = 0;
    MEM32(eax + 8) = 0x80000000u;
    esp += 4; return; /* ret */

}

/**
 * sub_001FBC40
 * Original: 0x001FBC40 - 0x001FBC4C (12 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FBC40(void)
{

loc_001FBC40: ;
    eax = MEM32(ecx);
    ecx = MEM32(esp + 4);
    eax = eax + ecx * 4;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001FBC50
 * Original: 0x001FBC50 - 0x001FBC67 (23 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FBC50(void)
{

loc_001FBC50: ;
    eax = ecx;
    MEM32(eax) = 0;
    MEM32(eax + 4) = 0;
    MEM32(eax + 8) = 0x80000000u;
    esp += 4; return; /* ret */

}

/**
 * sub_001FBC70
 * Original: 0x001FBC70 - 0x001FBC7E (14 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FBC70(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001FBC70: ;
    eax = MEM32(esp + 4);
    edx = MEM32(ecx);
    eax = eax << 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001FBC80
 * Original: 0x001FBC80 - 0x001FBC97 (23 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FBC80(void)
{

loc_001FBC80: ;
    eax = ecx;
    MEM32(eax) = 0;
    MEM32(eax + 4) = 0;
    MEM32(eax + 8) = 0x80000000u;
    esp += 4; return; /* ret */

}

/**
 * sub_001FBCA0
 * Original: 0x001FBCA0 - 0x001FBCA4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FBCA0(void)
{

loc_001FBCA0: ;
    eax = MEM32(ecx + 4);
    esp += 4; return; /* ret */

}

/**
 * sub_001FBCB0
 * Original: 0x001FBCB0 - 0x001FBCCF (31 bytes, 9 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FBCB0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001FBCB0: ;
    edx = MEM32(esp + 8);
    eax = ecx;
    ecx = MEM32(esp + 4);
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0xC);
    ecx = ecx | 0x80000000u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = ecx;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001FBCD0
 * Original: 0x001FBCD0 - 0x001FBCD4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FBCD0(void)
{

loc_001FBCD0: ;
    eax = MEM32(ecx + 4);
    esp += 4; return; /* ret */

}

/**
 * sub_001FBCE0
 * Original: 0x001FBCE0 - 0x001FBD1A (58 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FBCE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001FBCE0: ;
    edx = MEM32(esp + 4);
    ecx = MEM32(0x62EBAC);
    eax = MEM32(ecx + 0xC);
    PUSH32(esp, esi);
    edx = edx * 8 + 0xF;
    esi = ecx + 0xC;
    edx = edx & 0xFFFFFFF0u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001FBD07; /* jle: less or equal (signed <=) */

loc_001FBCFF: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x001FBD05u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001FBD02u); } /* indirect call */
    }

loc_001FBD05: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001FBD07: ;
    eax = MEM32(ecx + 8);
    PUSH32(esp, edi);
    edi = eax + edx;
    MEM32(ecx + 8) = edi;
    ecx = MEM32(esi);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    POP32(esp, edi);
    MEM32(esi) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001FBD20
 * Original: 0x001FBD20 - 0x001FBD61 (65 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FBD20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001FBD20: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(0x62EBAC);
    eax = eax * 8 + 0xF;
    eax = eax & 0xFFFFFFF0u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, esi);
    if ((_fa == 0)) goto loc_001FBD4F; /* je: equal / zero */

loc_001FBD37: ;
    edx = MEM32(ecx + 0x14);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001FBD46; /* je: equal / zero */

loc_001FBD42: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001FBD4F; /* jne: not equal / not zero */

loc_001FBD46: ;
    edx = MEM32(ecx);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x001FBD4Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001FBD4Au); } /* indirect call */
    }

loc_001FBD4D: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001FBD4F: ;
    esi = MEM32(ecx + 8);
    edx = MEM32(ecx + 0xC);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 8) = esi;
    MEM32(ecx + 0xC) = edx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001FBD70
 * Original: 0x001FBD70 - 0x001FBDAA (58 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FBD70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001FBD70: ;
    edx = MEM32(esp + 4);
    ecx = MEM32(0x62EBAC);
    eax = MEM32(ecx + 0xC);
    PUSH32(esp, esi);
    edx = edx * 4 + 0xF;
    esi = ecx + 0xC;
    edx = edx & 0xFFFFFFF0u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001FBD97; /* jle: less or equal (signed <=) */

loc_001FBD8F: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x001FBD95u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001FBD92u); } /* indirect call */
    }

loc_001FBD95: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001FBD97: ;
    eax = MEM32(ecx + 8);
    PUSH32(esp, edi);
    edi = eax + edx;
    MEM32(ecx + 8) = edi;
    ecx = MEM32(esi);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    POP32(esp, edi);
    MEM32(esi) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001FBDB0
 * Original: 0x001FBDB0 - 0x001FBDF1 (65 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FBDB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001FBDB0: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(0x62EBAC);
    eax = eax * 4 + 0xF;
    eax = eax & 0xFFFFFFF0u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, esi);
    if ((_fa == 0)) goto loc_001FBDDF; /* je: equal / zero */

loc_001FBDC7: ;
    edx = MEM32(ecx + 0x14);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001FBDD6; /* je: equal / zero */

loc_001FBDD2: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001FBDDF; /* jne: not equal / not zero */

loc_001FBDD6: ;
    edx = MEM32(ecx);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x001FBDDDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001FBDDAu); } /* indirect call */
    }

loc_001FBDDD: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001FBDDF: ;
    esi = MEM32(ecx + 8);
    edx = MEM32(ecx + 0xC);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 8) = esi;
    MEM32(ecx + 0xC) = edx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001FBE00
 * Original: 0x001FBE00 - 0x001FBE3A (58 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FBE00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001FBE00: ;
    edx = MEM32(esp + 4);
    ecx = MEM32(0x62EBAC);
    eax = MEM32(ecx + 0xC);
    PUSH32(esp, esi);
    edx = edx * 8 + 0xF;
    esi = ecx + 0xC;
    edx = edx & 0xFFFFFFF0u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001FBE27; /* jle: less or equal (signed <=) */

loc_001FBE1F: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x001FBE25u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001FBE22u); } /* indirect call */
    }

loc_001FBE25: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001FBE27: ;
    eax = MEM32(ecx + 8);
    PUSH32(esp, edi);
    edi = eax + edx;
    MEM32(ecx + 8) = edi;
    ecx = MEM32(esi);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    POP32(esp, edi);
    MEM32(esi) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001FBE40
 * Original: 0x001FBE40 - 0x001FBE81 (65 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FBE40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001FBE40: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(0x62EBAC);
    eax = eax * 8 + 0xF;
    eax = eax & 0xFFFFFFF0u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, esi);
    if ((_fa == 0)) goto loc_001FBE6F; /* je: equal / zero */

loc_001FBE57: ;
    edx = MEM32(ecx + 0x14);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001FBE66; /* je: equal / zero */

loc_001FBE62: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001FBE6F; /* jne: not equal / not zero */

loc_001FBE66: ;
    edx = MEM32(ecx);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x001FBE6Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001FBE6Au); } /* indirect call */
    }

loc_001FBE6D: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001FBE6F: ;
    esi = MEM32(ecx + 8);
    edx = MEM32(ecx + 0xC);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 8) = esi;
    MEM32(ecx + 0xC) = edx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001FBE90
 * Original: 0x001FBE90 - 0x001FBECA (58 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FBE90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001FBE90: ;
    edx = MEM32(esp + 4);
    ecx = MEM32(0x62EBAC);
    eax = MEM32(ecx + 0xC);
    PUSH32(esp, esi);
    edx = edx * 4 + 0xF;
    esi = ecx + 0xC;
    edx = edx & 0xFFFFFFF0u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001FBEB7; /* jle: less or equal (signed <=) */

loc_001FBEAF: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x001FBEB5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001FBEB2u); } /* indirect call */
    }

loc_001FBEB5: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001FBEB7: ;
    eax = MEM32(ecx + 8);
    PUSH32(esp, edi);
    edi = eax + edx;
    MEM32(ecx + 8) = edi;
    ecx = MEM32(esi);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    POP32(esp, edi);
    MEM32(esi) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001FBED0
 * Original: 0x001FBED0 - 0x001FBF11 (65 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FBED0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001FBED0: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(0x62EBAC);
    eax = eax * 4 + 0xF;
    eax = eax & 0xFFFFFFF0u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, esi);
    if ((_fa == 0)) goto loc_001FBEFF; /* je: equal / zero */

loc_001FBEE7: ;
    edx = MEM32(ecx + 0x14);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001FBEF6; /* je: equal / zero */

loc_001FBEF2: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001FBEFF; /* jne: not equal / not zero */

loc_001FBEF6: ;
    edx = MEM32(ecx);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x001FBEFDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001FBEFAu); } /* indirect call */
    }

loc_001FBEFD: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001FBEFF: ;
    esi = MEM32(ecx + 8);
    edx = MEM32(ecx + 0xC);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 8) = esi;
    MEM32(ecx + 0xC) = edx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001FBF20
 * Original: 0x001FBF20 - 0x001FBF59 (57 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FBF20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001FBF20: ;
    edx = MEM32(esp + 4);
    ecx = MEM32(0x62EBAC);
    eax = MEM32(ecx + 0xC);
    edx = edx << 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, esi);
    _fb = (uint32_t)(0xF) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = ecx + 0xC;
    edx = edx & 0xFFFFFFF0u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001FBF46; /* jle: less or equal (signed <=) */

loc_001FBF3E: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x001FBF44u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001FBF41u); } /* indirect call */
    }

loc_001FBF44: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001FBF46: ;
    eax = MEM32(ecx + 8);
    PUSH32(esp, edi);
    edi = eax + edx;
    MEM32(ecx + 8) = edi;
    ecx = MEM32(esi);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    POP32(esp, edi);
    MEM32(esi) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001FBF60
 * Original: 0x001FBF60 - 0x001FBFA0 (64 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FBF60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001FBF60: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(0x62EBAC);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0xF) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax & 0xFFFFFFF0u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, esi);
    if ((_fa == 0)) goto loc_001FBF8E; /* je: equal / zero */

loc_001FBF76: ;
    edx = MEM32(ecx + 0x14);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001FBF85; /* je: equal / zero */

loc_001FBF81: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001FBF8E; /* jne: not equal / not zero */

loc_001FBF85: ;
    edx = MEM32(ecx);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x001FBF8Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001FBF89u); } /* indirect call */
    }

loc_001FBF8C: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001FBF8E: ;
    esi = MEM32(ecx + 8);
    edx = MEM32(ecx + 0xC);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 8) = esi;
    MEM32(ecx + 0xC) = edx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001FBFE0
 * Original: 0x001FBFE0 - 0x001FBFE3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FBFE0(void)
{

loc_001FBFE0: ;
    eax = MEM32(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001FBFF0
 * Original: 0x001FBFF0 - 0x001FC013 (35 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FBFF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001FBFF0: ;
    edx = MEM32(esp + 0xC);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_001FC012; /* js: sign (negative) */

loc_001FBFF7: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = esi + edx * 4;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001FC006: ;
    esi = MEM32(ecx + eax);
    MEM32(eax) = esi;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001FC006; /* jne: not equal / not zero */

loc_001FC011: ;
    POP32(esp, esi);

loc_001FC012: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001FC020
 * Original: 0x001FC020 - 0x001FC029 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FC020(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001FC020: ;
    eax = MEM32(ecx + 8);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}

/**
 * sub_001FC030
 * Original: 0x001FC030 - 0x001FC04F (31 bytes, 9 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FC030(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001FC030: ;
    edx = MEM32(esp + 8);
    eax = ecx;
    ecx = MEM32(esp + 4);
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0xC);
    ecx = ecx | 0x80000000u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = ecx;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001FC050
 * Original: 0x001FC050 - 0x001FC059 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FC050(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001FC050: ;
    eax = MEM32(ecx + 8);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}

/**
 * sub_001FC060
 * Original: 0x001FC060 - 0x001FC069 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FC060(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001FC060: ;
    eax = MEM32(ecx + 8);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}

/**
 * sub_001FC070
 * Original: 0x001FC070 - 0x001FC079 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FC070(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001FC070: ;
    eax = MEM32(ecx + 8);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}

/**
 * sub_001FC080
 * Original: 0x001FC080 - 0x001FC089 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FC080(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001FC080: ;
    eax = MEM32(ecx + 8);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}

/**
 * sub_001FC090
 * Original: 0x001FC090 - 0x001FC099 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FC090(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001FC090: ;
    eax = MEM32(ecx + 8);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}

/**
 * sub_001FC0A0
 * Original: 0x001FC0A0 - 0x001FC0A9 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FC0A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001FC0A0: ;
    eax = MEM32(ecx + 8);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}

/**
 * sub_001FC0B0
 * Original: 0x001FC0B0 - 0x001FC0B9 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FC0B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001FC0B0: ;
    eax = MEM32(ecx + 8);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}

/**
 * sub_001FC0C0
 * Original: 0x001FC0C0 - 0x001FC0C9 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FC0C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001FC0C0: ;
    eax = MEM32(ecx + 8);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}

/**
 * sub_001FC0D0
 * Original: 0x001FC0D0 - 0x001FC0D9 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FC0D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001FC0D0: ;
    eax = MEM32(ecx + 8);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}

/**
 * sub_001FC0E0
 * Original: 0x001FC0E0 - 0x001FC0FF (31 bytes, 9 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FC0E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001FC0E0: ;
    edx = MEM32(esp + 8);
    eax = ecx;
    ecx = MEM32(esp + 4);
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0xC);
    ecx = ecx | 0x80000000u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = ecx;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001FC100
 * Original: 0x001FC100 - 0x001FC109 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FC100(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001FC100: ;
    eax = MEM32(ecx + 8);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}

/**
 * sub_001FC110
 * Original: 0x001FC110 - 0x001FC137 (39 bytes, 15 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FC110(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001FC110: ;
    eax = MEM32(ecx + 8);
    edx = MEM32(esp + 4);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001FC134; /* jge: greater or equal (signed >=) */

loc_001FC120: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001FC128; /* jl: less (signed <) */

loc_001FC126: ;
    eax = edx;

loc_001FC128: ;
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001FC131u); RECOMP_ABI_CALL(0x00101B30u, sub_00101B30); /* call 0x00101B30 */

loc_001FC131: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001FC134: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001FC140
 * Original: 0x001FC140 - 0x001FC143 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FC140(void)
{

loc_001FC140: ;
    eax = MEM32(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001FC150
 * Original: 0x001FC150 - 0x001FC173 (35 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FC150(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001FC150: ;
    edx = MEM32(esp + 0xC);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_001FC172; /* js: sign (negative) */

loc_001FC157: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = esi + edx * 4;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001FC166: ;
    esi = MEM32(ecx + eax);
    MEM32(eax) = esi;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001FC166; /* jne: not equal / not zero */

loc_001FC171: ;
    POP32(esp, esi);

loc_001FC172: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001FC180
 * Original: 0x001FC180 - 0x001FC189 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FC180(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001FC180: ;
    eax = MEM32(ecx + 8);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}

/**
 * sub_001FC190
 * Original: 0x001FC190 - 0x001FC199 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FC190(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001FC190: ;
    eax = MEM32(ecx + 8);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}

/**
 * sub_001FC1A0
 * Original: 0x001FC1A0 - 0x001FC1C7 (39 bytes, 15 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FC1A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001FC1A0: ;
    eax = MEM32(ecx + 8);
    edx = MEM32(esp + 4);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001FC1C4; /* jge: greater or equal (signed >=) */

loc_001FC1B0: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001FC1B8; /* jl: less (signed <) */

loc_001FC1B6: ;
    eax = edx;

loc_001FC1B8: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001FC1C1u); RECOMP_ABI_CALL(0x00101B30u, sub_00101B30); /* call 0x00101B30 */

loc_001FC1C1: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001FC1C4: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001FC1D0
 * Original: 0x001FC1D0 - 0x001FC1EF (31 bytes, 9 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FC1D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001FC1D0: ;
    edx = MEM32(esp + 8);
    eax = ecx;
    ecx = MEM32(esp + 4);
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0xC);
    ecx = ecx | 0x80000000u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = ecx;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001FC1F0
 * Original: 0x001FC1F0 - 0x001FC1F9 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FC1F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001FC1F0: ;
    eax = MEM32(ecx + 8);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}

/**
 * sub_001FC200
 * Original: 0x001FC200 - 0x001FC209 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FC200(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001FC200: ;
    eax = MEM32(ecx + 8);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}

/**
 * sub_001FC210
 * Original: 0x001FC210 - 0x001FC22F (31 bytes, 9 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FC210(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001FC210: ;
    edx = MEM32(esp + 8);
    eax = ecx;
    ecx = MEM32(esp + 4);
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0xC);
    ecx = ecx | 0x80000000u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = ecx;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001FC230
 * Original: 0x001FC230 - 0x001FC233 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FC230(void)
{

loc_001FC230: ;
    eax = MEM32(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001FC240
 * Original: 0x001FC240 - 0x001FC249 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FC240(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001FC240: ;
    eax = MEM32(ecx + 8);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}

/**
 * sub_001FC250
 * Original: 0x001FC250 - 0x001FC277 (39 bytes, 15 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FC250(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001FC250: ;
    eax = MEM32(ecx + 8);
    edx = MEM32(esp + 4);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001FC274; /* jge: greater or equal (signed >=) */

loc_001FC260: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001FC268; /* jl: less (signed <) */

loc_001FC266: ;
    eax = edx;

loc_001FC268: ;
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001FC271u); RECOMP_ABI_CALL(0x00101B30u, sub_00101B30); /* call 0x00101B30 */

loc_001FC271: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001FC274: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001FC280
 * Original: 0x001FC280 - 0x001FC283 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FC280(void)
{

loc_001FC280: ;
    eax = MEM32(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001FC290
 * Original: 0x001FC290 - 0x001FC2B3 (35 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FC290(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001FC290: ;
    edx = MEM32(esp + 0xC);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_001FC2B2; /* js: sign (negative) */

loc_001FC297: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = esi + edx * 4;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001FC2A6: ;
    esi = MEM32(ecx + eax);
    MEM32(eax) = esi;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001FC2A6; /* jne: not equal / not zero */

loc_001FC2B1: ;
    POP32(esp, esi);

loc_001FC2B2: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001FC2C0
 * Original: 0x001FC2C0 - 0x001FC2DE (30 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FC2C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001FC2C0: ;
    edx = MEM32(esp + 0xC);
    ecx = MEM32(0x62EBAC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0xC);
    edx = edx << 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, edx);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x001FC2DDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001FC2DAu); } /* indirect call */
    }

loc_001FC2DD: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001FC2E0
 * Original: 0x001FC2E0 - 0x001FC2FE (30 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FC2E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001FC2E0: ;
    edx = MEM32(esp + 0xC);
    ecx = MEM32(0x62EBAC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0xC);
    edx = edx << 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, edx);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x001FC2FDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001FC2FAu); } /* indirect call */
    }

loc_001FC2FD: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001FC300
 * Original: 0x001FC300 - 0x001FC309 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FC300(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001FC300: ;
    eax = MEM32(ecx + 8);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}

/**
 * sub_001FC310
 * Original: 0x001FC310 - 0x001FC32E (30 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FC310(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001FC310: ;
    edx = MEM32(esp + 0xC);
    ecx = MEM32(0x62EBAC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0xC);
    edx = edx << 3;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, edx);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x001FC32Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001FC32Au); } /* indirect call */
    }

loc_001FC32D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001FC330
 * Original: 0x001FC330 - 0x001FC34E (30 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FC330(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001FC330: ;
    edx = MEM32(esp + 0xC);
    ecx = MEM32(0x62EBAC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0xC);
    edx = edx << 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, edx);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x001FC34Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001FC34Au); } /* indirect call */
    }

loc_001FC34D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001FC350
 * Original: 0x001FC350 - 0x001FC36E (30 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FC350(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001FC350: ;
    edx = MEM32(esp + 0xC);
    ecx = MEM32(0x62EBAC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0xC);
    edx = edx << 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, edx);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x001FC36Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001FC36Au); } /* indirect call */
    }

loc_001FC36D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001FC370
 * Original: 0x001FC370 - 0x001FC38E (30 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FC370(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001FC370: ;
    edx = MEM32(esp + 0xC);
    ecx = MEM32(0x62EBAC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0xC);
    edx = edx << 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, edx);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x001FC38Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001FC38Au); } /* indirect call */
    }

loc_001FC38D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001FC390
 * Original: 0x001FC390 - 0x001FC3AE (30 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FC390(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001FC390: ;
    edx = MEM32(esp + 0xC);
    ecx = MEM32(0x62EBAC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0xC);
    edx = edx << 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, edx);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x001FC3ADu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001FC3AAu); } /* indirect call */
    }

loc_001FC3AD: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001FC3B0
 * Original: 0x001FC3B0 - 0x001FC3CE (30 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FC3B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001FC3B0: ;
    edx = MEM32(esp + 0xC);
    ecx = MEM32(0x62EBAC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0xC);
    edx = edx << 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, edx);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x001FC3CDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001FC3CAu); } /* indirect call */
    }

loc_001FC3CD: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001FC3D0
 * Original: 0x001FC3D0 - 0x001FC3EE (30 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FC3D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001FC3D0: ;
    edx = MEM32(esp + 0xC);
    ecx = MEM32(0x62EBAC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0xC);
    edx = edx << 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, edx);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x001FC3EDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001FC3EAu); } /* indirect call */
    }

loc_001FC3ED: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001FC3F0
 * Original: 0x001FC3F0 - 0x001FC40E (30 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FC3F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001FC3F0: ;
    edx = MEM32(esp + 0xC);
    ecx = MEM32(0x62EBAC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0xC);
    edx = edx << 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, edx);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x001FC40Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001FC40Au); } /* indirect call */
    }

loc_001FC40D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001FC410
 * Original: 0x001FC410 - 0x001FC42E (30 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FC410(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001FC410: ;
    edx = MEM32(esp + 0xC);
    ecx = MEM32(0x62EBAC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0xC);
    edx = edx << 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, edx);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x001FC42Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001FC42Au); } /* indirect call */
    }

loc_001FC42D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001FC430
 * Original: 0x001FC430 - 0x001FC44E (30 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FC430(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001FC430: ;
    edx = MEM32(esp + 0xC);
    ecx = MEM32(0x62EBAC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0xC);
    edx = edx << 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, edx);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x001FC44Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001FC44Au); } /* indirect call */
    }

loc_001FC44D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001FC450
 * Original: 0x001FC450 - 0x001FC46E (30 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FC450(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001FC450: ;
    edx = MEM32(esp + 0xC);
    ecx = MEM32(0x62EBAC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0xC);
    edx = edx << 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, edx);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x001FC46Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001FC46Au); } /* indirect call */
    }

loc_001FC46D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001FC470
 * Original: 0x001FC470 - 0x001FC479 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FC470(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001FC470: ;
    eax = MEM32(ecx + 8);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}

/**
 * sub_001FC480
 * Original: 0x001FC480 - 0x001FC4A1 (33 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FC480(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001FC480: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(0x62EBAC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xC);
    eax = eax + eax * 2;
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x001FC4A0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001FC49Du); } /* indirect call */
    }

loc_001FC4A0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001FC4B0
 * Original: 0x001FC4B0 - 0x001FC4B9 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FC4B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001FC4B0: ;
    eax = MEM32(ecx + 8);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}

/**
 * sub_001FC4C0
 * Original: 0x001FC4C0 - 0x001FC4DE (30 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FC4C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001FC4C0: ;
    edx = MEM32(esp + 0xC);
    ecx = MEM32(0x62EBAC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0xC);
    edx = edx << 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, edx);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x001FC4DDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001FC4DAu); } /* indirect call */
    }

loc_001FC4DD: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001FC4E0
 * Original: 0x001FC4E0 - 0x001FC4FE (30 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FC4E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001FC4E0: ;
    edx = MEM32(esp + 0xC);
    ecx = MEM32(0x62EBAC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0xC);
    edx = edx << 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, edx);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x001FC4FDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001FC4FAu); } /* indirect call */
    }

loc_001FC4FD: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001FC500
 * Original: 0x001FC500 - 0x001FC51E (30 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FC500(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001FC500: ;
    edx = MEM32(esp + 0xC);
    ecx = MEM32(0x62EBAC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0xC);
    edx = edx << 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, edx);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x001FC51Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001FC51Au); } /* indirect call */
    }

loc_001FC51D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001FC520
 * Original: 0x001FC520 - 0x001FC53E (30 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FC520(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001FC520: ;
    edx = MEM32(esp + 0xC);
    ecx = MEM32(0x62EBAC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0xC);
    edx = edx << 5;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, edx);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x001FC53Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001FC53Au); } /* indirect call */
    }

loc_001FC53D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001FC540
 * Original: 0x001FC540 - 0x001FC549 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FC540(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001FC540: ;
    eax = MEM32(ecx + 8);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}

/**
 * sub_001FC550
 * Original: 0x001FC550 - 0x001FC56E (30 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FC550(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001FC550: ;
    edx = MEM32(esp + 0xC);
    ecx = MEM32(0x62EBAC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0xC);
    edx = edx << 3;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, edx);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x001FC56Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001FC56Au); } /* indirect call */
    }

loc_001FC56D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001FC570
 * Original: 0x001FC570 - 0x001FC58E (30 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FC570(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001FC570: ;
    edx = MEM32(esp + 0xC);
    ecx = MEM32(0x62EBAC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0xC);
    edx = edx << 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, edx);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x001FC58Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001FC58Au); } /* indirect call */
    }

loc_001FC58D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001FC590
 * Original: 0x001FC590 - 0x001FC59A (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FC590(void)
{

loc_001FC590: ;
    eax = ecx;
    MEM32(eax + 0x20) = 0x34000000;
    esp += 4; return; /* ret */

}

/**
 * sub_001FC5A0
 * Original: 0x001FC5A0 - 0x001FC5D7 (55 bytes, 24 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FC5A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_001FC5A0: ;
    edx = MEM32(ecx);
    edx = MEM32(edx + 4);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi);
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_001FC5B9; /* jae: above or equal (unsigned >=) */

loc_001FC5B3: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_001FC5B9: ;
    if (CMP_NE(_fa, _fb)) goto loc_001FC5D1; /* jne: not equal / not zero */

loc_001FC5BB: ;
    eax = MEM32(esi + 4);
    esi = MEM32(eax + 4);
    ecx = MEM32(ecx + 4);
    edx = MEM32(ecx + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    _cf = (int)(_fa < _fb);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_001FC5D1: ;
    _cf = 0; /* xor clears CF */
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001FC5E0
 * Original: 0x001FC5E0 - 0x001FC5E6 (6 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FC5E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001FC5E0: ;
    eax = MEM32(ecx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esp += 4; return; /* ret */

}

/**
 * sub_001FC5F0
 * Original: 0x001FC5F0 - 0x001FC5F7 (7 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FC5F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001FC5F0: ;
    eax = MEM32(ecx + 4);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esp += 4; return; /* ret */

}

/**
 * sub_001FC600
 * Original: 0x001FC600 - 0x001FC60F (15 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FC600(void)
{

loc_001FC600: ;
    eax = ecx;
    MEM16(eax + 6) = 1;
    MEM32(eax) = 0x4B36C8;
    esp += 4; return; /* ret */

}

/**
 * sub_001FC610
 * Original: 0x001FC610 - 0x001FC639 (41 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FC610(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001FC610: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x4AE714;
    if (TEST_Z(_fa, _fb)) goto loc_001FC633; /* je: equal / zero */

loc_001FC620: ;
    edx = ZX16(MEM16(esi + 4));
    ecx = MEM32(0x62EBAC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x19);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x001FC633u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001FC630u); } /* indirect call */
    }

loc_001FC633: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001FC640
 * Original: 0x001FC640 - 0x001FC649 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FC640(void)
{

loc_001FC640: ;
    eax = ecx;
    MEM32(eax) = 0x4B36D0;
    esp += 4; return; /* ret */

}

/**
 * sub_001FC650
 * Original: 0x001FC650 - 0x001FC655 (5 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 4 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001FC650(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001FC650: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_001FC660
 * Original: 0x001FC660 - 0x001FC663 (3 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FC660(void)
{

loc_001FC660: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001FC670
 * Original: 0x001FC670 - 0x001FC673 (3 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FC670(void)
{

loc_001FC670: ;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_001FC680
 * Original: 0x001FC680 - 0x001FC681 (1 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FC680(void)
{

loc_001FC680: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001FC690
 * Original: 0x001FC690 - 0x001FC697 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FC690(void)
{

loc_001FC690: ;
    MEM32(ecx) = 0x4AE714;
    esp += 4; return; /* ret */

}

/**
 * sub_001FC6A0
 * Original: 0x001FC6A0 - 0x001FC6C9 (41 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FC6A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001FC6A0: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x4AE714;
    if (TEST_Z(_fa, _fb)) goto loc_001FC6C3; /* je: equal / zero */

loc_001FC6B0: ;
    edx = ZX16(MEM16(esi + 4));
    ecx = MEM32(0x62EBAC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xE);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x001FC6C3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001FC6C0u); } /* indirect call */
    }

loc_001FC6C3: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001FC6D0
 * Original: 0x001FC6D0 - 0x001FC70F (63 bytes, 24 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FC6D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001FC6D0: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax + 8);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001FC6E1; /* jle: less or equal (signed <=) */

loc_001FC6DF: ;
    edx = esi;

loc_001FC6E1: ;
    esi = MEM32(ecx + 0xC);
    MEM32(ecx + 8) = edx;
    edx = MEM32(eax + 0xC);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 0xC) = esi;
    edx = MEM32(eax + 0x10);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ecx + 0x10) = MEM32(ecx + 0x10) + edx;
    _fa = (uint32_t)(MEM32(ecx + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(eax + 0x18);
    esi = MEM32(ecx + 0x18);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(ecx + 0x14);
    MEM32(ecx + 0x18) = esi;
    eax = MEM32(eax + 0x14);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 0x14) = edx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001FC710
 * Original: 0x001FC710 - 0x001FC725 (21 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FC710(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001FC710: ;
    eax = MEM32(ecx);
    ecx = MEM32(eax + 4);
    edx = MEM32(eax);
    PUSH32(esp, esi);
    esi = MEM32(edx);
    ecx = (uint32_t)(-(int32_t)ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001FC730
 * Original: 0x001FC730 - 0x001FC740 (16 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FC730(void)
{

loc_001FC730: ;
    eax = ecx;
    MEM32(eax) = 0x4B36E4;
    MEM32(eax + 0x34) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_001FC740
 * Original: 0x001FC740 - 0x001FC760 (32 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FC740(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001FC740: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x4AE740;
    if (TEST_Z(_fa, _fb)) goto loc_001FC759; /* je: equal / zero */

loc_001FC750: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001FC756u); RECOMP_ABI_CALL(0x000EB425u, sub_000EB425); /* call 0x000EB425 */

loc_001FC756: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001FC759: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001FC760
 * Original: 0x001FC760 - 0x001FC770 (16 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FC760(void)
{

loc_001FC760: ;
    eax = ecx;
    MEM32(eax) = 0x4B36EC;
    MEM32(eax + 0x40) = 0x34000000;
    esp += 4; return; /* ret */

}

/**
 * sub_001FC770
 * Original: 0x001FC770 - 0x001FC790 (32 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FC770(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001FC770: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x4AE740;
    if (TEST_Z(_fa, _fb)) goto loc_001FC789; /* je: equal / zero */

loc_001FC780: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001FC786u); RECOMP_ABI_CALL(0x000EB425u, sub_000EB425); /* call 0x000EB425 */

loc_001FC786: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001FC789: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001FC790
 * Original: 0x001FC790 - 0x001FC82E (158 bytes, 72 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FC790(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001FC790: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_001FC7A1; /* je: equal / zero */

loc_001FC79C: ;
    ebx = eax + -16;
    goto loc_001FC7A3;

loc_001FC7A1: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001FC7A3: ;
    eax = MEM32(ecx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_001FC7B0; /* je: equal / zero */

loc_001FC7AB: ;
    edi = eax + -16;
    goto loc_001FC7B2;

loc_001FC7B0: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001FC7B2: ;
    ecx = MEM32(esp + 0x14);
    eax = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001FC7C1; /* je: equal / zero */

loc_001FC7BC: ;
    esi = eax + -16;
    goto loc_001FC7C3;

loc_001FC7C1: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001FC7C3: ;
    eax = MEM32(ecx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001FC7CF; /* je: equal / zero */

loc_001FC7CA: ;
    edx = eax + -16;
    goto loc_001FC7D1;

loc_001FC7CF: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001FC7D1: ;
    eax = MEM32(ebx + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001FC7E3; /* jne: not equal / not zero */

loc_001FC7D8: ;
    eax = MEM32(edi + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001FC7E3; /* jne: not equal / not zero */

loc_001FC7DF: ;
    SET_LO8(ecx, 1);
    goto loc_001FC7E5;

loc_001FC7E3: ;
    SET_LO8(ecx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_001FC7E5: ;
    eax = MEM32(esi + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_001FC7F8; /* jne: not equal / not zero */

loc_001FC7ED: ;
    eax = MEM32(edx + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001FC7F8; /* jne: not equal / not zero */

loc_001FC7F4: ;
    SET_LO8(eax, 1);
    goto loc_001FC7FA;

loc_001FC7F8: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_001FC7FA: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001FC805; /* jne: not equal / not zero */

loc_001FC7FE: ;
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_001FC805: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001FC810; /* jne: not equal / not zero */

loc_001FC809: ;
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_001FC810: ;
    eax = MEM32(edx + 0x20);
    ecx = MEM32(eax + 0x44);
    edx = MEM32(ebx + 0x20);
    eax = MEM32(edx + 0x44);
    edx = MEM32(eax + 0x24);
    esi = MEM32(ecx + 0x24);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    POP32(esp, esi);
    SET_LO8(eax, (CMP_L(_fas, _fbs)) ? 1 : 0); /* setl */
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001FC830
 * Original: 0x001FC830 - 0x001FC866 (54 bytes, 19 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FC830(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001FC830: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001FC83Cu); RECOMP_ABI_CALL(0x0020B380u, sub_0020B380); /* call 0x0020B380 */

loc_001FC83C: ;
    ecx = MEM32(esi + 0x10);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x001FC848u); RECOMP_ABI_CALL(0x002093B0u, sub_002093B0); /* call 0x002093B0 */

loc_001FC848: ;
    MEM16(esi + 6) = MEM16(esi + 6) - 1;
    _fa = (uint32_t)(MEM16(esi + 6)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(esi + 6)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 6), 0 (16-bit) */
    MEM32(esi + 0xC) = 0;
    if (CMP_NE(_fa, _fb)) goto loc_001FC862; /* jne: not equal / not zero */

loc_001FC85A: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x001FC862u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001FC860u); } /* indirect call */
    }

loc_001FC862: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001FC870
 * Original: 0x001FC870 - 0x001FC8AF (63 bytes, 25 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FC870(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001FC870: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x40);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_LE(_fas, _fbs)) goto loc_001FC88E; /* jle: less or equal (signed <=) */

loc_001FC87B: ;
    edx = MEM32(ecx + 0x3C);
    edi = MEM32(esp + 0xC);

loc_001FC882: ;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001FC8A0; /* je: equal / zero */

loc_001FC886: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001FC882; /* jl: less (signed <) */

loc_001FC88E: ;
    edx = MEM32(ecx + 0x3C);
    POP32(esp, edi);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, esi);
    MEM32(edx + eax * 4) = 0;
    esp += 8; return; /* ret 4 */

loc_001FC8A0: ;
    ecx = MEM32(ecx + 0x3C);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ecx + eax * 4) = 0;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001FC8B0
 * Original: 0x001FC8B0 - 0x001FC8EF (63 bytes, 25 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FC8B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001FC8B0: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x64);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_LE(_fas, _fbs)) goto loc_001FC8CE; /* jle: less or equal (signed <=) */

loc_001FC8BB: ;
    edx = MEM32(ecx + 0x60);
    edi = MEM32(esp + 0xC);

loc_001FC8C2: ;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001FC8E0; /* je: equal / zero */

loc_001FC8C6: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001FC8C2; /* jl: less (signed <) */

loc_001FC8CE: ;
    edx = MEM32(ecx + 0x60);
    POP32(esp, edi);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, esi);
    MEM32(edx + eax * 4) = 0;
    esp += 8; return; /* ret 4 */

loc_001FC8E0: ;
    ecx = MEM32(ecx + 0x60);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ecx + eax * 4) = 0;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001FC8F0
 * Original: 0x001FC8F0 - 0x001FC92F (63 bytes, 25 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FC8F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001FC8F0: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x4C);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_LE(_fas, _fbs)) goto loc_001FC90E; /* jle: less or equal (signed <=) */

loc_001FC8FB: ;
    edx = MEM32(ecx + 0x48);
    edi = MEM32(esp + 0xC);

loc_001FC902: ;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001FC920; /* je: equal / zero */

loc_001FC906: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001FC902; /* jl: less (signed <) */

loc_001FC90E: ;
    edx = MEM32(ecx + 0x48);
    POP32(esp, edi);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, esi);
    MEM32(edx + eax * 4) = 0;
    esp += 8; return; /* ret 4 */

loc_001FC920: ;
    ecx = MEM32(ecx + 0x48);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ecx + eax * 4) = 0;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001FC930
 * Original: 0x001FC930 - 0x001FC96F (63 bytes, 25 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FC930(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001FC930: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x58);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_LE(_fas, _fbs)) goto loc_001FC94E; /* jle: less or equal (signed <=) */

loc_001FC93B: ;
    edx = MEM32(ecx + 0x54);
    edi = MEM32(esp + 0xC);

loc_001FC942: ;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001FC960; /* je: equal / zero */

loc_001FC946: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001FC942; /* jl: less (signed <) */

loc_001FC94E: ;
    edx = MEM32(ecx + 0x54);
    POP32(esp, edi);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, esi);
    MEM32(edx + eax * 4) = 0;
    esp += 8; return; /* ret 4 */

loc_001FC960: ;
    ecx = MEM32(ecx + 0x54);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ecx + eax * 4) = 0;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001FC970
 * Original: 0x001FC970 - 0x001FC9AF (63 bytes, 25 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FC970(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001FC970: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x7C);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_LE(_fas, _fbs)) goto loc_001FC98E; /* jle: less or equal (signed <=) */

loc_001FC97B: ;
    edx = MEM32(ecx + 0x78);
    edi = MEM32(esp + 0xC);

loc_001FC982: ;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001FC9A0; /* je: equal / zero */

loc_001FC986: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001FC982; /* jl: less (signed <) */

loc_001FC98E: ;
    edx = MEM32(ecx + 0x78);
    POP32(esp, edi);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, esi);
    MEM32(edx + eax * 4) = 0;
    esp += 8; return; /* ret 4 */

loc_001FC9A0: ;
    ecx = MEM32(ecx + 0x78);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ecx + eax * 4) = 0;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001FC9B0
 * Original: 0x001FC9B0 - 0x001FC9FB (75 bytes, 25 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001FC9B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001FC9B0: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x94);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_LE(_fas, _fbs)) goto loc_001FC9D4; /* jle: less or equal (signed <=) */

loc_001FC9BE: ;
    edx = MEM32(ecx + 0x90);
    edi = MEM32(esp + 0xC);

loc_001FC9C8: ;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001FC9E9; /* je: equal / zero */

loc_001FC9CC: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001FC9C8; /* jl: less (signed <) */

loc_001FC9D4: ;
    edx = MEM32(ecx + 0x90);
    POP32(esp, edi);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, esi);
    MEM32(edx + eax * 4) = 0;
    esp += 8; return; /* ret 4 */

loc_001FC9E9: ;
    ecx = MEM32(ecx + 0x90);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ecx + eax * 4) = 0;
    esp += 8; return; /* ret 4 */

}
