/**
 * MK: Shaolin Monks - Recompiled code chunk 41
 * Functions: 500 (0x002B2790 - 0x002BB8A0)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_002B2790
 * Original: 0x002B2790 - 0x002B27A9 (25 bytes, 10 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B2790(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B2790: ;
    eax = MEM32(ecx + 0x30);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B27A6; /* je: equal / zero */

loc_002B2797: ;
    ecx = MEM32(esp + 8);
    edx = MEM32(esp + 4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x002B27A3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002B27A1u); } /* indirect call */
    }

loc_002B27A3: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002B27A6: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002B27B0
 * Original: 0x002B27B0 - 0x002B27C9 (25 bytes, 10 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B27B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B27B0: ;
    eax = MEM32(ecx + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B27C6; /* je: equal / zero */

loc_002B27B7: ;
    ecx = MEM32(esp + 8);
    edx = MEM32(esp + 4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x002B27C3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002B27C1u); } /* indirect call */
    }

loc_002B27C3: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002B27C6: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002B27D0
 * Original: 0x002B27D0 - 0x002B27D4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B27D0(void)
{

loc_002B27D0: ;
    eax = MEM32(ecx + 0x24);
    esp += 4; return; /* ret */

}

/**
 * sub_002B27E0
 * Original: 0x002B27E0 - 0x002B27F9 (25 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_002B27E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B27E0: ;
    eax = MEM32(ecx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B27F4; /* je: equal / zero */

loc_002B27E7: ;
    ecx = MEM32(esp + 4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x002B27EEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002B27ECu); } /* indirect call */
    }

loc_002B27EE: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_002B27F4: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002B2800
 * Original: 0x002B2800 - 0x002B2812 (18 bytes, 8 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B2800(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B2800: ;
    eax = MEM32(ecx + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B280F; /* je: equal / zero */

loc_002B2807: ;
    ecx = MEM32(esp + 4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x002B280Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002B280Cu); } /* indirect call */
    }

loc_002B280E: ;
    POP32(esp, ecx);

loc_002B280F: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002B2820
 * Original: 0x002B2820 - 0x002B2832 (18 bytes, 8 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B2820(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B2820: ;
    eax = MEM32(ecx + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B282F; /* je: equal / zero */

loc_002B2827: ;
    ecx = MEM32(esp + 4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x002B282Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002B282Cu); } /* indirect call */
    }

loc_002B282E: ;
    POP32(esp, ecx);

loc_002B282F: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002B2840
 * Original: 0x002B2840 - 0x002B284C (12 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B2840(void)
{

loc_002B2840: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax * 4 + 0x518D58);
    esp += 4; return; /* ret */

}

/**
 * sub_002B2850
 * Original: 0x002B2850 - 0x002B285C (12 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B2850(void)
{

loc_002B2850: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax * 4 + 0x4C3008);
    esp += 4; return; /* ret */

}

/**
 * sub_002B2860
 * Original: 0x002B2860 - 0x002B2863 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B2860(void)
{

loc_002B2860: ;
    eax = MEM32(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002B2870
 * Original: 0x002B2870 - 0x002B2879 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B2870(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B2870: ;
    eax = MEM32(ecx + 8);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}

/**
 * sub_002B2880
 * Original: 0x002B2880 - 0x002B28D6 (86 bytes, 27 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B2880(void)
{

loc_002B2880: ;
    eax = ecx;
    ecx = MEM32(esp + 4);
    MEM16(eax + 6) = 1;
    MEM32(eax) = 0x4C3170;
    edx = MEM32(ecx);
    MEM32(eax + 8) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 0xC) = edx;
    edx = MEM32(ecx + 8);
    MEM32(eax + 0x10) = edx;
    edx = MEM32(ecx + 0xC);
    MEM32(eax + 0x14) = edx;
    edx = MEM32(ecx + 0x10);
    MEM32(eax + 0x18) = edx;
    edx = MEM32(ecx + 0x14);
    MEM32(eax + 0x1C) = edx;
    edx = MEM32(ecx + 0x18);
    MEM32(eax + 0x20) = edx;
    edx = MEM32(ecx + 0x1C);
    MEM32(eax + 0x24) = edx;
    edx = MEM32(ecx + 0x20);
    MEM32(eax + 0x28) = edx;
    edx = MEM32(ecx + 0x24);
    MEM32(eax + 0x2C) = edx;
    ecx = MEM32(ecx + 0x28);
    MEM32(eax + 0x30) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002B28E0
 * Original: 0x002B28E0 - 0x002B2908 (40 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B28E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B28E0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x002B28E8u); RECOMP_ABI_CALL(0x00204FE0u, sub_00204FE0); /* call 0x00204FE0 */

loc_002B28E8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002B2902; /* je: equal / zero */

loc_002B28EF: ;
    edx = ZX16(MEM16(esi + 4));
    ecx = MEM32(0x62EBAC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xE);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x002B2902u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002B28FFu); } /* indirect call */
    }

loc_002B2902: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002B2910
 * Original: 0x002B2910 - 0x002B2937 (39 bytes, 18 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B2910(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B2910: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x002B291Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002B2919u); } /* indirect call */
    }

loc_002B291C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B292B; /* je: equal / zero */

loc_002B2920: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B2931; /* je: equal / zero */

loc_002B2924: ;
    eax = MEM32(eax + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B2920; /* jne: not equal / not zero */

loc_002B292B: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_002B2931: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002B2940
 * Original: 0x002B2940 - 0x002B2987 (71 bytes, 31 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B2940(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B2940: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;

loc_002B2948: ;
    edx = MEM32(esi + 0x20);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B296B; /* je: equal / zero */

loc_002B294F: ;
    ecx = MEM32(edx + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B2962; /* je: equal / zero */

loc_002B2956: ;
    PUSH32(esp, 0x002B295Bu); RECOMP_ABI_CALL(0x002B2760u, sub_002B2760); /* call 0x002B2760 */

loc_002B295B: ;
    ecx = MEM32(edx + 0x2C);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_002B296D;

loc_002B2962: ;
    ecx = MEM32(edx + 0x2C);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_002B296D;

loc_002B296B: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002B296D: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002B2975; /* jge: greater or equal (signed >=) */

loc_002B2971: ;
    esi = edx;
    goto loc_002B2948;

loc_002B2975: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(esi + 0x28);
    eax = edi;
    eax = eax + eax * 2;
    POP32(esp, edi);
    eax = ecx + eax * 4;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002B2990
 * Original: 0x002B2990 - 0x002B29E8 (88 bytes, 43 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B2990(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B2990: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_002B29A0: ;
    ecx = MEM32(edi + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B29AE; /* je: equal / zero */

loc_002B29A7: ;
    PUSH32(esp, 0x002B29ACu); RECOMP_ABI_CALL(0x002B2760u, sub_002B2760); /* call 0x002B2760 */

loc_002B29AC: ;
    goto loc_002B29B0;

loc_002B29AE: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002B29B0: ;
    ecx = MEM32(edi + 0x2C);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002B29DF; /* jge: greater or equal (signed >=) */

loc_002B29B9: ;
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0x002B29C1u); RECOMP_ABI_CALL(0x002B2940u, sub_002B2940); /* call 0x002B2940 */

loc_002B29C1: ;
    esi = eax;
    eax = MEM32(esi);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002B29CCu); RECOMP_ABI_CALL(0x00101E50u, sub_00101E50); /* call 0x00101E50 */

loc_002B29CC: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B29D6; /* je: equal / zero */

loc_002B29D3: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_002B29A0;

loc_002B29D6: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_002B29DF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002B29F0
 * Original: 0x002B29F0 - 0x002B2A1E (46 bytes, 21 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B29F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B29F0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    esi = ecx;
    eax = MEM32(esi + 0x24);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0x002B2A04u); RECOMP_ABI_CALL(0x001020F0u, sub_001020F0); /* call 0x001020F0 */

loc_002B2A04: ;
    esi = MEM32(esi + 0x10);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B2A19; /* je: equal / zero */

loc_002B2A0E: ;
    ecx = MEM32(esp + 0xC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    { uint32_t _icall_target = esi; PUSH32(esp, 0x002B2A16u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002B2A14u); } /* indirect call */
    }

loc_002B2A16: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002B2A19: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002B2A20
 * Original: 0x002B2A20 - 0x002B2A61 (65 bytes, 25 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B2A20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B2A20: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 8);
    eax = MEM32(esi + 4);
    ecx = ecx & 0x7FFFFFFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B2A4C; /* jne: not equal / not zero */

loc_002B2A33: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B2A3B; /* je: equal / zero */

loc_002B2A37: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_002B2A40;

loc_002B2A3B: ;
    eax = 1;

loc_002B2A40: ;
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x002B2A49u); RECOMP_ABI_CALL(0x00101B30u, sub_00101B30); /* call 0x00101B30 */

loc_002B2A49: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002B2A4C: ;
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
 * sub_002B2A70
 * Original: 0x002B2A70 - 0x002B2ACE (94 bytes, 26 insns)
 * Category: game_vtable
 * CC: thiscall, 11 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B2A70(void)
{

loc_002B2A70: ;
    edx = MEM32(esp + 8);
    eax = ecx;
    ecx = MEM32(esp + 4);
    MEM32(eax + 8) = ecx;
    ecx = MEM32(esp + 0xC);
    MEM32(eax + 0xC) = edx;
    edx = MEM32(esp + 0x10);
    MEM32(eax + 0x10) = ecx;
    ecx = MEM32(esp + 0x14);
    MEM32(eax + 0x14) = edx;
    edx = MEM32(esp + 0x18);
    MEM32(eax + 0x18) = ecx;
    ecx = MEM32(esp + 0x1C);
    MEM32(eax + 0x1C) = edx;
    edx = MEM32(esp + 0x20);
    MEM32(eax + 0x20) = ecx;
    ecx = MEM32(esp + 0x24);
    MEM32(eax + 0x24) = edx;
    edx = MEM32(esp + 0x28);
    MEM32(eax + 0x28) = ecx;
    ecx = MEM32(esp + 0x2C);
    MEM16(eax + 6) = 1;
    MEM32(eax) = 0x4C3170;
    MEM32(eax + 0x2C) = edx;
    MEM32(eax + 0x30) = ecx;
    esp += 48; return; /* ret 44 */

}

/**
 * sub_002B2AD0
 * Original: 0x002B2AD0 - 0x002B2B69 (153 bytes, 61 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B2AD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B2AD0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebp = ecx;
    MEM32(esi + 4) = edi;
    ecx = MEM32(ebp + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B2AED; /* je: equal / zero */

loc_002B2AE6: ;
    PUSH32(esp, 0x002B2AEBu); RECOMP_ABI_CALL(0x002B2760u, sub_002B2760); /* call 0x002B2760 */

loc_002B2AEB: ;
    goto loc_002B2AEF;

loc_002B2AED: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002B2AEF: ;
    ebx = MEM32(ebp + 0x2C);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_002B2B58; /* jle: less or equal (signed <=) */

loc_002B2AF8: ;
    PUSH32(esp, edi);
    ecx = ebp;
    PUSH32(esp, 0x002B2B00u); RECOMP_ABI_CALL(0x002B2940u, sub_002B2940); /* call 0x002B2940 */

loc_002B2B00: ;
    SET_LO16(ecx, MEM16(eax + 4));
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(0x11) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 0x11 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B2B1F; /* je: equal / zero */

loc_002B2B0A: ;
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(0x12) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 0x12 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B2B53; /* jne: not equal / not zero */

loc_002B2B10: ;
    eax = MEM32(eax + 4);
    eax = eax & 0xFFFF0000u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x110000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x110000 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B2B53; /* jne: not equal / not zero */

loc_002B2B1F: ;
    ecx = MEM32(esi + 8);
    eax = MEM32(esi + 4);
    ecx = ecx & 0x7FFFFFFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B2B48; /* jne: not equal / not zero */

loc_002B2B2F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B2B37; /* je: equal / zero */

loc_002B2B33: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_002B2B3C;

loc_002B2B37: ;
    eax = 1;

loc_002B2B3C: ;
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x002B2B45u); RECOMP_ABI_CALL(0x00101B30u, sub_00101B30); /* call 0x00101B30 */

loc_002B2B45: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002B2B48: ;
    edx = MEM32(esi + 4);
    eax = MEM32(esi);
    MEM32(eax + edx * 4) = edi;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_002B2B53: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002B2AF8; /* jl: less (signed <) */

loc_002B2B58: ;
    ecx = MEM32(esi + 4);
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    POP32(esp, ebp);
    SET_LO8(eax, (CMP_G(_fas, _fbs)) ? 1 : 0); /* setg */
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002B2B70
 * Original: 0x002B2B70 - 0x002B2BF1 (129 bytes, 54 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B2B70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B2B70: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebp = ecx;
    MEM32(esi + 4) = edi;
    ecx = MEM32(ebp + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B2B8D; /* je: equal / zero */

loc_002B2B86: ;
    PUSH32(esp, 0x002B2B8Bu); RECOMP_ABI_CALL(0x002B2760u, sub_002B2760); /* call 0x002B2760 */

loc_002B2B8B: ;
    goto loc_002B2B8F;

loc_002B2B8D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002B2B8F: ;
    ebx = MEM32(ebp + 0x2C);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_002B2BE0; /* jle: less or equal (signed <=) */

loc_002B2B98: ;
    PUSH32(esp, edi);
    ecx = ebp;
    PUSH32(esp, 0x002B2BA0u); RECOMP_ABI_CALL(0x002B2940u, sub_002B2940); /* call 0x002B2940 */

loc_002B2BA0: ;
    _fa = (uint32_t)(MEM16(eax + 4)) & 0xFFFFu; _fb = (uint32_t)(0x12) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 4), 0x12 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B2BDB; /* jne: not equal / not zero */

loc_002B2BA7: ;
    ecx = MEM32(esi + 8);
    eax = MEM32(esi + 4);
    ecx = ecx & 0x7FFFFFFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B2BD0; /* jne: not equal / not zero */

loc_002B2BB7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B2BBF; /* je: equal / zero */

loc_002B2BBB: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_002B2BC4;

loc_002B2BBF: ;
    eax = 1;

loc_002B2BC4: ;
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x002B2BCDu); RECOMP_ABI_CALL(0x00101B30u, sub_00101B30); /* call 0x00101B30 */

loc_002B2BCD: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002B2BD0: ;
    edx = MEM32(esi + 4);
    eax = MEM32(esi);
    MEM32(eax + edx * 4) = edi;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_002B2BDB: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002B2B98; /* jl: less (signed <) */

loc_002B2BE0: ;
    ecx = MEM32(esi + 4);
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    POP32(esp, ebp);
    SET_LO8(eax, (CMP_G(_fas, _fbs)) ? 1 : 0); /* setg */
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002B2C00
 * Original: 0x002B2C00 - 0x002B2D69 (361 bytes, 119 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B2C00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B2C00: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x3BCF58);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = ecx;
    MEM32(esp + 0xC) = edi;
    MEM32(esp + 0x10) = ebp;
    MEM32(esp + 0x14) = ebp;
    MEM32(esp + 0x18) = 0x80000000u;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    MEM32(esp + 0x28) = ebp;
    PUSH32(esp, 0x002B2C40u); RECOMP_ABI_CALL(0x002B2AD0u, sub_002B2AD0); /* call 0x002B2AD0 */

loc_002B2C40: ;
    _fa = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x14), ebp (32-bit) */
    MEM32(esp + 8) = ebp;
    if (CMP_LE(_fas, _fbs)) goto loc_002B2D2B; /* jle: less or equal (signed <=) */

loc_002B2C4E: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x38);
    goto loc_002B2C60;

loc_002B2C56: ;
    edi = MEM32(esp + 0x14);
    /* nop */

loc_002B2C60: ;
    ecx = MEM32(esp + 0x18);
    edx = MEM32(ecx + ebp * 4);
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x002B2C6Fu); RECOMP_ABI_CALL(0x002B2940u, sub_002B2940); /* call 0x002B2940 */

loc_002B2C6F: ;
    SET_LO16(ecx, MEM16(eax + 4));
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(0x11) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 0x11 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B2CB9; /* jne: not equal / not zero */

loc_002B2C79: ;
    edi = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    eax = MEM32(esp + 0x34);
    ecx = MEM32(esi + 8);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esi + 4);
    ecx = ecx & 0x7FFFFFFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B2CAC; /* jne: not equal / not zero */

loc_002B2C93: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B2C9B; /* je: equal / zero */

loc_002B2C97: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_002B2CA0;

loc_002B2C9B: ;
    eax = 1;

loc_002B2CA0: ;
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x002B2CA9u); RECOMP_ABI_CALL(0x00101B30u, sub_00101B30); /* call 0x00101B30 */

loc_002B2CA9: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002B2CAC: ;
    edx = MEM32(esi + 4);
    eax = MEM32(esi);
    MEM32(eax + edx * 4) = edi;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_002B2D18;

loc_002B2CB9: ;
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(0x12) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 0x12 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B2D18; /* jne: not equal / not zero */

loc_002B2CBF: ;
    edi = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    ecx = MEM32(esp + 0x34);
    eax = MEM32(edi + ecx + 4);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_002B2D18; /* jle: less or equal (signed <=) */

loc_002B2CD3: ;
    eax = MEM32(edi);
    ecx = MEM32(esi + 8);
    ebp = eax + ebx * 4;
    eax = MEM32(esi + 4);
    ecx = ecx & 0x7FFFFFFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B2D01; /* jne: not equal / not zero */

loc_002B2CE8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B2CF0; /* je: equal / zero */

loc_002B2CEC: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_002B2CF5;

loc_002B2CF0: ;
    eax = 1;

loc_002B2CF5: ;
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x002B2CFEu); RECOMP_ABI_CALL(0x00101B30u, sub_00101B30); /* call 0x00101B30 */

loc_002B2CFE: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002B2D01: ;
    edx = MEM32(esi + 4);
    eax = MEM32(esi);
    MEM32(eax + edx * 4) = ebp;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(edi + 4);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002B2CD3; /* jl: less (signed <) */

loc_002B2D14: ;
    ebp = MEM32(esp + 0x10);

loc_002B2D18: ;
    eax = MEM32(esp + 0x1C);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    MEM32(esp + 0x10) = ebp;
    if (CMP_L(_fas, _fbs)) goto loc_002B2C56; /* jl: less (signed <) */

loc_002B2D29: ;
    POP32(esp, esi);
    POP32(esp, ebx);

loc_002B2D2B: ;
    eax = MEM32(esp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, edi);
    MEM32(esp + 0x20) = 0xFFFFFFFFu;
    POP32(esp, ebp);
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_002B2D58; /* js: sign (negative) */

loc_002B2D3D: ;
    ecx = MEM32(0x62EBAC);
    edx = MEM32(ecx);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x10);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x002B2D58u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002B2D55u); } /* indirect call */
    }

loc_002B2D58: ;
    ecx = MEM32(esp + 0x14);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002B2D70
 * Original: 0x002B2D70 - 0x002B2DC1 (81 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B2D70(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B2D70: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x28);
    ecx = MEM32(eax + 8);
    edx = MEM32(eax + 0x20);
    MEM32(esp + 8) = ecx;
    ecx = MEM32(eax + 0xC);
    MEM32(esp + 0x20) = edx;
    edx = MEM32(eax + 4);
    MEM32(esp + 0xC) = ecx;
    ecx = MEM32(eax + 0x10);
    MEM32(esp + 4) = edx;
    edx = MEM32(eax);
    MEM32(esp + 0x10) = ecx;
    ecx = MEM32(eax + 0x18);
    MEM32(esp) = edx;
    edx = MEM32(eax + 0x1C);
    eax = MEM32(eax + 0x14);
    MEM32(esp + 0x18) = ecx;
    ecx = esp;
    PUSH32(esp, ecx);
    MEM32(esp + 0x20) = edx;
    MEM32(esp + 0x18) = eax;
    PUSH32(esp, 0x002B2DBDu); RECOMP_ABI_CALL(0x00327089u, sub_00327089); /* call 0x00327089 */

loc_002B2DBD: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002B2DD0
 * Original: 0x002B2DD0 - 0x002B2DDB (11 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B2DD0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B2DD0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x002B2DD7u); RECOMP_ABI_CALL(0x003270A3u, sub_003270A3); /* call 0x003270A3 */

loc_002B2DD7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002B2DE0
 * Original: 0x002B2DE0 - 0x002B2E47 (103 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B2DE0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B2DE0: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x2C);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002B2DEFu); RECOMP_ABI_CALL(0x003270DBu, sub_003270DB); /* call 0x003270DB */

loc_002B2DEF: ;
    ecx = MEM32(eax + 8);
    edx = MEM32(eax + 0x20);
    MEM32(esp + 0x14) = ecx;
    ecx = MEM32(eax + 0xC);
    MEM32(esp + 0x2C) = edx;
    edx = MEM32(eax + 4);
    MEM32(esp + 0x18) = ecx;
    ecx = MEM32(eax + 0x10);
    MEM32(esp + 0x10) = edx;
    edx = MEM32(eax);
    MEM32(esp + 0x1C) = ecx;
    ecx = MEM32(eax + 0x18);
    MEM32(esp + 0xC) = edx;
    edx = MEM32(eax + 0x1C);
    eax = MEM32(eax + 0x14);
    MEM32(esp + 0x20) = eax;
    eax = MEM32(esp + 0x34);
    MEM32(esp + 0x24) = ecx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 9;
    esi = esp + 8;
    edi = eax;
    MEM32(esp + 0x24) = edx;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002B2E50
 * Original: 0x002B2E50 - 0x002B2E57 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B2E50(void)
{

loc_002B2E50: ;
    MEM32(ecx) = 0x4AE714;
    esp += 4; return; /* ret */

}

/**
 * sub_002B2E60
 * Original: 0x002B2E60 - 0x002B2E67 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B2E60(void)
{

loc_002B2E60: ;
    MEM32(ecx) = 0x4AE714;
    esp += 4; return; /* ret */

}

/**
 * sub_002B2E70
 * Original: 0x002B2E70 - 0x002B2E89 (25 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B2E70(void)
{

loc_002B2E70: ;
    ecx = MEM32(0x62EBAC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, 0x11);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x002B2E83u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002B2E80u); } /* indirect call */
    }

loc_002B2E83: ;
    MEM16(eax + 4) = LO16(esi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002B2E90
 * Original: 0x002B2E90 - 0x002B2EAA (26 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B2E90(void)
{

loc_002B2E90: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(0x62EBAC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = ZX16(MEM16(eax + 4));
    PUSH32(esp, 0x11);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x002B2EA8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002B2EA5u); } /* indirect call */
    }

loc_002B2EA8: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002B2EB0
 * Original: 0x002B2EB0 - 0x002B2EBF (15 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B2EB0(void)
{

loc_002B2EB0: ;
    eax = ecx;
    MEM16(eax + 6) = 1;
    MEM32(eax) = 0x4C3184;
    esp += 4; return; /* ret */

}

/**
 * sub_002B2EC0
 * Original: 0x002B2EC0 - 0x002B2EE8 (40 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B2EC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B2EC0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x002B2EC8u); RECOMP_ABI_CALL(0x002B2E50u, sub_002B2E50); /* call 0x002B2E50 */

loc_002B2EC8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002B2EE2; /* je: equal / zero */

loc_002B2ECF: ;
    edx = ZX16(MEM16(esi + 4));
    ecx = MEM32(0x62EBAC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x11);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x002B2EE2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002B2EDFu); } /* indirect call */
    }

loc_002B2EE2: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002B2EF0
 * Original: 0x002B2EF0 - 0x002B2F13 (35 bytes, 9 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B2EF0(void)
{

loc_002B2EF0: ;
    edx = MEM32(esp + 8);
    eax = ecx;
    ecx = MEM32(esp + 4);
    MEM16(eax + 6) = 1;
    MEM32(eax) = 0x4C3188;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = edx;
    MEM8(eax + 0x10) = 0;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002B2F20
 * Original: 0x002B2F20 - 0x002B2F48 (40 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B2F20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B2F20: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x002B2F28u); RECOMP_ABI_CALL(0x002B2E60u, sub_002B2E60); /* call 0x002B2E60 */

loc_002B2F28: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002B2F42; /* je: equal / zero */

loc_002B2F2F: ;
    edx = ZX16(MEM16(esi + 4));
    ecx = MEM32(0x62EBAC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x11);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x002B2F42u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002B2F3Fu); } /* indirect call */
    }

loc_002B2F42: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002B2F50
 * Original: 0x002B2F50 - 0x002B2F70 (32 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B2F50(void)
{

loc_002B2F50: ;
    eax = ecx;
    ecx = eax + 0x20;
    MEM16(eax + 6) = 1;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = 0x4000;
    MEM8(eax + 0x10) = 0;
    MEM32(eax) = 0x4C318C;
    esp += 4; return; /* ret */

}

/**
 * sub_002B2F70
 * Original: 0x002B2F70 - 0x002B2F98 (40 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B2F70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B2F70: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x002B2F78u); RECOMP_ABI_CALL(0x002B2FA0u, sub_002B2FA0); /* call 0x002B2FA0 */

loc_002B2F78: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002B2F92; /* je: equal / zero */

loc_002B2F7F: ;
    edx = ZX16(MEM16(esi + 4));
    ecx = MEM32(0x62EBAC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x11);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x002B2F92u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002B2F8Fu); } /* indirect call */
    }

loc_002B2F92: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002B2FA0
 * Original: 0x002B2FA0 - 0x002B2FA7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B2FA0(void)
{

loc_002B2FA0: ;
    MEM32(ecx) = 0x4AE714;
    esp += 4; return; /* ret */

}

/**
 * sub_002B2FB0
 * Original: 0x002B2FB0 - 0x002B2FE6 (54 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B2FB0(void)
{

loc_002B2FB0: ;
    ecx = MEM32(0x62EBAC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x11);
    PUSH32(esp, 0x4020);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x002B2FC2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002B2FBFu); } /* indirect call */
    }

loc_002B2FC2: ;
    ecx = eax + 0x20;
    MEM16(eax + 4) = 0x4020;
    MEM16(eax + 6) = 1;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = 0x4000;
    MEM8(eax + 0x10) = 0;
    MEM32(eax) = 0x4C318C;
    esp += 4; return; /* ret */

}

/**
 * sub_002B2FF0
 * Original: 0x002B2FF0 - 0x002B2FFB (11 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B2FF0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_002B2FF0: ;
    fp_push((double)SMEM64(esp + 4)); /* fild */
    fp_push((double)SMEM64(esp + 0xC)); /* fild */
    fp_st1() = RECOMP_FP_PC(fp_st1() / fp_top()); fp_pop(); /* fdivp st(1) */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_002B3000
 * Original: 0x002B3000 - 0x002B3006 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B3000(void)
{

loc_002B3000: ;
    eax = MEM32(0x7207DC);
    esp += 4; return; /* ret */

}

/**
 * sub_002B3010
 * Original: 0x002B3010 - 0x002B301B (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B3010(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B3010: ;
    ecx = MEM32(0x7207DC);
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 4)); return; /* indirect tail jmp */

}

/**
 * sub_002B3020
 * Original: 0x002B3020 - 0x002B302B (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B3020(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B3020: ;
    ecx = MEM32(0x7207DC);
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 8)); return; /* indirect tail jmp */

}

/**
 * sub_002B3030
 * Original: 0x002B3030 - 0x002B3031 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B3030(void)
{

loc_002B3030: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002B3040
 * Original: 0x002B3040 - 0x002B3043 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B3040(void)
{

loc_002B3040: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002B3050
 * Original: 0x002B3050 - 0x002B3075 (37 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B3050(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B3050: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = ecx;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 0x18) = ecx;
    MEM32(eax + 0x1C) = ecx;
    MEM32(eax + 0x20) = ecx;
    MEM32(eax + 0x24) = ecx;
    MEM32(eax + 0x28) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_002B3080
 * Original: 0x002B3080 - 0x002B30D1 (81 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B3080(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B3080: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x3BCF7B);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    ecx = MEM32(0x62EBAC);
    eax = MEM32(ecx);
    PUSH32(esp, 0xE);
    PUSH32(esp, 0x34);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x002B30A5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002B30A2u); } /* indirect call */
    }

loc_002B30A5: ;
    MEM16(eax + 4) = 0x34;
    MEM32(esp) = eax;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    ecx = eax;
    MEM32(esp + 0x10) = 0;
    PUSH32(esp, 0x002B30C2u); RECOMP_ABI_CALL(0x002B2880u, sub_002B2880); /* call 0x002B2880 */

loc_002B30C2: ;
    ecx = MEM32(esp + 4);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002B30E0
 * Original: 0x002B30E0 - 0x002B30EF (15 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B30E0(void)
{

loc_002B30E0: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002B30EEu); RECOMP_ABI_CALL(0x002B26D0u, sub_002B26D0); /* call 0x002B26D0 */

loc_002B30EE: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002B30F0
 * Original: 0x002B30F0 - 0x002B30F1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B30F0(void)
{

loc_002B30F0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002B3100
 * Original: 0x002B3100 - 0x002B312B (43 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B3100(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B3100: ;
    eax = MEM32(esp + 4);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B312A; /* je: equal / zero */

loc_002B310A: ;
    MEM32(eax) = ecx;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 0x18) = ecx;
    MEM32(eax + 0x1C) = ecx;
    MEM32(eax + 0x20) = ecx;
    MEM32(eax + 0x24) = ecx;
    MEM32(eax + 0x28) = ecx;

loc_002B312A: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002B3130
 * Original: 0x002B3130 - 0x002B3131 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B3130(void)
{

loc_002B3130: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002B3140
 * Original: 0x002B3140 - 0x002B3146 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B3140(void)
{

loc_002B3140: ;
    eax = 0x7207A8;
    esp += 4; return; /* ret */

}

/**
 * sub_002B3150
 * Original: 0x002B3150 - 0x002B3157 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B3150(void)
{

loc_002B3150: ;
    MEM32(ecx) = 0x4AE714;
    esp += 4; return; /* ret */

}

/**
 * sub_002B3160
 * Original: 0x002B3160 - 0x002B3179 (25 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B3160(void)
{

loc_002B3160: ;
    ecx = MEM32(0x62EBAC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, 0x11);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x002B3173u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002B3170u); } /* indirect call */
    }

loc_002B3173: ;
    MEM16(eax + 4) = LO16(esi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002B3180
 * Original: 0x002B3180 - 0x002B319A (26 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B3180(void)
{

loc_002B3180: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(0x62EBAC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = ZX16(MEM16(eax + 4));
    PUSH32(esp, 0x11);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x002B3198u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002B3195u); } /* indirect call */
    }

loc_002B3198: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002B31A0
 * Original: 0x002B31A0 - 0x002B31A7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B31A0(void)
{

loc_002B31A0: ;
    MEM32(ecx) = 0x4AE714;
    esp += 4; return; /* ret */

}

/**
 * sub_002B31B0
 * Original: 0x002B31B0 - 0x002B31BF (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B31B0(void)
{

loc_002B31B0: ;
    eax = ecx;
    MEM16(eax + 6) = 1;
    MEM32(eax) = 0x4C32D8;
    esp += 4; return; /* ret */

}

/**
 * sub_002B31C0
 * Original: 0x002B31C0 - 0x002B31E8 (40 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B31C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B31C0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x002B31C8u); RECOMP_ABI_CALL(0x002B3150u, sub_002B3150); /* call 0x002B3150 */

loc_002B31C8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002B31E2; /* je: equal / zero */

loc_002B31CF: ;
    edx = ZX16(MEM16(esi + 4));
    ecx = MEM32(0x62EBAC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x11);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x002B31E2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002B31DFu); } /* indirect call */
    }

loc_002B31E2: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002B31F0
 * Original: 0x002B31F0 - 0x002B31FF (15 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B31F0(void)
{

loc_002B31F0: ;
    eax = ecx;
    MEM16(eax + 6) = 1;
    MEM32(eax) = 0x4C32DC;
    esp += 4; return; /* ret */

}

/**
 * sub_002B3200
 * Original: 0x002B3200 - 0x002B3228 (40 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B3200(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B3200: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x002B3208u); RECOMP_ABI_CALL(0x002B31A0u, sub_002B31A0); /* call 0x002B31A0 */

loc_002B3208: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002B3222; /* je: equal / zero */

loc_002B320F: ;
    edx = ZX16(MEM16(esi + 4));
    ecx = MEM32(0x62EBAC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x11);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x002B3222u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002B321Fu); } /* indirect call */
    }

loc_002B3222: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002B3230
 * Original: 0x002B3230 - 0x002B323F (15 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B3230(void)
{

loc_002B3230: ;
    eax = ecx;
    MEM16(eax + 6) = 1;
    MEM32(eax) = 0x4C32E8;
    esp += 4; return; /* ret */

}

/**
 * sub_002B3240
 * Original: 0x002B3240 - 0x002B325D (29 bytes, 12 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B3240(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B3240: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    POP32(esp, ebx);
    { uint64_t _tsc = xbox_ReadTimeStampCounter();
      eax = (uint32_t)_tsc; edx = (uint32_t)(_tsc >> 32); }  /* rdtsc */
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = edx;
    eax = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002B3260
 * Original: 0x002B3260 - 0x002B33D4 (372 bytes, 109 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002B3260(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
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

loc_002B3260: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _cf = 0; /* logical op clears CF */
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x48));
    esp = esp - 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x7207E0);
    edx = MEM32(0x7207E4);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebx = ecx;
    ecx = eax;
    _cf = 0; /* logical op clears CF */
    ecx = ecx | edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if ((_fa != 0)) goto loc_002B33CC; /* jne: not equal / not zero */

loc_002B3284: ;
    fp_push(MEMD(0x4C32F8)); /* fld double */
    MEM32(esp + 0x14) = 0xA;
    MEMD(esp + 0x18) = fp_top(); fp_pop(); /* fstp */

loc_002B3296: ;
    edx = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x002B329Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002B329Au); } /* indirect call */
    }

loc_002B329D: ;
    ebp = eax;
    eax = esp + 0x38;
    PUSH32(esp, eax);
    MEM32(esp + 0x58) = edx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002B32ADu); RECOMP_ABI_CALL(0x000F47BAu, sub_000F47BA); /* call 0x000F47BA */

loc_002B32AD: ;
    MEM32(esp + 0x10) = 1;
    eax = 0x1388;
    /* nop */

loc_002B32C0: ;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esp + 0x10);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)edx);
    _fb = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(MEM32(esp + 0x10))) >> 32) & 1);
    ecx = ecx + MEM32(esp + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x10) = ecx;
    if ((_fa != 0)) goto loc_002B32C0; /* jne: not equal / not zero */

loc_002B32D6: ;
    eax = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x002B32DDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002B32DAu); } /* indirect call */
    }

loc_002B32DD: ;
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    esi = eax;
    edi = edx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002B32EBu); RECOMP_ABI_CALL(0x000F47BAu, sub_000F47BA); /* call 0x000F47BA */

loc_002B32EB: ;
    PUSH32(esp, 0x7207E0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002B32F5u); RECOMP_ABI_CALL(0x000F47CBu, sub_000F47CB); /* call 0x000F47CB */

loc_002B32F5: ;
    ecx = MEM32(esp + 0x30);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esi) < (uint32_t)(ebp));
    esi = esi - ebp;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    { uint64_t _t = (uint64_t)(edi) - (uint64_t)(MEM32(esp + 0x54)) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); edi = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    ebp = MEM32(esp + 0x38);
    eax = edi;
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x80000000u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    edi = edi & 0x7FFFFFFF;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esp + 0x2C) = eax;
    eax = MEM32(esp + 0x34);
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(ebp));
    ecx = ecx - ebp;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x24) = edi;
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(MEM32(esp + 0x3C)) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    MEM32(esp + 0x20) = esi;
    fp_push((double)SMEM64(esp + 0x20)); /* fild */
    MEM32(esp + 0x28) = edx;
    fp_push((double)SMEM64(esp + 0x28)); /* fild */
    MEM32(esp + 0x40) = ecx;
    ecx = eax;
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    fp_top() = -fp_top(); /* fchs */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0x80000000u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEM32(esp + 0x44) = eax;
    fp_push((double)SMEM64(esp + 0x40)); /* fild */
    MEM32(esp + 0x4C) = ecx;
    MEM32(esp + 0x48) = edx;
    fp_push((double)SMEM64(esp + 0x48)); /* fild */
    fp_top() = -fp_top(); /* fchs */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_st1() = RECOMP_FP_PC(fp_st1() / fp_top()); fp_pop(); /* fdivp st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMD(esp + 0x18)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom qword ptr [esp + 0x18] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_002B3374; /* jp: parity */

loc_002B336E: ;
    MEMD(esp + 0x18) = fp_top(); fp_pop(); /* fstp */
    goto loc_002B3376;

loc_002B3374: ;
    fp_pop(); /* fstp st(0) */

loc_002B3376: ;
    MEM32(esp + 0x14) = MEM32(esp + 0x14) - 1;
    _fa = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_002B3296; /* jne: not equal / not zero */

loc_002B3380: ;
    eax = MEM32(0x7207E4);
    edx = MEM32(0x7207E0);
    ecx = eax;
    MEM32(esp + 0x48) = edx;
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esp + 0x4C) = eax;
    fp_push((double)SMEM64(esp + 0x48)); /* fild */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0x80000000u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esp + 0x4C) = ecx;
    MEM32(esp + 0x48) = 0;
    fp_push((double)SMEM64(esp + 0x48)); /* fild */
    fp_top() = -fp_top(); /* fchs */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMD(esp + 0x18)); /* fmul qword ptr [esp + 0x18] */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002B33C1u); RECOMP_ABI_CALL(0x000EB38Cu, sub_000EB38C); /* call 0x000EB38C */

loc_002B33C1: ;
    MEM32(0x7207E0) = eax;
    MEM32(0x7207E4) = edx;

loc_002B33CC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
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
 * sub_002B33E0
 * Original: 0x002B33E0 - 0x002B3408 (40 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B33E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B33E0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x002B33E8u); RECOMP_ABI_CALL(0x002B3410u, sub_002B3410); /* call 0x002B3410 */

loc_002B33E8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002B3402; /* je: equal / zero */

loc_002B33EF: ;
    edx = ZX16(MEM16(esi + 4));
    ecx = MEM32(0x62EBAC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x11);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x002B3402u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002B33FFu); } /* indirect call */
    }

loc_002B3402: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002B3410
 * Original: 0x002B3410 - 0x002B3417 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B3410(void)
{

loc_002B3410: ;
    MEM32(ecx) = 0x4AE714;
    esp += 4; return; /* ret */

}

/**
 * sub_002B3420
 * Original: 0x002B3420 - 0x002B3442 (34 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B3420(void)
{

loc_002B3420: ;
    ecx = MEM32(0x62EBAC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x11);
    PUSH32(esp, 8);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x002B342Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002B342Cu); } /* indirect call */
    }

loc_002B342F: ;
    MEM16(eax + 4) = 8;
    MEM16(eax + 6) = 1;
    MEM32(eax) = 0x4C32E8;
    esp += 4; return; /* ret */

}

/**
 * sub_002B3450
 * Original: 0x002B3450 - 0x002B3482 (50 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B3450(void)
{

loc_002B3450: ;
    PUSH32(esp, 0x002B3455u); RECOMP_ABI_CALL(0x002B4380u, sub_002B4380); /* call 0x002B4380 */

loc_002B3455: ;
    PUSH32(esp, 0x7207E8);
    MEM32(0x7207F0) = eax;
    PUSH32(esp, 0x002B3464u); RECOMP_ABI_CALL(0x000F47CBu, sub_000F47CB); /* call 0x000F47CB */

loc_002B3464: ;
    eax = MEM32(0x7207E8);
    edx = MEM32(0x7207EC);
    SET_LO8(ecx, 0xA);
    PUSH32(esp, 0x002B3476u); RECOMP_ABI_CALL(0x000EBFD0u, sub_000EBFD0); /* call 0x000EBFD0 */

loc_002B3476: ;
    MEM32(0x7207E8) = eax;
    MEM32(0x7207EC) = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_002B3490
 * Original: 0x002B3490 - 0x002B3491 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B3490(void)
{

loc_002B3490: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002B34A0
 * Original: 0x002B34A0 - 0x002B34BE (30 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B34A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B34A0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002B34ACu); RECOMP_ABI_CALL(0x000F47BAu, sub_000F47BA); /* call 0x000F47BA */

loc_002B34AC: ;
    eax = MEM32(esp);
    edx = MEM32(esp + 4);
    SET_LO8(ecx, 0xA);
    PUSH32(esp, 0x002B34BAu); RECOMP_ABI_CALL(0x000EBFD0u, sub_000EBFD0); /* call 0x000EBFD0 */

loc_002B34BA: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002B34C0
 * Original: 0x002B34C0 - 0x002B34D3 (19 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B34C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B34C0: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_002B34CF; /* jb: below (unsigned <) */

loc_002B34CC: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esp += 4; return; /* ret */

loc_002B34CF: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

}

/**
 * sub_002B34E0
 * Original: 0x002B34E0 - 0x002B3501 (33 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B34E0(void)
{

loc_002B34E0: ;
    eax = MEM32(esp + 4);
    ecx = 0xF4240;
    { uint64_t _r = (uint64_t)eax * (uint64_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    ecx = MEM32(0x7207EC);
    PUSH32(esp, ecx);
    ecx = MEM32(0x7207E8);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002B3500u); RECOMP_ABI_CALL(0x002A91F0u, sub_002A91F0); /* call 0x002A91F0 */

loc_002B3500: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002B3710
 * Original: 0x002B3710 - 0x002B3715 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B3710(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B3710: ;
    g_seh_ebp = ebp; sub_003C8DA0(); return; /* tail jmp 0x003C8DA0 */

}

/**
 * sub_002B3750
 * Original: 0x002B3750 - 0x002B3751 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B3750(void)
{

loc_002B3750: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002B3760
 * Original: 0x002B3760 - 0x002B3765 (5 bytes, 2 insns)
 * CC: cdecl, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_002B3760(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B3760: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002B3770
 * Original: 0x002B3770 - 0x002B3771 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B3770(void)
{

loc_002B3770: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002B3780
 * Original: 0x002B3780 - 0x002B37BE (62 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B3780(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B3780: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = 1;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002B3797: ;
    ebp = ebx;
    ebp = ebp & eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebp = ebp << LO8(ecx);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx | ebp;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebp = edi;
    ebp = ebp & eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebp = ebp << LO8(ecx);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax << 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = esi | ebp;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x10 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002B3797; /* jl: less (signed <) */

loc_002B37AF: ;
    POP32(esp, edi);
    eax = SX16(LO16(esi));
    POP32(esp, esi);
    ecx = SX16(LO16(edx));
    eax = eax << 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    POP32(esp, ebp);
    eax = eax | ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002B38E0
 * Original: 0x002B38E0 - 0x002B38FA (26 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B38E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B38E0: ;
    ecx = ZX8(MEM8(esp + 0xC));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_HI8(eax, MEM8(esp + 4));
    SET_LO8(eax, MEM8(esp + 8));
    eax = eax << 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax | ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x73580C) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_002B4380
 * Original: 0x002B4380 - 0x002B4386 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B4380(void)
{

loc_002B4380: ;
    eax = 0x4C3318;
    esp += 4; return; /* ret */

}

/**
 * sub_002B4390
 * Original: 0x002B4390 - 0x002B4403 (115 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002B4390(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B4390: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x4C3388);
    PUSH32(esp, 0xEE06C);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + -24) = esp;
    MEM32(ebp + -4) = 0;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x791340);
    { uint32_t _icall_target = MEM32(0x8B47B8); PUSH32(esp, 0x002B43C8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002B43C2u); } /* indirect call */
    }

loc_002B43C8: ;
    goto loc_002B43E0;

    eax = 1;
    esp += 4; return; /* ret */

    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002B43E0: ;
    MEM32(ebp + -4) = 0xFFFFFFFFu;
    eax = MEM32(0x73582C);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x73582C) = eax;
    ecx = MEM32(ebp + -16);
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_002B43CA
 * Original: 0x002B43CA - 0x002B4403 (57 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B43CA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B43CA: ;
    eax = 1;
    esp += 4; return; /* ret */

    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -4) = 0xFFFFFFFFu;
    eax = MEM32(0x73582C);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x73582C) = eax;
    ecx = MEM32(ebp + -16);
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_002B43D0
 * Original: 0x002B43D0 - 0x002B4403 (51 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B43D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B43D0: ;
    esp = MEM32(ebp + -24);
    PUSH32(esp, 0x4C334C);
    PUSH32(esp, 0x002B43DDu); RECOMP_ABI_CALL(0x002BB320u, sub_002BB320); /* call 0x002BB320 */

loc_002B43DD: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -4) = 0xFFFFFFFFu;
    eax = MEM32(0x73582C);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x73582C) = eax;
    ecx = MEM32(ebp + -16);
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_002B4410
 * Original: 0x002B4410 - 0x002B4483 (115 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002B4410(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B4410: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x4C33D0);
    PUSH32(esp, 0xEE06C);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + -24) = esp;
    eax = MEM32(0x73582C);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x73582C) = eax;
    MEM32(ebp + -4) = 0;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x791340);
    { uint32_t _icall_target = MEM32(0x8B47B4); PUSH32(esp, 0x002B4453u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002B444Du); } /* indirect call */
    }

loc_002B4453: ;
    goto loc_002B446B;

    eax = 1;
    esp += 4; return; /* ret */

    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002B446B: ;
    MEM32(ebp + -4) = 0xFFFFFFFFu;
    ecx = MEM32(ebp + -16);
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_002B4455
 * Original: 0x002B4455 - 0x002B4483 (46 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B4455(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B4455: ;
    eax = 1;
    esp += 4; return; /* ret */

    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -4) = 0xFFFFFFFFu;
    ecx = MEM32(ebp + -16);
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_002B445B
 * Original: 0x002B445B - 0x002B4483 (40 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B445B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B445B: ;
    esp = MEM32(ebp + -24);
    PUSH32(esp, 0x4C3394);
    PUSH32(esp, 0x002B4468u); RECOMP_ABI_CALL(0x002BB320u, sub_002BB320); /* call 0x002BB320 */

loc_002B4468: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -4) = 0xFFFFFFFFu;
    ecx = MEM32(ebp + -16);
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_002B4490
 * Original: 0x002B4490 - 0x002B44A5 (21 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B4490(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B4490: ;
    ecx = MEM32(esp + 4);
    eax = 1;
    { uint32_t _tmp = MEM32(ecx);
    MEM32(ecx) = eax;
    eax = _tmp; }
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    eax = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_002B4520
 * Original: 0x002B4520 - 0x002B4521 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B4520(void)
{

loc_002B4520: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002B4530
 * Original: 0x002B4530 - 0x002B4563 (51 bytes, 13 insns)
 * CC: cdecl, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_002B4530(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B4530: ;
    eax = MEM32(0x73584C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B4554; /* jne: not equal / not zero */

loc_002B4539: ;
    /* nop */

loc_002B4540: ;
    eax = MEM32(0x735834);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x735834) = eax;
    eax = MEM32(0x73584C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B4540; /* je: equal / zero */

loc_002B4554: ;
    MEM32(0x735850) = 1;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002B4570
 * Original: 0x002B4570 - 0x002B460E (158 bytes, 42 insns)
 * CC: cdecl, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_002B4570(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B4570: ;
    eax = MEM32(0x735864);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B45FF; /* jne: not equal / not zero */

loc_002B457D: ;
    PUSH32(esp, esi);
    esi = 1;

loc_002B4583: ;
    eax = MEM32(0x73583C);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x73583C) = eax;
    PUSH32(esp, 0x002B4593u); RECOMP_ABI_CALL(0x002BB890u, sub_002BB890); /* call 0x002BB890 */

loc_002B4593: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B459F; /* je: equal / zero */

loc_002B4597: ;
    _fa = (uint32_t)(MEM32(0x735830)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x735830), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B45EA; /* jne: not equal / not zero */

loc_002B459F: ;
    _fa = (uint32_t)(MEM32(0x735830)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x735830), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B45C4; /* jne: not equal / not zero */

loc_002B45A7: ;
    MEM32(0x735830) = 0;
    ecx = MEM32(0x735828);
    edx = MEM32(0x791328);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x002B45C4u); RECOMP_ABI_CALL(0x000F429Fu, sub_000F429F); /* call 0x000F429F */

loc_002B45C4: ;
    eax = MEM32(0x735844);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B45DE; /* je: equal / zero */

loc_002B45CD: ;
    eax = MEM32(0x735848);
    ecx = MEM32(0x735844);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = ecx; PUSH32(esp, 0x002B45DBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002B45D9u); } /* indirect call */
    }

loc_002B45DB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002B45DE: ;
    edx = MEM32(0x791328);
    PUSH32(esp, edx);
    PUSH32(esp, 0x002B45EAu); RECOMP_ABI_CALL(0x000F43CCu, sub_000F43CC); /* call 0x000F43CC */

loc_002B45EA: ;
    eax = MEM32(0x735864);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B4583; /* je: equal / zero */

loc_002B45F3: ;
    MEM32(0x735868) = esi;
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

loc_002B45FF: ;
    MEM32(0x735868) = 1;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002B4610
 * Original: 0x002B4610 - 0x002B461C (12 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B4610(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_002B4610: ;
    eax = MEM32(0x735810);
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    esp += 4; return; /* ret */

}

/**
 * sub_002B4620
 * Original: 0x002B4620 - 0x002B4625 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B4620(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B4620: ;
    g_seh_ebp = ebp; sub_002BBE20(); return; /* tail jmp 0x002BBE20 */

}

/**
 * sub_002B4630
 * Original: 0x002B4630 - 0x002B4635 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B4630(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B4630: ;
    g_seh_ebp = ebp; sub_002BB140(); return; /* tail jmp 0x002BB140 */

}

/**
 * sub_002B4640
 * Original: 0x002B4640 - 0x002B4645 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B4640(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B4640: ;
    g_seh_ebp = ebp; sub_002BBAC0(); return; /* tail jmp 0x002BBAC0 */

}

/**
 * sub_002B4650
 * Original: 0x002B4650 - 0x002B4656 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B4650(void)
{

loc_002B4650: ;
    eax = MEM32(0x73582C);
    esp += 4; return; /* ret */

}

/**
 * sub_002B4660
 * Original: 0x002B4660 - 0x002B4665 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B4660(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B4660: ;
    g_seh_ebp = ebp; sub_002BBFF0(); return; /* tail jmp 0x002BBFF0 */

}

/**
 * sub_002B4670
 * Original: 0x002B4670 - 0x002B4675 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B4670(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B4670: ;
    g_seh_ebp = ebp; sub_003C8EC0(); return; /* tail jmp 0x003C8EC0 */

}

/**
 * sub_002B4680
 * Original: 0x002B4680 - 0x002B4694 (20 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B4680(void)
{

loc_002B4680: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    MEM32(0x735844) = eax;
    MEM32(0x735848) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_002B4930
 * Original: 0x002B4930 - 0x002B4935 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B4930(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B4930: ;
    g_seh_ebp = ebp; sub_003C8EC0(); return; /* tail jmp 0x003C8EC0 */

}

/**
 * sub_002B4A00
 * Original: 0x002B4A00 - 0x002B4A74 (116 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002B4A00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B4A00: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x4C36F8);
    PUSH32(esp, 0xEE06C);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + -24) = esp;
    eax = MEM32(0x735810);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x735810) = eax;
    if ((_fa != 0)) goto loc_002B4A63; /* jne: not equal / not zero */

loc_002B4A33: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002B4A38u); RECOMP_ABI_CALL(0x002B46A0u, sub_002B46A0); /* call 0x002B46A0 */

loc_002B4A38: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002B4A3Du); RECOMP_ABI_CALL(0x002BB970u, sub_002BB970); /* call 0x002BB970 */

loc_002B4A3D: ;
    MEM32(ebp + -4) = 0;
    goto loc_002B4A5C;

    eax = 1;
    esp += 4; return; /* ret */

    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002B4A5C: ;
    MEM32(ebp + -4) = 0xFFFFFFFFu;

loc_002B4A63: ;
    ecx = MEM32(ebp + -16);
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_002B4A46
 * Original: 0x002B4A46 - 0x002B4A74 (46 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B4A46(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B4A46: ;
    eax = 1;
    esp += 4; return; /* ret */

    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -4) = 0xFFFFFFFFu;
    ecx = MEM32(ebp + -16);
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_002B4A4C
 * Original: 0x002B4A4C - 0x002B4A74 (40 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B4A4C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B4A4C: ;
    esp = MEM32(ebp + -24);
    PUSH32(esp, 0x4C36C0);
    PUSH32(esp, 0x002B4A59u); RECOMP_ABI_CALL(0x002BB320u, sub_002BB320); /* call 0x002BB320 */

loc_002B4A59: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -4) = 0xFFFFFFFFu;
    ecx = MEM32(ebp + -16);
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_002B4B70
 * Original: 0x002B4B70 - 0x002B4D19 (425 bytes, 110 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002B4B70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B4B70: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x4C3860);
    PUSH32(esp, 0xEE06C);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + -24) = esp;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(0x735810)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x735810), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B4CFD; /* jne: not equal / not zero */

loc_002B4BA4: ;
    MEM32(0x73584C) = esi;
    MEM32(0x735850) = esi;
    MEM32(0x735854) = esi;
    MEM32(0x735858) = esi;
    MEM32(0x735864) = esi;
    MEM32(0x735868) = esi;
    MEM32(0x735838) = esi;
    MEM32(ebp + -4) = esi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x791340);
    { uint32_t _icall_target = MEM32(0x8B47BC); PUSH32(esp, 0x002B4BDCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002B4BD6u); } /* indirect call */
    }

loc_002B4BDC: ;
    MEM32(ebp + -4) = 0xFFFFFFFFu;
    goto loc_002B4C04;

    eax = 1;
    esp += 4; return; /* ret */

    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -4) = 0xFFFFFFFFu;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002B4C04: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002B4C09u); RECOMP_ABI_CALL(0x002BB950u, sub_002BB950); /* call 0x002BB950 */

loc_002B4C09: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x2B4390);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002B4C14u); RECOMP_ABI_CALL(0x002BB6D0u, sub_002BB6D0); /* call 0x002BB6D0 */

loc_002B4C14: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x2B4410);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002B4C1Fu); RECOMP_ABI_CALL(0x002BB6F0u, sub_002BB6F0); /* call 0x002BB6F0 */

loc_002B4C1F: ;
    PUSH32(esp, 0x2B4490);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002B4C29u); RECOMP_ABI_CALL(0x002BB9A0u, sub_002BB9A0); /* call 0x002BB9A0 */

loc_002B4C29: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B4C68; /* jne: not equal / not zero */

loc_002B4C33: ;
    MEM32(0x735824) = esi;
    MEM32(0x735814) = 0xF;
    MEM32(0x735818) = 2;
    eax = 1;
    MEM32(0x73581C) = eax;
    MEM32(0x735820) = eax;
    MEM32(0x735828) = 0xFFFFFFFEu;
    goto loc_002B4C9D;

loc_002B4C68: ;
    ecx = MEM32(eax);
    MEM32(0x735814) = ecx;
    edx = MEM32(eax + 4);
    MEM32(0x735818) = edx;
    ecx = MEM32(eax + 8);
    MEM32(0x73581C) = ecx;
    edx = MEM32(eax + 0xC);
    MEM32(0x735820) = edx;
    ecx = MEM32(eax + 0x10);
    MEM32(0x735824) = ecx;
    edx = MEM32(eax + 0x14);
    MEM32(0x735828) = edx;

loc_002B4C9D: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002B4CA2u); RECOMP_ABI_CALL(0x002B4A80u, sub_002B4A80); /* call 0x002B4A80 */

loc_002B4CA2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002B4CAF; /* jl: less (signed <) */

loc_002B4CA6: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002B4CABu); RECOMP_ABI_CALL(0x002B4830u, sub_002B4830); /* call 0x002B4830 */

loc_002B4CAB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002B4CCA; /* jge: greater or equal (signed >=) */

loc_002B4CAF: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002B4CB4u); RECOMP_ABI_CALL(0x002B46A0u, sub_002B46A0); /* call 0x002B46A0 */

loc_002B4CB4: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002B4CB9u); RECOMP_ABI_CALL(0x002BB970u, sub_002BB970); /* call 0x002BB970 */

loc_002B4CB9: ;
    ecx = MEM32(ebp + -16);
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_002B4CCA: ;
    eax = MEM32(0x79135C);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002B4CD5u); RECOMP_ABI_CALL(0x000F43F2u, sub_000F43F2); /* call 0x000F43F2 */

loc_002B4CD5: ;
    ecx = MEM32(0x791370);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002B4CE1u); RECOMP_ABI_CALL(0x000F43F2u, sub_000F43F2); /* call 0x000F43F2 */

loc_002B4CE1: ;
    edx = MEM32(0x791328);
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002B4CEDu); RECOMP_ABI_CALL(0x000F43F2u, sub_000F43F2); /* call 0x000F43F2 */

loc_002B4CED: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x2B44B0);
    PUSH32(esp, 6);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002B4CFAu); RECOMP_ABI_CALL(0x002BBDC0u, sub_002BBDC0); /* call 0x002BBDC0 */

loc_002B4CFA: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002B4CFD: ;
    eax = MEM32(0x735810);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x735810) = eax;
    ecx = MEM32(ebp + -16);
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_002B4BE5
 * Original: 0x002B4BE5 - 0x002B4D19 (308 bytes, 82 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B4BE5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B4BE5: ;
    eax = 1;
    esp += 4; return; /* ret */

    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -4) = 0xFFFFFFFFu;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x002B4C09u); RECOMP_ABI_CALL(0x002BB950u, sub_002BB950); /* call 0x002BB950 */

loc_002B4C09: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x2B4390);
    PUSH32(esp, 0x002B4C14u); RECOMP_ABI_CALL(0x002BB6D0u, sub_002BB6D0); /* call 0x002BB6D0 */

loc_002B4C14: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x2B4410);
    PUSH32(esp, 0x002B4C1Fu); RECOMP_ABI_CALL(0x002BB6F0u, sub_002BB6F0); /* call 0x002BB6F0 */

loc_002B4C1F: ;
    PUSH32(esp, 0x2B4490);
    PUSH32(esp, 0x002B4C29u); RECOMP_ABI_CALL(0x002BB9A0u, sub_002BB9A0); /* call 0x002BB9A0 */

loc_002B4C29: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B4C68; /* jne: not equal / not zero */

loc_002B4C33: ;
    MEM32(0x735824) = esi;
    MEM32(0x735814) = 0xF;
    MEM32(0x735818) = 2;
    eax = 1;
    MEM32(0x73581C) = eax;
    MEM32(0x735820) = eax;
    MEM32(0x735828) = 0xFFFFFFFEu;
    goto loc_002B4C9D;

loc_002B4C68: ;
    ecx = MEM32(eax);
    MEM32(0x735814) = ecx;
    edx = MEM32(eax + 4);
    MEM32(0x735818) = edx;
    ecx = MEM32(eax + 8);
    MEM32(0x73581C) = ecx;
    edx = MEM32(eax + 0xC);
    MEM32(0x735820) = edx;
    ecx = MEM32(eax + 0x10);
    MEM32(0x735824) = ecx;
    edx = MEM32(eax + 0x14);
    MEM32(0x735828) = edx;

loc_002B4C9D: ;
    PUSH32(esp, 0x002B4CA2u); RECOMP_ABI_CALL(0x002B4A80u, sub_002B4A80); /* call 0x002B4A80 */

loc_002B4CA2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002B4CAF; /* jl: less (signed <) */

loc_002B4CA6: ;
    PUSH32(esp, 0x002B4CABu); RECOMP_ABI_CALL(0x002B4830u, sub_002B4830); /* call 0x002B4830 */

loc_002B4CAB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002B4CCA; /* jge: greater or equal (signed >=) */

loc_002B4CAF: ;
    PUSH32(esp, 0x002B4CB4u); RECOMP_ABI_CALL(0x002B46A0u, sub_002B46A0); /* call 0x002B46A0 */

loc_002B4CB4: ;
    PUSH32(esp, 0x002B4CB9u); RECOMP_ABI_CALL(0x002BB970u, sub_002BB970); /* call 0x002BB970 */

loc_002B4CB9: ;
    ecx = MEM32(ebp + -16);
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_002B4CCA: ;
    eax = MEM32(0x79135C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002B4CD5u); RECOMP_ABI_CALL(0x000F43F2u, sub_000F43F2); /* call 0x000F43F2 */

loc_002B4CD5: ;
    ecx = MEM32(0x791370);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002B4CE1u); RECOMP_ABI_CALL(0x000F43F2u, sub_000F43F2); /* call 0x000F43F2 */

loc_002B4CE1: ;
    edx = MEM32(0x791328);
    PUSH32(esp, edx);
    PUSH32(esp, 0x002B4CEDu); RECOMP_ABI_CALL(0x000F43F2u, sub_000F43F2); /* call 0x000F43F2 */

loc_002B4CED: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x2B44B0);
    PUSH32(esp, 6);
    PUSH32(esp, 0x002B4CFAu); RECOMP_ABI_CALL(0x002BBDC0u, sub_002BBDC0); /* call 0x002BBDC0 */

loc_002B4CFA: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(0x735810);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x735810) = eax;
    ecx = MEM32(ebp + -16);
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_002B4BEB
 * Original: 0x002B4BEB - 0x002B4D19 (302 bytes, 80 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B4BEB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B4BEB: ;
    esp = MEM32(ebp + -24);
    PUSH32(esp, 0x4C3824);
    PUSH32(esp, 0x002B4BF8u); RECOMP_ABI_CALL(0x002BB320u, sub_002BB320); /* call 0x002BB320 */

loc_002B4BF8: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -4) = 0xFFFFFFFFu;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x002B4C09u); RECOMP_ABI_CALL(0x002BB950u, sub_002BB950); /* call 0x002BB950 */

loc_002B4C09: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x2B4390);
    PUSH32(esp, 0x002B4C14u); RECOMP_ABI_CALL(0x002BB6D0u, sub_002BB6D0); /* call 0x002BB6D0 */

loc_002B4C14: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x2B4410);
    PUSH32(esp, 0x002B4C1Fu); RECOMP_ABI_CALL(0x002BB6F0u, sub_002BB6F0); /* call 0x002BB6F0 */

loc_002B4C1F: ;
    PUSH32(esp, 0x2B4490);
    PUSH32(esp, 0x002B4C29u); RECOMP_ABI_CALL(0x002BB9A0u, sub_002BB9A0); /* call 0x002BB9A0 */

loc_002B4C29: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B4C68; /* jne: not equal / not zero */

loc_002B4C33: ;
    MEM32(0x735824) = esi;
    MEM32(0x735814) = 0xF;
    MEM32(0x735818) = 2;
    eax = 1;
    MEM32(0x73581C) = eax;
    MEM32(0x735820) = eax;
    MEM32(0x735828) = 0xFFFFFFFEu;
    goto loc_002B4C9D;

loc_002B4C68: ;
    ecx = MEM32(eax);
    MEM32(0x735814) = ecx;
    edx = MEM32(eax + 4);
    MEM32(0x735818) = edx;
    ecx = MEM32(eax + 8);
    MEM32(0x73581C) = ecx;
    edx = MEM32(eax + 0xC);
    MEM32(0x735820) = edx;
    ecx = MEM32(eax + 0x10);
    MEM32(0x735824) = ecx;
    edx = MEM32(eax + 0x14);
    MEM32(0x735828) = edx;

loc_002B4C9D: ;
    PUSH32(esp, 0x002B4CA2u); RECOMP_ABI_CALL(0x002B4A80u, sub_002B4A80); /* call 0x002B4A80 */

loc_002B4CA2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002B4CAF; /* jl: less (signed <) */

loc_002B4CA6: ;
    PUSH32(esp, 0x002B4CABu); RECOMP_ABI_CALL(0x002B4830u, sub_002B4830); /* call 0x002B4830 */

loc_002B4CAB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002B4CCA; /* jge: greater or equal (signed >=) */

loc_002B4CAF: ;
    PUSH32(esp, 0x002B4CB4u); RECOMP_ABI_CALL(0x002B46A0u, sub_002B46A0); /* call 0x002B46A0 */

loc_002B4CB4: ;
    PUSH32(esp, 0x002B4CB9u); RECOMP_ABI_CALL(0x002BB970u, sub_002BB970); /* call 0x002BB970 */

loc_002B4CB9: ;
    ecx = MEM32(ebp + -16);
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_002B4CCA: ;
    eax = MEM32(0x79135C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002B4CD5u); RECOMP_ABI_CALL(0x000F43F2u, sub_000F43F2); /* call 0x000F43F2 */

loc_002B4CD5: ;
    ecx = MEM32(0x791370);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002B4CE1u); RECOMP_ABI_CALL(0x000F43F2u, sub_000F43F2); /* call 0x000F43F2 */

loc_002B4CE1: ;
    edx = MEM32(0x791328);
    PUSH32(esp, edx);
    PUSH32(esp, 0x002B4CEDu); RECOMP_ABI_CALL(0x000F43F2u, sub_000F43F2); /* call 0x000F43F2 */

loc_002B4CED: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x2B44B0);
    PUSH32(esp, 6);
    PUSH32(esp, 0x002B4CFAu); RECOMP_ABI_CALL(0x002BBDC0u, sub_002BBDC0); /* call 0x002BBDC0 */

loc_002B4CFA: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(0x735810);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x735810) = eax;
    ecx = MEM32(ebp + -16);
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_002B4D20
 * Original: 0x002B4D20 - 0x002B4D26 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B4D20(void)
{

loc_002B4D20: ;
    eax = MEM32(0x51DDC8);
    esp += 4; return; /* ret */

}

/**
 * sub_002B4D30
 * Original: 0x002B4D30 - 0x002B4D3A (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B4D30(void)
{

loc_002B4D30: ;
    eax = MEM32(esp + 4);
    MEM32(0x51DDC8) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_002B4D40
 * Original: 0x002B4D40 - 0x002B4D48 (8 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B4D40(void)
{

loc_002B4D40: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002B4D46u); RECOMP_ABI_CALL(0x002BC0A0u, sub_002BC0A0); /* call 0x002BC0A0 */

loc_002B4D46: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002B4D50
 * Original: 0x002B4D50 - 0x002B4D55 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B4D50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B4D50: ;
    g_seh_ebp = ebp; sub_002BC0B0(); return; /* tail jmp 0x002BC0B0 */

}

/**
 * sub_002B4D60
 * Original: 0x002B4D60 - 0x002B4D6C (12 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B4D60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B4D60: ;
    eax = MEM32(0x735890);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B4D6B; /* je: equal / zero */

loc_002B4D69: ;
    g_seh_ebp = ebp; RECOMP_ITAIL(eax); return; /* indirect tail jmp */

loc_002B4D6B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002B4D70
 * Original: 0x002B4D70 - 0x002B4D7C (12 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B4D70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B4D70: ;
    eax = MEM32(0x735894);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B4D7B; /* je: equal / zero */

loc_002B4D79: ;
    g_seh_ebp = ebp; RECOMP_ITAIL(eax); return; /* indirect tail jmp */

loc_002B4D7B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002B4D80
 * Original: 0x002B4D80 - 0x002B4E1C (156 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B4D80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B4D80: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    SET_LO8(eax, MEM8(esi + 3));
    PUSH32(esp, edi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_002B4DAF; /* jle: less or equal (signed <=) */

loc_002B4D92: ;
    PUSH32(esp, ebp);
    ebp = esi + 0x18;

loc_002B4D96: ;
    eax = MEM32(ebp);
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 0x14); PUSH32(esp, 0x002B4D9Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002B4D9Cu); } /* indirect call */
    }

loc_002B4D9F: ;
    edx = (uint32_t)(int32_t)SMEM8(esi + 3);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 4;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002B4D96; /* jl: less (signed <) */

loc_002B4DAE: ;
    POP32(esp, ebp);

loc_002B4DAF: ;
    edi = MEM32(esp + 0x14);
    eax = MEM32(esi + 4);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002B4DBDu); RECOMP_ABI_CALL(0x002BC1A0u, sub_002BC1A0); /* call 0x002BC1A0 */

loc_002B4DBD: ;
    ecx = MEM32(esi + 4);
    PUSH32(esp, ecx);
    MEM32(esi + 0x14) = edi;
    PUSH32(esp, 0x002B4DC9u); RECOMP_ABI_CALL(0x002BC240u, sub_002BC240); /* call 0x002BC240 */

loc_002B4DC9: ;
    MEM8(esi + 1) = 1;
    MEM32(esi + 0x4C) = ebx;
    MEM8(esi + 0x71) = LO8(ebx);
    MEM32(esi + 0x8C) = 0x7FFFFFFF;
    MEM32(esi + 0x90) = 0xFFFFFFFFu;
    MEM32(esi + 0x9C) = ebx;
    MEM32(esi + 0xA4) = ebx;
    edx = MEM32(0x735984);
    MEM32(esi + 0xA0) = edx;
    MEM32(esi + 0xC0) = ebx;
    esi = MEM32(esi + 0x74);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B4E18; /* je: equal / zero */

loc_002B4E0F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002B4E15u); RECOMP_ABI_CALL(0x002BD310u, sub_002BD310); /* call 0x002BD310 */

loc_002B4E15: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002B4E18: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002B4E20
 * Original: 0x002B4E20 - 0x002B4EAF (143 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B4E20(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B4E20: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = (uint32_t)(int32_t)SMEM16(esi + 0x3C);
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x3E);
    edx = MEM32(esi + 8);
    eax = eax << 0xB;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    ecx = ecx << 0xB;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x002B4E3Eu); RECOMP_ABI_CALL(0x002BE230u, sub_002BE230); /* call 0x002BE230 */

loc_002B4E3E: ;
    eax = MEM32(0x51DDC8);
    ecx = MEM32(esi + 8);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002B4E4Du); RECOMP_ABI_CALL(0x002BDD10u, sub_002BDD10); /* call 0x002BDD10 */

loc_002B4E4D: ;
    edx = MEM32(esi + 8);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x002B4E5Au); RECOMP_ABI_CALL(0x002BDCF0u, sub_002BDCF0); /* call 0x002BDCF0 */

loc_002B4E5A: ;
    eax = MEM32(esi + 8);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002B4E65u); RECOMP_ABI_CALL(0x002BDBE0u, sub_002BDBE0); /* call 0x002BDBE0 */

loc_002B4E65: ;
    ecx = MEM32(esi + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002B4E6Eu); RECOMP_ABI_CALL(0x002BE680u, sub_002BE680); /* call 0x002BE680 */

loc_002B4E6E: ;
    edx = MEM32(esi + 8);
    PUSH32(esp, edx);
    PUSH32(esp, 0x002B4E77u); RECOMP_ABI_CALL(0x002BE8C0u, sub_002BE8C0); /* call 0x002BE8C0 */

loc_002B4E77: ;
    eax = MEM32(esp + 0x48);
    ecx = MEM32(esp + 0x44);
    edx = MEM32(esp + 0x40);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x40);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 8);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002B4E94u); RECOMP_ABI_CALL(0x002BE530u, sub_002BE530); /* call 0x002BE530 */

loc_002B4E94: ;
    edx = MEM32(esi + 8);
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    PUSH32(esp, 0x002B4EA0u); RECOMP_ABI_CALL(0x002BE5E0u, sub_002BE5E0); /* call 0x002BE5E0 */

loc_002B4EA0: ;
    eax = MEM32(esi + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x002B4EAAu); RECOMP_ABI_CALL(0x002B4D80u, sub_002B4D80); /* call 0x002B4D80 */

loc_002B4EAA: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002B4EB0
 * Original: 0x002B4EB0 - 0x002B4F1D (109 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B4EB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B4EB0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x002B4EB6u); RECOMP_ABI_CALL(0x002BEA50u, sub_002BEA50); /* call 0x002BEA50 */

loc_002B4EB6: ;
    eax = MEM32(esi + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002B4EBFu); RECOMP_ABI_CALL(0x002BEB00u, sub_002BEB00); /* call 0x002BEB00 */

loc_002B4EBF: ;
    ecx = MEM32(esi + 0xC);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002B4ECBu); RECOMP_ABI_CALL(0x002BEB10u, sub_002BEB10); /* call 0x002BEB10 */

loc_002B4ECB: ;
    edx = MEM32(esi + 0xC);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x002B4ED5u); RECOMP_ABI_CALL(0x002BEB20u, sub_002BEB20); /* call 0x002BEB20 */

loc_002B4ED5: ;
    eax = MEM32(esi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002B4EDEu); RECOMP_ABI_CALL(0x002BC280u, sub_002BC280); /* call 0x002BC280 */

loc_002B4EDE: ;
    SET_LO8(eax, MEM8(esi + 2));
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 2 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B4EFB; /* jne: not equal / not zero */

loc_002B4EE8: ;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B4EFB; /* je: equal / zero */

loc_002B4EEF: ;
    MEM32(esi + 0x14) = ebx;
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 0xC); PUSH32(esp, 0x002B4EF8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002B4EF5u); } /* indirect call */
    }

loc_002B4EF8: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002B4EFB: ;
    eax = MEM32(esi + 0x74);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B4F0B; /* je: equal / zero */

loc_002B4F02: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002B4F08u); RECOMP_ABI_CALL(0x002BD450u, sub_002BD450); /* call 0x002BD450 */

loc_002B4F08: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002B4F0B: ;
    MEM32(esi + 0x14) = ebx;
    MEM8(esi + 1) = LO8(ebx);
    MEM8(esi + 0xA8) = LO8(ebx);
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_002BEA60(); return; /* tail jmp 0x002BEA60 */

}

/**
 * sub_002B4FB0
 * Original: 0x002B4FB0 - 0x002B4FDA (42 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B4FB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B4FB0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B4FC5; /* jne: not equal / not zero */

loc_002B4FB5: ;
    MEM32(0x79131C) = 0x176A;
    MEM32(0x735880) = eax;
    esp += 4; return; /* ret */

loc_002B4FC5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B4FD4; /* jne: not equal / not zero */

loc_002B4FCA: ;
    MEM32(0x79131C) = 0x1388;

loc_002B4FD4: ;
    MEM32(0x735880) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_002B4FE0
 * Original: 0x002B4FE0 - 0x002B505B (123 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B4FE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B4FE0: ;
    SET_LO8(eax, MEM8(edi + 1));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 3 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B5040; /* je: equal / zero */

loc_002B4FE7: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 4 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B5040; /* je: equal / zero */

loc_002B4FEB: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 5 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B502B; /* jne: not equal / not zero */

loc_002B4FEF: ;
    eax = MEM32(edi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002B4FF8u); RECOMP_ABI_CALL(0x002BCB50u, sub_002BCB50); /* call 0x002BCB50 */

loc_002B4FF8: ;
    MEM32(esi) = eax;
    ecx = MEM32(edi + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002B5003u); RECOMP_ABI_CALL(0x002BCB00u, sub_002BCB00); /* call 0x002BCB00 */

loc_002B5003: ;
    MEM32(ebx) = eax;
    edx = MEM32(edi + 4);
    PUSH32(esp, edx);
    PUSH32(esp, 0x002B500Eu); RECOMP_ABI_CALL(0x002BCB20u, sub_002BCB20); /* call 0x002BCB20 */

loc_002B500E: ;
    ecx = eax;
    eax = 0x10;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esi));
    MEM32(esi) = eax;
    edx = MEM32(edi + 0x88);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = eax;
    esp += 4; return; /* ret */

loc_002B502B: ;
    MEM32(esi) = 0;
    MEM32(ebx) = 1;
    eax = MEM32(edi + 0x88);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(esi) = MEM32(esi) + eax;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_002B5040: ;
    ecx = MEM32(edi + 0xC);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002B504Bu); RECOMP_ABI_CALL(0x002BEB30u, sub_002BEB30); /* call 0x002BEB30 */

loc_002B504B: ;
    eax = MEM32(esi);
    edx = MEM32(edi + 0x88);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_002B5060
 * Original: 0x002B5060 - 0x002B5067 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B5060(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B5060: ;
    MEM32(0x73589C) = MEM32(0x73589C) + 1;
    _fa = (uint32_t)(MEM32(0x73589C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

}

/**
 * sub_002B5230
 * Original: 0x002B5230 - 0x002B525D (45 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B5230(void)
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

loc_002B5230: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = esp + 4;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x10);
    ecx = esp + 4;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002B5246u); RECOMP_ABI_CALL(0x002B5070u, sub_002B5070); /* call 0x002B5070 */

loc_002B5246: ;
    fp_push((double)SMEM32(esp + 8)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() / (double)SMEM32(esp + 0xC)); /* fidiv dword ptr [esp + 0xc] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x49778C)); /* fmul dword ptr [0x49778c] */
    PUSH32(esp, 0x002B5259u); RECOMP_ABI_CALL(0x000EB38Cu, sub_000EB38C); /* call 0x000EB38C */

loc_002B5259: ;
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
 * sub_002B5490
 * Original: 0x002B5490 - 0x002B54EC (92 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B5490(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B5490: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B54A1; /* jne: not equal / not zero */

loc_002B5494: ;
    MEM32(esp + 4) = 0x4C3AA8;
    g_seh_ebp = ebp; sub_002BF770(); return; /* tail jmp 0x002BF770 */

loc_002B54A1: ;
    SET_LO16(eax, MEM16(esp + 4));
    MEM16(esi + 0x40) = LO16(eax);
    _fa = (uint32_t)(MEM8(esi + 0xA9)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0xA9), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B54D6; /* jne: not equal / not zero */

loc_002B54B3: ;
    ecx = MEM32(esi + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002B54BCu); RECOMP_ABI_CALL(0x002BCBF0u, sub_002BCBF0); /* call 0x002BCBF0 */

loc_002B54BC: ;
    edx = (uint32_t)(int32_t)SMEM16(esi + 0x40);
    eax = SX16(LO16(eax));
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esi + 0xC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002B54D2u); RECOMP_ABI_CALL(0x002BEBB0u, sub_002BEBB0); /* call 0x002BEBB0 */

loc_002B54D2: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_002B54D6: ;
    edx = (uint32_t)(int32_t)SMEM16(esi + 0x40);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esi + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002B54E8u); RECOMP_ABI_CALL(0x002BEBB0u, sub_002BEBB0); /* call 0x002BEBB0 */

loc_002B54E8: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002B5510
 * Original: 0x002B5510 - 0x002B5520 (16 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B5510(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B5510: ;
    ecx = MEM32(eax + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002B5519u); RECOMP_ABI_CALL(0x002BCBF0u, sub_002BCBF0); /* call 0x002BCBF0 */

loc_002B5519: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = SX16(LO16(eax));
    esp += 4; return; /* ret */

}

/**
 * sub_002B5540
 * Original: 0x002B5540 - 0x002B554D (13 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B5540(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B5540: ;
    ecx = MEM32(eax + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002B5549u); RECOMP_ABI_CALL(0x002BCC70u, sub_002BCC70); /* call 0x002BCC70 */

loc_002B5549: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002B5550
 * Original: 0x002B5550 - 0x002B5587 (55 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B5550(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_002B5550: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0xC));
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = esp + 8;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x14);
    ecx = esp + 4;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x735870);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, 0x800);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002B5576u); RECOMP_ABI_CALL(0x002BFE20u, sub_002BFE20); /* call 0x002BFE20 */

loc_002B5576: ;
    eax = MEM32(esp + 0x1C);
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x735870;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x24)) >> 32) & 1);
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002B5590
 * Original: 0x002B5590 - 0x002B559B (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B5590(void)
{

loc_002B5590: ;
    SET_LO8(eax, MEM8(esp + 4));
    MEM8(ecx + 0xA9) = LO8(eax);
    esp += 4; return; /* ret */

}

/**
 * sub_002B55A0
 * Original: 0x002B55A0 - 0x002B55A8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B55A0(void)
{

loc_002B55A0: ;
    eax = (uint32_t)(int32_t)SMEM8(eax + 0xA9);
    esp += 4; return; /* ret */

}

/**
 * sub_002B55B0
 * Original: 0x002B55B0 - 0x002B55BB (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B55B0(void)
{

loc_002B55B0: ;
    MEM32(0x735888) = eax;
    MEM32(0x73588C) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_002B56F0
 * Original: 0x002B56F0 - 0x002B56F9 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B56F0(void)
{

loc_002B56F0: ;
    eax = MEM32(esp + 4);
    eax = (uint32_t)(int32_t)SMEM16(eax + 0x3E);
    esp += 4; return; /* ret */

}

/**
 * sub_002B5840
 * Original: 0x002B5840 - 0x002B5848 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B5840(void)
{

loc_002B5840: ;
    SET_LO8(eax, MEM8(esp + 4));
    MEM8(ecx + 0x6D) = LO8(eax);
    esp += 4; return; /* ret */

}

/**
 * sub_002B5880
 * Original: 0x002B5880 - 0x002B58EE (110 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B5880(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B5880: ;
    PUSH32(esp, 0x002B5885u); RECOMP_ABI_CALL(0x002BEA50u, sub_002BEA50); /* call 0x002BEA50 */

loc_002B5885: ;
    eax = MEM32(0x735884);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B5893; /* je: equal / zero */

loc_002B588E: ;
    g_seh_ebp = ebp; sub_002BEA60(); return; /* tail jmp 0x002BEA60 */

loc_002B5893: ;
    PUSH32(esp, esi);
    MEM32(0x735884) = 1;
    PUSH32(esp, 0x002B58A3u); RECOMP_ABI_CALL(0x002BEA60u, sub_002BEA60); /* call 0x002BEA60 */

loc_002B58A3: ;
    PUSH32(esp, 0x002B58A8u); RECOMP_ABI_CALL(0x002BD170u, sub_002BD170); /* call 0x002BD170 */

loc_002B58A8: ;
    MEM32(0x735884) = 2;
    esi = 0x790440;

loc_002B58B7: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B58C5; /* jne: not equal / not zero */

loc_002B58BC: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002B58C2u); RECOMP_ABI_CALL(0x002C0E60u, sub_002C0E60); /* call 0x002C0E60 */

loc_002B58C2: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002B58C5: ;
    _fb = (uint32_t)(0xC4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xC4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x791080) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x791080 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002B58B7; /* jl: less (signed <) */

loc_002B58D3: ;
    MEM32(0x735884) = 3;
    PUSH32(esp, 0x002B58E2u); RECOMP_ABI_CALL(0x002BEB70u, sub_002BEB70); /* call 0x002BEB70 */

loc_002B58E2: ;
    MEM32(0x735884) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002B58F0
 * Original: 0x002B58F0 - 0x002B58F5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B58F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B58F0: ;
    g_seh_ebp = ebp; sub_002B5880(); return; /* tail jmp 0x002B5880 */

}

/**
 * sub_002B5970
 * Original: 0x002B5970 - 0x002B5A18 (168 bytes, 62 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B5970(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B5970: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B5981; /* jne: not equal / not zero */

loc_002B5974: ;
    MEM32(esp + 4) = 0x4C3D34;
    g_seh_ebp = ebp; sub_002BF770(); return; /* tail jmp 0x002BF770 */

loc_002B5981: ;
    SET_LO8(eax, MEM8(esp + 4));
    MEM8(edi + 0x6C) = LO8(eax);
    eax = MEM32(edi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_002B5994; /* jne: not equal / not zero */

loc_002B5990: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_002B59A1;

loc_002B5994: ;
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 0x24); PUSH32(esp, 0x002B599Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002B5999u); } /* indirect call */
    }

loc_002B599C: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = eax;

loc_002B59A1: ;
    edx = MEM32(edi + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x002B59ABu); RECOMP_ABI_CALL(0x002BC960u, sub_002BC960); /* call 0x002BC960 */

loc_002B59AB: ;
    ebx = eax;
    eax = MEM32(edi + 4);
    PUSH32(esp, eax);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + esi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x002B59B8u); RECOMP_ABI_CALL(0x002BCBA0u, sub_002BCBA0); /* call 0x002BCBA0 */

loc_002B59B8: ;
    ecx = MEM32(edi + 4);
    _fb = (uint32_t)(0x7FF) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x7FF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 0x7FF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = eax;
    esi = (uint32_t)(((int32_t)(int32_t)(esi)) >> ((0xB) & 31u));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    PUSH32(esp, ecx);
    esi = esi << 0xB;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, 0x002B59D7u); RECOMP_ABI_CALL(0x002BCBD0u, sub_002BCBD0); /* call 0x002BCBD0 */

loc_002B59D7: ;
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
    eax = eax << 0xB;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = eax;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_002B5A03; /* jg: greater (signed >) */

loc_002B59F6: ;
    POP32(esp, ebx);
    MEM32(edi + 0xC0) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_002B5A03: ;
    eax = ebx;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    POP32(esp, ebx);
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + 0xC0) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002B5A40
 * Original: 0x002B5A40 - 0x002B5A59 (25 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B5A40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B5A40: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B5A51; /* jne: not equal / not zero */

loc_002B5A44: ;
    MEM32(esp + 4) = 0x4C3D8C;
    g_seh_ebp = ebp; sub_002BF770(); return; /* tail jmp 0x002BF770 */

loc_002B5A51: ;
    SET_LO8(ecx, MEM8(esp + 4));
    MEM8(eax + 0x70) = LO8(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002B5B60
 * Original: 0x002B5B60 - 0x002B5B68 (8 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B5B60(void)
{

loc_002B5B60: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002B5B66u); RECOMP_ABI_CALL(0x002BEC80u, sub_002BEC80); /* call 0x002BEC80 */

loc_002B5B66: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002B5B70
 * Original: 0x002B5B70 - 0x002B5B75 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B5B70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B5B70: ;
    g_seh_ebp = ebp; sub_002BEC90(); return; /* tail jmp 0x002BEC90 */

}

/**
 * sub_002B5B80
 * Original: 0x002B5B80 - 0x002B5C01 (129 bytes, 57 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B5B80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B5B80: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(esi + 4);
    ebx = eax;
    eax = MEM32(esi + 0xC);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002B5B97u); RECOMP_ABI_CALL(0x002C22B0u, sub_002C22B0); /* call 0x002C22B0 */

loc_002B5B97: ;
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002B5BA2u); RECOMP_ABI_CALL(0x002C1B70u, sub_002C1B70); /* call 0x002C1B70 */

loc_002B5BA2: ;
    PUSH32(esp, edi);
    ebx = eax;
    PUSH32(esp, 0x002B5BAAu); RECOMP_ABI_CALL(0x002BC190u, sub_002BC190); /* call 0x002BC190 */

loc_002B5BAA: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B5BFD; /* jne: not equal / not zero */

loc_002B5BB2: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x002B5BB8u); RECOMP_ABI_CALL(0x002BCB70u, sub_002BCB70); /* call 0x002BCB70 */

loc_002B5BB8: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    eax = ebx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    if (CMP_LE(_fas, _fbs)) goto loc_002B5BCD; /* jle: less or equal (signed <=) */

loc_002B5BC2: ;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)MEM32(esi + 0x38)));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)MEM32(esi + 0x38))); }
    edx = eax + eax * 2;
    MEM32(esi + 0x48) = edx;
    goto loc_002B5BDB;

loc_002B5BCD: ;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)MEM32(esi + 0x38)));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)MEM32(esi + 0x38))); }
    eax = eax + eax * 2;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    MEM32(esi + 0x48) = eax;

loc_002B5BDB: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x002B5BE1u); RECOMP_ABI_CALL(0x002BCB30u, sub_002BCB30); /* call 0x002BCB30 */

loc_002B5BE1: ;
    ecx = eax;
    eax = MEM32(esi + 0x48);
    ecx = ecx << 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    MEM32(esi + 0x48) = eax;
    PUSH32(esp, 0x002B5BFAu); RECOMP_ABI_CALL(0x002BC1F0u, sub_002BC1F0); /* call 0x002BC1F0 */

loc_002B5BFA: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002B5BFD: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002B5C10
 * Original: 0x002B5C10 - 0x002B5C1F (15 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B5C10(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B5C10: ;
    PUSH32(esp, eax);
    eax = MEM32(edx + 0xC);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002B5C1Bu); RECOMP_ABI_CALL(0x002C1A60u, sub_002C1A60); /* call 0x002C1A60 */

loc_002B5C1B: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002B5C50
 * Original: 0x002B5C50 - 0x002B5C54 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B5C50(void)
{

loc_002B5C50: ;
    eax = MEM32(eax + 8);
    esp += 4; return; /* ret */

}

/**
 * sub_002B5C60
 * Original: 0x002B5C60 - 0x002B5C6B (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B5C60(void)
{

loc_002B5C60: ;
    ecx = MEM32(eax + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002B5C69u); RECOMP_ABI_CALL(0x002BC220u, sub_002BC220); /* call 0x002BC220 */

loc_002B5C69: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002B5C70
 * Original: 0x002B5C70 - 0x002B5C71 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B5C70(void)
{

loc_002B5C70: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002B5C80
 * Original: 0x002B5C80 - 0x002B5C83 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_002B5C80(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B5C80: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_002B5C90
 * Original: 0x002B5C90 - 0x002B5C91 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B5C90(void)
{

loc_002B5C90: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002B5CA0
 * Original: 0x002B5CA0 - 0x002B5CA1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B5CA0(void)
{

loc_002B5CA0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002B5CB0
 * Original: 0x002B5CB0 - 0x002B5CB1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B5CB0(void)
{

loc_002B5CB0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002B5CC0
 * Original: 0x002B5CC0 - 0x002B5CC1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B5CC0(void)
{

loc_002B5CC0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002B5CD0
 * Original: 0x002B5CD0 - 0x002B5CD5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B5CD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B5CD0: ;
    g_seh_ebp = ebp; sub_002BF750(); return; /* tail jmp 0x002BF750 */

}

/**
 * sub_002B5CE0
 * Original: 0x002B5CE0 - 0x002B5CE7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B5CE0(void)
{

loc_002B5CE0: ;
    eax = MEM32(eax + 0x88);
    esp += 4; return; /* ret */

}

/**
 * sub_002B5CF0
 * Original: 0x002B5CF0 - 0x002B5CF7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B5CF0(void)
{

loc_002B5CF0: ;
    MEM32(ecx + 0x88) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_002B5D00
 * Original: 0x002B5D00 - 0x002B5D0E (14 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B5D00(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B5D00: ;
    edx = MEM32(ecx + 4);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x002B5D0Au); RECOMP_ABI_CALL(0x002BCA20u, sub_002BCA20); /* call 0x002BCA20 */

loc_002B5D0A: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002B5D10
 * Original: 0x002B5D10 - 0x002B5D28 (24 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B5D10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B5D10: ;
    MEM8(eax + 0x98) = LO8(ecx);
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B5D27; /* je: equal / zero */

loc_002B5D1D: ;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002B5D24u); RECOMP_ABI_CALL(0x002BC9B0u, sub_002BC9B0); /* call 0x002BC9B0 */

loc_002B5D24: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002B5D27: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002B5D30
 * Original: 0x002B5D30 - 0x002B5D38 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B5D30(void)
{

loc_002B5D30: ;
    eax = (uint32_t)(int32_t)SMEM8(eax + 0x98);
    esp += 4; return; /* ret */

}

/**
 * sub_002B5D40
 * Original: 0x002B5D40 - 0x002B5D4F (15 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B5D40(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B5D40: ;
    PUSH32(esp, eax);
    eax = MEM32(edx + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002B5D4Bu); RECOMP_ABI_CALL(0x002BCA50u, sub_002BCA50); /* call 0x002BCA50 */

loc_002B5D4B: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002B5DE0
 * Original: 0x002B5DE0 - 0x002B5E4E (110 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B5DE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B5DE0: ;
    ecx = MEM32(esp + 8);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 2 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002B5E34; /* jl: less (signed <) */

loc_002B5DEC: ;
    eax = MEM32(esp + 0x18);
    SET_LO16(edx, ZX8(MEM8(eax + 1)));
    SET_HI8(edx, MEM8(eax));
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(0x8000) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), 0x8000 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B5E34; /* jne: not equal / not zero */

loc_002B5DFE: ;
    edx = esp + 8;
    PUSH32(esp, edx);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    edx = esp + 0x28;
    PUSH32(esp, edx);
    edx = esp + 0x11;
    PUSH32(esp, edx);
    edx = esp + 0x16;
    PUSH32(esp, edx);
    edx = esp + 0x1B;
    PUSH32(esp, edx);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002B5E2Du); RECOMP_ABI_CALL(0x002BFA10u, sub_002BFA10); /* call 0x002BFA10 */

loc_002B5E2D: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002B5E3A; /* jge: greater or equal (signed >=) */

loc_002B5E34: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_002B5E3A: ;
    eax = (uint32_t)(int32_t)SMEM16(esp + 4);
    ecx = MEM32(esp + 0x20);
    MEM32(ecx) = eax;
    eax = 1;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002B5E50
 * Original: 0x002B5E50 - 0x002B5E7A (42 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B5E50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B5E50: ;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 2 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002B5E6B; /* jl: less (signed <) */

loc_002B5E59: ;
    eax = MEM32(esp + 4);
    SET_LO16(edx, ZX8(MEM8(eax + 1)));
    SET_HI8(edx, MEM8(eax));
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(0x8001) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), 0x8001 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B5E6E; /* je: equal / zero */

loc_002B5E6B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_002B5E6E: ;
    eax = MEM32(esp + 0xC);
    MEM32(eax) = ecx;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_002B5E80
 * Original: 0x002B5E80 - 0x002B5F8E (270 bytes, 121 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B5E80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B5E80: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x14);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    ebx = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_002B5E96; /* jne: not equal / not zero */

loc_002B5E8E: ;
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_002B5E96: ;
    eax = MEM32(esp + 0x20);
    ecx = MEM32(esi);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    edx = edx & 0x1F;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = eax;
    ebx = ebx + ebx * 8;
    ebx = ebx << 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebp = (uint32_t)(((int32_t)(int32_t)(ebp)) >> ((5) & 31u));
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebp = (uint32_t)((int32_t)ebp * (int32_t)ebx);
    PUSH32(esp, edi);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(ecx + 0x18); PUSH32(esp, 0x002B5EBDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002B5EBAu); } /* indirect call */
    }

loc_002B5EBD: ;
    eax = MEM32(esp + 0x28);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ebx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ebx)); }
    edi = MEM32(esp + 0x24);
    eax = (uint32_t)((int32_t)eax * (int32_t)ebx);
    ecx = eax;
    edx = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(esp + 0x20) = eax;
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
    eax = esp + 0x2C;
    PUSH32(esp, eax);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    edi = edx;
    edx = ecx;
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x002B5EF6u); RECOMP_ABI_CALL(0x002C2860u, sub_002C2860); /* call 0x002C2860 */

loc_002B5EF6: ;
    eax = MEM32(esi);
    ecx = esp + 0x34;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x002B5F03u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002B5F00u); } /* indirect call */
    }

loc_002B5F03: ;
    edx = MEM32(esi);
    eax = esp + 0x48;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x002B5F10u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002B5F0Du); } /* indirect call */
    }

loc_002B5F10: ;
    ecx = MEM32(esi);
    edx = esp + 0x4C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebp = ebp - edi;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    MEM32(esp + 0x58) = edi;
    { uint32_t _icall_target = MEM32(ecx + 0x18); PUSH32(esp, 0x002B5F24u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002B5F21u); } /* indirect call */
    }

loc_002B5F24: ;
    eax = MEM32(esp + 0x60);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ebx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ebx)); }
    edi = MEM32(esp + 0x5C);
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = eax;
    ebp = (uint32_t)((int32_t)ebp * (int32_t)ebx);
    ecx = ebp;
    edx = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
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
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    edx = ecx;
    PUSH32(esp, ebp);
    PUSH32(esp, edx);
    PUSH32(esp, 0x002B5F5Cu); RECOMP_ABI_CALL(0x002C2860u, sub_002C2860); /* call 0x002C2860 */

loc_002B5F5C: ;
    eax = MEM32(esi);
    ecx = esp + 0x24;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x002B5F69u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002B5F66u); } /* indirect call */
    }

loc_002B5F69: ;
    edx = MEM32(esi);
    eax = esp + 0x38;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x002B5F76u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002B5F73u); } /* indirect call */
    }

loc_002B5F76: ;
    ecx = MEM32(esp + 0x38);
    eax = ecx + ebp;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ebx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ebx)); }
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, esi);
    POP32(esp, ebx);
    eax = eax << 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002B5F90
 * Original: 0x002B5F90 - 0x002B5F9D (13 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B5F90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B5F90: ;
    MEM32(esp + 4) = 0x4C3F00;
    g_seh_ebp = ebp; sub_002BF770(); return; /* tail jmp 0x002BF770 */

}

/**
 * sub_002B5FA0
 * Original: 0x002B5FA0 - 0x002B5FC3 (35 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B5FA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B5FA0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B5FB1; /* jne: not equal / not zero */

loc_002B5FA4: ;
    MEM32(esp + 4) = 0x4C3F3C;
    g_seh_ebp = ebp; sub_002BF770(); return; /* tail jmp 0x002BF770 */

loc_002B5FB1: ;
    ecx = MEM32(esp + 4);
    edx = MEM32(eax + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x002B5FBFu); RECOMP_ABI_CALL(0x002BC9D0u, sub_002BC9D0); /* call 0x002BC9D0 */

loc_002B5FBF: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002B5FD0
 * Original: 0x002B5FD0 - 0x002B5FD8 (8 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B5FD0(void)
{

loc_002B5FD0: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002B5FD6u); RECOMP_ABI_CALL(0x002BC9E0u, sub_002BC9E0); /* call 0x002BC9E0 */

loc_002B5FD6: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002B5FE0
 * Original: 0x002B5FE0 - 0x002B5FE4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B5FE0(void)
{

loc_002B5FE0: ;
    eax = MEM32(eax + 0xC);
    esp += 4; return; /* ret */

}

/**
 * sub_002B5FF0
 * Original: 0x002B5FF0 - 0x002B5FFE (14 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B5FF0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B5FF0: ;
    edx = MEM32(ecx + 4);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x002B5FFAu); RECOMP_ABI_CALL(0x002BCA10u, sub_002BCA10); /* call 0x002BCA10 */

loc_002B5FFA: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002B6000
 * Original: 0x002B6000 - 0x002B6017 (23 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B6000(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B6000: ;
    PUSH32(esp, 0x002B6005u); RECOMP_ABI_CALL(0x002BEA70u, sub_002BEA70); /* call 0x002BEA70 */

loc_002B6005: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002B600Fu); RECOMP_ABI_CALL(0x002BC0A0u, sub_002BC0A0); /* call 0x002BC0A0 */

loc_002B600F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_002BEA80(); return; /* tail jmp 0x002BEA80 */

}

/**
 * sub_002B6020
 * Original: 0x002B6020 - 0x002B6036 (22 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B6020(void)
{

loc_002B6020: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002B6026u); RECOMP_ABI_CALL(0x002BEA70u, sub_002BEA70); /* call 0x002BEA70 */

loc_002B6026: ;
    PUSH32(esp, 0x002B602Bu); RECOMP_ABI_CALL(0x002BC0B0u, sub_002BC0B0); /* call 0x002BC0B0 */

loc_002B602B: ;
    esi = eax;
    PUSH32(esp, 0x002B6032u); RECOMP_ABI_CALL(0x002BEA80u, sub_002BEA80); /* call 0x002BEA80 */

loc_002B6032: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002B6040
 * Original: 0x002B6040 - 0x002B61A8 (360 bytes, 133 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B6040(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B6040: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B605B; /* jne: not equal / not zero */

loc_002B604C: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    MEM32(esp + 4) = 0x4C3F6C;
    g_seh_ebp = ebp; sub_002BF770(); return; /* tail jmp 0x002BF770 */

loc_002B605B: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = 0xFF;

loc_002B6062: ;
    PUSH32(esp, 0x002B6067u); RECOMP_ABI_CALL(0x002BEA50u, sub_002BEA50); /* call 0x002BEA50 */

loc_002B6067: ;
    _fa = (uint32_t)(MEM32(0x735884)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x735884), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B6075; /* jne: not equal / not zero */

loc_002B606F: ;
    MEM32(0x735884) = esi;

loc_002B6075: ;
    PUSH32(esp, 0x002B607Au); RECOMP_ABI_CALL(0x002BEA60u, sub_002BEA60); /* call 0x002BEA60 */

loc_002B607A: ;
    _fa = (uint32_t)(MEM32(0x735884)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x735884), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B608B; /* je: equal / zero */

loc_002B6082: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x002B6089u); RECOMP_ABI_CALL(0x000FA0B1u, sub_000FA0B1); /* call 0x000FA0B1 */

loc_002B6089: ;
    goto loc_002B6062;

loc_002B608B: ;
    eax = MEM32(0x735890);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B609A; /* je: equal / zero */

loc_002B6094: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x002B6097u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002B6095u); } /* indirect call */
    }

loc_002B6097: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002B609A: ;
    eax = MEM32(0x735894);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B60A9; /* je: equal / zero */

loc_002B60A3: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x002B60A6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002B60A4u); } /* indirect call */
    }

loc_002B60A6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002B60A9: ;
    _fa = (uint32_t)(MEM8(ebp)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B60B6; /* jne: not equal / not zero */

loc_002B60AF: ;
    eax = ebp;
    PUSH32(esp, 0x002B60B6u); RECOMP_ABI_CALL(0x002B4F20u, sub_002B4F20); /* call 0x002B4F20 */

loc_002B60B6: ;
    eax = MEM32(ebp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B60C9; /* je: equal / zero */

loc_002B60BD: ;
    PUSH32(esp, eax);
    MEM32(ebp + 0xC) = ebx;
    PUSH32(esp, 0x002B60C6u); RECOMP_ABI_CALL(0x002BEAD0u, sub_002BEAD0); /* call 0x002BEAD0 */

loc_002B60C6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002B60C9: ;
    eax = MEM32(ebp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B60DC; /* je: equal / zero */

loc_002B60D0: ;
    PUSH32(esp, eax);
    MEM32(ebp + 4) = ebx;
    PUSH32(esp, 0x002B60D9u); RECOMP_ABI_CALL(0x002BC150u, sub_002BC150); /* call 0x002BC150 */

loc_002B60D9: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002B60DC: ;
    esi = MEM32(ebp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B60F7; /* je: equal / zero */

loc_002B60E3: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    MEM32(ebp + 8) = ebx;
    PUSH32(esp, 0x002B60EEu); RECOMP_ABI_CALL(0x002BDCF0u, sub_002BDCF0); /* call 0x002BDCF0 */

loc_002B60EE: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002B60F4u); RECOMP_ABI_CALL(0x002BE9C0u, sub_002BE9C0); /* call 0x002BE9C0 */

loc_002B60F4: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002B60F7: ;
    eax = MEM32(ebp + 0x94);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B6110; /* je: equal / zero */

loc_002B6101: ;
    PUSH32(esp, eax);
    MEM32(ebp + 0x94) = ebx;
    PUSH32(esp, 0x002B610Du); RECOMP_ABI_CALL(0x002BF680u, sub_002BF680); /* call 0x002BF680 */

loc_002B610D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002B6110: ;
    PUSH32(esp, 0x002B6115u); RECOMP_ABI_CALL(0x002BEA50u, sub_002BEA50); /* call 0x002BEA50 */

loc_002B6115: ;
    eax = MEM32(ebp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B6128; /* je: equal / zero */

loc_002B611C: ;
    MEM32(ebp + 0x10) = ebx;
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 0xC); PUSH32(esp, 0x002B6125u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002B6122u); } /* indirect call */
    }

loc_002B6125: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002B6128: ;
    SET_LO8(eax, MEM8(ebp + 3));
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_002B6177; /* jle: less or equal (signed <=) */

loc_002B6131: ;
    esi = ebp + 0x78;

loc_002B6134: ;
    eax = MEM32(esi + -96);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B6147; /* je: equal / zero */

loc_002B613B: ;
    MEM32(esi + -96) = ebx;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x002B6144u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002B6141u); } /* indirect call */
    }

loc_002B6144: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002B6147: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B6158; /* je: equal / zero */

loc_002B614D: ;
    MEM32(esi) = ebx;
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 0xC); PUSH32(esp, 0x002B6155u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002B6152u); } /* indirect call */
    }

loc_002B6155: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002B6158: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B616B; /* je: equal / zero */

loc_002B615F: ;
    MEM32(esi + 8) = ebx;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x002B6168u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002B6165u); } /* indirect call */
    }

loc_002B6168: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002B616B: ;
    eax = (uint32_t)(int32_t)SMEM8(ebp + 3);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002B6134; /* jl: less (signed <) */

loc_002B6177: ;
    eax = MEM32(ebp + 0x74);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B618A; /* je: equal / zero */

loc_002B617E: ;
    PUSH32(esp, eax);
    MEM32(ebp + 0x74) = ebx;
    PUSH32(esp, 0x002B6187u); RECOMP_ABI_CALL(0x002BD2E0u, sub_002BD2E0); /* call 0x002BD2E0 */

loc_002B6187: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002B618A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x31;
    edi = ebp;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM8(ebp) = LO8(ebx);
    PUSH32(esp, 0x002B619Du); RECOMP_ABI_CALL(0x002BEA60u, sub_002BEA60); /* call 0x002BEA60 */

loc_002B619D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(0x735884) = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002B61B0
 * Original: 0x002B61B0 - 0x002B61D4 (36 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B61B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B61B0: ;
    PUSH32(esp, esi);
    esi = 0x790440;

loc_002B61B6: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B61C4; /* jne: not equal / not zero */

loc_002B61BB: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002B61C1u); RECOMP_ABI_CALL(0x002B6040u, sub_002B6040); /* call 0x002B6040 */

loc_002B61C1: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002B61C4: ;
    _fb = (uint32_t)(0xC4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xC4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x791080) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x791080 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002B61B6; /* jl: less (signed <) */

loc_002B61D2: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002B61E0
 * Original: 0x002B61E0 - 0x002B6204 (36 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B61E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B61E0: ;
    PUSH32(esp, esi);
    esi = 0x790440;

loc_002B61E6: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B61F4; /* jne: not equal / not zero */

loc_002B61EB: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002B61F1u); RECOMP_ABI_CALL(0x002B6040u, sub_002B6040); /* call 0x002B6040 */

loc_002B61F1: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002B61F4: ;
    _fb = (uint32_t)(0xC4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xC4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x791080) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x791080 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002B61E6; /* jl: less (signed <) */

loc_002B6202: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002B6270
 * Original: 0x002B6270 - 0x002B6285 (21 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B6270(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B6270: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002B6276u); RECOMP_ABI_CALL(0x002BEA70u, sub_002BEA70); /* call 0x002BEA70 */

loc_002B6276: ;
    esi = MEM32(esp + 8);
    PUSH32(esp, 0x002B627Fu); RECOMP_ABI_CALL(0x002B4EB0u, sub_002B4EB0); /* call 0x002B4EB0 */

loc_002B627F: ;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_002BEA80(); return; /* tail jmp 0x002BEA80 */

}

/**
 * sub_002B6290
 * Original: 0x002B6290 - 0x002B62A3 (19 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B6290(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B6290: ;
    PUSH32(esp, 0x002B6295u); RECOMP_ABI_CALL(0x002BEA70u, sub_002BEA70); /* call 0x002BEA70 */

loc_002B6295: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 0x002B629Eu); RECOMP_ABI_CALL(0x002B4F20u, sub_002B4F20); /* call 0x002B4F20 */

loc_002B629E: ;
    g_seh_ebp = ebp; sub_002BEA80(); return; /* tail jmp 0x002BEA80 */

}

/**
 * sub_002B62F0
 * Original: 0x002B62F0 - 0x002B632B (59 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B62F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B62F0: ;
    PUSH32(esp, 0x002B62F5u); RECOMP_ABI_CALL(0x002BEA70u, sub_002BEA70); /* call 0x002BEA70 */

loc_002B62F5: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B6312; /* jne: not equal / not zero */

loc_002B62FE: ;
    MEM32(0x79131C) = 0x176A;
    MEM32(0x735880) = eax;
    g_seh_ebp = ebp; sub_002BEA80(); return; /* tail jmp 0x002BEA80 */

loc_002B6312: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B6321; /* jne: not equal / not zero */

loc_002B6317: ;
    MEM32(0x79131C) = 0x1388;

loc_002B6321: ;
    MEM32(0x735880) = eax;
    g_seh_ebp = ebp; sub_002BEA80(); return; /* tail jmp 0x002BEA80 */

}

/**
 * sub_002B6330
 * Original: 0x002B6330 - 0x002B6351 (33 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B6330(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B6330: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x002B6338u); RECOMP_ABI_CALL(0x002BEA70u, sub_002BEA70); /* call 0x002BEA70 */

loc_002B6338: ;
    ebx = MEM32(esp + 0x18);
    esi = MEM32(esp + 0x14);
    edi = MEM32(esp + 0x10);
    PUSH32(esp, 0x002B6349u); RECOMP_ABI_CALL(0x002B4FE0u, sub_002B4FE0); /* call 0x002B4FE0 */

loc_002B6349: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_002BEA80(); return; /* tail jmp 0x002BEA80 */

}

/**
 * sub_002B6360
 * Original: 0x002B6360 - 0x002B6425 (197 bytes, 76 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B6360(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B6360: ;
    PUSH32(esp, ebx);
    ebx = eax;
    SET_LO8(eax, MEM8(esi + 1));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 3 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B63BD; /* je: equal / zero */

loc_002B636A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 4 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B63BD; /* je: equal / zero */

loc_002B636E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 5 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B63AF; /* jne: not equal / not zero */

loc_002B6372: ;
    eax = MEM32(esi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002B637Bu); RECOMP_ABI_CALL(0x002BCB50u, sub_002BCB50); /* call 0x002BCB50 */

loc_002B637B: ;
    MEM32(edi) = eax;
    ecx = MEM32(esi + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002B6386u); RECOMP_ABI_CALL(0x002BCB00u, sub_002BCB00); /* call 0x002BCB00 */

loc_002B6386: ;
    MEM32(ebx) = eax;
    edx = MEM32(esi + 4);
    PUSH32(esp, edx);
    PUSH32(esp, 0x002B6391u); RECOMP_ABI_CALL(0x002BCB20u, sub_002BCB20); /* call 0x002BCB20 */

loc_002B6391: ;
    ecx = eax;
    eax = 0x10;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(edi));
    MEM32(edi) = eax;
    edx = MEM32(esi + 0xA4);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi) = edx;
    goto loc_002B640F;

loc_002B63AF: ;
    MEM32(edi) = 0;
    MEM32(ebx) = 1;
    goto loc_002B640F;

loc_002B63BD: ;
    eax = MEM32(esi + 4);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002B63C7u); RECOMP_ABI_CALL(0x002BCB00u, sub_002BCB00); /* call 0x002BCB00 */

loc_002B63C7: ;
    MEM32(ebx) = eax;
    ecx = MEM32(esi + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002B63D2u); RECOMP_ABI_CALL(0x002BC970u, sub_002BC970); /* call 0x002BC970 */

loc_002B63D2: ;
    ebp = eax;
    eax = MEM32(esi + 0x18);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B63F2; /* je: equal / zero */

loc_002B63DE: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x002B63E6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002B63E3u); } /* indirect call */
    }

loc_002B63E6: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ebx = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((1) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    goto loc_002B63F4;

loc_002B63F2: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002B63F4: ;
    eax = MEM32(esi + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002B63FDu); RECOMP_ABI_CALL(0x002BEB40u, sub_002BEB40); /* call 0x002BEB40 */

loc_002B63FD: ;
    ecx = MEM32(esi + 0xA4);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebp;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(edi) = ecx;
    POP32(esp, ebp);

loc_002B640F: ;
    edx = MEM32(esi + 0x88);
    eax = MEM32(edi);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    MEM32(edi) = eax;
    if ((_fas >= 0)) goto loc_002B6424; /* jns: not sign (positive) */

loc_002B641E: ;
    MEM32(edi) = 0;

loc_002B6424: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002B6430
 * Original: 0x002B6430 - 0x002B6450 (32 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B6430(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B6430: ;
    PUSH32(esp, 0x002B6435u); RECOMP_ABI_CALL(0x002BEA70u, sub_002BEA70); /* call 0x002BEA70 */

loc_002B6435: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 8);
    PUSH32(esp, eax);
    eax = MEM32(esp + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002B6448u); RECOMP_ABI_CALL(0x002B5070u, sub_002B5070); /* call 0x002B5070 */

loc_002B6448: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_002BEA80(); return; /* tail jmp 0x002BEA80 */

}

/**
 * sub_002B6620
 * Original: 0x002B6620 - 0x002B6643 (35 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B6620(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B6620: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x002B6627u); RECOMP_ABI_CALL(0x002BEA70u, sub_002BEA70); /* call 0x002BEA70 */

loc_002B6627: ;
    eax = MEM32(esp + 0x14);
    ebx = MEM32(esp + 0x10);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002B6639u); RECOMP_ABI_CALL(0x002B5350u, sub_002B5350); /* call 0x002B5350 */

loc_002B6639: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_002BEA80(); return; /* tail jmp 0x002BEA80 */

}

/**
 * sub_002B6690
 * Original: 0x002B6690 - 0x002B66A7 (23 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B6690(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B6690: ;
    PUSH32(esp, 0x002B6695u); RECOMP_ABI_CALL(0x002BEA70u, sub_002BEA70); /* call 0x002BEA70 */

loc_002B6695: ;
    ecx = MEM32(esp + 8);
    eax = MEM32(esp + 4);
    PUSH32(esp, 0x002B66A2u); RECOMP_ABI_CALL(0x002B5410u, sub_002B5410); /* call 0x002B5410 */

loc_002B66A2: ;
    g_seh_ebp = ebp; sub_002BEA80(); return; /* tail jmp 0x002BEA80 */

}

/**
 * sub_002B66F0
 * Original: 0x002B66F0 - 0x002B670D (29 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B66F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B66F0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002B66F6u); RECOMP_ABI_CALL(0x002BEA70u, sub_002BEA70); /* call 0x002BEA70 */

loc_002B66F6: ;
    eax = MEM32(esp + 0xC);
    esi = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002B6704u); RECOMP_ABI_CALL(0x002B5490u, sub_002B5490); /* call 0x002B5490 */

loc_002B6704: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_002BEA80(); return; /* tail jmp 0x002BEA80 */

}

/**
 * sub_002B6750
 * Original: 0x002B6750 - 0x002B6772 (34 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B6750(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B6750: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002B6756u); RECOMP_ABI_CALL(0x002BEA70u, sub_002BEA70); /* call 0x002BEA70 */

loc_002B6756: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(eax + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002B6763u); RECOMP_ABI_CALL(0x002BCBF0u, sub_002BCBF0); /* call 0x002BCBF0 */

loc_002B6763: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = SX16(LO16(eax));
    PUSH32(esp, 0x002B676Eu); RECOMP_ABI_CALL(0x002BEA80u, sub_002BEA80); /* call 0x002BEA80 */

loc_002B676E: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002B6780
 * Original: 0x002B6780 - 0x002B67A7 (39 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B6780(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B6780: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002B6786u); RECOMP_ABI_CALL(0x002BEA70u, sub_002BEA70); /* call 0x002BEA70 */

loc_002B6786: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 8);
    edx = MEM32(ecx + 4);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x002B6798u); RECOMP_ABI_CALL(0x002BCC30u, sub_002BCC30); /* call 0x002BCC30 */

loc_002B6798: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = SX16(LO16(eax));
    PUSH32(esp, 0x002B67A3u); RECOMP_ABI_CALL(0x002BEA80u, sub_002BEA80); /* call 0x002BEA80 */

loc_002B67A3: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002B67B0
 * Original: 0x002B67B0 - 0x002B67D1 (33 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B67B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B67B0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002B67B6u); RECOMP_ABI_CALL(0x002BEA70u, sub_002BEA70); /* call 0x002BEA70 */

loc_002B67B6: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(eax + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002B67C3u); RECOMP_ABI_CALL(0x002BCC70u, sub_002BCC70); /* call 0x002BCC70 */

loc_002B67C3: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = eax;
    PUSH32(esp, 0x002B67CDu); RECOMP_ABI_CALL(0x002BEA80u, sub_002BEA80); /* call 0x002BEA80 */

loc_002B67CD: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002B67E0
 * Original: 0x002B67E0 - 0x002B6829 (73 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B67E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_002B67E0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0xC));
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x002B67E9u); RECOMP_ABI_CALL(0x002BEA70u, sub_002BEA70); /* call 0x002BEA70 */

loc_002B67E9: ;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x18);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x735870);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, 0x800);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002B680Cu); RECOMP_ABI_CALL(0x002BFE20u, sub_002BFE20); /* call 0x002BFE20 */

loc_002B680C: ;
    esi = MEM32(esp + 0x20);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x18)) >> 32) & 1);
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((esi) != 0);
    esi = (uint32_t)(-(int32_t)esi);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    esi = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    esi = esi & 0x735870;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0x002B6822u); RECOMP_ABI_CALL(0x002BEA80u, sub_002BEA80); /* call 0x002BEA80 */

loc_002B6822: ;
    eax = esi;
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002B6830
 * Original: 0x002B6830 - 0x002B6848 (24 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B6830(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B6830: ;
    PUSH32(esp, 0x002B6835u); RECOMP_ABI_CALL(0x002BEA70u, sub_002BEA70); /* call 0x002BEA70 */

loc_002B6835: ;
    SET_LO8(eax, MEM8(esp + 8));
    ecx = MEM32(esp + 4);
    MEM8(ecx + 0xA9) = LO8(eax);
    g_seh_ebp = ebp; sub_002BEA80(); return; /* tail jmp 0x002BEA80 */

}

/**
 * sub_002B6850
 * Original: 0x002B6850 - 0x002B686A (26 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B6850(void)
{

loc_002B6850: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002B6856u); RECOMP_ABI_CALL(0x002BEA70u, sub_002BEA70); /* call 0x002BEA70 */

loc_002B6856: ;
    eax = MEM32(esp + 8);
    esi = (uint32_t)(int32_t)SMEM8(eax + 0xA9);
    PUSH32(esp, 0x002B6866u); RECOMP_ABI_CALL(0x002BEA80u, sub_002BEA80); /* call 0x002BEA80 */

loc_002B6866: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002B6870
 * Original: 0x002B6870 - 0x002B6888 (24 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B6870(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B6870: ;
    PUSH32(esp, 0x002B6875u); RECOMP_ABI_CALL(0x002BEA70u, sub_002BEA70); /* call 0x002BEA70 */

loc_002B6875: ;
    eax = MEM32(esp + 4);
    MEM32(0x735888) = eax;
    MEM32(0x73588C) = eax;
    g_seh_ebp = ebp; sub_002BEA80(); return; /* tail jmp 0x002BEA80 */

}

/**
 * sub_002B68F0
 * Original: 0x002B68F0 - 0x002B6903 (19 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B68F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B68F0: ;
    PUSH32(esp, 0x002B68F5u); RECOMP_ABI_CALL(0x002BEA70u, sub_002BEA70); /* call 0x002BEA70 */

loc_002B68F5: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 0x002B68FEu); RECOMP_ABI_CALL(0x002B5650u, sub_002B5650); /* call 0x002B5650 */

loc_002B68FE: ;
    g_seh_ebp = ebp; sub_002BEA80(); return; /* tail jmp 0x002BEA80 */

}

/**
 * sub_002B6A20
 * Original: 0x002B6A20 - 0x002B6A40 (32 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B6A20(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_002B6A20: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x002B6A27u); RECOMP_ABI_CALL(0x002BEA70u, sub_002BEA70); /* call 0x002BEA70 */

loc_002B6A27: ;
    esi = MEM32(esp + 0xC);
    PUSH32(esp, 0x002B6A30u); RECOMP_ABI_CALL(0x002B5780u, sub_002B5780); /* call 0x002B5780 */

loc_002B6A30: ;
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x002B6A39u); RECOMP_ABI_CALL(0x002BEA80u, sub_002BEA80); /* call 0x002BEA80 */

loc_002B6A39: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_002B6AA0
 * Original: 0x002B6AA0 - 0x002B6AB5 (21 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B6AA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B6AA0: ;
    PUSH32(esp, 0x002B6AA5u); RECOMP_ABI_CALL(0x002BEA70u, sub_002BEA70); /* call 0x002BEA70 */

loc_002B6AA5: ;
    SET_LO8(eax, MEM8(esp + 8));
    ecx = MEM32(esp + 4);
    MEM8(ecx + 0x6D) = LO8(eax);
    g_seh_ebp = ebp; sub_002BEA80(); return; /* tail jmp 0x002BEA80 */

}

/**
 * sub_002B6B00
 * Original: 0x002B6B00 - 0x002B6B0F (15 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B6B00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B6B00: ;
    PUSH32(esp, 0x002B6B05u); RECOMP_ABI_CALL(0x002BEA70u, sub_002BEA70); /* call 0x002BEA70 */

loc_002B6B05: ;
    PUSH32(esp, 0x002B6B0Au); RECOMP_ABI_CALL(0x002B5880u, sub_002B5880); /* call 0x002B5880 */

loc_002B6B0A: ;
    g_seh_ebp = ebp; sub_002BEA80(); return; /* tail jmp 0x002BEA80 */

}

/**
 * sub_002B6B10
 * Original: 0x002B6B10 - 0x002B6B1F (15 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B6B10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B6B10: ;
    PUSH32(esp, 0x002B6B15u); RECOMP_ABI_CALL(0x002BEA70u, sub_002BEA70); /* call 0x002BEA70 */

loc_002B6B15: ;
    PUSH32(esp, 0x002B6B1Au); RECOMP_ABI_CALL(0x002B5880u, sub_002B5880); /* call 0x002B5880 */

loc_002B6B1A: ;
    g_seh_ebp = ebp; sub_002BEA80(); return; /* tail jmp 0x002BEA80 */

}

/**
 * sub_002B6BE0
 * Original: 0x002B6BE0 - 0x002B6BFD (29 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B6BE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B6BE0: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x002B6BE6u); RECOMP_ABI_CALL(0x002BEA70u, sub_002BEA70); /* call 0x002BEA70 */

loc_002B6BE6: ;
    eax = MEM32(esp + 0xC);
    edi = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002B6BF4u); RECOMP_ABI_CALL(0x002B5970u, sub_002B5970); /* call 0x002B5970 */

loc_002B6BF4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    g_seh_ebp = ebp; sub_002BEA80(); return; /* tail jmp 0x002BEA80 */

}

/**
 * sub_002B6CB0
 * Original: 0x002B6CB0 - 0x002B6CCB (27 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B6CB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B6CB0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x002B6CB7u); RECOMP_ABI_CALL(0x002BEA70u, sub_002BEA70); /* call 0x002BEA70 */

loc_002B6CB7: ;
    ebx = MEM32(esp + 0x10);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, 0x002B6CC4u); RECOMP_ABI_CALL(0x002B5A80u, sub_002B5A80); /* call 0x002B5A80 */

loc_002B6CC4: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_002BEA80(); return; /* tail jmp 0x002BEA80 */

}

/**
 * sub_002B6D10
 * Original: 0x002B6D10 - 0x002B6D27 (23 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B6D10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B6D10: ;
    PUSH32(esp, 0x002B6D15u); RECOMP_ABI_CALL(0x002BEA70u, sub_002BEA70); /* call 0x002BEA70 */

loc_002B6D15: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002B6D1Fu); RECOMP_ABI_CALL(0x002BEC80u, sub_002BEC80); /* call 0x002BEC80 */

loc_002B6D1F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_002BEA80(); return; /* tail jmp 0x002BEA80 */

}

/**
 * sub_002B6D30
 * Original: 0x002B6D30 - 0x002B6D46 (22 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B6D30(void)
{

loc_002B6D30: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002B6D36u); RECOMP_ABI_CALL(0x002BEA70u, sub_002BEA70); /* call 0x002BEA70 */

loc_002B6D36: ;
    PUSH32(esp, 0x002B6D3Bu); RECOMP_ABI_CALL(0x002BEC90u, sub_002BEC90); /* call 0x002BEC90 */

loc_002B6D3B: ;
    esi = eax;
    PUSH32(esp, 0x002B6D42u); RECOMP_ABI_CALL(0x002BEA80u, sub_002BEA80); /* call 0x002BEA80 */

loc_002B6D42: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002B6D50
 * Original: 0x002B6D50 - 0x002B6D71 (33 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B6D50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B6D50: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002B6D56u); RECOMP_ABI_CALL(0x002BEA70u, sub_002BEA70); /* call 0x002BEA70 */

loc_002B6D56: ;
    eax = MEM32(esp + 0xC);
    esi = MEM32(esp + 8);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x14);
    PUSH32(esp, 0x002B6D68u); RECOMP_ABI_CALL(0x002B5B80u, sub_002B5B80); /* call 0x002B5B80 */

loc_002B6D68: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_002BEA80(); return; /* tail jmp 0x002BEA80 */

}

/**
 * sub_002B6D80
 * Original: 0x002B6D80 - 0x002B6DA4 (36 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B6D80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B6D80: ;
    PUSH32(esp, 0x002B6D85u); RECOMP_ABI_CALL(0x002BEA70u, sub_002BEA70); /* call 0x002BEA70 */

loc_002B6D85: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 8);
    edx = MEM32(esp + 4);
    PUSH32(esp, eax);
    eax = MEM32(edx + 0xC);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002B6D9Cu); RECOMP_ABI_CALL(0x002C1A60u, sub_002C1A60); /* call 0x002C1A60 */

loc_002B6D9C: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_002BEA80(); return; /* tail jmp 0x002BEA80 */

}

/**
 * sub_002B6DB0
 * Original: 0x002B6DB0 - 0x002B6DC6 (22 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B6DB0(void)
{

loc_002B6DB0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002B6DB6u); RECOMP_ABI_CALL(0x002BEA70u, sub_002BEA70); /* call 0x002BEA70 */

loc_002B6DB6: ;
    eax = MEM32(esp + 8);
    esi = MEM32(eax + 8);
    PUSH32(esp, 0x002B6DC2u); RECOMP_ABI_CALL(0x002BEA80u, sub_002BEA80); /* call 0x002BEA80 */

loc_002B6DC2: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002B6DD0
 * Original: 0x002B6DD0 - 0x002B6DEA (26 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B6DD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B6DD0: ;
    PUSH32(esp, 0x002B6DD5u); RECOMP_ABI_CALL(0x002BEA70u, sub_002BEA70); /* call 0x002BEA70 */

loc_002B6DD5: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002B6DE2u); RECOMP_ABI_CALL(0x002BC220u, sub_002BC220); /* call 0x002BC220 */

loc_002B6DE2: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_002BEA80(); return; /* tail jmp 0x002BEA80 */

}

/**
 * sub_002B6DF0
 * Original: 0x002B6DF0 - 0x002B6E78 (136 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B6DF0(void)
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

loc_002B6DF0: ;
    SET_LO8(eax, MEM8(esi + 0x72));
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B6E00; /* jne: not equal / not zero */

loc_002B6DFA: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_002B6E00: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002B6E10u); RECOMP_ABI_CALL(0x002BEC50u, sub_002BEC50); /* call 0x002BEC50 */

loc_002B6E10: ;
    edi = eax;
    PUSH32(esp, 0x002B6E17u); RECOMP_ABI_CALL(0x002BEA70u, sub_002BEA70); /* call 0x002BEA70 */

loc_002B6E17: ;
    PUSH32(esp, 0x002B6E1Cu); RECOMP_ABI_CALL(0x002B5880u, sub_002B5880); /* call 0x002B5880 */

loc_002B6E1C: ;
    PUSH32(esp, 0x002B6E21u); RECOMP_ABI_CALL(0x002BEA80u, sub_002BEA80); /* call 0x002BEA80 */

loc_002B6E21: ;
    ebx = MEM32(0x735880);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    eax = esi;
    MEM32(0x735880) = 0;
    PUSH32(esp, 0x002B6E42u); RECOMP_ABI_CALL(0x002B5070u, sub_002B5070); /* call 0x002B5070 */

loc_002B6E42: ;
    fp_push((double)SMEM32(esp + 0x18)); /* fild */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x735880) = ebx;
    fp_top() = RECOMP_FP_PC(fp_top() / (double)SMEM32(esp + 0xC)); /* fidiv dword ptr [esp + 0xc] */
    fp_top() = RECOMP_FP_PC(fp_top() * (double)SMEM32(0x79131C)); /* fimul dword ptr [0x79131c] */
    PUSH32(esp, 0x002B6E5Eu); RECOMP_ABI_CALL(0x000EB38Cu, sub_000EB38C); /* call 0x000EB38C */

loc_002B6E5E: ;
    MEM32(esi + 0x9C) = eax;
    ecx = MEM32(0x735984);
    eax = edi;
    POP32(esp, edi);
    MEM32(esi + 0xA0) = ecx;
    POP32(esp, ebx);
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
 * sub_002B6E80
 * Original: 0x002B6E80 - 0x002B6E99 (25 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B6E80(void)
{

loc_002B6E80: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002B6E86u); RECOMP_ABI_CALL(0x002BEA70u, sub_002BEA70); /* call 0x002BEA70 */

loc_002B6E86: ;
    eax = MEM32(esp + 8);
    esi = MEM32(eax + 0x88);
    PUSH32(esp, 0x002B6E95u); RECOMP_ABI_CALL(0x002BEA80u, sub_002BEA80); /* call 0x002BEA80 */

loc_002B6E95: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002B6EA0
 * Original: 0x002B6EA0 - 0x002B6EB8 (24 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B6EA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B6EA0: ;
    PUSH32(esp, 0x002B6EA5u); RECOMP_ABI_CALL(0x002BEA70u, sub_002BEA70); /* call 0x002BEA70 */

loc_002B6EA5: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    MEM32(ecx + 0x88) = eax;
    g_seh_ebp = ebp; sub_002BEA80(); return; /* tail jmp 0x002BEA80 */

}

/**
 * sub_002B6EC0
 * Original: 0x002B6EC0 - 0x002B6EE6 (38 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B6EC0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B6EC0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002B6EC6u); RECOMP_ABI_CALL(0x002BEA70u, sub_002BEA70); /* call 0x002BEA70 */

loc_002B6EC6: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 8);
    edx = MEM32(ecx + 4);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x002B6ED8u); RECOMP_ABI_CALL(0x002BCA20u, sub_002BCA20); /* call 0x002BCA20 */

loc_002B6ED8: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = eax;
    PUSH32(esp, 0x002B6EE2u); RECOMP_ABI_CALL(0x002BEA80u, sub_002BEA80); /* call 0x002BEA80 */

loc_002B6EE2: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002B6EF0
 * Original: 0x002B6EF0 - 0x002B6F19 (41 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B6EF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B6EF0: ;
    PUSH32(esp, 0x002B6EF5u); RECOMP_ABI_CALL(0x002BEA70u, sub_002BEA70); /* call 0x002BEA70 */

loc_002B6EF5: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    MEM8(eax + 0x98) = LO8(ecx);
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B6F14; /* je: equal / zero */

loc_002B6F0A: ;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002B6F11u); RECOMP_ABI_CALL(0x002BC9B0u, sub_002BC9B0); /* call 0x002BC9B0 */

loc_002B6F11: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002B6F14: ;
    g_seh_ebp = ebp; sub_002BEA80(); return; /* tail jmp 0x002BEA80 */

}

/**
 * sub_002B6F20
 * Original: 0x002B6F20 - 0x002B6F3A (26 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B6F20(void)
{

loc_002B6F20: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002B6F26u); RECOMP_ABI_CALL(0x002BEA70u, sub_002BEA70); /* call 0x002BEA70 */

loc_002B6F26: ;
    eax = MEM32(esp + 8);
    esi = (uint32_t)(int32_t)SMEM8(eax + 0x98);
    PUSH32(esp, 0x002B6F36u); RECOMP_ABI_CALL(0x002BEA80u, sub_002BEA80); /* call 0x002BEA80 */

loc_002B6F36: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002B6F40
 * Original: 0x002B6F40 - 0x002B6F64 (36 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B6F40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B6F40: ;
    PUSH32(esp, 0x002B6F45u); RECOMP_ABI_CALL(0x002BEA70u, sub_002BEA70); /* call 0x002BEA70 */

loc_002B6F45: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 8);
    edx = MEM32(esp + 4);
    PUSH32(esp, eax);
    eax = MEM32(edx + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002B6F5Cu); RECOMP_ABI_CALL(0x002BCA50u, sub_002BCA50); /* call 0x002BCA50 */

loc_002B6F5C: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_002BEA80(); return; /* tail jmp 0x002BEA80 */

}

/**
 * sub_002B7030
 * Original: 0x002B7030 - 0x002B7056 (38 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B7030(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B7030: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002B7036u); RECOMP_ABI_CALL(0x002BEA70u, sub_002BEA70); /* call 0x002BEA70 */

loc_002B7036: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, 0x002B7048u); RECOMP_ABI_CALL(0x002B5E80u, sub_002B5E80); /* call 0x002B5E80 */

loc_002B7048: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = eax;
    PUSH32(esp, 0x002B7052u); RECOMP_ABI_CALL(0x002BEA80u, sub_002BEA80); /* call 0x002BEA80 */

loc_002B7052: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002B70A0
 * Original: 0x002B70A0 - 0x002B70B7 (23 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B70A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B70A0: ;
    PUSH32(esp, 0x002B70A5u); RECOMP_ABI_CALL(0x002BEA70u, sub_002BEA70); /* call 0x002BEA70 */

loc_002B70A5: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002B70AFu); RECOMP_ABI_CALL(0x002BC9E0u, sub_002BC9E0); /* call 0x002BC9E0 */

loc_002B70AF: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_002BEA80(); return; /* tail jmp 0x002BEA80 */

}

/**
 * sub_002B70C0
 * Original: 0x002B70C0 - 0x002B70D6 (22 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B70C0(void)
{

loc_002B70C0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002B70C6u); RECOMP_ABI_CALL(0x002BEA70u, sub_002BEA70); /* call 0x002BEA70 */

loc_002B70C6: ;
    eax = MEM32(esp + 8);
    esi = MEM32(eax + 0xC);
    PUSH32(esp, 0x002B70D2u); RECOMP_ABI_CALL(0x002BEA80u, sub_002BEA80); /* call 0x002BEA80 */

loc_002B70D2: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002B70E0
 * Original: 0x002B70E0 - 0x002B70FF (31 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B70E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B70E0: ;
    PUSH32(esp, 0x002B70E5u); RECOMP_ABI_CALL(0x002BEA70u, sub_002BEA70); /* call 0x002BEA70 */

loc_002B70E5: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    edx = MEM32(ecx + 4);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x002B70F7u); RECOMP_ABI_CALL(0x002BCA10u, sub_002BCA10); /* call 0x002BCA10 */

loc_002B70F7: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_002BEA80(); return; /* tail jmp 0x002BEA80 */

}

/**
 * sub_002B7380
 * Original: 0x002B7380 - 0x002B738A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B7380(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B7380: ;
    edx = 1;
    g_seh_ebp = ebp; sub_002B7100(); return; /* tail jmp 0x002B7100 */

}

/**
 * sub_002B7390
 * Original: 0x002B7390 - 0x002B73A7 (23 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B7390(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B7390: ;
    PUSH32(esp, 0x002B7395u); RECOMP_ABI_CALL(0x002BEA70u, sub_002BEA70); /* call 0x002BEA70 */

loc_002B7395: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002B739Fu); RECOMP_ABI_CALL(0x002B6040u, sub_002B6040); /* call 0x002B6040 */

loc_002B739F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_002BEA80(); return; /* tail jmp 0x002BEA80 */

}

/**
 * sub_002B73B0
 * Original: 0x002B73B0 - 0x002B73E2 (50 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B73B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B73B0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002B73B6u); RECOMP_ABI_CALL(0x002BEA70u, sub_002BEA70); /* call 0x002BEA70 */

loc_002B73B6: ;
    esi = 0x790440;
    goto loc_002B73C0;

    /* nop */

loc_002B73C0: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B73CE; /* jne: not equal / not zero */

loc_002B73C5: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002B73CBu); RECOMP_ABI_CALL(0x002B6040u, sub_002B6040); /* call 0x002B6040 */

loc_002B73CB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002B73CE: ;
    _fb = (uint32_t)(0xC4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xC4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x791080) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x791080 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002B73C0; /* jl: less (signed <) */

loc_002B73DC: ;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_002BEA80(); return; /* tail jmp 0x002BEA80 */

}

/**
 * sub_002B73F0
 * Original: 0x002B73F0 - 0x002B7422 (50 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B73F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B73F0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002B73F6u); RECOMP_ABI_CALL(0x002BEA70u, sub_002BEA70); /* call 0x002BEA70 */

loc_002B73F6: ;
    esi = 0x790440;
    goto loc_002B7400;

    /* nop */

loc_002B7400: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B740E; /* jne: not equal / not zero */

loc_002B7405: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002B740Bu); RECOMP_ABI_CALL(0x002B6040u, sub_002B6040); /* call 0x002B6040 */

loc_002B740B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002B740E: ;
    _fb = (uint32_t)(0xC4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xC4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x791080) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x791080 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002B7400; /* jl: less (signed <) */

loc_002B741C: ;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_002BEA80(); return; /* tail jmp 0x002BEA80 */

}

/**
 * sub_002B7430
 * Original: 0x002B7430 - 0x002B7449 (25 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B7430(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B7430: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x002B7436u); RECOMP_ABI_CALL(0x002BEA70u, sub_002BEA70); /* call 0x002BEA70 */

loc_002B7436: ;
    edi = MEM32(esp + 0xC);
    eax = MEM32(esp + 8);
    PUSH32(esp, 0x002B7443u); RECOMP_ABI_CALL(0x002B6210u, sub_002B6210); /* call 0x002B6210 */

loc_002B7443: ;
    POP32(esp, edi);
    g_seh_ebp = ebp; sub_002BEA80(); return; /* tail jmp 0x002BEA80 */

}

/**
 * sub_002B7450
 * Original: 0x002B7450 - 0x002B746F (31 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B7450(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B7450: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x002B7457u); RECOMP_ABI_CALL(0x002BEA70u, sub_002BEA70); /* call 0x002BEA70 */

loc_002B7457: ;
    eax = MEM32(esp + 0x14);
    edi = MEM32(esp + 0x10);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, 0x002B7468u); RECOMP_ABI_CALL(0x002B6360u, sub_002B6360); /* call 0x002B6360 */

loc_002B7468: ;
    POP32(esp, edi);
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_002BEA80(); return; /* tail jmp 0x002BEA80 */

}

/**
 * sub_002B7470
 * Original: 0x002B7470 - 0x002B7492 (34 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B7470(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B7470: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002B7476u); RECOMP_ABI_CALL(0x002BEA70u, sub_002BEA70); /* call 0x002BEA70 */

loc_002B7476: ;
    eax = MEM32(esp + 0xC);
    esi = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002B7484u); RECOMP_ABI_CALL(0x002B6DF0u, sub_002B6DF0); /* call 0x002B6DF0 */

loc_002B7484: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = eax;
    PUSH32(esp, 0x002B748Eu); RECOMP_ABI_CALL(0x002BEA80u, sub_002BEA80); /* call 0x002BEA80 */

loc_002B748E: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002B74A0
 * Original: 0x002B74A0 - 0x002B74C2 (34 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B74A0(void)
{

loc_002B74A0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002B74A6u); RECOMP_ABI_CALL(0x002BEA70u, sub_002BEA70); /* call 0x002BEA70 */

loc_002B74A6: ;
    ecx = MEM32(esp + 0x10);
    eax = MEM32(esp + 0xC);
    edx = MEM32(esp + 8);
    PUSH32(esp, 0x002B74B7u); RECOMP_ABI_CALL(0x002B7100u, sub_002B7100); /* call 0x002B7100 */

loc_002B74B7: ;
    esi = eax;
    PUSH32(esp, 0x002B74BEu); RECOMP_ABI_CALL(0x002BEA80u, sub_002BEA80); /* call 0x002BEA80 */

loc_002B74BE: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002B74D0
 * Original: 0x002B74D0 - 0x002B74F3 (35 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B74D0(void)
{

loc_002B74D0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002B74D6u); RECOMP_ABI_CALL(0x002BEA70u, sub_002BEA70); /* call 0x002BEA70 */

loc_002B74D6: ;
    ecx = MEM32(esp + 0xC);
    eax = MEM32(esp + 8);
    edx = 1;
    PUSH32(esp, 0x002B74E8u); RECOMP_ABI_CALL(0x002B7100u, sub_002B7100); /* call 0x002B7100 */

loc_002B74E8: ;
    esi = eax;
    PUSH32(esp, 0x002B74EFu); RECOMP_ABI_CALL(0x002BEA80u, sub_002BEA80); /* call 0x002BEA80 */

loc_002B74EF: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002B7500
 * Original: 0x002B7500 - 0x002B7513 (19 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B7500(void)
{

loc_002B7500: ;
    ecx = MEM32(0x51DDD0);
    eax = MEM32(0x4C4014);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002B7511u); RECOMP_ABI_CALL(0x002C3DD0u, sub_002C3DD0); /* call 0x002C3DD0 */

loc_002B7511: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002B7520
 * Original: 0x002B7520 - 0x002B752D (13 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B7520(void)
{

loc_002B7520: ;
    eax = MEM32(0x51DDD0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002B752Bu); RECOMP_ABI_CALL(0x002C3B20u, sub_002C3B20); /* call 0x002C3B20 */

loc_002B752B: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002B7530
 * Original: 0x002B7530 - 0x002B7542 (18 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B7530(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B7530: ;
    PUSH32(esp, eax);
    eax = MEM32(0x51DDD0);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002B753Eu); RECOMP_ABI_CALL(0x002C3BF0u, sub_002C3BF0); /* call 0x002C3BF0 */

loc_002B753E: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002B7550
 * Original: 0x002B7550 - 0x002B7561 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B7550(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B7550: ;
    ecx = MEM32(0x51DDD0);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002B755Du); RECOMP_ABI_CALL(0x002C3820u, sub_002C3820); /* call 0x002C3820 */

loc_002B755D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002B7570
 * Original: 0x002B7570 - 0x002B7581 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B7570(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B7570: ;
    ecx = MEM32(0x51DDD0);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002B757Du); RECOMP_ABI_CALL(0x002C3870u, sub_002C3870); /* call 0x002C3870 */

loc_002B757D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002B7590
 * Original: 0x002B7590 - 0x002B759B (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B7590(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B7590: ;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002B7597u); RECOMP_ABI_CALL(0x002C54F0u, sub_002C54F0); /* call 0x002C54F0 */

loc_002B7597: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002B75A0
 * Original: 0x002B75A0 - 0x002B75AC (12 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B75A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B75A0: ;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x002B75A8u); RECOMP_ABI_CALL(0x002C5540u, sub_002C5540); /* call 0x002C5540 */

loc_002B75A8: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002B75B0
 * Original: 0x002B75B0 - 0x002B75BC (12 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B75B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B75B0: ;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x002B75B8u); RECOMP_ABI_CALL(0x002C5580u, sub_002C5580); /* call 0x002C5580 */

loc_002B75B8: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002B75C0
 * Original: 0x002B75C0 - 0x002B75CC (12 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B75C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B75C0: ;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x002B75C8u); RECOMP_ABI_CALL(0x002C55C0u, sub_002C55C0); /* call 0x002C55C0 */

loc_002B75C8: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002B75D0
 * Original: 0x002B75D0 - 0x002B75D8 (8 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B75D0(void)
{

loc_002B75D0: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002B75D6u); RECOMP_ABI_CALL(0x002C5160u, sub_002C5160); /* call 0x002C5160 */

loc_002B75D6: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002B75E0
 * Original: 0x002B75E0 - 0x002B75EB (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B75E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B75E0: ;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002B75E7u); RECOMP_ABI_CALL(0x002C3F20u, sub_002C3F20); /* call 0x002C3F20 */

loc_002B75E7: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002B75F0
 * Original: 0x002B75F0 - 0x002B75FA (10 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B75F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B75F0: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002B75F6u); RECOMP_ABI_CALL(0x002C3F80u, sub_002C3F80); /* call 0x002C3F80 */

loc_002B75F6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002B7600
 * Original: 0x002B7600 - 0x002B760A (10 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B7600(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B7600: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002B7606u); RECOMP_ABI_CALL(0x002C3FB0u, sub_002C3FB0); /* call 0x002C3FB0 */

loc_002B7606: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002B7610
 * Original: 0x002B7610 - 0x002B761A (10 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B7610(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B7610: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002B7616u); RECOMP_ABI_CALL(0x002C3FE0u, sub_002C3FE0); /* call 0x002C3FE0 */

loc_002B7616: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002B7620
 * Original: 0x002B7620 - 0x002B762B (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B7620(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B7620: ;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002B7627u); RECOMP_ABI_CALL(0x002C4000u, sub_002C4000); /* call 0x002C4000 */

loc_002B7627: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002B7630
 * Original: 0x002B7630 - 0x002B763A (10 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B7630(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B7630: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002B7636u); RECOMP_ABI_CALL(0x002C4010u, sub_002C4010); /* call 0x002C4010 */

loc_002B7636: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002B7640
 * Original: 0x002B7640 - 0x002B764B (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B7640(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B7640: ;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002B7647u); RECOMP_ABI_CALL(0x002C4C40u, sub_002C4C40); /* call 0x002C4C40 */

loc_002B7647: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002B7650
 * Original: 0x002B7650 - 0x002B765A (10 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B7650(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B7650: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002B7656u); RECOMP_ABI_CALL(0x002C40C0u, sub_002C40C0); /* call 0x002C40C0 */

loc_002B7656: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002B7660
 * Original: 0x002B7660 - 0x002B766C (12 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B7660(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B7660: ;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x002B7668u); RECOMP_ABI_CALL(0x002C4020u, sub_002C4020); /* call 0x002C4020 */

loc_002B7668: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002B7670
 * Original: 0x002B7670 - 0x002B767B (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B7670(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B7670: ;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002B7677u); RECOMP_ABI_CALL(0x002C40D0u, sub_002C40D0); /* call 0x002C40D0 */

loc_002B7677: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002B7680
 * Original: 0x002B7680 - 0x002B768B (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B7680(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B7680: ;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002B7687u); RECOMP_ABI_CALL(0x002C4100u, sub_002C4100); /* call 0x002C4100 */

loc_002B7687: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002B7690
 * Original: 0x002B7690 - 0x002B769B (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B7690(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B7690: ;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002B7697u); RECOMP_ABI_CALL(0x002C4150u, sub_002C4150); /* call 0x002C4150 */

loc_002B7697: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002B76A0
 * Original: 0x002B76A0 - 0x002B76AB (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B76A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B76A0: ;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002B76A7u); RECOMP_ABI_CALL(0x002C4160u, sub_002C4160); /* call 0x002C4160 */

loc_002B76A7: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002B76B0
 * Original: 0x002B76B0 - 0x002B76BB (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B76B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B76B0: ;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002B76B7u); RECOMP_ABI_CALL(0x002C4170u, sub_002C4170); /* call 0x002C4170 */

loc_002B76B7: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002B76C0
 * Original: 0x002B76C0 - 0x002B76CA (10 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B76C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B76C0: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002B76C6u); RECOMP_ABI_CALL(0x002C4180u, sub_002C4180); /* call 0x002C4180 */

loc_002B76C6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002B76D0
 * Original: 0x002B76D0 - 0x002B76DA (10 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B76D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B76D0: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002B76D6u); RECOMP_ABI_CALL(0x002C4190u, sub_002C4190); /* call 0x002C4190 */

loc_002B76D6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002B76E0
 * Original: 0x002B76E0 - 0x002B76EA (10 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B76E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B76E0: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002B76E6u); RECOMP_ABI_CALL(0x002C41A0u, sub_002C41A0); /* call 0x002C41A0 */

loc_002B76E6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002B76F0
 * Original: 0x002B76F0 - 0x002B76FB (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B76F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B76F0: ;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002B76F7u); RECOMP_ABI_CALL(0x002C41B0u, sub_002C41B0); /* call 0x002C41B0 */

loc_002B76F7: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002B7700
 * Original: 0x002B7700 - 0x002B770A (10 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B7700(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B7700: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002B7706u); RECOMP_ABI_CALL(0x002C41C0u, sub_002C41C0); /* call 0x002C41C0 */

loc_002B7706: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002B7710
 * Original: 0x002B7710 - 0x002B771B (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B7710(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B7710: ;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002B7717u); RECOMP_ABI_CALL(0x002C41D0u, sub_002C41D0); /* call 0x002C41D0 */

loc_002B7717: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002B7720
 * Original: 0x002B7720 - 0x002B772A (10 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B7720(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B7720: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002B7726u); RECOMP_ABI_CALL(0x002C41E0u, sub_002C41E0); /* call 0x002C41E0 */

loc_002B7726: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002B7730
 * Original: 0x002B7730 - 0x002B773B (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B7730(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B7730: ;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002B7737u); RECOMP_ABI_CALL(0x002C41F0u, sub_002C41F0); /* call 0x002C41F0 */

loc_002B7737: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002B7740
 * Original: 0x002B7740 - 0x002B7748 (8 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B7740(void)
{

loc_002B7740: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002B7746u); RECOMP_ABI_CALL(0x002C4CD0u, sub_002C4CD0); /* call 0x002C4CD0 */

loc_002B7746: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002B7750
 * Original: 0x002B7750 - 0x002B7758 (8 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B7750(void)
{

loc_002B7750: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002B7756u); RECOMP_ABI_CALL(0x002C4DD0u, sub_002C4DD0); /* call 0x002C4DD0 */

loc_002B7756: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002B7760
 * Original: 0x002B7760 - 0x002B776E (14 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B7760(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B7760: ;
    eax = (uint32_t)(int32_t)SMEM8(esp + 8);
    MEM32(esp + 8) = eax;
    g_seh_ebp = ebp; sub_002C4460(); return; /* tail jmp 0x002C4460 */

}

/**
 * sub_002B7770
 * Original: 0x002B7770 - 0x002B777A (10 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B7770(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B7770: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002B7776u); RECOMP_ABI_CALL(0x002C4200u, sub_002C4200); /* call 0x002C4200 */

loc_002B7776: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002B7780
 * Original: 0x002B7780 - 0x002B778A (10 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B7780(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B7780: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002B7786u); RECOMP_ABI_CALL(0x002C4230u, sub_002C4230); /* call 0x002C4230 */

loc_002B7786: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002B7790
 * Original: 0x002B7790 - 0x002B779B (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B7790(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B7790: ;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002B7797u); RECOMP_ABI_CALL(0x002C4270u, sub_002C4270); /* call 0x002C4270 */

loc_002B7797: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002B77A0
 * Original: 0x002B77A0 - 0x002B77AA (10 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B77A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B77A0: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002B77A6u); RECOMP_ABI_CALL(0x002C42C0u, sub_002C42C0); /* call 0x002C42C0 */

loc_002B77A6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002B77B0
 * Original: 0x002B77B0 - 0x002B77BA (10 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B77B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B77B0: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002B77B6u); RECOMP_ABI_CALL(0x002C42F0u, sub_002C42F0); /* call 0x002C42F0 */

loc_002B77B6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002B77C0
 * Original: 0x002B77C0 - 0x002B77CA (10 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B77C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B77C0: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002B77C6u); RECOMP_ABI_CALL(0x002C4330u, sub_002C4330); /* call 0x002C4330 */

loc_002B77C6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002B77D0
 * Original: 0x002B77D0 - 0x002B77DB (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B77D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B77D0: ;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002B77D7u); RECOMP_ABI_CALL(0x002C4380u, sub_002C4380); /* call 0x002C4380 */

loc_002B77D7: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002B77E0
 * Original: 0x002B77E0 - 0x002B77EA (10 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B77E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B77E0: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002B77E6u); RECOMP_ABI_CALL(0x002C43D0u, sub_002C43D0); /* call 0x002C43D0 */

loc_002B77E6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002B77F0
 * Original: 0x002B77F0 - 0x002B77F8 (8 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B77F0(void)
{

loc_002B77F0: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002B77F6u); RECOMP_ABI_CALL(0x002C4EA0u, sub_002C4EA0); /* call 0x002C4EA0 */

loc_002B77F6: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002B7800
 * Original: 0x002B7800 - 0x002B780A (10 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B7800(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B7800: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002B7806u); RECOMP_ABI_CALL(0x002C4400u, sub_002C4400); /* call 0x002C4400 */

loc_002B7806: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002B7810
 * Original: 0x002B7810 - 0x002B7825 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B7810(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B7810: ;
    eax = MEM32(0x51DDD0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002B781Bu); RECOMP_ABI_CALL(0x002C3A10u, sub_002C3A10); /* call 0x002C3A10 */

loc_002B781B: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002B7821u); RECOMP_ABI_CALL(0x002C5680u, sub_002C5680); /* call 0x002C5680 */

loc_002B7821: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002B7830
 * Original: 0x002B7830 - 0x002B7845 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B7830(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B7830: ;
    eax = MEM32(0x51DDD0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002B783Bu); RECOMP_ABI_CALL(0x002C3A10u, sub_002C3A10); /* call 0x002C3A10 */

loc_002B783B: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002B7841u); RECOMP_ABI_CALL(0x002C5690u, sub_002C5690); /* call 0x002C5690 */

loc_002B7841: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002B7850
 * Original: 0x002B7850 - 0x002B786A (26 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B7850(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B7850: ;
    ecx = MEM32(0x51DDD0);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002B785Du); RECOMP_ABI_CALL(0x002C3A10u, sub_002C3A10); /* call 0x002C3A10 */

loc_002B785D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x002B7866u); RECOMP_ABI_CALL(0x002C56D0u, sub_002C56D0); /* call 0x002C56D0 */

loc_002B7866: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002B7870
 * Original: 0x002B7870 - 0x002B788A (26 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B7870(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B7870: ;
    ecx = MEM32(0x51DDD0);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002B787Du); RECOMP_ABI_CALL(0x002C3A10u, sub_002C3A10); /* call 0x002C3A10 */

loc_002B787D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x002B7886u); RECOMP_ABI_CALL(0x002C56E0u, sub_002C56E0); /* call 0x002C56E0 */

loc_002B7886: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002B7890
 * Original: 0x002B7890 - 0x002B78AA (26 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B7890(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B7890: ;
    ecx = MEM32(0x51DDD0);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002B789Du); RECOMP_ABI_CALL(0x002C3A10u, sub_002C3A10); /* call 0x002C3A10 */

loc_002B789D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x002B78A6u); RECOMP_ABI_CALL(0x002C56F0u, sub_002C56F0); /* call 0x002C56F0 */

loc_002B78A6: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002B78B0
 * Original: 0x002B78B0 - 0x002B78C5 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B78B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B78B0: ;
    eax = MEM32(0x51DDD0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002B78BBu); RECOMP_ABI_CALL(0x002C3A10u, sub_002C3A10); /* call 0x002C3A10 */

loc_002B78BB: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002B78C1u); RECOMP_ABI_CALL(0x002C5700u, sub_002C5700); /* call 0x002C5700 */

loc_002B78C1: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002B78D0
 * Original: 0x002B78D0 - 0x002B78E5 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B78D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B78D0: ;
    eax = MEM32(0x51DDD0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002B78DBu); RECOMP_ABI_CALL(0x002C3A10u, sub_002C3A10); /* call 0x002C3A10 */

loc_002B78DB: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002B78E1u); RECOMP_ABI_CALL(0x002C5710u, sub_002C5710); /* call 0x002C5710 */

loc_002B78E1: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002B78F0
 * Original: 0x002B78F0 - 0x002B7905 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B78F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B78F0: ;
    eax = MEM32(0x51DDD0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002B78FBu); RECOMP_ABI_CALL(0x002C3A10u, sub_002C3A10); /* call 0x002C3A10 */

loc_002B78FB: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002B7901u); RECOMP_ABI_CALL(0x002C5720u, sub_002C5720); /* call 0x002C5720 */

loc_002B7901: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002B7910
 * Original: 0x002B7910 - 0x002B791D (13 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B7910(void)
{

loc_002B7910: ;
    eax = MEM32(0x51DDD0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002B791Bu); RECOMP_ABI_CALL(0x002C3D50u, sub_002C3D50); /* call 0x002C3D50 */

loc_002B791B: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002B7920
 * Original: 0x002B7920 - 0x002B7931 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B7920(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B7920: ;
    ecx = MEM32(0x51DDD0);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002B792Du); RECOMP_ABI_CALL(0x002C3CD0u, sub_002C3CD0); /* call 0x002C3CD0 */

loc_002B792D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002B7940
 * Original: 0x002B7940 - 0x002B796E (46 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B7940(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B7940: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002B7946u); RECOMP_ABI_CALL(0x002C5A90u, sub_002C5A90); /* call 0x002C5A90 */

loc_002B7946: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 8);
    PUSH32(esp, eax);
    eax = MEM32(0x51DDD0);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002B7960u); RECOMP_ABI_CALL(0x002C3BF0u, sub_002C3BF0); /* call 0x002C3BF0 */

loc_002B7960: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = eax;
    PUSH32(esp, 0x002B796Au); RECOMP_ABI_CALL(0x002C5AA0u, sub_002C5AA0); /* call 0x002C5AA0 */

loc_002B796A: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002B7970
 * Original: 0x002B7970 - 0x002B798E (30 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B7970(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B7970: ;
    PUSH32(esp, 0x002B7975u); RECOMP_ABI_CALL(0x002C5A90u, sub_002C5A90); /* call 0x002C5A90 */

loc_002B7975: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(0x51DDD0);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002B7986u); RECOMP_ABI_CALL(0x002C3820u, sub_002C3820); /* call 0x002C3820 */

loc_002B7986: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_002C5AA0(); return; /* tail jmp 0x002C5AA0 */

}

/**
 * sub_002B7990
 * Original: 0x002B7990 - 0x002B79B5 (37 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B7990(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B7990: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002B7996u); RECOMP_ABI_CALL(0x002C5A90u, sub_002C5A90); /* call 0x002C5A90 */

loc_002B7996: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(0x51DDD0);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002B79A7u); RECOMP_ABI_CALL(0x002C3870u, sub_002C3870); /* call 0x002C3870 */

loc_002B79A7: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = eax;
    PUSH32(esp, 0x002B79B1u); RECOMP_ABI_CALL(0x002C5AA0u, sub_002C5AA0); /* call 0x002C5AA0 */

loc_002B79B1: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002B79C0
 * Original: 0x002B79C0 - 0x002B79DC (28 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B79C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B79C0: ;
    PUSH32(esp, 0x002B79C5u); RECOMP_ABI_CALL(0x002C5A90u, sub_002C5A90); /* call 0x002C5A90 */

loc_002B79C5: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002B79D4u); RECOMP_ABI_CALL(0x002C54F0u, sub_002C54F0); /* call 0x002C54F0 */

loc_002B79D4: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_002C5AA0(); return; /* tail jmp 0x002C5AA0 */

}

/**
 * sub_002B79E0
 * Original: 0x002B79E0 - 0x002B7A01 (33 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B79E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B79E0: ;
    PUSH32(esp, 0x002B79E5u); RECOMP_ABI_CALL(0x002C5A90u, sub_002C5A90); /* call 0x002C5A90 */

loc_002B79E5: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 8);
    edx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x002B79F9u); RECOMP_ABI_CALL(0x002C5540u, sub_002C5540); /* call 0x002C5540 */

loc_002B79F9: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_002C5AA0(); return; /* tail jmp 0x002C5AA0 */

}

/**
 * sub_002B7A10
 * Original: 0x002B7A10 - 0x002B7A31 (33 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B7A10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B7A10: ;
    PUSH32(esp, 0x002B7A15u); RECOMP_ABI_CALL(0x002C5A90u, sub_002C5A90); /* call 0x002C5A90 */

loc_002B7A15: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 8);
    edx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x002B7A29u); RECOMP_ABI_CALL(0x002C5580u, sub_002C5580); /* call 0x002C5580 */

loc_002B7A29: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_002C5AA0(); return; /* tail jmp 0x002C5AA0 */

}

/**
 * sub_002B7A40
 * Original: 0x002B7A40 - 0x002B7A61 (33 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B7A40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B7A40: ;
    PUSH32(esp, 0x002B7A45u); RECOMP_ABI_CALL(0x002C5A90u, sub_002C5A90); /* call 0x002C5A90 */

loc_002B7A45: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 8);
    edx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x002B7A59u); RECOMP_ABI_CALL(0x002C55C0u, sub_002C55C0); /* call 0x002C55C0 */

loc_002B7A59: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_002C5AA0(); return; /* tail jmp 0x002C5AA0 */

}

/**
 * sub_002B7A70
 * Original: 0x002B7A70 - 0x002B7A87 (23 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B7A70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B7A70: ;
    PUSH32(esp, 0x002B7A75u); RECOMP_ABI_CALL(0x002C5A90u, sub_002C5A90); /* call 0x002C5A90 */

loc_002B7A75: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002B7A7Fu); RECOMP_ABI_CALL(0x002C5160u, sub_002C5160); /* call 0x002C5160 */

loc_002B7A7F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_002C5AA0(); return; /* tail jmp 0x002C5AA0 */

}

/**
 * sub_002B7A90
 * Original: 0x002B7A90 - 0x002B7AAC (28 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B7A90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B7A90: ;
    PUSH32(esp, 0x002B7A95u); RECOMP_ABI_CALL(0x002C5A90u, sub_002C5A90); /* call 0x002C5A90 */

loc_002B7A95: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002B7AA4u); RECOMP_ABI_CALL(0x002C3F20u, sub_002C3F20); /* call 0x002C3F20 */

loc_002B7AA4: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_002C5AA0(); return; /* tail jmp 0x002C5AA0 */

}

/**
 * sub_002B7AB0
 * Original: 0x002B7AB0 - 0x002B7ACE (30 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B7AB0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B7AB0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002B7AB6u); RECOMP_ABI_CALL(0x002C5A90u, sub_002C5A90); /* call 0x002C5A90 */

loc_002B7AB6: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002B7AC0u); RECOMP_ABI_CALL(0x002C3F80u, sub_002C3F80); /* call 0x002C3F80 */

loc_002B7AC0: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = eax;
    PUSH32(esp, 0x002B7ACAu); RECOMP_ABI_CALL(0x002C5AA0u, sub_002C5AA0); /* call 0x002C5AA0 */

loc_002B7ACA: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002B7AD0
 * Original: 0x002B7AD0 - 0x002B7AEE (30 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B7AD0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B7AD0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002B7AD6u); RECOMP_ABI_CALL(0x002C5A90u, sub_002C5A90); /* call 0x002C5A90 */

loc_002B7AD6: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002B7AE0u); RECOMP_ABI_CALL(0x002C3FB0u, sub_002C3FB0); /* call 0x002C3FB0 */

loc_002B7AE0: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = eax;
    PUSH32(esp, 0x002B7AEAu); RECOMP_ABI_CALL(0x002C5AA0u, sub_002C5AA0); /* call 0x002C5AA0 */

loc_002B7AEA: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002B7AF0
 * Original: 0x002B7AF0 - 0x002B7B0E (30 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B7AF0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B7AF0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002B7AF6u); RECOMP_ABI_CALL(0x002C5A90u, sub_002C5A90); /* call 0x002C5A90 */

loc_002B7AF6: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002B7B00u); RECOMP_ABI_CALL(0x002C3FE0u, sub_002C3FE0); /* call 0x002C3FE0 */

loc_002B7B00: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = eax;
    PUSH32(esp, 0x002B7B0Au); RECOMP_ABI_CALL(0x002C5AA0u, sub_002C5AA0); /* call 0x002C5AA0 */

loc_002B7B0A: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002B7B10
 * Original: 0x002B7B10 - 0x002B7B2C (28 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B7B10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B7B10: ;
    PUSH32(esp, 0x002B7B15u); RECOMP_ABI_CALL(0x002C5A90u, sub_002C5A90); /* call 0x002C5A90 */

loc_002B7B15: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002B7B24u); RECOMP_ABI_CALL(0x002C4000u, sub_002C4000); /* call 0x002C4000 */

loc_002B7B24: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_002C5AA0(); return; /* tail jmp 0x002C5AA0 */

}

/**
 * sub_002B7B30
 * Original: 0x002B7B30 - 0x002B7B4E (30 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B7B30(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B7B30: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002B7B36u); RECOMP_ABI_CALL(0x002C5A90u, sub_002C5A90); /* call 0x002C5A90 */

loc_002B7B36: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002B7B40u); RECOMP_ABI_CALL(0x002C4010u, sub_002C4010); /* call 0x002C4010 */

loc_002B7B40: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = eax;
    PUSH32(esp, 0x002B7B4Au); RECOMP_ABI_CALL(0x002C5AA0u, sub_002C5AA0); /* call 0x002C5AA0 */

loc_002B7B4A: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002B7B50
 * Original: 0x002B7B50 - 0x002B7B6C (28 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B7B50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B7B50: ;
    PUSH32(esp, 0x002B7B55u); RECOMP_ABI_CALL(0x002C5A90u, sub_002C5A90); /* call 0x002C5A90 */

loc_002B7B55: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002B7B64u); RECOMP_ABI_CALL(0x002C4C40u, sub_002C4C40); /* call 0x002C4C40 */

loc_002B7B64: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_002C5AA0(); return; /* tail jmp 0x002C5AA0 */

}

/**
 * sub_002B7B70
 * Original: 0x002B7B70 - 0x002B7B8E (30 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B7B70(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B7B70: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002B7B76u); RECOMP_ABI_CALL(0x002C5A90u, sub_002C5A90); /* call 0x002C5A90 */

loc_002B7B76: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002B7B80u); RECOMP_ABI_CALL(0x002C40C0u, sub_002C40C0); /* call 0x002C40C0 */

loc_002B7B80: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = eax;
    PUSH32(esp, 0x002B7B8Au); RECOMP_ABI_CALL(0x002C5AA0u, sub_002C5AA0); /* call 0x002C5AA0 */

loc_002B7B8A: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002B7B90
 * Original: 0x002B7B90 - 0x002B7BB1 (33 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B7B90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B7B90: ;
    PUSH32(esp, 0x002B7B95u); RECOMP_ABI_CALL(0x002C5A90u, sub_002C5A90); /* call 0x002C5A90 */

loc_002B7B95: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 8);
    edx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x002B7BA9u); RECOMP_ABI_CALL(0x002C4020u, sub_002C4020); /* call 0x002C4020 */

loc_002B7BA9: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_002C5AA0(); return; /* tail jmp 0x002C5AA0 */

}

/**
 * sub_002B7BC0
 * Original: 0x002B7BC0 - 0x002B7BE3 (35 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B7BC0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B7BC0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002B7BC6u); RECOMP_ABI_CALL(0x002C5A90u, sub_002C5A90); /* call 0x002C5A90 */

loc_002B7BC6: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002B7BD5u); RECOMP_ABI_CALL(0x002C40D0u, sub_002C40D0); /* call 0x002C40D0 */

loc_002B7BD5: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = eax;
    PUSH32(esp, 0x002B7BDFu); RECOMP_ABI_CALL(0x002C5AA0u, sub_002C5AA0); /* call 0x002C5AA0 */

loc_002B7BDF: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002B7BF0
 * Original: 0x002B7BF0 - 0x002B7C0C (28 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B7BF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B7BF0: ;
    PUSH32(esp, 0x002B7BF5u); RECOMP_ABI_CALL(0x002C5A90u, sub_002C5A90); /* call 0x002C5A90 */

loc_002B7BF5: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002B7C04u); RECOMP_ABI_CALL(0x002C4100u, sub_002C4100); /* call 0x002C4100 */

loc_002B7C04: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_002C5AA0(); return; /* tail jmp 0x002C5AA0 */

}

/**
 * sub_002B7C10
 * Original: 0x002B7C10 - 0x002B7C2C (28 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B7C10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B7C10: ;
    PUSH32(esp, 0x002B7C15u); RECOMP_ABI_CALL(0x002C5A90u, sub_002C5A90); /* call 0x002C5A90 */

loc_002B7C15: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002B7C24u); RECOMP_ABI_CALL(0x002C4150u, sub_002C4150); /* call 0x002C4150 */

loc_002B7C24: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_002C5AA0(); return; /* tail jmp 0x002C5AA0 */

}

/**
 * sub_002B7C30
 * Original: 0x002B7C30 - 0x002B7C4C (28 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B7C30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B7C30: ;
    PUSH32(esp, 0x002B7C35u); RECOMP_ABI_CALL(0x002C5A90u, sub_002C5A90); /* call 0x002C5A90 */

loc_002B7C35: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002B7C44u); RECOMP_ABI_CALL(0x002C4160u, sub_002C4160); /* call 0x002C4160 */

loc_002B7C44: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_002C5AA0(); return; /* tail jmp 0x002C5AA0 */

}

/**
 * sub_002B7C50
 * Original: 0x002B7C50 - 0x002B7C6C (28 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B7C50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B7C50: ;
    PUSH32(esp, 0x002B7C55u); RECOMP_ABI_CALL(0x002C5A90u, sub_002C5A90); /* call 0x002C5A90 */

loc_002B7C55: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002B7C64u); RECOMP_ABI_CALL(0x002C4170u, sub_002C4170); /* call 0x002C4170 */

loc_002B7C64: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_002C5AA0(); return; /* tail jmp 0x002C5AA0 */

}

/**
 * sub_002B7C70
 * Original: 0x002B7C70 - 0x002B7C8E (30 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B7C70(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B7C70: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002B7C76u); RECOMP_ABI_CALL(0x002C5A90u, sub_002C5A90); /* call 0x002C5A90 */

loc_002B7C76: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002B7C80u); RECOMP_ABI_CALL(0x002C4180u, sub_002C4180); /* call 0x002C4180 */

loc_002B7C80: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = eax;
    PUSH32(esp, 0x002B7C8Au); RECOMP_ABI_CALL(0x002C5AA0u, sub_002C5AA0); /* call 0x002C5AA0 */

loc_002B7C8A: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002B7C90
 * Original: 0x002B7C90 - 0x002B7CAE (30 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B7C90(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B7C90: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002B7C96u); RECOMP_ABI_CALL(0x002C5A90u, sub_002C5A90); /* call 0x002C5A90 */

loc_002B7C96: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002B7CA0u); RECOMP_ABI_CALL(0x002C4190u, sub_002C4190); /* call 0x002C4190 */

loc_002B7CA0: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = eax;
    PUSH32(esp, 0x002B7CAAu); RECOMP_ABI_CALL(0x002C5AA0u, sub_002C5AA0); /* call 0x002C5AA0 */

loc_002B7CAA: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002B7CB0
 * Original: 0x002B7CB0 - 0x002B7CCE (30 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B7CB0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B7CB0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002B7CB6u); RECOMP_ABI_CALL(0x002C5A90u, sub_002C5A90); /* call 0x002C5A90 */

loc_002B7CB6: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002B7CC0u); RECOMP_ABI_CALL(0x002C41A0u, sub_002C41A0); /* call 0x002C41A0 */

loc_002B7CC0: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = eax;
    PUSH32(esp, 0x002B7CCAu); RECOMP_ABI_CALL(0x002C5AA0u, sub_002C5AA0); /* call 0x002C5AA0 */

loc_002B7CCA: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002B7CD0
 * Original: 0x002B7CD0 - 0x002B7CEC (28 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B7CD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B7CD0: ;
    PUSH32(esp, 0x002B7CD5u); RECOMP_ABI_CALL(0x002C5A90u, sub_002C5A90); /* call 0x002C5A90 */

loc_002B7CD5: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002B7CE4u); RECOMP_ABI_CALL(0x002C41B0u, sub_002C41B0); /* call 0x002C41B0 */

loc_002B7CE4: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_002C5AA0(); return; /* tail jmp 0x002C5AA0 */

}

/**
 * sub_002B7CF0
 * Original: 0x002B7CF0 - 0x002B7D0E (30 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B7CF0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B7CF0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002B7CF6u); RECOMP_ABI_CALL(0x002C5A90u, sub_002C5A90); /* call 0x002C5A90 */

loc_002B7CF6: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002B7D00u); RECOMP_ABI_CALL(0x002C41C0u, sub_002C41C0); /* call 0x002C41C0 */

loc_002B7D00: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = eax;
    PUSH32(esp, 0x002B7D0Au); RECOMP_ABI_CALL(0x002C5AA0u, sub_002C5AA0); /* call 0x002C5AA0 */

loc_002B7D0A: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002B7D10
 * Original: 0x002B7D10 - 0x002B7D2C (28 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B7D10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B7D10: ;
    PUSH32(esp, 0x002B7D15u); RECOMP_ABI_CALL(0x002C5A90u, sub_002C5A90); /* call 0x002C5A90 */

loc_002B7D15: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002B7D24u); RECOMP_ABI_CALL(0x002C41D0u, sub_002C41D0); /* call 0x002C41D0 */

loc_002B7D24: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_002C5AA0(); return; /* tail jmp 0x002C5AA0 */

}

/**
 * sub_002B7D30
 * Original: 0x002B7D30 - 0x002B7D4E (30 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B7D30(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B7D30: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002B7D36u); RECOMP_ABI_CALL(0x002C5A90u, sub_002C5A90); /* call 0x002C5A90 */

loc_002B7D36: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002B7D40u); RECOMP_ABI_CALL(0x002C41E0u, sub_002C41E0); /* call 0x002C41E0 */

loc_002B7D40: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = eax;
    PUSH32(esp, 0x002B7D4Au); RECOMP_ABI_CALL(0x002C5AA0u, sub_002C5AA0); /* call 0x002C5AA0 */

loc_002B7D4A: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002B7D50
 * Original: 0x002B7D50 - 0x002B7D6C (28 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B7D50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B7D50: ;
    PUSH32(esp, 0x002B7D55u); RECOMP_ABI_CALL(0x002C5A90u, sub_002C5A90); /* call 0x002C5A90 */

loc_002B7D55: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002B7D64u); RECOMP_ABI_CALL(0x002C41F0u, sub_002C41F0); /* call 0x002C41F0 */

loc_002B7D64: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_002C5AA0(); return; /* tail jmp 0x002C5AA0 */

}

/**
 * sub_002B7D70
 * Original: 0x002B7D70 - 0x002B7D87 (23 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B7D70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B7D70: ;
    PUSH32(esp, 0x002B7D75u); RECOMP_ABI_CALL(0x002C5A90u, sub_002C5A90); /* call 0x002C5A90 */

loc_002B7D75: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002B7D7Fu); RECOMP_ABI_CALL(0x002C4CD0u, sub_002C4CD0); /* call 0x002C4CD0 */

loc_002B7D7F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_002C5AA0(); return; /* tail jmp 0x002C5AA0 */

}

/**
 * sub_002B7D90
 * Original: 0x002B7D90 - 0x002B7DA7 (23 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B7D90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B7D90: ;
    PUSH32(esp, 0x002B7D95u); RECOMP_ABI_CALL(0x002C5A90u, sub_002C5A90); /* call 0x002C5A90 */

loc_002B7D95: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002B7D9Fu); RECOMP_ABI_CALL(0x002C4DD0u, sub_002C4DD0); /* call 0x002C4DD0 */

loc_002B7D9F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_002C5AA0(); return; /* tail jmp 0x002C5AA0 */

}

/**
 * sub_002B7DB0
 * Original: 0x002B7DB0 - 0x002B7DCE (30 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B7DB0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B7DB0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002B7DB6u); RECOMP_ABI_CALL(0x002C5A90u, sub_002C5A90); /* call 0x002C5A90 */

loc_002B7DB6: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002B7DC0u); RECOMP_ABI_CALL(0x002C4200u, sub_002C4200); /* call 0x002C4200 */

loc_002B7DC0: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = eax;
    PUSH32(esp, 0x002B7DCAu); RECOMP_ABI_CALL(0x002C5AA0u, sub_002C5AA0); /* call 0x002C5AA0 */

loc_002B7DCA: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002B7DD0
 * Original: 0x002B7DD0 - 0x002B7DEE (30 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B7DD0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B7DD0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002B7DD6u); RECOMP_ABI_CALL(0x002C5A90u, sub_002C5A90); /* call 0x002C5A90 */

loc_002B7DD6: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002B7DE0u); RECOMP_ABI_CALL(0x002C4230u, sub_002C4230); /* call 0x002C4230 */

loc_002B7DE0: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = eax;
    PUSH32(esp, 0x002B7DEAu); RECOMP_ABI_CALL(0x002C5AA0u, sub_002C5AA0); /* call 0x002C5AA0 */

loc_002B7DEA: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002B7DF0
 * Original: 0x002B7DF0 - 0x002B7E13 (35 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B7DF0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B7DF0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002B7DF6u); RECOMP_ABI_CALL(0x002C5A90u, sub_002C5A90); /* call 0x002C5A90 */

loc_002B7DF6: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002B7E05u); RECOMP_ABI_CALL(0x002C4270u, sub_002C4270); /* call 0x002C4270 */

loc_002B7E05: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = eax;
    PUSH32(esp, 0x002B7E0Fu); RECOMP_ABI_CALL(0x002C5AA0u, sub_002C5AA0); /* call 0x002C5AA0 */

loc_002B7E0F: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002B7E20
 * Original: 0x002B7E20 - 0x002B7E3E (30 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B7E20(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B7E20: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002B7E26u); RECOMP_ABI_CALL(0x002C5A90u, sub_002C5A90); /* call 0x002C5A90 */

loc_002B7E26: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002B7E30u); RECOMP_ABI_CALL(0x002C42C0u, sub_002C42C0); /* call 0x002C42C0 */

loc_002B7E30: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = eax;
    PUSH32(esp, 0x002B7E3Au); RECOMP_ABI_CALL(0x002C5AA0u, sub_002C5AA0); /* call 0x002C5AA0 */

loc_002B7E3A: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002B7E40
 * Original: 0x002B7E40 - 0x002B7E5E (30 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B7E40(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B7E40: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002B7E46u); RECOMP_ABI_CALL(0x002C5A90u, sub_002C5A90); /* call 0x002C5A90 */

loc_002B7E46: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002B7E50u); RECOMP_ABI_CALL(0x002C42F0u, sub_002C42F0); /* call 0x002C42F0 */

loc_002B7E50: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = eax;
    PUSH32(esp, 0x002B7E5Au); RECOMP_ABI_CALL(0x002C5AA0u, sub_002C5AA0); /* call 0x002C5AA0 */

loc_002B7E5A: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002B7E60
 * Original: 0x002B7E60 - 0x002B7E7E (30 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B7E60(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B7E60: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002B7E66u); RECOMP_ABI_CALL(0x002C5A90u, sub_002C5A90); /* call 0x002C5A90 */

loc_002B7E66: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002B7E70u); RECOMP_ABI_CALL(0x002C4330u, sub_002C4330); /* call 0x002C4330 */

loc_002B7E70: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = eax;
    PUSH32(esp, 0x002B7E7Au); RECOMP_ABI_CALL(0x002C5AA0u, sub_002C5AA0); /* call 0x002C5AA0 */

loc_002B7E7A: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002B7E80
 * Original: 0x002B7E80 - 0x002B7EA3 (35 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B7E80(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B7E80: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002B7E86u); RECOMP_ABI_CALL(0x002C5A90u, sub_002C5A90); /* call 0x002C5A90 */

loc_002B7E86: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002B7E95u); RECOMP_ABI_CALL(0x002C4380u, sub_002C4380); /* call 0x002C4380 */

loc_002B7E95: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = eax;
    PUSH32(esp, 0x002B7E9Fu); RECOMP_ABI_CALL(0x002C5AA0u, sub_002C5AA0); /* call 0x002C5AA0 */

loc_002B7E9F: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002B7EB0
 * Original: 0x002B7EB0 - 0x002B7ECE (30 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B7EB0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B7EB0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002B7EB6u); RECOMP_ABI_CALL(0x002C5A90u, sub_002C5A90); /* call 0x002C5A90 */

loc_002B7EB6: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002B7EC0u); RECOMP_ABI_CALL(0x002C43D0u, sub_002C43D0); /* call 0x002C43D0 */

loc_002B7EC0: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = eax;
    PUSH32(esp, 0x002B7ECAu); RECOMP_ABI_CALL(0x002C5AA0u, sub_002C5AA0); /* call 0x002C5AA0 */

loc_002B7ECA: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002B7ED0
 * Original: 0x002B7ED0 - 0x002B7EE7 (23 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B7ED0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B7ED0: ;
    PUSH32(esp, 0x002B7ED5u); RECOMP_ABI_CALL(0x002C5A90u, sub_002C5A90); /* call 0x002C5A90 */

loc_002B7ED5: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002B7EDFu); RECOMP_ABI_CALL(0x002C4EA0u, sub_002C4EA0); /* call 0x002C4EA0 */

loc_002B7EDF: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_002C5AA0(); return; /* tail jmp 0x002C5AA0 */

}

/**
 * sub_002B7EF0
 * Original: 0x002B7EF0 - 0x002B7F0E (30 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B7EF0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B7EF0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002B7EF6u); RECOMP_ABI_CALL(0x002C5A90u, sub_002C5A90); /* call 0x002C5A90 */

loc_002B7EF6: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002B7F00u); RECOMP_ABI_CALL(0x002C4400u, sub_002C4400); /* call 0x002C4400 */

loc_002B7F00: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = eax;
    PUSH32(esp, 0x002B7F0Au); RECOMP_ABI_CALL(0x002C5AA0u, sub_002C5AA0); /* call 0x002C5AA0 */

loc_002B7F0A: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002B7F10
 * Original: 0x002B7F10 - 0x002B7F2E (30 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B7F10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B7F10: ;
    PUSH32(esp, 0x002B7F15u); RECOMP_ABI_CALL(0x002C5A90u, sub_002C5A90); /* call 0x002C5A90 */

loc_002B7F15: ;
    eax = MEM32(0x51DDD0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002B7F20u); RECOMP_ABI_CALL(0x002C3A10u, sub_002C3A10); /* call 0x002C3A10 */

loc_002B7F20: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002B7F26u); RECOMP_ABI_CALL(0x002C5680u, sub_002C5680); /* call 0x002C5680 */

loc_002B7F26: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_002C5AA0(); return; /* tail jmp 0x002C5AA0 */

}

/**
 * sub_002B7F30
 * Original: 0x002B7F30 - 0x002B7F4E (30 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B7F30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B7F30: ;
    PUSH32(esp, 0x002B7F35u); RECOMP_ABI_CALL(0x002C5A90u, sub_002C5A90); /* call 0x002C5A90 */

loc_002B7F35: ;
    eax = MEM32(0x51DDD0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002B7F40u); RECOMP_ABI_CALL(0x002C3A10u, sub_002C3A10); /* call 0x002C3A10 */

loc_002B7F40: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002B7F46u); RECOMP_ABI_CALL(0x002C5690u, sub_002C5690); /* call 0x002C5690 */

loc_002B7F46: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_002C5AA0(); return; /* tail jmp 0x002C5AA0 */

}

/**
 * sub_002B7F50
 * Original: 0x002B7F50 - 0x002B7F77 (39 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B7F50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B7F50: ;
    PUSH32(esp, 0x002B7F55u); RECOMP_ABI_CALL(0x002C5A90u, sub_002C5A90); /* call 0x002C5A90 */

loc_002B7F55: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(0x51DDD0);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002B7F66u); RECOMP_ABI_CALL(0x002C3A10u, sub_002C3A10); /* call 0x002C3A10 */

loc_002B7F66: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x002B7F6Fu); RECOMP_ABI_CALL(0x002C56D0u, sub_002C56D0); /* call 0x002C56D0 */

loc_002B7F6F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_002C5AA0(); return; /* tail jmp 0x002C5AA0 */

}

/**
 * sub_002B7F80
 * Original: 0x002B7F80 - 0x002B7FA7 (39 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B7F80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B7F80: ;
    PUSH32(esp, 0x002B7F85u); RECOMP_ABI_CALL(0x002C5A90u, sub_002C5A90); /* call 0x002C5A90 */

loc_002B7F85: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(0x51DDD0);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002B7F96u); RECOMP_ABI_CALL(0x002C3A10u, sub_002C3A10); /* call 0x002C3A10 */

loc_002B7F96: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x002B7F9Fu); RECOMP_ABI_CALL(0x002C56E0u, sub_002C56E0); /* call 0x002C56E0 */

loc_002B7F9F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_002C5AA0(); return; /* tail jmp 0x002C5AA0 */

}

/**
 * sub_002B7FB0
 * Original: 0x002B7FB0 - 0x002B7FD7 (39 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B7FB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B7FB0: ;
    PUSH32(esp, 0x002B7FB5u); RECOMP_ABI_CALL(0x002C5A90u, sub_002C5A90); /* call 0x002C5A90 */

loc_002B7FB5: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(0x51DDD0);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002B7FC6u); RECOMP_ABI_CALL(0x002C3A10u, sub_002C3A10); /* call 0x002C3A10 */

loc_002B7FC6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x002B7FCFu); RECOMP_ABI_CALL(0x002C56F0u, sub_002C56F0); /* call 0x002C56F0 */

loc_002B7FCF: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_002C5AA0(); return; /* tail jmp 0x002C5AA0 */

}

/**
 * sub_002B7FE0
 * Original: 0x002B7FE0 - 0x002B8005 (37 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B7FE0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B7FE0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002B7FE6u); RECOMP_ABI_CALL(0x002C5A90u, sub_002C5A90); /* call 0x002C5A90 */

loc_002B7FE6: ;
    eax = MEM32(0x51DDD0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002B7FF1u); RECOMP_ABI_CALL(0x002C3A10u, sub_002C3A10); /* call 0x002C3A10 */

loc_002B7FF1: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002B7FF7u); RECOMP_ABI_CALL(0x002C5700u, sub_002C5700); /* call 0x002C5700 */

loc_002B7FF7: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = eax;
    PUSH32(esp, 0x002B8001u); RECOMP_ABI_CALL(0x002C5AA0u, sub_002C5AA0); /* call 0x002C5AA0 */

loc_002B8001: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002B8010
 * Original: 0x002B8010 - 0x002B8035 (37 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B8010(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B8010: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002B8016u); RECOMP_ABI_CALL(0x002C5A90u, sub_002C5A90); /* call 0x002C5A90 */

loc_002B8016: ;
    eax = MEM32(0x51DDD0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002B8021u); RECOMP_ABI_CALL(0x002C3A10u, sub_002C3A10); /* call 0x002C3A10 */

loc_002B8021: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002B8027u); RECOMP_ABI_CALL(0x002C5710u, sub_002C5710); /* call 0x002C5710 */

loc_002B8027: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = eax;
    PUSH32(esp, 0x002B8031u); RECOMP_ABI_CALL(0x002C5AA0u, sub_002C5AA0); /* call 0x002C5AA0 */

loc_002B8031: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002B8040
 * Original: 0x002B8040 - 0x002B8065 (37 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B8040(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B8040: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002B8046u); RECOMP_ABI_CALL(0x002C5A90u, sub_002C5A90); /* call 0x002C5A90 */

loc_002B8046: ;
    eax = MEM32(0x51DDD0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002B8051u); RECOMP_ABI_CALL(0x002C3A10u, sub_002C3A10); /* call 0x002C3A10 */

loc_002B8051: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002B8057u); RECOMP_ABI_CALL(0x002C5720u, sub_002C5720); /* call 0x002C5720 */

loc_002B8057: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = eax;
    PUSH32(esp, 0x002B8061u); RECOMP_ABI_CALL(0x002C5AA0u, sub_002C5AA0); /* call 0x002C5AA0 */

loc_002B8061: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002B8070
 * Original: 0x002B8070 - 0x002B8088 (24 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B8070(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B8070: ;
    PUSH32(esp, 0x002B8075u); RECOMP_ABI_CALL(0x002C5A90u, sub_002C5A90); /* call 0x002C5A90 */

loc_002B8075: ;
    eax = MEM32(0x51DDD0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002B8080u); RECOMP_ABI_CALL(0x002C3D50u, sub_002C3D50); /* call 0x002C3D50 */

loc_002B8080: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_002C5AA0(); return; /* tail jmp 0x002C5AA0 */

}

/**
 * sub_002B8090
 * Original: 0x002B8090 - 0x002B80AE (30 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B8090(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B8090: ;
    PUSH32(esp, 0x002B8095u); RECOMP_ABI_CALL(0x002C5A90u, sub_002C5A90); /* call 0x002C5A90 */

loc_002B8095: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(0x51DDD0);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002B80A6u); RECOMP_ABI_CALL(0x002C3CD0u, sub_002C3CD0); /* call 0x002C3CD0 */

loc_002B80A6: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_002C5AA0(); return; /* tail jmp 0x002C5AA0 */

}

/**
 * sub_002B80B0
 * Original: 0x002B80B0 - 0x002B80B5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B80B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B80B0: ;
    g_seh_ebp = ebp; sub_002B6B00(); return; /* tail jmp 0x002B6B00 */

}

/**
 * sub_002B80C0
 * Original: 0x002B80C0 - 0x002B80E5 (37 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_002B80C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B80C0: ;
    eax = MEM32(0x735968);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B80E2; /* jne: not equal / not zero */

loc_002B80C9: ;
    MEM32(0x735968) = 1;
    PUSH32(esp, 0x002B80D8u); RECOMP_ABI_CALL(0x002B6B00u, sub_002B6B00); /* call 0x002B6B00 */

loc_002B80D8: ;
    MEM32(0x735968) = 0;

loc_002B80E2: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_002B80F0
 * Original: 0x002B80F0 - 0x002B80FA (10 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B80F0(void)
{

loc_002B80F0: ;
    ecx = MEM32(eax + 0xC);
    edx = MEM32(ecx + 0x50);
    eax = MEM32(edx + 8);
    esp += 4; return; /* ret */

}

/**
 * sub_002B8100
 * Original: 0x002B8100 - 0x002B811C (28 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B8100(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B8100: ;
    ecx = MEM32(esp + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B811B; /* je: equal / zero */

loc_002B8108: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B811B; /* je: equal / zero */

loc_002B8110: ;
    ecx = MEM32(ecx + 0xC);
    edx = MEM32(ecx + 0x50);
    ecx = MEM32(edx + 8);
    MEM32(eax) = ecx;

loc_002B811B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002B8140
 * Original: 0x002B8140 - 0x002B8158 (24 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B8140(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B8140: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B8157; /* je: equal / zero */

loc_002B8148: ;
    edx = MEM32(eax + 0xC);
    eax = MEM32(edx + 0x50);
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_002C6870(); return; /* tail jmp 0x002C6870 */

loc_002B8157: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002B8180
 * Original: 0x002B8180 - 0x002B8185 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B8180(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B8180: ;
    g_seh_ebp = ebp; sub_002C6860(); return; /* tail jmp 0x002C6860 */

}

/**
 * sub_002B8190
 * Original: 0x002B8190 - 0x002B8196 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B8190(void)
{

loc_002B8190: ;
    eax = MEM32(0x4C409C);
    esp += 4; return; /* ret */

}

/**
 * sub_002B81A0
 * Original: 0x002B81A0 - 0x002B81A5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B81A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B81A0: ;
    g_seh_ebp = ebp; sub_002C75C0(); return; /* tail jmp 0x002C75C0 */

}

/**
 * sub_002B81B0
 * Original: 0x002B81B0 - 0x002B81B5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B81B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B81B0: ;
    g_seh_ebp = ebp; sub_002C79C0(); return; /* tail jmp 0x002C79C0 */

}

/**
 * sub_002B81C0
 * Original: 0x002B81C0 - 0x002B81D4 (20 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B81C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B81C0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x002B81D0u); RECOMP_ABI_CALL(0x002C7820u, sub_002C7820); /* call 0x002C7820 */

loc_002B81D0: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002B81E0
 * Original: 0x002B81E0 - 0x002B81E6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B81E0(void)
{

loc_002B81E0: ;
    eax = 0x4C4050;
    esp += 4; return; /* ret */

}

/**
 * sub_002B81F0
 * Original: 0x002B81F0 - 0x002B81FF (15 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B81F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B81F0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x002B81F7u); RECOMP_ABI_CALL(0x002BE420u, sub_002BE420); /* call 0x002BE420 */

loc_002B81F7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_002C8240(); return; /* tail jmp 0x002C8240 */

}

/**
 * sub_002B8200
 * Original: 0x002B8200 - 0x002B8205 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B8200(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B8200: ;
    g_seh_ebp = ebp; sub_002C79D0(); return; /* tail jmp 0x002C79D0 */

}

/**
 * sub_002B8210
 * Original: 0x002B8210 - 0x002B8215 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B8210(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B8210: ;
    g_seh_ebp = ebp; sub_002C79F0(); return; /* tail jmp 0x002C79F0 */

}

/**
 * sub_002B8220
 * Original: 0x002B8220 - 0x002B8225 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B8220(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B8220: ;
    g_seh_ebp = ebp; sub_002C7A10(); return; /* tail jmp 0x002C7A10 */

}

/**
 * sub_002B8230
 * Original: 0x002B8230 - 0x002B8235 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B8230(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B8230: ;
    g_seh_ebp = ebp; sub_002C7A50(); return; /* tail jmp 0x002C7A50 */

}

/**
 * sub_002B8240
 * Original: 0x002B8240 - 0x002B8245 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B8240(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B8240: ;
    g_seh_ebp = ebp; sub_002C7A60(); return; /* tail jmp 0x002C7A60 */

}

/**
 * sub_002B8250
 * Original: 0x002B8250 - 0x002B8255 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B8250(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B8250: ;
    g_seh_ebp = ebp; sub_002C7A70(); return; /* tail jmp 0x002C7A70 */

}

/**
 * sub_002B8260
 * Original: 0x002B8260 - 0x002B8299 (57 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B8260(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B8260: ;
    eax = MEM32(0x7912FC);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = 1;
    if ((_fa == 0)) goto loc_002B8286; /* je: equal / zero */

loc_002B8270: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_002B828B; /* je: equal / zero */

loc_002B8273: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_002B8286; /* je: equal / zero */

loc_002B8276: ;
    PUSH32(esp, 0xFFFFFFFFu);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x002B827Fu); RECOMP_ABI_CALL(0x002BBF10u, sub_002BBF10); /* call 0x002BBF10 */

loc_002B827F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_002B8286: ;
    PUSH32(esp, 0x002B828Bu); RECOMP_ABI_CALL(0x002B4A00u, sub_002B4A00); /* call 0x002B4A00 */

loc_002B828B: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x002B8292u); RECOMP_ABI_CALL(0x002BBF10u, sub_002BBF10); /* call 0x002BBF10 */

loc_002B8292: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002B82A0
 * Original: 0x002B82A0 - 0x002B82AE (14 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B82A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B82A0: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = 2;
    if ((_fa != 0)) goto loc_002B82AD; /* jne: not equal / not zero */

loc_002B82A8: ;
    eax = 1;

loc_002B82AD: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002B82B0
 * Original: 0x002B82B0 - 0x002B82FA (74 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B82B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B82B0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = esi;
    PUSH32(esp, edi);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edi = 1;
    eax = 2;
    if ((_fa != 0)) goto loc_002B82C7; /* jne: not equal / not zero */

loc_002B82C5: ;
    eax = edi;

loc_002B82C7: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002B82CDu); RECOMP_ABI_CALL(0x002BBF10u, sub_002BBF10); /* call 0x002BBF10 */

loc_002B82CD: ;
    eax = esi;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(0x7912FC) = esi;
    if ((_fa == 0)) goto loc_002B82E8; /* je: equal / zero */

loc_002B82DD: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_002B82F5; /* je: equal / zero */

loc_002B82E0: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_002B82E8; /* je: equal / zero */

loc_002B82E3: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_002B82E8: ;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002B82F2u); RECOMP_ABI_CALL(0x002B8630u, sub_002B8630); /* call 0x002B8630 */

loc_002B82F2: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002B82F5: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002B8300
 * Original: 0x002B8300 - 0x002B830C (12 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B8300(void)
{

loc_002B8300: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002B830Au); RECOMP_ABI_CALL(0x002BF770u, sub_002BF770); /* call 0x002BF770 */

loc_002B830A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002B8310
 * Original: 0x002B8310 - 0x002B837C (108 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B8310(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B8310: ;
    PUSH32(esp, 0x002B8315u); RECOMP_ABI_CALL(0x002B81E0u, sub_002B81E0); /* call 0x002B81E0 */

loc_002B8315: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x2B8300);
    PUSH32(esp, 0x002B8321u); RECOMP_ABI_CALL(0x002C97E0u, sub_002C97E0); /* call 0x002C97E0 */

loc_002B8321: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x2CA950);
    PUSH32(esp, 0x4C40D4);
    PUSH32(esp, 0x002B8332u); RECOMP_ABI_CALL(0x002CA880u, sub_002CA880); /* call 0x002CA880 */

loc_002B8332: ;
    PUSH32(esp, 0x002B8337u); RECOMP_ABI_CALL(0x002C6FF0u, sub_002C6FF0); /* call 0x002C6FF0 */

loc_002B8337: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x2C6FE0);
    PUSH32(esp, 0x4C40D0);
    PUSH32(esp, 0x002B8348u); RECOMP_ABI_CALL(0x002CA880u, sub_002CA880); /* call 0x002CA880 */

loc_002B8348: ;
    PUSH32(esp, 0x4C40D0);
    PUSH32(esp, 0x002B8352u); RECOMP_ABI_CALL(0x002C9E90u, sub_002C9E90); /* call 0x002C9E90 */

loc_002B8352: ;
    eax = MEM32(esp + 0x28);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B836D; /* je: equal / zero */

loc_002B835D: ;
    eax = MEM32(eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002B8365u); RECOMP_ABI_CALL(0x002C7830u, sub_002C7830); /* call 0x002C7830 */

loc_002B8365: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_002C8A90(); return; /* tail jmp 0x002C8A90 */

loc_002B836D: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x002B8374u); RECOMP_ABI_CALL(0x002C7830u, sub_002C7830); /* call 0x002C7830 */

loc_002B8374: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_002C8A90(); return; /* tail jmp 0x002C8A90 */

}

/**
 * sub_002B8380
 * Original: 0x002B8380 - 0x002B838F (15 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B8380(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B8380: ;
    PUSH32(esp, 0x002B8385u); RECOMP_ABI_CALL(0x002C8AB0u, sub_002C8AB0); /* call 0x002C8AB0 */

loc_002B8385: ;
    PUSH32(esp, 0x002B838Au); RECOMP_ABI_CALL(0x002C8D30u, sub_002C8D30); /* call 0x002C8D30 */

loc_002B838A: ;
    g_seh_ebp = ebp; sub_002C88A0(); return; /* tail jmp 0x002C88A0 */

}

/**
 * sub_002B8390
 * Original: 0x002B8390 - 0x002B83A0 (16 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B8390(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B8390: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x002B839Cu); RECOMP_ABI_CALL(0x002C0F20u, sub_002C0F20); /* call 0x002C0F20 */

loc_002B839C: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002B83A0
 * Original: 0x002B83A0 - 0x002B83A1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B83A0(void)
{

loc_002B83A0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002B83B0
 * Original: 0x002B83B0 - 0x002B83B9 (9 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B83B0(void)
{

loc_002B83B0: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x002B83B7u); RECOMP_ABI_CALL(0x002C5C40u, sub_002C5C40); /* call 0x002C5C40 */

loc_002B83B7: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002B83C0
 * Original: 0x002B83C0 - 0x002B83C9 (9 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B83C0(void)
{

loc_002B83C0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x002B83C7u); RECOMP_ABI_CALL(0x002C5C40u, sub_002C5C40); /* call 0x002C5C40 */

loc_002B83C7: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002B83D0
 * Original: 0x002B83D0 - 0x002B83D6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B83D0(void)
{

loc_002B83D0: ;
    eax = 0x4C40D8;
    esp += 4; return; /* ret */

}

/**
 * sub_002B83E0
 * Original: 0x002B83E0 - 0x002B83EA (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B83E0(void)
{

loc_002B83E0: ;
    eax = MEM32(esp + 4);
    MEM32(0x51DDE4) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_002B83F0
 * Original: 0x002B83F0 - 0x002B83FC (12 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B83F0(void)
{

loc_002B83F0: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002B83FAu); RECOMP_ABI_CALL(0x002BF770u, sub_002BF770); /* call 0x002BF770 */

loc_002B83FA: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002B8400
 * Original: 0x002B8400 - 0x002B840C (12 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B8400(void)
{

loc_002B8400: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002B840Au); RECOMP_ABI_CALL(0x002BF770u, sub_002BF770); /* call 0x002BF770 */

loc_002B840A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002B8410
 * Original: 0x002B8410 - 0x002B8420 (16 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B8410(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B8410: ;
    eax = MEM32(0x735984);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x735984) = eax;
    g_seh_ebp = ebp; sub_002B6B00(); return; /* tail jmp 0x002B6B00 */

}

/**
 * sub_002B8420
 * Original: 0x002B8420 - 0x002B8428 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_002B8420(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B8420: ;
    PUSH32(esp, 0x002B8425u); RECOMP_ABI_CALL(0x002CB540u, sub_002CB540); /* call 0x002CB540 */

loc_002B8425: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_002B8430
 * Original: 0x002B8430 - 0x002B8438 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_002B8430(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B8430: ;
    PUSH32(esp, 0x002B8435u); RECOMP_ABI_CALL(0x002B6B00u, sub_002B6B00); /* call 0x002B6B00 */

loc_002B8435: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_002B8440
 * Original: 0x002B8440 - 0x002B8448 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_002B8440(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B8440: ;
    PUSH32(esp, 0x002B8445u); RECOMP_ABI_CALL(0x002CB650u, sub_002CB650); /* call 0x002CB650 */

loc_002B8445: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_002B8450
 * Original: 0x002B8450 - 0x002B853C (236 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B8450(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B8450: ;
    eax = MEM32(0x735970);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(0x73596C) = 0x4C40D8;
    if (CMP_NE(_fa, _fb)) goto loc_002B8535; /* jne: not equal / not zero */

loc_002B8467: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x002B846Du); RECOMP_ABI_CALL(0x002BEA10u, sub_002BEA10); /* call 0x002BEA10 */

loc_002B846D: ;
    PUSH32(esp, 0x002B8472u); RECOMP_ABI_CALL(0x002BEA50u, sub_002BEA50); /* call 0x002BEA50 */

loc_002B8472: ;
    PUSH32(esp, 0x002B8477u); RECOMP_ABI_CALL(0x002CC870u, sub_002CC870); /* call 0x002CC870 */

loc_002B8477: ;
    PUSH32(esp, 0x002B847Cu); RECOMP_ABI_CALL(0x002C32F0u, sub_002C32F0); /* call 0x002C32F0 */

loc_002B847C: ;
    PUSH32(esp, 0x002B8481u); RECOMP_ABI_CALL(0x002CBE30u, sub_002CBE30); /* call 0x002CBE30 */

loc_002B8481: ;
    PUSH32(esp, 0x002B8486u); RECOMP_ABI_CALL(0x002BF710u, sub_002BF710); /* call 0x002BF710 */

loc_002B8486: ;
    PUSH32(esp, 0x002B848Bu); RECOMP_ABI_CALL(0x002BD700u, sub_002BD700); /* call 0x002BD700 */

loc_002B848B: ;
    PUSH32(esp, 0x002B8490u); RECOMP_ABI_CALL(0x002BC0C0u, sub_002BC0C0); /* call 0x002BC0C0 */

loc_002B8490: ;
    PUSH32(esp, 0x002B8495u); RECOMP_ABI_CALL(0x002CB7E0u, sub_002CB7E0); /* call 0x002CB7E0 */

loc_002B8495: ;
    PUSH32(esp, 0x002B849Au); RECOMP_ABI_CALL(0x002BEA90u, sub_002BEA90); /* call 0x002BEA90 */

loc_002B849A: ;
    PUSH32(esp, 0x002B849Fu); RECOMP_ABI_CALL(0x002CB740u, sub_002CB740); /* call 0x002CB740 */

loc_002B849F: ;
    PUSH32(esp, 0x002B84A4u); RECOMP_ABI_CALL(0x002BB950u, sub_002BB950); /* call 0x002BB950 */

loc_002B84A4: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x2B83F0);
    PUSH32(esp, 0x002B84B0u); RECOMP_ABI_CALL(0x002BEAB0u, sub_002BEAB0); /* call 0x002BEAB0 */

loc_002B84B0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x2B8400);
    PUSH32(esp, 0x002B84BCu); RECOMP_ABI_CALL(0x002CB6B0u, sub_002CB6B0); /* call 0x002CB6B0 */

loc_002B84BC: ;
    PUSH32(esp, 0x4C4148);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x2B8430);
    PUSH32(esp, 1);
    ecx = 0x310;
    edi = 0x790440;
    PUSH32(esp, 2);
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    PUSH32(esp, 0x002B84DEu); RECOMP_ABI_CALL(0x002BBD60u, sub_002BBD60); /* call 0x002BBD60 */

loc_002B84DE: ;
    PUSH32(esp, 0x4C4138);
    PUSH32(esp, 0);
    PUSH32(esp, 0x2B8440);
    PUSH32(esp, 4);
    PUSH32(esp, 0x002B84F1u); RECOMP_ABI_CALL(0x002BBCB0u, sub_002BBCB0); /* call 0x002BBCB0 */

loc_002B84F1: ;
    PUSH32(esp, 0x4C4124);
    PUSH32(esp, 0);
    PUSH32(esp, 0x2B8420);
    PUSH32(esp, 5);
    MEM32(0x735980) = eax;
    PUSH32(esp, 0x002B8509u); RECOMP_ABI_CALL(0x002BBCB0u, sub_002BBCB0); /* call 0x002BBCB0 */

loc_002B8509: ;
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x3C);
    MEM32(0x735978) = eax;
    MEM32(0x735984) = 0;
    MEM32(0x73597C) = 0;
    PUSH32(esp, 0x002B852Cu); RECOMP_ABI_CALL(0x002B6870u, sub_002B6870); /* call 0x002B6870 */

loc_002B852C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x002B8534u); RECOMP_ABI_CALL(0x002BEA60u, sub_002BEA60); /* call 0x002BEA60 */

loc_002B8534: ;
    POP32(esp, edi);

loc_002B8535: ;
    MEM32(0x735970) = MEM32(0x735970) + 1;
    _fa = (uint32_t)(MEM32(0x735970)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

}

/**
 * sub_002B8540
 * Original: 0x002B8540 - 0x002B854F (15 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B8540(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B8540: ;
    MEM32(0x735970) = 0;
    g_seh_ebp = ebp; sub_002B8450(); return; /* tail jmp 0x002B8450 */

}

/**
 * sub_002B8550
 * Original: 0x002B8550 - 0x002B85F8 (168 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B8550(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B8550: ;
    MEM32(0x735970) = MEM32(0x735970) - 1;
    _fa = (uint32_t)(MEM32(0x735970)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_002B85F7; /* jne: not equal / not zero */

loc_002B855C: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002B8562u); RECOMP_ABI_CALL(0x002B73B0u, sub_002B73B0); /* call 0x002B73B0 */

loc_002B8562: ;
    PUSH32(esp, 0x002B8567u); RECOMP_ABI_CALL(0x002BEAA0u, sub_002BEAA0); /* call 0x002BEAA0 */

loc_002B8567: ;
    PUSH32(esp, 0x002B856Cu); RECOMP_ABI_CALL(0x002CB890u, sub_002CB890); /* call 0x002CB890 */

loc_002B856C: ;
    PUSH32(esp, 0x002B8571u); RECOMP_ABI_CALL(0x002BD740u, sub_002BD740); /* call 0x002BD740 */

loc_002B8571: ;
    PUSH32(esp, 0x002B8576u); RECOMP_ABI_CALL(0x002CB790u, sub_002CB790); /* call 0x002CB790 */

loc_002B8576: ;
    PUSH32(esp, 0x002B857Bu); RECOMP_ABI_CALL(0x002BEA50u, sub_002BEA50); /* call 0x002BEA50 */

loc_002B857B: ;
    PUSH32(esp, 1);
    PUSH32(esp, 2);
    PUSH32(esp, 0x002B8584u); RECOMP_ABI_CALL(0x002BBD10u, sub_002BBD10); /* call 0x002BBD10 */

loc_002B8584: ;
    eax = MEM32(0x735980);
    PUSH32(esp, eax);
    PUSH32(esp, 4);
    PUSH32(esp, 0x002B8591u); RECOMP_ABI_CALL(0x002BBD10u, sub_002BBD10); /* call 0x002BBD10 */

loc_002B8591: ;
    ecx = MEM32(0x735978);
    PUSH32(esp, ecx);
    PUSH32(esp, 5);
    PUSH32(esp, 0x002B859Fu); RECOMP_ABI_CALL(0x002BBD10u, sub_002BBD10); /* call 0x002BBD10 */

loc_002B859F: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x002B85A7u); RECOMP_ABI_CALL(0x002BB970u, sub_002BB970); /* call 0x002BB970 */

loc_002B85A7: ;
    PUSH32(esp, 0x002B85ACu); RECOMP_ABI_CALL(0x002BC0F0u, sub_002BC0F0); /* call 0x002BC0F0 */

loc_002B85AC: ;
    PUSH32(esp, 0x002B85B1u); RECOMP_ABI_CALL(0x002BF730u, sub_002BF730); /* call 0x002BF730 */

loc_002B85B1: ;
    PUSH32(esp, 0x002B85B6u); RECOMP_ABI_CALL(0x002CBE60u, sub_002CBE60); /* call 0x002CBE60 */

loc_002B85B6: ;
    PUSH32(esp, 0x002B85BBu); RECOMP_ABI_CALL(0x002C3320u, sub_002C3320); /* call 0x002C3320 */

loc_002B85BB: ;
    PUSH32(esp, 0x002B85C0u); RECOMP_ABI_CALL(0x002CC8A0u, sub_002CC8A0); /* call 0x002CC8A0 */

loc_002B85C0: ;
    PUSH32(esp, 0x002B85C5u); RECOMP_ABI_CALL(0x002BEA60u, sub_002BEA60); /* call 0x002BEA60 */

loc_002B85C5: ;
    PUSH32(esp, 0x002B85CAu); RECOMP_ABI_CALL(0x002BEA30u, sub_002BEA30); /* call 0x002BEA30 */

loc_002B85CA: ;
    esi = 0x790440;
    /* nop */

loc_002B85D0: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B85E8; /* je: equal / zero */

loc_002B85D5: ;
    PUSH32(esp, 0x4C4158);
    PUSH32(esp, 0x002B85DFu); RECOMP_ABI_CALL(0x002BB320u, sub_002BB320); /* call 0x002BB320 */

loc_002B85DF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002B85E5u); RECOMP_ABI_CALL(0x002B7390u, sub_002B7390); /* call 0x002B7390 */

loc_002B85E5: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002B85E8: ;
    _fb = (uint32_t)(0xC4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xC4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x791080) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x791080 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002B85D0; /* jl: less (signed <) */

loc_002B85F6: ;
    POP32(esp, esi);

loc_002B85F7: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002B8600
 * Original: 0x002B8600 - 0x002B8624 (36 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B8600(void)
{

loc_002B8600: ;
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x002B8623u); RECOMP_ABI_CALL(0x000F473Eu, sub_000F473E); /* call 0x000F473E */

loc_002B8623: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002B8630
 * Original: 0x002B8630 - 0x002B863F (15 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B8630(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B8630: ;
    MEM32(0x73586C) = 0x2B8600;
    g_seh_ebp = ebp; sub_002B4B70(); return; /* tail jmp 0x002B4B70 */

}

/**
 * sub_002B8640
 * Original: 0x002B8640 - 0x002B864C (12 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B8640(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B8640: ;
    eax = MEM32(0x735894);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B864B; /* je: equal / zero */

loc_002B8649: ;
    g_seh_ebp = ebp; RECOMP_ITAIL(eax); return; /* indirect tail jmp */

loc_002B864B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002B8650
 * Original: 0x002B8650 - 0x002B868F (63 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B8650(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B8650: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 4);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ecx + 4);
    esi = MEM32(edi + 0xC0);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B868C; /* je: equal / zero */

loc_002B8666: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002B866Cu); RECOMP_ABI_CALL(0x002B6290u, sub_002B6290); /* call 0x002B6290 */

loc_002B866C: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002B8672u); RECOMP_ABI_CALL(0x002CDD40u, sub_002CDD40); /* call 0x002CDD40 */

loc_002B8672: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002B8678u); RECOMP_ABI_CALL(0x002CDDD0u, sub_002CDDD0); /* call 0x002CDDD0 */

loc_002B8678: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + 0xC0) = 0;
    POP32(esp, edi);
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_002CDD70(); return; /* tail jmp 0x002CDD70 */

loc_002B868C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002B8690
 * Original: 0x002B8690 - 0x002B86AE (30 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B8690(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B8690: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 4);
    edx = MEM32(ecx + 4);
    eax = MEM32(edx + 0xC0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B86AD; /* je: equal / zero */

loc_002B86A4: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_002CDD40(); return; /* tail jmp 0x002CDD40 */

loc_002B86AD: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002B86B0
 * Original: 0x002B86B0 - 0x002B8789 (217 bytes, 67 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B86B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B86B0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0xC0);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x002B86CAu); RECOMP_ABI_CALL(0x002CD470u, sub_002CD470); /* call 0x002CD470 */

loc_002B86CA: ;
    eax = MEM32(esp + 0x1C);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B86E8; /* jne: not equal / not zero */

loc_002B86D5: ;
    PUSH32(esp, edi);
    MEM32(esi + 0x88) = 0;
    PUSH32(esp, 0x002B86E5u); RECOMP_ABI_CALL(0x002CDD40u, sub_002CDD40); /* call 0x002CDD40 */

loc_002B86E5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002B86E8: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B8710; /* jne: not equal / not zero */

loc_002B86F0: ;
    PUSH32(esp, edi);
    MEM32(esi + 0x88) = 0;
    PUSH32(esp, 0x002B8700u); RECOMP_ABI_CALL(0x002CD410u, sub_002CD410); /* call 0x002CD410 */

loc_002B8700: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM32(esi + 4) = 2;
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_002B8710: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B8783; /* jne: not equal / not zero */

loc_002B8715: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x002B871Bu); RECOMP_ABI_CALL(0x002CD920u, sub_002CD920); /* call 0x002CD920 */

loc_002B871B: ;
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x002B8726u); RECOMP_ABI_CALL(0x002CD4F0u, sub_002CD4F0); /* call 0x002CD4F0 */

loc_002B8726: ;
    edx = esp + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x002B8731u); RECOMP_ABI_CALL(0x002CD4B0u, sub_002CD4B0); /* call 0x002CD4B0 */

loc_002B8731: ;
    ecx = MEM32(esi + 0x88);
    eax = MEM32(esp + 0x1C);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esi + 0x90) = eax;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0x28;
    MEM32(esi + 0x88) = eax;
    eax = MEM32(esp + 0x20);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    MEM32(esi + 0x94) = eax;
    PUSH32(esp, 0x002B8760u); RECOMP_ABI_CALL(0x002CD470u, sub_002CD470); /* call 0x002CD470 */

loc_002B8760: ;
    eax = MEM32(esp + 0x30);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B8783; /* jne: not equal / not zero */

loc_002B876C: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x002B8772u); RECOMP_ABI_CALL(0x002CDD40u, sub_002CDD40); /* call 0x002CDD40 */

loc_002B8772: ;
    edx = MEM32(esp + 0xC);
    MEM32(esi + 0x18) = edx;
    MEM32(esi + 4) = 0;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002B8783: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002B8790
 * Original: 0x002B8790 - 0x002B87CA (58 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B8790(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B8790: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x18);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x002B87ADu); RECOMP_ABI_CALL(0x002CD530u, sub_002CD530); /* call 0x002CD530 */

loc_002B87AD: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x2C);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x002B87C2u); RECOMP_ABI_CALL(0x002CD5A0u, sub_002CD5A0); /* call 0x002CD5A0 */

loc_002B87C2: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002B87D0
 * Original: 0x002B87D0 - 0x002B87D5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B87D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B87D0: ;
    g_seh_ebp = ebp; sub_002CD660(); return; /* tail jmp 0x002CD660 */

}

/**
 * sub_002B8820
 * Original: 0x002B8820 - 0x002B8830 (16 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_002B8820(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B8820: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002B882Au); RECOMP_ABI_CALL(0x002BF770u, sub_002BF770); /* call 0x002BF770 */

loc_002B882A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_002B89C0
 * Original: 0x002B89C0 - 0x002B8A40 (128 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B89C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B89C0: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B8A34; /* je: equal / zero */

loc_002B89C4: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B8A34; /* je: equal / zero */

loc_002B89C8: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002B89CEu); RECOMP_ABI_CALL(0x002B6290u, sub_002B6290); /* call 0x002B6290 */

loc_002B89CE: ;
    edx = MEM32(esi + 0xAC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = edi;
    /* nop */

loc_002B89E0: ;
    SET_LO8(eax, MEM8(ecx));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(edx) = LO8(eax);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B89E0; /* jne: not equal / not zero */

loc_002B89EA: ;
    eax = MEM32(esi + 0xAC);
    ecx = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    MEM32(esi + 0xB0) = eax;
    SET_LO8(eax, 1);
    MEM32(esi + 0xB4) = 0;
    MEM32(esi + 0xB8) = ecx;
    MEM32(esi + 0xBC) = edx;
    MEM8(esi + 1) = LO8(eax);
    MEM8(esi + 0xA8) = LO8(eax);
    MEM8(esi + 2) = 0;
    MEM32(esp + 8) = 0;
    MEM32(esp + 4) = esi;
    g_seh_ebp = ebp; sub_002B6EF0(); return; /* tail jmp 0x002B6EF0 */

loc_002B8A34: ;
    PUSH32(esp, 0x4C4210);
    PUSH32(esp, 0x002B8A3Eu); RECOMP_ABI_CALL(0x002BF770u, sub_002BF770); /* call 0x002BF770 */

loc_002B8A3E: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002B8A50
 * Original: 0x002B8A50 - 0x002B8AAF (95 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B8A50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B8A50: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B8AA3; /* je: equal / zero */

loc_002B8A54: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B8AA3; /* je: equal / zero */

loc_002B8A58: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002B8AA3; /* jl: less (signed <) */

loc_002B8A5C: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002B8A62u); RECOMP_ABI_CALL(0x002B6290u, sub_002B6290); /* call 0x002B6290 */

loc_002B8A62: ;
    PUSH32(esp, 0x002B8A67u); RECOMP_ABI_CALL(0x002BEA50u, sub_002BEA50); /* call 0x002BEA50 */

loc_002B8A67: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x002B8A6Eu); RECOMP_ABI_CALL(0x002CC1E0u, sub_002CC1E0); /* call 0x002CC1E0 */

loc_002B8A6E: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B8A88; /* jne: not equal / not zero */

loc_002B8A75: ;
    PUSH32(esp, 0x002B8A7Au); RECOMP_ABI_CALL(0x002BEA60u, sub_002BEA60); /* call 0x002BEA60 */

loc_002B8A7A: ;
    PUSH32(esp, 0x4C426C);
    PUSH32(esp, 0x002B8A84u); RECOMP_ABI_CALL(0x002BF770u, sub_002BF770); /* call 0x002BF770 */

loc_002B8A84: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_002B8A88: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x002B8A8Fu); RECOMP_ABI_CALL(0x002B4D80u, sub_002B4D80); /* call 0x002B4D80 */

loc_002B8A8F: ;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    MEM8(esi + 2) = 2;
    PUSH32(esp, 0x002B8A9Bu); RECOMP_ABI_CALL(0x002B6EF0u, sub_002B6EF0); /* call 0x002B6EF0 */

loc_002B8A9B: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_002BEA60(); return; /* tail jmp 0x002BEA60 */

loc_002B8AA3: ;
    PUSH32(esp, 0x4C4240);
    PUSH32(esp, 0x002B8AADu); RECOMP_ABI_CALL(0x002BF770u, sub_002BF770); /* call 0x002BF770 */

loc_002B8AAD: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002B8B80
 * Original: 0x002B8B80 - 0x002B8BA1 (33 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B8B80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B8B80: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x002B8B88u); RECOMP_ABI_CALL(0x002BEA70u, sub_002BEA70); /* call 0x002BEA70 */

loc_002B8B88: ;
    edi = MEM32(esp + 0x18);
    ebx = MEM32(esp + 0x14);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, 0x002B8B99u); RECOMP_ABI_CALL(0x002B8900u, sub_002B8900); /* call 0x002B8900 */

loc_002B8B99: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_002BEA80(); return; /* tail jmp 0x002BEA80 */

}

/**
 * sub_002B8BB0
 * Original: 0x002B8BB0 - 0x002B8BD8 (40 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B8BB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B8BB0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x002B8BB7u); RECOMP_ABI_CALL(0x002BEA70u, sub_002BEA70); /* call 0x002BEA70 */

loc_002B8BB7: ;
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x14);
    edi = MEM32(esp + 0x10);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002B8BCEu); RECOMP_ABI_CALL(0x002B89C0u, sub_002B89C0); /* call 0x002B89C0 */

loc_002B8BCE: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_002BEA80(); return; /* tail jmp 0x002BEA80 */

}

/**
 * sub_002B8BE0
 * Original: 0x002B8BE0 - 0x002B8C05 (37 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B8BE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B8BE0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x002B8BE7u); RECOMP_ABI_CALL(0x002BEA70u, sub_002BEA70); /* call 0x002BEA70 */

loc_002B8BE7: ;
    edi = MEM32(esp + 0x10);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, 0xFFFFF);
    PUSH32(esp, 0);
    PUSH32(esp, 0x002B8BFBu); RECOMP_ABI_CALL(0x002B89C0u, sub_002B89C0); /* call 0x002B89C0 */

loc_002B8BFB: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_002BEA80(); return; /* tail jmp 0x002BEA80 */

}

/**
 * sub_002B8C70
 * Original: 0x002B8C70 - 0x002B8C91 (33 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B8C70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B8C70: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x002B8C78u); RECOMP_ABI_CALL(0x002BEA70u, sub_002BEA70); /* call 0x002BEA70 */

loc_002B8C78: ;
    edi = MEM32(esp + 0x18);
    ebx = MEM32(esp + 0x14);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, 0x002B8C89u); RECOMP_ABI_CALL(0x002B8A50u, sub_002B8A50); /* call 0x002B8A50 */

loc_002B8C89: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_002BEA80(); return; /* tail jmp 0x002BEA80 */

}

/**
 * sub_002B8CA0
 * Original: 0x002B8CA0 - 0x002B8CC1 (33 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B8CA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B8CA0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x002B8CA8u); RECOMP_ABI_CALL(0x002BEA70u, sub_002BEA70); /* call 0x002BEA70 */

loc_002B8CA8: ;
    edi = MEM32(esp + 0x18);
    esi = MEM32(esp + 0x14);
    ebx = MEM32(esp + 0x10);
    PUSH32(esp, 0x002B8CB9u); RECOMP_ABI_CALL(0x002B8AB0u, sub_002B8AB0); /* call 0x002B8AB0 */

loc_002B8CB9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_002BEA80(); return; /* tail jmp 0x002BEA80 */

}

/**
 * sub_002B8CD0
 * Original: 0x002B8CD0 - 0x002B8CEB (27 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B8CD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B8CD0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x002B8CD7u); RECOMP_ABI_CALL(0x002BEA70u, sub_002BEA70); /* call 0x002BEA70 */

loc_002B8CD7: ;
    edi = MEM32(esp + 0x10);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, 0x002B8CE4u); RECOMP_ABI_CALL(0x002B8C10u, sub_002B8C10); /* call 0x002B8C10 */

loc_002B8CE4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_002BEA80(); return; /* tail jmp 0x002BEA80 */

}

/**
 * sub_002B8CF0
 * Original: 0x002B8CF0 - 0x002B8D48 (88 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B8CF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B8CF0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = eax;
    PUSH32(esp, 0x002B8CF9u); RECOMP_ABI_CALL(0x002BEA70u, sub_002BEA70); /* call 0x002BEA70 */

loc_002B8CF9: ;
    edi = MEM32(esp + 0xC);
    PUSH32(esp, 0x002B8D02u); RECOMP_ABI_CALL(0x002B8C10u, sub_002B8C10); /* call 0x002B8C10 */

loc_002B8D02: ;
    PUSH32(esp, 0x002B8D07u); RECOMP_ABI_CALL(0x002BEA80u, sub_002BEA80); /* call 0x002BEA80 */

loc_002B8D07: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002B8D0Du); RECOMP_ABI_CALL(0x002B70C0u, sub_002B70C0); /* call 0x002B70C0 */

loc_002B8D0D: ;
    edi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B8D45; /* je: equal / zero */

loc_002B8D16: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x002B8D1Cu); RECOMP_ABI_CALL(0x002BEB60u, sub_002BEB60); /* call 0x002BEB60 */

loc_002B8D1C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B8D45; /* je: equal / zero */

loc_002B8D24: ;
    PUSH32(esp, 0x002B8D29u); RECOMP_ABI_CALL(0x002B6B00u, sub_002B6B00); /* call 0x002B6B00 */

loc_002B8D29: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002B8D2Fu); RECOMP_ABI_CALL(0x002B62B0u, sub_002B62B0); /* call 0x002B62B0 */

loc_002B8D2F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B8D45; /* je: equal / zero */

loc_002B8D37: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x002B8D3Du); RECOMP_ABI_CALL(0x002BEB60u, sub_002BEB60); /* call 0x002BEB60 */

loc_002B8D3D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B8D24; /* jne: not equal / not zero */

loc_002B8D45: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002B8D50
 * Original: 0x002B8D50 - 0x002B8D6B (27 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B8D50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B8D50: ;
    PUSH32(esp, 0x002B8D55u); RECOMP_ABI_CALL(0x002BEA70u, sub_002BEA70); /* call 0x002BEA70 */

loc_002B8D55: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    eax = MEM32(esp + 8);
    PUSH32(esp, 0x002B8D63u); RECOMP_ABI_CALL(0x002B8CF0u, sub_002B8CF0); /* call 0x002B8CF0 */

loc_002B8D63: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_002BEA80(); return; /* tail jmp 0x002BEA80 */

}

/**
 * sub_002B8D70
 * Original: 0x002B8D70 - 0x002B8D98 (40 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B8D70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B8D70: ;
    ecx = MEM32(esp + 4);
    eax = ecx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 0x7FF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((0xB) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ecx = ecx & 0x800007FFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fas >= 0)) goto loc_002B8D92; /* jns: not sign (positive) */

loc_002B8D8A: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx | 0xFFFFF800u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_002B8D92: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_002B8D97; /* jle: less or equal (signed <=) */

loc_002B8D96: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_002B8D97: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002B8DA0
 * Original: 0x002B8DA0 - 0x002B8E01 (97 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B8DA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B8DA0: ;
    ecx = MEM32(0x779680);
    ecx = ecx & 0x8000000Fu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ebx);
    if ((_fas >= 0)) goto loc_002B8DB4; /* jns: not sign (positive) */

loc_002B8DAF: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx | 0xFFFFFFF0u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_002B8DB4: ;
    ebx = MEM32(esp + 0xC);
    edx = MEM32(esp + 8);
    eax = ecx;
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x779580) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x779580;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B8DD2; /* jne: not equal / not zero */

loc_002B8DCA: ;
    MEM16(edx * 2 + 0x7796A0) = MEM16(edx * 2 + 0x7796A0) + 1;
    _fa = (uint32_t)(MEM16(edx * 2 + 0x7796A0)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */

loc_002B8DD2: ;
    MEM8(eax) = LO8(edx);
    SET_LO16(edx, MEM16(edx * 2 + 0x7796A0));
    MEM16(eax + 2) = LO16(edx);
    edx = MEM32(esp + 0x10);
    MEM32(eax + 4) = edx;
    edx = MEM32(esp + 0x14);
    MEM32(eax + 8) = edx;
    edx = MEM32(esp + 0x18);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(eax + 1) = LO8(ebx);
    MEM32(eax + 0xC) = edx;
    MEM32(0x779680) = ecx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002B8E10
 * Original: 0x002B8E10 - 0x002B8E11 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B8E10(void)
{

loc_002B8E10: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002B8E70
 * Original: 0x002B8E70 - 0x002B8E9E (46 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B8E70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B8E70: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x779AE0;
    /* nop */

loc_002B8E80: ;
    _fa = (uint32_t)(MEM8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B8E92; /* je: equal / zero */

loc_002B8E85: ;
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x44;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x779F20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x779F20 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002B8E80; /* jl: less (signed <) */

loc_002B8E91: ;
    esp += 4; return; /* ret */

loc_002B8E92: ;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x44);
    _fb = (uint32_t)(0x779AE0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x779AE0;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_002B8EA0
 * Original: 0x002B8EA0 - 0x002B8F3A (154 bytes, 57 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B8EA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B8EA0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = 0x779AE0;
    goto loc_002B8EB0;

    /* nop */

loc_002B8EB0: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B8ED1; /* je: equal / zero */

loc_002B8EB4: ;
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x44;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x779F20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x779F20 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002B8EB0; /* jl: less (signed <) */

loc_002B8EBF: ;
    PUSH32(esp, 0x4C4390);
    PUSH32(esp, 0x002B8EC9u); RECOMP_ABI_CALL(0x002BF770u, sub_002BF770); /* call 0x002BF770 */

loc_002B8EC9: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_002B8ED1: ;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x44);
    _fb = (uint32_t)(0x779AE0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x779AE0;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fa != 0)) goto loc_002B8EEE; /* jne: not equal / not zero */

loc_002B8EDC: ;
    PUSH32(esp, 0x4C4390);
    PUSH32(esp, 0x002B8EE6u); RECOMP_ABI_CALL(0x002BF770u, sub_002BF770); /* call 0x002BF770 */

loc_002B8EE6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_002B8EEE: ;
    PUSH32(esp, 0x100);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x002B8EF9u); RECOMP_ABI_CALL(0x002BE4E0u, sub_002BE4E0); /* call 0x002BE4E0 */

loc_002B8EF9: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esi + 4) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_002B8F15; /* jne: not equal / not zero */

loc_002B8F03: ;
    PUSH32(esp, 0x4C4358);
    PUSH32(esp, 0x002B8F0Du); RECOMP_ABI_CALL(0x002BF770u, sub_002BF770); /* call 0x002BF770 */

loc_002B8F0D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_002B8F15: ;
    MEM32(esi + 0x18) = ebx;
    MEM32(esi + 0x1C) = ebx;
    MEM32(esi + 0x20) = ebx;
    MEM8(esi + 2) = LO8(ebx);
    MEM32(esi + 8) = ebx;
    MEM8(esi + 3) = LO8(ebx);
    MEM8(esi + 1) = 1;
    MEM32(esi + 0x2C) = 0x200;
    MEM8(esi) = 1;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002B8F40
 * Original: 0x002B8F40 - 0x002B8FCC (140 bytes, 48 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B8F40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B8F40: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B8F59; /* jne: not equal / not zero */

loc_002B8F48: ;
    PUSH32(esp, 0x4C43C4);
    PUSH32(esp, 0x002B8F52u); RECOMP_ABI_CALL(0x002BF770u, sub_002BF770); /* call 0x002BF770 */

loc_002B8F52: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 4; return; /* ret */

loc_002B8F59: ;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, 0xFFFFF);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    MEM32(esi + 0x38) = eax;
    eax = MEM32(esi + 4);
    PUSH32(esp, eax);
    MEM32(esi + 0x34) = ecx;
    MEM32(esi + 0x14) = 0;
    PUSH32(esp, 0x002B8F81u); RECOMP_ABI_CALL(0x002BE820u, sub_002BE820); /* call 0x002BE820 */

loc_002B8F81: ;
    ecx = MEM32(esi + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002B8F8Au); RECOMP_ABI_CALL(0x002BDBC0u, sub_002BDBC0); /* call 0x002BDBC0 */

loc_002B8F8A: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B8FA3; /* jne: not equal / not zero */

loc_002B8F92: ;
    edx = MEM32(esi + 4);
    PUSH32(esp, edx);
    PUSH32(esp, 0x002B8F9Bu); RECOMP_ABI_CALL(0x002BE960u, sub_002BE960); /* call 0x002BE960 */

loc_002B8F9B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_002B8FA3: ;
    eax = MEM32(esi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002B8FACu); RECOMP_ABI_CALL(0x002BE280u, sub_002BE280); /* call 0x002BE280 */

loc_002B8FAC: ;
    ecx = MEM32(esi + 4);
    PUSH32(esp, ecx);
    MEM32(esi + 0x10) = eax;
    PUSH32(esp, 0x002B8FB8u); RECOMP_ABI_CALL(0x002BE2A0u, sub_002BE2A0); /* call 0x002BE2A0 */

loc_002B8FB8: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0xC) = eax;
    MEM32(esi + 0x40) = eax;
    MEM32(esi + 0x3C) = 0;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002B8FD0
 * Original: 0x002B8FD0 - 0x002B9027 (87 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B8FD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B8FD0: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    MEM32(esi + 0x30) = eax;
    MEM32(esi + 0x3C) = eax;
    eax = MEM32(esi + 4);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    MEM32(esi + 0x34) = ecx;
    MEM32(esi + 0x38) = edx;
    MEM32(esi + 0x40) = edi;
    MEM32(esi + 0x14) = 0;
    PUSH32(esp, 0x002B8FF8u); RECOMP_ABI_CALL(0x002BE820u, sub_002BE820); /* call 0x002BE820 */

loc_002B8FF8: ;
    ecx = MEM32(esi + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002B9001u); RECOMP_ABI_CALL(0x002BDBC0u, sub_002BDBC0); /* call 0x002BDBC0 */

loc_002B9001: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B901A; /* jne: not equal / not zero */

loc_002B9009: ;
    edx = MEM32(esi + 4);
    PUSH32(esp, edx);
    PUSH32(esp, 0x002B9012u); RECOMP_ABI_CALL(0x002BE960u, sub_002BE960); /* call 0x002BE960 */

loc_002B9012: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_002B901A: ;
    MEM32(esi + 0xC) = edi;
    edi = edi << 0xB;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(esi + 0x10) = edi;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_002B9030
 * Original: 0x002B9030 - 0x002B9072 (66 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B9030(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B9030: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B9070; /* je: equal / zero */

loc_002B903C: ;
    SET_LO8(eax, MEM8(esi + 2));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B9070; /* jne: not equal / not zero */

loc_002B9043: ;
    _fa = (uint32_t)(MEM32(0x779684)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x779684), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B905C; /* jne: not equal / not zero */

loc_002B904C: ;
    eax = MEM32(esi + 0x28);
    ecx = MEM32(esi + 0x24);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002B9059u); RECOMP_ABI_CALL(0x002CDF50u, sub_002CDF50); /* call 0x002CDF50 */

loc_002B9059: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002B905C: ;
    eax = MEM32(esi + 8);
    MEM32(esi + 8) = 0;
    edx = MEM32(eax);
    POP32(esp, esi);
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0xC)); return; /* indirect tail jmp */

loc_002B9070: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002B9080
 * Original: 0x002B9080 - 0x002B9140 (192 bytes, 69 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B9080(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B9080: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002B908Eu); RECOMP_ABI_CALL(0x002BDBC0u, sub_002BDBC0); /* call 0x002BDBC0 */

loc_002B908E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B90A2; /* je: equal / zero */

loc_002B9096: ;
    ecx = MEM32(esi + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002B909Fu); RECOMP_ABI_CALL(0x002BE8A0u, sub_002BE8A0); /* call 0x002BE8A0 */

loc_002B909F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002B90A2: ;
    PUSH32(esp, 0x002B90A7u); RECOMP_ABI_CALL(0x002BEA50u, sub_002BEA50); /* call 0x002BEA50 */

loc_002B90A7: ;
    ecx = MEM32(esi + 0x14);
    edx = MEM32(esi + 0x30);
    eax = MEM32(esi + 0xC);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(esp + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    MEM32(esi + 0x18) = edx;
    if (CMP_GE(_fas, _fbs)) goto loc_002B90C1; /* jge: greater or equal (signed >=) */

loc_002B90BF: ;
    eax = ecx;

loc_002B90C1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0x1C) = eax;
    MEM32(esi + 0x20) = 0;
    if (CMP_NE(_fa, _fb)) goto loc_002B90DE; /* jne: not equal / not zero */

loc_002B90CF: ;
    MEM8(esi + 1) = 3;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x002B90DAu); RECOMP_ABI_CALL(0x002BEA60u, sub_002BEA60); /* call 0x002BEA60 */

loc_002B90DA: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_002B90DE: ;
    eax = MEM32(esi + 4);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002B90E9u); RECOMP_ABI_CALL(0x002BDD10u, sub_002BDD10); /* call 0x002BDD10 */

loc_002B90E9: ;
    ecx = MEM32(esp + 0x18);
    edx = MEM32(esi + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x002B90F7u); RECOMP_ABI_CALL(0x002BE770u, sub_002BE770); /* call 0x002BE770 */

loc_002B90F7: ;
    eax = MEM32(esi + 0x2C);
    ecx = MEM32(esi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002B9104u); RECOMP_ABI_CALL(0x002BE260u, sub_002BE260); /* call 0x002BE260 */

loc_002B9104: ;
    edx = MEM32(esi + 4);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    MEM8(esi + 1) = 2;
    MEM8(esi + 3) = 0;
    PUSH32(esp, 0x002B9117u); RECOMP_ABI_CALL(0x002BE2E0u, sub_002BE2E0); /* call 0x002BE2E0 */

loc_002B9117: ;
    eax = MEM32(esi + 0x14);
    ecx = MEM32(esi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002B9124u); RECOMP_ABI_CALL(0x002BDBE0u, sub_002BDBE0); /* call 0x002BDBE0 */

loc_002B9124: ;
    edx = MEM32(esi + 0x1C);
    eax = MEM32(esi + 4);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002B9131u); RECOMP_ABI_CALL(0x002BE630u, sub_002BE630); /* call 0x002BE630 */

loc_002B9131: ;
    esi = MEM32(esi + 0x1C);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x002B913Cu); RECOMP_ABI_CALL(0x002BEA60u, sub_002BEA60); /* call 0x002BEA60 */

loc_002B913C: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002B9140
 * Original: 0x002B9140 - 0x002B919E (94 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B9140(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B9140: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B9157; /* jne: not equal / not zero */

loc_002B9144: ;
    PUSH32(esp, 0x4C4454);
    PUSH32(esp, 0x002B914Eu); RECOMP_ABI_CALL(0x002BF770u, sub_002BF770); /* call 0x002BF770 */

loc_002B914E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0xFFFFFFFDu;
    esp += 4; return; /* ret */

loc_002B9157: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002B916E; /* jge: greater or equal (signed >=) */

loc_002B915B: ;
    PUSH32(esp, 0x4C4428);
    PUSH32(esp, 0x002B9165u); RECOMP_ABI_CALL(0x002BF770u, sub_002BF770); /* call 0x002BF770 */

loc_002B9165: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0xFFFFFFFDu;
    esp += 4; return; /* ret */

loc_002B916E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B9185; /* jne: not equal / not zero */

loc_002B9172: ;
    PUSH32(esp, 0x4C4400);
    PUSH32(esp, 0x002B917Cu); RECOMP_ABI_CALL(0x002BF770u, sub_002BF770); /* call 0x002BF770 */

loc_002B917C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0xFFFFFFFDu;
    esp += 4; return; /* ret */

loc_002B9185: ;
    _fa = (uint32_t)(MEM8(esi + 1)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 1), 2 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B918E; /* jne: not equal / not zero */

loc_002B918B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_002B918E: ;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x002B9196u); RECOMP_ABI_CALL(0x002B9080u, sub_002B9080); /* call 0x002B9080 */

loc_002B9196: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(esi + 2) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_002B91A0
 * Original: 0x002B91A0 - 0x002B91A5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B91A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B91A0: ;
    g_seh_ebp = ebp; sub_002B9140(); return; /* tail jmp 0x002B9140 */

}

/**
 * sub_002B91B0
 * Original: 0x002B91B0 - 0x002B9301 (337 bytes, 118 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B91B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B91B0: ;
    ecx = MEM32(0x779680);
    ecx = ecx & 0x8000000Fu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    if ((_fas >= 0)) goto loc_002B91C8; /* jns: not sign (positive) */

loc_002B91C3: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx | 0xFFFFFFF0u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_002B91C8: ;
    SET_LO16(edx, MEM16(0x7796A8));
    eax = ecx;
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x779580) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x779580;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO16(edx, LO16(edx) + 1);
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM16(0x7796A8) = LO16(edx);
    MEM8(eax) = 4;
    MEM8(eax + 1) = 0;
    MEM16(eax + 2) = LO16(edx);
    MEM32(eax + 4) = esi;
    MEM32(eax + 8) = ebx;
    MEM32(eax + 0xC) = ebp;
    MEM32(0x779680) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_002B9215; /* jne: not equal / not zero */

loc_002B9201: ;
    PUSH32(esp, 0x4C44FC);
    PUSH32(esp, 0x002B920Bu); RECOMP_ABI_CALL(0x002BF770u, sub_002BF770); /* call 0x002BF770 */

loc_002B920B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0xFFFFFFFDu;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_002B9215: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002B922D; /* jge: greater or equal (signed >=) */

loc_002B9219: ;
    PUSH32(esp, 0x4C44D0);
    PUSH32(esp, 0x002B9223u); RECOMP_ABI_CALL(0x002BF770u, sub_002BF770); /* call 0x002BF770 */

loc_002B9223: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0xFFFFFFFDu;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_002B922D: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B9245; /* jne: not equal / not zero */

loc_002B9231: ;
    PUSH32(esp, 0x4C44A8);
    PUSH32(esp, 0x002B923Bu); RECOMP_ABI_CALL(0x002BF770u, sub_002BF770); /* call 0x002BF770 */

loc_002B923B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0xFFFFFFFDu;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_002B9245: ;
    _fa = (uint32_t)(MEM8(esi + 1)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 1), 2 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B924F; /* jne: not equal / not zero */

loc_002B924B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_002B924F: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B9268; /* je: equal / zero */

loc_002B9256: ;
    PUSH32(esp, 0x4C447C);
    PUSH32(esp, 0x002B9260u); RECOMP_ABI_CALL(0x002BF770u, sub_002BF770); /* call 0x002BF770 */

loc_002B9260: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_002B9268: ;
    PUSH32(esp, edi);
    edi = ebx;
    PUSH32(esp, 0);
    edi = edi << 0xB;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x002B9277u); RECOMP_ABI_CALL(0x002C37F0u, sub_002C37F0); /* call 0x002C37F0 */

loc_002B9277: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0xC) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_002B928A; /* jne: not equal / not zero */

loc_002B9282: ;
    POP32(esp, edi);
    eax = 0xFFFFFFFEu;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_002B928A: ;
    PUSH32(esp, 0x002B928Fu); RECOMP_ABI_CALL(0x002BEA50u, sub_002BEA50); /* call 0x002BEA50 */

loc_002B928F: ;
    eax = MEM32(esp + 0xC);
    MEM32(esi + 0x24) = ebp;
    MEM32(esi + 0x28) = edi;
    MEM32(esi + 8) = eax;
    _fa = (uint32_t)(MEM32(0x779684)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x779684), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B92AF; /* jne: not equal / not zero */

loc_002B92A5: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x002B92ACu); RECOMP_ABI_CALL(0x002CDF50u, sub_002CDF50); /* call 0x002CDF50 */

loc_002B92AC: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002B92AF: ;
    PUSH32(esp, 0x002B92B4u); RECOMP_ABI_CALL(0x002BEA60u, sub_002BEA60); /* call 0x002BEA60 */

loc_002B92B4: ;
    ecx = MEM32(esi + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x002B92BFu); RECOMP_ABI_CALL(0x002B9080u, sub_002B9080); /* call 0x002B9080 */

loc_002B92BF: ;
    edi = eax;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_002B92E9; /* jg: greater (signed >) */

loc_002B92C8: ;
    PUSH32(esp, 0x002B92CDu); RECOMP_ABI_CALL(0x002BEA50u, sub_002BEA50); /* call 0x002BEA50 */

loc_002B92CD: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B92E4; /* je: equal / zero */

loc_002B92D4: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x002B92DAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002B92D7u); } /* indirect call */
    }

loc_002B92DA: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 8) = 0;

loc_002B92E4: ;
    PUSH32(esp, 0x002B92E9u); RECOMP_ABI_CALL(0x002BEA60u, sub_002BEA60); /* call 0x002BEA60 */

loc_002B92E9: ;
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    PUSH32(esp, 4);
    MEM8(esi + 2) = 0;
    PUSH32(esp, 0x002B92F9u); RECOMP_ABI_CALL(0x002B8DA0u, sub_002B8DA0); /* call 0x002B8DA0 */

loc_002B92F9: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = edi;
    POP32(esp, edi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_002B9310
 * Original: 0x002B9310 - 0x002B9331 (33 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B9310(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B9310: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 3 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002B9327; /* je: equal / zero */

loc_002B9314: ;
    PUSH32(esp, 0x4C4524);
    PUSH32(esp, 0x002B931Eu); RECOMP_ABI_CALL(0x002BF770u, sub_002BF770); /* call 0x002BF770 */

loc_002B931E: ;
    eax = 0xFFFFFFFDu;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_002B9327: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002B932Du); RECOMP_ABI_CALL(0x002B91B0u, sub_002B91B0); /* call 0x002B91B0 */

loc_002B932D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002B9340
 * Original: 0x002B9340 - 0x002B9444 (260 bytes, 82 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B9340(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B9340: ;
    ecx = MEM32(0x779680);
    ecx = ecx & 0x8000000Fu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, edi);
    if ((_fas >= 0)) goto loc_002B9354; /* jns: not sign (positive) */

loc_002B934F: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx | 0xFFFFFFF0u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_002B9354: ;
    SET_LO16(edx, MEM16(0x7796AA));
    eax = ecx;
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x779580) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x779580;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO16(edx, LO16(edx) + 1);
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    edi = edi | 0xFFFFFFFFu;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM16(0x7796AA) = LO16(edx);
    MEM8(eax) = 5;
    MEM8(eax + 1) = 0;
    MEM16(eax + 2) = LO16(edx);
    MEM32(eax + 4) = esi;
    MEM32(eax + 8) = edi;
    MEM32(eax + 0xC) = edi;
    MEM32(0x779680) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_002B93A4; /* jne: not equal / not zero */

loc_002B9390: ;
    PUSH32(esp, 0x4C4584);
    PUSH32(esp, 0x002B939Au); RECOMP_ABI_CALL(0x002BF770u, sub_002BF770); /* call 0x002BF770 */

loc_002B939A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0xFFFFFFFDu;
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_002B93A4: ;
    SET_LO8(eax, MEM8(esi + 1));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B943F; /* je: equal / zero */

loc_002B93AF: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 3 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B93BC; /* jne: not equal / not zero */

loc_002B93B3: ;
    eax = MEM32(esi + 0x14);
    MEM8(esi + 1) = 1;
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_002B93BC: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B93D4; /* jne: not equal / not zero */

loc_002B93C3: ;
    PUSH32(esp, 0x4C4558);
    PUSH32(esp, 0x002B93CDu); RECOMP_ABI_CALL(0x002BF770u, sub_002BF770); /* call 0x002BF770 */

loc_002B93CD: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = edi;
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_002B93D4: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002B93DAu); RECOMP_ABI_CALL(0x002BE8A0u, sub_002BE8A0); /* call 0x002BE8A0 */

loc_002B93DA: ;
    PUSH32(esp, 0x002B93DFu); RECOMP_ABI_CALL(0x002BEA50u, sub_002BEA50); /* call 0x002BEA50 */

loc_002B93DF: ;
    eax = MEM32(esi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002B93E8u); RECOMP_ABI_CALL(0x002BDC10u, sub_002BDC10); /* call 0x002BDC10 */

loc_002B93E8: ;
    _fb = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    MEM32(esi + 0x20) = eax;
    PUSH32(esp, 0x002B93F4u); RECOMP_ABI_CALL(0x002B9030u, sub_002B9030); /* call 0x002B9030 */

loc_002B93F4: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(esi + 1) = 1;
    PUSH32(esp, 0x002B9400u); RECOMP_ABI_CALL(0x002BEA60u, sub_002BEA60); /* call 0x002BEA60 */

loc_002B9400: ;
    ecx = MEM32(0x779680);
    ecx = ecx & 0x8000000Fu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fas >= 0)) goto loc_002B9413; /* jns: not sign (positive) */

loc_002B940E: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx | 0xFFFFFFF0u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_002B9413: ;
    SET_LO16(edx, MEM16(0x7796AA));
    eax = ecx;
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x779580) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x779580;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(eax) = 5;
    MEM8(eax + 1) = 1;
    MEM16(eax + 2) = LO16(edx);
    MEM32(eax + 4) = esi;
    MEM32(eax + 8) = edi;
    MEM32(eax + 0xC) = edi;
    MEM32(0x779680) = ecx;

loc_002B943F: ;
    eax = MEM32(esi + 0x14);
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_002B9450
 * Original: 0x002B9450 - 0x002B9531 (225 bytes, 73 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B9450(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B9450: ;
    ecx = MEM32(0x779680);
    ecx = ecx & 0x8000000Fu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, edi);
    if ((_fas >= 0)) goto loc_002B9464; /* jns: not sign (positive) */

loc_002B945F: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx | 0xFFFFFFF0u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_002B9464: ;
    SET_LO16(edx, MEM16(0x7796AE));
    eax = ecx;
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x779580) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x779580;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO16(edx, LO16(edx) + 1);
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    edi = edi | 0xFFFFFFFFu;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM16(0x7796AE) = LO16(edx);
    MEM8(eax) = 7;
    MEM8(eax + 1) = 0;
    MEM16(eax + 2) = LO16(edx);
    MEM32(eax + 4) = esi;
    MEM32(eax + 8) = edi;
    MEM32(eax + 0xC) = edi;
    MEM32(0x779680) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_002B94B4; /* jne: not equal / not zero */

loc_002B94A0: ;
    PUSH32(esp, 0x4C45D4);
    PUSH32(esp, 0x002B94AAu); RECOMP_ABI_CALL(0x002BF770u, sub_002BF770); /* call 0x002BF770 */

loc_002B94AA: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0xFFFFFFFDu;
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_002B94B4: ;
    SET_LO8(eax, MEM8(esi + 1));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B952C; /* je: equal / zero */

loc_002B94BB: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 3 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B94C8; /* jne: not equal / not zero */

loc_002B94BF: ;
    eax = MEM32(esi + 0x14);
    MEM8(esi + 1) = 1;
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_002B94C8: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B94E0; /* jne: not equal / not zero */

loc_002B94CF: ;
    PUSH32(esp, 0x4C45A8);
    PUSH32(esp, 0x002B94D9u); RECOMP_ABI_CALL(0x002BF770u, sub_002BF770); /* call 0x002BF770 */

loc_002B94D9: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = edi;
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_002B94E0: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002B94E6u); RECOMP_ABI_CALL(0x002BE680u, sub_002BE680); /* call 0x002BE680 */

loc_002B94E6: ;
    MEM8(esi + 3) = 1;
    ecx = MEM32(0x779680);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ecx & 0x8000000Fu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fas >= 0)) goto loc_002B9500; /* jns: not sign (positive) */

loc_002B94FB: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx | 0xFFFFFFF0u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_002B9500: ;
    SET_LO16(edx, MEM16(0x7796AE));
    eax = ecx;
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x779580) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x779580;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(eax) = 7;
    MEM8(eax + 1) = 1;
    MEM16(eax + 2) = LO16(edx);
    MEM32(eax + 4) = esi;
    MEM32(eax + 8) = edi;
    MEM32(eax + 0xC) = edi;
    MEM32(0x779680) = ecx;

loc_002B952C: ;
    eax = MEM32(esi + 0x14);
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_002B9540
 * Original: 0x002B9540 - 0x002B95C1 (129 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B9540(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B9540: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(MEM8(esi + 1)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 1), 2 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B9588; /* jne: not equal / not zero */

loc_002B954B: ;
    eax = MEM32(esi + 4);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002B9555u); RECOMP_ABI_CALL(0x002BDBC0u, sub_002BDBC0); /* call 0x002BDBC0 */

loc_002B9555: ;
    ecx = MEM32(esi + 4);
    edi = MEM32(esi + 0x14);
    PUSH32(esp, ecx);
    MEM8(esi + 1) = LO8(eax);
    PUSH32(esp, 0x002B9564u); RECOMP_ABI_CALL(0x002BDC10u, sub_002BDC10); /* call 0x002BDC10 */

loc_002B9564: ;
    SET_LO8(ecx, MEM8(esi + 1));
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 3 (8-bit) */
    MEM32(esi + 0x20) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_002B9579; /* je: equal / zero */

loc_002B9574: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 4 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B9587; /* jne: not equal / not zero */

loc_002B9579: ;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    MEM32(esi + 0x14) = eax;
    PUSH32(esp, 0x002B9584u); RECOMP_ABI_CALL(0x002B9030u, sub_002B9030); /* call 0x002B9030 */

loc_002B9584: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002B9587: ;
    POP32(esp, edi);

loc_002B9588: ;
    _fa = (uint32_t)(MEM8(esi + 3)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 3), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B95BF; /* jne: not equal / not zero */

loc_002B958E: ;
    edx = MEM32(esi + 4);
    PUSH32(esp, edx);
    PUSH32(esp, 0x002B9597u); RECOMP_ABI_CALL(0x002BDBC0u, sub_002BDBC0); /* call 0x002BDBC0 */

loc_002B9597: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B95BF; /* jne: not equal / not zero */

loc_002B959F: ;
    eax = MEM32(esi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002B95A8u); RECOMP_ABI_CALL(0x002BDC10u, sub_002BDC10); /* call 0x002BDC10 */

loc_002B95A8: ;
    _fb = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    MEM32(esi + 0x20) = eax;
    PUSH32(esp, 0x002B95B4u); RECOMP_ABI_CALL(0x002B9030u, sub_002B9030); /* call 0x002B9030 */

loc_002B95B4: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(esi + 1) = 1;
    MEM8(esi + 3) = 0;

loc_002B95BF: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002B95D0
 * Original: 0x002B95D0 - 0x002B95FF (47 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B95D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B95D0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002B95D6u); RECOMP_ABI_CALL(0x002BEA50u, sub_002BEA50); /* call 0x002BEA50 */

loc_002B95D6: ;
    esi = 0x779AE0;
    goto loc_002B95E0;

    /* nop */

loc_002B95E0: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B95EE; /* jne: not equal / not zero */

loc_002B95E5: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002B95EBu); RECOMP_ABI_CALL(0x002B9540u, sub_002B9540); /* call 0x002B9540 */

loc_002B95EB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002B95EE: ;
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x44;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x779F20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x779F20 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002B95E0; /* jl: less (signed <) */

loc_002B95F9: ;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_002BEA60(); return; /* tail jmp 0x002BEA60 */

}

/**
 * sub_002B9600
 * Original: 0x002B9600 - 0x002B9708 (264 bytes, 87 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B9600(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B9600: ;
    ecx = MEM32(0x779680);
    ecx = ecx & 0x8000000Fu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = eax;
    if ((_fas >= 0)) goto loc_002B961B; /* jns: not sign (positive) */

loc_002B9616: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx | 0xFFFFFFF0u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_002B961B: ;
    SET_LO16(edx, MEM16(0x7796AC));
    eax = ecx;
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x779580) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x779580;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO16(edx, LO16(edx) + 1);
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM16(0x7796AC) = LO16(edx);
    MEM8(eax) = 6;
    MEM8(eax + 1) = 0;
    MEM16(eax + 2) = LO16(edx);
    MEM32(eax + 4) = esi;
    MEM32(eax + 8) = ebp;
    MEM32(eax + 0xC) = edi;
    MEM32(0x779680) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_002B9669; /* jne: not equal / not zero */

loc_002B9654: ;
    PUSH32(esp, 0x4C4624);
    PUSH32(esp, 0x002B965Eu); RECOMP_ABI_CALL(0x002BF770u, sub_002BF770); /* call 0x002BF770 */

loc_002B965E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    eax = 0xFFFFFFFDu;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_002B9669: ;
    _fa = (uint32_t)(MEM8(esi + 1)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 1), 2 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B9674; /* jne: not equal / not zero */

loc_002B966F: ;
    PUSH32(esp, 0x002B9674u); RECOMP_ABI_CALL(0x002B9340u, sub_002B9340); /* call 0x002B9340 */

loc_002B9674: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B967D; /* jne: not equal / not zero */

loc_002B9678: ;
    MEM32(esi + 0x14) = ebp;
    goto loc_002B9694;

loc_002B967D: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B9687; /* jne: not equal / not zero */

loc_002B9682: ;
    eax = MEM32(esi + 0x14);
    goto loc_002B968F;

loc_002B9687: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B96F3; /* jne: not equal / not zero */

loc_002B968C: ;
    eax = MEM32(esi + 0xC);

loc_002B968F: ;
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x14) = eax;

loc_002B9694: ;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002B96A4; /* jge: greater or equal (signed >=) */

loc_002B969B: ;
    MEM32(esi + 0x14) = 0;
    goto loc_002B96AE;

loc_002B96A4: ;
    ecx = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_002B96AE; /* jle: less or equal (signed <=) */

loc_002B96AB: ;
    MEM32(esi + 0x14) = ecx;

loc_002B96AE: ;
    ecx = MEM32(0x779680);
    ecx = ecx & 0x8000000Fu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fas >= 0)) goto loc_002B96C1; /* jns: not sign (positive) */

loc_002B96BC: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx | 0xFFFFFFF0u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_002B96C1: ;
    SET_LO16(edx, MEM16(0x7796AC));
    eax = ecx;
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x779580) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x779580;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(eax + 4) = esi;
    MEM32(eax + 8) = ebp;
    MEM8(eax) = 6;
    MEM8(eax + 1) = 1;
    MEM16(eax + 2) = LO16(edx);
    MEM32(eax + 0xC) = edi;
    MEM32(0x779680) = ecx;
    eax = MEM32(esi + 0x14);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_002B96F3: ;
    PUSH32(esp, 0x4C45FC);
    PUSH32(esp, 0x002B96FDu); RECOMP_ABI_CALL(0x002BF770u, sub_002BF770); /* call 0x002BF770 */

loc_002B96FD: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    eax = 0xFFFFFFFDu;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_002B9710
 * Original: 0x002B9710 - 0x002B972B (27 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B9710(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B9710: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B9727; /* jne: not equal / not zero */

loc_002B9714: ;
    PUSH32(esp, 0x4C4648);
    PUSH32(esp, 0x002B971Eu); RECOMP_ABI_CALL(0x002BF770u, sub_002BF770); /* call 0x002BF770 */

loc_002B971E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0xFFFFFFFDu;
    esp += 4; return; /* ret */

loc_002B9727: ;
    eax = MEM32(eax + 0x14);
    esp += 4; return; /* ret */

}

/**
 * sub_002B9730
 * Original: 0x002B9730 - 0x002B9783 (83 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B9730(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B9730: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B9747; /* jne: not equal / not zero */

loc_002B9734: ;
    PUSH32(esp, 0x4C466C);
    PUSH32(esp, 0x002B973Eu); RECOMP_ABI_CALL(0x002BF770u, sub_002BF770); /* call 0x002BF770 */

loc_002B973E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0xFFFFFFFDu;
    esp += 4; return; /* ret */

loc_002B9747: ;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFF800) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x10), 0x7FFFF800 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002B977F; /* jl: less (signed <) */

loc_002B9750: ;
    eax = MEM32(esi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002B9759u); RECOMP_ABI_CALL(0x002BE800u, sub_002BE800); /* call 0x002BE800 */

loc_002B9759: ;
    ecx = MEM32(esi + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002B9762u); RECOMP_ABI_CALL(0x002BDBC0u, sub_002BDBC0); /* call 0x002BDBC0 */

loc_002B9762: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B9770; /* jne: not equal / not zero */

loc_002B976A: ;
    eax = 0xFFFFFFFBu;
    esp += 4; return; /* ret */

loc_002B9770: ;
    edx = MEM32(esi + 4);
    PUSH32(esp, edx);
    PUSH32(esp, 0x002B9779u); RECOMP_ABI_CALL(0x002BE280u, sub_002BE280); /* call 0x002BE280 */

loc_002B9779: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x10) = eax;

loc_002B977F: ;
    eax = MEM32(esi + 0x10);
    esp += 4; return; /* ret */

}

/**
 * sub_002B9790
 * Original: 0x002B9790 - 0x002B97B6 (38 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B9790(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B9790: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B97AD; /* jne: not equal / not zero */

loc_002B9794: ;
    PUSH32(esp, 0x4C4698);
    PUSH32(esp, 0x002B979Eu); RECOMP_ABI_CALL(0x002BF770u, sub_002BF770); /* call 0x002BF770 */

loc_002B979E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = 0;
    eax = 0xFFFFFFFDu;
    esp += 4; return; /* ret */

loc_002B97AD: ;
    ecx = MEM32(eax + 0x18);
    MEM32(esi) = ecx;
    eax = MEM32(eax + 0x1C);
    esp += 4; return; /* ret */

}

/**
 * sub_002B97C0
 * Original: 0x002B97C0 - 0x002B97DB (27 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B97C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B97C0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B97D7; /* jne: not equal / not zero */

loc_002B97C4: ;
    PUSH32(esp, 0x4C46C4);
    PUSH32(esp, 0x002B97CEu); RECOMP_ABI_CALL(0x002BF770u, sub_002BF770); /* call 0x002BF770 */

loc_002B97CE: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0xFFFFFFFDu;
    esp += 4; return; /* ret */

loc_002B97D7: ;
    eax = MEM32(eax + 0x20);
    esp += 4; return; /* ret */

}

/**
 * sub_002B97E0
 * Original: 0x002B97E0 - 0x002B97FC (28 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B97E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B97E0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B97F7; /* jne: not equal / not zero */

loc_002B97E4: ;
    PUSH32(esp, 0x4C46F4);
    PUSH32(esp, 0x002B97EEu); RECOMP_ABI_CALL(0x002BF770u, sub_002BF770); /* call 0x002BF770 */

loc_002B97EE: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0xFFFFFFFDu;
    esp += 4; return; /* ret */

loc_002B97F7: ;
    eax = (uint32_t)(int32_t)SMEM8(eax + 1);
    esp += 4; return; /* ret */

}

/**
 * sub_002B9800
 * Original: 0x002B9800 - 0x002B9850 (80 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B9800(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B9800: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002B983D; /* jl: less (signed <) */

loc_002B9808: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x100) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x100 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002B983D; /* jge: greater or equal (signed >=) */

loc_002B980F: ;
    eax = MEM32(eax * 4 + 0x7796E0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B983D; /* je: equal / zero */

loc_002B981A: ;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002B982A; /* jl: less (signed <) */

loc_002B9822: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax + 8) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002B982A; /* jge: greater or equal (signed >=) */

loc_002B9827: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_002B982A: ;
    PUSH32(esp, 0x4C4740);
    PUSH32(esp, 0x002B9834u); RECOMP_ABI_CALL(0x002BF770u, sub_002BF770); /* call 0x002BF770 */

loc_002B9834: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0xFFFFFFFDu;
    esp += 4; return; /* ret */

loc_002B983D: ;
    PUSH32(esp, 0x4C471C);
    PUSH32(esp, 0x002B9847u); RECOMP_ABI_CALL(0x002BF770u, sub_002BF770); /* call 0x002BF770 */

loc_002B9847: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0xFFFFFFFDu;
    esp += 4; return; /* ret */

}

/**
 * sub_002B9850
 * Original: 0x002B9850 - 0x002B99C6 (374 bytes, 123 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B9850(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B9850: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = eax;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x002B985Cu); RECOMP_ABI_CALL(0x002B9800u, sub_002B9800); /* call 0x002B9800 */

loc_002B985C: ;
    ebx = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    MEM32(esp + 8) = ebx;
    if (CMP_GE(_fas, _fbs)) goto loc_002B9897; /* jge: greater or equal (signed >=) */

loc_002B9869: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x18);
    edx = MEM32(esp + 0x1C);
    MEM32(eax) = 0;
    eax = MEM32(esp + 0x20);
    MEM32(ecx) = 0xFFFFFFFFu;
    MEM32(edx) = 0xFFFFFFFFu;
    MEM32(eax) = 0xFFFFFFFFu;
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_002B9897: ;
    esi = MEM32(esi * 4 + 0x7796E0);
    _fa = (uint32_t)(MEM8(esi + 0xF)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0xF), 1 (8-bit) */
    PUSH32(esp, ebp);
    if (CMP_NE(_fa, _fb)) goto loc_002B9954; /* jne: not equal / not zero */

loc_002B98A9: ;
    ecx = MEM32(esi + 0x118);
    eax = ecx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 0x7FF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((0xB) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ecx = ecx & 0x800007FFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fas >= 0)) goto loc_002B98CD; /* jns: not sign (positive) */

loc_002B98C5: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx | 0xFFFFF800u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_002B98CD: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_002B98D2; /* jle: less or equal (signed <=) */

loc_002B98D1: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_002B98D2: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    ebp = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_002B9911; /* jle: less or equal (signed <=) */

loc_002B98DA: ;
    /* nop */

loc_002B98E0: ;
    ecx = MEM32(esi + ebx * 4 + 0x11C);
    eax = ecx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 0x7FF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((0xB) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ecx = ecx & 0x800007FFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fas >= 0)) goto loc_002B9905; /* jns: not sign (positive) */

loc_002B98FD: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx | 0xFFFFF800u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_002B9905: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_002B990A; /* jle: less or equal (signed <=) */

loc_002B9909: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_002B990A: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002B98E0; /* jl: less (signed <) */

loc_002B9911: ;
    ecx = MEM32(esi + edi * 4 + 0x11C);
    eax = ecx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 0x7FF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((0xB) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ecx = ecx & 0x800007FFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fas >= 0)) goto loc_002B9936; /* jns: not sign (positive) */

loc_002B992E: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx | 0xFFFFF800u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_002B9936: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_002B993B; /* jle: less or equal (signed <=) */

loc_002B993A: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_002B993B: ;
    ecx = MEM32(esp + 0x20);
    ebx = MEM32(esp + 0xC);
    MEM32(ecx) = eax;
    edx = MEM32(esi + edi * 4 + 0x11C);
    eax = MEM32(esp + 0x24);
    MEM32(eax) = edx;
    goto loc_002B998F;

loc_002B9954: ;
    ebp = ZX16(MEM16(esi + 0x118));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_002B9970; /* jle: less or equal (signed <=) */

loc_002B9961: ;
    ecx = ZX16(MEM16(esi + eax * 2 + 0x11A));
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + ecx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002B9961; /* jl: less (signed <) */

loc_002B9970: ;
    edx = ZX16(MEM16(esi + edi * 2 + 0x11A));
    eax = MEM32(esp + 0x20);
    MEM32(eax) = edx;
    ecx = ZX16(MEM16(esi + edi * 2 + 0x11A));
    edx = MEM32(esp + 0x24);
    ecx = ecx << 0xB;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(edx) = ecx;

loc_002B998F: ;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, 0x100);
    eax = esi + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002B99A2u); RECOMP_ABI_CALL(0x000EBBD0u, sub_000EBBD0); /* call 0x000EBBD0 */

loc_002B99A2: ;
    edx = MEM32(esi + 0x110);
    eax = MEM32(esp + 0x24);
    MEM32(eax) = edx;
    ecx = MEM32(esi + 0x114);
    edx = MEM32(esp + 0x28);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebp;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebp);
    POP32(esp, esi);
    eax = ebx;
    MEM32(edx) = ecx;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002B99D0
 * Original: 0x002B99D0 - 0x002B99DB (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B99D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B99D0: ;
    eax = MEM32(eax * 4 + 0x7796E0);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002B99E0
 * Original: 0x002B99E0 - 0x002B99EB (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B99E0(void)
{

loc_002B99E0: ;
    ecx = MEM32(eax * 4 + 0x7796E0);
    eax = MEM32(ecx + 8);
    esp += 4; return; /* ret */

}

/**
 * sub_002B99F0
 * Original: 0x002B99F0 - 0x002B9A25 (53 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B99F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B99F0: ;
    _fb = (uint32_t)(0x110) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x110;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = esp;
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x124);
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002B9A1Au); RECOMP_ABI_CALL(0x002B9850u, sub_002B9850); /* call 0x002B9850 */

loc_002B9A1A: ;
    eax = MEM32(esp + 0x14);
    _fb = (uint32_t)(0x124) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x124;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002B9A30
 * Original: 0x002B9A30 - 0x002B9A67 (55 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B9A30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B9A30: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = 3;
    edi = 0x4C4764;
    esi = eax;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    POP32(esp, edi);
    POP32(esp, esi);
    if ((_flags != 0)) goto loc_002B9A4C; /* je: equal / zero */

loc_002B9A46: ;
    eax = 0xFFFFFFFCu;
    esp += 4; return; /* ret */

loc_002B9A4C: ;
    edx = ZX8(MEM8(eax + 5));
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_HI8(ecx, MEM8(eax + 7));
    SET_LO8(ecx, MEM8(eax + 6));
    eax = ZX8(MEM8(eax + 4));
    ecx = ecx << 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx | edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = ecx << 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax | ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 4; return; /* ret */

}

/**
 * sub_002B9A70
 * Original: 0x002B9A70 - 0x002B9A7A (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B9A70(void)
{

loc_002B9A70: ;
    eax = MEM32(esp + 4);
    MEM32(0x779684) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_002B9A80
 * Original: 0x002B9A80 - 0x002B9A9B (27 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B9A80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B9A80: ;
    _fa = (uint32_t)(MEM8(eax + 1)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 1), 2 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B9A93; /* jne: not equal / not zero */

loc_002B9A86: ;
    MEM32(esp + 4) = 0x4C4768;
    g_seh_ebp = ebp; sub_002BF770(); return; /* tail jmp 0x002BF770 */

loc_002B9A93: ;
    ecx = MEM32(esp + 4);
    MEM32(eax + 0x2C) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_002B9AA0
 * Original: 0x002B9AA0 - 0x002B9AB8 (24 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B9AA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B9AA0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B9AAB; /* je: equal / zero */

loc_002B9AA4: ;
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B9AAE; /* jne: not equal / not zero */

loc_002B9AAB: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_002B9AAE: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002B9AB4u); RECOMP_ABI_CALL(0x002BE480u, sub_002BE480); /* call 0x002BE480 */

loc_002B9AB4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002B9AC0
 * Original: 0x002B9AC0 - 0x002B9ACA (10 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B9AC0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B9AC0: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002B9AC6u); RECOMP_ABI_CALL(0x002BE2C0u, sub_002BE2C0); /* call 0x002BE2C0 */

loc_002B9AC6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002B9AD0
 * Original: 0x002B9AD0 - 0x002B9AD5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B9AD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B9AD0: ;
    g_seh_ebp = ebp; sub_002BEA70(); return; /* tail jmp 0x002BEA70 */

}

/**
 * sub_002B9AE0
 * Original: 0x002B9AE0 - 0x002B9AE5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B9AE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B9AE0: ;
    g_seh_ebp = ebp; sub_002BEA80(); return; /* tail jmp 0x002BEA80 */

}

/**
 * sub_002B9AF0
 * Original: 0x002B9AF0 - 0x002B9B0D (29 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B9AF0(void)
{

loc_002B9AF0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002B9AF6u); RECOMP_ABI_CALL(0x002BEA70u, sub_002BEA70); /* call 0x002BEA70 */

loc_002B9AF6: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(eax * 4 + 0x7796E0);
    esi = MEM32(ecx + 4);
    PUSH32(esp, 0x002B9B09u); RECOMP_ABI_CALL(0x002BEA80u, sub_002BEA80); /* call 0x002BEA80 */

loc_002B9B09: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002B9B10
 * Original: 0x002B9B10 - 0x002B9BDE (206 bytes, 71 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B9B10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B9B10: ;
    _fb = (uint32_t)(0x110) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x110;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x11C);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x124);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    eax = ebx;
    PUSH32(esp, 0x002B9B46u); RECOMP_ABI_CALL(0x002B9850u, sub_002B9850); /* call 0x002B9850 */

loc_002B9B46: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002B9B5B; /* jge: greater or equal (signed >=) */

loc_002B9B4D: ;
    POP32(esp, edi);
    eax = 0xFFFFFFFDu;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x110) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x110;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_002B9B5B: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 0x14);
    edi = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x120);
    MEM32(esi + 0x30) = eax;
    MEM32(esi + 0x34) = ecx;
    edx = MEM32(ebx * 4 + 0x7796E0);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 4);
    MEM32(esi + 0x3C) = eax;
    eax = edx;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    MEM32(esi + 0x38) = edx;
    MEM32(esi + 0x40) = edi;
    MEM32(esi + 0x14) = 0;
    PUSH32(esp, 0x002B9B9Eu); RECOMP_ABI_CALL(0x002BE820u, sub_002BE820); /* call 0x002BE820 */

loc_002B9B9E: ;
    edx = MEM32(esi + 4);
    PUSH32(esp, edx);
    PUSH32(esp, 0x002B9BA7u); RECOMP_ABI_CALL(0x002BDBC0u, sub_002BDBC0); /* call 0x002BDBC0 */

loc_002B9BA7: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B9BC8; /* jne: not equal / not zero */

loc_002B9BAF: ;
    eax = MEM32(esi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002B9BB8u); RECOMP_ABI_CALL(0x002BE960u, sub_002BE960); /* call 0x002BE960 */

loc_002B9BB8: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, edi);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x110) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x110;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_002B9BC8: ;
    ecx = MEM32(esp + 0x14);
    MEM32(esi + 0xC) = edi;
    MEM32(esi + 0x10) = ecx;
    POP32(esp, esi);
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x110) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x110;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002B9BE0
 * Original: 0x002B9BE0 - 0x002B9CAD (205 bytes, 66 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B9BE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B9BE0: ;
    ecx = MEM32(0x779680);
    ecx = ecx & 0x8000000Fu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = eax;
    if ((_fas >= 0)) goto loc_002B9BF7; /* jns: not sign (positive) */

loc_002B9BF2: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx | 0xFFFFFFF0u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_002B9BF7: ;
    SET_LO16(edx, MEM16(0x7796A6));
    eax = ecx;
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x779580) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x779580;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO16(edx, LO16(edx) + 1);
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    ebp = ebp | 0xFFFFFFFFu;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM16(0x7796A6) = LO16(edx);
    MEM8(eax) = 3;
    MEM8(eax + 1) = 0;
    MEM16(eax + 2) = LO16(edx);
    MEM32(eax + 4) = esi;
    MEM32(eax + 8) = ebp;
    MEM32(eax + 0xC) = ebp;
    MEM32(0x779680) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_002B9CAA; /* je: equal / zero */

loc_002B9C33: ;
    _fa = (uint32_t)(MEM8(esi + 1)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 1), 2 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B9C3E; /* jne: not equal / not zero */

loc_002B9C39: ;
    PUSH32(esp, 0x002B9C3Eu); RECOMP_ABI_CALL(0x002B9340u, sub_002B9340); /* call 0x002B9340 */

loc_002B9C3E: ;
    PUSH32(esp, edi);
    edi = MEM32(esi + 4);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B9C5F; /* je: equal / zero */

loc_002B9C46: ;
    PUSH32(esp, edi);
    MEM8(esi) = 0;
    MEM32(esi + 4) = 0;
    PUSH32(esp, 0x002B9C56u); RECOMP_ABI_CALL(0x002BE960u, sub_002BE960); /* call 0x002BE960 */

loc_002B9C56: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x002B9C5Cu); RECOMP_ABI_CALL(0x002BE9C0u, sub_002BE9C0); /* call 0x002BE9C0 */

loc_002B9C5C: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002B9C5F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x11;
    edi = esi;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = MEM32(0x779680);
    ecx = ecx & 0x8000000Fu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fas >= 0)) goto loc_002B9C7D; /* jns: not sign (positive) */

loc_002B9C78: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx | 0xFFFFFFF0u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_002B9C7D: ;
    SET_LO16(edx, MEM16(0x7796A6));
    eax = ecx;
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x779580) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x779580;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(eax) = 3;
    MEM8(eax + 1) = 1;
    MEM16(eax + 2) = LO16(edx);
    MEM32(eax + 4) = esi;
    MEM32(eax + 8) = ebp;
    MEM32(eax + 0xC) = ebp;
    MEM32(0x779680) = ecx;
    POP32(esp, edi);

loc_002B9CAA: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_002B9CB0
 * Original: 0x002B9CB0 - 0x002B9CCF (31 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B9CB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B9CB0: ;
    PUSH32(esp, esi);
    esi = 0x779AE0;

loc_002B9CB6: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B9CC2; /* jne: not equal / not zero */

loc_002B9CBB: ;
    eax = esi;
    PUSH32(esp, 0x002B9CC2u); RECOMP_ABI_CALL(0x002B9BE0u, sub_002B9BE0); /* call 0x002B9BE0 */

loc_002B9CC2: ;
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x44;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x779F20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x779F20 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002B9CB6; /* jl: less (signed <) */

loc_002B9CCD: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002B9CD0
 * Original: 0x002B9CD0 - 0x002B9CF2 (34 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B9CD0(void)
{

loc_002B9CD0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002B9CD6u); RECOMP_ABI_CALL(0x002BEA70u, sub_002BEA70); /* call 0x002BEA70 */

loc_002B9CD6: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0xC);
    esi = MEM32(esp + 8);
    PUSH32(esp, 0x002B9CE7u); RECOMP_ABI_CALL(0x002B9140u, sub_002B9140); /* call 0x002B9140 */

loc_002B9CE7: ;
    esi = eax;
    PUSH32(esp, 0x002B9CEEu); RECOMP_ABI_CALL(0x002BEA80u, sub_002BEA80); /* call 0x002BEA80 */

loc_002B9CEE: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002B9D00
 * Original: 0x002B9D00 - 0x002B9D22 (34 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B9D00(void)
{

loc_002B9D00: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002B9D06u); RECOMP_ABI_CALL(0x002BEA70u, sub_002BEA70); /* call 0x002BEA70 */

loc_002B9D06: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0xC);
    esi = MEM32(esp + 8);
    PUSH32(esp, 0x002B9D17u); RECOMP_ABI_CALL(0x002B9140u, sub_002B9140); /* call 0x002B9140 */

loc_002B9D17: ;
    esi = eax;
    PUSH32(esp, 0x002B9D1Eu); RECOMP_ABI_CALL(0x002BEA80u, sub_002BEA80); /* call 0x002BEA80 */

loc_002B9D1E: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002B9D30
 * Original: 0x002B9D30 - 0x002B9D58 (40 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B9D30(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B9D30: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x002B9D37u); RECOMP_ABI_CALL(0x002BEA70u, sub_002BEA70); /* call 0x002BEA70 */

loc_002B9D37: ;
    eax = MEM32(esp + 0x14);
    ebx = MEM32(esp + 0x10);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002B9D49u); RECOMP_ABI_CALL(0x002B91B0u, sub_002B91B0); /* call 0x002B91B0 */

loc_002B9D49: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = eax;
    PUSH32(esp, 0x002B9D53u); RECOMP_ABI_CALL(0x002BEA80u, sub_002BEA80); /* call 0x002BEA80 */

loc_002B9D53: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002B9D60
 * Original: 0x002B9D60 - 0x002B9DA7 (71 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B9D60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B9D60: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002B9D66u); RECOMP_ABI_CALL(0x002BEA70u, sub_002BEA70); /* call 0x002BEA70 */

loc_002B9D66: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 3 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002B9D89; /* je: equal / zero */

loc_002B9D6E: ;
    PUSH32(esp, 0x4C4524);
    PUSH32(esp, 0x002B9D78u); RECOMP_ABI_CALL(0x002BF770u, sub_002BF770); /* call 0x002BF770 */

loc_002B9D78: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = 0xFFFFFFFDu;
    PUSH32(esp, 0x002B9D85u); RECOMP_ABI_CALL(0x002BEA80u, sub_002BEA80); /* call 0x002BEA80 */

loc_002B9D85: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_002B9D89: ;
    esi = MEM32(esp + 8);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002B9D98u); RECOMP_ABI_CALL(0x002B91B0u, sub_002B91B0); /* call 0x002B91B0 */

loc_002B9D98: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    esi = eax;
    PUSH32(esp, 0x002B9DA3u); RECOMP_ABI_CALL(0x002BEA80u, sub_002BEA80); /* call 0x002BEA80 */

loc_002B9DA3: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002B9DB0
 * Original: 0x002B9DB0 - 0x002B9DCA (26 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B9DB0(void)
{

loc_002B9DB0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002B9DB6u); RECOMP_ABI_CALL(0x002BEA70u, sub_002BEA70); /* call 0x002BEA70 */

loc_002B9DB6: ;
    esi = MEM32(esp + 8);
    PUSH32(esp, 0x002B9DBFu); RECOMP_ABI_CALL(0x002B9340u, sub_002B9340); /* call 0x002B9340 */

loc_002B9DBF: ;
    esi = eax;
    PUSH32(esp, 0x002B9DC6u); RECOMP_ABI_CALL(0x002BEA80u, sub_002BEA80); /* call 0x002BEA80 */

loc_002B9DC6: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002B9DD0
 * Original: 0x002B9DD0 - 0x002B9DEA (26 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B9DD0(void)
{

loc_002B9DD0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002B9DD6u); RECOMP_ABI_CALL(0x002BEA70u, sub_002BEA70); /* call 0x002BEA70 */

loc_002B9DD6: ;
    esi = MEM32(esp + 8);
    PUSH32(esp, 0x002B9DDFu); RECOMP_ABI_CALL(0x002B9450u, sub_002B9450); /* call 0x002B9450 */

loc_002B9DDF: ;
    esi = eax;
    PUSH32(esp, 0x002B9DE6u); RECOMP_ABI_CALL(0x002BEA80u, sub_002BEA80); /* call 0x002BEA80 */

loc_002B9DE6: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002B9DF0
 * Original: 0x002B9DF0 - 0x002B9DFF (15 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B9DF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B9DF0: ;
    PUSH32(esp, 0x002B9DF5u); RECOMP_ABI_CALL(0x002BEA70u, sub_002BEA70); /* call 0x002BEA70 */

loc_002B9DF5: ;
    PUSH32(esp, 0x002B9DFAu); RECOMP_ABI_CALL(0x002B95D0u, sub_002B95D0); /* call 0x002B95D0 */

loc_002B9DFA: ;
    g_seh_ebp = ebp; sub_002BEA80(); return; /* tail jmp 0x002BEA80 */

}

/**
 * sub_002B9E00
 * Original: 0x002B9E00 - 0x002B9E28 (40 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B9E00(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B9E00: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x002B9E07u); RECOMP_ABI_CALL(0x002BEA70u, sub_002BEA70); /* call 0x002BEA70 */

loc_002B9E07: ;
    eax = MEM32(esp + 0x10);
    edi = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x10);
    PUSH32(esp, 0x002B9E19u); RECOMP_ABI_CALL(0x002B9600u, sub_002B9600); /* call 0x002B9600 */

loc_002B9E19: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = eax;
    PUSH32(esp, 0x002B9E23u); RECOMP_ABI_CALL(0x002BEA80u, sub_002BEA80); /* call 0x002BEA80 */

loc_002B9E23: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002B9E30
 * Original: 0x002B9E30 - 0x002B9E65 (53 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B9E30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B9E30: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002B9E36u); RECOMP_ABI_CALL(0x002BEA70u, sub_002BEA70); /* call 0x002BEA70 */

loc_002B9E36: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B9E59; /* jne: not equal / not zero */

loc_002B9E3E: ;
    PUSH32(esp, 0x4C4648);
    PUSH32(esp, 0x002B9E48u); RECOMP_ABI_CALL(0x002BF770u, sub_002BF770); /* call 0x002BF770 */

loc_002B9E48: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = 0xFFFFFFFDu;
    PUSH32(esp, 0x002B9E55u); RECOMP_ABI_CALL(0x002BEA80u, sub_002BEA80); /* call 0x002BEA80 */

loc_002B9E55: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_002B9E59: ;
    esi = MEM32(eax + 0x14);
    PUSH32(esp, 0x002B9E61u); RECOMP_ABI_CALL(0x002BEA80u, sub_002BEA80); /* call 0x002BEA80 */

loc_002B9E61: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002B9E70
 * Original: 0x002B9E70 - 0x002B9E8E (30 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B9E70(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B9E70: ;
    PUSH32(esp, esi);
    esi = eax;
    PUSH32(esp, 0x002B9E78u); RECOMP_ABI_CALL(0x002B9730u, sub_002B9730); /* call 0x002B9730 */

loc_002B9E78: ;
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
    MEM32(esi + 0xC) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002B9E90
 * Original: 0x002B9E90 - 0x002B9EAA (26 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B9E90(void)
{

loc_002B9E90: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002B9E96u); RECOMP_ABI_CALL(0x002BEA70u, sub_002BEA70); /* call 0x002BEA70 */

loc_002B9E96: ;
    esi = MEM32(esp + 8);
    PUSH32(esp, 0x002B9E9Fu); RECOMP_ABI_CALL(0x002B9730u, sub_002B9730); /* call 0x002B9730 */

loc_002B9E9F: ;
    esi = eax;
    PUSH32(esp, 0x002B9EA6u); RECOMP_ABI_CALL(0x002BEA80u, sub_002BEA80); /* call 0x002BEA80 */

loc_002B9EA6: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002B9EB0
 * Original: 0x002B9EB0 - 0x002B9EF8 (72 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B9EB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B9EB0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002B9EB6u); RECOMP_ABI_CALL(0x002BEA70u, sub_002BEA70); /* call 0x002BEA70 */

loc_002B9EB6: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B9EE3; /* jne: not equal / not zero */

loc_002B9EBE: ;
    PUSH32(esp, 0x4C4698);
    PUSH32(esp, 0x002B9EC8u); RECOMP_ABI_CALL(0x002BF770u, sub_002BF770); /* call 0x002BF770 */

loc_002B9EC8: ;
    eax = MEM32(esp + 0x10);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = 0;
    esi = 0xFFFFFFFDu;
    PUSH32(esp, 0x002B9EDFu); RECOMP_ABI_CALL(0x002BEA80u, sub_002BEA80); /* call 0x002BEA80 */

loc_002B9EDF: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_002B9EE3: ;
    ecx = MEM32(eax + 0x18);
    edx = MEM32(esp + 0xC);
    MEM32(edx) = ecx;
    esi = MEM32(eax + 0x1C);
    PUSH32(esp, 0x002B9EF4u); RECOMP_ABI_CALL(0x002BEA80u, sub_002BEA80); /* call 0x002BEA80 */

loc_002B9EF4: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002B9F00
 * Original: 0x002B9F00 - 0x002B9F35 (53 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B9F00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B9F00: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002B9F06u); RECOMP_ABI_CALL(0x002BEA70u, sub_002BEA70); /* call 0x002BEA70 */

loc_002B9F06: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B9F29; /* jne: not equal / not zero */

loc_002B9F0E: ;
    PUSH32(esp, 0x4C46C4);
    PUSH32(esp, 0x002B9F18u); RECOMP_ABI_CALL(0x002BF770u, sub_002BF770); /* call 0x002BF770 */

loc_002B9F18: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = 0xFFFFFFFDu;
    PUSH32(esp, 0x002B9F25u); RECOMP_ABI_CALL(0x002BEA80u, sub_002BEA80); /* call 0x002BEA80 */

loc_002B9F25: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_002B9F29: ;
    esi = MEM32(eax + 0x20);
    PUSH32(esp, 0x002B9F31u); RECOMP_ABI_CALL(0x002BEA80u, sub_002BEA80); /* call 0x002BEA80 */

loc_002B9F31: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002B9F40
 * Original: 0x002B9F40 - 0x002B9F76 (54 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B9F40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B9F40: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002B9F46u); RECOMP_ABI_CALL(0x002BEA70u, sub_002BEA70); /* call 0x002BEA70 */

loc_002B9F46: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B9F69; /* jne: not equal / not zero */

loc_002B9F4E: ;
    PUSH32(esp, 0x4C46F4);
    PUSH32(esp, 0x002B9F58u); RECOMP_ABI_CALL(0x002BF770u, sub_002BF770); /* call 0x002BF770 */

loc_002B9F58: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = 0xFFFFFFFDu;
    PUSH32(esp, 0x002B9F65u); RECOMP_ABI_CALL(0x002BEA80u, sub_002BEA80); /* call 0x002BEA80 */

loc_002B9F65: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_002B9F69: ;
    esi = (uint32_t)(int32_t)SMEM8(eax + 1);
    PUSH32(esp, 0x002B9F72u); RECOMP_ABI_CALL(0x002BEA80u, sub_002BEA80); /* call 0x002BEA80 */

loc_002B9F72: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002B9F80
 * Original: 0x002B9F80 - 0x002B9FA0 (32 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B9F80(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B9F80: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, edx);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002B9F9Cu); RECOMP_ABI_CALL(0x002B9850u, sub_002B9850); /* call 0x002B9850 */

loc_002B9F9C: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002B9FA0
 * Original: 0x002B9FA0 - 0x002B9FDE (62 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B9FA0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B9FA0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x002B9FA8u); RECOMP_ABI_CALL(0x002BEA70u, sub_002BEA70); /* call 0x002BEA70 */

loc_002B9FA8: ;
    ecx = MEM32(esp + 0x24);
    edx = MEM32(esp + 0x20);
    edi = MEM32(esp + 0x14);
    eax = esp + 8;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x20);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x20);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002B9FCEu); RECOMP_ABI_CALL(0x002B9850u, sub_002B9850); /* call 0x002B9850 */

loc_002B9FCE: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = eax;
    PUSH32(esp, 0x002B9FD8u); RECOMP_ABI_CALL(0x002BEA80u, sub_002BEA80); /* call 0x002BEA80 */

loc_002B9FD8: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002B9FE0
 * Original: 0x002B9FE0 - 0x002B9FFB (27 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B9FE0(void)
{

loc_002B9FE0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002B9FE6u); RECOMP_ABI_CALL(0x002BEA70u, sub_002BEA70); /* call 0x002BEA70 */

loc_002B9FE6: ;
    eax = MEM32(esp + 8);
    esi = MEM32(eax * 4 + 0x7796E0);
    PUSH32(esp, 0x002B9FF6u); RECOMP_ABI_CALL(0x002BEA80u, sub_002BEA80); /* call 0x002BEA80 */

loc_002B9FF6: ;
    eax = esi + 0x10;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002BA000
 * Original: 0x002BA000 - 0x002BA01D (29 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BA000(void)
{

loc_002BA000: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002BA006u); RECOMP_ABI_CALL(0x002BEA70u, sub_002BEA70); /* call 0x002BEA70 */

loc_002BA006: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(eax * 4 + 0x7796E0);
    esi = MEM32(ecx + 8);
    PUSH32(esp, 0x002BA019u); RECOMP_ABI_CALL(0x002BEA80u, sub_002BEA80); /* call 0x002BEA80 */

loc_002BA019: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002BA020
 * Original: 0x002BA020 - 0x002BA06C (76 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BA020(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002BA020: ;
    _fb = (uint32_t)(0x110) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x110;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    PUSH32(esp, 0x002BA02Cu); RECOMP_ABI_CALL(0x002BEA70u, sub_002BEA70); /* call 0x002BEA70 */

loc_002BA02C: ;
    edi = MEM32(esp + 0x11C);
    eax = esp + 4;
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x128);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002BA058u); RECOMP_ABI_CALL(0x002B9850u, sub_002B9850); /* call 0x002B9850 */

loc_002BA058: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x002BA060u); RECOMP_ABI_CALL(0x002BEA80u, sub_002BEA80); /* call 0x002BEA80 */

loc_002BA060: ;
    eax = MEM32(esp + 4);
    POP32(esp, edi);
    _fb = (uint32_t)(0x110) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x110;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002BA070
 * Original: 0x002BA070 - 0x002BA0C2 (82 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BA070(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002BA070: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x002BA077u); RECOMP_ABI_CALL(0x002BEA70u, sub_002BEA70); /* call 0x002BEA70 */

loc_002BA077: ;
    eax = MEM32(esp + 0xC);
    ecx = 3;
    edi = 0x4C4764;
    esi = eax;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags != 0)) goto loc_002BA09C; /* je: equal / zero */

loc_002BA08D: ;
    esi = 0xFFFFFFFCu;
    PUSH32(esp, 0x002BA097u); RECOMP_ABI_CALL(0x002BEA80u, sub_002BEA80); /* call 0x002BEA80 */

loc_002BA097: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_002BA09C: ;
    edx = ZX8(MEM8(eax + 5));
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_HI8(ecx, MEM8(eax + 7));
    SET_LO8(ecx, MEM8(eax + 6));
    eax = ZX8(MEM8(eax + 4));
    ecx = ecx << 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx | edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = ecx << 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx | eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esi = ecx;
    PUSH32(esp, 0x002BA0BDu); RECOMP_ABI_CALL(0x002BEA80u, sub_002BEA80); /* call 0x002BEA80 */

loc_002BA0BD: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002BA0D0
 * Original: 0x002BA0D0 - 0x002BA0FD (45 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BA0D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002BA0D0: ;
    PUSH32(esp, 0x002BA0D5u); RECOMP_ABI_CALL(0x002BEA70u, sub_002BEA70); /* call 0x002BEA70 */

loc_002BA0D5: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(MEM8(eax + 1)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 1), 2 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002BA0F1; /* jne: not equal / not zero */

loc_002BA0DF: ;
    PUSH32(esp, 0x4C4768);
    PUSH32(esp, 0x002BA0E9u); RECOMP_ABI_CALL(0x002BF770u, sub_002BF770); /* call 0x002BF770 */

loc_002BA0E9: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_002BEA80(); return; /* tail jmp 0x002BEA80 */

loc_002BA0F1: ;
    ecx = MEM32(esp + 8);
    MEM32(eax + 0x2C) = ecx;
    g_seh_ebp = ebp; sub_002BEA80(); return; /* tail jmp 0x002BEA80 */

}

/**
 * sub_002BA100
 * Original: 0x002BA100 - 0x002BA134 (52 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BA100(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002BA100: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002BA106u); RECOMP_ABI_CALL(0x002BEA70u, sub_002BEA70); /* call 0x002BEA70 */

loc_002BA106: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002BA115; /* je: equal / zero */

loc_002BA10E: ;
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002BA120; /* jne: not equal / not zero */

loc_002BA115: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x002BA11Cu); RECOMP_ABI_CALL(0x002BEA80u, sub_002BEA80); /* call 0x002BEA80 */

loc_002BA11C: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_002BA120: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002BA126u); RECOMP_ABI_CALL(0x002BE480u, sub_002BE480); /* call 0x002BE480 */

loc_002BA126: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = eax;
    PUSH32(esp, 0x002BA130u); RECOMP_ABI_CALL(0x002BEA80u, sub_002BEA80); /* call 0x002BEA80 */

loc_002BA130: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002BA140
 * Original: 0x002BA140 - 0x002BA15E (30 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BA140(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002BA140: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002BA146u); RECOMP_ABI_CALL(0x002BEA70u, sub_002BEA70); /* call 0x002BEA70 */

loc_002BA146: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002BA150u); RECOMP_ABI_CALL(0x002BE2C0u, sub_002BE2C0); /* call 0x002BE2C0 */

loc_002BA150: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = eax;
    PUSH32(esp, 0x002BA15Au); RECOMP_ABI_CALL(0x002BEA80u, sub_002BEA80); /* call 0x002BEA80 */

loc_002BA15A: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002BA160
 * Original: 0x002BA160 - 0x002BA17C (28 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BA160(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002BA160: ;
    eax = MEM32(0x7796C0);
    PUSH32(esp, 0x002BA16Au); RECOMP_ABI_CALL(0x002B9BE0u, sub_002B9BE0); /* call 0x002B9BE0 */

loc_002BA16A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x7796C0) = eax;
    MEM32(0x7796C4) = eax;
    MEM32(0x735998) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_002BA180
 * Original: 0x002BA180 - 0x002BA1CE (78 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BA180(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002BA180: ;
    eax = MEM32(0x7796C0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002BA1CD; /* je: equal / zero */

loc_002BA189: ;
    ecx = MEM32(0x779370);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002BA1CD; /* jl: less (signed <) */

loc_002BA193: ;
    ecx = (uint32_t)(int32_t)SMEM8(eax + 1);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002BA1AA; /* je: equal / zero */

loc_002BA19C: ;
    PUSH32(esp, esi);
    esi = eax;
    PUSH32(esp, 0x002BA1A4u); RECOMP_ABI_CALL(0x002B9340u, sub_002B9340); /* call 0x002B9340 */

loc_002BA1A4: ;
    eax = MEM32(0x7796C0);
    POP32(esp, esi);

loc_002BA1AA: ;
    PUSH32(esp, 0x002BA1AFu); RECOMP_ABI_CALL(0x002B9BE0u, sub_002B9BE0); /* call 0x002B9BE0 */

loc_002BA1AF: ;
    MEM32(0x7796C0) = 0;
    MEM32(0x7796C4) = 0;
    MEM32(0x735998) = 0;

loc_002BA1CD: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002BA1D0
 * Original: 0x002BA1D0 - 0x002BA540 (880 bytes, 264 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BA1D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002BA1D0: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(0x779370);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    MEM32(esp + 0x18) = edi;
    MEM32(esp + 0x10) = edi;
    MEM32(esp + 0x14) = edi;
    MEM32(esp + 0xC) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_002BA20A; /* je: equal / zero */

loc_002BA1F2: ;
    PUSH32(esp, 0x4C4844);
    PUSH32(esp, 0x002BA1FCu); RECOMP_ABI_CALL(0x002BF770u, sub_002BF770); /* call 0x002BF770 */

loc_002BA1FC: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    eax = 0xFFFFFFFDu;
    POP32(esp, esi);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_002BA20A: ;
    ecx = MEM32(0x7796C0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002BA231; /* jne: not equal / not zero */

loc_002BA214: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002BA535; /* jne: not equal / not zero */

loc_002BA21D: ;
    PUSH32(esp, 0x4C46F4);
    PUSH32(esp, 0x002BA227u); RECOMP_ABI_CALL(0x002BF770u, sub_002BF770); /* call 0x002BF770 */

loc_002BA227: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0xFFFFFFFDu;
    goto loc_002BA235;

loc_002BA231: ;
    eax = (uint32_t)(int32_t)SMEM8(ecx + 1);

loc_002BA235: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    MEM32(0x779560) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_002BA53A; /* jne: not equal / not zero */

loc_002BA243: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esi * 4 + 0x7796E0);
    SET_LO8(eax, MEM8(ebp + 0xF));
    MEM8(esp + 0xF) = LO8(eax);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    eax = ebp + 0x118;
    if (CMP_NE(_fa, _fb)) goto loc_002BA269; /* jne: not equal / not zero */

loc_002BA25C: ;
    MEM32(esp + 0x10) = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x18) = eax;
    goto loc_002BA274;

loc_002BA269: ;
    MEM32(esp + 0x14) = eax;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x1C) = eax;

loc_002BA274: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), edi (32-bit) */
    PUSH32(esp, ebx);
    if (CMP_NE(_fa, _fb)) goto loc_002BA38F; /* jne: not equal / not zero */

loc_002BA27E: ;
    eax = MEM32(0x735994);
    ecx = 3;
    edi = 0x4C4764;
    esi = eax;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags != 0)) goto loc_002BA29C; /* je: equal / zero */

loc_002BA295: ;
    PUSH32(esp, 0x4C4810);
    goto loc_002BA2C7;

loc_002BA29C: ;
    SET_LO8(ecx, MEM8(eax + 5));
    SET_LO8(edx, MEM8(eax + 4));
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_HI8(ebx, MEM8(eax + 7));
    SET_LO8(ebx, MEM8(eax + 6));
    eax = ZX8(LO8(ecx));
    ebx = ebx << 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = ebx | eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = ZX8(LO8(edx));
    ebx = ebx << 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = ebx | eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x10000 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_002BA2EB; /* jle: less or equal (signed <=) */

loc_002BA2C2: ;
    PUSH32(esp, 0x4C47DC);

loc_002BA2C7: ;
    PUSH32(esp, 0x002BA2CCu); RECOMP_ABI_CALL(0x002BF770u, sub_002BF770); /* call 0x002BF770 */

loc_002BA2CC: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x779560) = 4;
    PUSH32(esp, 0x002BA2DEu); RECOMP_ABI_CALL(0x002BA160u, sub_002BA160); /* call 0x002BA160 */

loc_002BA2DE: ;
    eax = MEM32(0x779560);
    POP32(esp, ebx);
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_002BA2EB: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_HI8(eax, LO8(ecx));
    SET_LO16(ecx, ZX8(LO8(edx)));
    eax = eax | ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    SET_LO8(ecx, MEM8(esp + 0x13));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 1 (8-bit) */
    MEM16(ebp + 0xC) = LO16(eax);
    eax = ZX16(LO16(eax));
    MEM32(ebp + 8) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_002BA31A; /* jne: not equal / not zero */

loc_002BA308: ;
    edx = eax * 4 + 0x120;
    edx = edx >> 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx << 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ebp + 4) = edx;
    goto loc_002BA32A;

loc_002BA31A: ;
    eax = eax + eax + 0x11C;
    eax = eax >> 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ebp + 4) = eax;

loc_002BA32A: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 1 (8-bit) */
    eax = MEM32(0x735994);
    edx = ZX8(MEM8(eax + 9));
    if (CMP_NE(_fa, _fb)) goto loc_002BA35D; /* jne: not equal / not zero */

loc_002BA338: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_HI8(ecx, MEM8(eax + 0xB));
    esi = 3;
    SET_LO8(ecx, MEM8(eax + 0xA));
    eax = ZX8(MEM8(eax + 8));
    ecx = ecx << 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx | edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = MEM32(esp + 0x14);
    ecx = ecx << 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx | eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(edx) = ecx;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_002BA394;

loc_002BA35D: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_HI8(ecx, MEM8(eax + 0xB));
    esi = 3;
    SET_LO8(ecx, MEM8(eax + 0xA));
    eax = ZX8(MEM8(eax + 8));
    ecx = ecx << 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx | edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = ecx << 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax | ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = MEM32(esp + 0x18);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 0x7FF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((0xB) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    MEM16(ecx) = LO16(eax);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_002BA394;

loc_002BA38F: ;
    esi = 1;

loc_002BA394: ;
    eax = MEM32(0x735998);
    eax = eax << 0xB;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 3;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = eax;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((2) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002BA4BE; /* jge: greater or equal (signed >=) */

loc_002BA3AF: ;
    edi = MEM32(0x7796C4);

loc_002BA3B5: ;
    _fa = (uint32_t)(MEM8(ebp + 0xF)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 0xF), 1 (8-bit) */
    eax = MEM32(0x735994);
    if (CMP_NE(_fa, _fb)) goto loc_002BA3E6; /* jne: not equal / not zero */

loc_002BA3C0: ;
    ecx = ZX8(MEM8(eax + esi * 4 + 1));
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_HI8(edx, MEM8(eax + esi * 4 + 3));
    SET_LO8(edx, MEM8(eax + esi * 4 + 2));
    eax = ZX8(MEM8(eax + esi * 4));
    edx = edx << 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx | ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = MEM32(esp + 0x1C);
    edx = edx << 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx | eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ecx + edi * 4) = edx;
    goto loc_002BA435;

loc_002BA3E6: ;
    edx = ZX8(MEM8(eax + esi * 4 + 1));
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_HI8(ecx, MEM8(eax + esi * 4 + 3));
    SET_LO8(ecx, MEM8(eax + esi * 4 + 2));
    eax = ZX8(MEM8(eax + esi * 4));
    ecx = ecx << 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx | edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = ecx << 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx | eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = ecx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 0x7FF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((0xB) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ecx = ecx & 0x800007FFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fas >= 0)) goto loc_002BA421; /* jns: not sign (positive) */

loc_002BA419: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx | 0xFFFFF800u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_002BA421: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_002BA426; /* jle: less or equal (signed <=) */

loc_002BA425: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_002BA426: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF0000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0xFFFF0000u (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002BA454; /* jne: not equal / not zero */

loc_002BA42D: ;
    ecx = MEM32(esp + 0x20);
    MEM16(ecx + edi * 2) = LO16(eax);

loc_002BA435: ;
    edi = MEM32(0x7796C4);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x7796C4) = edi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ebp + 8) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002BA493; /* jge: greater or equal (signed >=) */

loc_002BA447: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002BA3B5; /* jl: less (signed <) */

loc_002BA452: ;
    goto loc_002BA4BC;

loc_002BA454: ;
    PUSH32(esp, 0x4C4798);
    PUSH32(esp, 0x002BA45Eu); RECOMP_ABI_CALL(0x002BF770u, sub_002BF770); /* call 0x002BF770 */

loc_002BA45E: ;
    eax = MEM32(0x7796C0);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x779560) = 4;
    PUSH32(esp, 0x002BA475u); RECOMP_ABI_CALL(0x002B9BE0u, sub_002B9BE0); /* call 0x002B9BE0 */

loc_002BA475: ;
    POP32(esp, ebx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebp);
    POP32(esp, edi);
    MEM32(0x7796C0) = eax;
    MEM32(0x7796C4) = eax;
    MEM32(0x735998) = eax;
    eax = MEM32(0x779560);
    POP32(esp, esi);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_002BA493: ;
    eax = MEM32(0x7796C0);
    MEM32(0x779560) = 3;
    PUSH32(esp, 0x002BA4A7u); RECOMP_ABI_CALL(0x002B9BE0u, sub_002B9BE0); /* call 0x002B9BE0 */

loc_002BA4A7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    MEM32(0x7796C0) = eax;
    MEM32(0x7796C4) = eax;
    MEM32(0x735998) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_002BA533; /* jl: less (signed <) */

loc_002BA4BC: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002BA4BE: ;
    eax = MEM32(0x735994);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 3 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002BA4D6; /* je: equal / zero */

loc_002BA4C7: ;
    PUSH32(esp, 0x4C4524);
    PUSH32(esp, 0x002BA4D1u); RECOMP_ABI_CALL(0x002BF770u, sub_002BF770); /* call 0x002BF770 */

loc_002BA4D1: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_002BA4F1;

loc_002BA4D6: ;
    ebx = MEM32(0x735998);
    esi = MEM32(0x7796C0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002BA4E8u); RECOMP_ABI_CALL(0x002B91B0u, sub_002B91B0); /* call 0x002B91B0 */

loc_002BA4E8: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002BA524; /* jge: greater or equal (signed >=) */

loc_002BA4EF: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002BA4F1: ;
    eax = MEM32(0x7796C0);
    MEM32(0x779560) = 4;
    PUSH32(esp, 0x002BA505u); RECOMP_ABI_CALL(0x002B9BE0u, sub_002B9BE0); /* call 0x002B9BE0 */

loc_002BA505: ;
    eax = MEM32(0x779560);
    POP32(esp, ebx);
    POP32(esp, ebp);
    MEM32(0x7796C0) = edi;
    MEM32(0x7796C4) = edi;
    MEM32(0x735998) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_002BA524: ;
    edx = MEM32(0x7796C0);
    eax = (uint32_t)(int32_t)SMEM8(edx + 1);
    MEM32(0x779560) = eax;

loc_002BA533: ;
    POP32(esp, ebx);
    POP32(esp, ebp);

loc_002BA535: ;
    eax = MEM32(0x779560);

loc_002BA53A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002BA540
 * Original: 0x002BA540 - 0x002BA5F7 (183 bytes, 56 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BA540(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002BA540: ;
    ecx = MEM32(0x779680);
    ecx = ecx & 0x8000000Fu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, esi);
    if ((_fas >= 0)) goto loc_002BA554; /* jns: not sign (positive) */

loc_002BA54F: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx | 0xFFFFFFF0u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_002BA554: ;
    SET_LO16(edx, MEM16(0x7796A2));
    eax = ecx;
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x779580) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x779580;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO16(edx, LO16(edx) + 1);
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM16(0x7796A2) = LO16(edx);
    MEM8(eax) = 1;
    MEM8(eax + 1) = 0;
    MEM16(eax + 2) = LO16(edx);
    MEM32(eax + 4) = ebx;
    MEM32(eax + 8) = edi;
    MEM32(eax + 0xC) = 0xFFFFFFFFu;
    MEM32(0x779680) = ecx;
    PUSH32(esp, 0x002BA592u); RECOMP_ABI_CALL(0x002B8EA0u, sub_002B8EA0); /* call 0x002B8EA0 */

loc_002BA592: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002BA5B0; /* je: equal / zero */

loc_002BA598: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x002BA5A0u); RECOMP_ABI_CALL(0x002B8F40u, sub_002B8F40); /* call 0x002B8F40 */

loc_002BA5A0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002BA5B0; /* jge: greater or equal (signed >=) */

loc_002BA5A7: ;
    eax = esi;
    PUSH32(esp, 0x002BA5AEu); RECOMP_ABI_CALL(0x002B9BE0u, sub_002B9BE0); /* call 0x002B9BE0 */

loc_002BA5AE: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002BA5B0: ;
    ecx = MEM32(0x779680);
    ecx = ecx & 0x8000000Fu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fas >= 0)) goto loc_002BA5C3; /* jns: not sign (positive) */

loc_002BA5BE: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx | 0xFFFFFFF0u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_002BA5C3: ;
    SET_LO16(edx, MEM16(0x7796A2));
    eax = ecx;
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x779580) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x779580;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(eax) = 1;
    MEM8(eax + 1) = 1;
    MEM16(eax + 2) = LO16(edx);
    MEM32(eax + 4) = ebx;
    MEM32(eax + 8) = edi;
    MEM32(eax + 0xC) = 0xFFFFFFFFu;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = esi;
    MEM32(0x779680) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002BA600
 * Original: 0x002BA600 - 0x002BA6C1 (193 bytes, 58 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BA600(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002BA600: ;
    ecx = MEM32(0x779680);
    ecx = ecx & 0x8000000Fu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, esi);
    if ((_fas >= 0)) goto loc_002BA614; /* jns: not sign (positive) */

loc_002BA60F: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx | 0xFFFFFFF0u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_002BA614: ;
    SET_LO16(edx, MEM16(0x7796A2));
    eax = ecx;
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x779580) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x779580;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO16(edx, LO16(edx) + 1);
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM16(0x7796A2) = LO16(edx);
    MEM8(eax) = 1;
    MEM8(eax + 1) = 0;
    MEM16(eax + 2) = LO16(edx);
    MEM32(eax + 4) = ebx;
    MEM32(eax + 8) = edi;
    MEM32(eax + 0xC) = 0xFFFFFFFFu;
    MEM32(0x779680) = ecx;
    PUSH32(esp, 0x002BA652u); RECOMP_ABI_CALL(0x002B8EA0u, sub_002B8EA0); /* call 0x002B8EA0 */

loc_002BA652: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002BA67A; /* je: equal / zero */

loc_002BA658: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xC);
    ecx = edi;
    edx = ebx;
    PUSH32(esp, 0x002BA66Au); RECOMP_ABI_CALL(0x002B8FD0u, sub_002B8FD0); /* call 0x002B8FD0 */

loc_002BA66A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002BA67A; /* jge: greater or equal (signed >=) */

loc_002BA671: ;
    eax = esi;
    PUSH32(esp, 0x002BA678u); RECOMP_ABI_CALL(0x002B9BE0u, sub_002B9BE0); /* call 0x002B9BE0 */

loc_002BA678: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002BA67A: ;
    ecx = MEM32(0x779680);
    ecx = ecx & 0x8000000Fu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fas >= 0)) goto loc_002BA68D; /* jns: not sign (positive) */

loc_002BA688: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx | 0xFFFFFFF0u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_002BA68D: ;
    SET_LO16(edx, MEM16(0x7796A2));
    eax = ecx;
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x779580) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x779580;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(eax) = 1;
    MEM8(eax + 1) = 1;
    MEM16(eax + 2) = LO16(edx);
    MEM32(eax + 4) = ebx;
    MEM32(eax + 8) = edi;
    MEM32(eax + 0xC) = 0xFFFFFFFFu;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = esi;
    MEM32(0x779680) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002BA6D0
 * Original: 0x002BA6D0 - 0x002BA787 (183 bytes, 56 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BA6D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002BA6D0: ;
    ecx = MEM32(0x779680);
    ecx = ecx & 0x8000000Fu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, esi);
    if ((_fas >= 0)) goto loc_002BA6E4; /* jns: not sign (positive) */

loc_002BA6DF: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx | 0xFFFFFFF0u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_002BA6E4: ;
    SET_LO16(edx, MEM16(0x7796A4));
    eax = ecx;
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x779580) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x779580;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO16(edx, LO16(edx) + 1);
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM16(0x7796A4) = LO16(edx);
    MEM8(eax) = 2;
    MEM8(eax + 1) = 0;
    MEM16(eax + 2) = LO16(edx);
    MEM32(eax + 4) = ebx;
    MEM32(eax + 8) = edi;
    MEM32(eax + 0xC) = 0xFFFFFFFFu;
    MEM32(0x779680) = ecx;
    PUSH32(esp, 0x002BA722u); RECOMP_ABI_CALL(0x002B8EA0u, sub_002B8EA0); /* call 0x002B8EA0 */

loc_002BA722: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002BA740; /* je: equal / zero */

loc_002BA728: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x002BA730u); RECOMP_ABI_CALL(0x002B9B10u, sub_002B9B10); /* call 0x002B9B10 */

loc_002BA730: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002BA740; /* jge: greater or equal (signed >=) */

loc_002BA737: ;
    eax = esi;
    PUSH32(esp, 0x002BA73Eu); RECOMP_ABI_CALL(0x002B9BE0u, sub_002B9BE0); /* call 0x002B9BE0 */

loc_002BA73E: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002BA740: ;
    ecx = MEM32(0x779680);
    ecx = ecx & 0x8000000Fu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fas >= 0)) goto loc_002BA753; /* jns: not sign (positive) */

loc_002BA74E: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx | 0xFFFFFFF0u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_002BA753: ;
    SET_LO16(edx, MEM16(0x7796A4));
    eax = ecx;
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x779580) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x779580;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(eax) = 2;
    MEM8(eax + 1) = 1;
    MEM16(eax + 2) = LO16(edx);
    MEM32(eax + 4) = ebx;
    MEM32(eax + 8) = edi;
    MEM32(eax + 0xC) = 0xFFFFFFFFu;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = esi;
    MEM32(0x779680) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002BA790
 * Original: 0x002BA790 - 0x002BA7A3 (19 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BA790(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002BA790: ;
    PUSH32(esp, 0x002BA795u); RECOMP_ABI_CALL(0x002BEA70u, sub_002BEA70); /* call 0x002BEA70 */

loc_002BA795: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 0x002BA79Eu); RECOMP_ABI_CALL(0x002B9BE0u, sub_002B9BE0); /* call 0x002B9BE0 */

loc_002BA79E: ;
    g_seh_ebp = ebp; sub_002BEA80(); return; /* tail jmp 0x002BEA80 */

}

/**
 * sub_002BA7B0
 * Original: 0x002BA7B0 - 0x002BA7DD (45 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BA7B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002BA7B0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002BA7B6u); RECOMP_ABI_CALL(0x002BEA70u, sub_002BEA70); /* call 0x002BEA70 */

loc_002BA7B6: ;
    esi = 0x779AE0;
    goto loc_002BA7C0;

    /* nop */

loc_002BA7C0: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002BA7CC; /* jne: not equal / not zero */

loc_002BA7C5: ;
    eax = esi;
    PUSH32(esp, 0x002BA7CCu); RECOMP_ABI_CALL(0x002B9BE0u, sub_002B9BE0); /* call 0x002B9BE0 */

loc_002BA7CC: ;
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x44;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x779F20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x779F20 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002BA7C0; /* jl: less (signed <) */

loc_002BA7D7: ;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_002BEA80(); return; /* tail jmp 0x002BEA80 */

}

/**
 * sub_002BA7E0
 * Original: 0x002BA7E0 - 0x002BA810 (48 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BA7E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002BA7E0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x002BA7E7u); RECOMP_ABI_CALL(0x002BEA70u, sub_002BEA70); /* call 0x002BEA70 */

loc_002BA7E7: ;
    esi = MEM32(esp + 0xC);
    PUSH32(esp, 0x002BA7F0u); RECOMP_ABI_CALL(0x002B9730u, sub_002B9730); /* call 0x002B9730 */

loc_002BA7F0: ;
    _fb = (uint32_t)(0x7FF) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x7FF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 0x7FF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = eax;
    edi = (uint32_t)(((int32_t)(int32_t)(edi)) >> ((0xB) & 31u));
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    MEM32(esi + 0xC) = edi;
    PUSH32(esp, 0x002BA80Bu); RECOMP_ABI_CALL(0x002BEA80u, sub_002BEA80); /* call 0x002BEA80 */

loc_002BA80B: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002BA810
 * Original: 0x002BA810 - 0x002BA852 (66 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BA810(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002BA810: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x002BA81Au); RECOMP_ABI_CALL(0x002BEA70u, sub_002BEA70); /* call 0x002BEA70 */

loc_002BA81A: ;
    ecx = MEM32(esp + 0x24);
    edx = MEM32(esp + 0x20);
    edi = MEM32(esp + 0x18);
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x24);
    PUSH32(esp, edx);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x24);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002BA840u); RECOMP_ABI_CALL(0x002B9850u, sub_002B9850); /* call 0x002B9850 */

loc_002BA840: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = eax;
    PUSH32(esp, 0x002BA84Au); RECOMP_ABI_CALL(0x002BEA80u, sub_002BEA80); /* call 0x002BEA80 */

loc_002BA84A: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002BAA80
 * Original: 0x002BAA80 - 0x002BAA8F (15 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BAA80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002BAA80: ;
    PUSH32(esp, 0x002BAA85u); RECOMP_ABI_CALL(0x002BEA70u, sub_002BEA70); /* call 0x002BEA70 */

loc_002BAA85: ;
    PUSH32(esp, 0x002BAA8Au); RECOMP_ABI_CALL(0x002BA180u, sub_002BA180); /* call 0x002BA180 */

loc_002BAA8A: ;
    g_seh_ebp = ebp; sub_002BEA80(); return; /* tail jmp 0x002BEA80 */

}

/**
 * sub_002BAA90
 * Original: 0x002BAA90 - 0x002BAA95 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BAA90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002BAA90: ;
    g_seh_ebp = ebp; sub_002BA1D0(); return; /* tail jmp 0x002BA1D0 */

}

/**
 * sub_002BAAA0
 * Original: 0x002BAAA0 - 0x002BAABA (26 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BAAA0(void)
{

loc_002BAAA0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002BAAA6u); RECOMP_ABI_CALL(0x002BEA70u, sub_002BEA70); /* call 0x002BEA70 */

loc_002BAAA6: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, 0x002BAAAFu); RECOMP_ABI_CALL(0x002BA1D0u, sub_002BA1D0); /* call 0x002BA1D0 */

loc_002BAAAF: ;
    esi = eax;
    PUSH32(esp, 0x002BAAB6u); RECOMP_ABI_CALL(0x002BEA80u, sub_002BEA80); /* call 0x002BEA80 */

loc_002BAAB6: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002BAAC0
 * Original: 0x002BAAC0 - 0x002BAAE2 (34 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BAAC0(void)
{

loc_002BAAC0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x002BAAC8u); RECOMP_ABI_CALL(0x002BEA70u, sub_002BEA70); /* call 0x002BEA70 */

loc_002BAAC8: ;
    edi = MEM32(esp + 0x14);
    ebx = MEM32(esp + 0x10);
    PUSH32(esp, 0x002BAAD5u); RECOMP_ABI_CALL(0x002BA540u, sub_002BA540); /* call 0x002BA540 */

loc_002BAAD5: ;
    esi = eax;
    PUSH32(esp, 0x002BAADCu); RECOMP_ABI_CALL(0x002BEA80u, sub_002BEA80); /* call 0x002BEA80 */

loc_002BAADC: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002BAAF0
 * Original: 0x002BAAF0 - 0x002BAB1F (47 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BAAF0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002BAAF0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x002BAAF8u); RECOMP_ABI_CALL(0x002BEA70u, sub_002BEA70); /* call 0x002BEA70 */

loc_002BAAF8: ;
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(esp + 0x18);
    edi = MEM32(esp + 0x14);
    ebx = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002BAB0Fu); RECOMP_ABI_CALL(0x002BA600u, sub_002BA600); /* call 0x002BA600 */

loc_002BAB0F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = eax;
    PUSH32(esp, 0x002BAB19u); RECOMP_ABI_CALL(0x002BEA80u, sub_002BEA80); /* call 0x002BEA80 */

loc_002BAB19: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002BAB20
 * Original: 0x002BAB20 - 0x002BAB42 (34 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BAB20(void)
{

loc_002BAB20: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x002BAB28u); RECOMP_ABI_CALL(0x002BEA70u, sub_002BEA70); /* call 0x002BEA70 */

loc_002BAB28: ;
    edi = MEM32(esp + 0x14);
    ebx = MEM32(esp + 0x10);
    PUSH32(esp, 0x002BAB35u); RECOMP_ABI_CALL(0x002BA6D0u, sub_002BA6D0); /* call 0x002BA6D0 */

loc_002BAB35: ;
    esi = eax;
    PUSH32(esp, 0x002BAB3Cu); RECOMP_ABI_CALL(0x002BEA80u, sub_002BEA80); /* call 0x002BEA80 */

loc_002BAB3C: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002BAB50
 * Original: 0x002BAB50 - 0x002BAB7B (43 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BAB50(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002BAB50: ;
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
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002BAB77u); RECOMP_ABI_CALL(0x002BA860u, sub_002BA860); /* call 0x002BA860 */

loc_002BAB77: ;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002BAB80
 * Original: 0x002BAB80 - 0x002BABA8 (40 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BAB80(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002BAB80: ;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, 0xFFFFF);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x002BABA4u); RECOMP_ABI_CALL(0x002BA860u, sub_002BA860); /* call 0x002BA860 */

loc_002BABA4: ;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002BABB0
 * Original: 0x002BABB0 - 0x002BABD8 (40 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BABB0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002BABB0: ;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, 0xFFFFF);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x002BABD4u); RECOMP_ABI_CALL(0x002BA860u, sub_002BA860); /* call 0x002BA860 */

loc_002BABD4: ;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002BABE0
 * Original: 0x002BABE0 - 0x002BAC08 (40 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BABE0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002BABE0: ;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, 0xFFFFF);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x002BAC04u); RECOMP_ABI_CALL(0x002BA860u, sub_002BA860); /* call 0x002BA860 */

loc_002BAC04: ;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002BAC10
 * Original: 0x002BAC10 - 0x002BAC38 (40 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BAC10(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002BAC10: ;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, 0xFFFFF);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x002BAC34u); RECOMP_ABI_CALL(0x002BA860u, sub_002BA860); /* call 0x002BA860 */

loc_002BAC34: ;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002BAC40
 * Original: 0x002BAC40 - 0x002BAC5A (26 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BAC40(void)
{

loc_002BAC40: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002BAC46u); RECOMP_ABI_CALL(0x002BEA70u, sub_002BEA70); /* call 0x002BEA70 */

loc_002BAC46: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, 0x002BAC4Fu); RECOMP_ABI_CALL(0x002BA1D0u, sub_002BA1D0); /* call 0x002BA1D0 */

loc_002BAC4F: ;
    esi = eax;
    PUSH32(esp, 0x002BAC56u); RECOMP_ABI_CALL(0x002BEA80u, sub_002BEA80); /* call 0x002BEA80 */

loc_002BAC56: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002BAC60
 * Original: 0x002BAC60 - 0x002BAC90 (48 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BAC60(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002BAC60: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x800);
    eax = 0x78DD40;
    eax = eax & 0xFFFFFFE0u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, 0xFFFFF);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002BAC8Cu); RECOMP_ABI_CALL(0x002BA860u, sub_002BA860); /* call 0x002BA860 */

loc_002BAC8C: ;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002BACD0
 * Original: 0x002BACD0 - 0x002BAD00 (48 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BACD0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002BACD0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x800);
    eax = 0x78DD40;
    eax = eax & 0xFFFFFFE0u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, 0xFFFFF);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002BACFCu); RECOMP_ABI_CALL(0x002BA860u, sub_002BA860); /* call 0x002BA860 */

loc_002BACFC: ;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002BAD60
 * Original: 0x002BAD60 - 0x002BADA4 (68 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BAD60(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002BAD60: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002BAD66u); RECOMP_ABI_CALL(0x002BEA70u, sub_002BEA70); /* call 0x002BEA70 */

loc_002BAD66: ;
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(esp + 0x18);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x18);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x18);
    PUSH32(esp, 0xFFFFF);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x002BAD96u); RECOMP_ABI_CALL(0x002BA860u, sub_002BA860); /* call 0x002BA860 */

loc_002BAD96: ;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = eax;
    PUSH32(esp, 0x002BADA0u); RECOMP_ABI_CALL(0x002BEA80u, sub_002BEA80); /* call 0x002BEA80 */

loc_002BADA0: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002BADB0
 * Original: 0x002BADB0 - 0x002BADF4 (68 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BADB0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002BADB0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002BADB6u); RECOMP_ABI_CALL(0x002BEA70u, sub_002BEA70); /* call 0x002BEA70 */

loc_002BADB6: ;
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(esp + 0x18);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x18);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x18);
    PUSH32(esp, 0xFFFFF);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x002BADE6u); RECOMP_ABI_CALL(0x002BA860u, sub_002BA860); /* call 0x002BA860 */

loc_002BADE6: ;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = eax;
    PUSH32(esp, 0x002BADF0u); RECOMP_ABI_CALL(0x002BEA80u, sub_002BEA80); /* call 0x002BEA80 */

loc_002BADF0: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002BAE00
 * Original: 0x002BAE00 - 0x002BAE44 (68 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BAE00(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002BAE00: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002BAE06u); RECOMP_ABI_CALL(0x002BEA70u, sub_002BEA70); /* call 0x002BEA70 */

loc_002BAE06: ;
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(esp + 0x18);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x18);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x18);
    PUSH32(esp, 0xFFFFF);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x002BAE36u); RECOMP_ABI_CALL(0x002BA860u, sub_002BA860); /* call 0x002BA860 */

loc_002BAE36: ;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = eax;
    PUSH32(esp, 0x002BAE40u); RECOMP_ABI_CALL(0x002BEA80u, sub_002BEA80); /* call 0x002BEA80 */

loc_002BAE40: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002BAE50
 * Original: 0x002BAE50 - 0x002BAE94 (68 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BAE50(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002BAE50: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002BAE56u); RECOMP_ABI_CALL(0x002BEA70u, sub_002BEA70); /* call 0x002BEA70 */

loc_002BAE56: ;
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(esp + 0x18);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x18);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x18);
    PUSH32(esp, 0xFFFFF);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x002BAE86u); RECOMP_ABI_CALL(0x002BA860u, sub_002BA860); /* call 0x002BA860 */

loc_002BAE86: ;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = eax;
    PUSH32(esp, 0x002BAE90u); RECOMP_ABI_CALL(0x002BEA80u, sub_002BEA80); /* call 0x002BEA80 */

loc_002BAE90: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002BAEA0
 * Original: 0x002BAEA0 - 0x002BAEFD (93 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BAEA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002BAEA0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x800);
    eax = 0x78DD40;
    eax = eax & 0xFFFFFFE0u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, 0xFFFFF);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x002BAEC8u); RECOMP_ABI_CALL(0x002BA860u, sub_002BA860); /* call 0x002BA860 */

loc_002BAEC8: ;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002BAEFC; /* jl: less (signed <) */

loc_002BAECF: ;
    eax = esi;
    PUSH32(esp, 0x002BAED6u); RECOMP_ABI_CALL(0x002BA1D0u, sub_002BA1D0); /* call 0x002BA1D0 */

loc_002BAED6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002BAEF6; /* je: equal / zero */

loc_002BAEDB: ;
    goto loc_002BAEE0;

    /* nop */

loc_002BAEE0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002BAEF9; /* je: equal / zero */

loc_002BAEE5: ;
    PUSH32(esp, 0x002BAEEAu); RECOMP_ABI_CALL(0x002B4660u, sub_002B4660); /* call 0x002B4660 */

loc_002BAEEA: ;
    eax = esi;
    PUSH32(esp, 0x002BAEF1u); RECOMP_ABI_CALL(0x002BA1D0u, sub_002BA1D0); /* call 0x002BA1D0 */

loc_002BAEF1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002BAEE0; /* jne: not equal / not zero */

loc_002BAEF6: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_002BAEF9: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_002BAEFC: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002BAF00
 * Original: 0x002BAF00 - 0x002BAF48 (72 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BAF00(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002BAF00: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002BAF06u); RECOMP_ABI_CALL(0x002BEA70u, sub_002BEA70); /* call 0x002BEA70 */

loc_002BAF06: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, 0);
    PUSH32(esp, 0x800);
    eax = 0x78DD40;
    eax = eax & 0xFFFFFFE0u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x18);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, 0xFFFFF);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002BAF3Au); RECOMP_ABI_CALL(0x002BA860u, sub_002BA860); /* call 0x002BA860 */

loc_002BAF3A: ;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = eax;
    PUSH32(esp, 0x002BAF44u); RECOMP_ABI_CALL(0x002BEA80u, sub_002BEA80); /* call 0x002BEA80 */

loc_002BAF44: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002BAF50
 * Original: 0x002BAF50 - 0x002BAF9B (75 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BAF50(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002BAF50: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002BAF56u); RECOMP_ABI_CALL(0x002BEA70u, sub_002BEA70); /* call 0x002BEA70 */

loc_002BAF56: ;
    ecx = MEM32(esp + 0x1C);
    edx = MEM32(esp + 0x18);
    PUSH32(esp, 0);
    PUSH32(esp, 0x800);
    eax = 0x78DD40;
    eax = eax & 0xFFFFFFE0u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x20);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x20);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x20);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002BAF8Du); RECOMP_ABI_CALL(0x002BA860u, sub_002BA860); /* call 0x002BA860 */

loc_002BAF8D: ;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = eax;
    PUSH32(esp, 0x002BAF97u); RECOMP_ABI_CALL(0x002BEA80u, sub_002BEA80); /* call 0x002BEA80 */

loc_002BAF97: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002BAFA0
 * Original: 0x002BAFA0 - 0x002BAFE8 (72 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BAFA0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002BAFA0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002BAFA6u); RECOMP_ABI_CALL(0x002BEA70u, sub_002BEA70); /* call 0x002BEA70 */

loc_002BAFA6: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, 0);
    PUSH32(esp, 0x800);
    eax = 0x78DD40;
    eax = eax & 0xFFFFFFE0u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x18);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, 0xFFFFF);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002BAFDAu); RECOMP_ABI_CALL(0x002BA860u, sub_002BA860); /* call 0x002BA860 */

loc_002BAFDA: ;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = eax;
    PUSH32(esp, 0x002BAFE4u); RECOMP_ABI_CALL(0x002BEA80u, sub_002BEA80); /* call 0x002BEA80 */

loc_002BAFE4: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002BAFF0
 * Original: 0x002BAFF0 - 0x002BB038 (72 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BAFF0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002BAFF0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002BAFF6u); RECOMP_ABI_CALL(0x002BEA70u, sub_002BEA70); /* call 0x002BEA70 */

loc_002BAFF6: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, 1);
    PUSH32(esp, 0x800);
    eax = 0x78DD40;
    eax = eax & 0xFFFFFFE0u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x18);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, 0xFFFFF);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002BB02Au); RECOMP_ABI_CALL(0x002BA860u, sub_002BA860); /* call 0x002BA860 */

loc_002BB02A: ;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = eax;
    PUSH32(esp, 0x002BB034u); RECOMP_ABI_CALL(0x002BEA80u, sub_002BEA80); /* call 0x002BEA80 */

loc_002BB034: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002BB040
 * Original: 0x002BB040 - 0x002BB088 (72 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BB040(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002BB040: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002BB046u); RECOMP_ABI_CALL(0x002BEA70u, sub_002BEA70); /* call 0x002BEA70 */

loc_002BB046: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, 1);
    PUSH32(esp, 0x800);
    eax = 0x78DD40;
    eax = eax & 0xFFFFFFE0u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x18);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, 0xFFFFF);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002BB07Au); RECOMP_ABI_CALL(0x002BA860u, sub_002BA860); /* call 0x002BA860 */

loc_002BB07A: ;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = eax;
    PUSH32(esp, 0x002BB084u); RECOMP_ABI_CALL(0x002BEA80u, sub_002BEA80); /* call 0x002BEA80 */

loc_002BB084: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002BB090
 * Original: 0x002BB090 - 0x002BB09C (12 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BB090(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002BB090: ;
    PUSH32(esp, eax);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x002BB098u); RECOMP_ABI_CALL(0x002BAEA0u, sub_002BAEA0); /* call 0x002BAEA0 */

loc_002BB098: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002BB0A0
 * Original: 0x002BB0A0 - 0x002BB0CA (42 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BB0A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002BB0A0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002BB0A6u); RECOMP_ABI_CALL(0x002BEA70u, sub_002BEA70); /* call 0x002BEA70 */

loc_002BB0A6: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x10);
    esi = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002BB0BCu); RECOMP_ABI_CALL(0x002BAEA0u, sub_002BAEA0); /* call 0x002BAEA0 */

loc_002BB0BC: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = eax;
    PUSH32(esp, 0x002BB0C6u); RECOMP_ABI_CALL(0x002BEA80u, sub_002BEA80); /* call 0x002BEA80 */

loc_002BB0C6: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002BB0D0
 * Original: 0x002BB0D0 - 0x002BB0F8 (40 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BB0D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002BB0D0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002BB0D6u); RECOMP_ABI_CALL(0x002BEA70u, sub_002BEA70); /* call 0x002BEA70 */

loc_002BB0D6: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 0x10);
    esi = MEM32(esp + 8);
    PUSH32(esp, eax);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x002BB0EAu); RECOMP_ABI_CALL(0x002BAEA0u, sub_002BAEA0); /* call 0x002BAEA0 */

loc_002BB0EA: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = eax;
    PUSH32(esp, 0x002BB0F4u); RECOMP_ABI_CALL(0x002BEA80u, sub_002BEA80); /* call 0x002BEA80 */

loc_002BB0F4: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002BB100
 * Original: 0x002BB100 - 0x002BB134 (52 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BB100(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002BB100: ;
    eax = MEM32(0x7359F4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002BB133; /* je: equal / zero */

loc_002BB109: ;
    ecx = MEM32(0x7359F8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x002BB112u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002BB110u); } /* indirect call */
    }

loc_002BB112: ;
    eax = MEM32(0x735CC4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002BB128; /* jne: not equal / not zero */

loc_002BB11E: ;
    edx = MEM32(esp + 4);
    MEM32(0x735CC8) = edx;

loc_002BB128: ;
    eax = MEM32(0x735CC4);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x735CC4) = eax;

loc_002BB133: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002BB140
 * Original: 0x002BB140 - 0x002BB176 (54 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BB140(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002BB140: ;
    eax = MEM32(0x7359F4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002BB175; /* je: equal / zero */

loc_002BB149: ;
    ecx = MEM32(0x7359F8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x002BB152u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002BB150u); } /* indirect call */
    }

loc_002BB152: ;
    eax = MEM32(0x735CC4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002BB168; /* jne: not equal / not zero */

loc_002BB15E: ;
    MEM32(0x735CC8) = 1;

loc_002BB168: ;
    edx = MEM32(0x735CC4);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x735CC4) = edx;

loc_002BB175: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002BB180
 * Original: 0x002BB180 - 0x002BB1B6 (54 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BB180(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002BB180: ;
    eax = MEM32(0x7359F4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002BB1B5; /* je: equal / zero */

loc_002BB189: ;
    ecx = MEM32(0x7359F8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x002BB192u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002BB190u); } /* indirect call */
    }

loc_002BB192: ;
    eax = MEM32(0x735CC4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002BB1A8; /* jne: not equal / not zero */

loc_002BB19E: ;
    MEM32(0x735CC8) = 2;

loc_002BB1A8: ;
    edx = MEM32(0x735CC4);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x735CC4) = edx;

loc_002BB1B5: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002BB1C0
 * Original: 0x002BB1C0 - 0x002BB1F6 (54 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BB1C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002BB1C0: ;
    eax = MEM32(0x7359F4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002BB1F5; /* je: equal / zero */

loc_002BB1C9: ;
    ecx = MEM32(0x7359F8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x002BB1D2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002BB1D0u); } /* indirect call */
    }

loc_002BB1D2: ;
    eax = MEM32(0x735CC4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002BB1E8; /* jne: not equal / not zero */

loc_002BB1DE: ;
    MEM32(0x735CC8) = 3;

loc_002BB1E8: ;
    edx = MEM32(0x735CC4);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x735CC4) = edx;

loc_002BB1F5: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002BB200
 * Original: 0x002BB200 - 0x002BB236 (54 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BB200(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002BB200: ;
    eax = MEM32(0x7359F4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002BB235; /* je: equal / zero */

loc_002BB209: ;
    ecx = MEM32(0x7359F8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x002BB212u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002BB210u); } /* indirect call */
    }

loc_002BB212: ;
    eax = MEM32(0x735CC4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002BB228; /* jne: not equal / not zero */

loc_002BB21E: ;
    MEM32(0x735CC8) = 4;

loc_002BB228: ;
    edx = MEM32(0x735CC4);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x735CC4) = edx;

loc_002BB235: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002BB240
 * Original: 0x002BB240 - 0x002BB276 (54 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BB240(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002BB240: ;
    eax = MEM32(0x7359F4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002BB275; /* je: equal / zero */

loc_002BB249: ;
    ecx = MEM32(0x7359F8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x002BB252u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002BB250u); } /* indirect call */
    }

loc_002BB252: ;
    eax = MEM32(0x735CC4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002BB268; /* jne: not equal / not zero */

loc_002BB25E: ;
    MEM32(0x735CC8) = 5;

loc_002BB268: ;
    edx = MEM32(0x735CC4);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x735CC4) = edx;

loc_002BB275: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002BB280
 * Original: 0x002BB280 - 0x002BB2B6 (54 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BB280(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002BB280: ;
    eax = MEM32(0x7359F4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002BB2B5; /* je: equal / zero */

loc_002BB289: ;
    ecx = MEM32(0x7359F8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x002BB292u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002BB290u); } /* indirect call */
    }

loc_002BB292: ;
    eax = MEM32(0x735CC4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002BB2A8; /* jne: not equal / not zero */

loc_002BB29E: ;
    MEM32(0x735CC8) = 0x3E8;

loc_002BB2A8: ;
    edx = MEM32(0x735CC4);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x735CC4) = edx;

loc_002BB2B5: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002BB2C0
 * Original: 0x002BB2C0 - 0x002BB2C6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BB2C0(void)
{

loc_002BB2C0: ;
    eax = MEM32(0x735CC8);
    esp += 4; return; /* ret */

}

/**
 * sub_002BB2D0
 * Original: 0x002BB2D0 - 0x002BB312 (66 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BB2D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002BB2D0: ;
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x20;
    edi = 0x78DC80;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = MEM32(esp + 8);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x78DC80);
    PUSH32(esp, 0x002BB2F3u); RECOMP_ABI_CALL(0x002A8E9Eu, sub_002A8E9E); /* call 0x002A8E9E */

loc_002BB2F3: ;
    eax = MEM32(0x735C58);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_002BB311; /* je: equal / zero */

loc_002BB300: ;
    edx = MEM32(0x735C5C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x78DC80);
    PUSH32(esp, edx);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x002BB30Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002BB30Cu); } /* indirect call */
    }

loc_002BB30E: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002BB311: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002BB320
 * Original: 0x002BB320 - 0x002BB34F (47 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BB320(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002BB320: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 0x7F);
    PUSH32(esp, eax);
    PUSH32(esp, 0x78DC80);
    PUSH32(esp, 0x002BB331u); RECOMP_ABI_CALL(0x000EBBD0u, sub_000EBBD0); /* call 0x000EBBD0 */

loc_002BB331: ;
    eax = MEM32(0x735C58);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002BB34E; /* je: equal / zero */

loc_002BB33D: ;
    ecx = MEM32(0x735C5C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x78DC80);
    PUSH32(esp, ecx);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x002BB34Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002BB349u); } /* indirect call */
    }

loc_002BB34B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002BB34E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002BB350
 * Original: 0x002BB350 - 0x002BB393 (67 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BB350(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002BB350: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 0x7F);
    PUSH32(esp, eax);
    PUSH32(esp, 0x78DC80);
    PUSH32(esp, 0x002BB361u); RECOMP_ABI_CALL(0x000EBBD0u, sub_000EBBD0); /* call 0x000EBBD0 */

loc_002BB361: ;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, 0x7F);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x78DC80);
    PUSH32(esp, 0x002BB372u); RECOMP_ABI_CALL(0x000EE800u, sub_000EE800); /* call 0x000EE800 */

loc_002BB372: ;
    eax = MEM32(0x735C58);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002BB392; /* je: equal / zero */

loc_002BB37E: ;
    edx = MEM32(0x735C5C);
    MEM32(esp + 8) = 0x78DC80;
    MEM32(esp + 4) = edx;
    g_seh_ebp = ebp; RECOMP_ITAIL(eax); return; /* indirect tail jmp */

loc_002BB392: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002BB3A0
 * Original: 0x002BB3A0 - 0x002BB407 (103 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BB3A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002BB3A0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_002BB3B0: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edi = 0xA;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)edi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)edi)); }
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM8(ecx + esi) = LO8(edx);
    if (CMP_EQ(_fa, _fb)) goto loc_002BB3C7; /* je: equal / zero */

loc_002BB3BF: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x20 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002BB3B0; /* jl: less (signed <) */

loc_002BB3C5: ;
    goto loc_002BB3CB;

loc_002BB3C7: ;
    MEM8(ecx + esi) = 0;

loc_002BB3CB: ;
    eax = 0x735CA0;
    edx = eax + 1;

loc_002BB3D3: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002BB3D3; /* jne: not equal / not zero */

loc_002BB3DA: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = eax;
    eax = MEM32(esp + 0x14);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002BB3E9; /* jl: less (signed <) */

loc_002BB3E7: ;
    ecx = eax;

loc_002BB3E9: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_002BB400; /* jle: less or equal (signed <=) */

loc_002BB3EF: ;
    edi = ecx + 0x735C9F;

loc_002BB3F5: ;
    SET_LO8(edx, MEM8(edi));
    MEM8(eax + esi) = LO8(edx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002BB3F5; /* jl: less (signed <) */

loc_002BB400: ;
    POP32(esp, edi);
    MEM8(eax + esi) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002BB410
 * Original: 0x002BB410 - 0x002BB484 (116 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BB410(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002BB410: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002BB426u); RECOMP_ABI_CALL(0x002BB3A0u, sub_002BB3A0); /* call 0x002BB3A0 */

loc_002BB426: ;
    eax = edi;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = eax + 1;
    edi = edi;

loc_002BB430: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002BB430; /* jne: not equal / not zero */

loc_002BB437: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, esi);
    PUSH32(esp, 0x4A05B4);
    PUSH32(esp, edi);
    PUSH32(esp, 0x002BB448u); RECOMP_ABI_CALL(0x000EE800u, sub_000EE800); /* call 0x000EE800 */

loc_002BB448: ;
    eax = edi;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = eax + 1;

loc_002BB450: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002BB450; /* jne: not equal / not zero */

loc_002BB457: ;
    ecx = edi;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi = ecx + 1;
    edi = edi;

loc_002BB460: ;
    SET_LO8(edx, MEM8(ecx));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002BB460; /* jne: not equal / not zero */

loc_002BB467: ;
    edx = 4;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x10);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edx);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002BB47Eu); RECOMP_ABI_CALL(0x002BB3A0u, sub_002BB3A0); /* call 0x002BB3A0 */

loc_002BB47E: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002BB490
 * Original: 0x002BB490 - 0x002BB53D (173 bytes, 57 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BB490(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002BB490: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002BB50B; /* jl: less (signed <) */

loc_002BB494: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 8 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002BB50B; /* jge: greater or equal (signed >=) */

loc_002BB499: ;
    ecx = ecx + ecx * 8;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = ecx * 8 + 0x735A10;
    PUSH32(esp, esi);

loc_002BB4A6: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002BB4B6; /* je: equal / zero */

loc_002BB4AB: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002BB4A6; /* jl: less (signed <) */

loc_002BB4B4: ;
    goto loc_002BB4D3;

loc_002BB4B6: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    esi = MEM32(esp + 8);
    MEM32(ecx) = esi;
    esi = MEM32(esp + 0xC);
    MEM32(ecx + 4) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_002BB4CC; /* je: equal / zero */

loc_002BB4C7: ;
    MEM32(ecx + 8) = edx;
    goto loc_002BB4D3;

loc_002BB4CC: ;
    MEM32(ecx + 8) = 0x4A4840;

loc_002BB4D3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    POP32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_002BB53C; /* jne: not equal / not zero */

loc_002BB4D9: ;
    PUSH32(esp, 0x7F);
    PUSH32(esp, 0x4C49C0);
    PUSH32(esp, 0x78DC80);
    PUSH32(esp, 0x002BB4EAu); RECOMP_ABI_CALL(0x000EBBD0u, sub_000EBBD0); /* call 0x000EBBD0 */

loc_002BB4EA: ;
    eax = MEM32(0x735C58);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002BB539; /* je: equal / zero */

loc_002BB4F6: ;
    ecx = MEM32(0x735C5C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x78DC80);
    PUSH32(esp, ecx);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x002BB504u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002BB502u); } /* indirect call */
    }

loc_002BB504: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 4; return; /* ret */

loc_002BB50B: ;
    PUSH32(esp, 0x7F);
    PUSH32(esp, 0x4C4998);
    PUSH32(esp, 0x78DC80);
    PUSH32(esp, 0x002BB51Cu); RECOMP_ABI_CALL(0x000EBBD0u, sub_000EBBD0); /* call 0x000EBBD0 */

loc_002BB51C: ;
    eax = MEM32(0x735C58);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002BB539; /* je: equal / zero */

loc_002BB528: ;
    edx = MEM32(0x735C5C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x78DC80);
    PUSH32(esp, edx);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x002BB536u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002BB534u); } /* indirect call */
    }

loc_002BB536: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002BB539: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_002BB53C: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002BB540
 * Original: 0x002BB540 - 0x002BB5DB (155 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BB540(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002BB540: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002BB5AC; /* jl: less (signed <) */

loc_002BB544: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 6 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002BB5AC; /* jge: greater or equal (signed >=) */

loc_002BB549: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002BB57D; /* jl: less (signed <) */

loc_002BB54D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002BB57D; /* jge: greater or equal (signed >=) */

loc_002BB552: ;
    eax = eax + eax * 2;
    eax = ecx + eax * 2;
    eax = eax + eax * 2;
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(eax + 0x735A10) = 0;
    MEM32(eax + 0x735A14) = 0;
    MEM32(eax + 0x735A18) = 0;
    esp += 4; return; /* ret */

loc_002BB57D: ;
    PUSH32(esp, 0x7F);
    PUSH32(esp, 0x4C4A10);
    PUSH32(esp, 0x78DC80);
    PUSH32(esp, 0x002BB58Eu); RECOMP_ABI_CALL(0x000EBBD0u, sub_000EBBD0); /* call 0x000EBBD0 */

loc_002BB58E: ;
    eax = MEM32(0x735C58);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002BB5DA; /* je: equal / zero */

loc_002BB59A: ;
    ecx = MEM32(0x735C5C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x78DC80);
    PUSH32(esp, ecx);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x002BB5A8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002BB5A6u); } /* indirect call */
    }

loc_002BB5A8: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_002BB5AC: ;
    PUSH32(esp, 0x7F);
    PUSH32(esp, 0x4C49F0);
    PUSH32(esp, 0x78DC80);
    PUSH32(esp, 0x002BB5BDu); RECOMP_ABI_CALL(0x000EBBD0u, sub_000EBBD0); /* call 0x000EBBD0 */

loc_002BB5BD: ;
    eax = MEM32(0x735C58);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002BB5DA; /* je: equal / zero */

loc_002BB5C9: ;
    edx = MEM32(0x735C5C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x78DC80);
    PUSH32(esp, edx);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x002BB5D7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002BB5D5u); } /* indirect call */
    }

loc_002BB5D7: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002BB5DA: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002BB5E0
 * Original: 0x002BB5E0 - 0x002BB6A4 (196 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BB5E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002BB5E0: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002BB673; /* jl: less (signed <) */

loc_002BB5E8: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 6 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002BB673; /* jge: greater or equal (signed >=) */

loc_002BB5F1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002BB642; /* jl: less (signed <) */

loc_002BB5F5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002BB642; /* jge: greater or equal (signed >=) */

loc_002BB5FA: ;
    eax = eax + eax * 2;
    eax = ecx + eax * 2;
    PUSH32(esp, esi);
    esi = eax + eax * 2;
    eax = MEM32(esi * 4 + 0x735A10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    esi = esi * 4 + 0x735A10;
    if (CMP_EQ(_fa, _fb)) goto loc_002BB623; /* je: equal / zero */

loc_002BB616: ;
    PUSH32(esp, 0x4C4A84);
    PUSH32(esp, 0x002BB620u); RECOMP_ABI_CALL(0x002BB320u, sub_002BB320); /* call 0x002BB320 */

loc_002BB620: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002BB623: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    ecx = MEM32(esp + 8);
    edx = MEM32(esp + 0xC);
    MEM32(esi) = ecx;
    MEM32(esi + 4) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_002BB639; /* je: equal / zero */

loc_002BB634: ;
    MEM32(esi + 8) = edi;
    POP32(esp, esi);

loc_002BB638: ;
    esp += 4; return; /* ret */

loc_002BB639: ;
    MEM32(esi + 8) = 0x4A4840;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_002BB642: ;
    PUSH32(esp, 0x7F);
    PUSH32(esp, 0x4C4A5C);
    PUSH32(esp, 0x78DC80);
    PUSH32(esp, 0x002BB653u); RECOMP_ABI_CALL(0x000EBBD0u, sub_000EBBD0); /* call 0x000EBBD0 */

loc_002BB653: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(0x735C58);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002BB638; /* je: equal / zero */

loc_002BB65F: ;
    ecx = MEM32(0x735C5C);
    MEM32(esp + 8) = 0x78DC80;
    MEM32(esp + 4) = ecx;
    g_seh_ebp = ebp; RECOMP_ITAIL(eax); return; /* indirect tail jmp */

loc_002BB673: ;
    PUSH32(esp, 0x7F);
    PUSH32(esp, 0x4C4A38);
    PUSH32(esp, 0x78DC80);
    PUSH32(esp, 0x002BB684u); RECOMP_ABI_CALL(0x000EBBD0u, sub_000EBBD0); /* call 0x000EBBD0 */

loc_002BB684: ;
    eax = MEM32(0x735C58);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002BB638; /* je: equal / zero */

loc_002BB690: ;
    edx = MEM32(0x735C5C);
    MEM32(esp + 8) = 0x78DC80;
    MEM32(esp + 4) = edx;
    g_seh_ebp = ebp; RECOMP_ITAIL(eax); return; /* indirect tail jmp */

}

/**
 * sub_002BB6B0
 * Original: 0x002BB6B0 - 0x002BB6CD (29 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BB6B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002BB6B0: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx * 8 + 0x735C60);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002BB6CC; /* je: equal / zero */

loc_002BB6BF: ;
    ecx = MEM32(ecx * 8 + 0x735C64);
    MEM32(esp + 4) = ecx;
    g_seh_ebp = ebp; RECOMP_ITAIL(eax); return; /* indirect tail jmp */

loc_002BB6CC: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002BB6D0
 * Original: 0x002BB6D0 - 0x002BB6E4 (20 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BB6D0(void)
{

loc_002BB6D0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    MEM32(0x7359F4) = eax;
    MEM32(0x7359F8) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_002BB6F0
 * Original: 0x002BB6F0 - 0x002BB704 (20 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BB6F0(void)
{

loc_002BB6F0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    MEM32(0x7359FC) = eax;
    MEM32(0x735A00) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_002BB710
 * Original: 0x002BB710 - 0x002BB77A (106 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BB710(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002BB710: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = esi + esi * 8;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = edi * 8 + 0x735A10;
    MEM32(esp + 0x10) = 6;
    goto loc_002BB730;

    /* nop */

loc_002BB730: ;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = MEM32(edi + 4);
    if (CMP_EQ(_fa, _fb)) goto loc_002BB757; /* je: equal / zero */

loc_002BB739: ;
    MEM32(esi * 4 + 0x78DC20) = 1;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x002BB747u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002BB745u); } /* indirect call */
    }

loc_002BB747: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = ebx | eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi * 4 + 0x78DC20) = 0;

loc_002BB757: ;
    eax = MEM32(esp + 0x10);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0xC;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x10) = eax;
    if ((_fa != 0)) goto loc_002BB730; /* jne: not equal / not zero */

loc_002BB765: ;
    eax = MEM32(esi * 4 + 0x78DD00);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(esi * 4 + 0x78DD00) = eax;
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002BB780
 * Original: 0x002BB780 - 0x002BB823 (163 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_002BB780(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002BB780: ;
    edx = MEM32(esp + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002BB7F2; /* jl: less (signed <) */

loc_002BB78A: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 6 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002BB7F2; /* jge: greater or equal (signed >=) */

loc_002BB78F: ;
    ecx = MEM32(esp + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002BB7C1; /* jl: less (signed <) */

loc_002BB797: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 8 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002BB7C1; /* jge: greater or equal (signed >=) */

loc_002BB79C: ;
    ecx = ecx + ecx * 2;
    ecx = edx + ecx * 2;
    ecx = ecx + ecx * 2;
    edx = MEM32(ecx * 4 + 0x735A10);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    ecx = ecx * 4 + 0x735A10;
    if (CMP_EQ(_fa, _fb)) goto loc_002BB822; /* je: equal / zero */

loc_002BB7B7: ;
    eax = MEM32(ecx + 4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = edx; PUSH32(esp, 0x002BB7BDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002BB7BBu); } /* indirect call */
    }

loc_002BB7BD: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_002BB7C1: ;
    PUSH32(esp, 0x7F);
    PUSH32(esp, 0x4C4AE4);
    PUSH32(esp, 0x78DC80);
    PUSH32(esp, 0x002BB7D2u); RECOMP_ABI_CALL(0x000EBBD0u, sub_000EBBD0); /* call 0x000EBBD0 */

loc_002BB7D2: ;
    eax = MEM32(0x735C58);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002BB820; /* je: equal / zero */

loc_002BB7DE: ;
    ecx = MEM32(0x735C5C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x78DC80);
    PUSH32(esp, ecx);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x002BB7ECu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002BB7EAu); } /* indirect call */
    }

loc_002BB7EC: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_002BB7F2: ;
    PUSH32(esp, 0x7F);
    PUSH32(esp, 0x4C4ABC);
    PUSH32(esp, 0x78DC80);
    PUSH32(esp, 0x002BB803u); RECOMP_ABI_CALL(0x000EBBD0u, sub_000EBBD0); /* call 0x000EBBD0 */

loc_002BB803: ;
    eax = MEM32(0x735C58);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002BB820; /* je: equal / zero */

loc_002BB80F: ;
    edx = MEM32(0x735C5C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x78DC80);
    PUSH32(esp, edx);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x002BB81Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002BB81Bu); } /* indirect call */
    }

loc_002BB81D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002BB820: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002BB822: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002BB830
 * Original: 0x002BB830 - 0x002BB83B (11 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BB830(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002BB830: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x002BB837u); RECOMP_ABI_CALL(0x002BB710u, sub_002BB710); /* call 0x002BB710 */

loc_002BB837: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002BB840
 * Original: 0x002BB840 - 0x002BB84B (11 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BB840(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002BB840: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x002BB847u); RECOMP_ABI_CALL(0x002BB710u, sub_002BB710); /* call 0x002BB710 */

loc_002BB847: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002BB850
 * Original: 0x002BB850 - 0x002BB85B (11 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BB850(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002BB850: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x002BB857u); RECOMP_ABI_CALL(0x002BB710u, sub_002BB710); /* call 0x002BB710 */

loc_002BB857: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002BB860
 * Original: 0x002BB860 - 0x002BB86B (11 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BB860(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002BB860: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0x002BB867u); RECOMP_ABI_CALL(0x002BB710u, sub_002BB710); /* call 0x002BB710 */

loc_002BB867: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002BB870
 * Original: 0x002BB870 - 0x002BB87B (11 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BB870(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002BB870: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0x002BB877u); RECOMP_ABI_CALL(0x002BB710u, sub_002BB710); /* call 0x002BB710 */

loc_002BB877: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002BB880
 * Original: 0x002BB880 - 0x002BB88B (11 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BB880(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002BB880: ;
    PUSH32(esp, 5);
    PUSH32(esp, 0x002BB887u); RECOMP_ABI_CALL(0x002BB710u, sub_002BB710); /* call 0x002BB710 */

loc_002BB887: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002BB890
 * Original: 0x002BB890 - 0x002BB89B (11 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BB890(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002BB890: ;
    PUSH32(esp, 6);
    PUSH32(esp, 0x002BB897u); RECOMP_ABI_CALL(0x002BB710u, sub_002BB710); /* call 0x002BB710 */

loc_002BB897: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002BB8A0
 * Original: 0x002BB8A0 - 0x002BB8AB (11 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BB8A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002BB8A0: ;
    PUSH32(esp, 7);
    PUSH32(esp, 0x002BB8A7u); RECOMP_ABI_CALL(0x002BB710u, sub_002BB710); /* call 0x002BB710 */

loc_002BB8A7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}
