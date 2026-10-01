/**
 * MK: Shaolin Monks - Recompiled code chunk 34
 * Functions: 500 (0x0020C220 - 0x002163D0)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_0020C220
 * Original: 0x0020C220 - 0x0020C22E (14 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020C220(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020C220: ;
    eax = MEM32(esp + 4);
    edx = MEM32(ecx);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1C);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0020C230
 * Original: 0x0020C230 - 0x0020C234 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020C230(void)
{

loc_0020C230: ;
    eax = MEM32(ecx + 4);
    esp += 4; return; /* ret */

}

/**
 * sub_0020C240
 * Original: 0x0020C240 - 0x0020C243 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020C240(void)
{

loc_0020C240: ;
    eax = MEM32(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0020C250
 * Original: 0x0020C250 - 0x0020C259 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020C250(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020C250: ;
    eax = MEM32(ecx + 8);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}

/**
 * sub_0020C260
 * Original: 0x0020C260 - 0x0020C269 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020C260(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020C260: ;
    eax = MEM32(ecx + 8);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}

/**
 * sub_0020C270
 * Original: 0x0020C270 - 0x0020C28B (27 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020C270(void)
{

loc_0020C270: ;
    edx = MEM32(esp + 0xC);
    ecx = MEM32(0x62EBAC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x0020C28Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0020C287u); } /* indirect call */
    }

loc_0020C28A: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0020C290
 * Original: 0x0020C290 - 0x0020C299 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020C290(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020C290: ;
    eax = MEM32(ecx + 8);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}

/**
 * sub_0020C2A0
 * Original: 0x0020C2A0 - 0x0020C2BE (30 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020C2A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020C2A0: ;
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
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x0020C2BDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0020C2BAu); } /* indirect call */
    }

loc_0020C2BD: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0020C2C0
 * Original: 0x0020C2C0 - 0x0020C2C9 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020C2C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020C2C0: ;
    eax = MEM32(ecx + 8);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}

/**
 * sub_0020C2D0
 * Original: 0x0020C2D0 - 0x0020C2EE (30 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020C2D0(void)
{

loc_0020C2D0: ;
    edx = MEM32(esp + 0xC);
    ecx = MEM32(0x62EBAC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0xC);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x1C);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x0020C2EDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0020C2EAu); } /* indirect call */
    }

loc_0020C2ED: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0020C2F0
 * Original: 0x0020C2F0 - 0x0020C2FB (11 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020C2F0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0020C2F0: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 8)); /* fmul dword ptr [esp + 8] */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0020C300
 * Original: 0x0020C300 - 0x0020C30B (11 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020C300(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0020C300: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 8)); /* fmul dword ptr [esp + 8] */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0020C310
 * Original: 0x0020C310 - 0x0020C34F (63 bytes, 21 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020C310(void)
{

loc_0020C310: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax);
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    edx = MEM32(eax + 8);
    MEM32(ecx + 8) = edx;
    eax = MEM32(eax + 0xC);
    MEM32(ecx + 0xC) = eax;
    eax = MEM32(esp + 8);
    edx = MEM32(eax);
    MEM32(ecx + 0x10) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 0x14) = edx;
    edx = MEM32(eax + 8);
    MEM32(ecx + 0x18) = edx;
    eax = MEM32(eax + 0xC);
    edx = MEM32(esp + 0xC);
    MEM32(ecx + 0x1C) = eax;
    MEM32(ecx + 0xC) = edx;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0020C350
 * Original: 0x0020C350 - 0x0020C357 (7 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020C350(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0020C350: ;
    eax = MEM32(ecx + 0x3C);
    fp_push(MEMF(eax + 0x2C)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0020C360
 * Original: 0x0020C360 - 0x0020C376 (22 bytes, 7 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020C360(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020C360: ;
    edx = MEM32(esp + 4);
    eax = MEM32(ecx + 0x20);
    eax = ZX8(MEM8(eax + edx));
    edx = MEM32(ecx + 0x34);
    eax = eax << 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0020C380
 * Original: 0x0020C380 - 0x0020C399 (25 bytes, 7 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020C380(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020C380: ;
    edx = MEM32(esp + 4);
    eax = MEM32(ecx + 0x20);
    eax = ZX8(MEM8(eax + edx));
    edx = MEM32(ecx + 0x90);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1C);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0020C3A0
 * Original: 0x0020C3A0 - 0x0020C3A4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020C3A0(void)
{

loc_0020C3A0: ;
    eax = MEM32(ecx + 0xC);
    esp += 4; return; /* ret */

}

/**
 * sub_0020C3B0
 * Original: 0x0020C3B0 - 0x0020C3B4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020C3B0(void)
{

loc_0020C3B0: ;
    eax = MEM32(ecx + 0x10);
    esp += 4; return; /* ret */

}

/**
 * sub_0020C3C0
 * Original: 0x0020C3C0 - 0x0020C666 (678 bytes, 231 insns)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0020C3C0(void)
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

loc_0020C3C0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x74) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x74;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = ecx;
    _fa = (uint32_t)(MEM32(edx + 0xA4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 0xA4), 0xFA (32-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = edx;
    if (CMP_G(_fas, _fbs)) goto loc_0020C5EF; /* jg: greater (signed >) */

loc_0020C3E2: ;
    edi = MEM32(ebp + 8);
    ecx = MEM32(edi + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    eax = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_0020C3F9; /* je: equal / zero */

loc_0020C3EE: ;
    edi = edi;

loc_0020C3F0: ;
    eax = ecx;
    ecx = MEM32(eax + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0020C3F0; /* jne: not equal / not zero */

loc_0020C3F9: ;
    ebx = MEM32(ebp + 0xC);
    esi = MEM32(eax + 0x20);
    ecx = MEM32(ebx + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esp + 0x2C) = esi;
    eax = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_0020C419; /* je: equal / zero */

loc_0020C40C: ;
    /* nop */

loc_0020C410: ;
    eax = ecx;
    ecx = MEM32(eax + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0020C410; /* jne: not equal / not zero */

loc_0020C419: ;
    eax = MEM32(eax + 0x20);
    MEM32(esp + 0x1C) = eax;
    eax = MEM32(edx + 0xA4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0020C43A; /* jne: not equal / not zero */

loc_0020C42A: ;
    ecx = edx + 0x10;
    PUSH32(esp, ecx);
    ecx = MEM32(edx + 8);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020C436u); RECOMP_ABI_CALL(0x001FF030u, sub_001FF030); /* call 0x001FF030 */

loc_0020C436: ;
    edx = MEM32(esp + 0x10);

loc_0020C43A: ;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    ecx = edx + 0x10;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020C44Cu); RECOMP_ABI_CALL(0x00213950u, sub_00213950); /* call 0x00213950 */

loc_0020C44C: ;
    ecx = MEM32(esi + 0x3C);
    esi = MEM32(ebp + 0x14);
    edx = MEM32(ecx);
    MEM32(esp + 0x14) = eax;
    eax = esp + 0x40;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 0x58); PUSH32(esp, 0x0020C461u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0020C45Eu); } /* indirect call */
    }

loc_0020C461: ;
    ecx = MEM32(esp + 0x1C);
    ecx = MEM32(ecx + 0x3C);
    edx = MEM32(ecx);
    eax = esp + 0x30;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 0x58); PUSH32(esp, 0x0020C473u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0020C470u); } /* indirect call */
    }

loc_0020C473: ;
    fp_push(MEMF(esp + 0x30)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x40)); /* fsub dword ptr [esp + 0x40] */
    ecx = MEM32(edi + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    fp_push(MEMF(esp + 0x34)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x44)); /* fsub dword ptr [esp + 0x44] */
    eax = edi;
    fp_push(MEMF(esp + 0x38)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x48)); /* fsub dword ptr [esp + 0x48] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x18)); /* fmul dword ptr [esi + 0x18] */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x14)); /* fmul dword ptr [esi + 0x14] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x10)); /* fmul dword ptr [esi + 0x10] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(esp + 0x20) = (float)fp_top(); /* fst */
    if (CMP_EQ(_fa, _fb)) goto loc_0020C4B9; /* je: equal / zero */

loc_0020C4A9: ;
    /* nop */

loc_0020C4B0: ;
    eax = ecx;
    ecx = MEM32(eax + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0020C4B0; /* jne: not equal / not zero */

loc_0020C4B9: ;
    ecx = MEM32(eax + 0x20);
    edx = MEM32(ebx + 0xC);
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x48;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    eax = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_0020C4D1; /* je: equal / zero */

loc_0020C4C8: ;
    eax = edx;
    edx = MEM32(eax + 0xC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0020C4C8; /* jne: not equal / not zero */

loc_0020C4D1: ;
    eax = MEM32(eax + 0x20);
    fp_push(MEMF(eax + 0x4C)); /* fld float */
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x48;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 4)); /* fmul dword ptr [ecx + 4] */
    edx = MEM32(esp + 0xC);
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(edx + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 8)); /* fld float */
    eax = MEM32(esp + 0xC);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 8)); /* fmul dword ptr [ecx + 8] */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(eax + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x18);
    fp_push(MEMF(esi + 0xC)); /* fld float */
    ecx = MEM32(esi);
    MEM32(eax) = ecx;
    edx = MEM32(esi + 4);
    MEM32(eax + 4) = edx;
    ecx = MEM32(esi + 8);
    MEM32(eax + 8) = ecx;
    edx = MEM32(esi + 0xC);
    MEM32(eax + 0xC) = edx;
    ecx = MEM32(esi + 0x10);
    MEM32(eax + 0x10) = ecx;
    edx = MEM32(esi + 0x14);
    MEM32(eax + 0x14) = edx;
    ecx = MEM32(esi + 0x18);
    MEM32(eax + 0x18) = ecx;
    edx = MEM32(esi + 0x1C);
    MEM32(eax + 0x1C) = edx;
    MEMF(eax + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(edi + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    eax = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_0020C53F; /* je: equal / zero */

loc_0020C536: ;
    eax = ecx;
    ecx = MEM32(eax + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0020C536; /* jne: not equal / not zero */

loc_0020C53F: ;
    eax = MEM32(eax + 0x20);
    ecx = MEM32(ebx + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esp + 0x24) = eax;
    eax = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_0020C559; /* je: equal / zero */

loc_0020C54F: ;
    /* nop */

loc_0020C550: ;
    eax = ecx;
    ecx = MEM32(eax + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0020C550; /* jne: not equal / not zero */

loc_0020C559: ;
    ecx = MEM32(eax + 0x20);
    MEMF(esp + 0x78) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x14);
    eax = MEM32(esp + 0x10);
    MEM32(esp + 0x28) = ecx;
    ecx = MEM32(esp + 0x18);
    MEM32(esp + 0x5C) = edx;
    edx = MEM32(esp + 0xC);
    MEM32(esp + 0x70) = ecx;
    ecx = esp + 0x5C;
    MEM32(esp + 0x74) = edx;
    edx = MEM32(eax + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    MEM32(esp + 0x68) = eax;
    MEM32(esp + 0x6C) = edi;
    MEM32(esp + 0x70) = ebx;
    MEM32(esp + 0x84) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020C5A5u); RECOMP_ABI_CALL(0x0020B690u, sub_0020B690); /* call 0x0020B690 */

loc_0020C5A5: ;
    eax = MEM32(esp + 0x2C);
    ecx = MEM32(eax + 0x64);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020C5C1; /* je: equal / zero */

loc_0020C5B3: ;
    ecx = esp + 0x5C;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020C5BEu); RECOMP_ABI_CALL(0x00208080u, sub_00208080); /* call 0x00208080 */

loc_0020C5BE: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0020C5C1: ;
    eax = MEM32(esp + 0x28);
    ecx = MEM32(eax + 0x64);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020C5DA; /* je: equal / zero */

loc_0020C5CC: ;
    edx = esp + 0x5C;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020C5D7u); RECOMP_ABI_CALL(0x00208080u, sub_00208080); /* call 0x00208080 */

loc_0020C5D7: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0020C5DA: ;
    _fa = (uint32_t)(MEM32(esp + 0x7C)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x7C), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0020C5FB; /* jne: not equal / not zero */

loc_0020C5E1: ;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esp + 0x14);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x0020C5EFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0020C5ECu); } /* indirect call */
    }

loc_0020C5EF: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 20; return; /* ret 16 */

loc_0020C5FB: ;
    eax = MEM32(esp + 0xC);
    fp_push(MEMF(eax + 0xC)); /* fld float */
    ecx = MEM32(ebp + 0x10);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x30)); /* fmul dword ptr [ecx + 0x30] */
    POP32(esp, edi);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x1C)); /* fmul dword ptr [esp + 0x1c] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x4B3DA4)); /* fmul dword ptr [0x4b3da4] */
    MEMF(eax + 4) = (float)fp_top(); /* fst */
    edx = MEM32(esp + 8);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0xC)); /* fadd dword ptr [esi + 0xc] */
    eax = MEM32(esp + 0x18);
    POP32(esp, esi);
    POP32(esp, ebx);
    MEMF(edx + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(eax + 0x3C);
    edx = MEM32(esp + 0x20);
    fp_push(MEMF(ecx + 0x2C)); /* fld float */
    eax = MEM32(edx + 0x3C);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 0x2C)); /* fadd dword ptr [eax + 0x2c] */
    eax = MEM32(esp);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x4B3DA0)); /* fadd dword ptr [0x4b3da0] */
    fp_top() = RECOMP_FP_PC(MEMF(0x496454) / fp_top()); /* fdivr dword ptr [0x496454] */
    fp_push(MEMF(eax + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x496454)); /* fadd dword ptr [0x496454] */
    fp_st1() = RECOMP_FP_PC(fp_st1() * fp_top()); fp_pop(); /* fmulp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x14)); /* fmul dword ptr [esp + 0x14] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x49E290)); /* fmul dword ptr [0x49e290] */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 8);
    esp = ebp;
    POP32(esp, ebp);
    esp += 20; return; /* ret 16 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0020C670
 * Original: 0x0020C670 - 0x0020C710 (160 bytes, 56 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020C670(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020C670: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x20);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 8);
    ebx = MEM32(esi + 0x20);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x1C);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    MEM32(esp + 0x18) = ebp;
    MEM32(esp + 0x1C) = esi;
    MEM32(esp + 0x20) = edi;
    MEM32(esp + 0x24) = ebx;
    PUSH32(esp, 0x0020C6A1u); RECOMP_ABI_CALL(0x0020B720u, sub_0020B720); /* call 0x0020B720 */

loc_0020C6A1: ;
    eax = MEM32(edi + 0x64);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020C6B9; /* je: equal / zero */

loc_0020C6AB: ;
    edx = esp + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0020C6B6u); RECOMP_ABI_CALL(0x002080F0u, sub_002080F0); /* call 0x002080F0 */

loc_0020C6B6: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0020C6B9: ;
    eax = MEM32(ebx + 0x64);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020C6CE; /* je: equal / zero */

loc_0020C6C0: ;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0020C6CBu); RECOMP_ABI_CALL(0x002080F0u, sub_002080F0); /* call 0x002080F0 */

loc_0020C6CB: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0020C6CE: ;
    edi = esi + 0x10;
    PUSH32(esp, ebp);
    ecx = edi;
    PUSH32(esp, 0x0020C6D9u); RECOMP_ABI_CALL(0x00213540u, sub_00213540); /* call 0x00213540 */

loc_0020C6D9: ;
    eax = MEM32(esi + 0xA4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0020C706; /* jne: not equal / not zero */

loc_0020C6E3: ;
    eax = MEM32(esi + 8);
    ebx = (uint32_t)(int32_t)SMEM8(eax + 0x12C);
    MEM8(eax + 0x12C) = 0;
    ecx = MEM32(esi + 8);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0020C6FDu); RECOMP_ABI_CALL(0x001FE030u, sub_001FE030); /* call 0x001FE030 */

loc_0020C6FD: ;
    ecx = MEM32(esi + 8);
    MEM8(ecx + 0x12C) = LO8(ebx);

loc_0020C706: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0020C710
 * Original: 0x0020C710 - 0x0020C730 (32 bytes, 17 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020C710(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020C710: ;
    edx = MEM32(esp + 4);
    eax = MEM32(ecx + 0x30);
    eax = ZX8(MEM8(eax + edx));
    edx = MEM32(ecx + 0x44);
    eax = eax << 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0020C730
 * Original: 0x0020C730 - 0x0020C749 (25 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020C730(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020C730: ;
    edx = MEM32(esp + 4);
    eax = MEM32(ecx + 0x30);
    eax = ZX8(MEM8(eax + edx));
    edx = MEM32(ecx + 0xA0);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1C);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0020C750
 * Original: 0x0020C750 - 0x0020C787 (55 bytes, 19 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020C750(void)
{

loc_0020C750: ;
    eax = ecx;
    ecx = MEM32(esp + 4);
    edx = MEM32(ecx);
    MEM32(eax) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    edx = MEM32(ecx + 8);
    MEM32(eax + 8) = edx;
    edx = MEM32(ecx + 0xC);
    MEM32(eax + 0xC) = edx;
    edx = MEM32(ecx + 0x10);
    MEM32(eax + 0x10) = edx;
    edx = MEM32(ecx + 0x14);
    MEM32(eax + 0x14) = edx;
    edx = MEM32(ecx + 0x18);
    MEM32(eax + 0x18) = edx;
    ecx = MEM32(ecx + 0x1C);
    MEM32(eax + 0x1C) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0020C790
 * Original: 0x0020C790 - 0x0020C7D1 (65 bytes, 25 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020C790(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020C790: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 8);
    eax = MEM32(esi + 4);
    ecx = ecx & 0x7FFFFFFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0020C7BC; /* jne: not equal / not zero */

loc_0020C7A3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020C7AB; /* je: equal / zero */

loc_0020C7A7: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0020C7B0;

loc_0020C7AB: ;
    eax = 1;

loc_0020C7B0: ;
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0020C7B9u); RECOMP_ABI_CALL(0x00101B30u, sub_00101B30); /* call 0x00101B30 */

loc_0020C7B9: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0020C7BC: ;
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
 * sub_0020C7E0
 * Original: 0x0020C7E0 - 0x0020C802 (34 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020C7E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020C7E0: ;
    edx = ecx;
    eax = MEM32(edx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_0020C801; /* js: sign (negative) */

loc_0020C7E9: ;
    ecx = MEM32(0x62EBAC);
    PUSH32(esp, esi);
    esi = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x10);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, eax);
    eax = MEM32(edx);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(esi + 0x14); PUSH32(esp, 0x0020C800u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0020C7FDu); } /* indirect call */
    }

loc_0020C800: ;
    POP32(esp, esi);

loc_0020C801: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0020C810
 * Original: 0x0020C810 - 0x0020C835 (37 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020C810(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020C810: ;
    edx = ecx;
    eax = MEM32(edx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_0020C834; /* js: sign (negative) */

loc_0020C819: ;
    ecx = MEM32(0x62EBAC);
    PUSH32(esp, esi);
    esi = MEM32(ecx);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x10);
    eax = eax << 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    eax = MEM32(edx);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(esi + 0x14); PUSH32(esp, 0x0020C833u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0020C830u); } /* indirect call */
    }

loc_0020C833: ;
    POP32(esp, esi);

loc_0020C834: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0020C840
 * Original: 0x0020C840 - 0x0020C865 (37 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020C840(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020C840: ;
    edx = ecx;
    eax = MEM32(edx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_0020C864; /* js: sign (negative) */

loc_0020C849: ;
    ecx = MEM32(0x62EBAC);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1C);
    PUSH32(esp, esi);
    esi = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x10);
    PUSH32(esp, eax);
    eax = MEM32(edx);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(esi + 0x14); PUSH32(esp, 0x0020C863u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0020C860u); } /* indirect call */
    }

loc_0020C863: ;
    POP32(esp, esi);

loc_0020C864: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0020C870
 * Original: 0x0020C870 - 0x0020C8CC (92 bytes, 39 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020C870(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020C870: ;
    PUSH32(esp, ebx);
    ebx = ecx;
    eax = MEM32(ebx + 4);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0020C8C7; /* jle: less or equal (signed <=) */

loc_0020C87D: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);

loc_0020C882: ;
    eax = MEM32(ebx);
    _fa = (uint32_t)(MEM8(edi + eax)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi + eax), 0xFF (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020C8BE; /* je: equal / zero */

loc_0020C88A: ;
    ecx = MEM32(esi + 8);
    eax = MEM32(esi + 4);
    ecx = ecx & 0x7FFFFFFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0020C8B3; /* jne: not equal / not zero */

loc_0020C89A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020C8A2; /* je: equal / zero */

loc_0020C89E: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0020C8A7;

loc_0020C8A2: ;
    eax = 1;

loc_0020C8A7: ;
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0020C8B0u); RECOMP_ABI_CALL(0x00101B30u, sub_00101B30); /* call 0x00101B30 */

loc_0020C8B0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0020C8B3: ;
    edx = MEM32(esi + 4);
    eax = MEM32(esi);
    MEM32(eax + edx * 4) = edi;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0020C8BE: ;
    eax = MEM32(ebx + 4);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0020C882; /* jl: less (signed <) */

loc_0020C8C6: ;
    POP32(esp, esi);

loc_0020C8C7: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0020C8D0
 * Original: 0x0020C8D0 - 0x0020C8D8 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020C8D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020C8D0: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x30;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_0020C870(); return; /* tail jmp 0x0020C870 */

}

/**
 * sub_0020C8E0
 * Original: 0x0020C8E0 - 0x0020CB0D (557 bytes, 189 insns)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020C8E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020C8E0: ;
    eax = MEM32(esp + 0x10);
    eax = MEM32(eax);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(eax);
    eax = MEM32(eax + 4);
    ebx = eax + -1;
    edx = ebx + 1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 4 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_L(_fas, _fbs)) goto loc_0020CA39; /* jl: less (signed <) */

loc_0020C901: ;
    edx = edx >> 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = edx;
    edx = (uint32_t)(-(int32_t)edx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = esi + 0x18;
    ebx = ebx + edx * 4;
    edi = edi;

loc_0020C910: ;
    ebp = MEM32(ecx + 0x30);
    edx = MEM32(eax + 8);
    edx = ZX8(MEM8(edx + ebp));
    ebp = MEM32(ecx + 0x44);
    edx = edx << 5;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ebp;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = MEM32(esi);
    MEM32(edx) = ebp;
    ebp = MEM32(eax + -20);
    MEM32(edx + 4) = ebp;
    ebp = MEM32(eax + -16);
    MEM32(edx + 8) = ebp;
    ebp = MEM32(eax + -12);
    MEM32(edx + 0xC) = ebp;
    ebp = MEM32(eax + -8);
    MEM32(edx + 0x10) = ebp;
    ebp = MEM32(eax + -4);
    MEM32(edx + 0x14) = ebp;
    ebp = MEM32(eax);
    MEM32(edx + 0x18) = ebp;
    ebp = MEM32(eax + 4);
    MEM32(edx + 0x1C) = ebp;
    ebp = MEM32(ecx + 0x30);
    edx = MEM32(eax + 0x38);
    edx = ZX8(MEM8(edx + ebp));
    ebp = MEM32(ecx + 0x44);
    edx = edx << 5;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ebp;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = MEM32(eax + 0x18);
    MEM32(edx) = ebp;
    ebp = MEM32(eax + 0x1C);
    MEM32(edx + 4) = ebp;
    ebp = MEM32(eax + 0x20);
    MEM32(edx + 8) = ebp;
    ebp = MEM32(eax + 0x24);
    MEM32(edx + 0xC) = ebp;
    ebp = MEM32(eax + 0x28);
    MEM32(edx + 0x10) = ebp;
    ebp = MEM32(eax + 0x2C);
    MEM32(edx + 0x14) = ebp;
    ebp = MEM32(eax + 0x30);
    MEM32(edx + 0x18) = ebp;
    ebp = MEM32(eax + 0x34);
    MEM32(edx + 0x1C) = ebp;
    ebp = MEM32(ecx + 0x30);
    edx = MEM32(eax + 0x68);
    edx = ZX8(MEM8(edx + ebp));
    ebp = MEM32(ecx + 0x44);
    edx = edx << 5;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ebp;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = MEM32(eax + 0x48);
    MEM32(edx) = ebp;
    ebp = MEM32(eax + 0x4C);
    MEM32(edx + 4) = ebp;
    ebp = MEM32(eax + 0x50);
    MEM32(edx + 8) = ebp;
    ebp = MEM32(eax + 0x54);
    MEM32(edx + 0xC) = ebp;
    ebp = MEM32(eax + 0x58);
    MEM32(edx + 0x10) = ebp;
    ebp = MEM32(eax + 0x5C);
    MEM32(edx + 0x14) = ebp;
    ebp = MEM32(eax + 0x60);
    MEM32(edx + 0x18) = ebp;
    ebp = MEM32(eax + 0x64);
    MEM32(edx + 0x1C) = ebp;
    ebp = MEM32(ecx + 0x30);
    edx = MEM32(eax + 0x98);
    edx = ZX8(MEM8(edx + ebp));
    ebp = MEM32(ecx + 0x44);
    edx = edx << 5;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ebp;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = MEM32(eax + 0x78);
    MEM32(edx) = ebp;
    ebp = MEM32(eax + 0x7C);
    MEM32(edx + 4) = ebp;
    ebp = MEM32(eax + 0x80);
    MEM32(edx + 8) = ebp;
    ebp = MEM32(eax + 0x84);
    MEM32(edx + 0xC) = ebp;
    ebp = MEM32(eax + 0x88);
    MEM32(edx + 0x10) = ebp;
    ebp = MEM32(eax + 0x8C);
    MEM32(edx + 0x14) = ebp;
    ebp = MEM32(eax + 0x90);
    MEM32(edx + 0x18) = ebp;
    ebp = MEM32(eax + 0x94);
    _fb = (uint32_t)(0xC0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xC0;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xC0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(edx + 0x1C) = ebp;
    if ((_fa != 0)) goto loc_0020C910; /* jne: not equal / not zero */

loc_0020CA39: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0020CA89; /* jl: less (signed <) */

loc_0020CA3D: ;
    edx = esi + 0x18;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0020CA41: ;
    eax = MEM32(edx + 8);
    edi = MEM32(ecx + 0x30);
    eax = ZX8(MEM8(eax + edi));
    edi = MEM32(ecx + 0x44);
    eax = eax << 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = MEM32(esi);
    MEM32(eax) = edi;
    edi = MEM32(edx + -20);
    MEM32(eax + 4) = edi;
    edi = MEM32(edx + -16);
    MEM32(eax + 8) = edi;
    edi = MEM32(edx + -12);
    MEM32(eax + 0xC) = edi;
    edi = MEM32(edx + -8);
    MEM32(eax + 0x10) = edi;
    edi = MEM32(edx + -4);
    MEM32(eax + 0x14) = edi;
    edi = MEM32(edx);
    MEM32(eax + 0x18) = edi;
    edi = MEM32(edx + 4);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x30;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x30;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(eax + 0x1C) = edi;
    if ((_fa != 0)) goto loc_0020CA41; /* jne: not equal / not zero */

loc_0020CA89: ;
    MEM32(ecx + 0xC) = MEM32(ecx + 0xC) - 1;
    _fa = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0020CB03; /* jne: not equal / not zero */

loc_0020CA8E: ;
    edi = MEM32(esp + 0x28);
    ebx = MEM32(esp + 0x2C);
    esi = MEM32(edi + 0x20);
    ebp = MEM32(ebx + 0x20);
    SET_LO16(eax, MEM16(ebp + 0x5C));
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(edx, MEM16(esi + 0x5C));
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), LO16(eax) (16-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0020CAAD; /* jae: above or equal (unsigned >=) */

loc_0020CAAB: ;
    eax = edx;

loc_0020CAAD: ;
    edx = ZX16(LO16(eax));
    eax = MEM32(esp + 0x34);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx + 0xC) = edx;
    edx = esp + 0x10;
    MEM32(esp + 0x1C) = eax;
    eax = MEM32(ecx + 8);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    MEM32(esp + 0x18) = ecx;
    MEM32(esp + 0x1C) = edi;
    MEM32(esp + 0x20) = ebx;
    PUSH32(esp, 0x0020CAD6u); RECOMP_ABI_CALL(0x0020B7B0u, sub_0020B7B0); /* call 0x0020B7B0 */

loc_0020CAD6: ;
    eax = MEM32(esi + 0x64);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020CAEE; /* je: equal / zero */

loc_0020CAE0: ;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0020CAEBu); RECOMP_ABI_CALL(0x00208160u, sub_00208160); /* call 0x00208160 */

loc_0020CAEB: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0020CAEE: ;
    eax = MEM32(ebp + 0x64);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020CB03; /* je: equal / zero */

loc_0020CAF5: ;
    edx = esp + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0020CB00u); RECOMP_ABI_CALL(0x00208160u, sub_00208160); /* call 0x00208160 */

loc_0020CB00: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0020CB03: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0020CB10
 * Original: 0x0020CB10 - 0x0020CB28 (24 bytes, 6 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020CB10(void)
{

loc_0020CB10: ;
    eax = ecx;
    ecx = MEM32(esp + 4);
    MEM16(eax + 6) = 1;
    MEM32(eax) = 0x4B3DA8;
    MEM32(eax + 8) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0020CB30
 * Original: 0x0020CB30 - 0x0020CB59 (41 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020CB30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020CB30: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x4AE714;
    if (TEST_Z(_fa, _fb)) goto loc_0020CB53; /* je: equal / zero */

loc_0020CB40: ;
    edx = ZX16(MEM16(esi + 4));
    ecx = MEM32(0x62EBAC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x19);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x0020CB53u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0020CB50u); } /* indirect call */
    }

loc_0020CB53: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0020CB60
 * Original: 0x0020CB60 - 0x0020CB82 (34 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020CB60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020CB60: ;
    edx = ecx;
    eax = MEM32(edx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_0020CB81; /* js: sign (negative) */

loc_0020CB69: ;
    ecx = MEM32(0x62EBAC);
    PUSH32(esp, esi);
    esi = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x10);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, eax);
    eax = MEM32(edx);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(esi + 0x14); PUSH32(esp, 0x0020CB80u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0020CB7Du); } /* indirect call */
    }

loc_0020CB80: ;
    POP32(esp, esi);

loc_0020CB81: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0020CB90
 * Original: 0x0020CB90 - 0x0020CBB5 (37 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020CB90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020CB90: ;
    edx = ecx;
    eax = MEM32(edx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_0020CBB4; /* js: sign (negative) */

loc_0020CB99: ;
    ecx = MEM32(0x62EBAC);
    PUSH32(esp, esi);
    esi = MEM32(ecx);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x10);
    eax = eax << 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    eax = MEM32(edx);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(esi + 0x14); PUSH32(esp, 0x0020CBB3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0020CBB0u); } /* indirect call */
    }

loc_0020CBB3: ;
    POP32(esp, esi);

loc_0020CBB4: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0020CBC0
 * Original: 0x0020CBC0 - 0x0020CBE5 (37 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020CBC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020CBC0: ;
    edx = ecx;
    eax = MEM32(edx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_0020CBE4; /* js: sign (negative) */

loc_0020CBC9: ;
    ecx = MEM32(0x62EBAC);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1C);
    PUSH32(esp, esi);
    esi = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x10);
    PUSH32(esp, eax);
    eax = MEM32(edx);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(esi + 0x14); PUSH32(esp, 0x0020CBE3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0020CBE0u); } /* indirect call */
    }

loc_0020CBE3: ;
    POP32(esp, esi);

loc_0020CBE4: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0020CBF0
 * Original: 0x0020CBF0 - 0x0020CC12 (34 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020CBF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020CBF0: ;
    edx = ecx;
    eax = MEM32(edx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_0020CC11; /* js: sign (negative) */

loc_0020CBF9: ;
    ecx = MEM32(0x62EBAC);
    PUSH32(esp, esi);
    esi = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x10);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, eax);
    eax = MEM32(edx);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(esi + 0x14); PUSH32(esp, 0x0020CC10u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0020CC0Du); } /* indirect call */
    }

loc_0020CC10: ;
    POP32(esp, esi);

loc_0020CC11: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0020CC20
 * Original: 0x0020CC20 - 0x0020CC45 (37 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020CC20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020CC20: ;
    edx = ecx;
    eax = MEM32(edx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_0020CC44; /* js: sign (negative) */

loc_0020CC29: ;
    ecx = MEM32(0x62EBAC);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1C);
    PUSH32(esp, esi);
    esi = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x10);
    PUSH32(esp, eax);
    eax = MEM32(edx);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(esi + 0x14); PUSH32(esp, 0x0020CC43u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0020CC40u); } /* indirect call */
    }

loc_0020CC43: ;
    POP32(esp, esi);

loc_0020CC44: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0020CC50
 * Original: 0x0020CC50 - 0x0020CC72 (34 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020CC50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020CC50: ;
    edx = ecx;
    eax = MEM32(edx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_0020CC71; /* js: sign (negative) */

loc_0020CC59: ;
    ecx = MEM32(0x62EBAC);
    PUSH32(esp, esi);
    esi = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x10);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, eax);
    eax = MEM32(edx);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(esi + 0x14); PUSH32(esp, 0x0020CC70u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0020CC6Du); } /* indirect call */
    }

loc_0020CC70: ;
    POP32(esp, esi);

loc_0020CC71: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0020CC80
 * Original: 0x0020CC80 - 0x0020CCF1 (113 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020CC80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020CC80: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x98);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_0020CCAA; /* js: sign (negative) */

loc_0020CC8D: ;
    ecx = MEM32(0x62EBAC);
    edx = MEM32(ecx);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x10);
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x90);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0020CCAAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0020CCA7u); } /* indirect call */
    }

loc_0020CCAA: ;
    eax = MEM32(esi + 0x3C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_0020CCCB; /* js: sign (negative) */

loc_0020CCB1: ;
    ecx = MEM32(0x62EBAC);
    edx = MEM32(ecx);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x10);
    eax = eax << 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x34);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0020CCCBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0020CCC8u); } /* indirect call */
    }

loc_0020CCCB: ;
    eax = MEM32(esi + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_0020CCE9; /* js: sign (negative) */

loc_0020CCD2: ;
    ecx = MEM32(0x62EBAC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x10);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x20);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0020CCE9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0020CCE6u); } /* indirect call */
    }

loc_0020CCE9: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00212430(); return; /* tail jmp 0x00212430 */

}

/**
 * sub_0020CD00
 * Original: 0x0020CD00 - 0x0020CD2F (47 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020CD00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020CD00: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xA4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi) = 0x4B3DB0;
    if (CMP_EQ(_fa, _fb)) goto loc_0020CD1F; /* je: equal / zero */

loc_0020CD13: ;
    ecx = MEM32(esi + 8);
    eax = esi + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0020CD1Fu); RECOMP_ABI_CALL(0x001FE030u, sub_001FE030); /* call 0x001FE030 */

loc_0020CD1F: ;
    ecx = esi + 0x10;
    PUSH32(esp, 0x0020CD27u); RECOMP_ABI_CALL(0x0020CC80u, sub_0020CC80); /* call 0x0020CC80 */

loc_0020CD27: ;
    MEM32(esi) = 0x4AE714;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0020CD30
 * Original: 0x0020CD30 - 0x0020CD3B (11 bytes, 6 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020CD30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020CD30: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020CD3A; /* je: equal / zero */

loc_0020CD34: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0020CD3Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0020CD38u); } /* indirect call */
    }

loc_0020CD3A: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0020CD40
 * Original: 0x0020CD40 - 0x0020CD81 (65 bytes, 22 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020CD40(void)
{

loc_0020CD40: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 0x10;
    ecx = edi;
    MEM32(esi) = 0x4B3DB0;
    PUSH32(esp, 0x0020CD54u); RECOMP_ABI_CALL(0x00213AF0u, sub_00213AF0); /* call 0x00213AF0 */

loc_0020CD54: ;
    ecx = MEM32(esp + 0x10);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    ecx = edi;
    MEM32(esi + 8) = eax;
    PUSH32(esp, 0x0020CD67u); RECOMP_ABI_CALL(0x002124B0u, sub_002124B0); /* call 0x002124B0 */

loc_0020CD67: ;
    edx = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x0020CD73u); RECOMP_ABI_CALL(0x00212500u, sub_00212500); /* call 0x00212500 */

loc_0020CD73: ;
    POP32(esp, edi);
    MEM32(esi + 0xC) = 1;
    eax = esi;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0020CD90
 * Original: 0x0020CD90 - 0x0020CDDD (77 bytes, 25 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020CD90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020CD90: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xA4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi) = 0x4B3DB0;
    if (CMP_EQ(_fa, _fb)) goto loc_0020CDAF; /* je: equal / zero */

loc_0020CDA3: ;
    ecx = MEM32(esi + 8);
    eax = esi + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0020CDAFu); RECOMP_ABI_CALL(0x001FE030u, sub_001FE030); /* call 0x001FE030 */

loc_0020CDAF: ;
    ecx = esi + 0x10;
    PUSH32(esp, 0x0020CDB7u); RECOMP_ABI_CALL(0x0020CC80u, sub_0020CC80); /* call 0x0020CC80 */

loc_0020CDB7: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    MEM32(esi) = 0x4AE714;
    if (TEST_Z(_fa, _fb)) goto loc_0020CDD7; /* je: equal / zero */

loc_0020CDC4: ;
    eax = ZX16(MEM16(esi + 4));
    ecx = MEM32(0x62EBAC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xE);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0020CDD7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0020CDD4u); } /* indirect call */
    }

loc_0020CDD7: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0020CDE0
 * Original: 0x0020CDE0 - 0x0020CE4C (108 bytes, 37 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020CDE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020CDE0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    ebx = MEM32(eax + 0x20);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(esp + 0x18);
    ebp = MEM32(ecx + 0x20);
    ecx = MEM32(0x62EBAC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xE);
    PUSH32(esp, 0x120);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0020CE06u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0020CE03u); } /* indirect call */
    }

loc_0020CE06: ;
    esi = eax;
    MEM16(esi + 4) = 0x120;
    eax = MEM32(edi + 8);
    edi = esi + 0x10;
    ecx = edi;
    MEM32(esp + 0x14) = eax;
    MEM32(esi) = 0x4B3DB0;
    PUSH32(esp, 0x0020CE25u); RECOMP_ABI_CALL(0x00213AF0u, sub_00213AF0); /* call 0x00213AF0 */

loc_0020CE25: ;
    ecx = MEM32(esp + 0x14);
    MEM32(esi + 8) = ecx;
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0x0020CE34u); RECOMP_ABI_CALL(0x002124B0u, sub_002124B0); /* call 0x002124B0 */

loc_0020CE34: ;
    PUSH32(esp, ebp);
    ecx = edi;
    PUSH32(esp, 0x0020CE3Cu); RECOMP_ABI_CALL(0x00212500u, sub_00212500); /* call 0x00212500 */

loc_0020CE3C: ;
    POP32(esp, edi);
    MEM32(esi + 0xC) = 1;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0020CE50
 * Original: 0x0020CE50 - 0x0020CE91 (65 bytes, 25 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020CE50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020CE50: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    eax = MEM32(eax + 0x20);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x20);
    _fa = (uint32_t)(MEM8(eax + 0x40)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x40), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0020CE8B; /* jne: not equal / not zero */

loc_0020CE65: ;
    _fa = (uint32_t)(MEM8(esi + 0x40)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x40), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0020CE8B; /* jne: not equal / not zero */

loc_0020CE6B: ;
    ecx = MEM32(eax + 0x3C);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x0020CE73u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0020CE70u); } /* indirect call */
    }

loc_0020CE73: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020CE8B; /* je: equal / zero */

loc_0020CE78: ;
    ecx = MEM32(esi + 0x3C);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x0020CE80u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0020CE7Du); } /* indirect call */
    }

loc_0020CE80: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020CE8B; /* je: equal / zero */

loc_0020CE85: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0020CE8B: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0020CEA0
 * Original: 0x0020CEA0 - 0x0020CECA (42 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020CEA0(void)
{

loc_0020CEA0: ;
    ecx = MEM32(0x62EBAC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x26);
    PUSH32(esp, 0x250);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x0020CEB2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0020CEAFu); } /* indirect call */
    }

loc_0020CEB2: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, 0x4EE8);
    PUSH32(esp, ecx);
    ecx = eax;
    MEM16(eax + 4) = 0x250;
    PUSH32(esp, 0x0020CEC9u); RECOMP_ABI_CALL(0x002023B0u, sub_002023B0); /* call 0x002023B0 */

loc_0020CEC9: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0020CED0
 * Original: 0x0020CED0 - 0x0020CEDF (15 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020CED0(void)
{

loc_0020CED0: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0020CEDEu); RECOMP_ABI_CALL(0x001FB1F0u, sub_001FB1F0); /* call 0x001FB1F0 */

loc_0020CEDE: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0020CEE0
 * Original: 0x0020CEE0 - 0x0020CEEF (15 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020CEE0(void)
{

loc_0020CEE0: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0020CEEEu); RECOMP_ABI_CALL(0x001FB350u, sub_001FB350); /* call 0x001FB350 */

loc_0020CEEE: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0020CEF0
 * Original: 0x0020CEF0 - 0x0020CEF1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020CEF0(void)
{

loc_0020CEF0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0020CF00
 * Original: 0x0020CF00 - 0x0020CF06 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020CF00(void)
{

loc_0020CF00: ;
    eax = 0x71E74C;
    esp += 4; return; /* ret */

}

/**
 * sub_0020CF10
 * Original: 0x0020CF10 - 0x0020CF1E (14 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020CF10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020CF10: ;
    ecx = MEM32(esp + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020CF1D; /* je: equal / zero */

loc_0020CF18: ;
    g_seh_ebp = ebp; sub_001637B0(); return; /* tail jmp 0x001637B0 */

loc_0020CF1D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0020CF20
 * Original: 0x0020CF20 - 0x0020CF26 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020CF20(void)
{

loc_0020CF20: ;
    eax = 0x71E780;
    esp += 4; return; /* ret */

}

/**
 * sub_0020CF30
 * Original: 0x0020CF30 - 0x0020CF36 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020CF30(void)
{

loc_0020CF30: ;
    eax = 0x71E7B4;
    esp += 4; return; /* ret */

}

/**
 * sub_0020CF40
 * Original: 0x0020CF40 - 0x0020CF46 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020CF40(void)
{

loc_0020CF40: ;
    eax = 0x71E7E8;
    esp += 4; return; /* ret */

}

/**
 * sub_0020CF50
 * Original: 0x0020CF50 - 0x0020CF5F (15 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020CF50(void)
{

loc_0020CF50: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0020CF5Eu); RECOMP_ABI_CALL(0x00205940u, sub_00205940); /* call 0x00205940 */

loc_0020CF5E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0020CF60
 * Original: 0x0020CF60 - 0x0020CF6F (15 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020CF60(void)
{

loc_0020CF60: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0020CF6Eu); RECOMP_ABI_CALL(0x00205F00u, sub_00205F00); /* call 0x00205F00 */

loc_0020CF6E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0020CF70
 * Original: 0x0020CF70 - 0x0020CF76 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020CF70(void)
{

loc_0020CF70: ;
    eax = 0x71E81C;
    esp += 4; return; /* ret */

}

/**
 * sub_0020CF80
 * Original: 0x0020CF80 - 0x0020CFA5 (37 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020CF80(void)
{

loc_0020CF80: ;
    ecx = MEM32(0x62EBAC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x24);
    PUSH32(esp, 0xA0);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x0020CF92u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0020CF8Fu); } /* indirect call */
    }

loc_0020CF92: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, ecx);
    ecx = eax;
    MEM16(eax + 4) = 0xA0;
    PUSH32(esp, 0x0020CFA4u); RECOMP_ABI_CALL(0x00205C60u, sub_00205C60); /* call 0x00205C60 */

loc_0020CFA4: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0020CFB0
 * Original: 0x0020CFB0 - 0x0020CFBE (14 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020CFB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020CFB0: ;
    ecx = MEM32(esp + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020CFBD; /* je: equal / zero */

loc_0020CFB8: ;
    g_seh_ebp = ebp; sub_00166DC0(); return; /* tail jmp 0x00166DC0 */

loc_0020CFBD: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0020CFC0
 * Original: 0x0020CFC0 - 0x0020CFEA (42 bytes, 17 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020CFC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020CFC0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_0020CFE4; /* js: sign (negative) */

loc_0020CFCA: ;
    ecx = MEM32(0x62EBAC);
    edx = MEM32(ecx);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x10);
    eax = eax << 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    eax = MEM32(esi + 0xC);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0020CFE4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0020CFE1u); } /* indirect call */
    }

loc_0020CFE4: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0020CFF0
 * Original: 0x0020CFF0 - 0x0020D018 (40 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020CFF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020CFF0: ;
    edx = MEM32(esp + 4);
    eax = MEM32(edx + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_0020D017; /* js: sign (negative) */

loc_0020CFFB: ;
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
    eax = MEM32(edx + 0xC);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(esi + 0x14); PUSH32(esp, 0x0020D016u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0020D013u); } /* indirect call */
    }

loc_0020D016: ;
    POP32(esp, esi);

loc_0020D017: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0020D020
 * Original: 0x0020D020 - 0x0020D049 (41 bytes, 18 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020D020(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020D020: ;
    eax = MEM32(ecx + 4);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = eax;
    MEM32(ecx + 4) = eax;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0020D046; /* jge: greater or equal (signed >=) */

loc_0020D031: ;
    PUSH32(esp, esi);

loc_0020D032: ;
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
    if (CMP_L(_fas, _fbs)) goto loc_0020D032; /* jl: less (signed <) */

loc_0020D045: ;
    POP32(esp, esi);

loc_0020D046: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0020D050
 * Original: 0x0020D050 - 0x0020D075 (37 bytes, 17 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020D050(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020D050: ;
    edx = MEM32(ecx + 4);
    PUSH32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0020D06E; /* jle: less or equal (signed <=) */

loc_0020D05A: ;
    esi = MEM32(esp + 8);
    esi = MEM32(esi);
    ecx = MEM32(ecx);

loc_0020D062: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020D071; /* je: equal / zero */

loc_0020D066: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0020D062; /* jl: less (signed <) */

loc_0020D06E: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0020D071: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0020D080
 * Original: 0x0020D080 - 0x0020D0A9 (41 bytes, 18 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020D080(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020D080: ;
    eax = MEM32(ecx + 4);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = eax;
    MEM32(ecx + 4) = eax;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0020D0A6; /* jge: greater or equal (signed >=) */

loc_0020D091: ;
    PUSH32(esp, esi);

loc_0020D092: ;
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
    if (CMP_L(_fas, _fbs)) goto loc_0020D092; /* jl: less (signed <) */

loc_0020D0A5: ;
    POP32(esp, esi);

loc_0020D0A6: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0020D0B0
 * Original: 0x0020D0B0 - 0x0020D0E9 (57 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020D0B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020D0B0: ;
    PUSH32(esp, esi);
    esi = MEM32(eax + 4);
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_0020D0E7; /* js: sign (negative) */

loc_0020D0B7: ;
    PUSH32(esp, edi);

loc_0020D0B8: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(MEM32(ecx + esi * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + esi * 4), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0020D0E3; /* jne: not equal / not zero */

loc_0020D0C0: ;
    ecx = MEM32(eax + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    MEM32(eax + 4) = ecx;
    ecx = esi;
    if (CMP_GE(_fas, _fbs)) goto loc_0020D0E3; /* jge: greater or equal (signed >=) */

loc_0020D0CF: ;
    /* nop */

loc_0020D0D0: ;
    edx = MEM32(eax);
    edi = MEM32(edx + ecx * 4 + 4);
    edx = edx + ecx * 4;
    MEM32(edx) = edi;
    edx = MEM32(eax + 4);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0020D0D0; /* jl: less (signed <) */

loc_0020D0E3: ;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas >= 0)) goto loc_0020D0B8; /* jns: not sign (positive) */

loc_0020D0E6: ;
    POP32(esp, edi);

loc_0020D0E7: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0020D0F0
 * Original: 0x0020D0F0 - 0x0020D129 (57 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020D0F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020D0F0: ;
    PUSH32(esp, esi);
    esi = MEM32(eax + 4);
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_0020D127; /* js: sign (negative) */

loc_0020D0F7: ;
    PUSH32(esp, edi);

loc_0020D0F8: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(MEM32(ecx + esi * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + esi * 4), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0020D123; /* jne: not equal / not zero */

loc_0020D100: ;
    ecx = MEM32(eax + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    MEM32(eax + 4) = ecx;
    ecx = esi;
    if (CMP_GE(_fas, _fbs)) goto loc_0020D123; /* jge: greater or equal (signed >=) */

loc_0020D10F: ;
    /* nop */

loc_0020D110: ;
    edx = MEM32(eax);
    edi = MEM32(edx + ecx * 4 + 4);
    edx = edx + ecx * 4;
    MEM32(edx) = edi;
    edx = MEM32(eax + 4);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0020D110; /* jl: less (signed <) */

loc_0020D123: ;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas >= 0)) goto loc_0020D0F8; /* jns: not sign (positive) */

loc_0020D126: ;
    POP32(esp, edi);

loc_0020D127: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0020D130
 * Original: 0x0020D130 - 0x0020D155 (37 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020D130(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020D130: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    edi = MEM32(esi + 0x4C);
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_0020D152; /* js: sign (negative) */

loc_0020D13A: ;
    /* nop */

loc_0020D140: ;
    eax = MEM32(esi + 0x48);
    ecx = MEM32(eax + edi * 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020D14F; /* je: equal / zero */

loc_0020D14A: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0020D14Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0020D14Du); } /* indirect call */
    }

loc_0020D14F: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas >= 0)) goto loc_0020D140; /* jns: not sign (positive) */

loc_0020D152: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0020D160
 * Original: 0x0020D160 - 0x0020D1CA (106 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020D160(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020D160: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    edi = MEM32(esi + 0x4C);
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_0020D183; /* js: sign (negative) */

loc_0020D16A: ;
    /* nop */

loc_0020D170: ;
    eax = MEM32(esi + 0x48);
    ecx = MEM32(eax + edi * 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020D180; /* je: equal / zero */

loc_0020D17A: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0020D180u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0020D17Du); } /* indirect call */
    }

loc_0020D180: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas >= 0)) goto loc_0020D170; /* jns: not sign (positive) */

loc_0020D183: ;
    edx = MEM32(esi + 0x4C);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_0020D1C7; /* js: sign (negative) */

loc_0020D189: ;
    /* nop */

loc_0020D190: ;
    eax = MEM32(esi + 0x48);
    _fa = (uint32_t)(MEM32(eax + edx * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + edx * 4), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0020D1C4; /* jne: not equal / not zero */

loc_0020D199: ;
    eax = MEM32(esi + 0x4C);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    MEM32(esi + 0x4C) = eax;
    eax = edx;
    if (CMP_GE(_fas, _fbs)) goto loc_0020D1C4; /* jge: greater or equal (signed >=) */

loc_0020D1A8: ;
    goto loc_0020D1B0;

    /* nop */

loc_0020D1B0: ;
    ecx = MEM32(esi + 0x48);
    edi = MEM32(ecx + eax * 4 + 4);
    ecx = ecx + eax * 4;
    MEM32(ecx) = edi;
    ecx = MEM32(esi + 0x4C);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0020D1B0; /* jl: less (signed <) */

loc_0020D1C4: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas >= 0)) goto loc_0020D190; /* jns: not sign (positive) */

loc_0020D1C7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0020D1D0
 * Original: 0x0020D1D0 - 0x0020D23A (106 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020D1D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020D1D0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    edi = MEM32(esi + 0x4C);
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_0020D1F3; /* js: sign (negative) */

loc_0020D1DA: ;
    /* nop */

loc_0020D1E0: ;
    eax = MEM32(esi + 0x48);
    ecx = MEM32(eax + edi * 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020D1F0; /* je: equal / zero */

loc_0020D1EA: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0020D1F0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0020D1EDu); } /* indirect call */
    }

loc_0020D1F0: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas >= 0)) goto loc_0020D1E0; /* jns: not sign (positive) */

loc_0020D1F3: ;
    edx = MEM32(esi + 0x4C);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_0020D237; /* js: sign (negative) */

loc_0020D1F9: ;
    /* nop */

loc_0020D200: ;
    eax = MEM32(esi + 0x48);
    _fa = (uint32_t)(MEM32(eax + edx * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + edx * 4), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0020D234; /* jne: not equal / not zero */

loc_0020D209: ;
    eax = MEM32(esi + 0x4C);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    MEM32(esi + 0x4C) = eax;
    eax = edx;
    if (CMP_GE(_fas, _fbs)) goto loc_0020D234; /* jge: greater or equal (signed >=) */

loc_0020D218: ;
    goto loc_0020D220;

    /* nop */

loc_0020D220: ;
    ecx = MEM32(esi + 0x48);
    edi = MEM32(ecx + eax * 4 + 4);
    ecx = ecx + eax * 4;
    MEM32(ecx) = edi;
    ecx = MEM32(esi + 0x4C);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0020D220; /* jl: less (signed <) */

loc_0020D234: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas >= 0)) goto loc_0020D200; /* jns: not sign (positive) */

loc_0020D237: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0020D240
 * Original: 0x0020D240 - 0x0020D289 (73 bytes, 33 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020D240(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020D240: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x4C);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_LE(_fas, _fbs)) goto loc_0020D25E; /* jle: less or equal (signed <=) */

loc_0020D24B: ;
    edx = MEM32(ecx + 0x48);
    edi = MEM32(esp + 0xC);

loc_0020D252: ;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020D261; /* je: equal / zero */

loc_0020D256: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0020D252; /* jl: less (signed <) */

loc_0020D25E: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0020D261: ;
    edi = MEM32(ecx + 0x4C);
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    MEM32(ecx + 0x4C) = edi;
    if (CMP_GE(_fas, _fbs)) goto loc_0020D284; /* jge: greater or equal (signed >=) */

loc_0020D26E: ;
    edi = edi;

loc_0020D270: ;
    edx = MEM32(ecx + 0x48);
    esi = MEM32(edx + eax * 4 + 4);
    edx = edx + eax * 4;
    MEM32(edx) = esi;
    edx = MEM32(ecx + 0x4C);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0020D270; /* jl: less (signed <) */

loc_0020D284: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0020D290
 * Original: 0x0020D290 - 0x0020D2D9 (73 bytes, 33 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020D290(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020D290: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x40);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_LE(_fas, _fbs)) goto loc_0020D2AE; /* jle: less or equal (signed <=) */

loc_0020D29B: ;
    edx = MEM32(ecx + 0x3C);
    edi = MEM32(esp + 0xC);

loc_0020D2A2: ;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020D2B1; /* je: equal / zero */

loc_0020D2A6: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0020D2A2; /* jl: less (signed <) */

loc_0020D2AE: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0020D2B1: ;
    edi = MEM32(ecx + 0x40);
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    MEM32(ecx + 0x40) = edi;
    if (CMP_GE(_fas, _fbs)) goto loc_0020D2D4; /* jge: greater or equal (signed >=) */

loc_0020D2BE: ;
    edi = edi;

loc_0020D2C0: ;
    edx = MEM32(ecx + 0x3C);
    esi = MEM32(edx + eax * 4 + 4);
    edx = edx + eax * 4;
    MEM32(edx) = esi;
    edx = MEM32(ecx + 0x40);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0020D2C0; /* jl: less (signed <) */

loc_0020D2D4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0020D2E0
 * Original: 0x0020D2E0 - 0x0020D321 (65 bytes, 25 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020D2E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020D2E0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 8);
    eax = MEM32(esi + 4);
    ecx = ecx & 0x7FFFFFFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0020D30C; /* jne: not equal / not zero */

loc_0020D2F3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020D2FB; /* je: equal / zero */

loc_0020D2F7: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0020D300;

loc_0020D2FB: ;
    eax = 1;

loc_0020D300: ;
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0020D309u); RECOMP_ABI_CALL(0x00101B30u, sub_00101B30); /* call 0x00101B30 */

loc_0020D309: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0020D30C: ;
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
 * sub_0020D330
 * Original: 0x0020D330 - 0x0020D370 (64 bytes, 24 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020D330(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020D330: ;
    eax = MEM32(ecx + 0x4C);
    PUSH32(esp, esi);
    esi = ecx + 0x48;
    ecx = MEM32(esi + 8);
    ecx = ecx & 0x7FFFFFFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0020D35D; /* jne: not equal / not zero */

loc_0020D344: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020D34C; /* je: equal / zero */

loc_0020D348: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0020D351;

loc_0020D34C: ;
    eax = 1;

loc_0020D351: ;
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0020D35Au); RECOMP_ABI_CALL(0x00101B30u, sub_00101B30); /* call 0x00101B30 */

loc_0020D35A: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0020D35D: ;
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
 * sub_0020D3F0
 * Original: 0x0020D3F0 - 0x0020D49C (172 bytes, 66 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020D3F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020D3F0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x4C);
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi) = 0x4B390C;
    if ((_fas < 0)) goto loc_0020D412; /* js: sign (negative) */

loc_0020D400: ;
    eax = MEM32(esi + 0x48);
    ecx = MEM32(eax + edi * 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020D40F; /* je: equal / zero */

loc_0020D40A: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0020D40Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0020D40Du); } /* indirect call */
    }

loc_0020D40F: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas >= 0)) goto loc_0020D400; /* jns: not sign (positive) */

loc_0020D412: ;
    eax = MEM32(esi + 0x50);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_0020D433; /* js: sign (negative) */

loc_0020D419: ;
    ecx = MEM32(0x62EBAC);
    edx = MEM32(ecx);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x10);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x48);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0020D433u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0020D430u); } /* indirect call */
    }

loc_0020D433: ;
    eax = MEM32(esi + 0x44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_0020D454; /* js: sign (negative) */

loc_0020D43A: ;
    ecx = MEM32(0x62EBAC);
    edx = MEM32(ecx);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x10);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x3C);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0020D454u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0020D451u); } /* indirect call */
    }

loc_0020D454: ;
    ecx = MEM32(esi + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi) = 0x4B3668;
    if (CMP_EQ(_fa, _fb)) goto loc_0020D472; /* je: equal / zero */

loc_0020D461: ;
    MEM16(ecx + 6) = MEM16(ecx + 6) - 1;
    _fa = (uint32_t)(MEM16(ecx + 6)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(ecx + 6)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 6), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0020D472; /* jne: not equal / not zero */

loc_0020D46C: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0020D472u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0020D470u); } /* indirect call */
    }

loc_0020D472: ;
    eax = MEM32(esi + 0x38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_0020D493; /* js: sign (negative) */

loc_0020D479: ;
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
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0020D493u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0020D490u); } /* indirect call */
    }

loc_0020D493: ;
    POP32(esp, edi);
    MEM32(esi) = 0x4AE714;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0020D4A0
 * Original: 0x0020D4A0 - 0x0020D592 (242 bytes, 78 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020D4A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020D4A0: ;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020D58B; /* je: equal / zero */

loc_0020D4B1: ;
    eax = MEM32(eax + 0x234);
    PUSH32(esp, eax);
    ecx = esp + 0x20;
    PUSH32(esp, 0x0020D4C1u); RECOMP_ABI_CALL(0x001FF410u, sub_001FF410); /* call 0x001FF410 */

loc_0020D4C1: ;
    ecx = MEM32(esi + 8);
    edx = MEM32(ecx + 0x234);
    PUSH32(esp, edx);
    ecx = esp + 0xC;
    PUSH32(esp, 0x0020D4D4u); RECOMP_ABI_CALL(0x001FF410u, sub_001FF410); /* call 0x001FF410 */

loc_0020D4D4: ;
    eax = esi + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020D4E4; /* je: equal / zero */

loc_0020D4DB: ;
    ecx = esi + 0x1C;
    MEM32(esp + 4) = ecx;
    goto loc_0020D4EC;

loc_0020D4E4: ;
    MEM32(esp + 4) = 0;

loc_0020D4EC: ;
    edx = MEM32(esi + 8);
    ecx = MEM32(edx + 0xC4);
    eax = MEM32(ecx);
    edx = esp + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x3C);
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x0020D510u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0020D50Du); } /* indirect call */
    }

loc_0020D510: ;
    eax = MEM32(esp + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0020D520; /* jne: not equal / not zero */

loc_0020D518: ;
    ecx = MEM32(esp + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020D579; /* je: equal / zero */

loc_0020D520: ;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x20);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0020D52Bu); RECOMP_ABI_CALL(0x0021A460u, sub_0021A460); /* call 0x0021A460 */

loc_0020D52B: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0020D53Au); RECOMP_ABI_CALL(0x0021A460u, sub_0021A460); /* call 0x0021A460 */

loc_0020D53A: ;
    ecx = MEM32(esi + 8);
    eax = MEM32(ecx + 0xD0);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0020D54F; /* je: equal / zero */

loc_0020D54A: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0020D551;

loc_0020D54F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0020D551: ;
    edx = MEM32(esp + 8);
    ecx = MEM32(ecx + 0x138);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x28);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x28);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0020D571u); RECOMP_ABI_CALL(0x0021A150u, sub_0021A150); /* call 0x0021A150 */

loc_0020D571: ;
    eax = esi + 0x3C;
    PUSH32(esp, 0x0020D579u); RECOMP_ABI_CALL(0x0020D0F0u, sub_0020D0F0); /* call 0x0020D0F0 */

loc_0020D579: ;
    ecx = esp + 8;
    PUSH32(esp, 0x0020D582u); RECOMP_ABI_CALL(0x001FF480u, sub_001FF480); /* call 0x001FF480 */

loc_0020D582: ;
    ecx = esp + 0x1C;
    PUSH32(esp, 0x0020D58Bu); RECOMP_ABI_CALL(0x001FF480u, sub_001FF480); /* call 0x001FF480 */

loc_0020D58B: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0020D5A0
 * Original: 0x0020D5A0 - 0x0020D5A6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020D5A0(void)
{

loc_0020D5A0: ;
    eax = 0x71E850;
    esp += 4; return; /* ret */

}

/**
 * sub_0020D5B0
 * Original: 0x0020D5B0 - 0x0020D5B5 (5 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020D5B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020D5B0: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0020D5C0
 * Original: 0x0020D5C0 - 0x0020D5C5 (5 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020D5C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020D5C0: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0020D5D0
 * Original: 0x0020D5D0 - 0x0020D5D7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020D5D0(void)
{

loc_0020D5D0: ;
    MEM32(ecx) = 0x4AE714;
    esp += 4; return; /* ret */

}

/**
 * sub_0020D5E0
 * Original: 0x0020D5E0 - 0x0020D5E7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020D5E0(void)
{

loc_0020D5E0: ;
    MEM32(ecx) = 0x4AE714;
    esp += 4; return; /* ret */

}

/**
 * sub_0020D5F0
 * Original: 0x0020D5F0 - 0x0020D5F7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020D5F0(void)
{

loc_0020D5F0: ;
    MEM32(ecx) = 0x4AE714;
    esp += 4; return; /* ret */

}

/**
 * sub_0020D600
 * Original: 0x0020D600 - 0x0020D60F (15 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020D600(void)
{

loc_0020D600: ;
    eax = ecx;
    MEM16(eax + 6) = 1;
    MEM32(eax) = 0x4B4320;
    esp += 4; return; /* ret */

}

/**
 * sub_0020D610
 * Original: 0x0020D610 - 0x0020D639 (41 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020D610(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020D610: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x4AE714;
    if (TEST_Z(_fa, _fb)) goto loc_0020D633; /* je: equal / zero */

loc_0020D620: ;
    edx = ZX16(MEM16(esi + 4));
    ecx = MEM32(0x62EBAC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x22);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x0020D633u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0020D630u); } /* indirect call */
    }

loc_0020D633: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0020D640
 * Original: 0x0020D640 - 0x0020D64F (15 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020D640(void)
{

loc_0020D640: ;
    eax = ecx;
    MEM16(eax + 6) = 1;
    MEM32(eax) = 0x4B433C;
    esp += 4; return; /* ret */

}

/**
 * sub_0020D650
 * Original: 0x0020D650 - 0x0020D679 (41 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020D650(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020D650: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x4AE714;
    if (TEST_Z(_fa, _fb)) goto loc_0020D673; /* je: equal / zero */

loc_0020D660: ;
    edx = ZX16(MEM16(esi + 4));
    ecx = MEM32(0x62EBAC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x22);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x0020D673u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0020D670u); } /* indirect call */
    }

loc_0020D673: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0020D680
 * Original: 0x0020D680 - 0x0020D68F (15 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020D680(void)
{

loc_0020D680: ;
    eax = ecx;
    MEM16(eax + 6) = 1;
    MEM32(eax) = 0x4B435C;
    esp += 4; return; /* ret */

}

/**
 * sub_0020D690
 * Original: 0x0020D690 - 0x0020D696 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020D690(void)
{

loc_0020D690: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_0020D6A0
 * Original: 0x0020D6A0 - 0x0020D6C9 (41 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020D6A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020D6A0: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x4AE714;
    if (TEST_Z(_fa, _fb)) goto loc_0020D6C3; /* je: equal / zero */

loc_0020D6B0: ;
    edx = ZX16(MEM16(esi + 4));
    ecx = MEM32(0x62EBAC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x22);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x0020D6C3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0020D6C0u); } /* indirect call */
    }

loc_0020D6C3: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0020D6D0
 * Original: 0x0020D6D0 - 0x0020D6D4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020D6D0(void)
{

loc_0020D6D0: ;
    eax = ecx + 0x40;
    esp += 4; return; /* ret */

}

/**
 * sub_0020D6E0
 * Original: 0x0020D6E0 - 0x0020D6E4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020D6E0(void)
{

loc_0020D6E0: ;
    eax = ecx + 0x50;
    esp += 4; return; /* ret */

}

/**
 * sub_0020D6F0
 * Original: 0x0020D6F0 - 0x0020D6F3 (3 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020D6F0(void)
{

loc_0020D6F0: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0020D700
 * Original: 0x0020D700 - 0x0020D703 (3 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020D700(void)
{

loc_0020D700: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0020D710
 * Original: 0x0020D710 - 0x0020D713 (3 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020D710(void)
{

loc_0020D710: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0020D720
 * Original: 0x0020D720 - 0x0020D723 (3 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020D720(void)
{

loc_0020D720: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0020D730
 * Original: 0x0020D730 - 0x0020D733 (3 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020D730(void)
{

loc_0020D730: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0020D740
 * Original: 0x0020D740 - 0x0020D743 (3 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020D740(void)
{

loc_0020D740: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0020D750
 * Original: 0x0020D750 - 0x0020D753 (3 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020D750(void)
{

loc_0020D750: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0020D760
 * Original: 0x0020D760 - 0x0020D763 (3 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020D760(void)
{

loc_0020D760: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0020D770
 * Original: 0x0020D770 - 0x0020D776 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020D770(void)
{

loc_0020D770: ;
    eax = 0x80;
    esp += 4; return; /* ret */

}

/**
 * sub_0020D780
 * Original: 0x0020D780 - 0x0020D783 (3 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020D780(void)
{

loc_0020D780: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0020D790
 * Original: 0x0020D790 - 0x0020D796 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020D790(void)
{

loc_0020D790: ;
    eax = 6;
    esp += 4; return; /* ret */

}

/**
 * sub_0020D7A0
 * Original: 0x0020D7A0 - 0x0020D7A7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020D7A0(void)
{

loc_0020D7A0: ;
    eax = MEM32(ecx + 0xC0);
    esp += 4; return; /* ret */

}

/**
 * sub_0020D7B0
 * Original: 0x0020D7B0 - 0x0020D7B3 (3 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020D7B0(void)
{

loc_0020D7B0: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0020D7C0
 * Original: 0x0020D7C0 - 0x0020D7CD (13 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020D7C0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0020D7C0: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    fp_top() = RECOMP_FP_PC(MEMF(0x496454) / fp_top()); /* fdivr dword ptr [0x496454] */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0020D7D0
 * Original: 0x0020D7D0 - 0x0020D7FD (45 bytes, 14 insns)
 * CC: cdecl, 2 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0020D7D0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0020D7D0: ;
    eax = MEM32(esp + 8);
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax)); /* fmul dword ptr [eax] */
    MEMF(ecx) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 4)); /* fmul dword ptr [eax + 4] */
    MEMF(ecx + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 8)); /* fmul dword ptr [eax + 8] */
    MEMF(ecx + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0xC)); /* fmul dword ptr [eax + 0xc] */
    MEMF(ecx + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0020D800
 * Original: 0x0020D800 - 0x0020D838 (56 bytes, 18 insns)
 * CC: cdecl, 2 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0020D800(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0020D800: ;
    eax = MEM32(esp + 8);
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax)); /* fmul dword ptr [eax] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx)); /* fadd dword ptr [ecx] */
    MEMF(ecx) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 4)); /* fmul dword ptr [eax + 4] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 4)); /* fadd dword ptr [ecx + 4] */
    MEMF(ecx + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 8)); /* fmul dword ptr [eax + 8] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 8)); /* fadd dword ptr [ecx + 8] */
    MEMF(ecx + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0xC)); /* fmul dword ptr [eax + 0xc] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0xC)); /* fadd dword ptr [ecx + 0xc] */
    MEMF(ecx + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0020D840
 * Original: 0x0020D840 - 0x0020D88C (76 bytes, 31 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0020D840(void)
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

loc_0020D840: ;
    fp_push(MEMF(ecx + 0xC)); /* fld float */
    fp_push(MEMF(ecx + 8)); /* fld float */
    fp_push(MEMF(ecx + 4)); /* fld float */
    fp_push(MEMF(ecx)); /* fld float */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 4) & 7]); /* fmul st(4) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 4) & 7]; fp_push(_t); } /* fld st(4) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 5) & 7]); /* fmul st(5) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    g_fp_stack[(g_fp_top + 4) & 7] = fp_top(); fp_pop(); /* fstp st(4) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x4964E8)); /* fld float */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0020D883; /* jnp: not parity */

loc_0020D87A: ;
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    fp_top() = RECOMP_FP_PC(MEMF(0x496454) / fp_top()); /* fdivr dword ptr [0x496454] */
    esp += 4; return; /* ret */

loc_0020D883: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x4964E8)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0020D890
 * Original: 0x0020D890 - 0x0020D8CA (58 bytes, 19 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020D890(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020D890: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0020D8A4u); RECOMP_ABI_CALL(0x00205460u, sub_00205460); /* call 0x00205460 */

loc_0020D8A4: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    ecx = esi;
    MEM32(esi) = 0x4B4380;
    MEM32(esi + 0xC0) = eax;
    MEM32(esi + 0x10) = eax;
    PUSH32(esp, 0x0020D8BDu); RECOMP_ABI_CALL(0x0020E050u, sub_0020E050); /* call 0x0020E050 */

loc_0020D8BD: ;
    MEM32(esi + 0x7C) = 0x3F800000;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0020D8D0
 * Original: 0x0020D8D0 - 0x0020D8D7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020D8D0(void)
{

loc_0020D8D0: ;
    MEM32(ecx) = 0x4AE714;
    esp += 4; return; /* ret */

}

/**
 * sub_0020D8E0
 * Original: 0x0020D8E0 - 0x0020D90C (44 bytes, 15 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020D8E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020D8E0: ;
    eax = MEM32(esp + 4);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 4) = ecx;
    MEM32(eax) = ecx;
    MEM32(eax + 0x1C) = ecx;
    MEM32(eax + 0x18) = ecx;
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x2C) = ecx;
    MEM32(eax + 0x28) = ecx;
    MEM32(eax + 0x24) = ecx;
    MEM32(eax + 0x20) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0020D910
 * Original: 0x0020D910 - 0x0020D93C (44 bytes, 15 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020D910(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020D910: ;
    eax = MEM32(esp + 4);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 4) = ecx;
    MEM32(eax) = ecx;
    MEM32(eax + 0x1C) = ecx;
    MEM32(eax + 0x18) = ecx;
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x2C) = ecx;
    MEM32(eax + 0x28) = ecx;
    MEM32(eax + 0x24) = ecx;
    MEM32(eax + 0x20) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0020D940
 * Original: 0x0020D940 - 0x0020D96C (44 bytes, 15 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020D940(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020D940: ;
    eax = MEM32(esp + 4);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 4) = ecx;
    MEM32(eax) = ecx;
    MEM32(eax + 0x1C) = ecx;
    MEM32(eax + 0x18) = ecx;
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x2C) = ecx;
    MEM32(eax + 0x28) = ecx;
    MEM32(eax + 0x24) = ecx;
    MEM32(eax + 0x20) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0020D970
 * Original: 0x0020D970 - 0x0020D99C (44 bytes, 15 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020D970(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020D970: ;
    eax = MEM32(esp + 4);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 4) = ecx;
    MEM32(eax) = ecx;
    MEM32(eax + 0x1C) = ecx;
    MEM32(eax + 0x18) = ecx;
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x2C) = ecx;
    MEM32(eax + 0x28) = ecx;
    MEM32(eax + 0x24) = ecx;
    MEM32(eax + 0x20) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0020D9A0
 * Original: 0x0020D9A0 - 0x0020DA3D (157 bytes, 52 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020D9A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020D9A0: ;
    eax = MEM32(esp + 0xC);
    MEM8(eax) = 2;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 0x3C) = edx;
    MEM32(eax + 0x38) = edx;
    MEM32(eax + 0x34) = edx;
    MEM32(eax + 0x30) = edx;
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x70);
    MEM32(eax + 0x40) = esi;
    esi = MEM32(ecx + 0x74);
    MEM32(eax + 0x44) = esi;
    esi = MEM32(ecx + 0x78);
    MEM32(eax + 0x48) = esi;
    esi = MEM32(ecx + 0x7C);
    MEM32(eax + 0x4C) = esi;
    esi = MEM32(ecx + 0x50);
    MEM32(eax + 0x20) = esi;
    esi = MEM32(ecx + 0x54);
    MEM32(eax + 0x24) = esi;
    esi = MEM32(ecx + 0x58);
    MEM32(eax + 0x28) = esi;
    esi = MEM32(ecx + 0x5C);
    MEM32(eax + 0x2C) = esi;
    esi = MEM32(ecx + 0x40);
    MEM32(eax + 0x10) = esi;
    esi = MEM32(ecx + 0x44);
    MEM32(eax + 0x14) = esi;
    esi = MEM32(ecx + 0x48);
    MEM32(eax + 0x18) = esi;
    ecx = MEM32(ecx + 0x4C);
    MEM32(eax + 0x1C) = ecx;
    MEM32(eax + 0x5C) = edx;
    MEM32(eax + 0x58) = edx;
    MEM32(eax + 0x54) = edx;
    MEM32(eax + 0x50) = edx;
    MEM32(eax + 0x6C) = edx;
    MEM32(eax + 0x68) = edx;
    MEM32(eax + 0x64) = edx;
    MEM32(eax + 0x60) = edx;
    MEM32(eax + 0x7C) = edx;
    MEM32(eax + 0x78) = edx;
    MEM32(eax + 0x74) = edx;
    MEM32(eax + 0x70) = edx;
    ecx = 0x3F800000;
    MEM32(eax + 0x50) = ecx;
    MEM32(eax + 0x64) = ecx;
    MEM32(eax + 0x78) = ecx;
    MEM8(eax + 0xC) = 1;
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x80;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0020DA40
 * Original: 0x0020DA40 - 0x0020DAA6 (102 bytes, 32 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020DA40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020DA40: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ecx + 0xC0) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0020DAA3; /* je: equal / zero */

loc_0020DA4E: ;
    edx = MEM32(eax + 0xC);
    MEM32(ecx + 0xC) = edx;
    edx = MEM32(eax + 0x20);
    MEM32(ecx + 0x20) = edx;
    edx = MEM32(eax + 0x24);
    MEM32(ecx + 0x24) = edx;
    edx = MEM32(eax + 0x28);
    MEM32(ecx + 0x28) = edx;
    edx = MEM32(eax + 0x2C);
    MEM32(ecx + 0x2C) = edx;
    MEM32(ecx + 0x2C) = 0;
    edx = MEM32(eax + 0x70);
    MEM32(ecx + 0x70) = edx;
    edx = MEM32(eax + 0x74);
    MEM32(ecx + 0x74) = edx;
    edx = MEM32(eax + 0x78);
    MEM32(ecx + 0x78) = edx;
    edx = MEM32(eax + 0x7C);
    MEM32(ecx + 0x7C) = edx;
    edx = MEM32(eax + 0x60);
    MEM32(ecx + 0x60) = edx;
    edx = MEM32(eax + 0x64);
    MEM32(ecx + 0x64) = edx;
    edx = MEM32(eax + 0x68);
    MEM32(ecx + 0x68) = edx;
    eax = MEM32(eax + 0x6C);
    MEM32(ecx + 0x6C) = eax;

loc_0020DAA3: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0020DAB0
 * Original: 0x0020DAB0 - 0x0020DABE (14 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020DAB0(void)
{

loc_0020DAB0: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + eax * 4) = 0;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0020DAC0
 * Original: 0x0020DAC0 - 0x0020DB84 (196 bytes, 72 insns)
 * CC: cdecl, 2 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0020DAC0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0020DAC0: ;
    edx = MEM32(esp + 8);
    eax = MEM32(esp + 4);
    fp_push(MEMF(edx)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 8)); /* fmul dword ptr [eax + 8] */
    PUSH32(esp, esi);
    fp_push(MEMF(edx + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax)); /* fmul dword ptr [eax] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    fp_push(MEMF(eax)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 4)); /* fmul dword ptr [edx + 4] */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx)); /* fmul dword ptr [edx] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    fp_push(MEMF(edx + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 4)); /* fmul dword ptr [eax + 4] */
    fp_push(MEMF(edx + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 8)); /* fmul dword ptr [eax + 8] */
    MEM32(ecx + 0xC) = 0;
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    MEMF(ecx) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    MEMF(ecx + 4) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(ecx + 8) = (float)fp_top(); /* fst */
    esi = MEM32(eax + 0xC);
    MEM32(esp + 8) = esi;
    fp_push(MEMF(esp + 8)); /* fld float */
    POP32(esp, esi);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx)); /* fmul dword ptr [edx] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx)); /* fadd dword ptr [ecx] */
    MEMF(ecx) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 4)); /* fmul dword ptr [edx + 4] */
    fp_top() = RECOMP_FP_PC(fp_top() + g_fp_stack[(g_fp_top + 2) & 7]); /* fadd st(2) */
    MEMF(ecx + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 8)); /* fmul dword ptr [edx + 8] */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_st1()); /* fadd st(1) */
    MEMF(ecx + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 0xC)); /* fmul dword ptr [edx + 0xc] */
    MEMF(ecx + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edx + 0xC)); /* fld float */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax)); /* fmul dword ptr [eax] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx)); /* fadd dword ptr [ecx] */
    MEMF(ecx) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 4)); /* fmul dword ptr [eax + 4] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 4)); /* fadd dword ptr [ecx + 4] */
    MEMF(ecx + 4) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 8)); /* fmul dword ptr [eax + 8] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 8)); /* fadd dword ptr [ecx + 8] */
    MEMF(ecx + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0xC)); /* fmul dword ptr [eax + 0xc] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0xC)); /* fadd dword ptr [ecx + 0xc] */
    MEMF(ecx + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edx + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0xC)); /* fmul dword ptr [eax + 0xc] */
    fp_push(MEMF(eax)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx)); /* fmul dword ptr [edx] */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 4)); /* fmul dword ptr [edx + 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(edx + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 8)); /* fmul dword ptr [eax + 8] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    MEMF(ecx + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0020DB90
 * Original: 0x0020DB90 - 0x0020DBB9 (41 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020DB90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020DB90: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x4AE714;
    if (TEST_Z(_fa, _fb)) goto loc_0020DBB3; /* je: equal / zero */

loc_0020DBA0: ;
    edx = ZX16(MEM16(esi + 4));
    ecx = MEM32(0x62EBAC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x25);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x0020DBB3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0020DBB0u); } /* indirect call */
    }

loc_0020DBB3: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0020DBC0
 * Original: 0x0020DBC0 - 0x0020DD28 (360 bytes, 119 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0020DBC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
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

loc_0020DBC0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x70);
    MEM32(esi + 0x60) = eax;
    ecx = MEM32(esi + 0x74);
    MEM32(esi + 0x64) = ecx;
    edx = MEM32(esi + 0x78);
    MEM32(esi + 0x68) = edx;
    eax = MEM32(esi + 0x7C);
    MEM32(esi + 0x6C) = eax;
    fp_push(MEMF(ebx)); /* fld float */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    PUSH32(esp, edi);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x40)); /* fmul dword ptr [esi + 0x40] */
    edi = esi + 0x30;
    PUSH32(esp, edi);
    ecx = esp + 0x14;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x70)); /* fadd dword ptr [esi + 0x70] */
    PUSH32(esp, ecx);
    ecx = esp + 0x28;
    MEM32(esp + 0x24) = 0;
    MEMF(esi + 0x70) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x44)); /* fmul dword ptr [esi + 0x44] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x74)); /* fadd dword ptr [esi + 0x74] */
    MEMF(esi + 0x74) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x48)); /* fmul dword ptr [esi + 0x48] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x78)); /* fadd dword ptr [esi + 0x78] */
    MEMF(esi + 0x78) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x4C)); /* fmul dword ptr [esi + 0x4c] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x7C)); /* fadd dword ptr [esi + 0x7c] */
    MEMF(esi + 0x7C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x58)); /* fld float */
    fp_push(MEMF(esi + 0x54)); /* fld float */
    fp_push(MEMF(esi + 0x50)); /* fld float */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 4) & 7]); /* fmul st(4) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    g_fp_stack[(g_fp_top + 3) & 7] = fp_top(); fp_pop(); /* fstp st(3) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0xC)); /* fmul dword ptr [esi + 0xc] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx)); /* fmul dword ptr [ebx] */
    MEMF(esi + 0x6C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x50)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x496B98)); /* fmul dword ptr [0x496b98] */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x54)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x496B98)); /* fmul dword ptr [0x496b98] */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x58)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x496B98)); /* fmul dword ptr [0x496b98] */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020DC7Fu); RECOMP_ABI_CALL(0x0020DAC0u, sub_0020DAC0); /* call 0x0020DAC0 */

loc_0020DC7F: ;
    fp_push(MEMF(ebx)); /* fld float */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edi)); /* fadd dword ptr [edi] */
    MEMF(edi) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edi + 4)); /* fadd dword ptr [edi + 4] */
    MEMF(edi + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edi + 8)); /* fadd dword ptr [edi + 8] */
    MEMF(edi + 8) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = edi;
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edi + 0xC)); /* fadd dword ptr [edi + 0xc] */
    MEMF(edi + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020DCB8u); RECOMP_ABI_CALL(0x001605D0u, sub_001605D0); /* call 0x001605D0 */

loc_0020DCB8: ;
    PUSH32(esp, edi);
    ecx = esi + 0x80;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020DCC4u); RECOMP_ABI_CALL(0x002A7610u, sub_002A7610); /* call 0x002A7610 */

loc_0020DCC4: ;
    edx = esi + 0x20;
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    ecx = esp + 0x28;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020DCD2u); RECOMP_ABI_CALL(0x001634D0u, sub_001634D0); /* call 0x001634D0 */

loc_0020DCD2: ;
    fp_push(MEMF(esi + 0x70)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x20)); /* fsub dword ptr [esp + 0x20] */
    POP32(esp, edi);
    fp_push(MEMF(esi + 0x74)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x20)); /* fsub dword ptr [esp + 0x20] */
    fp_push(MEMF(esi + 0x78)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x24)); /* fsub dword ptr [esp + 0x24] */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x14);
    fp_push(MEMF(esi + 0x7C)); /* fld float */
    MEM32(esi + 0xB8) = eax;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x28)); /* fsub dword ptr [esp + 0x28] */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x18);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEM32(esi + 0xBC) = ecx;
    MEMF(esi + 0xB0) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esi + 0xB4) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esi + 0x7C) = 0x3F800000;
    POP32(esp, esi);
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
 * sub_0020DD30
 * Original: 0x0020DD30 - 0x0020DEA0 (368 bytes, 121 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0020DD30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
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

loc_0020DD30: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x70);
    MEM32(esi + 0x60) = eax;
    ecx = MEM32(esi + 0x74);
    MEM32(esi + 0x64) = ecx;
    edx = MEM32(esi + 0x78);
    MEM32(esi + 0x68) = edx;
    eax = MEM32(esi + 0x7C);
    MEM32(esi + 0x6C) = eax;
    fp_push(MEMF(ebx)); /* fld float */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    PUSH32(esp, edi);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x40)); /* fmul dword ptr [esi + 0x40] */
    edi = esi + 0x30;
    PUSH32(esp, edi);
    ecx = esp + 0x14;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x70)); /* fadd dword ptr [esi + 0x70] */
    PUSH32(esp, ecx);
    ecx = esp + 0x28;
    MEM32(esp + 0x24) = 0;
    MEMF(esi + 0x70) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x44)); /* fmul dword ptr [esi + 0x44] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x74)); /* fadd dword ptr [esi + 0x74] */
    MEMF(esi + 0x74) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x48)); /* fmul dword ptr [esi + 0x48] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x78)); /* fadd dword ptr [esi + 0x78] */
    MEMF(esi + 0x78) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x4C)); /* fmul dword ptr [esi + 0x4c] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x7C)); /* fadd dword ptr [esi + 0x7c] */
    MEMF(esi + 0x7C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x58)); /* fld float */
    fp_push(MEMF(esi + 0x54)); /* fld float */
    fp_push(MEMF(esi + 0x50)); /* fld float */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 4) & 7]); /* fmul st(4) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    g_fp_stack[(g_fp_top + 3) & 7] = fp_top(); fp_pop(); /* fstp st(3) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0xC)); /* fmul dword ptr [esi + 0xc] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx)); /* fmul dword ptr [ebx] */
    MEMF(esi + 0x6C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x50)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x496B98)); /* fmul dword ptr [0x496b98] */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x54)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x496B98)); /* fmul dword ptr [0x496b98] */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x58)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x496B98)); /* fmul dword ptr [0x496b98] */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020DDEFu); RECOMP_ABI_CALL(0x0020DAC0u, sub_0020DAC0); /* call 0x0020DAC0 */

loc_0020DDEF: ;
    fp_push(MEMF(ebx)); /* fld float */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edi)); /* fadd dword ptr [edi] */
    MEMF(edi) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edi + 4)); /* fadd dword ptr [edi + 4] */
    MEMF(edi + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edi + 8)); /* fadd dword ptr [edi + 8] */
    MEMF(edi + 8) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = edi;
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edi + 0xC)); /* fadd dword ptr [edi + 0xc] */
    MEMF(edi + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020DE28u); RECOMP_ABI_CALL(0x001605D0u, sub_001605D0); /* call 0x001605D0 */

loc_0020DE28: ;
    PUSH32(esp, edi);
    ecx = esi + 0x80;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020DE34u); RECOMP_ABI_CALL(0x002A7610u, sub_002A7610); /* call 0x002A7610 */

loc_0020DE34: ;
    edx = esi + 0x20;
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    ecx = esp + 0x28;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020DE42u); RECOMP_ABI_CALL(0x001634D0u, sub_001634D0); /* call 0x001634D0 */

loc_0020DE42: ;
    fp_push(MEMF(esi + 0x70)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x20)); /* fsub dword ptr [esp + 0x20] */
    POP32(esp, edi);
    fp_push(MEMF(esi + 0x74)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x20)); /* fsub dword ptr [esp + 0x20] */
    fp_push(MEMF(esi + 0x78)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x24)); /* fsub dword ptr [esp + 0x24] */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x14);
    fp_push(MEMF(esi + 0x7C)); /* fld float */
    MEM32(esi + 0xB8) = eax;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x28)); /* fsub dword ptr [esp + 0x28] */
    eax = MEM32(ebp + 0x10);
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x80;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x18);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEM32(esi + 0xBC) = ecx;
    MEMF(esi + 0xB0) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esi + 0xB4) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esi + 0x7C) = 0x3F800000;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0020DEA0
 * Original: 0x0020DEA0 - 0x0020E008 (360 bytes, 119 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0020DEA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
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

loc_0020DEA0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x70);
    MEM32(esi + 0x60) = eax;
    ecx = MEM32(esi + 0x74);
    MEM32(esi + 0x64) = ecx;
    edx = MEM32(esi + 0x78);
    MEM32(esi + 0x68) = edx;
    eax = MEM32(esi + 0x7C);
    MEM32(esi + 0x6C) = eax;
    fp_push(MEMF(ebx)); /* fld float */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    PUSH32(esp, edi);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x40)); /* fmul dword ptr [esi + 0x40] */
    edi = esi + 0x30;
    PUSH32(esp, edi);
    ecx = esp + 0x14;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x70)); /* fadd dword ptr [esi + 0x70] */
    PUSH32(esp, ecx);
    ecx = esp + 0x28;
    MEM32(esp + 0x24) = 0;
    MEMF(esi + 0x70) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x44)); /* fmul dword ptr [esi + 0x44] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x74)); /* fadd dword ptr [esi + 0x74] */
    MEMF(esi + 0x74) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x48)); /* fmul dword ptr [esi + 0x48] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x78)); /* fadd dword ptr [esi + 0x78] */
    MEMF(esi + 0x78) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x4C)); /* fmul dword ptr [esi + 0x4c] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x7C)); /* fadd dword ptr [esi + 0x7c] */
    MEMF(esi + 0x7C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x58)); /* fld float */
    fp_push(MEMF(esi + 0x54)); /* fld float */
    fp_push(MEMF(esi + 0x50)); /* fld float */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 4) & 7]); /* fmul st(4) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    g_fp_stack[(g_fp_top + 3) & 7] = fp_top(); fp_pop(); /* fstp st(3) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0xC)); /* fmul dword ptr [esi + 0xc] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx)); /* fmul dword ptr [ebx] */
    MEMF(esi + 0x6C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x50)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x496B98)); /* fmul dword ptr [0x496b98] */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x54)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x496B98)); /* fmul dword ptr [0x496b98] */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x58)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x496B98)); /* fmul dword ptr [0x496b98] */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020DF5Fu); RECOMP_ABI_CALL(0x0020DAC0u, sub_0020DAC0); /* call 0x0020DAC0 */

loc_0020DF5F: ;
    fp_push(MEMF(ebx)); /* fld float */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edi)); /* fadd dword ptr [edi] */
    MEMF(edi) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edi + 4)); /* fadd dword ptr [edi + 4] */
    MEMF(edi + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edi + 8)); /* fadd dword ptr [edi + 8] */
    MEMF(edi + 8) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = edi;
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edi + 0xC)); /* fadd dword ptr [edi + 0xc] */
    MEMF(edi + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020DF98u); RECOMP_ABI_CALL(0x001605D0u, sub_001605D0); /* call 0x001605D0 */

loc_0020DF98: ;
    PUSH32(esp, edi);
    ecx = esi + 0x80;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020DFA4u); RECOMP_ABI_CALL(0x002A7610u, sub_002A7610); /* call 0x002A7610 */

loc_0020DFA4: ;
    edx = esi + 0x20;
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    ecx = esp + 0x28;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020DFB2u); RECOMP_ABI_CALL(0x001634D0u, sub_001634D0); /* call 0x001634D0 */

loc_0020DFB2: ;
    fp_push(MEMF(esi + 0x70)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x20)); /* fsub dword ptr [esp + 0x20] */
    POP32(esp, edi);
    fp_push(MEMF(esi + 0x74)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x20)); /* fsub dword ptr [esp + 0x20] */
    fp_push(MEMF(esi + 0x78)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x24)); /* fsub dword ptr [esp + 0x24] */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x14);
    fp_push(MEMF(esi + 0x7C)); /* fld float */
    MEM32(esi + 0xB8) = eax;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x28)); /* fsub dword ptr [esp + 0x28] */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x18);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEM32(esi + 0xBC) = ecx;
    MEMF(esi + 0xB0) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esi + 0xB4) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esi + 0x7C) = 0x3F800000;
    POP32(esp, esi);
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
 * sub_0020DEFB
 * Original: 0x0020DEFB - 0x0020E008 (269 bytes, 85 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020DEFB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020DEFB: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x78)); /* fadd dword ptr [esi + 0x78] */
    MEMF(esi + 0x78) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x4C)); /* fmul dword ptr [esi + 0x4c] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x7C)); /* fadd dword ptr [esi + 0x7c] */
    MEMF(esi + 0x7C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x58)); /* fld float */
    fp_push(MEMF(esi + 0x54)); /* fld float */
    fp_push(MEMF(esi + 0x50)); /* fld float */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 4) & 7]); /* fmul st(4) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    g_fp_stack[(g_fp_top + 3) & 7] = fp_top(); fp_pop(); /* fstp st(3) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0xC)); /* fmul dword ptr [esi + 0xc] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx)); /* fmul dword ptr [ebx] */
    MEMF(esi + 0x6C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x50)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x496B98)); /* fmul dword ptr [0x496b98] */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x54)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x496B98)); /* fmul dword ptr [0x496b98] */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x58)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x496B98)); /* fmul dword ptr [0x496b98] */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0020DF5Fu); RECOMP_ABI_CALL(0x0020DAC0u, sub_0020DAC0); /* call 0x0020DAC0 */

loc_0020DF5F: ;
    fp_push(MEMF(ebx)); /* fld float */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edi)); /* fadd dword ptr [edi] */
    MEMF(edi) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edi + 4)); /* fadd dword ptr [edi + 4] */
    MEMF(edi + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edi + 8)); /* fadd dword ptr [edi + 8] */
    MEMF(edi + 8) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = edi;
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edi + 0xC)); /* fadd dword ptr [edi + 0xc] */
    MEMF(edi + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    PUSH32(esp, 0x0020DF98u); RECOMP_ABI_CALL(0x001605D0u, sub_001605D0); /* call 0x001605D0 */

loc_0020DF98: ;
    PUSH32(esp, edi);
    ecx = esi + 0x80;
    PUSH32(esp, 0x0020DFA4u); RECOMP_ABI_CALL(0x002A7610u, sub_002A7610); /* call 0x002A7610 */

loc_0020DFA4: ;
    edx = esi + 0x20;
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    ecx = esp + 0x28;
    PUSH32(esp, 0x0020DFB2u); RECOMP_ABI_CALL(0x001634D0u, sub_001634D0); /* call 0x001634D0 */

loc_0020DFB2: ;
    fp_push(MEMF(esi + 0x70)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x20)); /* fsub dword ptr [esp + 0x20] */
    POP32(esp, edi);
    fp_push(MEMF(esi + 0x74)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x20)); /* fsub dword ptr [esp + 0x20] */
    fp_push(MEMF(esi + 0x78)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x24)); /* fsub dword ptr [esp + 0x24] */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x14);
    fp_push(MEMF(esi + 0x7C)); /* fld float */
    MEM32(esi + 0xB8) = eax;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x28)); /* fsub dword ptr [esp + 0x28] */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x18);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEM32(esi + 0xBC) = ecx;
    MEMF(esi + 0xB0) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esi + 0xB4) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esi + 0x7C) = 0x3F800000;
    POP32(esp, esi);
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
 * sub_0020E010
 * Original: 0x0020E010 - 0x0020E048 (56 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020E010(void)
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

loc_0020E010: ;
    fp_push(MEMF(0x4964E8)); /* fld float */
    fp_push(MEMF(esp + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0020E02D; /* jp: parity */

loc_0020E023: ;
    MEM32(esp + 4) = 0;
    goto loc_0020E03B;

loc_0020E02D: ;
    fp_push(MEMF(0x496454)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(esp + 4)); /* fdiv dword ptr [esp + 4] */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */

loc_0020E03B: ;
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    MEM32(esp + 4) = edx;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x20)); return; /* indirect tail jmp */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0020E050
 * Original: 0x0020E050 - 0x0020E05A (10 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020E050(void)
{

loc_0020E050: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x2C) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0020E060
 * Original: 0x0020E060 - 0x0020E0B4 (84 bytes, 28 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020E060(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0020E060: ;
    PUSH32(esp, esi);
    esi = ecx;
    fp_push(MEMF(esi + 0x6C)); /* fld float */
    ecx = MEM32(esp + 8);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x4978B8)); /* fadd dword ptr [0x4978b8] */
    eax = esi + 0x20;
    PUSH32(esp, eax);
    MEMF(esi + 0x6C) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(ecx);
    fp_push(MEMF(esi + 0x2C)); /* fld float */
    MEM32(eax) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    edx = MEM32(ecx + 8);
    MEM32(eax + 8) = edx;
    ecx = MEM32(ecx + 0xC);
    MEM32(eax + 0xC) = ecx;
    MEMF(esi + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esi + 0x7C);
    eax = esi + 0x80;
    PUSH32(esp, eax);
    ecx = esi + 0x70;
    MEM32(esp + 0x10) = edx;
    PUSH32(esp, 0x0020E0A9u); RECOMP_ABI_CALL(0x002A7BC0u, sub_002A7BC0); /* call 0x002A7BC0 */

loc_0020E0A9: ;
    ecx = MEM32(esp + 8);
    MEM32(esi + 0x7C) = ecx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0020E0C0
 * Original: 0x0020E0C0 - 0x0020E12F (111 bytes, 34 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0020E0C0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0020E0C0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(eax);
    MEM32(esi + 0xB0) = ecx;
    edx = MEM32(eax + 4);
    MEM32(esi + 0xB4) = edx;
    ecx = MEM32(eax + 8);
    MEM32(esi + 0xB8) = ecx;
    edx = MEM32(eax + 0xC);
    PUSH32(esp, edi);
    eax = esi + 0x20;
    PUSH32(esp, eax);
    ecx = esi + 0x80;
    edi = esi + 0x70;
    PUSH32(esp, ecx);
    ecx = edi;
    MEM32(esi + 0xBC) = edx;
    PUSH32(esp, 0x0020E100u); RECOMP_ABI_CALL(0x002A7BC0u, sub_002A7BC0); /* call 0x002A7BC0 */

loc_0020E100: ;
    edx = MEM32(edi);
    MEM32(esi + 0x60) = edx;
    eax = MEM32(edi + 4);
    MEM32(esi + 0x64) = eax;
    ecx = MEM32(edi + 8);
    MEM32(esi + 0x68) = ecx;
    edx = MEM32(edi + 0xC);
    MEM32(esi + 0x6C) = edx;
    fp_push(MEMF(esi + 0x6C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x4978B8)); /* fadd dword ptr [0x4978b8] */
    POP32(esp, edi);
    MEMF(esi + 0x6C) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esi + 0x7C) = 0;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0020E130
 * Original: 0x0020E130 - 0x0020E1A8 (120 bytes, 37 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020E130(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0020E130: ;
    PUSH32(esp, esi);
    esi = ecx;
    fp_push(MEMF(esi + 0x6C)); /* fld float */
    ecx = MEM32(esp + 8);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x4978B8)); /* fadd dword ptr [0x4978b8] */
    eax = esi + 0x30;
    PUSH32(esp, edi);
    edi = esi + 0x80;
    MEMF(esi + 0x6C) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(ecx);
    MEM32(eax) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    edx = MEM32(ecx + 8);
    MEM32(eax + 8) = edx;
    ecx = MEM32(ecx + 0xC);
    MEM32(eax + 0xC) = ecx;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0020E16Bu); RECOMP_ABI_CALL(0x002A7610u, sub_002A7610); /* call 0x002A7610 */

loc_0020E16B: ;
    edx = MEM32(esi + 0xB0);
    MEM32(edi + 0x30) = edx;
    eax = MEM32(esi + 0xB4);
    MEM32(edi + 0x34) = eax;
    ecx = MEM32(esi + 0xB8);
    eax = esi + 0x20;
    MEM32(edi + 0x38) = ecx;
    edx = MEM32(esi + 0xBC);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = esi + 0x70;
    MEM32(edi + 0x3C) = edx;
    PUSH32(esp, 0x0020E19Cu); RECOMP_ABI_CALL(0x002A7BC0u, sub_002A7BC0); /* call 0x002A7BC0 */

loc_0020E19C: ;
    POP32(esp, edi);
    MEM32(esi + 0x7C) = 0;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0020E1B0
 * Original: 0x0020E1B0 - 0x0020E21F (111 bytes, 38 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020E1B0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0020E1B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    fp_push(MEMF(esi + 0x6C)); /* fld float */
    ecx = MEM32(esp + 0xC);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x4978B8)); /* fadd dword ptr [0x4978b8] */
    eax = esi + 0x30;
    PUSH32(esp, edi);
    edi = esi + 0x80;
    MEMF(esi + 0x6C) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(ecx);
    MEM32(eax) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    edx = MEM32(ecx + 8);
    MEM32(eax + 8) = edx;
    ecx = MEM32(ecx + 0xC);
    MEM32(eax + 0xC) = ecx;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0020E1EBu); RECOMP_ABI_CALL(0x002A7610u, sub_002A7610); /* call 0x002A7610 */

loc_0020E1EB: ;
    eax = MEM32(esp + 0xC);
    edx = MEM32(eax);
    MEM32(edi + 0x30) = edx;
    ecx = MEM32(eax + 4);
    MEM32(edi + 0x34) = ecx;
    edx = MEM32(eax + 8);
    ecx = esi + 0x20;
    PUSH32(esp, ecx);
    MEM32(edi + 0x38) = edx;
    eax = MEM32(eax + 0xC);
    PUSH32(esp, edi);
    ecx = esi + 0x70;
    MEM32(edi + 0x3C) = eax;
    PUSH32(esp, 0x0020E213u); RECOMP_ABI_CALL(0x002A7BC0u, sub_002A7BC0); /* call 0x002A7BC0 */

loc_0020E213: ;
    POP32(esp, edi);
    MEM32(esi + 0x7C) = 0;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0020E220
 * Original: 0x0020E220 - 0x0020E23E (30 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020E220(void)
{

loc_0020E220: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax);
    MEM32(ecx + 0x40) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 0x44) = edx;
    edx = MEM32(eax + 8);
    MEM32(ecx + 0x48) = edx;
    eax = MEM32(eax + 0xC);
    MEM32(ecx + 0x4C) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0020E240
 * Original: 0x0020E240 - 0x0020E25E (30 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020E240(void)
{

loc_0020E240: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax);
    MEM32(ecx + 0x50) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 0x54) = edx;
    edx = MEM32(eax + 8);
    MEM32(ecx + 0x58) = edx;
    eax = MEM32(eax + 0xC);
    MEM32(ecx + 0x5C) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0020E260
 * Original: 0x0020E260 - 0x0020E293 (51 bytes, 18 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0020E260(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0020E260: ;
    fp_push(MEMF(ecx + 0x2C)); /* fld float */
    eax = MEM32(esp + 4);
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax)); /* fmul dword ptr [eax] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0x40)); /* fadd dword ptr [ecx + 0x40] */
    MEMF(ecx + 0x40) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 4)); /* fmul dword ptr [eax + 4] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0x44)); /* fadd dword ptr [ecx + 0x44] */
    MEMF(ecx + 0x44) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 8)); /* fmul dword ptr [eax + 8] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0x48)); /* fadd dword ptr [ecx + 0x48] */
    MEMF(ecx + 0x48) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0xC)); /* fmul dword ptr [eax + 0xc] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0x4C)); /* fadd dword ptr [ecx + 0x4c] */
    MEMF(ecx + 0x4C) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0020E2A0
 * Original: 0x0020E2A0 - 0x0020E301 (97 bytes, 31 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020E2A0(void)
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

loc_0020E2A0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    PUSH32(esp, esi);
    esi = ecx;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x7C)); /* fmul dword ptr [esi + 0x7c] */
    eax = MEM32(esi);
    ecx = esp + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    fp_top() = -fp_top(); /* fchs */
    ecx = esi;
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x496454)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(esp + 8)); /* fdiv dword ptr [esp + 8] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0020E2CDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0020E2CAu); } /* indirect call */
    }

loc_0020E2CD: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x14)); /* fmul dword ptr [esp + 0x14] */
    edx = MEM32(esi);
    eax = esp + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x496454)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(esp + 8)); /* fdiv dword ptr [esp + 8] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0020E2F3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0020E2F0u); } /* indirect call */
    }

loc_0020E2F3: ;
    ecx = MEM32(esp + 0x10);
    MEM32(esi + 0x7C) = ecx;
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0020E310
 * Original: 0x0020E310 - 0x0020E3A1 (145 bytes, 45 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020E310(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020E310: ;
    edx = MEM32(ecx + 0x30);
    eax = MEM32(esp + 4);
    MEM32(eax + 0x30) = edx;
    edx = MEM32(ecx + 0x34);
    MEM32(eax + 0x34) = edx;
    edx = MEM32(ecx + 0x38);
    MEM32(eax + 0x38) = edx;
    edx = MEM32(ecx + 0x3C);
    MEM32(eax + 0x3C) = edx;
    edx = MEM32(ecx + 0x40);
    MEM32(eax + 0x40) = edx;
    edx = MEM32(ecx + 0x44);
    MEM32(eax + 0x44) = edx;
    edx = MEM32(ecx + 0x48);
    MEM32(eax + 0x48) = edx;
    edx = MEM32(ecx + 0x4C);
    MEM32(eax + 0x4C) = edx;
    edx = MEM32(ecx + 0x50);
    MEM32(eax + 0x50) = edx;
    edx = MEM32(ecx + 0x54);
    MEM32(eax + 0x54) = edx;
    edx = MEM32(ecx + 0x58);
    MEM32(eax + 0x58) = edx;
    edx = MEM32(ecx + 0x5C);
    MEM32(eax + 0x5C) = edx;
    edx = MEM32(ecx + 0x60);
    MEM32(eax + 0x60) = edx;
    edx = MEM32(ecx + 0x64);
    MEM32(eax + 0x64) = edx;
    edx = MEM32(ecx + 0x68);
    MEM32(eax + 0x68) = edx;
    edx = MEM32(ecx + 0x6C);
    MEM32(eax + 0x6C) = edx;
    edx = MEM32(ecx + 0x70);
    MEM32(eax + 0x70) = edx;
    edx = MEM32(ecx + 0x74);
    MEM32(eax + 0x74) = edx;
    edx = MEM32(ecx + 0x78);
    MEM32(eax + 0x78) = edx;
    edx = MEM32(ecx + 0x7C);
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x80;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 4) = ecx;
    MEM32(eax + 0x7C) = edx;
    ecx = eax + 0x80;
    g_seh_ebp = ebp; sub_00161270(); return; /* tail jmp 0x00161270 */

}

/**
 * sub_0020E3B0
 * Original: 0x0020E3B0 - 0x0020E3F6 (70 bytes, 25 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020E3B0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0020E3B0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = ecx;
    fp_push(MEMF(esi + 0x6C)); /* fld float */
    PUSH32(esp, edi);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x4978B8)); /* fadd dword ptr [0x4978b8] */
    edi = esi + 0x80;
    PUSH32(esp, ebx);
    ecx = edi;
    MEMF(esi + 0x6C) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0020E3D3u); RECOMP_ABI_CALL(0x00161270u, sub_00161270); /* call 0x00161270 */

loc_0020E3D3: ;
    PUSH32(esp, ebx);
    ecx = esi + 0x30;
    PUSH32(esp, 0x0020E3DCu); RECOMP_ABI_CALL(0x002A77C0u, sub_002A77C0); /* call 0x002A77C0 */

loc_0020E3DC: ;
    eax = esi + 0x20;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = esi + 0x70;
    PUSH32(esp, 0x0020E3E9u); RECOMP_ABI_CALL(0x002A7BC0u, sub_002A7BC0); /* call 0x002A7BC0 */

loc_0020E3E9: ;
    POP32(esp, edi);
    MEM32(esi + 0x7C) = 0;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0020E400
 * Original: 0x0020E400 - 0x0020E48C (140 bytes, 50 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0020E400(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
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

loc_0020E400: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 8);
    fp_push(MEMF(eax)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + 0x70)); /* fsub dword ptr [ecx + 0x70] */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + 0x74)); /* fsub dword ptr [ecx + 0x74] */
    fp_push(MEMF(eax + 8)); /* fld float */
    eax = MEM32(ebp + 0xC);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + 0x78)); /* fsub dword ptr [ecx + 0x78] */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x58)); /* fmul dword ptr [ecx + 0x58] */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x50)); /* fmul dword ptr [ecx + 0x50] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 8);
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x50)); /* fmul dword ptr [ecx + 0x50] */
    { double _t = fp_top(); fp_top() = g_fp_stack[(g_fp_top + 3) & 7]; g_fp_stack[(g_fp_top + 3) & 7] = _t; } /* fxch st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x54)); /* fmul dword ptr [ecx + 0x54] */
    g_fp_stack[(g_fp_top + 3) & 7] = RECOMP_FP_PC(g_fp_stack[(g_fp_top + 3) & 7] - fp_top()); fp_pop(); /* fsubp st(3) */
    { double _t = fp_top(); fp_top() = g_fp_stack[(g_fp_top + 2) & 7]; g_fp_stack[(g_fp_top + 2) & 7] = _t; } /* fxch st(2) */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x54)); /* fmul dword ptr [ecx + 0x54] */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x58)); /* fmul dword ptr [ecx + 0x58] */
    MEM32(eax + 4) = edx;
    edx = MEM32(esp + 0xC);
    MEM32(eax + 8) = edx;
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    MEM32(eax + 0xC) = 0;
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0x40)); /* fadd dword ptr [ecx + 0x40] */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0x44)); /* fadd dword ptr [ecx + 0x44] */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0x48)); /* fadd dword ptr [ecx + 0x48] */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(ecx + 0x4C);
    MEM32(eax + 0xC) = ecx;
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0020E490
 * Original: 0x0020E490 - 0x0020E494 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020E490(void)
{

loc_0020E490: ;
    eax = ecx + 0x40;
    esp += 4; return; /* ret */

}

/**
 * sub_0020E4A0
 * Original: 0x0020E4A0 - 0x0020E4A4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020E4A0(void)
{

loc_0020E4A0: ;
    eax = ecx + 0x50;
    esp += 4; return; /* ret */

}

/**
 * sub_0020E4B0
 * Original: 0x0020E4B0 - 0x0020E4B6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020E4B0(void)
{

loc_0020E4B0: ;
    eax = 0x80;
    esp += 4; return; /* ret */

}

/**
 * sub_0020E4C0
 * Original: 0x0020E4C0 - 0x0020E4C6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020E4C0(void)
{

loc_0020E4C0: ;
    eax = 2;
    esp += 4; return; /* ret */

}

/**
 * sub_0020E4D0
 * Original: 0x0020E4D0 - 0x0020E4E9 (25 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020E4D0(void)
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

loc_0020E4D0: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 8] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0020E4E4; /* jne: not equal / not zero */

loc_0020E4DF: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    esp += 4; return; /* ret */

loc_0020E4E4: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0020E4F0
 * Original: 0x0020E4F0 - 0x0020E509 (25 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020E4F0(void)
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

loc_0020E4F0: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 8] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0020E504; /* jp: parity */

loc_0020E4FF: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    esp += 4; return; /* ret */

loc_0020E504: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0020E510
 * Original: 0x0020E510 - 0x0020E54D (61 bytes, 20 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0020E510(void)
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

loc_0020E510: ;
    fp_push(MEMF(0x496454)); /* fld float */
    eax = MEM32(esp + 4);
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(ecx + 0x10)); /* fdiv dword ptr [ecx + 0x10] */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 4) = ecx;
    MEM32(eax) = ecx;
    MEM32(eax + 0x1C) = ecx;
    MEM32(eax + 0x18) = ecx;
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x2C) = ecx;
    MEM32(eax + 0x28) = ecx;
    MEM32(eax + 0x24) = ecx;
    MEM32(eax + 0x20) = ecx;
    MEMF(eax) = (float)fp_top(); /* fst */
    MEMF(eax + 0x14) = (float)fp_top(); /* fst */
    MEMF(eax + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0020E550
 * Original: 0x0020E550 - 0x0020E58D (61 bytes, 20 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0020E550(void)
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

loc_0020E550: ;
    fp_push(MEMF(0x496454)); /* fld float */
    eax = MEM32(esp + 4);
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(ecx + 0x10)); /* fdiv dword ptr [ecx + 0x10] */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 4) = ecx;
    MEM32(eax) = ecx;
    MEM32(eax + 0x1C) = ecx;
    MEM32(eax + 0x18) = ecx;
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x2C) = ecx;
    MEM32(eax + 0x28) = ecx;
    MEM32(eax + 0x24) = ecx;
    MEM32(eax + 0x20) = ecx;
    MEMF(eax) = (float)fp_top(); /* fst */
    MEMF(eax + 0x14) = (float)fp_top(); /* fst */
    MEMF(eax + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0020E590
 * Original: 0x0020E590 - 0x0020E5ED (93 bytes, 30 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0020E590(void)
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

loc_0020E590: ;
    edx = MEM32(esp + 4);
    fp_push(MEMF(edx + 0x14)); /* fld float */
    fp_push(MEMF(edx)); /* fld float */
    MEMF(esp + 4) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0020E5AC; /* jne: not equal / not zero */

loc_0020E5A6: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 4)); /* fld float */

loc_0020E5AC: ;
    eax = MEM32(edx + 0x28);
    MEM32(esp + 4) = eax;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [esp + 4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0020E5C4; /* je: equal / zero */

loc_0020E5BE: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 4)); /* fld float */

loc_0020E5C4: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x4964E8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x4964e8] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0020E5E1; /* jne: not equal / not zero */

loc_0020E5D1: ;
    fp_push(MEMF(0x496454)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / fp_st1()); /* fdiv st(1) */
    MEMF(ecx + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    esp += 8; return; /* ret 4 */

loc_0020E5E1: ;
    MEM32(ecx + 0x10) = 0;
    fp_pop(); /* fstp st(0) */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0020E5F0
 * Original: 0x0020E5F0 - 0x0020E630 (64 bytes, 22 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0020E5F0(void)
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

loc_0020E5F0: ;
    edx = MEM32(esp + 4);
    fp_push(MEMF(edx + 0x14)); /* fld float */
    fp_push(MEMF(edx)); /* fld float */
    MEMF(esp + 4) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0020E60C; /* jp: parity */

loc_0020E606: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 4)); /* fld float */

loc_0020E60C: ;
    eax = MEM32(edx + 0x28);
    MEM32(esp + 4) = eax;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [esp + 4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0020E624; /* jp: parity */

loc_0020E61E: ;
    MEMF(ecx + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 8; return; /* ret 4 */

loc_0020E624: ;
    edx = MEM32(esp + 4);
    fp_pop(); /* fstp st(0) */
    MEM32(ecx + 0x10) = edx;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0020E630
 * Original: 0x0020E630 - 0x0020E670 (64 bytes, 24 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020E630(void)
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

loc_0020E630: ;
    fp_push(MEMF(ecx + 0x10)); /* fld float */
    eax = MEM32(esp + 4);
    fp_push(MEMF(ecx + 0x10)); /* fld float */
    fp_push(MEMF(ecx + 0x10)); /* fld float */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 4) = ecx;
    MEM32(eax) = ecx;
    MEM32(eax + 0x1C) = ecx;
    MEM32(eax + 0x18) = ecx;
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x2C) = ecx;
    MEM32(eax + 0x28) = ecx;
    MEM32(eax + 0x24) = ecx;
    MEM32(eax + 0x20) = ecx;
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0020E670
 * Original: 0x0020E670 - 0x0020E6AD (61 bytes, 21 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0020E670(void)
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

loc_0020E670: ;
    fp_push(MEMF(ecx + 0x10)); /* fld float */
    eax = MEM32(esp + 4);
    fp_push(MEMF(ecx + 0x10)); /* fld float */
    fp_push(MEMF(ecx + 0x10)); /* fld float */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 4) = ecx;
    MEM32(eax) = ecx;
    MEM32(eax + 0x1C) = ecx;
    MEM32(eax + 0x18) = ecx;
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x2C) = ecx;
    MEM32(eax + 0x28) = ecx;
    MEM32(eax + 0x24) = ecx;
    MEM32(eax + 0x20) = ecx;
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(eax + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0020E6B0
 * Original: 0x0020E6B0 - 0x0020E6E3 (51 bytes, 18 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0020E6B0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0020E6B0: ;
    fp_push(MEMF(ecx + 0x10)); /* fld float */
    eax = MEM32(esp + 4);
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax)); /* fmul dword ptr [eax] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0x50)); /* fadd dword ptr [ecx + 0x50] */
    MEMF(ecx + 0x50) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 4)); /* fmul dword ptr [eax + 4] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0x54)); /* fadd dword ptr [ecx + 0x54] */
    MEMF(ecx + 0x54) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 8)); /* fmul dword ptr [eax + 8] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0x58)); /* fadd dword ptr [ecx + 0x58] */
    MEMF(ecx + 0x58) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0xC)); /* fmul dword ptr [eax + 0xc] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0x5C)); /* fadd dword ptr [ecx + 0x5c] */
    MEMF(ecx + 0x5C) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0020E6F0
 * Original: 0x0020E6F0 - 0x0020E732 (66 bytes, 14 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0020E6F0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0020E6F0: ;
    eax = MEM32(esp + 4);
    fp_push(MEMF(ecx + 0xC0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax)); /* fadd dword ptr [eax] */
    MEMF(ecx + 0xC0) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0xC4)); /* fadd dword ptr [ecx + 0xc4] */
    MEMF(ecx + 0xC4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0xC8)); /* fadd dword ptr [ecx + 0xc8] */
    MEMF(ecx + 0xC8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0xCC)); /* fadd dword ptr [ecx + 0xcc] */
    MEMF(ecx + 0xCC) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0020E740
 * Original: 0x0020E740 - 0x0020E78C (76 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0020E740(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0020E740: ;
    eax = MEM32(esp + 4);
    fp_push(MEMF(ecx + 0xD0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax)); /* fadd dword ptr [eax] */
    MEMF(ecx + 0xD0) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0xD4)); /* fadd dword ptr [ecx + 0xd4] */
    MEMF(ecx + 0xD4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0xD8)); /* fadd dword ptr [ecx + 0xd8] */
    MEMF(ecx + 0xD8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0xDC)); /* fadd dword ptr [ecx + 0xdc] */
    MEMF(ecx + 0xDC) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(ecx + 0xDC) = 0x3F800000;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0020E790
 * Original: 0x0020E790 - 0x0020E936 (422 bytes, 120 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020E790(void)
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

loc_0020E790: ;
    eax = MEM32(esp + 4);
    fp_push(MEMF(eax)); /* fld float */
    eax = MEM32(esp + 8);
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x2C)); /* fmul dword ptr [ecx + 0x2c] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0xC0)); /* fmul dword ptr [ecx + 0xc0] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0x40)); /* fadd dword ptr [ecx + 0x40] */
    MEMF(ecx + 0x40) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0xC4)); /* fmul dword ptr [ecx + 0xc4] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0x44)); /* fadd dword ptr [ecx + 0x44] */
    MEMF(ecx + 0x44) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0xC8)); /* fmul dword ptr [ecx + 0xc8] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0x48)); /* fadd dword ptr [ecx + 0x48] */
    MEMF(ecx + 0x48) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0xCC)); /* fmul dword ptr [ecx + 0xcc] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0x4C)); /* fadd dword ptr [ecx + 0x4c] */
    MEMF(ecx + 0x4C) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax)); /* fmul dword ptr [eax] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0x40)); /* fadd dword ptr [ecx + 0x40] */
    MEMF(ecx + 0x40) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 4)); /* fmul dword ptr [eax + 4] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0x44)); /* fadd dword ptr [ecx + 0x44] */
    MEMF(ecx + 0x44) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 8)); /* fmul dword ptr [eax + 8] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0x48)); /* fadd dword ptr [ecx + 0x48] */
    MEMF(ecx + 0x48) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0xC)); /* fmul dword ptr [eax + 0xc] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0x4C)); /* fadd dword ptr [ecx + 0x4c] */
    MEMF(ecx + 0x4C) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x14)); /* fmul dword ptr [ecx + 0x14] */
    fp_top() = RECOMP_FP_PC(MEMF(0x496454) - fp_top()); /* fsubr dword ptr [0x496454] */
    fp_push(MEMF(0x4964E8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0020E822; /* jne: not equal / not zero */

loc_0020E81A: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x4964E8)); /* fld float */

loc_0020E822: ;
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x40)); /* fmul dword ptr [ecx + 0x40] */
    MEMF(ecx + 0x40) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x44)); /* fmul dword ptr [ecx + 0x44] */
    MEMF(ecx + 0x44) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x48)); /* fmul dword ptr [ecx + 0x48] */
    MEMF(ecx + 0x48) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x4C)); /* fmul dword ptr [ecx + 0x4c] */
    MEMF(ecx + 0x4C) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(ecx + 0xCC) = eax;
    MEM32(ecx + 0xC8) = eax;
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    MEM32(ecx + 0xC4) = eax;
    MEM32(ecx + 0xC0) = eax;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x10)); /* fmul dword ptr [ecx + 0x10] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0xD0)); /* fmul dword ptr [ecx + 0xd0] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0x50)); /* fadd dword ptr [ecx + 0x50] */
    MEMF(ecx + 0x50) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0xD4)); /* fmul dword ptr [ecx + 0xd4] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0x54)); /* fadd dword ptr [ecx + 0x54] */
    MEMF(ecx + 0x54) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0xD8)); /* fmul dword ptr [ecx + 0xd8] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0x58)); /* fadd dword ptr [ecx + 0x58] */
    MEMF(ecx + 0x58) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0xDC)); /* fmul dword ptr [ecx + 0xdc] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0x5C)); /* fadd dword ptr [ecx + 0x5c] */
    MEMF(ecx + 0x5C) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(ecx + 0xDC) = eax;
    MEM32(ecx + 0xD8) = eax;
    MEM32(ecx + 0xD4) = eax;
    MEM32(ecx + 0xD0) = eax;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x18)); /* fmul dword ptr [ecx + 0x18] */
    fp_top() = RECOMP_FP_PC(MEMF(0x496454) - fp_top()); /* fsubr dword ptr [0x496454] */
    fp_push(MEMF(0x4964E8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0020E8CD; /* jne: not equal / not zero */

loc_0020E8C5: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x4964E8)); /* fld float */

loc_0020E8CD: ;
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x50)); /* fmul dword ptr [ecx + 0x50] */
    MEMF(ecx + 0x50) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x54)); /* fmul dword ptr [ecx + 0x54] */
    MEMF(ecx + 0x54) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x58)); /* fmul dword ptr [ecx + 0x58] */
    MEMF(ecx + 0x58) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x5C)); /* fmul dword ptr [ecx + 0x5c] */
    MEMF(ecx + 0x5C) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(ecx + 0x40);
    MEM32(ecx + 0xE0) = edx;
    eax = MEM32(ecx + 0x44);
    MEM32(ecx + 0xE4) = eax;
    edx = MEM32(ecx + 0x48);
    MEM32(ecx + 0xE8) = edx;
    eax = MEM32(ecx + 0x4C);
    MEM32(ecx + 0xEC) = eax;
    edx = MEM32(ecx + 0x50);
    MEM32(ecx + 0xF0) = edx;
    eax = MEM32(ecx + 0x54);
    MEM32(ecx + 0xF4) = eax;
    edx = MEM32(ecx + 0x58);
    MEM32(ecx + 0xF8) = edx;
    eax = MEM32(ecx + 0x5C);
    MEM32(ecx + 0xFC) = eax;
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0020E800
 * Original: 0x0020E800 - 0x0020E936 (310 bytes, 84 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020E800(void)
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

loc_0020E800: ;
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x14)); /* fmul dword ptr [ecx + 0x14] */
    fp_top() = RECOMP_FP_PC(MEMF(0x496454) - fp_top()); /* fsubr dword ptr [0x496454] */
    fp_push(MEMF(0x4964E8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0020E822; /* jne: not equal / not zero */

loc_0020E81A: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x4964E8)); /* fld float */

loc_0020E822: ;
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x40)); /* fmul dword ptr [ecx + 0x40] */
    MEMF(ecx + 0x40) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x44)); /* fmul dword ptr [ecx + 0x44] */
    MEMF(ecx + 0x44) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x48)); /* fmul dword ptr [ecx + 0x48] */
    MEMF(ecx + 0x48) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x4C)); /* fmul dword ptr [ecx + 0x4c] */
    MEMF(ecx + 0x4C) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(ecx + 0xCC) = eax;
    MEM32(ecx + 0xC8) = eax;
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    MEM32(ecx + 0xC4) = eax;
    MEM32(ecx + 0xC0) = eax;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x10)); /* fmul dword ptr [ecx + 0x10] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0xD0)); /* fmul dword ptr [ecx + 0xd0] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0x50)); /* fadd dword ptr [ecx + 0x50] */
    MEMF(ecx + 0x50) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0xD4)); /* fmul dword ptr [ecx + 0xd4] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0x54)); /* fadd dword ptr [ecx + 0x54] */
    MEMF(ecx + 0x54) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0xD8)); /* fmul dword ptr [ecx + 0xd8] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0x58)); /* fadd dword ptr [ecx + 0x58] */
    MEMF(ecx + 0x58) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0xDC)); /* fmul dword ptr [ecx + 0xdc] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0x5C)); /* fadd dword ptr [ecx + 0x5c] */
    MEMF(ecx + 0x5C) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(ecx + 0xDC) = eax;
    MEM32(ecx + 0xD8) = eax;
    MEM32(ecx + 0xD4) = eax;
    MEM32(ecx + 0xD0) = eax;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x18)); /* fmul dword ptr [ecx + 0x18] */
    fp_top() = RECOMP_FP_PC(MEMF(0x496454) - fp_top()); /* fsubr dword ptr [0x496454] */
    fp_push(MEMF(0x4964E8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0020E8CD; /* jne: not equal / not zero */

loc_0020E8C5: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x4964E8)); /* fld float */

loc_0020E8CD: ;
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x50)); /* fmul dword ptr [ecx + 0x50] */
    MEMF(ecx + 0x50) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x54)); /* fmul dword ptr [ecx + 0x54] */
    MEMF(ecx + 0x54) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x58)); /* fmul dword ptr [ecx + 0x58] */
    MEMF(ecx + 0x58) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x5C)); /* fmul dword ptr [ecx + 0x5c] */
    MEMF(ecx + 0x5C) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(ecx + 0x40);
    MEM32(ecx + 0xE0) = edx;
    eax = MEM32(ecx + 0x44);
    MEM32(ecx + 0xE4) = eax;
    edx = MEM32(ecx + 0x48);
    MEM32(ecx + 0xE8) = edx;
    eax = MEM32(ecx + 0x4C);
    MEM32(ecx + 0xEC) = eax;
    edx = MEM32(ecx + 0x50);
    MEM32(ecx + 0xF0) = edx;
    eax = MEM32(ecx + 0x54);
    MEM32(ecx + 0xF4) = eax;
    edx = MEM32(ecx + 0x58);
    MEM32(ecx + 0xF8) = edx;
    eax = MEM32(ecx + 0x5C);
    MEM32(ecx + 0xFC) = eax;
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0020E940
 * Original: 0x0020E940 - 0x0020EAE6 (422 bytes, 120 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020E940(void)
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

loc_0020E940: ;
    eax = MEM32(esp + 4);
    fp_push(MEMF(eax)); /* fld float */
    eax = MEM32(esp + 8);
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x2C)); /* fmul dword ptr [ecx + 0x2c] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0xC0)); /* fmul dword ptr [ecx + 0xc0] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0x40)); /* fadd dword ptr [ecx + 0x40] */
    MEMF(ecx + 0x40) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0xC4)); /* fmul dword ptr [ecx + 0xc4] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0x44)); /* fadd dword ptr [ecx + 0x44] */
    MEMF(ecx + 0x44) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0xC8)); /* fmul dword ptr [ecx + 0xc8] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0x48)); /* fadd dword ptr [ecx + 0x48] */
    MEMF(ecx + 0x48) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0xCC)); /* fmul dword ptr [ecx + 0xcc] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0x4C)); /* fadd dword ptr [ecx + 0x4c] */
    MEMF(ecx + 0x4C) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax)); /* fmul dword ptr [eax] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0x40)); /* fadd dword ptr [ecx + 0x40] */
    MEMF(ecx + 0x40) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 4)); /* fmul dword ptr [eax + 4] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0x44)); /* fadd dword ptr [ecx + 0x44] */
    MEMF(ecx + 0x44) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 8)); /* fmul dword ptr [eax + 8] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0x48)); /* fadd dword ptr [ecx + 0x48] */
    MEMF(ecx + 0x48) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0xC)); /* fmul dword ptr [eax + 0xc] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0x4C)); /* fadd dword ptr [ecx + 0x4c] */
    MEMF(ecx + 0x4C) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x14)); /* fmul dword ptr [ecx + 0x14] */
    fp_top() = RECOMP_FP_PC(MEMF(0x496454) - fp_top()); /* fsubr dword ptr [0x496454] */
    fp_push(MEMF(0x4964E8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0020E9D2; /* jne: not equal / not zero */

loc_0020E9CA: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x4964E8)); /* fld float */

loc_0020E9D2: ;
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x40)); /* fmul dword ptr [ecx + 0x40] */
    MEMF(ecx + 0x40) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x44)); /* fmul dword ptr [ecx + 0x44] */
    MEMF(ecx + 0x44) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x48)); /* fmul dword ptr [ecx + 0x48] */
    MEMF(ecx + 0x48) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x4C)); /* fmul dword ptr [ecx + 0x4c] */
    MEMF(ecx + 0x4C) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(ecx + 0xCC) = eax;
    MEM32(ecx + 0xC8) = eax;
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    MEM32(ecx + 0xC4) = eax;
    MEM32(ecx + 0xC0) = eax;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x10)); /* fmul dword ptr [ecx + 0x10] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0xD0)); /* fmul dword ptr [ecx + 0xd0] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0x50)); /* fadd dword ptr [ecx + 0x50] */
    MEMF(ecx + 0x50) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0xD4)); /* fmul dword ptr [ecx + 0xd4] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0x54)); /* fadd dword ptr [ecx + 0x54] */
    MEMF(ecx + 0x54) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0xD8)); /* fmul dword ptr [ecx + 0xd8] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0x58)); /* fadd dword ptr [ecx + 0x58] */
    MEMF(ecx + 0x58) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0xDC)); /* fmul dword ptr [ecx + 0xdc] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0x5C)); /* fadd dword ptr [ecx + 0x5c] */
    MEMF(ecx + 0x5C) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(ecx + 0xDC) = eax;
    MEM32(ecx + 0xD8) = eax;
    MEM32(ecx + 0xD4) = eax;
    MEM32(ecx + 0xD0) = eax;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x18)); /* fmul dword ptr [ecx + 0x18] */
    fp_top() = RECOMP_FP_PC(MEMF(0x496454) - fp_top()); /* fsubr dword ptr [0x496454] */
    fp_push(MEMF(0x4964E8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0020EA7D; /* jne: not equal / not zero */

loc_0020EA75: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x4964E8)); /* fld float */

loc_0020EA7D: ;
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x50)); /* fmul dword ptr [ecx + 0x50] */
    MEMF(ecx + 0x50) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x54)); /* fmul dword ptr [ecx + 0x54] */
    MEMF(ecx + 0x54) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x58)); /* fmul dword ptr [ecx + 0x58] */
    MEMF(ecx + 0x58) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x5C)); /* fmul dword ptr [ecx + 0x5c] */
    MEMF(ecx + 0x5C) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(ecx + 0x40);
    MEM32(ecx + 0xE0) = edx;
    eax = MEM32(ecx + 0x44);
    MEM32(ecx + 0xE4) = eax;
    edx = MEM32(ecx + 0x48);
    MEM32(ecx + 0xE8) = edx;
    eax = MEM32(ecx + 0x4C);
    MEM32(ecx + 0xEC) = eax;
    edx = MEM32(ecx + 0x50);
    MEM32(ecx + 0xF0) = edx;
    eax = MEM32(ecx + 0x54);
    MEM32(ecx + 0xF4) = eax;
    edx = MEM32(ecx + 0x58);
    MEM32(ecx + 0xF8) = edx;
    eax = MEM32(ecx + 0x5C);
    MEM32(ecx + 0xFC) = eax;
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0020EAF0
 * Original: 0x0020EAF0 - 0x0020ED37 (583 bytes, 173 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020EAF0(void)
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

loc_0020EAF0: ;
    eax = MEM32(esp + 4);
    fp_push(MEMF(eax)); /* fld float */
    eax = MEM32(esp + 8);
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x2C)); /* fmul dword ptr [ecx + 0x2c] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0xC0)); /* fmul dword ptr [ecx + 0xc0] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0x40)); /* fadd dword ptr [ecx + 0x40] */
    MEMF(ecx + 0x40) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0xC4)); /* fmul dword ptr [ecx + 0xc4] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0x44)); /* fadd dword ptr [ecx + 0x44] */
    MEMF(ecx + 0x44) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0xC8)); /* fmul dword ptr [ecx + 0xc8] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0x48)); /* fadd dword ptr [ecx + 0x48] */
    MEMF(ecx + 0x48) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0xCC)); /* fmul dword ptr [ecx + 0xcc] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0x4C)); /* fadd dword ptr [ecx + 0x4c] */
    MEMF(ecx + 0x4C) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax)); /* fmul dword ptr [eax] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0x40)); /* fadd dword ptr [ecx + 0x40] */
    MEMF(ecx + 0x40) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 4)); /* fmul dword ptr [eax + 4] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0x44)); /* fadd dword ptr [ecx + 0x44] */
    MEMF(ecx + 0x44) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 8)); /* fmul dword ptr [eax + 8] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0x48)); /* fadd dword ptr [ecx + 0x48] */
    MEMF(ecx + 0x48) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0xC)); /* fmul dword ptr [eax + 0xc] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0x4C)); /* fadd dword ptr [ecx + 0x4c] */
    MEMF(ecx + 0x4C) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x14)); /* fmul dword ptr [ecx + 0x14] */
    fp_top() = RECOMP_FP_PC(MEMF(0x496454) - fp_top()); /* fsubr dword ptr [0x496454] */
    fp_push(MEMF(0x4964E8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0020EB82; /* jne: not equal / not zero */

loc_0020EB7A: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x4964E8)); /* fld float */

loc_0020EB82: ;
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x40)); /* fmul dword ptr [ecx + 0x40] */
    MEMF(ecx + 0x40) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x44)); /* fmul dword ptr [ecx + 0x44] */
    MEMF(ecx + 0x44) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x48)); /* fmul dword ptr [ecx + 0x48] */
    MEMF(ecx + 0x48) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x4C)); /* fmul dword ptr [ecx + 0x4c] */
    MEMF(ecx + 0x4C) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(ecx + 0xCC) = edx;
    MEM32(ecx + 0xC8) = edx;
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    MEM32(ecx + 0xC4) = edx;
    MEM32(ecx + 0xC0) = edx;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x10)); /* fmul dword ptr [ecx + 0x10] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0xD0)); /* fmul dword ptr [ecx + 0xd0] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0x50)); /* fadd dword ptr [ecx + 0x50] */
    MEMF(ecx + 0x50) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0xD4)); /* fmul dword ptr [ecx + 0xd4] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0x54)); /* fadd dword ptr [ecx + 0x54] */
    MEMF(ecx + 0x54) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0xD8)); /* fmul dword ptr [ecx + 0xd8] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0x58)); /* fadd dword ptr [ecx + 0x58] */
    MEMF(ecx + 0x58) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0xDC)); /* fmul dword ptr [ecx + 0xdc] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0x5C)); /* fadd dword ptr [ecx + 0x5c] */
    MEMF(ecx + 0x5C) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(ecx + 0xDC) = edx;
    MEM32(ecx + 0xD8) = edx;
    MEM32(ecx + 0xD4) = edx;
    MEM32(ecx + 0xD0) = edx;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x18)); /* fmul dword ptr [ecx + 0x18] */
    fp_top() = RECOMP_FP_PC(MEMF(0x496454) - fp_top()); /* fsubr dword ptr [0x496454] */
    fp_push(MEMF(0x4964E8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0020EC2D; /* jne: not equal / not zero */

loc_0020EC25: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x4964E8)); /* fld float */

loc_0020EC2D: ;
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    PUSH32(esp, esi);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x50)); /* fmul dword ptr [ecx + 0x50] */
    MEMF(ecx + 0x50) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x54)); /* fmul dword ptr [ecx + 0x54] */
    MEMF(ecx + 0x54) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x58)); /* fmul dword ptr [ecx + 0x58] */
    MEMF(ecx + 0x58) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x5C)); /* fmul dword ptr [ecx + 0x5c] */
    MEMF(ecx + 0x5C) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(ecx + 0x40);
    MEM32(ecx + 0xE0) = eax;
    eax = MEM32(ecx + 0x44);
    MEM32(ecx + 0xE4) = eax;
    eax = MEM32(ecx + 0x48);
    MEM32(ecx + 0xE8) = eax;
    eax = MEM32(ecx + 0x4C);
    MEM32(ecx + 0xEC) = eax;
    eax = MEM32(ecx + 0x50);
    MEM32(ecx + 0xF0) = eax;
    eax = MEM32(ecx + 0x54);
    MEM32(ecx + 0xF4) = eax;
    eax = MEM32(ecx + 0x58);
    MEM32(ecx + 0xF8) = eax;
    eax = MEM32(ecx + 0x5C);
    MEM32(ecx + 0xFC) = eax;
    eax = MEM32(esp + 0x10);
    MEM8(eax) = 2;
    fp_push(MEMF(ecx + 0x10)); /* fld float */
    MEMF(eax + 0x30) = (float)fp_top(); /* fst */
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x80;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(eax + -76) = (float)fp_top(); /* fst */
    MEMF(eax + -72) = (float)fp_top(); /* fst */
    MEMF(eax + -68) = (float)fp_top(); fp_pop(); /* fstp */
    esi = MEM32(ecx + 0x2C);
    MEM32(eax + -68) = esi;
    esi = MEM32(ecx + 0x70);
    MEM32(eax + -64) = esi;
    esi = MEM32(ecx + 0x74);
    MEM32(eax + -60) = esi;
    esi = MEM32(ecx + 0x78);
    MEM32(eax + -56) = esi;
    esi = MEM32(ecx + 0x7C);
    MEM32(eax + -52) = esi;
    esi = MEM32(ecx + 0x50);
    MEM32(eax + -96) = esi;
    esi = MEM32(ecx + 0x54);
    MEM32(eax + -92) = esi;
    esi = MEM32(ecx + 0x58);
    MEM32(eax + -88) = esi;
    esi = MEM32(ecx + 0x5C);
    MEM32(eax + -84) = esi;
    esi = MEM32(ecx + 0x40);
    MEM32(eax + -112) = esi;
    esi = MEM32(ecx + 0x44);
    MEM32(eax + -108) = esi;
    esi = MEM32(ecx + 0x48);
    MEM32(eax + -104) = esi;
    ecx = MEM32(ecx + 0x4C);
    MEM32(eax + -100) = ecx;
    MEM32(eax + -36) = edx;
    MEM32(eax + -40) = edx;
    MEM32(eax + -44) = edx;
    MEM32(eax + -48) = edx;
    MEM32(eax + -20) = edx;
    MEM32(eax + -24) = edx;
    MEM32(eax + -28) = edx;
    MEM32(eax + -32) = edx;
    MEM32(eax + -4) = edx;
    MEM32(eax + -8) = edx;
    MEM32(eax + -12) = edx;
    MEM32(eax + -16) = edx;
    ecx = 0x3F800000;
    MEM32(eax + -48) = ecx;
    MEM32(eax + -28) = ecx;
    MEM32(eax + -8) = ecx;
    MEM8(eax + -116) = 1;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0020ED40
 * Original: 0x0020ED40 - 0x0020EDE9 (169 bytes, 63 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns float_sse
 * Frame: standard_frame
 */
void sub_0020ED40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
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

loc_0020ED40: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    fp_push(MEMF(ecx + 0x2C)); /* fld float */
    eax = MEM32(ebp + 8);
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    edx = MEM32(ebp + 0xC);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax)); /* fmul dword ptr [eax] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0x40)); /* fadd dword ptr [ecx + 0x40] */
    MEMF(ecx + 0x40) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 4)); /* fmul dword ptr [eax + 4] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0x44)); /* fadd dword ptr [ecx + 0x44] */
    MEMF(ecx + 0x44) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 8)); /* fmul dword ptr [eax + 8] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0x48)); /* fadd dword ptr [ecx + 0x48] */
    MEMF(ecx + 0x48) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0xC)); /* fmul dword ptr [eax + 0xc] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0x4C)); /* fadd dword ptr [ecx + 0x4c] */
    MEMF(ecx + 0x4C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edx)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + 0x70)); /* fsub dword ptr [ecx + 0x70] */
    fp_push(MEMF(edx + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + 0x74)); /* fsub dword ptr [ecx + 0x74] */
    fp_push(MEMF(edx + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + 0x78)); /* fsub dword ptr [ecx + 0x78] */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 8)); /* fmul dword ptr [eax + 8] */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 4)); /* fmul dword ptr [eax + 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax)); /* fmul dword ptr [eax] */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 8)); /* fmul dword ptr [eax + 8] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 4)); /* fmul dword ptr [eax + 4] */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax)); /* fmul dword ptr [eax] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    fp_push(MEMF(ecx + 0x10)); /* fld float */
    fp_push(MEMF(esp)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0x50)); /* fadd dword ptr [ecx + 0x50] */
    MEMF(ecx + 0x50) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0x54)); /* fadd dword ptr [ecx + 0x54] */
    MEMF(ecx + 0x54) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0x58)); /* fadd dword ptr [ecx + 0x58] */
    MEMF(ecx + 0x58) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x4964E8)); /* fmul dword ptr [0x4964e8] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0x5C)); /* fadd dword ptr [ecx + 0x5c] */
    MEMF(ecx + 0x5C) = (float)fp_top(); fp_pop(); /* fstp */
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0020EDF0
 * Original: 0x0020EDF0 - 0x0020EEB9 (201 bytes, 54 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0020EDF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
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

loc_0020EDF0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 8);
    fp_push(MEMF(eax)); /* fld float */
    edx = MEM32(ebp + 0xC);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0xC0)); /* fadd dword ptr [ecx + 0xc0] */
    MEMF(ecx + 0xC0) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0xC4)); /* fadd dword ptr [ecx + 0xc4] */
    MEMF(ecx + 0xC4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0xC8)); /* fadd dword ptr [ecx + 0xc8] */
    MEMF(ecx + 0xC8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0xCC)); /* fadd dword ptr [ecx + 0xcc] */
    MEMF(ecx + 0xCC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edx)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + 0x70)); /* fsub dword ptr [ecx + 0x70] */
    fp_push(MEMF(edx + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + 0x74)); /* fsub dword ptr [ecx + 0x74] */
    fp_push(MEMF(edx + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + 0x78)); /* fsub dword ptr [ecx + 0x78] */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 8)); /* fmul dword ptr [eax + 8] */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 4)); /* fmul dword ptr [eax + 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax)); /* fmul dword ptr [eax] */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 8)); /* fmul dword ptr [eax + 8] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 4)); /* fmul dword ptr [eax + 4] */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax)); /* fmul dword ptr [eax] */
    eax = MEM32(ecx + 0xDC);
    MEM32(ecx + 0xDC) = eax;
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    fp_push(MEMF(esp)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0xD0)); /* fadd dword ptr [ecx + 0xd0] */
    MEMF(ecx + 0xD0) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0xD4)); /* fadd dword ptr [ecx + 0xd4] */
    MEMF(ecx + 0xD4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0xD8)); /* fadd dword ptr [ecx + 0xd8] */
    MEMF(ecx + 0xD8) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(ecx + 0xDC) = 0x3F800000;
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0020EEC0
 * Original: 0x0020EEC0 - 0x0020F028 (360 bytes, 119 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0020EEC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
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

loc_0020EEC0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x70);
    MEM32(esi + 0x60) = eax;
    ecx = MEM32(esi + 0x74);
    MEM32(esi + 0x64) = ecx;
    edx = MEM32(esi + 0x78);
    MEM32(esi + 0x68) = edx;
    eax = MEM32(esi + 0x7C);
    MEM32(esi + 0x6C) = eax;
    fp_push(MEMF(ebx)); /* fld float */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    PUSH32(esp, edi);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x40)); /* fmul dword ptr [esi + 0x40] */
    edi = esi + 0x30;
    PUSH32(esp, edi);
    ecx = esp + 0x14;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x70)); /* fadd dword ptr [esi + 0x70] */
    PUSH32(esp, ecx);
    ecx = esp + 0x28;
    MEM32(esp + 0x24) = 0;
    MEMF(esi + 0x70) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x44)); /* fmul dword ptr [esi + 0x44] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x74)); /* fadd dword ptr [esi + 0x74] */
    MEMF(esi + 0x74) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x48)); /* fmul dword ptr [esi + 0x48] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x78)); /* fadd dword ptr [esi + 0x78] */
    MEMF(esi + 0x78) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x4C)); /* fmul dword ptr [esi + 0x4c] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x7C)); /* fadd dword ptr [esi + 0x7c] */
    MEMF(esi + 0x7C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x58)); /* fld float */
    fp_push(MEMF(esi + 0x54)); /* fld float */
    fp_push(MEMF(esi + 0x50)); /* fld float */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 4) & 7]); /* fmul st(4) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    g_fp_stack[(g_fp_top + 3) & 7] = fp_top(); fp_pop(); /* fstp st(3) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0xC)); /* fmul dword ptr [esi + 0xc] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx)); /* fmul dword ptr [ebx] */
    MEMF(esi + 0x6C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x50)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x496B98)); /* fmul dword ptr [0x496b98] */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x54)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x496B98)); /* fmul dword ptr [0x496b98] */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x58)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x496B98)); /* fmul dword ptr [0x496b98] */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020EF7Fu); RECOMP_ABI_CALL(0x0020DAC0u, sub_0020DAC0); /* call 0x0020DAC0 */

loc_0020EF7F: ;
    fp_push(MEMF(ebx)); /* fld float */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edi)); /* fadd dword ptr [edi] */
    MEMF(edi) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edi + 4)); /* fadd dword ptr [edi + 4] */
    MEMF(edi + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edi + 8)); /* fadd dword ptr [edi + 8] */
    MEMF(edi + 8) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = edi;
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edi + 0xC)); /* fadd dword ptr [edi + 0xc] */
    MEMF(edi + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020EFB8u); RECOMP_ABI_CALL(0x001605D0u, sub_001605D0); /* call 0x001605D0 */

loc_0020EFB8: ;
    PUSH32(esp, edi);
    ecx = esi + 0x80;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020EFC4u); RECOMP_ABI_CALL(0x002A7610u, sub_002A7610); /* call 0x002A7610 */

loc_0020EFC4: ;
    edx = esi + 0x20;
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    ecx = esp + 0x28;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020EFD2u); RECOMP_ABI_CALL(0x001634D0u, sub_001634D0); /* call 0x001634D0 */

loc_0020EFD2: ;
    fp_push(MEMF(esi + 0x70)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x20)); /* fsub dword ptr [esp + 0x20] */
    POP32(esp, edi);
    fp_push(MEMF(esi + 0x74)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x20)); /* fsub dword ptr [esp + 0x20] */
    fp_push(MEMF(esi + 0x78)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x24)); /* fsub dword ptr [esp + 0x24] */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x14);
    fp_push(MEMF(esi + 0x7C)); /* fld float */
    MEM32(esi + 0xB8) = eax;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x28)); /* fsub dword ptr [esp + 0x28] */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x18);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEM32(esi + 0xBC) = ecx;
    MEMF(esi + 0xB0) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esi + 0xB4) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esi + 0x7C) = 0x3F800000;
    POP32(esp, esi);
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
 * sub_0020F030
 * Original: 0x0020F030 - 0x0020F198 (360 bytes, 119 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0020F030(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
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

loc_0020F030: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x70);
    MEM32(esi + 0x60) = eax;
    ecx = MEM32(esi + 0x74);
    MEM32(esi + 0x64) = ecx;
    edx = MEM32(esi + 0x78);
    MEM32(esi + 0x68) = edx;
    eax = MEM32(esi + 0x7C);
    MEM32(esi + 0x6C) = eax;
    fp_push(MEMF(ebx)); /* fld float */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    PUSH32(esp, edi);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x40)); /* fmul dword ptr [esi + 0x40] */
    edi = esi + 0x30;
    PUSH32(esp, edi);
    ecx = esp + 0x14;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x70)); /* fadd dword ptr [esi + 0x70] */
    PUSH32(esp, ecx);
    ecx = esp + 0x28;
    MEM32(esp + 0x24) = 0;
    MEMF(esi + 0x70) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x44)); /* fmul dword ptr [esi + 0x44] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x74)); /* fadd dword ptr [esi + 0x74] */
    MEMF(esi + 0x74) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x48)); /* fmul dword ptr [esi + 0x48] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x78)); /* fadd dword ptr [esi + 0x78] */
    MEMF(esi + 0x78) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x4C)); /* fmul dword ptr [esi + 0x4c] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x7C)); /* fadd dword ptr [esi + 0x7c] */
    MEMF(esi + 0x7C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x58)); /* fld float */
    fp_push(MEMF(esi + 0x54)); /* fld float */
    fp_push(MEMF(esi + 0x50)); /* fld float */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 4) & 7]); /* fmul st(4) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    g_fp_stack[(g_fp_top + 3) & 7] = fp_top(); fp_pop(); /* fstp st(3) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0xC)); /* fmul dword ptr [esi + 0xc] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx)); /* fmul dword ptr [ebx] */
    MEMF(esi + 0x6C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x50)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x496B98)); /* fmul dword ptr [0x496b98] */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x54)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x496B98)); /* fmul dword ptr [0x496b98] */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x58)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x496B98)); /* fmul dword ptr [0x496b98] */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020F0EFu); RECOMP_ABI_CALL(0x0020DAC0u, sub_0020DAC0); /* call 0x0020DAC0 */

loc_0020F0EF: ;
    fp_push(MEMF(ebx)); /* fld float */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edi)); /* fadd dword ptr [edi] */
    MEMF(edi) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edi + 4)); /* fadd dword ptr [edi + 4] */
    MEMF(edi + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edi + 8)); /* fadd dword ptr [edi + 8] */
    MEMF(edi + 8) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = edi;
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edi + 0xC)); /* fadd dword ptr [edi + 0xc] */
    MEMF(edi + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020F128u); RECOMP_ABI_CALL(0x001605D0u, sub_001605D0); /* call 0x001605D0 */

loc_0020F128: ;
    PUSH32(esp, edi);
    ecx = esi + 0x80;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020F134u); RECOMP_ABI_CALL(0x002A7610u, sub_002A7610); /* call 0x002A7610 */

loc_0020F134: ;
    edx = esi + 0x20;
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    ecx = esp + 0x28;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020F142u); RECOMP_ABI_CALL(0x001634D0u, sub_001634D0); /* call 0x001634D0 */

loc_0020F142: ;
    fp_push(MEMF(esi + 0x70)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x20)); /* fsub dword ptr [esp + 0x20] */
    POP32(esp, edi);
    fp_push(MEMF(esi + 0x74)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x20)); /* fsub dword ptr [esp + 0x20] */
    fp_push(MEMF(esi + 0x78)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x24)); /* fsub dword ptr [esp + 0x24] */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x14);
    fp_push(MEMF(esi + 0x7C)); /* fld float */
    MEM32(esi + 0xB8) = eax;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x28)); /* fsub dword ptr [esp + 0x28] */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x18);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEM32(esi + 0xBC) = ecx;
    MEMF(esi + 0xB0) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esi + 0xB4) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esi + 0x7C) = 0x3F800000;
    POP32(esp, esi);
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
 * sub_0020F1A0
 * Original: 0x0020F1A0 - 0x0020F3DC (572 bytes, 181 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0020F1A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
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

loc_0020F1A0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0x10);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 0x40)); /* fmul dword ptr [edi + 0x40] */
    MEMF(esi + 0x40) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 0x44)); /* fmul dword ptr [edi + 0x44] */
    MEMF(esi + 0x44) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 0x48)); /* fmul dword ptr [edi + 0x48] */
    MEMF(esi + 0x48) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 0x4C)); /* fmul dword ptr [edi + 0x4c] */
    MEMF(esi + 0x4C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 0x50)); /* fmul dword ptr [edi + 0x50] */
    MEMF(esi + 0x50) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 0x54)); /* fmul dword ptr [edi + 0x54] */
    MEMF(esi + 0x54) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 0x58)); /* fmul dword ptr [edi + 0x58] */
    MEMF(esi + 0x58) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 0x5C)); /* fmul dword ptr [edi + 0x5c] */
    MEMF(esi + 0x5C) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esi + 0x40);
    MEM32(esi + 0xE0) = eax;
    ecx = MEM32(esi + 0x44);
    MEM32(esi + 0xE4) = ecx;
    edx = MEM32(esi + 0x48);
    MEM32(esi + 0xE8) = edx;
    eax = MEM32(esi + 0x4C);
    MEM32(esi + 0xEC) = eax;
    ecx = MEM32(esi + 0x50);
    MEM32(esi + 0xF0) = ecx;
    edx = MEM32(esi + 0x54);
    MEM32(esi + 0xF4) = edx;
    eax = MEM32(esi + 0x58);
    MEM32(esi + 0xF8) = eax;
    ecx = MEM32(esi + 0x5C);
    MEM32(esi + 0xFC) = ecx;
    edx = MEM32(esi + 0x70);
    MEM32(esi + 0x60) = edx;
    eax = MEM32(esi + 0x74);
    MEM32(esi + 0x64) = eax;
    ecx = MEM32(esi + 0x78);
    eax = MEM32(ebp + 8);
    MEM32(esi + 0x68) = ecx;
    edx = MEM32(esi + 0x7C);
    MEM32(esi + 0x6C) = edx;
    fp_push(MEMF(eax)); /* fld float */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x40)); /* fmul dword ptr [esi + 0x40] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x70)); /* fadd dword ptr [esi + 0x70] */
    MEMF(esi + 0x70) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x44)); /* fmul dword ptr [esi + 0x44] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x74)); /* fadd dword ptr [esi + 0x74] */
    MEMF(esi + 0x74) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x48)); /* fmul dword ptr [esi + 0x48] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x78)); /* fadd dword ptr [esi + 0x78] */
    MEMF(esi + 0x78) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x4C)); /* fmul dword ptr [esi + 0x4c] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x7C)); /* fadd dword ptr [esi + 0x7c] */
    MEMF(esi + 0x7C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x58)); /* fld float */
    fp_push(MEMF(esi + 0x54)); /* fld float */
    fp_push(MEMF(esi + 0x50)); /* fld float */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 4) & 7]); /* fmul st(4) */
    ebx = esi + 0x30;
    PUSH32(esp, ebx);
    ecx = esp + 0x24;
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEM32(esp + 0x20) = 0;
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    g_fp_stack[(g_fp_top + 3) & 7] = fp_top(); fp_pop(); /* fstp st(3) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0xC)); /* fmul dword ptr [esi + 0xc] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax)); /* fmul dword ptr [eax] */
    eax = esp + 0x14;
    PUSH32(esp, eax);
    MEMF(esi + 0x6C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x50)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x496B98)); /* fmul dword ptr [0x496b98] */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x54)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x496B98)); /* fmul dword ptr [0x496b98] */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x58)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x496B98)); /* fmul dword ptr [0x496b98] */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020F2F2u); RECOMP_ABI_CALL(0x0020DAC0u, sub_0020DAC0); /* call 0x0020DAC0 */

loc_0020F2F2: ;
    ecx = MEM32(ebp + 8);
    fp_push(MEMF(ecx)); /* fld float */
    ecx = ebx;
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ebx)); /* fadd dword ptr [ebx] */
    MEMF(ebx) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ebx + 4)); /* fadd dword ptr [ebx + 4] */
    MEMF(ebx + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ebx + 8)); /* fadd dword ptr [ebx + 8] */
    MEMF(ebx + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ebx + 0xC)); /* fadd dword ptr [ebx + 0xc] */
    MEMF(ebx + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020F32Eu); RECOMP_ABI_CALL(0x001605D0u, sub_001605D0); /* call 0x001605D0 */

loc_0020F32E: ;
    PUSH32(esp, ebx);
    ecx = esi + 0x80;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020F33Au); RECOMP_ABI_CALL(0x002A7610u, sub_002A7610); /* call 0x002A7610 */

loc_0020F33A: ;
    edx = esi + 0x20;
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    ecx = esp + 0x28;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020F348u); RECOMP_ABI_CALL(0x001634D0u, sub_001634D0); /* call 0x001634D0 */

loc_0020F348: ;
    fp_push(MEMF(esi + 0x70)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x20)); /* fsub dword ptr [esp + 0x20] */
    fp_push(MEMF(esi + 0x74)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x24)); /* fsub dword ptr [esp + 0x24] */
    fp_push(MEMF(esi + 0x78)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x28)); /* fsub dword ptr [esp + 0x28] */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x18);
    fp_push(MEMF(esi + 0x7C)); /* fld float */
    MEM32(esi + 0xB8) = eax;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x2C)); /* fsub dword ptr [esp + 0x2c] */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x1C);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEM32(esi + 0xBC) = ecx;
    MEMF(esi + 0xB0) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esi + 0xB4) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esi + 0x7C) = 0x3F800000;
    edx = MEM32(edi + 0x10);
    MEM32(esi + 0x40) = edx;
    eax = MEM32(edi + 0x14);
    MEM32(esi + 0x44) = eax;
    ecx = MEM32(edi + 0x18);
    MEM32(esi + 0x48) = ecx;
    edx = MEM32(edi + 0x1C);
    MEM32(esi + 0x4C) = edx;
    eax = MEM32(edi + 0x20);
    MEM32(esi + 0x50) = eax;
    ecx = MEM32(edi + 0x24);
    MEM32(esi + 0x54) = ecx;
    edx = MEM32(edi + 0x28);
    MEM32(esi + 0x58) = edx;
    eax = MEM32(edi + 0x2C);
    MEM32(esi + 0x5C) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x4C) = eax;
    MEM32(esi + 0x5C) = eax;
    eax = edi + 0x80;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0020F3E0
 * Original: 0x0020F3E0 - 0x0020F566 (390 bytes, 119 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0020F3E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
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

loc_0020F3E0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x70);
    MEM32(esi + 0x60) = eax;
    ecx = MEM32(esi + 0x74);
    MEM32(esi + 0x64) = ecx;
    edx = MEM32(esi + 0x78);
    MEM32(esi + 0x68) = edx;
    eax = MEM32(esi + 0x7C);
    MEM32(esi + 0x6C) = eax;
    fp_push(MEMF(ebx)); /* fld float */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    PUSH32(esp, edi);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0xE0)); /* fmul dword ptr [esi + 0xe0] */
    edi = esi + 0x30;
    PUSH32(esp, edi);
    ecx = esp + 0x14;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x70)); /* fadd dword ptr [esi + 0x70] */
    PUSH32(esp, ecx);
    ecx = esp + 0x28;
    MEM32(esp + 0x24) = 0;
    MEMF(esi + 0x70) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0xE4)); /* fmul dword ptr [esi + 0xe4] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x74)); /* fadd dword ptr [esi + 0x74] */
    MEMF(esi + 0x74) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0xE8)); /* fmul dword ptr [esi + 0xe8] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x78)); /* fadd dword ptr [esi + 0x78] */
    MEMF(esi + 0x78) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0xEC)); /* fmul dword ptr [esi + 0xec] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x7C)); /* fadd dword ptr [esi + 0x7c] */
    MEMF(esi + 0x7C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0xF8)); /* fld float */
    fp_push(MEMF(esi + 0xF4)); /* fld float */
    fp_push(MEMF(esi + 0xF0)); /* fld float */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 4) & 7]); /* fmul st(4) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    g_fp_stack[(g_fp_top + 3) & 7] = fp_top(); fp_pop(); /* fstp st(3) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0xC)); /* fmul dword ptr [esi + 0xc] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx)); /* fmul dword ptr [ebx] */
    MEMF(esi + 0x6C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0xF0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x496B98)); /* fmul dword ptr [0x496b98] */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0xF4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x496B98)); /* fmul dword ptr [0x496b98] */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0xF8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x496B98)); /* fmul dword ptr [0x496b98] */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020F4BDu); RECOMP_ABI_CALL(0x0020DAC0u, sub_0020DAC0); /* call 0x0020DAC0 */

loc_0020F4BD: ;
    fp_push(MEMF(ebx)); /* fld float */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edi)); /* fadd dword ptr [edi] */
    MEMF(edi) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edi + 4)); /* fadd dword ptr [edi + 4] */
    MEMF(edi + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edi + 8)); /* fadd dword ptr [edi + 8] */
    MEMF(edi + 8) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = edi;
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edi + 0xC)); /* fadd dword ptr [edi + 0xc] */
    MEMF(edi + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020F4F6u); RECOMP_ABI_CALL(0x001605D0u, sub_001605D0); /* call 0x001605D0 */

loc_0020F4F6: ;
    PUSH32(esp, edi);
    ecx = esi + 0x80;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020F502u); RECOMP_ABI_CALL(0x002A7610u, sub_002A7610); /* call 0x002A7610 */

loc_0020F502: ;
    edx = esi + 0x20;
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    ecx = esp + 0x28;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020F510u); RECOMP_ABI_CALL(0x001634D0u, sub_001634D0); /* call 0x001634D0 */

loc_0020F510: ;
    fp_push(MEMF(esi + 0x70)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x20)); /* fsub dword ptr [esp + 0x20] */
    POP32(esp, edi);
    fp_push(MEMF(esi + 0x74)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x20)); /* fsub dword ptr [esp + 0x20] */
    fp_push(MEMF(esi + 0x78)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x24)); /* fsub dword ptr [esp + 0x24] */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x14);
    fp_push(MEMF(esi + 0x7C)); /* fld float */
    MEM32(esi + 0xB8) = eax;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x28)); /* fsub dword ptr [esp + 0x28] */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x18);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEM32(esi + 0xBC) = ecx;
    MEMF(esi + 0xB0) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esi + 0xB4) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esi + 0x7C) = 0x3F800000;
    POP32(esp, esi);
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
 * sub_0020F570
 * Original: 0x0020F570 - 0x0020F88B (795 bytes, 226 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0020F570(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
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

loc_0020F570: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x7C)); /* fmul dword ptr [esi + 0x7c] */
    eax = MEM32(esi + 0x70);
    MEM32(esi + 0x60) = eax;
    ecx = MEM32(esi + 0x74);
    fp_top() = -fp_top(); /* fchs */
    MEM32(esi + 0x64) = ecx;
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esi + 0x78);
    fp_push(MEMF(esp + 0x14)); /* fld float */
    MEM32(esi + 0x68) = edx;
    eax = MEM32(esi + 0x7C);
    MEM32(esi + 0x6C) = eax;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0xE0)); /* fmul dword ptr [esi + 0xe0] */
    PUSH32(esp, edi);
    edi = esi + 0x30;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x70)); /* fadd dword ptr [esi + 0x70] */
    PUSH32(esp, edi);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    MEMF(esi + 0x70) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = esp + 0x38;
    fp_push(MEMF(esp + 0x20)); /* fld float */
    MEM32(esp + 0x34) = 0;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0xE4)); /* fmul dword ptr [esi + 0xe4] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x74)); /* fadd dword ptr [esi + 0x74] */
    MEMF(esi + 0x74) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0xE8)); /* fmul dword ptr [esi + 0xe8] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x78)); /* fadd dword ptr [esi + 0x78] */
    MEMF(esi + 0x78) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0xEC)); /* fmul dword ptr [esi + 0xec] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x7C)); /* fadd dword ptr [esi + 0x7c] */
    MEMF(esi + 0x7C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0xF8)); /* fld float */
    fp_push(MEMF(esi + 0xF4)); /* fld float */
    fp_push(MEMF(esi + 0xF0)); /* fld float */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 4) & 7]); /* fmul st(4) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    g_fp_stack[(g_fp_top + 3) & 7] = fp_top(); fp_pop(); /* fstp st(3) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x20)); /* fmul dword ptr [esp + 0x20] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0xC)); /* fmul dword ptr [esi + 0xc] */
    MEMF(esi + 0x6C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0xF0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x496B98)); /* fmul dword ptr [0x496b98] */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0xF4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x496B98)); /* fmul dword ptr [0x496b98] */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0xF8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x496B98)); /* fmul dword ptr [0x496b98] */
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020F660u); RECOMP_ABI_CALL(0x0020DAC0u, sub_0020DAC0); /* call 0x0020DAC0 */

loc_0020F660: ;
    fp_push(MEMF(esp + 0x30)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x18)); /* fmul dword ptr [esp + 0x18] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edi)); /* fadd dword ptr [edi] */
    MEMF(edi) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x34)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x18)); /* fmul dword ptr [esp + 0x18] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edi + 4)); /* fadd dword ptr [edi + 4] */
    MEMF(edi + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x38)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x18)); /* fmul dword ptr [esp + 0x18] */
    ecx = edi;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edi + 8)); /* fadd dword ptr [edi + 8] */
    MEMF(edi + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x3C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x18)); /* fmul dword ptr [esp + 0x18] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edi + 0xC)); /* fadd dword ptr [edi + 0xc] */
    MEMF(edi + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020F69Du); RECOMP_ABI_CALL(0x001605D0u, sub_001605D0); /* call 0x001605D0 */

loc_0020F69D: ;
    ebx = esi + 0x80;
    PUSH32(esp, edi);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020F6ABu); RECOMP_ABI_CALL(0x002A7610u, sub_002A7610); /* call 0x002A7610 */

loc_0020F6AB: ;
    eax = esi + 0x20;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = esp + 0x38;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020F6B9u); RECOMP_ABI_CALL(0x001634D0u, sub_001634D0); /* call 0x001634D0 */

loc_0020F6B9: ;
    fp_push(MEMF(esi + 0x70)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x30)); /* fsub dword ptr [esp + 0x30] */
    fp_push(MEMF(esi + 0x74)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x34)); /* fsub dword ptr [esp + 0x34] */
    fp_push(MEMF(esi + 0x78)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x38)); /* fsub dword ptr [esp + 0x38] */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x28);
    fp_push(MEMF(esi + 0x7C)); /* fld float */
    MEM32(esi + 0xB8) = edx;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x3C)); /* fsub dword ptr [esp + 0x3c] */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x2C);
    MEM32(esi + 0xBC) = eax;
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMF(esi + 0xB0) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esi + 0xB4) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esi + 0x7C) = 0x3F800000;
    ecx = MEM32(esi + 0x70);
    fp_push(MEMF(ebp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + 0xC)); /* fmul dword ptr [ebp + 0xc] */
    MEM32(esi + 0x60) = ecx;
    edx = MEM32(esi + 0x74);
    MEM32(esi + 0x64) = edx;
    eax = MEM32(esi + 0x78);
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    MEM32(esi + 0x68) = eax;
    ecx = MEM32(esi + 0x7C);
    MEM32(esi + 0x6C) = ecx;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0xE0)); /* fmul dword ptr [esi + 0xe0] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x70)); /* fadd dword ptr [esi + 0x70] */
    MEMF(esi + 0x70) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0xE4)); /* fmul dword ptr [esi + 0xe4] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x74)); /* fadd dword ptr [esi + 0x74] */
    MEMF(esi + 0x74) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0xE8)); /* fmul dword ptr [esi + 0xe8] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x78)); /* fadd dword ptr [esi + 0x78] */
    MEMF(esi + 0x78) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0xEC)); /* fmul dword ptr [esi + 0xec] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x7C)); /* fadd dword ptr [esi + 0x7c] */
    MEMF(esi + 0x7C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0xF8)); /* fld float */
    fp_push(MEMF(esi + 0xF4)); /* fld float */
    fp_push(MEMF(esi + 0xF0)); /* fld float */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 4) & 7]); /* fmul st(4) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    g_fp_stack[(g_fp_top + 3) & 7] = fp_top(); fp_pop(); /* fstp st(3) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    PUSH32(esp, edi);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x1C)); /* fmul dword ptr [esp + 0x1c] */
    edx = esp + 0x34;
    PUSH32(esp, edx);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0xC)); /* fmul dword ptr [esi + 0xc] */
    ecx = esp + 0x28;
    MEM32(esp + 0x44) = 0;
    MEMF(esi + 0x6C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0xF0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x496B98)); /* fmul dword ptr [0x496b98] */
    MEMF(esp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0xF4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x496B98)); /* fmul dword ptr [0x496b98] */
    MEMF(esp + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0xF8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x496B98)); /* fmul dword ptr [0x496b98] */
    MEMF(esp + 0x40) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020F7E3u); RECOMP_ABI_CALL(0x0020DAC0u, sub_0020DAC0); /* call 0x0020DAC0 */

loc_0020F7E3: ;
    fp_push(MEMF(esp + 0x20)); /* fld float */
    ecx = edi;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x18)); /* fmul dword ptr [esp + 0x18] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edi)); /* fadd dword ptr [edi] */
    MEMF(edi) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x18)); /* fmul dword ptr [esp + 0x18] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edi + 4)); /* fadd dword ptr [edi + 4] */
    MEMF(edi + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x18)); /* fmul dword ptr [esp + 0x18] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edi + 8)); /* fadd dword ptr [edi + 8] */
    MEMF(edi + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x18)); /* fmul dword ptr [esp + 0x18] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edi + 0xC)); /* fadd dword ptr [edi + 0xc] */
    MEMF(edi + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020F820u); RECOMP_ABI_CALL(0x001605D0u, sub_001605D0); /* call 0x001605D0 */

loc_0020F820: ;
    PUSH32(esp, edi);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020F828u); RECOMP_ABI_CALL(0x002A7610u, sub_002A7610); /* call 0x002A7610 */

loc_0020F828: ;
    eax = esi + 0x20;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = esp + 0x38;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020F836u); RECOMP_ABI_CALL(0x001634D0u, sub_001634D0); /* call 0x001634D0 */

loc_0020F836: ;
    fp_push(MEMF(esi + 0x70)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x30)); /* fsub dword ptr [esp + 0x30] */
    edx = MEM32(ebp + 8);
    fp_push(MEMF(esi + 0x74)); /* fld float */
    POP32(esp, edi);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x30)); /* fsub dword ptr [esp + 0x30] */
    fp_push(MEMF(esi + 0x78)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x34)); /* fsub dword ptr [esp + 0x34] */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x24);
    fp_push(MEMF(esi + 0x7C)); /* fld float */
    MEM32(esi + 0xB8) = eax;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x38)); /* fsub dword ptr [esp + 0x38] */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x28);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEM32(esi + 0xBC) = ecx;
    MEMF(esi + 0xB0) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esi + 0xB4) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esi + 0x7C) = edx;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0020F7DE
 * Original: 0x0020F7DE - 0x0020F88B (173 bytes, 52 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020F7DE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020F7DE: ;
    PUSH32(esp, 0x0020F7E3u); RECOMP_ABI_CALL(0x0020DAC0u, sub_0020DAC0); /* call 0x0020DAC0 */

loc_0020F7E3: ;
    fp_push(MEMF(esp + 0x20)); /* fld float */
    ecx = edi;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x18)); /* fmul dword ptr [esp + 0x18] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edi)); /* fadd dword ptr [edi] */
    MEMF(edi) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x18)); /* fmul dword ptr [esp + 0x18] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edi + 4)); /* fadd dword ptr [edi + 4] */
    MEMF(edi + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x18)); /* fmul dword ptr [esp + 0x18] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edi + 8)); /* fadd dword ptr [edi + 8] */
    MEMF(edi + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x18)); /* fmul dword ptr [esp + 0x18] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edi + 0xC)); /* fadd dword ptr [edi + 0xc] */
    MEMF(edi + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0020F820u); RECOMP_ABI_CALL(0x001605D0u, sub_001605D0); /* call 0x001605D0 */

loc_0020F820: ;
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x0020F828u); RECOMP_ABI_CALL(0x002A7610u, sub_002A7610); /* call 0x002A7610 */

loc_0020F828: ;
    eax = esi + 0x20;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = esp + 0x38;
    PUSH32(esp, 0x0020F836u); RECOMP_ABI_CALL(0x001634D0u, sub_001634D0); /* call 0x001634D0 */

loc_0020F836: ;
    fp_push(MEMF(esi + 0x70)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x30)); /* fsub dword ptr [esp + 0x30] */
    edx = MEM32(ebp + 8);
    fp_push(MEMF(esi + 0x74)); /* fld float */
    POP32(esp, edi);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x30)); /* fsub dword ptr [esp + 0x30] */
    fp_push(MEMF(esi + 0x78)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x34)); /* fsub dword ptr [esp + 0x34] */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x24);
    fp_push(MEMF(esi + 0x7C)); /* fld float */
    MEM32(esi + 0xB8) = eax;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x38)); /* fsub dword ptr [esp + 0x38] */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x28);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEM32(esi + 0xBC) = ecx;
    MEMF(esi + 0xB0) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esi + 0xB4) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esi + 0x7C) = edx;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0020F890
 * Original: 0x0020F890 - 0x0020F896 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020F890(void)
{

loc_0020F890: ;
    eax = 3;
    esp += 4; return; /* ret */

}

/**
 * sub_0020F8A0
 * Original: 0x0020F8A0 - 0x0020FA08 (360 bytes, 119 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0020F8A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
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

loc_0020F8A0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x70);
    MEM32(esi + 0x60) = eax;
    ecx = MEM32(esi + 0x74);
    MEM32(esi + 0x64) = ecx;
    edx = MEM32(esi + 0x78);
    MEM32(esi + 0x68) = edx;
    eax = MEM32(esi + 0x7C);
    MEM32(esi + 0x6C) = eax;
    fp_push(MEMF(ebx)); /* fld float */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    PUSH32(esp, edi);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x40)); /* fmul dword ptr [esi + 0x40] */
    edi = esi + 0x30;
    PUSH32(esp, edi);
    ecx = esp + 0x14;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x70)); /* fadd dword ptr [esi + 0x70] */
    PUSH32(esp, ecx);
    ecx = esp + 0x28;
    MEM32(esp + 0x24) = 0;
    MEMF(esi + 0x70) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x44)); /* fmul dword ptr [esi + 0x44] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x74)); /* fadd dword ptr [esi + 0x74] */
    MEMF(esi + 0x74) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x48)); /* fmul dword ptr [esi + 0x48] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x78)); /* fadd dword ptr [esi + 0x78] */
    MEMF(esi + 0x78) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x4C)); /* fmul dword ptr [esi + 0x4c] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x7C)); /* fadd dword ptr [esi + 0x7c] */
    MEMF(esi + 0x7C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x58)); /* fld float */
    fp_push(MEMF(esi + 0x54)); /* fld float */
    fp_push(MEMF(esi + 0x50)); /* fld float */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 4) & 7]); /* fmul st(4) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    g_fp_stack[(g_fp_top + 3) & 7] = fp_top(); fp_pop(); /* fstp st(3) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0xC)); /* fmul dword ptr [esi + 0xc] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx)); /* fmul dword ptr [ebx] */
    MEMF(esi + 0x6C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x50)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x496B98)); /* fmul dword ptr [0x496b98] */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x54)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x496B98)); /* fmul dword ptr [0x496b98] */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x58)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x496B98)); /* fmul dword ptr [0x496b98] */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020F95Fu); RECOMP_ABI_CALL(0x0020DAC0u, sub_0020DAC0); /* call 0x0020DAC0 */

loc_0020F95F: ;
    fp_push(MEMF(ebx)); /* fld float */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edi)); /* fadd dword ptr [edi] */
    MEMF(edi) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edi + 4)); /* fadd dword ptr [edi + 4] */
    MEMF(edi + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edi + 8)); /* fadd dword ptr [edi + 8] */
    MEMF(edi + 8) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = edi;
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edi + 0xC)); /* fadd dword ptr [edi + 0xc] */
    MEMF(edi + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020F998u); RECOMP_ABI_CALL(0x001605D0u, sub_001605D0); /* call 0x001605D0 */

loc_0020F998: ;
    PUSH32(esp, edi);
    ecx = esi + 0x80;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020F9A4u); RECOMP_ABI_CALL(0x002A7610u, sub_002A7610); /* call 0x002A7610 */

loc_0020F9A4: ;
    edx = esi + 0x20;
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    ecx = esp + 0x28;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020F9B2u); RECOMP_ABI_CALL(0x001634D0u, sub_001634D0); /* call 0x001634D0 */

loc_0020F9B2: ;
    fp_push(MEMF(esi + 0x70)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x20)); /* fsub dword ptr [esp + 0x20] */
    POP32(esp, edi);
    fp_push(MEMF(esi + 0x74)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x20)); /* fsub dword ptr [esp + 0x20] */
    fp_push(MEMF(esi + 0x78)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x24)); /* fsub dword ptr [esp + 0x24] */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x14);
    fp_push(MEMF(esi + 0x7C)); /* fld float */
    MEM32(esi + 0xB8) = eax;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x28)); /* fsub dword ptr [esp + 0x28] */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x18);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEM32(esi + 0xBC) = ecx;
    MEMF(esi + 0xB0) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esi + 0xB4) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esi + 0x7C) = 0x3F800000;
    POP32(esp, esi);
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
 * sub_0020FA10
 * Original: 0x0020FA10 - 0x0020FC1C (524 bytes, 165 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0020FA10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
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

loc_0020FA10: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0x10);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx + 0x40)); /* fmul dword ptr [ebx + 0x40] */
    PUSH32(esp, esi);
    esi = ecx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEMF(esi + 0x40) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, edi);
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx + 0x44)); /* fmul dword ptr [ebx + 0x44] */
    MEMF(esi + 0x44) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx + 0x48)); /* fmul dword ptr [ebx + 0x48] */
    MEMF(esi + 0x48) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx + 0x4C)); /* fmul dword ptr [ebx + 0x4c] */
    MEMF(esi + 0x4C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx + 0x50)); /* fmul dword ptr [ebx + 0x50] */
    MEMF(esi + 0x50) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx + 0x54)); /* fmul dword ptr [ebx + 0x54] */
    MEMF(esi + 0x54) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx + 0x58)); /* fmul dword ptr [ebx + 0x58] */
    MEMF(esi + 0x58) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx + 0x5C)); /* fmul dword ptr [ebx + 0x5c] */
    MEMF(esi + 0x5C) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esi + 0x4C) = eax;
    MEM32(esi + 0x5C) = eax;
    eax = MEM32(esi + 0x40);
    MEM32(esi + 0xE0) = eax;
    ecx = MEM32(esi + 0x44);
    MEM32(esi + 0xE4) = ecx;
    edx = MEM32(esi + 0x48);
    MEM32(esi + 0xE8) = edx;
    eax = MEM32(esi + 0x4C);
    MEM32(esi + 0xEC) = eax;
    ecx = MEM32(esi + 0x50);
    MEM32(esi + 0xF0) = ecx;
    edx = MEM32(esi + 0x54);
    MEM32(esi + 0xF4) = edx;
    eax = MEM32(esi + 0x58);
    MEM32(esi + 0xF8) = eax;
    ecx = MEM32(esi + 0x5C);
    MEM32(esi + 0xFC) = ecx;
    edx = MEM32(esi + 0x70);
    MEM32(esi + 0x60) = edx;
    eax = MEM32(esi + 0x74);
    MEM32(esi + 0x64) = eax;
    ecx = MEM32(esi + 0x78);
    eax = MEM32(ebp + 8);
    MEM32(esi + 0x68) = ecx;
    edx = MEM32(esi + 0x7C);
    MEM32(esi + 0x6C) = edx;
    fp_push(MEMF(eax)); /* fld float */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x40)); /* fmul dword ptr [esi + 0x40] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x70)); /* fadd dword ptr [esi + 0x70] */
    MEMF(esi + 0x70) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x44)); /* fmul dword ptr [esi + 0x44] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x74)); /* fadd dword ptr [esi + 0x74] */
    MEMF(esi + 0x74) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x48)); /* fmul dword ptr [esi + 0x48] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x78)); /* fadd dword ptr [esi + 0x78] */
    MEMF(esi + 0x78) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x4C)); /* fmul dword ptr [esi + 0x4c] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x7C)); /* fadd dword ptr [esi + 0x7c] */
    MEMF(esi + 0x7C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x58)); /* fld float */
    fp_push(MEMF(esi + 0x54)); /* fld float */
    fp_push(MEMF(esi + 0x50)); /* fld float */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    edi = esi + 0x30;
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 4) & 7]); /* fmul st(4) */
    PUSH32(esp, edi);
    ecx = esp + 0x24;
    MEM32(esp + 0x20) = 0;
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    g_fp_stack[(g_fp_top + 3) & 7] = fp_top(); fp_pop(); /* fstp st(3) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0xC)); /* fmul dword ptr [esi + 0xc] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax)); /* fmul dword ptr [eax] */
    eax = esp + 0x14;
    PUSH32(esp, eax);
    MEMF(esi + 0x6C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x50)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x496B98)); /* fmul dword ptr [0x496b98] */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x54)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x496B98)); /* fmul dword ptr [0x496b98] */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x58)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x496B98)); /* fmul dword ptr [0x496b98] */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020FB6Au); RECOMP_ABI_CALL(0x0020DAC0u, sub_0020DAC0); /* call 0x0020DAC0 */

loc_0020FB6A: ;
    ecx = MEM32(ebp + 8);
    fp_push(MEMF(ecx)); /* fld float */
    ecx = edi;
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edi)); /* fadd dword ptr [edi] */
    MEMF(edi) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edi + 4)); /* fadd dword ptr [edi + 4] */
    MEMF(edi + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edi + 8)); /* fadd dword ptr [edi + 8] */
    MEMF(edi + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edi + 0xC)); /* fadd dword ptr [edi + 0xc] */
    MEMF(edi + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020FBA6u); RECOMP_ABI_CALL(0x001605D0u, sub_001605D0); /* call 0x001605D0 */

loc_0020FBA6: ;
    PUSH32(esp, edi);
    ecx = esi + 0x80;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020FBB2u); RECOMP_ABI_CALL(0x002A7610u, sub_002A7610); /* call 0x002A7610 */

loc_0020FBB2: ;
    edx = esi + 0x20;
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    ecx = esp + 0x28;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0020FBC0u); RECOMP_ABI_CALL(0x001634D0u, sub_001634D0); /* call 0x001634D0 */

loc_0020FBC0: ;
    fp_push(MEMF(esi + 0x70)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x20)); /* fsub dword ptr [esp + 0x20] */
    POP32(esp, edi);
    fp_push(MEMF(esi + 0x74)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x20)); /* fsub dword ptr [esp + 0x20] */
    fp_push(MEMF(esi + 0x78)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x24)); /* fsub dword ptr [esp + 0x24] */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x14);
    fp_push(MEMF(esi + 0x7C)); /* fld float */
    MEM32(esi + 0xB8) = eax;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x28)); /* fsub dword ptr [esp + 0x28] */
    eax = ebx + 0x80;
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x18);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEM32(esi + 0xBC) = ecx;
    MEMF(esi + 0xB0) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esi + 0xB4) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esi + 0x7C) = 0x3F800000;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0020FC20
 * Original: 0x0020FC20 - 0x0020FC23 (3 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020FC20(void)
{

loc_0020FC20: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0020FC30
 * Original: 0x0020FC30 - 0x0020FC33 (3 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020FC30(void)
{

loc_0020FC30: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0020FC40
 * Original: 0x0020FC40 - 0x0020FC43 (3 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020FC40(void)
{

loc_0020FC40: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0020FC50
 * Original: 0x0020FC50 - 0x0020FC53 (3 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020FC50(void)
{

loc_0020FC50: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0020FC60
 * Original: 0x0020FC60 - 0x0020FC63 (3 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020FC60(void)
{

loc_0020FC60: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0020FC70
 * Original: 0x0020FC70 - 0x0020FC73 (3 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020FC70(void)
{

loc_0020FC70: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0020FC80
 * Original: 0x0020FC80 - 0x0020FC83 (3 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020FC80(void)
{

loc_0020FC80: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0020FC90
 * Original: 0x0020FC90 - 0x0020FC9C (12 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020FC90(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020FC90: ;
    eax = MEM32(esp + 0xC);
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x80;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0020FCA0
 * Original: 0x0020FCA0 - 0x0020FCA6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020FCA0(void)
{

loc_0020FCA0: ;
    eax = 0x80;
    esp += 4; return; /* ret */

}

/**
 * sub_0020FCB0
 * Original: 0x0020FCB0 - 0x0020FCB3 (3 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020FCB0(void)
{

loc_0020FCB0: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0020FCC0
 * Original: 0x0020FCC0 - 0x0020FCC3 (3 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020FCC0(void)
{

loc_0020FCC0: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0020FCD0
 * Original: 0x0020FCD0 - 0x0020FCD6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020FCD0(void)
{

loc_0020FCD0: ;
    eax = 7;
    esp += 4; return; /* ret */

}

/**
 * sub_0020FCE0
 * Original: 0x0020FCE0 - 0x0020FCE3 (3 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020FCE0(void)
{

loc_0020FCE0: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0020FCF0
 * Original: 0x0020FCF0 - 0x0020FD27 (55 bytes, 17 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020FCF0(void)
{

loc_0020FCF0: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0020FD04u); RECOMP_ABI_CALL(0x0020D890u, sub_0020D890); /* call 0x0020D890 */

loc_0020FD04: ;
    PUSH32(esp, 0);
    ecx = esi;
    MEM32(esi) = 0x4B4400;
    MEM32(esi + 0x10) = 0;
    PUSH32(esp, 0x0020FD1Au); RECOMP_ABI_CALL(0x0020E050u, sub_0020E050); /* call 0x0020E050 */

loc_0020FD1A: ;
    MEM32(esi + 0x7C) = 0x3F800000;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0020FD30
 * Original: 0x0020FD30 - 0x0020FD58 (40 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020FD30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020FD30: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0020FD38u); RECOMP_ABI_CALL(0x0020D8D0u, sub_0020D8D0); /* call 0x0020D8D0 */

loc_0020FD38: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0020FD52; /* je: equal / zero */

loc_0020FD3F: ;
    edx = ZX16(MEM16(esi + 4));
    ecx = MEM32(0x62EBAC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x25);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x0020FD52u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0020FD4Fu); } /* indirect call */
    }

loc_0020FD52: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0020FD60
 * Original: 0x0020FD60 - 0x0020FD8C (44 bytes, 15 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020FD60(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020FD60: ;
    eax = MEM32(esp + 4);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 4) = ecx;
    MEM32(eax) = ecx;
    MEM32(eax + 0x1C) = ecx;
    MEM32(eax + 0x18) = ecx;
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x2C) = ecx;
    MEM32(eax + 0x28) = ecx;
    MEM32(eax + 0x24) = ecx;
    MEM32(eax + 0x20) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0020FD90
 * Original: 0x0020FD90 - 0x0020FDBC (44 bytes, 15 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020FD90(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020FD90: ;
    eax = MEM32(esp + 4);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 4) = ecx;
    MEM32(eax) = ecx;
    MEM32(eax + 0x1C) = ecx;
    MEM32(eax + 0x18) = ecx;
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x2C) = ecx;
    MEM32(eax + 0x28) = ecx;
    MEM32(eax + 0x24) = ecx;
    MEM32(eax + 0x20) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0020FDC0
 * Original: 0x0020FDC0 - 0x0020FDEC (44 bytes, 15 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020FDC0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020FDC0: ;
    eax = MEM32(esp + 4);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 4) = ecx;
    MEM32(eax) = ecx;
    MEM32(eax + 0x1C) = ecx;
    MEM32(eax + 0x18) = ecx;
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x2C) = ecx;
    MEM32(eax + 0x28) = ecx;
    MEM32(eax + 0x24) = ecx;
    MEM32(eax + 0x20) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0020FDF0
 * Original: 0x0020FDF0 - 0x0020FE1C (44 bytes, 15 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020FDF0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020FDF0: ;
    eax = MEM32(esp + 4);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 4) = ecx;
    MEM32(eax) = ecx;
    MEM32(eax + 0x1C) = ecx;
    MEM32(eax + 0x18) = ecx;
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x2C) = ecx;
    MEM32(eax + 0x28) = ecx;
    MEM32(eax + 0x24) = ecx;
    MEM32(eax + 0x20) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0020FE20
 * Original: 0x0020FE20 - 0x0020FE89 (105 bytes, 34 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020FE20(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020FE20: ;
    eax = MEM32(esp + 0xC);
    MEM8(eax) = 2;
    MEM8(eax + 0xC) = 1;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 0x3C) = ecx;
    MEM32(eax + 0x38) = ecx;
    MEM32(eax + 0x34) = ecx;
    MEM32(eax + 0x30) = ecx;
    MEM32(eax + 0x1C) = ecx;
    MEM32(eax + 0x18) = ecx;
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x2C) = ecx;
    MEM32(eax + 0x28) = ecx;
    MEM32(eax + 0x24) = ecx;
    MEM32(eax + 0x20) = ecx;
    MEM32(eax + 0x4C) = ecx;
    MEM32(eax + 0x48) = ecx;
    MEM32(eax + 0x44) = ecx;
    MEM32(eax + 0x40) = ecx;
    MEM32(eax + 0x5C) = ecx;
    MEM32(eax + 0x58) = ecx;
    MEM32(eax + 0x54) = ecx;
    MEM32(eax + 0x50) = ecx;
    MEM32(eax + 0x6C) = ecx;
    MEM32(eax + 0x68) = ecx;
    MEM32(eax + 0x64) = ecx;
    MEM32(eax + 0x60) = ecx;
    MEM32(eax + 0x7C) = ecx;
    MEM32(eax + 0x78) = ecx;
    MEM32(eax + 0x74) = ecx;
    MEM32(eax + 0x70) = ecx;
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x80;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0020FE90
 * Original: 0x0020FE90 - 0x0020FEF6 (102 bytes, 32 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020FE90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0020FE90: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ecx + 0xC0) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0020FEF3; /* je: equal / zero */

loc_0020FE9E: ;
    edx = MEM32(eax + 0xC);
    MEM32(ecx + 0xC) = edx;
    edx = MEM32(eax + 0x20);
    MEM32(ecx + 0x20) = edx;
    edx = MEM32(eax + 0x24);
    MEM32(ecx + 0x24) = edx;
    edx = MEM32(eax + 0x28);
    MEM32(ecx + 0x28) = edx;
    edx = MEM32(eax + 0x2C);
    MEM32(ecx + 0x2C) = edx;
    MEM32(ecx + 0x2C) = 0;
    edx = MEM32(eax + 0x70);
    MEM32(ecx + 0x70) = edx;
    edx = MEM32(eax + 0x74);
    MEM32(ecx + 0x74) = edx;
    edx = MEM32(eax + 0x78);
    MEM32(ecx + 0x78) = edx;
    edx = MEM32(eax + 0x7C);
    MEM32(ecx + 0x7C) = edx;
    edx = MEM32(eax + 0x60);
    MEM32(ecx + 0x60) = edx;
    edx = MEM32(eax + 0x64);
    MEM32(ecx + 0x64) = edx;
    edx = MEM32(eax + 0x68);
    MEM32(ecx + 0x68) = edx;
    eax = MEM32(eax + 0x6C);
    MEM32(ecx + 0x6C) = eax;

loc_0020FEF3: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0020FF00
 * Original: 0x0020FF00 - 0x0020FF7B (123 bytes, 38 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020FF00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0020FF00: ;
    edx = MEM32(ecx + 0x30);
    eax = MEM32(esp + 4);
    MEM32(eax + 0x30) = edx;
    edx = MEM32(ecx + 0x34);
    MEM32(eax + 0x34) = edx;
    edx = MEM32(ecx + 0x38);
    MEM32(eax + 0x38) = edx;
    edx = MEM32(ecx + 0x3C);
    MEM32(eax + 0x3C) = edx;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 0x4C) = edx;
    MEM32(eax + 0x48) = edx;
    MEM32(eax + 0x44) = edx;
    MEM32(eax + 0x40) = edx;
    MEM32(eax + 0x5C) = edx;
    MEM32(eax + 0x58) = edx;
    MEM32(eax + 0x54) = edx;
    MEM32(eax + 0x50) = edx;
    edx = MEM32(ecx + 0x60);
    MEM32(eax + 0x60) = edx;
    edx = MEM32(ecx + 0x64);
    MEM32(eax + 0x64) = edx;
    edx = MEM32(ecx + 0x68);
    MEM32(eax + 0x68) = edx;
    edx = MEM32(ecx + 0x6C);
    MEM32(eax + 0x6C) = edx;
    edx = MEM32(ecx + 0x70);
    MEM32(eax + 0x70) = edx;
    edx = MEM32(ecx + 0x74);
    MEM32(eax + 0x74) = edx;
    edx = MEM32(ecx + 0x78);
    MEM32(eax + 0x78) = edx;
    edx = MEM32(ecx + 0x7C);
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x80;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 4) = ecx;
    MEM32(eax + 0x7C) = edx;
    ecx = eax + 0x80;
    g_seh_ebp = ebp; sub_00161270(); return; /* tail jmp 0x00161270 */

}

/**
 * sub_0020FF80
 * Original: 0x0020FF80 - 0x0020FF86 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020FF80(void)
{

loc_0020FF80: ;
    eax = 5;
    esp += 4; return; /* ret */

}

/**
 * sub_0020FF90
 * Original: 0x0020FF90 - 0x0020FF97 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0020FF90(void)
{

loc_0020FF90: ;
    MEM32(ecx) = 0x4AE714;
    esp += 4; return; /* ret */

}

/**
 * sub_0020FFA0
 * Original: 0x0020FFA0 - 0x0020FFF8 (88 bytes, 33 insns)
 * CC: cdecl, 2 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0020FFA0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0020FFA0: ;
    eax = MEM32(esp + 8);
    fp_push(MEMF(eax)); /* fld float */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_push(MEMF(eax + 8)); /* fld float */
    eax = MEM32(esp + 4);
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x20)); /* fmul dword ptr [eax + 0x20] */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x10)); /* fmul dword ptr [eax + 0x10] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax)); /* fmul dword ptr [eax] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(ecx) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x24)); /* fmul dword ptr [eax + 0x24] */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x14)); /* fmul dword ptr [eax + 0x14] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 4)); /* fmul dword ptr [eax + 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(ecx + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x28)); /* fmul dword ptr [eax + 0x28] */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x18)); /* fmul dword ptr [eax + 0x18] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 8)); /* fmul dword ptr [eax + 8] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(ecx + 8) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(ecx + 0xC) = 0;
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0020FFDF
 * Original: 0x0020FFDF - 0x0020FFF8 (25 bytes, 8 insns)
 * CC: cdecl, 2 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0020FFDF(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0020FFDF: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x18)); /* fmul dword ptr [eax + 0x18] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 8)); /* fmul dword ptr [eax + 8] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(ecx + 8) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(ecx + 0xC) = 0;
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00210000
 * Original: 0x00210000 - 0x00210020 (32 bytes, 12 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00210000(void)
{

loc_00210000: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00210014u); RECOMP_ABI_CALL(0x002104A0u, sub_002104A0); /* call 0x002104A0 */

loc_00210014: ;
    MEM32(esi) = 0x4B4480;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00210020
 * Original: 0x00210020 - 0x00210050 (48 bytes, 22 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00210020(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00210020: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x4AE714;
    if (TEST_Z(_fa, _fb)) goto loc_00210043; /* je: equal / zero */

loc_00210030: ;
    edx = ZX16(MEM16(esi + 4));
    ecx = MEM32(0x62EBAC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x25);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x00210043u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00210040u); } /* indirect call */
    }

loc_00210043: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00210050
 * Original: 0x00210050 - 0x002101B8 (360 bytes, 119 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00210050(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
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

loc_00210050: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x70);
    MEM32(esi + 0x60) = eax;
    ecx = MEM32(esi + 0x74);
    MEM32(esi + 0x64) = ecx;
    edx = MEM32(esi + 0x78);
    MEM32(esi + 0x68) = edx;
    eax = MEM32(esi + 0x7C);
    MEM32(esi + 0x6C) = eax;
    fp_push(MEMF(ebx)); /* fld float */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    PUSH32(esp, edi);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x40)); /* fmul dword ptr [esi + 0x40] */
    edi = esi + 0x30;
    PUSH32(esp, edi);
    ecx = esp + 0x14;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x70)); /* fadd dword ptr [esi + 0x70] */
    PUSH32(esp, ecx);
    ecx = esp + 0x28;
    MEM32(esp + 0x24) = 0;
    MEMF(esi + 0x70) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x44)); /* fmul dword ptr [esi + 0x44] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x74)); /* fadd dword ptr [esi + 0x74] */
    MEMF(esi + 0x74) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x48)); /* fmul dword ptr [esi + 0x48] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x78)); /* fadd dword ptr [esi + 0x78] */
    MEMF(esi + 0x78) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x4C)); /* fmul dword ptr [esi + 0x4c] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x7C)); /* fadd dword ptr [esi + 0x7c] */
    MEMF(esi + 0x7C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x58)); /* fld float */
    fp_push(MEMF(esi + 0x54)); /* fld float */
    fp_push(MEMF(esi + 0x50)); /* fld float */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 4) & 7]); /* fmul st(4) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    g_fp_stack[(g_fp_top + 3) & 7] = fp_top(); fp_pop(); /* fstp st(3) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0xC)); /* fmul dword ptr [esi + 0xc] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx)); /* fmul dword ptr [ebx] */
    MEMF(esi + 0x6C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x50)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x496B98)); /* fmul dword ptr [0x496b98] */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x54)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x496B98)); /* fmul dword ptr [0x496b98] */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x58)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x496B98)); /* fmul dword ptr [0x496b98] */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0021010Fu); RECOMP_ABI_CALL(0x0020DAC0u, sub_0020DAC0); /* call 0x0020DAC0 */

loc_0021010F: ;
    fp_push(MEMF(ebx)); /* fld float */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edi)); /* fadd dword ptr [edi] */
    MEMF(edi) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edi + 4)); /* fadd dword ptr [edi + 4] */
    MEMF(edi + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edi + 8)); /* fadd dword ptr [edi + 8] */
    MEMF(edi + 8) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = edi;
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edi + 0xC)); /* fadd dword ptr [edi + 0xc] */
    MEMF(edi + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00210148u); RECOMP_ABI_CALL(0x001605D0u, sub_001605D0); /* call 0x001605D0 */

loc_00210148: ;
    PUSH32(esp, edi);
    ecx = esi + 0x80;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00210154u); RECOMP_ABI_CALL(0x002A7610u, sub_002A7610); /* call 0x002A7610 */

loc_00210154: ;
    edx = esi + 0x20;
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    ecx = esp + 0x28;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00210162u); RECOMP_ABI_CALL(0x001634D0u, sub_001634D0); /* call 0x001634D0 */

loc_00210162: ;
    fp_push(MEMF(esi + 0x70)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x20)); /* fsub dword ptr [esp + 0x20] */
    POP32(esp, edi);
    fp_push(MEMF(esi + 0x74)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x20)); /* fsub dword ptr [esp + 0x20] */
    fp_push(MEMF(esi + 0x78)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x24)); /* fsub dword ptr [esp + 0x24] */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x14);
    fp_push(MEMF(esi + 0x7C)); /* fld float */
    MEM32(esi + 0xB8) = eax;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x28)); /* fsub dword ptr [esp + 0x28] */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x18);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEM32(esi + 0xBC) = ecx;
    MEMF(esi + 0xB0) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esi + 0xB4) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esi + 0x7C) = 0x3F800000;
    POP32(esp, esi);
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
 * sub_002100AE
 * Original: 0x002100AE - 0x002101B8 (266 bytes, 84 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002100AE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002100AE: ;
    MEMF(esi + 0x78) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x4C)); /* fmul dword ptr [esi + 0x4c] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x7C)); /* fadd dword ptr [esi + 0x7c] */
    MEMF(esi + 0x7C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x58)); /* fld float */
    fp_push(MEMF(esi + 0x54)); /* fld float */
    fp_push(MEMF(esi + 0x50)); /* fld float */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 4) & 7]); /* fmul st(4) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    g_fp_stack[(g_fp_top + 3) & 7] = fp_top(); fp_pop(); /* fstp st(3) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0xC)); /* fmul dword ptr [esi + 0xc] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx)); /* fmul dword ptr [ebx] */
    MEMF(esi + 0x6C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x50)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x496B98)); /* fmul dword ptr [0x496b98] */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x54)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x496B98)); /* fmul dword ptr [0x496b98] */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x58)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x496B98)); /* fmul dword ptr [0x496b98] */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0021010Fu); RECOMP_ABI_CALL(0x0020DAC0u, sub_0020DAC0); /* call 0x0020DAC0 */

loc_0021010F: ;
    fp_push(MEMF(ebx)); /* fld float */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edi)); /* fadd dword ptr [edi] */
    MEMF(edi) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edi + 4)); /* fadd dword ptr [edi + 4] */
    MEMF(edi + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edi + 8)); /* fadd dword ptr [edi + 8] */
    MEMF(edi + 8) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = edi;
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edi + 0xC)); /* fadd dword ptr [edi + 0xc] */
    MEMF(edi + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    PUSH32(esp, 0x00210148u); RECOMP_ABI_CALL(0x001605D0u, sub_001605D0); /* call 0x001605D0 */

loc_00210148: ;
    PUSH32(esp, edi);
    ecx = esi + 0x80;
    PUSH32(esp, 0x00210154u); RECOMP_ABI_CALL(0x002A7610u, sub_002A7610); /* call 0x002A7610 */

loc_00210154: ;
    edx = esi + 0x20;
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    ecx = esp + 0x28;
    PUSH32(esp, 0x00210162u); RECOMP_ABI_CALL(0x001634D0u, sub_001634D0); /* call 0x001634D0 */

loc_00210162: ;
    fp_push(MEMF(esi + 0x70)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x20)); /* fsub dword ptr [esp + 0x20] */
    POP32(esp, edi);
    fp_push(MEMF(esi + 0x74)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x20)); /* fsub dword ptr [esp + 0x20] */
    fp_push(MEMF(esi + 0x78)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x24)); /* fsub dword ptr [esp + 0x24] */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x14);
    fp_push(MEMF(esi + 0x7C)); /* fld float */
    MEM32(esi + 0xB8) = eax;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x28)); /* fsub dword ptr [esp + 0x28] */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x18);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEM32(esi + 0xBC) = ecx;
    MEMF(esi + 0xB0) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esi + 0xB4) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esi + 0x7C) = 0x3F800000;
    POP32(esp, esi);
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
 * sub_002101C0
 * Original: 0x002101C0 - 0x00210419 (601 bytes, 194 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002101C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
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

loc_002101C0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 0x10);
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x40)); /* fmul dword ptr [eax + 0x40] */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    MEMF(esi + 0x40) = (float)fp_top(); fp_pop(); /* fstp */
    ebx = esi + 0x80;
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    PUSH32(esp, edi);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x44)); /* fmul dword ptr [eax + 0x44] */
    MEMF(esi + 0x44) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x48)); /* fmul dword ptr [eax + 0x48] */
    MEMF(esi + 0x48) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x4C)); /* fmul dword ptr [eax + 0x4c] */
    MEMF(esi + 0x4C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 0x50)); /* fld float */
    fp_push(MEMF(eax + 0x54)); /* fld float */
    fp_push(MEMF(eax + 0x58)); /* fld float */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx + 0x20)); /* fmul dword ptr [ebx + 0x20] */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx + 0x10)); /* fmul dword ptr [ebx + 0x10] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx)); /* fmul dword ptr [ebx] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx + 0x24)); /* fmul dword ptr [ebx + 0x24] */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx + 0x14)); /* fmul dword ptr [ebx + 0x14] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx + 4)); /* fmul dword ptr [ebx + 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx + 0x28)); /* fmul dword ptr [ebx + 0x28] */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx + 0x18)); /* fmul dword ptr [ebx + 0x18] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx + 8)); /* fmul dword ptr [ebx + 8] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + 0xC)); /* fmul dword ptr [ebp + 0xc] */
    MEMF(esi + 0x50) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + 0xC)); /* fmul dword ptr [ebp + 0xc] */
    MEMF(esi + 0x54) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + 0xC)); /* fmul dword ptr [ebp + 0xc] */
    MEMF(esi + 0x58) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x4964E8)); /* fmul dword ptr [0x4964e8] */
    MEMF(esi + 0x5C) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esi + 0x4C) = eax;
    MEM32(esi + 0x5C) = eax;
    eax = MEM32(esi + 0x40);
    MEM32(esi + 0xC0) = eax;
    ecx = MEM32(esi + 0x44);
    MEM32(esi + 0xC4) = ecx;
    edx = MEM32(esi + 0x48);
    MEM32(esi + 0xC8) = edx;
    eax = MEM32(esi + 0x4C);
    MEM32(esi + 0xCC) = eax;
    ecx = MEM32(esi + 0x50);
    MEM32(esi + 0xD0) = ecx;
    edx = MEM32(esi + 0x54);
    MEM32(esi + 0xD4) = edx;
    eax = MEM32(esi + 0x58);
    MEM32(esi + 0xD8) = eax;
    ecx = MEM32(esi + 0x5C);
    MEM32(esi + 0xDC) = ecx;
    edx = MEM32(esi + 0x70);
    MEM32(esi + 0x60) = edx;
    eax = MEM32(esi + 0x74);
    MEM32(esi + 0x64) = eax;
    ecx = MEM32(esi + 0x78);
    eax = MEM32(ebp + 8);
    MEM32(esi + 0x68) = ecx;
    edx = MEM32(esi + 0x7C);
    MEM32(esi + 0x6C) = edx;
    fp_push(MEMF(eax)); /* fld float */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    edi = esi + 0x30;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x40)); /* fmul dword ptr [esi + 0x40] */
    PUSH32(esp, edi);
    ecx = esp + 0x24;
    MEM32(esp + 0x20) = 0;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x70)); /* fadd dword ptr [esi + 0x70] */
    MEMF(esi + 0x70) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x44)); /* fmul dword ptr [esi + 0x44] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x74)); /* fadd dword ptr [esi + 0x74] */
    MEMF(esi + 0x74) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x48)); /* fmul dword ptr [esi + 0x48] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x78)); /* fadd dword ptr [esi + 0x78] */
    MEMF(esi + 0x78) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x4C)); /* fmul dword ptr [esi + 0x4c] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x7C)); /* fadd dword ptr [esi + 0x7c] */
    MEMF(esi + 0x7C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x58)); /* fld float */
    fp_push(MEMF(esi + 0x54)); /* fld float */
    fp_push(MEMF(esi + 0x50)); /* fld float */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 4) & 7]); /* fmul st(4) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    g_fp_stack[(g_fp_top + 3) & 7] = fp_top(); fp_pop(); /* fstp st(3) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0xC)); /* fmul dword ptr [esi + 0xc] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax)); /* fmul dword ptr [eax] */
    eax = esp + 0x14;
    PUSH32(esp, eax);
    MEMF(esi + 0x6C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x50)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x496B98)); /* fmul dword ptr [0x496b98] */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x54)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x496B98)); /* fmul dword ptr [0x496b98] */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x58)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x496B98)); /* fmul dword ptr [0x496b98] */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00210369u); RECOMP_ABI_CALL(0x0020DAC0u, sub_0020DAC0); /* call 0x0020DAC0 */

loc_00210369: ;
    ecx = MEM32(ebp + 8);
    fp_push(MEMF(ecx)); /* fld float */
    ecx = edi;
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edi)); /* fadd dword ptr [edi] */
    MEMF(edi) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edi + 4)); /* fadd dword ptr [edi + 4] */
    MEMF(edi + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edi + 8)); /* fadd dword ptr [edi + 8] */
    MEMF(edi + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edi + 0xC)); /* fadd dword ptr [edi + 0xc] */
    MEMF(edi + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002103A5u); RECOMP_ABI_CALL(0x001605D0u, sub_001605D0); /* call 0x001605D0 */

loc_002103A5: ;
    PUSH32(esp, edi);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002103ADu); RECOMP_ABI_CALL(0x002A7610u, sub_002A7610); /* call 0x002A7610 */

loc_002103AD: ;
    edx = esi + 0x20;
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    ecx = esp + 0x28;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002103BBu); RECOMP_ABI_CALL(0x001634D0u, sub_001634D0); /* call 0x001634D0 */

loc_002103BB: ;
    fp_push(MEMF(esi + 0x70)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x20)); /* fsub dword ptr [esp + 0x20] */
    POP32(esp, edi);
    fp_push(MEMF(esi + 0x74)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x20)); /* fsub dword ptr [esp + 0x20] */
    fp_push(MEMF(esi + 0x78)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x24)); /* fsub dword ptr [esp + 0x24] */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x14);
    fp_push(MEMF(esi + 0x7C)); /* fld float */
    MEM32(esi + 0xB8) = eax;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x28)); /* fsub dword ptr [esp + 0x28] */
    eax = MEM32(ebp + 0x10);
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x80;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x18);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEM32(esi + 0xBC) = ecx;
    MEMF(esi + 0xB0) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esi + 0xB4) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esi + 0x7C) = 0x3F800000;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00210420
 * Original: 0x00210420 - 0x00210436 (22 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00210420(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00210420: ;
    fp_push(MEMF(0x496454)); /* fld float */
    eax = MEM32(ecx);
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(esp + 4)); /* fdiv dword ptr [esp + 4] */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x00210433u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00210430u); } /* indirect call */
    }

loc_00210433: ;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00210440
 * Original: 0x00210440 - 0x00210446 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00210440(void)
{

loc_00210440: ;
    eax = 0x80;
    esp += 4; return; /* ret */

}

/**
 * sub_00210450
 * Original: 0x00210450 - 0x00210456 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00210450(void)
{

loc_00210450: ;
    eax = 4;
    esp += 4; return; /* ret */

}

/**
 * sub_00210460
 * Original: 0x00210460 - 0x0021048C (44 bytes, 15 insns)
 * CC: cdecl, 2 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00210460(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00210460: ;
    eax = MEM32(esp + 4);
    fp_push(MEMF(eax)); /* fld float */
    edx = MEM32(esp + 8);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx)); /* fmul dword ptr [edx] */
    MEMF(ecx) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 4)); /* fmul dword ptr [edx + 4] */
    MEMF(ecx + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 8)); /* fmul dword ptr [edx + 8] */
    MEMF(ecx + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + 0xC)); /* fmul dword ptr [edx + 0xc] */
    MEMF(ecx + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00210490
 * Original: 0x00210490 - 0x0021049C (12 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00210490(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00210490: ;
    eax = MEM32(esp + 4);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002104A0
 * Original: 0x002104A0 - 0x00210546 (166 bytes, 35 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002104A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002104A0: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x002104B4u); RECOMP_ABI_CALL(0x00205460u, sub_00205460); /* call 0x00205460 */

loc_002104B4: ;
    MEM32(esi) = 0x4B4500;
    eax = 0x3F800000;
    MEM32(esi + 0xE0) = eax;
    MEM32(esi + 0xE4) = eax;
    MEM32(esi + 0xE8) = eax;
    MEM32(esi + 0xEC) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0xFC) = eax;
    MEM32(esi + 0xF8) = eax;
    MEM32(esi + 0xF4) = eax;
    MEM32(esi + 0xF0) = eax;
    MEM32(esi + 0x10C) = eax;
    MEM32(esi + 0x108) = eax;
    MEM32(esi + 0x104) = eax;
    MEM32(esi + 0x100) = eax;
    MEM32(esi + 0xCC) = eax;
    MEM32(esi + 0xC8) = eax;
    MEM32(esi + 0xC4) = eax;
    MEM32(esi + 0xC0) = eax;
    MEM32(esi + 0xDC) = eax;
    MEM32(esi + 0xD8) = eax;
    MEM32(esi + 0xD4) = eax;
    MEM32(esi + 0xD0) = eax;
    MEM32(esi + 0x10) = 0xBF800000u;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00210550
 * Original: 0x00210550 - 0x002105B2 (98 bytes, 29 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00210550(void)
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

loc_00210550: ;
    PUSH32(esp, ecx);
    fp_push(MEMF(0x496454)); /* fld float */
    eax = MEM32(esp + 8);
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(ecx + 0xE0)); /* fdiv dword ptr [ecx + 0xe0] */
    fp_push(MEMF(0x496454)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(ecx + 0xE4)); /* fdiv dword ptr [ecx + 0xe4] */
    fp_push(MEMF(0x496454)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(ecx + 0xE8)); /* fdiv dword ptr [ecx + 0xe8] */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 4) = ecx;
    MEM32(eax) = ecx;
    MEM32(eax + 0x1C) = ecx;
    MEM32(eax + 0x18) = ecx;
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x2C) = ecx;
    MEM32(eax + 0x28) = ecx;
    MEM32(eax + 0x24) = ecx;
    MEM32(eax + 0x20) = ecx;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp);
    MEMF(eax + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(eax + 0x28) = ecx;
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_002105C0
 * Original: 0x002105C0 - 0x00210607 (71 bytes, 16 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_002105C0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_002105C0: ;
    eax = MEM32(esp + 4);
    fp_push(MEMF(0x496454)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(eax + 0x14)); /* fdiv dword ptr [eax + 0x14] */
    edx = MEM32(ecx + 0xEC);
    MEM32(esp + 4) = edx;
    fp_push(MEMF(0x496454)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(eax + 0x28)); /* fdiv dword ptr [eax + 0x28] */
    fp_push(MEMF(0x496454)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(eax)); /* fdiv dword ptr [eax] */
    eax = edx;
    MEM32(ecx + 0xEC) = eax;
    MEMF(ecx + 0xE0) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMF(ecx + 0xE4) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(ecx + 0xE8) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00210610
 * Original: 0x00210610 - 0x00210660 (80 bytes, 26 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00210610(void)
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

loc_00210610: ;
    PUSH32(esp, ecx);
    eax = MEM32(ecx + 0xE8);
    fp_push(MEMF(ecx + 0xE0)); /* fld float */
    fp_push(MEMF(ecx + 0xE4)); /* fld float */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp) = eax;
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    eax = MEM32(esp + 8);
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 4) = ecx;
    MEM32(eax) = ecx;
    MEM32(eax + 0x1C) = ecx;
    MEM32(eax + 0x18) = ecx;
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x2C) = ecx;
    MEM32(eax + 0x28) = ecx;
    MEM32(eax + 0x24) = ecx;
    MEM32(eax + 0x20) = ecx;
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp);
    MEMF(eax + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(eax + 0x28) = ecx;
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00210660
 * Original: 0x00210660 - 0x00210690 (48 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00210660(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00210660: ;
    fp_push(MEMF(ecx + 0xEC)); /* fld float */
    eax = MEM32(esp + 4);
    fp_push(MEMF(eax + 0x28)); /* fld float */
    fp_push(MEMF(eax + 0x14)); /* fld float */
    eax = MEM32(eax);
    MEMF(ecx + 0xE4) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(ecx + 0xE0) = eax;
    MEMF(ecx + 0xE8) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(ecx + 0xEC) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00210690
 * Original: 0x00210690 - 0x00210742 (178 bytes, 49 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00210690(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
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

loc_00210690: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    fp_push(MEMF(ecx + 0xE0)); /* fld float */
    eax = ecx + 0x80;
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    PUSH32(esp, eax);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax)); /* fmul dword ptr [eax] */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 4)); /* fmul dword ptr [eax + 4] */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 8)); /* fmul dword ptr [eax + 8] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0xC)); /* fmul dword ptr [eax + 0xc] */
    eax = esp + 4;
    PUSH32(esp, eax);
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 0xE4)); /* fld float */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x90)); /* fmul dword ptr [ecx + 0x90] */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x94)); /* fmul dword ptr [ecx + 0x94] */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x98)); /* fmul dword ptr [ecx + 0x98] */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x9C)); /* fmul dword ptr [ecx + 0x9c] */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 0xE8)); /* fld float */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0xA0)); /* fmul dword ptr [ecx + 0xa0] */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0xA4)); /* fmul dword ptr [ecx + 0xa4] */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0xA8)); /* fmul dword ptr [ecx + 0xa8] */
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0xAC)); /* fmul dword ptr [ecx + 0xac] */
    ecx = MEM32(ebp + 8);
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0021073Cu); RECOMP_ABI_CALL(0x002A8A70u, sub_002A8A70); /* call 0x002A8A70 */

loc_0021073C: ;
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
 * sub_00210750
 * Original: 0x00210750 - 0x002107BC (108 bytes, 32 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00210750(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
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

loc_00210750: ;
    PUSH32(esp, ecx);
    fp_push(MEMF(0x496454)); /* fld float */
    eax = MEM32(esp + 8);
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(ecx + 0xE0)); /* fdiv dword ptr [ecx + 0xe0] */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x80;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push(MEMF(0x496454)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(ecx + 0x64)); /* fdiv dword ptr [ecx + 0x64] */
    fp_push(MEMF(0x496454)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(ecx + 0x68)); /* fdiv dword ptr [ecx + 0x68] */
    MEM32(eax + 0xC) = edx;
    MEM32(eax + 8) = edx;
    MEM32(eax + 4) = edx;
    MEM32(eax) = edx;
    MEM32(eax + 0x1C) = edx;
    MEM32(eax + 0x18) = edx;
    MEM32(eax + 0x14) = edx;
    MEM32(eax + 0x10) = edx;
    MEM32(eax + 0x2C) = edx;
    MEM32(eax + 0x28) = edx;
    MEM32(eax + 0x24) = edx;
    MEM32(eax + 0x20) = edx;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp);
    MEMF(eax + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(eax + 0x28) = edx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 4) = ecx;
    ecx = eax;
    g_seh_ebp = ebp; sub_002A8B00(); return; /* tail jmp 0x002A8B00 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_002107C0
 * Original: 0x002107C0 - 0x002107D2 (18 bytes, 5 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002107C0(void)
{

loc_002107C0: ;
    eax = MEM32(esp + 4);
    edx = eax;
    MEM32(ecx + 0x2C) = eax;
    MEM32(ecx + 0xEC) = edx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002107E0
 * Original: 0x002107E0 - 0x00210822 (66 bytes, 14 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_002107E0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_002107E0: ;
    eax = MEM32(esp + 4);
    fp_push(MEMF(ecx + 0xF0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax)); /* fadd dword ptr [eax] */
    MEMF(ecx + 0xF0) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0xF4)); /* fadd dword ptr [ecx + 0xf4] */
    MEMF(ecx + 0xF4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0xF8)); /* fadd dword ptr [ecx + 0xf8] */
    MEMF(ecx + 0xF8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0xFC)); /* fadd dword ptr [ecx + 0xfc] */
    MEMF(ecx + 0xFC) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00210830
 * Original: 0x00210830 - 0x0021087C (76 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00210830(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00210830: ;
    eax = MEM32(esp + 4);
    fp_push(MEMF(ecx + 0x100)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax)); /* fadd dword ptr [eax] */
    MEMF(ecx + 0x100) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0x104)); /* fadd dword ptr [ecx + 0x104] */
    MEMF(ecx + 0x104) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0x108)); /* fadd dword ptr [ecx + 0x108] */
    MEMF(ecx + 0x108) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0x10C)); /* fadd dword ptr [ecx + 0x10c] */
    MEMF(ecx + 0x10C) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(ecx + 0x10C) = 0x3F800000;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00210880
 * Original: 0x00210880 - 0x002108D8 (88 bytes, 33 insns)
 * CC: cdecl, 2 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00210880(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00210880: ;
    eax = MEM32(esp + 8);
    fp_push(MEMF(eax)); /* fld float */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_push(MEMF(eax + 8)); /* fld float */
    eax = MEM32(esp + 4);
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 8)); /* fmul dword ptr [eax + 8] */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 4)); /* fmul dword ptr [eax + 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax)); /* fmul dword ptr [eax] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(ecx) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x18)); /* fmul dword ptr [eax + 0x18] */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x14)); /* fmul dword ptr [eax + 0x14] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x10)); /* fmul dword ptr [eax + 0x10] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(ecx + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x28)); /* fmul dword ptr [eax + 0x28] */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x24)); /* fmul dword ptr [eax + 0x24] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x20)); /* fmul dword ptr [eax + 0x20] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(ecx + 8) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(ecx + 0xC) = 0;
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_002108E0
 * Original: 0x002108E0 - 0x00210909 (41 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002108E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002108E0: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x4AE714;
    if (TEST_Z(_fa, _fb)) goto loc_00210903; /* je: equal / zero */

loc_002108F0: ;
    edx = ZX16(MEM16(esi + 4));
    ecx = MEM32(0x62EBAC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x25);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x00210903u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00210900u); } /* indirect call */
    }

loc_00210903: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00210910
 * Original: 0x00210910 - 0x00210A82 (370 bytes, 113 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns float_sse
 * Frame: standard_frame
 */
void sub_00210910(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
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

loc_00210910: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 8);
    fp_push(MEMF(ecx + 0x2C)); /* fld float */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    edx = MEM32(ebp + 0xC);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax)); /* fmul dword ptr [eax] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0x40)); /* fadd dword ptr [ecx + 0x40] */
    MEMF(ecx + 0x40) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 4)); /* fmul dword ptr [eax + 4] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0x44)); /* fadd dword ptr [ecx + 0x44] */
    MEMF(ecx + 0x44) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 8)); /* fmul dword ptr [eax + 8] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0x48)); /* fadd dword ptr [ecx + 0x48] */
    MEMF(ecx + 0x48) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0xC)); /* fmul dword ptr [eax + 0xc] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0x4C)); /* fadd dword ptr [ecx + 0x4c] */
    MEMF(ecx + 0x4C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edx)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + 0x70)); /* fsub dword ptr [ecx + 0x70] */
    fp_push(MEMF(edx + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + 0x74)); /* fsub dword ptr [ecx + 0x74] */
    fp_push(MEMF(edx + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + 0x78)); /* fsub dword ptr [ecx + 0x78] */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 8)); /* fmul dword ptr [eax + 8] */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 4)); /* fmul dword ptr [eax + 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax)); /* fmul dword ptr [eax] */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 8)); /* fmul dword ptr [eax + 8] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 4)); /* fmul dword ptr [eax + 4] */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax)); /* fmul dword ptr [eax] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x88)); /* fmul dword ptr [ecx + 0x88] */
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x84)); /* fmul dword ptr [ecx + 0x84] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x80)); /* fmul dword ptr [ecx + 0x80] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x98)); /* fmul dword ptr [ecx + 0x98] */
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x94)); /* fmul dword ptr [ecx + 0x94] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x90)); /* fmul dword ptr [ecx + 0x90] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0xA8)); /* fmul dword ptr [ecx + 0xa8] */
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0xA4)); /* fmul dword ptr [ecx + 0xa4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0xA0)); /* fmul dword ptr [ecx + 0xa0] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0xE0)); /* fmul dword ptr [ecx + 0xe0] */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0xE4)); /* fmul dword ptr [ecx + 0xe4] */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0xE8)); /* fmul dword ptr [ecx + 0xe8] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0xA0)); /* fmul dword ptr [ecx + 0xa0] */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x90)); /* fmul dword ptr [ecx + 0x90] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x80)); /* fmul dword ptr [ecx + 0x80] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0xA4)); /* fmul dword ptr [ecx + 0xa4] */
    eax = MEM32(ecx + 0x5C);
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x94)); /* fmul dword ptr [ecx + 0x94] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x84)); /* fmul dword ptr [ecx + 0x84] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0xA8)); /* fmul dword ptr [ecx + 0xa8] */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x98)); /* fmul dword ptr [ecx + 0x98] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x88)); /* fmul dword ptr [ecx + 0x88] */
    MEM32(ecx + 0x5C) = eax;
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0x50)); /* fadd dword ptr [ecx + 0x50] */
    MEMF(ecx + 0x50) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0x54)); /* fadd dword ptr [ecx + 0x54] */
    MEMF(ecx + 0x54) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0x58)); /* fadd dword ptr [ecx + 0x58] */
    MEMF(ecx + 0x58) = (float)fp_top(); fp_pop(); /* fstp */
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00210A90
 * Original: 0x00210A90 - 0x00210B94 (260 bytes, 76 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns float_sse
 * Frame: standard_frame
 */
void sub_00210A90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
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

loc_00210A90: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 8);
    fp_push(MEMF(eax)); /* fld float */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_push(MEMF(eax + 8)); /* fld float */
    eax = MEM32(ecx + 0x5C);
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x88)); /* fmul dword ptr [ecx + 0x88] */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x84)); /* fmul dword ptr [ecx + 0x84] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x80)); /* fmul dword ptr [ecx + 0x80] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x98)); /* fmul dword ptr [ecx + 0x98] */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x94)); /* fmul dword ptr [ecx + 0x94] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x90)); /* fmul dword ptr [ecx + 0x90] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0xA8)); /* fmul dword ptr [ecx + 0xa8] */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0xA4)); /* fmul dword ptr [ecx + 0xa4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0xA0)); /* fmul dword ptr [ecx + 0xa0] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0xE0)); /* fmul dword ptr [ecx + 0xe0] */
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0xE4)); /* fmul dword ptr [ecx + 0xe4] */
    { double _t = fp_top(); fp_top() = g_fp_stack[(g_fp_top + 2) & 7]; g_fp_stack[(g_fp_top + 2) & 7] = _t; } /* fxch st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0xE8)); /* fmul dword ptr [ecx + 0xe8] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0xA0)); /* fmul dword ptr [ecx + 0xa0] */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x90)); /* fmul dword ptr [ecx + 0x90] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x80)); /* fmul dword ptr [ecx + 0x80] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0xA4)); /* fmul dword ptr [ecx + 0xa4] */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x94)); /* fmul dword ptr [ecx + 0x94] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x84)); /* fmul dword ptr [ecx + 0x84] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0xA8)); /* fmul dword ptr [ecx + 0xa8] */
    { double _t = fp_top(); fp_top() = g_fp_stack[(g_fp_top + 2) & 7]; g_fp_stack[(g_fp_top + 2) & 7] = _t; } /* fxch st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x98)); /* fmul dword ptr [ecx + 0x98] */
    g_fp_stack[(g_fp_top + 2) & 7] = RECOMP_FP_PC(g_fp_stack[(g_fp_top + 2) & 7] + fp_top()); fp_pop(); /* faddp st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x88)); /* fmul dword ptr [ecx + 0x88] */
    MEM32(ecx + 0x5C) = eax;
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0x50)); /* fadd dword ptr [ecx + 0x50] */
    MEMF(ecx + 0x50) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0x54)); /* fadd dword ptr [ecx + 0x54] */
    MEMF(ecx + 0x54) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0x58)); /* fadd dword ptr [ecx + 0x58] */
    MEMF(ecx + 0x58) = (float)fp_top(); fp_pop(); /* fstp */
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
 * sub_00210BA0
 * Original: 0x00210BA0 - 0x00210C69 (201 bytes, 54 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00210BA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
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

loc_00210BA0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 8);
    fp_push(MEMF(eax)); /* fld float */
    edx = MEM32(ebp + 0xC);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0xF0)); /* fadd dword ptr [ecx + 0xf0] */
    MEMF(ecx + 0xF0) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0xF4)); /* fadd dword ptr [ecx + 0xf4] */
    MEMF(ecx + 0xF4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0xF8)); /* fadd dword ptr [ecx + 0xf8] */
    MEMF(ecx + 0xF8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0xFC)); /* fadd dword ptr [ecx + 0xfc] */
    MEMF(ecx + 0xFC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edx)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + 0x70)); /* fsub dword ptr [ecx + 0x70] */
    fp_push(MEMF(edx + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + 0x74)); /* fsub dword ptr [ecx + 0x74] */
    fp_push(MEMF(edx + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + 0x78)); /* fsub dword ptr [ecx + 0x78] */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 8)); /* fmul dword ptr [eax + 8] */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 4)); /* fmul dword ptr [eax + 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax)); /* fmul dword ptr [eax] */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 8)); /* fmul dword ptr [eax + 8] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 4)); /* fmul dword ptr [eax + 4] */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax)); /* fmul dword ptr [eax] */
    eax = MEM32(ecx + 0x10C);
    MEM32(ecx + 0x10C) = eax;
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    fp_push(MEMF(esp)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0x100)); /* fadd dword ptr [ecx + 0x100] */
    MEMF(ecx + 0x100) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0x104)); /* fadd dword ptr [ecx + 0x104] */
    MEMF(ecx + 0x104) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0x108)); /* fadd dword ptr [ecx + 0x108] */
    MEMF(ecx + 0x108) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(ecx + 0x10C) = 0x3F800000;
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00210C70
 * Original: 0x00210C70 - 0x00210DD8 (360 bytes, 119 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00210C70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
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

loc_00210C70: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x70);
    MEM32(esi + 0x60) = eax;
    ecx = MEM32(esi + 0x74);
    MEM32(esi + 0x64) = ecx;
    edx = MEM32(esi + 0x78);
    MEM32(esi + 0x68) = edx;
    eax = MEM32(esi + 0x7C);
    MEM32(esi + 0x6C) = eax;
    fp_push(MEMF(ebx)); /* fld float */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    PUSH32(esp, edi);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x40)); /* fmul dword ptr [esi + 0x40] */
    edi = esi + 0x30;
    PUSH32(esp, edi);
    ecx = esp + 0x14;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x70)); /* fadd dword ptr [esi + 0x70] */
    PUSH32(esp, ecx);
    ecx = esp + 0x28;
    MEM32(esp + 0x24) = 0;
    MEMF(esi + 0x70) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x44)); /* fmul dword ptr [esi + 0x44] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x74)); /* fadd dword ptr [esi + 0x74] */
    MEMF(esi + 0x74) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x48)); /* fmul dword ptr [esi + 0x48] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x78)); /* fadd dword ptr [esi + 0x78] */
    MEMF(esi + 0x78) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x4C)); /* fmul dword ptr [esi + 0x4c] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x7C)); /* fadd dword ptr [esi + 0x7c] */
    MEMF(esi + 0x7C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x58)); /* fld float */
    fp_push(MEMF(esi + 0x54)); /* fld float */
    fp_push(MEMF(esi + 0x50)); /* fld float */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 4) & 7]); /* fmul st(4) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    g_fp_stack[(g_fp_top + 3) & 7] = fp_top(); fp_pop(); /* fstp st(3) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0xC)); /* fmul dword ptr [esi + 0xc] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx)); /* fmul dword ptr [ebx] */
    MEMF(esi + 0x6C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x50)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x496B98)); /* fmul dword ptr [0x496b98] */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x54)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x496B98)); /* fmul dword ptr [0x496b98] */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x58)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x496B98)); /* fmul dword ptr [0x496b98] */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00210D2Fu); RECOMP_ABI_CALL(0x0020DAC0u, sub_0020DAC0); /* call 0x0020DAC0 */

loc_00210D2F: ;
    fp_push(MEMF(ebx)); /* fld float */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edi)); /* fadd dword ptr [edi] */
    MEMF(edi) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edi + 4)); /* fadd dword ptr [edi + 4] */
    MEMF(edi + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edi + 8)); /* fadd dword ptr [edi + 8] */
    MEMF(edi + 8) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = edi;
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edi + 0xC)); /* fadd dword ptr [edi + 0xc] */
    MEMF(edi + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00210D68u); RECOMP_ABI_CALL(0x001605D0u, sub_001605D0); /* call 0x001605D0 */

loc_00210D68: ;
    PUSH32(esp, edi);
    ecx = esi + 0x80;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00210D74u); RECOMP_ABI_CALL(0x002A7610u, sub_002A7610); /* call 0x002A7610 */

loc_00210D74: ;
    edx = esi + 0x20;
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    ecx = esp + 0x28;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00210D82u); RECOMP_ABI_CALL(0x001634D0u, sub_001634D0); /* call 0x001634D0 */

loc_00210D82: ;
    fp_push(MEMF(esi + 0x70)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x20)); /* fsub dword ptr [esp + 0x20] */
    POP32(esp, edi);
    fp_push(MEMF(esi + 0x74)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x20)); /* fsub dword ptr [esp + 0x20] */
    fp_push(MEMF(esi + 0x78)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x24)); /* fsub dword ptr [esp + 0x24] */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x14);
    fp_push(MEMF(esi + 0x7C)); /* fld float */
    MEM32(esi + 0xB8) = eax;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x28)); /* fsub dword ptr [esp + 0x28] */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x18);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEM32(esi + 0xBC) = ecx;
    MEMF(esi + 0xB0) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esi + 0xB4) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esi + 0x7C) = 0x3F800000;
    POP32(esp, esi);
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
 * sub_00210DE0
 * Original: 0x00210DE0 - 0x00210F48 (360 bytes, 119 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00210DE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
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

loc_00210DE0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x70);
    MEM32(esi + 0x60) = eax;
    ecx = MEM32(esi + 0x74);
    MEM32(esi + 0x64) = ecx;
    edx = MEM32(esi + 0x78);
    MEM32(esi + 0x68) = edx;
    eax = MEM32(esi + 0x7C);
    MEM32(esi + 0x6C) = eax;
    fp_push(MEMF(ebx)); /* fld float */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    PUSH32(esp, edi);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x40)); /* fmul dword ptr [esi + 0x40] */
    edi = esi + 0x30;
    PUSH32(esp, edi);
    ecx = esp + 0x14;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x70)); /* fadd dword ptr [esi + 0x70] */
    PUSH32(esp, ecx);
    ecx = esp + 0x28;
    MEM32(esp + 0x24) = 0;
    MEMF(esi + 0x70) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x44)); /* fmul dword ptr [esi + 0x44] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x74)); /* fadd dword ptr [esi + 0x74] */
    MEMF(esi + 0x74) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x48)); /* fmul dword ptr [esi + 0x48] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x78)); /* fadd dword ptr [esi + 0x78] */
    MEMF(esi + 0x78) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x4C)); /* fmul dword ptr [esi + 0x4c] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x7C)); /* fadd dword ptr [esi + 0x7c] */
    MEMF(esi + 0x7C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x58)); /* fld float */
    fp_push(MEMF(esi + 0x54)); /* fld float */
    fp_push(MEMF(esi + 0x50)); /* fld float */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 4) & 7]); /* fmul st(4) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    g_fp_stack[(g_fp_top + 3) & 7] = fp_top(); fp_pop(); /* fstp st(3) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0xC)); /* fmul dword ptr [esi + 0xc] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx)); /* fmul dword ptr [ebx] */
    MEMF(esi + 0x6C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x50)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x496B98)); /* fmul dword ptr [0x496b98] */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x54)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x496B98)); /* fmul dword ptr [0x496b98] */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x58)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x496B98)); /* fmul dword ptr [0x496b98] */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00210E9Fu); RECOMP_ABI_CALL(0x0020DAC0u, sub_0020DAC0); /* call 0x0020DAC0 */

loc_00210E9F: ;
    fp_push(MEMF(ebx)); /* fld float */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edi)); /* fadd dword ptr [edi] */
    MEMF(edi) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edi + 4)); /* fadd dword ptr [edi + 4] */
    MEMF(edi + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edi + 8)); /* fadd dword ptr [edi + 8] */
    MEMF(edi + 8) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = edi;
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edi + 0xC)); /* fadd dword ptr [edi + 0xc] */
    MEMF(edi + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00210ED8u); RECOMP_ABI_CALL(0x001605D0u, sub_001605D0); /* call 0x001605D0 */

loc_00210ED8: ;
    PUSH32(esp, edi);
    ecx = esi + 0x80;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00210EE4u); RECOMP_ABI_CALL(0x002A7610u, sub_002A7610); /* call 0x002A7610 */

loc_00210EE4: ;
    edx = esi + 0x20;
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    ecx = esp + 0x28;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00210EF2u); RECOMP_ABI_CALL(0x001634D0u, sub_001634D0); /* call 0x001634D0 */

loc_00210EF2: ;
    fp_push(MEMF(esi + 0x70)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x20)); /* fsub dword ptr [esp + 0x20] */
    POP32(esp, edi);
    fp_push(MEMF(esi + 0x74)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x20)); /* fsub dword ptr [esp + 0x20] */
    fp_push(MEMF(esi + 0x78)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x24)); /* fsub dword ptr [esp + 0x24] */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x14);
    fp_push(MEMF(esi + 0x7C)); /* fld float */
    MEM32(esi + 0xB8) = eax;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x28)); /* fsub dword ptr [esp + 0x28] */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x18);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEM32(esi + 0xBC) = ecx;
    MEMF(esi + 0xB0) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esi + 0xB4) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esi + 0x7C) = 0x3F800000;
    POP32(esp, esi);
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
 * sub_00210F50
 * Original: 0x00210F50 - 0x0021112A (474 bytes, 134 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00210F50(void)
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

loc_00210F50: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = MEM32(esi);
    MEM32(esp + 0xC) = eax;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    eax = MEM32(ebp + 0xC);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x2C)); /* fmul dword ptr [ecx + 0x2c] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0xF0)); /* fmul dword ptr [ecx + 0xf0] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0x40)); /* fadd dword ptr [ecx + 0x40] */
    MEMF(ecx + 0x40) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0xF4)); /* fmul dword ptr [ecx + 0xf4] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0x44)); /* fadd dword ptr [ecx + 0x44] */
    MEMF(ecx + 0x44) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0xF8)); /* fmul dword ptr [ecx + 0xf8] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0x48)); /* fadd dword ptr [ecx + 0x48] */
    MEMF(ecx + 0x48) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0xFC)); /* fmul dword ptr [ecx + 0xfc] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0x4C)); /* fadd dword ptr [ecx + 0x4c] */
    MEMF(ecx + 0x4C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax)); /* fmul dword ptr [eax] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0x40)); /* fadd dword ptr [ecx + 0x40] */
    MEMF(ecx + 0x40) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 4)); /* fmul dword ptr [eax + 4] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0x44)); /* fadd dword ptr [ecx + 0x44] */
    MEMF(ecx + 0x44) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 8)); /* fmul dword ptr [eax + 8] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0x48)); /* fadd dword ptr [ecx + 0x48] */
    MEMF(ecx + 0x48) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0xC)); /* fmul dword ptr [eax + 0xc] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0x4C)); /* fadd dword ptr [ecx + 0x4c] */
    MEMF(ecx + 0x4C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x14)); /* fmul dword ptr [ecx + 0x14] */
    fp_top() = RECOMP_FP_PC(MEMF(0x496454) - fp_top()); /* fsubr dword ptr [0x496454] */
    fp_push(MEMF(0x4964E8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00210FFA; /* jne: not equal / not zero */

loc_00210FF2: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x4964E8)); /* fld float */

loc_00210FFA: ;
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x40)); /* fmul dword ptr [ecx + 0x40] */
    MEMF(ecx + 0x40) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x44)); /* fmul dword ptr [ecx + 0x44] */
    MEMF(ecx + 0x44) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x48)); /* fmul dword ptr [ecx + 0x48] */
    MEMF(ecx + 0x48) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x4C)); /* fmul dword ptr [ecx + 0x4c] */
    MEMF(ecx + 0x4C) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(ecx + 0xFC) = edx;
    fp_push(MEMF(0x4964E8)); /* fld float */
    MEM32(ecx + 0xF8) = edx;
    MEM32(ecx + 0xF4) = edx;
    MEM32(ecx + 0xF0) = edx;
    fp_push(MEMF(ecx + 0x10C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00211099; /* jnp: not parity */

loc_00211047: ;
    fp_push(MEMF(esi)); /* fld float */
    eax = esp + 0x10;
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    PUSH32(esp, eax);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x100)); /* fmul dword ptr [ecx + 0x100] */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x104)); /* fmul dword ptr [ecx + 0x104] */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x108)); /* fmul dword ptr [ecx + 0x108] */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x10C)); /* fmul dword ptr [ecx + 0x10c] */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00211081u); RECOMP_ABI_CALL(0x00210A90u, sub_00210A90); /* call 0x00210A90 */

loc_00211081: ;
    MEM32(ecx + 0x10C) = edx;
    MEM32(ecx + 0x108) = edx;
    MEM32(ecx + 0x104) = edx;
    MEM32(ecx + 0x100) = edx;

loc_00211099: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x18)); /* fmul dword ptr [ecx + 0x18] */
    fp_top() = RECOMP_FP_PC(MEMF(0x496454) - fp_top()); /* fsubr dword ptr [0x496454] */
    fp_push(MEMF(0x4964E8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002110BD; /* jne: not equal / not zero */

loc_002110B5: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x4964E8)); /* fld float */

loc_002110BD: ;
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    POP32(esp, esi);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x50)); /* fmul dword ptr [ecx + 0x50] */
    MEMF(ecx + 0x50) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x54)); /* fmul dword ptr [ecx + 0x54] */
    MEMF(ecx + 0x54) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x58)); /* fmul dword ptr [ecx + 0x58] */
    MEMF(ecx + 0x58) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x5C)); /* fmul dword ptr [ecx + 0x5c] */
    MEMF(ecx + 0x5C) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(ecx + 0x40);
    MEM32(ecx + 0xC0) = edx;
    eax = MEM32(ecx + 0x44);
    MEM32(ecx + 0xC4) = eax;
    edx = MEM32(ecx + 0x48);
    MEM32(ecx + 0xC8) = edx;
    eax = MEM32(ecx + 0x4C);
    MEM32(ecx + 0xCC) = eax;
    edx = MEM32(ecx + 0x50);
    MEM32(ecx + 0xD0) = edx;
    eax = MEM32(ecx + 0x54);
    MEM32(ecx + 0xD4) = eax;
    edx = MEM32(ecx + 0x58);
    MEM32(ecx + 0xD8) = edx;
    eax = MEM32(ecx + 0x5C);
    MEM32(ecx + 0xDC) = eax;
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00211130
 * Original: 0x00211130 - 0x0021130A (474 bytes, 134 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00211130(void)
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

loc_00211130: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = MEM32(esi);
    MEM32(esp + 0xC) = eax;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    eax = MEM32(ebp + 0xC);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x2C)); /* fmul dword ptr [ecx + 0x2c] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0xF0)); /* fmul dword ptr [ecx + 0xf0] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0x40)); /* fadd dword ptr [ecx + 0x40] */
    MEMF(ecx + 0x40) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0xF4)); /* fmul dword ptr [ecx + 0xf4] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0x44)); /* fadd dword ptr [ecx + 0x44] */
    MEMF(ecx + 0x44) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0xF8)); /* fmul dword ptr [ecx + 0xf8] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0x48)); /* fadd dword ptr [ecx + 0x48] */
    MEMF(ecx + 0x48) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0xFC)); /* fmul dword ptr [ecx + 0xfc] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0x4C)); /* fadd dword ptr [ecx + 0x4c] */
    MEMF(ecx + 0x4C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax)); /* fmul dword ptr [eax] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0x40)); /* fadd dword ptr [ecx + 0x40] */
    MEMF(ecx + 0x40) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 4)); /* fmul dword ptr [eax + 4] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0x44)); /* fadd dword ptr [ecx + 0x44] */
    MEMF(ecx + 0x44) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 8)); /* fmul dword ptr [eax + 8] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0x48)); /* fadd dword ptr [ecx + 0x48] */
    MEMF(ecx + 0x48) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0xC)); /* fmul dword ptr [eax + 0xc] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0x4C)); /* fadd dword ptr [ecx + 0x4c] */
    MEMF(ecx + 0x4C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x14)); /* fmul dword ptr [ecx + 0x14] */
    fp_top() = RECOMP_FP_PC(MEMF(0x496454) - fp_top()); /* fsubr dword ptr [0x496454] */
    fp_push(MEMF(0x4964E8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002111DA; /* jne: not equal / not zero */

loc_002111D2: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x4964E8)); /* fld float */

loc_002111DA: ;
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x40)); /* fmul dword ptr [ecx + 0x40] */
    MEMF(ecx + 0x40) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x44)); /* fmul dword ptr [ecx + 0x44] */
    MEMF(ecx + 0x44) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x48)); /* fmul dword ptr [ecx + 0x48] */
    MEMF(ecx + 0x48) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x4C)); /* fmul dword ptr [ecx + 0x4c] */
    MEMF(ecx + 0x4C) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(ecx + 0xFC) = edx;
    fp_push(MEMF(0x4964E8)); /* fld float */
    MEM32(ecx + 0xF8) = edx;
    MEM32(ecx + 0xF4) = edx;
    MEM32(ecx + 0xF0) = edx;
    fp_push(MEMF(ecx + 0x10C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00211279; /* jnp: not parity */

loc_00211227: ;
    fp_push(MEMF(esi)); /* fld float */
    eax = esp + 0x10;
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    PUSH32(esp, eax);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x100)); /* fmul dword ptr [ecx + 0x100] */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x104)); /* fmul dword ptr [ecx + 0x104] */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x108)); /* fmul dword ptr [ecx + 0x108] */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x10C)); /* fmul dword ptr [ecx + 0x10c] */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00211261u); RECOMP_ABI_CALL(0x00210A90u, sub_00210A90); /* call 0x00210A90 */

loc_00211261: ;
    MEM32(ecx + 0x10C) = edx;
    MEM32(ecx + 0x108) = edx;
    MEM32(ecx + 0x104) = edx;
    MEM32(ecx + 0x100) = edx;

loc_00211279: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x18)); /* fmul dword ptr [ecx + 0x18] */
    fp_top() = RECOMP_FP_PC(MEMF(0x496454) - fp_top()); /* fsubr dword ptr [0x496454] */
    fp_push(MEMF(0x4964E8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0021129D; /* jne: not equal / not zero */

loc_00211295: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x4964E8)); /* fld float */

loc_0021129D: ;
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    POP32(esp, esi);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x50)); /* fmul dword ptr [ecx + 0x50] */
    MEMF(ecx + 0x50) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x54)); /* fmul dword ptr [ecx + 0x54] */
    MEMF(ecx + 0x54) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x58)); /* fmul dword ptr [ecx + 0x58] */
    MEMF(ecx + 0x58) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x5C)); /* fmul dword ptr [ecx + 0x5c] */
    MEMF(ecx + 0x5C) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(ecx + 0x40);
    MEM32(ecx + 0xC0) = edx;
    eax = MEM32(ecx + 0x44);
    MEM32(ecx + 0xC4) = eax;
    edx = MEM32(ecx + 0x48);
    MEM32(ecx + 0xC8) = edx;
    eax = MEM32(ecx + 0x4C);
    MEM32(ecx + 0xCC) = eax;
    edx = MEM32(ecx + 0x50);
    MEM32(ecx + 0xD0) = edx;
    eax = MEM32(ecx + 0x54);
    MEM32(ecx + 0xD4) = eax;
    edx = MEM32(ecx + 0x58);
    MEM32(ecx + 0xD8) = edx;
    eax = MEM32(ecx + 0x5C);
    MEM32(ecx + 0xDC) = eax;
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00211310
 * Original: 0x00211310 - 0x002115B6 (678 bytes, 203 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00211310(void)
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

loc_00211310: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(ebp + 8);
    eax = MEM32(ecx);
    MEM32(esp + 8) = eax;
    fp_push(MEMF(esp + 8)); /* fld float */
    eax = MEM32(ebp + 0xC);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x2C)); /* fmul dword ptr [esi + 0x2c] */
    PUSH32(esp, edi);
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0xF0)); /* fmul dword ptr [esi + 0xf0] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x40)); /* fadd dword ptr [esi + 0x40] */
    MEMF(esi + 0x40) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0xF4)); /* fmul dword ptr [esi + 0xf4] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x44)); /* fadd dword ptr [esi + 0x44] */
    MEMF(esi + 0x44) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0xF8)); /* fmul dword ptr [esi + 0xf8] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x48)); /* fadd dword ptr [esi + 0x48] */
    MEMF(esi + 0x48) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0xFC)); /* fmul dword ptr [esi + 0xfc] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x4C)); /* fadd dword ptr [esi + 0x4c] */
    MEMF(esi + 0x4C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax)); /* fmul dword ptr [eax] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x40)); /* fadd dword ptr [esi + 0x40] */
    MEMF(esi + 0x40) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 4)); /* fmul dword ptr [eax + 4] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x44)); /* fadd dword ptr [esi + 0x44] */
    MEMF(esi + 0x44) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 8)); /* fmul dword ptr [eax + 8] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x48)); /* fadd dword ptr [esi + 0x48] */
    MEMF(esi + 0x48) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0xC)); /* fmul dword ptr [eax + 0xc] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x4C)); /* fadd dword ptr [esi + 0x4c] */
    MEMF(esi + 0x4C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x14)); /* fmul dword ptr [esi + 0x14] */
    fp_top() = RECOMP_FP_PC(MEMF(0x496454) - fp_top()); /* fsubr dword ptr [0x496454] */
    fp_push(MEMF(0x4964E8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002113BE; /* jne: not equal / not zero */

loc_002113B6: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x4964E8)); /* fld float */

loc_002113BE: ;
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x40)); /* fmul dword ptr [esi + 0x40] */
    MEMF(esi + 0x40) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x44)); /* fmul dword ptr [esi + 0x44] */
    MEMF(esi + 0x44) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x48)); /* fmul dword ptr [esi + 0x48] */
    MEMF(esi + 0x48) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x4C)); /* fmul dword ptr [esi + 0x4c] */
    MEMF(esi + 0x4C) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esi + 0xFC) = edx;
    fp_push(MEMF(0x4964E8)); /* fld float */
    MEM32(esi + 0xF8) = edx;
    MEM32(esi + 0xF4) = edx;
    MEM32(esi + 0xF0) = edx;
    fp_push(MEMF(esi + 0x10C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0021145F; /* jnp: not parity */

loc_0021140B: ;
    fp_push(MEMF(ecx)); /* fld float */
    ecx = esp + 0x10;
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    PUSH32(esp, ecx);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x100)); /* fmul dword ptr [esi + 0x100] */
    ecx = esi;
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x104)); /* fmul dword ptr [esi + 0x104] */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x108)); /* fmul dword ptr [esi + 0x108] */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x10C)); /* fmul dword ptr [esi + 0x10c] */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00211447u); RECOMP_ABI_CALL(0x00210A90u, sub_00210A90); /* call 0x00210A90 */

loc_00211447: ;
    MEM32(esi + 0x10C) = edx;
    MEM32(esi + 0x108) = edx;
    MEM32(esi + 0x104) = edx;
    MEM32(esi + 0x100) = edx;

loc_0021145F: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x18)); /* fmul dword ptr [esi + 0x18] */
    fp_top() = RECOMP_FP_PC(MEMF(0x496454) - fp_top()); /* fsubr dword ptr [0x496454] */
    fp_push(MEMF(0x4964E8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00211483; /* jne: not equal / not zero */

loc_0021147B: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x4964E8)); /* fld float */

loc_00211483: ;
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    edi = MEM32(ebp + 0x10);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x50)); /* fmul dword ptr [esi + 0x50] */
    ebx = edi + 0x50;
    MEMF(esi + 0x50) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x54)); /* fmul dword ptr [esi + 0x54] */
    MEMF(esi + 0x54) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x58)); /* fmul dword ptr [esi + 0x58] */
    MEMF(esi + 0x58) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x5C)); /* fmul dword ptr [esi + 0x5c] */
    MEMF(esi + 0x5C) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esi + 0x40);
    MEM32(esi + 0xC0) = edx;
    eax = MEM32(esi + 0x44);
    MEM32(esi + 0xC4) = eax;
    ecx = MEM32(esi + 0x48);
    MEM32(esi + 0xC8) = ecx;
    edx = MEM32(esi + 0x4C);
    MEM32(esi + 0xCC) = edx;
    eax = MEM32(esi + 0x50);
    MEM32(esi + 0xD0) = eax;
    ecx = MEM32(esi + 0x54);
    MEM32(esi + 0xD4) = ecx;
    edx = MEM32(esi + 0x58);
    ecx = esi + 0x80;
    MEM32(esi + 0xD8) = edx;
    eax = MEM32(esi + 0x5C);
    PUSH32(esp, ecx);
    ecx = ebx;
    MEM32(esi + 0xDC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002114FDu); RECOMP_ABI_CALL(0x002A8310u, sub_002A8310); /* call 0x002A8310 */

loc_002114FD: ;
    MEM8(edi) = 2;
    edx = MEM32(esi + 0xE0);
    MEM32(edi + 0x30) = edx;
    eax = MEM32(esi + 0xE4);
    MEM32(edi + 0x34) = eax;
    ecx = MEM32(esi + 0xE8);
    MEM32(edi + 0x38) = ecx;
    edx = MEM32(esi + 0xEC);
    MEM32(edi + 0x3C) = edx;
    eax = MEM32(esi + 0x40);
    MEM32(edi + 0x10) = eax;
    ecx = MEM32(esi + 0x44);
    MEM32(edi + 0x14) = ecx;
    edx = MEM32(esi + 0x48);
    MEM32(edi + 0x18) = edx;
    eax = MEM32(esi + 0x4C);
    MEM32(edi + 0x1C) = eax;
    ecx = MEM32(esi + 0x70);
    MEM32(edi + 0x40) = ecx;
    edx = MEM32(esi + 0x74);
    MEM32(edi + 0x44) = edx;
    eax = MEM32(esi + 0x78);
    MEM32(edi + 0x48) = eax;
    ecx = MEM32(esi + 0x7C);
    MEM32(edi + 0x4C) = ecx;
    fp_push(MEMF(esi + 0x50)); /* fld float */
    fp_push(MEMF(esi + 0x54)); /* fld float */
    fp_push(MEMF(esi + 0x58)); /* fld float */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx + 0x20)); /* fmul dword ptr [ebx + 0x20] */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx + 0x10)); /* fmul dword ptr [ebx + 0x10] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx)); /* fmul dword ptr [ebx] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(edi + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx + 0x24)); /* fmul dword ptr [ebx + 0x24] */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx + 0x14)); /* fmul dword ptr [ebx + 0x14] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx + 4)); /* fmul dword ptr [ebx + 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(edi + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx + 0x28)); /* fmul dword ptr [ebx + 0x28] */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx + 0x18)); /* fmul dword ptr [ebx + 0x18] */
    eax = edi + 0x80;
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx + 8)); /* fmul dword ptr [ebx + 8] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(edi + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(edi + 0x2C) = 0;
    MEM8(edi + 0xC) = 0;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_002115C0
 * Original: 0x002115C0 - 0x00211861 (673 bytes, 209 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002115C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
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

loc_002115C0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0x10);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx + 0x40)); /* fmul dword ptr [ebx + 0x40] */
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    MEMF(esi + 0x40) = (float)fp_top(); fp_pop(); /* fstp */
    edi = esi + 0x50;
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx + 0x44)); /* fmul dword ptr [ebx + 0x44] */
    MEMF(esi + 0x44) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx + 0x48)); /* fmul dword ptr [ebx + 0x48] */
    MEMF(esi + 0x48) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx + 0x4C)); /* fmul dword ptr [ebx + 0x4c] */
    MEMF(esi + 0x4C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebx + 0x50)); /* fld float */
    fp_push(MEMF(ebx + 0x54)); /* fld float */
    fp_push(MEMF(ebx + 0x58)); /* fld float */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0xA0)); /* fmul dword ptr [esi + 0xa0] */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x90)); /* fmul dword ptr [esi + 0x90] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x80)); /* fmul dword ptr [esi + 0x80] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0xA4)); /* fmul dword ptr [esi + 0xa4] */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x94)); /* fmul dword ptr [esi + 0x94] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x84)); /* fmul dword ptr [esi + 0x84] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0xA8)); /* fmul dword ptr [esi + 0xa8] */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x98)); /* fmul dword ptr [esi + 0x98] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x88)); /* fmul dword ptr [esi + 0x88] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + 0xC)); /* fmul dword ptr [ebp + 0xc] */
    MEMF(edi) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + 0xC)); /* fmul dword ptr [ebp + 0xc] */
    MEMF(edi + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + 0xC)); /* fmul dword ptr [ebp + 0xc] */
    MEMF(edi + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x4964E8)); /* fmul dword ptr [0x4964e8] */
    MEMF(edi + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esi + 0x40);
    MEM32(esi + 0xC0) = eax;
    ecx = MEM32(esi + 0x44);
    MEM32(esi + 0xC4) = ecx;
    edx = MEM32(esi + 0x48);
    MEM32(esi + 0xC8) = edx;
    eax = MEM32(esi + 0x4C);
    MEM32(esi + 0xCC) = eax;
    ecx = MEM32(edi);
    MEM32(esi + 0xD0) = ecx;
    edx = MEM32(edi + 4);
    MEM32(esi + 0xD4) = edx;
    eax = MEM32(edi + 8);
    MEM32(esi + 0xD8) = eax;
    ecx = MEM32(edi + 0xC);
    MEM32(esi + 0xDC) = ecx;
    edx = MEM32(esi + 0x70);
    MEM32(esi + 0x60) = edx;
    eax = MEM32(esi + 0x74);
    MEM32(esi + 0x64) = eax;
    ecx = MEM32(esi + 0x78);
    MEM32(esi + 0x68) = ecx;
    edx = MEM32(esi + 0x7C);
    MEM32(esi + 0x6C) = edx;
    eax = MEM32(ebp + 8);
    fp_push(MEMF(eax)); /* fld float */
    ecx = esp + 0x20;
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    MEM32(esp + 0x1C) = 0;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x40)); /* fmul dword ptr [esi + 0x40] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x70)); /* fadd dword ptr [esi + 0x70] */
    MEMF(esi + 0x70) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x44)); /* fmul dword ptr [esi + 0x44] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x74)); /* fadd dword ptr [esi + 0x74] */
    MEMF(esi + 0x74) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x48)); /* fmul dword ptr [esi + 0x48] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x78)); /* fadd dword ptr [esi + 0x78] */
    MEMF(esi + 0x78) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x4C)); /* fmul dword ptr [esi + 0x4c] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x7C)); /* fadd dword ptr [esi + 0x7c] */
    MEMF(esi + 0x7C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edi + 8)); /* fld float */
    fp_push(MEMF(edi + 4)); /* fld float */
    fp_push(MEMF(edi)); /* fld float */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 4) & 7]); /* fmul st(4) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    g_fp_stack[(g_fp_top + 3) & 7] = fp_top(); fp_pop(); /* fstp st(3) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0xC)); /* fmul dword ptr [esi + 0xc] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax)); /* fmul dword ptr [eax] */
    eax = esi + 0x30;
    PUSH32(esp, eax);
    eax = esp + 0x14;
    MEMF(esi + 0x6C) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, eax);
    fp_push(MEMF(edi)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x496B98)); /* fmul dword ptr [0x496b98] */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edi + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x496B98)); /* fmul dword ptr [0x496b98] */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edi + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x496B98)); /* fmul dword ptr [0x496b98] */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00211776u); RECOMP_ABI_CALL(0x0020DAC0u, sub_0020DAC0); /* call 0x0020DAC0 */

loc_00211776: ;
    ecx = MEM32(ebp + 8);
    fp_push(MEMF(ecx)); /* fld float */
    ecx = esi + 0x30;
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx)); /* fadd dword ptr [ecx] */
    MEMF(ecx) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 4)); /* fadd dword ptr [ecx + 4] */
    MEMF(ecx + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 8)); /* fadd dword ptr [ecx + 8] */
    MEMF(ecx + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0xC)); /* fadd dword ptr [ecx + 0xc] */
    MEMF(ecx + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002117B3u); RECOMP_ABI_CALL(0x001605D0u, sub_001605D0); /* call 0x001605D0 */

loc_002117B3: ;
    eax = esi + 0x30;
    PUSH32(esp, eax);
    ecx = esi + 0x80;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002117C2u); RECOMP_ABI_CALL(0x002A7610u, sub_002A7610); /* call 0x002A7610 */

loc_002117C2: ;
    edx = esi + 0x20;
    PUSH32(esp, edx);
    eax = esi + 0x30;
    PUSH32(esp, eax);
    ecx = esp + 0x28;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002117D3u); RECOMP_ABI_CALL(0x001634D0u, sub_001634D0); /* call 0x001634D0 */

loc_002117D3: ;
    fp_push(MEMF(esi + 0x70)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x20)); /* fsub dword ptr [esp + 0x20] */
    fp_push(MEMF(esi + 0x74)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x24)); /* fsub dword ptr [esp + 0x24] */
    fp_push(MEMF(esi + 0x78)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x28)); /* fsub dword ptr [esp + 0x28] */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x18);
    fp_push(MEMF(esi + 0x7C)); /* fld float */
    MEM32(esi + 0xB8) = eax;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x2C)); /* fsub dword ptr [esp + 0x2c] */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x1C);
    MEM32(esi + 0xBC) = ecx;
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMF(esi + 0xB0) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esi + 0xB4) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esi + 0x7C) = 0x3F800000;
    edx = MEM32(ebx + 0x10);
    MEM32(esi + 0x40) = edx;
    eax = MEM32(ebx + 0x14);
    MEM32(esi + 0x44) = eax;
    ecx = MEM32(ebx + 0x18);
    eax = ebx + 0x20;
    PUSH32(esp, eax);
    MEM32(esi + 0x48) = ecx;
    edx = MEM32(ebx + 0x1C);
    eax = esi + 0x80;
    PUSH32(esp, eax);
    ecx = edi;
    MEM32(esi + 0x4C) = edx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0021184Au); RECOMP_ABI_CALL(0x002A7CF0u, sub_002A7CF0); /* call 0x002A7CF0 */

loc_0021184A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    MEM32(esi + 0x4C) = eax;
    MEM32(esi + 0x5C) = eax;
    POP32(esp, esi);
    eax = ebx + 0x80;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00211708
 * Original: 0x00211708 - 0x00211861 (345 bytes, 111 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00211708(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
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

loc_00211708: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x48)); /* fmul dword ptr [esi + 0x48] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x78)); /* fadd dword ptr [esi + 0x78] */
    MEMF(esi + 0x78) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x4C)); /* fmul dword ptr [esi + 0x4c] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x7C)); /* fadd dword ptr [esi + 0x7c] */
    MEMF(esi + 0x7C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edi + 8)); /* fld float */
    fp_push(MEMF(edi + 4)); /* fld float */
    fp_push(MEMF(edi)); /* fld float */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 4) & 7]); /* fmul st(4) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    g_fp_stack[(g_fp_top + 3) & 7] = fp_top(); fp_pop(); /* fstp st(3) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0xC)); /* fmul dword ptr [esi + 0xc] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax)); /* fmul dword ptr [eax] */
    eax = esi + 0x30;
    PUSH32(esp, eax);
    eax = esp + 0x14;
    MEMF(esi + 0x6C) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, eax);
    fp_push(MEMF(edi)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x496B98)); /* fmul dword ptr [0x496b98] */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edi + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x496B98)); /* fmul dword ptr [0x496b98] */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edi + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x496B98)); /* fmul dword ptr [0x496b98] */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00211776u); RECOMP_ABI_CALL(0x0020DAC0u, sub_0020DAC0); /* call 0x0020DAC0 */

loc_00211776: ;
    ecx = MEM32(ebp + 8);
    fp_push(MEMF(ecx)); /* fld float */
    ecx = esi + 0x30;
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx)); /* fadd dword ptr [ecx] */
    MEMF(ecx) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 4)); /* fadd dword ptr [ecx + 4] */
    MEMF(ecx + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 8)); /* fadd dword ptr [ecx + 8] */
    MEMF(ecx + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0xC)); /* fadd dword ptr [ecx + 0xc] */
    MEMF(ecx + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    PUSH32(esp, 0x002117B3u); RECOMP_ABI_CALL(0x001605D0u, sub_001605D0); /* call 0x001605D0 */

loc_002117B3: ;
    eax = esi + 0x30;
    PUSH32(esp, eax);
    ecx = esi + 0x80;
    PUSH32(esp, 0x002117C2u); RECOMP_ABI_CALL(0x002A7610u, sub_002A7610); /* call 0x002A7610 */

loc_002117C2: ;
    edx = esi + 0x20;
    PUSH32(esp, edx);
    eax = esi + 0x30;
    PUSH32(esp, eax);
    ecx = esp + 0x28;
    PUSH32(esp, 0x002117D3u); RECOMP_ABI_CALL(0x001634D0u, sub_001634D0); /* call 0x001634D0 */

loc_002117D3: ;
    fp_push(MEMF(esi + 0x70)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x20)); /* fsub dword ptr [esp + 0x20] */
    fp_push(MEMF(esi + 0x74)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x24)); /* fsub dword ptr [esp + 0x24] */
    fp_push(MEMF(esi + 0x78)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x28)); /* fsub dword ptr [esp + 0x28] */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x18);
    fp_push(MEMF(esi + 0x7C)); /* fld float */
    MEM32(esi + 0xB8) = eax;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x2C)); /* fsub dword ptr [esp + 0x2c] */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x1C);
    MEM32(esi + 0xBC) = ecx;
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMF(esi + 0xB0) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esi + 0xB4) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esi + 0x7C) = 0x3F800000;
    edx = MEM32(ebx + 0x10);
    MEM32(esi + 0x40) = edx;
    eax = MEM32(ebx + 0x14);
    MEM32(esi + 0x44) = eax;
    ecx = MEM32(ebx + 0x18);
    eax = ebx + 0x20;
    PUSH32(esp, eax);
    MEM32(esi + 0x48) = ecx;
    edx = MEM32(ebx + 0x1C);
    eax = esi + 0x80;
    PUSH32(esp, eax);
    ecx = edi;
    MEM32(esi + 0x4C) = edx;
    PUSH32(esp, 0x0021184Au); RECOMP_ABI_CALL(0x002A7CF0u, sub_002A7CF0); /* call 0x002A7CF0 */

loc_0021184A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    MEM32(esi + 0x4C) = eax;
    MEM32(esi + 0x5C) = eax;
    POP32(esp, esi);
    eax = ebx + 0x80;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00211870
 * Original: 0x00211870 - 0x002119F6 (390 bytes, 119 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00211870(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
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

loc_00211870: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x70);
    MEM32(esi + 0x60) = eax;
    ecx = MEM32(esi + 0x74);
    MEM32(esi + 0x64) = ecx;
    edx = MEM32(esi + 0x78);
    MEM32(esi + 0x68) = edx;
    eax = MEM32(esi + 0x7C);
    MEM32(esi + 0x6C) = eax;
    fp_push(MEMF(ebx)); /* fld float */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    PUSH32(esp, edi);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0xC0)); /* fmul dword ptr [esi + 0xc0] */
    edi = esi + 0x30;
    PUSH32(esp, edi);
    ecx = esp + 0x14;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x70)); /* fadd dword ptr [esi + 0x70] */
    PUSH32(esp, ecx);
    ecx = esp + 0x28;
    MEM32(esp + 0x24) = 0;
    MEMF(esi + 0x70) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0xC4)); /* fmul dword ptr [esi + 0xc4] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x74)); /* fadd dword ptr [esi + 0x74] */
    MEMF(esi + 0x74) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0xC8)); /* fmul dword ptr [esi + 0xc8] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x78)); /* fadd dword ptr [esi + 0x78] */
    MEMF(esi + 0x78) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0xCC)); /* fmul dword ptr [esi + 0xcc] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x7C)); /* fadd dword ptr [esi + 0x7c] */
    MEMF(esi + 0x7C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0xD8)); /* fld float */
    fp_push(MEMF(esi + 0xD4)); /* fld float */
    fp_push(MEMF(esi + 0xD0)); /* fld float */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 4) & 7]); /* fmul st(4) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    g_fp_stack[(g_fp_top + 3) & 7] = fp_top(); fp_pop(); /* fstp st(3) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0xC)); /* fmul dword ptr [esi + 0xc] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx)); /* fmul dword ptr [ebx] */
    MEMF(esi + 0x6C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0xD0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x496B98)); /* fmul dword ptr [0x496b98] */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0xD4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x496B98)); /* fmul dword ptr [0x496b98] */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0xD8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x496B98)); /* fmul dword ptr [0x496b98] */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0021194Du); RECOMP_ABI_CALL(0x0020DAC0u, sub_0020DAC0); /* call 0x0020DAC0 */

loc_0021194D: ;
    fp_push(MEMF(ebx)); /* fld float */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edi)); /* fadd dword ptr [edi] */
    MEMF(edi) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edi + 4)); /* fadd dword ptr [edi + 4] */
    MEMF(edi + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edi + 8)); /* fadd dword ptr [edi + 8] */
    MEMF(edi + 8) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = edi;
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edi + 0xC)); /* fadd dword ptr [edi + 0xc] */
    MEMF(edi + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00211986u); RECOMP_ABI_CALL(0x001605D0u, sub_001605D0); /* call 0x001605D0 */

loc_00211986: ;
    PUSH32(esp, edi);
    ecx = esi + 0x80;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00211992u); RECOMP_ABI_CALL(0x002A7610u, sub_002A7610); /* call 0x002A7610 */

loc_00211992: ;
    edx = esi + 0x20;
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    ecx = esp + 0x28;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002119A0u); RECOMP_ABI_CALL(0x001634D0u, sub_001634D0); /* call 0x001634D0 */

loc_002119A0: ;
    fp_push(MEMF(esi + 0x70)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x20)); /* fsub dword ptr [esp + 0x20] */
    POP32(esp, edi);
    fp_push(MEMF(esi + 0x74)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x20)); /* fsub dword ptr [esp + 0x20] */
    fp_push(MEMF(esi + 0x78)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x24)); /* fsub dword ptr [esp + 0x24] */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x14);
    fp_push(MEMF(esi + 0x7C)); /* fld float */
    MEM32(esi + 0xB8) = eax;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x28)); /* fsub dword ptr [esp + 0x28] */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x18);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEM32(esi + 0xBC) = ecx;
    MEMF(esi + 0xB0) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esi + 0xB4) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esi + 0x7C) = 0x3F800000;
    POP32(esp, esi);
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
 * sub_002118E3
 * Original: 0x002118E3 - 0x002119F6 (275 bytes, 81 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002118E3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002118E3: ;
    MEMF(esi + 0x7C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0xD8)); /* fld float */
    fp_push(MEMF(esi + 0xD4)); /* fld float */
    fp_push(MEMF(esi + 0xD0)); /* fld float */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 4) & 7]); /* fmul st(4) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    g_fp_stack[(g_fp_top + 3) & 7] = fp_top(); fp_pop(); /* fstp st(3) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0xC)); /* fmul dword ptr [esi + 0xc] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx)); /* fmul dword ptr [ebx] */
    MEMF(esi + 0x6C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0xD0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x496B98)); /* fmul dword ptr [0x496b98] */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0xD4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x496B98)); /* fmul dword ptr [0x496b98] */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0xD8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x496B98)); /* fmul dword ptr [0x496b98] */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0021194Du); RECOMP_ABI_CALL(0x0020DAC0u, sub_0020DAC0); /* call 0x0020DAC0 */

loc_0021194D: ;
    fp_push(MEMF(ebx)); /* fld float */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edi)); /* fadd dword ptr [edi] */
    MEMF(edi) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edi + 4)); /* fadd dword ptr [edi + 4] */
    MEMF(edi + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edi + 8)); /* fadd dword ptr [edi + 8] */
    MEMF(edi + 8) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = edi;
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edi + 0xC)); /* fadd dword ptr [edi + 0xc] */
    MEMF(edi + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    PUSH32(esp, 0x00211986u); RECOMP_ABI_CALL(0x001605D0u, sub_001605D0); /* call 0x001605D0 */

loc_00211986: ;
    PUSH32(esp, edi);
    ecx = esi + 0x80;
    PUSH32(esp, 0x00211992u); RECOMP_ABI_CALL(0x002A7610u, sub_002A7610); /* call 0x002A7610 */

loc_00211992: ;
    edx = esi + 0x20;
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    ecx = esp + 0x28;
    PUSH32(esp, 0x002119A0u); RECOMP_ABI_CALL(0x001634D0u, sub_001634D0); /* call 0x001634D0 */

loc_002119A0: ;
    fp_push(MEMF(esi + 0x70)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x20)); /* fsub dword ptr [esp + 0x20] */
    POP32(esp, edi);
    fp_push(MEMF(esi + 0x74)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x20)); /* fsub dword ptr [esp + 0x20] */
    fp_push(MEMF(esi + 0x78)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x24)); /* fsub dword ptr [esp + 0x24] */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x14);
    fp_push(MEMF(esi + 0x7C)); /* fld float */
    MEM32(esi + 0xB8) = eax;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x28)); /* fsub dword ptr [esp + 0x28] */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x18);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEM32(esi + 0xBC) = ecx;
    MEMF(esi + 0xB0) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esi + 0xB4) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esi + 0x7C) = 0x3F800000;
    POP32(esp, esi);
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
 * sub_00211900
 * Original: 0x00211900 - 0x002119F6 (246 bytes, 73 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00211900(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00211900: ;
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 4) & 7]); /* fmul st(4) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    g_fp_stack[(g_fp_top + 3) & 7] = fp_top(); fp_pop(); /* fstp st(3) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0xC)); /* fmul dword ptr [esi + 0xc] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx)); /* fmul dword ptr [ebx] */
    MEMF(esi + 0x6C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0xD0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x496B98)); /* fmul dword ptr [0x496b98] */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0xD4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x496B98)); /* fmul dword ptr [0x496b98] */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0xD8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x496B98)); /* fmul dword ptr [0x496b98] */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0021194Du); RECOMP_ABI_CALL(0x0020DAC0u, sub_0020DAC0); /* call 0x0020DAC0 */

loc_0021194D: ;
    fp_push(MEMF(ebx)); /* fld float */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edi)); /* fadd dword ptr [edi] */
    MEMF(edi) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edi + 4)); /* fadd dword ptr [edi + 4] */
    MEMF(edi + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edi + 8)); /* fadd dword ptr [edi + 8] */
    MEMF(edi + 8) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = edi;
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edi + 0xC)); /* fadd dword ptr [edi + 0xc] */
    MEMF(edi + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    PUSH32(esp, 0x00211986u); RECOMP_ABI_CALL(0x001605D0u, sub_001605D0); /* call 0x001605D0 */

loc_00211986: ;
    PUSH32(esp, edi);
    ecx = esi + 0x80;
    PUSH32(esp, 0x00211992u); RECOMP_ABI_CALL(0x002A7610u, sub_002A7610); /* call 0x002A7610 */

loc_00211992: ;
    edx = esi + 0x20;
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    ecx = esp + 0x28;
    PUSH32(esp, 0x002119A0u); RECOMP_ABI_CALL(0x001634D0u, sub_001634D0); /* call 0x001634D0 */

loc_002119A0: ;
    fp_push(MEMF(esi + 0x70)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x20)); /* fsub dword ptr [esp + 0x20] */
    POP32(esp, edi);
    fp_push(MEMF(esi + 0x74)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x20)); /* fsub dword ptr [esp + 0x20] */
    fp_push(MEMF(esi + 0x78)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x24)); /* fsub dword ptr [esp + 0x24] */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x14);
    fp_push(MEMF(esi + 0x7C)); /* fld float */
    MEM32(esi + 0xB8) = eax;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x28)); /* fsub dword ptr [esp + 0x28] */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x18);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEM32(esi + 0xBC) = ecx;
    MEMF(esi + 0xB0) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esi + 0xB4) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esi + 0x7C) = 0x3F800000;
    POP32(esp, esi);
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
 * sub_00211924
 * Original: 0x00211924 - 0x002119F6 (210 bytes, 60 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00211924(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00211924: ;
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0xD4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x496B98)); /* fmul dword ptr [0x496b98] */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0xD8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x496B98)); /* fmul dword ptr [0x496b98] */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0021194Du); RECOMP_ABI_CALL(0x0020DAC0u, sub_0020DAC0); /* call 0x0020DAC0 */

loc_0021194D: ;
    fp_push(MEMF(ebx)); /* fld float */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edi)); /* fadd dword ptr [edi] */
    MEMF(edi) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edi + 4)); /* fadd dword ptr [edi + 4] */
    MEMF(edi + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edi + 8)); /* fadd dword ptr [edi + 8] */
    MEMF(edi + 8) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = edi;
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edi + 0xC)); /* fadd dword ptr [edi + 0xc] */
    MEMF(edi + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    PUSH32(esp, 0x00211986u); RECOMP_ABI_CALL(0x001605D0u, sub_001605D0); /* call 0x001605D0 */

loc_00211986: ;
    PUSH32(esp, edi);
    ecx = esi + 0x80;
    PUSH32(esp, 0x00211992u); RECOMP_ABI_CALL(0x002A7610u, sub_002A7610); /* call 0x002A7610 */

loc_00211992: ;
    edx = esi + 0x20;
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    ecx = esp + 0x28;
    PUSH32(esp, 0x002119A0u); RECOMP_ABI_CALL(0x001634D0u, sub_001634D0); /* call 0x001634D0 */

loc_002119A0: ;
    fp_push(MEMF(esi + 0x70)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x20)); /* fsub dword ptr [esp + 0x20] */
    POP32(esp, edi);
    fp_push(MEMF(esi + 0x74)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x20)); /* fsub dword ptr [esp + 0x20] */
    fp_push(MEMF(esi + 0x78)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x24)); /* fsub dword ptr [esp + 0x24] */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x14);
    fp_push(MEMF(esi + 0x7C)); /* fld float */
    MEM32(esi + 0xB8) = eax;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x28)); /* fsub dword ptr [esp + 0x28] */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x18);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEM32(esi + 0xBC) = ecx;
    MEMF(esi + 0xB0) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esi + 0xB4) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esi + 0x7C) = 0x3F800000;
    POP32(esp, esi);
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
 * sub_00211A00
 * Original: 0x00211A00 - 0x00211D1B (795 bytes, 226 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00211A00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
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

loc_00211A00: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x7C)); /* fmul dword ptr [esi + 0x7c] */
    eax = MEM32(esi + 0x70);
    MEM32(esi + 0x60) = eax;
    ecx = MEM32(esi + 0x74);
    fp_top() = -fp_top(); /* fchs */
    MEM32(esi + 0x64) = ecx;
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esi + 0x78);
    fp_push(MEMF(esp + 0x14)); /* fld float */
    MEM32(esi + 0x68) = edx;
    eax = MEM32(esi + 0x7C);
    MEM32(esi + 0x6C) = eax;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0xC0)); /* fmul dword ptr [esi + 0xc0] */
    PUSH32(esp, edi);
    edi = esi + 0x30;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x70)); /* fadd dword ptr [esi + 0x70] */
    PUSH32(esp, edi);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    MEMF(esi + 0x70) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = esp + 0x38;
    fp_push(MEMF(esp + 0x20)); /* fld float */
    MEM32(esp + 0x34) = 0;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0xC4)); /* fmul dword ptr [esi + 0xc4] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x74)); /* fadd dword ptr [esi + 0x74] */
    MEMF(esi + 0x74) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0xC8)); /* fmul dword ptr [esi + 0xc8] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x78)); /* fadd dword ptr [esi + 0x78] */
    MEMF(esi + 0x78) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0xCC)); /* fmul dword ptr [esi + 0xcc] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x7C)); /* fadd dword ptr [esi + 0x7c] */
    MEMF(esi + 0x7C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0xD8)); /* fld float */
    fp_push(MEMF(esi + 0xD4)); /* fld float */
    fp_push(MEMF(esi + 0xD0)); /* fld float */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 4) & 7]); /* fmul st(4) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    g_fp_stack[(g_fp_top + 3) & 7] = fp_top(); fp_pop(); /* fstp st(3) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x20)); /* fmul dword ptr [esp + 0x20] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0xC)); /* fmul dword ptr [esi + 0xc] */
    MEMF(esi + 0x6C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0xD0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x496B98)); /* fmul dword ptr [0x496b98] */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0xD4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x496B98)); /* fmul dword ptr [0x496b98] */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0xD8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x496B98)); /* fmul dword ptr [0x496b98] */
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00211AF0u); RECOMP_ABI_CALL(0x0020DAC0u, sub_0020DAC0); /* call 0x0020DAC0 */

loc_00211AF0: ;
    fp_push(MEMF(esp + 0x30)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x18)); /* fmul dword ptr [esp + 0x18] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edi)); /* fadd dword ptr [edi] */
    MEMF(edi) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x34)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x18)); /* fmul dword ptr [esp + 0x18] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edi + 4)); /* fadd dword ptr [edi + 4] */
    MEMF(edi + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x38)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x18)); /* fmul dword ptr [esp + 0x18] */
    ecx = edi;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edi + 8)); /* fadd dword ptr [edi + 8] */
    MEMF(edi + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x3C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x18)); /* fmul dword ptr [esp + 0x18] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edi + 0xC)); /* fadd dword ptr [edi + 0xc] */
    MEMF(edi + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00211B2Du); RECOMP_ABI_CALL(0x001605D0u, sub_001605D0); /* call 0x001605D0 */

loc_00211B2D: ;
    ebx = esi + 0x80;
    PUSH32(esp, edi);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00211B3Bu); RECOMP_ABI_CALL(0x002A7610u, sub_002A7610); /* call 0x002A7610 */

loc_00211B3B: ;
    eax = esi + 0x20;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = esp + 0x38;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00211B49u); RECOMP_ABI_CALL(0x001634D0u, sub_001634D0); /* call 0x001634D0 */

loc_00211B49: ;
    fp_push(MEMF(esi + 0x70)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x30)); /* fsub dword ptr [esp + 0x30] */
    fp_push(MEMF(esi + 0x74)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x34)); /* fsub dword ptr [esp + 0x34] */
    fp_push(MEMF(esi + 0x78)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x38)); /* fsub dword ptr [esp + 0x38] */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x28);
    fp_push(MEMF(esi + 0x7C)); /* fld float */
    MEM32(esi + 0xB8) = edx;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x3C)); /* fsub dword ptr [esp + 0x3c] */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x2C);
    MEM32(esi + 0xBC) = eax;
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMF(esi + 0xB0) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esi + 0xB4) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esi + 0x7C) = 0x3F800000;
    ecx = MEM32(esi + 0x70);
    fp_push(MEMF(ebp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebp + 0xC)); /* fmul dword ptr [ebp + 0xc] */
    MEM32(esi + 0x60) = ecx;
    edx = MEM32(esi + 0x74);
    MEM32(esi + 0x64) = edx;
    eax = MEM32(esi + 0x78);
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    MEM32(esi + 0x68) = eax;
    ecx = MEM32(esi + 0x7C);
    MEM32(esi + 0x6C) = ecx;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0xC0)); /* fmul dword ptr [esi + 0xc0] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x70)); /* fadd dword ptr [esi + 0x70] */
    MEMF(esi + 0x70) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0xC4)); /* fmul dword ptr [esi + 0xc4] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x74)); /* fadd dword ptr [esi + 0x74] */
    MEMF(esi + 0x74) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0xC8)); /* fmul dword ptr [esi + 0xc8] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x78)); /* fadd dword ptr [esi + 0x78] */
    MEMF(esi + 0x78) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0xCC)); /* fmul dword ptr [esi + 0xcc] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x7C)); /* fadd dword ptr [esi + 0x7c] */
    MEMF(esi + 0x7C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0xD8)); /* fld float */
    fp_push(MEMF(esi + 0xD4)); /* fld float */
    fp_push(MEMF(esi + 0xD0)); /* fld float */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 4) & 7]); /* fmul st(4) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    g_fp_stack[(g_fp_top + 3) & 7] = fp_top(); fp_pop(); /* fstp st(3) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    PUSH32(esp, edi);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x1C)); /* fmul dword ptr [esp + 0x1c] */
    edx = esp + 0x34;
    PUSH32(esp, edx);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0xC)); /* fmul dword ptr [esi + 0xc] */
    ecx = esp + 0x28;
    MEM32(esp + 0x44) = 0;
    MEMF(esi + 0x6C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0xD0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x496B98)); /* fmul dword ptr [0x496b98] */
    MEMF(esp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0xD4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x496B98)); /* fmul dword ptr [0x496b98] */
    MEMF(esp + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0xD8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x496B98)); /* fmul dword ptr [0x496b98] */
    MEMF(esp + 0x40) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00211C73u); RECOMP_ABI_CALL(0x0020DAC0u, sub_0020DAC0); /* call 0x0020DAC0 */

loc_00211C73: ;
    fp_push(MEMF(esp + 0x20)); /* fld float */
    ecx = edi;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x18)); /* fmul dword ptr [esp + 0x18] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edi)); /* fadd dword ptr [edi] */
    MEMF(edi) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x18)); /* fmul dword ptr [esp + 0x18] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edi + 4)); /* fadd dword ptr [edi + 4] */
    MEMF(edi + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x18)); /* fmul dword ptr [esp + 0x18] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edi + 8)); /* fadd dword ptr [edi + 8] */
    MEMF(edi + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x18)); /* fmul dword ptr [esp + 0x18] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(edi + 0xC)); /* fadd dword ptr [edi + 0xc] */
    MEMF(edi + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00211CB0u); RECOMP_ABI_CALL(0x001605D0u, sub_001605D0); /* call 0x001605D0 */

loc_00211CB0: ;
    PUSH32(esp, edi);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00211CB8u); RECOMP_ABI_CALL(0x002A7610u, sub_002A7610); /* call 0x002A7610 */

loc_00211CB8: ;
    eax = esi + 0x20;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = esp + 0x38;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00211CC6u); RECOMP_ABI_CALL(0x001634D0u, sub_001634D0); /* call 0x001634D0 */

loc_00211CC6: ;
    fp_push(MEMF(esi + 0x70)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x30)); /* fsub dword ptr [esp + 0x30] */
    edx = MEM32(ebp + 8);
    fp_push(MEMF(esi + 0x74)); /* fld float */
    POP32(esp, edi);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x30)); /* fsub dword ptr [esp + 0x30] */
    fp_push(MEMF(esi + 0x78)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x34)); /* fsub dword ptr [esp + 0x34] */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x24);
    fp_push(MEMF(esi + 0x7C)); /* fld float */
    MEM32(esi + 0xB8) = eax;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x38)); /* fsub dword ptr [esp + 0x38] */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x28);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEM32(esi + 0xBC) = ecx;
    MEMF(esi + 0xB0) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esi + 0xB4) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esi + 0x7C) = edx;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00211D20
 * Original: 0x00211D20 - 0x00211D3D (29 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00211D20(void)
{

loc_00211D20: ;
    MEM32(ecx + 0x50) = 0x3C23D70A;
    MEM32(ecx + 0x54) = 0x3BA3D70A;
    MEM32(ecx + 0x58) = 0x3DCCCCCD;
    MEM32(ecx + 0x5C) = 0x3E4CCCCD;
    esp += 4; return; /* ret */

}

/**
 * sub_00211D40
 * Original: 0x00211D40 - 0x00211D64 (36 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00211D40(void)
{

loc_00211D40: ;
    edx = MEM32(ecx + 0x50);
    eax = MEM32(esp + 4);
    MEM32(eax + 4) = edx;
    edx = MEM32(ecx + 0x54);
    MEM32(eax + 8) = edx;
    edx = MEM32(ecx + 0x58);
    MEM32(eax + 0xC) = edx;
    edx = MEM32(ecx + 0x5C);
    MEM32(eax + 0x10) = edx;
    ecx = MEM32(ecx + 8);
    MEM32(eax) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00211D70
 * Original: 0x00211D70 - 0x00211D94 (36 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00211D70(void)
{

loc_00211D70: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax + 4);
    MEM32(ecx + 0x50) = edx;
    edx = MEM32(eax + 8);
    MEM32(ecx + 0x54) = edx;
    edx = MEM32(eax + 0xC);
    MEM32(ecx + 0x58) = edx;
    edx = MEM32(eax + 0x10);
    MEM32(ecx + 0x5C) = edx;
    eax = MEM32(eax);
    MEM32(ecx + 8) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00211DA0
 * Original: 0x00211DA0 - 0x00211DA6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00211DA0(void)
{

loc_00211DA0: ;
    eax = 2;
    esp += 4; return; /* ret */

}

/**
 * sub_00211DB0
 * Original: 0x00211DB0 - 0x00211DC4 (20 bytes, 7 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00211DB0(void)
{

loc_00211DB0: ;
    eax = MEM32(esp + 4);
    edx = eax;
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = edx;
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0xC) = edx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00211DD0
 * Original: 0x00211DD0 - 0x00211DF3 (35 bytes, 13 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00211DD0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00211DD0: ;
    eax = MEM32(esp + 4);
    fp_push(MEMF(eax + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0xC)); /* fmul dword ptr [ecx + 0xc] */
    fp_push(MEMF(eax + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 8)); /* fmul dword ptr [ecx + 8] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 4)); /* fmul dword ptr [ecx + 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(eax)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx)); /* fmul dword ptr [ecx] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00211E00
 * Original: 0x00211E00 - 0x00211E2A (42 bytes, 20 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00211E00(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00211E00: ;
    fp_push(MEMF(ecx + 0xC)); /* fld float */
    fp_push(MEMF(ecx + 8)); /* fld float */
    fp_push(MEMF(ecx + 4)); /* fld float */
    fp_push(MEMF(ecx)); /* fld float */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 4) & 7]); /* fmul st(4) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 4) & 7]; fp_push(_t); } /* fld st(4) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 5) & 7]); /* fmul st(5) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    g_fp_stack[(g_fp_top + 4) & 7] = fp_top(); fp_pop(); /* fstp st(4) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00211E30
 * Original: 0x00211E30 - 0x00211E33 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00211E30(void)
{

loc_00211E30: ;
    eax = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00211E40
 * Original: 0x00211E40 - 0x00211E83 (67 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00211E40(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00211E40: ;
    eax = 0x7F7FFFFF;
    MEM32(ecx + 0x10) = eax;
    MEM32(ecx + 0x14) = eax;
    MEM32(ecx + 0x18) = eax;
    MEM32(ecx + 0x1C) = eax;
    MEM32(ecx + 0x30) = eax;
    MEM32(ecx + 0x34) = eax;
    MEM32(ecx + 0x38) = eax;
    MEM32(ecx + 0x3C) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + 0x2C) = eax;
    MEM32(ecx + 0x28) = eax;
    MEM32(ecx + 0x24) = eax;
    MEM32(ecx + 0x20) = eax;
    edx = 0x3F800000;
    MEM32(ecx + 0x2C) = edx;
    MEM32(ecx + 0x4C) = eax;
    MEM32(ecx + 0x48) = eax;
    MEM32(ecx + 0x44) = eax;
    MEM32(ecx + 0x40) = eax;
    MEM32(ecx + 0x4C) = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_00211E90
 * Original: 0x00211E90 - 0x00211EC5 (53 bytes, 24 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00211E90(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00211E90: ;
    fp_push(MEMF(ecx)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax)); /* fsub dword ptr [eax] */
    fp_push(MEMF(ecx + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax + 4)); /* fsub dword ptr [eax + 4] */
    fp_push(MEMF(ecx + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax + 8)); /* fsub dword ptr [eax + 8] */
    fp_push(MEMF(ecx + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax + 0xC)); /* fsub dword ptr [eax + 0xc] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 4) & 7]; fp_push(_t); } /* fld st(4) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 5) & 7]); /* fmul st(5) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 4) & 7]); /* fmul st(4) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    g_fp_stack[(g_fp_top + 4) & 7] = fp_top(); fp_pop(); /* fstp st(4) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00211ED0
 * Original: 0x00211ED0 - 0x00211FD3 (259 bytes, 92 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00211ED0(void)
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

loc_00211ED0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    fp_push(MEMF(ecx + 0x10)); /* fld float */
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    edx = MEM32(esi + 0x3C);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(edx + 0xB0)); /* fsub dword ptr [edx + 0xb0] */
    fp_push(MEMF(ecx + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(edx + 0xB4)); /* fsub dword ptr [edx + 0xb4] */
    fp_push(MEMF(ecx + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(edx + 0xB8)); /* fsub dword ptr [edx + 0xb8] */
    fp_push(MEMF(ecx + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(edx + 0x30)); /* fsub dword ptr [edx + 0x30] */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(edx + 0x34)); /* fsub dword ptr [edx + 0x34] */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 0x28)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(edx + 0x38)); /* fsub dword ptr [edx + 0x38] */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 0x2C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(edx + 0x3C)); /* fsub dword ptr [edx + 0x3c] */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 0x50)); /* fld float */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 4) & 7]); /* fmul st(4) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 4) & 7]; fp_push(_t); } /* fld st(4) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 5) & 7]); /* fmul st(5) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fcompp  */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    fp_pop(); /* fstp st(0) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    fp_pop(); /* fstp st(0) */
    if (TEST_NZ(_fa, _fb)) goto loc_00211F8F; /* jne: not equal / not zero */

loc_00211F4B: ;
    fp_push(MEMF(ecx + 0x54)); /* fld float */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x1C)); /* fmul dword ptr [esp + 0x1c] */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x18)); /* fmul dword ptr [esp + 0x18] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x14)); /* fmul dword ptr [esp + 0x14] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 8)); /* fmul dword ptr [ecx + 8] */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fcompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    fp_pop(); /* fstp st(0) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00211F8F; /* jne: not equal / not zero */

loc_00211F86: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_00211F8F: ;
    eax = MEM32(edx + 0x30);
    MEM32(ecx + 0x20) = eax;
    eax = MEM32(edx + 0x34);
    MEM32(ecx + 0x24) = eax;
    eax = MEM32(edx + 0x38);
    MEM32(ecx + 0x28) = eax;
    edx = MEM32(edx + 0x3C);
    MEM32(ecx + 0x2C) = edx;
    eax = MEM32(esi + 0x3C);
    edx = MEM32(eax + 0xB0);
    _fb = (uint32_t)(0xB0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xB0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 0x10) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 0x14) = edx;
    edx = MEM32(eax + 8);
    MEM32(ecx + 0x18) = edx;
    eax = MEM32(eax + 0xC);
    MEM32(ecx + 0x1C) = eax;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
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
 * sub_00211FE0
 * Original: 0x00211FE0 - 0x002120E3 (259 bytes, 92 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00211FE0(void)
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

loc_00211FE0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    fp_push(MEMF(ecx + 0x30)); /* fld float */
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    edx = MEM32(esi + 0x3C);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(edx + 0xB0)); /* fsub dword ptr [edx + 0xb0] */
    fp_push(MEMF(ecx + 0x34)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(edx + 0xB4)); /* fsub dword ptr [edx + 0xb4] */
    fp_push(MEMF(ecx + 0x38)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(edx + 0xB8)); /* fsub dword ptr [edx + 0xb8] */
    fp_push(MEMF(ecx + 0x40)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(edx + 0x30)); /* fsub dword ptr [edx + 0x30] */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 0x44)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(edx + 0x34)); /* fsub dword ptr [edx + 0x34] */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 0x48)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(edx + 0x38)); /* fsub dword ptr [edx + 0x38] */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 0x4C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(edx + 0x3C)); /* fsub dword ptr [edx + 0x3c] */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 0x58)); /* fld float */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 4) & 7]); /* fmul st(4) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 4) & 7]; fp_push(_t); } /* fld st(4) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 5) & 7]); /* fmul st(5) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fcompp  */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    fp_pop(); /* fstp st(0) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    fp_pop(); /* fstp st(0) */
    if (TEST_NZ(_fa, _fb)) goto loc_0021209F; /* jne: not equal / not zero */

loc_0021205B: ;
    fp_push(MEMF(ecx + 0x5C)); /* fld float */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x1C)); /* fmul dword ptr [esp + 0x1c] */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x18)); /* fmul dword ptr [esp + 0x18] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x14)); /* fmul dword ptr [esp + 0x14] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 8)); /* fmul dword ptr [ecx + 8] */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 2) & 7]); /* fmul st(2) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fcompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    fp_pop(); /* fstp st(0) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0021209F; /* jne: not equal / not zero */

loc_00212096: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_0021209F: ;
    eax = MEM32(edx + 0x30);
    MEM32(ecx + 0x40) = eax;
    eax = MEM32(edx + 0x34);
    MEM32(ecx + 0x44) = eax;
    eax = MEM32(edx + 0x38);
    MEM32(ecx + 0x48) = eax;
    edx = MEM32(edx + 0x3C);
    MEM32(ecx + 0x4C) = edx;
    eax = MEM32(esi + 0x3C);
    edx = MEM32(eax + 0xB0);
    _fb = (uint32_t)(0xB0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xB0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 0x30) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 0x34) = edx;
    edx = MEM32(eax + 8);
    MEM32(ecx + 0x38) = edx;
    eax = MEM32(eax + 0xC);
    MEM32(ecx + 0x3C) = eax;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
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
 * sub_002120F0
 * Original: 0x002120F0 - 0x00212182 (146 bytes, 50 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002120F0(void)
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

loc_002120F0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(ebp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00212171; /* je: equal / zero */

loc_00212103: ;
    eax = MEM32(ecx);
    edx = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 0x5178B0);
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x00212114u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00212111u); } /* indirect call */
    }

loc_00212114: ;
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x10)); /* fsub dword ptr [esp + 0x10] */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x14)); /* fsub dword ptr [esp + 0x14] */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x18)); /* fsub dword ptr [esp + 0x18] */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x496B98)); /* fmul dword ptr [0x496b98] */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x496B98)); /* fmul dword ptr [0x496b98] */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x496B98)); /* fmul dword ptr [0x496b98] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(esi + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esi + 8)); /* fld float */
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_00212171: ;
    MEM32(esi + 8) = 0xBF800000u;
    fp_push(MEMF(esi + 8)); /* fld float */
    POP32(esp, esi);
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
 * sub_00212165
 * Original: 0x00212165 - 0x00212182 (29 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00212165(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00212165: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esi + 8)); /* fld float */
    POP32(esp, esi);
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
 * sub_00212190
 * Original: 0x00212190 - 0x00212206 (118 bytes, 31 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00212190(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00212190: ;
    eax = ecx;
    ecx = MEM32(esp + 4);
    MEM32(eax + 8) = ecx;
    MEM16(eax + 6) = 1;
    MEM32(eax) = 0x4B4580;
    MEM32(eax + 0x50) = 0x3C23D70A;
    MEM32(eax + 0x54) = 0x3BA3D70A;
    MEM32(eax + 0x58) = 0x3DCCCCCD;
    MEM32(eax + 0x5C) = 0x3E4CCCCD;
    ecx = 0x7F7FFFFF;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 0x18) = ecx;
    MEM32(eax + 0x1C) = ecx;
    MEM32(eax + 0x30) = ecx;
    MEM32(eax + 0x34) = ecx;
    MEM32(eax + 0x38) = ecx;
    MEM32(eax + 0x3C) = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 0x2C) = ecx;
    MEM32(eax + 0x28) = ecx;
    MEM32(eax + 0x24) = ecx;
    MEM32(eax + 0x20) = ecx;
    edx = 0x3F800000;
    MEM32(eax + 0x2C) = edx;
    MEM32(eax + 0x4C) = ecx;
    MEM32(eax + 0x48) = ecx;
    MEM32(eax + 0x44) = ecx;
    MEM32(eax + 0x40) = ecx;
    MEM32(eax + 0x4C) = edx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00212210
 * Original: 0x00212210 - 0x00212239 (41 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00212210(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00212210: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x4AE714;
    if (TEST_Z(_fa, _fb)) goto loc_00212233; /* je: equal / zero */

loc_00212220: ;
    edx = ZX16(MEM16(esi + 4));
    ecx = MEM32(0x62EBAC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x22);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x00212233u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00212230u); } /* indirect call */
    }

loc_00212233: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00212240
 * Original: 0x00212240 - 0x002122C4 (132 bytes, 38 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00212240(void)
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

loc_00212240: ;
    eax = 0x7F7FFFFF;
    PUSH32(esp, esi);
    esi = ecx;
    MEM16(esi + 6) = 1;
    MEM32(esi) = 0x4B4580;
    MEM32(esi + 0x50) = 0x3C23D70A;
    MEM32(esi + 0x54) = 0x3BA3D70A;
    MEM32(esi + 0x58) = 0x3DCCCCCD;
    MEM32(esi + 0x5C) = 0x3E4CCCCD;
    MEM32(esi + 0x10) = eax;
    MEM32(esi + 0x14) = eax;
    MEM32(esi + 0x18) = eax;
    MEM32(esi + 0x1C) = eax;
    MEM32(esi + 0x30) = eax;
    MEM32(esi + 0x34) = eax;
    MEM32(esi + 0x38) = eax;
    MEM32(esi + 0x3C) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x2C) = eax;
    MEM32(esi + 0x28) = eax;
    MEM32(esi + 0x24) = eax;
    MEM32(esi + 0x20) = eax;
    ecx = 0x3F800000;
    MEM32(esi + 0x2C) = ecx;
    MEM32(esi + 0x4C) = eax;
    MEM32(esi + 0x48) = eax;
    MEM32(esi + 0x44) = eax;
    MEM32(esi + 0x40) = eax;
    eax = MEM32(esp + 8);
    MEM32(esi + 0x4C) = ecx;
    ecx = MEM32(eax + 0xC);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x002122BCu); RECOMP_ABI_CALL(0x002120F0u, sub_002120F0); /* call 0x002120F0 */

loc_002122BC: ;
    fp_pop(); /* fstp st(0) */
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_002122D0
 * Original: 0x002122D0 - 0x00212347 (119 bytes, 35 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002122D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002122D0: ;
    eax = ecx;
    ecx = MEM32(esp + 4);
    MEM16(eax + 6) = 1;
    MEM32(eax) = 0x4B4580;
    edx = MEM32(ecx + 4);
    MEM32(eax + 0x50) = edx;
    edx = MEM32(ecx + 8);
    MEM32(eax + 0x54) = edx;
    edx = MEM32(ecx + 0xC);
    MEM32(eax + 0x58) = edx;
    edx = MEM32(ecx + 0x10);
    MEM32(eax + 0x5C) = edx;
    edx = 0x7F7FFFFF;
    MEM32(eax + 0x10) = edx;
    MEM32(eax + 0x14) = edx;
    MEM32(eax + 0x18) = edx;
    MEM32(eax + 0x1C) = edx;
    MEM32(eax + 0x30) = edx;
    MEM32(eax + 0x34) = edx;
    MEM32(eax + 0x38) = edx;
    MEM32(eax + 0x3C) = edx;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 0x2C) = edx;
    MEM32(eax + 0x28) = edx;
    MEM32(eax + 0x24) = edx;
    MEM32(eax + 0x20) = edx;
    MEM32(eax + 0x2C) = 0x3F800000;
    MEM32(eax + 0x4C) = edx;
    MEM32(eax + 0x48) = edx;
    MEM32(eax + 0x44) = edx;
    MEM32(eax + 0x40) = edx;
    MEM32(eax + 0x4C) = 0x3F800000;
    ecx = MEM32(ecx);
    MEM32(eax + 8) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00212350
 * Original: 0x00212350 - 0x0021235D (13 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00212350(void)
{

loc_00212350: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax + 8);
    MEM32(ecx + 0x18) = edx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00212360
 * Original: 0x00212360 - 0x00212378 (24 bytes, 8 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00212360(void)
{

loc_00212360: ;
    edx = MEM32(ecx + 0xC);
    eax = MEM32(esp + 4);
    MEM32(eax) = edx;
    edx = MEM32(ecx + 0x10);
    MEM32(eax + 4) = edx;
    ecx = MEM32(ecx + 0x18);
    MEM32(eax + 8) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00212380
 * Original: 0x00212380 - 0x00212383 (3 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00212380(void)
{

loc_00212380: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00212390
 * Original: 0x00212390 - 0x002123A8 (24 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00212390(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00212390: ;
    eax = MEM32(ecx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002123A5; /* je: equal / zero */

loc_00212397: ;
    edx = MEM32(eax);
    _fb = (uint32_t)(0xFFFFFFF8u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFF8u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 4) = ecx;
    ecx = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 4)); return; /* indirect tail jmp */

loc_002123A5: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002123B0
 * Original: 0x002123B0 - 0x002123B3 (3 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002123B0(void)
{

loc_002123B0: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002123C0
 * Original: 0x002123C0 - 0x002123C7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002123C0(void)
{

loc_002123C0: ;
    MEM32(ecx) = 0x4B45A0;
    esp += 4; return; /* ret */

}

/**
 * sub_002123D0
 * Original: 0x002123D0 - 0x002123D3 (3 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002123D0(void)
{

loc_002123D0: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002123E0
 * Original: 0x002123E0 - 0x002123E3 (3 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002123E0(void)
{

loc_002123E0: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002123F0
 * Original: 0x002123F0 - 0x002123F3 (3 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002123F0(void)
{

loc_002123F0: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00212400
 * Original: 0x00212400 - 0x0021241F (31 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00212400(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00212400: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x4B45A0;
    if (TEST_Z(_fa, _fb)) goto loc_00212419; /* je: equal / zero */

loc_00212410: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00212416u); RECOMP_ABI_CALL(0x000EB425u, sub_000EB425); /* call 0x000EB425 */

loc_00212416: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00212419: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00212420
 * Original: 0x00212420 - 0x00212429 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00212420(void)
{

loc_00212420: ;
    eax = ecx;
    MEM32(eax) = 0x4B45A0;
    esp += 4; return; /* ret */

}

/**
 * sub_00212430
 * Original: 0x00212430 - 0x00212491 (97 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00212430(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00212430: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi) = 0x4B45C0;
    MEM32(esi + 8) = 0x4B45B0;
    if (CMP_EQ(_fa, _fb)) goto loc_00212461; /* je: equal / zero */

loc_00212447: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0021244Du); RECOMP_ABI_CALL(0x001FA250u, sub_001FA250); /* call 0x001FA250 */

loc_0021244D: ;
    ecx = MEM32(esi + 0xC);
    MEM16(ecx + 6) = MEM16(ecx + 6) - 1;
    _fa = (uint32_t)(MEM16(ecx + 6)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(ecx + 6)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 6), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00212461; /* jne: not equal / not zero */

loc_0021245B: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00212461u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0021245Fu); } /* indirect call */
    }

loc_00212461: ;
    ecx = MEM32(esi + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00212482; /* je: equal / zero */

loc_00212468: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0021246Eu); RECOMP_ABI_CALL(0x001FA250u, sub_001FA250); /* call 0x001FA250 */

loc_0021246E: ;
    ecx = MEM32(esi + 0x10);
    MEM16(ecx + 6) = MEM16(ecx + 6) - 1;
    _fa = (uint32_t)(MEM16(ecx + 6)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(ecx + 6)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 6), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00212482; /* jne: not equal / not zero */

loc_0021247C: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00212482u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00212480u); } /* indirect call */
    }

loc_00212482: ;
    MEM32(esi + 8) = 0x4B45A0;
    MEM32(esi) = 0x4AE714;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002124A0
 * Original: 0x002124A0 - 0x002124A8 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002124A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002124A0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_00212550(); return; /* tail jmp 0x00212550 */

}

/**
 * sub_002124B0
 * Original: 0x002124B0 - 0x002124F1 (65 bytes, 26 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002124B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002124B0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_002124C8; /* je: equal / zero */

loc_002124BC: ;
    MEM16(edi + 6) = MEM16(edi + 6) + 1;
    _fa = (uint32_t)(MEM16(edi + 6)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x002124C8u); RECOMP_ABI_CALL(0x001FA6D0u, sub_001FA6D0); /* call 0x001FA6D0 */

loc_002124C8: ;
    ecx = MEM32(esi + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002124E9; /* je: equal / zero */

loc_002124CF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002124D5u); RECOMP_ABI_CALL(0x001FA250u, sub_001FA250); /* call 0x001FA250 */

loc_002124D5: ;
    ecx = MEM32(esi + 0xC);
    MEM16(ecx + 6) = MEM16(ecx + 6) - 1;
    _fa = (uint32_t)(MEM16(ecx + 6)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(ecx + 6)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 6), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002124E9; /* jne: not equal / not zero */

loc_002124E3: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x002124E9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002124E7u); } /* indirect call */
    }

loc_002124E9: ;
    MEM32(esi + 0xC) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00212500
 * Original: 0x00212500 - 0x00212541 (65 bytes, 26 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00212500(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00212500: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00212518; /* je: equal / zero */

loc_0021250C: ;
    MEM16(edi + 6) = MEM16(edi + 6) + 1;
    _fa = (uint32_t)(MEM16(edi + 6)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x00212518u); RECOMP_ABI_CALL(0x001FA6D0u, sub_001FA6D0); /* call 0x001FA6D0 */

loc_00212518: ;
    ecx = MEM32(esi + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00212539; /* je: equal / zero */

loc_0021251F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00212525u); RECOMP_ABI_CALL(0x001FA250u, sub_001FA250); /* call 0x001FA250 */

loc_00212525: ;
    ecx = MEM32(esi + 0x10);
    MEM16(ecx + 6) = MEM16(ecx + 6) - 1;
    _fa = (uint32_t)(MEM16(ecx + 6)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(ecx + 6)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 6), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00212539; /* jne: not equal / not zero */

loc_00212533: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00212539u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00212537u); } /* indirect call */
    }

loc_00212539: ;
    MEM32(esi + 0x10) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00212550
 * Original: 0x00212550 - 0x00212578 (40 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00212550(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00212550: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00212558u); RECOMP_ABI_CALL(0x00212430u, sub_00212430); /* call 0x00212430 */

loc_00212558: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00212572; /* je: equal / zero */

loc_0021255F: ;
    edx = ZX16(MEM16(esi + 4));
    ecx = MEM32(0x62EBAC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x23);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x00212572u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0021256Fu); } /* indirect call */
    }

loc_00212572: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00212580
 * Original: 0x00212580 - 0x00212634 (180 bytes, 59 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00212580(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00212580: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = ecx;
    MEM16(esi + 6) = 1;
    MEM32(esi + 8) = 0x4B45A0;
    PUSH32(esp, edi);
    MEM32(esi) = 0x4B45C0;
    MEM32(esi + 8) = 0x4B45B0;
    MEM32(esi + 0x14) = 0;
    MEM32(esi + 0xC) = 0;
    MEM32(esi + 0x10) = 0;
    edi = MEM32(ebp);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002125CB; /* je: equal / zero */

loc_002125BF: ;
    MEM16(edi + 6) = MEM16(edi + 6) + 1;
    _fa = (uint32_t)(MEM16(edi + 6)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x002125CBu); RECOMP_ABI_CALL(0x001FA6D0u, sub_001FA6D0); /* call 0x001FA6D0 */

loc_002125CB: ;
    ecx = MEM32(esi + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002125EC; /* je: equal / zero */

loc_002125D2: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002125D8u); RECOMP_ABI_CALL(0x001FA250u, sub_001FA250); /* call 0x001FA250 */

loc_002125D8: ;
    ecx = MEM32(esi + 0xC);
    MEM16(ecx + 6) = MEM16(ecx + 6) - 1;
    _fa = (uint32_t)(MEM16(ecx + 6)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(ecx + 6)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 6), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002125EC; /* jne: not equal / not zero */

loc_002125E6: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x002125ECu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002125EAu); } /* indirect call */
    }

loc_002125EC: ;
    MEM32(esi + 0xC) = edi;
    edi = MEM32(ebp + 4);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00212602; /* je: equal / zero */

loc_002125F6: ;
    MEM16(edi + 6) = MEM16(edi + 6) + 1;
    _fa = (uint32_t)(MEM16(edi + 6)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x00212602u); RECOMP_ABI_CALL(0x001FA6D0u, sub_001FA6D0); /* call 0x001FA6D0 */

loc_00212602: ;
    ecx = MEM32(esi + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00212623; /* je: equal / zero */

loc_00212609: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0021260Fu); RECOMP_ABI_CALL(0x001FA250u, sub_001FA250); /* call 0x001FA250 */

loc_0021260F: ;
    ecx = MEM32(esi + 0x10);
    MEM16(ecx + 6) = MEM16(ecx + 6) - 1;
    _fa = (uint32_t)(MEM16(ecx + 6)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(ecx + 6)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 6), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00212623; /* jne: not equal / not zero */

loc_0021261D: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00212623u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00212621u); } /* indirect call */
    }

loc_00212623: ;
    MEM32(esi + 0x10) = edi;
    eax = MEM32(ebp + 8);
    MEM32(esi + 0x18) = eax;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00212640
 * Original: 0x00212640 - 0x00212646 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00212640(void)
{

loc_00212640: ;
    eax = 0x71E884;
    esp += 4; return; /* ret */

}

/**
 * sub_00212650
 * Original: 0x00212650 - 0x0021265F (15 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00212650(void)
{

loc_00212650: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0021265Eu); RECOMP_ABI_CALL(0x00206B80u, sub_00206B80); /* call 0x00206B80 */

loc_0021265E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00212660
 * Original: 0x00212660 - 0x0021266F (15 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00212660(void)
{

loc_00212660: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0021266Eu); RECOMP_ABI_CALL(0x00207130u, sub_00207130); /* call 0x00207130 */

loc_0021266E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00212670
 * Original: 0x00212670 - 0x00212671 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00212670(void)
{

loc_00212670: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00212680
 * Original: 0x00212680 - 0x00212686 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00212680(void)
{

loc_00212680: ;
    eax = 0x71E8B8;
    esp += 4; return; /* ret */

}

/**
 * sub_00212690
 * Original: 0x00212690 - 0x002126B5 (37 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00212690(void)
{

loc_00212690: ;
    ecx = MEM32(0x62EBAC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x23);
    PUSH32(esp, 0xE0);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x002126A2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0021269Fu); } /* indirect call */
    }

loc_002126A2: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, ecx);
    ecx = eax;
    MEM16(eax + 4) = 0xE0;
    PUSH32(esp, 0x002126B4u); RECOMP_ABI_CALL(0x00206EF0u, sub_00206EF0); /* call 0x00206EF0 */

loc_002126B4: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002126C0
 * Original: 0x002126C0 - 0x002126CE (14 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002126C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002126C0: ;
    ecx = MEM32(esp + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002126CD; /* je: equal / zero */

loc_002126C8: ;
    g_seh_ebp = ebp; sub_001611A0(); return; /* tail jmp 0x001611A0 */

loc_002126CD: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002126D0
 * Original: 0x002126D0 - 0x002126DF (15 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002126D0(void)
{

loc_002126D0: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002126DEu); RECOMP_ABI_CALL(0x00207850u, sub_00207850); /* call 0x00207850 */

loc_002126DE: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002126E0
 * Original: 0x002126E0 - 0x002126EF (15 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002126E0(void)
{

loc_002126E0: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002126EEu); RECOMP_ABI_CALL(0x00207A80u, sub_00207A80); /* call 0x00207A80 */

loc_002126EE: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002126F0
 * Original: 0x002126F0 - 0x002126F1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002126F0(void)
{

loc_002126F0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00212700
 * Original: 0x00212700 - 0x00212706 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00212700(void)
{

loc_00212700: ;
    eax = 0x71E8EC;
    esp += 4; return; /* ret */

}

/**
 * sub_00212710
 * Original: 0x00212710 - 0x00212735 (37 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00212710(void)
{

loc_00212710: ;
    ecx = MEM32(0x62EBAC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x23);
    PUSH32(esp, 0xA0);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x00212722u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0021271Fu); } /* indirect call */
    }

loc_00212722: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, ecx);
    ecx = eax;
    MEM16(eax + 4) = 0xA0;
    PUSH32(esp, 0x00212734u); RECOMP_ABI_CALL(0x002079E0u, sub_002079E0); /* call 0x002079E0 */

loc_00212734: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00212740
 * Original: 0x00212740 - 0x0021278F (79 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00212740(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00212740: ;
    eax = MEM32(esp + 4);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021278E; /* je: equal / zero */

loc_0021274A: ;
    MEM32(eax) = ecx;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0x1C) = ecx;
    MEM32(eax + 0x18) = ecx;
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x2C) = ecx;
    MEM32(eax + 0x28) = ecx;
    MEM32(eax + 0x24) = ecx;
    MEM32(eax + 0x20) = ecx;
    MEM32(eax + 0x3C) = ecx;
    MEM32(eax + 0x38) = ecx;
    MEM32(eax + 0x34) = ecx;
    MEM32(eax + 0x30) = ecx;
    MEM32(eax + 0x4C) = ecx;
    MEM32(eax + 0x48) = ecx;
    MEM32(eax + 0x44) = ecx;
    MEM32(eax + 0x40) = ecx;
    MEM32(eax + 0x5C) = ecx;
    MEM32(eax + 0x58) = ecx;
    MEM32(eax + 0x54) = ecx;
    MEM32(eax + 0x50) = ecx;

loc_0021278E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00212790
 * Original: 0x00212790 - 0x00212798 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00212790(void)
{

loc_00212790: ;
    eax = MEM32(ecx + 8);
    MEM8(ecx + 0x10) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_002127A0
 * Original: 0x002127A0 - 0x002127A5 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002127A0(void)
{

loc_002127A0: ;
    MEM8(ecx + 0x10) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_002127B0
 * Original: 0x002127B0 - 0x002127B4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002127B0(void)
{

loc_002127B0: ;
    eax = MEM32(ecx + 0xC);
    esp += 4; return; /* ret */

}

/**
 * sub_002127C0
 * Original: 0x002127C0 - 0x002127C9 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002127C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002127C0: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(MEM32(esp + 4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esp += 4; return; /* ret */

}

/**
 * sub_002127D0
 * Original: 0x002127D0 - 0x002127D9 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002127D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002127D0: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(MEM32(esp + 4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esp += 4; return; /* ret */

}

/**
 * sub_002127E0
 * Original: 0x002127E0 - 0x00212803 (35 bytes, 13 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002127E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002127E0: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 8), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002127EC; /* je: equal / zero */

loc_002127E9: ;
    MEM32(ecx + 8) = eax;

loc_002127EC: ;
    edx = MEM32(esp + 0xC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x00212800u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002127FDu); } /* indirect call */
    }

loc_00212800: ;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00212810
 * Original: 0x00212810 - 0x00212A92 (642 bytes, 154 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00212810(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00212810: ;
    _fb = (uint32_t)(0x184) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x184;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = 3;
    ecx = 2;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x190);
    PUSH32(esp, esi);
    edx = 4;
    PUSH32(esp, edi);
    edi = 1;
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x20) = ecx;
    MEM32(esp + 0x24) = eax;
    MEM32(esp + 0x30) = eax;
    MEM32(esp + 0x34) = ecx;
    MEM32(esp + 0x3C) = eax;
    MEM32(esp + 0x44) = ecx;
    MEM32(esp + 0x48) = ecx;
    MEM32(esp + 0x4C) = eax;
    MEM32(esp + 0x50) = eax;
    MEM32(esp + 0x54) = ecx;
    MEM32(esp + 0x58) = eax;
    MEM32(esp + 0x60) = ecx;
    MEM32(esp + 0x64) = eax;
    MEM32(esp + 0x70) = eax;
    MEM32(esp + 0x74) = ecx;
    MEM32(esp + 0x7C) = eax;
    MEM32(esp + 0x84) = ecx;
    MEM32(esp + 0x88) = ecx;
    MEM32(esp + 0x8C) = eax;
    MEM32(esp + 0x90) = eax;
    MEM32(esp + 0x94) = ecx;
    MEM32(esp + 0x98) = eax;
    MEM32(esp + 0xA0) = ecx;
    MEM32(esp + 0xA4) = eax;
    MEM32(esp + 0xB0) = eax;
    MEM32(esp + 0xB4) = ecx;
    MEM32(esp + 0xBC) = eax;
    MEM32(esp + 0xC4) = ecx;
    MEM32(esp + 0xC8) = ecx;
    MEM32(esp + 0xCC) = eax;
    MEM32(esp + 0xD0) = eax;
    MEM32(esp + 0xD4) = ecx;
    MEM32(esp + 0xD8) = eax;
    MEM32(esp + 0xE0) = ecx;
    MEM32(esp + 0xE4) = eax;
    MEM32(esp + 0xF0) = eax;
    MEM32(esp + 0xF4) = ecx;
    MEM32(esp + 0xFC) = eax;
    MEM32(esp + 0x104) = ecx;
    MEM32(esp + 0x108) = ecx;
    MEM32(esp + 0x10C) = eax;
    MEM32(esp + 0x110) = eax;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x1C) = edi;
    MEM32(esp + 0x28) = edi;
    MEM32(esp + 0x2C) = edx;
    MEM32(esp + 0x38) = edi;
    MEM32(esp + 0x40) = edi;
    MEM32(esp + 0x5C) = edi;
    MEM32(esp + 0x68) = edi;
    MEM32(esp + 0x6C) = edx;
    MEM32(esp + 0x78) = edi;
    MEM32(esp + 0x80) = edi;
    MEM32(esp + 0x9C) = edi;
    MEM32(esp + 0xA8) = edi;
    MEM32(esp + 0xAC) = edx;
    MEM32(esp + 0xB8) = edi;
    MEM32(esp + 0xC0) = edi;
    MEM32(esp + 0xDC) = edi;
    MEM32(esp + 0xE8) = edi;
    MEM32(esp + 0xEC) = edx;
    MEM32(esp + 0xF8) = edi;
    MEM32(esp + 0x100) = edi;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x40;
    /* nop */

loc_002129B0: ;
    MEM8(esp + eax + 0x193) = LO8(ebx);
    MEM8(esp + eax + 0x153) = LO8(ebx);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_002129B0; /* jne: not equal / not zero */

loc_002129C2: ;
    esi = esp + 0x154;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = ebp;
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - ebp;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    /* nop */

loc_002129D0: ;
    SET_LO8(edx, MEM8(eax));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002129E0; /* je: equal / zero */

loc_002129D6: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(esi + eax) = LO8(edx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x40 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002129D0; /* jl: less (signed <) */

loc_002129E0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002129E2: ;
    SET_LO8(ecx, MEM8(eax + 0x4B4778));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002129F9; /* je: equal / zero */

loc_002129EC: ;
    MEM8(esp + eax + 0x114) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x40 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002129E2; /* jl: less (signed <) */

loc_002129F9: ;
    MEM32(esp + 0x10) = ebx;
    esi = 0xC18F77A2u;
    ebp = edi;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00212A10;

    /* nop */
    /* nop */

loc_00212A10: ;
    eax = (uint32_t)(int32_t)SMEM8(esp + ecx + 0x114);
    edx = (uint32_t)(int32_t)SMEM8(esp + ecx + 0x154);
    eax = eax ^ edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1010101);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00212A35; /* je: equal / zero */

loc_00212A2C: ;
    edx = MEM32(esp + ecx * 4 + 0x14);
    edx = (uint32_t)((int32_t)edx * (int32_t)eax);
    goto loc_00212A3D;

loc_00212A35: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)MEM32(esp + ecx * 4 + 0x14));
      edx = (uint32_t)(_dividend % (uint32_t)MEM32(esp + ecx * 4 + 0x14)); }
    edx = eax;

loc_00212A3D: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(esp + 0x10) = MEM32(esp + 0x10) + edx;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = edi;
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ebp = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00212A7D; /* jle: less or equal (signed <=) */

loc_00212A4D: ;
    /* nop */

loc_00212A50: ;
    edx = (uint32_t)(int32_t)SMEM8(esp + eax + 0x114);
    ebx = (uint32_t)(int32_t)SMEM8(esp + eax + 0x154);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = (uint32_t)((int32_t)edx * (int32_t)0x1010101);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + esi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = esi ^ edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = MEM32(esp + 0x10);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x10) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_00212A50; /* jl: less (signed <) */

loc_00212A7B: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00212A7D: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x40 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00212A10; /* jl: less (signed <) */

loc_00212A83: ;
    eax = MEM32(esp + 0x10);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x184) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x184;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00212AA0
 * Original: 0x00212AA0 - 0x00212BE1 (321 bytes, 112 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00212AA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00212AA0: ;
    eax = MEM32(0x4AE6FC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00212AD7; /* je: equal / zero */

loc_00212AA9: ;
    eax = MEM32(0x510030);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00212AB4u); RECOMP_ABI_CALL(0x00212810u, sub_00212810); /* call 0x00212810 */

loc_00212AB4: ;
    ecx = MEM32(0x4AE6FC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00212AC9; /* jne: not equal / not zero */

loc_00212AC1: ;
    MEM8(0x71E920) = 1;
    esp += 4; return; /* ret */

loc_00212AC9: ;
    PUSH32(esp, 0x4B4808);
    PUSH32(esp, 0x00212AD3u); RECOMP_ABI_CALL(0x002AECD0u, sub_002AECD0); /* call 0x002AECD0 */

loc_00212AD3: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00212AD7: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00212ADEu); RECOMP_ABI_CALL(0x002B2DD0u, sub_002B2DD0); /* call 0x002B2DD0 */

loc_00212ADE: ;
    ecx = MEM32(0x510030);
    PUSH32(esp, 0x2D);
    PUSH32(esp, ecx);
    ebx = eax;
    PUSH32(esp, 0x00212AEEu); RECOMP_ABI_CALL(0x00102040u, sub_00102040); /* call 0x00102040 */

loc_00212AEE: ;
    esi = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00212B07; /* je: equal / zero */

loc_00212AF7: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x2D);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00212B00u); RECOMP_ABI_CALL(0x00102040u, sub_00102040); /* call 0x00102040 */

loc_00212B00: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00212B17; /* jne: not equal / not zero */

loc_00212B07: ;
    PUSH32(esp, 0x4B4790);
    PUSH32(esp, 0x00212B11u); RECOMP_ABI_CALL(0x002AECD0u, sub_002AECD0); /* call 0x002AECD0 */

loc_00212B11: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00212B17: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_00212B45; /* je: equal / zero */

loc_00212B1C: ;
    edi = 0x4B4774;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - esi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_00212B23: ;
    SET_LO8(edx, MEM8(esi));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00212BD0; /* je: equal / zero */

loc_00212B2D: ;
    SET_LO8(ecx, MEM8(edi + esi));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00212BD0; /* je: equal / zero */

loc_00212B38: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ecx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00212BD0; /* jne: not equal / not zero */

loc_00212B40: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00212B23; /* jne: not equal / not zero */

loc_00212B45: ;
    ecx = (uint32_t)(int32_t)SMEM8(eax + 4);
    edx = (uint32_t)(int32_t)SMEM8(eax + 3);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x41) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0x41;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = edx << 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x41) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x41;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = ecx << 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx | edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = (uint32_t)(int32_t)SMEM8(eax + 6);
    _fb = (uint32_t)(0x41) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0x41;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = edx << 0x18;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx | edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = (uint32_t)(int32_t)SMEM8(eax + 1);
    _fb = (uint32_t)(0x41) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0x41;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = edx << 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx | edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = (uint32_t)(int32_t)SMEM8(eax + 5);
    _fb = (uint32_t)(0x41) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0x41;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = MEM32(0x4B4770);
    edx = edx << 0x14;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx | edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = (uint32_t)(int32_t)SMEM8(eax + 4);
    _fb = (uint32_t)(0x41) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0x41;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = edx << 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx | edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = (uint32_t)(int32_t)SMEM8(eax + 7);
    eax = (uint32_t)(int32_t)SMEM8(eax);
    edx = edx << 0x1C;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x10000000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0x10000000;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = ecx | edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fb = (uint32_t)(0x41) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x41;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = ecx | eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = ecx ^ edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = ecx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    esi = 0x15180;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)esi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)esi)); }
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00212BD0; /* jle: less or equal (signed <=) */

loc_00212BBB: ;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xED4E00) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xED4E00 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00212BD0; /* jge: greater or equal (signed >=) */

loc_00212BC5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM8(0x71E920) = 1;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00212BD0: ;
    PUSH32(esp, 0x4B4790);
    PUSH32(esp, 0x00212BDAu); RECOMP_ABI_CALL(0x002AECD0u, sub_002AECD0); /* call 0x002AECD0 */

loc_00212BDA: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00212BF0
 * Original: 0x00212BF0 - 0x00212BF6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00212BF0(void)
{

loc_00212BF0: ;
    eax = MEM32(0x72079C);
    esp += 4; return; /* ret */

}

/**
 * sub_00212C00
 * Original: 0x00212C00 - 0x00212C0B (11 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00212C00(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00212C00: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00212C10
 * Original: 0x00212C10 - 0x00212C4D (61 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00212C10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00212C10: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(0x62EBAC);
    _fb = (uint32_t)(0xF) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax & 0xFFFFFFF0u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, esi);
    if ((_fa == 0)) goto loc_00212C3B; /* je: equal / zero */

loc_00212C23: ;
    edx = MEM32(ecx + 0x14);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00212C32; /* je: equal / zero */

loc_00212C2E: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00212C3B; /* jne: not equal / not zero */

loc_00212C32: ;
    edx = MEM32(ecx);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x00212C39u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00212C36u); } /* indirect call */
    }

loc_00212C39: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00212C3B: ;
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
 * sub_00212C50
 * Original: 0x00212C50 - 0x00212C86 (54 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00212C50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00212C50: ;
    edx = MEM32(esp + 4);
    ecx = MEM32(0x62EBAC);
    eax = MEM32(ecx + 0xC);
    PUSH32(esp, esi);
    _fb = (uint32_t)(0xF) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = ecx + 0xC;
    edx = edx & 0xFFFFFFF0u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00212C73; /* jle: less or equal (signed <=) */

loc_00212C6B: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x00212C71u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00212C6Eu); } /* indirect call */
    }

loc_00212C71: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00212C73: ;
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
 * sub_00212C90
 * Original: 0x00212C90 - 0x00212D3C (172 bytes, 65 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00212C90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00212C90: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x1C);
    MEM8(esi) = 2;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    ebx = edi + eax * 4;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    MEM32(esi + 0x3C) = eax;
    MEM32(esi + 0x38) = eax;
    MEM32(esi + 0x34) = eax;
    MEM32(esi + 0x30) = eax;
    MEM32(esi + 0x1C) = eax;
    MEM32(esi + 0x18) = eax;
    MEM32(esi + 0x14) = eax;
    MEM32(esi + 0x10) = eax;
    MEM32(esi + 0x2C) = eax;
    MEM32(esi + 0x28) = eax;
    MEM32(esi + 0x24) = eax;
    MEM32(esi + 0x20) = eax;
    MEM32(esi + 0x4C) = eax;
    MEM32(esi + 0x48) = eax;
    MEM32(esi + 0x44) = eax;
    MEM32(esi + 0x40) = eax;
    MEM32(esi + 0x5C) = eax;
    MEM32(esi + 0x58) = eax;
    MEM32(esi + 0x54) = eax;
    MEM32(esi + 0x50) = eax;
    MEM32(esi + 0x6C) = eax;
    MEM32(esi + 0x68) = eax;
    MEM32(esi + 0x64) = eax;
    MEM32(esi + 0x60) = eax;
    MEM32(esi + 0x7C) = eax;
    MEM32(esi + 0x78) = eax;
    MEM32(esi + 0x74) = eax;
    MEM32(esi + 0x70) = eax;
    eax = esi + 0x80;
    if (CMP_AE(_fa, _fb)) goto loc_00212D35; /* jae: above or equal (unsigned >=) */

loc_00212D05: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x20);
    /* nop */

loc_00212D10: ;
    ecx = MEM32(edi);
    ecx = MEM32(ecx + 0x3C);
    edx = eax;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 8), edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00212D21; /* je: equal / zero */

loc_00212D1E: ;
    MEM32(ecx + 8) = edx;

loc_00212D21: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x18);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00212D2Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00212D2Au); } /* indirect call */
    }

loc_00212D2D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00212D10; /* jb: below (unsigned <) */

loc_00212D34: ;
    POP32(esp, ebp);

loc_00212D35: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM8(eax) = 3;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00212D40
 * Original: 0x00212D40 - 0x00212DDB (155 bytes, 57 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00212D40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00212D40: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(esp + 0x1C);
    eax = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    eax = esi + eax * 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    MEM32(esp + 4) = ecx;
    ecx = MEM32(esp + 0x2C);
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 8) = ecx;
    if (CMP_AE(_fa, _fb)) goto loc_00212DD0; /* jae: above or equal (unsigned >=) */

loc_00212D67: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x20);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x2C);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x1C);

loc_00212D76: ;
    eax = MEM32(esi);
    edx = MEM32(eax + 0x10);
    eax = MEM32(eax + 0xC);
    ecx = MEM32(edx + 0x3C);
    edx = MEM32(eax + 0x3C);
    eax = MEM32(edx + 8);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi) = eax;
    ecx = MEM32(ecx + 8);
    eax = MEM32(esp + 0x10);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    MEM32(edi + 4) = ecx;
    if (CMP_B(_fa, _fb)) goto loc_00212DA6; /* jb: below (unsigned <) */

loc_00212D9B: ;
    edx = MEM32(esp + 0x34);
    MEM32(esp + 0x10) = edx;
    ebp = ebp | 0xFFFFFFFFu;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_00212DA6: ;
    ecx = MEM32(esi);
    eax = MEM32(ecx);
    edx = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x00212DB3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00212DB0u); } /* indirect call */
    }

loc_00212DB3: ;
    eax = MEM32(esp + 0x20);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00212D76; /* jb: below (unsigned <) */

loc_00212DBE: ;
    eax = MEM32(esp + 0x14);
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    MEM32(eax) = 0x400;
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00212DD0: ;
    MEM32(ecx) = 0x400;
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00212DE0
 * Original: 0x00212DE0 - 0x00212E1D (61 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00212DE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00212DE0: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = esi + eax * 4;
    eax = MEM32(esp + 0x18);
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x80;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00212E1A; /* jae: above or equal (unsigned >=) */

loc_00212DFA: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x20);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);

loc_00212E04: ;
    ecx = MEM32(esi);
    ecx = MEM32(ecx + 0x3C);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00212E11u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00212E0Eu); } /* indirect call */
    }

loc_00212E11: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00212E04; /* jb: below (unsigned <) */

loc_00212E18: ;
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_00212E1A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00212E20
 * Original: 0x00212E20 - 0x002131FF (991 bytes, 331 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00212E20(void)
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

loc_00212E20: ;
    SET_LO8(eax, MEM8(0x71E920));
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00212E3E; /* jne: not equal / not zero */

loc_00212E2C: ;
    PUSH32(esp, 0x00212E31u); RECOMP_ABI_CALL(0x00212AA0u, sub_00212AA0); /* call 0x00212AA0 */

loc_00212E31: ;
    SET_LO8(eax, MEM8(0x71E920));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002131FB; /* je: equal / zero */

loc_00212E3E: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x44);
    eax = MEM32(ebx + 0x18);
    ecx = eax * 4 + 8;
    eax = MEM32(0x72079C);
    PUSH32(esp, ebp);
    MEM8(eax + 0x10) = 1;
    eax = MEM32(eax + 8);
    MEM32(esp + 0xC) = ecx;
    ecx = MEM32(0x72079C);
    ebp = MEM32(ecx + 0xC);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = edx;
    MEM32(esp + 0x20) = edx;
    MEM32(esp + 0x30) = eax;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    /* nop */

loc_00212E80: ;
    ecx = MEM32(ebx + 0x14);
    edi = eax;
    eax = eax + ecx + 0x90;
    ecx = MEM32(ebx + 0xC);
    MEM32(esp + 0x1C) = eax;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x18) = eax;
    /* nop */

loc_00212EA0: ;
    ecx = MEM32(esp + 0x14);
    MEM32(esp + 0x24) = eax;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(ebx + 0x10);
    MEM32(esp + 0x28) = eax;
    eax = eax + ecx + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00212FEE; /* jbe: below or equal (unsigned <=) */

loc_00212EBD: ;
    _fa = (uint32_t)(MEM32(esp + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x1C), ebp (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00212F97; /* jae: above or equal (unsigned >=) */

loc_00212EC7: ;
    _fa = (uint32_t)(MEM32(esp + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x18), ebp (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00212F44; /* jb: below (unsigned <) */

loc_00212ECD: ;
    esi = MEM32(ebx + 8);
    eax = MEM32(ebx + 0xC);
    edx = MEM32(esp + 0x1C);
    esi = esi << 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - ebp;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(esp + 0x14);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = ecx + edx + 4;
    ecx = MEM32(0x62EBAC);
    eax = ebx + 0xF;
    eax = eax & 0xFFFFFFF0u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0xC) (32-bit) */
    edx = ecx + 0xC;
    MEM32(esp + 0x28) = ebx;
    if (CMP_LE(_fas, _fbs)) goto loc_00212F09; /* jle: less or equal (signed <=) */

loc_00212F01: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x00212F07u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00212F04u); } /* indirect call */
    }

loc_00212F07: ;
    goto loc_00212F23;

loc_00212F09: ;
    ebx = MEM32(ecx + 8);
    MEM32(esp + 0x2C) = ebx;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 8) = ebx;
    ecx = MEM32(edx);
    ebx = MEM32(esp + 0x28);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x2C);
    MEM32(edx) = ecx;

loc_00212F23: ;
    ecx = MEM32(esp + 0x50);
    _fb = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebp = ebp - MEM32(ecx + 8);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x18) = ebp;
    ebp = eax + ebx;
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x20) = eax;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = ecx;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00212EA0;

loc_00212F44: ;
    edx = MEM32(esp + 0x14);
    ebp = ecx + edx + 4;
    ecx = MEM32(0x62EBAC);
    esi = MEM32(ecx + 0xC);
    eax = ebp + 0xF;
    edx = ecx + 0xC;
    eax = eax & 0xFFFFFFF0u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00212F75; /* jle: less or equal (signed <=) */

loc_00212F62: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x00212F68u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00212F65u); } /* indirect call */
    }

loc_00212F68: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x10) = eax;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00212EA0;

loc_00212F75: ;
    esi = MEM32(ecx + 8);
    ebx = esi + eax;
    MEM32(ecx + 8) = ebx;
    ecx = MEM32(edx);
    ebx = MEM32(esp + 0x50);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = esi;
    MEM32(edx) = ecx;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x10) = eax;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00212EA0;

loc_00212F97: ;
    esi = MEM32(esp + 0x30);
    ecx = MEM32(0x62EBAC);
    ebp = MEM32(ecx + 0xC);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = eax;
    eax = edi + 0xF;
    esi = ecx + 0xC;
    eax = eax & 0xFFFFFFF0u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    MEM32(esp + 0x2C) = edi;
    if (CMP_LE(_fas, _fbs)) goto loc_00212FCD; /* jle: less or equal (signed <=) */

loc_00212FB9: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x00212FBFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00212FBCu); } /* indirect call */
    }

loc_00212FBF: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x10) = eax;
    ebp = eax + edi;
    goto loc_00212E80;

loc_00212FCD: ;
    edi = MEM32(ecx + 8);
    ebp = edi + eax;
    MEM32(ecx + 8) = ebp;
    ecx = MEM32(esi);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = edi;
    edi = MEM32(esp + 0x2C);
    MEM32(esi) = ecx;
    MEM32(esp + 0x10) = eax;
    ebp = eax + edi;
    goto loc_00212E80;

loc_00212FEE: ;
    ecx = MEM32(esp + 0x54);
    eax = MEM32(esp + 0x58);
    MEM8(edi) = 2;
    MEM32(edi + 0x3C) = edx;
    MEM32(edi + 0x38) = edx;
    MEM32(edi + 0x34) = edx;
    MEM32(edi + 0x30) = edx;
    MEM32(edi + 0x1C) = edx;
    MEM32(edi + 0x18) = edx;
    MEM32(edi + 0x14) = edx;
    MEM32(edi + 0x10) = edx;
    MEM32(edi + 0x2C) = edx;
    MEM32(edi + 0x28) = edx;
    MEM32(edi + 0x24) = edx;
    MEM32(edi + 0x20) = edx;
    MEM32(edi + 0x4C) = edx;
    MEM32(edi + 0x48) = edx;
    MEM32(edi + 0x44) = edx;
    MEM32(edi + 0x40) = edx;
    MEM32(edi + 0x5C) = edx;
    MEM32(edi + 0x58) = edx;
    MEM32(edi + 0x54) = edx;
    MEM32(edi + 0x50) = edx;
    esi = ecx + eax * 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    MEM32(edi + 0x6C) = edx;
    MEM32(edi + 0x68) = edx;
    MEM32(edi + 0x64) = edx;
    MEM32(edi + 0x60) = edx;
    eax = edi + 0x80;
    MEM32(esp + 0x30) = ecx;
    MEM32(esp + 0x2C) = esi;
    MEM32(edi + 0x7C) = edx;
    MEM32(edi + 0x78) = edx;
    MEM32(edi + 0x74) = edx;
    MEM32(edi + 0x70) = edx;
    MEM32(esp + 0x38) = eax;
    if (CMP_AE(_fa, _fb)) goto loc_00213096; /* jae: above or equal (unsigned >=) */

loc_00213066: ;
    esi = ecx;

loc_00213068: ;
    ecx = MEM32(esi);
    ecx = MEM32(ecx + 0x3C);
    edx = eax;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 8), edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00213079; /* je: equal / zero */

loc_00213076: ;
    MEM32(ecx + 8) = edx;

loc_00213079: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x50);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x48);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00213089u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00213086u); } /* indirect call */
    }

loc_00213089: ;
    ecx = MEM32(esp + 0x2C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00213068; /* jb: below (unsigned <) */

loc_00213094: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00213096: ;
    ecx = MEM32(esp + 0x18);
    esi = MEM32(esp + 0x5C);
    MEM8(eax) = 3;
    eax = MEM32(esp + 0x60);
    MEM32(esp + 0x18) = ecx;
    ecx = esi + eax * 4;
    eax = MEM32(esp + 0x1C);
    MEM32(esp + 0x14) = ecx;
    ecx = MEM32(esp + 0x28);
    MEM32(esp + 0x30) = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(esp + 0x14) (32-bit) */
    MEM32(esp + 0x34) = ecx;
    if (CMP_AE(_fa, _fb)) goto loc_0021311D; /* jae: above or equal (unsigned >=) */

loc_002130C6: ;
    eax = MEM32(esi);
    edx = MEM32(eax + 0x10);
    ecx = MEM32(edx + 0x3C);
    eax = MEM32(eax + 0xC);
    edx = MEM32(eax + 0x3C);
    edx = MEM32(edx + 8);
    eax = MEM32(esp + 0x48);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = edx;
    ecx = MEM32(ecx + 8);
    edx = MEM32(esp + 0x30);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 4) = ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(esp + 0x18) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00213101; /* jb: below (unsigned <) */

loc_002130F1: ;
    ecx = MEM32(esp + 0x20);
    MEM32(esp + 0x30) = ecx;
    MEM32(esp + 0x18) = 0xFFFFFFFFu;

loc_00213101: ;
    ecx = MEM32(esi);
    edx = MEM32(ecx);
    ecx = esp + 0x30;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = MEM32(esi);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x00213110u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0021310Du); } /* indirect call */
    }

loc_00213110: ;
    eax = MEM32(esp + 0x14);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_002130C6; /* jb: below (unsigned <) */

loc_0021311B: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0021311D: ;
    eax = MEM32(esp + 0x34);
    MEM32(eax) = 0x400;
    ecx = MEM32(ebx + 0x18);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0021313F; /* jle: less or equal (signed <=) */

loc_00213130: ;
    ecx = MEM32(esp + 0x24);
    MEM32(ecx + eax * 4) = edx;
    ecx = MEM32(ebx + 0x18);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00213130; /* jl: less (signed <) */

loc_0021313F: ;
    edx = MEM32(esp + 0x24);
    eax = MEM32(esp + 0x28);
    esi = MEM32(esp + 0x44);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00213154u); RECOMP_ABI_CALL(0x0026AA10u, sub_0026AA10); /* call 0x0026AA10 */

loc_00213154: ;
    eax = MEM32(0x72078C);
    ecx = MEM32(0x720790);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0021317A; /* jae: above or equal (unsigned >=) */

loc_00213166: ;
    MEM32(eax) = 0x4B48C4;
    fp_push((double)SMEM32(ebx + 0x18)); /* fild */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(eax + -4) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(0x72078C) = eax;

loc_0021317A: ;
    ecx = MEM32(esi + 0x20);
    esi = MEM32(esp + 0x54);
    edi = MEM32(esp + 0x2C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    eax = MEM32(esp + 0x38);
    MEM32(esp + 0x30) = ecx;
    if (CMP_AE(_fa, _fb)) goto loc_002131AB; /* jae: above or equal (unsigned >=) */

loc_00213191: ;
    ebx = ecx;

loc_00213193: ;
    edx = MEM32(esi);
    ecx = MEM32(edx + 0x3C);
    edx = MEM32(ecx);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x44);
    PUSH32(esp, ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x002131A4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002131A1u); } /* indirect call */
    }

loc_002131A4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00213193; /* jb: below (unsigned <) */

loc_002131AB: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = MEM32(0x72079C);
    MEM8(ecx + 0x10) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_002131F7; /* je: equal / zero */

loc_002131BD: ;
    ecx = MEM32(0x62EBAC);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebp = ebp - eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0xF) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0xF;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = ebp & 0xFFFFFFF0u;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fa == 0)) goto loc_002131E7; /* je: equal / zero */

loc_002131CD: ;
    edx = MEM32(ecx + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002131D8; /* je: equal / zero */

loc_002131D4: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002131E7; /* jne: not equal / not zero */

loc_002131D8: ;
    edx = MEM32(ecx);
    PUSH32(esp, ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x002131DFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002131DCu); } /* indirect call */
    }

loc_002131DF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_002131E7: ;
    edx = MEM32(ecx + 8);
    eax = MEM32(ecx + 0xC);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ebp;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 8) = edx;
    MEM32(ecx + 0xC) = eax;

loc_002131F7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_002131FB: ;
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
 * sub_00213200
 * Original: 0x00213200 - 0x00213305 (261 bytes, 97 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00213200(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00213200: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    MEM32(ebx) = 0;
    MEM32(eax) = 0;
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    MEM32(ebp) = 0;
    MEM32(ecx) = 0;
    edx = MEM32(eax + 0x14);
    ecx = MEM32(eax + 0xC);
    PUSH32(esp, esi);
    _fb = (uint32_t)(MEM32(eax + 0x10)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + MEM32(eax + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    edi = MEM32(eax + 0x18);
    _fb = (uint32_t)(0x90) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x90;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = edi * 4 + 8;
    esi = ecx + edi + 4;
    MEM32(ebx) = esi;
    ecx = MEM32(0x72079C);
    ecx = MEM32(ecx + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00213300; /* jle: less or equal (signed <=) */

loc_00213263: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00213291; /* jle: less or equal (signed <=) */

loc_00213267: ;
    edx = MEM32(esp + 0x24);
    MEM32(ebp) = esi;
    eax = MEM32(ebx);
    ecx = MEM32(edx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00213282; /* jle: less or equal (signed <=) */

loc_00213276: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(esp + 0x20);
    MEM32(ecx) = eax;
    eax = MEM32(ebx);
    MEM32(edx) = eax;

loc_00213282: ;
    ecx = MEM32(esp + 0x18);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(ecx) = 0;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00213291: ;
    ebx = MEM32(eax + 0xC);
    esi = ebx + edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_002132D5; /* jle: less or equal (signed <=) */

loc_0021329B: ;
    esi = MEM32(eax + 8);
    eax = MEM32(eax + 0x10);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax + edi + 4;
    edi = MEM32(esp + 0x24);
    MEM32(ebp) = eax;
    esi = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_002132C8; /* jle: less or equal (signed <=) */

loc_002132BC: ;
    ebx = eax;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - esi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi = MEM32(esp + 0x20);
    MEM32(esi) = ebx;
    MEM32(edi) = eax;

loc_002132C8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(esp + 0x10);
    POP32(esp, ebp);
    MEM32(edx) = ecx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_002132D5: ;
    ecx = MEM32(eax + 0x10);
    ecx = ecx + edi + 4;
    edi = MEM32(esp + 0x24);
    MEM32(ebp) = ecx;
    esi = MEM32(edi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_002132F5; /* jle: less or equal (signed <=) */

loc_002132E9: ;
    ebx = ecx;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - esi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi = MEM32(esp + 0x20);
    MEM32(esi) = ebx;
    MEM32(edi) = ecx;

loc_002132F5: ;
    eax = MEM32(eax + 0xC);
    ecx = MEM32(esp + 0x18);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx) = eax;

loc_00213300: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00213310
 * Original: 0x00213310 - 0x00213345 (53 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00213310(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00213310: ;
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
    ecx = 0x3F4D41B3;
    MEM32(eax + 0x20) = 0x3E88D677;
    MEM32(eax + 0x24) = 0x3F08D677;
    MEM32(eax + 0x28) = ecx;
    MEM32(eax + 0x2C) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00213350
 * Original: 0x00213350 - 0x00213353 (3 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00213350(void)
{

loc_00213350: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00213360
 * Original: 0x00213360 - 0x00213377 (23 bytes, 5 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00213360(void)
{

loc_00213360: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    MEM32(eax) = 0;
    MEM32(ecx) = 0;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00213380
 * Original: 0x00213380 - 0x00213383 (3 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00213380(void)
{

loc_00213380: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_00213390
 * Original: 0x00213390 - 0x00213393 (3 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00213390(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00213390: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_002133A0
 * Original: 0x002133A0 - 0x002133A3 (3 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_002133A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002133A0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_002133B0
 * Original: 0x002133B0 - 0x002133B6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002133B0(void)
{

loc_002133B0: ;
    eax = 0xB;
    esp += 4; return; /* ret */

}

/**
 * sub_002133C0
 * Original: 0x002133C0 - 0x002133D7 (23 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002133C0(void)
{

loc_002133C0: ;
    eax = ecx;
    MEM32(eax) = 0;
    MEM32(eax + 4) = 0;
    MEM32(eax + 8) = 0x80000000u;
    esp += 4; return; /* ret */

}

/**
 * sub_002133E0
 * Original: 0x002133E0 - 0x002133E4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002133E0(void)
{

loc_002133E0: ;
    eax = MEM32(ecx + 4);
    esp += 4; return; /* ret */

}

/**
 * sub_002133F0
 * Original: 0x002133F0 - 0x002133F4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002133F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002133F0: ;
    MEM32(ecx + 4) = MEM32(ecx + 4) - 1;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

}

/**
 * sub_00213400
 * Original: 0x00213400 - 0x0021340A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00213400(void)
{

loc_00213400: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 4) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00213410
 * Original: 0x00213410 - 0x0021342F (31 bytes, 9 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00213410(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00213410: ;
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
 * sub_00213430
 * Original: 0x00213430 - 0x0021344F (31 bytes, 9 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00213430(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00213430: ;
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
 * sub_00213450
 * Original: 0x00213450 - 0x00213477 (39 bytes, 15 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00213450(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00213450: ;
    eax = MEM32(ecx + 8);
    edx = MEM32(esp + 4);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00213474; /* jge: greater or equal (signed >=) */

loc_00213460: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00213468; /* jl: less (signed <) */

loc_00213466: ;
    eax = edx;

loc_00213468: ;
    PUSH32(esp, 0x1C);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00213471u); RECOMP_ABI_CALL(0x00101B30u, sub_00101B30); /* call 0x00101B30 */

loc_00213471: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00213474: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00213480
 * Original: 0x00213480 - 0x002134B6 (54 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00213480(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00213480: ;
    ecx = MEM32(esp + 0xC);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_002134B5; /* js: sign (negative) */

loc_00213487: ;
    edx = MEM32(esp + 8);
    eax = ecx;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1C);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ebx = ecx + 1;
    edi = edi;

loc_002134A0: ;
    esi = edx + eax;
    edi = eax;
    ecx = 7;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x1C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    if ((_fa != 0)) goto loc_002134A0; /* jne: not equal / not zero */

loc_002134B2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_002134B5: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002134C0
 * Original: 0x002134C0 - 0x002134E7 (39 bytes, 15 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002134C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002134C0: ;
    eax = MEM32(ecx + 8);
    edx = MEM32(esp + 4);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002134E4; /* jge: greater or equal (signed >=) */

loc_002134D0: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002134D8; /* jl: less (signed <) */

loc_002134D6: ;
    eax = edx;

loc_002134D8: ;
    PUSH32(esp, 0x20);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002134E1u); RECOMP_ABI_CALL(0x00101B30u, sub_00101B30); /* call 0x00101B30 */

loc_002134E1: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002134E4: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002134F0
 * Original: 0x002134F0 - 0x002134F4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002134F0(void)
{

loc_002134F0: ;
    eax = MEM32(ecx + 0x14);
    esp += 4; return; /* ret */

}

/**
 * sub_00213500
 * Original: 0x00213500 - 0x0021350D (13 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00213500(void)
{

loc_00213500: ;
    eax = MEM32(ecx);
    ecx = MEM32(esp + 4);
    MEM8(ecx + eax) = 0xFF;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00213510
 * Original: 0x00213510 - 0x0021353C (44 bytes, 21 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00213510(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00213510: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx + 4);
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_00213538; /* js: sign (negative) */

loc_00213517: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    /* nop */

loc_00213520: ;
    eax = MEM32(ecx);
    edx = eax + esi;
    SET_LO8(eax, MEM8(edx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xFF (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00213534; /* je: equal / zero */

loc_0021352B: ;
    eax = ZX8(LO8(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00213534; /* jle: less or equal (signed <=) */

loc_00213532: ;
    MEM8(edx) = MEM8(edx) - 1;
    _fa = (uint32_t)(MEM8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */

loc_00213534: ;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas >= 0)) goto loc_00213520; /* jns: not sign (positive) */

loc_00213537: ;
    POP32(esp, edi);

loc_00213538: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00213540
 * Original: 0x00213540 - 0x00213638 (248 bytes, 86 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00213540(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00213540: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = ecx;
    eax = MEM32(ebx + 0x20);
    ecx = MEM32(esp + 0x18);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ZX8(MEM8(eax));
    MEM8(eax) = 0xFF;
    ebp = MEM32(ebx + 0x94);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 2 (32-bit) */
    MEM32(esp + 0x20) = esi;
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x18) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_00213590; /* jne: not equal / not zero */

loc_00213578: ;
    MEM32(esp + 0x14) = 4;
    MEM32(esp + 0x10) = 0x20;
    MEM32(esp + 0x18) = 1;

loc_00213590: ;
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002135C0; /* jge: greater or equal (signed >=) */

loc_00213595: ;
    eax = esi;
    edx = ebp;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1C);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    /* nop */

loc_002135A0: ;
    ecx = MEM32(ebx + 0x90);
    edi = eax + ecx;
    esi = edi + 0x1C;
    ecx = 7;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x1C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    if ((_fa != 0)) goto loc_002135A0; /* jne: not equal / not zero */

loc_002135B9: ;
    esi = MEM32(esp + 0x24);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);

loc_002135C0: ;
    ecx = MEM32(ebx + 0x90);
    edx = esi;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x1C);
    MEM16(ecx + edx + 0x18) = LO16(eax);
    MEM32(ebx + 0x94) = ebp;
    MEM32(ebx + 0x38) = MEM32(ebx + 0x38) - 1;
    _fa = (uint32_t)(MEM32(ebx + 0x38)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = MEM32(ebx + 0x24);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_002135F9; /* js: sign (negative) */

loc_002135DF: ;
    /* nop */

loc_002135E0: ;
    edx = MEM32(ebx + 0x20);
    SET_LO8(ecx, MEM8(edx + eax));
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0xFF (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002135F6; /* je: equal / zero */

loc_002135ED: ;
    ecx = ZX8(LO8(ecx));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_002135F6; /* jle: less or equal (signed <=) */

loc_002135F4: ;
    MEM8(edx) = MEM8(edx) - 1;
    _fa = (uint32_t)(MEM8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */

loc_002135F6: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas >= 0)) goto loc_002135E0; /* jns: not sign (positive) */

loc_002135F9: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0x14);
    ebp = MEM32(esp + 0x18);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x14) = ecx;
    ecx = MEM32(ebx + 0x14);
    eax = esp + 0xC;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    MEM32(esp + 0x1C) = ebp;
    edx = MEM32(ecx);
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00213626u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00213623u); } /* indirect call */
    }

loc_00213626: ;
    eax = MEM32(ebx + 0x50);
    POP32(esp, esi);
    eax = eax | 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, ebp);
    MEM32(ebx + 0x50) = eax;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00213640
 * Original: 0x00213640 - 0x0021369E (94 bytes, 31 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00213640(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00213640: ;
    eax = MEM32(esp + 4);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = edx;
    MEM32(eax + 4) = edx;
    MEM32(eax + 0xC) = edx;
    MEM32(eax + 8) = 0x18;
    ecx = MEM32(ecx + 0x94);
    edx = ecx + ecx * 2;
    edx = edx << 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x80;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    MEM32(eax) = edx;
    edx = ecx + 2;
    esi = edx + edx * 2;
    PUSH32(esp, edi);
    esi = esi << 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 2 (32-bit) */
    edi = ecx * 4 + 0x2C;
    MEM32(eax + 4) = esi;
    MEM32(eax + 8) = edi;
    MEM32(eax + 0xC) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_00213699; /* jl: less (signed <) */

loc_00213689: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x20;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(eax + 4) = esi;
    MEM32(eax + 8) = edi;
    MEM32(eax + 0xC) = edx;

loc_00213699: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002136A0
 * Original: 0x002136A0 - 0x002136C8 (40 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002136A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002136A0: ;
    eax = MEM32(esp + 8);
    edx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    edx = MEM32(ecx + 0x90);
    eax = ecx + 0x50;
    PUSH32(esp, eax);
    eax = MEM32(ecx + 0x38);
    ecx = MEM32(ecx + 0x34);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002136C2u); RECOMP_ABI_CALL(0x00271CE0u, sub_00271CE0); /* call 0x00271CE0 */

loc_002136C2: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002136D0
 * Original: 0x002136D0 - 0x00213711 (65 bytes, 25 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002136D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002136D0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 8);
    eax = MEM32(esi + 4);
    ecx = ecx & 0x7FFFFFFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002136FC; /* jne: not equal / not zero */

loc_002136E3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002136EB; /* je: equal / zero */

loc_002136E7: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_002136F0;

loc_002136EB: ;
    eax = 1;

loc_002136F0: ;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x002136F9u); RECOMP_ABI_CALL(0x00101B30u, sub_00101B30); /* call 0x00101B30 */

loc_002136F9: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002136FC: ;
    eax = MEM32(esi + 4);
    ecx = MEM32(esp + 8);
    edx = MEM32(esi);
    SET_LO8(ecx, MEM8(ecx));
    MEM8(edx + eax) = LO8(ecx);
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00213720
 * Original: 0x00213720 - 0x002137BD (157 bytes, 64 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00213720(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00213720: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x18);
    ebx = ecx;
    eax = MEM32(ebx + 4);
    ebp = eax + esi;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x1C) = eax;
    eax = MEM32(ebx + 8);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    MEM32(esp + 0x10) = ebp;
    if (CMP_GE(_fas, _fbs)) goto loc_0021375F; /* jge: greater or equal (signed >=) */

loc_0021374B: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00213753; /* jl: less (signed <) */

loc_00213751: ;
    eax = ebp;

loc_00213753: ;
    PUSH32(esp, 0x1C);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0021375Cu); RECOMP_ABI_CALL(0x00101B30u, sub_00101B30); /* call 0x00101B30 */

loc_0021375C: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0021375F: ;
    eax = MEM32(ebx);
    edx = edi;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x1C);
    ecx = eax + edx;
    MEM32(esp + 0x18) = ecx;
    ecx = edi + esi;
    esi = MEM32(esp + 0x1C);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x1C);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_002137AE; /* js: sign (negative) */

loc_0021377C: ;
    ebp = MEM32(esp + 0x18);
    eax = esi;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1C);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebp = ebp - ecx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x1C) = esi;
    edi = edi;

loc_00213790: ;
    esi = eax + ebp;
    edi = eax;
    ecx = 7;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    ecx = MEM32(esp + 0x1C);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x1C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x1C) = ecx;
    if ((_fa != 0)) goto loc_00213790; /* jne: not equal / not zero */

loc_002137AA: ;
    ebp = MEM32(esp + 0x10);

loc_002137AE: ;
    eax = MEM32(ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebx + 4) = ebp;
    POP32(esp, ebp);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002137C0
 * Original: 0x002137C0 - 0x002137D0 (16 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002137C0(void)
{

loc_002137C0: ;
    eax = ecx;
    MEM32(eax) = 0;
    MEM32(eax + 4) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_002137D0
 * Original: 0x002137D0 - 0x00213800 (48 bytes, 21 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002137D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002137D0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 8);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002137F8; /* jge: greater or equal (signed >=) */

loc_002137E4: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002137EC; /* jl: less (signed <) */

loc_002137EA: ;
    eax = esi;

loc_002137EC: ;
    PUSH32(esp, 0x20);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x002137F5u); RECOMP_ABI_CALL(0x00101B30u, sub_00101B30); /* call 0x00101B30 */

loc_002137F5: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002137F8: ;
    MEM32(edi + 4) = esi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00213830
 * Original: 0x00213830 - 0x00213895 (101 bytes, 40 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00213830(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00213830: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 4);
    eax = ecx + -1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00213849; /* jl: less (signed <) */

loc_0021383D: ;
    edx = MEM32(esi);
    /* nop */

loc_00213840: ;
    _fa = (uint32_t)(MEM8(edx + eax)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx + eax), 0xFF (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0021388A; /* je: equal / zero */

loc_00213846: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas >= 0)) goto loc_00213840; /* jns: not sign (positive) */

loc_00213849: ;
    edx = MEM32(esi + 8);
    edx = edx & 0x7FFFFFFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0021386E; /* jne: not equal / not zero */

loc_00213856: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    eax = ecx + ecx;
    if (CMP_NE(_fa, _fb)) goto loc_00213862; /* jne: not equal / not zero */

loc_0021385D: ;
    eax = 1;

loc_00213862: ;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0021386Bu); RECOMP_ABI_CALL(0x00101B30u, sub_00101B30); /* call 0x00101B30 */

loc_0021386B: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0021386E: ;
    eax = MEM32(esi);
    ecx = MEM32(esi + 4);
    SET_LO8(edx, MEM8(esp + 8));
    MEM8(eax + ecx) = LO8(edx);
    eax = MEM32(esi + 4);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 4) = eax;
    esi = eax;
    eax = esi + -1;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0021388A: ;
    SET_LO8(ecx, MEM8(esp + 8));
    POP32(esp, esi);
    MEM8(edx + eax) = LO8(ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002138A0
 * Original: 0x002138A0 - 0x002138B8 (24 bytes, 7 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002138A0(void)
{

loc_002138A0: ;
    edx = MEM32(esp + 4);
    eax = ecx;
    ecx = eax + 0xC;
    MEM32(eax) = ecx;
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = 0x80000008u;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002138C0
 * Original: 0x002138C0 - 0x00213901 (65 bytes, 29 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002138C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002138C0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ebx = MEM32(esi + 4);
    PUSH32(esp, edi);
    edi = ebx + eax;
    eax = MEM32(esi + 8);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002138EF; /* jge: greater or equal (signed >=) */

loc_002138DB: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002138E3; /* jl: less (signed <) */

loc_002138E1: ;
    eax = edi;

loc_002138E3: ;
    PUSH32(esp, 0x20);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x002138ECu); RECOMP_ABI_CALL(0x00101B30u, sub_00101B30); /* call 0x00101B30 */

loc_002138EC: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002138EF: ;
    ecx = MEM32(esi);
    MEM32(esi + 4) = edi;
    eax = ebx;
    POP32(esp, edi);
    eax = eax << 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    POP32(esp, esi);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00213910
 * Original: 0x00213910 - 0x00213947 (55 bytes, 19 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00213910(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00213910: ;
    eax = ecx;
    ecx = MEM32(esp + 4);
    MEM32(eax + 4) = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 8) = 0x80000004u;
    edx = eax + 0xC;
    MEM32(eax) = edx;
    MEM32(edx) = ecx;
    MEM32(edx + 4) = ecx;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x1C;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx) = ecx;
    MEM32(edx + 4) = ecx;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x1C;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx) = ecx;
    MEM32(edx + 4) = ecx;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x1C;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx) = ecx;
    MEM32(edx + 4) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00213950
 * Original: 0x00213950 - 0x00213AC9 (377 bytes, 133 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00213950(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00213950: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebx = ecx;
    eax = MEM32(ebx + 0x94);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax + eax * 2;
    edi = edi << 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0xB0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0xB0;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    MEM32(esp + 0x24) = edi;
    if (CMP_NE(_fa, _fb)) goto loc_00213986; /* jne: not equal / not zero */

loc_0021397A: ;
    ecx = 4;
    edx = 0x20;
    esi = eax;

loc_00213986: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x30;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x28) = edx;
    MEM32(esp + 0x2C) = ecx;
    ecx = MEM32(ebx + 0x14);
    edx = esp + 0x24;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    MEM32(esp + 0x34) = esi;
    eax = MEM32(ecx);
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x002139A7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002139A4u); } /* indirect call */
    }

loc_002139A7: ;
    MEM32(ebx + 0x50) = MEM32(ebx + 0x50) | 6;
    _fa = (uint32_t)(MEM32(ebx + 0x50)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esi = MEM32(ebx + 0x38);
    eax = MEM32(ebx + 0x3C);
    edx = MEM32(ebx + 0x38);
    edi = ebx + 0x34;
    ebp = esi + 1;
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    MEM32(esp + 0x10) = edx;
    if (CMP_GE(_fas, _fbs)) goto loc_002139DF; /* jge: greater or equal (signed >=) */

loc_002139C7: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002139CF; /* jl: less (signed <) */

loc_002139CD: ;
    eax = ebp;

loc_002139CF: ;
    PUSH32(esp, 0x20);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x002139D8u); RECOMP_ABI_CALL(0x00101B30u, sub_00101B30); /* call 0x00101B30 */

loc_002139D8: ;
    edx = MEM32(esp + 0x1C);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002139DF: ;
    MEM32(edi + 4) = ebp;
    ebp = MEM32(edi);
    eax = MEM32(ebx + 0x94);
    esi = esi << 5;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ebp;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = ebx + 0x90;
    ecx = eax + 1;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x18) = eax;
    eax = MEM32(ebp + 8);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x20) = esi;
    MEM32(esp + 0x14) = ecx;
    if (CMP_GE(_fas, _fbs)) goto loc_00213A2E; /* jge: greater or equal (signed >=) */

loc_00213A12: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00213A1A; /* jl: less (signed <) */

loc_00213A18: ;
    eax = ecx;

loc_00213A1A: ;
    PUSH32(esp, 0x1C);
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00213A23u); RECOMP_ABI_CALL(0x00101B30u, sub_00101B30); /* call 0x00101B30 */

loc_00213A23: ;
    edx = MEM32(esp + 0x1C);
    ecx = MEM32(esp + 0x20);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00213A2E: ;
    esi = MEM32(ebp);
    eax = edx;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1C);
    edi = esi + eax;
    esi = MEM32(esp + 0x18);
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x1C) = eax;
    if ((_fas < 0)) goto loc_00213A82; /* js: sign (negative) */

loc_00213A44: ;
    eax = esi;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1C);
    ecx = edi + 0x1C;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x18) = edi;
    MEM32(esp + 0x10) = esi;
    goto loc_00213A60;

loc_00213A5B: ;
    edi = MEM32(esp + 0x18);
    /* nop */

loc_00213A60: ;
    esi = edi + eax;
    edi = eax;
    ecx = 7;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    ecx = MEM32(esp + 0x10);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x1C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x10) = ecx;
    if ((_fa != 0)) goto loc_00213A5B; /* jne: not equal / not zero */

loc_00213A7A: ;
    ecx = MEM32(esp + 0x14);
    eax = MEM32(esp + 0x1C);

loc_00213A82: ;
    MEM32(ebp + 4) = ecx;
    ebp = MEM32(ebp);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    MEM32(ebp) = eax;
    MEM32(ebp + 4) = eax;
    MEM16(ebp + 0x18) = LO16(eax);
    if (CMP_LE(_fas, _fbs)) goto loc_00213AA6; /* jle: less or equal (signed <=) */

loc_00213A9A: ;
    _fa = (uint32_t)(MEM16(ebp + -4)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebp + -4), LO16(eax) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00213AA6; /* jne: not equal / not zero */

loc_00213AA0: ;
    MEM16(ebp + 0x18) = 1;

loc_00213AA6: ;
    eax = MEM32(esp + 0x38);
    ecx = MEM32(esp + 0x20);
    MEM32(eax) = ecx;
    eax = MEM32(esp + 0x3C);
    PUSH32(esp, edx);
    ecx = ebx + 0x20;
    MEM32(eax) = ebp;
    PUSH32(esp, 0x00213ABFu); RECOMP_ABI_CALL(0x00213830u, sub_00213830); /* call 0x00213830 */

loc_00213ABF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00213AD0
 * Original: 0x00213AD0 - 0x00213AE6 (22 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00213AD0(void)
{

loc_00213AD0: ;
    eax = ecx;
    ecx = eax + 0xC;
    MEM32(eax) = ecx;
    MEM32(eax + 4) = 0;
    MEM32(eax + 8) = 0x80000008u;
    esp += 4; return; /* ret */

}

/**
 * sub_00213AF0
 * Original: 0x00213AF0 - 0x00213BA2 (178 bytes, 46 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00213AF0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00213AF0: ;
    eax = ecx;
    MEM16(eax + 6) = 1;
    MEM32(eax + 8) = 0x4B45A0;
    MEM32(eax) = 0x4B48E4;
    MEM32(eax + 8) = 0x4B48D4;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 0x14) = edx;
    MEM32(eax + 0x10) = edx;
    MEM32(eax + 0xC) = edx;
    MEM32(eax + 0x18) = edx;
    MEM32(eax + 0x24) = edx;
    MEM32(eax + 0x28) = 0x80000008u;
    ecx = eax + 0x2C;
    MEM32(eax + 0x20) = ecx;
    MEM32(eax + 0x34) = edx;
    MEM32(eax + 0x38) = edx;
    MEM32(eax + 0x3C) = 0x80000000u;
    MEM32(eax + 0x50) = edx;
    MEM32(eax + 0x54) = edx;
    MEM32(eax + 0x58) = edx;
    MEM32(eax + 0x5C) = edx;
    MEM32(eax + 0x60) = edx;
    MEM32(eax + 0x64) = edx;
    MEM32(eax + 0x68) = edx;
    MEM32(eax + 0x6C) = edx;
    MEM32(eax + 0x70) = 0x3E88D677;
    MEM32(eax + 0x74) = 0x3F08D677;
    ecx = 0x3F4D41B3;
    MEM32(eax + 0x78) = ecx;
    MEM32(eax + 0x7C) = ecx;
    MEM32(eax + 0x94) = edx;
    MEM32(eax + 0x98) = 0x80000004u;
    ecx = eax + 0x9C;
    MEM32(eax + 0x90) = ecx;
    MEM32(ecx) = edx;
    MEM32(ecx + 4) = edx;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x1C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx) = edx;
    MEM32(ecx + 4) = edx;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x1C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx) = edx;
    MEM32(ecx + 4) = edx;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x1C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx) = edx;
    MEM32(ecx + 4) = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_00213BB0
 * Original: 0x00213BB0 - 0x00213BB3 (3 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00213BB0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00213BB0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00213BC0
 * Original: 0x00213BC0 - 0x00213BC8 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00213BC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00213BC0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_00213BD0(); return; /* tail jmp 0x00213BD0 */

}

/**
 * sub_00213BD0
 * Original: 0x00213BD0 - 0x00213BF8 (40 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00213BD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00213BD0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00213BD8u); RECOMP_ABI_CALL(0x0020CC80u, sub_0020CC80); /* call 0x0020CC80 */

loc_00213BD8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00213BF2; /* je: equal / zero */

loc_00213BDF: ;
    edx = ZX16(MEM16(esi + 4));
    ecx = MEM32(0x62EBAC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x23);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x00213BF2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00213BEFu); } /* indirect call */
    }

loc_00213BF2: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00213C00
 * Original: 0x00213C00 - 0x00213C06 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00213C00(void)
{

loc_00213C00: ;
    eax = 0x71E924;
    esp += 4; return; /* ret */

}

/**
 * sub_00213C10
 * Original: 0x00213C10 - 0x00213C16 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00213C10(void)
{

loc_00213C10: ;
    eax = 0x71E958;
    esp += 4; return; /* ret */

}

/**
 * sub_00213C20
 * Original: 0x00213C20 - 0x00213C23 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00213C20(void)
{

loc_00213C20: ;
    eax = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00213C30
 * Original: 0x00213C30 - 0x00213C33 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00213C30(void)
{

loc_00213C30: ;
    eax = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00213C40
 * Original: 0x00213C40 - 0x00213C43 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00213C40(void)
{

loc_00213C40: ;
    eax = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00213C50
 * Original: 0x00213C50 - 0x00213C53 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00213C50(void)
{

loc_00213C50: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00213C60
 * Original: 0x00213C60 - 0x00213C63 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00213C60(void)
{

loc_00213C60: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00213C70
 * Original: 0x00213C70 - 0x00213C71 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00213C70(void)
{

loc_00213C70: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00213C80
 * Original: 0x00213C80 - 0x00213C81 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00213C80(void)
{

loc_00213C80: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00213C90
 * Original: 0x00213C90 - 0x00213C91 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00213C90(void)
{

loc_00213C90: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00213CA0
 * Original: 0x00213CA0 - 0x00213CA6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00213CA0(void)
{

loc_00213CA0: ;
    eax = 0x71E98C;
    esp += 4; return; /* ret */

}

/**
 * sub_00213CB0
 * Original: 0x00213CB0 - 0x00213CB1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00213CB0(void)
{

loc_00213CB0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00213CC0
 * Original: 0x00213CC0 - 0x00213CD1 (17 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00213CC0(void)
{

loc_00213CC0: ;
    eax = ecx;
    MEM16(eax + 6) = 1;
    MEM32(eax) = 0x4B435C;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00213CE0
 * Original: 0x00213CE0 - 0x00213D02 (34 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00213CE0(void)
{

loc_00213CE0: ;
    ecx = MEM32(0x62EBAC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x22);
    PUSH32(esp, 8);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x00213CEFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00213CECu); } /* indirect call */
    }

loc_00213CEF: ;
    MEM16(eax + 4) = 8;
    MEM16(eax + 6) = 1;
    MEM32(eax) = 0x4B435C;
    esp += 4; return; /* ret */

}

/**
 * sub_00213D10
 * Original: 0x00213D10 - 0x00213D35 (37 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00213D10(void)
{

loc_00213D10: ;
    eax = ecx;
    MEM32(eax) = 0xBF800000u;
    MEM32(eax + 4) = 0x3C23D70A;
    MEM32(eax + 8) = 0x3BA3D70A;
    MEM32(eax + 0xC) = 0x3DCCCCCD;
    MEM32(eax + 0x10) = 0x3E4CCCCD;
    esp += 4; return; /* ret */

}

/**
 * sub_00213D40
 * Original: 0x00213D40 - 0x00213D4F (15 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00213D40(void)
{

loc_00213D40: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00213D4Eu); RECOMP_ABI_CALL(0x00211D40u, sub_00211D40); /* call 0x00211D40 */

loc_00213D4E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00213D50
 * Original: 0x00213D50 - 0x00213D5F (15 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00213D50(void)
{

loc_00213D50: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00213D5Eu); RECOMP_ABI_CALL(0x00211D70u, sub_00211D70); /* call 0x00211D70 */

loc_00213D5E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00213D60
 * Original: 0x00213D60 - 0x00213D61 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00213D60(void)
{

loc_00213D60: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00213D70
 * Original: 0x00213D70 - 0x00213D76 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00213D70(void)
{

loc_00213D70: ;
    eax = 0x71E9C0;
    esp += 4; return; /* ret */

}

/**
 * sub_00213D80
 * Original: 0x00213D80 - 0x00213DA2 (34 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00213D80(void)
{

loc_00213D80: ;
    ecx = MEM32(0x62EBAC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x22);
    PUSH32(esp, 0x60);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x00213D8Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00213D8Cu); } /* indirect call */
    }

loc_00213D8F: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, ecx);
    ecx = eax;
    MEM16(eax + 4) = 0x60;
    PUSH32(esp, 0x00213DA1u); RECOMP_ABI_CALL(0x002122D0u, sub_002122D0); /* call 0x002122D0 */

loc_00213DA1: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00213DB0
 * Original: 0x00213DB0 - 0x00213DDB (43 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00213DB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00213DB0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00213DDA; /* je: equal / zero */

loc_00213DB8: ;
    MEM32(eax) = 0xBF800000u;
    MEM32(eax + 4) = 0x3C23D70A;
    MEM32(eax + 8) = 0x3BA3D70A;
    MEM32(eax + 0xC) = 0x3DCCCCCD;
    MEM32(eax + 0x10) = 0x3E4CCCCD;

loc_00213DDA: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00213DE0
 * Original: 0x00213DE0 - 0x00213DE1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00213DE0(void)
{

loc_00213DE0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00213DF0
 * Original: 0x00213DF0 - 0x00213DF4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00213DF0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00213DF0: ;
    MEM32(ecx + 0x24) = MEM32(ecx + 0x24) + 1;
    _fa = (uint32_t)(MEM32(ecx + 0x24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

}

/**
 * sub_00213E00
 * Original: 0x00213E00 - 0x00213E04 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00213E00(void)
{

loc_00213E00: ;
    eax = MEM32(ecx + 0x24);
    esp += 4; return; /* ret */

}

/**
 * sub_00213E10
 * Original: 0x00213E10 - 0x00213E37 (39 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00213E10(void)
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

loc_00213E10: ;
    PUSH32(esp, ecx);
    eax = MEM32(esp + 8);
    SET_LO8(ecx, MEM8(esp + 8));
    eax = eax >> 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esp) = HI8(eax);
    MEM8(esp + 1) = LO8(eax);
    eax = MEM32(esp + 8);
    eax = eax >> 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esp + 2) = LO8(eax);
    MEM8(esp + 3) = LO8(ecx);
    fp_push(MEMF(esp)); /* fld float */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00213E40
 * Original: 0x00213E40 - 0x00213E51 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00213E40(void)
{

loc_00213E40: ;
    ecx = MEM32(0x62EBAC);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00213E50u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00213E4Du); } /* indirect call */
    }

loc_00213E50: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00213E60
 * Original: 0x00213E60 - 0x00213E63 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00213E60(void)
{

loc_00213E60: ;
    eax = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00213E70
 * Original: 0x00213E70 - 0x00213E83 (19 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00213E70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00213E70: ;
    MEM32(ecx + 0x24) = MEM32(ecx + 0x24) - 1;
    _fa = (uint32_t)(MEM32(ecx + 0x24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00213E82; /* jne: not equal / not zero */

loc_00213E75: ;
    eax = MEM32(0x62EBAC);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00213E82u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00213E7Fu); } /* indirect call */
    }

loc_00213E82: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00213E90
 * Original: 0x00213E90 - 0x00213F5C (204 bytes, 59 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00213E90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00213E90: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x20) = eax;
    eax = MEM32(ecx + 0x10);
    edx = 0xFF;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    MEM32(ecx + 0x24) = 1;
    if (CMP_EQ(_fa, _fb)) goto loc_00213F56; /* je: equal / zero */

loc_00213EB1: ;
    eax = MEM32(ecx);
    MEM32(esp) = eax;
    eax = eax >> 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esp + 0xD) = LO8(eax);
    MEM8(esp + 0xC) = HI8(eax);
    eax = MEM32(esp);
    eax = eax >> 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esp + 0xE) = LO8(eax);
    SET_LO8(eax, MEM8(esp));
    MEM8(esp + 0xF) = LO8(eax);
    eax = MEM32(esp + 0xC);
    MEM32(ecx) = eax;
    eax = MEM32(ecx + 4);
    MEM32(esp) = eax;
    eax = eax >> 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esp + 0xD) = LO8(eax);
    MEM8(esp + 0xC) = HI8(eax);
    eax = MEM32(esp);
    eax = eax >> 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esp + 0xE) = LO8(eax);
    SET_LO8(eax, MEM8(esp));
    MEM8(esp + 0xF) = LO8(eax);
    eax = MEM32(esp + 0xC);
    MEM32(ecx + 4) = eax;
    eax = MEM32(ecx + 8);
    MEM32(esp) = eax;
    eax = eax >> 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esp + 0xD) = LO8(eax);
    MEM8(esp + 0xC) = HI8(eax);
    eax = MEM32(esp);
    eax = eax >> 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esp + 0xE) = LO8(eax);
    SET_LO8(eax, MEM8(esp));
    MEM8(esp + 0xF) = LO8(eax);
    eax = MEM32(esp + 0xC);
    MEM32(ecx + 8) = eax;
    eax = MEM32(ecx + 0xC);
    MEM32(esp) = eax;
    eax = eax >> 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esp + 0xD) = LO8(eax);
    MEM8(esp + 0xC) = HI8(eax);
    eax = MEM32(esp);
    eax = eax >> 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esp + 0xE) = LO8(eax);
    SET_LO8(eax, MEM8(esp));
    MEM8(esp + 0xF) = LO8(eax);
    eax = MEM32(esp + 0xC);
    MEM32(ecx + 0xC) = eax;
    MEM32(ecx + 0x10) = edx;

loc_00213F56: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00213F60
 * Original: 0x00213F60 - 0x00213F71 (17 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00213F60(void)
{

loc_00213F60: ;
    eax = ecx;
    MEM32(eax + 0x24) = 1;
    MEM32(eax + 0x10) = 0xFF;
    esp += 4; return; /* ret */

}

/**
 * sub_00213F80
 * Original: 0x00213F80 - 0x00213F8D (13 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00213F80(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00213F80: ;
    eax = MEM32(esp + 4);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00213F90
 * Original: 0x00213F90 - 0x00213F96 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00213F90(void)
{

loc_00213F90: ;
    eax = 0xB;
    esp += 4; return; /* ret */

}

/**
 * sub_00213FA0
 * Original: 0x00213FA0 - 0x00213FA3 (3 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00213FA0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00213FA0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00213FB0
 * Original: 0x00213FB0 - 0x00213FC1 (17 bytes, 6 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00213FB0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00213FB0: ;
    eax = MEM32(esp + 4);
    edx = MEM32(ecx);
    eax = eax + eax * 2;
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00213FD0
 * Original: 0x00213FD0 - 0x00213FE1 (17 bytes, 6 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00213FD0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00213FD0: ;
    eax = MEM32(esp + 4);
    edx = MEM32(ecx);
    eax = eax + eax * 2;
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00213FF0
 * Original: 0x00213FF0 - 0x00213FF4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00213FF0(void)
{

loc_00213FF0: ;
    eax = MEM32(ecx + 4);
    esp += 4; return; /* ret */

}

/**
 * sub_00214000
 * Original: 0x00214000 - 0x0021400C (12 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00214000(void)
{

loc_00214000: ;
    eax = MEM32(ecx);
    ecx = MEM32(esp + 4);
    eax = eax + ecx * 4;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00214010
 * Original: 0x00214010 - 0x0021401C (12 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00214010(void)
{

loc_00214010: ;
    eax = MEM32(ecx);
    ecx = MEM32(esp + 4);
    eax = eax + ecx * 4;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00214020
 * Original: 0x00214020 - 0x0021402C (12 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00214020(void)
{

loc_00214020: ;
    eax = MEM32(ecx);
    ecx = MEM32(esp + 4);
    eax = eax + ecx * 4;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00214030
 * Original: 0x00214030 - 0x0021403C (12 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00214030(void)
{

loc_00214030: ;
    eax = MEM32(ecx);
    ecx = MEM32(esp + 4);
    eax = eax + ecx * 4;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00214040
 * Original: 0x00214040 - 0x0021404C (12 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00214040(void)
{

loc_00214040: ;
    eax = MEM32(ecx);
    ecx = MEM32(esp + 4);
    eax = eax + ecx * 4;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00214050
 * Original: 0x00214050 - 0x00214059 (9 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00214050(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00214050: ;
    eax = MEM32(ecx);
    _fb = (uint32_t)(MEM32(esp + 4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00214060
 * Original: 0x00214060 - 0x0021406C (12 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00214060(void)
{

loc_00214060: ;
    eax = MEM32(ecx);
    ecx = MEM32(esp + 4);
    eax = eax + ecx * 4;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00214070
 * Original: 0x00214070 - 0x0021407C (12 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00214070(void)
{

loc_00214070: ;
    eax = MEM32(ecx);
    ecx = MEM32(esp + 4);
    eax = eax + ecx * 4;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00214080
 * Original: 0x00214080 - 0x0021408C (12 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00214080(void)
{

loc_00214080: ;
    eax = MEM32(ecx);
    ecx = MEM32(esp + 4);
    eax = eax + ecx * 4;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00214086
 * Original: 0x00214086 - 0x0021408C (6 bytes, 2 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00214086(void)
{

loc_00214086: ;
    eax = eax + ecx * 4;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00214090
 * Original: 0x00214090 - 0x0021409C (12 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00214090(void)
{

loc_00214090: ;
    eax = MEM32(ecx);
    ecx = MEM32(esp + 4);
    eax = eax + ecx * 4;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002140A0
 * Original: 0x002140A0 - 0x002140AB (11 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002140A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002140A0: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002140B0
 * Original: 0x002140B0 - 0x002140BB (11 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002140B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002140B0: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002140C0
 * Original: 0x002140C0 - 0x002140CB (11 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002140C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002140C0: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002140D0
 * Original: 0x002140D0 - 0x002140DB (11 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002140D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002140D0: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002140E0
 * Original: 0x002140E0 - 0x002140FF (31 bytes, 9 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002140E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002140E0: ;
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
 * sub_00214100
 * Original: 0x00214100 - 0x00214109 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00214100(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00214100: ;
    eax = MEM32(ecx + 8);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}

/**
 * sub_00214110
 * Original: 0x00214110 - 0x00214119 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00214110(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00214110: ;
    eax = MEM32(ecx + 8);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}

/**
 * sub_00214120
 * Original: 0x00214120 - 0x00214129 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00214120(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00214120: ;
    eax = MEM32(ecx + 8);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}

/**
 * sub_00214130
 * Original: 0x00214130 - 0x00214139 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00214130(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00214130: ;
    eax = MEM32(ecx + 8);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}

/**
 * sub_00214140
 * Original: 0x00214140 - 0x00214168 (40 bytes, 14 insns)
 * CC: cdecl, 1 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00214140(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00214140: ;
    eax = MEM32(esp + 4);
    fp_push(MEMF(ecx)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax)); /* fsub dword ptr [eax] */
    MEMF(ecx) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax + 4)); /* fsub dword ptr [eax + 4] */
    MEMF(ecx + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax + 8)); /* fsub dword ptr [eax + 8] */
    MEMF(ecx + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax + 0xC)); /* fsub dword ptr [eax + 0xc] */
    MEMF(ecx + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00214170
 * Original: 0x00214170 - 0x00214175 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00214170(void)
{

loc_00214170: ;
    eax = MEM32(esp + 8);
    esp += 4; return; /* ret */

}

/**
 * sub_00214180
 * Original: 0x00214180 - 0x002141A7 (39 bytes, 14 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00214180(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00214180: ;
    eax = MEM32(esp + 4);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(esp + 8);
    edx = MEM32(ecx);
    MEM32(eax) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    edx = MEM32(ecx + 8);
    MEM32(eax + 8) = edx;
    ecx = MEM32(ecx + 0xC);
    MEM32(eax + 0xC) = ecx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002141B0
 * Original: 0x002141B0 - 0x002141F4 (68 bytes, 26 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002141B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002141B0: ;
    edx = ecx;
    PUSH32(esp, esi);
    esi = MEM32(edx + 0x24);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    ecx = 0x20;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = edi;
    eax = eax >> LO8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = MEM32(edx + 0x28);
    edx = edx | 0xFFFFFFFFu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = eax + eax * 2;
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    edx = edx >> LO8(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = MEM32(eax + 0x1C);
    edx = edx & edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(eax + 0x20));
    edx = ZX8(MEM8(edx + ecx));
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(eax + 0x28));
    eax = MEM32(eax + 0x24);
    eax = MEM32(edx + eax);
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00214200
 * Original: 0x00214200 - 0x0021425C (92 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00214200(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
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

loc_00214200: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    fp_push(MEMF(ecx)); /* fld float */
    MEM32(esp + 0xC) = 0;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax)); /* fmul dword ptr [eax] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 4)); /* fmul dword ptr [eax + 4] */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 8)); /* fld float */
    ecx = MEM32(ebp + 8);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 8)); /* fmul dword ptr [eax + 8] */
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esp + 0x18;
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0021423Du); RECOMP_ABI_CALL(0x002A7BC0u, sub_002A7BC0); /* call 0x002A7BC0 */

loc_0021423D: ;
    edx = esp + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0021424Au); RECOMP_ABI_CALL(0x00204060u, sub_00204060); /* call 0x00204060 */

loc_0021424A: ;
    eax = esp + 0x10;
    ecx = esi + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00214258u); RECOMP_ABI_CALL(0x002040D0u, sub_002040D0); /* call 0x002040D0 */

loc_00214258: ;
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
 * sub_00214260
 * Original: 0x00214260 - 0x002146D5 (1141 bytes, 378 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00214260(void)
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

loc_00214260: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x84) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x84;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    eax = 0x7F7FFFFF;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x10);
    MEM32(esi) = eax;
    MEM32(esi + 4) = eax;
    MEM32(esi + 8) = eax;
    eax = 0xFF7FFFFFu;
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0xC) = edi;
    MEM32(esi + 0x10) = eax;
    MEM32(esi + 0x14) = eax;
    MEM32(esi + 0x18) = eax;
    MEM32(esi + 0x1C) = edi;
    _fa = (uint32_t)(MEM32(ecx + 0x2C)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x2C), edi (32-bit) */
    MEM32(esp + 0x18) = ecx;
    MEM32(esp + 0x2C) = edi;
    if (CMP_LE(_fas, _fbs)) goto loc_0021468A; /* jle: less or equal (signed <=) */

loc_002142A6: ;
    MEM32(esp + 0x24) = edi;
    /* nop */

loc_002142B0: ;
    eax = MEM32(ecx + 0x28);
    ebx = MEM32(esp + 0x24);
    edx = MEM32(eax + ebx + 0x18);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    MEM32(esp + 0x28) = eax;
    MEM32(esp + 0x20) = edi;
    if (CMP_LE(_fas, _fbs)) goto loc_0021466B; /* jle: less or equal (signed <=) */

loc_002142CD: ;
    goto loc_002142D7;

loc_002142CF: ;
    edi = MEM32(esp + 0x20);
    eax = MEM32(esp + 0x28);

loc_002142D7: ;
    edx = MEM32(eax + 0x14);
    ebx = MEM32(eax + 0xC);
    edx = (uint32_t)((int32_t)edx * (int32_t)edi);
    SET_LO8(ecx, MEM8(eax + 0x10));
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = MEM32(eax);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 1 (8-bit) */
    ecx = MEM32(eax + 4);
    MEM32(esp + 0x1C) = ebx;
    if (CMP_NE(_fa, _fb)) goto loc_0021430A; /* jne: not equal / not zero */

loc_002142F3: ;
    eax = ZX16(MEM16(edx));
    edi = ZX16(MEM16(edx + 2));
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    edi = (uint32_t)((int32_t)edi * (int32_t)ecx);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + ebx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = ZX16(MEM16(edx + 4));
    goto loc_0021431C;

loc_0021430A: ;
    eax = MEM32(edx);
    edi = MEM32(edx + 4);
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    edi = (uint32_t)((int32_t)edi * (int32_t)ecx);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + ebx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = MEM32(edx + 8);

loc_0021431C: ;
    fp_push(MEMF(eax)); /* fld float */
    ebx = (uint32_t)((int32_t)ebx * (int32_t)ecx);
    _fb = (uint32_t)(MEM32(esp + 0x1C)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + MEM32(esp + 0x1C);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(esp + 0x18);
    MEM32(esp + 0x6C) = 0;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x10)); /* fmul dword ptr [ecx + 0x10] */
    MEMF(esp + 0x60) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 4)); /* fmul dword ptr [eax + 4] */
    MEMF(esp + 0x64) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 0x18)); /* fld float */
    ecx = MEM32(ebp + 8);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 8)); /* fmul dword ptr [eax + 8] */
    eax = esp + 0x60;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esp + 0x38;
    MEMF(esp + 0x70) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0021435Eu); RECOMP_ABI_CALL(0x002A7BC0u, sub_002A7BC0); /* call 0x002A7BC0 */

loc_0021435E: ;
    fp_push(MEMF(esi)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x30)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x30] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0021436F; /* jp: parity */

loc_0021436B: ;
    fp_push(MEMF(esi)); /* fld float */
    goto loc_00214373;

loc_0021436F: ;
    fp_push(MEMF(esp + 0x30)); /* fld float */

loc_00214373: ;
    MEMF(esi) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x34)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x34] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00214388; /* jp: parity */

loc_00214383: ;
    fp_push(MEMF(esi + 4)); /* fld float */
    goto loc_0021438C;

loc_00214388: ;
    fp_push(MEMF(esp + 0x34)); /* fld float */

loc_0021438C: ;
    MEMF(esi + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x38)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x38] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_002143A2; /* jp: parity */

loc_0021439D: ;
    fp_push(MEMF(esi + 8)); /* fld float */
    goto loc_002143A6;

loc_002143A2: ;
    fp_push(MEMF(esp + 0x38)); /* fld float */

loc_002143A6: ;
    MEMF(esi + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0xC)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x3C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x3c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_002143BC; /* jp: parity */

loc_002143B7: ;
    fp_push(MEMF(esi + 0xC)); /* fld float */
    goto loc_002143C0;

loc_002143BC: ;
    fp_push(MEMF(esp + 0x3C)); /* fld float */

loc_002143C0: ;
    MEMF(esi + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x10)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x30)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x30] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002143D6; /* jne: not equal / not zero */

loc_002143D1: ;
    fp_push(MEMF(esi + 0x10)); /* fld float */
    goto loc_002143DA;

loc_002143D6: ;
    fp_push(MEMF(esp + 0x30)); /* fld float */

loc_002143DA: ;
    MEMF(esi + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x14)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x34)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x34] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002143F0; /* jne: not equal / not zero */

loc_002143EB: ;
    fp_push(MEMF(esi + 0x14)); /* fld float */
    goto loc_002143F4;

loc_002143F0: ;
    fp_push(MEMF(esp + 0x34)); /* fld float */

loc_002143F4: ;
    MEMF(esi + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x18)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x38)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x38] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0021440A; /* jne: not equal / not zero */

loc_00214405: ;
    fp_push(MEMF(esi + 0x18)); /* fld float */
    goto loc_0021440E;

loc_0021440A: ;
    fp_push(MEMF(esp + 0x38)); /* fld float */

loc_0021440E: ;
    MEMF(esi + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x1C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x3C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x3c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00214424; /* jne: not equal / not zero */

loc_0021441F: ;
    fp_push(MEMF(esi + 0x1C)); /* fld float */
    goto loc_00214428;

loc_00214424: ;
    fp_push(MEMF(esp + 0x3C)); /* fld float */

loc_00214428: ;
    eax = MEM32(esp + 0x18);
    MEMF(esi + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 0x10)); /* fld float */
    edx = esp + 0x70;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi)); /* fmul dword ptr [edi] */
    PUSH32(esp, edx);
    ecx = esp + 0x44;
    MEM32(esp + 0x80) = 0;
    MEMF(esp + 0x74) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 4)); /* fmul dword ptr [edi + 4] */
    MEMF(esp + 0x78) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 8)); /* fmul dword ptr [edi + 8] */
    edi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    MEMF(esp + 0x80) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0021446Cu); RECOMP_ABI_CALL(0x002A7BC0u, sub_002A7BC0); /* call 0x002A7BC0 */

loc_0021446C: ;
    fp_push(MEMF(esi)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x40)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x40] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0021447D; /* jp: parity */

loc_00214479: ;
    fp_push(MEMF(esi)); /* fld float */
    goto loc_00214481;

loc_0021447D: ;
    fp_push(MEMF(esp + 0x40)); /* fld float */

loc_00214481: ;
    MEMF(esi) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x44)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x44] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00214496; /* jp: parity */

loc_00214491: ;
    fp_push(MEMF(esi + 4)); /* fld float */
    goto loc_0021449A;

loc_00214496: ;
    fp_push(MEMF(esp + 0x44)); /* fld float */

loc_0021449A: ;
    MEMF(esi + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x48)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x48] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_002144B0; /* jp: parity */

loc_002144AB: ;
    fp_push(MEMF(esi + 8)); /* fld float */
    goto loc_002144B4;

loc_002144B0: ;
    fp_push(MEMF(esp + 0x48)); /* fld float */

loc_002144B4: ;
    MEMF(esi + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0xC)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x4C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x4c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_002144CA; /* jp: parity */

loc_002144C5: ;
    fp_push(MEMF(esi + 0xC)); /* fld float */
    goto loc_002144CE;

loc_002144CA: ;
    fp_push(MEMF(esp + 0x4C)); /* fld float */

loc_002144CE: ;
    MEMF(esi + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x10)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x40)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x40] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002144E4; /* jne: not equal / not zero */

loc_002144DF: ;
    fp_push(MEMF(esi + 0x10)); /* fld float */
    goto loc_002144E8;

loc_002144E4: ;
    fp_push(MEMF(esp + 0x40)); /* fld float */

loc_002144E8: ;
    MEMF(esi + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x14)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x44)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x44] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002144FE; /* jne: not equal / not zero */

loc_002144F9: ;
    fp_push(MEMF(esi + 0x14)); /* fld float */
    goto loc_00214502;

loc_002144FE: ;
    fp_push(MEMF(esp + 0x44)); /* fld float */

loc_00214502: ;
    MEMF(esi + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x18)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x48)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x48] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00214518; /* jne: not equal / not zero */

loc_00214513: ;
    fp_push(MEMF(esi + 0x18)); /* fld float */
    goto loc_0021451C;

loc_00214518: ;
    fp_push(MEMF(esp + 0x48)); /* fld float */

loc_0021451C: ;
    MEMF(esi + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x1C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x4C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x4c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00214532; /* jne: not equal / not zero */

loc_0021452D: ;
    fp_push(MEMF(esi + 0x1C)); /* fld float */
    goto loc_00214536;

loc_00214532: ;
    fp_push(MEMF(esp + 0x4C)); /* fld float */

loc_00214536: ;
    eax = MEM32(esp + 0x18);
    MEMF(esi + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 0x10)); /* fld float */
    ecx = esp + 0x50;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx)); /* fmul dword ptr [ebx] */
    MEM32(esp + 0x8C) = 0;
    MEMF(esp + 0x80) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx + 4)); /* fmul dword ptr [ebx + 4] */
    MEMF(esp + 0x84) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 0x18)); /* fld float */
    eax = esp + 0x80;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx + 8)); /* fmul dword ptr [ebx + 8] */
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    MEMF(esp + 0x90) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00214580u); RECOMP_ABI_CALL(0x002A7BC0u, sub_002A7BC0); /* call 0x002A7BC0 */

loc_00214580: ;
    fp_push(MEMF(esi)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x50)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x50] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00214591; /* jp: parity */

loc_0021458D: ;
    fp_push(MEMF(esi)); /* fld float */
    goto loc_00214595;

loc_00214591: ;
    fp_push(MEMF(esp + 0x50)); /* fld float */

loc_00214595: ;
    MEMF(esi) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x54)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x54] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_002145AA; /* jp: parity */

loc_002145A5: ;
    fp_push(MEMF(esi + 4)); /* fld float */
    goto loc_002145AE;

loc_002145AA: ;
    fp_push(MEMF(esp + 0x54)); /* fld float */

loc_002145AE: ;
    MEMF(esi + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x58)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x58] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_002145C4; /* jp: parity */

loc_002145BF: ;
    fp_push(MEMF(esi + 8)); /* fld float */
    goto loc_002145C8;

loc_002145C4: ;
    fp_push(MEMF(esp + 0x58)); /* fld float */

loc_002145C8: ;
    MEMF(esi + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0xC)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x5C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x5c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_002145DE; /* jp: parity */

loc_002145D9: ;
    fp_push(MEMF(esi + 0xC)); /* fld float */
    goto loc_002145E2;

loc_002145DE: ;
    fp_push(MEMF(esp + 0x5C)); /* fld float */

loc_002145E2: ;
    MEMF(esi + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x10)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x50)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x50] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002145F8; /* jne: not equal / not zero */

loc_002145F3: ;
    fp_push(MEMF(esi + 0x10)); /* fld float */
    goto loc_002145FC;

loc_002145F8: ;
    fp_push(MEMF(esp + 0x50)); /* fld float */

loc_002145FC: ;
    MEMF(esi + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x14)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x54)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x54] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00214612; /* jne: not equal / not zero */

loc_0021460D: ;
    fp_push(MEMF(esi + 0x14)); /* fld float */
    goto loc_00214616;

loc_00214612: ;
    fp_push(MEMF(esp + 0x54)); /* fld float */

loc_00214616: ;
    MEMF(esi + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x18)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x58)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x58] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0021462C; /* jne: not equal / not zero */

loc_00214627: ;
    fp_push(MEMF(esi + 0x18)); /* fld float */
    goto loc_00214630;

loc_0021462C: ;
    fp_push(MEMF(esp + 0x58)); /* fld float */

loc_00214630: ;
    MEMF(esi + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x1C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x5C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x5c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00214646; /* jne: not equal / not zero */

loc_00214641: ;
    fp_push(MEMF(esi + 0x1C)); /* fld float */
    goto loc_0021464A;

loc_00214646: ;
    fp_push(MEMF(esp + 0x5C)); /* fld float */

loc_0021464A: ;
    eax = MEM32(esp + 0x20);
    MEMF(esi + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x28);
    edx = MEM32(ecx + 0x18);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    MEM32(esp + 0x20) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_002142CF; /* jl: less (signed <) */

loc_00214665: ;
    ecx = MEM32(esp + 0x18);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0021466B: ;
    eax = MEM32(esp + 0x2C);
    ebx = MEM32(esp + 0x24);
    edx = MEM32(ecx + 0x2C);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x30;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    MEM32(esp + 0x2C) = eax;
    MEM32(esp + 0x24) = ebx;
    if (CMP_L(_fas, _fbs)) goto loc_002142B0; /* jl: less (signed <) */

loc_0021468A: ;
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    POP32(esp, edi);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0x20)); /* fadd dword ptr [ecx + 0x20] */
    fp_push(MEMF(esi)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    MEMF(esi) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    MEMF(esi + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    MEMF(esi + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    MEMF(esi + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x10)); /* fadd dword ptr [esi + 0x10] */
    MEMF(esi + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x14)); /* fadd dword ptr [esi + 0x14] */
    MEMF(esi + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x18)); /* fadd dword ptr [esi + 0x18] */
    MEMF(esi + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x1C)); /* fadd dword ptr [esi + 0x1c] */
    MEMF(esi + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_002146E0
 * Original: 0x002146E0 - 0x002146FE (30 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002146E0(void)
{

loc_002146E0: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax);
    MEM32(ecx + 0x10) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 0x14) = edx;
    edx = MEM32(eax + 8);
    MEM32(ecx + 0x18) = edx;
    eax = MEM32(eax + 0xC);
    MEM32(ecx + 0x1C) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00214700
 * Original: 0x00214700 - 0x00214727 (39 bytes, 15 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00214700(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00214700: ;
    eax = MEM32(ecx + 8);
    edx = MEM32(esp + 4);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00214724; /* jge: greater or equal (signed >=) */

loc_00214710: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00214718; /* jl: less (signed <) */

loc_00214716: ;
    eax = edx;

loc_00214718: ;
    PUSH32(esp, 0x30);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00214721u); RECOMP_ABI_CALL(0x00101B30u, sub_00101B30); /* call 0x00101B30 */

loc_00214721: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00214724: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00214730
 * Original: 0x00214730 - 0x00214757 (39 bytes, 15 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00214730(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00214730: ;
    eax = MEM32(ecx + 8);
    edx = MEM32(esp + 4);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00214754; /* jge: greater or equal (signed >=) */

loc_00214740: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00214748; /* jl: less (signed <) */

loc_00214746: ;
    eax = edx;

loc_00214748: ;
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00214751u); RECOMP_ABI_CALL(0x00101B30u, sub_00101B30); /* call 0x00101B30 */

loc_00214751: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00214754: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00214760
 * Original: 0x00214760 - 0x00214787 (39 bytes, 15 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00214760(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00214760: ;
    eax = MEM32(ecx + 8);
    edx = MEM32(esp + 4);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00214784; /* jge: greater or equal (signed >=) */

loc_00214770: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00214778; /* jl: less (signed <) */

loc_00214776: ;
    eax = edx;

loc_00214778: ;
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00214781u); RECOMP_ABI_CALL(0x00101B30u, sub_00101B30); /* call 0x00101B30 */

loc_00214781: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00214784: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00214790
 * Original: 0x00214790 - 0x002147B7 (39 bytes, 15 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00214790(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00214790: ;
    eax = MEM32(ecx + 8);
    edx = MEM32(esp + 4);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002147B4; /* jge: greater or equal (signed >=) */

loc_002147A0: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002147A8; /* jl: less (signed <) */

loc_002147A6: ;
    eax = edx;

loc_002147A8: ;
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002147B1u); RECOMP_ABI_CALL(0x00101B30u, sub_00101B30); /* call 0x00101B30 */

loc_002147B1: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002147B4: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002147C0
 * Original: 0x002147C0 - 0x002147E7 (39 bytes, 15 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002147C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002147C0: ;
    eax = MEM32(ecx + 8);
    edx = MEM32(esp + 4);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002147E4; /* jge: greater or equal (signed >=) */

loc_002147D0: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002147D8; /* jl: less (signed <) */

loc_002147D6: ;
    eax = edx;

loc_002147D8: ;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002147E1u); RECOMP_ABI_CALL(0x00101B30u, sub_00101B30); /* call 0x00101B30 */

loc_002147E1: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002147E4: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002147F0
 * Original: 0x002147F0 - 0x00214817 (39 bytes, 15 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002147F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002147F0: ;
    eax = MEM32(ecx + 8);
    edx = MEM32(esp + 4);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00214814; /* jge: greater or equal (signed >=) */

loc_00214800: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00214808; /* jl: less (signed <) */

loc_00214806: ;
    eax = edx;

loc_00214808: ;
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00214811u); RECOMP_ABI_CALL(0x00101B30u, sub_00101B30); /* call 0x00101B30 */

loc_00214811: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00214814: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00214820
 * Original: 0x00214820 - 0x00214847 (39 bytes, 15 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00214820(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00214820: ;
    eax = MEM32(ecx + 8);
    edx = MEM32(esp + 4);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00214844; /* jge: greater or equal (signed >=) */

loc_00214830: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00214838; /* jl: less (signed <) */

loc_00214836: ;
    eax = edx;

loc_00214838: ;
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00214841u); RECOMP_ABI_CALL(0x00101B30u, sub_00101B30); /* call 0x00101B30 */

loc_00214841: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00214844: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00214850
 * Original: 0x00214850 - 0x00214866 (22 bytes, 5 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00214850(void)
{

loc_00214850: ;
    eax = ecx;
    MEM16(eax + 6) = 1;
    MEM32(eax + 8) = 0;
    MEM32(eax) = 0x4B4A30;
    esp += 4; return; /* ret */

}

/**
 * sub_00214870
 * Original: 0x00214870 - 0x00214875 (5 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00214870(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00214870: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00214880
 * Original: 0x00214880 - 0x002148A9 (41 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00214880(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00214880: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x4AE714;
    if (TEST_Z(_fa, _fb)) goto loc_002148A3; /* je: equal / zero */

loc_00214890: ;
    edx = ZX16(MEM16(esi + 4));
    ecx = MEM32(0x62EBAC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1E);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x002148A3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002148A0u); } /* indirect call */
    }

loc_002148A3: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002148B0
 * Original: 0x002148B0 - 0x002148C6 (22 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002148B0(void)
{

loc_002148B0: ;
    eax = ecx;
    MEM16(eax + 6) = 1;
    MEM32(eax + 8) = 0;
    MEM32(eax) = 0x4B4A6C;
    esp += 4; return; /* ret */

}

/**
 * sub_002148D0
 * Original: 0x002148D0 - 0x002148F9 (41 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002148D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002148D0: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x4AE714;
    if (TEST_Z(_fa, _fb)) goto loc_002148F3; /* je: equal / zero */

loc_002148E0: ;
    edx = ZX16(MEM16(esi + 4));
    ecx = MEM32(0x62EBAC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1E);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x002148F3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002148F0u); } /* indirect call */
    }

loc_002148F3: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00214900
 * Original: 0x00214900 - 0x0021491F (31 bytes, 7 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00214900(void)
{

loc_00214900: ;
    eax = ecx;
    ecx = MEM32(esp + 4);
    MEM16(eax + 6) = 1;
    MEM32(eax + 8) = 0;
    MEM32(eax) = 0x4B4A9C;
    MEM32(eax + 0xC) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00214920
 * Original: 0x00214920 - 0x00214924 (4 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00214920(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00214920: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 4; return; /* ret */

}

/**
 * sub_00214930
 * Original: 0x00214930 - 0x00214959 (41 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00214930(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00214930: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x4AE714;
    if (TEST_Z(_fa, _fb)) goto loc_00214953; /* je: equal / zero */

loc_00214940: ;
    edx = ZX16(MEM16(esi + 4));
    ecx = MEM32(0x62EBAC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1E);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x00214953u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00214950u); } /* indirect call */
    }

loc_00214953: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00214960
 * Original: 0x00214960 - 0x0021497F (31 bytes, 7 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00214960(void)
{

loc_00214960: ;
    eax = ecx;
    ecx = MEM32(esp + 4);
    MEM16(eax + 6) = 1;
    MEM32(eax + 8) = 0;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax) = 0x4B4AD8;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00214980
 * Original: 0x00214980 - 0x002149A9 (41 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00214980(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00214980: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x4AE714;
    if (TEST_Z(_fa, _fb)) goto loc_002149A3; /* je: equal / zero */

loc_00214990: ;
    edx = ZX16(MEM16(esi + 4));
    ecx = MEM32(0x62EBAC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1E);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x002149A3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002149A0u); } /* indirect call */
    }

loc_002149A3: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002149B0
 * Original: 0x002149B0 - 0x00214AC4 (276 bytes, 103 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002149B0(void)
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

loc_002149B0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x134) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x134;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    edi = ecx;
    MEM32(esp + 0x18) = edi;

loc_002149C8: ;
    ebx = MEM32(edi + 0x24);
    edi = MEM32(edi + 0x28);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = 0x20;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = edx;
    eax = esi;
    eax = eax >> LO8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x1C) = ecx;
    ecx = ebx;
    ebx = MEM32(esp + 0x1C);
    ebx = ebx >> LO8(ecx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = eax + eax * 2;
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = ebx & esi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + edi + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(ecx + edi + 0x18) (32-bit) */
    edi = MEM32(esp + 0x18);
    if (CMP_L(_fas, _fbs)) goto loc_00214A0E; /* jl: less (signed <) */

loc_002149FD: ;
    ecx = MEM32(edi + 0x24);
    edx = 0x20;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi = eax + 1;
    ecx = edx;
    esi = esi << LO8(ecx);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */

loc_00214A0E: ;
    ecx = edx;
    eax = esi;
    eax = eax >> LO8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x2C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edi + 0x2C) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00214AB8; /* jae: above or equal (unsigned >=) */

loc_00214A1D: ;
    edx = MEM32(edi);
    eax = esp + 0x40;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x00214A2Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00214A27u); } /* indirect call */
    }

loc_00214A2A: ;
    fp_push(MEMF(eax + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax + 0x20)); /* fsub dword ptr [eax + 0x20] */
    fp_push(MEMF(eax + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax + 0x24)); /* fsub dword ptr [eax + 0x24] */
    fp_push(MEMF(eax + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax + 0x28)); /* fsub dword ptr [eax + 0x28] */
    fp_push(MEMF(eax + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax + 0x30)); /* fsub dword ptr [eax + 0x30] */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax + 0x34)); /* fsub dword ptr [eax + 0x34] */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax + 0x38)); /* fsub dword ptr [eax + 0x38] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x20)); /* fmul dword ptr [esp + 0x20] */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    g_fp_stack[(g_fp_top + 2) & 7] = RECOMP_FP_PC(g_fp_stack[(g_fp_top + 2) & 7] * fp_top()); fp_pop(); /* fmulp st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x20)); /* fmul dword ptr [esp + 0x20] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_push(MEMF(esp + 0x34)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x34)); /* fmul dword ptr [esp + 0x34] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x30)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x30)); /* fmul dword ptr [esp + 0x30] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x4B4B14)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x4b4b14] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    fp_pop(); /* fstp st(0) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_002149C8; /* jnp: not parity */

loc_00214AAD: ;
    eax = esi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_00214AB8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
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
 * sub_00214AD0
 * Original: 0x00214AD0 - 0x00214C03 (307 bytes, 105 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00214AD0(void)
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

loc_00214AD0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = MEM32(edi + 0x24);
    ecx = esi;
    edx = edx | 0xFFFFFFFFu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = edx >> LO8(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = 0x20;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi = MEM32(edi + 0x28);
    edx = edx & eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax >> LO8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax + eax * 2;
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = MEM32(eax + esi + 0xC);
    SET_LO8(ecx, MEM8(eax + esi + 0x10));
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = MEM32(eax + 0x14);
    esi = (uint32_t)((int32_t)esi * (int32_t)edx);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ebx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 1 (8-bit) */
    ebx = MEM32(eax + 4);
    eax = MEM32(eax);
    if (CMP_NE(_fa, _fb)) goto loc_00214B28; /* jne: not equal / not zero */

loc_00214B1B: ;
    ecx = ZX16(MEM16(esi));
    edx = ZX16(MEM16(esi + 2));
    esi = ZX16(MEM16(esi + 4));
    goto loc_00214B30;

loc_00214B28: ;
    ecx = MEM32(esi);
    edx = MEM32(esi + 4);
    esi = MEM32(esi + 8);

loc_00214B30: ;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)ebx);
    edx = (uint32_t)((int32_t)edx * (int32_t)ebx);
    esi = (uint32_t)((int32_t)esi * (int32_t)ebx);
    fp_push(MEMF(ecx + eax)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 0x10)); /* fmul dword ptr [edi + 0x10] */
    fp_push(MEMF(ecx + eax + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 0x14)); /* fmul dword ptr [edi + 0x14] */
    fp_push(MEMF(ecx + eax + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 0x18)); /* fmul dword ptr [edi + 0x18] */
    MEMF(esp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edi + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edx + eax)); /* fmul dword ptr [edx + eax] */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edx + eax + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 0x14)); /* fmul dword ptr [edi + 0x14] */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edx + eax + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 0x18)); /* fmul dword ptr [edi + 0x18] */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edi + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + eax)); /* fmul dword ptr [esi + eax] */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + eax + 4)); /* fld float */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 0x14)); /* fmul dword ptr [edi + 0x14] */
    eax = MEM32(ebp + 0xC);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 0x18)); /* fmul dword ptr [edi + 0x18] */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_EQ(_fa, _fb)) goto loc_00214BB6; /* je: equal / zero */

loc_00214B9F: ;
    fp_push(MEMF(edi + 0x20)); /* fld float */
    MEM16(eax + 6) = 1;
    MEMF(eax + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(eax + 8) = ecx;
    MEM32(eax) = 0x4B4AD8;
    goto loc_00214BB8;

loc_00214BB6: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00214BB8: ;
    edx = MEM32(esp + 0x38);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEM32(eax + 0x18) = edx;
    MEMF(eax + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x10);
    MEMF(eax + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(eax + 0x1C) = ecx;
    MEM32(eax + 0x20) = edx;
    edx = MEM32(esp + 0x14);
    MEM32(eax + 0x24) = edx;
    edx = MEM32(esp + 0x18);
    MEM32(eax + 0x28) = edx;
    edx = MEM32(esp + 0x20);
    MEM32(eax + 0x2C) = ecx;
    MEM32(eax + 0x30) = edx;
    edx = MEM32(esp + 0x24);
    POP32(esp, edi);
    MEM32(eax + 0x34) = edx;
    edx = MEM32(esp + 0x24);
    POP32(esp, esi);
    MEM32(eax + 0x38) = edx;
    MEM32(eax + 0x3C) = ecx;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00214C10
 * Original: 0x00214C10 - 0x00214C40 (48 bytes, 21 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00214C10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00214C10: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 8);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00214C38; /* jge: greater or equal (signed >=) */

loc_00214C24: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00214C2C; /* jl: less (signed <) */

loc_00214C2A: ;
    eax = esi;

loc_00214C2C: ;
    PUSH32(esp, 0x30);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00214C35u); RECOMP_ABI_CALL(0x00101B30u, sub_00101B30); /* call 0x00101B30 */

loc_00214C35: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00214C38: ;
    MEM32(edi + 4) = esi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00214C90
 * Original: 0x00214C90 - 0x00214CBD (45 bytes, 13 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00214C90(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00214C90: ;
    eax = ecx;
    ecx = MEM32(esp + 4);
    edx = eax + 0xC;
    MEM32(eax + 4) = ecx;
    MEM32(eax) = edx;
    MEM32(eax + 8) = 0x80000001u;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(edx + 0x20) = ecx;
    MEM32(edx + 0x28) = ecx;
    MEM32(edx + 0x2C) = 1;
    MEM32(edx + 0x24) = ecx;
    MEM32(edx + 0x1C) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00214CC0
 * Original: 0x00214CC0 - 0x00214CF0 (48 bytes, 21 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00214CC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00214CC0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 8);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00214CE8; /* jge: greater or equal (signed >=) */

loc_00214CD4: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00214CDC; /* jl: less (signed <) */

loc_00214CDA: ;
    eax = esi;

loc_00214CDC: ;
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00214CE5u); RECOMP_ABI_CALL(0x00101B30u, sub_00101B30); /* call 0x00101B30 */

loc_00214CE5: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00214CE8: ;
    MEM32(edi + 4) = esi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00214CF0
 * Original: 0x00214CF0 - 0x00214D20 (48 bytes, 21 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00214CF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00214CF0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 8);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00214D18; /* jge: greater or equal (signed >=) */

loc_00214D04: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00214D0C; /* jl: less (signed <) */

loc_00214D0A: ;
    eax = esi;

loc_00214D0C: ;
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00214D15u); RECOMP_ABI_CALL(0x00101B30u, sub_00101B30); /* call 0x00101B30 */

loc_00214D15: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00214D18: ;
    MEM32(edi + 4) = esi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00214D20
 * Original: 0x00214D20 - 0x00214D50 (48 bytes, 21 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00214D20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00214D20: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 8);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00214D48; /* jge: greater or equal (signed >=) */

loc_00214D34: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00214D3C; /* jl: less (signed <) */

loc_00214D3A: ;
    eax = esi;

loc_00214D3C: ;
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00214D45u); RECOMP_ABI_CALL(0x00101B30u, sub_00101B30); /* call 0x00101B30 */

loc_00214D45: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00214D48: ;
    MEM32(edi + 4) = esi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00214D50
 * Original: 0x00214D50 - 0x00214D80 (48 bytes, 21 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00214D50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00214D50: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 8);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00214D78; /* jge: greater or equal (signed >=) */

loc_00214D64: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00214D6C; /* jl: less (signed <) */

loc_00214D6A: ;
    eax = esi;

loc_00214D6C: ;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00214D75u); RECOMP_ABI_CALL(0x00101B30u, sub_00101B30); /* call 0x00101B30 */

loc_00214D75: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00214D78: ;
    MEM32(edi + 4) = esi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00214D80
 * Original: 0x00214D80 - 0x00214DB0 (48 bytes, 21 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00214D80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00214D80: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 8);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00214DA8; /* jge: greater or equal (signed >=) */

loc_00214D94: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00214D9C; /* jl: less (signed <) */

loc_00214D9A: ;
    eax = esi;

loc_00214D9C: ;
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00214DA5u); RECOMP_ABI_CALL(0x00101B30u, sub_00101B30); /* call 0x00101B30 */

loc_00214DA5: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00214DA8: ;
    MEM32(edi + 4) = esi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00214DB0
 * Original: 0x00214DB0 - 0x00214DE0 (48 bytes, 21 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00214DB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00214DB0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 8);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00214DD8; /* jge: greater or equal (signed >=) */

loc_00214DC4: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00214DCC; /* jl: less (signed <) */

loc_00214DCA: ;
    eax = esi;

loc_00214DCC: ;
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00214DD5u); RECOMP_ABI_CALL(0x00101B30u, sub_00101B30); /* call 0x00101B30 */

loc_00214DD5: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00214DD8: ;
    MEM32(edi + 4) = esi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00214E00
 * Original: 0x00214E00 - 0x00214E20 (32 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00214E00(void)
{

loc_00214E00: ;
    eax = ecx;
    ecx = MEM32(esp + 4);
    MEM32(eax) = 0x4AEBCC;
    MEM16(eax + 6) = 1;
    edx = MEM32(ecx);
    MEM32(eax + 8) = edx;
    MEM32(eax) = 0x4B4A30;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00214E20
 * Original: 0x00214E20 - 0x00215144 (804 bytes, 288 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00214E20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00214E20: ;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x40);
    esi = ecx;
    PUSH32(esp, edi);
    MEM32(esp + 0x18) = esi;
    PUSH32(esp, 0x00214E37u); RECOMP_ABI_CALL(0x00215400u, sub_00215400); /* call 0x00215400 */

loc_00214E37: ;
    eax = MEM32(esi + 0x20);
    MEM32(edi + 4) = eax;
    ecx = MEM32(esi + 0x10);
    MEM32(edi + 0x10) = ecx;
    edx = MEM32(esi + 0x14);
    MEM32(edi + 0x14) = edx;
    eax = MEM32(esi + 0x18);
    MEM32(edi + 0x18) = eax;
    ecx = MEM32(esi + 0x1C);
    MEM32(edi + 0x1C) = ecx;
    edx = MEM32(esi + 0x24);
    ebx = edi + 0x24;
    MEM32(edi + 0x20) = edx;
    eax = MEM32(ebx + 8);
    esi = MEM32(esi + 0x2C);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    MEM32(esp + 0x18) = ebx;
    if (CMP_GE(_fas, _fbs)) goto loc_00214E85; /* jge: greater or equal (signed >=) */

loc_00214E71: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00214E79; /* jl: less (signed <) */

loc_00214E77: ;
    eax = esi;

loc_00214E79: ;
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00214E82u); RECOMP_ABI_CALL(0x00101B30u, sub_00101B30); /* call 0x00101B30 */

loc_00214E82: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00214E85: ;
    MEM32(ebx + 4) = esi;
    eax = MEM32(edi + 0x38);
    ebx = edi + 0x30;
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    MEM32(esp + 0x1C) = ebx;
    if (CMP_GE(_fas, _fbs)) goto loc_00214EAF; /* jge: greater or equal (signed >=) */

loc_00214E9B: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00214EA3; /* jl: less (signed <) */

loc_00214EA1: ;
    eax = esi;

loc_00214EA3: ;
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00214EACu); RECOMP_ABI_CALL(0x00101B30u, sub_00101B30); /* call 0x00101B30 */

loc_00214EAC: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00214EAF: ;
    MEM32(ebx + 4) = esi;
    eax = MEM32(edi + 0x44);
    ebx = edi + 0x3C;
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    MEM32(esp + 0x20) = ebx;
    if (CMP_GE(_fas, _fbs)) goto loc_00214ED9; /* jge: greater or equal (signed >=) */

loc_00214EC5: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00214ECD; /* jl: less (signed <) */

loc_00214ECB: ;
    eax = esi;

loc_00214ECD: ;
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00214ED6u); RECOMP_ABI_CALL(0x00101B30u, sub_00101B30); /* call 0x00101B30 */

loc_00214ED6: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00214ED9: ;
    MEM32(ebx + 4) = esi;
    eax = MEM32(edi + 0x50);
    ebx = edi + 0x48;
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    MEM32(esp + 0x24) = ebx;
    if (CMP_GE(_fas, _fbs)) goto loc_00214F03; /* jge: greater or equal (signed >=) */

loc_00214EEF: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00214EF7; /* jl: less (signed <) */

loc_00214EF5: ;
    eax = esi;

loc_00214EF7: ;
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00214F00u); RECOMP_ABI_CALL(0x00101B30u, sub_00101B30); /* call 0x00101B30 */

loc_00214F00: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00214F03: ;
    MEM32(ebx + 4) = esi;
    eax = MEM32(edi + 0x5C);
    ebx = edi + 0x54;
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    MEM32(esp + 0x28) = ebx;
    if (CMP_GE(_fas, _fbs)) goto loc_00214F2D; /* jge: greater or equal (signed >=) */

loc_00214F19: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00214F21; /* jl: less (signed <) */

loc_00214F1F: ;
    eax = esi;

loc_00214F21: ;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00214F2Au); RECOMP_ABI_CALL(0x00101B30u, sub_00101B30); /* call 0x00101B30 */

loc_00214F2A: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00214F2D: ;
    MEM32(ebx + 4) = esi;
    eax = MEM32(edi + 0x68);
    ebx = edi + 0x60;
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    MEM32(esp + 0x2C) = ebx;
    if (CMP_GE(_fas, _fbs)) goto loc_00214F57; /* jge: greater or equal (signed >=) */

loc_00214F43: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00214F4B; /* jl: less (signed <) */

loc_00214F49: ;
    eax = esi;

loc_00214F4B: ;
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00214F54u); RECOMP_ABI_CALL(0x00101B30u, sub_00101B30); /* call 0x00101B30 */

loc_00214F54: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00214F57: ;
    MEM32(ebx + 4) = esi;
    eax = MEM32(edi + 0x74);
    ebx = edi + 0x6C;
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    MEM32(esp + 0x30) = ebx;
    if (CMP_GE(_fas, _fbs)) goto loc_00214F81; /* jge: greater or equal (signed >=) */

loc_00214F6D: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00214F75; /* jl: less (signed <) */

loc_00214F73: ;
    eax = esi;

loc_00214F75: ;
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00214F7Eu); RECOMP_ABI_CALL(0x00101B30u, sub_00101B30); /* call 0x00101B30 */

loc_00214F7E: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00214F81: ;
    ebp = edi + 0x78;
    MEM32(ebx + 4) = esi;
    eax = MEM32(ebp + 8);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00214FA7; /* jge: greater or equal (signed >=) */

loc_00214F93: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00214F9B; /* jl: less (signed <) */

loc_00214F99: ;
    eax = esi;

loc_00214F9B: ;
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00214FA4u); RECOMP_ABI_CALL(0x00101B30u, sub_00101B30); /* call 0x00101B30 */

loc_00214FA4: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00214FA7: ;
    ebx = edi + 0x84;
    MEM32(ebp + 4) = esi;
    eax = MEM32(ebx + 8);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    MEM32(esp + 0x34) = ebx;
    if (CMP_GE(_fas, _fbs)) goto loc_00214FD4; /* jge: greater or equal (signed >=) */

loc_00214FC0: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00214FC8; /* jl: less (signed <) */

loc_00214FC6: ;
    eax = esi;

loc_00214FC8: ;
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00214FD1u); RECOMP_ABI_CALL(0x00101B30u, sub_00101B30); /* call 0x00101B30 */

loc_00214FD1: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00214FD4: ;
    MEM32(ebx + 4) = esi;
    eax = MEM32(edi + 0x98);
    ebx = edi + 0x90;
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    MEM32(esp + 0x10) = ebx;
    if (CMP_GE(_fas, _fbs)) goto loc_00215004; /* jge: greater or equal (signed >=) */

loc_00214FF0: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00214FF8; /* jl: less (signed <) */

loc_00214FF6: ;
    eax = esi;

loc_00214FF8: ;
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00215001u); RECOMP_ABI_CALL(0x00101B30u, sub_00101B30); /* call 0x00101B30 */

loc_00215001: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00215004: ;
    MEM32(ebx + 4) = esi;
    eax = MEM32(edi + 0xA4);
    ebx = edi + 0x9C;
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    MEM32(esp + 0x38) = ebx;
    if (CMP_GE(_fas, _fbs)) goto loc_00215034; /* jge: greater or equal (signed >=) */

loc_00215020: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00215028; /* jl: less (signed <) */

loc_00215026: ;
    eax = esi;

loc_00215028: ;
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00215031u); RECOMP_ABI_CALL(0x00101B30u, sub_00101B30); /* call 0x00101B30 */

loc_00215031: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00215034: ;
    _fb = (uint32_t)(0xA8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0xA8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebx + 4) = esi;
    eax = MEM32(edi + 8);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0021505D; /* jge: greater or equal (signed >=) */

loc_00215049: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00215051; /* jl: less (signed <) */

loc_0021504F: ;
    eax = esi;

loc_00215051: ;
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0021505Au); RECOMP_ABI_CALL(0x00101B30u, sub_00101B30); /* call 0x00101B30 */

loc_0021505A: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0021505D: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    MEM32(edi + 4) = esi;
    if (CMP_LE(_fas, _fbs)) goto loc_0021513A; /* jle: less or equal (signed <=) */

loc_0021506A: ;
    MEM32(esp + 0x40) = ecx;
    edi = edi;

loc_00215070: ;
    eax = MEM32(esp + 0x14);
    eax = MEM32(eax + 0x28);
    ebx = MEM32(esp + 0x40);
    edx = MEM32(esp + 0x18);
    edx = MEM32(edx);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = MEM32(eax);
    MEM32(edx + ecx * 4) = ebx;
    ebx = MEM32(eax + 4);
    edx = MEM32(esp + 0x1C);
    edx = MEM32(edx);
    MEM32(edx + ecx * 4) = ebx;
    ebx = MEM32(eax + 8);
    edx = MEM32(esp + 0x20);
    edx = MEM32(edx);
    MEM32(edx + ecx * 4) = ebx;
    ebx = MEM32(eax + 0xC);
    edx = MEM32(esp + 0x24);
    edx = MEM32(edx);
    MEM32(edx + ecx * 4) = ebx;
    SET_LO8(ebx, MEM8(eax + 0x10));
    edx = MEM32(esp + 0x28);
    edx = MEM32(edx);
    MEM8(ecx + edx) = LO8(ebx);
    ebx = MEM32(eax + 0x14);
    edx = MEM32(esp + 0x2C);
    edx = MEM32(edx);
    MEM32(edx + ecx * 4) = ebx;
    ebx = MEM32(eax + 0x18);
    edx = MEM32(esp + 0x30);
    edx = MEM32(edx);
    MEM32(edx + ecx * 4) = ebx;
    ebx = MEM32(eax + 0x1C);
    edx = MEM32(ebp);
    MEM32(edx + ecx * 4) = ebx;
    ebx = MEM32(eax + 0x20);
    edx = MEM32(esp + 0x34);
    edx = MEM32(edx);
    MEM32(edx + ecx * 4) = ebx;
    ebx = MEM32(eax + 0x24);
    edx = MEM32(esp + 0x10);
    edx = MEM32(edx);
    MEM32(edx + ecx * 4) = ebx;
    ebx = MEM32(eax + 0x28);
    edx = MEM32(esp + 0x38);
    edx = MEM32(edx);
    MEM32(edx + ecx * 4) = ebx;
    edx = MEM32(edi);
    eax = MEM32(eax + 0x2C);
    MEM32(edx + ecx * 4) = eax;
    edx = MEM32(ebp);
    eax = edx + ecx * 4;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x720490) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0x720490 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00215126; /* jne: not equal / not zero */

loc_00215113: ;
    MEM32(eax) = 0;
    eax = MEM32(esp + 0x10);
    edx = MEM32(eax);
    MEM32(edx + ecx * 4) = 0;

loc_00215126: ;
    edx = MEM32(esp + 0x40);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x30;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    MEM32(esp + 0x40) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_00215070; /* jl: less (signed <) */

loc_0021513A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00215150
 * Original: 0x00215150 - 0x002151B5 (101 bytes, 39 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00215150(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00215150: ;
    eax = MEM32(ecx + 0x30);
    PUSH32(esp, ebx);
    ebx = MEM32(ecx + 0x2C);
    PUSH32(esp, esi);
    esi = ecx + 0x28;
    PUSH32(esp, edi);
    edi = ebx + 1;
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0021517C; /* jge: greater or equal (signed >=) */

loc_00215168: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00215170; /* jl: less (signed <) */

loc_0021516E: ;
    eax = edi;

loc_00215170: ;
    PUSH32(esp, 0x30);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00215179u); RECOMP_ABI_CALL(0x00101B30u, sub_00101B30); /* call 0x00101B30 */

loc_00215179: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0021517C: ;
    edx = MEM32(esi);
    eax = ebx + ebx * 2;
    MEM32(esi + 4) = edi;
    esi = MEM32(esp + 0x10);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0xC;
    edi = eax;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    ecx = MEM32(eax + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    if (CMP_NE(_fa, _fb)) goto loc_002151B2; /* jne: not equal / not zero */

loc_002151A0: ;
    ecx = 0x720490;
    MEM32(eax + 0x2C) = 1;
    MEM32(eax + 0x24) = ecx;
    MEM32(eax + 0x1C) = ecx;

loc_002151B2: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002151C0
 * Original: 0x002151C0 - 0x00215301 (321 bytes, 105 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002151C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002151C0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    edx = 1;
    PUSH32(esp, edi);
    edi = ecx;
    MEM32(edi) = 0x4AEBCC;
    MEM16(edi + 6) = LO16(edx);
    eax = MEM32(esi);
    MEM32(edi + 8) = eax;
    MEM32(edi) = 0x4B4B18;
    MEM32(edi + 0x30) = 0x80000001u;
    ebp = edi + 0x28;
    eax = ebp + 0xC;
    MEM32(ebp) = eax;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebp + 4) = ecx;
    MEM32(eax + 0x20) = ecx;
    MEM32(eax + 0x28) = ecx;
    MEM32(eax + 0x2C) = edx;
    MEM32(eax + 0x24) = ecx;
    MEM32(eax + 0x1C) = ecx;
    edx = MEM32(esi + 4);
    MEM32(edi + 0x20) = edx;
    eax = MEM32(esi + 0x10);
    MEM32(edi + 0x10) = eax;
    edx = MEM32(esi + 0x14);
    MEM32(edi + 0x14) = edx;
    eax = MEM32(esi + 0x18);
    MEM32(edi + 0x18) = eax;
    edx = MEM32(esi + 0x1C);
    MEM32(edi + 0x1C) = edx;
    eax = MEM32(ebp + 8);
    ebx = MEM32(esi + 0x70);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0021524B; /* jge: greater or equal (signed >=) */

loc_00215235: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0021523D; /* jl: less (signed <) */

loc_0021523B: ;
    eax = ebx;

loc_0021523D: ;
    PUSH32(esp, 0x30);
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00215246u); RECOMP_ABI_CALL(0x00101B30u, sub_00101B30); /* call 0x00101B30 */

loc_00215246: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0021524B: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    MEM32(ebp + 4) = ebx;
    if (CMP_LE(_fas, _fbs)) goto loc_002152F2; /* jle: less or equal (signed <=) */

loc_00215256: ;
    MEM32(esp + 0x14) = ecx;
    /* nop */

loc_00215260: ;
    eax = MEM32(ebp);
    _fb = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(esi + 0x24);
    edx = MEM32(edx + ecx * 4);
    MEM32(eax) = edx;
    edx = MEM32(esi + 0x30);
    edx = MEM32(edx + ecx * 4);
    MEM32(eax + 4) = edx;
    edx = MEM32(esi + 0x3C);
    edx = MEM32(edx + ecx * 4);
    MEM32(eax + 8) = edx;
    edx = MEM32(esi + 0x48);
    edx = MEM32(edx + ecx * 4);
    MEM32(eax + 0xC) = edx;
    edx = MEM32(esi + 0x54);
    SET_LO8(edx, MEM8(ecx + edx));
    MEM8(eax + 0x10) = LO8(edx);
    edx = MEM32(esi + 0x60);
    edx = MEM32(edx + ecx * 4);
    MEM32(eax + 0x14) = edx;
    edx = MEM32(esi + 0x6C);
    edx = MEM32(edx + ecx * 4);
    MEM32(eax + 0x18) = edx;
    edx = MEM32(esi + 0x78);
    edx = MEM32(edx + ecx * 4);
    MEM32(eax + 0x1C) = edx;
    edx = MEM32(esi + 0x84);
    edx = MEM32(edx + ecx * 4);
    MEM32(eax + 0x20) = edx;
    edx = MEM32(esi + 0x90);
    edx = MEM32(edx + ecx * 4);
    MEM32(eax + 0x24) = edx;
    edx = MEM32(esi + 0x9C);
    edx = MEM32(edx + ecx * 4);
    MEM32(eax + 0x28) = edx;
    edx = MEM32(esi + 0xA8);
    edx = MEM32(edx + ecx * 4);
    MEM32(eax + 0x2C) = edx;
    edx = MEM32(esp + 0x14);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x30;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    MEM32(esp + 0x14) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_00215260; /* jl: less (signed <) */

loc_002152F2: ;
    eax = MEM32(esi + 0x20);
    MEM32(edi + 0x24) = eax;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00215310
 * Original: 0x00215310 - 0x00215368 (88 bytes, 23 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00215310(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00215310: ;
    eax = ecx;
    MEM16(eax + 6) = 1;
    MEM32(eax) = 0x4B4B18;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 8) = edx;
    MEM32(eax + 0x2C) = edx;
    MEM32(eax + 0x30) = 0x80000001u;
    ecx = eax + 0x34;
    MEM32(eax + 0x28) = ecx;
    MEM32(ecx + 0x20) = edx;
    MEM32(ecx + 0x28) = edx;
    MEM32(ecx + 0x2C) = 1;
    MEM32(ecx + 0x24) = edx;
    MEM32(ecx + 0x1C) = edx;
    ecx = 0x3F800000;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 0x18) = ecx;
    MEM32(eax + 0x1C) = ecx;
    ecx = MEM32(esp + 4);
    MEM32(eax + 0x20) = 0x3D4CCCCD;
    MEM32(eax + 0x24) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00215370
 * Original: 0x00215370 - 0x00215395 (37 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00215370(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00215370: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00215378u); RECOMP_ABI_CALL(0x001673B0u, sub_001673B0); /* call 0x001673B0 */

loc_00215378: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0021538F; /* je: equal / zero */

loc_0021537F: ;
    ecx = MEM32(0x62EBAC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1E);
    PUSH32(esp, 0x70);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x0021538Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0021538Cu); } /* indirect call */
    }

loc_0021538F: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002153A0
 * Original: 0x002153A0 - 0x002153EC (76 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002153A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002153A0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    edx = MEM32(ecx);
    PUSH32(esp, esi);
    esi = MEM32(eax);
    edx = edx & 0x80000000u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = esi ^ edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = esi;
    edx = MEM32(ecx + 4);
    esi = MEM32(eax + 4);
    edx = edx & 0x80000000u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = esi ^ edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 4) = esi;
    edx = MEM32(ecx + 8);
    esi = MEM32(eax + 8);
    edx = edx & 0x80000000u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = esi ^ edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = MEM32(eax + 0xC);
    MEM32(eax + 8) = esi;
    ecx = MEM32(ecx + 0xC);
    ecx = ecx & 0x80000000u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx ^ ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 0xC) = edx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002153F0
 * Original: 0x002153F0 - 0x002153FC (12 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002153F0(void)
{

loc_002153F0: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax);
    MEM32(ecx + 8) = edx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00215400
 * Original: 0x00215400 - 0x0021540C (12 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00215400(void)
{

loc_00215400: ;
    eax = MEM32(ecx + 8);
    ecx = MEM32(esp + 4);
    MEM32(ecx) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00215410
 * Original: 0x00215410 - 0x0021558D (381 bytes, 89 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00215410(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
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

loc_00215410: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x70;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ecx);
    edx = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    edx = esp + 0x38;
    PUSH32(esp, edx);
    MEM32(esp + 0x48) = 0;
    MEM32(esp + 0x44) = 0;
    MEM32(esp + 0x40) = 0;
    MEM32(esp + 0x58) = 0;
    MEM32(esp + 0x54) = 0;
    MEM32(esp + 0x4C) = 0;
    MEM32(esp + 0x68) = 0;
    MEM32(esp + 0x60) = 0;
    MEM32(esp + 0x5C) = 0;
    MEM32(esp + 0x3C) = 0x3F800000;
    MEM32(esp + 0x50) = 0x3F800000;
    MEM32(esp + 0x64) = 0x3F800000;
    MEM32(esp + 0x78) = 0;
    MEM32(esp + 0x74) = 0;
    MEM32(esp + 0x70) = 0;
    MEM32(esp + 0x6C) = 0;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x002154AAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002154A7u); } /* indirect call */
    }

loc_002154AA: ;
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x10)); /* fsub dword ptr [esp + 0x10] */
    eax = MEM32(ebp + 8);
    fp_push(MEMF(esp + 0x24)); /* fld float */
    ecx = MEM32(eax);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x14)); /* fsub dword ptr [esp + 0x14] */
    ecx = ecx & 0x80000000u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x18)); /* fsub dword ptr [esp + 0x18] */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x496B98)); /* fmul dword ptr [0x496b98] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp);
    edx = edx ^ ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x496B98)); /* fmul dword ptr [0x496b98] */
    MEM32(esp) = edx;
    edx = MEM32(eax + 4);
    edx = edx & 0x80000000u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 4);
    fp_push(MEMF(esp + 8)); /* fld float */
    ecx = ecx ^ edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x496B98)); /* fmul dword ptr [0x496b98] */
    MEM32(esp + 4) = ecx;
    ecx = MEM32(eax + 8);
    ecx = ecx & 0x80000000u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 8);
    fp_push(MEMF(esp + 0x10)); /* fld float */
    edx = edx ^ ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x20)); /* fadd dword ptr [esp + 0x20] */
    MEM32(esp + 8) = edx;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x24)); /* fadd dword ptr [esp + 0x24] */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x28)); /* fadd dword ptr [esp + 0x28] */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x496B98)); /* fmul dword ptr [0x496b98] */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x496B98)); /* fmul dword ptr [0x496b98] */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x496B98)); /* fmul dword ptr [0x496b98] */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp)); /* fadd dword ptr [esp] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 4)); /* fadd dword ptr [esp + 4] */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 8)); /* fadd dword ptr [esp + 8] */
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 4)); /* fmul dword ptr [eax + 4] */
    fp_push(MEMF(esp)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax)); /* fmul dword ptr [eax] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 8)); /* fmul dword ptr [eax + 8] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
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
 * sub_00215590
 * Original: 0x00215590 - 0x00215596 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00215590(void)
{

loc_00215590: ;
    eax = 0x71E9F4;
    esp += 4; return; /* ret */

}

/**
 * sub_002155A0
 * Original: 0x002155A0 - 0x002155A6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002155A0(void)
{

loc_002155A0: ;
    eax = 0x71EA28;
    esp += 4; return; /* ret */

}

/**
 * sub_002155B0
 * Original: 0x002155B0 - 0x002155B6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002155B0(void)
{

loc_002155B0: ;
    eax = 0x16;
    esp += 4; return; /* ret */

}

/**
 * sub_002155C0
 * Original: 0x002155C0 - 0x002155C5 (5 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002155C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002155C0: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002155D0
 * Original: 0x002155D0 - 0x002155D3 (3 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002155D0(void)
{

loc_002155D0: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_002155E0
 * Original: 0x002155E0 - 0x00215600 (32 bytes, 11 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002155E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002155E0: ;
    eax = MEM32(esp + 0xC);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 4) = ecx;
    MEM32(eax) = ecx;
    MEM32(eax + 0x1C) = ecx;
    MEM32(eax + 0x18) = ecx;
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 0x10) = ecx;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00215620
 * Original: 0x00215620 - 0x00215626 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00215620(void)
{

loc_00215620: ;
    eax = 0x71EA5C;
    esp += 4; return; /* ret */

}

/**
 * sub_00215630
 * Original: 0x00215630 - 0x00215634 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00215630(void)
{

loc_00215630: ;
    eax = MEM32(ecx + 0xC);
    esp += 4; return; /* ret */

}

/**
 * sub_00215640
 * Original: 0x00215640 - 0x0021565F (31 bytes, 13 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00215640(void)
{

loc_00215640: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x0021564Eu); RECOMP_ABI_CALL(0x00215400u, sub_00215400); /* call 0x00215400 */

loc_0021564E: ;
    eax = MEM32(esi + 0xC);
    MEM32(edi + 4) = eax;
    ecx = MEM32(esi + 0x10);
    MEM32(edi + 8) = ecx;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00215660
 * Original: 0x00215660 - 0x00215668 (8 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00215660(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00215660: ;
    ecx = MEM32(ecx + 0xC);
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x18)); return; /* indirect tail jmp */

}

/**
 * sub_00215670
 * Original: 0x00215670 - 0x00215676 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00215670(void)
{

loc_00215670: ;
    eax = 0x11;
    esp += 4; return; /* ret */

}

/**
 * sub_00215680
 * Original: 0x00215680 - 0x00215688 (8 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00215680(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00215680: ;
    ecx = MEM32(ecx + 0x10);
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x24)); return; /* indirect tail jmp */

}

/**
 * sub_00215690
 * Original: 0x00215690 - 0x002156A2 (18 bytes, 6 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00215690(void)
{

loc_00215690: ;
    eax = ecx;
    ecx = MEM32(esp + 4);
    MEM32(eax + 0xC) = ecx;
    ecx = MEM32(ecx + 8);
    MEM32(eax + 8) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002156B0
 * Original: 0x002156B0 - 0x002156C2 (18 bytes, 6 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002156B0(void)
{

loc_002156B0: ;
    eax = MEM32(ecx + 0xC);
    edx = MEM32(eax + 4);
    eax = MEM32(esp + 4);
    MEM32(ecx + 4) = edx;
    MEM32(ecx) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002156D0
 * Original: 0x002156D0 - 0x0021570B (59 bytes, 20 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002156D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002156D0: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x18);
    edx = MEM32(eax + 8);
    MEM32(esp + 8) = edx;
    edx = MEM32(ecx + 0x10);
    MEM32(esp + 0xC) = eax;
    eax = MEM32(eax + 4);
    MEM32(esp) = edx;
    ecx = edx;
    edx = MEM32(esp + 0x1C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = esp + 4;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x1C);
    MEM32(esp + 0xC) = eax;
    eax = MEM32(ecx);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x00215705u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00215702u); } /* indirect call */
    }

loc_00215705: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00215710
 * Original: 0x00215710 - 0x00215747 (55 bytes, 15 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00215710(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00215710: ;
    eax = ecx;
    ecx = MEM32(esp + 4);
    MEM32(eax) = 0x4AEBCC;
    MEM16(eax + 6) = 1;
    edx = MEM32(ecx);
    MEM32(eax + 8) = edx;
    MEM32(eax) = 0x4AEC84;
    edx = MEM32(ecx + 4);
    MEM32(eax + 0xC) = edx;
    ecx = MEM32(ecx + 8);
    MEM32(eax + 0x10) = ecx;
    MEM16(ecx + 6) = MEM16(ecx + 6) + 1;
    _fa = (uint32_t)(MEM16(ecx + 6)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    ecx = MEM32(eax + 0xC);
    MEM16(ecx + 6) = MEM16(ecx + 6) + 1;
    _fa = (uint32_t)(MEM16(ecx + 6)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00215750
 * Original: 0x00215750 - 0x0021575F (15 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00215750(void)
{

loc_00215750: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0021575Eu); RECOMP_ABI_CALL(0x00215640u, sub_00215640); /* call 0x00215640 */

loc_0021575E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00215760
 * Original: 0x00215760 - 0x0021576F (15 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00215760(void)
{

loc_00215760: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0021576Eu); RECOMP_ABI_CALL(0x002153F0u, sub_002153F0); /* call 0x002153F0 */

loc_0021576E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00215770
 * Original: 0x00215770 - 0x00215771 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00215770(void)
{

loc_00215770: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00215780
 * Original: 0x00215780 - 0x00215786 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00215780(void)
{

loc_00215780: ;
    eax = 0x71EA90;
    esp += 4; return; /* ret */

}

/**
 * sub_00215790
 * Original: 0x00215790 - 0x00215799 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00215790(void)
{

loc_00215790: ;
    eax = ecx;
    MEM32(eax) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_002157A0
 * Original: 0x002157A0 - 0x002157AD (13 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002157A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002157A0: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = ecx;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_002157B0
 * Original: 0x002157B0 - 0x002157D2 (34 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002157B0(void)
{

loc_002157B0: ;
    ecx = MEM32(0x62EBAC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1E);
    PUSH32(esp, 0x14);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x002157BFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002157BCu); } /* indirect call */
    }

loc_002157BF: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, ecx);
    ecx = eax;
    MEM16(eax + 4) = 0x14;
    PUSH32(esp, 0x002157D1u); RECOMP_ABI_CALL(0x00215710u, sub_00215710); /* call 0x00215710 */

loc_002157D1: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002157E0
 * Original: 0x002157E0 - 0x002157F3 (19 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002157E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002157E0: ;
    eax = MEM32(esp + 4);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002157F2; /* je: equal / zero */

loc_002157EA: ;
    MEM32(eax) = ecx;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;

loc_002157F2: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00215800
 * Original: 0x00215800 - 0x0021588B (139 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00215800(void)
{

loc_00215800: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, 1);
    PUSH32(esp, 4);
    ecx = esi;
    PUSH32(esp, 0x00215810u); RECOMP_ABI_CALL(0x0021B340u, sub_0021B340); /* call 0x0021B340 */

loc_00215810: ;
    PUSH32(esp, 1);
    PUSH32(esp, 5);
    ecx = esi;
    PUSH32(esp, 0x0021581Bu); RECOMP_ABI_CALL(0x0021B340u, sub_0021B340); /* call 0x0021B340 */

loc_0021581B: ;
    PUSH32(esp, 1);
    PUSH32(esp, 6);
    ecx = esi;
    PUSH32(esp, 0x00215826u); RECOMP_ABI_CALL(0x0021B340u, sub_0021B340); /* call 0x0021B340 */

loc_00215826: ;
    PUSH32(esp, 1);
    PUSH32(esp, 7);
    ecx = esi;
    PUSH32(esp, 0x00215831u); RECOMP_ABI_CALL(0x0021B340u, sub_0021B340); /* call 0x0021B340 */

loc_00215831: ;
    PUSH32(esp, 1);
    PUSH32(esp, 8);
    ecx = esi;
    PUSH32(esp, 0x0021583Cu); RECOMP_ABI_CALL(0x0021B340u, sub_0021B340); /* call 0x0021B340 */

loc_0021583C: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x17);
    ecx = esi;
    PUSH32(esp, 0x00215847u); RECOMP_ABI_CALL(0x0021B340u, sub_0021B340); /* call 0x0021B340 */

loc_00215847: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0xB);
    ecx = esi;
    PUSH32(esp, 0x00215852u); RECOMP_ABI_CALL(0x0021B340u, sub_0021B340); /* call 0x0021B340 */

loc_00215852: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0xA);
    ecx = esi;
    PUSH32(esp, 0x0021585Du); RECOMP_ABI_CALL(0x0021B340u, sub_0021B340); /* call 0x0021B340 */

loc_0021585D: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0x13);
    ecx = esi;
    PUSH32(esp, 0x00215868u); RECOMP_ABI_CALL(0x0021B340u, sub_0021B340); /* call 0x0021B340 */

loc_00215868: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0x00215873u); RECOMP_ABI_CALL(0x0021B340u, sub_0021B340); /* call 0x0021B340 */

loc_00215873: ;
    PUSH32(esp, 0xD);
    PUSH32(esp, 0x12);
    ecx = esi;
    PUSH32(esp, 0x0021587Eu); RECOMP_ABI_CALL(0x0021B340u, sub_0021B340); /* call 0x0021B340 */

loc_0021587E: ;
    PUSH32(esp, 0xD);
    PUSH32(esp, 0xE);
    ecx = esi;
    PUSH32(esp, 0x00215889u); RECOMP_ABI_CALL(0x0021B340u, sub_0021B340); /* call 0x0021B340 */

loc_00215889: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00215890
 * Original: 0x00215890 - 0x0021595D (205 bytes, 70 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00215890(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00215890: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0021589Bu); RECOMP_ABI_CALL(0x00215800u, sub_00215800); /* call 0x00215800 */

loc_0021589B: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002158A1u); RECOMP_ABI_CALL(0x00247060u, sub_00247060); /* call 0x00247060 */

loc_002158A1: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002158A7u); RECOMP_ABI_CALL(0x002460C0u, sub_002460C0); /* call 0x002460C0 */

loc_002158A7: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x002158B3u); RECOMP_ABI_CALL(0x0021A910u, sub_0021A910); /* call 0x0021A910 */

loc_002158B3: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002158B9u); RECOMP_ABI_CALL(0x00244BB0u, sub_00244BB0); /* call 0x00244BB0 */

loc_002158B9: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0x002158C5u); RECOMP_ABI_CALL(0x0021A910u, sub_0021A910); /* call 0x0021A910 */

loc_002158C5: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002158CBu); RECOMP_ABI_CALL(0x00241F60u, sub_00241F60); /* call 0x00241F60 */

loc_002158CB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x002158D7u); RECOMP_ABI_CALL(0x0021A910u, sub_0021A910); /* call 0x0021A910 */

loc_002158D7: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002158DDu); RECOMP_ABI_CALL(0x002416E0u, sub_002416E0); /* call 0x002416E0 */

loc_002158DD: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0x002158E9u); RECOMP_ABI_CALL(0x0021A910u, sub_0021A910); /* call 0x0021A910 */

loc_002158E9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002158EFu); RECOMP_ABI_CALL(0x00240860u, sub_00240860); /* call 0x00240860 */

loc_002158EF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002158F5u); RECOMP_ABI_CALL(0x0023F980u, sub_0023F980); /* call 0x0023F980 */

loc_002158F5: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002158FBu); RECOMP_ABI_CALL(0x0023F670u, sub_0023F670); /* call 0x0023F670 */

loc_002158FB: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00215901u); RECOMP_ABI_CALL(0x0023ECF0u, sub_0023ECF0); /* call 0x0023ECF0 */

loc_00215901: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00215907u); RECOMP_ABI_CALL(0x0023E220u, sub_0023E220); /* call 0x0023E220 */

loc_00215907: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0021590Du); RECOMP_ABI_CALL(0x0023BE70u, sub_0023BE70); /* call 0x0023BE70 */

loc_0021590D: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00215913u); RECOMP_ABI_CALL(0x00239FD0u, sub_00239FD0); /* call 0x00239FD0 */

loc_00215913: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00215919u); RECOMP_ABI_CALL(0x00238DB0u, sub_00238DB0); /* call 0x00238DB0 */

loc_00215919: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0021591Fu); RECOMP_ABI_CALL(0x00238340u, sub_00238340); /* call 0x00238340 */

loc_0021591F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00215925u); RECOMP_ABI_CALL(0x00237750u, sub_00237750); /* call 0x00237750 */

loc_00215925: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0021592Bu); RECOMP_ABI_CALL(0x002362A0u, sub_002362A0); /* call 0x002362A0 */

loc_0021592B: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00215931u); RECOMP_ABI_CALL(0x00234F00u, sub_00234F00); /* call 0x00234F00 */

loc_00215931: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00215937u); RECOMP_ABI_CALL(0x00232100u, sub_00232100); /* call 0x00232100 */

loc_00215937: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0021593Du); RECOMP_ABI_CALL(0x0022FCE0u, sub_0022FCE0); /* call 0x0022FCE0 */

loc_0021593D: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00215943u); RECOMP_ABI_CALL(0x0022A2E0u, sub_0022A2E0); /* call 0x0022A2E0 */

loc_00215943: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00215949u); RECOMP_ABI_CALL(0x00228660u, sub_00228660); /* call 0x00228660 */

loc_00215949: ;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x00215952u); RECOMP_ABI_CALL(0x002267B0u, sub_002267B0); /* call 0x002267B0 */

loc_00215952: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00215958u); RECOMP_ABI_CALL(0x002255E0u, sub_002255E0); /* call 0x002255E0 */

loc_00215958: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00215960
 * Original: 0x00215960 - 0x00215A35 (213 bytes, 69 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00215960(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00215960: ;
    eax = MEM32(esp + 4);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x20 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00215A2F; /* ja: above (unsigned >) */

loc_0021596E: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x215A38); /* switch: 33 entries, 32 targets */
    if (_jt == 0x00215975u) goto loc_00215975;
    if (_jt == 0x0021597Bu) goto loc_0021597B;
    if (_jt == 0x00215981u) goto loc_00215981;
    if (_jt == 0x00215987u) goto loc_00215987;
    if (_jt == 0x0021598Du) goto loc_0021598D;
    if (_jt == 0x00215993u) goto loc_00215993;
    if (_jt == 0x00215999u) goto loc_00215999;
    if (_jt == 0x0021599Fu) goto loc_0021599F;
    if (_jt == 0x002159A5u) goto loc_002159A5;
    if (_jt == 0x002159ABu) goto loc_002159AB;
    if (_jt == 0x002159B1u) goto loc_002159B1;
    if (_jt == 0x002159B7u) goto loc_002159B7;
    if (_jt == 0x002159BDu) goto loc_002159BD;
    if (_jt == 0x002159C3u) goto loc_002159C3;
    if (_jt == 0x002159C9u) goto loc_002159C9;
    if (_jt == 0x002159CFu) goto loc_002159CF;
    if (_jt == 0x002159D5u) goto loc_002159D5;
    if (_jt == 0x002159DBu) goto loc_002159DB;
    if (_jt == 0x002159E1u) goto loc_002159E1;
    if (_jt == 0x002159E7u) goto loc_002159E7;
    if (_jt == 0x002159EDu) goto loc_002159ED;
    if (_jt == 0x002159F3u) goto loc_002159F3;
    if (_jt == 0x002159F9u) goto loc_002159F9;
    if (_jt == 0x002159FFu) goto loc_002159FF;
    if (_jt == 0x00215A05u) goto loc_00215A05;
    if (_jt == 0x00215A0Bu) goto loc_00215A0B;
    if (_jt == 0x00215A11u) goto loc_00215A11;
    if (_jt == 0x00215A17u) goto loc_00215A17;
    if (_jt == 0x00215A1Du) goto loc_00215A1D;
    if (_jt == 0x00215A23u) goto loc_00215A23;
    if (_jt == 0x00215A29u) goto loc_00215A29;
    if (_jt == 0x00215A2Fu) goto loc_00215A2F;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00215975: ;
    eax = 0x4B4E34;
    esp += 4; return; /* ret */

loc_0021597B: ;
    eax = 0x4B4E24;
    esp += 4; return; /* ret */

loc_00215981: ;
    eax = 0x4B4E10;
    esp += 4; return; /* ret */

loc_00215987: ;
    eax = 0x4B4DFC;
    esp += 4; return; /* ret */

loc_0021598D: ;
    eax = 0x4B4DEC;
    esp += 4; return; /* ret */

loc_00215993: ;
    eax = 0x4B4DD8;
    esp += 4; return; /* ret */

loc_00215999: ;
    eax = 0x4B4DC8;
    esp += 4; return; /* ret */

loc_0021599F: ;
    eax = 0x4B4DB4;
    esp += 4; return; /* ret */

loc_002159A5: ;
    eax = 0x4B4D98;
    esp += 4; return; /* ret */

loc_002159AB: ;
    eax = 0x4B4D80;
    esp += 4; return; /* ret */

loc_002159B1: ;
    eax = 0x4B4D70;
    esp += 4; return; /* ret */

loc_002159B7: ;
    eax = 0x4B4D50;
    esp += 4; return; /* ret */

loc_002159BD: ;
    eax = 0x4B4D3C;
    esp += 4; return; /* ret */

loc_002159C3: ;
    eax = 0x4B4D24;
    esp += 4; return; /* ret */

loc_002159C9: ;
    eax = 0x4B4D04;
    esp += 4; return; /* ret */

loc_002159CF: ;
    eax = 0x4B4CF0;
    esp += 4; return; /* ret */

loc_002159D5: ;
    eax = 0x4B4CDC;
    esp += 4; return; /* ret */

loc_002159DB: ;
    eax = 0x4B4CD0;
    esp += 4; return; /* ret */

loc_002159E1: ;
    eax = 0x4B4CC0;
    esp += 4; return; /* ret */

loc_002159E7: ;
    eax = 0x4B4CB0;
    esp += 4; return; /* ret */

loc_002159ED: ;
    eax = 0x4B4C9C;
    esp += 4; return; /* ret */

loc_002159F3: ;
    eax = 0x4B4C80;
    esp += 4; return; /* ret */

loc_002159F9: ;
    eax = 0x4B4C60;
    esp += 4; return; /* ret */

loc_002159FF: ;
    eax = 0x4B4C50;
    esp += 4; return; /* ret */

loc_00215A05: ;
    eax = 0x4B4C40;
    esp += 4; return; /* ret */

loc_00215A0B: ;
    eax = 0x4B4C30;
    esp += 4; return; /* ret */

loc_00215A11: ;
    eax = 0x4B4C20;
    esp += 4; return; /* ret */

loc_00215A17: ;
    eax = 0x4B4C10;
    esp += 4; return; /* ret */

loc_00215A1D: ;
    eax = 0x4B4C00;
    esp += 4; return; /* ret */

loc_00215A23: ;
    eax = 0x4B4BF0;
    esp += 4; return; /* ret */

loc_00215A29: ;
    eax = 0x4B4BE0;
    esp += 4; return; /* ret */

loc_00215A2F: ;
    eax = 0x4B4BD8;
    esp += 4; return; /* ret */

}

/**
 * sub_00215AC0
 * Original: 0x00215AC0 - 0x00215AD0 (16 bytes, 12 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00215AC0(void)
{

loc_00215AC0: ;
    eax = 0x15;
    esp += 4; return; /* ret */

}

/**
 * sub_00215AD0
 * Original: 0x00215AD0 - 0x00215AE1 (17 bytes, 5 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00215AD0(void)
{

loc_00215AD0: ;
    eax = MEM32(esp + 8);
    edx = MEM32(esp + 4);
    eax = edx + eax * 4;
    eax = ecx + eax * 4;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00215AF0
 * Original: 0x00215AF0 - 0x00215AF3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00215AF0(void)
{

loc_00215AF0: ;
    eax = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00215B00
 * Original: 0x00215B00 - 0x00215B04 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00215B00(void)
{

loc_00215B00: ;
    eax = ecx + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_00215B10
 * Original: 0x00215B10 - 0x00215B4A (58 bytes, 20 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00215B10(void)
{

loc_00215B10: ;
    eax = ecx;
    ecx = MEM32(esp + 4);
    edx = MEM32(ecx);
    MEM32(eax) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    edx = MEM32(ecx + 8);
    MEM32(eax + 8) = edx;
    ecx = MEM32(ecx + 0xC);
    MEM32(eax + 0xC) = ecx;
    ecx = MEM32(esp + 8);
    edx = MEM32(ecx);
    MEM32(eax + 0x10) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 0x14) = edx;
    edx = MEM32(ecx + 8);
    MEM32(eax + 0x18) = edx;
    ecx = MEM32(ecx + 0xC);
    MEM32(eax + 0x1C) = ecx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00215B50
 * Original: 0x00215B50 - 0x00215B54 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00215B50(void)
{

loc_00215B50: ;
    eax = MEM32(ecx + 8);
    esp += 4; return; /* ret */

}

/**
 * sub_00215B60
 * Original: 0x00215B60 - 0x00215B73 (19 bytes, 6 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00215B60(void)
{

loc_00215B60: ;
    edx = MEM32(esp + 8);
    eax = ecx;
    ecx = MEM32(esp + 4);
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 8) = edx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00215B80
 * Original: 0x00215B80 - 0x00215BA5 (37 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00215B80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00215B80: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0xC);
    MEM32(esi) = 0x4B4E44;
    MEM16(ecx + 6) = MEM16(ecx + 6) - 1;
    _fa = (uint32_t)(MEM16(ecx + 6)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(ecx + 6)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 6), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00215B9D; /* jne: not equal / not zero */

loc_00215B97: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00215B9Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00215B9Bu); } /* indirect call */
    }

loc_00215B9D: ;
    MEM32(esi) = 0x4AE714;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00215BB0
 * Original: 0x00215BB0 - 0x00215BD5 (37 bytes, 15 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00215BB0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00215BB0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x00215BBEu); RECOMP_ABI_CALL(0x00215400u, sub_00215400); /* call 0x00215400 */

loc_00215BBE: ;
    eax = MEM32(esi + 0xC);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    ecx = edi + 0x10;
    MEM32(edi + 4) = eax;
    PUSH32(esp, 0x00215BD0u); RECOMP_ABI_CALL(0x00161270u, sub_00161270); /* call 0x00161270 */

loc_00215BD0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00215BE0
 * Original: 0x00215BE0 - 0x00215C19 (57 bytes, 25 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00215BE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00215BE0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x4C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(ebp + 8);
    eax = esi + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esp + 0x18;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00215BFDu); RECOMP_ABI_CALL(0x002A7EE0u, sub_002A7EE0); /* call 0x002A7EE0 */

loc_00215BFD: ;
    eax = MEM32(ebp + 0x10);
    ecx = MEM32(esi + 0xC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, eax);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x00215C12u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00215C0Fu); } /* indirect call */
    }

loc_00215C12: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00215C20
 * Original: 0x00215C20 - 0x00215C81 (97 bytes, 36 insns)
 * CC: cdecl, 2 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00215C20(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00215C20: ;
    eax = MEM32(esp + 8);
    fp_push(MEMF(eax)); /* fld float */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_push(MEMF(eax + 8)); /* fld float */
    eax = MEM32(esp + 4);
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x20)); /* fmul dword ptr [eax + 0x20] */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x10)); /* fmul dword ptr [eax + 0x10] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax)); /* fmul dword ptr [eax] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 0x30)); /* fadd dword ptr [eax + 0x30] */
    MEMF(ecx) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x24)); /* fmul dword ptr [eax + 0x24] */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x14)); /* fmul dword ptr [eax + 0x14] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 4)); /* fmul dword ptr [eax + 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 0x34)); /* fadd dword ptr [eax + 0x34] */
    MEMF(ecx + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x28)); /* fmul dword ptr [eax + 0x28] */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x18)); /* fmul dword ptr [eax + 0x18] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 8)); /* fmul dword ptr [eax + 8] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 0x38)); /* fadd dword ptr [eax + 0x38] */
    MEMF(ecx + 8) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(ecx + 0xC) = 0;
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00215C90
 * Original: 0x00215C90 - 0x00215CEA (90 bytes, 35 insns)
 * CC: cdecl, 2 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00215C90(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00215C90: ;
    eax = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    fp_push(MEMF(edx)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax + 0x30)); /* fsub dword ptr [eax + 0x30] */
    fp_push(MEMF(edx + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax + 0x34)); /* fsub dword ptr [eax + 0x34] */
    fp_push(MEMF(edx + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax + 0x38)); /* fsub dword ptr [eax + 0x38] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 8)); /* fmul dword ptr [eax + 8] */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 4)); /* fmul dword ptr [eax + 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax)); /* fmul dword ptr [eax] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(ecx) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x18)); /* fmul dword ptr [eax + 0x18] */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x14)); /* fmul dword ptr [eax + 0x14] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x10)); /* fmul dword ptr [eax + 0x10] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(ecx + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x28)); /* fmul dword ptr [eax + 0x28] */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x24)); /* fmul dword ptr [eax + 0x24] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x20)); /* fmul dword ptr [eax + 0x20] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(ecx + 8) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00215CF0
 * Original: 0x00215CF0 - 0x00215D2F (63 bytes, 22 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00215CF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00215CF0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0xC);
    MEM32(esi) = 0x4B4E44;
    MEM16(ecx + 6) = MEM16(ecx + 6) - 1;
    _fa = (uint32_t)(MEM16(ecx + 6)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    SET_LO16(eax, MEM16(ecx + 6));
    if ((_fa != 0)) goto loc_00215D0C; /* jne: not equal / not zero */

loc_00215D06: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00215D0Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00215D0Au); } /* indirect call */
    }

loc_00215D0C: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    MEM32(esi) = 0x4AE714;
    if (TEST_Z(_fa, _fb)) goto loc_00215D29; /* je: equal / zero */

loc_00215D19: ;
    ecx = MEM32(0x62EBAC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1E);
    PUSH32(esp, 0x50);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00215D29u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00215D26u); } /* indirect call */
    }

loc_00215D29: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00215D30
 * Original: 0x00215D30 - 0x00215D92 (98 bytes, 30 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00215D30(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00215D30: ;
    edx = MEM32(esp + 4);
    eax = ecx;
    MEM32(eax + 0xC) = edx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 8) = ecx;
    MEM16(eax + 6) = 1;
    MEM32(eax) = 0x4B4E44;
    MEM32(eax + 0x1C) = ecx;
    MEM32(eax + 0x18) = ecx;
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x2C) = ecx;
    MEM32(eax + 0x28) = ecx;
    MEM32(eax + 0x24) = ecx;
    MEM32(eax + 0x20) = ecx;
    MEM32(eax + 0x3C) = ecx;
    MEM32(eax + 0x38) = ecx;
    MEM32(eax + 0x34) = ecx;
    MEM32(eax + 0x30) = ecx;
    edx = 0x3F800000;
    MEM32(eax + 0x10) = edx;
    MEM32(eax + 0x24) = edx;
    MEM32(eax + 0x38) = edx;
    MEM32(eax + 0x4C) = ecx;
    MEM32(eax + 0x48) = ecx;
    MEM32(eax + 0x44) = ecx;
    MEM32(eax + 0x40) = ecx;
    ecx = MEM32(eax + 0xC);
    MEM16(ecx + 6) = MEM16(ecx + 6) + 1;
    _fa = (uint32_t)(MEM16(ecx + 6)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00215DA0
 * Original: 0x00215DA0 - 0x00215E69 (201 bytes, 74 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00215DA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
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

loc_00215DA0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx + 0x10;
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    fp_push(MEMF(edi)); /* fld float */
    ecx = MEM32(ecx + 0xC);
    fp_push(MEMF(edi + 4)); /* fld float */
    edx = esp + 0x10;
    fp_push(MEMF(edi + 8)); /* fld float */
    MEM32(esp + 0x1C) = 0;
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 8)); /* fmul dword ptr [esi + 8] */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 4)); /* fmul dword ptr [esi + 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi)); /* fmul dword ptr [esi] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x18)); /* fmul dword ptr [esi + 0x18] */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x14)); /* fmul dword ptr [esi + 0x14] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x10)); /* fmul dword ptr [esi + 0x10] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x28)); /* fmul dword ptr [esi + 0x28] */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x24)); /* fmul dword ptr [esi + 0x24] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x20)); /* fmul dword ptr [esi + 0x20] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(ecx);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x00215E10u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00215E0Du); } /* indirect call */
    }

loc_00215E10: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    eax = esp + 0x20;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = esp + 0x18;
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00215E49u); RECOMP_ABI_CALL(0x00215C20u, sub_00215C20); /* call 0x00215C20 */

loc_00215E49: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 8)); /* fmul dword ptr [edi + 8] */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi)); /* fmul dword ptr [edi] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(edi + 4)); /* fmul dword ptr [edi + 4] */
    POP32(esp, edi);
    POP32(esp, esi);
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
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
 * sub_00215E70
 * Original: 0x00215E70 - 0x00215EB3 (67 bytes, 23 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00215E70(void)
{

loc_00215E70: ;
    eax = ecx;
    ecx = MEM32(esp + 4);
    edx = MEM32(ecx);
    MEM32(eax) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    edx = MEM32(ecx + 8);
    MEM32(eax + 8) = edx;
    edx = MEM32(ecx + 0xC);
    MEM32(eax + 0xC) = edx;
    edx = MEM32(ecx + 0x10);
    MEM32(eax + 0x10) = edx;
    edx = MEM32(ecx + 0x14);
    MEM32(eax + 0x14) = edx;
    edx = MEM32(ecx + 0x18);
    MEM32(eax + 0x18) = edx;
    edx = MEM32(ecx + 0x1C);
    MEM32(eax + 0x1C) = edx;
    edx = MEM32(ecx + 0x20);
    MEM32(eax + 0x20) = edx;
    ecx = MEM32(ecx + 0x24);
    MEM32(eax + 0x24) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00215EC0
 * Original: 0x00215EC0 - 0x00215F52 (146 bytes, 52 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00215EC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00215EC0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x78) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x78;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0xC);
    eax = MEM32(edi + 8);
    ecx = MEM32(eax);
    MEM32(esp + 0x20) = ecx;
    edx = MEM32(eax + 4);
    MEM32(esp + 0x24) = edx;
    ecx = MEM32(eax + 8);
    MEM32(esp + 0x28) = ecx;
    edx = MEM32(eax + 0xC);
    MEM32(esp + 0x2C) = edx;
    ecx = MEM32(eax + 0x10);
    MEM32(esp + 0x30) = ecx;
    edx = MEM32(eax + 0x14);
    MEM32(esp + 0x34) = edx;
    ecx = MEM32(eax + 0x18);
    MEM32(esp + 0x38) = ecx;
    edx = MEM32(eax + 0x1C);
    ecx = MEM32(edi + 8);
    eax = esi + 0x10;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esp + 0x48;
    MEM32(esp + 0x44) = edx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00215F1Eu); RECOMP_ABI_CALL(0x002A7EE0u, sub_002A7EE0); /* call 0x002A7EE0 */

loc_00215F1E: ;
    ecx = MEM32(esi + 0xC);
    edx = esp + 0x20;
    MEM32(esp + 0x1C) = edi;
    MEM32(esp + 0x18) = edx;
    eax = MEM32(edi + 4);
    MEM32(esp + 0x14) = eax;
    eax = MEM32(ebp + 0x10);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    eax = MEM32(ebp + 8);
    MEM32(esp + 0x18) = ecx;
    edx = MEM32(ecx);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x00215F4Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00215F47u); } /* indirect call */
    }

loc_00215F4A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00215F60
 * Original: 0x00215F60 - 0x00215F9C (60 bytes, 20 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00215F60(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00215F60: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    MEM32(esi) = 0x4AEBCC;
    ecx = edi + 0x10;
    MEM16(esi + 6) = 1;
    eax = MEM32(edi);
    PUSH32(esp, ecx);
    ecx = esi + 0x10;
    MEM32(esi + 8) = eax;
    MEM32(esi) = 0x4B4E44;
    PUSH32(esp, 0x00215F8Bu); RECOMP_ABI_CALL(0x00161270u, sub_00161270); /* call 0x00161270 */

loc_00215F8B: ;
    eax = MEM32(edi + 4);
    MEM32(esi + 0xC) = eax;
    MEM16(eax + 6) = MEM16(eax + 6) + 1;
    _fa = (uint32_t)(MEM16(eax + 6)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00215FA0
 * Original: 0x00215FA0 - 0x002160BF (287 bytes, 111 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00215FA0(void)
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

loc_00215FA0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 8);
    fp_push(MEMF(eax)); /* fld float */
    PUSH32(esp, ebx);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + 0x40)); /* fsub dword ptr [ecx + 0x40] */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    fp_push(MEMF(eax + 4)); /* fld float */
    esi = ecx + 0x10;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0x34)); /* fsub dword ptr [esi + 0x34] */
    edx = MEM32(eax + 0xC);
    fp_push(MEMF(eax + 8)); /* fld float */
    ecx = MEM32(ecx + 0xC);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0x38)); /* fsub dword ptr [esi + 0x38] */
    MEM32(esp + 0x28) = edx;
    edx = MEM32(eax + 0x1C);
    MEM32(esp + 0x38) = edx;
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    edx = MEM32(eax + 0x20);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 8)); /* fmul dword ptr [esi + 8] */
    MEM32(esp + 0x3C) = edx;
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    edx = MEM32(eax + 0x24);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 4)); /* fmul dword ptr [esi + 4] */
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0xC);
    MEM32(esp + 0x44) = edx;
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    PUSH32(esp, edi);
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi)); /* fmul dword ptr [esi] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x18)); /* fmul dword ptr [esi + 0x18] */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x14)); /* fmul dword ptr [esi + 0x14] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x10)); /* fmul dword ptr [esi + 0x10] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x28)); /* fmul dword ptr [esi + 0x28] */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x24)); /* fmul dword ptr [esi + 0x24] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x20)); /* fmul dword ptr [esi + 0x20] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0x30)); /* fsub dword ptr [esi + 0x30] */
    fp_push(MEMF(eax + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0x34)); /* fsub dword ptr [esi + 0x34] */
    fp_push(MEMF(eax + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0x38)); /* fsub dword ptr [esi + 0x38] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 8)); /* fmul dword ptr [esi + 8] */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 4)); /* fmul dword ptr [esi + 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi)); /* fmul dword ptr [esi] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x18)); /* fmul dword ptr [esi + 0x18] */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x14)); /* fmul dword ptr [esi + 0x14] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x10)); /* fmul dword ptr [esi + 0x10] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(esp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x28)); /* fmul dword ptr [esi + 0x28] */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x24)); /* fmul dword ptr [esi + 0x24] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x20)); /* fmul dword ptr [esi + 0x20] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEMF(esp + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(ecx);
    edx = esp + 0x24;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x00216086u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00216083u); } /* indirect call */
    }

loc_00216086: ;
    SET_LO8(ebx, LO8(eax));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002160B4; /* je: equal / zero */

loc_0021608C: ;
    ecx = MEM32(edi + 4);
    eax = MEM32(edi);
    edx = MEM32(edi + 8);
    MEM32(esp + 0x14) = ecx;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    MEM32(esp + 0x14) = eax;
    eax = MEM32(edi + 0xC);
    PUSH32(esp, esi);
    ecx = edi;
    MEM32(esp + 0x20) = edx;
    MEM32(esp + 0x24) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002160B4u); RECOMP_ABI_CALL(0x002A7C30u, sub_002A7C30); /* call 0x002A7C30 */

loc_002160B4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_002160C0
 * Original: 0x002160C0 - 0x002160C6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002160C0(void)
{

loc_002160C0: ;
    eax = 0xA;
    esp += 4; return; /* ret */

}

/**
 * sub_002160D0
 * Original: 0x002160D0 - 0x002160D3 (3 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_002160D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002160D0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_002160E0
 * Original: 0x002160E0 - 0x002160E3 (3 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002160E0(void)
{

loc_002160E0: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002160F0
 * Original: 0x002160F0 - 0x002160FC (12 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002160F0(void)
{

loc_002160F0: ;
    eax = MEM32(ecx);
    ecx = MEM32(esp + 4);
    eax = eax + ecx * 8;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00216100
 * Original: 0x00216100 - 0x0021610C (12 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00216100(void)
{

loc_00216100: ;
    eax = MEM32(ecx);
    ecx = MEM32(esp + 4);
    eax = eax + ecx * 8;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00216110
 * Original: 0x00216110 - 0x00216114 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00216110(void)
{

loc_00216110: ;
    eax = MEM32(ecx + 4);
    esp += 4; return; /* ret */

}

/**
 * sub_00216120
 * Original: 0x00216120 - 0x0021612C (12 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00216120(void)
{

loc_00216120: ;
    eax = MEM32(ecx);
    ecx = MEM32(esp + 4);
    eax = eax + ecx * 4;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00216130
 * Original: 0x00216130 - 0x00216138 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00216130(void)
{

loc_00216130: ;
    MEM32(ecx + 4) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_00216140
 * Original: 0x00216140 - 0x0021614C (12 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00216140(void)
{

loc_00216140: ;
    eax = MEM32(ecx);
    ecx = MEM32(esp + 4);
    eax = eax + ecx * 4;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00216150
 * Original: 0x00216150 - 0x0021615C (12 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00216150(void)
{

loc_00216150: ;
    eax = MEM32(ecx);
    ecx = MEM32(esp + 4);
    eax = eax + ecx * 4;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00216160
 * Original: 0x00216160 - 0x00216164 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00216160(void)
{

loc_00216160: ;
    eax = MEM32(ecx + 4);
    esp += 4; return; /* ret */

}

/**
 * sub_00216170
 * Original: 0x00216170 - 0x00216173 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00216170(void)
{

loc_00216170: ;
    eax = MEM32(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00216180
 * Original: 0x00216180 - 0x0021619F (31 bytes, 9 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00216180(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00216180: ;
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
 * sub_002161A0
 * Original: 0x002161A0 - 0x002161A9 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002161A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002161A0: ;
    eax = MEM32(ecx + 8);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}

/**
 * sub_002161B0
 * Original: 0x002161B0 - 0x002161CE (30 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002161B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002161B0: ;
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
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x002161CDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002161CAu); } /* indirect call */
    }

loc_002161CD: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002161D0
 * Original: 0x002161D0 - 0x002161D9 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002161D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002161D0: ;
    eax = MEM32(ecx + 8);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}

/**
 * sub_002161E0
 * Original: 0x002161E0 - 0x00216218 (56 bytes, 25 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002161E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002161E0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x002161EEu); RECOMP_ABI_CALL(0x002153F0u, sub_002153F0); /* call 0x002153F0 */

loc_002161EE: ;
    ecx = MEM32(esi + 0x10);
    _fa = (uint32_t)(MEM32(edi + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x14), ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00216213; /* jne: not equal / not zero */

loc_002161F6: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00216213; /* jle: less or equal (signed <=) */

loc_002161FC: ;
    PUSH32(esp, ebx);
    /* nop */

loc_00216200: ;
    edx = MEM32(edi + 0x10);
    edx = MEM32(edx + eax * 4);
    ebx = MEM32(esi + 0xC);
    MEM32(ebx + eax * 8 + 4) = edx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00216200; /* jl: less (signed <) */

loc_00216212: ;
    POP32(esp, ebx);

loc_00216213: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00216220
 * Original: 0x00216220 - 0x0021634E (302 bytes, 114 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00216220(void)
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

loc_00216220: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x10);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0xC);
    ecx = MEM32(eax);
    eax = MEM32(ebp + 0xC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    eax = MEM32(ebp + 8);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x00216244u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00216241u); } /* indirect call */
    }

loc_00216244: ;
    eax = MEM32(edi + 0x10);
    ebx = 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00216345; /* jle: less or equal (signed <=) */

loc_00216254: ;
    ecx = MEM32(edi + 0xC);
    ecx = MEM32(ecx + ebx * 8);
    edx = MEM32(ecx);
    eax = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, eax);
    eax = MEM32(ebp + 8);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x0021626Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00216269u); } /* indirect call */
    }

loc_0021626C: ;
    fp_push(MEMF(esi)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x10)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x10] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0021627D; /* jp: parity */

loc_00216279: ;
    fp_push(MEMF(esi)); /* fld float */
    goto loc_00216281;

loc_0021627D: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */

loc_00216281: ;
    MEMF(esi) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x14)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x14] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00216296; /* jp: parity */

loc_00216291: ;
    fp_push(MEMF(esi + 4)); /* fld float */
    goto loc_0021629A;

loc_00216296: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */

loc_0021629A: ;
    MEMF(esi + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x18)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x18] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_002162B0; /* jp: parity */

loc_002162AB: ;
    fp_push(MEMF(esi + 8)); /* fld float */
    goto loc_002162B4;

loc_002162B0: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */

loc_002162B4: ;
    MEMF(esi + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0xC)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x1C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x1c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_002162CA; /* jp: parity */

loc_002162C5: ;
    fp_push(MEMF(esi + 0xC)); /* fld float */
    goto loc_002162CE;

loc_002162CA: ;
    fp_push(MEMF(esp + 0x1C)); /* fld float */

loc_002162CE: ;
    MEMF(esi + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x10)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x20)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x20] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002162E4; /* jne: not equal / not zero */

loc_002162DF: ;
    fp_push(MEMF(esi + 0x10)); /* fld float */
    goto loc_002162E8;

loc_002162E4: ;
    fp_push(MEMF(esp + 0x20)); /* fld float */

loc_002162E8: ;
    MEMF(esi + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x14)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x24)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x24] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002162FE; /* jne: not equal / not zero */

loc_002162F9: ;
    fp_push(MEMF(esi + 0x14)); /* fld float */
    goto loc_00216302;

loc_002162FE: ;
    fp_push(MEMF(esp + 0x24)); /* fld float */

loc_00216302: ;
    MEMF(esi + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x18)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x28)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x28] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00216318; /* jne: not equal / not zero */

loc_00216313: ;
    fp_push(MEMF(esi + 0x18)); /* fld float */
    goto loc_0021631C;

loc_00216318: ;
    fp_push(MEMF(esp + 0x28)); /* fld float */

loc_0021631C: ;
    MEMF(esi + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esi + 0x1C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x2C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x2c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00216332; /* jne: not equal / not zero */

loc_0021632D: ;
    fp_push(MEMF(esi + 0x1C)); /* fld float */
    goto loc_00216336;

loc_00216332: ;
    fp_push(MEMF(esp + 0x2C)); /* fld float */

loc_00216336: ;
    MEMF(esi + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(edi + 0x10);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00216254; /* jl: less (signed <) */

loc_00216345: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00216350
 * Original: 0x00216350 - 0x00216354 (4 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00216350(void)
{

loc_00216350: ;
    eax = MEM32(ecx + 0x10);
    esp += 4; return; /* ret */

}

/**
 * sub_00216360
 * Original: 0x00216360 - 0x00216372 (18 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00216360(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00216360: ;
    eax = MEM32(esp + 4);
    edx = MEM32(ecx + 0x10);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0021636F; /* jl: less (signed <) */

loc_0021636C: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0021636F: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00216380
 * Original: 0x00216380 - 0x0021638D (13 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00216380(void)
{

loc_00216380: ;
    eax = MEM32(ecx + 0xC);
    ecx = MEM32(esp + 4);
    eax = MEM32(eax + ecx * 8);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00216390
 * Original: 0x00216390 - 0x0021639E (14 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00216390(void)
{

loc_00216390: ;
    eax = MEM32(ecx + 0xC);
    ecx = MEM32(esp + 4);
    eax = MEM32(eax + ecx * 8 + 4);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002163A0
 * Original: 0x002163A0 - 0x002163B2 (18 bytes, 5 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002163A0(void)
{

loc_002163A0: ;
    eax = MEM32(ecx + 0xC);
    ecx = MEM32(esp + 8);
    edx = MEM32(esp + 4);
    MEM32(eax + edx * 8 + 4) = ecx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002163C0
 * Original: 0x002163C0 - 0x002163CD (13 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002163C0(void)
{

loc_002163C0: ;
    eax = MEM32(ecx + 0xC);
    ecx = MEM32(esp + 4);
    eax = MEM32(eax + ecx * 8);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002163D0
 * Original: 0x002163D0 - 0x002163F7 (39 bytes, 15 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002163D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002163D0: ;
    eax = MEM32(ecx + 8);
    edx = MEM32(esp + 4);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002163F4; /* jge: greater or equal (signed >=) */

loc_002163E0: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002163E8; /* jl: less (signed <) */

loc_002163E6: ;
    eax = edx;

loc_002163E8: ;
    PUSH32(esp, 8);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002163F1u); RECOMP_ABI_CALL(0x00101B30u, sub_00101B30); /* call 0x00101B30 */

loc_002163F1: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002163F4: ;
    esp += 8; return; /* ret 4 */

}
