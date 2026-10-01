/**
 * MK: Shaolin Monks - Recompiled code chunk 23
 * Functions: 500 (0x00160B50 - 0x0016D6E0)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_00160B50
 * Original: 0x00160B50 - 0x00160B5D (13 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00160B50(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00160B50: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = ecx;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00160B60
 * Original: 0x00160B60 - 0x00160B79 (25 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00160B60(void)
{

loc_00160B60: ;
    ecx = MEM32(0x62EBAC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, 0x23);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x00160B73u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00160B70u); } /* indirect call */
    }

loc_00160B73: ;
    MEM16(eax + 4) = LO16(esi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00160B80
 * Original: 0x00160B80 - 0x00160B9A (26 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00160B80(void)
{

loc_00160B80: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(0x62EBAC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = ZX16(MEM16(eax + 4));
    PUSH32(esp, 0x23);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00160B98u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00160B95u); } /* indirect call */
    }

loc_00160B98: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00160BA0
 * Original: 0x00160BA0 - 0x00160BA3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00160BA0(void)
{

loc_00160BA0: ;
    eax = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00160BB0
 * Original: 0x00160BB0 - 0x00160BB7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00160BB0(void)
{

loc_00160BB0: ;
    eax = ecx + 0xB0;
    esp += 4; return; /* ret */

}

/**
 * sub_00160BC0
 * Original: 0x00160BC0 - 0x00160BC4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00160BC0(void)
{

loc_00160BC0: ;
    eax = ecx + 0x30;
    esp += 4; return; /* ret */

}

/**
 * sub_00160BD0
 * Original: 0x00160BD0 - 0x00160BD7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00160BD0(void)
{

loc_00160BD0: ;
    eax = ecx + 0x80;
    esp += 4; return; /* ret */

}

/**
 * sub_00160BE0
 * Original: 0x00160BE0 - 0x00160BE4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00160BE0(void)
{

loc_00160BE0: ;
    eax = ecx + 0x40;
    esp += 4; return; /* ret */

}

/**
 * sub_00160BF0
 * Original: 0x00160BF0 - 0x00160BF4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00160BF0(void)
{

loc_00160BF0: ;
    eax = ecx + 0x50;
    esp += 4; return; /* ret */

}

/**
 * sub_00160C00
 * Original: 0x00160C00 - 0x00160C0A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00160C00(void)
{

loc_00160C00: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x14) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00160C10
 * Original: 0x00160C10 - 0x00160C1A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00160C10(void)
{

loc_00160C10: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x18) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00160C20
 * Original: 0x00160C20 - 0x00160C24 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00160C20(void)
{

loc_00160C20: ;
    eax = MEM32(ecx + 0x3C);
    esp += 4; return; /* ret */

}

/**
 * sub_00160C30
 * Original: 0x00160C30 - 0x00160C46 (22 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00160C30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00160C30: ;
    SET_LO8(edx, MEM8(ecx + 0x40));
    eax = 1;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(edx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00160C45; /* je: equal / zero */

loc_00160C3C: ;
    edx = MEM32(ecx + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00160C45; /* je: equal / zero */

loc_00160C43: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00160C45: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00160C50
 * Original: 0x00160C50 - 0x00160C6D (29 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00160C50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00160C50: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00160C58u); RECOMP_ABI_CALL(0x001F9DD0u, sub_001F9DD0); /* call 0x001F9DD0 */

loc_00160C58: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00160C6B; /* jne: not equal / not zero */

loc_00160C5C: ;
    eax = MEM32(esi + 0x44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00160C6B; /* je: equal / zero */

loc_00160C63: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_001F9DE0(); return; /* tail jmp 0x001F9DE0 */

loc_00160C6B: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00160C70
 * Original: 0x00160C70 - 0x00160C79 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00160C70(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00160C70: ;
    eax = MEM32(ecx + 0x3C);
    _fb = (uint32_t)(0xB0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xB0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00160C80
 * Original: 0x00160C80 - 0x00160CB4 (52 bytes, 21 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00160C80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00160C80: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00160C88u); RECOMP_ABI_CALL(0x001F9DD0u, sub_001F9DD0); /* call 0x001F9DD0 */

loc_00160C88: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00160C9A; /* jne: not equal / not zero */

loc_00160C8C: ;
    eax = MEM32(esi + 0x44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00160C9A; /* je: equal / zero */

loc_00160C93: ;
    ecx = esi;
    PUSH32(esp, 0x00160C9Au); RECOMP_ABI_CALL(0x001F9DE0u, sub_001F9DE0); /* call 0x001F9DE0 */

loc_00160C9A: ;
    _fa = (uint32_t)(MEM8(esi + 0x40)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x40), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00160CA7; /* je: equal / zero */

loc_00160CA0: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00160CB0; /* jne: not equal / not zero */

loc_00160CA7: ;
    ecx = MEM32(esi + 0x3C);
    eax = MEM32(ecx);
    POP32(esp, esi);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x40)); return; /* indirect tail jmp */

loc_00160CB0: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00160CC0
 * Original: 0x00160CC0 - 0x00160CC7 (7 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00160CC0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00160CC0: ;
    eax = MEM32(ecx + 0x3C);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00160CD0
 * Original: 0x00160CD0 - 0x00160D04 (52 bytes, 21 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00160CD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00160CD0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00160CD8u); RECOMP_ABI_CALL(0x001F9DD0u, sub_001F9DD0); /* call 0x001F9DD0 */

loc_00160CD8: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00160CEA; /* jne: not equal / not zero */

loc_00160CDC: ;
    eax = MEM32(esi + 0x44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00160CEA; /* je: equal / zero */

loc_00160CE3: ;
    ecx = esi;
    PUSH32(esp, 0x00160CEAu); RECOMP_ABI_CALL(0x001F9DE0u, sub_001F9DE0); /* call 0x001F9DE0 */

loc_00160CEA: ;
    _fa = (uint32_t)(MEM8(esi + 0x40)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x40), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00160CF7; /* je: equal / zero */

loc_00160CF0: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00160D00; /* jne: not equal / not zero */

loc_00160CF7: ;
    ecx = MEM32(esi + 0x3C);
    eax = MEM32(ecx);
    POP32(esp, esi);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x48)); return; /* indirect tail jmp */

loc_00160D00: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00160D10
 * Original: 0x00160D10 - 0x00160D19 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00160D10(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00160D10: ;
    eax = MEM32(ecx + 0x3C);
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x80;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00160D20
 * Original: 0x00160D20 - 0x00160D54 (52 bytes, 21 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00160D20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00160D20: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00160D28u); RECOMP_ABI_CALL(0x001F9DD0u, sub_001F9DD0); /* call 0x001F9DD0 */

loc_00160D28: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00160D3A; /* jne: not equal / not zero */

loc_00160D2C: ;
    eax = MEM32(esi + 0x44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00160D3A; /* je: equal / zero */

loc_00160D33: ;
    ecx = esi;
    PUSH32(esp, 0x00160D3Au); RECOMP_ABI_CALL(0x001F9DE0u, sub_001F9DE0); /* call 0x001F9DE0 */

loc_00160D3A: ;
    _fa = (uint32_t)(MEM8(esi + 0x40)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x40), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00160D47; /* je: equal / zero */

loc_00160D40: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00160D50; /* jne: not equal / not zero */

loc_00160D47: ;
    ecx = MEM32(esi + 0x3C);
    eax = MEM32(ecx);
    POP32(esp, esi);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x4C)); return; /* indirect tail jmp */

loc_00160D50: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00160D60
 * Original: 0x00160D60 - 0x00160D67 (7 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00160D60(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00160D60: ;
    eax = MEM32(ecx + 0x3C);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x40;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00160D70
 * Original: 0x00160D70 - 0x00160D93 (35 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00160D70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00160D70: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00160D78u); RECOMP_ABI_CALL(0x001F9DD0u, sub_001F9DD0); /* call 0x001F9DD0 */

loc_00160D78: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00160D8A; /* jne: not equal / not zero */

loc_00160D7C: ;
    eax = MEM32(esi + 0x44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00160D8A; /* je: equal / zero */

loc_00160D83: ;
    ecx = esi;
    PUSH32(esp, 0x00160D8Au); RECOMP_ABI_CALL(0x001F9DE0u, sub_001F9DE0); /* call 0x001F9DE0 */

loc_00160D8A: ;
    ecx = MEM32(esi + 0x3C);
    eax = MEM32(ecx);
    POP32(esp, esi);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x50)); return; /* indirect tail jmp */

}

/**
 * sub_00160DA0
 * Original: 0x00160DA0 - 0x00160DA7 (7 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00160DA0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00160DA0: ;
    eax = MEM32(ecx + 0x3C);
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x50;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00160DB0
 * Original: 0x00160DB0 - 0x00160DD3 (35 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00160DB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00160DB0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00160DB8u); RECOMP_ABI_CALL(0x001F9DD0u, sub_001F9DD0); /* call 0x001F9DD0 */

loc_00160DB8: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00160DCA; /* jne: not equal / not zero */

loc_00160DBC: ;
    eax = MEM32(esi + 0x44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00160DCA; /* je: equal / zero */

loc_00160DC3: ;
    ecx = esi;
    PUSH32(esp, 0x00160DCAu); RECOMP_ABI_CALL(0x001F9DE0u, sub_001F9DE0); /* call 0x001F9DE0 */

loc_00160DCA: ;
    ecx = MEM32(esi + 0x3C);
    eax = MEM32(ecx);
    POP32(esp, esi);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x54)); return; /* indirect tail jmp */

}

/**
 * sub_00160DE0
 * Original: 0x00160DE0 - 0x00160DE8 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00160DE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00160DE0: ;
    ecx = MEM32(ecx + 0x3C);
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x58)); return; /* indirect tail jmp */

}

/**
 * sub_00160DF0
 * Original: 0x00160DF0 - 0x00160E13 (35 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00160DF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00160DF0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00160DF8u); RECOMP_ABI_CALL(0x001F9DD0u, sub_001F9DD0); /* call 0x001F9DD0 */

loc_00160DF8: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00160E0A; /* jne: not equal / not zero */

loc_00160DFC: ;
    eax = MEM32(esi + 0x44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00160E0A; /* je: equal / zero */

loc_00160E03: ;
    ecx = esi;
    PUSH32(esp, 0x00160E0Au); RECOMP_ABI_CALL(0x001F9DE0u, sub_001F9DE0); /* call 0x001F9DE0 */

loc_00160E0A: ;
    ecx = MEM32(esi + 0x3C);
    eax = MEM32(ecx);
    POP32(esp, esi);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x5C)); return; /* indirect tail jmp */

}

/**
 * sub_00160E20
 * Original: 0x00160E20 - 0x00160E43 (35 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00160E20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00160E20: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00160E28u); RECOMP_ABI_CALL(0x001F9DD0u, sub_001F9DD0); /* call 0x001F9DD0 */

loc_00160E28: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00160E3A; /* jne: not equal / not zero */

loc_00160E2C: ;
    eax = MEM32(esi + 0x44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00160E3A; /* je: equal / zero */

loc_00160E33: ;
    ecx = esi;
    PUSH32(esp, 0x00160E3Au); RECOMP_ABI_CALL(0x001F9DE0u, sub_001F9DE0); /* call 0x001F9DE0 */

loc_00160E3A: ;
    ecx = MEM32(esi + 0x3C);
    eax = MEM32(ecx);
    POP32(esp, esi);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x60)); return; /* indirect tail jmp */

}

/**
 * sub_00160E50
 * Original: 0x00160E50 - 0x00160E5D (13 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00160E50(void)
{

loc_00160E50: ;
    eax = MEM32(ecx + 0x3C);
    ecx = MEM32(esp + 4);
    MEM32(eax + 0x14) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00160E60
 * Original: 0x00160E60 - 0x00160E6D (13 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00160E60(void)
{

loc_00160E60: ;
    eax = MEM32(ecx + 0x3C);
    ecx = MEM32(esp + 4);
    MEM32(eax + 0x18) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00160E70
 * Original: 0x00160E70 - 0x00160E78 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00160E70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00160E70: ;
    ecx = MEM32(ecx + 0x3C);
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x18)); return; /* indirect tail jmp */

}

/**
 * sub_00160E80
 * Original: 0x00160E80 - 0x00160E87 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00160E80(void)
{

loc_00160E80: ;
    MEM32(ecx) = 0x4AE740;
    esp += 4; return; /* ret */

}

/**
 * sub_00160E90
 * Original: 0x00160E90 - 0x00160EAF (31 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00160E90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00160E90: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x4AE740;
    if (TEST_Z(_fa, _fb)) goto loc_00160EA9; /* je: equal / zero */

loc_00160EA0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00160EA6u); RECOMP_ABI_CALL(0x000EB425u, sub_000EB425); /* call 0x000EB425 */

loc_00160EA6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00160EA9: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00160EB0
 * Original: 0x00160EB0 - 0x00160EBA (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00160EB0(void)
{

loc_00160EB0: ;
    eax = ecx;
    MEM32(eax + 0x24) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_00160EC0
 * Original: 0x00160EC0 - 0x00160EC7 (7 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00160EC0(void)
{

loc_00160EC0: ;
    eax = ecx;
    MEM8(eax + 0x20) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_00160ED0
 * Original: 0x00160ED0 - 0x00160ED7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00160ED0(void)
{

loc_00160ED0: ;
    MEM32(ecx) = 0x4AE714;
    esp += 4; return; /* ret */

}

/**
 * sub_00160EE0
 * Original: 0x00160EE0 - 0x00160EE8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00160EE0(void)
{

loc_00160EE0: ;
    MEM32(ecx + 0x14) = 0x3F800000;
    esp += 4; return; /* ret */

}

/**
 * sub_00160EF0
 * Original: 0x00160EF0 - 0x00160EFA (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00160EF0(void)
{

loc_00160EF0: ;
    eax = ecx;
    MEM32(eax + 0x14) = 0x3F800000;
    esp += 4; return; /* ret */

}

/**
 * sub_00160F00
 * Original: 0x00160F00 - 0x00160F11 (17 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00160F00(void)
{

loc_00160F00: ;
    eax = ecx;
    MEM32(eax + 0x14) = 0x3F800000;
    MEM32(eax + 0x20) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_00160F20
 * Original: 0x00160F20 - 0x00160F2B (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00160F20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00160F20: ;
    edx = MEM32(ecx + 0x20);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    esp += 4; return; /* ret */

}

/**
 * sub_00160F30
 * Original: 0x00160F30 - 0x00160F36 (6 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00160F30(void)
{

loc_00160F30: ;
    eax = ecx;
    MEM8(eax) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_00160F40
 * Original: 0x00160F40 - 0x00160F43 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00160F40(void)
{

loc_00160F40: ;
    SET_LO8(eax, MEM8(ecx));
    esp += 4; return; /* ret */

}

/**
 * sub_00160F50
 * Original: 0x00160F50 - 0x00160F54 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00160F50(void)
{

loc_00160F50: ;
    eax = MEM32(ecx + 8);
    esp += 4; return; /* ret */

}

/**
 * sub_00160F60
 * Original: 0x00160F60 - 0x00161045 (229 bytes, 42 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00160F60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00160F60: ;
    eax = MEM32(esp + 4);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00161042; /* ja: above (unsigned >) */

loc_00160F72: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x161048); /* switch: 9 entries, 9 targets */
    if (_jt == 0x00160F79u) goto loc_00160F79;
    if (_jt == 0x00160F91u) goto loc_00160F91;
    if (_jt == 0x00160FA9u) goto loc_00160FA9;
    if (_jt == 0x00160FC1u) goto loc_00160FC1;
    if (_jt == 0x00160FD9u) goto loc_00160FD9;
    if (_jt == 0x00160FF1u) goto loc_00160FF1;
    if (_jt == 0x00161009u) goto loc_00161009;
    if (_jt == 0x0016101Du) goto loc_0016101D;
    if (_jt == 0x00161031u) goto loc_00161031;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00160F79: ;
    MEM32(ecx + 0x40) = 0x3E99999A;
    MEM32(ecx + 0x44) = 0x3F666666;
    MEM32(ecx + 0x48) = 2;
    esp += 8; return; /* ret 4 */

loc_00160F91: ;
    MEM32(ecx + 0x40) = 0x3F19999A;
    MEM32(ecx + 0x44) = 0x3F800000;
    MEM32(ecx + 0x48) = 2;
    esp += 8; return; /* ret 4 */

loc_00160FA9: ;
    MEM32(ecx + 0x48) = 2;
    MEM32(ecx + 0x40) = 0x3F666666;
    MEM32(ecx + 0x44) = 0x3F8CCCCD;
    esp += 8; return; /* ret 4 */

loc_00160FC1: ;
    MEM32(ecx + 0x40) = 0x3E99999A;
    MEM32(ecx + 0x44) = 0x3F666666;
    MEM32(ecx + 0x48) = 4;
    esp += 8; return; /* ret 4 */

loc_00160FD9: ;
    MEM32(ecx + 0x40) = 0x3F19999A;
    MEM32(ecx + 0x44) = 0x3F800000;
    MEM32(ecx + 0x48) = 4;
    esp += 8; return; /* ret 4 */

loc_00160FF1: ;
    MEM32(ecx + 0x48) = 4;
    MEM32(ecx + 0x40) = 0x3F666666;
    MEM32(ecx + 0x44) = 0x3F8CCCCD;
    esp += 8; return; /* ret 4 */

loc_00161009: ;
    MEM32(ecx + 0x40) = 0x3E99999A;
    MEM32(ecx + 0x44) = 0x3F666666;
    MEM32(ecx + 0x48) = edx;
    esp += 8; return; /* ret 4 */

loc_0016101D: ;
    MEM32(ecx + 0x40) = 0x3F19999A;
    MEM32(ecx + 0x44) = 0x3F800000;
    MEM32(ecx + 0x48) = edx;
    esp += 8; return; /* ret 4 */

loc_00161031: ;
    MEM32(ecx + 0x48) = edx;
    MEM32(ecx + 0x40) = 0x3F666666;
    MEM32(ecx + 0x44) = 0x3F8CCCCD;

loc_00161042: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00161090
 * Original: 0x00161090 - 0x001610AA (26 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00161090(void)
{

loc_00161090: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(0x62EBAC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = ZX16(MEM16(eax + 4));
    PUSH32(esp, 0x26);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x001610A8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001610A5u); } /* indirect call */
    }

loc_001610A8: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001610B0
 * Original: 0x001610B0 - 0x001610B7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001610B0(void)
{

loc_001610B0: ;
    eax = MEM32(ecx + 0xC4);
    esp += 4; return; /* ret */

}

/**
 * sub_001610C0
 * Original: 0x001610C0 - 0x001610C7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001610C0(void)
{

loc_001610C0: ;
    eax = MEM32(ecx + 0xC8);
    esp += 4; return; /* ret */

}

/**
 * sub_001610D0
 * Original: 0x001610D0 - 0x001610D7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001610D0(void)
{

loc_001610D0: ;
    eax = MEM32(ecx + 0xD0);
    esp += 4; return; /* ret */

}

/**
 * sub_001610E0
 * Original: 0x001610E0 - 0x001610ED (13 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001610E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001610E0: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = ecx;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_001610F0
 * Original: 0x001610F0 - 0x00161162 (114 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001610F0(void)
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

loc_001610F0: ;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 8);
    fp_push(MEMF(ecx)); /* fld float */
    PUSH32(esp, esi);
    fp_top() = fabs(fp_top()); /* fabs */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    fp_push(MEMF(ecx + 4)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    PUSH32(esp, edi);
    MEMF(esp + 0x10) = (float)fp_top(); /* fst */
    fp_push(MEMF(ecx + 8)); /* fld float */
    esi = 1;
    fp_top() = fabs(fp_top()); /* fabs */
    edi = 2;
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0016112F; /* jp: parity */

loc_00161122: ;
    fp_pop(); /* fstp st(0) */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    edx = 1;

loc_0016112F: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    fp_pop(); /* fstp st(0) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00161145; /* jp: parity */

loc_0016113E: ;
    edi = edx;
    edx = 2;

loc_00161145: ;
    eax = MEM32(esp + 0x14);
    MEM32(eax + edx * 4) = 0;
    edx = MEM32(ecx + edi * 4);
    MEM32(eax + esi * 4) = edx;
    fp_push(MEMF(ecx + esi * 4)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    MEMF(eax + edi * 4) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, edi);
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
 * sub_00161170
 * Original: 0x00161170 - 0x00161194 (36 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00161170(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00161170: ;
    eax = ecx;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = ecx;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    XMM_STORE(eax + 0x10, xmm0); /* movaps */
    XMM_STORE(eax + 0x20, xmm0); /* movaps */
    XMM_STORE(eax + 0x30, xmm0); /* movaps */
    XMM_STORE(eax + 0x40, xmm0); /* movaps */
    XMM_STORE(eax + 0x50, xmm0); /* movaps */
    esp += 4; return; /* ret */

}

/**
 * sub_001611A0
 * Original: 0x001611A0 - 0x001611E6 (70 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001611A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001611A0: ;
    eax = ecx;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = ecx;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    XMM_STORE(eax + 0x10, xmm0); /* movaps */
    XMM_STORE(eax + 0x20, xmm0); /* movaps */
    XMM_STORE(eax + 0x30, xmm0); /* movaps */
    XMM_STORE(eax + 0x40, xmm0); /* movaps */
    XMM_STORE(eax + 0x50, xmm0); /* movaps */
    XMM_STORE(eax + 0x60, xmm0); /* movaps */
    XMM_STORE(eax + 0x70, xmm0); /* movaps */
    MEM32(eax + 0x80) = 0xC0490FDBu;
    MEM32(eax + 0x84) = 0x40490FDB;
    MEM32(eax + 0x88) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_001611F0
 * Original: 0x001611F0 - 0x001611FD (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001611F0(void)
{

loc_001611F0: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x88) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00161200
 * Original: 0x00161200 - 0x0016120D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00161200(void)
{

loc_00161200: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x84) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00161210
 * Original: 0x00161210 - 0x0016121D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00161210(void)
{

loc_00161210: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x80) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00161220
 * Original: 0x00161220 - 0x00161233 (19 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00161220(void)
{

loc_00161220: ;
    ecx = MEM32(0x62EBAC);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1E);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x00161232u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0016122Fu); } /* indirect call */
    }

loc_00161232: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00161240
 * Original: 0x00161240 - 0x00161255 (21 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00161240(void)
{

loc_00161240: ;
    ecx = MEM32(0x62EBAC);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1E);
    PUSH32(esp, 0x50);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x00161254u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00161251u); } /* indirect call */
    }

loc_00161254: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00161260
 * Original: 0x00161260 - 0x00161264 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00161260(void)
{

loc_00161260: ;
    eax = ecx + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_00161270
 * Original: 0x00161270 - 0x00161297 (39 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00161270(void)
{

loc_00161270: ;
    eax = ecx;
    ecx = MEM32(esp + 4);
    xmm0 = XMM_MEM(ecx); /* movaps */
    XMM_STORE(eax, xmm0); /* movaps */
    xmm0 = XMM_MEM(ecx + 0x10); /* movaps */
    XMM_STORE(eax + 0x10, xmm0); /* movaps */
    xmm0 = XMM_MEM(ecx + 0x20); /* movaps */
    XMM_STORE(eax + 0x20, xmm0); /* movaps */
    xmm0 = XMM_MEM(ecx + 0x30); /* movaps */
    XMM_STORE(eax + 0x30, xmm0); /* movaps */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00161300
 * Original: 0x00161300 - 0x00161309 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00161300(void)
{

loc_00161300: ;
    eax = ecx;
    MEM32(eax) = 0x4AE7D4;
    esp += 4; return; /* ret */

}

/**
 * sub_00161310
 * Original: 0x00161310 - 0x00161313 (3 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00161310(void)
{

loc_00161310: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00161380
 * Original: 0x00161380 - 0x0016138A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00161380(void)
{

loc_00161380: ;
    SET_LO8(eax, MEM8(esp + 4));
    MEM8(ecx + 0x18) = LO8(eax);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00161390
 * Original: 0x00161390 - 0x00161397 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00161390(void)
{

loc_00161390: ;
    MEM32(ecx) = 0x4AE714;
    esp += 4; return; /* ret */

}

/**
 * sub_001613A0
 * Original: 0x001613A0 - 0x001613A9 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001613A0(void)
{

loc_001613A0: ;
    eax = ecx;
    MEM32(eax) = 0x4AE854;
    esp += 4; return; /* ret */

}

/**
 * sub_001613B0
 * Original: 0x001613B0 - 0x001613B9 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001613B0(void)
{

loc_001613B0: ;
    eax = ecx;
    MEM32(eax) = 0x4AE858;
    esp += 4; return; /* ret */

}

/**
 * sub_001613C0
 * Original: 0x001613C0 - 0x001613C9 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001613C0(void)
{

loc_001613C0: ;
    eax = ecx;
    MEM32(eax) = 0x4AE85C;
    esp += 4; return; /* ret */

}

/**
 * sub_001613D0
 * Original: 0x001613D0 - 0x001613D9 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001613D0(void)
{

loc_001613D0: ;
    eax = ecx;
    MEM32(eax) = 0x4AE860;
    esp += 4; return; /* ret */

}

/**
 * sub_001613E0
 * Original: 0x001613E0 - 0x001613E9 (9 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001613E0(void)
{

loc_001613E0: ;
    SET_LO8(eax, MEM8(esp + 4));
    MEM8(ecx) = LO8(eax);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001613F0
 * Original: 0x001613F0 - 0x00161405 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001613F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001613F0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = eax;
    MEM8(ecx + 8) = 1;
    MEM32(ecx + 0x70) = eax;
    MEM32(ecx + 0x100) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00161410
 * Original: 0x00161410 - 0x00161417 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00161410(void)
{

loc_00161410: ;
    eax = ecx + 0x80;
    esp += 4; return; /* ret */

}

/**
 * sub_00161420
 * Original: 0x00161420 - 0x00161433 (19 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00161420(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00161420: ;
    SET_LO8(edx, MEM8(ecx + 8));
    eax = 1;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(eax) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00161432; /* je: equal / zero */

loc_0016142C: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00161432; /* jne: not equal / not zero */

loc_00161430: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00161432: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00161440
 * Original: 0x00161440 - 0x00161443 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00161440(void)
{

loc_00161440: ;
    eax = MEM32(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00161450
 * Original: 0x00161450 - 0x00161464 (20 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00161450(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00161450: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = 0x4AE864;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 0xC) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00161470
 * Original: 0x00161470 - 0x00161486 (22 bytes, 7 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00161470(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00161470: ;
    eax = MEM32(ecx + 8);
    eax = MEM32(eax + 0x9C);
    _cf = 0; /* logical op clears CF */
    eax = eax & MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00161490
 * Original: 0x00161490 - 0x0016149A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00161490(void)
{

loc_00161490: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 8) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001614A0
 * Original: 0x001614A0 - 0x001614A4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001614A0(void)
{

loc_001614A0: ;
    eax = MEM32(ecx + 0xC);
    esp += 4; return; /* ret */

}

/**
 * sub_001614B0
 * Original: 0x001614B0 - 0x001614BC (12 bytes, 5 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001614B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001614B0: ;
    eax = MEM32(ecx + 4);
    eax = eax >> 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = ~eax;
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}

/**
 * sub_00161520
 * Original: 0x00161520 - 0x00161537 (23 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00161520(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00161520: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 8) = ecx;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax) = 0x4AE8E4;
    MEM32(eax + 0x20) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00161540
 * Original: 0x00161540 - 0x00161546 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00161540(void)
{

loc_00161540: ;
    eax = 2;
    esp += 4; return; /* ret */

}

/**
 * sub_00161550
 * Original: 0x00161550 - 0x00161554 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00161550(void)
{

loc_00161550: ;
    eax = MEM32(ecx + 0x34);
    esp += 4; return; /* ret */

}

/**
 * sub_00161620
 * Original: 0x00161620 - 0x0016162F (15 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00161620(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00161620: ;
    eax = MEM32(ecx + 0x24);
    _fa = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0xC), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0016162E; /* jne: not equal / not zero */

loc_00161628: ;
    eax = MEM32(ecx + 0x18C);

loc_0016162E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00161630
 * Original: 0x00161630 - 0x00161637 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00161630(void)
{

loc_00161630: ;
    eax = MEM32(ecx + 0x180);
    esp += 4; return; /* ret */

}

/**
 * sub_00161640
 * Original: 0x00161640 - 0x00161647 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00161640(void)
{

loc_00161640: ;
    eax = ecx + 0x1D0;
    esp += 4; return; /* ret */

}

/**
 * sub_00161650
 * Original: 0x00161650 - 0x00161657 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00161650(void)
{

loc_00161650: ;
    eax = MEM32(ecx + 0x194);
    esp += 4; return; /* ret */

}

/**
 * sub_00161660
 * Original: 0x00161660 - 0x0016166D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00161660(void)
{

loc_00161660: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x194) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00161670
 * Original: 0x00161670 - 0x0016168C (28 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00161670(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00161670: ;
    eax = MEM32(ecx + 0x19C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00161689; /* je: equal / zero */

loc_0016167A: ;
    eax = MEM32(ecx + 8);
    _fa = (uint32_t)(MEM8(eax + 8)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 8), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00161689; /* je: equal / zero */

loc_00161683: ;
    eax = 1;
    esp += 4; return; /* ret */

loc_00161689: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00161690
 * Original: 0x00161690 - 0x001616B3 (35 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00161690(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00161690: ;
    eax = MEM32(ecx + 8);
    _fa = (uint32_t)(MEM8(eax + 8)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 8), 2 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001616B0; /* jne: not equal / not zero */

loc_00161699: ;
    edx = MEM32(eax + 0x54);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001616B0; /* jl: less (signed <) */

loc_001616A0: ;
    eax = MEM32(ecx + 4);
    eax = eax >> 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001616B0; /* jne: not equal / not zero */

loc_001616AA: ;
    eax = 1;
    esp += 4; return; /* ret */

loc_001616B0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_001616C0
 * Original: 0x001616C0 - 0x001616CA (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001616C0(void)
{

loc_001616C0: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x60) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00161700
 * Original: 0x00161700 - 0x00161726 (38 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00161700(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00161700: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(0x506310);
    PUSH32(esp, 0x262);
    PUSH32(esp, 0x4AE9A0);
    PUSH32(esp, 0x4AE86C);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00161722u); RECOMP_ABI_CALL(0x001050A0u, sub_001050A0); /* call 0x001050A0 */

loc_00161722: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00161760
 * Original: 0x00161760 - 0x00161764 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00161760(void)
{

loc_00161760: ;
    eax = MEM32(ecx + 0x48);
    esp += 4; return; /* ret */

}

/**
 * sub_00161770
 * Original: 0x00161770 - 0x00161779 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00161770(void)
{

loc_00161770: ;
    eax = ecx;
    MEM32(eax) = 0x4AE740;
    esp += 4; return; /* ret */

}

/**
 * sub_00161780
 * Original: 0x00161780 - 0x001617A3 (35 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00161780(void)
{

loc_00161780: ;
    eax = ecx;
    ecx = MEM32(esp + 4);
    xmm0 = XMM_MEM(ecx); /* movaps */
    XMM_STORE(eax, xmm0); /* movaps */
    xmm0 = XMM_MEM(ecx + 0x10); /* movaps */
    XMM_STORE(eax + 0x10, xmm0); /* movaps */
    SET_LO8(edx, MEM8(ecx + 0x20));
    MEM8(eax + 0x20) = LO8(edx);
    ecx = MEM32(ecx + 0x24);
    MEM32(eax + 0x24) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001617B0
 * Original: 0x001617B0 - 0x001617B7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001617B0(void)
{

loc_001617B0: ;
    MEM32(ecx) = 0x4AE740;
    esp += 4; return; /* ret */

}

/**
 * sub_001617C0
 * Original: 0x001617C0 - 0x001617C7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001617C0(void)
{

loc_001617C0: ;
    eax = MEM32(ecx + 0x24C);
    esp += 4; return; /* ret */

}

/**
 * sub_001617D0
 * Original: 0x001617D0 - 0x001617D7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001617D0(void)
{

loc_001617D0: ;
    eax = MEM32(ecx + 0x21C);
    esp += 4; return; /* ret */

}

/**
 * sub_001617E0
 * Original: 0x001617E0 - 0x001617F9 (25 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001617E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001617E0: ;
    eax = MEM32(ecx + 0x21C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001617EE; /* jne: not equal / not zero */

loc_001617EB: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_001617EE: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x10C);
    eax = eax + ecx + 4;
    esp += 4; return; /* ret */

}

/**
 * sub_00161800
 * Original: 0x00161800 - 0x00161807 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00161800(void)
{

loc_00161800: ;
    eax = MEM32(ecx + 0x224);
    esp += 4; return; /* ret */

}

/**
 * sub_00161810
 * Original: 0x00161810 - 0x00161817 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00161810(void)
{

loc_00161810: ;
    SET_LO8(eax, MEM8(ecx + 0x234));
    esp += 4; return; /* ret */

}

/**
 * sub_00161820
 * Original: 0x00161820 - 0x00161827 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00161820(void)
{

loc_00161820: ;
    eax = MEM32(ecx + 0x25C);
    esp += 4; return; /* ret */

}

/**
 * sub_00161830
 * Original: 0x00161830 - 0x00161837 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00161830(void)
{

loc_00161830: ;
    eax = MEM32(ecx + 0x260);
    esp += 4; return; /* ret */

}

/**
 * sub_00161840
 * Original: 0x00161840 - 0x0016186C (44 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00161840(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00161840: ;
    eax = MEM32(ecx + 0x21C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00161869; /* je: equal / zero */

loc_0016184B: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x10C);
    eax = eax + ecx + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00161869; /* je: equal / zero */

loc_00161859: ;
    SET_LO8(ecx, MEM8(eax + 0xE8));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00161869; /* je: equal / zero */

loc_00161863: ;
    eax = 1;
    esp += 4; return; /* ret */

loc_00161869: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00161870
 * Original: 0x00161870 - 0x00161891 (33 bytes, 9 insns)
 * CC: cdecl, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00161870(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00161870: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x10B0)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x10B0) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0016188C; /* jge: greater or equal (signed >=) */

loc_0016187C: ;
    eax = eax + eax * 2;
    eax = eax << 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax + ecx + 0x290;
    esp += 8; return; /* ret 4 */

loc_0016188C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001618A0
 * Original: 0x001618A0 - 0x001618A7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001618A0(void)
{

loc_001618A0: ;
    eax = MEM32(ecx + 0x10B0);
    esp += 4; return; /* ret */

}

/**
 * sub_001618B0
 * Original: 0x001618B0 - 0x001618D5 (37 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001618B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001618B0: ;
    eax = MEM32(ecx + 0x21C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001618C4; /* jne: not equal / not zero */

loc_001618BB: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = MEM32(eax + 0xEC);
    esp += 4; return; /* ret */

loc_001618C4: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x10C);
    eax = eax + ecx + 4;
    eax = MEM32(eax + 0xEC);
    esp += 4; return; /* ret */

}

/**
 * sub_001618E0
 * Original: 0x001618E0 - 0x00161905 (37 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001618E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001618E0: ;
    eax = MEM32(ecx + 0x21C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001618F4; /* jne: not equal / not zero */

loc_001618EB: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = MEM32(eax + 0xFC);
    esp += 4; return; /* ret */

loc_001618F4: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x10C);
    eax = eax + ecx + 4;
    eax = MEM32(eax + 0xFC);
    esp += 4; return; /* ret */

}

/**
 * sub_00161910
 * Original: 0x00161910 - 0x00161950 (64 bytes, 15 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00161910(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00161910: ;
    eax = MEM32(ecx + 0x21C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00161930; /* jne: not equal / not zero */

loc_0016191B: ;
    eax = MEM32(esp + 4);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x210);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(MEM32(ecx + 0xF0)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(ecx + 0xF0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_00161930: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x10C);
    edx = MEM32(eax + ecx + 0xF4);
    ecx = eax + ecx + 4;
    eax = MEM32(esp + 4);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x210);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00161960
 * Original: 0x00161960 - 0x00161968 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00161960(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00161960: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_001E5F00(); return; /* tail jmp 0x001E5F00 */

}

/**
 * sub_00161970
 * Original: 0x00161970 - 0x00161977 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00161970(void)
{

loc_00161970: ;
    MEM32(ecx) = 0x4AE9EC;
    esp += 4; return; /* ret */

}

/**
 * sub_00161980
 * Original: 0x00161980 - 0x0016199F (31 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00161980(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00161980: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x4AE9EC;
    if (TEST_Z(_fa, _fb)) goto loc_00161999; /* je: equal / zero */

loc_00161990: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00161996u); RECOMP_ABI_CALL(0x000EB425u, sub_000EB425); /* call 0x000EB425 */

loc_00161996: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00161999: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00161A30
 * Original: 0x00161A30 - 0x00161A31 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00161A30(void)
{

loc_00161A30: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00161A40
 * Original: 0x00161A40 - 0x00161A47 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00161A40(void)
{

loc_00161A40: ;
    MEM32(ecx) = 0x4AE714;
    esp += 4; return; /* ret */

}

/**
 * sub_00161A50
 * Original: 0x00161A50 - 0x00161A65 (21 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00161A50(void)
{

loc_00161A50: ;
    ecx = MEM32(0x62EBAC);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1E);
    PUSH32(esp, 0x70);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x00161A64u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00161A61u); } /* indirect call */
    }

loc_00161A64: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00161A70
 * Original: 0x00161A70 - 0x00161A82 (18 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00161A70(void)
{

loc_00161A70: ;
    ecx = MEM32(0x62EBAC);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1E);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00161A81u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00161A7Fu); } /* indirect call */
    }

loc_00161A81: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00161A90
 * Original: 0x00161A90 - 0x00161AA1 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00161A90(void)
{

loc_00161A90: ;
    ecx = MEM32(0x62EBAC);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00161AA0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00161A9Du); } /* indirect call */
    }

loc_00161AA0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00161AB0
 * Original: 0x00161AB0 - 0x00161AC8 (24 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00161AB0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00161AB0: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 0x20) = ecx;
    MEM32(eax + 0x28) = ecx;
    MEM32(eax + 0x2C) = 1;
    MEM32(eax + 0x24) = ecx;
    MEM32(eax + 0x1C) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00161AD0
 * Original: 0x00161AD0 - 0x00161AD4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00161AD0(void)
{

loc_00161AD0: ;
    eax = ecx + 0x30;
    esp += 4; return; /* ret */

}

/**
 * sub_00161AE0
 * Original: 0x00161AE0 - 0x00161AF9 (25 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00161AE0(void)
{

loc_00161AE0: ;
    ecx = MEM32(0x62EBAC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, 0xA);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x00161AF3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00161AF0u); } /* indirect call */
    }

loc_00161AF3: ;
    MEM16(eax + 4) = LO16(esi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00161B00
 * Original: 0x00161B00 - 0x00161B1A (26 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00161B00(void)
{

loc_00161B00: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(0x62EBAC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = ZX16(MEM16(eax + 4));
    PUSH32(esp, 0xA);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00161B18u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00161B15u); } /* indirect call */
    }

loc_00161B18: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00161B20
 * Original: 0x00161B20 - 0x00161B33 (19 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00161B20(void)
{

loc_00161B20: ;
    ecx = MEM32(0x62EBAC);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x00161B32u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00161B2Fu); } /* indirect call */
    }

loc_00161B32: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00161B40
 * Original: 0x00161B40 - 0x00161B51 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00161B40(void)
{

loc_00161B40: ;
    ecx = MEM32(0x62EBAC);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00161B50u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00161B4Du); } /* indirect call */
    }

loc_00161B50: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00161BC0
 * Original: 0x00161BC0 - 0x00161C1A (90 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00161BC0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00161BC0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    edx = MEM32(ecx);
    MEM32(eax) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    edx = MEM32(ecx + 8);
    MEM32(eax + 8) = edx;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    MEM32(eax + 0xC) = edx;
    esi = MEM32(ecx + 0x10);
    MEM32(eax + 0x10) = esi;
    esi = MEM32(ecx + 0x14);
    MEM32(eax + 0x14) = esi;
    esi = MEM32(ecx + 0x18);
    MEM32(eax + 0x18) = esi;
    MEM32(eax + 0x1C) = edx;
    esi = MEM32(ecx + 0x20);
    MEM32(eax + 0x20) = esi;
    esi = MEM32(ecx + 0x24);
    MEM32(eax + 0x24) = esi;
    ecx = MEM32(ecx + 0x28);
    MEM32(eax + 0x28) = ecx;
    MEM32(eax + 0x2C) = edx;
    MEM32(eax + 0x30) = edx;
    MEM32(eax + 0x34) = edx;
    MEM32(eax + 0x38) = edx;
    MEM32(eax + 0x3C) = 0x3F800000;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00161C20
 * Original: 0x00161C20 - 0x00161C6A (74 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00161C20(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00161C20: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    edx = MEM32(ecx);
    MEM32(eax) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    edx = MEM32(ecx + 8);
    MEM32(eax + 8) = edx;
    PUSH32(esp, esi);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 0xC) = edx;
    esi = MEM32(ecx + 0x10);
    MEM32(eax + 0x10) = esi;
    esi = MEM32(ecx + 0x14);
    MEM32(eax + 0x14) = esi;
    esi = MEM32(ecx + 0x18);
    MEM32(eax + 0x18) = esi;
    MEM32(eax + 0x1C) = edx;
    esi = MEM32(ecx + 0x20);
    MEM32(eax + 0x20) = esi;
    esi = MEM32(ecx + 0x24);
    MEM32(eax + 0x24) = esi;
    ecx = MEM32(ecx + 0x28);
    MEM32(eax + 0x28) = ecx;
    MEM32(eax + 0x2C) = edx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00161C70
 * Original: 0x00161C70 - 0x00161D27 (183 bytes, 65 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00161C70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00161C70: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = MEM32(edi + 8);
    esi = ecx;
    ecx = eax;
    if (1) _cf = (int)(((ecx) >> ((1) - 1)) & 1);
    ecx = ecx >> 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_00161C91; /* je: equal / zero */

loc_00161C84: ;
    _fa = (uint32_t)(MEM32(edi + 0x50)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x50), 3 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00161C91; /* jne: not equal / not zero */

loc_00161C8A: ;
    POP32(esp, edi);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00161C91: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 8 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_00161C9F; /* je: equal / zero */

loc_00161C95: ;
    POP32(esp, edi);
    eax = 3;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00161C9F: ;
    eax = MEM32(edi + 0x58);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) goto loc_00161D1D; /* jl: less (signed <) */

loc_00161CA6: ;
    ecx = MEM32(esi + 0x21C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00161CB5; /* jne: not equal / not zero */

loc_00161CB1: ;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00161CBF;

loc_00161CB5: ;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x10C);
    ecx = ecx + esi + 4;

loc_00161CBF: ;
    edx = MEM32(ecx + 0xD0);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x114);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(edx)) >> 32) & 1);
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00161CD5u); RECOMP_ABI_CALL(0x00161C70u, sub_00161C70); /* call 0x00161C70 */

loc_00161CD5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00161D1D; /* je: equal / zero */

loc_00161CD9: ;
    eax = MEM32(esi + 0x21C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00161CE8; /* jne: not equal / not zero */

loc_00161CE4: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00161CF2;

loc_00161CE8: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x10C);
    eax = eax + esi + 4;

loc_00161CF2: ;
    edx = MEM32(edi + 0x58);
    ecx = MEM32(eax + 0xD0);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x114);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(ecx)) >> 32) & 1);
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x00161D0Bu); RECOMP_ABI_CALL(0x00161C70u, sub_00161C70); /* call 0x00161C70 */

loc_00161D0B: ;
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(3));
    eax = eax - 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 0xFFFFFFFEu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, edi);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(4)) >> 32) & 1);
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00161D1D: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00161D30
 * Original: 0x00161D30 - 0x00161D42 (18 bytes, 6 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00161D30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00161D30: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00161D3Au); RECOMP_ABI_CALL(0x00161C70u, sub_00161C70); /* call 0x00161C70 */

loc_00161D3A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00161D50
 * Original: 0x00161D50 - 0x00161D59 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00161D50(void)
{

loc_00161D50: ;
    eax = ecx;
    MEM32(eax) = 0x4AE9EC;
    esp += 4; return; /* ret */

}

/**
 * sub_00161D60
 * Original: 0x00161D60 - 0x0016200D (685 bytes, 230 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00161D60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00161D60: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    eax = MEM32(ebp + 0xEC);
    PUSH32(esp, esi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = ecx;
    if (CMP_LE(_fas, _fbs)) goto loc_00161EEE; /* jle: less or equal (signed <=) */

loc_00161D7D: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_00161D80: ;
    esi = MEM32(ebp + 0xF0);
    eax = MEM32(esi + edi + 0x20);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00161E42; /* je: equal / zero */

loc_00161D94: ;
    ecx = MEM32(esi + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00161DCE; /* je: equal / zero */

loc_00161D9B: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00161DA1u); RECOMP_ABI_CALL(0x001FA330u, sub_001FA330); /* call 0x001FA330 */

loc_00161DA1: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(MEM8(eax + 8)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 8), 2 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00161DCE; /* jne: not equal / not zero */

loc_00161DAA: ;
    ecx = MEM32(eax + 0x54);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00161DCE; /* jl: less (signed <) */

loc_00161DB1: ;
    eax = MEM32(esi + 4);
    eax = eax >> 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00161DCE; /* jne: not equal / not zero */

loc_00161DBB: ;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(ecx + 0x238);
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00161DCEu); RECOMP_ABI_CALL(0x001FA2F0u, sub_001FA2F0); /* call 0x001FA2F0 */

loc_00161DCE: ;
    edx = MEM32(esi + 0xC);
    eax = MEM32(esi + 0x24);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00161DE0; /* jne: not equal / not zero */

loc_00161DD8: ;
    ecx = MEM32(esi + 0x18C);
    goto loc_00161DE2;

loc_00161DE0: ;
    ecx = eax;

loc_00161DE2: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00161E34; /* je: equal / zero */

loc_00161DE6: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00161DF0; /* jne: not equal / not zero */

loc_00161DEA: ;
    eax = MEM32(esi + 0x18C);

loc_00161DF0: ;
    ecx = MEM32(esi + 0x20);
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x00161DFBu); RECOMP_ABI_CALL(0x001FA330u, sub_001FA330); /* call 0x001FA330 */

loc_00161DFB: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(MEM8(eax + 8)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 8), 2 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00161E34; /* jne: not equal / not zero */

loc_00161E04: ;
    ecx = MEM32(eax + 0x54);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00161E34; /* jl: less (signed <) */

loc_00161E0B: ;
    edx = MEM32(esi + 4);
    edx = edx >> 6;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00161E34; /* jne: not equal / not zero */

loc_00161E16: ;
    ecx = MEM32(esi + 0x24);
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xC), ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00161E24; /* jne: not equal / not zero */

loc_00161E1E: ;
    ecx = MEM32(esi + 0x18C);

loc_00161E24: ;
    eax = MEM32(esp + 0x10);
    edx = MEM32(eax + 0x238);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00161E34u); RECOMP_ABI_CALL(0x001FA2F0u, sub_001FA2F0); /* call 0x001FA2F0 */

loc_00161E34: ;
    ecx = MEM32(esi + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00161E42; /* je: equal / zero */

loc_00161E3B: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x00161E42u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00161E3Fu); } /* indirect call */
    }

loc_00161E42: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00161E74; /* je: equal / zero */

loc_00161E49: ;
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00161E60; /* je: equal / zero */

loc_00161E50: ;
    ecx = MEM32(esp + 0x10);
    ecx = MEM32(ecx + 0x224);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00161E60u); RECOMP_ABI_CALL(0x00202B20u, sub_00202B20); /* call 0x00202B20 */

loc_00161E60: ;
    ecx = MEM32(esi + 0xC);
    MEM16(ecx + 6) = MEM16(ecx + 6) - 1;
    _fa = (uint32_t)(MEM16(ecx + 6)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(ecx + 6)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 6), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00161E74; /* jne: not equal / not zero */

loc_00161E6E: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00161E74u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00161E72u); } /* indirect call */
    }

loc_00161E74: ;
    edx = MEM32(esi + 0xC);
    eax = MEM32(esi + 0x24);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00161E86; /* jne: not equal / not zero */

loc_00161E7E: ;
    ecx = MEM32(esi + 0x18C);
    goto loc_00161E88;

loc_00161E86: ;
    ecx = eax;

loc_00161E88: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00161ED9; /* je: equal / zero */

loc_00161E8C: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00161E98; /* jne: not equal / not zero */

loc_00161E90: ;
    ecx = MEM32(esi + 0x18C);
    goto loc_00161E9A;

loc_00161E98: ;
    ecx = eax;

loc_00161E9A: ;
    _fa = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 8), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00161EBA; /* je: equal / zero */

loc_00161EA0: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00161EAA; /* jne: not equal / not zero */

loc_00161EA4: ;
    eax = MEM32(esi + 0x18C);

loc_00161EAA: ;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x14);
    ecx = MEM32(eax + 0x224);
    PUSH32(esp, 0x00161EBAu); RECOMP_ABI_CALL(0x00202B20u, sub_00202B20); /* call 0x00202B20 */

loc_00161EBA: ;
    ecx = MEM32(esi + 0x24);
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xC), ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00161EC8; /* jne: not equal / not zero */

loc_00161EC2: ;
    ecx = MEM32(esi + 0x18C);

loc_00161EC8: ;
    MEM16(ecx + 6) = MEM16(ecx + 6) - 1;
    _fa = (uint32_t)(MEM16(ecx + 6)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(ecx + 6)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 6), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00161ED9; /* jne: not equal / not zero */

loc_00161ED3: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00161ED9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00161ED7u); } /* indirect call */
    }

loc_00161ED9: ;
    eax = MEM32(ebp + 0xEC);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x210) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x210;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00161D80; /* jl: less (signed <) */

loc_00161EEE: ;
    eax = MEM32(ebp + 0xEC);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00161F35; /* jle: less or equal (signed <=) */

loc_00161EFA: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_00161F00: ;
    eax = MEM32(ebp + 0xF0);
    ecx = MEM32(eax + esi + 0x180);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00161F24; /* je: equal / zero */

loc_00161F13: ;
    MEM16(ecx + 6) = MEM16(ecx + 6) - 1;
    _fa = (uint32_t)(MEM16(ecx + 6)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(ecx + 6)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 6), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00161F24; /* jne: not equal / not zero */

loc_00161F1E: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00161F24u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00161F22u); } /* indirect call */
    }

loc_00161F24: ;
    eax = MEM32(ebp + 0xEC);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x210) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x210;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00161F00; /* jl: less (signed <) */

loc_00161F35: ;
    eax = MEM32(ebp + 0xFC);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00161F98; /* jle: less or equal (signed <=) */

loc_00161F41: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00161F43: ;
    esi = MEM32(ebp + 0x100);
    eax = MEM32(esi + edi + 0xC);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00161F7E; /* je: equal / zero */

loc_00161F53: ;
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00161F6A; /* je: equal / zero */

loc_00161F5A: ;
    ecx = MEM32(esp + 0x10);
    ecx = MEM32(ecx + 0x224);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00161F6Au); RECOMP_ABI_CALL(0x00202B20u, sub_00202B20); /* call 0x00202B20 */

loc_00161F6A: ;
    ecx = MEM32(esi + 0xC);
    MEM16(ecx + 6) = MEM16(ecx + 6) - 1;
    _fa = (uint32_t)(MEM16(ecx + 6)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(ecx + 6)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 6), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00161F7E; /* jne: not equal / not zero */

loc_00161F78: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00161F7Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00161F7Cu); } /* indirect call */
    }

loc_00161F7E: ;
    ecx = MEM32(esi + 0x60);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00161F8A; /* je: equal / zero */

loc_00161F85: ;
    PUSH32(esp, 0x00161F8Au); RECOMP_ABI_CALL(0x00213E70u, sub_00213E70); /* call 0x00213E70 */

loc_00161F8A: ;
    eax = MEM32(ebp + 0xFC);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x70;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00161F43; /* jl: less (signed <) */

loc_00161F98: ;
    eax = MEM32(ebp + 0x104);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00162005; /* jle: less or equal (signed <=) */

loc_00161FA4: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00161FB0;

    /* nop */
    /* nop */

loc_00161FB0: ;
    esi = MEM32(ebp + 0x108);
    eax = MEM32(esi + edi + 0xC);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00161FEB; /* je: equal / zero */

loc_00161FC0: ;
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00161FD7; /* je: equal / zero */

loc_00161FC7: ;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x14);
    ecx = MEM32(eax + 0x224);
    PUSH32(esp, 0x00161FD7u); RECOMP_ABI_CALL(0x00202B20u, sub_00202B20); /* call 0x00202B20 */

loc_00161FD7: ;
    ecx = MEM32(esi + 0xC);
    MEM16(ecx + 6) = MEM16(ecx + 6) - 1;
    _fa = (uint32_t)(MEM16(ecx + 6)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(ecx + 6)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 6), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00161FEB; /* jne: not equal / not zero */

loc_00161FE5: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00161FEBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00161FE9u); } /* indirect call */
    }

loc_00161FEB: ;
    ecx = MEM32(esi + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00161FF7; /* je: equal / zero */

loc_00161FF2: ;
    PUSH32(esp, 0x00161FF7u); RECOMP_ABI_CALL(0x00213E70u, sub_00213E70); /* call 0x00213E70 */

loc_00161FF7: ;
    eax = MEM32(ebp + 0x104);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x24;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00161FB0; /* jl: less (signed <) */

loc_00162005: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00162200
 * Original: 0x00162200 - 0x001622BF (191 bytes, 57 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00162200(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00162200: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x21C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001622BA; /* je: equal / zero */

loc_00162215: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x10C);
    eax = eax + esi + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001622BA; /* je: equal / zero */

loc_00162227: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_00162230: ;
    eax = MEM32(esi + 0x21C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0016223F; /* jne: not equal / not zero */

loc_0016223B: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0016224B;

loc_0016223F: ;
    ecx = eax;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x10C);
    ecx = ecx + esi + 4;

loc_0016224B: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0xEC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(ecx + 0xEC) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001622B8; /* jge: greater or equal (signed >=) */

loc_00162253: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0016225C; /* jne: not equal / not zero */

loc_00162258: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00162266;

loc_0016225C: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x10C);
    eax = eax + esi + 4;

loc_00162266: ;
    eax = MEM32(eax + 0xF0);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fa == 0)) goto loc_001622AC; /* je: equal / zero */

loc_00162270: ;
    eax = MEM32(eax + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001622AC; /* je: equal / zero */

loc_00162277: ;
    eax = MEM32(eax + 0x54);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001622AC; /* jle: less or equal (signed <=) */

loc_0016227E: ;
    edx = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    MEM32(esp + 0x14) = 0;
    MEM32(esp + 0x18) = 0x42C80000;
    MEM32(esp + 0x1C) = 0;
    MEM32(esp + 0x20) = 0x3F800000;
    PUSH32(esp, 0x001622A9u); RECOMP_ABI_CALL(0x0010EB80u, sub_0010EB80); /* call 0x0010EB80 */

loc_001622A9: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001622AC: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x210) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x210;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00162230;

loc_001622B8: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_001622BA: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001622C0
 * Original: 0x001622C0 - 0x001622C8 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001622C0(void)
{

loc_001622C0: ;
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x001622C7u); RECOMP_ABI_CALL(0x00215310u, sub_00215310); /* call 0x00215310 */

loc_001622C7: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001622D0
 * Original: 0x001622D0 - 0x001622D7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001622D0(void)
{

loc_001622D0: ;
    MEM32(ecx) = 0x4AE714;
    esp += 4; return; /* ret */

}

/**
 * sub_001622E0
 * Original: 0x001622E0 - 0x0016235E (126 bytes, 34 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001622E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001622E0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_MEM(ecx + 0x1D0); /* movaps */
    eax = MEM32(ebp + 8);
    XMM_STORE(eax, xmm0); /* movaps */
    xmm0 = XMM_MEM(ecx + 0x1E0); /* movaps */
    XMM_STORE(eax + 0x10, xmm0); /* movaps */
    xmm0 = XMM_MEM(ecx + 0x1F0); /* movaps */
    XMM_STORE(eax + 0x20, xmm0); /* movaps */
    xmm0 = XMM_MEM(ecx + 0x200); /* movaps */
    XMM_STORE(eax + 0x30, xmm0); /* movaps */
    ecx = MEM32(ecx + 0x194);
    edx = MEM32(ecx + 4);
    edx = edx >> 6;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00162358; /* je: equal / zero */

loc_00162328: ;
    xmm1 = XMM_MEM(eax); /* movaps */
    edx = esp;
    XMM_STORE(esp, xmm1); /* movaps */
    xmm1 = XMM_MEM(eax + 0x10); /* movaps */
    _fb = (uint32_t)(0x1D0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x1D0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    XMM_STORE(esp + 0x14, xmm1); /* movaps */
    xmm1 = XMM_MEM(eax + 0x20); /* movaps */
    PUSH32(esp, ecx);
    ecx = eax;
    XMM_STORE(esp + 0x28, xmm1); /* movaps */
    XMM_STORE(esp + 0x38, xmm0); /* movaps */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00162358u); RECOMP_ABI_CALL(0x002A7EE0u, sub_002A7EE0); /* call 0x002A7EE0 */

loc_00162358: ;
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00162360
 * Original: 0x00162360 - 0x001623BB (91 bytes, 22 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00162360(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00162360: ;
    eax = MEM32(esp + 4);
    edx = MEM32(ecx + 0x10B0);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001623B5; /* jge: greater or equal (signed >=) */

loc_00162371: ;
    eax = eax + eax * 2;
    eax = eax << 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = eax + ecx + 0x270;
    eax = MEM32(ecx + 0xB0);
    edx = MEM32(eax + 0x80);
    MEM32(esp) = edx;
    edx = MEM32(eax + 0x84);
    MEM32(esp + 4) = edx;
    eax = MEM32(eax + 0x88);
    edx = esp;
    PUSH32(esp, edx);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 0x10) = 0x3F800000;
    PUSH32(esp, 0x001623B5u); RECOMP_ABI_CALL(0x001E63F0u, sub_001E63F0); /* call 0x001E63F0 */

loc_001623B5: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001623C0
 * Original: 0x001623C0 - 0x001623D2 (18 bytes, 6 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001623C0(void)
{

loc_001623C0: ;
    edx = MEM32(esp + 8);
    eax = ecx;
    ecx = MEM32(esp + 4);
    MEM32(eax) = ecx;
    MEM32(eax + 4) = edx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001623E0
 * Original: 0x001623E0 - 0x0016242B (75 bytes, 23 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001623E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001623E0: ;
    eax = MEM32(esp + 4);
    edx = MEM32(ecx + 0x10B0);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00162425; /* jge: greater or equal (signed >=) */

loc_001623F1: ;
    eax = eax + eax * 2;
    PUSH32(esp, esi);
    eax = eax << 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = eax + ecx;
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, ecx);
    edx = esp + 8;
    PUSH32(esp, edx);
    MEM8(esi + 0x27C) = 0;
    PUSH32(esp, 0x00162411u); RECOMP_ABI_CALL(0x0015BBC0u, sub_0015BBC0); /* call 0x0015BBC0 */

loc_00162411: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp + 4;
    PUSH32(esp, eax);
    ecx = esi + 0x290;
    PUSH32(esp, 0x00162424u); RECOMP_ABI_CALL(0x001E64B0u, sub_001E64B0); /* call 0x001E64B0 */

loc_00162424: ;
    POP32(esp, esi);

loc_00162425: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00162430
 * Original: 0x00162430 - 0x0016247F (79 bytes, 27 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00162430(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00162430: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x20);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x00162441u); RECOMP_ABI_CALL(0x0015BE90u, sub_0015BE90); /* call 0x0015BE90 */

loc_00162441: ;
    eax = MEM32(esp + 0x20);
    ecx = MEM32(esi + 0x10B0);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00162477; /* jge: greater or equal (signed >=) */

loc_00162452: ;
    edx = eax + eax * 2;
    ecx = esp + 8;
    edx = edx << 6;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, ecx);
    ecx = edx + esi + 0x290;
    PUSH32(esp, 0x00162469u); RECOMP_ABI_CALL(0x001E6080u, sub_001E6080); /* call 0x001E6080 */

loc_00162469: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00162474u); RECOMP_ABI_CALL(0x0015BBA0u, sub_0015BBA0); /* call 0x0015BBA0 */

loc_00162474: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00162477: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00162480
 * Original: 0x00162480 - 0x0016248F (15 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00162480(void)
{

loc_00162480: ;
    eax = ecx;
    ecx = MEM32(esp + 4);
    xmm0 = XMM_MEM(ecx); /* movaps */
    XMM_STORE(eax, xmm0); /* movaps */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00162490
 * Original: 0x00162490 - 0x001624E2 (82 bytes, 31 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00162490(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00162490: ;
    eax = MEM32(ecx + 0x21C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_001624D9; /* je: equal / zero */

loc_0016249F: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x10C);
    ecx = eax + ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001624D9; /* je: equal / zero */

loc_001624AD: ;
    edi = MEM32(esp + 0x14);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001624B5: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0xEC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ecx + 0xEC) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001624D9; /* jge: greater or equal (signed >=) */

loc_001624BD: ;
    eax = MEM32(ecx + 0xF0);
    ebx = MEM32(eax + edx + 8);
    ebp = MEM32(ebx + 0x54);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001624DB; /* je: equal / zero */

loc_001624D0: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x210) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x210;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_001624B5;

loc_001624D9: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001624DB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001624F0
 * Original: 0x001624F0 - 0x00162544 (84 bytes, 33 insns)
 * CC: cdecl, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001624F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001624F0: ;
    eax = MEM32(ecx + 0x21C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016253F; /* je: equal / zero */

loc_001624FB: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x10C);
    ecx = eax + ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016253F; /* je: equal / zero */

loc_00162509: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, ebx);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebp);

loc_00162515: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0xFC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ecx + 0xFC) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00162536; /* jge: greater or equal (signed >=) */

loc_0016251D: ;
    eax = MEM32(ecx + 0x100);
    ebx = MEM32(eax + edx + 8);
    ebp = MEM32(ebx + 0x54);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00162538; /* je: equal / zero */

loc_00162530: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x70;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00162515;

loc_00162536: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00162538: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0016253F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00162550
 * Original: 0x00162550 - 0x0016256F (31 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00162550(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00162550: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x0016255Eu); RECOMP_ABI_CALL(0x00162490u, sub_00162490); /* call 0x00162490 */

loc_0016255E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0016256A; /* jne: not equal / not zero */

loc_00162562: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0016256Au); RECOMP_ABI_CALL(0x001624F0u, sub_001624F0); /* call 0x001624F0 */

loc_0016256A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00162570
 * Original: 0x00162570 - 0x00162612 (162 bytes, 51 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00162570(void)
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

loc_00162570: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ecx + 0x70);
    fp_push(MEMF(ebp + 8)); /* fld float */
    ecx = MEM32(eax + 0xC);
    edx = MEM32(ecx + 0x3C);
    xmm1 = XMM_MEM(edx + 0x50); /* movaps */
    xmm0 = xmm1; /* movaps */
    xmm0 = XMM_MUL(xmm0, xmm1); /* mulps */
    xmm2 = xmm0; /* movaps */
    xmm2 = XMM_SHUFFLE(xmm2, xmm0, 0x55); /* shufps */
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    xmm3 = xmm0; /* movaps */
    xmm3 = XMM_SHUFFLE(xmm3, xmm0, 0xAA); /* shufps */
    xmm0 = xmm3; /* movaps */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    XMM_STORE(esp + 0xC, xmm0); /* movaps */
    xmm0.f[0] = sqrtf(xmm0.f[0]); /* sqrtss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_MEM(esp + 0xC); /* movaps */
    ecx = esp + 8;
    MEMF(ecx) = xmm0.f[0]; /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(esp + 8)); /* fdiv dword ptr [esp + 8] */
    PUSH32(esp, esi);
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm2 = xmm0; /* movaps */
    xmm2 = XMM_SHUFFLE(xmm2, xmm0, 0); /* shufps */
    xmm2 = XMM_MUL(xmm2, xmm1); /* mulps */
    XMM_STORE(esp + 0x10, xmm2); /* movaps */
    esi = MEM32(eax + 0xC);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001625ECu); RECOMP_ABI_CALL(0x001F9DD0u, sub_001F9DD0); /* call 0x001F9DD0 */

loc_001625EC: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001625FE; /* jne: not equal / not zero */

loc_001625F0: ;
    eax = MEM32(esi + 0x44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001625FE; /* je: equal / zero */

loc_001625F7: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001625FEu); RECOMP_ABI_CALL(0x001F9DE0u, sub_001F9DE0); /* call 0x001F9DE0 */

loc_001625FE: ;
    ecx = MEM32(esi + 0x3C);
    edx = MEM32(ecx);
    eax = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x0016260Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00162608u); } /* indirect call */
    }

loc_0016260B: ;
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
 * sub_00162620
 * Original: 0x00162620 - 0x001626C8 (168 bytes, 52 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00162620(void)
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

loc_00162620: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ecx + 0x70);
    fp_push(MEMF(ebp + 8)); /* fld float */
    ecx = MEM32(eax + 0xC);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x49F9D0)); /* fmul dword ptr [0x49f9d0] */
    edx = MEM32(ecx + 0x3C);
    xmm1 = XMM_MEM(edx + 0x40); /* movaps */
    xmm0 = xmm1; /* movaps */
    xmm0 = XMM_MUL(xmm0, xmm1); /* mulps */
    xmm2 = xmm0; /* movaps */
    xmm2 = XMM_SHUFFLE(xmm2, xmm0, 0x55); /* shufps */
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    xmm3 = xmm0; /* movaps */
    xmm3 = XMM_SHUFFLE(xmm3, xmm0, 0xAA); /* shufps */
    xmm0 = xmm3; /* movaps */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    XMM_STORE(esp + 0xC, xmm0); /* movaps */
    xmm0.f[0] = sqrtf(xmm0.f[0]); /* sqrtss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_MEM(esp + 0xC); /* movaps */
    ecx = esp + 8;
    MEMF(ecx) = xmm0.f[0]; /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(esp + 8)); /* fdiv dword ptr [esp + 8] */
    PUSH32(esp, esi);
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm2 = xmm0; /* movaps */
    xmm2 = XMM_SHUFFLE(xmm2, xmm0, 0); /* shufps */
    xmm2 = XMM_MUL(xmm2, xmm1); /* mulps */
    XMM_STORE(esp + 0x10, xmm2); /* movaps */
    esi = MEM32(eax + 0xC);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001626A2u); RECOMP_ABI_CALL(0x001F9DD0u, sub_001F9DD0); /* call 0x001F9DD0 */

loc_001626A2: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001626B4; /* jne: not equal / not zero */

loc_001626A6: ;
    eax = MEM32(esi + 0x44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001626B4; /* je: equal / zero */

loc_001626AD: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001626B4u); RECOMP_ABI_CALL(0x001F9DE0u, sub_001F9DE0); /* call 0x001F9DE0 */

loc_001626B4: ;
    ecx = MEM32(esi + 0x3C);
    edx = MEM32(ecx);
    eax = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x50); PUSH32(esp, 0x001626C1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001626BEu); } /* indirect call */
    }

loc_001626C1: ;
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
 * sub_00162629
 * Original: 0x00162629 - 0x001626C8 (159 bytes, 48 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00162629(void)
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

loc_00162629: ;
    eax = MEM32(ecx + 0x70);
    fp_push(MEMF(ebp + 8)); /* fld float */
    ecx = MEM32(eax + 0xC);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x49F9D0)); /* fmul dword ptr [0x49f9d0] */
    edx = MEM32(ecx + 0x3C);
    xmm1 = XMM_MEM(edx + 0x40); /* movaps */
    xmm0 = xmm1; /* movaps */
    xmm0 = XMM_MUL(xmm0, xmm1); /* mulps */
    xmm2 = xmm0; /* movaps */
    xmm2 = XMM_SHUFFLE(xmm2, xmm0, 0x55); /* shufps */
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    xmm3 = xmm0; /* movaps */
    xmm3 = XMM_SHUFFLE(xmm3, xmm0, 0xAA); /* shufps */
    xmm0 = xmm3; /* movaps */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    XMM_STORE(esp + 0xC, xmm0); /* movaps */
    xmm0.f[0] = sqrtf(xmm0.f[0]); /* sqrtss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_MEM(esp + 0xC); /* movaps */
    ecx = esp + 8;
    MEMF(ecx) = xmm0.f[0]; /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(esp + 8)); /* fdiv dword ptr [esp + 8] */
    PUSH32(esp, esi);
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm2 = xmm0; /* movaps */
    xmm2 = XMM_SHUFFLE(xmm2, xmm0, 0); /* shufps */
    xmm2 = XMM_MUL(xmm2, xmm1); /* mulps */
    XMM_STORE(esp + 0x10, xmm2); /* movaps */
    esi = MEM32(eax + 0xC);
    ecx = esi;
    PUSH32(esp, 0x001626A2u); RECOMP_ABI_CALL(0x001F9DD0u, sub_001F9DD0); /* call 0x001F9DD0 */

loc_001626A2: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001626B4; /* jne: not equal / not zero */

loc_001626A6: ;
    eax = MEM32(esi + 0x44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001626B4; /* je: equal / zero */

loc_001626AD: ;
    ecx = esi;
    PUSH32(esp, 0x001626B4u); RECOMP_ABI_CALL(0x001F9DE0u, sub_001F9DE0); /* call 0x001F9DE0 */

loc_001626B4: ;
    ecx = MEM32(esi + 0x3C);
    edx = MEM32(ecx);
    eax = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x50); PUSH32(esp, 0x001626C1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001626BEu); } /* indirect call */
    }

loc_001626C1: ;
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
 * sub_001626D0
 * Original: 0x001626D0 - 0x001627D8 (264 bytes, 76 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001626D0(void)
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

loc_001626D0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x58) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x58;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0xC);
    esi = ecx;
    eax = esi + 0xC0;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001626EDu); RECOMP_ABI_CALL(0x0015C280u, sub_0015C280); /* call 0x0015C280 */

loc_001626ED: ;
    eax = MEM32(ebp + 0x10);
    ecx = MEM32(ebp + 8);
    MEM32(esi + 4) = eax;
    MEM32(esi) = eax;
    MEM32(esi + 0x70) = ecx;
    fp_push(MEMF(edi + 0x30)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x49F9D0)); /* fmul dword ptr [0x49f9d0] */
    eax = esi + 0x1C;
    PUSH32(esp, eax);
    edx = esi + 0xC;
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, edx);
    fp_push(MEMF(edi + 0x34)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x49F9D0)); /* fmul dword ptr [0x49f9d0] */
    MEMF(esi + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edi + 0x38)); /* fld float */
    MEM32(esi + 0x28) = 0x3F800000;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x49F9D0)); /* fmul dword ptr [0x49f9d0] */
    MEMF(esi + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00162732u); RECOMP_ABI_CALL(0x0015BDF0u, sub_0015BDF0); /* call 0x0015BDF0 */

loc_00162732: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x60) = eax;
    MEM32(esi + 0x64) = eax;
    MEM32(esi + 0x68) = eax;
    MEM32(esi + 0x6C) = 0x3F800000;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    XMM_STORE(esi + 0x50, xmm0); /* movaps */
    eax = MEM32(edi);
    ecx = MEM32(edi + 4);
    edx = MEM32(edi + 8);
    MEM32(esp + 0x40) = eax;
    eax = MEM32(edi + 0x10);
    MEM32(esp + 0x44) = ecx;
    ecx = MEM32(edi + 0x14);
    MEM32(esp + 0x50) = eax;
    eax = MEM32(edi + 0x20);
    MEM32(esp + 0x48) = edx;
    edx = MEM32(edi + 0x18);
    MEM32(esp + 0x54) = ecx;
    ecx = MEM32(edi + 0x24);
    MEM32(esp + 0x60) = eax;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x48) = edx;
    edx = MEM32(edi + 0x28);
    eax = esp + 0x30;
    MEM32(esp + 0x54) = ecx;
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    XMM_STORE(esp + 0x24, xmm0); /* movaps */
    MEM32(esp + 0x40) = 0;
    MEM32(esp + 0x50) = 0;
    MEM32(esp + 0x5C) = edx;
    MEM32(esp + 0x60) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001627B7u); RECOMP_ABI_CALL(0x002A77C0u, sub_002A77C0); /* call 0x002A77C0 */

loc_001627B7: ;
    xmm0 = XMM_MEM(esp + 0x10); /* movaps */
    XMM_STORE(esi + 0x30, xmm0); /* movaps */
    xmm0 = XMM_MEM(esp + 0x20); /* movaps */
    XMM_STORE(esi + 0x40, xmm0); /* movaps */
    POP32(esp, edi);
    MEM32(esi + 0x4C) = 0x3F800000;
    POP32(esp, esi);
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
 * sub_001627E0
 * Original: 0x001627E0 - 0x001627F2 (18 bytes, 6 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001627E0(void)
{

loc_001627E0: ;
    edx = MEM32(esp + 8);
    eax = ecx;
    SET_LO8(ecx, MEM8(esp + 4));
    MEM8(eax) = LO8(ecx);
    MEM32(eax + 4) = edx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00162800
 * Original: 0x00162800 - 0x00162837 (55 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00162800(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00162800: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    ecx = MEM32(esi + 0xC);
    eax = MEM32(ecx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00162814; /* je: equal / zero */

loc_0016280F: ;
    PUSH32(esp, 0x00162814u); RECOMP_ABI_CALL(0x001F9DE0u, sub_001F9DE0); /* call 0x001F9DE0 */

loc_00162814: ;
    eax = MEM32(esi + 8);
    ecx = MEM32(eax + 0x54);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00162835; /* jl: less (signed <) */

loc_0016281E: ;
    eax = MEM32(esp + 0xC);
    edx = MEM32(eax + 4);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ecx, MEM8(eax));
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    ecx = esi + 0x70;
    PUSH32(esp, 0x00162835u); RECOMP_ABI_CALL(0x001659C0u, sub_001659C0); /* call 0x001659C0 */

loc_00162835: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00162840
 * Original: 0x00162840 - 0x00162843 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00162840(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00162840: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00162850
 * Original: 0x00162850 - 0x00162853 (3 bytes, 1 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00162850(void)
{

loc_00162850: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00162860
 * Original: 0x00162860 - 0x00162863 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00162860(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00162860: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00162870
 * Original: 0x00162870 - 0x001628BB (75 bytes, 26 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00162870(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00162870: ;
    PUSH32(esp, ebx);
    ebx = ecx;
    eax = MEM32(ebx + 0x10B0);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001628B6; /* jle: less or equal (signed <=) */

loc_00162880: ;
    PUSH32(esp, esi);
    esi = ebx + 0x290;
    goto loc_00162890;

    /* nop */

loc_00162890: ;
    eax = MEM32(esi + 0x90);
    SET_LO8(ecx, MEM8(eax + 0x70));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001628A4; /* jne: not equal / not zero */

loc_0016289D: ;
    ecx = esi;
    PUSH32(esp, 0x001628A4u); RECOMP_ABI_CALL(0x001E5F40u, sub_001E5F40); /* call 0x001E5F40 */

loc_001628A4: ;
    eax = MEM32(ebx + 0x10B0);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xC0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xC0;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00162890; /* jl: less (signed <) */

loc_001628B5: ;
    POP32(esp, esi);

loc_001628B6: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001628C0
 * Original: 0x001628C0 - 0x001628CB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001628C0(void)
{

loc_001628C0: ;
    MEM32(ecx + 0x10B0) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_001628D0
 * Original: 0x001628D0 - 0x00162954 (132 bytes, 38 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001628D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001628D0: ;
    eax = MEM32(ecx + 0x21C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    PUSH32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_0016294E; /* je: equal / zero */

loc_001628DC: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x10C);
    eax = eax + ecx + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016294E; /* je: equal / zero */

loc_001628EA: ;
    edx = MEM32(esp + 8);
    esi = MEM32(edx + 0x68);
    eax = MEM32(ecx + 0x10B0);
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0016294E; /* jl: less (signed <) */

loc_001628FC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x13) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x13 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0016294E; /* jge: greater or equal (signed >=) */

loc_00162901: ;
    esi = eax + 1;
    MEM32(ecx + 0x10B0) = esi;
    esi = eax + eax * 2;
    esi = esi << 6;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = MEM32(esp + 0x10);
    MEM32(ecx + 0x320) = edx;
    edx = esi;
    edx = edx >> 1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx & 0xFFFFFF01u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    MEM32(ecx + 0x274) = esi;
    MEM32(ecx + 0x270) = eax;
    MEM32(ecx + 0x278) = 0xB;
    PUSH32(esp, eax);
    _fb = (uint32_t)(0x290) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x290;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0016294Eu); RECOMP_ABI_CALL(0x001E69E0u, sub_001E69E0); /* call 0x001E69E0 */

loc_0016294E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00162960
 * Original: 0x00162960 - 0x00162979 (25 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00162960(void)
{

loc_00162960: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x0016296Du); RECOMP_ABI_CALL(0x00204760u, sub_00204760); /* call 0x00204760 */

loc_0016296D: ;
    MEM32(esi) = 0x4AEB80;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00162980
 * Original: 0x00162980 - 0x001629E8 (104 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00162980(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00162980: ;
    eax = MEM32(esp + 4);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x3238);
    _fb = (uint32_t)(0x5D1AB8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x5D1AB8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(eax + 0x2840);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001629E7; /* je: equal / zero */

loc_00162999: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    ecx = MEM32(esi + 8);
    ecx = MEM32(ecx + 0x9C);
    edx = ecx;
    edx = edx >> 5;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001629BC; /* je: equal / zero */

loc_001629B1: ;
    eax = MEM32(eax + 0x2840);
    MEM32(eax + 8) = MEM32(eax + 8) + 1;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001629BC: ;
    ecx = ecx >> 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001629E6; /* je: equal / zero */

loc_001629C3: ;
    ecx = MEM32(eax + 0x2840);
    MEM32(ecx + 0x14) = MEM32(ecx + 0x14) + 1;
    _fa = (uint32_t)(MEM32(ecx + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = MEM32(eax + 0x2840);
    edx = MEM32(ecx + 0x18);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001629E6; /* je: equal / zero */

loc_001629D9: ;
    eax = MEM32(eax + 0x68);
    PUSH32(esp, eax);
    edx = ecx;
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x001629E3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001629E0u); } /* indirect call */
    }

loc_001629E3: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001629E6: ;
    POP32(esp, esi);

loc_001629E7: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001629F0
 * Original: 0x001629F0 - 0x00162A66 (118 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001629F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001629F0: ;
    eax = MEM32(esp + 4);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x3238);
    _fb = (uint32_t)(0x5D1AB8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x5D1AB8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x2840);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00162A64; /* je: equal / zero */

loc_00162A0A: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    ecx = MEM32(edi + 8);
    ecx = MEM32(ecx + 0x9C);
    edx = ecx;
    edx = edx >> 5;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00162A35; /* je: equal / zero */

loc_00162A22: ;
    ecx = MEM32(esi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00162A63; /* jle: less or equal (signed <=) */

loc_00162A29: ;
    eax = esi;
    ecx = MEM32(eax + 8);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(eax + 8) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00162A35: ;
    ecx = ecx >> 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00162A63; /* je: equal / zero */

loc_00162A3C: ;
    ecx = MEM32(esi + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00162A4C; /* jle: less or equal (signed <=) */

loc_00162A43: ;
    ecx = MEM32(eax + 0x2840);
    MEM32(ecx + 0x14) = MEM32(ecx + 0x14) - 1;
    _fa = (uint32_t)(MEM32(ecx + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00162A4C: ;
    ecx = MEM32(eax + 0x2840);
    ecx = MEM32(ecx + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00162A63; /* je: equal / zero */

loc_00162A59: ;
    edx = MEM32(eax + 0x68);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = ecx; PUSH32(esp, 0x00162A60u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00162A5Eu); } /* indirect call */
    }

loc_00162A60: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00162A63: ;
    POP32(esp, edi);

loc_00162A64: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00162A70
 * Original: 0x00162A70 - 0x00162A75 (5 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00162A70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00162A70: ;
    g_seh_ebp = ebp; sub_002047E0(); return; /* tail jmp 0x002047E0 */

}

/**
 * sub_00162A80
 * Original: 0x00162A80 - 0x00162A85 (5 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00162A80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00162A80: ;
    g_seh_ebp = ebp; sub_00204600(); return; /* tail jmp 0x00204600 */

}

/**
 * sub_00162A90
 * Original: 0x00162A90 - 0x00162B83 (243 bytes, 89 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00162A90(void)
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

loc_00162A90: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _cf = 0; /* logical op clears CF */
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x44));
    esp = esp - 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00162AAE; /* je: equal / zero */

loc_00162AA5: ;
    esi = eax + -16;
    MEM32(esp + 0x18) = esi;
    goto loc_00162ABA;

loc_00162AAE: ;
    MEM32(esp + 0x18) = 0;
    esi = MEM32(esp + 0x18);

loc_00162ABA: ;
    ebx = MEM32(esi);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00162B74; /* je: equal / zero */

loc_00162AC4: ;
    eax = MEM32(ebx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(esp + 0x1C) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00162B74; /* je: equal / zero */

loc_00162AD3: ;
    ecx = MEM32(edi + 0x44);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00162B01; /* jne: not equal / not zero */

loc_00162ADA: ;
    SET_LO8(edx, MEM8(eax + 4));
    SET_LO8(ecx, 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(edx) (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_00162B74; /* jne: not equal / not zero */

loc_00162AE7: ;
    eax = MEM32(eax + 8);
    _fa = (uint32_t)(MEM8(eax + 0x9C)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x9C), LO8(ecx) (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_00162B13; /* jne: not equal / not zero */

loc_00162AF2: ;
    eax = MEM32(edi + 0x40);
    fp_push(MEMF(eax + 0x14)); /* fld float */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_00162B01: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = ecx; PUSH32(esp, 0x00162B04u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00162B02u); } /* indirect call */
    }

loc_00162B04: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    SET_LO8(eax, _cf ? 0xFFFFFFFF : 0); /* sbb self (CF extend) */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sbb result */
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    MEM8(esp + 0x17) = LO8(eax);
    if ((_fa != 0)) goto loc_00162B74; /* jne: not equal / not zero */

loc_00162B13: ;
    esi = MEM32(esi + 8);
    ecx = edi + 0x10;
    PUSH32(esp, ecx);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0x20)) >> 32) & 1);
    esi = esi + 0x20;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    ecx = esp + 0x28;
    MEM32(esp + 0x4C) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00162B2Fu); RECOMP_ABI_CALL(0x002A7BD0u, sub_002A7BD0); /* call 0x002A7BD0 */

loc_00162B2F: ;
    edx = edi + 0x20;
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    ecx = esp + 0x38;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00162B3Du); RECOMP_ABI_CALL(0x002A7BD0u, sub_002A7BD0); /* call 0x002A7BD0 */

loc_00162B3D: ;
    ecx = MEM32(edi + 0x40);
    eax = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    edx = esp + 0x24;
    PUSH32(esp, edx);
    ecx = ebx;
    MEM32(esp + 0x4C) = 0;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x00162B55u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00162B52u); } /* indirect call */
    }

loc_00162B55: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00162B74; /* je: equal / zero */

loc_00162B59: ;
    eax = MEM32(edi + 0x40);
    ecx = MEM32(esp + 0x18);
    MEM32(eax + 0x20) = ecx;
    ecx = MEM32(edi + 0x40);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00162B6Du); RECOMP_ABI_CALL(0x002A7C30u, sub_002A7C30); /* call 0x002A7C30 */

loc_00162B6D: ;
    edx = MEM32(esp + 0x1C);
    MEM32(edi + 0x48) = edx;

loc_00162B74: ;
    eax = MEM32(edi + 0x40);
    fp_push(MEMF(eax + 0x14)); /* fld float */
    POP32(esp, edi);
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
 * sub_00162B90
 * Original: 0x00162B90 - 0x00162B9A (10 bytes, 3 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00162B90(void)
{

loc_00162B90: ;
    eax = MEM32(esp + 4);
    MEM8(eax) = 0;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00162BA0
 * Original: 0x00162BA0 - 0x00162BA3 (3 bytes, 1 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00162BA0(void)
{

loc_00162BA0: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00162BB0
 * Original: 0x00162BB0 - 0x00162C22 (114 bytes, 37 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00162BB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00162BB0: ;
    eax = MEM32(ecx + 0x21C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00162C1F; /* je: equal / zero */

loc_00162BBB: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x10C);
    eax = eax + ecx + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00162C1F; /* je: equal / zero */

loc_00162BC9: ;
    SET_LO8(edx, MEM8(eax + 0xE8));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00162C1F; /* je: equal / zero */

loc_00162BD3: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x10B0)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x10B0) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00162C1F; /* jge: greater or equal (signed >=) */

loc_00162BDF: ;
    eax = eax + eax * 2;
    eax = eax << 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = eax + ecx + 0x270;
    PUSH32(esp, esi);
    esi = MEM32(edx + 8);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = esi;
    eax = eax | edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    MEM32(edx + 8) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00162C1D; /* je: equal / zero */

loc_00162C00: ;
    eax = edx + 0x20;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00162C1D; /* je: equal / zero */

loc_00162C08: ;
    esi = MEM32(ecx + 0x224);
    ecx = eax;
    PUSH32(esp, 0x00162C15u); RECOMP_ABI_CALL(0x001E5EE0u, sub_001E5EE0); /* call 0x001E5EE0 */

loc_00162C15: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00162C1Du); RECOMP_ABI_CALL(0x001FFD50u, sub_001FFD50); /* call 0x001FFD50 */

loc_00162C1D: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_00162C1F: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00162C30
 * Original: 0x00162C30 - 0x00162CA0 (112 bytes, 35 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00162C30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00162C30: ;
    eax = MEM32(ecx + 0x21C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00162C9D; /* je: equal / zero */

loc_00162C3B: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x10C);
    eax = eax + ecx + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00162C9D; /* je: equal / zero */

loc_00162C49: ;
    SET_LO8(edx, MEM8(eax + 0xE8));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00162C9D; /* je: equal / zero */

loc_00162C53: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x10B0)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x10B0) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00162C9D; /* jge: greater or equal (signed >=) */

loc_00162C5F: ;
    eax = eax + eax * 2;
    eax = eax << 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = eax + ecx + 0x270;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = MEM32(edx + 8);
    eax = ~eax;
    eax = eax & esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    MEM32(edx + 8) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00162C9C; /* je: equal / zero */

loc_00162C7F: ;
    eax = edx + 0x20;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00162C9C; /* je: equal / zero */

loc_00162C87: ;
    esi = MEM32(ecx + 0x224);
    ecx = eax;
    PUSH32(esp, 0x00162C94u); RECOMP_ABI_CALL(0x001E5EE0u, sub_001E5EE0); /* call 0x001E5EE0 */

loc_00162C94: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00162C9Cu); RECOMP_ABI_CALL(0x001FFD50u, sub_001FFD50); /* call 0x001FFD50 */

loc_00162C9C: ;
    POP32(esp, esi);

loc_00162C9D: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00162CA0
 * Original: 0x00162CA0 - 0x00162CAB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00162CA0(void)
{

loc_00162CA0: ;
    MEM32(ecx + 0x10B0) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_00162CB0
 * Original: 0x00162CB0 - 0x00162CB5 (5 bytes, 2 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00162CB0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00162CB0: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00162CC0
 * Original: 0x00162CC0 - 0x00162CF1 (49 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00162CC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00162CC0: ;
    ecx = MEM32(ecx + 0xC);
    eax = MEM32(ecx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00162CEE; /* je: equal / zero */

loc_00162CCA: ;
    SET_LO8(edx, MEM8(ecx + 0x40));
    SET_LO8(eax, 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(edx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00162CEE; /* jne: not equal / not zero */

loc_00162CD3: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esp + 4), LO8(eax) (8-bit) */
    MEM32(esp + 4) = 6;
    if (CMP_EQ(_fa, _fb)) goto loc_00162CE9; /* je: equal / zero */

loc_00162CE1: ;
    MEM32(esp + 4) = 5;

loc_00162CE9: ;
    g_seh_ebp = ebp; sub_00206000(); return; /* tail jmp 0x00206000 */

loc_00162CEE: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00162D00
 * Original: 0x00162D00 - 0x00162D73 (115 bytes, 33 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00162D00(void)
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

loc_00162D00: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x10B0);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    POP32(esp, esi);
    if (CMP_GE(_fas, _fbs)) goto loc_00162D5D; /* jge: greater or equal (signed >=) */

loc_00162D12: ;
    eax = eax + eax * 2;
    eax = eax << 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax + ecx + 0x290;
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00162D5D; /* je: equal / zero */

loc_00162D26: ;
    eax = MEM32(ecx + 0x3C);
    fp_push(MEMF(eax + 0x40)); /* fld float */
    ecx = MEM32(esp + 8);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x49E578)); /* fmul dword ptr [0x49e578] */
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x40;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(ecx) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x49E578)); /* fmul dword ptr [0x49e578] */
    MEMF(ecx + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 8)); /* fld float */
    MEM32(ecx + 0xC) = 0x3F800000;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x49E578)); /* fmul dword ptr [0x49e578] */
    MEMF(ecx + 8) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 12; return; /* ret 8 */

loc_00162D5D: ;
    eax = MEM32(esp + 8);
    MEM32(eax) = edx;
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = edx;
    MEM32(eax + 0xC) = 0x3F800000;
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00162D80
 * Original: 0x00162D80 - 0x00162D85 (5 bytes, 2 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00162D80(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00162D80: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00162D90
 * Original: 0x00162D90 - 0x00162E58 (200 bytes, 64 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00162D90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00162D90: ;
    eax = MEM32(ecx + 0x21C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_00162E4F; /* je: equal / zero */

loc_00162DA3: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x10C);
    ecx = eax + ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00162E4F; /* je: equal / zero */

loc_00162DB5: ;
    esi = MEM32(esp + 0x14);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_00162DC0: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x104)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(ecx + 0x104) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00162DEC; /* jge: greater or equal (signed >=) */

loc_00162DC8: ;
    eax = MEM32(ecx + 0x108);
    edx = MEM32(eax + edi + 8);
    ebp = MEM32(edx + 0x98);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00162E51; /* je: equal / zero */

loc_00162DDE: ;
    _fa = (uint32_t)(MEM32(edx + 0x94)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 0x94), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00162E51; /* je: equal / zero */

loc_00162DE6: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x24;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00162DC0;

loc_00162DEC: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00162DF0: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0xFC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(ecx + 0xFC) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00162E1C; /* jge: greater or equal (signed >=) */

loc_00162DF8: ;
    eax = MEM32(ecx + 0x100);
    edx = MEM32(eax + edi + 8);
    ebp = MEM32(edx + 0x98);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00162E51; /* je: equal / zero */

loc_00162E0E: ;
    _fa = (uint32_t)(MEM32(edx + 0x94)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 0x94), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00162E51; /* je: equal / zero */

loc_00162E16: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x70;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00162DF0;

loc_00162E1C: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00162E20: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0xEC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(ecx + 0xEC) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00162E4F; /* jge: greater or equal (signed >=) */

loc_00162E28: ;
    eax = MEM32(ecx + 0xF0);
    edx = MEM32(eax + edi + 8);
    ebp = MEM32(edx + 0x98);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00162E51; /* je: equal / zero */

loc_00162E3E: ;
    _fa = (uint32_t)(MEM32(edx + 0x94)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 0x94), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00162E51; /* je: equal / zero */

loc_00162E46: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x210) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x210;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00162E20;

loc_00162E4F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00162E51: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00162E60
 * Original: 0x00162E60 - 0x00162E65 (5 bytes, 2 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00162E60(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00162E60: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00162E70
 * Original: 0x00162E70 - 0x00162E82 (18 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00162E70(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00162E70: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00162E78u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00162E75u); } /* indirect call */
    }

loc_00162E78: ;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    eax = ~eax;
    _cf = 0; /* logical op clears CF */
    eax = eax & esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00162E90
 * Original: 0x00162E90 - 0x00162EB0 (32 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00162E90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00162E90: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00162E98u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00162E95u); } /* indirect call */
    }

loc_00162E98: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00162EAC; /* je: equal / zero */

loc_00162E9C: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00162EA3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00162EA0u); } /* indirect call */
    }

loc_00162EA3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00162EAC; /* je: equal / zero */

loc_00162EA8: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00162EAC: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00162EB0
 * Original: 0x00162EB0 - 0x00162EC5 (21 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00162EB0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00162EB0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00162EB8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00162EB5u); } /* indirect call */
    }

loc_00162EB8: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(2));
    eax = eax - 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    eax = ~eax;
    _cf = 0; /* logical op clears CF */
    eax = eax & esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00162ED0
 * Original: 0x00162ED0 - 0x00162EE3 (19 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00162ED0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00162ED0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00162ED8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00162ED5u); } /* indirect call */
    }

loc_00162ED8: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    eax = ~eax;
    _cf = 0; /* logical op clears CF */
    eax = eax & esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00162EF0
 * Original: 0x00162EF0 - 0x00162F2E (62 bytes, 24 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00162EF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00162EF0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00162F2A; /* je: equal / zero */

loc_00162EF9: ;
    eax = MEM32(esi + 0xC);
    ecx = MEM32(0x67D144);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00162F08u); RECOMP_ABI_CALL(0x00202B20u, sub_00202B20); /* call 0x00202B20 */

loc_00162F08: ;
    ecx = MEM32(esi + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00162F11u); RECOMP_ABI_CALL(0x000EB425u, sub_000EB425); /* call 0x000EB425 */

loc_00162F11: ;
    ecx = MEM32(esi + 0xC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00162F21; /* je: equal / zero */

loc_00162F1B: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00162F21u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00162F1Fu); } /* indirect call */
    }

loc_00162F21: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x00162F2Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00162F27u); } /* indirect call */
    }

loc_00162F2A: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00162F30
 * Original: 0x00162F30 - 0x00162F96 (102 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00162F30(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00162F30: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x3BC55B);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 4) = esi;
    MEM8(esi + 0x20) = 0;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    eax = esi + 0x90;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    MEM32(esp + 0x24) = 0;
    PUSH32(esp, 0x00162F6Du); RECOMP_ABI_CALL(0x0015BB60u, sub_0015BB60); /* call 0x0015BB60 */

loc_00162F6D: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = esi + 0xA0;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00162F81u); RECOMP_ABI_CALL(0x0015BB60u, sub_0015BB60); /* call 0x0015BB60 */

loc_00162F81: ;
    ecx = MEM32(esp + 0x30);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00162FA0
 * Original: 0x00162FA0 - 0x00162FA6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00162FA0(void)
{

loc_00162FA0: ;
    eax = MEM32(0x720778);
    esp += 4; return; /* ret */

}

/**
 * sub_00162FB0
 * Original: 0x00162FB0 - 0x00162FB6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00162FB0(void)
{

loc_00162FB0: ;
    eax = MEM32(0x72077C);
    esp += 4; return; /* ret */

}

/**
 * sub_00162FC0
 * Original: 0x00162FC0 - 0x00162FC3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00162FC0(void)
{

loc_00162FC0: ;
    eax = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00162FD0
 * Original: 0x00162FD0 - 0x00162FD9 (9 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00162FD0(void)
{

loc_00162FD0: ;
    SET_LO8(eax, MEM8(esp + 4));
    MEM8(ecx) = LO8(eax);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00162FE0
 * Original: 0x00162FE0 - 0x00162FE3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00162FE0(void)
{

loc_00162FE0: ;
    eax = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00162FF0
 * Original: 0x00162FF0 - 0x00162FF9 (9 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00162FF0(void)
{

loc_00162FF0: ;
    SET_LO8(eax, MEM8(esp + 4));
    MEM8(ecx) = LO8(eax);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00163000
 * Original: 0x00163000 - 0x00163003 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00163000(void)
{

loc_00163000: ;
    eax = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00163010
 * Original: 0x00163010 - 0x00163019 (9 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00163010(void)
{

loc_00163010: ;
    SET_LO8(eax, MEM8(esp + 4));
    MEM8(ecx) = LO8(eax);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00163020
 * Original: 0x00163020 - 0x00163023 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00163020(void)
{

loc_00163020: ;
    eax = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00163030
 * Original: 0x00163030 - 0x00163039 (9 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00163030(void)
{

loc_00163030: ;
    SET_LO8(eax, MEM8(esp + 4));
    MEM8(ecx) = LO8(eax);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00163040
 * Original: 0x00163040 - 0x00163053 (19 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00163040(void)
{

loc_00163040: ;
    ecx = MEM32(0x62EBAC);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x10);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x00163052u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0016304Fu); } /* indirect call */
    }

loc_00163052: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00163060
 * Original: 0x00163060 - 0x00163075 (21 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00163060(void)
{

loc_00163060: ;
    ecx = MEM32(0x62EBAC);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x10);
    PUSH32(esp, 0xC);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x00163074u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00163071u); } /* indirect call */
    }

loc_00163074: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00163080
 * Original: 0x00163080 - 0x00163093 (19 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00163080(void)
{

loc_00163080: ;
    ecx = MEM32(0x62EBAC);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x10);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x00163092u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0016308Fu); } /* indirect call */
    }

loc_00163092: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001630A0
 * Original: 0x001630A0 - 0x001630B5 (21 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001630A0(void)
{

loc_001630A0: ;
    ecx = MEM32(0x62EBAC);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x10);
    PUSH32(esp, 0xC);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x001630B4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001630B1u); } /* indirect call */
    }

loc_001630B4: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001630C0
 * Original: 0x001630C0 - 0x001630CC (12 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001630C0(void)
{

loc_001630C0: ;
    eax = MEM32(ecx);
    ecx = MEM32(esp + 4);
    eax = eax + ecx * 8;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001630D0
 * Original: 0x001630D0 - 0x001630D4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001630D0(void)
{

loc_001630D0: ;
    eax = MEM32(ecx + 4);
    esp += 4; return; /* ret */

}

/**
 * sub_001630E0
 * Original: 0x001630E0 - 0x001630F7 (23 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001630E0(void)
{

loc_001630E0: ;
    eax = ecx;
    MEM32(eax) = 0;
    MEM32(eax + 4) = 0;
    MEM32(eax + 8) = 0x80000000u;
    esp += 4; return; /* ret */

}

/**
 * sub_00163100
 * Original: 0x00163100 - 0x00163117 (23 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00163100(void)
{

loc_00163100: ;
    eax = ecx;
    MEM32(eax) = 0;
    MEM32(eax + 4) = 0;
    MEM32(eax + 8) = 0x80000000u;
    esp += 4; return; /* ret */

}

/**
 * sub_00163120
 * Original: 0x00163120 - 0x00163137 (23 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00163120(void)
{

loc_00163120: ;
    eax = ecx;
    MEM32(eax) = 0;
    MEM32(eax + 4) = 0;
    MEM32(eax + 8) = 0x80000000u;
    esp += 4; return; /* ret */

}

/**
 * sub_00163140
 * Original: 0x00163140 - 0x0016314C (12 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00163140(void)
{

loc_00163140: ;
    eax = MEM32(ecx);
    ecx = MEM32(esp + 4);
    eax = eax + ecx * 4;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00163150
 * Original: 0x00163150 - 0x00163154 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00163150(void)
{

loc_00163150: ;
    eax = MEM32(ecx + 4);
    esp += 4; return; /* ret */

}

/**
 * sub_00163160
 * Original: 0x00163160 - 0x00163177 (23 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00163160(void)
{

loc_00163160: ;
    eax = ecx;
    MEM32(eax) = 0;
    MEM32(eax + 4) = 0;
    MEM32(eax + 8) = 0x80000000u;
    esp += 4; return; /* ret */

}

/**
 * sub_00163180
 * Original: 0x00163180 - 0x00163197 (23 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00163180(void)
{

loc_00163180: ;
    eax = ecx;
    MEM32(eax) = 0;
    MEM32(eax + 4) = 0;
    MEM32(eax + 8) = 0x80000000u;
    esp += 4; return; /* ret */

}

/**
 * sub_001631A0
 * Original: 0x001631A0 - 0x001631AC (12 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001631A0(void)
{

loc_001631A0: ;
    eax = MEM32(ecx);
    ecx = MEM32(esp + 4);
    eax = eax + ecx * 4;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001631B0
 * Original: 0x001631B0 - 0x001631B4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001631B0(void)
{

loc_001631B0: ;
    eax = MEM32(ecx + 4);
    esp += 4; return; /* ret */

}

/**
 * sub_001631C0
 * Original: 0x001631C0 - 0x001631C8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001631C0(void)
{

loc_001631C0: ;
    MEM32(ecx + 4) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_001631D0
 * Original: 0x001631D0 - 0x001631E7 (23 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001631D0(void)
{

loc_001631D0: ;
    eax = ecx;
    MEM32(eax) = 0;
    MEM32(eax + 4) = 0;
    MEM32(eax + 8) = 0x80000000u;
    esp += 4; return; /* ret */

}

/**
 * sub_001631F0
 * Original: 0x001631F0 - 0x001631FA (10 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001631F0(void)
{

loc_001631F0: ;
    eax = MEM32(ecx + 4);
    ecx = MEM32(ecx);
    eax = ecx + eax * 4 + -4;
    esp += 4; return; /* ret */

}

/**
 * sub_00163200
 * Original: 0x00163200 - 0x00163204 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00163200(void)
{

loc_00163200: ;
    eax = MEM32(ecx + 4);
    esp += 4; return; /* ret */

}

/**
 * sub_00163210
 * Original: 0x00163210 - 0x00163214 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00163210(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00163210: ;
    MEM32(ecx + 4) = MEM32(ecx + 4) - 1;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

}

/**
 * sub_00163220
 * Original: 0x00163220 - 0x00163223 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00163220(void)
{

loc_00163220: ;
    eax = MEM32(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00163230
 * Original: 0x00163230 - 0x00163257 (39 bytes, 15 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00163230(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00163230: ;
    eax = MEM32(ecx + 8);
    edx = MEM32(esp + 4);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00163254; /* jge: greater or equal (signed >=) */

loc_00163240: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00163248; /* jl: less (signed <) */

loc_00163246: ;
    eax = edx;

loc_00163248: ;
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00163251u); RECOMP_ABI_CALL(0x00101B30u, sub_00101B30); /* call 0x00101B30 */

loc_00163251: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00163254: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00163260
 * Original: 0x00163260 - 0x00163269 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00163260(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00163260: ;
    eax = MEM32(ecx + 8);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}

/**
 * sub_00163270
 * Original: 0x00163270 - 0x00163297 (39 bytes, 15 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00163270(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00163270: ;
    eax = MEM32(ecx + 8);
    edx = MEM32(esp + 4);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00163294; /* jge: greater or equal (signed >=) */

loc_00163280: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00163288; /* jl: less (signed <) */

loc_00163286: ;
    eax = edx;

loc_00163288: ;
    PUSH32(esp, 8);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00163291u); RECOMP_ABI_CALL(0x00101B30u, sub_00101B30); /* call 0x00101B30 */

loc_00163291: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00163294: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001632A0
 * Original: 0x001632A0 - 0x001632A9 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001632A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001632A0: ;
    eax = MEM32(ecx + 8);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}

/**
 * sub_001632B0
 * Original: 0x001632B0 - 0x001632CF (31 bytes, 9 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001632B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001632B0: ;
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
 * sub_001632D0
 * Original: 0x001632D0 - 0x001632D9 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001632D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001632D0: ;
    eax = MEM32(ecx + 8);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}

/**
 * sub_001632E0
 * Original: 0x001632E0 - 0x001632E9 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001632E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001632E0: ;
    eax = MEM32(ecx + 8);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}

/**
 * sub_001632F0
 * Original: 0x001632F0 - 0x0016330E (30 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001632F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001632F0: ;
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
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x0016330Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0016330Au); } /* indirect call */
    }

loc_0016330D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00163310
 * Original: 0x00163310 - 0x00163319 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00163310(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00163310: ;
    eax = MEM32(ecx + 8);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}

/**
 * sub_00163320
 * Original: 0x00163320 - 0x0016333E (30 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00163320(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00163320: ;
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
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x0016333Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0016333Au); } /* indirect call */
    }

loc_0016333D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00163340
 * Original: 0x00163340 - 0x0016335E (30 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00163340(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00163340: ;
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
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x0016335Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0016335Au); } /* indirect call */
    }

loc_0016335D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00163360
 * Original: 0x00163360 - 0x0016337E (30 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00163360(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00163360: ;
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
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x0016337Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0016337Au); } /* indirect call */
    }

loc_0016337D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00163380
 * Original: 0x00163380 - 0x00163389 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00163380(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00163380: ;
    eax = MEM32(ecx + 8);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}

/**
 * sub_00163390
 * Original: 0x00163390 - 0x001633B1 (33 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00163390(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00163390: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(0x62EBAC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xC);
    eax = eax + eax * 2;
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x001633B0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001633ADu); } /* indirect call */
    }

loc_001633B0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001633C0
 * Original: 0x001633C0 - 0x001633DE (30 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001633C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001633C0: ;
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
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x001633DDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001633DAu); } /* indirect call */
    }

loc_001633DD: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001633E0
 * Original: 0x001633E0 - 0x00163407 (39 bytes, 15 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001633E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001633E0: ;
    eax = MEM32(ecx + 8);
    edx = MEM32(esp + 4);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00163404; /* jge: greater or equal (signed >=) */

loc_001633F0: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001633F8; /* jl: less (signed <) */

loc_001633F6: ;
    eax = edx;

loc_001633F8: ;
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00163401u); RECOMP_ABI_CALL(0x00101B30u, sub_00101B30); /* call 0x00101B30 */

loc_00163401: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00163404: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00163410
 * Original: 0x00163410 - 0x00163413 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00163410(void)
{

loc_00163410: ;
    eax = MEM32(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00163420
 * Original: 0x00163420 - 0x00163443 (35 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00163420(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00163420: ;
    edx = MEM32(esp + 0xC);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_00163442; /* js: sign (negative) */

loc_00163427: ;
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

loc_00163436: ;
    esi = MEM32(ecx + eax);
    MEM32(eax) = esi;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00163436; /* jne: not equal / not zero */

loc_00163441: ;
    POP32(esp, esi);

loc_00163442: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00163450
 * Original: 0x00163450 - 0x0016346E (30 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00163450(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00163450: ;
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
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x0016346Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0016346Au); } /* indirect call */
    }

loc_0016346D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00163470
 * Original: 0x00163470 - 0x0016347F (15 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00163470(void)
{

loc_00163470: ;
    eax = ecx;
    MEM32(eax) = 0x4AEBB4;
    MEM16(eax + 6) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00163480
 * Original: 0x00163480 - 0x001634A8 (40 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00163480(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00163480: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00163488u); RECOMP_ABI_CALL(0x00160140u, sub_00160140); /* call 0x00160140 */

loc_00163488: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001634A2; /* je: equal / zero */

loc_0016348F: ;
    edx = ZX16(MEM16(esi + 4));
    ecx = MEM32(0x62EBAC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xE);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x001634A2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0016349Fu); } /* indirect call */
    }

loc_001634A2: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001634B0
 * Original: 0x001634B0 - 0x001634CE (30 bytes, 9 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001634B0(void)
{

loc_001634B0: ;
    eax = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    MEM32(ecx) = eax;
    eax = MEM32(esp + 0xC);
    MEM32(ecx + 4) = edx;
    edx = MEM32(esp + 0x10);
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0xC) = edx;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_001634D0
 * Original: 0x001634D0 - 0x001635A5 (213 bytes, 62 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001634D0(void)
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

loc_001634D0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 0xC);
    xmm1 = XMM_MEM(eax); /* movaps */
    eax = MEM32(ebp + 8);
    fp_push(MEMF(eax + 0xC)); /* fld float */
    edx = esp + 0xC;
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_top()); /* fadd st(0), st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x496454)); /* fsub dword ptr [0x496454] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm2 = xmm0; /* movaps */
    xmm2 = XMM_SHUFFLE(xmm2, xmm0, 0); /* shufps */
    xmm2 = XMM_MUL(xmm2, xmm1); /* mulps */
    XMM_STORE(ecx, xmm2); /* movaps */
    xmm0 = XMM_MEM(eax); /* movaps */
    XMM_STORE(esp + 0x10, xmm0); /* movaps */
    MEM32(esp + 0x1C) = 0;
    xmm3 = XMM_MEM(esp + 0x10); /* movaps */
    xmm0 = xmm3; /* movaps */
    xmm0 = XMM_MUL(xmm0, xmm1); /* mulps */
    xmm4 = xmm0; /* movaps */
    xmm4 = XMM_SHUFFLE(xmm4, xmm0, 0x55); /* shufps */
    xmm4.f[0] = xmm4.f[0] + xmm0.f[0]; /* addss */
    xmm5 = xmm0; /* movaps */
    xmm5 = XMM_SHUFFLE(xmm5, xmm0, 0xAA); /* shufps */
    xmm5.f[0] = xmm5.f[0] + xmm4.f[0]; /* addss */
    MEMF(edx) = xmm5.f[0]; /* movss */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_top()); /* fadd st(0), st(0) */
    xmm5 = xmm1; /* movaps */
    xmm5 = XMM_SHUFFLE(xmm5, xmm1, 0xC9); /* shufps */
    xmm6 = xmm3; /* movaps */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm6 = XMM_SHUFFLE(xmm6, xmm3, 0xD2); /* shufps */
    xmm6 = XMM_MUL(xmm6, xmm5); /* mulps */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_top()); /* fadd st(0), st(0) */
    xmm5 = xmm1; /* movaps */
    xmm5 = XMM_SHUFFLE(xmm5, xmm1, 0xD2); /* shufps */
    xmm1 = xmm3; /* movaps */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    xmm4 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm1 = XMM_SHUFFLE(xmm1, xmm3, 0xC9); /* shufps */
    xmm1 = XMM_MUL(xmm1, xmm5); /* mulps */
    xmm1 = XMM_SUB(xmm1, xmm6); /* subps */
    xmm5 = xmm4; /* movaps */
    xmm5 = XMM_SHUFFLE(xmm5, xmm4, 0); /* shufps */
    xmm5 = XMM_MUL(xmm5, xmm1); /* mulps */
    xmm1 = xmm0; /* movaps */
    xmm1 = XMM_SHUFFLE(xmm1, xmm0, 0); /* shufps */
    xmm1 = XMM_MUL(xmm1, xmm3); /* mulps */
    xmm2 = XMM_ADD(xmm2, xmm1); /* addps */
    xmm2 = XMM_ADD(xmm2, xmm5); /* addps */
    XMM_STORE(ecx, xmm2); /* movaps */
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
 * sub_001635B0
 * Original: 0x001635B0 - 0x00163687 (215 bytes, 63 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001635B0(void)
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

loc_001635B0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 0xC);
    xmm1 = XMM_MEM(eax); /* movaps */
    eax = MEM32(ebp + 8);
    fp_push(MEMF(eax + 0xC)); /* fld float */
    edx = esp + 0xC;
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_top()); /* fadd st(0), st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x496454)); /* fsub dword ptr [0x496454] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm2 = xmm0; /* movaps */
    xmm2 = XMM_SHUFFLE(xmm2, xmm0, 0); /* shufps */
    xmm2 = XMM_MUL(xmm2, xmm1); /* mulps */
    XMM_STORE(ecx, xmm2); /* movaps */
    xmm0 = XMM_MEM(eax); /* movaps */
    XMM_STORE(esp + 0x10, xmm0); /* movaps */
    MEM32(esp + 0x1C) = 0;
    xmm3 = XMM_MEM(esp + 0x10); /* movaps */
    xmm0 = xmm3; /* movaps */
    xmm0 = XMM_MUL(xmm0, xmm1); /* mulps */
    xmm4 = xmm0; /* movaps */
    xmm4 = XMM_SHUFFLE(xmm4, xmm0, 0x55); /* shufps */
    xmm4.f[0] = xmm4.f[0] + xmm0.f[0]; /* addss */
    xmm5 = xmm0; /* movaps */
    xmm5 = XMM_SHUFFLE(xmm5, xmm0, 0xAA); /* shufps */
    xmm5.f[0] = xmm5.f[0] + xmm4.f[0]; /* addss */
    MEMF(edx) = xmm5.f[0]; /* movss */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_top()); /* fadd st(0), st(0) */
    xmm5 = xmm1; /* movaps */
    xmm5 = XMM_SHUFFLE(xmm5, xmm1, 0xC9); /* shufps */
    xmm6 = xmm3; /* movaps */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm6 = XMM_SHUFFLE(xmm6, xmm3, 0xD2); /* shufps */
    fp_top() = -fp_top(); /* fchs */
    xmm6 = XMM_MUL(xmm6, xmm5); /* mulps */
    xmm5 = xmm1; /* movaps */
    xmm5 = XMM_SHUFFLE(xmm5, xmm1, 0xD2); /* shufps */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_top()); /* fadd st(0), st(0) */
    xmm1 = xmm3; /* movaps */
    xmm1 = XMM_SHUFFLE(xmm1, xmm3, 0xC9); /* shufps */
    xmm1 = XMM_MUL(xmm1, xmm5); /* mulps */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    xmm4 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm1 = XMM_SUB(xmm1, xmm6); /* subps */
    xmm5 = xmm4; /* movaps */
    xmm5 = XMM_SHUFFLE(xmm5, xmm4, 0); /* shufps */
    xmm5 = XMM_MUL(xmm5, xmm1); /* mulps */
    xmm1 = xmm0; /* movaps */
    xmm1 = XMM_SHUFFLE(xmm1, xmm0, 0); /* shufps */
    xmm1 = XMM_MUL(xmm1, xmm3); /* mulps */
    xmm2 = XMM_ADD(xmm2, xmm1); /* addps */
    xmm2 = XMM_ADD(xmm2, xmm5); /* addps */
    XMM_STORE(ecx, xmm2); /* movaps */
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
 * sub_00163690
 * Original: 0x00163690 - 0x001636AD (29 bytes, 8 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00163690(void)
{

loc_00163690: ;
    eax = MEM32(esp + 4);
    xmm0 = XMM_MEM(eax); /* movaps */
    XMM_STORE(ecx, xmm0); /* movaps */
    xmm0 = XMM_MEM(eax + 0x10); /* movaps */
    XMM_STORE(ecx + 0x10, xmm0); /* movaps */
    xmm0 = XMM_MEM(eax + 0x20); /* movaps */
    XMM_STORE(ecx + 0x20, xmm0); /* movaps */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001636B0
 * Original: 0x001636B0 - 0x001636BF (15 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001636B0(void)
{

loc_001636B0: ;
    eax = ecx;
    MEM16(eax + 6) = 1;
    MEM32(eax) = 0x4AEBB8;
    esp += 4; return; /* ret */

}

/**
 * sub_001636C0
 * Original: 0x001636C0 - 0x001636E8 (40 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001636C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001636C0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x001636C8u); RECOMP_ABI_CALL(0x00160A10u, sub_00160A10); /* call 0x00160A10 */

loc_001636C8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001636E2; /* je: equal / zero */

loc_001636CF: ;
    edx = ZX16(MEM16(esi + 4));
    ecx = MEM32(0x62EBAC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xE);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x001636E2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001636DFu); } /* indirect call */
    }

loc_001636E2: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001636F0
 * Original: 0x001636F0 - 0x00163706 (22 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001636F0(void)
{

loc_001636F0: ;
    eax = ecx;
    MEM16(eax + 6) = 1;
    MEM32(eax) = 0x4AEBCC;
    MEM32(eax + 8) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_00163710
 * Original: 0x00163710 - 0x00163738 (40 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00163710(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00163710: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00163718u); RECOMP_ABI_CALL(0x00160AB0u, sub_00160AB0); /* call 0x00160AB0 */

loc_00163718: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00163732; /* je: equal / zero */

loc_0016371F: ;
    edx = ZX16(MEM16(esi + 4));
    ecx = MEM32(0x62EBAC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1E);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x00163732u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0016372Fu); } /* indirect call */
    }

loc_00163732: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00163740
 * Original: 0x00163740 - 0x0016377E (62 bytes, 26 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00163740(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00163740: ;
    edx = MEM32(ecx + 0x34);
    PUSH32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_LE(_fas, _fbs)) goto loc_00163760; /* jle: less or equal (signed <=) */

loc_0016374B: ;
    esi = MEM32(ecx + 0x30);
    edi = MEM32(esp + 0x10);
    ecx = esi;

loc_00163754: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016376F; /* je: equal / zero */

loc_00163758: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00163754; /* jl: less (signed <) */

loc_00163760: ;
    eax = MEM32(esp + 0xC);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(eax) = 0;
    esp += 12; return; /* ret 8 */

loc_0016376F: ;
    ecx = MEM32(esi + eax * 8 + 4);
    eax = MEM32(esp + 0xC);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(eax) = ecx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00163780
 * Original: 0x00163780 - 0x001637A9 (41 bytes, 19 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00163780(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00163780: ;
    edx = MEM32(ecx + 0x34);
    PUSH32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0016379D; /* jle: less or equal (signed <=) */

loc_0016378A: ;
    ecx = MEM32(ecx + 0x30);
    esi = MEM32(esp + 8);

loc_00163791: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001637A3; /* je: equal / zero */

loc_00163795: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00163791; /* jl: less (signed <) */

loc_0016379D: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_001637A3: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001637B0
 * Original: 0x001637B0 - 0x00163862 (178 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001637B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001637B0: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = ecx;
    MEM32(eax + 4) = 0xC11CCCCDu;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x14) = 0x400;
    PUSH32(esp, esi);
    SET_LO8(edx, 1);
    MEM8(eax + 0x10) = LO8(edx);
    esi = 0xC3FA0000u;
    MEM32(eax + 0x20) = esi;
    MEM32(eax + 0x24) = esi;
    MEM32(eax + 0x28) = esi;
    MEM32(eax + 0x2C) = ecx;
    esi = 0x43FA0000;
    MEM32(eax + 0x30) = esi;
    MEM32(eax + 0x34) = esi;
    MEM32(eax + 0x38) = esi;
    MEM32(eax + 0x3C) = ecx;
    esi = 0x3E4CCCCD;
    MEM8(eax + 0x4C) = LO8(ecx);
    ecx = 0x3C23D70A;
    MEM32(eax + 0x68) = esi;
    MEM32(eax + 0x80) = esi;
    MEM32(eax + 0x40) = 0x3F19999A;
    MEM32(eax + 0x44) = 0x3F800000;
    MEM32(eax + 0x48) = 4;
    MEM32(eax + 0x50) = 0xBCF5C28Fu;
    MEM32(eax + 0x54) = 0x3E99999A;
    MEM32(eax + 0x58) = 0x3A83126F;
    MEM32(eax + 0x5C) = 0x3DCCCCCD;
    MEM8(eax + 0x60) = LO8(edx);
    MEM32(eax + 0x64) = 0x3D4CCCCD;
    MEM32(eax + 0x6C) = ecx;
    MEM8(eax + 0x70) = LO8(edx);
    MEM32(eax + 0x74) = ecx;
    MEM32(eax + 0x78) = 0x14;
    MEM8(eax + 0x7C) = LO8(edx);
    MEM32(eax + 0x84) = 0x41200000;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00163870
 * Original: 0x00163870 - 0x001639C2 (338 bytes, 108 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00163870(void)
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

loc_00163870: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 0x14);
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0xC);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    MEM32(esi) = edi;
    MEM32(esi + 4) = ebx;
    xmm0 = XMM_MEM(eax); /* movaps */
    ecx = esp + 0x34;
    XMM_STORE(esp + 0x34, xmm0); /* movaps */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001638A2u); RECOMP_ABI_CALL(0x001604A0u, sub_001604A0); /* call 0x001604A0 */

loc_001638A2: ;
    xmm0 = XMM_MEM(eax); /* movaps */
    eax = MEM32(edi + 0x3C);
    edx = esp + 0x30;
    xmm1 = xmm0; /* movaps */
    PUSH32(esp, edx);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm1 = XMM_SHUFFLE(xmm1, xmm0, 0); /* shufps */
    xmm1 = XMM_MUL(xmm1, XMM_MEM(esp + 0x34)); /* mulps */
    PUSH32(esp, eax);
    ecx = esp + 0x28;
    XMM_STORE(esp + 0x38, xmm1); /* movaps */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001638CBu); RECOMP_ABI_CALL(0x001635B0u, sub_001635B0); /* call 0x001635B0 */

loc_001638CB: ;
    edx = MEM32(ebx + 0x3C);
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x30;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    ecx = esi + 0x30;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001638DFu); RECOMP_ABI_CALL(0x001635B0u, sub_001635B0); /* call 0x001635B0 */

loc_001638DF: ;
    eax = MEM32(ebp + 0x10);
    ecx = MEM32(edi + 0x3C);
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x80;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi + 0x10;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001638F5u); RECOMP_ABI_CALL(0x002A7BD0u, sub_002A7BD0); /* call 0x002A7BD0 */

loc_001638F5: ;
    edx = MEM32(ebp + 0x10);
    eax = MEM32(ebx + 0x3C);
    PUSH32(esp, edx);
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x80;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esi + 0x20;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0016390Au); RECOMP_ABI_CALL(0x002A7BD0u, sub_002A7BD0); /* call 0x002A7BD0 */

loc_0016390A: ;
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    edx = 1;
    MEMF(esp + 0x18) = (float)fp_top(); /* fst */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    edi = 2;
    fp_top() = fabs(fp_top()); /* fabs */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00163946; /* jp: parity */

loc_00163939: ;
    fp_pop(); /* fstp st(0) */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    ecx = 1;

loc_00163946: ;
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    fp_pop(); /* fstp st(0) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0016395C; /* jp: parity */

loc_00163955: ;
    edi = ecx;
    ecx = 2;

loc_0016395C: ;
    MEM32(esi + ecx * 4 + 0x40) = 0;
    ecx = edx * 4;
    fp_push(MEMF(esp + ecx + 0x20)); /* fld float */
    eax = edi * 4;
    edx = MEM32(esp + eax + 0x20);
    fp_top() = -fp_top(); /* fchs */
    MEM32(ecx + esi + 0x40) = edx;
    MEMF(eax + esi + 0x40) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_MEM(esi + 0x40); /* movaps */
    xmm1 = xmm0; /* movaps */
    xmm1 = XMM_SHUFFLE(xmm1, xmm0, 0xC9); /* shufps */
    xmm2 = xmm1; /* movaps */
    xmm1 = XMM_MEM(esp + 0x20); /* movaps */
    xmm3 = xmm1; /* movaps */
    xmm3 = XMM_SHUFFLE(xmm3, xmm1, 0xD2); /* shufps */
    xmm3 = XMM_MUL(xmm3, xmm2); /* mulps */
    xmm2 = xmm0; /* movaps */
    xmm2 = XMM_SHUFFLE(xmm2, xmm0, 0xD2); /* shufps */
    xmm0 = xmm1; /* movaps */
    xmm0 = XMM_SHUFFLE(xmm0, xmm1, 0xC9); /* shufps */
    xmm0 = XMM_MUL(xmm0, xmm2); /* mulps */
    POP32(esp, edi);
    xmm0 = XMM_SUB(xmm0, xmm3); /* subps */
    XMM_STORE(esi + 0x50, xmm0); /* movaps */
    POP32(esp, esi);
    POP32(esp, ebx);
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
 * sub_001639D0
 * Original: 0x001639D0 - 0x00163B6A (410 bytes, 137 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001639D0(void)
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

loc_001639D0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(ebp + 0x14);
    PUSH32(esp, edi);
    MEM32(esi + 4) = eax;
    edx = esp + 0x30;
    MEM32(esi) = ebx;
    xmm0 = XMM_MEM(ecx); /* movaps */
    PUSH32(esp, edx);
    ecx = esp + 0x24;
    XMM_STORE(esp + 0x24, xmm0); /* movaps */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00163A02u); RECOMP_ABI_CALL(0x001604A0u, sub_001604A0); /* call 0x001604A0 */

loc_00163A02: ;
    xmm0 = XMM_MEM(eax); /* movaps */
    ecx = MEM32(ebx + 0x3C);
    eax = esp + 0x20;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x30;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    xmm1 = xmm0; /* movaps */
    xmm1 = XMM_SHUFFLE(xmm1, xmm0, 0); /* shufps */
    xmm1 = XMM_MUL(xmm1, XMM_MEM(esp + 0x24)); /* mulps */
    edi = esi + 0x30;
    PUSH32(esp, ecx);
    ecx = edi;
    XMM_STORE(esp + 0x28, xmm1); /* movaps */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00163A2Cu); RECOMP_ABI_CALL(0x001635B0u, sub_001635B0); /* call 0x001635B0 */

loc_00163A2C: ;
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(eax + 0x3C);
    edx = esp + 0x20;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x30;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = esi + 0x40;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00163A43u); RECOMP_ABI_CALL(0x001635B0u, sub_001635B0); /* call 0x001635B0 */

loc_00163A43: ;
    edx = MEM32(ebp + 0x10);
    eax = MEM32(ebx + 0x3C);
    PUSH32(esp, edx);
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x80;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esi + 0x10;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00163A58u); RECOMP_ABI_CALL(0x002A7BD0u, sub_002A7BD0); /* call 0x002A7BD0 */

loc_00163A58: ;
    edx = MEM32(ebp + 0xC);
    ecx = MEM32(ebp + 0x10);
    eax = MEM32(edx + 0x3C);
    PUSH32(esp, ecx);
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x80;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esi + 0x20;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00163A70u); RECOMP_ABI_CALL(0x002A7BD0u, sub_002A7BD0); /* call 0x002A7BD0 */

loc_00163A70: ;
    fp_push(MEMF(edi)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    ebx = esi + 0x50;
    fp_push(MEMF(edi + 4)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    MEM32(esp + 0x14) = 0;
    MEMF(esp + 0x18) = (float)fp_top(); /* fst */
    fp_push(MEMF(edi + 8)); /* fld float */
    ecx = 1;
    fp_top() = fabs(fp_top()); /* fabs */
    edx = 2;
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00163AB4; /* jp: parity */

loc_00163AA4: ;
    fp_pop(); /* fstp st(0) */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    MEM32(esp + 0x14) = 1;

loc_00163AB4: ;
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    fp_pop(); /* fstp st(0) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00163ACE; /* jp: parity */

loc_00163AC3: ;
    edx = MEM32(esp + 0x14);
    eax = 2;
    goto loc_00163AD2;

loc_00163ACE: ;
    eax = MEM32(esp + 0x14);

loc_00163AD2: ;
    MEM32(ebx + eax * 4) = 0;
    eax = MEM32(edi + edx * 4);
    MEM32(ebx + ecx * 4) = eax;
    fp_push(MEMF(edi + ecx * 4)); /* fld float */
    ecx = esp + 0x30;
    fp_top() = -fp_top(); /* fchs */
    PUSH32(esp, ecx);
    MEMF(ebx + edx * 4) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00163AF3u); RECOMP_ABI_CALL(0x001604A0u, sub_001604A0); /* call 0x001604A0 */

loc_00163AF3: ;
    xmm0 = XMM_MEM(eax); /* movaps */
    xmm1 = XMM_MEM(ebx); /* movaps */
    xmm2 = xmm0; /* movaps */
    xmm2 = XMM_SHUFFLE(xmm2, xmm0, 0); /* shufps */
    xmm2 = XMM_MUL(xmm2, xmm1); /* mulps */
    XMM_STORE(ebx, xmm2); /* movaps */
    xmm0 = XMM_MEM(ebx); /* movaps */
    xmm1 = XMM_MEM(edi); /* movaps */
    edx = MEM32(esi);
    xmm2 = xmm0; /* movaps */
    xmm2 = XMM_SHUFFLE(xmm2, xmm0, 0xC9); /* shufps */
    xmm3 = xmm1; /* movaps */
    xmm3 = XMM_SHUFFLE(xmm3, xmm1, 0xD2); /* shufps */
    xmm3 = XMM_MUL(xmm3, xmm2); /* mulps */
    xmm2 = xmm0; /* movaps */
    xmm2 = XMM_SHUFFLE(xmm2, xmm0, 0xD2); /* shufps */
    xmm0 = xmm1; /* movaps */
    xmm0 = XMM_SHUFFLE(xmm0, xmm1, 0xC9); /* shufps */
    eax = esi + 0x60;
    xmm0 = XMM_MUL(xmm0, xmm2); /* mulps */
    PUSH32(esp, eax);
    xmm0 = XMM_SUB(xmm0, xmm3); /* subps */
    XMM_STORE(eax, xmm0); /* movaps */
    eax = MEM32(edx + 0x3C);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esp + 0x28;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00163B4Au); RECOMP_ABI_CALL(0x001634D0u, sub_001634D0); /* call 0x001634D0 */

loc_00163B4A: ;
    edx = MEM32(esi + 4);
    eax = MEM32(edx + 0x3C);
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esi + 0x70;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00163B61u); RECOMP_ABI_CALL(0x001635B0u, sub_001635B0); /* call 0x001635B0 */

loc_00163B61: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
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
 * sub_00163B70
 * Original: 0x00163B70 - 0x00163B96 (38 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00163B70(void)
{

loc_00163B70: ;
    eax = MEM32(esp + 4);
    xmm0 = XMM_MEM(eax); /* movaps */
    XMM_STORE(ecx + 0x10, xmm0); /* movaps */
    xmm0 = XMM_MEM(eax + 0x10); /* movaps */
    XMM_STORE(ecx + 0x20, xmm0); /* movaps */
    xmm0 = XMM_MEM(eax + 0x20); /* movaps */
    XMM_STORE(ecx + 0x30, xmm0); /* movaps */
    xmm0 = XMM_MEM(eax + 0x30); /* movaps */
    XMM_STORE(ecx + 0x40, xmm0); /* movaps */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00163BA0
 * Original: 0x00163BA0 - 0x00163BB2 (18 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00163BA0(void)
{

loc_00163BA0: ;
    eax = ecx;
    ecx = MEM32(esp + 4);
    MEM32(eax) = 0x4AEBF4;
    MEM32(eax + 4) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00163C00
 * Original: 0x00163C00 - 0x00163C47 (71 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00163C00(void)
{

loc_00163C00: ;
    eax = ecx;
    MEM16(eax + 6) = 1;
    MEM32(eax + 8) = 0x4AE854;
    MEM32(eax + 0xC) = 0x4AE858;
    MEM32(eax + 0x10) = 0x4AE85C;
    MEM32(eax + 0x14) = 0x4AE860;
    MEM32(eax) = 0x4AEC14;
    MEM32(eax + 8) = 0x4AEC10;
    MEM32(eax + 0xC) = 0x4AEC0C;
    MEM32(eax + 0x10) = 0x4AEC08;
    MEM32(eax + 0x14) = 0x4AEC04;
    esp += 4; return; /* ret */

}

/**
 * sub_00163C50
 * Original: 0x00163C50 - 0x00163C78 (40 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00163C50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00163C50: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00163C58u); RECOMP_ABI_CALL(0x00161390u, sub_00161390); /* call 0x00161390 */

loc_00163C58: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00163C72; /* je: equal / zero */

loc_00163C5F: ;
    edx = ZX16(MEM16(esi + 4));
    ecx = MEM32(0x62EBAC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xE);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x00163C72u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00163C6Fu); } /* indirect call */
    }

loc_00163C72: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00163C80
 * Original: 0x00163C80 - 0x00163C97 (23 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00163C80(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00163C80: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = ecx;
    MEM32(eax + 4) = ecx;
    MEM8(eax + 8) = 1;
    MEM32(eax + 0x70) = ecx;
    MEM32(eax + 0x100) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00163CA0
 * Original: 0x00163CA0 - 0x00163CAD (13 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00163CA0(void)
{

loc_00163CA0: ;
    eax = MEM32(ecx + 0x28);
    ecx = MEM32(esp + 4);
    eax = MEM32(eax + ecx * 4);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00163CB0
 * Original: 0x00163CB0 - 0x00163CB4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00163CB0(void)
{

loc_00163CB0: ;
    eax = MEM32(ecx + 0x2C);
    esp += 4; return; /* ret */

}

/**
 * sub_00163CC0
 * Original: 0x00163CC0 - 0x00163D02 (66 bytes, 21 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00163CC0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00163CC0: ;
    eax = ecx;
    ecx = MEM32(esp + 4);
    MEM32(eax) = 0x4AEC28;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(eax + 0x30) = LO8(edx);
    xmm0 = XMM_MEM(ecx); /* movaps */
    XMM_STORE(eax + 0x10, xmm0); /* movaps */
    xmm0 = XMM_MEM(ecx + 0x10); /* movaps */
    XMM_STORE(eax + 0x20, xmm0); /* movaps */
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(ecx + 0x20));
    MEM8(eax + 0x30) = LO8(ebx);
    ecx = MEM32(ecx + 0x24);
    MEM32(eax + 0x34) = ecx;
    ecx = MEM32(esp + 0xC);
    MEM32(eax + 0x40) = ecx;
    ecx = MEM32(esp + 0x10);
    MEM32(eax + 0x44) = ecx;
    MEM32(eax + 0x48) = edx;
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00163D10
 * Original: 0x00163D10 - 0x00163D2E (30 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00163D10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00163D10: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00163D18u); RECOMP_ABI_CALL(0x001617B0u, sub_001617B0); /* call 0x001617B0 */

loc_00163D18: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00163D28; /* je: equal / zero */

loc_00163D1F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00163D25u); RECOMP_ABI_CALL(0x000EB425u, sub_000EB425); /* call 0x000EB425 */

loc_00163D25: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00163D28: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00163D30
 * Original: 0x00163D30 - 0x00163D49 (25 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00163D30(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00163D30: ;
    PUSH32(esp, 0x161960);
    PUSH32(esp, 0x13);
    PUSH32(esp, 0xC0);
    _fb = (uint32_t)(0x270) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x270;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00163D48u); RECOMP_ABI_CALL(0x000EBA6Cu, sub_000EBA6C); /* call 0x000EBA6C */

loc_00163D48: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00163D50
 * Original: 0x00163D50 - 0x00163D97 (71 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00163D50(void)
{

loc_00163D50: ;
    eax = ecx;
    MEM16(eax + 6) = 1;
    MEM32(eax + 8) = 0x4AE854;
    MEM32(eax + 0xC) = 0x4AE858;
    MEM32(eax + 0x10) = 0x4AE85C;
    MEM32(eax + 0x14) = 0x4AE860;
    MEM32(eax) = 0x4AEC40;
    MEM32(eax + 8) = 0x4AEC3C;
    MEM32(eax + 0xC) = 0x4AEC38;
    MEM32(eax + 0x10) = 0x4AEC34;
    MEM32(eax + 0x14) = 0x4AEC30;
    esp += 4; return; /* ret */

}

/**
 * sub_00163DA0
 * Original: 0x00163DA0 - 0x00163DA5 (5 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00163DA0(void)
{

loc_00163DA0: ;
    SET_LO8(eax, 1);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_00163DB0
 * Original: 0x00163DB0 - 0x00163DB5 (5 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00163DB0(void)
{

loc_00163DB0: ;
    SET_LO8(eax, 1);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00163DC0
 * Original: 0x00163DC0 - 0x00163DC5 (5 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00163DC0(void)
{

loc_00163DC0: ;
    SET_LO8(eax, 1);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00163E00
 * Original: 0x00163E00 - 0x00163E07 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00163E00(void)
{

loc_00163E00: ;
    MEM32(ecx) = 0x4AE714;
    esp += 4; return; /* ret */

}

/**
 * sub_00163E10
 * Original: 0x00163E10 - 0x00163E26 (22 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00163E10(void)
{

loc_00163E10: ;
    eax = ecx;
    MEM16(eax + 6) = 1;
    MEM32(eax + 8) = 0;
    MEM32(eax) = 0x4AEC54;
    esp += 4; return; /* ret */

}

/**
 * sub_00163E30
 * Original: 0x00163E30 - 0x00163E58 (40 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00163E30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00163E30: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00163E38u); RECOMP_ABI_CALL(0x00161A40u, sub_00161A40); /* call 0x00161A40 */

loc_00163E38: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00163E52; /* je: equal / zero */

loc_00163E3F: ;
    edx = ZX16(MEM16(esi + 4));
    ecx = MEM32(0x62EBAC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1E);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x00163E52u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00163E4Fu); } /* indirect call */
    }

loc_00163E52: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00163E60
 * Original: 0x00163E60 - 0x00163E91 (49 bytes, 12 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00163E60(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00163E60: ;
    edx = MEM32(esp + 4);
    eax = ecx;
    ecx = MEM32(esp + 8);
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0xC) = edx;
    MEM16(eax + 6) = 1;
    MEM32(eax + 8) = 0;
    MEM32(eax) = 0x4AEC84;
    MEM16(ecx + 6) = MEM16(ecx + 6) + 1;
    _fa = (uint32_t)(MEM16(ecx + 6)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    ecx = MEM32(eax + 0xC);
    MEM16(ecx + 6) = MEM16(ecx + 6) + 1;
    _fa = (uint32_t)(MEM16(ecx + 6)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00163EA0
 * Original: 0x00163EA0 - 0x00163EC8 (40 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00163EA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00163EA0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00163EA8u); RECOMP_ABI_CALL(0x00163ED0u, sub_00163ED0); /* call 0x00163ED0 */

loc_00163EA8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00163EC2; /* je: equal / zero */

loc_00163EAF: ;
    edx = ZX16(MEM16(esi + 4));
    ecx = MEM32(0x62EBAC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1E);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x00163EC2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00163EBFu); } /* indirect call */
    }

loc_00163EC2: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00163ED0
 * Original: 0x00163ED0 - 0x00163F38 (104 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00163ED0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00163ED0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x3BC578);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 4) = esi;
    MEM32(esi) = 0x4AEC84;
    ecx = MEM32(esi + 0x10);
    MEM16(ecx + 6) = MEM16(ecx + 6) - 1;
    _fa = (uint32_t)(MEM16(ecx + 6)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    SET_LO16(eax, MEM16(ecx + 6));
    MEM32(esp + 0x10) = 0;
    if ((_fa != 0)) goto loc_00163F0E; /* jne: not equal / not zero */

loc_00163F08: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00163F0Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00163F0Cu); } /* indirect call */
    }

loc_00163F0E: ;
    ecx = MEM32(esi + 0xC);
    MEM16(ecx + 6) = MEM16(ecx + 6) - 1;
    _fa = (uint32_t)(MEM16(ecx + 6)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(ecx + 6)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 6), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00163F22; /* jne: not equal / not zero */

loc_00163F1C: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00163F22u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00163F20u); } /* indirect call */
    }

loc_00163F22: ;
    ecx = MEM32(esp + 8);
    MEM32(esi) = 0x4AE714;
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00163F40
 * Original: 0x00163F40 - 0x00163F5F (31 bytes, 7 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00163F40(void)
{

loc_00163F40: ;
    eax = ecx;
    ecx = MEM32(esp + 4);
    MEM16(eax + 6) = 1;
    MEM32(eax + 8) = 0;
    MEM32(eax) = 0x4AECAC;
    MEM32(eax + 0xC) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00163F60
 * Original: 0x00163F60 - 0x00163F63 (3 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00163F60(void)
{

loc_00163F60: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00163FB0
 * Original: 0x00163FB0 - 0x00163FB7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00163FB0(void)
{

loc_00163FB0: ;
    MEM32(ecx) = 0x4AE714;
    esp += 4; return; /* ret */

}

/**
 * sub_00163FC0
 * Original: 0x00163FC0 - 0x0016406A (170 bytes, 73 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00163FC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00163FC0: ;
    eax = MEM32(esp + 8);
    edx = MEM32(eax + 0x18);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00164040; /* jne: not equal / not zero */

loc_00163FCB: ;
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x20);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016403F; /* je: equal / zero */

loc_00163FD3: ;
    PUSH32(esp, ebx);
    ebx = MEM32(ecx + 8);
    ecx = MEM32(esi + 0x34);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_LE(_fas, _fbs)) goto loc_00163FF1; /* jle: less or equal (signed <=) */

loc_00163FE1: ;
    edx = MEM32(esi + 0x30);

loc_00163FE4: ;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), 0x6F (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00164043; /* je: equal / zero */

loc_00163FE9: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00163FE4; /* jl: less (signed <) */

loc_00163FF1: ;
    PUSH32(esp, 0x64);
    ecx = esi;
    PUSH32(esp, 0x00163FFAu); RECOMP_ABI_CALL(0x00163780u, sub_00163780); /* call 0x00163780 */

loc_00163FFA: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016403D; /* je: equal / zero */

loc_00163FFE: ;
    PUSH32(esp, 0x64);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x0016400Cu); RECOMP_ABI_CALL(0x00163740u, sub_00163740); /* call 0x00163740 */

loc_0016400C: ;
    esi = MEM32(eax);
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00164015u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00164012u); } /* indirect call */
    }

loc_00164015: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0016403D; /* jne: not equal / not zero */

loc_00164019: ;
    ecx = MEM32(esi + 0xC);
    _fa = (uint32_t)(MEM8(ecx + 0x40)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 0x40), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0016403D; /* jne: not equal / not zero */

loc_00164022: ;
    edx = MEM32(esi + 8);
    eax = MEM32(edx + 0x54);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0016403D; /* jl: less (signed <) */

loc_0016402C: ;
    ecx = MEM32(0x67D180);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016403D; /* je: equal / zero */

loc_00164036: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    { uint32_t _icall_target = ecx; PUSH32(esp, 0x0016403Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00164038u); } /* indirect call */
    }

loc_0016403A: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0016403D: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_0016403F: ;
    POP32(esp, esi);

loc_00164040: ;
    esp += 16; return; /* ret 12 */

loc_00164043: ;
    edi = MEM32(0x67D17C);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016403D; /* je: equal / zero */

loc_0016404D: ;
    PUSH32(esp, 0x6F);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0016405Bu); RECOMP_ABI_CALL(0x00163740u, sub_00163740); /* call 0x00163740 */

loc_0016405B: ;
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    { uint32_t _icall_target = edi; PUSH32(esp, 0x00164061u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0016405Fu); } /* indirect call */
    }

loc_00164061: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00164070
 * Original: 0x00164070 - 0x001640C1 (81 bytes, 36 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00164070(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00164070: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_001640BC; /* je: equal / zero */

loc_0016407C: ;
    ecx = MEM32(esi + 0x34);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001640B2; /* jle: less or equal (signed <=) */

loc_00164085: ;
    edx = MEM32(esi + 0x30);

loc_00164088: ;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x64) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), 0x64 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001640A4; /* je: equal / zero */

loc_0016408D: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00164088; /* jl: less (signed <) */

loc_00164095: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x64);
    ecx = esi;
    PUSH32(esp, 0x0016409Fu); RECOMP_ABI_CALL(0x00206580u, sub_00206580); /* call 0x00206580 */

loc_0016409F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_001640A4: ;
    PUSH32(esp, 0x64);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001640B2u); RECOMP_ABI_CALL(0x00206470u, sub_00206470); /* call 0x00206470 */

loc_001640B2: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x64);
    ecx = esi;
    PUSH32(esp, 0x001640BCu); RECOMP_ABI_CALL(0x00206580u, sub_00206580); /* call 0x00206580 */

loc_001640BC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001640D0
 * Original: 0x001640D0 - 0x001640D9 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001640D0(void)
{

loc_001640D0: ;
    eax = ecx;
    MEM32(eax) = 0x4AECDC;
    esp += 4; return; /* ret */

}

/**
 * sub_00164110
 * Original: 0x00164110 - 0x00164117 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00164110(void)
{

loc_00164110: ;
    MEM32(ecx) = 0x4AE9EC;
    esp += 4; return; /* ret */

}

/**
 * sub_00164120
 * Original: 0x00164120 - 0x00164140 (32 bytes, 13 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00164120(void)
{

loc_00164120: ;
    ecx = MEM32(0x72077C);
    eax = MEM32(ecx);
    PUSH32(esp, esi);
    esi = MEM32(0x62EBAC);
    PUSH32(esp, edi);
    edi = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00164135u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00164132u); } /* indirect call */
    }

loc_00164135: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edi + 0x18); PUSH32(esp, 0x0016413Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00164138u); } /* indirect call */
    }

loc_0016413B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00164140
 * Original: 0x00164140 - 0x001641C7 (135 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00164140(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00164140: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x21C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001641C2; /* je: equal / zero */

loc_00164151: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x10C);
    eax = eax + edi + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001641C2; /* je: equal / zero */

loc_0016415F: ;
    eax = MEM32(edi + 0x10B0);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001641C1; /* jle: less or equal (signed <=) */

loc_0016416C: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    PUSH32(esp, ebx);
    ebx = edi + 0x290;
    if (CMP_GE(_fas, _fbs)) goto loc_001641AF; /* jge: greater or equal (signed >=) */

loc_00164177: ;
    eax = MEM32(ebx + 0x90);
    ecx = MEM32(eax + 0x80);
    MEM32(esp + 0xC) = ecx;
    edx = MEM32(eax + 0x84);
    ecx = esp + 0xC;
    MEM32(esp + 0x10) = edx;
    eax = MEM32(eax + 0x88);
    PUSH32(esp, ecx);
    ecx = ebx;
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x1C) = 0x3F800000;
    PUSH32(esp, 0x001641AFu); RECOMP_ABI_CALL(0x001E63F0u, sub_001E63F0); /* call 0x001E63F0 */

loc_001641AF: ;
    eax = MEM32(edi + 0x10B0);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xC0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0xC0;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00164177; /* jl: less (signed <) */

loc_001641C0: ;
    POP32(esp, ebx);

loc_001641C1: ;
    POP32(esp, esi);

loc_001641C2: ;
    POP32(esp, edi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001641D0
 * Original: 0x001641D0 - 0x00164200 (48 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001641D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001641D0: ;
    eax = MEM32(esp + 8);
    eax = MEM32(eax);
    edx = MEM32(eax);
    ecx = MEM32(eax + 4);
    ecx = MEM32(edx + ecx * 4 + -4);
    MEM32(eax + 4) = MEM32(eax + 4) - 1;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x180)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax + 0x180) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001641FF; /* je: equal / zero */

loc_001641EE: ;
    MEM16(ecx + 6) = MEM16(ecx + 6) - 1;
    _fa = (uint32_t)(MEM16(ecx + 6)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(ecx + 6)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 6), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001641FF; /* jne: not equal / not zero */

loc_001641F9: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x001641FFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001641FDu); } /* indirect call */
    }

loc_001641FF: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00164220
 * Original: 0x00164220 - 0x00164288 (104 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00164220(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00164220: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x10B8);
    MEM8(esi + 0x10B4) = 0;
    ecx = MEM32(eax + 4);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00164278; /* jle: less or equal (signed <=) */

loc_0016423A: ;
    /* nop */

loc_00164240: ;
    ecx = MEM32(esi + 0x10B8);
    edx = MEM32(ecx);
    eax = MEM32(edx + edi * 4);
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016425E; /* je: equal / zero */

loc_00164252: ;
    ecx = MEM32(esi + 0x224);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0016425Eu); RECOMP_ABI_CALL(0x00201DB0u, sub_00201DB0); /* call 0x00201DB0 */

loc_0016425E: ;
    eax = MEM32(esi + 0x10B8);
    ecx = MEM32(eax + 4);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00164240; /* jl: less (signed <) */

loc_0016426C: ;
    ecx = eax;
    POP32(esp, edi);
    MEM32(ecx + 4) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00164278: ;
    edx = MEM32(esi + 0x10B8);
    POP32(esp, edi);
    MEM32(edx + 4) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00164290
 * Original: 0x00164290 - 0x001642FD (109 bytes, 41 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00164290(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00164290: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, eax);
    edi = esi + 0x60;
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001642AAu); RECOMP_ABI_CALL(0x0015BDF0u, sub_0015BDF0); /* call 0x0015BDF0 */

loc_001642AA: ;
    ecx = MEM32(edi);
    edx = MEM32(esi + 0x64);
    eax = MEM32(esi + 0x68);
    MEM32(esp + 0x18) = ecx;
    ecx = MEM32(esi + 0x70);
    MEM32(esp + 0x1C) = edx;
    MEM32(esp + 0x20) = eax;
    MEM32(esp + 0x24) = 0;
    esi = MEM32(ecx + 0xC);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001642D6u); RECOMP_ABI_CALL(0x001F9DD0u, sub_001F9DD0); /* call 0x001F9DD0 */

loc_001642D6: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001642E8; /* jne: not equal / not zero */

loc_001642DA: ;
    eax = MEM32(esi + 0x44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001642E8; /* je: equal / zero */

loc_001642E1: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001642E8u); RECOMP_ABI_CALL(0x001F9DE0u, sub_001F9DE0); /* call 0x001F9DE0 */

loc_001642E8: ;
    ecx = MEM32(esi + 0x3C);
    edx = MEM32(ecx);
    eax = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x50); PUSH32(esp, 0x001642F5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001642F2u); } /* indirect call */
    }

loc_001642F5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00164300
 * Original: 0x00164300 - 0x0016434D (77 bytes, 29 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00164300(void)
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

loc_00164300: ;
    eax = MEM32(esp + 4);
    fp_push(MEMF(eax + 8)); /* fld float */
    PUSH32(esp, esi);
    fp_push(MEMF(eax + 4)); /* fld float */
    eax = MEM32(eax);
    esi = ecx + 0x50;
    MEM32(esi) = eax;
    MEMF(esi + 4) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, edi);
    MEMF(esi + 8) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esi + 0xC) = 0;
    ecx = MEM32(ecx + 0x70);
    edi = MEM32(ecx + 0xC);
    ecx = edi;
    PUSH32(esp, 0x0016432Du); RECOMP_ABI_CALL(0x001F9DD0u, sub_001F9DD0); /* call 0x001F9DD0 */

loc_0016432D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0016433F; /* jne: not equal / not zero */

loc_00164331: ;
    eax = MEM32(edi + 0x44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016433F; /* je: equal / zero */

loc_00164338: ;
    ecx = edi;
    PUSH32(esp, 0x0016433Fu); RECOMP_ABI_CALL(0x001F9DE0u, sub_001F9DE0); /* call 0x001F9DE0 */

loc_0016433F: ;
    ecx = MEM32(edi + 0x3C);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x00164348u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00164345u); } /* indirect call */
    }

loc_00164348: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00164350
 * Original: 0x00164350 - 0x0016440D (189 bytes, 46 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00164350(void)
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

loc_00164350: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 8);
    edx = MEM32(eax);
    fp_push(MEMF(eax + 0x30)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x49F9D0)); /* fmul dword ptr [0x49f9d0] */
    MEM32(esp + 0x10) = edx;
    edx = MEM32(eax + 4);
    MEM32(esp + 0x14) = edx;
    edx = MEM32(eax + 8);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 0x34)); /* fld float */
    MEM32(esp + 0x18) = edx;
    edx = MEM32(eax + 0x10);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x49F9D0)); /* fmul dword ptr [0x49f9d0] */
    MEM32(esp + 0x20) = edx;
    edx = MEM32(eax + 0x14);
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0x24) = edx;
    edx = MEM32(eax + 0x18);
    fp_push(MEMF(eax + 0x38)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x49F9D0)); /* fmul dword ptr [0x49f9d0] */
    MEM32(esp + 0x28) = edx;
    edx = MEM32(eax + 0x20);
    MEM32(esp + 0x30) = edx;
    edx = MEM32(eax + 0x24);
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(eax + 0x28);
    xmm0 = XMM_MEM(esp); /* movaps */
    XMM_STORE(ecx + 0x200, xmm0); /* movaps */
    MEM32(esp + 0x1C) = 0;
    xmm0 = XMM_MEM(esp + 0x10); /* movaps */
    XMM_STORE(ecx + 0x1D0, xmm0); /* movaps */
    MEM32(esp + 0x2C) = 0;
    xmm0 = XMM_MEM(esp + 0x20); /* movaps */
    MEM32(esp + 0x34) = edx;
    MEM32(esp + 0x38) = eax;
    MEM32(esp + 0x3C) = 0;
    XMM_STORE(ecx + 0x1E0, xmm0); /* movaps */
    xmm0 = XMM_MEM(esp + 0x30); /* movaps */
    XMM_STORE(ecx + 0x1F0, xmm0); /* movaps */
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
 * sub_00164410
 * Original: 0x00164410 - 0x001645A7 (407 bytes, 122 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00164410(void)
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

loc_00164410: ;
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
    edi = MEM32(ebp + 0xC);
    fp_push(MEMF(edi)); /* fld float */
    esi = ecx;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x49F9D0)); /* fmul dword ptr [0x49f9d0] */
    ebx = esi + 0x80;
    PUSH32(esp, eax);
    ecx = ebx;
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0x30) = 0;
    fp_push(MEMF(edi + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x49F9D0)); /* fmul dword ptr [0x49f9d0] */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edi + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x49F9D0)); /* fmul dword ptr [0x49f9d0] */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00164460u); RECOMP_ABI_CALL(0x002A7610u, sub_002A7610); /* call 0x002A7610 */

loc_00164460: ;
    xmm0 = XMM_MEM(esp + 0x20); /* movaps */
    XMM_STORE(ebx + 0x30, xmm0); /* movaps */
    ecx = MEM32(esi + 0x70);
    edx = MEM32(ecx + 0xC);
    SET_LO8(ecx, MEM8(ebp + 0x10));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    eax = MEM32(edx + 0x3C);
    if (CMP_EQ(_fa, _fb)) goto loc_001644A7; /* je: equal / zero */

loc_00164479: ;
    edx = MEM32(eax + 0xB0);
    ecx = esi + 0xC;
    MEM32(ecx) = edx;
    MEM32(esp + 0x18) = ecx;
    ecx = MEM32(eax + 0xB4);
    MEM32(esi + 0x10) = ecx;
    edx = MEM32(eax + 0xB8);
    MEM32(esi + 0x14) = edx;
    MEM32(esi + 0x18) = 0x3F800000;
    xmm0 = XMM_MEM(eax + 0x30); /* movaps */
    goto loc_001644BF;

loc_001644A7: ;
    ecx = esi + 0x1C;
    eax = esi + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    MEM32(esp + 0x20) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001644B8u); RECOMP_ABI_CALL(0x0015BDF0u, sub_0015BDF0); /* call 0x0015BDF0 */

loc_001644B8: ;
    xmm0 = XMM_MEM(esi + 0x30); /* movaps */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001644BF: ;
    edx = MEM32(ebp + 8);
    XMM_STORE(esi + 0x40, xmm0); /* movaps */
    fp_push(MEMF(edi)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x49F9D0)); /* fmul dword ptr [0x49f9d0] */
    ecx = esi + 0x40;
    ebx = esi + 0x1C;
    eax = esi + 0x30;
    MEMF(ebx) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, ecx);
    fp_push(MEMF(edi + 4)); /* fld float */
    PUSH32(esp, eax);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x49F9D0)); /* fmul dword ptr [0x49f9d0] */
    ecx = esp + 0x28;
    MEMF(esi + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edi + 8)); /* fld float */
    MEM32(esi + 0x28) = 0x3F800000;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x49F9D0)); /* fmul dword ptr [0x49f9d0] */
    MEMF(esi + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_MEM(edx); /* movaps */
    XMM_STORE(eax, xmm0); /* movaps */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00164509u); RECOMP_ABI_CALL(0x001607A0u, sub_001607A0); /* call 0x001607A0 */

loc_00164509: ;
    eax = esp + 0x30;
    PUSH32(esp, eax);
    ecx = esp + 0x24;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00164517u); RECOMP_ABI_CALL(0x00160520u, sub_00160520); /* call 0x00160520 */

loc_00164517: ;
    xmm0 = XMM_MEM(eax); /* movaps */
    xmm1 = XMM_MEM(esp + 0x20); /* movaps */
    xmm2 = xmm0; /* movaps */
    xmm2 = XMM_SHUFFLE(xmm2, xmm0, 0); /* shufps */
    xmm2 = XMM_MUL(xmm2, xmm1); /* mulps */
    XMM_STORE(esp + 0x20, xmm2); /* movaps */
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x4AED14)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x4aed14] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0016454A; /* jne: not equal / not zero */

loc_00164541: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    XMM_STORE(esi + 0x50, xmm0); /* movaps */
    goto loc_00164580;

loc_0016454A: ;
    edi = esi + 0x50;
    PUSH32(esp, edi);
    ecx = esp + 0x24;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00164557u); RECOMP_ABI_CALL(0x001608B0u, sub_001608B0); /* call 0x001608B0 */

loc_00164557: ;
    ecx = esp + 0x20;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00164560u); RECOMP_ABI_CALL(0x00160860u, sub_00160860); /* call 0x00160860 */

loc_00164560: ;
    xmm1 = XMM_MEM(edi); /* movaps */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x4AE700)); /* fmul dword ptr [0x4ae700] */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    xmm2 = xmm0; /* movaps */
    xmm2 = XMM_SHUFFLE(xmm2, xmm0, 0); /* shufps */
    xmm2 = XMM_MUL(xmm2, xmm1); /* mulps */
    XMM_STORE(edi, xmm2); /* movaps */

loc_00164580: ;
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, ecx);
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x60;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0016458Fu); RECOMP_ABI_CALL(0x0015BD20u, sub_0015BD20); /* call 0x0015BD20 */

loc_0016458F: ;
    PUSH32(esp, 0x42700000);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0016459Bu); RECOMP_ABI_CALL(0x0015BD50u, sub_0015BD50); /* call 0x0015BD50 */

loc_0016459B: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
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
 * sub_001645B0
 * Original: 0x001645B0 - 0x00164602 (82 bytes, 34 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001645B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_001645B0: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xC (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_001645FE; /* jge: greater or equal (signed >=) */

loc_001645BA: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x001645C6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001645C3u); } /* indirect call */
    }

loc_001645C6: ;
    SET_LO8(ecx, MEM8(esp + 0x14));
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    eax = ~eax;
    _cf = 0; /* logical op clears CF */
    eax = eax & esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    edx = 0x100000;
    ecx = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_001645E6; /* je: equal / zero */

loc_001645DD: ;
    if (LO8(ecx)) _cf = (int)(((edx) >> (32 - (LO8(ecx)))) & 1);
    edx = edx << LO8(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = MEM32(esi + 4);
    _cf = 0; /* logical op clears CF */
    ecx = ecx | edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_001645EF;

loc_001645E6: ;
    if (LO8(ecx)) _cf = (int)(((edx) >> (32 - (LO8(ecx)))) & 1);
    edx = edx << LO8(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = MEM32(esi + 4);
    edx = ~edx;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_001645EF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(esi + 4) = ecx;
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_001645FE; /* je: equal / zero */

loc_001645F7: ;
    ecx = MEM32(esp + 0x14);
    MEM32(eax + 0x60) = ecx;

loc_001645FE: ;
    POP32(esp, edi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00164610
 * Original: 0x00164610 - 0x00164638 (40 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00164610(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00164610: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00164618u); RECOMP_ABI_CALL(0x00164640u, sub_00164640); /* call 0x00164640 */

loc_00164618: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00164632; /* je: equal / zero */

loc_0016461F: ;
    edx = ZX16(MEM16(esi + 4));
    ecx = MEM32(0x62EBAC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xE);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x00164632u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0016462Fu); } /* indirect call */
    }

loc_00164632: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00164640
 * Original: 0x00164640 - 0x00164645 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00164640(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00164640: ;
    g_seh_ebp = ebp; sub_002047A0(); return; /* tail jmp 0x002047A0 */

}

/**
 * sub_00164650
 * Original: 0x00164650 - 0x00164797 (327 bytes, 86 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00164650(void)
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

loc_00164650: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x3BC598);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _fb = (uint32_t)(0xB8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xB8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x58);
    edx = MEM32(ebp + 0x18);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    xmm0 = XMM_MEM(esi); /* movaps */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0xC);
    xmm1 = XMM_MEM(edi); /* movaps */
    ecx = esp + 0x10;
    MEM8(esp + 0x60) = LO8(ebx);
    MEM32(esp + 0x24) = 0x3F800000;
    MEM32(esp + 0x30) = ebx;
    XMM_STORE(esp + 0x40, xmm0); /* movaps */
    XMM_STORE(esp + 0x50, xmm1); /* movaps */
    MEM32(esp + 0x70) = 0x4AEC28;
    XMM_STORE(esp + 0x80, xmm0); /* movaps */
    XMM_STORE(esp + 0x90, xmm1); /* movaps */
    MEM8(esp + 0xA0) = LO8(ebx);
    MEM32(esp + 0xA4) = eax;
    MEM32(esp + 0xB0) = ecx;
    MEM32(esp + 0xB4) = edx;
    MEM32(esp + 0xB8) = ebx;
    eax = MEM32(0x67D144);
    ecx = MEM32(eax + 0xC4);
    edx = MEM32(ecx);
    eax = esp + 0x70;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = esp + 0x54;
    PUSH32(esp, eax);
    eax = esp + 0x48;
    PUSH32(esp, eax);
    MEM32(esp + 0xD8) = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x00164708u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00164705u); } /* indirect call */
    }

loc_00164708: ;
    _fa = (uint32_t)(MEM32(esp + 0x30)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x30), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016477E; /* je: equal / zero */

loc_0016470E: ;
    ecx = MEM32(esp + 0x24);
    fp_push(MEMF(esp + 0x10)); /* fld float */
    xmm1 = XMM_MEM(edi); /* movaps */
    xmm3 = XMM_MEM(0x4AE720); /* movaps */
    edx = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0x14);
    MEM32(esp + 0xC) = ecx;
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    ecx = MEM32(esp + 0x14);
    xmm0 = XMM_SHUFFLE(xmm0, xmm0, 0); /* shufps */
    xmm2 = xmm0; /* movaps */
    xmm2 = XMM_MUL(xmm2, xmm1); /* mulps */
    xmm1 = XMM_MEM(esi); /* movaps */
    xmm3 = XMM_SUB(xmm3, xmm0); /* subps */
    xmm3 = XMM_MUL(xmm3, xmm1); /* mulps */
    xmm3 = XMM_ADD(xmm3, xmm2); /* addps */
    XMM_STORE(edx, xmm3); /* movaps */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x18);
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = edx;
    MEM32(eax + 0xC) = 0x3F800000;
    eax = MEM32(esp + 0xB8);
    ecx = MEM32(esp + 0xC4);
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

loc_0016477E: ;
    ecx = MEM32(esp + 0xC4);
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001647A0
 * Original: 0x001647A0 - 0x00164870 (208 bytes, 55 insns)
 * CC: cdecl, 5 params, returns float_sse
 * Frame: standard_frame
 */
void sub_001647A0(void)
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

loc_001647A0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 8);
    fp_push(MEMF(eax)); /* fld float */
    edx = MEM32(ebp + 0x14);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x49F9D0)); /* fmul dword ptr [0x49f9d0] */
    MEM32(esp + 0x2C) = 0;
    MEM32(esp + 0x1C) = 0;
    MEM32(esp) = 0;
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 4) = 0;
    fp_push(MEMF(eax + 4)); /* fld float */
    MEM32(esp + 8) = 0;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x49F9D0)); /* fmul dword ptr [0x49f9d0] */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 8)); /* fld float */
    eax = MEM32(ebp + 0xC);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x49F9D0)); /* fmul dword ptr [0x49f9d0] */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x49F9D0)); /* fmul dword ptr [0x49f9d0] */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x49F9D0)); /* fmul dword ptr [0x49f9d0] */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 8)); /* fld float */
    eax = MEM32(ebp + 0x18);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x49F9D0)); /* fmul dword ptr [0x49f9d0] */
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    eax = esp + 8;
    PUSH32(esp, eax);
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    eax = esp + 0x30;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0016483Eu); RECOMP_ABI_CALL(0x00164650u, sub_00164650); /* call 0x00164650 */

loc_0016483E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016486A; /* je: equal / zero */

loc_00164842: ;
    fp_push(MEMF(esp)); /* fld float */
    ecx = MEM32(ebp + 0x10);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x49E578)); /* fmul dword ptr [0x49e578] */
    MEMF(ecx) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x49E578)); /* fmul dword ptr [0x49e578] */
    MEMF(ecx + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x49E578)); /* fmul dword ptr [0x49e578] */
    MEMF(ecx + 8) = (float)fp_top(); fp_pop(); /* fstp */

loc_0016486A: ;
    esp = ebp;
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00164870
 * Original: 0x00164870 - 0x001648AC (60 bytes, 24 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00164870(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00164870: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(MEM8(esi + 4)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 4), 4 (8-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_00164885; /* jne: not equal / not zero */

loc_0016487E: ;
    MEM32(esi + 4) = MEM32(esi + 4) | 0x84;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_00164885: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0016488Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00164889u); } /* indirect call */
    }

loc_0016488C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001648A7; /* jne: not equal / not zero */

loc_00164891: ;
    esi = MEM32(esi + 0x6C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001648A7; /* je: equal / zero */

loc_00164898: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x001648A0u); RECOMP_ABI_CALL(0x00164870u, sub_00164870); /* call 0x00164870 */

loc_001648A0: ;
    esi = MEM32(esi + 0x68);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00164898; /* jne: not equal / not zero */

loc_001648A7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001648B0
 * Original: 0x001648B0 - 0x001648F8 (72 bytes, 29 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001648B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001648B0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(MEM8(esi + 4)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 4), 4 (8-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_001648D1; /* je: equal / zero */

loc_001648BE: ;
    ecx = MEM32(esi + 4);
    ecx = ecx & 0xFFFFFFFBu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = ecx;
    eax = eax | 0x80;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi + 4) = ecx;
    MEM32(esi + 4) = eax;

loc_001648D1: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x001648D8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001648D5u); } /* indirect call */
    }

loc_001648D8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001648F3; /* jne: not equal / not zero */

loc_001648DD: ;
    esi = MEM32(esi + 0x6C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001648F3; /* je: equal / zero */

loc_001648E4: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x001648ECu); RECOMP_ABI_CALL(0x001648B0u, sub_001648B0); /* call 0x001648B0 */

loc_001648EC: ;
    esi = MEM32(esi + 0x68);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001648E4; /* jne: not equal / not zero */

loc_001648F3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00164900
 * Original: 0x00164900 - 0x0016493A (58 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00164900(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00164900: ;
    ecx = MEM32(esp + 4);
    SET_LO8(edx, MEM8(esp + 8));
    eax = ecx;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x3238);
    _fb = (uint32_t)(0x5D1AB8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x5D1AB8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(eax + 0x2840);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00164922; /* je: equal / zero */

loc_0016491F: ;
    MEM8(eax + 0x24) = LO8(edx);

loc_00164922: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    PUSH32(esp, ecx);
    ecx = 0x67CF20;
    PUSH32(esp, 4);
    if (CMP_EQ(_fa, _fb)) goto loc_00164934; /* je: equal / zero */

loc_0016492E: ;
    PUSH32(esp, 0x00164933u); RECOMP_ABI_CALL(0x00162BB0u, sub_00162BB0); /* call 0x00162BB0 */

loc_00164933: ;
    esp += 4; return; /* ret */

loc_00164934: ;
    PUSH32(esp, 0x00164939u); RECOMP_ABI_CALL(0x00162C30u, sub_00162C30); /* call 0x00162C30 */

loc_00164939: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00164940
 * Original: 0x00164940 - 0x00164AA6 (358 bytes, 131 insns)
 * Category: game_vtable
 * CC: thiscall, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00164940(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00164940: ;
    PUSH32(esp, ecx);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x19C);
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0x14) = 0;
    if (CMP_NE(_fa, _fb)) goto loc_00164969; /* jne: not equal / not zero */

loc_00164961: ;
    ecx = MEM32(esp + 0x1C);
    MEM32(esp + 0x14) = ecx;

loc_00164969: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00164AA0; /* je: equal / zero */

loc_00164971: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x20);

loc_00164977: ;
    ebx = MEM32(esi + 4);
    edx = ebx;
    SET_LO8(ecx, 1);
    edx = edx >> 6;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    SET_LO8(edx, LO8(edx) & LO8(ecx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    if ((_fa == 0)) goto loc_00164999; /* je: equal / zero */

loc_00164985: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00164997; /* je: equal / zero */

loc_00164989: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00164997; /* je: equal / zero */

loc_0016498E: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00164997; /* je: equal / zero */

loc_00164993: ;
    SET_LO8(ecx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    goto loc_00164999;

loc_00164997: ;
    SET_LO8(ecx, 1);

loc_00164999: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 4 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00164A90; /* ja: above (unsigned >) */

loc_001649A2: ;
    { uint32_t _jt = MEM32(edi * 4 + 0x164AA8); /* switch: 5 entries, 4 targets */
    if (_jt == 0x001649A9u) goto loc_001649A9;
    if (_jt == 0x00164A0Fu) goto loc_00164A0F;
    if (_jt == 0x00164A3Du) goto loc_00164A3D;
    if (_jt == 0x00164A41u) goto loc_00164A41;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_001649A9: ;
    eax = MEM32(esi + 0x194);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001649C6; /* je: equal / zero */

loc_001649B3: ;
    ecx = MEM32(eax + 4);
    ecx = ecx >> 6;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001649C6; /* je: equal / zero */

loc_001649BE: ;
    ecx = MEM32(eax + 0x194);
    goto loc_001649C8;

loc_001649C6: ;
    ecx = eax;

loc_001649C8: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001649DA; /* je: equal / zero */

loc_001649CC: ;
    ecx = MEM32(esi + 8);
    _fa = (uint32_t)(MEM8(ecx + 8)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 8), 0x20 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001649DA; /* je: equal / zero */

loc_001649D5: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001649DE; /* je: equal / zero */

loc_001649DA: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001649E0; /* je: equal / zero */

loc_001649DE: ;
    SET_LO8(edx, 1);

loc_001649E0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00164A0B; /* je: equal / zero */

loc_001649E4: ;
    ecx = MEM32(eax + 4);
    ecx = ecx >> 6;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001649F5; /* je: equal / zero */

loc_001649EF: ;
    eax = MEM32(eax + 0x194);

loc_001649F5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00164A0B; /* je: equal / zero */

loc_001649F9: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(MEM8(eax + 8)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 8), 0x20 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00164A0B; /* je: equal / zero */

loc_00164A02: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 8 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00164A0B; /* jne: not equal / not zero */

loc_00164A07: ;
    SET_LO8(ecx, 1);
    goto loc_00164A3D;

loc_00164A0B: ;
    SET_LO8(ecx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    goto loc_00164A3D;

loc_00164A0F: ;
    eax = MEM32(esi + 0x194);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00164A3D; /* je: equal / zero */

loc_00164A19: ;
    ebx = MEM32(eax + 4);
    ebx = ebx >> 6;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00164A2A; /* je: equal / zero */

loc_00164A24: ;
    eax = MEM32(eax + 0x194);

loc_00164A2A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00164A3D; /* je: equal / zero */

loc_00164A2E: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(MEM8(eax + 8)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 8), 0x20 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00164A3D; /* je: equal / zero */

loc_00164A37: ;
    _fa = (uint32_t)(MEM8(esi + 4)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 4), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00164A41; /* je: equal / zero */

loc_00164A3D: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00164A90; /* je: equal / zero */

loc_00164A41: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00164A5C; /* je: equal / zero */

loc_00164A45: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00164A51; /* jne: not equal / not zero */

loc_00164A49: ;
    eax = MEM32(esp + 0x1C);
    MEM32(eax) = MEM32(eax) + 1;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_00164A5C;

loc_00164A51: ;
    ecx = MEM32(esp + 0x24);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = ebp; PUSH32(esp, 0x00164A59u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00164A57u); } /* indirect call */
    }

loc_00164A59: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00164A5C: ;
    SET_LO8(eax, MEM8(esp + 0x28));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00164A6F; /* jne: not equal / not zero */

loc_00164A64: ;
    edx = MEM32(esi + 4);
    edx = edx >> 6;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00164A90; /* je: equal / zero */

loc_00164A6F: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00164A90; /* je: equal / zero */

loc_00164A73: ;
    eax = MEM32(esi + 0x19C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00164A90; /* je: equal / zero */

loc_00164A7D: ;
    eax = MEM32(esp + 0x24);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00164A90u); RECOMP_ABI_CALL(0x00164940u, sub_00164940); /* call 0x00164940 */

loc_00164A90: ;
    esi = MEM32(esi + 0x198);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00164977; /* jne: not equal / not zero */

loc_00164A9E: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_00164AA0: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_00164AA6
 * Original: 0x00164AA6 - 0x00164AC0 (26 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00164AA6(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00164AA6: ;
    edi = edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF00164A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xF00164A (32-bit) */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, 0 /* seg:ss */);
    _fb = (uint32_t)(HI8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(ecx + 0x41001649) = MEM8(ecx + 0x41001649) + HI8(ecx);
    _fa = (uint32_t)(MEM8(ecx + 0x41001649)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, 0 /* seg:ss */);
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(ecx + 0x4A) = MEM8(ecx + 0x4A) + LO8(eax);
    _fa = (uint32_t)(MEM8(ecx + 0x4A)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    PUSH32(esp, 0 /* seg:ss */);
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_HI8(eax, HI8(eax) + LO8(ecx));
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00164AC0
 * Original: 0x00164AC0 - 0x00164B37 (119 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00164AC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00164AC0: ;
    eax = MEM32(ecx + 0x194);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00164B36; /* je: equal / zero */

loc_00164ACA: ;
    edx = MEM32(eax + 4);
    edx = edx >> 6;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00164ADB; /* je: equal / zero */

loc_00164AD5: ;
    eax = MEM32(eax + 0x194);

loc_00164ADB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00164B36; /* je: equal / zero */

loc_00164ADF: ;
    eax = MEM32(ecx + 8);
    _fa = (uint32_t)(MEM8(eax + 8)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 8), 0x20 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00164B36; /* je: equal / zero */

loc_00164AE8: ;
    _fa = (uint32_t)(MEM8(ecx + 4)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 4), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00164B36; /* je: equal / zero */

loc_00164AEE: ;
    edx = MEM32(ecx + 4);
    edx = edx & 0xFFFFFFF7u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = edx;
    eax = eax | 0x80;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ecx + 4) = edx;
    MEM32(ecx + 4) = eax;
    eax = MEM32(ecx + 0x194);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00164B1C; /* je: equal / zero */

loc_00164B0B: ;
    edx = MEM32(eax + 4);
    edx = edx >> 6;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00164B1C; /* je: equal / zero */

loc_00164B16: ;
    eax = MEM32(eax + 0x194);

loc_00164B1C: ;
    MEM32(eax + 4) = MEM32(eax + 4) | 0x80;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = MEM32(ecx + 0x34);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00164B36; /* je: equal / zero */

loc_00164B2A: ;
    PUSH32(esp, ecx);
    ecx = MEM32(0x67D144);
    PUSH32(esp, 0x00164B36u); RECOMP_ABI_CALL(0x001FF030u, sub_001FF030); /* call 0x001FF030 */

loc_00164B36: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00164B40
 * Original: 0x00164B40 - 0x00164BC1 (129 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00164B40(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00164B40: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x161960);
    PUSH32(esp, 0x162F30);
    PUSH32(esp, 0x13);
    esi = ecx;
    PUSH32(esp, 0xC0);
    eax = esi + 0x270;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00164B60u); RECOMP_ABI_CALL(0x000EB99Au, sub_000EB99A); /* call 0x000EB99A */

loc_00164B60: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = ecx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi + 0x10) = eax;
    MEM32(esi + 0x11C) = eax;
    MEM32(esi + 0x240) = eax;
    MEM32(esi + 0x254) = eax;
    MEM32(esi + 0x10B0) = eax;
    MEM32(esi + 0x258) = eax;
    MEM32(esi + 0x25C) = eax;
    MEM32(esi + 0x260) = eax;
    MEM32(esi + 0x224) = eax;
    MEM8(esi + 0x10B4) = LO8(eax);
    MEM32(esi + 0x264) = eax;
    MEM8(esi + 0x10E4) = LO8(eax);
    MEM32(esi + 0x220) = ecx;
    MEM32(esi + 0x21C) = ecx;
    MEM8(esi + 0x10E5) = 1;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00164BD0
 * Original: 0x00164BD0 - 0x00164C65 (149 bytes, 48 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00164BD0(void)
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

loc_00164BD0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    SET_LO8(eax, MEM8(ecx + 4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    PUSH32(esp, esi);
    if ((((uint8_t)((uint8_t)(_fa) - (uint8_t)(_fb)) >> 7) == 0)) goto loc_00164C16; /* jns: not sign (positive) */

loc_00164BE1: ;
    MEM32(ecx + 4) = MEM32(ecx + 4) | 0x200;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = MEM32(ebp + 8);
    fp_push(MEMF(eax + 8)); /* fld float */
    fp_push(MEMF(eax + 4)); /* fld float */
    eax = MEM32(eax);
    MEM32(ecx + 0x1A0) = eax;
    MEMF(ecx + 0x1A4) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(ecx + 0x1A8) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(ecx + 0x1AC) = 0;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_00164C16: ;
    eax = MEM32(ebp + 8);
    edx = MEM32(eax);
    esi = MEM32(ecx + 0xC);
    MEM32(esp + 0x10) = edx;
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    ecx = esi;
    MEM32(esp + 0x14) = edx;
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x1C) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00164C3Fu); RECOMP_ABI_CALL(0x001F9DD0u, sub_001F9DD0); /* call 0x001F9DD0 */

loc_00164C3F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00164C51; /* jne: not equal / not zero */

loc_00164C43: ;
    eax = MEM32(esi + 0x44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00164C51; /* je: equal / zero */

loc_00164C4A: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00164C51u); RECOMP_ABI_CALL(0x001F9DE0u, sub_001F9DE0); /* call 0x001F9DE0 */

loc_00164C51: ;
    ecx = MEM32(esi + 0x3C);
    edx = MEM32(ecx);
    eax = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x5C); PUSH32(esp, 0x00164C5Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00164C5Bu); } /* indirect call */
    }

loc_00164C5E: ;
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
 * sub_00164C70
 * Original: 0x00164C70 - 0x00164D6E (254 bytes, 73 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00164C70(void)
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

loc_00164C70: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    SET_LO8(eax, MEM8(ecx + 4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    PUSH32(esp, esi);
    if ((((uint8_t)((uint8_t)(_fa) - (uint8_t)(_fb)) >> 7) == 0)) goto loc_00164CE9; /* jns: not sign (positive) */

loc_00164C81: ;
    MEM32(ecx + 4) = MEM32(ecx + 4) | 0x100;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = MEM32(ebp + 0xC);
    fp_push(MEMF(eax + 8)); /* fld float */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    fp_push(MEMF(eax + 4)); /* fld float */
    eax = MEM32(eax);
    MEM32(ecx + 0x1B0) = eax;
    MEMF(ecx + 0x1B4) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(ebp + 8);
    MEMF(ecx + 0x1B8) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(ecx + 0x1BC) = edx;
    fp_push(MEMF(eax + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x49F9D0)); /* fmul dword ptr [0x49f9d0] */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x49F9D0)); /* fmul dword ptr [0x49f9d0] */
    fp_push(MEMF(eax)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x49F9D0)); /* fmul dword ptr [0x49f9d0] */
    MEMF(ecx + 0x1C0) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(ecx + 0x1C4) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(ecx + 0x1C8) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(ecx + 0x1CC) = edx;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

loc_00164CE9: ;
    eax = MEM32(ebp + 8);
    fp_push(MEMF(eax)); /* fld float */
    esi = MEM32(ecx + 0xC);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x49F9D0)); /* fmul dword ptr [0x49f9d0] */
    ecx = esi;
    MEM32(esp + 0x1C) = 0;
    MEM32(esp + 0x2C) = 0;
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x49F9D0)); /* fmul dword ptr [0x49f9d0] */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 8)); /* fld float */
    eax = MEM32(ebp + 0xC);
    edx = MEM32(eax);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x49F9D0)); /* fmul dword ptr [0x49f9d0] */
    MEM32(esp + 0x20) = edx;
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0x24) = edx;
    MEM32(esp + 0x28) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00164D43u); RECOMP_ABI_CALL(0x001F9DD0u, sub_001F9DD0); /* call 0x001F9DD0 */

loc_00164D43: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00164D55; /* jne: not equal / not zero */

loc_00164D47: ;
    eax = MEM32(esi + 0x44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00164D55; /* je: equal / zero */

loc_00164D4E: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00164D55u); RECOMP_ABI_CALL(0x001F9DE0u, sub_001F9DE0); /* call 0x001F9DE0 */

loc_00164D55: ;
    ecx = MEM32(esi + 0x3C);
    edx = MEM32(ecx);
    eax = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x60); PUSH32(esp, 0x00164D67u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00164D64u); } /* indirect call */
    }

loc_00164D67: ;
    POP32(esp, esi);
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
 * sub_00164D70
 * Original: 0x00164D70 - 0x00164DFD (141 bytes, 53 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00164D70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00164D70: ;
    PUSH32(esp, ebx);
    eax = ecx;
    SET_LO8(ecx, MEM8(esp + 8));
    PUSH32(esp, esi);
    goto loc_00164D80;

    /* nop */

loc_00164D80: ;
    edx = MEM32(eax + 0x194);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00164D9D; /* je: equal / zero */

loc_00164D8A: ;
    ebx = MEM32(edx + 4);
    ebx = ebx >> 6;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00164D9D; /* je: equal / zero */

loc_00164D95: ;
    esi = MEM32(edx + 0x194);
    goto loc_00164D9F;

loc_00164D9D: ;
    esi = edx;

loc_00164D9F: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00164DF8; /* je: equal / zero */

loc_00164DA3: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00164DBA; /* je: equal / zero */

loc_00164DA7: ;
    ebx = MEM32(edx + 4);
    ebx = ebx >> 6;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00164DBA; /* je: equal / zero */

loc_00164DB2: ;
    esi = MEM32(edx + 0x194);
    goto loc_00164DBC;

loc_00164DBA: ;
    esi = edx;

loc_00164DBC: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00164DCF; /* je: equal / zero */

loc_00164DC0: ;
    esi = MEM32(eax + 8);
    _fa = (uint32_t)(MEM8(esi + 8)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 8), 0x20 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00164DCF; /* je: equal / zero */

loc_00164DC9: ;
    _fa = (uint32_t)(MEM8(eax + 4)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 4), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00164DDE; /* je: equal / zero */

loc_00164DCF: ;
    ebx = MEM32(eax + 4);
    ebx = ebx >> 6;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00164DDE; /* jne: not equal / not zero */

loc_00164DDA: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00164DF8; /* jne: not equal / not zero */

loc_00164DDE: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00164DF4; /* je: equal / zero */

loc_00164DE2: ;
    eax = MEM32(edx + 4);
    eax = eax >> 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00164DF4; /* je: equal / zero */

loc_00164DEC: ;
    eax = MEM32(edx + 0x194);
    goto loc_00164D80;

loc_00164DF4: ;
    eax = edx;
    goto loc_00164D80;

loc_00164DF8: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00164E00
 * Original: 0x00164E00 - 0x00164E49 (73 bytes, 33 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00164E00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00164E00: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x2C);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00164E44; /* jle: less or equal (signed <=) */

loc_00164E0D: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x20);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x20);
    goto loc_00164E20;

    /* nop */

loc_00164E20: ;
    ecx = MEM32(esp + 0x1C);
    edx = MEM32(esp + 0x18);
    eax = MEM32(edi + 0x28);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    { uint32_t _icall_target = MEM32(eax + esi * 4); PUSH32(esp, 0x00164E37u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00164E34u); } /* indirect call */
    }

loc_00164E37: ;
    eax = MEM32(edi + 0x2C);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00164E20; /* jl: less (signed <) */

loc_00164E42: ;
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_00164E44: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_00164E50
 * Original: 0x00164E50 - 0x00164EC8 (120 bytes, 40 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00164E50(void)
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

loc_00164E50: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 8);
    fp_push(MEMF(eax)); /* fld float */
    PUSH32(esp, esi);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x49F9D0)); /* fmul dword ptr [0x49f9d0] */
    esi = MEM32(ecx + 0xC);
    ecx = esi;
    MEM32(esp + 0x1C) = 0;
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x49F9D0)); /* fmul dword ptr [0x49f9d0] */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x49F9D0)); /* fmul dword ptr [0x49f9d0] */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00164E95u); RECOMP_ABI_CALL(0x001F9DD0u, sub_001F9DD0); /* call 0x001F9DD0 */

loc_00164E95: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00164EA7; /* jne: not equal / not zero */

loc_00164E99: ;
    eax = MEM32(esi + 0x44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00164EA7; /* je: equal / zero */

loc_00164EA0: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00164EA7u); RECOMP_ABI_CALL(0x001F9DE0u, sub_001F9DE0); /* call 0x001F9DE0 */

loc_00164EA7: ;
    _fa = (uint32_t)(MEM8(esi + 0x40)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x40), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00164EB4; /* je: equal / zero */

loc_00164EAD: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00164EC1; /* jne: not equal / not zero */

loc_00164EB4: ;
    ecx = MEM32(esi + 0x3C);
    eax = MEM32(ecx);
    edx = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x40); PUSH32(esp, 0x00164EC1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00164EBEu); } /* indirect call */
    }

loc_00164EC1: ;
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
 * sub_00164ED0
 * Original: 0x00164ED0 - 0x00165084 (436 bytes, 135 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00164ED0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00164ED0: ;
    _fb = (uint32_t)(0x74) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x74;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x50C524);
    MEM32(esp + 0x70) = eax;
    SET_LO8(eax, MEM8(0x67CF15));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    PUSH32(esp, esi);
    esi = 0x64;
    if (CMP_EQ(_fa, _fb)) goto loc_00164F99; /* je: equal / zero */

loc_00164EEF: ;
    ecx = MEM32(ecx + 0x224);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00164F99; /* je: equal / zero */

loc_00164EFD: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    edx = esp + 8;
    PUSH32(esp, edx);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00164F11u); RECOMP_ABI_CALL(0x001FCD40u, sub_001FCD40); /* call 0x001FCD40 */

loc_00164F11: ;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    edx = esp + 0x14;
    PUSH32(esp, 0x4AED84);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00164F25u); RECOMP_ABI_CALL(0x000EB2C2u, sub_000EB2C2); /* call 0x000EB2C2 */

loc_00164F25: ;
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, 0x80);
    PUSH32(esp, esi);
    PUSH32(esp, 0x32);
    PUSH32(esp, 0x00164F39u); RECOMP_ABI_CALL(0x00152960u, sub_00152960); /* call 0x00152960 */

loc_00164F39: ;
    ecx = MEM32(esp + 0x24);
    PUSH32(esp, ecx);
    edx = esp + 0x34;
    PUSH32(esp, 0x4AED6C);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00164F4Du); RECOMP_ABI_CALL(0x000EB2C2u, sub_000EB2C2); /* call 0x000EB2C2 */

loc_00164F4D: ;
    eax = esp + 0x3C;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, 0x80);
    PUSH32(esp, 0x78);
    PUSH32(esp, 0x32);
    PUSH32(esp, 0x00164F62u); RECOMP_ABI_CALL(0x00152960u, sub_00152960); /* call 0x00152960 */

loc_00164F62: ;
    ecx = MEM32(esp + 0x48);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    edx = esp + 0x14;
    PUSH32(esp, 0x4AED5C);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00164F79u); RECOMP_ABI_CALL(0x000EB2C2u, sub_000EB2C2); /* call 0x000EB2C2 */

loc_00164F79: ;
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, 0x80);
    PUSH32(esp, 0x8C);
    PUSH32(esp, 0x32);
    PUSH32(esp, 0x00164F91u); RECOMP_ABI_CALL(0x00152960u, sub_00152960); /* call 0x00152960 */

loc_00164F91: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = 0xA0;

loc_00164F99: ;
    SET_LO8(eax, MEM8(0x67CF14));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00164FD0; /* je: equal / zero */

loc_00164FA2: ;
    eax = MEM32(0x5CE878);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)MEM32(0x510038));
      edx = (uint32_t)(_dividend % (uint32_t)MEM32(0x510038)); }
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00164FD0; /* jne: not equal / not zero */

loc_00164FB3: ;
    ecx = MEM32(0x72077C);
    edx = MEM32(ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = MEM32(0x62EBAC);
    ebx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00164FC8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00164FC5u); } /* indirect call */
    }

loc_00164FC8: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(ebx + 0x18); PUSH32(esp, 0x00164FCEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00164FCBu); } /* indirect call */
    }

loc_00164FCE: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_00164FD0: ;
    SET_LO8(eax, MEM8(0x67CF16));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00165076; /* je: equal / zero */

loc_00164FDD: ;
    eax = MEM32(0x506310);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00164FE8u); RECOMP_ABI_CALL(0x00102FF0u, sub_00102FF0); /* call 0x00102FF0 */

loc_00164FE8: ;
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, 0x4AED40);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00164FF8u); RECOMP_ABI_CALL(0x000EB2C2u, sub_000EB2C2); /* call 0x000EB2C2 */

loc_00164FF8: ;
    edx = esp + 0x20;
    PUSH32(esp, edx);
    PUSH32(esp, 1);
    PUSH32(esp, 0x80);
    PUSH32(esp, esi);
    PUSH32(esp, 0x32);
    PUSH32(esp, 0x0016500Cu); RECOMP_ABI_CALL(0x00152960u, sub_00152960); /* call 0x00152960 */

loc_0016500C: ;
    eax = MEM32(0x67D13C);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x14;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00165020; /* jne: not equal / not zero */

loc_0016501C: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0016502E;

loc_00165020: ;
    ecx = eax;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x10C);
    _fb = (uint32_t)(0x67CF24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x67CF24;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0016502E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    ecx = MEM32(ecx + 0xEC);
    if (CMP_NE(_fa, _fb)) goto loc_0016503D; /* jne: not equal / not zero */

loc_00165039: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00165048;

loc_0016503D: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x10C);
    _fb = (uint32_t)(0x67CF24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x67CF24;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00165048: ;
    eax = MEM32(eax + 0xFC);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esp + 0x18;
    PUSH32(esp, 0x4AED18);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0016505Fu); RECOMP_ABI_CALL(0x000EB2C2u, sub_000EB2C2); /* call 0x000EB2C2 */

loc_0016505F: ;
    edx = esp + 0x20;
    PUSH32(esp, edx);
    PUSH32(esp, 1);
    PUSH32(esp, 0x80);
    PUSH32(esp, esi);
    PUSH32(esp, 0x32);
    PUSH32(esp, 0x00165073u); RECOMP_ABI_CALL(0x00152960u, sub_00152960); /* call 0x00152960 */

loc_00165073: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00165076: ;
    ecx = MEM32(esp + 0x74);
    POP32(esp, esi);
    PUSH32(esp, 0x00165080u); RECOMP_ABI_CALL(0x000EB37Bu, sub_000EB37B); /* call 0x000EB37B */

loc_00165080: ;
    _fb = (uint32_t)(0x74) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x74;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00165090
 * Original: 0x00165090 - 0x001650C0 (48 bytes, 21 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00165090(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00165090: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 8);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001650B8; /* jge: greater or equal (signed >=) */

loc_001650A4: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001650AC; /* jl: less (signed <) */

loc_001650AA: ;
    eax = esi;

loc_001650AC: ;
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001650B5u); RECOMP_ABI_CALL(0x00101B30u, sub_00101B30); /* call 0x00101B30 */

loc_001650B5: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001650B8: ;
    MEM32(edi + 4) = esi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001650C0
 * Original: 0x001650C0 - 0x001650F0 (48 bytes, 21 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001650C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001650C0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 8);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001650E8; /* jge: greater or equal (signed >=) */

loc_001650D4: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001650DC; /* jl: less (signed <) */

loc_001650DA: ;
    eax = esi;

loc_001650DC: ;
    PUSH32(esp, 8);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001650E5u); RECOMP_ABI_CALL(0x00101B30u, sub_00101B30); /* call 0x00101B30 */

loc_001650E5: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001650E8: ;
    MEM32(edi + 4) = esi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001650F0
 * Original: 0x001650F0 - 0x00165131 (65 bytes, 25 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001650F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001650F0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 8);
    eax = MEM32(esi + 4);
    ecx = ecx & 0x7FFFFFFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0016511C; /* jne: not equal / not zero */

loc_00165103: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016510B; /* je: equal / zero */

loc_00165107: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00165110;

loc_0016510B: ;
    eax = 1;

loc_00165110: ;
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00165119u); RECOMP_ABI_CALL(0x00101B30u, sub_00101B30); /* call 0x00101B30 */

loc_00165119: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0016511C: ;
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
 * sub_00165140
 * Original: 0x00165140 - 0x00165167 (39 bytes, 15 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00165140(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00165140: ;
    eax = MEM32(ecx + 8);
    edx = MEM32(esp + 4);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00165164; /* jge: greater or equal (signed >=) */

loc_00165150: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00165158; /* jl: less (signed <) */

loc_00165156: ;
    eax = edx;

loc_00165158: ;
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00165161u); RECOMP_ABI_CALL(0x00101B30u, sub_00101B30); /* call 0x00101B30 */

loc_00165161: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00165164: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00165170
 * Original: 0x00165170 - 0x001651B1 (65 bytes, 25 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00165170(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00165170: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 8);
    eax = MEM32(esi + 4);
    ecx = ecx & 0x7FFFFFFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0016519C; /* jne: not equal / not zero */

loc_00165183: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016518B; /* je: equal / zero */

loc_00165187: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00165190;

loc_0016518B: ;
    eax = 1;

loc_00165190: ;
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00165199u); RECOMP_ABI_CALL(0x00101B30u, sub_00101B30); /* call 0x00101B30 */

loc_00165199: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0016519C: ;
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
 * sub_001651C0
 * Original: 0x001651C0 - 0x001651E5 (37 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001651C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001651C0: ;
    edx = ecx;
    eax = MEM32(edx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_001651E4; /* js: sign (negative) */

loc_001651C9: ;
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
    { uint32_t _icall_target = MEM32(esi + 0x14); PUSH32(esp, 0x001651E3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001651E0u); } /* indirect call */
    }

loc_001651E3: ;
    POP32(esp, esi);

loc_001651E4: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001651F0
 * Original: 0x001651F0 - 0x00165215 (37 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001651F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001651F0: ;
    edx = ecx;
    eax = MEM32(edx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_00165214; /* js: sign (negative) */

loc_001651F9: ;
    ecx = MEM32(0x62EBAC);
    PUSH32(esp, esi);
    esi = MEM32(ecx);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x10);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    eax = MEM32(edx);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(esi + 0x14); PUSH32(esp, 0x00165213u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00165210u); } /* indirect call */
    }

loc_00165213: ;
    POP32(esp, esi);

loc_00165214: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00165220
 * Original: 0x00165220 - 0x00165245 (37 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00165220(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00165220: ;
    edx = ecx;
    eax = MEM32(edx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_00165244; /* js: sign (negative) */

loc_00165229: ;
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
    { uint32_t _icall_target = MEM32(esi + 0x14); PUSH32(esp, 0x00165243u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00165240u); } /* indirect call */
    }

loc_00165243: ;
    POP32(esp, esi);

loc_00165244: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00165250
 * Original: 0x00165250 - 0x00165275 (37 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00165250(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00165250: ;
    edx = ecx;
    eax = MEM32(edx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_00165274; /* js: sign (negative) */

loc_00165259: ;
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
    { uint32_t _icall_target = MEM32(esi + 0x14); PUSH32(esp, 0x00165273u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00165270u); } /* indirect call */
    }

loc_00165273: ;
    POP32(esp, esi);

loc_00165274: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00165280
 * Original: 0x00165280 - 0x001652A8 (40 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00165280(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00165280: ;
    edx = ecx;
    eax = MEM32(edx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_001652A7; /* js: sign (negative) */

loc_00165289: ;
    ecx = MEM32(0x62EBAC);
    edx = MEM32(edx);
    PUSH32(esp, esi);
    esi = MEM32(ecx);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax + eax * 2;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x10);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(esi + 0x14); PUSH32(esp, 0x001652A6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001652A3u); } /* indirect call */
    }

loc_001652A6: ;
    POP32(esp, esi);

loc_001652A7: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001652B0
 * Original: 0x001652B0 - 0x001652D5 (37 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001652B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001652B0: ;
    edx = ecx;
    eax = MEM32(edx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_001652D4; /* js: sign (negative) */

loc_001652B9: ;
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
    { uint32_t _icall_target = MEM32(esi + 0x14); PUSH32(esp, 0x001652D3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001652D0u); } /* indirect call */
    }

loc_001652D3: ;
    POP32(esp, esi);

loc_001652D4: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001652E0
 * Original: 0x001652E0 - 0x001653A7 (199 bytes, 80 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001652E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001652E0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x10);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(eax + 4);
    eax = MEM32(esi + 4);
    ecx = eax + edi;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x18) = eax;
    eax = MEM32(esi + 8);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0xC) = ecx;
    if (CMP_GE(_fas, _fbs)) goto loc_00165327; /* jge: greater or equal (signed >=) */

loc_0016530F: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00165317; /* jl: less (signed <) */

loc_00165315: ;
    eax = ecx;

loc_00165317: ;
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00165320u); RECOMP_ABI_CALL(0x00101B30u, sub_00101B30); /* call 0x00101B30 */

loc_00165320: ;
    ecx = MEM32(esp + 0x18);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00165327: ;
    eax = MEM32(esi);
    PUSH32(esp, ebp);
    ebp = ebx * 4;
    edx = eax + ebp;
    MEM32(esp + 0x14) = edx;
    edx = edi + ebx;
    edx = eax + edx * 4;
    eax = MEM32(esp + 0x1C);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_0016535F; /* js: sign (negative) */

loc_00165345: ;
    ebx = MEM32(esp + 0x14);
    ecx = edx + eax * 4;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    /* nop */

loc_00165350: ;
    edx = MEM32(ebx + ecx);
    MEM32(ecx) = edx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00165350; /* jne: not equal / not zero */

loc_0016535B: ;
    ecx = MEM32(esp + 0x10);

loc_0016535F: ;
    eax = MEM32(esp + 0x20);
    ebx = MEM32(eax);
    eax = MEM32(esi);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = edi + -1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    POP32(esp, ebp);
    if (CMP_L(_fas, _fbs)) goto loc_0016539B; /* jl: less (signed <) */

loc_00165371: ;
    edi = ebx;
    ecx = eax + edx * 4;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = edx + 1;
    goto loc_00165380;

    /* nop */

loc_00165380: ;
    edx = MEM32(edi + ecx);
    MEM32(ecx) = edx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00165380; /* jne: not equal / not zero */

loc_0016538B: ;
    eax = MEM32(esp + 0xC);
    POP32(esp, edi);
    MEM32(esi + 4) = eax;
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_0016539B: ;
    POP32(esp, edi);
    MEM32(esi + 4) = ecx;
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001653B0
 * Original: 0x001653B0 - 0x001653D5 (37 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001653B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001653B0: ;
    edx = ecx;
    eax = MEM32(edx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_001653D4; /* js: sign (negative) */

loc_001653B9: ;
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
    { uint32_t _icall_target = MEM32(esi + 0x14); PUSH32(esp, 0x001653D3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001653D0u); } /* indirect call */
    }

loc_001653D3: ;
    POP32(esp, esi);

loc_001653D4: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001653E0
 * Original: 0x001653E0 - 0x0016542B (75 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001653E0(void)
{

loc_001653E0: ;
    eax = ecx;
    MEM16(eax + 6) = 1;
    MEM32(eax + 8) = 0x4AE854;
    MEM32(eax + 0xC) = 0x4AE858;
    MEM32(eax + 0x10) = 0x4AE85C;
    MEM32(eax + 0x14) = 0x4AE860;
    MEM32(eax) = 0x4AEDA4;
    MEM32(eax + 8) = 0x4AEDA0;
    MEM32(eax + 0xC) = 0x4AED9C;
    MEM32(eax + 0x10) = 0x4AED98;
    MEM32(eax + 0x14) = 0x4AED94;
    MEM8(eax + 0x18) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_00165430
 * Original: 0x00165430 - 0x00165435 (5 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00165430(void)
{

loc_00165430: ;
    SET_LO8(eax, 1);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_00165440
 * Original: 0x00165440 - 0x00165445 (5 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00165440(void)
{

loc_00165440: ;
    SET_LO8(eax, 1);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00165450
 * Original: 0x00165450 - 0x00165455 (5 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00165450(void)
{

loc_00165450: ;
    SET_LO8(eax, 1);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00165490
 * Original: 0x00165490 - 0x00165497 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00165490(void)
{

loc_00165490: ;
    MEM32(ecx) = 0x4AE714;
    esp += 4; return; /* ret */

}

/**
 * sub_001654A0
 * Original: 0x001654A0 - 0x001654CB (43 bytes, 15 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001654A0(void)
{

loc_001654A0: ;
    PUSH32(esp, ecx);
    eax = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x10);
    edx = esp + 4;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    MEM32(esp + 0x14) = 0;
    PUSH32(esp, 0x001654C4u); RECOMP_ABI_CALL(0x00164940u, sub_00164940); /* call 0x00164940 */

loc_001654C4: ;
    eax = MEM32(esp);
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00165800
 * Original: 0x00165800 - 0x00165887 (135 bytes, 52 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00165800(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00165800: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 8);
    eax = MEM32(edi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00165869; /* je: equal / zero */

loc_0016580C: ;
    SET_LO8(eax, MEM8(ecx + 0x10B4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016586D; /* je: equal / zero */

loc_00165816: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x10B8);
    ecx = MEM32(esi + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00165834; /* jle: less or equal (signed <=) */

loc_00165826: ;
    edx = MEM32(esi);

loc_00165828: ;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00165868; /* je: equal / zero */

loc_0016582C: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00165828; /* jl: less (signed <) */

loc_00165834: ;
    ecx = MEM32(esi + 8);
    eax = MEM32(esi + 4);
    ecx = ecx & 0x7FFFFFFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0016585D; /* jne: not equal / not zero */

loc_00165844: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016584C; /* je: equal / zero */

loc_00165848: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00165851;

loc_0016584C: ;
    eax = 1;

loc_00165851: ;
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0016585Au); RECOMP_ABI_CALL(0x00101B30u, sub_00101B30); /* call 0x00101B30 */

loc_0016585A: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0016585D: ;
    edx = MEM32(esi + 4);
    eax = MEM32(esi);
    MEM32(eax + edx * 4) = edi;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00165868: ;
    POP32(esp, esi);

loc_00165869: ;
    POP32(esp, edi);
    esp += 12; return; /* ret 8 */

loc_0016586D: ;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0016587B; /* jne: not equal / not zero */

loc_00165875: ;
    eax = MEM32(ecx + 0x224);

loc_0016587B: ;
    PUSH32(esp, edi);
    ecx = eax;
    PUSH32(esp, 0x00165883u); RECOMP_ABI_CALL(0x00201DB0u, sub_00201DB0); /* call 0x00201DB0 */

loc_00165883: ;
    POP32(esp, edi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00165890
 * Original: 0x00165890 - 0x001659B3 (291 bytes, 102 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00165890(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00165890: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    SET_LO8(eax, MEM8(esp + 0x14));
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(edx + 0x19C);
    MEM8(esp + 4) = LO8(eax);
    PUSH32(esp, edi);
    eax = 0x162800;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0xC) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_001658BE; /* jne: not equal / not zero */

loc_001658BA: ;
    edi = esp + 8;

loc_001658BE: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001659AB; /* je: equal / zero */

loc_001658C6: ;
    PUSH32(esp, ebx);
    goto loc_001658D0;

    /* nop */

loc_001658D0: ;
    eax = MEM32(esi + 0x194);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001658ED; /* je: equal / zero */

loc_001658DA: ;
    ecx = MEM32(eax + 4);
    ecx = ecx >> 6;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001658ED; /* je: equal / zero */

loc_001658E5: ;
    ecx = MEM32(eax + 0x194);
    goto loc_001658EF;

loc_001658ED: ;
    ecx = eax;

loc_001658EF: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00165904; /* je: equal / zero */

loc_001658F3: ;
    edx = MEM32(esi + 8);
    _fa = (uint32_t)(MEM8(edx + 8)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edx + 8), 0x20 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00165904; /* je: equal / zero */

loc_001658FC: ;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00165915; /* je: equal / zero */

loc_00165904: ;
    ecx = MEM32(esi + 4);
    edx = ecx;
    edx = edx >> 6;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00165915; /* jne: not equal / not zero */

loc_00165911: ;
    SET_LO8(edx, 0); /* xor self */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    goto loc_00165917;

loc_00165915: ;
    SET_LO8(edx, 1);

loc_00165917: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00165942; /* je: equal / zero */

loc_0016591B: ;
    ebx = MEM32(eax + 4);
    ebx = ebx >> 6;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0016592C; /* je: equal / zero */

loc_00165926: ;
    eax = MEM32(eax + 0x194);

loc_0016592C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00165942; /* je: equal / zero */

loc_00165930: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(MEM8(eax + 8)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 8), 0x20 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00165942; /* je: equal / zero */

loc_00165939: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 8 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00165942; /* jne: not equal / not zero */

loc_0016593E: ;
    SET_LO8(eax, 1);
    goto loc_00165944;

loc_00165942: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_00165944: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016599C; /* je: equal / zero */

loc_00165948: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00165967; /* je: equal / zero */

loc_0016594C: ;
    ecx = 0x162800;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00165959; /* jne: not equal / not zero */

loc_00165955: ;
    MEM32(edi) = MEM32(edi) + 1;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_00165967;

loc_00165959: ;
    edx = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00165964u); RECOMP_ABI_CALL(0x00162800u, sub_00162800); /* call 0x00162800 */

loc_00165964: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00165967: ;
    SET_LO8(eax, MEM8(esp + 0x24));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00165979; /* jne: not equal / not zero */

loc_0016596F: ;
    eax = MEM32(esi + 4);
    eax = eax >> 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0016599C; /* je: equal / zero */

loc_00165979: ;
    eax = MEM32(esi + 0x19C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016599C; /* je: equal / zero */

loc_00165983: ;
    PUSH32(esp, 1);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, 2);
    PUSH32(esp, esi);
    PUSH32(esp, 0x162800);
    ecx = 0x67CF20;
    PUSH32(esp, 0x0016599Cu); RECOMP_ABI_CALL(0x00164940u, sub_00164940); /* call 0x00164940 */

loc_0016599C: ;
    esi = MEM32(esi + 0x198);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001658D0; /* jne: not equal / not zero */

loc_001659AA: ;
    POP32(esp, ebx);

loc_001659AB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_001659C0
 * Original: 0x001659C0 - 0x00165A94 (212 bytes, 81 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001659C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001659C0: ;
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(edi + 0x70);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00165A90; /* je: equal / zero */

loc_001659CE: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(edi);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 3 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_001659E1; /* je: equal / zero */

loc_001659DC: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 2 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00165A19; /* jne: not equal / not zero */

loc_001659E1: ;
    eax = MEM32(ecx + 0x194);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00165A19; /* je: equal / zero */

loc_001659EB: ;
    edx = MEM32(eax + 4);
    if (6) _cf = (int)(((edx) >> ((6) - 1)) & 1);
    edx = edx >> 6;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_001659FC; /* je: equal / zero */

loc_001659F6: ;
    eax = MEM32(eax + 0x194);

loc_001659FC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00165A19; /* je: equal / zero */

loc_00165A00: ;
    eax = MEM32(ecx + 8);
    _fa = (uint32_t)(MEM8(eax + 8)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 8), 0x20 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_00165A19; /* je: equal / zero */

loc_00165A09: ;
    _fa = (uint32_t)(MEM8(ecx + 4)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 4), 8 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_00165A19; /* jne: not equal / not zero */

loc_00165A0F: ;
    esi = MEM32(ecx + 0x34);
    _cf = (int)((esi) != 0);
    esi = (uint32_t)(-(int32_t)esi);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    esi = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(4)) >> 32) & 1);
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00165A19: ;
    ebx = MEM32(esp + 0x1C);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00165A24; /* je: equal / zero */

loc_00165A21: ;
    MEM32(edi + 4) = esi;

loc_00165A24: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, esi (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(edi) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_00165A76; /* je: equal / zero */

loc_00165A2A: ;
    MEM8(edi + 8) = 1;
    edx = MEM32(ecx + 0xC);
    eax = MEM32(edx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00165A76; /* je: equal / zero */

loc_00165A38: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 3 (32-bit) */
    _cf = (int)(_fa < _fb);
    ecx = edx;
    eax = MEM32(ecx + 8);
    if (CMP_NE(_fa, _fb)) goto loc_00165A55; /* jne: not equal / not zero */

loc_00165A42: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00165A6B; /* je: equal / zero */

loc_00165A46: ;
    _fa = (uint32_t)(MEM8(ecx + 0x40)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 0x40), 1 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_00165A6B; /* jne: not equal / not zero */

loc_00165A4C: ;
    PUSH32(esp, 5);
    PUSH32(esp, 0x00165A53u); RECOMP_ABI_CALL(0x00206000u, sub_00206000); /* call 0x00206000 */

loc_00165A53: ;
    goto loc_00165A6B;

loc_00165A55: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00165A66; /* je: equal / zero */

loc_00165A59: ;
    _fa = (uint32_t)(MEM8(ecx + 0x40)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 0x40), 1 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_00165A66; /* jne: not equal / not zero */

loc_00165A5F: ;
    PUSH32(esp, 6);
    PUSH32(esp, 0x00165A66u); RECOMP_ABI_CALL(0x00206000u, sub_00206000); /* call 0x00206000 */

loc_00165A66: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00165A76; /* je: equal / zero */

loc_00165A6B: ;
    eax = MEM32(edi + 0x70);
    ecx = MEM32(eax + 0xC);
    PUSH32(esp, 0x00165A76u); RECOMP_ABI_CALL(0x001F9DE0u, sub_001F9DE0); /* call 0x001F9DE0 */

loc_00165A76: ;
    ecx = MEM32(esp + 0x18);
    edx = MEM32(edi);
    eax = MEM32(edi + 0x70);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = 0x67CF20;
    PUSH32(esp, 0x00165A8Du); RECOMP_ABI_CALL(0x00165890u, sub_00165890); /* call 0x00165890 */

loc_00165A8D: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_00165A90: ;
    POP32(esp, edi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00165AA0
 * Original: 0x00165AA0 - 0x00165C59 (441 bytes, 145 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00165AA0(void)
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

loc_00165AA0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x54;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 8);
    fp_push(MEMF(eax + 0x30)); /* fld float */
    PUSH32(esp, ebx);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x49F9D0)); /* fmul dword ptr [0x49f9d0] */
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    MEMF(esi + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    fp_push(MEMF(eax + 0x34)); /* fld float */
    ecx = 0x3F800000;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x49F9D0)); /* fmul dword ptr [0x49f9d0] */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEM32(esp + 0x3C) = edi;
    MEM32(esp + 0x4C) = edi;
    MEMF(esi + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0x5C) = edi;
    fp_push(MEMF(eax + 0x38)); /* fld float */
    MEM32(esi + 0x28) = ecx;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x49F9D0)); /* fmul dword ptr [0x49f9d0] */
    MEM32(esi + 0x6C) = ecx;
    MEM32(esi + 0x60) = edi;
    MEM32(esi + 0x64) = edi;
    MEMF(esi + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esi + 0x68) = edi;
    XMM_STORE(esi + 0x50, xmm0); /* movaps */
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    MEM32(esp + 0x30) = ecx;
    ecx = MEM32(eax + 8);
    MEM32(esp + 0x38) = ecx;
    ecx = MEM32(eax + 0x14);
    MEM32(esp + 0x34) = edx;
    edx = MEM32(eax + 0x10);
    MEM32(esp + 0x44) = ecx;
    ecx = MEM32(eax + 0x20);
    MEM32(esp + 0x40) = edx;
    edx = MEM32(eax + 0x18);
    MEM32(esp + 0x50) = ecx;
    MEM32(esp + 0x48) = edx;
    edx = MEM32(eax + 0x24);
    eax = MEM32(eax + 0x28);
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    ecx = esp + 0x24;
    MEM32(esp + 0x58) = edx;
    MEM32(esp + 0x5C) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00165B4Au); RECOMP_ABI_CALL(0x002A77C0u, sub_002A77C0); /* call 0x002A77C0 */

loc_00165B4A: ;
    xmm0 = XMM_MEM(esp + 0x20); /* movaps */
    eax = MEM32(esi + 0x70);
    ebx = esi + 0x30;
    XMM_STORE(ebx, xmm0); /* movaps */
    ecx = MEM32(eax + 8);
    edx = esi + 0xC0;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(ecx + 0x54);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(0x67D16C); PUSH32(esp, 0x00165B6Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00165B66u); } /* indirect call */
    }

loc_00165B6C: ;
    eax = MEM32(esi + 0x70);
    ecx = MEM32(eax + 0xC);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    ecx = MEM32(0x67D144);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00165B81u); RECOMP_ABI_CALL(0x00201DB0u, sub_00201DB0); /* call 0x00201DB0 */

loc_00165B81: ;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), edi (32-bit) */
    MEM32(esi) = edi;
    if (CMP_NE(_fa, _fb)) goto loc_00165B8F; /* jne: not equal / not zero */

loc_00165B88: ;
    MEM32(esi + 4) = 1;

loc_00165B8F: ;
    edx = MEM32(esi + 0x1C);
    eax = MEM32(esi + 0x20);
    ecx = MEM32(esi + 0x24);
    MEM32(esp + 0x10) = edx;
    edx = MEM32(esi + 0x28);
    MEM32(esp + 0x14) = eax;
    eax = MEM32(esi + 0x70);
    MEM32(esp + 0x18) = ecx;
    MEM32(esp + 0x1C) = edx;
    edi = MEM32(eax + 0xC);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00165BB8u); RECOMP_ABI_CALL(0x001F9DD0u, sub_001F9DD0); /* call 0x001F9DD0 */

loc_00165BB8: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00165BCA; /* jne: not equal / not zero */

loc_00165BBC: ;
    eax = MEM32(edi + 0x44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00165BCA; /* je: equal / zero */

loc_00165BC3: ;
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00165BCAu); RECOMP_ABI_CALL(0x001F9DE0u, sub_001F9DE0); /* call 0x001F9DE0 */

loc_00165BCA: ;
    _fa = (uint32_t)(MEM8(edi + 0x40)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi + 0x40), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00165BD7; /* je: equal / zero */

loc_00165BD0: ;
    eax = MEM32(edi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00165BE5; /* jne: not equal / not zero */

loc_00165BD7: ;
    ecx = MEM32(edi + 0x3C);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x48); PUSH32(esp, 0x00165BE5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00165BE2u); } /* indirect call */
    }

loc_00165BE5: ;
    ecx = MEM32(esi + 0x70);
    edi = MEM32(ecx + 0xC);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00165BF2u); RECOMP_ABI_CALL(0x001F9DD0u, sub_001F9DD0); /* call 0x001F9DD0 */

loc_00165BF2: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00165C04; /* jne: not equal / not zero */

loc_00165BF6: ;
    eax = MEM32(edi + 0x44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00165C04; /* je: equal / zero */

loc_00165BFD: ;
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00165C04u); RECOMP_ABI_CALL(0x001F9DE0u, sub_001F9DE0); /* call 0x001F9DE0 */

loc_00165C04: ;
    ecx = MEM32(edi + 0x3C);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x720490);
    { uint32_t _icall_target = MEM32(edx + 0x50); PUSH32(esp, 0x00165C11u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00165C0Eu); } /* indirect call */
    }

loc_00165C11: ;
    eax = MEM32(esi + 0x70);
    edi = MEM32(eax + 0xC);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00165C1Eu); RECOMP_ABI_CALL(0x001F9DD0u, sub_001F9DD0); /* call 0x001F9DD0 */

loc_00165C1E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00165C30; /* jne: not equal / not zero */

loc_00165C22: ;
    eax = MEM32(edi + 0x44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00165C30; /* je: equal / zero */

loc_00165C29: ;
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00165C30u); RECOMP_ABI_CALL(0x001F9DE0u, sub_001F9DE0); /* call 0x001F9DE0 */

loc_00165C30: ;
    ecx = MEM32(edi + 0x3C);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x720490);
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x00165C3Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00165C3Au); } /* indirect call */
    }

loc_00165C3D: ;
    eax = MEM32(esi + 4);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00165C4Cu); RECOMP_ABI_CALL(0x001659C0u, sub_001659C0); /* call 0x001659C0 */

loc_00165C4C: ;
    POP32(esp, edi);
    MEM8(esi + 8) = 1;
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
 * sub_00165C60
 * Original: 0x00165C60 - 0x0016607B (1051 bytes, 304 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00165C60(void)
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

loc_00165C60: ;
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
    esi = ecx;
    eax = MEM32(esi);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_A(_fa, _fb)) goto loc_00165FBF; /* ja: above (unsigned >) */

loc_00165C7C: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x16607C); /* switch: 4 entries, 3 targets */
    if (_jt == 0x00165C83u) goto loc_00165C83;
    if (_jt == 0x00165D2Fu) goto loc_00165D2F;
    if (_jt == 0x00165E3Eu) goto loc_00165E3E;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00165C83: ;
    eax = MEM32(esi + 0x70);
    ecx = MEM32(eax + 0xC);
    edi = MEM32(ecx + 0x3C);
    xmm0 = XMM_MEM(edi + 0x30); /* movaps */
    edx = esp + 0x20;
    PUSH32(esp, edx);
    ecx = esp + 0x74;
    XMM_STORE(esp + 0x24, xmm0); /* movaps */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00165CA3u); RECOMP_ABI_CALL(0x002A7610u, sub_002A7610); /* call 0x002A7610 */

loc_00165CA3: ;
    eax = esp + 0x70;
    PUSH32(esp, eax);
    ecx = esp + 0x34;
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00165CB2u); RECOMP_ABI_CALL(0x00161BC0u, sub_00161BC0); /* call 0x00161BC0 */

loc_00165CB2: ;
    fp_push(MEMF(edi + 0xB0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x49E578)); /* fmul dword ptr [0x49e578] */
    eax = MEM32(esi + 0x70);
    edx = esp + 0x38;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    MEMF(esp + 0x6C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edi + 0xB4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x49E578)); /* fmul dword ptr [0x49e578] */
    MEMF(esp + 0x70) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(edi + 0xB8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x49E578)); /* fmul dword ptr [0x49e578] */
    MEMF(esp + 0x74) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(eax + 8);
    edx = MEM32(ecx + 0x54);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(ebp + 8); PUSH32(esp, 0x00165CF4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00165CF1u); } /* indirect call */
    }

loc_00165CF4: ;
    eax = MEM32(esp + 0x70);
    ecx = MEM32(esp + 0x74);
    edx = MEM32(esp + 0x78);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, 0);
    MEM32(esp + 0x18) = ecx;
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(esp + 0x24) = edx;
    MEM32(esp + 0x28) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00165D2Au); RECOMP_ABI_CALL(0x00164410u, sub_00164410); /* call 0x00164410 */

loc_00165D2A: ;
    goto loc_00165FBF;

loc_00165D2F: ;
    eax = MEM32(esi + 0x70);
    ecx = MEM32(eax + 8);
    edx = esp + 0x30;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(ecx + 0x54);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(ebp + 0xC); PUSH32(esp, 0x00165D41u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00165D3Eu); } /* indirect call */
    }

loc_00165D41: ;
    eax = esp + 0x38;
    PUSH32(esp, eax);
    ecx = esp + 0xAC;
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00165D53u); RECOMP_ABI_CALL(0x00161C20u, sub_00161C20); /* call 0x00161C20 */

loc_00165D53: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 0xA0;
    PUSH32(esp, edx);
    ecx = esp + 0x74;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00165D67u); RECOMP_ABI_CALL(0x002A77C0u, sub_002A77C0); /* call 0x002A77C0 */

loc_00165D67: ;
    eax = MEM32(esp + 0x60);
    ecx = MEM32(esp + 0x64);
    edx = MEM32(esp + 0x68);
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, 1);
    MEM32(esp + 0x18) = ecx;
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = esp + 0x78;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(esp + 0x24) = edx;
    MEM32(esp + 0x28) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00165D9Au); RECOMP_ABI_CALL(0x00164410u, sub_00164410); /* call 0x00164410 */

loc_00165D9A: ;
    edx = MEM32(esi + 0x60);
    ecx = MEM32(esi + 0x68);
    eax = MEM32(esi + 0x64);
    MEM32(esp + 0x20) = edx;
    edx = MEM32(esi + 0x70);
    MEM32(esp + 0x28) = ecx;
    MEM32(esp + 0x24) = eax;
    MEM32(esp + 0x2C) = 0;
    edi = MEM32(edx + 0xC);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00165DC4u); RECOMP_ABI_CALL(0x001F9DD0u, sub_001F9DD0); /* call 0x001F9DD0 */

loc_00165DC4: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00165DD6; /* jne: not equal / not zero */

loc_00165DC8: ;
    eax = MEM32(edi + 0x44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00165DD6; /* je: equal / zero */

loc_00165DCF: ;
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00165DD6u); RECOMP_ABI_CALL(0x001F9DE0u, sub_001F9DE0); /* call 0x001F9DE0 */

loc_00165DD6: ;
    ecx = MEM32(edi + 0x3C);
    eax = MEM32(ecx);
    edx = esp + 0x20;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x50); PUSH32(esp, 0x00165DE3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00165DE0u); } /* indirect call */
    }

loc_00165DE3: ;
    eax = MEM32(esi + 0x70);
    edi = MEM32(eax + 0xC);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00165DF0u); RECOMP_ABI_CALL(0x001F9DD0u, sub_001F9DD0); /* call 0x001F9DD0 */

loc_00165DF0: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00165E02; /* jne: not equal / not zero */

loc_00165DF4: ;
    eax = MEM32(edi + 0x44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00165E02; /* je: equal / zero */

loc_00165DFB: ;
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00165E02u); RECOMP_ABI_CALL(0x001F9DE0u, sub_001F9DE0); /* call 0x001F9DE0 */

loc_00165E02: ;
    ecx = MEM32(edi + 0x3C);
    edx = MEM32(ecx);
    eax = esi + 0x50;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x00165E0Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00165E0Bu); } /* indirect call */
    }

loc_00165E0E: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00165E23; /* jne: not equal / not zero */

loc_00165E13: ;
    ecx = MEM32(esi + 0x70);
    ecx = MEM32(ecx + 0xC);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00165E1Eu); RECOMP_ABI_CALL(0x001F9DE0u, sub_001F9DE0); /* call 0x001F9DE0 */

loc_00165E1E: ;
    goto loc_00165FBF;

loc_00165E23: ;
    edx = MEM32(esi + 0x70);
    ecx = MEM32(edx + 0xC);
    eax = MEM32(ecx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00165FBF; /* je: equal / zero */

loc_00165E34: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00165E39u); RECOMP_ABI_CALL(0x001F9E10u, sub_001F9E10); /* call 0x001F9E10 */

loc_00165E39: ;
    goto loc_00165FBF;

loc_00165E3E: ;
    ecx = MEM32(esi + 0x70);
    eax = MEM32(ecx + 0x194);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00165E5E; /* je: equal / zero */

loc_00165E4B: ;
    edx = MEM32(eax + 4);
    edx = edx >> 6;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00165E5E; /* je: equal / zero */

loc_00165E56: ;
    edi = MEM32(eax + 0x194);
    goto loc_00165E60;

loc_00165E5E: ;
    edi = eax;

loc_00165E60: ;
    eax = esp + 0xE0;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00165E6Du); RECOMP_ABI_CALL(0x001622E0u, sub_001622E0); /* call 0x001622E0 */

loc_00165E6D: ;
    ecx = esp + 0xE0;
    PUSH32(esp, ecx);
    _fb = (uint32_t)(0xF0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0xF0;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    ecx = esp + 0xA8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00165E88u); RECOMP_ABI_CALL(0x002A7EE0u, sub_002A7EE0); /* call 0x002A7EE0 */

loc_00165E88: ;
    edx = esp + 0xA0;
    PUSH32(esp, edx);
    ecx = esp + 0x74;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00165E99u); RECOMP_ABI_CALL(0x002A77C0u, sub_002A77C0); /* call 0x002A77C0 */

loc_00165E99: ;
    fp_push(MEMF(esp + 0xD0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x49E578)); /* fmul dword ptr [0x49e578] */
    PUSH32(esp, 1);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = esp + 0x78;
    fp_push(MEMF(esp + 0xDC)); /* fld float */
    PUSH32(esp, ecx);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x49E578)); /* fmul dword ptr [0x49e578] */
    ecx = esi;
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0xE4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x49E578)); /* fmul dword ptr [0x49e578] */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00165EDFu); RECOMP_ABI_CALL(0x00164410u, sub_00164410); /* call 0x00164410 */

loc_00165EDF: ;
    edx = esp + 0xA0;
    PUSH32(esp, edx);
    eax = esp + 0x34;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00165EF1u); RECOMP_ABI_CALL(0x00161BC0u, sub_00161BC0); /* call 0x00161BC0 */

loc_00165EF1: ;
    edx = MEM32(esp + 0x1C);
    ecx = MEM32(esp + 0x18);
    eax = MEM32(esp + 0x20);
    MEM32(esp + 0x6C) = edx;
    edx = MEM32(esi + 0x70);
    MEM32(esp + 0x68) = ecx;
    MEM32(esp + 0x70) = eax;
    MEM32(esp + 0x74) = 0x3F800000;
    eax = MEM32(edx + 8);
    ecx = esp + 0x38;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 0x54);
    PUSH32(esp, ecx);
    { uint32_t _icall_target = MEM32(ebp + 8); PUSH32(esp, 0x00165F23u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00165F20u); } /* indirect call */
    }

loc_00165F23: ;
    edx = MEM32(esi + 0x70);
    ecx = MEM32(edx + 0xC);
    eax = MEM32(ecx + 8);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00165F38; /* je: equal / zero */

loc_00165F33: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00165F38u); RECOMP_ABI_CALL(0x001F9DE0u, sub_001F9DE0); /* call 0x001F9DE0 */

loc_00165F38: ;
    eax = MEM32(esi + 0x60);
    ecx = MEM32(esi + 0x64);
    edx = MEM32(esi + 0x68);
    MEM32(esp + 0x20) = eax;
    eax = MEM32(esi + 0x70);
    MEM32(esp + 0x24) = ecx;
    MEM32(esp + 0x28) = edx;
    MEM32(esp + 0x2C) = 0;
    edi = MEM32(eax + 0xC);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00165F62u); RECOMP_ABI_CALL(0x001F9DD0u, sub_001F9DD0); /* call 0x001F9DD0 */

loc_00165F62: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00165F74; /* jne: not equal / not zero */

loc_00165F66: ;
    eax = MEM32(edi + 0x44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00165F74; /* je: equal / zero */

loc_00165F6D: ;
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00165F74u); RECOMP_ABI_CALL(0x001F9DE0u, sub_001F9DE0); /* call 0x001F9DE0 */

loc_00165F74: ;
    ecx = MEM32(edi + 0x3C);
    edx = MEM32(ecx);
    eax = esp + 0x20;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x50); PUSH32(esp, 0x00165F81u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00165F7Eu); } /* indirect call */
    }

loc_00165F81: ;
    ecx = MEM32(esi + 0x70);
    edi = MEM32(ecx + 0xC);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00165F8Eu); RECOMP_ABI_CALL(0x001F9DD0u, sub_001F9DD0); /* call 0x001F9DD0 */

loc_00165F8E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00165FA0; /* jne: not equal / not zero */

loc_00165F92: ;
    eax = MEM32(edi + 0x44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00165FA0; /* je: equal / zero */

loc_00165F99: ;
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00165FA0u); RECOMP_ABI_CALL(0x001F9DE0u, sub_001F9DE0); /* call 0x001F9DE0 */

loc_00165FA0: ;
    ecx = MEM32(edi + 0x3C);
    edx = MEM32(ecx);
    eax = esi + 0x50;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x00165FACu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00165FA9u); } /* indirect call */
    }

loc_00165FAC: ;
    edx = MEM32(esi + 0x70);
    ecx = esp + 0xA0;
    PUSH32(esp, ecx);
    ecx = MEM32(edx + 0xC);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00165FBFu); RECOMP_ABI_CALL(0x00160D20u, sub_00160D20); /* call 0x00160D20 */

loc_00165FBF: ;
    eax = MEM32(esi + 0x70);
    ecx = MEM32(eax + 0xC);
    edx = MEM32(ecx + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016606F; /* je: equal / zero */

loc_00165FD0: ;
    eax = ecx;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fa == 0)) goto loc_00165FDC; /* je: equal / zero */

loc_00165FD7: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00165FDE;

loc_00165FDC: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00165FDE: ;
    edx = MEM32(0x67D144);
    ecx = MEM32(edx + 0xC4);
    edx = MEM32(ecx);
    edi = esp + 0x70;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x00165FF5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00165FF2u); } /* indirect call */
    }

loc_00165FF5: ;
    fp_push(MEMF(esp + 0x70)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x49E578)); /* fmul dword ptr [0x49e578] */
    eax = MEM32(esi + 0x70);
    MEMF(eax + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esi + 0x70);
    fp_push(MEMF(esp + 0x74)); /* fld float */
    eax = 0x3F800000;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x49E578)); /* fmul dword ptr [0x49e578] */
    MEMF(ecx + 0x40) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esi + 0x70);
    fp_push(MEMF(esp + 0x78)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x49E578)); /* fmul dword ptr [0x49e578] */
    MEMF(edx + 0x44) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esi + 0x70);
    MEM32(ecx + 0x48) = eax;
    fp_push(MEMF(esp + 0x80)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x49E578)); /* fmul dword ptr [0x49e578] */
    edx = MEM32(esi + 0x70);
    MEMF(edx + 0x4C) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esi + 0x70);
    fp_push(MEMF(esp + 0x84)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x49E578)); /* fmul dword ptr [0x49e578] */
    MEMF(ecx + 0x50) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esi + 0x70);
    fp_push(MEMF(esp + 0x88)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x49E578)); /* fmul dword ptr [0x49e578] */
    MEMF(edx + 0x54) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esi + 0x70);
    MEM32(ecx + 0x58) = eax;

loc_0016606F: ;
    POP32(esp, edi);
    MEM8(esi + 8) = 0;
    POP32(esp, esi);
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
 * sub_00166150
 * Original: 0x00166150 - 0x00166184 (52 bytes, 23 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00166150(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00166150: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0016615Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0016615Cu); } /* indirect call */
    }

loc_0016615F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0016617F; /* jne: not equal / not zero */

loc_00166163: ;
    ecx = MEM32(esi + 8);
    SET_LO8(eax, MEM8(ecx + 8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    ecx = edi;
    PUSH32(esp, esi);
    if ((((uint8_t)((uint8_t)(_fa) - (uint8_t)(_fb)) >> 7) == 0)) goto loc_0016617A; /* jns: not sign (positive) */

loc_00166170: ;
    PUSH32(esp, 0x00166175u); RECOMP_ABI_CALL(0x00164870u, sub_00164870); /* call 0x00164870 */

loc_00166175: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0016617A: ;
    PUSH32(esp, 0x0016617Fu); RECOMP_ABI_CALL(0x001648B0u, sub_001648B0); /* call 0x001648B0 */

loc_0016617F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00166190
 * Original: 0x00166190 - 0x001662FF (367 bytes, 118 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00166190(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00166190: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x194);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_001662FD; /* je: equal / zero */

loc_001661A1: ;
    ecx = MEM32(eax + 4);
    if (6) _cf = (int)(((ecx) >> ((6) - 1)) & 1);
    ecx = ecx >> 6;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_001661B2; /* je: equal / zero */

loc_001661AC: ;
    eax = MEM32(eax + 0x194);

loc_001661B2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_001662FD; /* je: equal / zero */

loc_001661BA: ;
    edx = MEM32(esi + 8);
    _fa = (uint32_t)(MEM8(edx + 8)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edx + 8), 0x20 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_001662FD; /* je: equal / zero */

loc_001661C7: ;
    _fa = (uint32_t)(MEM8(esi + 4)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 4), 8 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_001662FD; /* jne: not equal / not zero */

loc_001661D1: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esi + 4);
    _cf = 0; /* logical op clears CF */
    ebp = ebp | 8;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, edi);
    ecx = 0x80;
    edi = ebp;
    _cf = 0; /* logical op clears CF */
    edi = edi | ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi + 4) = ebp;
    MEM32(esi + 4) = edi;
    eax = MEM32(esi + 0x194);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00166203; /* je: equal / zero */

loc_001661F2: ;
    edx = MEM32(eax + 4);
    if (6) _cf = (int)(((edx) >> ((6) - 1)) & 1);
    edx = edx >> 6;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_00166203; /* je: equal / zero */

loc_001661FD: ;
    eax = MEM32(eax + 0x194);

loc_00166203: ;
    _cf = 0; /* logical op clears CF */
    MEM32(eax + 4) = MEM32(eax + 4) | ecx;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = MEM32(esi + 0x194);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00166221; /* je: equal / zero */

loc_00166210: ;
    ecx = MEM32(eax + 4);
    if (6) _cf = (int)(((ecx) >> ((6) - 1)) & 1);
    ecx = ecx >> 6;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_00166221; /* je: equal / zero */

loc_0016621B: ;
    eax = MEM32(eax + 0x194);

loc_00166221: ;
    MEM32(esi + 0x190) = eax;
    eax = MEM32(esi + 0x34);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0016623A; /* je: equal / zero */

loc_0016622E: ;
    ecx = MEM32(0x67D144);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0016623Au); RECOMP_ABI_CALL(0x001FE030u, sub_001FE030); /* call 0x001FE030 */

loc_0016623A: ;
    eax = MEM32(esi + 0xE0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    edi = 3;
    if (CMP_EQ(_fa, _fb)) goto loc_001662FB; /* je: equal / zero */

loc_0016624D: ;
    ecx = MEM32(eax + 0x194);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    ebp = MEM32(esi + 0x70);
    if (CMP_EQ(_fa, _fb)) goto loc_00166288; /* je: equal / zero */

loc_0016625A: ;
    edx = MEM32(ecx + 4);
    if (6) _cf = (int)(((edx) >> ((6) - 1)) & 1);
    edx = edx >> 6;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_0016626B; /* je: equal / zero */

loc_00166265: ;
    ecx = MEM32(ecx + 0x194);

loc_0016626B: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00166288; /* je: equal / zero */

loc_0016626F: ;
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(MEM8(ecx + 8)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 8), 0x20 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_00166288; /* je: equal / zero */

loc_00166278: ;
    _fa = (uint32_t)(MEM8(eax + 4)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 4), 8 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_00166288; /* jne: not equal / not zero */

loc_0016627E: ;
    edi = MEM32(eax + 0x34);
    _cf = (int)((edi) != 0);
    edi = (uint32_t)(-(int32_t)edi);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    edi = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(4)) >> 32) & 1);
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00166288: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esi + 0x70) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_001662E2; /* je: equal / zero */

loc_0016628F: ;
    MEM8(esi + 0x78) = 1;
    edx = MEM32(eax + 0xC);
    ecx = MEM32(edx + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_001662E2; /* je: equal / zero */

loc_0016629D: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 3 (32-bit) */
    _cf = (int)(_fa < _fb);
    eax = edx;
    ecx = MEM32(eax + 8);
    if (CMP_NE(_fa, _fb)) goto loc_001662BC; /* jne: not equal / not zero */

loc_001662A7: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_001662D4; /* je: equal / zero */

loc_001662AB: ;
    _fa = (uint32_t)(MEM8(eax + 0x40)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x40), 1 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_001662D4; /* jne: not equal / not zero */

loc_001662B1: ;
    PUSH32(esp, 5);
    ecx = eax;
    PUSH32(esp, 0x001662BAu); RECOMP_ABI_CALL(0x00206000u, sub_00206000); /* call 0x00206000 */

loc_001662BA: ;
    goto loc_001662D4;

loc_001662BC: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_001662CF; /* je: equal / zero */

loc_001662C0: ;
    _fa = (uint32_t)(MEM8(eax + 0x40)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x40), 1 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_001662CF; /* jne: not equal / not zero */

loc_001662C6: ;
    PUSH32(esp, 6);
    ecx = eax;
    PUSH32(esp, 0x001662CFu); RECOMP_ABI_CALL(0x00206000u, sub_00206000); /* call 0x00206000 */

loc_001662CF: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_001662E2; /* je: equal / zero */

loc_001662D4: ;
    eax = MEM32(esi + 0xE0);
    ecx = MEM32(eax + 0xC);
    PUSH32(esp, 0x001662E2u); RECOMP_ABI_CALL(0x001F9DE0u, sub_001F9DE0); /* call 0x001F9DE0 */

loc_001662E2: ;
    ecx = MEM32(esi + 0x70);
    edx = MEM32(esi + 0xE0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = 0x67CF20;
    PUSH32(esp, 0x001662FBu); RECOMP_ABI_CALL(0x00165890u, sub_00165890); /* call 0x00165890 */

loc_001662FB: ;
    POP32(esp, edi);
    POP32(esp, ebp);

loc_001662FD: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00166300
 * Original: 0x00166300 - 0x00166325 (37 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00166300(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00166300: ;
    edx = ecx;
    eax = MEM32(edx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_00166324; /* js: sign (negative) */

loc_00166309: ;
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
    { uint32_t _icall_target = MEM32(esi + 0x14); PUSH32(esp, 0x00166323u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00166320u); } /* indirect call */
    }

loc_00166323: ;
    POP32(esp, esi);

loc_00166324: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00166330
 * Original: 0x00166330 - 0x00166355 (37 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00166330(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00166330: ;
    edx = ecx;
    eax = MEM32(edx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_00166354; /* js: sign (negative) */

loc_00166339: ;
    ecx = MEM32(0x62EBAC);
    PUSH32(esp, esi);
    esi = MEM32(ecx);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x10);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    eax = MEM32(edx);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(esi + 0x14); PUSH32(esp, 0x00166353u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00166350u); } /* indirect call */
    }

loc_00166353: ;
    POP32(esp, esi);

loc_00166354: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00166360
 * Original: 0x00166360 - 0x00166385 (37 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00166360(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00166360: ;
    edx = ecx;
    eax = MEM32(edx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_00166384; /* js: sign (negative) */

loc_00166369: ;
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
    { uint32_t _icall_target = MEM32(esi + 0x14); PUSH32(esp, 0x00166383u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00166380u); } /* indirect call */
    }

loc_00166383: ;
    POP32(esp, esi);

loc_00166384: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00166390
 * Original: 0x00166390 - 0x001663B5 (37 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00166390(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00166390: ;
    edx = ecx;
    eax = MEM32(edx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_001663B4; /* js: sign (negative) */

loc_00166399: ;
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
    { uint32_t _icall_target = MEM32(esi + 0x14); PUSH32(esp, 0x001663B3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001663B0u); } /* indirect call */
    }

loc_001663B3: ;
    POP32(esp, esi);

loc_001663B4: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001663C0
 * Original: 0x001663C0 - 0x001663E8 (40 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001663C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001663C0: ;
    edx = ecx;
    eax = MEM32(edx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_001663E7; /* js: sign (negative) */

loc_001663C9: ;
    ecx = MEM32(0x62EBAC);
    edx = MEM32(edx);
    PUSH32(esp, esi);
    esi = MEM32(ecx);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax + eax * 2;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x10);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(esi + 0x14); PUSH32(esp, 0x001663E6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001663E3u); } /* indirect call */
    }

loc_001663E6: ;
    POP32(esp, esi);

loc_001663E7: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001663F0
 * Original: 0x001663F0 - 0x00166415 (37 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001663F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001663F0: ;
    edx = ecx;
    eax = MEM32(edx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_00166414; /* js: sign (negative) */

loc_001663F9: ;
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
    { uint32_t _icall_target = MEM32(esi + 0x14); PUSH32(esp, 0x00166413u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00166410u); } /* indirect call */
    }

loc_00166413: ;
    POP32(esp, esi);

loc_00166414: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00166420
 * Original: 0x00166420 - 0x00166445 (37 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00166420(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00166420: ;
    edx = ecx;
    eax = MEM32(edx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_00166444; /* js: sign (negative) */

loc_00166429: ;
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
    { uint32_t _icall_target = MEM32(esi + 0x14); PUSH32(esp, 0x00166443u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00166440u); } /* indirect call */
    }

loc_00166443: ;
    POP32(esp, esi);

loc_00166444: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00166450
 * Original: 0x00166450 - 0x001664A6 (86 bytes, 20 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00166450(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00166450: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x3BC5F8);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x20);
    MEM32(esp) = eax;
    MEM32(esp + 4) = 1;
    MEM32(esp + 8) = 0x80000001u;
    eax = MEM32(esp + 0x1C);
    edx = esp;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    MEM32(esp + 0x1C) = 0;
    PUSH32(esp, 0x00166495u); RECOMP_ABI_CALL(0x001652E0u, sub_001652E0); /* call 0x001652E0 */

loc_00166495: ;
    ecx = MEM32(esp + 0xC);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001664B0
 * Original: 0x001664B0 - 0x001664CA (26 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001664B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001664B0: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x14) = 0x80000000u;
    MEM32(eax) = ecx;
    MEM32(eax + 4) = ecx;
    MEM8(eax + 8) = LO8(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001664D0
 * Original: 0x001664D0 - 0x001664F6 (38 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001664D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001664D0: ;
    edx = ecx;
    eax = MEM32(edx + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_001664F5; /* js: sign (negative) */

loc_001664D9: ;
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
    { uint32_t _icall_target = MEM32(esi + 0x14); PUSH32(esp, 0x001664F4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001664F1u); } /* indirect call */
    }

loc_001664F4: ;
    POP32(esp, esi);

loc_001664F5: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00166500
 * Original: 0x00166500 - 0x00166526 (38 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00166500(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00166500: ;
    edx = ecx;
    eax = MEM32(edx + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_00166525; /* js: sign (negative) */

loc_00166509: ;
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
    { uint32_t _icall_target = MEM32(esi + 0x14); PUSH32(esp, 0x00166524u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00166521u); } /* indirect call */
    }

loc_00166524: ;
    POP32(esp, esi);

loc_00166525: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00166530
 * Original: 0x00166530 - 0x001665D0 (160 bytes, 56 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00166530(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00166530: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x3BC61B);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = esi + 0x28;
    MEM32(esi + 8) = edi;
    MEM32(esi + 4) = edi;
    MEM32(esi + 0xC) = edi;
    MEM32(esi) = 0x4AEDDC;
    MEM32(esp + 0xC) = esi;
    MEM32(ebx) = edi;
    MEM32(ebx + 4) = edi;
    MEM32(ebx + 8) = 0x80000000u;
    MEM32(esi + 0x24) = edi;
    eax = MEM32(ebx + 8);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esp + 0x18) = edi;
    if ((_fas >= 0)) goto loc_00166598; /* jge: greater or equal (signed >=) */

loc_00166580: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    SET_LO8(ecx, (CMP_LE(_fas, _fbs)) ? 1 : 0); /* setle */
    PUSH32(esp, 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax & ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00166595u); RECOMP_ABI_CALL(0x00101B30u, sub_00101B30); /* call 0x00101B30 */

loc_00166595: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00166598: ;
    ecx = MEM32(esp + 0x10);
    MEM32(ebx + 4) = edi;
    MEM32(esi + 0x34) = edi;
    MEM32(esi + 0x20) = edi;
    MEM32(esi + 0x48) = edi;
    MEM32(esi + 0x44) = edi;
    MEM32(esi + 0x40) = edi;
    MEM32(esi + 0x3C) = edi;
    MEM32(esi + 0x58) = edi;
    MEM32(esi + 0x54) = edi;
    MEM32(esi + 0x50) = edi;
    MEM32(esi + 0x4C) = edi;
    MEM32(esi + 0x5C) = edi;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001665D0
 * Original: 0x001665D0 - 0x001665F6 (38 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001665D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001665D0: ;
    edx = ecx;
    eax = MEM32(edx + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_001665F5; /* js: sign (negative) */

loc_001665D9: ;
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
    { uint32_t _icall_target = MEM32(esi + 0x14); PUSH32(esp, 0x001665F4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001665F1u); } /* indirect call */
    }

loc_001665F4: ;
    POP32(esp, esi);

loc_001665F5: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00166600
 * Original: 0x00166600 - 0x0016662F (47 bytes, 11 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00166600(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00166600: ;
    eax = MEM32(0x637AC4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0016662C; /* jne: not equal / not zero */

loc_00166609: ;
    eax = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    MEM32(ecx + 0x24C) = eax;
    SET_LO8(eax, MEM8(esp + 0xC));
    MEM32(ecx + 0x250) = edx;
    MEM8(ecx + 0x248) = LO8(eax);
    PUSH32(esp, 0x0016662Cu); RECOMP_ABI_CALL(0x001654D0u, sub_001654D0); /* call 0x001654D0 */

loc_0016662C: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00166630
 * Original: 0x00166630 - 0x00166670 (64 bytes, 25 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00166630(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00166630: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_00166653; /* js: sign (negative) */

loc_0016663A: ;
    ecx = MEM32(0x62EBAC);
    edx = MEM32(ecx);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x10);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    eax = MEM32(esi);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00166653u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00166650u); } /* indirect call */
    }

loc_00166653: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0016666A; /* je: equal / zero */

loc_0016665A: ;
    ecx = MEM32(0x62EBAC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x10);
    PUSH32(esp, 0xC);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0016666Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00166667u); } /* indirect call */
    }

loc_0016666A: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00166670
 * Original: 0x00166670 - 0x001666B0 (64 bytes, 25 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00166670(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00166670: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_00166693; /* js: sign (negative) */

loc_0016667A: ;
    ecx = MEM32(0x62EBAC);
    edx = MEM32(ecx);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x10);
    eax = eax << 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    eax = MEM32(esi);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00166693u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00166690u); } /* indirect call */
    }

loc_00166693: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001666AA; /* je: equal / zero */

loc_0016669A: ;
    ecx = MEM32(0x62EBAC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x10);
    PUSH32(esp, 0xC);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x001666AAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001666A7u); } /* indirect call */
    }

loc_001666AA: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001666B0
 * Original: 0x001666B0 - 0x0016683D (397 bytes, 100 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001666B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001666B0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x3BC649);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _fb = (uint32_t)(0xA8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xA8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = MEM32(esi + 8);
    eax = MEM32(eax + 8);
    eax = eax >> 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    SET_LO8(eax, LO8(eax) & 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    PUSH32(esp, edi);
    MEM8(esp + 0x1B) = LO8(eax);
    if ((_fa != 0)) goto loc_001667EA; /* jne: not equal / not zero */

loc_001666EB: ;
    ecx = MEM32(0x62EBAC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1E);
    PUSH32(esp, 0x50);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x001666FAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001666F7u); } /* indirect call */
    }

loc_001666FA: ;
    MEM32(esp + 0x2C) = eax;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esp + 0xBC) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_0016671B; /* je: equal / zero */

loc_0016670B: ;
    ecx = MEM32(esi + 0x180);
    PUSH32(esp, ecx);
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00166719u); RECOMP_ABI_CALL(0x00215D30u, sub_00215D30); /* call 0x00215D30 */

loc_00166719: ;
    ebx = eax;

loc_0016671B: ;
    xmm0 = XMM_MEM(esi + 0x1D0); /* movaps */
    eax = MEM32(ebp + 0xC);
    edi = MEM32(esi + 0x194);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(eax + 4) (32-bit) */
    XMM_STORE(esp + 0x30, xmm0); /* movaps */
    xmm0 = XMM_MEM(esi + 0x1E0); /* movaps */
    XMM_STORE(esp + 0x40, xmm0); /* movaps */
    xmm0 = XMM_MEM(esi + 0x1F0); /* movaps */
    XMM_STORE(esp + 0x50, xmm0); /* movaps */
    xmm0 = XMM_MEM(esi + 0x200); /* movaps */
    MEM32(esp + 0xBC) = 0xFFFFFFFFu;
    XMM_STORE(esp + 0x60, xmm0); /* movaps */
    if (CMP_EQ(_fa, _fb)) goto loc_001667C4; /* je: equal / zero */

loc_00166764: ;
    goto loc_00166770;

    /* nop */
    /* nop */

loc_00166770: ;
    xmm0 = XMM_MEM(esp + 0x30); /* movaps */
    XMM_STORE(esp + 0x70, xmm0); /* movaps */
    xmm0 = XMM_MEM(esp + 0x40); /* movaps */
    XMM_STORE(esp + 0x80, xmm0); /* movaps */
    xmm0 = XMM_MEM(esp + 0x50); /* movaps */
    ecx = esp + 0x70;
    PUSH32(esp, ecx);
    edx = edi + 0x1D0;
    XMM_STORE(esp + 0x94, xmm0); /* movaps */
    xmm0 = XMM_MEM(esp + 0x64); /* movaps */
    PUSH32(esp, edx);
    ecx = esp + 0x38;
    XMM_STORE(esp + 0xA8, xmm0); /* movaps */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001667B6u); RECOMP_ABI_CALL(0x002A7EE0u, sub_002A7EE0); /* call 0x002A7EE0 */

loc_001667B6: ;
    eax = MEM32(ebp + 0xC);
    edi = MEM32(edi + 0x194);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(eax + 4) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00166770; /* jne: not equal / not zero */

loc_001667C4: ;
    xmm0 = XMM_MEM(esp + 0x30); /* movaps */
    XMM_STORE(ebx + 0x10, xmm0); /* movaps */
    xmm0 = XMM_MEM(esp + 0x40); /* movaps */
    XMM_STORE(ebx + 0x20, xmm0); /* movaps */
    xmm0 = XMM_MEM(esp + 0x50); /* movaps */
    XMM_STORE(ebx + 0x30, xmm0); /* movaps */
    xmm0 = XMM_MEM(esp + 0x60); /* movaps */
    XMM_STORE(ebx + 0x40, xmm0); /* movaps */
    goto loc_001667F0;

loc_001667EA: ;
    ebx = MEM32(esi + 0x180);

loc_001667F0: ;
    ecx = MEM32(ebp + 0xC);
    MEM32(esp + 0x1C) = ebx;
    edx = esp + 0x1C;
    eax = 1;
    MEM32(ebx + 8) = esi;
    ecx = MEM32(ecx);
    MEM32(esp + 0x20) = edx;
    MEM32(esp + 0x24) = eax;
    MEM32(esp + 0x28) = 0x80000001u;
    MEM32(esp + 0xBC) = eax;
    eax = esp + 0x20;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00166828u); RECOMP_ABI_CALL(0x001652E0u, sub_001652E0); /* call 0x001652E0 */

loc_00166828: ;
    ecx = MEM32(esp + 0xB4);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00166840
 * Original: 0x00166840 - 0x0016693C (252 bytes, 79 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00166840(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00166840: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    edi = ecx;
    SET_LO8(eax, MEM8(edi + 0x10E4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00166937; /* jne: not equal / not zero */

loc_00166854: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00166860;

    /* nop */

loc_00166860: ;
    eax = MEM32(edi + 0x21C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0016686F; /* jne: not equal / not zero */

loc_0016686B: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0016687B;

loc_0016686F: ;
    ecx = eax;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x10C);
    ecx = ecx + edi + 4;

loc_0016687B: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0xEC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(ecx + 0xEC) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00166923; /* jge: greater or equal (signed >=) */

loc_00166887: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00166890; /* jne: not equal / not zero */

loc_0016688C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0016689A;

loc_00166890: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x10C);
    eax = eax + edi + 4;

loc_0016689A: ;
    eax = MEM32(eax + 0xF0);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(eax + 0x70);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    esi = eax + 0x70;
    if (CMP_NE(_fa, _fb)) goto loc_00166917; /* jne: not equal / not zero */

loc_001668AD: ;
    edx = MEM32(eax + 8);
    ecx = MEM32(edx + 0x9C);
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00166917; /* je: equal / zero */

loc_001668BE: ;
    ecx = MEM32(eax + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00166917; /* je: equal / zero */

loc_001668C5: ;
    _fa = (uint32_t)(MEM8(ecx + 0x40)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 0x40), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00166917; /* jne: not equal / not zero */

loc_001668CB: ;
    eax = MEM32(eax + 0xE0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00166917; /* je: equal / zero */

loc_001668D5: ;
    ecx = MEM32(eax + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00166917; /* je: equal / zero */

loc_001668DC: ;
    SET_LO8(eax, MEM8(edi + 0x10E5));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016690A; /* je: equal / zero */

loc_001668E6: ;
    edx = esp + 0x10;
    PUSH32(esp, edx);
    ecx = esi;
    MEM32(esp + 0x14) = 0;
    MEM32(esp + 0x18) = 0xC0000000u;
    MEM32(esp + 0x1C) = 0;
    PUSH32(esp, 0x0016690Au); RECOMP_ABI_CALL(0x00164290u, sub_00164290); /* call 0x00164290 */

loc_0016690A: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 3);
    ecx = esi;
    PUSH32(esp, 0x00166917u); RECOMP_ABI_CALL(0x001659C0u, sub_001659C0); /* call 0x001659C0 */

loc_00166917: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x210) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x210;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00166860;

loc_00166923: ;
    SET_LO8(eax, MEM8(edi + 0x10E5));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_00166937; /* je: equal / zero */

loc_00166930: ;
    MEM8(edi + 0x10E5) = 0;

loc_00166937: ;
    POP32(esp, edi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00166940
 * Original: 0x00166940 - 0x00166A9B (347 bytes, 118 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00166940(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00166940: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    ebp = ecx;
    eax = MEM32(ebp + 0x21C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00166A98; /* je: equal / zero */

loc_00166953: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x10C);
    PUSH32(esp, ebx);
    eax = eax + ebp + 4;
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00166A97; /* je: equal / zero */

loc_00166968: ;
    _fa = (uint32_t)(MEM8(eax + 0xE8)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0xE8), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00166A97; /* je: equal / zero */

loc_00166974: ;
    PUSH32(esp, esi);
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);

loc_00166978: ;
    eax = MEM32(ebp + 0x21C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0x10) = edx;
    if (CMP_NE(_fa, _fb)) goto loc_0016698B; /* jne: not equal / not zero */

loc_00166987: ;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00166997;

loc_0016698B: ;
    ecx = eax;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x10C);
    ecx = ecx + ebp + 4;

loc_00166997: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0xF4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ecx + 0xF4) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_00166A95; /* jge: greater or equal (signed >=) */

loc_001669A3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001669AC; /* jne: not equal / not zero */

loc_001669A8: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_001669B6;

loc_001669AC: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x10C);
    eax = eax + ebp + 4;

loc_001669B6: ;
    eax = MEM32(eax + 0xF8);
    esi = MEM32(eax + edx * 4);
    _fa = (uint32_t)(MEM8(esi + 4)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 4), 0x20 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    edi = MEM32(esi + 8);
    if (TEST_Z(_fa, _fb)) goto loc_00166A1C; /* je: equal / zero */

loc_001669C8: ;
    ecx = MEM32(esi + 0xC);
    _fa = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 8), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00166A1C; /* je: equal / zero */

loc_001669D0: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x001669D7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001669D4u); } /* indirect call */
    }

loc_001669D7: ;
    edx = MEM32(esi + 4);
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    eax = ~eax;
    _cf = 0; /* logical op clears CF */
    eax = eax & esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    edx = edx | 0x100000;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esi + 4) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_001669F2; /* je: equal / zero */

loc_001669EF: ;
    MEM32(eax + 0x60) = ebx;

loc_001669F2: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x001669F9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001669F6u); } /* indirect call */
    }

loc_001669F9: ;
    edx = MEM32(esi + 4);
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    eax = ~eax;
    _cf = 0; /* logical op clears CF */
    eax = eax & esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    edx = edx | 0x200000;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esi + 4) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_00166A14; /* je: equal / zero */

loc_00166A11: ;
    MEM32(eax + 0x60) = ebx;

loc_00166A14: ;
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, 0x00166A1Cu); RECOMP_ABI_CALL(0x001F9DE0u, sub_001F9DE0); /* call 0x001F9DE0 */

loc_00166A1C: ;
    _fa = (uint32_t)(MEM8(edi + 8)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi + 8), 2 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_00166A8B; /* jne: not equal / not zero */

loc_00166A22: ;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xC), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00166A8B; /* je: equal / zero */

loc_00166A27: ;
    _fa = (uint32_t)(MEM32(edi + 0x54)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x54), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_00166A42; /* jl: less (signed <) */

loc_00166A2C: ;
    _fa = (uint32_t)(MEM32(esi + 0x70)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x70), 3 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00166A42; /* jne: not equal / not zero */

loc_00166A32: ;
    eax = MEM32(ebp + 0x254);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00166A42; /* je: equal / zero */

loc_00166A3C: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x00166A3Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00166A3Du); } /* indirect call */
    }

loc_00166A3F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00166A42: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(MEM8(eax + 8)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 8), 2 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_00166A8B; /* jne: not equal / not zero */

loc_00166A4B: ;
    _fa = (uint32_t)(MEM32(eax + 0x54)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x54), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_00166A8B; /* jl: less (signed <) */

loc_00166A50: ;
    ecx = MEM32(esi + 4);
    if (6) _cf = (int)(((ecx) >> ((6) - 1)) & 1);
    ecx = ecx >> 6;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_00166A8B; /* jne: not equal / not zero */

loc_00166A5B: ;
    edx = MEM32(esi + 0xC);
    _fa = (uint32_t)(MEM32(edx + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 8), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00166A69; /* jne: not equal / not zero */

loc_00166A63: ;
    _fa = (uint32_t)(MEM32(esi + 0x70)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x70), 4 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00166A8B; /* jne: not equal / not zero */

loc_00166A69: ;
    SET_LO8(eax, MEM8(esi + 0x78));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    _cf = (int)(_fa < _fb);
    ecx = esi + 0x70;
    if (CMP_EQ(_fa, _fb)) goto loc_00166A78; /* je: equal / zero */

loc_00166A73: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00166A8B; /* je: equal / zero */

loc_00166A78: ;
    eax = MEM32(ebp + 0x250);
    edx = MEM32(ebp + 0x24C);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00166A8Bu); RECOMP_ABI_CALL(0x00165C60u, sub_00165C60); /* call 0x00165C60 */

loc_00166A8B: ;
    edx = MEM32(esp + 0x10);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_00166978;

loc_00166A95: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_00166A97: ;
    POP32(esp, ebx);

loc_00166A98: ;
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00166AA0
 * Original: 0x00166AA0 - 0x00166D26 (646 bytes, 208 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00166AA0(void)
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

loc_00166AA0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x54;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    fp_push(MEMF(esi + 0xF0)); /* fld float */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x49F9D0)); /* fmul dword ptr [0x49f9d0] */
    MEM32(esi + 0x60) = ecx;
    MEM32(esi + 0x64) = ecx;
    MEM32(esi + 0x68) = ecx;
    MEMF(esi + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, edi);
    fp_push(MEMF(esi + 0xF4)); /* fld float */
    edi = esi + 0xC0;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x49F9D0)); /* fmul dword ptr [0x49f9d0] */
    eax = 0x3F800000;
    MEM32(esi + 0x28) = eax;
    MEM32(esi + 0x6C) = eax;
    MEMF(esi + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    fp_push(MEMF(esi + 0xF8)); /* fld float */
    XMM_STORE(esi + 0x50, xmm0); /* movaps */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x49F9D0)); /* fmul dword ptr [0x49f9d0] */
    MEM32(esp + 0x3C) = 0;
    MEM32(esp + 0x4C) = 0;
    MEM32(esp + 0x5C) = 0;
    MEMF(esi + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(edi);
    ecx = MEM32(edi + 4);
    edx = MEM32(edi + 8);
    MEM32(esp + 0x30) = eax;
    eax = MEM32(edi + 0x10);
    MEM32(esp + 0x34) = ecx;
    ecx = MEM32(edi + 0x14);
    MEM32(esp + 0x40) = eax;
    eax = MEM32(edi + 0x20);
    MEM32(esp + 0x38) = edx;
    edx = MEM32(edi + 0x18);
    MEM32(esp + 0x44) = ecx;
    ecx = MEM32(edi + 0x24);
    MEM32(esp + 0x50) = eax;
    MEM32(esp + 0x48) = edx;
    edx = MEM32(edi + 0x28);
    eax = esp + 0x30;
    MEM32(esp + 0x54) = ecx;
    PUSH32(esp, eax);
    ecx = esp + 0x24;
    MEM32(esp + 0x5C) = edx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00166B62u); RECOMP_ABI_CALL(0x002A77C0u, sub_002A77C0); /* call 0x002A77C0 */

loc_00166B62: ;
    xmm0 = XMM_MEM(esp + 0x20); /* movaps */
    ecx = MEM32(esi + 0x70);
    ebx = esi + 0x30;
    XMM_STORE(ebx, xmm0); /* movaps */
    edx = MEM32(ecx + 8);
    eax = MEM32(edx + 0x54);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x67D16C); PUSH32(esp, 0x00166B7Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00166B78u); } /* indirect call */
    }

loc_00166B7E: ;
    eax = MEM32(esi + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00166B8F; /* jne: not equal / not zero */

loc_00166B88: ;
    MEM32(esi + 4) = 1;

loc_00166B8F: ;
    ecx = MEM32(esi + 0x70);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00166B98u); RECOMP_ABI_CALL(0x001F1A80u, sub_001F1A80); /* call 0x001F1A80 */

loc_00166B98: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00166BBF; /* je: equal / zero */

loc_00166B9F: ;
    edx = MEM32(esi + 0x70);
    MEM32(esi + 4) = 3;
    eax = MEM32(edx + 0xC);
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00166BBF; /* je: equal / zero */

loc_00166BB3: ;
    ecx = MEM32(0x67D144);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00166BBFu); RECOMP_ABI_CALL(0x00201DB0u, sub_00201DB0); /* call 0x00201DB0 */

loc_00166BBF: ;
    eax = MEM32(esi + 0x1C);
    ecx = MEM32(esi + 0x20);
    edx = MEM32(esi + 0x24);
    MEM32(esp + 0x10) = eax;
    eax = MEM32(esi + 0x28);
    MEM32(esp + 0x14) = ecx;
    ecx = MEM32(esi + 0x70);
    MEM32(esi) = 0;
    MEM32(esp + 0x18) = edx;
    MEM32(esp + 0x1C) = eax;
    edi = MEM32(ecx + 0xC);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00166BEEu); RECOMP_ABI_CALL(0x001F9DD0u, sub_001F9DD0); /* call 0x001F9DD0 */

loc_00166BEE: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00166C00; /* jne: not equal / not zero */

loc_00166BF2: ;
    eax = MEM32(edi + 0x44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00166C00; /* je: equal / zero */

loc_00166BF9: ;
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00166C00u); RECOMP_ABI_CALL(0x001F9DE0u, sub_001F9DE0); /* call 0x001F9DE0 */

loc_00166C00: ;
    _fa = (uint32_t)(MEM8(edi + 0x40)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi + 0x40), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00166C0D; /* je: equal / zero */

loc_00166C06: ;
    eax = MEM32(edi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00166C1B; /* jne: not equal / not zero */

loc_00166C0D: ;
    ecx = MEM32(edi + 0x3C);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x48); PUSH32(esp, 0x00166C1Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00166C18u); } /* indirect call */
    }

loc_00166C1B: ;
    ecx = MEM32(esi + 0x70);
    edi = MEM32(ecx + 0xC);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00166C28u); RECOMP_ABI_CALL(0x001F9DD0u, sub_001F9DD0); /* call 0x001F9DD0 */

loc_00166C28: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00166C3A; /* jne: not equal / not zero */

loc_00166C2C: ;
    eax = MEM32(edi + 0x44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00166C3A; /* je: equal / zero */

loc_00166C33: ;
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00166C3Au); RECOMP_ABI_CALL(0x001F9DE0u, sub_001F9DE0); /* call 0x001F9DE0 */

loc_00166C3A: ;
    ecx = MEM32(edi + 0x3C);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x720490);
    { uint32_t _icall_target = MEM32(edx + 0x50); PUSH32(esp, 0x00166C47u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00166C44u); } /* indirect call */
    }

loc_00166C47: ;
    eax = MEM32(esi + 0x70);
    edi = MEM32(eax + 0xC);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00166C54u); RECOMP_ABI_CALL(0x001F9DD0u, sub_001F9DD0); /* call 0x001F9DD0 */

loc_00166C54: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00166C66; /* jne: not equal / not zero */

loc_00166C58: ;
    eax = MEM32(edi + 0x44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00166C66; /* je: equal / zero */

loc_00166C5F: ;
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00166C66u); RECOMP_ABI_CALL(0x001F9DE0u, sub_001F9DE0); /* call 0x001F9DE0 */

loc_00166C66: ;
    ecx = MEM32(edi + 0x3C);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x720490);
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x00166C73u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00166C70u); } /* indirect call */
    }

loc_00166C73: ;
    eax = MEM32(esi + 0x70);
    edi = MEM32(eax + 0x24);
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xC), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00166C84; /* jne: not equal / not zero */

loc_00166C7E: ;
    edi = MEM32(eax + 0x18C);

loc_00166C84: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00166D0C; /* je: equal / zero */

loc_00166C8C: ;
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00166C93u); RECOMP_ABI_CALL(0x001F9DD0u, sub_001F9DD0); /* call 0x001F9DD0 */

loc_00166C93: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00166CA5; /* jne: not equal / not zero */

loc_00166C97: ;
    eax = MEM32(edi + 0x44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00166CA5; /* je: equal / zero */

loc_00166C9E: ;
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00166CA5u); RECOMP_ABI_CALL(0x001F9DE0u, sub_001F9DE0); /* call 0x001F9DE0 */

loc_00166CA5: ;
    _fa = (uint32_t)(MEM8(edi + 0x40)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi + 0x40), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00166CB2; /* je: equal / zero */

loc_00166CAB: ;
    eax = MEM32(edi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00166CC0; /* jne: not equal / not zero */

loc_00166CB2: ;
    ecx = MEM32(edi + 0x3C);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x48); PUSH32(esp, 0x00166CC0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00166CBDu); } /* indirect call */
    }

loc_00166CC0: ;
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00166CC7u); RECOMP_ABI_CALL(0x001F9DD0u, sub_001F9DD0); /* call 0x001F9DD0 */

loc_00166CC7: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00166CD9; /* jne: not equal / not zero */

loc_00166CCB: ;
    eax = MEM32(edi + 0x44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00166CD9; /* je: equal / zero */

loc_00166CD2: ;
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00166CD9u); RECOMP_ABI_CALL(0x001F9DE0u, sub_001F9DE0); /* call 0x001F9DE0 */

loc_00166CD9: ;
    ecx = MEM32(edi + 0x3C);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x720490);
    { uint32_t _icall_target = MEM32(eax + 0x50); PUSH32(esp, 0x00166CE6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00166CE3u); } /* indirect call */
    }

loc_00166CE6: ;
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00166CEDu); RECOMP_ABI_CALL(0x001F9DD0u, sub_001F9DD0); /* call 0x001F9DD0 */

loc_00166CED: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00166CFF; /* jne: not equal / not zero */

loc_00166CF1: ;
    eax = MEM32(edi + 0x44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00166CFF; /* je: equal / zero */

loc_00166CF8: ;
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00166CFFu); RECOMP_ABI_CALL(0x001F9DE0u, sub_001F9DE0); /* call 0x001F9DE0 */

loc_00166CFF: ;
    ecx = MEM32(edi + 0x3C);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x720490);
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x00166D0Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00166D09u); } /* indirect call */
    }

loc_00166D0C: ;
    eax = MEM32(esi + 4);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00166D1Bu); RECOMP_ABI_CALL(0x001659C0u, sub_001659C0); /* call 0x001659C0 */

loc_00166D1B: ;
    POP32(esp, edi);
    MEM8(esi + 8) = 1;
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
 * sub_00166D30
 * Original: 0x00166D30 - 0x00166D5C (44 bytes, 17 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00166D30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00166D30: ;
    edx = ecx;
    MEM32(edx) = 0x4AEDDC;
    eax = MEM32(edx + 0x30);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_00166D5B; /* js: sign (negative) */

loc_00166D3F: ;
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
    eax = MEM32(edx + 0x28);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(esi + 0x14); PUSH32(esp, 0x00166D5Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00166D57u); } /* indirect call */
    }

loc_00166D5A: ;
    POP32(esp, esi);

loc_00166D5B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00166D60
 * Original: 0x00166D60 - 0x00166D88 (40 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00166D60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00166D60: ;
    edx = ecx;
    eax = MEM32(edx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_00166D87; /* js: sign (negative) */

loc_00166D69: ;
    ecx = MEM32(0x62EBAC);
    edx = MEM32(edx);
    PUSH32(esp, esi);
    esi = MEM32(ecx);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax + eax * 2;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x10);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(esi + 0x14); PUSH32(esp, 0x00166D86u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00166D83u); } /* indirect call */
    }

loc_00166D86: ;
    POP32(esp, esi);

loc_00166D87: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00166D90
 * Original: 0x00166D90 - 0x00166DB4 (36 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00166D90(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00166D90: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x14) = 0x80000000u;
    MEM32(eax) = ecx;
    MEM32(eax + 4) = ecx;
    MEM8(eax + 8) = LO8(ecx);
    MEM8(eax + 0x18) = 1;
    MEM16(eax + 0x1A) = 0xFFFF;
    esp += 4; return; /* ret */

}

/**
 * sub_00166DC0
 * Original: 0x00166DC0 - 0x00166E5C (156 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00166DC0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00166DC0: ;
    eax = ecx;
    MEM32(eax + 0x14) = 0x80000000u;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x10) = ecx;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEM32(eax) = ecx;
    MEM32(eax + 4) = ecx;
    MEM8(eax + 8) = LO8(ecx);
    MEM8(eax + 0x18) = 1;
    MEM16(eax + 0x1A) = 0xFFFF;
    XMM_STORE(eax + 0x20, xmm0); /* movaps */
    XMM_STORE(eax + 0x30, xmm0); /* movaps */
    MEM32(eax + 0x3C) = 0x3F800000;
    XMM_STORE(eax + 0x40, xmm0); /* movaps */
    XMM_STORE(eax + 0x50, xmm0); /* movaps */
    XMM_STORE(eax + 0x60, xmm0); /* movaps */
    XMM_STORE(eax + 0x70, xmm0); /* movaps */
    XMM_STORE(eax + 0x80, xmm0); /* movaps */
    edx = 0xBF800000u;
    MEM32(eax + 0x60) = edx;
    MEM32(eax + 0x74) = edx;
    MEM32(eax + 0x88) = edx;
    XMM_STORE(eax + 0x90, xmm0); /* movaps */
    MEM32(eax + 0xA0) = edx;
    MEM32(eax + 0xA4) = ecx;
    MEM32(eax + 0xA8) = 0x3D4CCCCD;
    MEM32(eax + 0xAC) = 0x3F000000;
    MEM32(eax + 0xB0) = 0x3ECCCCCD;
    MEM8(eax + 0xB4) = LO8(ecx);
    MEM8(eax + 0xB5) = 2;
    esp += 4; return; /* ret */

}

/**
 * sub_00166EA0
 * Original: 0x00166EA0 - 0x00166EDF (63 bytes, 17 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00166EA0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00166EA0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00166EA8u); RECOMP_ABI_CALL(0x00166530u, sub_00166530); /* call 0x00166530 */

loc_00166EA8: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi) = 0x4AEE10;
    MEM32(esi + 0x70) = eax;
    MEM32(esi + 0x74) = eax;
    MEM32(esi + 0xE0) = eax;
    MEM32(esi + 0x170) = eax;
    MEM8(esi + 0x78) = 1;
    MEM32(esi + 0x194) = eax;
    MEM32(esi + 0x198) = eax;
    MEM32(esi + 0x19C) = eax;
    MEM32(esi + 0x20) = eax;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00166EE0
 * Original: 0x00166EE0 - 0x00166EE3 (3 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00166EE0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00166EE0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00166EF0
 * Original: 0x00166EF0 - 0x00166EF4 (4 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00166EF0(void)
{

loc_00166EF0: ;
    eax = MEM32(ecx + 0x70);
    esp += 4; return; /* ret */

}

/**
 * sub_00166F00
 * Original: 0x00166F00 - 0x00166F16 (22 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00166F00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00166F00: ;
    eax = MEM32(ecx + 0x70);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00166F10; /* je: equal / zero */

loc_00166F08: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00166F10; /* je: equal / zero */

loc_00166F0D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_00166F10: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00166F20
 * Original: 0x00166F20 - 0x00166F5D (61 bytes, 21 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00166F20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00166F20: ;
    eax = MEM32(ecx + 0x194);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00166F4E; /* je: equal / zero */

loc_00166F2A: ;
    edx = MEM32(eax + 4);
    edx = edx >> 6;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00166F3B; /* je: equal / zero */

loc_00166F35: ;
    eax = MEM32(eax + 0x194);

loc_00166F3B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00166F4E; /* je: equal / zero */

loc_00166F3F: ;
    eax = MEM32(ecx + 8);
    _fa = (uint32_t)(MEM8(eax + 8)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 8), 0x20 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00166F4E; /* je: equal / zero */

loc_00166F48: ;
    _fa = (uint32_t)(MEM8(ecx + 4)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 4), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00166F5A; /* je: equal / zero */

loc_00166F4E: ;
    _fa = (uint32_t)(MEM8(ecx + 4)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 4), 4 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00166F5A; /* jne: not equal / not zero */

loc_00166F54: ;
    eax = 1;
    esp += 4; return; /* ret */

loc_00166F5A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00166F60
 * Original: 0x00166F60 - 0x00166F8C (44 bytes, 17 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00166F60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00166F60: ;
    edx = ecx;
    MEM32(edx) = 0x4AEDDC;
    eax = MEM32(edx + 0x30);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_00166F8B; /* js: sign (negative) */

loc_00166F6F: ;
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
    eax = MEM32(edx + 0x28);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(esi + 0x14); PUSH32(esp, 0x00166F8Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00166F87u); } /* indirect call */
    }

loc_00166F8A: ;
    POP32(esp, esi);

loc_00166F8B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00166F90
 * Original: 0x00166F90 - 0x00166FB0 (32 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00166F90(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00166F90: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00166F98u); RECOMP_ABI_CALL(0x00166530u, sub_00166530); /* call 0x00166530 */

loc_00166F98: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x60) = eax;
    MEM32(esi + 0x64) = eax;
    MEM32(esi + 0x68) = eax;
    MEM32(esi + 0x6C) = eax;
    MEM32(esi) = 0x4AEE24;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00166FB0
 * Original: 0x00166FB0 - 0x00166FC0 (16 bytes, 15 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00166FB0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00166FB0: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00166FC0
 * Original: 0x00166FC0 - 0x00166FC6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00166FC0(void)
{

loc_00166FC0: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00166FD0
 * Original: 0x00166FD0 - 0x00166FD6 (6 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00166FD0(void)
{

loc_00166FD0: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00166FE0
 * Original: 0x00166FE0 - 0x0016700C (44 bytes, 17 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00166FE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00166FE0: ;
    edx = ecx;
    MEM32(edx) = 0x4AEDDC;
    eax = MEM32(edx + 0x30);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_0016700B; /* js: sign (negative) */

loc_00166FEF: ;
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
    eax = MEM32(edx + 0x28);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(esi + 0x14); PUSH32(esp, 0x0016700Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00167007u); } /* indirect call */
    }

loc_0016700A: ;
    POP32(esp, esi);

loc_0016700B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00167010
 * Original: 0x00167010 - 0x0016720C (508 bytes, 155 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00167010(void)
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

loc_00167010: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x3BC66B);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _fb = (uint32_t)(0x1E8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1E8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = ecx;
    eax = MEM32(ebx);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0016703Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00167038u); } /* indirect call */
    }

loc_0016703B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001671D6; /* je: equal / zero */

loc_00167043: ;
    fp_push(MEMF(0x4964E8)); /* fld float */
    fp_push(MEMF(ebx + 0x48)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0016706B; /* jnp: not parity */

loc_00167055: ;
    fp_push(MEMF(0x4964E8)); /* fld float */
    fp_push(MEMF(ebx + 0x58)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001671D6; /* jp: parity */

loc_0016706B: ;
    eax = MEM32(ebx + 8);
    esi = MEM32(eax + 0x54);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001670FD; /* jl: less (signed <) */

loc_00167079: ;
    PUSH32(esp, esi);
    ecx = esp + 0x174;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x5CE880);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0016708Cu); RECOMP_ABI_CALL(0x001ABBE0u, sub_001ABBE0); /* call 0x001ABBE0 */

loc_0016708C: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x5CE880);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00167097u); RECOMP_ABI_CALL(0x00109240u, sub_00109240); /* call 0x00109240 */

loc_00167097: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = eax;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = edi;

loc_001670A0: ;
    edx = esp + esi + 0x170;
    PUSH32(esp, edx);
    eax = esp + esi + 0xF4;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001670B6u); RECOMP_ABI_CALL(0x0015CC00u, sub_0015CC00); /* call 0x0015CC00 */

loc_001670B6: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x80 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001670A0; /* jl: less (signed <) */

loc_001670C4: ;
    esi = MEM32(ebp + 8);
    ecx = esp + 0xF0;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001670D5u); RECOMP_ABI_CALL(0x0015BDF0u, sub_0015BDF0); /* call 0x0015BDF0 */

loc_001670D5: ;
    edi = MEM32(ebp + 0xC);
    edx = esp + 0x168;
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001670E6u); RECOMP_ABI_CALL(0x0015BDF0u, sub_0015BDF0); /* call 0x0015BDF0 */

loc_001670E6: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ebx + 0x3C;
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001670F3u); RECOMP_ABI_CALL(0x0015BDF0u, sub_0015BDF0); /* call 0x0015BDF0 */

loc_001670F3: ;
    PUSH32(esp, edi);
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x4C;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebx);
    goto loc_001671EB;

loc_001670FD: ;
    ecx = esp + 0x30;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00167106u); RECOMP_ABI_CALL(0x00166DC0u, sub_00166DC0); /* call 0x00166DC0 */

loc_00167106: ;
    ecx = MEM32(ebx + 0xC);
    eax = esp + 0x30;
    PUSH32(esp, eax);
    MEM32(esp + 0x200) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0016711Eu); RECOMP_ABI_CALL(0x00205940u, sub_00205940); /* call 0x00205940 */

loc_0016711E: ;
    eax = MEM32(ebx + 0xC);
    eax = MEM32(eax + 0x3C);
    ecx = MEM32(esp + 0x34);
    edx = MEM32(ecx);
    esi = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x80;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x0016713Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00167137u); } /* indirect call */
    }

loc_0016713A: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x49E578)); /* fmul dword ptr [0x49e578] */
    esi = MEM32(ebp + 8);
    edi = MEM32(ebp + 0xC);
    eax = 0x3F800000;
    MEMF(esi) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esi + 0xC) = eax;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    MEM32(esp + 0x1FC) = 0xFFFFFFFFu;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x49E578)); /* fmul dword ptr [0x49e578] */
    MEMF(esi + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x49E578)); /* fmul dword ptr [0x49e578] */
    MEMF(esi + 8) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(edi + 0xC) = eax;
    fp_push(MEMF(esp + 0x20)); /* fld float */
    eax = MEM32(esp + 0x44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x49E578)); /* fmul dword ptr [0x49e578] */
    MEMF(edi) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x49E578)); /* fmul dword ptr [0x49e578] */
    MEMF(edi + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x49E578)); /* fmul dword ptr [0x49e578] */
    MEMF(edi + 8) = (float)fp_top(); fp_pop(); /* fstp */
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_001671C5; /* js: sign (negative) */

loc_001671AA: ;
    ecx = MEM32(0x62EBAC);
    edx = MEM32(ecx);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x10);
    eax = eax << 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x44);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x001671C5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001671C2u); } /* indirect call */
    }

loc_001671C5: ;
    ecx = ebx + 0x3C;
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001671CFu); RECOMP_ABI_CALL(0x0015BDF0u, sub_0015BDF0); /* call 0x0015BDF0 */

loc_001671CF: ;
    PUSH32(esp, edi);
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x4C;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebx);
    goto loc_001671EB;

loc_001671D6: ;
    eax = MEM32(ebp + 8);
    edx = ebx + 0x3C;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001671E3u); RECOMP_ABI_CALL(0x0015BDF0u, sub_0015BDF0); /* call 0x0015BDF0 */

loc_001671E3: ;
    ecx = MEM32(ebp + 0xC);
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x4C;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);

loc_001671EB: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001671F0u); RECOMP_ABI_CALL(0x0015BDF0u, sub_0015BDF0); /* call 0x0015BDF0 */

loc_001671F0: ;
    ecx = MEM32(esp + 0x204);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    MEM32(XBOX_FS_BASE) = ecx;
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
 * sub_00167210
 * Original: 0x00167210 - 0x001673AC (412 bytes, 132 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00167210(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00167210: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0016721Au); RECOMP_ABI_CALL(0x001D2C90u, sub_001D2C90); /* call 0x001D2C90 */

loc_0016721A: ;
    eax = MEM32(esi + 0x224);
    SET_LO8(ebx, MEM8(esp + 0x10));
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001673A6; /* je: equal / zero */

loc_0016722E: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00167250; /* jne: not equal / not zero */

loc_00167233: ;
    MEM32(esi + 0x10B0) = ebp;
    MEM32(esi + 0x238) = ebp;
    MEM32(esi + 0x224) = ebp;
    MEM32(esi + 0x23C) = ebp;
    goto loc_00167391;

loc_00167250: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001673A6; /* je: equal / zero */

loc_00167258: ;
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x10B8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    MEM32(esi + 0x10B0) = ebp;
    if (CMP_EQ(_fa, _fb)) goto loc_00167299; /* je: equal / zero */

loc_00167269: ;
    eax = MEM32(edi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_00167289; /* js: sign (negative) */

loc_00167270: ;
    ecx = MEM32(0x62EBAC);
    edx = MEM32(ecx);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x10);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    eax = MEM32(edi);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00167289u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00167286u); } /* indirect call */
    }

loc_00167289: ;
    ecx = MEM32(0x62EBAC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x10);
    PUSH32(esp, 0xC);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00167299u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00167296u); } /* indirect call */
    }

loc_00167299: ;
    edi = MEM32(esi + 0x10E0);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001672D3; /* je: equal / zero */

loc_001672A3: ;
    eax = MEM32(edi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_001672C3; /* js: sign (negative) */

loc_001672AA: ;
    ecx = MEM32(0x62EBAC);
    edx = MEM32(ecx);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x10);
    eax = eax << 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    eax = MEM32(edi);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x001672C3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001672C0u); } /* indirect call */
    }

loc_001672C3: ;
    ecx = MEM32(0x62EBAC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x10);
    PUSH32(esp, 0xC);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x001672D3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001672D0u); } /* indirect call */
    }

loc_001672D3: ;
    ecx = MEM32(esi + 0x238);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    POP32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_001672E4; /* je: equal / zero */

loc_001672DE: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x001672E4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001672E2u); } /* indirect call */
    }

loc_001672E4: ;
    ecx = MEM32(esi + 0x224);
    PUSH32(esp, ebp);
    PUSH32(esp, ebp);
    MEM32(esi + 0x238) = ebp;
    PUSH32(esp, 0x001672F7u); RECOMP_ABI_CALL(0x00203850u, sub_00203850); /* call 0x00203850 */

loc_001672F7: ;
    ecx = MEM32(esi + 0x224);
    MEM16(ecx + 6) = MEM16(ecx + 6) - 1;
    _fa = (uint32_t)(MEM16(ecx + 6)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(ecx + 6)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebp)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 6), LO16(ebp) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0016730D; /* jne: not equal / not zero */

loc_00167307: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0016730Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0016730Bu); } /* indirect call */
    }

loc_0016730D: ;
    ecx = MEM32(esi + 0x228);
    MEM32(esi + 0x224) = ebp;
    MEM16(ecx + 6) = MEM16(ecx + 6) - 1;
    _fa = (uint32_t)(MEM16(ecx + 6)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(ecx + 6)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebp)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 6), LO16(ebp) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00167329; /* jne: not equal / not zero */

loc_00167323: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00167329u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00167327u); } /* indirect call */
    }

loc_00167329: ;
    ecx = MEM32(esi + 0x23C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00167349; /* je: equal / zero */

loc_00167333: ;
    MEM16(ecx + 6) = MEM16(ecx + 6) - 1;
    _fa = (uint32_t)(MEM16(ecx + 6)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(ecx + 6)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebp)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 6), LO16(ebp) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00167343; /* jne: not equal / not zero */

loc_0016733D: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00167343u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00167341u); } /* indirect call */
    }

loc_00167343: ;
    MEM32(esi + 0x23C) = ebp;

loc_00167349: ;
    ecx = MEM32(esi + 0x22C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016738C; /* je: equal / zero */

loc_00167353: ;
    PUSH32(esp, ebp);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0016735Au); RECOMP_ABI_CALL(0x00203850u, sub_00203850); /* call 0x00203850 */

loc_0016735A: ;
    ecx = MEM32(esi + 0x22C);
    MEM16(ecx + 6) = MEM16(ecx + 6) - 1;
    _fa = (uint32_t)(MEM16(ecx + 6)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(ecx + 6)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebp)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 6), LO16(ebp) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00167370; /* jne: not equal / not zero */

loc_0016736A: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00167370u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0016736Eu); } /* indirect call */
    }

loc_00167370: ;
    ecx = MEM32(esi + 0x230);
    MEM32(esi + 0x22C) = ebp;
    MEM16(ecx + 6) = MEM16(ecx + 6) - 1;
    _fa = (uint32_t)(MEM16(ecx + 6)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(ecx + 6)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebp)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 6), LO16(ebp) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0016738C; /* jne: not equal / not zero */

loc_00167386: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0016738Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0016738Au); } /* indirect call */
    }

loc_0016738C: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001673A0; /* jne: not equal / not zero */

loc_00167391: ;
    PUSH32(esp, 0x00167396u); RECOMP_ABI_CALL(0x002AF5E0u, sub_002AF5E0); /* call 0x002AF5E0 */

loc_00167396: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001673A0; /* jne: not equal / not zero */

loc_0016739A: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x518D38); PUSH32(esp, 0x001673A0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0016739Au); } /* indirect call */
    }

loc_001673A0: ;
    MEM32(esi + 0x240) = ebp;

loc_001673A6: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001673B0
 * Original: 0x001673B0 - 0x0016740F (95 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001673B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001673B0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x3BC688);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 4) = esi;
    eax = MEM32(esi + 0x30);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x10) = 0;
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_001673F9; /* js: sign (negative) */

loc_001673DC: ;
    ecx = MEM32(0x62EBAC);
    edx = MEM32(ecx);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax + eax * 2;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x10);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x28);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x001673F9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001673F6u); } /* indirect call */
    }

loc_001673F9: ;
    ecx = MEM32(esp + 8);
    MEM32(esi) = 0x4AE714;
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00167520
 * Original: 0x00167520 - 0x001676BB (411 bytes, 111 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00167520(void)
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

loc_00167520: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x3BC6B9);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _fb = (uint32_t)(0xFC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xFC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 8);
    ebx = MEM32(esi + 8);
    ebx = ebx >> 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = esp + 0x40;
    SET_LO8(ebx, LO8(ebx) & 1);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00167557u); RECOMP_ABI_CALL(0x00166DC0u, sub_00166DC0); /* call 0x00166DC0 */

loc_00167557: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    XMM_STORE(esp + 0x10, xmm0); /* movaps */
    XMM_STORE(esp + 0x20, xmm0); /* movaps */
    XMM_STORE(esp + 0x30, xmm0); /* movaps */
    MEM32(esp + 0x10) = 0x3F800000;
    MEM32(esp + 0x24) = 0x3F800000;
    MEM32(esp + 0x38) = 0x3F800000;
    eax = MEM32(esi + 0x1C);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    ecx = esp + 0x18;
    MEM32(esp + 0x114) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0016759Bu); RECOMP_ABI_CALL(0x002A86E0u, sub_002A86E0); /* call 0x002A86E0 */

loc_0016759B: ;
    ecx = MEM32(esi + 0x24);
    PUSH32(esp, ecx);
    PUSH32(esp, 2);
    ecx = esp + 0x18;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001675AAu); RECOMP_ABI_CALL(0x002A86E0u, sub_002A86E0); /* call 0x002A86E0 */

loc_001675AA: ;
    edx = MEM32(esi + 0x20);
    PUSH32(esp, edx);
    PUSH32(esp, 1);
    ecx = esp + 0x18;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001675B9u); RECOMP_ABI_CALL(0x002A86E0u, sub_002A86E0); /* call 0x002A86E0 */

loc_001675B9: ;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = esp + 0x74;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001675C7u); RECOMP_ABI_CALL(0x002A77C0u, sub_002A77C0); /* call 0x002A77C0 */

loc_001675C7: ;
    fp_push(MEMF(esi + 0x18)); /* fld float */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    fp_push(MEMF(esi + 0x14)); /* fld float */
    ecx = MEM32(esi + 0x10);
    MEMF(esp + 0x64) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(ebp + 8);
    MEMF(esp + 0x68) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0x60) = ecx;
    MEM32(esp + 0x6C) = 0;
    MEM32(esp + 0x44) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_001675F9; /* je: equal / zero */

loc_001675EF: ;
    MEM32(esp + 0xC) = 0x3F800000;
    goto loc_001675FF;

loc_001675F9: ;
    eax = MEM32(esi);
    MEM32(esp + 0xC) = eax;

loc_001675FF: ;
    edx = MEM32(esp + 0xC);
    eax = MEM32(ebp + 0xC);
    ecx = esp + 0x40;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00167612u); RECOMP_ABI_CALL(0x00278120u, sub_00278120); /* call 0x00278120 */

loc_00167612: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x24);
    PUSH32(esp, 0xA0);
    ecx = ecx + ecx + 5;
    MEM8(esp + 0xFC) = LO8(ecx);
    edx = MEM32(esi + 0x30);
    ecx = MEM32(0x62EBAC);
    MEM32(esp + 0xF8) = edx;
    eax = MEM32(ecx);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x00167641u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0016763Eu); } /* indirect call */
    }

loc_00167641: ;
    MEM16(eax + 4) = 0xA0;
    MEM32(esp + 0xC) = eax;
    ecx = esp + 0x40;
    PUSH32(esp, ecx);
    ecx = eax;
    MEM8(esp + 0x110) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0016765Fu); RECOMP_ABI_CALL(0x00205C60u, sub_00205C60); /* call 0x00205C60 */

loc_0016765F: ;
    esi = eax;
    eax = MEM32(esi + 0x3C);
    MEM32(eax + 0x14) = 0x3D23D70A;
    eax = MEM32(esi + 0x3C);
    MEM32(eax + 0x18) = 0x3E4CCCCD;
    eax = MEM32(esp + 0x54);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x10C) = 0xFFFFFFFFu;
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_001676A3; /* js: sign (negative) */

loc_00167688: ;
    ecx = MEM32(0x62EBAC);
    edx = MEM32(ecx);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x10);
    eax = eax << 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x54);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x001676A3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001676A0u); } /* indirect call */
    }

loc_001676A3: ;
    ecx = MEM32(esp + 0x104);
    eax = esi;
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
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
 * sub_001676C0
 * Original: 0x001676C0 - 0x0016799E (734 bytes, 239 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001676C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001676C0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x3BC6E3);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebp = ecx;
    eax = MEM32(ebp + 0x19C);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(edx, 0); /* xor self */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016773E; /* je: equal / zero */

loc_001676F2: ;
    ecx = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM8(ecx + 8)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 8), 8 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0016773C; /* jne: not equal / not zero */

loc_001676FB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016773E; /* je: equal / zero */

loc_001676FF: ;
    /* nop */

loc_00167700: ;
    ecx = MEM32(eax + 0x194);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016771B; /* je: equal / zero */

loc_0016770A: ;
    ebx = MEM32(ecx + 4);
    ebx = ebx >> 6;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0016771B; /* je: equal / zero */

loc_00167715: ;
    ecx = MEM32(ecx + 0x194);

loc_0016771B: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00167730; /* je: equal / zero */

loc_00167721: ;
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(MEM8(ecx + 8)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 8), 0x20 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00167730; /* je: equal / zero */

loc_0016772A: ;
    _fa = (uint32_t)(MEM8(eax + 4)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 4), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0016773C; /* je: equal / zero */

loc_00167730: ;
    eax = MEM32(eax + 0x198);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00167700; /* jne: not equal / not zero */

loc_0016773A: ;
    goto loc_0016773E;

loc_0016773C: ;
    SET_LO8(edx, 1);

loc_0016773E: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 1 (8-bit) */
    MEM32(ebp + 0x184) = ebx;
    if (CMP_NE(_fa, _fb)) goto loc_00167989; /* jne: not equal / not zero */

loc_0016774D: ;
    MEM32(esp + 0x1C) = ebx;
    MEM32(esp + 0x20) = ebx;
    MEM32(esp + 0x24) = 0x80000000u;
    PUSH32(esp, 4);
    eax = esp + 0x20;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    MEM32(esp + 0x40) = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0016776Fu); RECOMP_ABI_CALL(0x00101B30u, sub_00101B30); /* call 0x00101B30 */

loc_0016776F: ;
    edx = MEM32(esp + 0x2C);
    ecx = MEM32(ebp + 0x180);
    eax = MEM32(esp + 0x28);
    MEM32(eax + edx * 4) = ecx;
    ecx = MEM32(esp + 0x2C);
    esi = MEM32(ebp + 0x19C);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x20) = ecx;
    edx = 0x1666B0;
    ecx = esp + 0x1C;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x18) = ebp;
    if (CMP_NE(_fa, _fb)) goto loc_001677AD; /* jne: not equal / not zero */

loc_001677A9: ;
    edi = esp + 0x14;

loc_001677AD: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00167834; /* je: equal / zero */

loc_001677B5: ;
    eax = MEM32(esi + 0x194);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001677E3; /* je: equal / zero */

loc_001677BF: ;
    ecx = MEM32(eax + 4);
    ecx = ecx >> 6;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001677D0; /* je: equal / zero */

loc_001677CA: ;
    eax = MEM32(eax + 0x194);

loc_001677D0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001677E3; /* je: equal / zero */

loc_001677D4: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(MEM8(eax + 8)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 8), 0x20 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001677E3; /* je: equal / zero */

loc_001677DD: ;
    _fa = (uint32_t)(MEM8(esi + 4)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 4), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001677EE; /* je: equal / zero */

loc_001677E3: ;
    edx = MEM32(esi + 4);
    edx = edx >> 6;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0016782A; /* je: equal / zero */

loc_001677EE: ;
    eax = 0x1666B0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001677FB; /* jne: not equal / not zero */

loc_001677F7: ;
    MEM32(edi) = MEM32(edi) + 1;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_00167809;

loc_001677FB: ;
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00167806u); RECOMP_ABI_CALL(0x001666B0u, sub_001666B0); /* call 0x001666B0 */

loc_00167806: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00167809: ;
    _fa = (uint32_t)(MEM32(esi + 0x19C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x19C), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016782A; /* je: equal / zero */

loc_00167811: ;
    PUSH32(esp, 1);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x1666B0);
    ecx = 0x67CF20;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0016782Au); RECOMP_ABI_CALL(0x00164940u, sub_00164940); /* call 0x00164940 */

loc_0016782A: ;
    esi = MEM32(esi + 0x198);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001677B5; /* jne: not equal / not zero */

loc_00167834: ;
    eax = MEM32(esp + 0x20);
    MEM32(ebp + 0x184) = eax;
    ecx = MEM32(0x62EBAC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1E);
    PUSH32(esp, 0x38);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0016784Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0016784Au); } /* indirect call */
    }

loc_0016784D: ;
    MEM16(eax + 4) = 0x38;
    MEM32(esp + 0x10) = eax;
    ecx = MEM32(esp + 0x20);
    edx = MEM32(esp + 0x1C);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = eax;
    MEM8(esp + 0x3C) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0016786Du); RECOMP_ABI_CALL(0x00216690u, sub_00216690); /* call 0x00216690 */

loc_0016786D: ;
    edi = eax;
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    ecx = ebp;
    MEM8(esp + 0x3C) = 0;
    MEM32(edi + 8) = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00167880u); RECOMP_ABI_CALL(0x00167520u, sub_00167520); /* call 0x00167520 */

loc_00167880: ;
    edx = MEM32(esp + 0x20);
    esi = MEM32(ebp + 0x19C);
    ebx = eax;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = 0x1641D0;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x20) = edx;
    if (CMP_NE(_fa, _fb)) goto loc_001678A0; /* jne: not equal / not zero */

loc_0016789C: ;
    ebp = esp + 0x14;

loc_001678A0: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00167936; /* je: equal / zero */

loc_001678A8: ;
    goto loc_001678B0;

    /* nop */

loc_001678B0: ;
    eax = MEM32(esi + 0x194);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001678DE; /* je: equal / zero */

loc_001678BA: ;
    ecx = MEM32(eax + 4);
    ecx = ecx >> 6;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001678CB; /* je: equal / zero */

loc_001678C5: ;
    eax = MEM32(eax + 0x194);

loc_001678CB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001678DE; /* je: equal / zero */

loc_001678CF: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(MEM8(eax + 8)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 8), 0x20 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001678DE; /* je: equal / zero */

loc_001678D8: ;
    _fa = (uint32_t)(MEM8(esi + 4)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 4), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001678E9; /* je: equal / zero */

loc_001678DE: ;
    edx = MEM32(esi + 4);
    edx = edx >> 6;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00167928; /* je: equal / zero */

loc_001678E9: ;
    eax = 0x1641D0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001678F7; /* jne: not equal / not zero */

loc_001678F2: ;
    MEM32(ebp) = MEM32(ebp) + 1;
    _fa = (uint32_t)(MEM32(ebp)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_00167905;

loc_001678F7: ;
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00167902u); RECOMP_ABI_CALL(0x001641D0u, sub_001641D0); /* call 0x001641D0 */

loc_00167902: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00167905: ;
    eax = MEM32(esi + 0x19C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00167928; /* je: equal / zero */

loc_0016790F: ;
    PUSH32(esp, 1);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x1641D0);
    ecx = 0x67CF20;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00167928u); RECOMP_ABI_CALL(0x00164940u, sub_00164940); /* call 0x00164940 */

loc_00167928: ;
    esi = MEM32(esi + 0x198);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001678B0; /* jne: not equal / not zero */

loc_00167936: ;
    MEM16(edi + 6) = MEM16(edi + 6) - 1;
    _fa = (uint32_t)(MEM16(edi + 6)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(edi + 6)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edi + 6), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00167949; /* jne: not equal / not zero */

loc_00167941: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00167949u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00167947u); } /* indirect call */
    }

loc_00167949: ;
    eax = MEM32(esp + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x34) = 0xFFFFFFFFu;
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_00167974; /* js: sign (negative) */

loc_00167959: ;
    ecx = MEM32(0x62EBAC);
    edx = MEM32(ecx);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x10);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x24);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00167974u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00167971u); } /* indirect call */
    }

loc_00167974: ;
    eax = ebx;
    ecx = MEM32(esp + 0x2C);
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00167989: ;
    ecx = MEM32(esp + 0x2C);
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_001679A0
 * Original: 0x001679A0 - 0x00167BA5 (517 bytes, 166 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001679A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001679A0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x3BC703);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x19C);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_00167B79; /* je: equal / zero */

loc_001679D4: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(MEM8(eax + 8)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 8), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00167B79; /* je: equal / zero */

loc_001679E1: ;
    MEM32(esp + 0x24) = ebx;
    MEM32(esp + 0x28) = ebx;
    MEM32(esp + 0x2C) = 0x80000000u;
    PUSH32(esp, 4);
    eax = esp + 0x28;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    MEM32(esp + 0x48) = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00167A03u); RECOMP_ABI_CALL(0x00101B30u, sub_00101B30); /* call 0x00101B30 */

loc_00167A03: ;
    edx = MEM32(esp + 0x34);
    ecx = MEM32(esi + 0x180);
    eax = MEM32(esp + 0x30);
    MEM32(eax + edx * 4) = ecx;
    ecx = MEM32(esp + 0x34);
    edi = MEM32(esi + 0x19C);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x28) = ecx;
    edx = 0x1666B0;
    ecx = esp + 0x24;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    MEM32(esp + 0x1C) = ecx;
    MEM32(esp + 0x20) = esi;
    if (CMP_NE(_fa, _fb)) goto loc_00167A41; /* jne: not equal / not zero */

loc_00167A3D: ;
    ebp = esp + 0x1C;

loc_00167A41: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00167A79; /* je: equal / zero */

loc_00167A45: ;
    eax = MEM32(edi + 4);
    eax = eax >> 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    SET_LO8(eax, LO8(eax) & 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEM8(esp + 0x17) = LO8(eax);
    if ((_fa == 0)) goto loc_00167A6F; /* je: equal / zero */

loc_00167A53: ;
    ecx = 0x1666B0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00167A61; /* jne: not equal / not zero */

loc_00167A5C: ;
    MEM32(ebp) = MEM32(ebp) + 1;
    _fa = (uint32_t)(MEM32(ebp)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_00167A6F;

loc_00167A61: ;
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00167A6Cu); RECOMP_ABI_CALL(0x001666B0u, sub_001666B0); /* call 0x001666B0 */

loc_00167A6C: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00167A6F: ;
    edi = MEM32(edi + 0x198);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00167A45; /* jne: not equal / not zero */

loc_00167A79: ;
    eax = MEM32(esp + 0x28);
    MEM32(esi + 0x188) = eax;
    ecx = MEM32(0x62EBAC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1E);
    PUSH32(esp, 0x38);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00167A92u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00167A8Fu); } /* indirect call */
    }

loc_00167A92: ;
    MEM16(eax + 4) = 0x38;
    MEM32(esp + 0x18) = eax;
    ecx = MEM32(esp + 0x28);
    edx = MEM32(esp + 0x24);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = eax;
    MEM8(esp + 0x44) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00167AB2u); RECOMP_ABI_CALL(0x00216690u, sub_00216690); /* call 0x00216690 */

loc_00167AB2: ;
    edi = eax;
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    ecx = esi;
    MEM8(esp + 0x44) = LO8(ebx);
    MEM32(edi + 8) = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00167AC4u); RECOMP_ABI_CALL(0x00167520u, sub_00167520); /* call 0x00167520 */

loc_00167AC4: ;
    edx = MEM32(esp + 0x28);
    esi = MEM32(esi + 0x19C);
    MEM32(esp + 0x18) = eax;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = 0x1641D0;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x28) = edx;
    if (CMP_NE(_fa, _fb)) goto loc_00167AE6; /* jne: not equal / not zero */

loc_00167AE2: ;
    ebp = esp + 0x1C;

loc_00167AE6: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00167B25; /* je: equal / zero */

loc_00167AEA: ;
    /* nop */

loc_00167AF0: ;
    ecx = MEM32(esi + 4);
    ecx = ecx >> 6;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    SET_LO8(ecx, LO8(ecx) & 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEM8(esp + 0x17) = LO8(ecx);
    if ((_fa == 0)) goto loc_00167B1B; /* je: equal / zero */

loc_00167AFF: ;
    edx = 0x1641D0;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00167B0D; /* jne: not equal / not zero */

loc_00167B08: ;
    MEM32(ebp) = MEM32(ebp) + 1;
    _fa = (uint32_t)(MEM32(ebp)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_00167B1B;

loc_00167B0D: ;
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00167B18u); RECOMP_ABI_CALL(0x001641D0u, sub_001641D0); /* call 0x001641D0 */

loc_00167B18: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00167B1B: ;
    esi = MEM32(esi + 0x198);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00167AF0; /* jne: not equal / not zero */

loc_00167B25: ;
    MEM16(edi + 6) = MEM16(edi + 6) - 1;
    _fa = (uint32_t)(MEM16(edi + 6)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(edi + 6)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edi + 6), LO16(ebx) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00167B37; /* jne: not equal / not zero */

loc_00167B2F: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00167B37u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00167B35u); } /* indirect call */
    }

loc_00167B37: ;
    eax = MEM32(esp + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x3C) = 0xFFFFFFFFu;
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_00167B62; /* js: sign (negative) */

loc_00167B47: ;
    ecx = MEM32(0x62EBAC);
    edx = MEM32(ecx);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x10);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x2C);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00167B62u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00167B5Fu); } /* indirect call */
    }

loc_00167B62: ;
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x34);
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00167B79: ;
    eax = MEM32(esi + 0x180);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    ecx = esi;
    MEM32(esi + 0x188) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00167B92u); RECOMP_ABI_CALL(0x00167520u, sub_00167520); /* call 0x00167520 */

loc_00167B92: ;
    ecx = MEM32(esp + 0x34);
    POP32(esp, edi);
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0016860E
 * Original: 0x0016860E - 0x001689B0 (930 bytes, 223 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016860E(void)
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

loc_0016860E: ;
    if (_flags /* je: equal / zero */) goto loc_00168849;

loc_00168614: ;
    fp_push(MEMF(esi + 0x10)); /* fld float */
    eax = MEM32(esi + 8);
    fp_push(MEMF(esi + 0xC)); /* fld float */
    edx = MEM32(esi + 0x14);
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0x30) = eax;
    MEM32(esp + 0x3C) = 0;
    MEMF(esp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0x40) = edx;
    fp_push(MEMF(esi + 0x1C)); /* fld float */
    MEM32(esp + 0x4C) = 0;
    fp_push(MEMF(esi + 0x18)); /* fld float */
    MEMF(esp + 0x44) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp + 0x48) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x4964E8)); /* fld float */
    fp_push(MEMF(esi + 0x20)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0016873E; /* jp: parity */

loc_00168664: ;
    fp_push(MEMF(0x4964E8)); /* fld float */
    fp_push(MEMF(esi + 0x24)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0016873E; /* jp: parity */

loc_0016867A: ;
    esi = MEM32(ecx + 0xC);
    eax = esp + 0x40;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, eax);
    ecx = esp + 0x34;
    PUSH32(esp, ecx);
    ecx = MEM32(edi + 0x224);
    MEM32(esp + 0x168) = ebx;
    MEM32(esp + 0x16C) = ebx;
    MEM32(esp + 0x170) = ebx;
    XMM_STORE(esp + 0x178, xmm0); /* movaps */
    XMM_STORE(esp + 0x188, xmm0); /* movaps */
    XMM_STORE(esp + 0x198, xmm0); /* movaps */
    XMM_STORE(esp + 0x1A8, xmm0); /* movaps */
    XMM_STORE(esp + 0x1B8, xmm0); /* movaps */
    PUSH32(esp, 0x001686D2u); RECOMP_ABI_CALL(0x001FB0C0u, sub_001FB0C0); /* call 0x001FB0C0 */

loc_001686D2: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    ecx = esp + 0x170;
    PUSH32(esp, 0x001686E0u); RECOMP_ABI_CALL(0x00163870u, sub_00163870); /* call 0x00163870 */

loc_001686E0: ;
    ecx = MEM32(0x62EBAC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x23);
    PUSH32(esp, 0xA0);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x001686F2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001686EFu); } /* indirect call */
    }

loc_001686F2: ;
    MEM16(eax + 4) = 0xA0;
    MEM32(esp + 0x2C) = eax;
    ecx = esp + 0x160;
    PUSH32(esp, ecx);
    ecx = eax;
    MEM32(esp + 0x2D0) = ebx;
    PUSH32(esp, 0x00168712u); RECOMP_ABI_CALL(0x002079E0u, sub_002079E0); /* call 0x002079E0 */

loc_00168712: ;
    ecx = MEM32(edi + 0x224);
    PUSH32(esp, eax);
    MEM32(esp + 0x2D0) = 0xFFFFFFFFu;
    PUSH32(esp, 0x00168729u); RECOMP_ABI_CALL(0x001FF030u, sub_001FF030); /* call 0x001FF030 */

loc_00168729: ;
    ecx = MEM32(esp + 0x18);
    eax = MEM32(esp + 0x28);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x18) = ecx;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x28;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_0016859B(); return; /* tail jmp 0x0016859B */

loc_0016873E: ;
    edi = MEM32(ecx + 0xC);
    ebx = MEM32(esp + 0x24);
    ecx = MEM32(ebx + 0x224);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    edx = esp + 0x40;
    MEM32(esp + 0xD0) = eax;
    MEM32(esp + 0xD4) = eax;
    MEM32(esp + 0xD8) = eax;
    MEM32(esp + 0x158) = eax;
    PUSH32(esp, edx);
    eax = esp + 0x34;
    PUSH32(esp, eax);
    XMM_STORE(esp + 0xE8, xmm0); /* movaps */
    XMM_STORE(esp + 0xF8, xmm0); /* movaps */
    XMM_STORE(esp + 0x108, xmm0); /* movaps */
    XMM_STORE(esp + 0x118, xmm0); /* movaps */
    XMM_STORE(esp + 0x128, xmm0); /* movaps */
    XMM_STORE(esp + 0x138, xmm0); /* movaps */
    XMM_STORE(esp + 0x148, xmm0); /* movaps */
    MEM32(esp + 0x158) = 0xC0490FDBu;
    MEM32(esp + 0x15C) = 0x40490FDB;
    PUSH32(esp, 0x001687C9u); RECOMP_ABI_CALL(0x001FB0C0u, sub_001FB0C0); /* call 0x001FB0C0 */

loc_001687C9: ;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = esp + 0xE0;
    PUSH32(esp, 0x001687D7u); RECOMP_ABI_CALL(0x001639D0u, sub_001639D0); /* call 0x001639D0 */

loc_001687D7: ;
    fp_push(MEMF(esi + 0x24)); /* fld float */
    ecx = MEM32(0x62EBAC);
    fp_top() = -fp_top(); /* fchs */
    MEMF(esp + 0x150) = (float)fp_top(); fp_pop(); /* fstp */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x23);
    fp_push(MEMF(esi + 0x20)); /* fld float */
    MEM32(esp + 0x15C) = 0x3F666666;
    fp_top() = -fp_top(); /* fchs */
    PUSH32(esp, 0xE0);
    MEMF(esp + 0x15C) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(ecx);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0016880Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00168809u); } /* indirect call */
    }

loc_0016880C: ;
    MEM16(eax + 4) = 0xE0;
    MEM32(esp + 0x2C) = eax;
    ecx = esp + 0xD0;
    PUSH32(esp, ecx);
    ecx = eax;
    MEM32(esp + 0x2D0) = 1;
    PUSH32(esp, 0x00168830u); RECOMP_ABI_CALL(0x00206EF0u, sub_00206EF0); /* call 0x00206EF0 */

loc_00168830: ;
    ecx = MEM32(ebx + 0x224);
    PUSH32(esp, eax);
    MEM32(esp + 0x2D0) = 0xFFFFFFFFu;
    PUSH32(esp, 0x00168847u); RECOMP_ABI_CALL(0x001FF030u, sub_001FF030); /* call 0x001FF030 */

loc_00168847: ;
    edi = ebx;

loc_00168849: ;
    ecx = MEM32(esp + 0x18);
    eax = MEM32(esp + 0x28);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x18) = ecx;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x28;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_0016859B(); return; /* tail jmp 0x0016859B */

    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x18) = ebx;

loc_00168864: ;
    eax = MEM32(edi + 0x21C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00168873; /* jne: not equal / not zero */

loc_0016886F: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0016887F;

loc_00168873: ;
    edx = eax;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x10C);
    ecx = edx + edi + 4;

loc_0016887F: ;
    edx = MEM32(esp + 0x18);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0xEC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ecx + 0xEC) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00168933; /* jge: greater or equal (signed >=) */

loc_0016888F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00168898; /* jne: not equal / not zero */

loc_00168894: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_001688A2;

loc_00168898: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x10C);
    eax = eax + edi + 4;

loc_001688A2: ;
    esi = MEM32(eax + 0xF0);
    eax = MEM32(esi + ebx + 4);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ebx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax;
    ecx = ecx >> 6;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00168924; /* jne: not equal / not zero */

loc_001688B8: ;
    ecx = MEM32(esi + 8);
    SET_LO8(edx, MEM8(ecx + 8));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if ((((uint8_t)((uint8_t)(_fa) - (uint8_t)(_fb)) >> 7) == 0)) goto loc_001688FF; /* jns: not sign (positive) */

loc_001688C2: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 4 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001688CE; /* jne: not equal / not zero */

loc_001688C6: ;
    eax = eax | 0x84;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi + 4) = eax;

loc_001688CE: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x001688D5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001688D2u); } /* indirect call */
    }

loc_001688D5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00168924; /* jne: not equal / not zero */

loc_001688DA: ;
    esi = MEM32(esi + 0x6C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00168924; /* je: equal / zero */

loc_001688E1: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x001688E9u); RECOMP_ABI_CALL(0x00164870u, sub_00164870); /* call 0x00164870 */

loc_001688E9: ;
    esi = MEM32(esi + 0x68);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001688E1; /* jne: not equal / not zero */

loc_001688F0: ;
    MEM32(esp + 0x18) = MEM32(esp + 0x18) + 1;
    _fa = (uint32_t)(MEM32(esp + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x210) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x210;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00168864;

loc_001688FF: ;
    eax = MEM32(ecx + 0x9C);
    eax = eax >> 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00168924; /* je: equal / zero */

loc_0016890B: ;
    esi = MEM32(esi + 0xC);
    _fa = (uint32_t)(MEM8(esi + 0x40)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x40), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00168924; /* jne: not equal / not zero */

loc_00168914: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00168924; /* je: equal / zero */

loc_0016891B: ;
    PUSH32(esp, 6);
    ecx = esi;
    PUSH32(esp, 0x00168924u); RECOMP_ABI_CALL(0x00206000u, sub_00206000); /* call 0x00206000 */

loc_00168924: ;
    MEM32(esp + 0x18) = MEM32(esp + 0x18) + 1;
    _fa = (uint32_t)(MEM32(esp + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x210) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x210;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00168864;

loc_00168933: ;
    eax = MEM32(edi + 0x21C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00168942; /* jne: not equal / not zero */

loc_0016893E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0016894C;

loc_00168942: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x10C);
    eax = eax + edi + 4;

loc_0016894C: ;
    MEM8(eax + 0xE8) = 1;
    ecx = MEM32(edi + 0x10B8);
    MEM8(edi + 0x10B4) = 1;
    MEM32(ecx + 4) = 0;
    edx = MEM32(0x51003C);
    ecx = MEM32(edi + 0x224);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00168979u); RECOMP_ABI_CALL(0x00203EC0u, sub_00203EC0); /* call 0x00203EC0 */

loc_00168979: ;
    ecx = edi;
    PUSH32(esp, 0x00168980u); RECOMP_ABI_CALL(0x00164220u, sub_00164220); /* call 0x00164220 */

loc_00168980: ;
    eax = MEM32(edi + 0x224);
    ecx = MEM32(eax + 0xD0);
    MEM8(ecx + 0x18) = 0;
    ecx = MEM32(edi + 0x224);
    PUSH32(esp, 0x0016899Bu); RECOMP_ABI_CALL(0x00202A30u, sub_00202A30); /* call 0x00202A30 */

loc_0016899B: ;
    ecx = MEM32(esp + 0x2C4);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
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
 * sub_001689B0
 * Original: 0x001689B0 - 0x0016909F (1775 bytes, 570 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001689B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001689B0: ;
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
    eax = MEM32(edi + 0x21C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    MEM32(esp + 0x1C) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_00169098; /* je: equal / zero */

loc_001689D1: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x10C);
    eax = eax + edi + 4;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00169098; /* je: equal / zero */

loc_001689E5: ;
    SET_LO8(ecx, MEM8(eax + 0xE8));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00169098; /* je: equal / zero */

loc_001689F3: ;
    MEM32(esp + 0x14) = ebx;
    goto loc_00168A00;

    /* nop */

loc_00168A00: ;
    eax = MEM32(edi + 0x21C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00168A0F; /* jne: not equal / not zero */

loc_00168A0B: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00168A1B;

loc_00168A0F: ;
    ecx = eax;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x10C);
    ecx = ecx + edi + 4;

loc_00168A1B: ;
    edx = MEM32(esp + 0x14);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x104)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ecx + 0x104) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00168A9A; /* jge: greater or equal (signed >=) */

loc_00168A27: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00168A30; /* jne: not equal / not zero */

loc_00168A2C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00168A3A;

loc_00168A30: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x10C);
    eax = eax + edi + 4;

loc_00168A3A: ;
    esi = MEM32(eax + 0x108);
    SET_LO8(eax, MEM8(esi + ebx + 4));
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ebx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if ((((uint8_t)((uint8_t)(_fa) - (uint8_t)(_fb)) >> 7) == 0)) goto loc_00168A8E; /* jns: not sign (positive) */

loc_00168A4A: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00168A50u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00168A4Eu); } /* indirect call */
    }

loc_00168A50: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    eax = MEM32(esi + 0xC);
    if (CMP_NE(_fa, _fb)) goto loc_00168A70; /* jne: not equal / not zero */

loc_00168A57: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00168A87; /* je: equal / zero */

loc_00168A5B: ;
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00168A87; /* je: equal / zero */

loc_00168A62: ;
    ecx = MEM32(edi + 0x224);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00168A6Eu); RECOMP_ABI_CALL(0x00202B20u, sub_00202B20); /* call 0x00202B20 */

loc_00168A6E: ;
    goto loc_00168A87;

loc_00168A70: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00168A87; /* je: equal / zero */

loc_00168A74: ;
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00168A87; /* jne: not equal / not zero */

loc_00168A7B: ;
    ecx = MEM32(edi + 0x224);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00168A87u); RECOMP_ABI_CALL(0x00201DE0u, sub_00201DE0); /* call 0x00201DE0 */

loc_00168A87: ;
    MEM32(esi + 4) = MEM32(esi + 4) & 0xFFFFFC7Fu;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_00168A8E: ;
    MEM32(esp + 0x14) = MEM32(esp + 0x14) + 1;
    _fa = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x24;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00168A00;

loc_00168A9A: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x14) = ebx;

loc_00168AA0: ;
    eax = MEM32(edi + 0x21C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00168AAF; /* jne: not equal / not zero */

loc_00168AAB: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00168ABB;

loc_00168AAF: ;
    ecx = eax;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x10C);
    ecx = ecx + edi + 4;

loc_00168ABB: ;
    edx = MEM32(esp + 0x14);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0xFC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ecx + 0xFC) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00168B3A; /* jge: greater or equal (signed >=) */

loc_00168AC7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00168AD0; /* jne: not equal / not zero */

loc_00168ACC: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00168ADA;

loc_00168AD0: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x10C);
    eax = eax + edi + 4;

loc_00168ADA: ;
    esi = MEM32(eax + 0x100);
    SET_LO8(eax, MEM8(esi + ebx + 4));
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ebx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if ((((uint8_t)((uint8_t)(_fa) - (uint8_t)(_fb)) >> 7) == 0)) goto loc_00168B2E; /* jns: not sign (positive) */

loc_00168AEA: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00168AF0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00168AEEu); } /* indirect call */
    }

loc_00168AF0: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    eax = MEM32(esi + 0xC);
    if (CMP_NE(_fa, _fb)) goto loc_00168B10; /* jne: not equal / not zero */

loc_00168AF7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00168B27; /* je: equal / zero */

loc_00168AFB: ;
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00168B27; /* je: equal / zero */

loc_00168B02: ;
    ecx = MEM32(edi + 0x224);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00168B0Eu); RECOMP_ABI_CALL(0x00202B20u, sub_00202B20); /* call 0x00202B20 */

loc_00168B0E: ;
    goto loc_00168B27;

loc_00168B10: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00168B27; /* je: equal / zero */

loc_00168B14: ;
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00168B27; /* jne: not equal / not zero */

loc_00168B1B: ;
    ecx = MEM32(edi + 0x224);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00168B27u); RECOMP_ABI_CALL(0x00201DE0u, sub_00201DE0); /* call 0x00201DE0 */

loc_00168B27: ;
    MEM32(esi + 4) = MEM32(esi + 4) & 0xFFFFFC7Fu;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_00168B2E: ;
    MEM32(esp + 0x14) = MEM32(esp + 0x14) + 1;
    _fa = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x70;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00168AA0;

loc_00168B3A: ;
    eax = MEM32(edi + 0x21C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00168B49; /* jne: not equal / not zero */

loc_00168B45: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00168B53;

loc_00168B49: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x10C);
    eax = eax + edi + 4;

loc_00168B53: ;
    ecx = MEM32(eax + 0xF4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x14) = ecx;
    if ((_fas < 0)) goto loc_00169098; /* js: sign (negative) */

loc_00168B64: ;
    eax = MEM32(edi + 0x21C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00168B73; /* jne: not equal / not zero */

loc_00168B6F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00168B7D;

loc_00168B73: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x10C);
    eax = eax + edi + 4;

loc_00168B7D: ;
    edx = MEM32(eax + 0xF8);
    esi = MEM32(edx + ecx * 4);
    SET_LO8(eax, MEM8(esi + 4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if ((((uint8_t)((uint8_t)(_fa) - (uint8_t)(_fb)) >> 7) == 0)) goto loc_0016908D; /* jns: not sign (positive) */

loc_00168B91: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00168B97u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00168B95u); } /* indirect call */
    }

loc_00168B97: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00168D1F; /* jne: not equal / not zero */

loc_00168B9F: ;
    eax = MEM32(esi + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00168C54; /* je: equal / zero */

loc_00168BAA: ;
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00168C54; /* je: equal / zero */

loc_00168BB5: ;
    ecx = MEM32(eax + 0x3C);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x00168BBDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00168BBAu); } /* indirect call */
    }

loc_00168BBD: ;
    ecx = MEM32(esi + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    MEM8(esi + 0x38) = LO8(eax);
    ecx = MEM32(ecx + 0x3C);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x00168BD1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00168BCEu); } /* indirect call */
    }

loc_00168BD1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00168BED; /* jne: not equal / not zero */

loc_00168BD6: ;
    ecx = MEM32(esi + 0xC);
    eax = MEM32(ecx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00168BED; /* je: equal / zero */

loc_00168BE0: ;
    _fa = (uint32_t)(MEM8(ecx + 0x40)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 0x40), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00168BED; /* jne: not equal / not zero */

loc_00168BE6: ;
    PUSH32(esp, 5);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00168BEDu); RECOMP_ABI_CALL(0x00206000u, sub_00206000); /* call 0x00206000 */

loc_00168BED: ;
    eax = MEM32(esi + 0x24);
    ecx = MEM32(edi + 0x224);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00168BFCu); RECOMP_ABI_CALL(0x00202B20u, sub_00202B20); /* call 0x00202B20 */

loc_00168BFC: ;
    eax = MEM32(esi + 0xE0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00168C54; /* je: equal / zero */

loc_00168C06: ;
    ecx = MEM32(esi + 0x70);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    MEM32(esi + 0x70) = 1;
    if (CMP_EQ(_fa, _fb)) goto loc_00168C3B; /* je: equal / zero */

loc_00168C15: ;
    MEM8(esi + 0x78) = 1;
    ecx = MEM32(eax + 0xC);
    edx = MEM32(ecx + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00168C3B; /* je: equal / zero */

loc_00168C23: ;
    eax = ecx;
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00168C3B; /* je: equal / zero */

loc_00168C2C: ;
    _fa = (uint32_t)(MEM8(eax + 0x40)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x40), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00168C3B; /* jne: not equal / not zero */

loc_00168C32: ;
    PUSH32(esp, 6);
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00168C3Bu); RECOMP_ABI_CALL(0x00206000u, sub_00206000); /* call 0x00206000 */

loc_00168C3B: ;
    edx = MEM32(esi + 0x70);
    eax = MEM32(esi + 0xE0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = 0x67CF20;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00168C54u); RECOMP_ABI_CALL(0x00165890u, sub_00165890); /* call 0x00165890 */

loc_00168C54: ;
    eax = MEM32(esi + 0x18C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00169070; /* je: equal / zero */

loc_00168C62: ;
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00169070; /* je: equal / zero */

loc_00168C6D: ;
    ecx = MEM32(eax + 0x3C);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x00168C75u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00168C72u); } /* indirect call */
    }

loc_00168C75: ;
    ecx = MEM32(esi + 0x18C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    MEM8(esi + 0x38) = LO8(eax);
    ecx = MEM32(ecx + 0x3C);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x00168C8Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00168C89u); } /* indirect call */
    }

loc_00168C8C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00168CA8; /* jne: not equal / not zero */

loc_00168C91: ;
    ecx = MEM32(esi + 0xC);
    eax = MEM32(ecx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00168CA8; /* je: equal / zero */

loc_00168C9B: ;
    _fa = (uint32_t)(MEM8(ecx + 0x40)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 0x40), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00168CA8; /* jne: not equal / not zero */

loc_00168CA1: ;
    PUSH32(esp, 5);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00168CA8u); RECOMP_ABI_CALL(0x00206000u, sub_00206000); /* call 0x00206000 */

loc_00168CA8: ;
    eax = MEM32(esi + 0x18C);
    ecx = MEM32(esp + 0x1C);
    ecx = MEM32(ecx + 0x224);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00168CBEu); RECOMP_ABI_CALL(0x00202B20u, sub_00202B20); /* call 0x00202B20 */

loc_00168CBE: ;
    eax = MEM32(esi + 0xE0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00169070; /* je: equal / zero */

loc_00168CCC: ;
    ecx = MEM32(esi + 0x70);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    MEM32(esi + 0x70) = 1;
    if (CMP_EQ(_fa, _fb)) goto loc_00168D01; /* je: equal / zero */

loc_00168CDB: ;
    MEM8(esi + 0x78) = 1;
    edx = MEM32(eax + 0xC);
    ecx = MEM32(edx + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00168D01; /* je: equal / zero */

loc_00168CE9: ;
    eax = edx;
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00168D01; /* je: equal / zero */

loc_00168CF2: ;
    _fa = (uint32_t)(MEM8(eax + 0x40)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x40), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00168D01; /* jne: not equal / not zero */

loc_00168CF8: ;
    PUSH32(esp, 6);
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00168D01u); RECOMP_ABI_CALL(0x00206000u, sub_00206000); /* call 0x00206000 */

loc_00168D01: ;
    eax = MEM32(esi + 0x70);
    ecx = MEM32(esi + 0xE0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = 0x67CF20;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00168D1Au); RECOMP_ABI_CALL(0x00165890u, sub_00165890); /* call 0x00165890 */

loc_00168D1A: ;
    goto loc_00169070;

loc_00168D1F: ;
    edi = MEM32(esi + 0x19C);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(esp + 0x18) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_00168D98; /* je: equal / zero */

loc_00168D31: ;
    eax = MEM32(edi + 0x194);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00168D5F; /* je: equal / zero */

loc_00168D3B: ;
    edx = MEM32(eax + 4);
    edx = edx >> 6;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00168D4C; /* je: equal / zero */

loc_00168D46: ;
    eax = MEM32(eax + 0x194);

loc_00168D4C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00168D5F; /* je: equal / zero */

loc_00168D50: ;
    eax = MEM32(edi + 8);
    _fa = (uint32_t)(MEM8(eax + 8)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 8), 0x20 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00168D5F; /* je: equal / zero */

loc_00168D59: ;
    _fa = (uint32_t)(MEM8(edi + 4)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi + 4), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00168D6A; /* je: equal / zero */

loc_00168D5F: ;
    ecx = MEM32(edi + 4);
    ecx = ecx >> 6;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00168D8E; /* je: equal / zero */

loc_00168D6A: ;
    MEM32(esp + 0x18) = MEM32(esp + 0x18) + 1;
    _fa = (uint32_t)(MEM32(esp + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(edi + 0x19C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00168D8E; /* je: equal / zero */

loc_00168D78: ;
    PUSH32(esp, 1);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    ecx = 0x67CF20;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00168D8Eu); RECOMP_ABI_CALL(0x00164940u, sub_00164940); /* call 0x00164940 */

loc_00168D8E: ;
    edi = MEM32(edi + 0x198);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00168D31; /* jne: not equal / not zero */

loc_00168D98: ;
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esi + 0x184);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    MEM8(esp + 0x13) = LO8(edx);
    if (CMP_EQ(_fa, _fb)) goto loc_00168DE4; /* je: equal / zero */

loc_00168DB0: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    eax = MEM32(esi + 0x18C);
    edx = MEM32(eax + 8);
    SET_LO8(ebx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00168DCB; /* je: equal / zero */

loc_00168DC2: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    MEM8(esp + 0x12) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_00168DD0; /* je: equal / zero */

loc_00168DCB: ;
    MEM8(esp + 0x12) = 1;

loc_00168DD0: ;
    edi = MEM32(esi + 0x24);
    ecx = MEM32(edi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00168E0A; /* jne: not equal / not zero */

loc_00168DDA: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00168E4F; /* je: equal / zero */

loc_00168DDE: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00168E04; /* jne: not equal / not zero */

loc_00168DE2: ;
    goto loc_00168E4F;

loc_00168DE4: ;
    edi = MEM32(esi + 0x24);
    ecx = MEM32(edi + 8);
    eax = MEM32(esi + 0x18C);
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM8(esp + 0x12) = (CMP_EQ(_fa, _fb)) ? 1 : 0; /* sete */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00168E4F; /* je: equal / zero */

loc_00168DFD: ;
    edx = MEM32(eax + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00168E4F; /* je: equal / zero */

loc_00168E04: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00168E0A; /* jne: not equal / not zero */

loc_00168E08: ;
    edi = eax;

loc_00168E0A: ;
    ecx = MEM32(edi + 0x3C);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x00168E12u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00168E0Fu); } /* indirect call */
    }

loc_00168E12: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    MEM8(esi + 0x38) = LO8(ecx);
    ecx = MEM32(edi + 0x3C);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x00168E23u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00168E20u); } /* indirect call */
    }

loc_00168E23: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00168E3F; /* jne: not equal / not zero */

loc_00168E28: ;
    ecx = MEM32(esi + 0xC);
    eax = MEM32(ecx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00168E3F; /* je: equal / zero */

loc_00168E32: ;
    _fa = (uint32_t)(MEM8(ecx + 0x40)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 0x40), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00168E3F; /* jne: not equal / not zero */

loc_00168E38: ;
    PUSH32(esp, 5);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00168E3Fu); RECOMP_ABI_CALL(0x00206000u, sub_00206000); /* call 0x00206000 */

loc_00168E3F: ;
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(eax + 0x224);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00168E4Fu); RECOMP_ABI_CALL(0x00202B20u, sub_00202B20); /* call 0x00202B20 */

loc_00168E4F: ;
    SET_LO8(eax, MEM8(esp + 0x12));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00168FC4; /* je: equal / zero */

loc_00168E5B: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00168E7C; /* je: equal / zero */

loc_00168E63: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00168E74; /* je: equal / zero */

loc_00168E67: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00168E6Eu); RECOMP_ABI_CALL(0x001676C0u, sub_001676C0); /* call 0x001676C0 */

loc_00168E6E: ;
    MEM32(esi + 0x18C) = eax;

loc_00168E74: ;
    ebx = MEM32(esi + 0x18C);
    goto loc_00168E7F;

loc_00168E7C: ;
    ebx = MEM32(esi + 0x24);

loc_00168E7F: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esp + 0x18) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_00168EE3; /* je: equal / zero */

loc_00168E8A: ;
    eax = MEM32(eax + 0x3C);
    xmm0 = XMM_MEM(eax + 0xB0); /* movaps */
    XMM_STORE(esp + 0x30, xmm0); /* movaps */
    xmm0 = XMM_MEM(eax + 0x30); /* movaps */
    XMM_STORE(esp + 0x20, xmm0); /* movaps */
    xmm0 = XMM_MEM(eax + 0x40); /* movaps */
    XMM_STORE(esp + 0x40, xmm0); /* movaps */
    xmm0 = XMM_MEM(eax + 0x50); /* movaps */
    eax = esp + 0x20;
    XMM_STORE(esp + 0x50, xmm0); /* movaps */
    MEM32(esi + 0xC) = ebx;
    edi = MEM32(ebx + 0x3C);
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esp + 0x34;
    PUSH32(esp, ecx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x48); PUSH32(esp, 0x00168ECBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00168EC8u); } /* indirect call */
    }

loc_00168ECB: ;
    edx = MEM32(edi);
    eax = esp + 0x40;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x50); PUSH32(esp, 0x00168ED7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00168ED4u); } /* indirect call */
    }

loc_00168ED7: ;
    edx = MEM32(edi);
    eax = esp + 0x50;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x00168EE3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00168EE0u); } /* indirect call */
    }

loc_00168EE3: ;
    edi = MEM32(esi + 0x190);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00168F87; /* je: equal / zero */

loc_00168EF1: ;
    eax = MEM32(edi + 0x190);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00168F0C; /* je: equal / zero */

loc_00168EFB: ;
    goto loc_00168F00;

    /* nop */

loc_00168F00: ;
    edi = eax;
    eax = MEM32(edi + 0x190);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00168F00; /* jne: not equal / not zero */

loc_00168F0C: ;
    eax = MEM32(esp + 0x18);
    MEM32(esi + 0xC) = eax;
    ecx = MEM32(edi + 0xC);
    eax = MEM32(eax + 0x3C);
    ecx = MEM32(ecx + 0x3C);
    edx = MEM32(ecx);
    ebx = esp + 0x60;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    _fb = (uint32_t)(0xB0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xB0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x58); PUSH32(esp, 0x00168F2Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00168F29u); } /* indirect call */
    }

loc_00168F2C: ;
    ebx = MEM32(esi + 0xC);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00168F36u); RECOMP_ABI_CALL(0x001F9DD0u, sub_001F9DD0); /* call 0x001F9DD0 */

loc_00168F36: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00168F48; /* jne: not equal / not zero */

loc_00168F3A: ;
    eax = MEM32(ebx + 0x44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00168F48; /* je: equal / zero */

loc_00168F41: ;
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00168F48u); RECOMP_ABI_CALL(0x001F9DE0u, sub_001F9DE0); /* call 0x001F9DE0 */

loc_00168F48: ;
    ecx = MEM32(ebx + 0x3C);
    edx = MEM32(ecx);
    eax = esp + 0x60;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x50); PUSH32(esp, 0x00168F55u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00168F52u); } /* indirect call */
    }

loc_00168F55: ;
    ecx = MEM32(edi + 0xC);
    edi = MEM32(esi + 0xC);
    ebx = MEM32(ecx + 0x3C);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00168F65u); RECOMP_ABI_CALL(0x001F9DD0u, sub_001F9DD0); /* call 0x001F9DD0 */

loc_00168F65: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00168F77; /* jne: not equal / not zero */

loc_00168F69: ;
    eax = MEM32(edi + 0x44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00168F77; /* je: equal / zero */

loc_00168F70: ;
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00168F77u); RECOMP_ABI_CALL(0x001F9DE0u, sub_001F9DE0); /* call 0x001F9DE0 */

loc_00168F77: ;
    ecx = MEM32(edi + 0x3C);
    edx = MEM32(ecx);
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x50;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x00168F83u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00168F80u); } /* indirect call */
    }

loc_00168F83: ;
    ebx = MEM32(esp + 0x18);

loc_00168F87: ;
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(eax + 0x224);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00168F97u); RECOMP_ABI_CALL(0x00201DE0u, sub_00201DE0); /* call 0x00201DE0 */

loc_00168F97: ;
    eax = MEM32(esi + 0x70);
    ecx = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    eax = MEM32(ecx + 8);
    if (CMP_NE(_fa, _fb)) goto loc_00168FB3; /* jne: not equal / not zero */

loc_00168FA5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00168FC4; /* je: equal / zero */

loc_00168FA9: ;
    _fa = (uint32_t)(MEM8(ecx + 0x40)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 0x40), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00168FC4; /* jne: not equal / not zero */

loc_00168FAF: ;
    PUSH32(esp, 5);
    goto loc_00168FBF;

loc_00168FB3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00168FC4; /* je: equal / zero */

loc_00168FB7: ;
    _fa = (uint32_t)(MEM8(ecx + 0x40)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 0x40), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00168FC4; /* jne: not equal / not zero */

loc_00168FBD: ;
    PUSH32(esp, 6);

loc_00168FBF: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00168FC4u); RECOMP_ABI_CALL(0x00206000u, sub_00206000); /* call 0x00206000 */

loc_00168FC4: ;
    edi = MEM32(esi + 0xC);
    eax = MEM32(edi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00169070; /* je: equal / zero */

loc_00168FD2: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00169009; /* je: equal / zero */

loc_00168FDA: ;
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00168FE1u); RECOMP_ABI_CALL(0x001F9DD0u, sub_001F9DD0); /* call 0x001F9DD0 */

loc_00168FE1: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00168FF3; /* jne: not equal / not zero */

loc_00168FE5: ;
    eax = MEM32(edi + 0x44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00168FF3; /* je: equal / zero */

loc_00168FEC: ;
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00168FF3u); RECOMP_ABI_CALL(0x001F9DE0u, sub_001F9DE0); /* call 0x001F9DE0 */

loc_00168FF3: ;
    ecx = MEM32(edi + 0x3C);
    edx = MEM32(ecx);
    eax = esi + 0x1C0;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = esi + 0x1B0;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x60); PUSH32(esp, 0x00169009u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00169006u); } /* indirect call */
    }

loc_00169009: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0016903C; /* je: equal / zero */

loc_00169011: ;
    edi = MEM32(esi + 0xC);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0016901Bu); RECOMP_ABI_CALL(0x001F9DD0u, sub_001F9DD0); /* call 0x001F9DD0 */

loc_0016901B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0016902D; /* jne: not equal / not zero */

loc_0016901F: ;
    eax = MEM32(edi + 0x44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016902D; /* je: equal / zero */

loc_00169026: ;
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0016902Du); RECOMP_ABI_CALL(0x001F9DE0u, sub_001F9DE0); /* call 0x001F9DE0 */

loc_0016902D: ;
    ecx = MEM32(edi + 0x3C);
    edx = MEM32(ecx);
    eax = esi + 0x1A0;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x5C); PUSH32(esp, 0x0016903Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00169039u); } /* indirect call */
    }

loc_0016903C: ;
    ecx = MEM32(esi + 4);
    ecx = ecx & 0xFFFFFF7Fu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = ecx;
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 4 (8-bit) */
    MEM32(esi + 4) = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_00169070; /* je: equal / zero */

loc_0016904F: ;
    ecx = MEM32(esi + 0xC);
    eax = MEM32(ecx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00169070; /* je: equal / zero */

loc_00169059: ;
    _fa = (uint32_t)(MEM8(ecx + 0x40)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 0x40), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00169070; /* jne: not equal / not zero */

loc_0016905F: ;
    _fa = (uint32_t)(MEM8(esi + 0x38)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x38), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00169069; /* jne: not equal / not zero */

loc_00169065: ;
    PUSH32(esp, 6);
    goto loc_0016906B;

loc_00169069: ;
    PUSH32(esp, 5);

loc_0016906B: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00169070u); RECOMP_ABI_CALL(0x00206000u, sub_00206000); /* call 0x00206000 */

loc_00169070: ;
    eax = MEM32(esi + 4);
    edi = MEM32(esp + 0x1C);
    ecx = MEM32(esp + 0x14);
    eax = eax & 0xFFFFF87Fu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 4) = eax;
    MEM32(esi + 0x190) = 0;

loc_0016908D: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x14) = ecx;
    if ((_fas >= 0)) goto loc_00168B64; /* jns: not sign (positive) */

loc_00169098: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00168D84
 * Original: 0x00168D84 - 0x0016909F (795 bytes, 266 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00168D84(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00168D84: ;
    ecx = 0x67CF20;
    PUSH32(esp, 0x00168D8Eu); RECOMP_ABI_CALL(0x00164940u, sub_00164940); /* call 0x00164940 */

loc_00168D8E: ;
    edi = MEM32(edi + 0x198);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00168D31(); return; } /* jne: not equal / not zero */

loc_00168D98: ;
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esi + 0x184);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    MEM8(esp + 0x13) = LO8(edx);
    if (CMP_EQ(_fa, _fb)) goto loc_00168DE4; /* je: equal / zero */

loc_00168DB0: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    eax = MEM32(esi + 0x18C);
    edx = MEM32(eax + 8);
    SET_LO8(ebx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00168DCB; /* je: equal / zero */

loc_00168DC2: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    MEM8(esp + 0x12) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_00168DD0; /* je: equal / zero */

loc_00168DCB: ;
    MEM8(esp + 0x12) = 1;

loc_00168DD0: ;
    edi = MEM32(esi + 0x24);
    ecx = MEM32(edi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00168E0A; /* jne: not equal / not zero */

loc_00168DDA: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00168E4F; /* je: equal / zero */

loc_00168DDE: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00168E04; /* jne: not equal / not zero */

loc_00168DE2: ;
    goto loc_00168E4F;

loc_00168DE4: ;
    edi = MEM32(esi + 0x24);
    ecx = MEM32(edi + 8);
    eax = MEM32(esi + 0x18C);
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM8(esp + 0x12) = (CMP_EQ(_fa, _fb)) ? 1 : 0; /* sete */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00168E4F; /* je: equal / zero */

loc_00168DFD: ;
    edx = MEM32(eax + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00168E4F; /* je: equal / zero */

loc_00168E04: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00168E0A; /* jne: not equal / not zero */

loc_00168E08: ;
    edi = eax;

loc_00168E0A: ;
    ecx = MEM32(edi + 0x3C);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x00168E12u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00168E0Fu); } /* indirect call */
    }

loc_00168E12: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    MEM8(esi + 0x38) = LO8(ecx);
    ecx = MEM32(edi + 0x3C);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x00168E23u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00168E20u); } /* indirect call */
    }

loc_00168E23: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00168E3F; /* jne: not equal / not zero */

loc_00168E28: ;
    ecx = MEM32(esi + 0xC);
    eax = MEM32(ecx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00168E3F; /* je: equal / zero */

loc_00168E32: ;
    _fa = (uint32_t)(MEM8(ecx + 0x40)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 0x40), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00168E3F; /* jne: not equal / not zero */

loc_00168E38: ;
    PUSH32(esp, 5);
    PUSH32(esp, 0x00168E3Fu); RECOMP_ABI_CALL(0x00206000u, sub_00206000); /* call 0x00206000 */

loc_00168E3F: ;
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(eax + 0x224);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00168E4Fu); RECOMP_ABI_CALL(0x00202B20u, sub_00202B20); /* call 0x00202B20 */

loc_00168E4F: ;
    SET_LO8(eax, MEM8(esp + 0x12));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00168FC4; /* je: equal / zero */

loc_00168E5B: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00168E7C; /* je: equal / zero */

loc_00168E63: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00168E74; /* je: equal / zero */

loc_00168E67: ;
    ecx = esi;
    PUSH32(esp, 0x00168E6Eu); RECOMP_ABI_CALL(0x001676C0u, sub_001676C0); /* call 0x001676C0 */

loc_00168E6E: ;
    MEM32(esi + 0x18C) = eax;

loc_00168E74: ;
    ebx = MEM32(esi + 0x18C);
    goto loc_00168E7F;

loc_00168E7C: ;
    ebx = MEM32(esi + 0x24);

loc_00168E7F: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esp + 0x18) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_00168EE3; /* je: equal / zero */

loc_00168E8A: ;
    eax = MEM32(eax + 0x3C);
    xmm0 = XMM_MEM(eax + 0xB0); /* movaps */
    XMM_STORE(esp + 0x30, xmm0); /* movaps */
    xmm0 = XMM_MEM(eax + 0x30); /* movaps */
    XMM_STORE(esp + 0x20, xmm0); /* movaps */
    xmm0 = XMM_MEM(eax + 0x40); /* movaps */
    XMM_STORE(esp + 0x40, xmm0); /* movaps */
    xmm0 = XMM_MEM(eax + 0x50); /* movaps */
    eax = esp + 0x20;
    XMM_STORE(esp + 0x50, xmm0); /* movaps */
    MEM32(esi + 0xC) = ebx;
    edi = MEM32(ebx + 0x3C);
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esp + 0x34;
    PUSH32(esp, ecx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x48); PUSH32(esp, 0x00168ECBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00168EC8u); } /* indirect call */
    }

loc_00168ECB: ;
    edx = MEM32(edi);
    eax = esp + 0x40;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x50); PUSH32(esp, 0x00168ED7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00168ED4u); } /* indirect call */
    }

loc_00168ED7: ;
    edx = MEM32(edi);
    eax = esp + 0x50;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x00168EE3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00168EE0u); } /* indirect call */
    }

loc_00168EE3: ;
    edi = MEM32(esi + 0x190);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00168F87; /* je: equal / zero */

loc_00168EF1: ;
    eax = MEM32(edi + 0x190);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00168F0C; /* je: equal / zero */

loc_00168EFB: ;
    goto loc_00168F00;

    /* nop */

loc_00168F00: ;
    edi = eax;
    eax = MEM32(edi + 0x190);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00168F00; /* jne: not equal / not zero */

loc_00168F0C: ;
    eax = MEM32(esp + 0x18);
    MEM32(esi + 0xC) = eax;
    ecx = MEM32(edi + 0xC);
    eax = MEM32(eax + 0x3C);
    ecx = MEM32(ecx + 0x3C);
    edx = MEM32(ecx);
    ebx = esp + 0x60;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    _fb = (uint32_t)(0xB0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xB0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x58); PUSH32(esp, 0x00168F2Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00168F29u); } /* indirect call */
    }

loc_00168F2C: ;
    ebx = MEM32(esi + 0xC);
    ecx = ebx;
    PUSH32(esp, 0x00168F36u); RECOMP_ABI_CALL(0x001F9DD0u, sub_001F9DD0); /* call 0x001F9DD0 */

loc_00168F36: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00168F48; /* jne: not equal / not zero */

loc_00168F3A: ;
    eax = MEM32(ebx + 0x44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00168F48; /* je: equal / zero */

loc_00168F41: ;
    ecx = ebx;
    PUSH32(esp, 0x00168F48u); RECOMP_ABI_CALL(0x001F9DE0u, sub_001F9DE0); /* call 0x001F9DE0 */

loc_00168F48: ;
    ecx = MEM32(ebx + 0x3C);
    edx = MEM32(ecx);
    eax = esp + 0x60;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x50); PUSH32(esp, 0x00168F55u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00168F52u); } /* indirect call */
    }

loc_00168F55: ;
    ecx = MEM32(edi + 0xC);
    edi = MEM32(esi + 0xC);
    ebx = MEM32(ecx + 0x3C);
    ecx = edi;
    PUSH32(esp, 0x00168F65u); RECOMP_ABI_CALL(0x001F9DD0u, sub_001F9DD0); /* call 0x001F9DD0 */

loc_00168F65: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00168F77; /* jne: not equal / not zero */

loc_00168F69: ;
    eax = MEM32(edi + 0x44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00168F77; /* je: equal / zero */

loc_00168F70: ;
    ecx = edi;
    PUSH32(esp, 0x00168F77u); RECOMP_ABI_CALL(0x001F9DE0u, sub_001F9DE0); /* call 0x001F9DE0 */

loc_00168F77: ;
    ecx = MEM32(edi + 0x3C);
    edx = MEM32(ecx);
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x50;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x00168F83u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00168F80u); } /* indirect call */
    }

loc_00168F83: ;
    ebx = MEM32(esp + 0x18);

loc_00168F87: ;
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(eax + 0x224);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00168F97u); RECOMP_ABI_CALL(0x00201DE0u, sub_00201DE0); /* call 0x00201DE0 */

loc_00168F97: ;
    eax = MEM32(esi + 0x70);
    ecx = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    eax = MEM32(ecx + 8);
    if (CMP_NE(_fa, _fb)) goto loc_00168FB3; /* jne: not equal / not zero */

loc_00168FA5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00168FC4; /* je: equal / zero */

loc_00168FA9: ;
    _fa = (uint32_t)(MEM8(ecx + 0x40)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 0x40), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00168FC4; /* jne: not equal / not zero */

loc_00168FAF: ;
    PUSH32(esp, 5);
    goto loc_00168FBF;

loc_00168FB3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00168FC4; /* je: equal / zero */

loc_00168FB7: ;
    _fa = (uint32_t)(MEM8(ecx + 0x40)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 0x40), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00168FC4; /* jne: not equal / not zero */

loc_00168FBD: ;
    PUSH32(esp, 6);

loc_00168FBF: ;
    PUSH32(esp, 0x00168FC4u); RECOMP_ABI_CALL(0x00206000u, sub_00206000); /* call 0x00206000 */

loc_00168FC4: ;
    edi = MEM32(esi + 0xC);
    eax = MEM32(edi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00169070; /* je: equal / zero */

loc_00168FD2: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00169009; /* je: equal / zero */

loc_00168FDA: ;
    ecx = edi;
    PUSH32(esp, 0x00168FE1u); RECOMP_ABI_CALL(0x001F9DD0u, sub_001F9DD0); /* call 0x001F9DD0 */

loc_00168FE1: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00168FF3; /* jne: not equal / not zero */

loc_00168FE5: ;
    eax = MEM32(edi + 0x44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00168FF3; /* je: equal / zero */

loc_00168FEC: ;
    ecx = edi;
    PUSH32(esp, 0x00168FF3u); RECOMP_ABI_CALL(0x001F9DE0u, sub_001F9DE0); /* call 0x001F9DE0 */

loc_00168FF3: ;
    ecx = MEM32(edi + 0x3C);
    edx = MEM32(ecx);
    eax = esi + 0x1C0;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = esi + 0x1B0;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x60); PUSH32(esp, 0x00169009u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00169006u); } /* indirect call */
    }

loc_00169009: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0016903C; /* je: equal / zero */

loc_00169011: ;
    edi = MEM32(esi + 0xC);
    ecx = edi;
    PUSH32(esp, 0x0016901Bu); RECOMP_ABI_CALL(0x001F9DD0u, sub_001F9DD0); /* call 0x001F9DD0 */

loc_0016901B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0016902D; /* jne: not equal / not zero */

loc_0016901F: ;
    eax = MEM32(edi + 0x44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016902D; /* je: equal / zero */

loc_00169026: ;
    ecx = edi;
    PUSH32(esp, 0x0016902Du); RECOMP_ABI_CALL(0x001F9DE0u, sub_001F9DE0); /* call 0x001F9DE0 */

loc_0016902D: ;
    ecx = MEM32(edi + 0x3C);
    edx = MEM32(ecx);
    eax = esi + 0x1A0;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x5C); PUSH32(esp, 0x0016903Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00169039u); } /* indirect call */
    }

loc_0016903C: ;
    ecx = MEM32(esi + 4);
    ecx = ecx & 0xFFFFFF7Fu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = ecx;
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 4 (8-bit) */
    MEM32(esi + 4) = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_00169070; /* je: equal / zero */

loc_0016904F: ;
    ecx = MEM32(esi + 0xC);
    eax = MEM32(ecx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00169070; /* je: equal / zero */

loc_00169059: ;
    _fa = (uint32_t)(MEM8(ecx + 0x40)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 0x40), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00169070; /* jne: not equal / not zero */

loc_0016905F: ;
    _fa = (uint32_t)(MEM8(esi + 0x38)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x38), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00169069; /* jne: not equal / not zero */

loc_00169065: ;
    PUSH32(esp, 6);
    goto loc_0016906B;

loc_00169069: ;
    PUSH32(esp, 5);

loc_0016906B: ;
    PUSH32(esp, 0x00169070u); RECOMP_ABI_CALL(0x00206000u, sub_00206000); /* call 0x00206000 */

loc_00169070: ;
    eax = MEM32(esi + 4);
    edi = MEM32(esp + 0x1C);
    ecx = MEM32(esp + 0x14);
    eax = eax & 0xFFFFF87Fu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 4) = eax;
    MEM32(esi + 0x190) = 0;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x14) = ecx;
    if ((_fas >= 0)) { g_seh_ebp = ebp; sub_00168B64(); return; } /* jns: not sign (positive) */

loc_00169098: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00168FE8
 * Original: 0x00168FE8 - 0x0016909F (183 bytes, 62 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00168FE8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00168FE8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00168FF3; /* je: equal / zero */

loc_00168FEC: ;
    ecx = edi;
    PUSH32(esp, 0x00168FF3u); RECOMP_ABI_CALL(0x001F9DE0u, sub_001F9DE0); /* call 0x001F9DE0 */

loc_00168FF3: ;
    ecx = MEM32(edi + 0x3C);
    edx = MEM32(ecx);
    eax = esi + 0x1C0;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = esi + 0x1B0;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x60); PUSH32(esp, 0x00169009u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00169006u); } /* indirect call */
    }

loc_00169009: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0016903C; /* je: equal / zero */

loc_00169011: ;
    edi = MEM32(esi + 0xC);
    ecx = edi;
    PUSH32(esp, 0x0016901Bu); RECOMP_ABI_CALL(0x001F9DD0u, sub_001F9DD0); /* call 0x001F9DD0 */

loc_0016901B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0016902D; /* jne: not equal / not zero */

loc_0016901F: ;
    eax = MEM32(edi + 0x44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016902D; /* je: equal / zero */

loc_00169026: ;
    ecx = edi;
    PUSH32(esp, 0x0016902Du); RECOMP_ABI_CALL(0x001F9DE0u, sub_001F9DE0); /* call 0x001F9DE0 */

loc_0016902D: ;
    ecx = MEM32(edi + 0x3C);
    edx = MEM32(ecx);
    eax = esi + 0x1A0;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x5C); PUSH32(esp, 0x0016903Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00169039u); } /* indirect call */
    }

loc_0016903C: ;
    ecx = MEM32(esi + 4);
    ecx = ecx & 0xFFFFFF7Fu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = ecx;
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 4 (8-bit) */
    MEM32(esi + 4) = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_00169070; /* je: equal / zero */

loc_0016904F: ;
    ecx = MEM32(esi + 0xC);
    eax = MEM32(ecx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00169070; /* je: equal / zero */

loc_00169059: ;
    _fa = (uint32_t)(MEM8(ecx + 0x40)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 0x40), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00169070; /* jne: not equal / not zero */

loc_0016905F: ;
    _fa = (uint32_t)(MEM8(esi + 0x38)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x38), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00169069; /* jne: not equal / not zero */

loc_00169065: ;
    PUSH32(esp, 6);
    goto loc_0016906B;

loc_00169069: ;
    PUSH32(esp, 5);

loc_0016906B: ;
    PUSH32(esp, 0x00169070u); RECOMP_ABI_CALL(0x00206000u, sub_00206000); /* call 0x00206000 */

loc_00169070: ;
    eax = MEM32(esi + 4);
    edi = MEM32(esp + 0x1C);
    ecx = MEM32(esp + 0x14);
    eax = eax & 0xFFFFF87Fu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 4) = eax;
    MEM32(esi + 0x190) = 0;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x14) = ecx;
    if ((_fas >= 0)) { g_seh_ebp = ebp; sub_00168B64(); return; } /* jns: not sign (positive) */

loc_00169098: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_001690A0
 * Original: 0x001690A0 - 0x0016915B (187 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001690A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001690A0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x21C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00169159; /* je: equal / zero */

loc_001690B2: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x10C);
    eax = eax + esi + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00169159; /* je: equal / zero */

loc_001690C4: ;
    SET_LO8(ecx, MEM8(eax + 0xE8));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00169159; /* je: equal / zero */

loc_001690D2: ;
    ecx = esi;
    PUSH32(esp, 0x001690D9u); RECOMP_ABI_CALL(0x001689B0u, sub_001689B0); /* call 0x001689B0 */

loc_001690D9: ;
    eax = MEM32(0x51003C);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001690E6u); RECOMP_ABI_CALL(0x00162870u, sub_00162870); /* call 0x00162870 */

loc_001690E6: ;
    ecx = MEM32(esi + 0x10B8);
    MEM8(esi + 0x10B4) = 1;
    MEM32(ecx + 4) = 0;
    ecx = MEM32(esi + 0x23C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00169112; /* je: equal / zero */

loc_00169104: ;
    edx = MEM32(0x51003C);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00169110u); RECOMP_ABI_CALL(0x00273720u, sub_00273720); /* call 0x00273720 */

loc_00169110: ;
    goto loc_00169123;

loc_00169112: ;
    eax = MEM32(0x51003C);
    ecx = MEM32(esi + 0x224);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00169123u); RECOMP_ABI_CALL(0x00203EC0u, sub_00203EC0); /* call 0x00203EC0 */

loc_00169123: ;
    ecx = MEM32(esi + 0x22C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00169143; /* je: equal / zero */

loc_0016912D: ;
    SET_LO8(eax, MEM8(esi + 0x234));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00169143; /* je: equal / zero */

loc_00169137: ;
    edx = MEM32(0x51003C);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00169143u); RECOMP_ABI_CALL(0x00203EC0u, sub_00203EC0); /* call 0x00203EC0 */

loc_00169143: ;
    ecx = esi;
    PUSH32(esp, 0x0016914Au); RECOMP_ABI_CALL(0x00164220u, sub_00164220); /* call 0x00164220 */

loc_0016914A: ;
    ecx = esi;
    PUSH32(esp, 0x00169151u); RECOMP_ABI_CALL(0x00166940u, sub_00166940); /* call 0x00166940 */

loc_00169151: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_001D3030(); return; /* tail jmp 0x001D3030 */

loc_00169159: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0016A9C0
 * Original: 0x0016A9C0 - 0x0016AA1E (94 bytes, 39 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016A9C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0016A9C0: ;
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(esp + 8));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 2 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_0016A9FB; /* je: equal / zero */

loc_0016A9CD: ;
    eax = MEM32(esi + -16);
    PUSH32(esp, edi);
    PUSH32(esp, 0x1673B0);
    edi = esi + -16;
    PUSH32(esp, eax);
    PUSH32(esp, 0x70);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0016A9E2u); RECOMP_ABI_CALL(0x000EBA6Cu, sub_000EBA6C); /* call 0x000EBA6C */

loc_0016A9E2: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0016A9F3; /* je: equal / zero */

loc_0016A9E7: ;
    ecx = MEM32(0x62EBAC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0016A9F3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0016A9F0u); } /* indirect call */
    }

loc_0016A9F3: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_0016A9FB: ;
    ecx = esi;
    PUSH32(esp, 0x0016AA02u); RECOMP_ABI_CALL(0x001673B0u, sub_001673B0); /* call 0x001673B0 */

loc_0016AA02: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0016AA17; /* je: equal / zero */

loc_0016AA07: ;
    ecx = MEM32(0x62EBAC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1E);
    PUSH32(esp, 0x70);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x0016AA17u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0016AA14u); } /* indirect call */
    }

loc_0016AA17: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0016AF50
 * Original: 0x0016AF50 - 0x0016AF57 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016AF50(void)
{

loc_0016AF50: ;
    MEM32(ecx) = 0x4AEE8C;
    esp += 4; return; /* ret */

}

/**
 * sub_0016AF60
 * Original: 0x0016AF60 - 0x0016AF67 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016AF60(void)
{

loc_0016AF60: ;
    eax = MEM32(ecx + 0x80);
    esp += 4; return; /* ret */

}

/**
 * sub_0016AF70
 * Original: 0x0016AF70 - 0x0016AF77 (7 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016AF70(void)
{

loc_0016AF70: ;
    eax = MEM32(ecx + 0xB8);
    esp += 4; return; /* ret */

}

/**
 * sub_0016AF80
 * Original: 0x0016AF80 - 0x0016AFB1 (49 bytes, 16 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016AF80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0016AF80: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x4AEE8C;
    if (TEST_Z(_fa, _fb)) goto loc_0016AFAB; /* je: equal / zero */

loc_0016AF90: ;
    eax = MEM32(0x50630C);
    PUSH32(esp, 0x1E);
    PUSH32(esp, 0x4AEED0);
    PUSH32(esp, 0x4AEEB0);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0016AFA8u); RECOMP_ABI_CALL(0x001031A0u, sub_001031A0); /* call 0x001031A0 */

loc_0016AFA8: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0016AFAB: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0016AFC0
 * Original: 0x0016AFC0 - 0x0016AFE1 (33 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016AFC0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0016AFC0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(0x50630C);
    PUSH32(esp, 0x49);
    PUSH32(esp, 0x4AEF08);
    PUSH32(esp, 0x4AEEE8);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0016AFDDu); RECOMP_ABI_CALL(0x001031A0u, sub_001031A0); /* call 0x001031A0 */

loc_0016AFDD: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0016AFF0
 * Original: 0x0016AFF0 - 0x0016B013 (35 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016AFF0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0016AFF0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(0x50630C);
    PUSH32(esp, 0x49);
    PUSH32(esp, 0x4AEF20);
    PUSH32(esp, 0x4AEEE8);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0016B00Fu); RECOMP_ABI_CALL(0x001050A0u, sub_001050A0); /* call 0x001050A0 */

loc_0016B00F: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0016B020
 * Original: 0x0016B020 - 0x0016B041 (33 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016B020(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0016B020: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(0x50630C);
    PUSH32(esp, 0x49);
    PUSH32(esp, 0x4AEF38);
    PUSH32(esp, 0x4AEEE8);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0016B03Du); RECOMP_ABI_CALL(0x001031A0u, sub_001031A0); /* call 0x001031A0 */

loc_0016B03D: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0016B050
 * Original: 0x0016B050 - 0x0016B078 (40 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0016B050(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0016B050: ;
    edx = MEM32(ecx + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016B073; /* je: equal / zero */

loc_0016B057: ;
    ecx = MEM32(ecx + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016B073; /* je: equal / zero */

loc_0016B05E: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(MEM8(edx + eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx + eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016B073; /* je: equal / zero */

loc_0016B068: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0xCC);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0016B073: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0016B080
 * Original: 0x0016B080 - 0x0016B084 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016B080(void)
{

loc_0016B080: ;
    eax = MEM32(ecx + 4);
    esp += 4; return; /* ret */

}

/**
 * sub_0016B090
 * Original: 0x0016B090 - 0x0016B0A4 (20 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016B090(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0016B090: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = 0x4AEF54;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x28) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_0016B0B0
 * Original: 0x0016B0B0 - 0x0016B0D9 (41 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0016B0B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0016B0B0: ;
    edx = MEM32(ecx + 0xC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016B0D4; /* je: equal / zero */

loc_0016B0B7: ;
    ecx = MEM32(ecx + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016B0D4; /* je: equal / zero */

loc_0016B0BE: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(MEM16(edx + eax * 2)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edx + eax * 2), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016B0D4; /* je: equal / zero */

loc_0016B0C9: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x508);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0016B0D4: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0016B0E0
 * Original: 0x0016B0E0 - 0x0016B0E5 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016B0E0(void)
{

loc_0016B0E0: ;
    eax = (uint32_t)(int32_t)SMEM16(ecx + 0x12);
    esp += 4; return; /* ret */

}

/**
 * sub_0016B0F0
 * Original: 0x0016B0F0 - 0x0016B0FA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016B0F0(void)
{

loc_0016B0F0: ;
    MEM16(0x514388) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_0016B100
 * Original: 0x0016B100 - 0x0016B10A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016B100(void)
{

loc_0016B100: ;
    MEM16(0x514388) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_0016B110
 * Original: 0x0016B110 - 0x0016B118 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016B110(void)
{

loc_0016B110: ;
    MEM8(ecx + 0x2092A) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_0016B120
 * Original: 0x0016B120 - 0x0016B184 (100 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016B120(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0016B120: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi) = 0x4AEF54;
    if (CMP_EQ(_fa, _fb)) goto loc_0016B136; /* je: equal / zero */

loc_0016B130: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0016B136u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0016B134u); } /* indirect call */
    }

loc_0016B136: ;
    eax = MEM32(esi + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016B15C; /* je: equal / zero */

loc_0016B13D: ;
    ecx = MEM32(esi + 0x24);
    edx = MEM32(0x50630C);
    PUSH32(esp, 0x6C);
    PUSH32(esp, 0x4AEF80);
    PUSH32(esp, 0x4AEF58);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0016B159u); RECOMP_ABI_CALL(0x001031A0u, sub_001031A0); /* call 0x001031A0 */

loc_0016B159: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0016B15C: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0016B182; /* jne: not equal / not zero */

loc_0016B163: ;
    eax = MEM32(esi + 8);
    ecx = MEM32(0x50630C);
    PUSH32(esp, 0x71);
    PUSH32(esp, 0x4AEF80);
    PUSH32(esp, 0x4AEF58);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0016B17Fu); RECOMP_ABI_CALL(0x001031A0u, sub_001031A0); /* call 0x001031A0 */

loc_0016B17F: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0016B182: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0016B190
 * Original: 0x0016B190 - 0x0016B197 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016B190(void)
{

loc_0016B190: ;
    MEM32(ecx) = 0x4AEE8C;
    esp += 4; return; /* ret */

}

/**
 * sub_0016B1A0
 * Original: 0x0016B1A0 - 0x0016B1A9 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016B1A0(void)
{

loc_0016B1A0: ;
    eax = ecx;
    MEM32(eax) = 0x4AEE8C;
    esp += 4; return; /* ret */

}

/**
 * sub_0016B1B0
 * Original: 0x0016B1B0 - 0x0016B1EB (59 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016B1B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0016B1B0: ;
    eax = MEM32(0x5142A4);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ebx = ecx;
    if (CMP_LE(_fas, _fbs)) goto loc_0016B1E8; /* jle: less or equal (signed <=) */

loc_0016B1BF: ;
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0016B1C2: ;
    eax = MEM32(ebx + 0xC);
    _fa = (uint32_t)(MEM16(eax + esi * 2)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + esi * 2), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016B1D7; /* je: equal / zero */

loc_0016B1CC: ;
    ecx = MEM32(ebx + 4);
    edx = MEM32(ecx + edi);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0016B1D7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0016B1D4u); } /* indirect call */
    }

loc_0016B1D7: ;
    eax = MEM32(0x5142A4);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x508) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x508;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0016B1C2; /* jl: less (signed <) */

loc_0016B1E7: ;
    POP32(esp, edi);

loc_0016B1E8: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0016B1F0
 * Original: 0x0016B1F0 - 0x0016B20E (30 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0016B1F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0016B1F0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0016B1FE; /* jne: not equal / not zero */

loc_0016B1F8: ;
    eax = MEM32(ecx + 0x1C);
    esp += 8; return; /* ret 4 */

loc_0016B1FE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0016B209; /* jne: not equal / not zero */

loc_0016B203: ;
    eax = MEM32(ecx + 0x20);
    esp += 8; return; /* ret 4 */

loc_0016B209: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0016B210
 * Original: 0x0016B210 - 0x0016B214 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016B210(void)
{

loc_0016B210: ;
    eax = MEM32(ecx + 0x1C);
    esp += 4; return; /* ret */

}

/**
 * sub_0016B220
 * Original: 0x0016B220 - 0x0016B224 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016B220(void)
{

loc_0016B220: ;
    eax = MEM32(ecx + 0x20);
    esp += 4; return; /* ret */

}

/**
 * sub_0016B230
 * Original: 0x0016B230 - 0x0016B269 (57 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016B230(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0016B230: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1000000);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0016B23Fu); RECOMP_ABI_CALL(0x001836C0u, sub_001836C0); /* call 0x001836C0 */

loc_0016B23F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax;
    PUSH32(esp, 0x0016B249u); RECOMP_ABI_CALL(0x00183E50u, sub_00183E50); /* call 0x00183E50 */

loc_0016B249: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016B265; /* je: equal / zero */

loc_0016B24F: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0016B256u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0016B253u); } /* indirect call */
    }

loc_0016B256: ;
    eax = eax & 0xA;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xA (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0016B265; /* jne: not equal / not zero */

loc_0016B25D: ;
    eax = MEM32(esi + 0xBC);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0016B265: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0016B270
 * Original: 0x0016B270 - 0x0016B2A9 (57 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016B270(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0016B270: ;
    PUSH32(esp, esi);
    PUSH32(esp, 2);
    PUSH32(esp, 0x1000000);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0016B27Fu); RECOMP_ABI_CALL(0x001836C0u, sub_001836C0); /* call 0x001836C0 */

loc_0016B27F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax;
    PUSH32(esp, 0x0016B289u); RECOMP_ABI_CALL(0x00183E50u, sub_00183E50); /* call 0x00183E50 */

loc_0016B289: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016B2A5; /* je: equal / zero */

loc_0016B28F: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0016B296u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0016B293u); } /* indirect call */
    }

loc_0016B296: ;
    eax = eax & 0xA;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xA (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0016B2A5; /* jne: not equal / not zero */

loc_0016B29D: ;
    eax = MEM32(esi + 0xBC);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0016B2A5: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0016B2B0
 * Original: 0x0016B2B0 - 0x0016B2C7 (23 bytes, 8 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016B2B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0016B2B0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0016B2BB; /* jne: not equal / not zero */

loc_0016B2B8: ;
    esp += 8; return; /* ret 4 */

loc_0016B2BB: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0016B2C1u); RECOMP_ABI_CALL(0x001553C0u, sub_001553C0); /* call 0x001553C0 */

loc_0016B2C1: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0016B2D0
 * Original: 0x0016B2D0 - 0x0016B33A (106 bytes, 43 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016B2D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0016B2D0: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0016B2E3; /* jne: not equal / not zero */

loc_0016B2DE: ;
    ebx = 1;

loc_0016B2E3: ;
    edi = MEM32(0x5142A4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0016B31F; /* jle: less or equal (signed <=) */

loc_0016B2EF: ;
    esi = MEM32(ecx + 0xC);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0016B2F4: ;
    _fa = (uint32_t)(MEM16(esi)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016B311; /* je: equal / zero */

loc_0016B2FA: ;
    ebp = MEM32(ecx + 4);
    ebp = (uint32_t)(int32_t)SMEM16(edx + ebp + 0x360);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, MEM32(esp + 0x14) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0016B311; /* jne: not equal / not zero */

loc_0016B30B: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016B328; /* je: equal / zero */

loc_0016B310: ;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_0016B311: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x508) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x508;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0016B2F4; /* jl: less (signed <) */

loc_0016B31F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_0016B328: ;
    edx = MEM32(ecx + 4);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x508);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0016B340
 * Original: 0x0016B340 - 0x0016B3BC (124 bytes, 45 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016B340(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0016B340: ;
    eax = MEM32(0x5142E8);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    edx = eax;
    MEM32(esi) = eax;
    eax = MEM32(0x514290);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0016B3A1; /* jge: greater or equal (signed >=) */

loc_0016B35B: ;
    ebx = MEM32(esp + 0x10);
    /* nop */

loc_0016B360: ;
    eax = MEM32(esi);
    edx = MEM32(ecx + 0x28);
    _fa = (uint32_t)(MEM16(edx + eax * 2)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edx + eax * 2), 0 (16-bit) */
    edx = edx + eax * 2;
    if (CMP_NE(_fa, _fb)) goto loc_0016B394; /* jne: not equal / not zero */

loc_0016B36F: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x3238);
    _fa = (uint32_t)(MEM8(eax + 0x5CE8F0)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x5CE8F0), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016B394; /* je: equal / zero */

loc_0016B37E: ;
    _fa = (uint32_t)(MEM16(eax + 0x5D067E)) & 0xFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 0x5D067E), 0xFFFFFFFFu (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0016B38F; /* jne: not equal / not zero */

loc_0016B388: ;
    MEM16(edx) = 1;
    goto loc_0016B394;

loc_0016B38F: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016B3A9; /* je: equal / zero */

loc_0016B394: ;
    eax = MEM32(esi);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x514290)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0x514290) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0016B360; /* jl: less (signed <) */

loc_0016B3A1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_0016B3A9: ;
    eax = MEM32(esi);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x3238);
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x5CE880) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x5CE880;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0016B3C0
 * Original: 0x0016B3C0 - 0x0016B481 (193 bytes, 56 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016B3C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0016B3C0: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    ebp = ecx;
    PUSH32(esp, 0x0016B3D2u); RECOMP_ABI_CALL(0x0016B340u, sub_0016B340); /* call 0x0016B340 */

loc_0016B3D2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0016B3E0; /* jne: not equal / not zero */

loc_0016B3D6: ;
    SET_LO16(eax, 0); /* xor self */
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* xor result */
    POP32(esp, ebp);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0016B3E0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x20);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x0016B3EEu); RECOMP_ABI_CALL(0x00153F80u, sub_00153F80); /* call 0x00153F80 */

loc_0016B3EE: ;
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0016B3F9u); RECOMP_ABI_CALL(0x0015BBC0u, sub_0015BBC0); /* call 0x0015BBC0 */

loc_0016B3F9: ;
    edi = MEM32(esp + 0x18);
    edx = edi;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x3238);
    esi = edx + 0x5CE880;
    MEM32(ebx + 0x31C) = esi;
    MEM16(ebx + 0xD0) = LO16(edi);
    eax = MEM32(ebp + 0x28);
    ebp = 1;
    MEM16(eax + edi * 2) = LO16(ebp);
    ecx = MEM32(esp + 0x1C);
    edx = MEM32(esp + 0x20);
    eax = MEM32(esp + 0x24);
    MEM32(esi + 0x200) = ebx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x80) = ecx;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebx);
    ecx = esi;
    MEM32(esi + 0x84) = edx;
    MEM32(esi + 0x88) = eax;
    MEM16(esi + 0x27C0) = LO16(ebp);
    PUSH32(esp, 0x0016B45Cu); RECOMP_ABI_CALL(0x0015DAE0u, sub_0015DAE0); /* call 0x0015DAE0 */

loc_0016B45C: ;
    edi = (uint32_t)((int32_t)edi * (int32_t)0x2120);
    MEM32(edi + 0x698C00) = ebp;
    POP32(esp, edi);
    MEM8(esi + 0x2737) = LO8(ebx);
    MEM32(esi + 0x270) = ebx;
    POP32(esp, esi);
    POP32(esp, ebx);
    SET_LO16(eax, LO16(ebp));
    POP32(esp, ebp);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0016B490
 * Original: 0x0016B490 - 0x0016B4BF (47 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016B490(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0016B490: ;
    edx = MEM32(0x5142E8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x14 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0016B4BE; /* jge: greater or equal (signed >=) */

loc_0016B49D: ;
    ecx = MEM32(ecx + 0x28);
    PUSH32(esp, esi);
    esi = ecx + edx * 2;
    ecx = 0x14;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    goto loc_0016B4B0;

    /* nop */

loc_0016B4B0: ;
    _fa = (uint32_t)(MEM16(esi)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0016B4B7; /* jne: not equal / not zero */

loc_0016B4B6: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0016B4B7: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0016B4B0; /* jne: not equal / not zero */

loc_0016B4BD: ;
    POP32(esp, esi);

loc_0016B4BE: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0016B4C0
 * Original: 0x0016B4C0 - 0x0016B4C5 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016B4C0(void)
{

loc_0016B4C0: ;
    eax = (uint32_t)(int32_t)SMEM16(ecx + 0x12);
    esp += 4; return; /* ret */

}

/**
 * sub_0016B4D0
 * Original: 0x0016B4D0 - 0x0016B4FA (42 bytes, 16 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016B4D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0016B4D0: ;
    edx = MEM32(0x5142A4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    PUSH32(esp, esi);
    if (CMP_LE(_fas, _fbs)) goto loc_0016B4F3; /* jle: less or equal (signed <=) */

loc_0016B4DD: ;
    ecx = MEM32(ecx + 4);
    esi = MEM32(esp + 8);

loc_0016B4E4: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016B4F6; /* je: equal / zero */

loc_0016B4E8: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x508) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x508;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0016B4E4; /* jl: less (signed <) */

loc_0016B4F3: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0016B4F6: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0016B500
 * Original: 0x0016B500 - 0x0016B582 (130 bytes, 56 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016B500(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0016B500: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(0x5142A4);
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016B535; /* je: equal / zero */

loc_0016B515: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0016B52F; /* jle: less or equal (signed <=) */

loc_0016B519: ;
    edx = MEM32(ecx + 4);
    /* nop */

loc_0016B520: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016B56D; /* je: equal / zero */

loc_0016B524: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x508) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x508;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0016B520; /* jl: less (signed <) */

loc_0016B52F: ;
    edi = edi | 0xFFFFFFFFu;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0016B532: ;
    eax = edi + 1;

loc_0016B535: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0016B54E; /* jge: greater or equal (signed >=) */

loc_0016B539: ;
    edx = MEM32(ecx + 0xC);
    edx = edx + eax * 2;
    /* nop */

loc_0016B540: ;
    _fa = (uint32_t)(MEM16(edx)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edx), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0016B571; /* jne: not equal / not zero */

loc_0016B546: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0016B540; /* jl: less (signed <) */

loc_0016B54E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0016B565; /* jle: less or equal (signed <=) */

loc_0016B554: ;
    edx = MEM32(ecx + 0xC);

loc_0016B557: ;
    _fa = (uint32_t)(MEM16(edx)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edx), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0016B571; /* jne: not equal / not zero */

loc_0016B55D: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0016B557; /* jl: less (signed <) */

loc_0016B565: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_0016B56D: ;
    edi = eax;
    goto loc_0016B532;

loc_0016B571: ;
    edx = MEM32(ecx + 4);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x508);
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0016B590
 * Original: 0x0016B590 - 0x0016B5B2 (34 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016B590(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0016B590: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0016B59Bu); RECOMP_ABI_CALL(0x0016B500u, sub_0016B500); /* call 0x0016B500 */

loc_0016B59B: ;
    esi = MEM32(ecx + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0016B5AE; /* jne: not equal / not zero */

loc_0016B5A2: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0016B5A8u); RECOMP_ABI_CALL(0x0016B500u, sub_0016B500); /* call 0x0016B500 */

loc_0016B5A8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0016B5AE; /* jne: not equal / not zero */

loc_0016B5AC: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0016B5AE: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0016B5C0
 * Original: 0x0016B5C0 - 0x0016B625 (101 bytes, 40 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016B5C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0016B5C0: ;
    PUSH32(esp, esi);
    esi = MEM32(0x5142A4);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016B5F3; /* je: equal / zero */

loc_0016B5D2: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0016B5EF; /* jle: less or equal (signed <=) */

loc_0016B5D6: ;
    edx = MEM32(ecx + 4);
    /* nop */

loc_0016B5E0: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016B5F2; /* je: equal / zero */

loc_0016B5E4: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x508) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x508;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0016B5E0; /* jl: less (signed <) */

loc_0016B5EF: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0016B5F2: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0016B5F3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0016B60E; /* jge: greater or equal (signed >=) */

loc_0016B5F7: ;
    edx = MEM32(ecx + 0xC);
    edx = edx + eax * 2;
    /* nop */

loc_0016B600: ;
    _fa = (uint32_t)(MEM16(edx)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edx), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0016B615; /* jne: not equal / not zero */

loc_0016B606: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0016B600; /* jl: less (signed <) */

loc_0016B60E: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0016B615: ;
    edx = MEM32(ecx + 4);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x508);
    POP32(esp, edi);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0016B630
 * Original: 0x0016B630 - 0x0016B696 (102 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016B630(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0016B630: ;
    edx = MEM32(0x5142A4);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (CMP_LE(_fas, _fbs)) goto loc_0016B675; /* jle: less or equal (signed <=) */

loc_0016B641: ;
    ebx = MEM32(edi + 0xC);
    ecx = ebx;

loc_0016B646: ;
    _fa = (uint32_t)(MEM16(ecx)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016B65A; /* je: equal / zero */

loc_0016B64C: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0016B646; /* jl: less (signed <) */

loc_0016B654: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0016B65A: ;
    edx = MEM32(edi + 4);
    esi = eax;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x508);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(ebx + eax * 2) = 1;
    MEM16(edi + 0x12) = MEM16(edi + 0x12) + 1;
    _fa = (uint32_t)(MEM16(edi + 0x12)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0016B67B; /* jne: not equal / not zero */

loc_0016B675: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0016B67B: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x0016B682u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0016B67Fu); } /* indirect call */
    }

loc_0016B682: ;
    SET_LO16(ecx, MEM16(edi + 0x14));
    MEM16(esi + 0x362) = LO16(ecx);
    MEM32(edi + 0x14) = MEM32(edi + 0x14) + 1;
    _fa = (uint32_t)(MEM32(edi + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0016B6A0
 * Original: 0x0016B6A0 - 0x0016B6A5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016B6A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0016B6A0: ;
    g_seh_ebp = ebp; sub_0016B630(); return; /* tail jmp 0x0016B630 */

}

/**
 * sub_0016B6B0
 * Original: 0x0016B6B0 - 0x0016B780 (208 bytes, 63 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016B6B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0016B6B0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    ebx = (uint32_t)(int32_t)SMEM16(ebp + 0xD0);
    PUSH32(esp, esi);
    esi = ebx;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x3238);
    PUSH32(esp, edi);
    edi = esi + 0x5CE880;
    PUSH32(esp, edi);
    MEM32(esp + 0x14) = ecx;
    PUSH32(esp, 0x0016B6D8u); RECOMP_ABI_CALL(0x0015F7A0u, sub_0015F7A0); /* call 0x0015F7A0 */

loc_0016B6D8: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0016B6DEu); RECOMP_ABI_CALL(0x001C17A0u, sub_001C17A0); /* call 0x001C17A0 */

loc_0016B6DE: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 1);
    ecx = edi;
    PUSH32(esp, 0x0016B6EAu); RECOMP_ABI_CALL(0x0015DAE0u, sub_0015DAE0); /* call 0x0015DAE0 */

loc_0016B6EA: ;
    eax = MEM32(esp + 0x10);
    MEM8(esi + 0x5D0FB7) = 1;
    MEM32(esi + 0x5CEA80) = 0;
    ecx = MEM32(eax + 0x28);
    MEM16(ecx + ebx * 2) = 0;
    PUSH32(esp, edi);
    ecx = 0x6FC968;
    PUSH32(esp, 0x0016B713u); RECOMP_ABI_CALL(0x001D3A30u, sub_001D3A30); /* call 0x001D3A30 */

loc_0016B713: ;
    ecx = edi;
    PUSH32(esp, 0x0016B71Au); RECOMP_ABI_CALL(0x0015E3D0u, sub_0015E3D0); /* call 0x0015E3D0 */

loc_0016B71A: ;
    edx = (uint32_t)(int32_t)SMEM16(esi + 0x5D067E);
    eax = MEM32(esi + 0x5CE8E8);
    PUSH32(esp, edx);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0016B72Fu); RECOMP_ABI_CALL(0x0001664Fu, sub_0001664F); /* call 0x0001664F */

loc_0016B72F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016B73F; /* je: equal / zero */

loc_0016B736: ;
    PUSH32(esp, 1);
    ecx = eax;
    PUSH32(esp, 0x0016B73Fu); RECOMP_ABI_CALL(0x001AABD0u, sub_001AABD0); /* call 0x001AABD0 */

loc_0016B73F: ;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0016B746u); RECOMP_ABI_CALL(0x0001457Au, sub_0001457A); /* call 0x0001457A */

loc_0016B746: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0016B74Cu); RECOMP_ABI_CALL(0x000150D3u, sub_000150D3); /* call 0x000150D3 */

loc_0016B74C: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0016B754u); RECOMP_ABI_CALL(0x001F22B0u, sub_001F22B0); /* call 0x001F22B0 */

loc_0016B754: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0016B75Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0016B759u); } /* indirect call */
    }

loc_0016B75C: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0016B762u); RECOMP_ABI_CALL(0x0010EE00u, sub_0010EE00); /* call 0x0010EE00 */

loc_0016B762: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebp + 0x31C) = 0;
    MEM16(ebp + 0xD0) = 0xFFFF;
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0016B780
 * Original: 0x0016B780 - 0x0016B79E (30 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016B780(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0016B780: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM16(0x514388) = 0;
    eax = MEM32(esi + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016B79C; /* je: equal / zero */

loc_0016B793: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = eax; PUSH32(esp, 0x0016B795u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0016B793u); } /* indirect call */
    }

loc_0016B795: ;
    MEM32(esi + 0x2C) = 0;

loc_0016B79C: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0016B7A0
 * Original: 0x0016B7A0 - 0x0016B7E6 (70 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016B7A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0016B7A0: ;
    eax = MEM32(0x5142A4);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ebx = ecx;
    if (CMP_LE(_fas, _fbs)) goto loc_0016B7E3; /* jle: less or equal (signed <=) */

loc_0016B7AF: ;
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0016B7B2: ;
    eax = MEM32(ebx + 0xC);
    _fa = (uint32_t)(MEM16(eax + esi * 2)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + esi * 2), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016B7D2; /* je: equal / zero */

loc_0016B7BC: ;
    ecx = MEM32(ebx + 4);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM16(ecx + 0xD2)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 0xD2), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0016B7D2; /* jne: not equal / not zero */

loc_0016B7CB: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x0016B7D2u); RECOMP_ABI_CALL(0x00153700u, sub_00153700); /* call 0x00153700 */

loc_0016B7D2: ;
    eax = MEM32(0x5142A4);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x508) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x508;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0016B7B2; /* jl: less (signed <) */

loc_0016B7E2: ;
    POP32(esp, edi);

loc_0016B7E3: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0016B7F0
 * Original: 0x0016B7F0 - 0x0016B845 (85 bytes, 23 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016B7F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0016B7F0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016B841; /* je: equal / zero */

loc_0016B7F9: ;
    eax = MEM32(esi + 0x31C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016B838; /* je: equal / zero */

loc_0016B803: ;
    MEM32(eax + 0x1E04) = 6;
    ecx = MEM32(esi + 0x31C);
    edx = (uint32_t)(int32_t)SMEM16(ecx + 0x1DFE);
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0xD0);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x370);
    eax = MEM32(edx + 0x5B2584);
    PUSH32(esp, eax);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0016B835u); RECOMP_ABI_CALL(0x00176270u, sub_00176270); /* call 0x00176270 */

loc_0016B835: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0016B838: ;
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x0016B841u); RECOMP_ABI_CALL(0x00153700u, sub_00153700); /* call 0x00153700 */

loc_0016B841: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0016B850
 * Original: 0x0016B850 - 0x0016B851 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016B850(void)
{

loc_0016B850: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0016B860
 * Original: 0x0016B860 - 0x0016B961 (257 bytes, 87 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016B860(void)
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

loc_0016B860: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebx = ecx;
    ecx = MEM32(ebx + 0x1C);
    eax = MEM32(ecx);
    PUSH32(esp, esi);
    edx = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0016B875u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0016B872u); } /* indirect call */
    }

loc_0016B875: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    ebp = MEM32(esp + 0x28);
    esi = MEM32(esp + 0x24);
    MEMF(ebp) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x14);
    fp_push(MEMF(esp + 0x10)); /* fld float */
    edx = MEM32(esp + 0x18);
    MEMF(esi) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(ebp + 4) = eax;
    ecx = eax;
    MEM32(esi + 4) = ecx;
    eax = edx;
    MEM32(ebp + 8) = edx;
    MEM32(esi + 8) = eax;
    ecx = MEM32(0x5142A4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    MEM32(esp + 0xC) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_0016B958; /* jle: less or equal (signed <=) */

loc_0016B8B6: ;
    MEM32(esp + 0x28) = eax;
    PUSH32(esp, edi);
    goto loc_0016B8C0;

    /* nop */

loc_0016B8C0: ;
    ecx = MEM32(ebx + 0xC);
    _fa = (uint32_t)(MEM16(ecx + eax * 2)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + eax * 2), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016B936; /* je: equal / zero */

loc_0016B8CA: ;
    edx = MEM32(ebx + 4);
    eax = MEM32(esp + 0x2C);
    ecx = edx + eax;
    edx = MEM32(ecx);
    eax = esp + 0x14;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0016B8DEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0016B8DBu); } /* indirect call */
    }

loc_0016B8DE: ;
    edx = esp + 0x14;
    edi = ebp;
    eax = edx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    /* nop */

loc_0016B8F0: ;
    fp_push(MEMF(esp + ecx * 4 + 0x14)); /* fld float */
    edx = esi + ecx * 4;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + edx + 0x14)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + edx + 0x14] */
    edx = esp + edx + 0x14;
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0016B90C; /* jp: parity */

loc_0016B906: ;
    eax = MEM32(esp + ecx * 4 + 0x14);
    MEM32(edx) = eax;

loc_0016B90C: ;
    fp_push(MEMF(esp + ecx * 4 + 0x14)); /* fld float */
    edx = edi + ecx * 4;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + edx + 0x14)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + edx + 0x14] */
    edx = esp + edx + 0x14;
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0016B928; /* jne: not equal / not zero */

loc_0016B922: ;
    eax = MEM32(esp + ecx * 4 + 0x14);
    MEM32(edx) = eax;

loc_0016B928: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 3 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0016B8F0; /* jl: less (signed <) */

loc_0016B92E: ;
    eax = MEM32(esp + 0x10);
    esi = MEM32(esp + 0x28);

loc_0016B936: ;
    edx = MEM32(esp + 0x2C);
    ecx = MEM32(0x5142A4);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x508) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x508;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x2C) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_0016B8C0; /* jl: less (signed <) */

loc_0016B957: ;
    POP32(esp, edi);

loc_0016B958: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0016B970
 * Original: 0x0016B970 - 0x0016BA07 (151 bytes, 48 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016B970(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0016B970: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x31C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0016B983; /* jne: not equal / not zero */

loc_0016B97E: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

loc_0016B983: ;
    PUSH32(esp, esi);
    esi = MEM32(eax + 0xCC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016BA01; /* je: equal / zero */

loc_0016B98E: ;
    _fa = (uint32_t)(MEM16(eax + 0x318)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 0x318), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0016BA01; /* jne: not equal / not zero */

loc_0016B998: ;
    PUSH32(esp, 0x4000);
    ecx = esi;
    PUSH32(esp, 0x0016B9A4u); RECOMP_ABI_CALL(0x00195F30u, sub_00195F30); /* call 0x00195F30 */

loc_0016B9A4: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0016BA01; /* jne: not equal / not zero */

loc_0016B9A9: ;
    PUSH32(esp, 0x8000000);
    ecx = esi;
    PUSH32(esp, 0x0016B9B5u); RECOMP_ABI_CALL(0x00195F30u, sub_00195F30); /* call 0x00195F30 */

loc_0016B9B5: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0016B9FB; /* jne: not equal / not zero */

loc_0016B9BA: ;
    PUSH32(esp, 0x10);
    ecx = esi;
    PUSH32(esp, 0x0016B9C3u); RECOMP_ABI_CALL(0x00195F30u, sub_00195F30); /* call 0x00195F30 */

loc_0016B9C3: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0016B9FB; /* jne: not equal / not zero */

loc_0016B9C8: ;
    PUSH32(esp, 0x10000);
    ecx = esi;
    PUSH32(esp, 0x0016B9D4u); RECOMP_ABI_CALL(0x00195F30u, sub_00195F30); /* call 0x00195F30 */

loc_0016B9D4: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0016B9FB; /* jne: not equal / not zero */

loc_0016B9D9: ;
    PUSH32(esp, 0x20000);
    ecx = esi;
    PUSH32(esp, 0x0016B9E5u); RECOMP_ABI_CALL(0x00195F30u, sub_00195F30); /* call 0x00195F30 */

loc_0016B9E5: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0016B9FB; /* jne: not equal / not zero */

loc_0016B9EA: ;
    PUSH32(esp, 0x80000000u);
    ecx = esi;
    PUSH32(esp, 0x0016B9F6u); RECOMP_ABI_CALL(0x00195F30u, sub_00195F30); /* call 0x00195F30 */

loc_0016B9F6: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016BA01; /* je: equal / zero */

loc_0016B9FB: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0016BA01: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0016BA10
 * Original: 0x0016BA10 - 0x0016BA22 (18 bytes, 7 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016BA10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0016BA10: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016BA1F; /* je: equal / zero */

loc_0016BA18: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0016BA1Eu); RECOMP_ABI_CALL(0x001553C0u, sub_001553C0); /* call 0x001553C0 */

loc_0016BA1E: ;
    POP32(esp, ecx);

loc_0016BA1F: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0016BA30
 * Original: 0x0016BA30 - 0x0016C23D (2061 bytes, 616 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016BA30(void)
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

loc_0016BA30: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x682010);
    ecx = MEM32(0x71085C);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, ebx);
    ebx = (uint32_t)(int32_t)SMEM16(0x510052);
    eax = SX16(LO16(eax));
    eax = eax & 0x80000001u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esp + 0x1C) = ebx;
    MEM32(esp + 0x20) = ecx;
    if ((_fas >= 0)) goto loc_0016BA5E; /* jns: not sign (positive) */

loc_0016BA59: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax | 0xFFFFFFFEu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0016BA5E: ;
    MEM16(0x682010) = LO16(eax);
    edx = MEM32(0x682010);
    eax = SX16(LO16(eax));
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x14) = edx;
    MEM32(esp + 0x18) = ecx;
    MEM32(esp + 0xC) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_0016C238; /* jge: greater or equal (signed >=) */

loc_0016BA83: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebp = eax;
    goto loc_0016BA8E;

loc_0016BA8A: ;
    ebx = MEM32(esp + 0x28);

loc_0016BA8E: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    ecx = MEM32(0x710860);
    edi = MEM32(0x710864);
    esi = MEM32(0x51004C);
    edx = MEM32(0x510044);
    if (CMP_GE(_fas, _fbs)) goto loc_0016BB06; /* jge: greater or equal (signed >=) */

loc_0016BAAA: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016BAC9; /* je: equal / zero */

loc_0016BAAE: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016BAC9; /* je: equal / zero */

loc_0016BAB2: ;
    _fa = (uint32_t)(MEM16(esi + ebp * 2)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + ebp * 2), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016BAC9; /* je: equal / zero */

loc_0016BAB9: ;
    eax = ebp;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x508);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fa != 0)) goto loc_0016BB56; /* jne: not equal / not zero */

loc_0016BAC9: ;
    eax = MEM32(esp + 0x24);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0016C219; /* jle: less or equal (signed <=) */

loc_0016BAD7: ;
    esi = MEM32(esp + 0x24);
    ebp = ebp << 6;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = ebp;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = 0xBF800000u;
    goto loc_0016BAF0;

    /* nop */

loc_0016BAF0: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(eax * 4 + 0x67E010) = edi;
    eax = SX16(LO16(ecx));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0016BAF0; /* jl: less (signed <) */

loc_0016BB01: ;
    goto loc_0016C219;

loc_0016BB06: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016BB20; /* je: equal / zero */

loc_0016BB0A: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016BB20; /* je: equal / zero */

loc_0016BB0E: ;
    _fa = (uint32_t)(MEM8(ecx + ebp)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + ebp), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016BB20; /* je: equal / zero */

loc_0016BB14: ;
    eax = ebp;
    eax = (uint32_t)((int32_t)eax * (int32_t)0xCC);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fa != 0)) goto loc_0016BB56; /* jne: not equal / not zero */

loc_0016BB20: ;
    eax = MEM32(esp + 0x24);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0016C219; /* jle: less or equal (signed <=) */

loc_0016BB2E: ;
    esi = MEM32(esp + 0x24);
    ebp = ebp << 6;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = ebp;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = 0xBF800000u;
    edi = edi;

loc_0016BB40: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(eax * 4 + 0x67E010) = edi;
    eax = SX16(LO16(ecx));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0016BB40; /* jl: less (signed <) */

loc_0016BB51: ;
    goto loc_0016C219;

loc_0016BB56: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0016BB75; /* jge: greater or equal (signed >=) */

loc_0016BB5A: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016BB91; /* je: equal / zero */

loc_0016BB5E: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016BB91; /* je: equal / zero */

loc_0016BB62: ;
    _fa = (uint32_t)(MEM16(esi + ebp * 2)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + ebp * 2), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016BB91; /* je: equal / zero */

loc_0016BB69: ;
    eax = ebp;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x508);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0016BB93;

loc_0016BB75: ;
    eax = ebp;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016BB91; /* je: equal / zero */

loc_0016BB7D: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016BB91; /* je: equal / zero */

loc_0016BB81: ;
    _fa = (uint32_t)(MEM8(ecx + eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016BB91; /* je: equal / zero */

loc_0016BB87: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0xCC);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0016BB93;

loc_0016BB91: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0016BB93: ;
    MEM32(esp + 0x14) = eax;
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x44;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 5;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0016BBA1: ;
    MEM32(eax + -60) = edx;
    MEM32(eax) = edx;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0016BBA1; /* jne: not equal / not zero */

loc_0016BBAC: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0016BD92; /* jge: greater or equal (signed >=) */

loc_0016BBB4: ;
    _fa = (uint32_t)(MEM16(esp + 0x20)) & 0xFFFFu; _fb = (uint32_t)(LO16(edx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esp + 0x20), LO16(edx) (16-bit) */
    ecx = MEM32(0x510044);
    edx = MEM32(0x51004C);
    if (CMP_LE(_fas, _fbs)) goto loc_0016BC44; /* jle: less or equal (signed <=) */

loc_0016BBC7: ;
    esi = MEM32(esp + 0x18);
    ebx = ZX16(MEM16(esp + 0x20));
    esi = esi << 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x67E010) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x67E010;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    /* nop */

loc_0016BBE0: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016BBF6; /* je: equal / zero */

loc_0016BBE4: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016BBF6; /* je: equal / zero */

loc_0016BBE8: ;
    _fa = (uint32_t)(MEM16(edx + ebp)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edx + ebp), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016BBF6; /* je: equal / zero */

loc_0016BBEF: ;
    eax = edi + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0016BBFE; /* jne: not equal / not zero */

loc_0016BBF6: ;
    MEM32(esi) = 0xBF800000u;
    goto loc_0016BC25;

loc_0016BBFE: ;
    ecx = MEM32(esp + 0x14);
    _fb = (uint32_t)(0x88) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x88;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    _fb = (uint32_t)(0x88) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x88;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0016BC14u); RECOMP_ABI_CALL(0x0015C2C0u, sub_0015C2C0); /* call 0x0015C2C0 */

loc_0016BC14: ;
    MEMF(esi) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(0x51004C);
    ecx = MEM32(0x510044);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0016BC25: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 2;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x508) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x508;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0016BBE0; /* jne: not equal / not zero */

loc_0016BC34: ;
    edx = MEM32(0x51004C);
    ecx = MEM32(0x510044);
    ebx = MEM32(esp + 0x28);

loc_0016BC44: ;
    edi = MEM32(esp + 0x18);
    ebp = MEM32(esp + 0x20);
    eax = edi;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x104);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi = LO16(ebp);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    MEM32(eax + 0x67E010) = 0xBF800000u;
    if (CMP_GE(_fas, _fbs)) goto loc_0016BCEB; /* jge: greater or equal (signed >=) */

loc_0016BC6A: ;
    edi = edi << 6;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    /* nop */

loc_0016BC70: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016BCD1; /* je: equal / zero */

loc_0016BC74: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016BCD1; /* je: equal / zero */

loc_0016BC78: ;
    _fa = (uint32_t)(MEM16(edx + esi * 2)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edx + esi * 2), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016BCD1; /* je: equal / zero */

loc_0016BC7F: ;
    eax = esi;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x508);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fa == 0)) goto loc_0016BCD1; /* je: equal / zero */

loc_0016BC8B: ;
    _fa = (uint32_t)(MEM16(edx + esi * 2)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edx + esi * 2), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016BC9E; /* je: equal / zero */

loc_0016BC92: ;
    eax = esi;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x508);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0016BCA0;

loc_0016BC9E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0016BCA0: ;
    ecx = MEM32(esp + 0x14);
    _fb = (uint32_t)(0x88) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x88;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    _fb = (uint32_t)(0x88) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x88;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0016BCB6u); RECOMP_ABI_CALL(0x0015C2C0u, sub_0015C2C0); /* call 0x0015C2C0 */

loc_0016BCB6: ;
    ecx = MEM32(0x510044);
    edx = edi + esi;
    MEMF(edx * 4 + 0x67E010) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(0x51004C);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0016BCDF;

loc_0016BCD1: ;
    eax = edi + esi;
    MEM32(eax * 4 + 0x67E010) = 0xBF800000u;

loc_0016BCDF: ;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi = LO16(ebp);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0016BC70; /* jl: less (signed <) */

loc_0016BCE7: ;
    edi = MEM32(esp + 0x18);

loc_0016BCEB: ;
    eax = MEM32(esp + 0x2C);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0016C010; /* jle: less or equal (signed <=) */

loc_0016BCF9: ;
    ecx = MEM32(0x710864);
    edx = MEM32(0x710860);
    edi = edi << 6;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_0016BD10: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016BD71; /* je: equal / zero */

loc_0016BD14: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016BD71; /* je: equal / zero */

loc_0016BD18: ;
    _fa = (uint32_t)(MEM8(edx + esi)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx + esi), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016BD71; /* je: equal / zero */

loc_0016BD1E: ;
    eax = esi;
    eax = (uint32_t)((int32_t)eax * (int32_t)0xCC);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fa == 0)) goto loc_0016BD71; /* je: equal / zero */

loc_0016BD2A: ;
    _fa = (uint32_t)(MEM8(edx + esi)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx + esi), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016BD3C; /* je: equal / zero */

loc_0016BD30: ;
    eax = esi;
    eax = (uint32_t)((int32_t)eax * (int32_t)0xCC);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0016BD3E;

loc_0016BD3C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0016BD3E: ;
    ecx = MEM32(esp + 0x14);
    _fb = (uint32_t)(0x88) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x88;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    _fb = (uint32_t)(0x88) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x88;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0016BD54u); RECOMP_ABI_CALL(0x0015C2C0u, sub_0015C2C0); /* call 0x0015C2C0 */

loc_0016BD54: ;
    ecx = MEM32(0x710864);
    edx = edi + esi;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(edx * 4 + 0x67E010) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(0x710860);
    goto loc_0016BD81;

loc_0016BD71: ;
    eax = edi + esi;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax * 4 + 0x67E010) = 0xBF800000u;

loc_0016BD81: ;
    eax = MEM32(esp + 0x2C);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi = LO16(ebp);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0016BD10; /* jl: less (signed <) */

loc_0016BD8D: ;
    goto loc_0016C010;

loc_0016BD92: ;
    eax = MEM32(esp + 0x20);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi = SX16(LO16(eax));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    MEM32(esp + 0x1C) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_0016BE71; /* jge: greater or equal (signed >=) */

loc_0016BDA6: ;
    ecx = MEM32(0x510044);
    edx = MEM32(0x51004C);
    edi = ebp;
    edi = edi << 6;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */

loc_0016BDB7: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016BDD2; /* je: equal / zero */

loc_0016BDBB: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016BDD2; /* je: equal / zero */

loc_0016BDBF: ;
    _fa = (uint32_t)(MEM16(edx + esi * 2)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edx + esi * 2), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016BDD2; /* je: equal / zero */

loc_0016BDC6: ;
    eax = esi;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x508);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fa != 0)) goto loc_0016BDE2; /* jne: not equal / not zero */

loc_0016BDD2: ;
    eax = edi + esi;
    MEM32(eax * 4 + 0x67E010) = 0xBF800000u;
    goto loc_0016BE5D;

loc_0016BDE2: ;
    eax = (uint32_t)(int32_t)SMEM16(0x682010);
    ebp = esi;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebp = ebp - eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ebp = ebp & 0x80000001u;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fas >= 0)) goto loc_0016BDFA; /* jns: not sign (positive) */

loc_0016BDF5: ;
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebp = ebp | 0xFFFFFFFEu;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0016BDFA: ;
    if ((ebp != 0)) goto loc_0016BE19; /* jne: not equal / not zero */

loc_0016BDFC: ;
    ebp = MEM32(esp + 0x18);
    eax = esi;
    eax = eax << 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(eax * 4 + 0x67E010);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi * 4 + 0x67E010) = eax;
    goto loc_0016BE5D;

loc_0016BE19: ;
    _fa = (uint32_t)(MEM16(edx + esi * 2)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edx + esi * 2), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016BE2C; /* je: equal / zero */

loc_0016BE20: ;
    eax = esi;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x508);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0016BE2E;

loc_0016BE2C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0016BE2E: ;
    ecx = MEM32(esp + 0x14);
    _fb = (uint32_t)(0x88) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x88;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    _fb = (uint32_t)(0x88) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x88;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0016BE44u); RECOMP_ABI_CALL(0x0015C2C0u, sub_0015C2C0); /* call 0x0015C2C0 */

loc_0016BE44: ;
    ecx = MEM32(0x510044);
    edx = edi + esi;
    MEMF(edx * 4 + 0x67E010) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(0x51004C);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0016BE5D: ;
    eax = MEM32(esp + 0x1C);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi = SX16(LO16(eax));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    MEM32(esp + 0x1C) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_0016BDB7; /* jl: less (signed <) */

loc_0016BE71: ;
    edi = MEM32(esp + 0x18);
    edx = MEM32(0x710860);
    ecx = MEM32(0x710864);
    ebp = edi;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebp = ebp - ebx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, esi (32-bit) */
    MEM32(esp + 0x1C) = esi;
    if (CMP_LE(_fas, _fbs)) goto loc_0016BF67; /* jle: less or equal (signed <=) */

loc_0016BE93: ;
    edi = edi << 6;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */

loc_0016BE96: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016BEB0; /* je: equal / zero */

loc_0016BE9A: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016BEB0; /* je: equal / zero */

loc_0016BE9E: ;
    _fa = (uint32_t)(MEM8(esi + edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016BEB0; /* je: equal / zero */

loc_0016BEA4: ;
    eax = esi;
    eax = (uint32_t)((int32_t)eax * (int32_t)0xCC);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fa != 0)) goto loc_0016BEC5; /* jne: not equal / not zero */

loc_0016BEB0: ;
    eax = edi + esi;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax * 4 + 0x67E010) = 0xBF800000u;
    goto loc_0016BF4F;

loc_0016BEC5: ;
    eax = (uint32_t)(int32_t)SMEM16(0x682010);
    ebx = esi;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ebx = ebx & 0x80000001u;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fas >= 0)) goto loc_0016BEDD; /* jns: not sign (positive) */

loc_0016BED8: ;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = ebx | 0xFFFFFFFEu;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0016BEDD: ;
    if ((ebx != 0)) goto loc_0016BF06; /* jne: not equal / not zero */

loc_0016BEDF: ;
    eax = MEM32(esp + 0x28);
    ebx = MEM32(esp + 0x18);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax << 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = MEM32(esp + 0x28);
    eax = MEM32(eax * 4 + 0x67E010);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ebx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi * 4 + 0x67E010) = eax;
    goto loc_0016BF4F;

loc_0016BF06: ;
    _fa = (uint32_t)(MEM8(esi + edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016BF18; /* je: equal / zero */

loc_0016BF0C: ;
    eax = esi;
    eax = (uint32_t)((int32_t)eax * (int32_t)0xCC);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0016BF1A;

loc_0016BF18: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0016BF1A: ;
    ecx = MEM32(esp + 0x14);
    _fb = (uint32_t)(0x88) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x88;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    _fb = (uint32_t)(0x88) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x88;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0016BF30u); RECOMP_ABI_CALL(0x0015C2C0u, sub_0015C2C0); /* call 0x0015C2C0 */

loc_0016BF30: ;
    ebx = MEM32(esp + 0x30);
    ecx = MEM32(0x710864);
    edx = edi + esi;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(edx * 4 + 0x67E010) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(0x710860);

loc_0016BF4F: ;
    eax = MEM32(esp + 0x1C);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi = SX16(LO16(eax));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    MEM32(esp + 0x1C) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_0016BE96; /* jl: less (signed <) */

loc_0016BF63: ;
    edi = MEM32(esp + 0x18);

loc_0016BF67: ;
    eax = MEM32(esp + 0x2C);
    edi = (uint32_t)((int32_t)edi * (int32_t)0x104);
    MEM32(edi + 0x67E010) = 0xBF800000u;
    edi = MEM32(esp + 0x20);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - ebx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi = SX16(LO16(edi));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0016C010; /* jge: greater or equal (signed >=) */

loc_0016BF8D: ;
    ebp = MEM32(esp + 0x18);
    ebp = ebp << 6;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */

loc_0016BF94: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016BFF4; /* je: equal / zero */

loc_0016BF98: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016BFF4; /* je: equal / zero */

loc_0016BF9C: ;
    _fa = (uint32_t)(MEM8(esi + edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016BFF4; /* je: equal / zero */

loc_0016BFA2: ;
    eax = esi;
    eax = (uint32_t)((int32_t)eax * (int32_t)0xCC);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fa == 0)) goto loc_0016BFF4; /* je: equal / zero */

loc_0016BFAE: ;
    _fa = (uint32_t)(MEM8(esi + edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016BFC0; /* je: equal / zero */

loc_0016BFB4: ;
    eax = esi;
    eax = (uint32_t)((int32_t)eax * (int32_t)0xCC);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0016BFC2;

loc_0016BFC0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0016BFC2: ;
    _fb = (uint32_t)(0x88) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x88;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x18);
    _fb = (uint32_t)(0x88) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x88;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0016BFD7u); RECOMP_ABI_CALL(0x0015C2C0u, sub_0015C2C0); /* call 0x0015C2C0 */

loc_0016BFD7: ;
    edx = MEM32(0x710860);
    ecx = esi + ebp;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(ecx * 4 + 0x67E010) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(0x710864);
    goto loc_0016C004;

loc_0016BFF4: ;
    eax = esi + ebp;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax * 4 + 0x67E010) = 0xBF800000u;

loc_0016C004: ;
    eax = MEM32(esp + 0x2C);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi = SX16(LO16(edi));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0016BF94; /* jl: less (signed <) */

loc_0016C010: ;
    eax = MEM32(esp + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x1C) = 0;
    if (CMP_LE(_fas, _fbs)) goto loc_0016C219; /* jle: less or equal (signed <=) */

loc_0016C024: ;
    eax = MEM32(esp + 0x18);
    eax = eax << 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(esp + 0x18) = eax;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0016C031: ;
    edx = MEM32(esp + 0x18);
    ebx = edx + ecx;
    fp_push(MEMF(ebx * 4 + 0x67E010)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x4964E8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x4964e8] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0016C203; /* jnp: not parity */

loc_0016C050: ;
    eax = MEM32(esp + 0x28);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0016C08C; /* jge: greater or equal (signed >=) */

loc_0016C058: ;
    eax = MEM32(0x51004C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016C083; /* je: equal / zero */

loc_0016C061: ;
    edx = MEM32(0x510044);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016C083; /* je: equal / zero */

loc_0016C06B: ;
    _fa = (uint32_t)(MEM16(eax + ecx * 2)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + ecx * 2), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016C083; /* je: equal / zero */

loc_0016C072: ;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x508);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = ecx;
    MEM8(esp + 0x13) = 1;
    goto loc_0016C0BA;

loc_0016C083: ;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(esp + 0x13) = 1;
    goto loc_0016C0BA;

loc_0016C08C: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x710860);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016C0B3; /* je: equal / zero */

loc_0016C097: ;
    edx = MEM32(0x710864);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016C0B3; /* je: equal / zero */

loc_0016C0A1: ;
    _fa = (uint32_t)(MEM8(ecx + eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016C0B3; /* je: equal / zero */

loc_0016C0A7: ;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0xCC);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = ecx;
    goto loc_0016C0B5;

loc_0016C0B3: ;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0016C0B5: ;
    MEM8(esp + 0x13) = 0;

loc_0016C0BA: ;
    eax = MEM32(ebp + 0x84);
    esi = MEM32(esp + 0x14);
    ecx = MEM32(esi + 0x84);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = 0x6997D8;
    PUSH32(esp, 0x0016C0D6u); RECOMP_ABI_CALL(0x00196260u, sub_00196260); /* call 0x00196260 */

loc_0016C0D6: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    ecx = esi + 8;
    if (CMP_NE(_fa, _fb)) goto loc_0016C0E0; /* jne: not equal / not zero */

loc_0016C0DD: ;
    ecx = esi + 0x44;

loc_0016C0E0: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0016C0E2: ;
    eax = SX16(LO16(esi));
    edx = eax + eax * 2;
    eax = MEM32(ecx + edx * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    edx = ecx + edx * 4;
    if (CMP_EQ(_fa, _fb)) goto loc_0016C1E7; /* je: equal / zero */

loc_0016C0F6: ;
    fp_push(MEMF(edx + 8)); /* fld float */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ebx * 4 + 0x67E010)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ebx*4 + 0x67e010] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    if (CMP_NE(_fa, _fb)) goto loc_0016C160; /* jne: not equal / not zero */

loc_0016C106: ;
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0016C175; /* jp: parity */

loc_0016C10B: ;
    fp_push(MEMF(edx + 0x14)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ebx * 4 + 0x67E010)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ebx*4 + 0x67e010] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0016C175; /* je: equal / zero */

loc_0016C11C: ;
    edx = esi + 1;
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(5) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), 5 (16-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0016C157; /* jge: greater or equal (signed >=) */

loc_0016C125: ;
    eax = SX16(LO16(edx));
    edi = 5;
    eax = eax + eax * 2;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = ecx + eax * 4 + -4;
    edi = ZX16(LO16(edi));
    /* nop */

loc_0016C140: ;
    edx = MEM32(eax + 0xC);
    MEM32(eax) = edx;
    edx = MEM32(eax + 4);
    MEM32(eax + -8) = edx;
    SET_LO8(edx, MEM8(eax + 8));
    MEM8(eax + -4) = LO8(edx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0016C140; /* jne: not equal / not zero */

loc_0016C157: ;
    MEM32(ecx + 0x30) = 0;
    goto loc_0016C165;

loc_0016C160: ;
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0016C188; /* jp: parity */

loc_0016C165: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO16(esi)) & 0xFFFFu; _fb = (uint32_t)(5) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(esi), 5 (16-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0016C0E2; /* jl: less (signed <) */

loc_0016C170: ;
    goto loc_0016C203;

loc_0016C175: ;
    edx = MEM32(ebx * 4 + 0x67E010);
    eax = SX16(LO16(esi));
    eax = eax + eax * 2;
    MEM32(ecx + eax * 4 + 8) = edx;
    goto loc_0016C203;

loc_0016C188: ;
    edx = esi + 1;
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(5) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), 5 (16-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0016C1B0; /* jge: greater or equal (signed >=) */

loc_0016C191: ;
    eax = SX16(LO16(edx));
    eax = eax + eax * 2;
    eax = MEM32(ecx + eax * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016C1AB; /* je: equal / zero */

loc_0016C19E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016C1AB; /* je: equal / zero */

loc_0016C1A2: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(5) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), 5 (16-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0016C191; /* jl: less (signed <) */

loc_0016C1A9: ;
    goto loc_0016C1B0;

loc_0016C1AB: ;
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), 0 (16-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0016C1B5; /* jge: greater or equal (signed >=) */

loc_0016C1B0: ;
    edx = 4;

loc_0016C1B5: ;
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(LO16(esi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), LO16(esi) (16-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0016C1E7; /* jle: less or equal (signed <=) */

loc_0016C1BA: ;
    eax = SX16(LO16(edx));
    eax = eax + eax * 2;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = ecx + eax * 4 + 8;
    edi = ZX16(LO16(edx));
    /* nop */

loc_0016C1D0: ;
    edx = MEM32(eax + -12);
    MEM32(eax) = edx;
    edx = MEM32(eax + -20);
    MEM32(eax + -8) = edx;
    SET_LO8(edx, MEM8(eax + -16));
    MEM8(eax + -4) = LO8(edx);
    _fb = (uint32_t)(0xFFFFFFF4u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFF4u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0016C1D0; /* jne: not equal / not zero */

loc_0016C1E7: ;
    SET_LO8(edx, MEM8(esp + 0x13));
    eax = SX16(LO16(esi));
    eax = eax + eax * 2;
    eax = ecx + eax * 4;
    ecx = MEM32(ebx * 4 + 0x67E010);
    MEM32(eax + 8) = ecx;
    MEM32(eax) = ebp;
    MEM8(eax + 4) = LO8(edx);

loc_0016C203: ;
    eax = MEM32(esp + 0x1C);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = SX16(LO16(eax));
    MEM32(esp + 0x1C) = eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esp + 0x24) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0016C031; /* jl: less (signed <) */

loc_0016C219: ;
    eax = MEM32(esp + 0x20);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = SX16(LO16(eax));
    MEM32(esp + 0x20) = eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, MEM32(esp + 0x24) (32-bit) */
    MEM32(esp + 0x18) = ebp;
    if (CMP_L(_fas, _fbs)) goto loc_0016BA8A; /* jl: less (signed <) */

loc_0016C235: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);

loc_0016C238: ;
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
 * sub_0016C240
 * Original: 0x0016C240 - 0x0016C25E (30 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016C240(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0016C240: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0016C248u); RECOMP_ABI_CALL(0x0016B120u, sub_0016B120); /* call 0x0016B120 */

loc_0016C248: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0016C258; /* je: equal / zero */

loc_0016C24F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0016C255u); RECOMP_ABI_CALL(0x000EB425u, sub_000EB425); /* call 0x000EB425 */

loc_0016C255: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0016C258: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0016C260
 * Original: 0x0016C260 - 0x0016C2DD (125 bytes, 45 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016C260(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0016C260: ;
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(esp + 8));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 2 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_0016C2AE; /* je: equal / zero */

loc_0016C26D: ;
    eax = MEM32(esi + -4);
    PUSH32(esp, edi);
    PUSH32(esp, 0x16B190);
    edi = esi + -4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x508);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0016C285u); RECOMP_ABI_CALL(0x000EBA6Cu, sub_000EBA6C); /* call 0x000EBA6C */

loc_0016C285: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0016C2A6; /* je: equal / zero */

loc_0016C28A: ;
    ecx = MEM32(0x50630C);
    PUSH32(esp, 0x49);
    PUSH32(esp, 0x4AEF38);
    PUSH32(esp, 0x4AEEE8);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0016C2A3u); RECOMP_ABI_CALL(0x001031A0u, sub_001031A0); /* call 0x001031A0 */

loc_0016C2A3: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0016C2A6: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_0016C2AE: ;
    ecx = esi;
    PUSH32(esp, 0x0016C2B5u); RECOMP_ABI_CALL(0x0016B190u, sub_0016B190); /* call 0x0016B190 */

loc_0016C2B5: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0016C2D6; /* je: equal / zero */

loc_0016C2BA: ;
    edx = MEM32(0x50630C);
    PUSH32(esp, 0x49);
    PUSH32(esp, 0x4AEF08);
    PUSH32(esp, 0x4AEEE8);
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0016C2D3u); RECOMP_ABI_CALL(0x001031A0u, sub_001031A0); /* call 0x001031A0 */

loc_0016C2D3: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0016C2D6: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0016C2E0
 * Original: 0x0016C2E0 - 0x0016C2E9 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016C2E0(void)
{

loc_0016C2E0: ;
    eax = ecx;
    MEM32(eax) = 0x4AEF9C;
    esp += 4; return; /* ret */

}

/**
 * sub_0016C2F0
 * Original: 0x0016C2F0 - 0x0016C2F8 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016C2F0(void)
{

loc_0016C2F0: ;
    eax = (uint32_t)(int32_t)SMEM16(ecx + 0xD0);
    esp += 4; return; /* ret */

}

/**
 * sub_0016C300
 * Original: 0x0016C300 - 0x0016C4B8 (440 bytes, 105 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016C300(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0016C300: ;
    eax = MEM32(0x5142A4);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    PUSH32(esp, edi);
    esi = ecx;
    if (CMP_LE(_fas, _fbs)) goto loc_0016C348; /* jle: less or equal (signed <=) */

loc_0016C313: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebp = 0x1400;
    /* nop */

loc_0016C320: ;
    eax = MEM32(esi + 4);
    edx = MEM32(eax + edi);
    ecx = eax + edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x0016C32Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0016C329u); } /* indirect call */
    }

loc_0016C32C: ;
    eax = MEM32(esi + 4);
    MEM32(eax + edi + 0xB8) = ebp;
    eax = MEM32(0x5142A4);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x508) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x508;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0016C320; /* jl: less (signed <) */

loc_0016C346: ;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0016C348: ;
    ecx = esi;
    PUSH32(esp, 0x0016C34Fu); RECOMP_ABI_CALL(0x0016B630u, sub_0016B630); /* call 0x0016B630 */

loc_0016C34F: ;
    MEM32(esi + 0x1C) = eax;
    MEM32(eax + 0x31C) = 0x5D1AB8;
    eax = MEM32(esi + 0x1C);
    ecx = MEM32(eax + 0x31C);
    MEM32(ecx + 0x200) = eax;
    edx = MEM32(esi + 0x28);
    edi = 1;
    MEM16(edx + 2) = LO16(edi);
    eax = MEM32(esi + 0x1C);
    MEM16(eax + 0xD0) = LO16(edi);
    MEM32(0x5D1D28) = edi;
    MEM32(0x69AD20) = ebp;
    ecx = MEM32(esi + 0x1C);
    MEM16(ecx + 0xD2) = LO16(edi);
    edx = MEM32(esi + 0x1C);
    ebx = 0x500;
    MEM32(edx + 0x370) = ebx;
    eax = MEM32(esi + 0x1C);
    ecx = MEM32(eax + 0x370);
    MEM32(eax + 0x368) = ecx;
    edx = MEM32(esi + 0x1C);
    MEM16(edx + 0x360) = LO16(ebp);
    _fa = (uint32_t)(MEM16(esi + 0x18)) & 0xFFFFu; _fb = (uint32_t)(LO16(edi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 0x18), LO16(edi) (16-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0016C42B; /* jle: less or equal (signed <=) */

loc_0016C3C4: ;
    ecx = esi;
    PUSH32(esp, 0x0016C3CBu); RECOMP_ABI_CALL(0x0016B630u, sub_0016B630); /* call 0x0016B630 */

loc_0016C3CB: ;
    MEM32(esi + 0x20) = eax;
    MEM32(eax + 0x31C) = 0x5D4CF0;
    eax = MEM32(esi + 0x20);
    ecx = MEM32(eax + 0x31C);
    MEM32(ecx + 0x200) = eax;
    edx = MEM32(esi + 0x20);
    eax = 2;
    MEM16(edx + 0xD0) = LO16(eax);
    ecx = MEM32(esi + 0x28);
    MEM16(ecx + 4) = LO16(edi);
    MEM32(0x5D4F60) = edi;
    MEM32(0x69CE40) = ebp;
    edx = MEM32(esi + 0x20);
    MEM16(edx + 0xD2) = LO16(eax);
    eax = MEM32(esi + 0x20);
    MEM32(eax + 0x370) = ebx;
    eax = MEM32(esi + 0x20);
    ecx = MEM32(eax + 0x370);
    MEM32(eax + 0x368) = ecx;

loc_0016C42B: ;
    SET_LO16(eax, MEM16(esi + 0x18));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(2) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 2 (16-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0016C4B3; /* jle: less or equal (signed <=) */

loc_0016C435: ;
    edi = 3;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(LO16(edi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), LO16(edi) (16-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0016C4B3; /* jl: less (signed <) */

loc_0016C43F: ;
    ebx = 0x5D7F28;
    ebp = 0x69EF60;
    /* nop */

loc_0016C450: ;
    ecx = esi;
    PUSH32(esp, 0x0016C457u); RECOMP_ABI_CALL(0x0016B630u, sub_0016B630); /* call 0x0016B630 */

loc_0016C457: ;
    MEM32(eax + 0x31C) = ebx;
    MEM32(ebx + 0x200) = eax;
    MEM16(eax + 0xD0) = LO16(edi);
    edx = MEM32(esi + 0x28);
    MEM16(edx + edi * 2) = 1;
    MEM32(ebx + 0x270) = 1;
    MEM32(ebp) = 0;
    ecx = 0x500;
    MEM16(eax + 0xD2) = 2;
    MEM32(eax + 0x370) = ecx;
    MEM32(eax + 0x368) = ecx;
    eax = (uint32_t)(int32_t)SMEM16(esi + 0x18);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x3238) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x3238;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x2120) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x2120;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0016C450; /* jle: less or equal (signed <=) */

loc_0016C4B3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0016C311
 * Original: 0x0016C311 - 0x0016C4B8 (423 bytes, 96 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016C311(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0016C311: ;
    if (_flags /* jle: less or equal (signed <=) */) goto loc_0016C348;

loc_0016C313: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebp = 0x1400;
    /* nop */

loc_0016C320: ;
    eax = MEM32(esi + 4);
    edx = MEM32(eax + edi);
    ecx = eax + edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x0016C32Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0016C329u); } /* indirect call */
    }

loc_0016C32C: ;
    eax = MEM32(esi + 4);
    MEM32(eax + edi + 0xB8) = ebp;
    eax = MEM32(0x5142A4);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x508) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x508;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0016C320; /* jl: less (signed <) */

loc_0016C346: ;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0016C348: ;
    ecx = esi;
    PUSH32(esp, 0x0016C34Fu); RECOMP_ABI_CALL(0x0016B630u, sub_0016B630); /* call 0x0016B630 */

loc_0016C34F: ;
    MEM32(esi + 0x1C) = eax;
    MEM32(eax + 0x31C) = 0x5D1AB8;
    eax = MEM32(esi + 0x1C);
    ecx = MEM32(eax + 0x31C);
    MEM32(ecx + 0x200) = eax;
    edx = MEM32(esi + 0x28);
    edi = 1;
    MEM16(edx + 2) = LO16(edi);
    eax = MEM32(esi + 0x1C);
    MEM16(eax + 0xD0) = LO16(edi);
    MEM32(0x5D1D28) = edi;
    MEM32(0x69AD20) = ebp;
    ecx = MEM32(esi + 0x1C);
    MEM16(ecx + 0xD2) = LO16(edi);
    edx = MEM32(esi + 0x1C);
    ebx = 0x500;
    MEM32(edx + 0x370) = ebx;
    eax = MEM32(esi + 0x1C);
    ecx = MEM32(eax + 0x370);
    MEM32(eax + 0x368) = ecx;
    edx = MEM32(esi + 0x1C);
    MEM16(edx + 0x360) = LO16(ebp);
    _fa = (uint32_t)(MEM16(esi + 0x18)) & 0xFFFFu; _fb = (uint32_t)(LO16(edi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 0x18), LO16(edi) (16-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0016C42B; /* jle: less or equal (signed <=) */

loc_0016C3C4: ;
    ecx = esi;
    PUSH32(esp, 0x0016C3CBu); RECOMP_ABI_CALL(0x0016B630u, sub_0016B630); /* call 0x0016B630 */

loc_0016C3CB: ;
    MEM32(esi + 0x20) = eax;
    MEM32(eax + 0x31C) = 0x5D4CF0;
    eax = MEM32(esi + 0x20);
    ecx = MEM32(eax + 0x31C);
    MEM32(ecx + 0x200) = eax;
    edx = MEM32(esi + 0x20);
    eax = 2;
    MEM16(edx + 0xD0) = LO16(eax);
    ecx = MEM32(esi + 0x28);
    MEM16(ecx + 4) = LO16(edi);
    MEM32(0x5D4F60) = edi;
    MEM32(0x69CE40) = ebp;
    edx = MEM32(esi + 0x20);
    MEM16(edx + 0xD2) = LO16(eax);
    eax = MEM32(esi + 0x20);
    MEM32(eax + 0x370) = ebx;
    eax = MEM32(esi + 0x20);
    ecx = MEM32(eax + 0x370);
    MEM32(eax + 0x368) = ecx;

loc_0016C42B: ;
    SET_LO16(eax, MEM16(esi + 0x18));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(2) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 2 (16-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0016C4B3; /* jle: less or equal (signed <=) */

loc_0016C435: ;
    edi = 3;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(LO16(edi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), LO16(edi) (16-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0016C4B3; /* jl: less (signed <) */

loc_0016C43F: ;
    ebx = 0x5D7F28;
    ebp = 0x69EF60;
    /* nop */

loc_0016C450: ;
    ecx = esi;
    PUSH32(esp, 0x0016C457u); RECOMP_ABI_CALL(0x0016B630u, sub_0016B630); /* call 0x0016B630 */

loc_0016C457: ;
    MEM32(eax + 0x31C) = ebx;
    MEM32(ebx + 0x200) = eax;
    MEM16(eax + 0xD0) = LO16(edi);
    edx = MEM32(esi + 0x28);
    MEM16(edx + edi * 2) = 1;
    MEM32(ebx + 0x270) = 1;
    MEM32(ebp) = 0;
    ecx = 0x500;
    MEM16(eax + 0xD2) = 2;
    MEM32(eax + 0x370) = ecx;
    MEM32(eax + 0x368) = ecx;
    eax = (uint32_t)(int32_t)SMEM16(esi + 0x18);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x3238) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x3238;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x2120) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x2120;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0016C450; /* jle: less or equal (signed <=) */

loc_0016C4B3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0016C4C0
 * Original: 0x0016C4C0 - 0x0016C543 (131 bytes, 47 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016C4C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0016C4C0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(0x5142A4);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0016C53E; /* jle: less or equal (signed <=) */

loc_0016C4D0: ;
    eax = MEM32(esi + 4);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10);

loc_0016C4D8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016C4EC; /* je: equal / zero */

loc_0016C4DC: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x508) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x508;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0016C4D8; /* jl: less (signed <) */

loc_0016C4E6: ;
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0016C4EC: ;
    PUSH32(esp, ebx);
    ecx = 0x6DAE68;
    PUSH32(esp, 0x0016C4F7u); RECOMP_ABI_CALL(0x001D1060u, sub_001D1060); /* call 0x001D1060 */

loc_0016C4F7: ;
    eax = MEM32(ebx + 0x31C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016C509; /* je: equal / zero */

loc_0016C501: ;
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x0016C509u); RECOMP_ABI_CALL(0x0016B6B0u, sub_0016B6B0); /* call 0x0016B6B0 */

loc_0016C509: ;
    eax = MEM32(esi + 0xC);
    MEM16(eax + edi * 2) = 0;
    edx = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x0016C519u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0016C516u); } /* indirect call */
    }

loc_0016C519: ;
    MEM16(esi + 0x12) = MEM16(esi + 0x12) - 1;
    _fa = (uint32_t)(MEM16(esi + 0x12)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(esi + 0x12)) & 0xFFFFu; _fb = (uint32_t)(2) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 0x12), 2 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0016C53D; /* jne: not equal / not zero */

loc_0016C524: ;
    MEM16(0x514388) = 0;
    eax = MEM32(esi + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016C53D; /* je: equal / zero */

loc_0016C534: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = eax; PUSH32(esp, 0x0016C536u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0016C534u); } /* indirect call */
    }

loc_0016C536: ;
    MEM32(esi + 0x2C) = 0;

loc_0016C53D: ;
    POP32(esp, ebx);

loc_0016C53E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0016C550
 * Original: 0x0016C550 - 0x0016C6CC (380 bytes, 123 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0016C550(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0016C550: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x0016C55Fu); RECOMP_ABI_CALL(0x0017B460u, sub_0017B460); /* call 0x0017B460 */

loc_0016C55F: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    MEM32(esp + 0xC) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0016C58C; /* je: equal / zero */

loc_0016C56B: ;
    SET_LO8(ecx, MEM8(0x5AC504));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0016C57F; /* jne: not equal / not zero */

loc_0016C575: ;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0016C57Cu); RECOMP_ABI_CALL(0x00011B40u, sub_00011B40); /* call 0x00011B40 */

loc_0016C57C: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0016C57F: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0016C585u); RECOMP_ABI_CALL(0x001C1580u, sub_001C1580); /* call 0x001C1580 */

loc_0016C585: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0016C592; /* jne: not equal / not zero */

loc_0016C58C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebp);
    esp += 20; return; /* ret 16 */

loc_0016C592: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x14);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0016C59E; /* jne: not equal / not zero */

loc_0016C59C: ;
    ebx = ebp;

loc_0016C59E: ;
    PUSH32(esp, esi);
    ecx = 0x510040;
    PUSH32(esp, 0x0016C5A9u); RECOMP_ABI_CALL(0x0016B630u, sub_0016B630); /* call 0x0016B630 */

loc_0016C5A9: ;
    esi = eax;
    PUSH32(esp, esi);
    ecx = 0x510040;
    PUSH32(esp, 0x0016C5B6u); RECOMP_ABI_CALL(0x0016B3C0u, sub_0016B3C0); /* call 0x0016B3C0 */

loc_0016C5B6: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0016C5CE; /* jne: not equal / not zero */

loc_0016C5BB: ;
    PUSH32(esp, esi);
    ecx = 0x510040;
    PUSH32(esp, 0x0016C5C6u); RECOMP_ABI_CALL(0x0016C4C0u, sub_0016C4C0); /* call 0x0016C4C0 */

loc_0016C5C6: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebp);
    esp += 20; return; /* ret 16 */

loc_0016C5CE: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0016C5D6u); RECOMP_ABI_CALL(0x001836C0u, sub_001836C0); /* call 0x001836C0 */

loc_0016C5D6: ;
    ecx = MEM32(esp + 0x24);
    edx = MEM32(eax);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0016C5E5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0016C5E2u); } /* indirect call */
    }

loc_0016C5E5: ;
    edi = eax;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x0016C5EFu); RECOMP_ABI_CALL(0x0018EB40u, sub_0018EB40); /* call 0x0018EB40 */

loc_0016C5EF: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x0016C5F6u); RECOMP_ABI_CALL(0x001836C0u, sub_001836C0); /* call 0x001836C0 */

loc_0016C5F6: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0016C5FCu); RECOMP_ABI_CALL(0x00184160u, sub_00184160); /* call 0x00184160 */

loc_0016C5FC: ;
    edx = MEM32(esp + 0x20);
    PUSH32(esp, edx);
    MEM32(edi + 0x94) = eax;
    eax = MEM32(esi + 0x31C);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    MEM16(esi + 0x360) = LO16(ebp);
    PUSH32(esp, 0x0016C61Bu); RECOMP_ABI_CALL(0x001D7880u, sub_001D7880); /* call 0x001D7880 */

loc_0016C61B: ;
    ecx = MEM32(esi + 0x31C);
    MEM16(ecx + 0x2424) = 1;
    edx = MEM32(esi + 0x31C);
    eax = MEM32(edx + 0x68);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0016C63Bu); RECOMP_ABI_CALL(0x0019B1F0u, sub_0019B1F0); /* call 0x0019B1F0 */

loc_0016C63B: ;
    ecx = MEM32(esi + 0x31C);
    ebp = MEM32(esp + 0x30);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(ecx + 0x1DFE) = LO16(ebx);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0016C657u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0016C654u); } /* indirect call */
    }

loc_0016C657: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x0016C65Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0016C65Bu); } /* indirect call */
    }

loc_0016C65E: ;
    ecx = esi + 0x98;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0016C66Au); RECOMP_ABI_CALL(0x00170700u, sub_00170700); /* call 0x00170700 */

loc_0016C66A: ;
    MEM16(edi + 0xDC) = LO16(ebx);
    edx = MEM32(0x51005C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x0016C682u); RECOMP_ABI_CALL(0x0018EB60u, sub_0018EB60); /* call 0x0018EB60 */

loc_0016C682: ;
    PUSH32(esp, 0x400);
    ecx = edi;
    PUSH32(esp, 0x0016C68Eu); RECOMP_ABI_CALL(0x00195F50u, sub_00195F50); /* call 0x00195F50 */

loc_0016C68E: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0016C697u); RECOMP_ABI_CALL(0x001836C0u, sub_001836C0); /* call 0x001836C0 */

loc_0016C697: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax;
    PUSH32(esp, 0x0016C6A1u); RECOMP_ABI_CALL(0x00014444u, sub_00014444); /* call 0x00014444 */

loc_0016C6A1: ;
    MEM16(0x514388) = 1;
    PUSH32(esp, ebp);
    ecx = edi;
    MEM32(edi + 0x8C) = 0x19F690;
    PUSH32(esp, 0x0016C6BCu); RECOMP_ABI_CALL(0x00190D00u, sub_00190D00); /* call 0x00190D00 */

loc_0016C6BC: ;
    ecx = edi;
    PUSH32(esp, 0x0016C6C3u); RECOMP_ABI_CALL(0x00190CD0u, sub_00190CD0); /* call 0x00190CD0 */

loc_0016C6C3: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0016C6D0
 * Original: 0x0016C6D0 - 0x0016C719 (73 bytes, 28 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016C6D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0016C6D0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    ebx = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0016C714; /* je: equal / zero */

loc_0016C6DC: ;
    eax = MEM32(esi + 0xCC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x31C);
    if (CMP_EQ(_fa, _fb)) goto loc_0016C6FF; /* je: equal / zero */

loc_0016C6ED: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0016C6F5u); RECOMP_ABI_CALL(0x001836C0u, sub_001836C0); /* call 0x001836C0 */

loc_0016C6F5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax;
    PUSH32(esp, 0x0016C6FFu); RECOMP_ABI_CALL(0x00184B80u, sub_00184B80); /* call 0x00184B80 */

loc_0016C6FF: ;
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0x0016C707u); RECOMP_ABI_CALL(0x0016C4C0u, sub_0016C4C0); /* call 0x0016C4C0 */

loc_0016C707: ;
    ecx = MEM32(0x6CE60C);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 0x6C); PUSH32(esp, 0x0016C713u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0016C710u); } /* indirect call */
    }

loc_0016C713: ;
    POP32(esp, edi);

loc_0016C714: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0016C720
 * Original: 0x0016C720 - 0x0016C74A (42 bytes, 18 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016C720(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0016C720: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0016C745; /* je: equal / zero */

loc_0016C72C: ;
    eax = MEM32(esi + 0xCC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016C73D; /* je: equal / zero */

loc_0016C736: ;
    ecx = eax;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x0016C73Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0016C73Au); } /* indirect call */
    }

loc_0016C73D: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x0016C745u); RECOMP_ABI_CALL(0x0016C6D0u, sub_0016C6D0); /* call 0x0016C6D0 */

loc_0016C745: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0016C750
 * Original: 0x0016C750 - 0x0016C88D (317 bytes, 101 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016C750(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0016C750: ;
    SET_LO16(eax, MEM16(esp + 4));
    PUSH32(esp, esi);
    esi = ecx;
    MEM16(esi + 0x18) = LO16(eax);
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    MEM16(esi + 0x12) = 0;
    MEM32(esi + 0x14) = 0x2BD;
    if (CMP_NE(_fa, _fb)) goto loc_0016C7D6; /* jne: not equal / not zero */

loc_0016C775: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0016C785; /* jne: not equal / not zero */

loc_0016C779: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0x0016C780u); RECOMP_ABI_CALL(0x000EBFBFu, sub_000EBFBF); /* call 0x000EBFBF */

loc_0016C780: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0016C7AE;

loc_0016C785: ;
    edx = MEM32(0x50630C);
    ecx = edi;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x508);
    PUSH32(esp, 0x49);
    PUSH32(esp, 0x4AEF20);
    PUSH32(esp, 0x4AEEE8);
    PUSH32(esp, 1);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0016C7ABu); RECOMP_ABI_CALL(0x001050A0u, sub_001050A0); /* call 0x001050A0 */

loc_0016C7AB: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0016C7AE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_0016C7D0; /* je: equal / zero */

loc_0016C7B3: ;
    PUSH32(esp, 0x16B190);
    PUSH32(esp, 0x16C2E0);
    PUSH32(esp, edi);
    ebx = eax + 4;
    PUSH32(esp, 0x508);
    PUSH32(esp, ebx);
    MEM32(eax) = edi;
    PUSH32(esp, 0x0016C7CEu); RECOMP_ABI_CALL(0x000EB99Au, sub_000EB99A); /* call 0x000EB99A */

loc_0016C7CE: ;
    goto loc_0016C7D2;

loc_0016C7D0: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0016C7D2: ;
    MEM32(esi + 4) = ebx;
    POP32(esp, ebx);

loc_0016C7D6: ;
    eax = MEM32(esi + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0016C80B; /* jne: not equal / not zero */

loc_0016C7DD: ;
    eax = edi;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x508);
    PUSH32(esp, 0x94);
    PUSH32(esp, 0x4AEFC0);
    PUSH32(esp, 0x4AEF58);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    MEM32(esi + 0x24) = eax;
    eax = MEM32(0x50630C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0016C805u); RECOMP_ABI_CALL(0x001050A0u, sub_001050A0); /* call 0x001050A0 */

loc_0016C805: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x28) = eax;

loc_0016C80B: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0016C841; /* jne: not equal / not zero */

loc_0016C812: ;
    eax = edi;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x508);
    PUSH32(esp, 0x9E);
    PUSH32(esp, 0x4AEFC0);
    PUSH32(esp, 0x4AEF58);
    PUSH32(esp, 1);
    MEM32(esi + 8) = eax;
    ecx = MEM32(0x50630C);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0016C83Bu); RECOMP_ABI_CALL(0x001050A0u, sub_001050A0); /* call 0x001050A0 */

loc_0016C83B: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0xC) = eax;

loc_0016C841: ;
    ecx = MEM32(0x5142E8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0016C864; /* jle: less or equal (signed <=) */

loc_0016C84D: ;
    /* nop */

loc_0016C850: ;
    edx = MEM32(esi + 0x28);
    MEM16(edx + eax * 2) = 1;
    ecx = MEM32(0x5142E8);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0016C850; /* jl: less (signed <) */

loc_0016C864: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x14 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0016C881; /* jge: greater or equal (signed >=) */

loc_0016C869: ;
    eax = ecx + ecx;
    /* nop */

loc_0016C870: ;
    ecx = MEM32(esi + 0x28);
    MEM16(eax + ecx) = 0;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x28) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x28 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0016C870; /* jl: less (signed <) */

loc_0016C881: ;
    ecx = esi;
    PUSH32(esp, 0x0016C888u); RECOMP_ABI_CALL(0x0016C300u, sub_0016C300); /* call 0x0016C300 */

loc_0016C888: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0016C890
 * Original: 0x0016C890 - 0x0016C9AD (285 bytes, 83 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016C890(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0016C890: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x5142A4);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    MEM32(esp + 8) = ebx;
    if (CMP_LE(_fas, _fbs)) goto loc_0016C974; /* jle: less or equal (signed <=) */

loc_0016C8A8: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_0016C8B0: ;
    eax = MEM32(edi + 0xC);
    _fa = (uint32_t)(MEM16(eax + ebx * 2)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + ebx * 2), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016C95A; /* je: equal / zero */

loc_0016C8BE: ;
    ecx = MEM32(edi + 4);
    edx = (uint32_t)(int32_t)SMEM16(ecx + ebp + 0xD0);
    eax = ecx + ebp;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x3238);
    ecx = (uint32_t)(int32_t)SMEM16(edx + 0x5D067E);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esp + 0x18) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0016C95A; /* jne: not equal / not zero */

loc_0016C8DF: ;
    edx = MEM32(eax + 0x84);
    PUSH32(esp, edx);
    ecx = 0x6997D8;
    PUSH32(esp, 0x0016C8F0u); RECOMP_ABI_CALL(0x00196360u, sub_00196360); /* call 0x00196360 */

loc_0016C8F0: ;
    esi = MEM32(edi + 4);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ebp;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fa == 0)) goto loc_0016C942; /* je: equal / zero */

loc_0016C8F7: ;
    eax = MEM32(esi + 0xCC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016C908; /* je: equal / zero */

loc_0016C901: ;
    ecx = eax;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x0016C908u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0016C905u); } /* indirect call */
    }

loc_0016C908: ;
    eax = MEM32(esi + 0xCC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ebx = MEM32(esi + 0x31C);
    if (CMP_EQ(_fa, _fb)) goto loc_0016C92A; /* je: equal / zero */

loc_0016C918: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0016C920u); RECOMP_ABI_CALL(0x001836C0u, sub_001836C0); /* call 0x001836C0 */

loc_0016C920: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax;
    PUSH32(esp, 0x0016C92Au); RECOMP_ABI_CALL(0x00184B80u, sub_00184B80); /* call 0x00184B80 */

loc_0016C92A: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x0016C932u); RECOMP_ABI_CALL(0x0016C4C0u, sub_0016C4C0); /* call 0x0016C4C0 */

loc_0016C932: ;
    ecx = MEM32(0x6CE60C);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(edx + 0x6C); PUSH32(esp, 0x0016C93Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0016C93Bu); } /* indirect call */
    }

loc_0016C93E: ;
    ebx = MEM32(esp + 0x10);

loc_0016C942: ;
    eax = MEM32(edi + 4);
    ecx = (uint32_t)(int32_t)SMEM16(eax + ebp + 0xD0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0016C953u); RECOMP_ABI_CALL(0x00013BDEu, sub_00013BDE); /* call 0x00013BDE */

loc_0016C953: ;
    ecx = eax;
    PUSH32(esp, 0x0016C95Au); RECOMP_ABI_CALL(0x001B72F0u, sub_001B72F0); /* call 0x001B72F0 */

loc_0016C95A: ;
    eax = MEM32(0x5142A4);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x508) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x508;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    MEM32(esp + 0x10) = ebx;
    if (CMP_L(_fas, _fbs)) goto loc_0016C8B0; /* jl: less (signed <) */

loc_0016C972: ;
    POP32(esp, esi);
    POP32(esp, ebp);

loc_0016C974: ;
    edx = MEM32(0x51005C);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM16(edx + 0x38C) = LO16(eax);
    ecx = MEM32(0x510060);
    PUSH32(esp, eax);
    MEM16(ecx + 0x38C) = LO16(eax);
    PUSH32(esp, 0x0016C996u); RECOMP_ABI_CALL(0x001836C0u, sub_001836C0); /* call 0x001836C0 */

loc_0016C996: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax;
    PUSH32(esp, 0x0016C9A0u); RECOMP_ABI_CALL(0x00183FE0u, sub_00183FE0); /* call 0x00183FE0 */

loc_0016C9A0: ;
    POP32(esp, edi);
    MEM8(0x6FC8DA) = 0;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0016C9B0
 * Original: 0x0016C9B0 - 0x0016CACC (284 bytes, 85 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016C9B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0016C9B0: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x5142A4);
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    MEM32(esp + 8) = ebp;
    if (CMP_LE(_fas, _fbs)) goto loc_0016CA95; /* jle: less or equal (signed <=) */

loc_0016C9C8: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_0016C9D0: ;
    eax = MEM32(edi + 4);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM16(eax + 0xD2)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 0xD2), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0016CA08; /* jne: not equal / not zero */

loc_0016C9DF: ;
    ecx = MEM32(eax + 0x84);
    PUSH32(esp, ecx);
    ecx = 0x6997D8;
    PUSH32(esp, 0x0016C9F0u); RECOMP_ABI_CALL(0x00196360u, sub_00196360); /* call 0x00196360 */

loc_0016C9F0: ;
    edx = MEM32(edi + 4);
    eax = (uint32_t)(int32_t)SMEM16(edx + ebx + 0xD0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0016CA01u); RECOMP_ABI_CALL(0x00013BDEu, sub_00013BDE); /* call 0x00013BDE */

loc_0016CA01: ;
    ecx = eax;
    PUSH32(esp, 0x0016CA08u); RECOMP_ABI_CALL(0x001B72F0u, sub_001B72F0); /* call 0x001B72F0 */

loc_0016CA08: ;
    ecx = MEM32(edi + 0xC);
    _fa = (uint32_t)(MEM16(ecx + ebp * 2)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + ebp * 2), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016CA7B; /* je: equal / zero */

loc_0016CA12: ;
    edx = MEM32(edi + 4);
    _fa = (uint32_t)(MEM16(edx + ebx + 0xD2)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edx + ebx + 0xD2), 0 (16-bit) */
    esi = edx + ebx;
    if (CMP_NE(_fa, _fb)) goto loc_0016CA7B; /* jne: not equal / not zero */

loc_0016CA23: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016CA72; /* je: equal / zero */

loc_0016CA27: ;
    eax = MEM32(esi + 0xCC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016CA38; /* je: equal / zero */

loc_0016CA31: ;
    ecx = eax;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x0016CA38u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0016CA35u); } /* indirect call */
    }

loc_0016CA38: ;
    eax = MEM32(esi + 0xCC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ebp = MEM32(esi + 0x31C);
    if (CMP_EQ(_fa, _fb)) goto loc_0016CA5A; /* je: equal / zero */

loc_0016CA48: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0016CA50u); RECOMP_ABI_CALL(0x001836C0u, sub_001836C0); /* call 0x001836C0 */

loc_0016CA50: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax;
    PUSH32(esp, 0x0016CA5Au); RECOMP_ABI_CALL(0x00184B80u, sub_00184B80); /* call 0x00184B80 */

loc_0016CA5A: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x0016CA62u); RECOMP_ABI_CALL(0x0016C4C0u, sub_0016C4C0); /* call 0x0016C4C0 */

loc_0016CA62: ;
    ecx = MEM32(0x6CE60C);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    { uint32_t _icall_target = MEM32(edx + 0x6C); PUSH32(esp, 0x0016CA6Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0016CA6Bu); } /* indirect call */
    }

loc_0016CA6E: ;
    ebp = MEM32(esp + 0x10);

loc_0016CA72: ;
    eax = MEM32(edi + 0xC);
    MEM16(eax + ebp * 2) = 0;

loc_0016CA7B: ;
    eax = MEM32(0x5142A4);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x508) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x508;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    MEM32(esp + 0x10) = ebp;
    if (CMP_L(_fas, _fbs)) goto loc_0016C9D0; /* jl: less (signed <) */

loc_0016CA93: ;
    POP32(esp, esi);
    POP32(esp, ebx);

loc_0016CA95: ;
    ecx = MEM32(0x51005C);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM16(ecx + 0x38C) = LO16(eax);
    edx = MEM32(0x510060);
    PUSH32(esp, eax);
    MEM16(edx + 0x38C) = LO16(eax);
    PUSH32(esp, 0x0016CAB7u); RECOMP_ABI_CALL(0x001836C0u, sub_001836C0); /* call 0x001836C0 */

loc_0016CAB7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax;
    PUSH32(esp, 0x0016CAC1u); RECOMP_ABI_CALL(0x00183FE0u, sub_00183FE0); /* call 0x00183FE0 */

loc_0016CAC1: ;
    POP32(esp, edi);
    MEM8(0x6FC8DA) = 0;
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0016CAD0
 * Original: 0x0016CAD0 - 0x0016CAD5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016CAD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0016CAD0: ;
    g_seh_ebp = ebp; sub_0016C9B0(); return; /* tail jmp 0x0016C9B0 */

}

/**
 * sub_0016CAE0
 * Original: 0x0016CAE0 - 0x0016CAF7 (23 bytes, 7 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016CAE0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0016CAE0: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0x150) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x150;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0016CAF1u); RECOMP_ABI_CALL(0x0015BDF0u, sub_0015BDF0); /* call 0x0015BDF0 */

loc_0016CAF1: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0016CB00
 * Original: 0x0016CB00 - 0x0016CB2E (46 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016CB00(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0016CB00: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = 0x4AF00C;
    MEM32(eax + 0x1C) = ecx;
    MEM32(eax + 0x120) = 1;
    MEM32(eax + 0x124) = 2;
    MEM8(eax + 0x128) = LO8(ecx);
    MEM32(eax + 0x12C) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_0016CB30
 * Original: 0x0016CB30 - 0x0016CB37 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016CB30(void)
{

loc_0016CB30: ;
    MEM32(ecx) = 0x4AF00C;
    esp += 4; return; /* ret */

}

/**
 * sub_0016CBE0
 * Original: 0x0016CBE0 - 0x0016CC06 (38 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016CBE0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0016CBE0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + 0x1C) = eax;
    MEM32(ecx + 0x120) = 1;
    MEM32(ecx + 0x124) = 0x40;
    MEM8(ecx + 0x128) = LO8(eax);
    MEM32(ecx + 0x12C) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0016CC10
 * Original: 0x0016CC10 - 0x0016CC36 (38 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016CC10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0016CC10: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx + 0x20;
    edi = 0x40;
    /* nop */

loc_0016CC20: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016CC2D; /* je: equal / zero */

loc_0016CC26: ;
    ecx = eax;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x0016CC2Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0016CC2Au); } /* indirect call */
    }

loc_0016CC2D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0016CC20; /* jne: not equal / not zero */

loc_0016CC33: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0016CC40
 * Original: 0x0016CC40 - 0x0016CC7B (59 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016CC40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0016CC40: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx + 0x20;
    edi = 0x40;
    /* nop */

loc_0016CC50: ;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016CC63; /* je: equal / zero */

loc_0016CC56: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0016CC5Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0016CC5Au); } /* indirect call */
    }

loc_0016CC5D: ;
    MEM32(esi) = 0;

loc_0016CC63: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0016CC50; /* jne: not equal / not zero */

loc_0016CC69: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x61FF74);
    PUSH32(esp, 0x0016CC75u); RECOMP_ABI_CALL(0x00105FC0u, sub_00105FC0); /* call 0x00105FC0 */

loc_0016CC75: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0016CC80
 * Original: 0x0016CC80 - 0x0016CC83 (3 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016CC80(void)
{

loc_0016CC80: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0016CC90
 * Original: 0x0016CC90 - 0x0016CC93 (3 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016CC90(void)
{

loc_0016CC90: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0016CD60
 * Original: 0x0016CD60 - 0x0016CD8F (47 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0016CD60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0016CD60: ;
    eax = MEM32(ecx + 0x1C);
    edx = MEM32(ecx + 0x120);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0016CD7C; /* jl: less (signed <) */

loc_0016CD6D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x124)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x124) (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0016CD7C; /* jg: greater (signed >) */

loc_0016CD75: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ecx + eax * 4 + 0x20);
    esp += 4; return; /* ret */

loc_0016CD7C: ;
    eax = MEM32(0x682018);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x64) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x64 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0016CD8C; /* jge: greater or equal (signed >=) */

loc_0016CD86: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x682018) = eax;

loc_0016CD8C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0016CD90
 * Original: 0x0016CD90 - 0x0016CD9A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016CD90(void)
{

loc_0016CD90: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x1C) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0016CDA0
 * Original: 0x0016CDA0 - 0x0016CDA1 (1 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016CDA0(void)
{

loc_0016CDA0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0016CDB0
 * Original: 0x0016CDB0 - 0x0016CDB5 (5 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016CDB0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0016CDB0: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0016CE50
 * Original: 0x0016CE50 - 0x0016CE6A (26 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016CE50(void)
{

loc_0016CE50: ;
    eax = MEM32(ecx + 0x1C);
    edx = MEM32(ecx + 0x124);
    MEM8(ecx + 0x128) = 1;
    MEM32(ecx + 0x12C) = eax;
    MEM32(ecx + 0x1C) = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_0016CE70
 * Original: 0x0016CE70 - 0x0016CE81 (17 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016CE70(void)
{

loc_0016CE70: ;
    eax = MEM32(ecx + 0x12C);
    MEM8(ecx + 0x128) = 0;
    MEM32(ecx + 0x1C) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0016CE90
 * Original: 0x0016CE90 - 0x0016CE97 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016CE90(void)
{

loc_0016CE90: ;
    SET_LO8(eax, MEM8(ecx + 0x128));
    esp += 4; return; /* ret */

}

/**
 * sub_0016CEA0
 * Original: 0x0016CEA0 - 0x0016CEA3 (3 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016CEA0(void)
{

loc_0016CEA0: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0016CEB0
 * Original: 0x0016CEB0 - 0x0016CEB3 (3 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0016CEB0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0016CEB0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0016CEC0
 * Original: 0x0016CEC0 - 0x0016CF16 (86 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016CEC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0016CEC0: ;
    eax = MEM32(ecx + 0x1C);
    edx = MEM32(ecx + 0x120);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_L(_fas, _fbs)) goto loc_0016CF02; /* jl: less (signed <) */

loc_0016CECE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x124)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x124) (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0016CF02; /* jg: greater (signed >) */

loc_0016CED6: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi = MEM32(ecx + eax * 4 + 0x20);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016CF12; /* je: equal / zero */

loc_0016CEE0: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x0016CEE7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0016CEE4u); } /* indirect call */
    }

loc_0016CEE7: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016CF12; /* je: equal / zero */

loc_0016CEEB: ;
    SET_LO8(eax, MEM8(esi + 0x2D9));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016CEFE; /* je: equal / zero */

loc_0016CEF5: ;
    SET_LO8(eax, MEM8(0x5144F8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016CF12; /* je: equal / zero */

loc_0016CEFE: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0016CF02: ;
    eax = MEM32(0x682018);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x64) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x64 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0016CF12; /* jge: greater or equal (signed >=) */

loc_0016CF0C: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x682018) = eax;

loc_0016CF12: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0016CF20
 * Original: 0x0016CF20 - 0x0016CF56 (54 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016CF20(void)
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

loc_0016CF20: ;
    PUSH32(esp, 0x0016CF25u); RECOMP_ABI_CALL(0x00123AB0u, sub_00123AB0); /* call 0x00123AB0 */

loc_0016CF25: ;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x4AB594)); /* fsub dword ptr [0x4ab594] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x49EFD4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x49efd4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0016CF53; /* jp: parity */

loc_0016CF38: ;
    PUSH32(esp, 0x0016CF3Du); RECOMP_ABI_CALL(0x00123AB0u, sub_00123AB0); /* call 0x00123AB0 */

loc_0016CF3D: ;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x4AB594)); /* fsub dword ptr [0x4ab594] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x49EFD8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x49efd8] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0016CF53; /* jne: not equal / not zero */

loc_0016CF50: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_0016CF53: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0016CF60
 * Original: 0x0016CF60 - 0x0016CF7F (31 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016CF60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0016CF60: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x4AF00C;
    if (TEST_Z(_fa, _fb)) goto loc_0016CF79; /* je: equal / zero */

loc_0016CF70: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0016CF76u); RECOMP_ABI_CALL(0x00011730u, sub_00011730); /* call 0x00011730 */

loc_0016CF76: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0016CF79: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0016CF80
 * Original: 0x0016CF80 - 0x0016D023 (163 bytes, 49 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016CF80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0016CF80: ;
    eax = MEM32(ecx + 0x1C);
    edx = MEM32(ecx + 0x120);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_L(_fas, _fbs)) goto loc_0016D00E; /* jl: less (signed <) */

loc_0016CF91: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x124)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x124) (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0016D00E; /* jg: greater (signed >) */

loc_0016CF99: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi = MEM32(ecx + eax * 4 + 0x20);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016D009; /* je: equal / zero */

loc_0016CFA3: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x28); PUSH32(esp, 0x0016CFAAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0016CFA7u); } /* indirect call */
    }

loc_0016CFAA: ;
    ecx = esi + 0x140;
    PUSH32(esp, ecx);
    edx = esp + 8;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0016CFBBu); RECOMP_ABI_CALL(0x0015BDF0u, sub_0015BDF0); /* call 0x0015BDF0 */

loc_0016CFBB: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esp + 0x14);
    MEM32(0x699C58) = eax;
    _fb = (uint32_t)(0x150) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x150;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp + 0x1C;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    MEM32(0x699C5C) = ecx;
    MEM32(0x699C60) = edx;
    PUSH32(esp, 0x0016CFE9u); RECOMP_ABI_CALL(0x0015BDF0u, sub_0015BDF0); /* call 0x0015BDF0 */

loc_0016CFE9: ;
    ecx = MEM32(esp + 0x24);
    edx = MEM32(esp + 0x28);
    eax = MEM32(esp + 0x2C);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x699C68) = ecx;
    MEM32(0x699C6C) = edx;
    MEM32(0x699C70) = eax;

loc_0016D009: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0016D00E: ;
    eax = MEM32(0x682018);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x64) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x64 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0016D009; /* jge: greater or equal (signed >=) */

loc_0016D018: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x682018) = eax;
    POP32(esp, esi);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0016D030
 * Original: 0x0016D030 - 0x0016D049 (25 bytes, 8 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016D030(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0016D030: ;
    SET_LO8(eax, MEM8(ecx + 0x128));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0016D046; /* jne: not equal / not zero */

loc_0016D03A: ;
    PUSH32(esp, 0x0016D03Fu); RECOMP_ABI_CALL(0x00016BA9u, sub_00016BA9); /* call 0x00016BA9 */

loc_0016D03F: ;
    edx = MEM32(eax);
    ecx = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0x14)); return; /* indirect tail jmp */

loc_0016D046: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0016D050
 * Original: 0x0016D050 - 0x0016D13D (237 bytes, 74 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016D050(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0016D050: ;
    PUSH32(esp, 0x0016D055u); RECOMP_ABI_CALL(0x0016CEC0u, sub_0016CEC0); /* call 0x0016CEC0 */

loc_0016D055: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0016D13C; /* jne: not equal / not zero */

loc_0016D05D: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = 0x5144E8;
    PUSH32(esp, 0x0016D069u); RECOMP_ABI_CALL(0x001A76D0u, sub_001A76D0); /* call 0x001A76D0 */

loc_0016D069: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016D0A6; /* je: equal / zero */

loc_0016D06D: ;
    SET_LO8(eax, MEM8(0x699DF5));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0016D0A6; /* jne: not equal / not zero */

loc_0016D076: ;
    ecx = 0x5144E8;
    PUSH32(esp, 0x0016D080u); RECOMP_ABI_CALL(0x001A7860u, sub_001A7860); /* call 0x001A7860 */

loc_0016D080: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0016D0A6; /* jl: less (signed <) */

loc_0016D084: ;
    MEM8(0x699DF5) = 1;
    PUSH32(esp, 0x0016D090u); RECOMP_ABI_CALL(0x00016BA9u, sub_00016BA9); /* call 0x00016BA9 */

loc_0016D090: ;
    esi = eax;
    edi = MEM32(esi);
    PUSH32(esp, 0);
    ecx = 0x5144E8;
    PUSH32(esp, 0x0016D0A0u); RECOMP_ABI_CALL(0x001A7890u, sub_001A7890); /* call 0x001A7890 */

loc_0016D0A0: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edi + 0x1C); PUSH32(esp, 0x0016D0A6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0016D0A3u); } /* indirect call */
    }

loc_0016D0A6: ;
    eax = MEM32(0x699B98);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0016D13A; /* jne: not equal / not zero */

loc_0016D0B3: ;
    esi = 0x5D1AB8;
    edi = 0xE;
    /* nop */

loc_0016D0C0: ;
    PUSH32(esp, esi);
    ecx = 0x510040;
    PUSH32(esp, 0x0016D0CBu); RECOMP_ABI_CALL(0x0016B2B0u, sub_0016B2B0); /* call 0x0016B2B0 */

loc_0016D0CB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016D131; /* je: equal / zero */

loc_0016D0CF: ;
    SET_LO8(eax, MEM8(esi + 0x26C4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016D131; /* je: equal / zero */

loc_0016D0D9: ;
    _fa = (uint32_t)(MEM32(esi + 0x24)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x24), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016D131; /* je: equal / zero */

loc_0016D0DF: ;
    SET_LO8(eax, MEM8(esi + 0x70));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0016D131; /* jne: not equal / not zero */

loc_0016D0E6: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0016D0ECu); RECOMP_ABI_CALL(0x00197760u, sub_00197760); /* call 0x00197760 */

loc_0016D0EC: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0016D0F5u); RECOMP_ABI_CALL(0x00197700u, sub_00197700); /* call 0x00197700 */

loc_0016D0F5: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(0x699B98) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0016D131; /* je: equal / zero */

loc_0016D101: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0016D107u); RECOMP_ABI_CALL(0x00197760u, sub_00197760); /* call 0x00197760 */

loc_0016D107: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x699BC4) = eax;
    MEM32(0x699BC8) = esi;
    MEM8(0x699DF4) = 1;
    PUSH32(esp, 0x0016D121u); RECOMP_ABI_CALL(0x00016BA9u, sub_00016BA9); /* call 0x00016BA9 */

loc_0016D121: ;
    ecx = MEM32(0x699B98);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x0016D131u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0016D12Eu); } /* indirect call */
    }

loc_0016D131: ;
    _fb = (uint32_t)(0x3238) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x3238;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0016D0C0; /* jne: not equal / not zero */

loc_0016D13A: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_0016D13C: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0016D140
 * Original: 0x0016D140 - 0x0016D143 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016D140(void)
{

loc_0016D140: ;
    eax = MEM32(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0016D150
 * Original: 0x0016D150 - 0x0016D154 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016D150(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0016D150: ;
    fp_push(MEMF(ecx + 0x10)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0016D160
 * Original: 0x0016D160 - 0x0016D168 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016D160(void)
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

loc_0016D160: ;
    fp_push(MEMF(ecx + 0x10)); /* fld float */
    g_seh_ebp = ebp; sub_000EB38C(); return; /* tail jmp 0x000EB38C */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0016D170
 * Original: 0x0016D170 - 0x0016D175 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016D170(void)
{

loc_0016D170: ;
    eax = (uint32_t)(int32_t)SMEM8(ecx + 0x78);
    esp += 4; return; /* ret */

}

/**
 * sub_0016D180
 * Original: 0x0016D180 - 0x0016D185 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016D180(void)
{

loc_0016D180: ;
    eax = (uint32_t)(int32_t)SMEM8(ecx + 0x7B);
    esp += 4; return; /* ret */

}

/**
 * sub_0016D190
 * Original: 0x0016D190 - 0x0016D195 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016D190(void)
{

loc_0016D190: ;
    eax = (uint32_t)(int32_t)SMEM8(ecx + 0x79);
    esp += 4; return; /* ret */

}

/**
 * sub_0016D1A0
 * Original: 0x0016D1A0 - 0x0016D1B2 (18 bytes, 5 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016D1A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0016D1A0: ;
    edx = MEM32(esp + 4);
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(MEM32(ecx + edx * 4 + 0x70)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(ecx + edx * 4 + 0x70), eax (32-bit) */
    SET_LO8(eax, (TEST_NZ(_fa, _fb)) ? 1 : 0); /* setne */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0016D1C0
 * Original: 0x0016D1C0 - 0x0016D1CB (11 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016D1C0(void)
{

loc_0016D1C0: ;
    eax = MEM32(esp + 4);
    eax = ecx + eax * 4 + 0x70;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0016D1D0
 * Original: 0x0016D1D0 - 0x0016D1D7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016D1D0(void)
{

loc_0016D1D0: ;
    eax = ecx + 0x88;
    esp += 4; return; /* ret */

}

/**
 * sub_0016D1E0
 * Original: 0x0016D1E0 - 0x0016D1E4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016D1E0(void)
{

loc_0016D1E0: ;
    eax = MEM32(ecx + 0x7C);
    esp += 4; return; /* ret */

}

/**
 * sub_0016D1F0
 * Original: 0x0016D1F0 - 0x0016D1FD (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016D1F0(void)
{

loc_0016D1F0: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x80) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0016D200
 * Original: 0x0016D200 - 0x0016D207 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016D200(void)
{

loc_0016D200: ;
    eax = MEM32(ecx + 0x80);
    esp += 4; return; /* ret */

}

/**
 * sub_0016D210
 * Original: 0x0016D210 - 0x0016D217 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016D210(void)
{

loc_0016D210: ;
    eax = MEM32(ecx + 0x84);
    esp += 4; return; /* ret */

}

/**
 * sub_0016D220
 * Original: 0x0016D220 - 0x0016D2FE (222 bytes, 74 insns)
 * CC: cdecl, 1 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0016D220(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0016D220: ;
    fp_push(MEMF(ecx + 0x10)); /* fld float */
    eax = MEM32(esp + 4);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 4)); /* fadd dword ptr [ecx + 4] */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 8)); /* fadd dword ptr [ecx + 8] */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0xC)); /* fadd dword ptr [ecx + 0xc] */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 4)); /* fadd dword ptr [ecx + 4] */
    MEMF(eax + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 8)); /* fadd dword ptr [ecx + 8] */
    MEMF(eax + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0xC)); /* fadd dword ptr [ecx + 0xc] */
    MEMF(eax + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 0x28)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 4)); /* fadd dword ptr [ecx + 4] */
    MEMF(eax + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 0x2C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 8)); /* fadd dword ptr [ecx + 8] */
    MEMF(eax + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 0x30)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0xC)); /* fadd dword ptr [ecx + 0xc] */
    MEMF(eax + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 0x34)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 4)); /* fadd dword ptr [ecx + 4] */
    MEMF(eax + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 0x38)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 8)); /* fadd dword ptr [ecx + 8] */
    MEMF(eax + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 0x3C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0xC)); /* fadd dword ptr [ecx + 0xc] */
    MEMF(eax + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 0x40)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 4)); /* fadd dword ptr [ecx + 4] */
    MEMF(eax + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 0x44)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 8)); /* fadd dword ptr [ecx + 8] */
    MEMF(eax + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 0x48)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0xC)); /* fadd dword ptr [ecx + 0xc] */
    MEMF(eax + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 0x4C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 4)); /* fadd dword ptr [ecx + 4] */
    MEMF(eax + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 0x50)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 8)); /* fadd dword ptr [ecx + 8] */
    MEMF(eax + 0x40) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 0x54)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0xC)); /* fadd dword ptr [ecx + 0xc] */
    MEMF(eax + 0x44) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 0x58)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 4)); /* fadd dword ptr [ecx + 4] */
    MEMF(eax + 0x48) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 0x5C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 8)); /* fadd dword ptr [ecx + 8] */
    MEMF(eax + 0x4C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 0x60)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0xC)); /* fadd dword ptr [ecx + 0xc] */
    MEMF(eax + 0x50) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 0x64)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 4)); /* fadd dword ptr [ecx + 4] */
    MEMF(eax + 0x54) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 0x68)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 8)); /* fadd dword ptr [ecx + 8] */
    MEMF(eax + 0x58) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 0x6C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0xC)); /* fadd dword ptr [ecx + 0xc] */
    MEMF(eax + 0x5C) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0016D300
 * Original: 0x0016D300 - 0x0016D304 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016D300(void)
{

loc_0016D300: ;
    eax = ecx + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_0016D310
 * Original: 0x0016D310 - 0x0016D314 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016D310(void)
{

loc_0016D310: ;
    eax = ecx + 0x24;
    esp += 4; return; /* ret */

}

/**
 * sub_0016D320
 * Original: 0x0016D320 - 0x0016D328 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016D320(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0016D320: ;
    _fa = (uint32_t)(MEM32(ecx + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x10), 0xFFFFFFFFu (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    esp += 4; return; /* ret */

}

/**
 * sub_0016D330
 * Original: 0x0016D330 - 0x0016D33D (13 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016D330(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0016D330: ;
    eax = MEM32(ecx + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esp + 4) (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0016D340
 * Original: 0x0016D340 - 0x0016D344 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016D340(void)
{

loc_0016D340: ;
    eax = MEM32(ecx + 0x14);
    esp += 4; return; /* ret */

}

/**
 * sub_0016D350
 * Original: 0x0016D350 - 0x0016D357 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016D350(void)
{

loc_0016D350: ;
    SET_LO8(eax, MEM8(ecx + 0x6D65));
    esp += 4; return; /* ret */

}

/**
 * sub_0016D360
 * Original: 0x0016D360 - 0x0016D36D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016D360(void)
{

loc_0016D360: ;
    SET_LO8(eax, MEM8(esp + 4));
    MEM8(ecx + 0x6D64) = LO8(eax);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0016D370
 * Original: 0x0016D370 - 0x0016D377 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016D370(void)
{

loc_0016D370: ;
    SET_LO8(eax, MEM8(ecx + 0x6D64));
    esp += 4; return; /* ret */

}

/**
 * sub_0016D380
 * Original: 0x0016D380 - 0x0016D399 (25 bytes, 8 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016D380(void)
{

loc_0016D380: ;
    edx = MEM32(esp + 8);
    eax = ecx;
    ecx = MEM32(esp + 4);
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0xC);
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = ecx;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0016D3A0
 * Original: 0x0016D3A0 - 0x0016D3A7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016D3A0(void)
{

loc_0016D3A0: ;
    SET_LO8(eax, MEM8(ecx + 0x964));
    esp += 4; return; /* ret */

}

/**
 * sub_0016D3B0
 * Original: 0x0016D3B0 - 0x0016D3BD (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016D3B0(void)
{

loc_0016D3B0: ;
    SET_LO8(eax, MEM8(esp + 4));
    MEM8(ecx + 0x964) = LO8(eax);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0016D3C0
 * Original: 0x0016D3C0 - 0x0016D49F (223 bytes, 88 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016D3C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0016D3C0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 8);
    edx = MEM32(esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x3F800000);
    edi = ecx;
    ecx = MEM32(esi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0016D3DEu); RECOMP_ABI_CALL(0x0015BB60u, sub_0015BB60); /* call 0x0015BB60 */

loc_0016D3DE: ;
    eax = MEM32(esi + 0x14);
    ecx = MEM32(esi + 0x10);
    edx = MEM32(esi + 0xC);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    eax = edi + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0016D3F8u); RECOMP_ABI_CALL(0x0015BB60u, sub_0015BB60); /* call 0x0015BB60 */

loc_0016D3F8: ;
    ecx = MEM32(esi + 0x20);
    edx = MEM32(esi + 0x1C);
    eax = MEM32(esi + 0x18);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = edi + 0x20;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0016D412u); RECOMP_ABI_CALL(0x0015BB60u, sub_0015BB60); /* call 0x0015BB60 */

loc_0016D412: ;
    edx = MEM32(esi + 0x2C);
    eax = MEM32(esi + 0x28);
    ecx = MEM32(esi + 0x24);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = edi + 0x30;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0016D42Cu); RECOMP_ABI_CALL(0x0015BB60u, sub_0015BB60); /* call 0x0015BB60 */

loc_0016D42C: ;
    eax = MEM32(esi + 0x38);
    ecx = MEM32(esi + 0x34);
    edx = MEM32(esi + 0x30);
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x50;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    eax = edi + 0x40;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0016D449u); RECOMP_ABI_CALL(0x0015BB60u, sub_0015BB60); /* call 0x0015BB60 */

loc_0016D449: ;
    ecx = MEM32(esi + 0x44);
    edx = MEM32(esi + 0x40);
    eax = MEM32(esi + 0x3C);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = edi + 0x50;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0016D463u); RECOMP_ABI_CALL(0x0015BB60u, sub_0015BB60); /* call 0x0015BB60 */

loc_0016D463: ;
    edx = MEM32(esi + 0x50);
    eax = MEM32(esi + 0x4C);
    ecx = MEM32(esi + 0x48);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = edi + 0x60;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0016D47Du); RECOMP_ABI_CALL(0x0015BB60u, sub_0015BB60); /* call 0x0015BB60 */

loc_0016D47D: ;
    eax = MEM32(esi + 0x5C);
    ecx = MEM32(esi + 0x58);
    edx = MEM32(esi + 0x54);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x70;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    PUSH32(esp, 0x0016D497u); RECOMP_ABI_CALL(0x0015BB60u, sub_0015BB60); /* call 0x0015BB60 */

loc_0016D497: ;
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x50;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0016D4A0
 * Original: 0x0016D4A0 - 0x0016D4B3 (19 bytes, 8 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016D4A0(void)
{

loc_0016D4A0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x0016D4ADu); RECOMP_ABI_CALL(0x0016D3C0u, sub_0016D3C0); /* call 0x0016D3C0 */

loc_0016D4AD: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0016D4C0
 * Original: 0x0016D4C0 - 0x0016D4CA (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016D4C0(void)
{

loc_0016D4C0: ;
    SET_LO8(eax, MEM8(esp + 4));
    MEM8(ecx + 4) = LO8(eax);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0016D4D0
 * Original: 0x0016D4D0 - 0x0016D4D7 (7 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016D4D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0016D4D0: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 0 (32-bit) */
    SET_LO8(eax, (CMP_G(_fas, _fbs)) ? 1 : 0); /* setg */
    esp += 4; return; /* ret */

}

/**
 * sub_0016D4E0
 * Original: 0x0016D4E0 - 0x0016D4E7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016D4E0(void)
{

loc_0016D4E0: ;
    MEM32(ecx) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_0016D4F0
 * Original: 0x0016D4F0 - 0x0016D507 (23 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016D4F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0016D4F0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x4C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016D4FF; /* je: equal / zero */

loc_0016D4FA: ;
    PUSH32(esp, 0x0016D4FFu); RECOMP_ABI_CALL(0x0016D4F0u, sub_0016D4F0); /* call 0x0016D4F0 */

loc_0016D4FF: ;
    MEM32(esi) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0016D510
 * Original: 0x0016D510 - 0x0016D51C (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016D510(void)
{

loc_0016D510: ;
    eax = ecx;
    ecx = MEM32(eax + 0x4C);
    MEM32(0x682024) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_0016D520
 * Original: 0x0016D520 - 0x0016D529 (9 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016D520(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0016D520: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0016D530
 * Original: 0x0016D530 - 0x0016D541 (17 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016D530(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0016D530: ;
    eax = MEM32(ecx + 0xC);
    ecx = (uint32_t)(int32_t)SMEM8(eax + 0x7A);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esp + 4) (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0016D550
 * Original: 0x0016D550 - 0x0016D560 (16 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016D550(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0016D550: ;
    eax = MEM32(ecx + 0xC8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esp + 4) (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0016D570
 * Original: 0x0016D570 - 0x0016D577 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016D570(void)
{

loc_0016D570: ;
    eax = MEM32(ecx + 0xC8);
    esp += 4; return; /* ret */

}

/**
 * sub_0016D580
 * Original: 0x0016D580 - 0x0016D58B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016D580(void)
{

loc_0016D580: ;
    MEM32(ecx + 0xD0) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_0016D590
 * Original: 0x0016D590 - 0x0016D594 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016D590(void)
{

loc_0016D590: ;
    eax = MEM32(ecx + 0x14);
    esp += 4; return; /* ret */

}

/**
 * sub_0016D5A0
 * Original: 0x0016D5A0 - 0x0016D5AD (13 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016D5A0(void)
{

loc_0016D5A0: ;
    eax = MEM32(ecx + 0x64);
    ecx = MEM32(esp + 4);
    eax = MEM32(eax + ecx * 4);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0016D5B0
 * Original: 0x0016D5B0 - 0x0016D5C0 (16 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016D5B0(void)
{

loc_0016D5B0: ;
    eax = MEM32(ecx + 0xC4);
    ecx = MEM32(esp + 4);
    eax = MEM32(eax + ecx * 4);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0016D5D0
 * Original: 0x0016D5D0 - 0x0016D5EB (27 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016D5D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0016D5D0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0xB4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0016D5E2; /* je: equal / zero */

loc_0016D5DD: ;
    PUSH32(esp, 0x0016D5E2u); RECOMP_ABI_CALL(0x0016D4F0u, sub_0016D4F0); /* call 0x0016D4F0 */

loc_0016D5E2: ;
    MEM32(esi + 0x68) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0016D5F0
 * Original: 0x0016D5F0 - 0x0016D5FD (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016D5F0(void)
{

loc_0016D5F0: ;
    SET_LO8(eax, MEM8(esp + 4));
    MEM8(ecx + 0xA8D4) = LO8(eax);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0016D600
 * Original: 0x0016D600 - 0x0016D607 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016D600(void)
{

loc_0016D600: ;
    SET_LO8(eax, MEM8(ecx + 0xA8D4));
    esp += 4; return; /* ret */

}

/**
 * sub_0016D610
 * Original: 0x0016D610 - 0x0016D62E (30 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016D610(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0016D610: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + 0xA8C4) = eax;
    MEM32(ecx + 0xA8C8) = eax;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ecx + 0xA8CC) = eax;
    MEM32(ecx + 0xA8D0) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0016D630
 * Original: 0x0016D630 - 0x0016D649 (25 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016D630(void)
{

loc_0016D630: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0016D638u); RECOMP_ABI_CALL(0x001F2750u, sub_001F2750); /* call 0x001F2750 */

loc_0016D638: ;
    MEM32(esi) = 0x4AF0D8;
    MEM32(esi + 4) = 0;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0016D650
 * Original: 0x0016D650 - 0x0016D659 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016D650(void)
{

loc_0016D650: ;
    eax = ecx;
    MEM32(eax) = 0x4AF0DC;
    esp += 4; return; /* ret */

}

/**
 * sub_0016D660
 * Original: 0x0016D660 - 0x0016D66D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016D660(void)
{

loc_0016D660: ;
    SET_LO8(eax, MEM8(esp + 4));
    MEM8(ecx + 0x11BE4) = LO8(eax);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0016D670
 * Original: 0x0016D670 - 0x0016D677 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016D670(void)
{

loc_0016D670: ;
    SET_LO8(eax, MEM8(ecx + 0x11BE4));
    esp += 4; return; /* ret */

}

/**
 * sub_0016D680
 * Original: 0x0016D680 - 0x0016D68D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016D680(void)
{

loc_0016D680: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x11BE8) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0016D690
 * Original: 0x0016D690 - 0x0016D69B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016D690(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0016D690: ;
    _fb = (uint32_t)(0x12554) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x12554;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_001F2920(); return; /* tail jmp 0x001F2920 */

}

/**
 * sub_0016D6A0
 * Original: 0x0016D6A0 - 0x0016D6AE (14 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016D6A0(void)
{

loc_0016D6A0: ;
    eax = ecx;
    MEM32(eax) = 0x4AF0E4;
    MEM32(0x68202C) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0016D6B0
 * Original: 0x0016D6B0 - 0x0016D6B5 (5 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016D6B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0016D6B0: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0016D6C0
 * Original: 0x0016D6C0 - 0x0016D6C4 (4 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016D6C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0016D6C0: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 4; return; /* ret */

}

/**
 * sub_0016D6D0
 * Original: 0x0016D6D0 - 0x0016D6D3 (3 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0016D6D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0016D6D0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0016D6E0
 * Original: 0x0016D6E0 - 0x0016D6ED (13 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0016D6E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0016D6E0: ;
    ecx = MEM32(ecx);
    _fb = (uint32_t)(0x12554) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x12554;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_001F2920(); return; /* tail jmp 0x001F2920 */

}
