/**
 * MKSM - Recompiled code chunk 41
 * Functions: 500 (0x002B0D20 - 0x002B8230)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_002B0D20
 * Original: 0x002B0D20 - 0x002B0D7B (91 bytes, 34 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B0D20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B0D20: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 0x10);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x2C); PUSH32(esp, 0x002B0D32u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002B0D2Fu); } /* indirect call */
    }

loc_002B0D32: ;
    edx = MEM32(esp + 0x14);
    MEM32(esp + 4) = eax;
    eax = esp + 4;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esi;
    MEM32(esp + 0xC) = edx;
    PUSH32(esp, 0x002B0D4Du); RECOMP_ABI_CALL(0x002B0BF0u, sub_002B0BF0); /* call 0x002B0BF0 */

loc_002B0D4D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B0D74; /* je: equal / zero */

loc_002B0D51: ;
    ecx = esp + 4;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x002B0D5Du); RECOMP_ABI_CALL(0x002B0C50u, sub_002B0C50); /* call 0x002B0C50 */

loc_002B0D5D: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    edx = ecx + -1;
    MEM32(eax) = edx;
    if (CMP_NE(_fa, _fb)) goto loc_002B0D74; /* jne: not equal / not zero */

loc_002B0D68: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x002B0D74u); RECOMP_ABI_CALL(0x002B0D80u, sub_002B0D80); /* call 0x002B0D80 */

loc_002B0D74: ;
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002B0D80
 * Original: 0x002B0D80 - 0x002B0DFA (122 bytes, 55 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B0D80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B0D80: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebx = ecx;
    esi = MEM32(ebx + 4);
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, edi);
    if ((_fas < 0)) goto loc_002B0DC0; /* js: sign (negative) */

loc_002B0D8C: ;
    ebp = MEM32(esp + 0x14);
    edi = esi + esi * 2;
    edi = edi << 2;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */

loc_002B0D96: ;
    eax = MEM32(ebx);
    ecx = MEM32(eax + edi + 4);
    edx = MEM32(ebp + 4);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B0DB8; /* jne: not equal / not zero */

loc_002B0DA5: ;
    edx = MEM32(ebp);
    eax = MEM32(eax);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002B0DB1u); RECOMP_ABI_CALL(0x00101EB0u, sub_00101EB0); /* call 0x00101EB0 */

loc_002B0DB1: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B0DCC; /* je: equal / zero */

loc_002B0DB8: ;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - 0xC;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002B0D96; /* jge: greater or equal (signed >=) */

loc_002B0DC0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 1;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_002B0DCC: ;
    eax = MEM32(ebx + 4);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ebx + 4) = eax;
    ebx = MEM32(ebx);
    ecx = eax + eax * 2;
    edx = ebx + ecx * 4;
    eax = esi + esi * 2;
    ecx = ebx + eax * 4;
    eax = MEM32(edx);
    MEM32(ecx) = eax;
    eax = MEM32(edx + 4);
    POP32(esp, edi);
    MEM32(ecx + 4) = eax;
    edx = MEM32(edx + 8);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(ecx + 8) = edx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002B0E00
 * Original: 0x002B0E00 - 0x002B0E05 (5 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B0E00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B0E00: ;
    g_seh_ebp = ebp; sub_002B0D20(); return; /* tail jmp 0x002B0D20 */

}

/**
 * sub_002B0E10
 * Original: 0x002B0E10 - 0x002B0E15 (5 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B0E10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B0E10: ;
    g_seh_ebp = ebp; sub_002B0D20(); return; /* tail jmp 0x002B0D20 */

}

/**
 * sub_002B0E20
 * Original: 0x002B0E20 - 0x002B0E75 (85 bytes, 32 insns)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B0E20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B0E20: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x20);
    esi = ecx;
    eax = MEM32(esi);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 0x2C); PUSH32(esp, 0x002B0E32u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002B0E2Fu); } /* indirect call */
    }

loc_002B0E32: ;
    ebx = MEM32(esp + 0x24);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    ecx = esi + 8;
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x14) = ebx;
    PUSH32(esp, 0x002B0E4Bu); RECOMP_ABI_CALL(0x002B0BF0u, sub_002B0BF0); /* call 0x002B0BF0 */

loc_002B0E4B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B0E6C; /* jne: not equal / not zero */

loc_002B0E4F: ;
    edx = MEM32(esp + 0x1C);
    eax = MEM32(esp + 0x18);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x002B0E62u); RECOMP_ABI_CALL(0x002B0E80u, sub_002B0E80); /* call 0x002B0E80 */

loc_002B0E62: ;
    MEM32(0) = 0;

loc_002B0E6C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_002B0E80
 * Original: 0x002B0E80 - 0x002B0F94 (276 bytes, 64 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B0E80(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B0E80: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x3BCEC6);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _fb = (uint32_t)(0x458) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x458;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x50C524);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 0x458) = eax;
    ecx = esp + 0x10;
    PUSH32(esp, 0x002B0EB3u); RECOMP_ABI_CALL(0x001FF960u, sub_001FF960); /* call 0x001FF960 */

loc_002B0EB3: ;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = esp + 8;
    MEM32(esp + 0x468) = 0;
    PUSH32(esp, 0x002B0ECCu); RECOMP_ABI_CALL(0x002B2020u, sub_002B2020); /* call 0x002B2020 */

loc_002B0ECC: ;
    ecx = MEM32(esp + 0x470);
    edx = MEM32(esp + 0x46C);
    eax = MEM32(esp + 0x478);
    PUSH32(esp, 0x4C2FB4);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x47C);
    PUSH32(esp, 0x4C2FAC);
    PUSH32(esp, edx);
    PUSH32(esp, 0x4C2FA8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x28);
    PUSH32(esp, ecx);
    ecx = esp + 0x24;
    MEM8(esp + 0x484) = 1;
    PUSH32(esp, 0x002B0F0Eu); RECOMP_ABI_CALL(0x002B2140u, sub_002B2140); /* call 0x002B2140 */

loc_002B0F0E: ;
    ecx = eax;
    PUSH32(esp, 0x002B0F15u); RECOMP_ABI_CALL(0x002B2120u, sub_002B2120); /* call 0x002B2120 */

loc_002B0F15: ;
    ecx = eax;
    PUSH32(esp, 0x002B0F1Cu); RECOMP_ABI_CALL(0x002B2260u, sub_002B2260); /* call 0x002B2260 */

loc_002B0F1C: ;
    ecx = eax;
    PUSH32(esp, 0x002B0F23u); RECOMP_ABI_CALL(0x002B2140u, sub_002B2140); /* call 0x002B2140 */

loc_002B0F23: ;
    ecx = eax;
    PUSH32(esp, 0x002B0F2Au); RECOMP_ABI_CALL(0x002B2140u, sub_002B2140); /* call 0x002B2140 */

loc_002B0F2A: ;
    ecx = eax;
    PUSH32(esp, 0x002B0F31u); RECOMP_ABI_CALL(0x002B2140u, sub_002B2140); /* call 0x002B2140 */

loc_002B0F31: ;
    ecx = eax;
    PUSH32(esp, 0x002B0F38u); RECOMP_ABI_CALL(0x002B2140u, sub_002B2140); /* call 0x002B2140 */

loc_002B0F38: ;
    ecx = eax;
    PUSH32(esp, 0x002B0F3Fu); RECOMP_ABI_CALL(0x002B2140u, sub_002B2140); /* call 0x002B2140 */

loc_002B0F3F: ;
    eax = MEM32(esp + 0x4C);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x002B0F4Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002B0F48u); } /* indirect call */
    }

loc_002B0F4B: ;
    ecx = esp + 4;
    MEM8(esp + 0x464) = 0;
    PUSH32(esp, 0x002B0F5Cu); RECOMP_ABI_CALL(0x002B2040u, sub_002B2040); /* call 0x002B2040 */

loc_002B0F5C: ;
    ecx = esp + 0x10;
    MEM32(esp + 0x464) = 0xFFFFFFFFu;
    PUSH32(esp, 0x002B0F70u); RECOMP_ABI_CALL(0x002019A0u, sub_002019A0); /* call 0x002019A0 */

loc_002B0F70: ;
    ecx = MEM32(esp + 0x45C);
    MEM32(XBOX_FS_BASE) = ecx;
    ecx = MEM32(esp + 0x458);
    POP32(esp, esi);
    PUSH32(esp, 0x002B0F8Bu); RECOMP_ABI_CALL(0x000EB37Bu, sub_000EB37B); /* call 0x000EB37B */

loc_002B0F8B: ;
    _fb = (uint32_t)(0x464) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x464;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_002B0FA0
 * Original: 0x002B0FA0 - 0x002B0FEB (75 bytes, 31 insns)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B0FA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B0FA0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x20);
    esi = ecx;
    eax = MEM32(esi);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 0x2C); PUSH32(esp, 0x002B0FB2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002B0FAFu); } /* indirect call */
    }

loc_002B0FB2: ;
    ebx = MEM32(esp + 0x24);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    ecx = esi + 8;
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x14) = ebx;
    PUSH32(esp, 0x002B0FCBu); RECOMP_ABI_CALL(0x002B0BF0u, sub_002B0BF0); /* call 0x002B0BF0 */

loc_002B0FCB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B0FE2; /* jne: not equal / not zero */

loc_002B0FCF: ;
    edx = MEM32(esp + 0x1C);
    eax = MEM32(esp + 0x18);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x002B0FE2u); RECOMP_ABI_CALL(0x002B0E80u, sub_002B0E80); /* call 0x002B0E80 */

loc_002B0FE2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_002B0FF0
 * Original: 0x002B0FF0 - 0x002B1009 (25 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B0FF0(void)
{

loc_002B0FF0: ;
    ecx = MEM32(0x62EBAC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, 0x14);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x002B1003u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002B1000u); } /* indirect call */
    }

loc_002B1003: ;
    MEM16(eax + 4) = LO16(esi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002B1010
 * Original: 0x002B1010 - 0x002B102A (26 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B1010(void)
{

loc_002B1010: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(0x62EBAC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = ZX16(MEM16(eax + 4));
    PUSH32(esp, 0x14);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x002B1028u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002B1025u); } /* indirect call */
    }

loc_002B1028: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002B1030
 * Original: 0x002B1030 - 0x002B1036 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B1030(void)
{

loc_002B1030: ;
    eax = 0x720788;
    esp += 4; return; /* ret */

}

/**
 * sub_002B1040
 * Original: 0x002B1040 - 0x002B1046 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B1040(void)
{

loc_002B1040: ;
    eax = 0x720794;
    esp += 4; return; /* ret */

}

/**
 * sub_002B1050
 * Original: 0x002B1050 - 0x002B1057 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B1050(void)
{

loc_002B1050: ;
    MEM32(ecx) = 0x4AE714;
    esp += 4; return; /* ret */

}

/**
 * sub_002B1060
 * Original: 0x002B1060 - 0x002B106B (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B1060(void)
{

loc_002B1060: ;
    eax = MEM32(0x720788);
    MEM32(0x72078C) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_002B1070
 * Original: 0x002B1070 - 0x002B10DB (107 bytes, 29 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B1070(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B1070: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x3BCED8);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    MEM32(esp + 8) = esi;
    MEM32(esi) = 0x4C2FB8;
    ecx = MEM32(0x62EBAC);
    edx = MEM32(0x720788);
    eax = MEM32(ecx);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    MEM32(esp + 0x18) = edi;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x002B10ACu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002B10A9u); } /* indirect call */
    }

loc_002B10AC: ;
    ecx = MEM32(esp + 0xC);
    MEM32(0x720788) = edi;
    MEM32(0x720794) = edi;
    MEM32(0x72078C) = edi;
    MEM32(0x720790) = edi;
    MEM32(esi) = 0x4AE714;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002B10E0
 * Original: 0x002B10E0 - 0x002B112A (74 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B10E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B10E0: ;
    ecx = MEM32(0x720794);
    eax = MEM32(0x720788);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B1128; /* je: equal / zero */

loc_002B10F6: ;
    ecx = MEM32(0x62EBAC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x002B1102u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002B10FFu); } /* indirect call */
    }

loc_002B1102: ;
    ecx = MEM32(0x62EBAC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x14);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x002B110Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002B110Du); } /* indirect call */
    }

loc_002B110F: ;
    MEM32(0x720788) = eax;
    MEM32(0x72078C) = eax;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x720794) = eax;
    _fb = (uint32_t)(0xFFFFFFF0u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFF0u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x720790) = eax;

loc_002B1128: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002B1130
 * Original: 0x002B1130 - 0x002B113F (15 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B1130(void)
{

loc_002B1130: ;
    eax = ecx;
    MEM16(eax + 6) = 1;
    MEM32(eax) = 0x4C2FBC;
    esp += 4; return; /* ret */

}

/**
 * sub_002B1140
 * Original: 0x002B1140 - 0x002B1168 (40 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B1140(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B1140: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x002B1148u); RECOMP_ABI_CALL(0x002B1050u, sub_002B1050); /* call 0x002B1050 */

loc_002B1148: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002B1162; /* je: equal / zero */

loc_002B114F: ;
    edx = ZX16(MEM16(esi + 4));
    ecx = MEM32(0x62EBAC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x11);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x002B1162u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002B115Fu); } /* indirect call */
    }

loc_002B1162: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002B1170
 * Original: 0x002B1170 - 0x002B1199 (41 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B1170(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B1170: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM16(eax + 6) = 1;
    MEM32(eax) = 0x4C2FB8;
    MEM32(0x720788) = ecx;
    MEM32(0x720794) = ecx;
    MEM32(0x72078C) = ecx;
    MEM32(0x720790) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_002B11A0
 * Original: 0x002B11A0 - 0x002B11C8 (40 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B11A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B11A0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x002B11A8u); RECOMP_ABI_CALL(0x002B1070u, sub_002B1070); /* call 0x002B1070 */

loc_002B11A8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002B11C2; /* je: equal / zero */

loc_002B11AF: ;
    edx = ZX16(MEM16(esi + 4));
    ecx = MEM32(0x62EBAC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x14);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x002B11C2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002B11BFu); } /* indirect call */
    }

loc_002B11C2: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002B11D0
 * Original: 0x002B11D0 - 0x002B120C (60 bytes, 14 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B11D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B11D0: ;
    ecx = MEM32(0x62EBAC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x14);
    PUSH32(esp, 8);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x002B11DFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002B11DCu); } /* indirect call */
    }

loc_002B11DF: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM16(eax + 4) = 8;
    MEM16(eax + 6) = 1;
    MEM32(eax) = 0x4C2FB8;
    MEM32(0x720788) = ecx;
    MEM32(0x720794) = ecx;
    MEM32(0x72078C) = ecx;
    MEM32(0x720790) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_002B1210
 * Original: 0x002B1210 - 0x002B1220 (16 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B1210(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B1210: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = ecx;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_002B1230
 * Original: 0x002B1230 - 0x002B1237 (7 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B1230(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B1230: ;
    eax = MEM32(ecx + 8);
    _fb = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ecx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esp += 4; return; /* ret */

}

/**
 * sub_002B1240
 * Original: 0x002B1240 - 0x002B1246 (6 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B1240(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B1240: ;
    eax = MEM32(ecx + 4);
    _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002B1250
 * Original: 0x002B1250 - 0x002B1254 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B1250(void)
{

loc_002B1250: ;
    eax = MEM32(ecx + 0xC);
    esp += 4; return; /* ret */

}

/**
 * sub_002B1260
 * Original: 0x002B1260 - 0x002B126B (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B1260(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B1260: ;
    edx = MEM32(ecx + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    esp += 4; return; /* ret */

}

/**
 * sub_002B1270
 * Original: 0x002B1270 - 0x002B1278 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B1270(void)
{

loc_002B1270: ;
    MEM32(ecx + 8) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_002B1280
 * Original: 0x002B1280 - 0x002B12B2 (50 bytes, 17 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B1280(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_002B1280: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_002B128E; /* jne: not equal / not zero */

loc_002B1289: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0xC)) >> 32) & 1);
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_002B1291;

loc_002B128E: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0x1C)) >> 32) & 1);
    ecx = ecx + 0x1C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002B1291: ;
    edx = MEM32(esp + 8);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(ecx) = edx;
    edx = MEM32(esp + 0xC);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ecx + 4) = 0;
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0xC) = edx;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_002B12C0
 * Original: 0x002B12C0 - 0x002B1303 (67 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B12C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B12C0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ebx = MEM32(edi + 0x20);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_002B12EC; /* jle: less or equal (signed <=) */

loc_002B12CE: ;
    edi = edi;

loc_002B12D0: ;
    eax = MEM32(edi + 0x1C);
    edx = MEM32(edi);
    ecx = ebx;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x002B12E2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002B12DFu); } /* indirect call */
    }

loc_002B12E2: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B12F9; /* je: equal / zero */

loc_002B12E8: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002B12D0; /* jl: less (signed <) */

loc_002B12EC: ;
    MEM32(edi + 0x20) = 0;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_002B12F9: ;
    MEM32(edi + 8) = MEM32(edi + 8) | 2;
    _fa = (uint32_t)(MEM32(edi + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002B1310
 * Original: 0x002B1310 - 0x002B13E3 (211 bytes, 90 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B1310(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B1310: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B1320; /* je: equal / zero */

loc_002B131A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_002B1320: ;
    eax = MEM32(esi + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_002B13C0; /* je: equal / zero */

loc_002B132C: ;
    eax = MEM32(esi + 0x24);
    edx = MEM32(esi + 0x20);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x18);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_002B138B; /* jle: less or equal (signed <=) */

loc_002B1340: ;
    ecx = MEM32(esi + 0x20);
    edi = MEM32(esi + 0x24);
    eax = MEM32(esi + 0x20);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(esp + 0x14);
    edx = ebx + ecx;
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    _fb = (uint32_t)(MEM32(esi + 0x1C)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(esi + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x002B135Du); RECOMP_ABI_CALL(0x001020C0u, sub_001020C0); /* call 0x001020C0 */

loc_002B135D: ;
    ebp = MEM32(esi + 0x20);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + edi;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    MEM32(esi + 0x20) = ebp;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + edi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x002B1371u); RECOMP_ABI_CALL(0x002B12C0u, sub_002B12C0); /* call 0x002B12C0 */

loc_002B1371: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B13B7; /* jne: not equal / not zero */

loc_002B1375: ;
    ecx = MEM32(esi + 0x24);
    ebp = MEM32(esi + 0x20);
    edx = MEM32(esp + 0x18);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - ebp;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_002B1340; /* jg: greater (signed >) */

loc_002B1387: ;
    ebp = MEM32(esp + 0x18);

loc_002B138B: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esi + 0x20);
    edi = ebp;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - ebx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    _fb = (uint32_t)(MEM32(esi + 0x1C)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + MEM32(esi + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002B13A3u); RECOMP_ABI_CALL(0x001020C0u, sub_001020C0); /* call 0x001020C0 */

loc_002B13A3: ;
    eax = MEM32(esi + 0x20);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x20) = eax;
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_002B13B2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_002B13B7: ;
    POP32(esp, ebp);
    eax = ebx;
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_002B13C0: ;
    edi = MEM32(esp + 0x10);
    eax = MEM32(esp + 0xC);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x002B13D1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002B13CEu); } /* indirect call */
    }

loc_002B13D1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B13B2; /* je: equal / zero */

loc_002B13D5: ;
    ecx = MEM32(esi + 8);
    ecx = ecx | 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, edi);
    MEM32(esi + 8) = ecx;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002B13F0
 * Original: 0x002B13F0 - 0x002B14AE (190 bytes, 90 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B13F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B13F0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x34);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    PUSH32(esp, edi);
    if (CMP_GE(_fas, _fbs)) goto loc_002B1406; /* jge: greater or equal (signed >=) */

loc_002B13FE: ;
    MEM32(esi + 0x10) = ebx;
    MEM32(esi + 0x14) = ebx;
    goto loc_002B146E;

loc_002B1406: ;
    edi = MEM32(esi + 0x10);
    eax = MEM32(esi + 0x38);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_002B1423; /* jle: less or equal (signed <=) */

loc_002B1412: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi + 0x10) = ebx;
    MEM32(esi + 0x14) = ebx;
    MEM32(esi + 0x34) = eax;
    MEM32(esi + 0x38) = eax;
    goto loc_002B146E;

loc_002B1423: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_002B146E; /* jle: less or equal (signed <=) */

loc_002B1427: ;
    ebx = MEM32(esi + 0x30);
    eax = edi;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ebx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ebx)); }
    PUSH32(esp, ebp);
    ebp = edx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B143A; /* je: equal / zero */

loc_002B1436: ;
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - ebp;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    goto loc_002B143C;

loc_002B143A: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002B143C: ;
    eax = MEM32(esi + 0xC);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x002B144Bu); RECOMP_ABI_CALL(0x001020E0u, sub_001020E0); /* call 0x001020E0 */

loc_002B144B: ;
    ecx = MEM32(esi + 0x30);
    eax = edi;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM32(esi + 0x34) = ebx;
    POP32(esp, ebp);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    MEM32(esi + 0x10) = eax;
    MEM32(esi + 0x14) = eax;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002B146E: ;
    edi = MEM32(esi + 0x18);
    _fb = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - MEM32(esi + 0x10);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_002B149D; /* jle: less or equal (signed <=) */

loc_002B1478: ;
    edx = MEM32(esi + 0xC);
    eax = MEM32(esi + 0x10);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(esi);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x002B148Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002B1488u); } /* indirect call */
    }

loc_002B148B: ;
    edx = MEM32(esi + 0x14);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(esi + 0x14) = edx;
    if (CMP_NE(_fa, _fb)) goto loc_002B14A3; /* jne: not equal / not zero */

loc_002B1499: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002B1478; /* jl: less (signed <) */

loc_002B149D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_002B14A3: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    POP32(esp, esi);
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002B14B0
 * Original: 0x002B14B0 - 0x002B1587 (215 bytes, 93 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B14B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B14B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B14C0; /* je: equal / zero */

loc_002B14BA: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_002B14C0: ;
    eax = MEM32(esi + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_002B1564; /* je: equal / zero */

loc_002B14CC: ;
    eax = MEM32(esi + 0x14);
    edx = MEM32(esi + 0x10);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x18);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_002B1524; /* jle: less or equal (signed <=) */

loc_002B14E0: ;
    ecx = MEM32(esi + 0x10);
    edi = MEM32(esi + 0x14);
    edx = MEM32(esi + 0xC);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(esp + 0x14);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    eax = ebx + edx;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002B14FCu); RECOMP_ABI_CALL(0x001020C0u, sub_001020C0); /* call 0x001020C0 */

loc_002B14FC: ;
    edx = MEM32(esi + 0x10);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + edi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x10) = edx;
    PUSH32(esp, 0x002B1510u); RECOMP_ABI_CALL(0x002B13F0u, sub_002B13F0); /* call 0x002B13F0 */

loc_002B1510: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B1552; /* jne: not equal / not zero */

loc_002B1514: ;
    ecx = MEM32(esi + 0x14);
    eax = MEM32(esi + 0x10);
    edx = ebp;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_002B14E0; /* jg: greater (signed >) */

loc_002B1524: ;
    eax = MEM32(esi + 0x10);
    edx = MEM32(esi + 0xC);
    ecx = MEM32(esp + 0x14);
    edi = ebp;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - ebx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebx);
    PUSH32(esp, 0x002B153Eu); RECOMP_ABI_CALL(0x001020C0u, sub_001020C0); /* call 0x001020C0 */

loc_002B153E: ;
    eax = MEM32(esi + 0x10);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x10) = eax;
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_002B154D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_002B1552: ;
    eax = MEM32(esi + 8);
    eax = eax | 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, ebp);
    MEM32(esi + 8) = eax;
    eax = ebx;
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_002B1564: ;
    edi = MEM32(esp + 0x10);
    eax = MEM32(esp + 0xC);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x002B1575u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002B1572u); } /* indirect call */
    }

loc_002B1575: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B154D; /* je: equal / zero */

loc_002B1579: ;
    ecx = MEM32(esi + 8);
    ecx = ecx | 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, edi);
    MEM32(esi + 8) = ecx;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002B1590
 * Original: 0x002B1590 - 0x002B15AE (30 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B1590(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B1590: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    eax = esp + 7;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002B159Du); RECOMP_ABI_CALL(0x002B14B0u, sub_002B14B0); /* call 0x002B14B0 */

loc_002B159D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B15A9; /* jne: not equal / not zero */

loc_002B15A2: ;
    eax = ZX8(MEM8(esp + 3));
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_002B15A9: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002B15B0
 * Original: 0x002B15B0 - 0x002B15CB (27 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B15B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B15B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x002B15B8u); RECOMP_ABI_CALL(0x002B12C0u, sub_002B12C0); /* call 0x002B12C0 */

loc_002B15B8: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x10) = eax;
    MEM32(esi + 0x14) = eax;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi + 0x34) = eax;
    MEM32(esi + 0x38) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002B15D0
 * Original: 0x002B15D0 - 0x002B15F1 (33 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B15D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B15D0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x002B15D8u); RECOMP_ABI_CALL(0x002B12C0u, sub_002B12C0); /* call 0x002B12C0 */

loc_002B15D8: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x10) = eax;
    MEM32(esi + 0x14) = eax;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi + 0x34) = eax;
    MEM32(esi + 0x38) = eax;
    eax = MEM32(esi);
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0xC)); return; /* indirect tail jmp */

}

/**
 * sub_002B1600
 * Original: 0x002B1600 - 0x002B163F (63 bytes, 25 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B1600(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B1600: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x002B1609u); RECOMP_ABI_CALL(0x002B12C0u, sub_002B12C0); /* call 0x002B12C0 */

loc_002B1609: ;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esp + 0xC);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    MEM32(esi + 0x10) = eax;
    MEM32(esi + 0x14) = eax;
    eax = MEM32(esi);
    edi = edi | 0xFFFFFFFFu;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, edx);
    ecx = esi;
    MEM32(esi + 0x34) = edi;
    MEM32(esi + 0x38) = edi;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x002B162Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002B1628u); } /* indirect call */
    }

loc_002B162B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B163A; /* je: equal / zero */

loc_002B1630: ;
    MEM32(esi + 8) = MEM32(esi + 8) & 0xFFFFFFFEu;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0x34) = edi;
    MEM32(esi + 0x38) = edi;

loc_002B163A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002B1640
 * Original: 0x002B1640 - 0x002B174D (269 bytes, 90 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B1640(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B1640: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x50C524);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 0x404) = eax;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B1677; /* je: equal / zero */

loc_002B165C: ;
    eax = 1;
    POP32(esp, esi);
    ecx = MEM32(esp + 0x400);
    PUSH32(esp, 0x002B166Eu); RECOMP_ABI_CALL(0x000EB37Bu, sub_000EB37B); /* call 0x000EB37B */

loc_002B166E: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_002B1677: ;
    eax = MEM32(esi + 0x18);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x410);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B16DE; /* je: equal / zero */

loc_002B1689: ;
    eax = MEM32(esi + 0x14);
    _fb = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(esi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_002B16BA; /* jle: less or equal (signed <=) */

loc_002B1693: ;
    ecx = MEM32(esi + 0x14);
    _fb = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - MEM32(esi + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    PUSH32(esp, 0x002B16A2u); RECOMP_ABI_CALL(0x002B13F0u, sub_002B13F0); /* call 0x002B13F0 */

loc_002B16A2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B1728; /* jne: not equal / not zero */

loc_002B16AA: ;
    eax = MEM32(esi + 0x10);
    edx = MEM32(esi + 0x14);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = ebx;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_002B1693; /* jg: greater (signed >) */

loc_002B16BA: ;
    eax = MEM32(esi + 0x10);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - edi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM32(esi + 0x10) = eax;
    POP32(esp, ebx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    ecx = MEM32(esp + 0x400);
    PUSH32(esp, 0x002B16D5u); RECOMP_ABI_CALL(0x000EB37Bu, sub_000EB37B); /* call 0x000EB37B */

loc_002B16D5: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_002B16DE: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_002B1709; /* jle: less or equal (signed <=) */

loc_002B16E2: ;
    eax = ebx;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x400) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x400 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_002B16F2; /* jle: less or equal (signed <=) */

loc_002B16ED: ;
    eax = 0x400;

loc_002B16F2: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x002B16FFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002B16FCu); } /* indirect call */
    }

loc_002B16FF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B1728; /* je: equal / zero */

loc_002B1703: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_002B16E2; /* jg: greater (signed >) */

loc_002B1709: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    POP32(esp, edi);
    POP32(esp, ebx);
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    POP32(esp, esi);
    ecx = MEM32(esp + 0x400);
    PUSH32(esp, 0x002B171Fu); RECOMP_ABI_CALL(0x000EB37Bu, sub_000EB37B); /* call 0x000EB37B */

loc_002B171F: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_002B1728: ;
    ecx = MEM32(esi + 8);
    eax = 1;
    ecx = ecx | eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, edi);
    MEM32(esi + 8) = ecx;
    ecx = MEM32(esp + 0x408);
    POP32(esp, ebx);
    POP32(esp, esi);
    PUSH32(esp, 0x002B1744u); RECOMP_ABI_CALL(0x000EB37Bu, sub_000EB37B); /* call 0x000EB37B */

loc_002B1744: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002B1750
 * Original: 0x002B1750 - 0x002B1755 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B1750(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B1750: ;
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x14)); return; /* indirect tail jmp */

}

/**
 * sub_002B1760
 * Original: 0x002B1760 - 0x002B1765 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B1760(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B1760: ;
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x18)); return; /* indirect tail jmp */

}

/**
 * sub_002B1770
 * Original: 0x002B1770 - 0x002B1780 (16 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B1770(void)
{

loc_002B1770: ;
    eax = MEM32(ecx + 0x10);
    edx = MEM32(esp + 4);
    MEM32(ecx + 0x34) = eax;
    MEM32(ecx + 0x38) = edx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002B178D
 * Original: 0x002B178D - 0x002B1793 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B178D(void)
{

loc_002B178D: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_002B17A0
 * Original: 0x002B17A0 - 0x002B17AA (10 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B17A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B17A0: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ecx + 0x34) = eax;
    MEM32(ecx + 0x38) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_002B17B0
 * Original: 0x002B17B0 - 0x002B17B8 (8 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B17B0(void)
{

loc_002B17B0: ;
    eax = 1;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002B17C0
 * Original: 0x002B17C0 - 0x002B17C4 (4 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B17C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B17C0: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 4; return; /* ret */

}

/**
 * sub_002B17D0
 * Original: 0x002B17D0 - 0x002B17D4 (4 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B17D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B17D0: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 4; return; /* ret */

}

/**
 * sub_002B17E0
 * Original: 0x002B17E0 - 0x002B1825 (69 bytes, 21 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B17E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B17E0: ;
    edx = MEM32(esp + 8);
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 8) = ecx;
    MEM16(eax + 6) = 1;
    MEM32(eax) = 0x4C2FC0;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 0x18) = ecx;
    MEM32(eax + 0x1C) = ecx;
    MEM32(eax + 0x20) = ecx;
    MEM32(eax + 0x24) = ecx;
    MEM32(eax + 0x28) = ecx;
    ecx = MEM32(esp + 4);
    MEM32(eax + 0x2C) = ecx;
    ecx = ecx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 0x30) = edx;
    MEM32(eax + 0x34) = ecx;
    MEM32(eax + 0x38) = ecx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002B1830
 * Original: 0x002B1830 - 0x002B1858 (40 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B1830(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B1830: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x002B1838u); RECOMP_ABI_CALL(0x001FB3F0u, sub_001FB3F0); /* call 0x001FB3F0 */

loc_002B1838: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002B1852; /* je: equal / zero */

loc_002B183F: ;
    edx = ZX16(MEM16(esi + 4));
    ecx = MEM32(0x62EBAC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x13);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x002B1852u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002B184Fu); } /* indirect call */
    }

loc_002B1852: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002B1860
 * Original: 0x002B1860 - 0x002B1872 (18 bytes, 6 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B1860(void)
{

loc_002B1860: ;
    edx = MEM32(esp + 8);
    eax = ecx;
    ecx = MEM32(esp + 4);
    MEM32(eax) = ecx;
    MEM32(eax + 4) = edx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002B1880
 * Original: 0x002B1880 - 0x002B1881 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B1880(void)
{

loc_002B1880: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002B1890
 * Original: 0x002B1890 - 0x002B1893 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B1890(void)
{

loc_002B1890: ;
    eax = MEM32(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002B18A0
 * Original: 0x002B18A0 - 0x002B18A9 (9 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B18A0(void)
{

loc_002B18A0: ;
    eax = MEM32(ecx + 4);
    ecx = MEM32(ecx);
    eax = ecx + eax * 4;
    esp += 4; return; /* ret */

}

/**
 * sub_002B18B0
 * Original: 0x002B18B0 - 0x002B18BC (12 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B18B0(void)
{

loc_002B18B0: ;
    eax = MEM32(ecx);
    ecx = MEM32(esp + 4);
    eax = eax + ecx * 8;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002B18C0
 * Original: 0x002B18C0 - 0x002B1901 (65 bytes, 32 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B18C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B18C0: ;
    edx = MEM32(ecx);
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    ebx = MEM32(edx);
    PUSH32(esp, ebp);
    ebp = MEM32(ebx + eax * 4);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    if (CMP_L(_fas, _fbs)) goto loc_002B18FA; /* jl: less (signed <) */

loc_002B18D5: ;
    esi = ebp;

loc_002B18D7: ;
    edi = esi;
    esi = MEM32(ebx + edi * 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002B18D7; /* jge: greater or equal (signed >=) */

loc_002B18E0: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002B18FA; /* jl: less (signed <) */

loc_002B18E4: ;
    edx = MEM32(edx);
    esi = MEM32(edx + eax * 4);
    eax = edx + eax * 4;
    MEM32(eax) = edi;
    edx = MEM32(ecx);
    ebx = MEM32(edx);
    _fa = (uint32_t)(MEM32(ebx + esi * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + esi * 4), 0 (32-bit) */
    eax = esi;
    if (CMP_GE(_fas, _fbs)) goto loc_002B18E4; /* jge: greater or equal (signed >=) */

loc_002B18FA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002B1910
 * Original: 0x002B1910 - 0x002B1959 (73 bytes, 34 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B1910(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B1910: ;
    eax = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ecx);
    PUSH32(esp, edi);
    edi = MEM32(esi);
    ebx = MEM32(edi + eax * 4);
    esi = edi;
    if (CMP_GE(_fas, _fbs)) goto loc_002B1942; /* jge: greater or equal (signed >=) */

loc_002B1928: ;
    edi = MEM32(edi + edx * 4);
    ebx = MEM32(esi + eax * 4);
    esi = esi + eax * 4;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + edi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = ebx;
    ecx = MEM32(ecx);
    ecx = MEM32(ecx);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ecx + edx * 4) = eax;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_002B1942: ;
    edi = MEM32(esi + edx * 4);
    esi = esi + edx * 4;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + ebx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = edi;
    ecx = MEM32(ecx);
    ecx = MEM32(ecx);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ecx + eax * 4) = edx;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002B1960
 * Original: 0x002B1960 - 0x002B199A (58 bytes, 27 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B1960(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B1960: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x002B196Fu); RECOMP_ABI_CALL(0x002B18C0u, sub_002B18C0); /* call 0x002B18C0 */

loc_002B196F: ;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x002B197Du); RECOMP_ABI_CALL(0x002B18C0u, sub_002B18C0); /* call 0x002B18C0 */

loc_002B197D: ;
    ebx = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B1992; /* je: equal / zero */

loc_002B1983: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x002B198Cu); RECOMP_ABI_CALL(0x002B1910u, sub_002B1910); /* call 0x002B1910 */

loc_002B198C: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    eax = edi;
    if (CMP_L(_fas, _fbs)) goto loc_002B1994; /* jl: less (signed <) */

loc_002B1992: ;
    eax = ebx;

loc_002B1994: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002B19A0
 * Original: 0x002B19A0 - 0x002B1A15 (117 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B19A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B19A0: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx);
    edx = MEM32(esi);
    PUSH32(esp, edi);
    edi = MEM32(esi + 4);
    esi = edx;
    eax = edx;
    edi = esi + edi * 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B19DA; /* je: equal / zero */

loc_002B19B4: ;
    esi = MEM32(eax);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002B19D3; /* jl: less (signed <) */

loc_002B19BA: ;
    _fa = (uint32_t)(MEM32(edx + esi * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + esi * 4), 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002B19D3; /* jl: less (signed <) */

loc_002B19C0: ;
    esi = MEM32(eax);
    edx = MEM32(edx + esi * 4);
    MEM32(eax) = edx;
    edx = MEM32(ecx);
    edx = MEM32(edx);
    esi = MEM32(eax);
    _fa = (uint32_t)(MEM32(edx + esi * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + esi * 4), 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002B19C0; /* jge: greater or equal (signed >=) */

loc_002B19D3: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B19B4; /* jne: not equal / not zero */

loc_002B19DA: ;
    edx = MEM32(ecx + 4);
    eax = MEM32(edx);
    esi = MEM32(edx + 4);
    edx = eax;
    esi = edx + esi * 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B1A12; /* je: equal / zero */

loc_002B19EB: ;
    edx = MEM32(ecx);
    edx = MEM32(edx);
    /* nop */

loc_002B19F0: ;
    edi = MEM32(eax);
    _fa = (uint32_t)(MEM32(edx + edi * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + edi * 4), 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002B1A0B; /* jl: less (signed <) */

loc_002B19F8: ;
    edi = MEM32(eax);
    edx = MEM32(edx + edi * 4);
    MEM32(eax) = edx;
    edx = MEM32(ecx);
    edx = MEM32(edx);
    edi = MEM32(eax);
    _fa = (uint32_t)(MEM32(edx + edi * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + edi * 4), 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002B19F8; /* jge: greater or equal (signed >=) */

loc_002B1A0B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B19F0; /* jne: not equal / not zero */

loc_002B1A12: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002B1A20
 * Original: 0x002B1A20 - 0x002B1A47 (39 bytes, 15 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B1A20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B1A20: ;
    eax = MEM32(ecx + 8);
    edx = MEM32(esp + 4);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002B1A44; /* jge: greater or equal (signed >=) */

loc_002B1A30: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002B1A38; /* jl: less (signed <) */

loc_002B1A36: ;
    eax = edx;

loc_002B1A38: ;
    PUSH32(esp, 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002B1A41u); RECOMP_ABI_CALL(0x00101B30u, sub_00101B30); /* call 0x00101B30 */

loc_002B1A41: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002B1A44: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002B1A50
 * Original: 0x002B1A50 - 0x002B1D2B (731 bytes, 265 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B1A50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B1A50: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    ebx = MEM32(esi);
    eax = MEM32(ebx + 8);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x1C);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002B1A7D; /* jge: greater or equal (signed >=) */

loc_002B1A69: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002B1A71; /* jl: less (signed <) */

loc_002B1A6F: ;
    eax = edi;

loc_002B1A71: ;
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x002B1A7Au); RECOMP_ABI_CALL(0x00101B30u, sub_00101B30); /* call 0x00101B30 */

loc_002B1A7A: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002B1A7D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(ebx + 4) = edi;
    if (CMP_LE(_fas, _fbs)) goto loc_002B1AA0; /* jle: less or equal (signed <=) */

loc_002B1A86: ;
    goto loc_002B1A90;

    /* nop */
    /* nop */

loc_002B1A90: ;
    ecx = MEM32(esi);
    edx = MEM32(ecx);
    MEM32(edx + eax * 4) = 0xFFFFFFFFu;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002B1A90; /* jl: less (signed <) */

loc_002B1AA0: ;
    eax = MEM32(esi + 4);
    ebx = MEM32(esp + 0x18);
    MEM32(eax + 4) = 0;
    edx = MEM32(esi + 4);
    eax = MEM32(edx + 8);
    ecx = MEM32(ebx + 4);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002B1AD4; /* jge: greater or equal (signed >=) */

loc_002B1AC0: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002B1AC8; /* jge: greater or equal (signed >=) */

loc_002B1AC6: ;
    ecx = eax;

loc_002B1AC8: ;
    PUSH32(esp, 4);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x002B1AD1u); RECOMP_ABI_CALL(0x00101B30u, sub_00101B30); /* call 0x00101B30 */

loc_002B1AD1: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002B1AD4: ;
    ebp = MEM32(esi + 4);
    eax = MEM32(ebp + 8);
    edi = MEM32(ebx + 4);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002B1AFA; /* jge: greater or equal (signed >=) */

loc_002B1AE6: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002B1AEE; /* jl: less (signed <) */

loc_002B1AEC: ;
    eax = edi;

loc_002B1AEE: ;
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x002B1AF7u); RECOMP_ABI_CALL(0x00101B30u, sub_00101B30); /* call 0x00101B30 */

loc_002B1AF7: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002B1AFA: ;
    MEM32(ebp + 4) = edi;
    eax = MEM32(ebx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x1C) = 0;
    if (CMP_LE(_fas, _fbs)) goto loc_002B1D15; /* jle: less or equal (signed <=) */

loc_002B1B10: ;
    goto loc_002B1B16;

loc_002B1B12: ;
    ebx = MEM32(esp + 0x18);

loc_002B1B16: ;
    ecx = MEM32(ebx);
    edx = MEM32(esp + 0x1C);
    eax = ecx + edx * 8;
    ecx = MEM32(eax + 4);
    edx = MEM32(eax);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    eax = MEM32(esi);
    eax = MEM32(eax);
    if (CMP_GE(_fas, _fbs)) goto loc_002B1C1A; /* jge: greater or equal (signed >=) */

loc_002B1B30: ;
    ebx = edx * 4;
    ebp = MEM32(ebx + eax);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    edi = edx;
    MEM32(esp + 0x10) = ebp;
    if (CMP_L(_fas, _fbs)) goto loc_002B1B7D; /* jl: less (signed <) */

loc_002B1B44: ;
    edi = MEM32(esi);
    ebp = MEM32(edi);
    goto loc_002B1B50;

    /* nop */

loc_002B1B50: ;
    edi = MEM32(ebx + eax);
    ebx = edi * 4;
    _fa = (uint32_t)(MEM32(ebx + ebp)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + ebp), 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002B1B50; /* jge: greater or equal (signed >=) */

loc_002B1B60: ;
    ebp = MEM32(esp + 0x10);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002B1B7D; /* jl: less (signed <) */

loc_002B1B68: ;
    eax = MEM32(esi);
    eax = MEM32(eax);
    ebx = eax + edx * 4;
    edx = MEM32(ebx);
    MEM32(ebx) = edi;
    eax = MEM32(esi);
    eax = MEM32(eax);
    _fa = (uint32_t)(MEM32(eax + edx * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + edx * 4), 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002B1B68; /* jge: greater or equal (signed >=) */

loc_002B1B7D: ;
    ebx = MEM32(esi);
    ebx = MEM32(ebx);
    edi = ecx * 4;
    ebp = MEM32(edi + ebx);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    eax = ecx;
    MEM32(esp + 0x10) = ebp;
    if (CMP_L(_fas, _fbs)) goto loc_002B1BCD; /* jl: less (signed <) */

loc_002B1B95: ;
    ecx = MEM32(esi);
    ebp = MEM32(ecx);
    /* nop */

loc_002B1BA0: ;
    ecx = MEM32(edi + ebx);
    edi = ecx * 4;
    _fa = (uint32_t)(MEM32(edi + ebp)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + ebp), 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002B1BA0; /* jge: greater or equal (signed >=) */

loc_002B1BB0: ;
    ebp = MEM32(esp + 0x10);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002B1BCD; /* jl: less (signed <) */

loc_002B1BB8: ;
    edi = MEM32(esi);
    edi = MEM32(edi);
    edi = edi + eax * 4;
    eax = MEM32(edi);
    MEM32(edi) = ecx;
    edi = MEM32(esi);
    edi = MEM32(edi);
    _fa = (uint32_t)(MEM32(edi + eax * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + eax * 4), 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002B1BB8; /* jge: greater or equal (signed >=) */

loc_002B1BCD: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B1C09; /* je: equal / zero */

loc_002B1BD1: ;
    ecx = MEM32(esi);
    edi = MEM32(ecx);
    ebx = MEM32(edi + edx * 4);
    ecx = edi;
    if (CMP_GE(_fas, _fbs)) goto loc_002B1BF2; /* jge: greater or equal (signed >=) */

loc_002B1BDC: ;
    ebx = MEM32(ecx + edx * 4);
    edi = MEM32(edi + eax * 4);
    ecx = ecx + edx * 4;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + edi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx) = ebx;
    ecx = MEM32(esi);
    ecx = MEM32(ecx);
    MEM32(ecx + eax * 4) = edx;
    goto loc_002B1C03;

loc_002B1BF2: ;
    edi = MEM32(ecx + eax * 4);
    ecx = ecx + eax * 4;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + ebx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx) = edi;
    ecx = MEM32(esi);
    ecx = MEM32(ecx);
    MEM32(ecx + edx * 4) = eax;

loc_002B1C03: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002B1C09; /* jge: greater or equal (signed >=) */

loc_002B1C07: ;
    eax = edx;

loc_002B1C09: ;
    edx = MEM32(esi + 4);
    ecx = MEM32(edx);
    edx = MEM32(esp + 0x1C);
    MEM32(ecx + edx * 4) = eax;
    goto loc_002B1CFD;

loc_002B1C1A: ;
    ebx = ecx * 4;
    ebp = MEM32(ebx + eax);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    edi = ecx;
    MEM32(esp + 0x10) = ebp;
    if (CMP_L(_fas, _fbs)) goto loc_002B1C65; /* jl: less (signed <) */

loc_002B1C2E: ;
    edi = MEM32(esi);
    ebp = MEM32(edi);

loc_002B1C32: ;
    edi = MEM32(ebx + eax);
    ebx = edi * 4;
    _fa = (uint32_t)(MEM32(ebx + ebp)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + ebp), 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002B1C32; /* jge: greater or equal (signed >=) */

loc_002B1C42: ;
    ebp = MEM32(esp + 0x10);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002B1C65; /* jl: less (signed <) */

loc_002B1C4A: ;
    /* nop */

loc_002B1C50: ;
    eax = MEM32(esi);
    eax = MEM32(eax);
    ebx = eax + ecx * 4;
    ecx = MEM32(ebx);
    MEM32(ebx) = edi;
    eax = MEM32(esi);
    eax = MEM32(eax);
    _fa = (uint32_t)(MEM32(eax + ecx * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + ecx * 4), 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002B1C50; /* jge: greater or equal (signed >=) */

loc_002B1C65: ;
    ebx = MEM32(esi);
    ebx = MEM32(ebx);
    edi = edx * 4;
    ebp = MEM32(edi + ebx);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    eax = edx;
    MEM32(esp + 0x10) = ebp;
    if (CMP_L(_fas, _fbs)) goto loc_002B1CB5; /* jl: less (signed <) */

loc_002B1C7D: ;
    edx = MEM32(esi);
    ebp = MEM32(edx);

loc_002B1C81: ;
    edx = MEM32(edi + ebx);
    edi = edx * 4;
    _fa = (uint32_t)(MEM32(edi + ebp)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + ebp), 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002B1C81; /* jge: greater or equal (signed >=) */

loc_002B1C91: ;
    ebp = MEM32(esp + 0x10);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002B1CB5; /* jl: less (signed <) */

loc_002B1C99: ;
    /* nop */

loc_002B1CA0: ;
    edi = MEM32(esi);
    edi = MEM32(edi);
    edi = edi + eax * 4;
    eax = MEM32(edi);
    MEM32(edi) = edx;
    edi = MEM32(esi);
    edi = MEM32(edi);
    _fa = (uint32_t)(MEM32(edi + eax * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + eax * 4), 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002B1CA0; /* jge: greater or equal (signed >=) */

loc_002B1CB5: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B1CF1; /* je: equal / zero */

loc_002B1CB9: ;
    edx = MEM32(esi);
    edi = MEM32(edx);
    ebx = MEM32(edi + ecx * 4);
    edx = edi;
    if (CMP_GE(_fas, _fbs)) goto loc_002B1CDA; /* jge: greater or equal (signed >=) */

loc_002B1CC4: ;
    ebx = MEM32(edx + ecx * 4);
    edi = MEM32(edi + eax * 4);
    edx = edx + ecx * 4;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + edi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx) = ebx;
    edx = MEM32(esi);
    edx = MEM32(edx);
    MEM32(edx + eax * 4) = ecx;
    goto loc_002B1CEB;

loc_002B1CDA: ;
    edi = MEM32(edx + eax * 4);
    edx = edx + eax * 4;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + ebx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx) = edi;
    edx = MEM32(esi);
    edx = MEM32(edx);
    MEM32(edx + ecx * 4) = eax;

loc_002B1CEB: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002B1CF1; /* jge: greater or equal (signed >=) */

loc_002B1CEF: ;
    eax = ecx;

loc_002B1CF1: ;
    ecx = MEM32(esi + 4);
    edx = MEM32(ecx);
    ecx = MEM32(esp + 0x1C);
    MEM32(edx + ecx * 4) = eax;

loc_002B1CFD: ;
    eax = MEM32(esp + 0x1C);
    edx = MEM32(esp + 0x18);
    ecx = MEM32(edx + 4);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x1C) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_002B1B12; /* jl: less (signed <) */

loc_002B1D15: ;
    ecx = esi;
    PUSH32(esp, 0x002B1D1Cu); RECOMP_ABI_CALL(0x002B19A0u, sub_002B19A0); /* call 0x002B19A0 */

loc_002B1D1C: ;
    POP32(esp, edi);
    MEM32(esi + 8) = 0;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002B1D30
 * Original: 0x002B1D30 - 0x002B1E0D (221 bytes, 87 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B1D30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B1D30: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = ecx;
    eax = MEM32(ebx + 4);
    PUSH32(esp, ebp);
    ebp = MEM32(eax + 4);
    PUSH32(esp, edi);
    edi = MEM32(ebx + 8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002B1D5A; /* jge: greater or equal (signed >=) */

loc_002B1D43: ;
    eax = MEM32(eax);
    eax = eax + edi * 4;

loc_002B1D48: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esp + 0xC) = ecx;
    if (CMP_GE(_fas, _fbs)) goto loc_002B1D63; /* jge: greater or equal (signed >=) */

loc_002B1D52: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002B1D48; /* jl: less (signed <) */

loc_002B1D5A: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_002B1D63: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x18);
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(esi + 8), 0x7FFFFFFF (32-bit) */
    MEM32(esi + 4) = 0;
    if (TEST_NZ(_fa, _fb)) goto loc_002B1D89; /* jne: not equal / not zero */

loc_002B1D78: ;
    PUSH32(esp, 4);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x002B1D82u); RECOMP_ABI_CALL(0x00101B30u, sub_00101B30); /* call 0x00101B30 */

loc_002B1D82: ;
    ecx = MEM32(esp + 0x1C);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002B1D89: ;
    edx = MEM32(esi + 4);
    eax = MEM32(esi);
    MEM32(eax + edx * 4) = edi;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = MEM32(ebx + 4);
    eax = edi + 1;
    MEM32(ebx + 8) = eax;
    edx = MEM32(edx);
    MEM32(edx + edi * 4) = 0xFFFFFFFFu;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002B1E03; /* jge: greater or equal (signed >=) */

loc_002B1DAC: ;
    /* nop */

loc_002B1DB0: ;
    eax = MEM32(ebx + 4);
    edx = MEM32(eax);
    _fa = (uint32_t)(MEM32(edx + edi * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + edi * 4), ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B1DFE; /* jne: not equal / not zero */

loc_002B1DBA: ;
    edx = MEM32(esi + 8);
    eax = MEM32(esi + 4);
    edx = edx & 0x7FFFFFFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B1DE7; /* jne: not equal / not zero */

loc_002B1DCA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B1DD2; /* je: equal / zero */

loc_002B1DCE: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_002B1DD7;

loc_002B1DD2: ;
    eax = 1;

loc_002B1DD7: ;
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x002B1DE0u); RECOMP_ABI_CALL(0x00101B30u, sub_00101B30); /* call 0x00101B30 */

loc_002B1DE0: ;
    ecx = MEM32(esp + 0x1C);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002B1DE7: ;
    eax = MEM32(esi + 4);
    edx = MEM32(esi);
    MEM32(edx + eax * 4) = edi;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(ebx + 4);
    edx = MEM32(eax);
    MEM32(edx + edi * 4) = 0xFFFFFFFFu;

loc_002B1DFE: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002B1DB0; /* jl: less (signed <) */

loc_002B1E03: ;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002B1E10
 * Original: 0x002B1E10 - 0x002B1E40 (48 bytes, 21 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B1E10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B1E10: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 8);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002B1E38; /* jge: greater or equal (signed >=) */

loc_002B1E24: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002B1E2C; /* jl: less (signed <) */

loc_002B1E2A: ;
    eax = esi;

loc_002B1E2C: ;
    PUSH32(esp, 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x002B1E35u); RECOMP_ABI_CALL(0x00101B30u, sub_00101B30); /* call 0x00101B30 */

loc_002B1E35: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002B1E38: ;
    MEM32(edi + 4) = esi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002B1E40
 * Original: 0x002B1E40 - 0x002B1EC9 (137 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B1E40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B1E40: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x3BCEF8);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    MEM32(esp + 0xC) = esi;
    eax = MEM32(esi + 4);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esp + 0x18) = ebx;
    if (CMP_LE(_fas, _fbs)) goto loc_002B1E8C; /* jle: less or equal (signed <=) */

loc_002B1E6E: ;
    edi = edi;

loc_002B1E70: ;
    eax = MEM32(esi);
    eax = MEM32(ebx + eax);
    ecx = MEM32(0x62EBAC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x002B1E81u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002B1E7Eu); } /* indirect call */
    }

loc_002B1E81: ;
    eax = MEM32(esi + 4);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0xC;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002B1E70; /* jl: less (signed <) */

loc_002B1E8C: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x18) = 0xFFFFFFFFu;
    if ((((uint32_t)((uint32_t)(_fas) - (uint32_t)(_fbs)) >> 31) != 0)) goto loc_002B1EB7; /* js: sign (negative) */

loc_002B1E9B: ;
    ecx = MEM32(0x62EBAC);
    edx = MEM32(ecx);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax + eax * 2;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x10);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    eax = MEM32(esi);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x002B1EB7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002B1EB4u); } /* indirect call */
    }

loc_002B1EB7: ;
    ecx = MEM32(esp + 0x10);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002B1ED0
 * Original: 0x002B1ED0 - 0x002B1FEC (284 bytes, 111 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002B1ED0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B1ED0: ;
    PUSH32(esp, ebp);
    ebp = ecx;
    eax = MEM32(ebp);
    ecx = MEM32(eax + 4);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_LE(_fas, _fbs)) goto loc_002B1F94; /* jle: less or equal (signed <=) */

loc_002B1EE5: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x14);
    /* nop */

loc_002B1EF0: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(MEM32(ecx + esi * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + esi * 4), 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002B1F68; /* jge: greater or equal (signed >=) */

loc_002B1EF8: ;
    edi = MEM32(ebx + 4);
    eax = MEM32(ebx + 8);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002B1F1C; /* jge: greater or equal (signed >=) */

loc_002B1F08: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002B1F10; /* jl: less (signed <) */

loc_002B1F0E: ;
    eax = edi;

loc_002B1F10: ;
    PUSH32(esp, 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x002B1F19u); RECOMP_ABI_CALL(0x00101B30u, sub_00101B30); /* call 0x00101B30 */

loc_002B1F19: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002B1F1C: ;
    eax = MEM32(ebx);
    MEM32(ebx + 4) = edi;
    ecx = MEM32(ebp);
    edx = edi + edi * 2;
    edi = eax + edx * 4 + -12;
    edx = MEM32(ecx);
    eax = MEM32(edx + esi * 4);
    ecx = MEM32(0x62EBAC);
    edx = MEM32(ecx);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x002B1F42u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002B1F40u); } /* indirect call */
    }

loc_002B1F42: ;
    MEM32(edi) = eax;
    ecx = MEM32(ebp);
    edx = MEM32(ecx);
    ecx = MEM32(edx + esi * 4);
    ecx = (uint32_t)(-(int32_t)ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(edi + 4) = ecx;
    MEM32(eax) = esi;
    MEM32(edi + 8) = 1;
    edx = MEM32(ebx + 4);
    eax = MEM32(ebp);
    ecx = MEM32(eax);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ecx + esi * 4) = edx;
    goto loc_002B1F84;

loc_002B1F68: ;
    eax = MEM32(eax);
    edx = MEM32(eax + esi * 4);
    eax = MEM32(eax + edx * 4);
    ecx = MEM32(ebx);
    eax = eax + eax * 2;
    edx = MEM32(ecx + eax * 4 + 8);
    eax = ecx + eax * 4;
    ecx = MEM32(eax);
    MEM32(ecx + edx * 4) = esi;
    MEM32(eax + 8) = MEM32(eax + 8) + 1;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_002B1F84: ;
    eax = MEM32(ebp);
    ecx = MEM32(eax + 4);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002B1EF0; /* jl: less (signed <) */

loc_002B1F93: ;
    POP32(esp, ebx);

loc_002B1F94: ;
    esi = MEM32(ebp);
    eax = MEM32(esi + 8);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fas >= 0)) goto loc_002B1FBB; /* jge: greater or equal (signed >=) */

loc_002B1FA3: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    SET_LO8(edx, (CMP_LE(_fas, _fbs)) ? 1 : 0); /* setle */
    PUSH32(esp, 4);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x002B1FB8u); RECOMP_ABI_CALL(0x00101B30u, sub_00101B30); /* call 0x00101B30 */

loc_002B1FB8: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002B1FBB: ;
    MEM32(esi + 4) = edi;
    ebp = MEM32(ebp + 4);
    eax = MEM32(ebp + 8);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fas >= 0)) goto loc_002B1FE3; /* jge: greater or equal (signed >=) */

loc_002B1FCB: ;
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
    PUSH32(esp, ebp);
    PUSH32(esp, 0x002B1FE0u); RECOMP_ABI_CALL(0x00101B30u, sub_00101B30); /* call 0x00101B30 */

loc_002B1FE0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002B1FE3: ;
    MEM32(ebp + 4) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002B1FF0
 * Original: 0x002B1FF0 - 0x002B2016 (38 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B1FF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B1FF0: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B2007; /* je: equal / zero */

loc_002B1FF4: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002B1FFAu); RECOMP_ABI_CALL(0x00101FF0u, sub_00101FF0); /* call 0x00101FF0 */

loc_002B1FFA: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x002B2006u); RECOMP_ABI_CALL(0x002B1310u, sub_002B1310); /* call 0x002B1310 */

loc_002B2006: ;
    esp += 4; return; /* ret */

loc_002B2007: ;
    PUSH32(esp, 6);
    PUSH32(esp, 0x4C2FDC);
    ecx = edi;
    PUSH32(esp, 0x002B2015u); RECOMP_ABI_CALL(0x002B1310u, sub_002B1310); /* call 0x002B1310 */

loc_002B2015: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002B2020
 * Original: 0x002B2020 - 0x002B2036 (22 bytes, 6 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B2020(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B2020: ;
    eax = ecx;
    ecx = MEM32(esp + 4);
    MEM32(eax) = 0x4C2FE4;
    MEM32(eax + 8) = ecx;
    MEM16(ecx + 6) = MEM16(ecx + 6) + 1;
    _fa = (uint32_t)(MEM16(ecx + 6)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002B2040
 * Original: 0x002B2040 - 0x002B2095 (85 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B2040(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B2040: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x3BCF18);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 4) = esi;
    MEM32(esi) = 0x4C2FE4;
    ecx = MEM32(esi + 8);
    MEM16(ecx + 6) = MEM16(ecx + 6) - 1;
    _fa = (uint32_t)(MEM16(ecx + 6)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(ecx + 6)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 6), 0 (16-bit) */
    MEM32(esp + 0x10) = 0;
    if (CMP_NE(_fa, _fb)) goto loc_002B207F; /* jne: not equal / not zero */

loc_002B2079: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x002B207Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002B207Du); } /* indirect call */
    }

loc_002B207F: ;
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
 * sub_002B20A0
 * Original: 0x002B20A0 - 0x002B20A8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B20A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B20A0: ;
    ecx = MEM32(ecx + 8);
    g_seh_ebp = ebp; sub_002B1260(); return; /* tail jmp 0x002B1260 */

}

/**
 * sub_002B20B0
 * Original: 0x002B20B0 - 0x002B2118 (104 bytes, 30 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B20B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B20B0: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x50C524);
    PUSH32(esp, esi);
    MEM32(esp + 0x404) = eax;
    eax = MEM32(esp + 0x40C);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x4C2FE8);
    esi = ecx;
    ecx = esp + 0x10;
    PUSH32(esp, 0x400);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002B20E2u); RECOMP_ABI_CALL(0x00101E10u, sub_00101E10); /* call 0x00101E10 */

loc_002B20E2: ;
    edi = MEM32(esi + 8);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, 0x002B20EFu); RECOMP_ABI_CALL(0x00101FF0u, sub_00101FF0); /* call 0x00101FF0 */

loc_002B20EF: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x002B20FFu); RECOMP_ABI_CALL(0x002B1310u, sub_002B1310); /* call 0x002B1310 */

loc_002B20FF: ;
    ecx = MEM32(esp + 0x408);
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    PUSH32(esp, 0x002B210Fu); RECOMP_ABI_CALL(0x000EB37Bu, sub_000EB37B); /* call 0x000EB37B */

loc_002B210F: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002B2120
 * Original: 0x002B2120 - 0x002B2138 (24 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B2120(void)
{

loc_002B2120: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 8);
    PUSH32(esp, 1);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002B2132u); RECOMP_ABI_CALL(0x002B1310u, sub_002B1310); /* call 0x002B1310 */

loc_002B2132: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002B2140
 * Original: 0x002B2140 - 0x002B2180 (64 bytes, 29 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B2140(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B2140: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    esi = ecx;
    ebx = MEM32(esi + 8);
    if (CMP_EQ(_fa, _fb)) goto loc_002B216A; /* je: equal / zero */

loc_002B2150: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x002B2156u); RECOMP_ABI_CALL(0x00101FF0u, sub_00101FF0); /* call 0x00101FF0 */

loc_002B2156: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x002B2162u); RECOMP_ABI_CALL(0x002B1310u, sub_002B1310); /* call 0x002B1310 */

loc_002B2162: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_002B216A: ;
    PUSH32(esp, 6);
    PUSH32(esp, 0x4C2FDC);
    ecx = ebx;
    PUSH32(esp, 0x002B2178u); RECOMP_ABI_CALL(0x002B1310u, sub_002B1310); /* call 0x002B1310 */

loc_002B2178: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002B2180
 * Original: 0x002B2180 - 0x002B21E9 (105 bytes, 30 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B2180(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B2180: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x50C524);
    PUSH32(esp, esi);
    MEM32(esp + 0x404) = eax;
    eax = (uint32_t)(int32_t)SMEM16(esp + 0x40C);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x4C2FEC);
    esi = ecx;
    ecx = esp + 0x10;
    PUSH32(esp, 0x400);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002B21B3u); RECOMP_ABI_CALL(0x00101E10u, sub_00101E10); /* call 0x00101E10 */

loc_002B21B3: ;
    edi = MEM32(esi + 8);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, 0x002B21C0u); RECOMP_ABI_CALL(0x00101FF0u, sub_00101FF0); /* call 0x00101FF0 */

loc_002B21C0: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x002B21D0u); RECOMP_ABI_CALL(0x002B1310u, sub_002B1310); /* call 0x002B1310 */

loc_002B21D0: ;
    ecx = MEM32(esp + 0x408);
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    PUSH32(esp, 0x002B21E0u); RECOMP_ABI_CALL(0x000EB37Bu, sub_000EB37B); /* call 0x000EB37B */

loc_002B21E0: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002B21F0
 * Original: 0x002B21F0 - 0x002B2259 (105 bytes, 30 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B21F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B21F0: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x50C524);
    PUSH32(esp, esi);
    MEM32(esp + 0x404) = eax;
    eax = ZX16(MEM16(esp + 0x40C));
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x4C2FF0);
    esi = ecx;
    ecx = esp + 0x10;
    PUSH32(esp, 0x400);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002B2223u); RECOMP_ABI_CALL(0x00101E10u, sub_00101E10); /* call 0x00101E10 */

loc_002B2223: ;
    edi = MEM32(esi + 8);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, 0x002B2230u); RECOMP_ABI_CALL(0x00101FF0u, sub_00101FF0); /* call 0x00101FF0 */

loc_002B2230: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x002B2240u); RECOMP_ABI_CALL(0x002B1310u, sub_002B1310); /* call 0x002B1310 */

loc_002B2240: ;
    ecx = MEM32(esp + 0x408);
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    PUSH32(esp, 0x002B2250u); RECOMP_ABI_CALL(0x000EB37Bu, sub_000EB37B); /* call 0x000EB37B */

loc_002B2250: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002B2260
 * Original: 0x002B2260 - 0x002B22C8 (104 bytes, 30 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B2260(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B2260: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x50C524);
    PUSH32(esp, esi);
    MEM32(esp + 0x404) = eax;
    eax = MEM32(esp + 0x40C);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x4C2FEC);
    esi = ecx;
    ecx = esp + 0x10;
    PUSH32(esp, 0x400);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002B2292u); RECOMP_ABI_CALL(0x00101E10u, sub_00101E10); /* call 0x00101E10 */

loc_002B2292: ;
    edi = MEM32(esi + 8);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, 0x002B229Fu); RECOMP_ABI_CALL(0x00101FF0u, sub_00101FF0); /* call 0x00101FF0 */

loc_002B229F: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x002B22AFu); RECOMP_ABI_CALL(0x002B1310u, sub_002B1310); /* call 0x002B1310 */

loc_002B22AF: ;
    ecx = MEM32(esp + 0x408);
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    PUSH32(esp, 0x002B22BFu); RECOMP_ABI_CALL(0x000EB37Bu, sub_000EB37B); /* call 0x000EB37B */

loc_002B22BF: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002B22D0
 * Original: 0x002B22D0 - 0x002B2338 (104 bytes, 30 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B22D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B22D0: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x50C524);
    PUSH32(esp, esi);
    MEM32(esp + 0x404) = eax;
    eax = MEM32(esp + 0x40C);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x4C2FF0);
    esi = ecx;
    ecx = esp + 0x10;
    PUSH32(esp, 0x400);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002B2302u); RECOMP_ABI_CALL(0x00101E10u, sub_00101E10); /* call 0x00101E10 */

loc_002B2302: ;
    edi = MEM32(esi + 8);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, 0x002B230Fu); RECOMP_ABI_CALL(0x00101FF0u, sub_00101FF0); /* call 0x00101FF0 */

loc_002B230F: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x002B231Fu); RECOMP_ABI_CALL(0x002B1310u, sub_002B1310); /* call 0x002B1310 */

loc_002B231F: ;
    ecx = MEM32(esp + 0x408);
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    PUSH32(esp, 0x002B232Fu); RECOMP_ABI_CALL(0x000EB37Bu, sub_000EB37B); /* call 0x000EB37B */

loc_002B232F: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002B2340
 * Original: 0x002B2340 - 0x002B23AD (109 bytes, 31 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B2340(void)
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

loc_002B2340: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x50C524);
    fp_push(MEMF(esp + 0x408)); /* fld float */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0x410) = eax;
    PUSH32(esp, 0x4B11C4);
    eax = esp + 0x14;
    PUSH32(esp, 0x400);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x002B2377u); RECOMP_ABI_CALL(0x00101E10u, sub_00101E10); /* call 0x00101E10 */

loc_002B2377: ;
    edi = MEM32(esi + 8);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002B2384u); RECOMP_ABI_CALL(0x00101FF0u, sub_00101FF0); /* call 0x00101FF0 */

loc_002B2384: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x002B2394u); RECOMP_ABI_CALL(0x002B1310u, sub_002B1310); /* call 0x002B1310 */

loc_002B2394: ;
    ecx = MEM32(esp + 0x408);
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    PUSH32(esp, 0x002B23A4u); RECOMP_ABI_CALL(0x000EB37Bu, sub_000EB37B); /* call 0x000EB37B */

loc_002B23A4: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_002B23B0
 * Original: 0x002B23B0 - 0x002B2420 (112 bytes, 32 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B23B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B23B0: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x50C524);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x408) = eax;
    eax = MEM32(esp + 0x414);
    PUSH32(esp, eax);
    esi = ecx;
    ecx = MEM32(esp + 0x414);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x4C2FF4);
    edx = esp + 0x14;
    PUSH32(esp, 0x400);
    PUSH32(esp, edx);
    PUSH32(esp, 0x002B23EAu); RECOMP_ABI_CALL(0x00101E10u, sub_00101E10); /* call 0x00101E10 */

loc_002B23EA: ;
    edi = MEM32(esi + 8);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002B23F7u); RECOMP_ABI_CALL(0x00101FF0u, sub_00101FF0); /* call 0x00101FF0 */

loc_002B23F7: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x002B2407u); RECOMP_ABI_CALL(0x002B1310u, sub_002B1310); /* call 0x002B1310 */

loc_002B2407: ;
    ecx = MEM32(esp + 0x408);
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    PUSH32(esp, 0x002B2417u); RECOMP_ABI_CALL(0x000EB37Bu, sub_000EB37B); /* call 0x000EB37B */

loc_002B2417: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002B2420
 * Original: 0x002B2420 - 0x002B2490 (112 bytes, 32 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B2420(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B2420: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x50C524);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x408) = eax;
    eax = MEM32(esp + 0x414);
    PUSH32(esp, eax);
    esi = ecx;
    ecx = MEM32(esp + 0x414);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x4C2FFC);
    edx = esp + 0x14;
    PUSH32(esp, 0x400);
    PUSH32(esp, edx);
    PUSH32(esp, 0x002B245Au); RECOMP_ABI_CALL(0x00101E10u, sub_00101E10); /* call 0x00101E10 */

loc_002B245A: ;
    edi = MEM32(esi + 8);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002B2467u); RECOMP_ABI_CALL(0x00101FF0u, sub_00101FF0); /* call 0x00101FF0 */

loc_002B2467: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x002B2477u); RECOMP_ABI_CALL(0x002B1310u, sub_002B1310); /* call 0x002B1310 */

loc_002B2477: ;
    ecx = MEM32(esp + 0x408);
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    PUSH32(esp, 0x002B2487u); RECOMP_ABI_CALL(0x000EB37Bu, sub_000EB37B); /* call 0x000EB37B */

loc_002B2487: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002B2490
 * Original: 0x002B2490 - 0x002B24FA (106 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B2490(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B2490: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x50C524);
    ecx = MEM32(esp + 0x40C);
    MEM32(esp + 0x400) = eax;
    PUSH32(esp, esi);
    eax = esp + 0x414;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = esp + 0xC;
    PUSH32(esp, 0x400);
    PUSH32(esp, edx);
    PUSH32(esp, 0x002B24C2u); RECOMP_ABI_CALL(0x00101E00u, sub_00101E00); /* call 0x00101E00 */

loc_002B24C2: ;
    eax = MEM32(esp + 0x41C);
    esi = MEM32(eax + 8);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002B24D6u); RECOMP_ABI_CALL(0x00101FF0u, sub_00101FF0); /* call 0x00101FF0 */

loc_002B24D6: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    edx = esp + 8;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x002B24E6u); RECOMP_ABI_CALL(0x002B1310u, sub_002B1310); /* call 0x002B1310 */

loc_002B24E6: ;
    ecx = MEM32(esp + 0x404);
    POP32(esp, esi);
    PUSH32(esp, 0x002B24F3u); RECOMP_ABI_CALL(0x000EB37Bu, sub_000EB37B); /* call 0x000EB37B */

loc_002B24F3: ;
    _fb = (uint32_t)(0x404) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x404;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002B2500
 * Original: 0x002B2500 - 0x002B251C (28 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B2500(void)
{

loc_002B2500: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(eax + -12);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002B2516u); RECOMP_ABI_CALL(0x002B1310u, sub_002B1310); /* call 0x002B1310 */

loc_002B2516: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002B2520
 * Original: 0x002B2520 - 0x002B2528 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B2520(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B2520: ;
    ecx = MEM32(ecx + 8);
    g_seh_ebp = ebp; sub_002B15D0(); return; /* tail jmp 0x002B15D0 */

}

/**
 * sub_002B2530
 * Original: 0x002B2530 - 0x002B2538 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B2530(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B2530: ;
    ecx = MEM32(ecx + 8);
    g_seh_ebp = ebp; sub_002B1600(); return; /* tail jmp 0x002B1600 */

}

/**
 * sub_002B2540
 * Original: 0x002B2540 - 0x002B2548 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B2540(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B2540: ;
    ecx = MEM32(ecx + 8);
    g_seh_ebp = ebp; sub_002B1310(); return; /* tail jmp 0x002B1310 */

}

/**
 * sub_002B2550
 * Original: 0x002B2550 - 0x002B2578 (40 bytes, 16 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B2550(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B2550: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    MEM16(edi + 6) = MEM16(edi + 6) + 1;
    _fa = (uint32_t)(MEM16(edi + 6)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    esi = ecx;
    ecx = MEM32(esi + 8);
    MEM16(ecx + 6) = MEM16(ecx + 6) - 1;
    _fa = (uint32_t)(MEM16(ecx + 6)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(ecx + 6)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 6), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B2570; /* jne: not equal / not zero */

loc_002B256A: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x002B2570u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002B256Eu); } /* indirect call */
    }

loc_002B2570: ;
    MEM32(esi + 8) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002B2580
 * Original: 0x002B2580 - 0x002B25A7 (39 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B2580(void)
{

loc_002B2580: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    ecx = MEM32(esi + 8);
    PUSH32(esp, 1);
    eax = esp + 8;
    PUSH32(esp, eax);
    MEM8(esp + 0xC) = 0xA;
    PUSH32(esp, 0x002B259Au); RECOMP_ABI_CALL(0x002B1310u, sub_002B1310); /* call 0x002B1310 */

loc_002B259A: ;
    ecx = MEM32(esi + 8);
    PUSH32(esp, 0x002B25A2u); RECOMP_ABI_CALL(0x002B15D0u, sub_002B15D0); /* call 0x002B15D0 */

loc_002B25A2: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002B25B0
 * Original: 0x002B25B0 - 0x002B25C1 (17 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B25B0(void)
{

loc_002B25B0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    ecx = MEM32(esi + 8);
    PUSH32(esp, 0x002B25BDu); RECOMP_ABI_CALL(0x002B15D0u, sub_002B15D0); /* call 0x002B15D0 */

loc_002B25BD: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002B25D0
 * Original: 0x002B25D0 - 0x002B25F8 (40 bytes, 15 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B25D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B25D0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x002B25D8u); RECOMP_ABI_CALL(0x002B2040u, sub_002B2040); /* call 0x002B2040 */

loc_002B25D8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002B25F2; /* je: equal / zero */

loc_002B25DF: ;
    edx = ZX16(MEM16(esi + 4));
    ecx = MEM32(0x62EBAC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x13);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x002B25F2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002B25EFu); } /* indirect call */
    }

loc_002B25F2: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002B2600
 * Original: 0x002B2600 - 0x002B2654 (84 bytes, 24 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B2600(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B2600: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x3BCF38);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esp + 4) = esi;
    edx = MEM32(esp + 0x18);
    MEM32(esi) = 0x4C2FE4;
    ecx = MEM32(0x7207A4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    PUSH32(esp, edx);
    MEM32(esp + 0x18) = 0;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x002B263Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002B263Au); } /* indirect call */
    }

loc_002B263D: ;
    ecx = MEM32(esp + 8);
    MEM32(esi + 8) = eax;
    eax = esi;
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002B2660
 * Original: 0x002B2660 - 0x002B2663 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B2660(void)
{

loc_002B2660: ;
    eax = MEM32(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002B2670
 * Original: 0x002B2670 - 0x002B2675 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B2670(void)
{

loc_002B2670: ;
    eax = (uint32_t)(int32_t)SMEM16(ecx + 4);
    esp += 4; return; /* ret */

}

/**
 * sub_002B2680
 * Original: 0x002B2680 - 0x002B2685 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B2680(void)
{

loc_002B2680: ;
    eax = (uint32_t)(int32_t)SMEM16(ecx + 6);
    esp += 4; return; /* ret */

}

/**
 * sub_002B2690
 * Original: 0x002B2690 - 0x002B2695 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B2690(void)
{

loc_002B2690: ;
    eax = (uint32_t)(int32_t)SMEM16(ecx + 0xA);
    esp += 4; return; /* ret */

}

/**
 * sub_002B26A0
 * Original: 0x002B26A0 - 0x002B26CF (47 bytes, 12 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B26A0(void)
{

loc_002B26A0: ;
    SET_LO16(edx, MEM16(esp + 8));
    eax = ecx;
    ecx = MEM32(esp + 4);
    MEM32(eax) = ecx;
    SET_LO16(ecx, MEM16(esp + 0xC));
    MEM16(eax + 4) = LO16(edx);
    SET_LO16(edx, MEM16(esp + 0x10));
    MEM16(eax + 6) = LO16(ecx);
    SET_LO16(ecx, MEM16(esp + 0x14));
    MEM16(eax + 8) = LO16(edx);
    MEM16(eax + 0xA) = LO16(ecx);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_002B26D0
 * Original: 0x002B26D0 - 0x002B2712 (66 bytes, 22 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B26D0(void)
{

loc_002B26D0: ;
    edx = MEM32(ecx + 8);
    eax = MEM32(esp + 4);
    MEM32(eax) = edx;
    edx = MEM32(ecx + 0xC);
    MEM32(eax + 4) = edx;
    edx = MEM32(ecx + 0x10);
    MEM32(eax + 8) = edx;
    edx = MEM32(ecx + 0x14);
    MEM32(eax + 0xC) = edx;
    edx = MEM32(ecx + 0x18);
    MEM32(eax + 0x10) = edx;
    edx = MEM32(ecx + 0x20);
    MEM32(eax + 0x18) = edx;
    edx = MEM32(ecx + 0x24);
    MEM32(eax + 0x1C) = edx;
    edx = MEM32(ecx + 0x28);
    MEM32(eax + 0x20) = edx;
    edx = MEM32(ecx + 0x2C);
    MEM32(eax + 0x24) = edx;
    ecx = MEM32(ecx + 0x30);
    MEM32(eax + 0x28) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002B2720
 * Original: 0x002B2720 - 0x002B2724 (4 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B2720(void)
{

loc_002B2720: ;
    eax = MEM32(ecx + 8);
    esp += 4; return; /* ret */

}

/**
 * sub_002B2730
 * Original: 0x002B2730 - 0x002B2733 (3 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B2730(void)
{

loc_002B2730: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002B2740
 * Original: 0x002B2740 - 0x002B275D (29 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B2740(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B2740: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B2753; /* je: equal / zero */

loc_002B2748: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B2758; /* je: equal / zero */

loc_002B274C: ;
    eax = MEM32(eax + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B2748; /* jne: not equal / not zero */

loc_002B2753: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

loc_002B2758: ;
    SET_LO8(eax, 1);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002B2760
 * Original: 0x002B2760 - 0x002B2781 (33 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B2760(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B2760: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B2778; /* je: equal / zero */

loc_002B276A: ;
    PUSH32(esp, 0x002B276Fu); RECOMP_ABI_CALL(0x002B2760u, sub_002B2760); /* call 0x002B2760 */

loc_002B276F: ;
    ecx = eax;
    eax = MEM32(esi + 0x2C);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_002B2778: ;
    eax = MEM32(esi + 0x2C);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

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
 * sub_002B3510
 * Original: 0x002B3510 - 0x002B370C (508 bytes, 164 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B3510(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B3510: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x5C (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002B352B; /* jge: greater or equal (signed >=) */

loc_002B3515: ;
    ecx = MEM32(esi * 4 + 0x4961E8);
    edx = edi;
    PUSH32(esp, 0x002B3523u); RECOMP_ABI_CALL(0x003D0A10u, sub_003D0A10); /* call 0x003D0A10 */

loc_002B3523: ;
    MEM32(esi * 4 + 0x3F0970) = edi;
    esp += 4; return; /* ret */

loc_002B352B: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x88) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x88 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002B3550; /* jge: greater or equal (signed >=) */

loc_002B3533: ;
    ecx = MEM32(0x3F0768);
    eax = MEM32(esi * 4 + 0x495F90);
    ecx = ecx | eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x3F0768) = ecx;
    MEM32(esi * 4 + 0x3F0970) = edi;
    esp += 4; return; /* ret */

loc_002B3550: ;
    if (CMP_NE(_fa, _fb)) goto loc_002B3559; /* jne: not equal / not zero */

loc_002B3552: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x002B3558u); RECOMP_ABI_CALL(0x003D09E0u, sub_003D09E0); /* call 0x003D09E0 */

loc_002B3558: ;
    esp += 4; return; /* ret */

loc_002B3559: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x89) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x89 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B3568; /* jne: not equal / not zero */

loc_002B3561: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x002B3567u); RECOMP_ABI_CALL(0x003D1490u, sub_003D1490); /* call 0x003D1490 */

loc_002B3567: ;
    esp += 4; return; /* ret */

loc_002B3568: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x8A (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B3577; /* jne: not equal / not zero */

loc_002B3570: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x002B3576u); RECOMP_ABI_CALL(0x003D0FF0u, sub_003D0FF0); /* call 0x003D0FF0 */

loc_002B3576: ;
    esp += 4; return; /* ret */

loc_002B3577: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x8B (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B3586; /* jne: not equal / not zero */

loc_002B357F: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x002B3585u); RECOMP_ABI_CALL(0x003D1360u, sub_003D1360); /* call 0x003D1360 */

loc_002B3585: ;
    esp += 4; return; /* ret */

loc_002B3586: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x8C (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B3595; /* jne: not equal / not zero */

loc_002B358E: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x002B3594u); RECOMP_ABI_CALL(0x003D13B0u, sub_003D13B0); /* call 0x003D13B0 */

loc_002B3594: ;
    esp += 4; return; /* ret */

loc_002B3595: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x8D (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B35A4; /* jne: not equal / not zero */

loc_002B359D: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x002B35A3u); RECOMP_ABI_CALL(0x003D1410u, sub_003D1410); /* call 0x003D1410 */

loc_002B35A3: ;
    esp += 4; return; /* ret */

loc_002B35A4: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x8E (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B35B3; /* jne: not equal / not zero */

loc_002B35AC: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x002B35B2u); RECOMP_ABI_CALL(0x003D10F0u, sub_003D10F0); /* call 0x003D10F0 */

loc_002B35B2: ;
    esp += 4; return; /* ret */

loc_002B35B3: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x8F (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B35C2; /* jne: not equal / not zero */

loc_002B35BB: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x002B35C1u); RECOMP_ABI_CALL(0x003D2010u, sub_003D2010); /* call 0x003D2010 */

loc_002B35C1: ;
    esp += 4; return; /* ret */

loc_002B35C2: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x90) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x90 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B35D1; /* jne: not equal / not zero */

loc_002B35CA: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x002B35D0u); RECOMP_ABI_CALL(0x003D20A0u, sub_003D20A0); /* call 0x003D20A0 */

loc_002B35D0: ;
    esp += 4; return; /* ret */

loc_002B35D1: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x91) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x91 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B35E0; /* jne: not equal / not zero */

loc_002B35D9: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x002B35DFu); RECOMP_ABI_CALL(0x003D2140u, sub_003D2140); /* call 0x003D2140 */

loc_002B35DF: ;
    esp += 4; return; /* ret */

loc_002B35E0: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x93) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x93 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B35EF; /* jne: not equal / not zero */

loc_002B35E8: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x002B35EEu); RECOMP_ABI_CALL(0x003D1040u, sub_003D1040); /* call 0x003D1040 */

loc_002B35EE: ;
    esp += 4; return; /* ret */

loc_002B35EF: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x92) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x92 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B35FE; /* jne: not equal / not zero */

loc_002B35F7: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x002B35FDu); RECOMP_ABI_CALL(0x003D10B0u, sub_003D10B0); /* call 0x003D10B0 */

loc_002B35FD: ;
    esp += 4; return; /* ret */

loc_002B35FE: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x94) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x94 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B360D; /* jne: not equal / not zero */

loc_002B3606: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x002B360Cu); RECOMP_ABI_CALL(0x003D1130u, sub_003D1130); /* call 0x003D1130 */

loc_002B360C: ;
    esp += 4; return; /* ret */

loc_002B360D: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x95) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x95 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B361C; /* jne: not equal / not zero */

loc_002B3615: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x002B361Bu); RECOMP_ABI_CALL(0x003D1280u, sub_003D1280); /* call 0x003D1280 */

loc_002B361B: ;
    esp += 4; return; /* ret */

loc_002B361C: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x96) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x96 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B362B; /* jne: not equal / not zero */

loc_002B3624: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x002B362Au); RECOMP_ABI_CALL(0x003D1300u, sub_003D1300); /* call 0x003D1300 */

loc_002B362A: ;
    esp += 4; return; /* ret */

loc_002B362B: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x97) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x97 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B363A; /* jne: not equal / not zero */

loc_002B3633: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x002B3639u); RECOMP_ABI_CALL(0x003D0F70u, sub_003D0F70); /* call 0x003D0F70 */

loc_002B3639: ;
    esp += 4; return; /* ret */

loc_002B363A: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x98) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x98 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B3649; /* jne: not equal / not zero */

loc_002B3642: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x002B3648u); RECOMP_ABI_CALL(0x003D2380u, sub_003D2380); /* call 0x003D2380 */

loc_002B3648: ;
    esp += 4; return; /* ret */

loc_002B3649: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x99) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x99 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B3658; /* jne: not equal / not zero */

loc_002B3651: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x002B3657u); RECOMP_ABI_CALL(0x003D2400u, sub_003D2400); /* call 0x003D2400 */

loc_002B3657: ;
    esp += 4; return; /* ret */

loc_002B3658: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x9A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x9A (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B3667; /* jne: not equal / not zero */

loc_002B3660: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x002B3666u); RECOMP_ABI_CALL(0x003D2320u, sub_003D2320); /* call 0x003D2320 */

loc_002B3666: ;
    esp += 4; return; /* ret */

loc_002B3667: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x9B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x9B (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B3676; /* jne: not equal / not zero */

loc_002B366F: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x002B3675u); RECOMP_ABI_CALL(0x003D2350u, sub_003D2350); /* call 0x003D2350 */

loc_002B3675: ;
    esp += 4; return; /* ret */

loc_002B3676: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x9C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x9C (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B3685; /* jne: not equal / not zero */

loc_002B367E: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x002B3684u); RECOMP_ABI_CALL(0x003D0FB0u, sub_003D0FB0); /* call 0x003D0FB0 */

loc_002B3684: ;
    esp += 4; return; /* ret */

loc_002B3685: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x9D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x9D (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B3694; /* jne: not equal / not zero */

loc_002B368D: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x002B3693u); RECOMP_ABI_CALL(0x003D1190u, sub_003D1190); /* call 0x003D1190 */

loc_002B3693: ;
    esp += 4; return; /* ret */

loc_002B3694: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x9E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x9E (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B36A3; /* jne: not equal / not zero */

loc_002B369C: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x002B36A2u); RECOMP_ABI_CALL(0x003D2450u, sub_003D2450); /* call 0x003D2450 */

loc_002B36A2: ;
    esp += 4; return; /* ret */

loc_002B36A3: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x9F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x9F (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B36B2; /* jne: not equal / not zero */

loc_002B36AB: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x002B36B1u); RECOMP_ABI_CALL(0x003D1200u, sub_003D1200); /* call 0x003D1200 */

loc_002B36B1: ;
    esp += 4; return; /* ret */

loc_002B36B2: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xA0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B36C1; /* jne: not equal / not zero */

loc_002B36BA: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x002B36C0u); RECOMP_ABI_CALL(0x003D21B0u, sub_003D21B0); /* call 0x003D21B0 */

loc_002B36C0: ;
    esp += 4; return; /* ret */

loc_002B36C1: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xA1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B36D0; /* jne: not equal / not zero */

loc_002B36C9: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x002B36CFu); RECOMP_ABI_CALL(0x003D21E0u, sub_003D21E0); /* call 0x003D21E0 */

loc_002B36CF: ;
    esp += 4; return; /* ret */

loc_002B36D0: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xA2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B36DF; /* jne: not equal / not zero */

loc_002B36D8: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x002B36DEu); RECOMP_ABI_CALL(0x003D2250u, sub_003D2250); /* call 0x003D2250 */

loc_002B36DE: ;
    esp += 4; return; /* ret */

loc_002B36DF: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xA3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B36EE; /* jne: not equal / not zero */

loc_002B36E7: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x002B36EDu); RECOMP_ABI_CALL(0x003D22C0u, sub_003D22C0); /* call 0x003D22C0 */

loc_002B36ED: ;
    esp += 4; return; /* ret */

loc_002B36EE: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xA4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B36FD; /* jne: not equal / not zero */

loc_002B36F6: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x002B36FCu); RECOMP_ABI_CALL(0x003D22E0u, sub_003D22E0); /* call 0x003D22E0 */

loc_002B36FC: ;
    esp += 4; return; /* ret */

loc_002B36FD: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xA5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B370B; /* jne: not equal / not zero */

loc_002B3705: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x002B370Bu); RECOMP_ABI_CALL(0x003D2300u, sub_003D2300); /* call 0x003D2300 */

loc_002B370B: ;
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
 * sub_002B3720
 * Original: 0x002B3720 - 0x002B3743 (35 bytes, 12 insns)
 * Category: game_render
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B3720(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B3720: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002B372Au); RECOMP_ABI_CALL(0x003D2E00u, sub_003D2E00); /* call 0x003D2E00 */

loc_002B372A: ;
    ecx = MEM32(esp + 0x14);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM32(ecx) = eax;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = edx & 0x8007000Eu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = edx;
    esp += 24; return; /* ret 20 */

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
 * sub_002B37C0
 * Original: 0x002B37C0 - 0x002B3881 (193 bytes, 69 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B37C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B37C0: ;
    eax = MEM32(0x720800);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0x720804);
    PUSH32(esp, 1);
    PUSH32(esp, 6);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x80);
    PUSH32(esp, 0x100);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002B37E5u); RECOMP_ABI_CALL(0x0042EC79u, sub_0042EC79); /* call 0x0042EC79 */

loc_002B37E5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002B387D; /* jl: less (signed <) */

loc_002B37ED: ;
    ecx = MEM32(0x720804);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002B37FBu); RECOMP_ABI_CALL(0x003C6390u, sub_003C6390); /* call 0x003C6390 */

loc_002B37FB: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM32(esp + 4) = eax;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx & 0x8007000Eu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fas >= 0)) goto loc_002B3815; /* jge: greater or equal (signed >=) */

loc_002B380F: ;
    eax = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_002B3815: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002B3828u); RECOMP_ABI_CALL(0x003C7460u, sub_003C7460); /* call 0x003C7460 */

loc_002B3828: ;
    eax = MEM32(esp + 0x1C);
    MEM32(esp + 0x10) = eax;
    edi = 0x518DC8;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002B3837: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_002B3840: ;
    ebp = ZX8(MEM8(edi));
    PUSH32(esp, ebx);
    ebp = ebp << 0x18;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, esi);
    ebp = ebp | 0xFFFFFF;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0x002B3853u); RECOMP_ABI_CALL(0x002B3780u, sub_002B3780); /* call 0x002B3780 */

loc_002B3853: ;
    ecx = MEM32(esp + 0x18);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x100) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x100 (32-bit) */
    MEM32(ecx + eax * 4) = ebp;
    if (CMP_B(_fa, _fb)) goto loc_002B3840; /* jb: below (unsigned <) */

loc_002B3867: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x50) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x50 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_002B3837; /* jb: below (unsigned <) */

loc_002B386D: ;
    edx = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    PUSH32(esp, 0x002B3877u); RECOMP_ABI_CALL(0x003C7820u, sub_003C7820); /* call 0x003C7820 */

loc_002B3877: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);

loc_002B387D: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002B3890
 * Original: 0x002B3890 - 0x002B38DB (75 bytes, 18 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B3890(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B3890: ;
    eax = MEM32(0x720808);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B38A9; /* je: equal / zero */

loc_002B3899: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002B389Fu); RECOMP_ABI_CALL(0x003C7820u, sub_003C7820); /* call 0x003C7820 */

loc_002B389F: ;
    MEM32(0x720808) = 0;

loc_002B38A9: ;
    eax = MEM32(0x720804);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B38C2; /* je: equal / zero */

loc_002B38B2: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002B38B8u); RECOMP_ABI_CALL(0x003C7820u, sub_003C7820); /* call 0x003C7820 */

loc_002B38B8: ;
    MEM32(0x720804) = 0;

loc_002B38C2: ;
    eax = MEM32(0x720800);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B38DA; /* je: equal / zero */

loc_002B38CB: ;
    PUSH32(esp, 0x002B38D0u); RECOMP_ABI_CALL(0x003C8DA0u, sub_003C8DA0); /* call 0x003C8DA0 */

loc_002B38D0: ;
    MEM32(0x720800) = 0;

loc_002B38DA: ;
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
 * sub_002B3900
 * Original: 0x002B3900 - 0x002B41D4 (2260 bytes, 576 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B3900(void)
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

loc_002B3900: ;
    ecx = MEM32(esp + 0xC);
    _fb = (uint32_t)(0x228) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x228;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = esp + 0x244;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = esp + 0x3C;
    PUSH32(esp, edx);
    PUSH32(esp, 0x002B3920u); RECOMP_ABI_CALL(0x002A8E9Eu, sub_002A8E9E); /* call 0x002A8E9E */

loc_002B3920: ;
    eax = MEM32(0x720804);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x002B3930u); RECOMP_ABI_CALL(0x003CAC10u, sub_003CAC10); /* call 0x003CAC10 */

loc_002B3930: ;
    edx = 1;
    ecx = 0x40304;
    PUSH32(esp, 0x002B393Fu); RECOMP_ABI_CALL(0x003D0A10u, sub_003D0A10); /* call 0x003D0A10 */

loc_002B393F: ;
    edx = 0x302;
    ecx = 0x40344;
    MEM32(0x3F0A5C) = 1;
    PUSH32(esp, 0x002B3958u); RECOMP_ABI_CALL(0x003D0A10u, sub_003D0A10); /* call 0x003D0A10 */

loc_002B3958: ;
    edx = 0x303;
    ecx = 0x40348;
    MEM32(0x3F0A68) = 0x302;
    PUSH32(esp, 0x002B3971u); RECOMP_ABI_CALL(0x003D0A10u, sub_003D0A10); /* call 0x003D0A10 */

loc_002B3971: ;
    ecx = MEM32(0x720808);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    MEM32(0x3F0A6C) = 0x303;
    PUSH32(esp, 0x002B3989u); RECOMP_ABI_CALL(0x003D2E50u, sub_003D2E50); /* call 0x003D2E50 */

loc_002B3989: ;
    fp_push((double)SMEM32(esp + 0x238)); /* fild */
    edx = MEM32(esp + 0x238);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    ebx = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_002B39A3; /* jge: greater or equal (signed >=) */

loc_002B399D: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x49F3D8)); /* fadd dword ptr [0x49f3d8] */

loc_002B39A3: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x49D450)); /* fmul dword ptr [0x49d450] */
    ecx = MEM32(esp + 0x23C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x2C);
    fp_push((double)SMEM32(esp + 0x23C)); /* fild */
    MEM32(esp + 0xC) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_002B39CD; /* jge: greater or equal (signed >=) */

loc_002B39C7: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x49F3D8)); /* fadd dword ptr [0x49f3d8] */

loc_002B39CD: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x4C3314)); /* fmul dword ptr [0x4c3314] */
    eax = esp + 0x34;
    esi = eax + 1;
    /* nop */

loc_002B39E0: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B39E0; /* jne: not equal / not zero */

loc_002B39E7: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 4 (32-bit) */
    MEM32(esp + 0x30) = edx;
    MEM32(esp + 0x20) = 0;
    MEM32(esp + 0x28) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_002B401A; /* jl: less (signed <) */

loc_002B3A0A: ;
    edx = ebx + 0x70;
    MEM32(esp + 0x24) = edx;
    ecx = ebx + 0x1C;
    edx = ebx + 0x54;
    PUSH32(esp, ebp);
    MEM32(esp + 0x20) = ecx;
    MEM32(esp + 0x1C) = edx;
    ebp = ebx + 0x38;

loc_002B3A23: ;
    SET_LO8(edx, MEM8(esp + eax + 0x38));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0xA (8-bit) */
    ecx = esp + eax + 0x38;
    if (CMP_NE(_fa, _fb)) goto loc_002B3A45; /* jne: not equal / not zero */

loc_002B3A30: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x30)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x4C3314)); /* fadd dword ptr [0x4c3314] */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    goto loc_002B3B9B;

loc_002B3A45: ;
    eax = ZX8(MEM8(ecx));
    _fb = (uint32_t)(0xFFFFFFE0u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFE0u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x19;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    edi = MEM32(esp + 0x1C);
    esi = ebp;
    _fb = (uint32_t)(0xA8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0xA8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xA8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0xA8;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x10) = edx;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    MEM32(esp + 0x18) = eax;
    eax = MEM32(esp + 0x20);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x4C3310)); /* fmul dword ptr [0x4c3310] */
    fp_push((double)SMEM32(esp + 0x18)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x4C330C)); /* fmul dword ptr [0x4c330c] */
    MEMF(esp + 0x14) = (float)fp_top(); /* fst */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x496B98)); /* fsub dword ptr [0x496b98] */
    MEMF(ebx + -168) = (float)fp_top(); /* fst */
    { double _t = g_fp_stack[(g_fp_top + 4) & 7]; fp_push(_t); } /* fld st(4) */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x496B98)); /* fsub dword ptr [0x496b98] */
    MEMF(ebx + -164) = (float)fp_top(); /* fst */
    edx = MEM32(0x73580C);
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    MEM32(ebx + -152) = edx;
    MEMF(ebx + -148) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    MEMF(ebx + -144) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = g_fp_stack[(g_fp_top + 4) & 7]; fp_push(_t); } /* fld st(4) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x4B6338)); /* fadd dword ptr [0x4b6338] */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x496B98)); /* fsub dword ptr [0x496b98] */
    MEMF(esp + 0x18) = (float)fp_top(); /* fst */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(ebx + -136) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(0x73580C);
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    MEM32(ebx + -124) = ecx;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x4C3308)); /* fadd dword ptr [0x4c3308] */
    ecx = 7;
    MEMF(esp + 0x10) = (float)fp_top(); /* fst */
    MEMF(ebx + -120) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMF(ebx + -116) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(ebp + -168) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x4C3304)); /* fadd dword ptr [0x4c3304] */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x496B98)); /* fsub dword ptr [0x496b98] */
    MEMF(ebx + -108) = (float)fp_top(); /* fst */
    edx = MEM32(0x73580C);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEM32(ebx + -96) = edx;
    edx = MEM32(esp + 0x28);
    MEMF(ebx + -92) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x4C3300)); /* fadd dword ptr [0x4c3300] */
    MEMF(esp + 0x14) = (float)fp_top(); /* fst */
    MEMF(ebx + -88) = (float)fp_top(); fp_pop(); /* fstp */
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    MEMF(ebx + -24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x49D450)); /* fadd dword ptr [0x49d450] */
    esi = eax;
    edi = edx;
    ecx = 7;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    ecx = MEM32(esp + 0x18);
    edi = MEM32(esp + 0x1C);
    MEM32(ebx + -28) = ecx;
    ecx = MEM32(0x73580C);
    MEM32(ebx + -12) = ecx;
    ecx = MEM32(esp + 0x10);
    MEM32(ebx + -8) = ecx;
    ecx = MEM32(esp + 0x14);
    _fb = (uint32_t)(0xA8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xA8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebx + -4) = ecx;
    _fb = (uint32_t)(0xA8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0xA8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xA8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xA8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x20) = eax;
    eax = MEM32(esp + 0x24);
    MEM32(esp + 0x1C) = edi;
    MEM32(esp + 0x28) = edx;
    _fb = (uint32_t)(6) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x24) = eax;
    eax = MEM32(esp + 0x2C);

loc_002B3B9B: ;
    SET_LO8(edx, MEM8(esp + eax + 0x39));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0xA (8-bit) */
    ecx = esp + eax + 0x39;
    if (CMP_NE(_fa, _fb)) goto loc_002B3BBD; /* jne: not equal / not zero */

loc_002B3BA8: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x30)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x4C3314)); /* fadd dword ptr [0x4c3314] */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    goto loc_002B3D13;

loc_002B3BBD: ;
    eax = ZX8(MEM8(ecx));
    _fb = (uint32_t)(0xFFFFFFE0u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFE0u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x19;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    edi = MEM32(esp + 0x1C);
    esi = ebp;
    _fb = (uint32_t)(0xA8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0xA8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xA8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0xA8;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x10) = edx;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    MEM32(esp + 0x18) = eax;
    eax = MEM32(esp + 0x20);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x4C3310)); /* fmul dword ptr [0x4c3310] */
    fp_push((double)SMEM32(esp + 0x18)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x4C330C)); /* fmul dword ptr [0x4c330c] */
    MEMF(esp + 0x14) = (float)fp_top(); /* fst */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x496B98)); /* fsub dword ptr [0x496b98] */
    MEMF(ebx + -168) = (float)fp_top(); /* fst */
    { double _t = g_fp_stack[(g_fp_top + 4) & 7]; fp_push(_t); } /* fld st(4) */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x496B98)); /* fsub dword ptr [0x496b98] */
    MEMF(ebx + -164) = (float)fp_top(); /* fst */
    edx = MEM32(0x73580C);
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    MEM32(ebx + -152) = edx;
    MEMF(ebx + -148) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    MEMF(ebx + -144) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = g_fp_stack[(g_fp_top + 4) & 7]; fp_push(_t); } /* fld st(4) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x4B6338)); /* fadd dword ptr [0x4b6338] */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x496B98)); /* fsub dword ptr [0x496b98] */
    MEMF(esp + 0x18) = (float)fp_top(); /* fst */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(ebx + -136) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(0x73580C);
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    MEM32(ebx + -124) = ecx;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x4C3308)); /* fadd dword ptr [0x4c3308] */
    ecx = 7;
    MEMF(esp + 0x10) = (float)fp_top(); /* fst */
    MEMF(ebx + -120) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMF(ebx + -116) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(ebp + -168) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x4C3304)); /* fadd dword ptr [0x4c3304] */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x496B98)); /* fsub dword ptr [0x496b98] */
    MEMF(ebx + -108) = (float)fp_top(); /* fst */
    edx = MEM32(0x73580C);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEM32(ebx + -96) = edx;
    edx = MEM32(esp + 0x28);
    MEMF(ebx + -92) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x4C3300)); /* fadd dword ptr [0x4c3300] */
    MEMF(esp + 0x14) = (float)fp_top(); /* fst */
    MEMF(ebx + -88) = (float)fp_top(); fp_pop(); /* fstp */
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    MEMF(ebx + -24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x49D450)); /* fadd dword ptr [0x49d450] */
    esi = eax;
    edi = edx;
    ecx = 7;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    ecx = MEM32(esp + 0x18);
    edi = MEM32(esp + 0x1C);
    MEM32(ebx + -28) = ecx;
    ecx = MEM32(0x73580C);
    MEM32(ebx + -12) = ecx;
    ecx = MEM32(esp + 0x10);
    MEM32(ebx + -8) = ecx;
    ecx = MEM32(esp + 0x14);
    _fb = (uint32_t)(0xA8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xA8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebx + -4) = ecx;
    _fb = (uint32_t)(0xA8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0xA8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xA8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xA8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x20) = eax;
    eax = MEM32(esp + 0x24);
    MEM32(esp + 0x1C) = edi;
    MEM32(esp + 0x28) = edx;
    _fb = (uint32_t)(6) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x24) = eax;
    eax = MEM32(esp + 0x2C);

loc_002B3D13: ;
    SET_LO8(edx, MEM8(esp + eax + 0x3A));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0xA (8-bit) */
    ecx = esp + eax + 0x3A;
    if (CMP_NE(_fa, _fb)) goto loc_002B3D35; /* jne: not equal / not zero */

loc_002B3D20: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x30)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x4C3314)); /* fadd dword ptr [0x4c3314] */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    goto loc_002B3E8B;

loc_002B3D35: ;
    eax = ZX8(MEM8(ecx));
    _fb = (uint32_t)(0xFFFFFFE0u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFE0u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x19;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    edi = MEM32(esp + 0x1C);
    esi = ebp;
    _fb = (uint32_t)(0xA8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0xA8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xA8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0xA8;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x10) = edx;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    MEM32(esp + 0x18) = eax;
    eax = MEM32(esp + 0x20);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x4C3310)); /* fmul dword ptr [0x4c3310] */
    fp_push((double)SMEM32(esp + 0x18)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x4C330C)); /* fmul dword ptr [0x4c330c] */
    MEMF(esp + 0x14) = (float)fp_top(); /* fst */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x496B98)); /* fsub dword ptr [0x496b98] */
    MEMF(ebx + -168) = (float)fp_top(); /* fst */
    { double _t = g_fp_stack[(g_fp_top + 4) & 7]; fp_push(_t); } /* fld st(4) */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x496B98)); /* fsub dword ptr [0x496b98] */
    MEMF(ebx + -164) = (float)fp_top(); /* fst */
    edx = MEM32(0x73580C);
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    MEM32(ebx + -152) = edx;
    MEMF(ebx + -148) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    MEMF(ebx + -144) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = g_fp_stack[(g_fp_top + 4) & 7]; fp_push(_t); } /* fld st(4) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x4B6338)); /* fadd dword ptr [0x4b6338] */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x496B98)); /* fsub dword ptr [0x496b98] */
    MEMF(esp + 0x18) = (float)fp_top(); /* fst */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(ebx + -136) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(0x73580C);
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    MEM32(ebx + -124) = ecx;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x4C3308)); /* fadd dword ptr [0x4c3308] */
    ecx = 7;
    MEMF(esp + 0x10) = (float)fp_top(); /* fst */
    MEMF(ebx + -120) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMF(ebx + -116) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(ebp + -168) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x4C3304)); /* fadd dword ptr [0x4c3304] */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x496B98)); /* fsub dword ptr [0x496b98] */
    MEMF(ebx + -108) = (float)fp_top(); /* fst */
    edx = MEM32(0x73580C);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEM32(ebx + -96) = edx;
    edx = MEM32(esp + 0x28);
    MEMF(ebx + -92) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x4C3300)); /* fadd dword ptr [0x4c3300] */
    MEMF(esp + 0x14) = (float)fp_top(); /* fst */
    MEMF(ebx + -88) = (float)fp_top(); fp_pop(); /* fstp */
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    MEMF(ebx + -24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x49D450)); /* fadd dword ptr [0x49d450] */
    esi = eax;
    edi = edx;
    ecx = 7;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    ecx = MEM32(esp + 0x18);
    edi = MEM32(esp + 0x1C);
    MEM32(ebx + -28) = ecx;
    ecx = MEM32(0x73580C);
    MEM32(ebx + -12) = ecx;
    ecx = MEM32(esp + 0x10);
    MEM32(ebx + -8) = ecx;
    ecx = MEM32(esp + 0x14);
    _fb = (uint32_t)(0xA8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xA8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebx + -4) = ecx;
    _fb = (uint32_t)(0xA8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0xA8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xA8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xA8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x20) = eax;
    eax = MEM32(esp + 0x24);
    MEM32(esp + 0x1C) = edi;
    MEM32(esp + 0x28) = edx;
    _fb = (uint32_t)(6) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x24) = eax;
    eax = MEM32(esp + 0x2C);

loc_002B3E8B: ;
    SET_LO8(edx, MEM8(esp + eax + 0x3B));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0xA (8-bit) */
    ecx = esp + eax + 0x3B;
    if (CMP_NE(_fa, _fb)) goto loc_002B3EAD; /* jne: not equal / not zero */

loc_002B3E98: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x30)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x4C3314)); /* fadd dword ptr [0x4c3314] */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    goto loc_002B4003;

loc_002B3EAD: ;
    eax = ZX8(MEM8(ecx));
    _fb = (uint32_t)(0xFFFFFFE0u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFE0u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x19;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    edi = MEM32(esp + 0x1C);
    esi = ebp;
    _fb = (uint32_t)(0xA8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0xA8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xA8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0xA8;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x10) = edx;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    MEM32(esp + 0x18) = eax;
    eax = MEM32(esp + 0x20);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x4C3310)); /* fmul dword ptr [0x4c3310] */
    fp_push((double)SMEM32(esp + 0x18)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x4C330C)); /* fmul dword ptr [0x4c330c] */
    MEMF(esp + 0x14) = (float)fp_top(); /* fst */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x496B98)); /* fsub dword ptr [0x496b98] */
    MEMF(ebx + -168) = (float)fp_top(); /* fst */
    { double _t = g_fp_stack[(g_fp_top + 4) & 7]; fp_push(_t); } /* fld st(4) */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x496B98)); /* fsub dword ptr [0x496b98] */
    MEMF(ebx + -164) = (float)fp_top(); /* fst */
    edx = MEM32(0x73580C);
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    MEM32(ebx + -152) = edx;
    MEMF(ebx + -148) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    MEMF(ebx + -144) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = g_fp_stack[(g_fp_top + 4) & 7]; fp_push(_t); } /* fld st(4) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x4B6338)); /* fadd dword ptr [0x4b6338] */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x496B98)); /* fsub dword ptr [0x496b98] */
    MEMF(esp + 0x18) = (float)fp_top(); /* fst */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(ebx + -136) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(0x73580C);
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    MEM32(ebx + -124) = ecx;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x4C3308)); /* fadd dword ptr [0x4c3308] */
    ecx = 7;
    MEMF(esp + 0x10) = (float)fp_top(); /* fst */
    MEMF(ebx + -120) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMF(ebx + -116) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(ebp + -168) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x4C3304)); /* fadd dword ptr [0x4c3304] */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x496B98)); /* fsub dword ptr [0x496b98] */
    MEMF(ebx + -108) = (float)fp_top(); /* fst */
    edx = MEM32(0x73580C);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEM32(ebx + -96) = edx;
    edx = MEM32(esp + 0x28);
    MEMF(ebx + -92) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x4C3300)); /* fadd dword ptr [0x4c3300] */
    MEMF(esp + 0x14) = (float)fp_top(); /* fst */
    MEMF(ebx + -88) = (float)fp_top(); fp_pop(); /* fstp */
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    MEMF(ebx + -24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x49D450)); /* fadd dword ptr [0x49d450] */
    esi = eax;
    edi = edx;
    ecx = 7;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    ecx = MEM32(esp + 0x18);
    edi = MEM32(esp + 0x1C);
    MEM32(ebx + -28) = ecx;
    ecx = MEM32(0x73580C);
    MEM32(ebx + -12) = ecx;
    ecx = MEM32(esp + 0x10);
    MEM32(ebx + -8) = ecx;
    ecx = MEM32(esp + 0x14);
    _fb = (uint32_t)(0xA8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xA8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebx + -4) = ecx;
    _fb = (uint32_t)(0xA8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0xA8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xA8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xA8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x20) = eax;
    eax = MEM32(esp + 0x24);
    MEM32(esp + 0x1C) = edi;
    MEM32(esp + 0x28) = edx;
    _fb = (uint32_t)(6) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x24) = eax;
    eax = MEM32(esp + 0x2C);

loc_002B4003: ;
    edx = MEM32(esp + 0x34);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = edx + -3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x2C) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_002B3A23; /* jl: less (signed <) */

loc_002B4019: ;
    POP32(esp, ebp);

loc_002B401A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002B4178; /* jge: greater or equal (signed >=) */

loc_002B4022: ;
    SET_LO8(edx, MEM8(esp + eax + 0x34));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0xA (8-bit) */
    ecx = esp + eax + 0x34;
    if (CMP_NE(_fa, _fb)) goto loc_002B4044; /* jne: not equal / not zero */

loc_002B402F: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x4C3314)); /* fadd dword ptr [0x4c3314] */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    goto loc_002B4167;

loc_002B4044: ;
    eax = ZX8(MEM8(ecx));
    _fb = (uint32_t)(0xFFFFFFE0u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFE0u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x19;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    esi = ebx + 0x38;
    edi = ebx + 0x54;
    MEM32(esp + 0x24) = edx;
    fp_push((double)SMEM32(esp + 0x24)); /* fild */
    MEM32(esp + 0xC) = eax;
    eax = ebx + 0x1C;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x4C3310)); /* fmul dword ptr [0x4c3310] */
    fp_push((double)SMEM32(esp + 0xC)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x4C330C)); /* fmul dword ptr [0x4c330c] */
    MEMF(esp + 0x10) = (float)fp_top(); /* fst */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x496B98)); /* fsub dword ptr [0x496b98] */
    MEMF(ebx) = (float)fp_top(); /* fst */
    { double _t = g_fp_stack[(g_fp_top + 4) & 7]; fp_push(_t); } /* fld st(4) */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x496B98)); /* fsub dword ptr [0x496b98] */
    MEMF(ebx + 4) = (float)fp_top(); /* fst */
    edx = MEM32(0x73580C);
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    MEM32(ebx + 0x10) = edx;
    MEMF(ebx + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    MEMF(ebx + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = g_fp_stack[(g_fp_top + 4) & 7]; fp_push(_t); } /* fld st(4) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x4B6338)); /* fadd dword ptr [0x4b6338] */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x496B98)); /* fsub dword ptr [0x496b98] */
    MEMF(esp + 0x14) = (float)fp_top(); /* fst */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(ebx + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(0x73580C);
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    MEM32(ebx + 0x2C) = ecx;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x4C3308)); /* fadd dword ptr [0x4c3308] */
    ecx = 7;
    MEMF(esp + 0xC) = (float)fp_top(); /* fst */
    MEMF(ebx + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMF(ebx + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esi) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x4C3304)); /* fadd dword ptr [0x4c3304] */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x496B98)); /* fsub dword ptr [0x496b98] */
    MEMF(ebx + 0x3C) = (float)fp_top(); /* fst */
    edx = MEM32(0x73580C);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEM32(ebx + 0x48) = edx;
    edx = MEM32(esp + 0xC);
    MEMF(ebx + 0x4C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x4C3300)); /* fadd dword ptr [0x4c3300] */
    MEMF(esp + 0x10) = (float)fp_top(); /* fst */
    MEMF(ebx + 0x50) = (float)fp_top(); fp_pop(); /* fstp */
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    MEMF(ebx + 0x90) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x49D450)); /* fadd dword ptr [0x49d450] */
    esi = eax;
    eax = MEM32(esp + 0x14);
    MEM32(ebx + 0x8C) = eax;
    eax = MEM32(esp + 0x10);
    edi = ebx + 0x70;
    ecx = 7;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    ecx = MEM32(0x73580C);
    MEM32(ebx + 0xA4) = eax;
    eax = MEM32(esp + 0x20);
    MEM32(ebx + 0x9C) = ecx;
    MEM32(ebx + 0xA0) = edx;
    _fb = (uint32_t)(0xA8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0xA8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(6) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x20) = eax;
    eax = MEM32(esp + 0x28);

loc_002B4167: ;
    ecx = MEM32(esp + 0x30);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x28) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_002B4022; /* jl: less (signed <) */

loc_002B4178: ;
    esi = MEM32(esp + 0x20);
    fp_pop(); /* fstp st(0) */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    fp_pop(); /* fstp st(0) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B41CA; /* je: equal / zero */

loc_002B4184: ;
    ecx = MEM32(0x720808);
    PUSH32(esp, 0x1C);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 0x002B4194u); RECOMP_ABI_CALL(0x003CFD90u, sub_003CFD90); /* call 0x003CFD90 */

loc_002B4194: ;
    PUSH32(esp, 0x144);
    PUSH32(esp, 0x002B419Eu); RECOMP_ABI_CALL(0x003D02F0u, sub_003D02F0); /* call 0x003D02F0 */

loc_002B419E: ;
    eax = 0xAAAAAAABu;
    { uint64_t _r = (uint64_t)eax * (uint64_t)esi;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = edx >> 1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx + edx * 2;
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 5);
    PUSH32(esp, 0x002B41B4u); RECOMP_ABI_CALL(0x003D8C30u, sub_003D8C30); /* call 0x003D8C30 */

loc_002B41B4: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x40304;
    PUSH32(esp, 0x002B41C0u); RECOMP_ABI_CALL(0x003D0A10u, sub_003D0A10); /* call 0x003D0A10 */

loc_002B41C0: ;
    MEM32(0x3F0A5C) = 0;

loc_002B41CA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x228) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x228;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_002B41E0
 * Original: 0x002B41E0 - 0x002B42E1 (257 bytes, 44 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B41E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B41E0: ;
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x70;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x2C) = eax;
    MEM32(esp + 0x48) = eax;
    MEM32(esp + 0x64) = eax;
    eax = MEM32(0x720804);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    MEM32(esp + 8) = 0;
    MEM32(esp + 0xC) = 0;
    MEM32(esp + 0x10) = 0;
    MEM32(esp + 0x14) = 0x3F800000;
    MEM32(esp + 0x1C) = 0;
    MEM32(esp + 0x20) = 0;
    MEM32(esp + 0x24) = 0x43800000;
    MEM32(esp + 0x28) = 0;
    MEM32(esp + 0x2C) = 0;
    MEM32(esp + 0x30) = 0x3F800000;
    MEM32(esp + 0x38) = 0x3F800000;
    MEM32(esp + 0x3C) = 0;
    MEM32(esp + 0x40) = 0;
    MEM32(esp + 0x44) = 0x43000000;
    MEM32(esp + 0x48) = 0;
    MEM32(esp + 0x4C) = 0x3F800000;
    MEM32(esp + 0x54) = 0;
    MEM32(esp + 0x58) = 0x3F800000;
    MEM32(esp + 0x5C) = 0x43800000;
    MEM32(esp + 0x60) = 0x43000000;
    MEM32(esp + 0x64) = 0;
    MEM32(esp + 0x68) = 0x3F800000;
    MEM32(esp + 0x70) = 0x3F800000;
    MEM32(esp + 0x74) = 0x3F800000;
    PUSH32(esp, 0x002B42C3u); RECOMP_ABI_CALL(0x003CAC10u, sub_003CAC10); /* call 0x003CAC10 */

loc_002B42C3: ;
    PUSH32(esp, 0x144);
    PUSH32(esp, 0x002B42CDu); RECOMP_ABI_CALL(0x003D02F0u, sub_003D02F0); /* call 0x003D02F0 */

loc_002B42CD: ;
    PUSH32(esp, 0x1C);
    ecx = esp + 4;
    PUSH32(esp, ecx);
    PUSH32(esp, 4);
    PUSH32(esp, 6);
    PUSH32(esp, 0x002B42DDu); RECOMP_ABI_CALL(0x003D8980u, sub_003D8980); /* call 0x003D8980 */

loc_002B42DD: ;
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x70;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002B42F0
 * Original: 0x002B42F0 - 0x002B4379 (137 bytes, 36 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B42F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B42F0: ;
    PUSH32(esp, 0x002B42F5u); RECOMP_ABI_CALL(0x002B4380u, sub_002B4380); /* call 0x002B4380 */

loc_002B42F5: ;
    MEM32(0x7207F8) = eax;
    PUSH32(esp, 0x002B42FFu); RECOMP_ABI_CALL(0x002B3890u, sub_002B3890); /* call 0x002B3890 */

loc_002B42FF: ;
    eax = MEM32(esp + 4);
    MEM32(0x720800) = eax;
    PUSH32(esp, 0x002B430Du); RECOMP_ABI_CALL(0x003C8D80u, sub_003C8D80); /* call 0x003C8D80 */

loc_002B430D: ;
    MEM32(0x73580C) = 0xFFFFFFFFu;
    PUSH32(esp, 0x002B431Cu); RECOMP_ABI_CALL(0x002B37C0u, sub_002B37C0); /* call 0x002B37C0 */

loc_002B431C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002B4328; /* jge: greater or equal (signed >=) */

loc_002B4320: ;
    PUSH32(esp, 0x002B4325u); RECOMP_ABI_CALL(0x002B3890u, sub_002B3890); /* call 0x002B3890 */

loc_002B4325: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_002B4328: ;
    PUSH32(esp, 0x15000);
    PUSH32(esp, 0x002B4332u); RECOMP_ABI_CALL(0x003D2E00u, sub_003D2E00); /* call 0x003D2E00 */

loc_002B4332: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM32(0x720808) = eax;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8007000Eu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, 0x8007000Eu (32-bit) */
    if (TEST_S(_fas, _fbs)) goto loc_002B4325; /* jl: less (signed <) */

loc_002B4347: ;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002B434Fu); RECOMP_ABI_CALL(0x003D2E50u, sub_003D2E50); /* call 0x003D2E50 */

loc_002B434F: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0xC00;
    goto loc_002B4360;

    /* nop */

loc_002B4360: ;
    MEM32(eax + -4) = 0;
    MEM32(eax) = 0x3F800000;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x1C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_002B4360; /* jne: not equal / not zero */

loc_002B4373: ;
    eax = 1;
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
 * sub_002B44B0
 * Original: 0x002B44B0 - 0x002B4519 (105 bytes, 30 insns)
 * Category: game_debug
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B44B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B44B0: ;
    PUSH32(esp, esi);
    MEM32(0x735830) = 1;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_002B44C0: ;
    eax = MEM32(0x735814);
    ecx = MEM32(0x791328);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002B44D2u); RECOMP_ABI_CALL(0x000F429Fu, sub_000F429F); /* call 0x000F429F */

loc_002B44D2: ;
    edx = MEM32(0x791328);
    PUSH32(esp, edx);
    PUSH32(esp, 0x002B44DEu); RECOMP_ABI_CALL(0x000F43F2u, sub_000F43F2); /* call 0x000F43F2 */

loc_002B44DE: ;
    eax = MEM32(0x735830);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B44F0; /* je: equal / zero */

loc_002B44E7: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2DC6C0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x2DC6C0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002B44C0; /* jl: less (signed <) */

loc_002B44F0: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2DC6C0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x2DC6C0 (32-bit) */
    POP32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_002B4506; /* jne: not equal / not zero */

loc_002B44F9: ;
    PUSH32(esp, 0x4C33DC);
    PUSH32(esp, 0x002B4503u); RECOMP_ABI_CALL(0x002BB320u, sub_002BB320); /* call 0x002BB320 */

loc_002B4503: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002B4506: ;
    eax = MEM32(0x735828);
    ecx = MEM32(0x791328);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002B4518u); RECOMP_ABI_CALL(0x000F429Fu, sub_000F429F); /* call 0x000F429F */

loc_002B4518: ;
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
 * sub_002B46A0
 * Original: 0x002B46A0 - 0x002B4821 (385 bytes, 112 insns)
 * Category: game_debug
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B46A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B46A0: ;
    eax = MEM32(0x79135C);
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
    edi = 1;
    if (CMP_EQ(_fa, _fb)) goto loc_002B4729; /* je: equal / zero */

loc_002B46B6: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_002B46C0;

    /* nop */

loc_002B46C0: ;
    MEM32(0x735854) = edi;
    eax = MEM32(0x79135C);
    PUSH32(esp, 2);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002B46D3u); RECOMP_ABI_CALL(0x000F429Fu, sub_000F429F); /* call 0x000F429F */

loc_002B46D3: ;
    ecx = MEM32(0x79135C);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002B46DFu); RECOMP_ABI_CALL(0x000F43F2u, sub_000F43F2); /* call 0x000F43F2 */

loc_002B46DF: ;
    edx = MEM32(0x79135C);
    PUSH32(esp, 0x3E8);
    PUSH32(esp, edx);
    PUSH32(esp, 0x002B46F0u); RECOMP_ABI_CALL(0x000FA085u, sub_000FA085); /* call 0x000FA085 */

loc_002B46F0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x102) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x102 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B46FD; /* jne: not equal / not zero */

loc_002B46F7: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x1E (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002B46C0; /* jl: less (signed <) */

loc_002B46FD: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x1E (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B4712; /* jne: not equal / not zero */

loc_002B4702: ;
    PUSH32(esp, 0x4C3474);
    PUSH32(esp, 0x002B470Cu); RECOMP_ABI_CALL(0x002BB320u, sub_002BB320); /* call 0x002BB320 */

loc_002B470C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = ebx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_002B4712: ;
    MEM32(0x735858) = ebp;
    MEM32(0x735854) = ebp;
    eax = MEM32(0x79135C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002B4729u); RECOMP_ABI_CALL(0x000F8528u, sub_000F8528); /* call 0x000F8528 */

loc_002B4729: ;
    _fa = (uint32_t)(MEM32(0x791370)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x791370), ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B47A8; /* je: equal / zero */

loc_002B4731: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_002B4740;

    /* nop */
    /* nop */

loc_002B4740: ;
    MEM32(0x73585C) = edi;
    ecx = MEM32(0x791370);
    PUSH32(esp, 2);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002B4754u); RECOMP_ABI_CALL(0x000F429Fu, sub_000F429F); /* call 0x000F429F */

loc_002B4754: ;
    edx = MEM32(0x791370);
    PUSH32(esp, edx);
    PUSH32(esp, 0x002B4760u); RECOMP_ABI_CALL(0x000F43F2u, sub_000F43F2); /* call 0x000F43F2 */

loc_002B4760: ;
    eax = MEM32(0x791370);
    PUSH32(esp, 0x3E8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002B4770u); RECOMP_ABI_CALL(0x000FA085u, sub_000FA085); /* call 0x000FA085 */

loc_002B4770: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x102) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x102 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B477D; /* jne: not equal / not zero */

loc_002B4777: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x1E (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002B4740; /* jl: less (signed <) */

loc_002B477D: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x1E (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B4790; /* jne: not equal / not zero */

loc_002B4782: ;
    PUSH32(esp, 0x4C3444);
    PUSH32(esp, 0x002B478Cu); RECOMP_ABI_CALL(0x002BB320u, sub_002BB320); /* call 0x002BB320 */

loc_002B478C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_002B4790: ;
    MEM32(0x735860) = ebp;
    MEM32(0x73585C) = ebp;
    ecx = MEM32(0x791370);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002B47A8u); RECOMP_ABI_CALL(0x000F8528u, sub_000F8528); /* call 0x000F8528 */

loc_002B47A8: ;
    _fa = (uint32_t)(MEM32(0x791328)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x791328), ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B481A; /* je: equal / zero */

loc_002B47B0: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002B47B2: ;
    MEM32(0x735864) = edi;
    edx = MEM32(0x791328);
    PUSH32(esp, 2);
    PUSH32(esp, edx);
    PUSH32(esp, 0x002B47C6u); RECOMP_ABI_CALL(0x000F429Fu, sub_000F429F); /* call 0x000F429F */

loc_002B47C6: ;
    eax = MEM32(0x791328);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002B47D1u); RECOMP_ABI_CALL(0x000F43F2u, sub_000F43F2); /* call 0x000F43F2 */

loc_002B47D1: ;
    ecx = MEM32(0x791328);
    PUSH32(esp, 0x3E8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002B47E2u); RECOMP_ABI_CALL(0x000FA085u, sub_000FA085); /* call 0x000FA085 */

loc_002B47E2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x102) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x102 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B47EF; /* jne: not equal / not zero */

loc_002B47E9: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x1E (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002B47B2; /* jl: less (signed <) */

loc_002B47EF: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x1E (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B4802; /* jne: not equal / not zero */

loc_002B47F4: ;
    PUSH32(esp, 0x4C3410);
    PUSH32(esp, 0x002B47FEu); RECOMP_ABI_CALL(0x002BB320u, sub_002BB320); /* call 0x002BB320 */

loc_002B47FE: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_002B4802: ;
    MEM32(0x735868) = ebp;
    MEM32(0x735864) = ebp;
    edx = MEM32(0x791328);
    PUSH32(esp, edx);
    PUSH32(esp, 0x002B481Au); RECOMP_ABI_CALL(0x000F8528u, sub_000F8528); /* call 0x000F8528 */

loc_002B481A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002B4830
 * Original: 0x002B4830 - 0x002B4924 (244 bytes, 78 insns)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B4830(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B4830: ;
    eax = MEM32(0x73581C);
    ecx = MEM32(0x79135C);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x002B4845u); RECOMP_ABI_CALL(0x000F429Fu, sub_000F429F); /* call 0x000F429F */

loc_002B4845: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B4859; /* jne: not equal / not zero */

loc_002B4849: ;
    PUSH32(esp, 0x4C3678);
    PUSH32(esp, 0x002B4853u); RECOMP_ABI_CALL(0x002BB320u, sub_002BB320); /* call 0x002BB320 */

loc_002B4853: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = esi | 0xFFFFFFFFu;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_002B4859: ;
    edx = MEM32(0x735820);
    eax = MEM32(0x791370);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002B486Bu); RECOMP_ABI_CALL(0x000F429Fu, sub_000F429F); /* call 0x000F429F */

loc_002B486B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B487D; /* jne: not equal / not zero */

loc_002B486F: ;
    PUSH32(esp, 0x4C3630);
    PUSH32(esp, 0x002B4879u); RECOMP_ABI_CALL(0x002BB320u, sub_002BB320); /* call 0x002BB320 */

loc_002B4879: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_002B487D: ;
    ecx = MEM32(0x735828);
    edx = MEM32(0x791328);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x002B4890u); RECOMP_ABI_CALL(0x000F429Fu, sub_000F429F); /* call 0x000F429F */

loc_002B4890: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B48A2; /* jne: not equal / not zero */

loc_002B4894: ;
    PUSH32(esp, 0x4C35E8);
    PUSH32(esp, 0x002B489Eu); RECOMP_ABI_CALL(0x002BB320u, sub_002BB320); /* call 0x002BB320 */

loc_002B489E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_002B48A2: ;
    eax = MEM32(0x79135C);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002B48AFu); RECOMP_ABI_CALL(0x000F4345u, sub_000F4345); /* call 0x000F4345 */

loc_002B48AF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B48C1; /* jne: not equal / not zero */

loc_002B48B3: ;
    PUSH32(esp, 0x4C3598);
    PUSH32(esp, 0x002B48BDu); RECOMP_ABI_CALL(0x002BB320u, sub_002BB320); /* call 0x002BB320 */

loc_002B48BD: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_002B48C1: ;
    ecx = MEM32(0x791370);
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002B48CFu); RECOMP_ABI_CALL(0x000F4345u, sub_000F4345); /* call 0x000F4345 */

loc_002B48CF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B48E1; /* jne: not equal / not zero */

loc_002B48D3: ;
    PUSH32(esp, 0x4C3548);
    PUSH32(esp, 0x002B48DDu); RECOMP_ABI_CALL(0x002BB320u, sub_002BB320); /* call 0x002BB320 */

loc_002B48DD: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_002B48E1: ;
    edx = MEM32(0x791328);
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    PUSH32(esp, 0x002B48EFu); RECOMP_ABI_CALL(0x000F4345u, sub_000F4345); /* call 0x000F4345 */

loc_002B48EF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B4901; /* jne: not equal / not zero */

loc_002B48F3: ;
    PUSH32(esp, 0x4C34F8);
    PUSH32(esp, 0x002B48FDu); RECOMP_ABI_CALL(0x002BB320u, sub_002BB320); /* call 0x002BB320 */

loc_002B48FD: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_002B4901: ;
    eax = MEM32(0x79136C);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002B490Eu); RECOMP_ABI_CALL(0x000F4345u, sub_000F4345); /* call 0x000F4345 */

loc_002B490E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B4920; /* jne: not equal / not zero */

loc_002B4912: ;
    PUSH32(esp, 0x4C34A8);
    PUSH32(esp, 0x002B491Cu); RECOMP_ABI_CALL(0x002BB320u, sub_002BB320); /* call 0x002BB320 */

loc_002B491C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_002B4920: ;
    eax = esi;
    POP32(esp, esi);
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
 * sub_002B4940
 * Original: 0x002B4940 - 0x002B49B2 (114 bytes, 29 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_002B4940(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B4940: ;
    eax = MEM32(0x735854);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B49A3; /* jne: not equal / not zero */

loc_002B4949: ;
    /* nop */

loc_002B4950: ;
    PUSH32(esp, 0x002B4955u); RECOMP_ABI_CALL(0x003C8EC0u, sub_003C8EC0); /* call 0x003C8EC0 */

loc_002B4955: ;
    PUSH32(esp, 0x002B495Au); RECOMP_ABI_CALL(0x000F449Eu, sub_000F449E); /* call 0x000F449E */

loc_002B495A: ;
    eax = MEM32(0x735838);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x735838) = eax;
    PUSH32(esp, 0x002B496Au); RECOMP_ABI_CALL(0x002BB140u, sub_002BB140); /* call 0x002BB140 */

loc_002B496A: ;
    PUSH32(esp, 0x002B496Fu); RECOMP_ABI_CALL(0x002BB850u, sub_002BB850); /* call 0x002BB850 */

loc_002B496F: ;
    PUSH32(esp, 0x002B4974u); RECOMP_ABI_CALL(0x002BBAC0u, sub_002BBAC0); /* call 0x002BBAC0 */

loc_002B4974: ;
    ecx = MEM32(0x791328);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002B4980u); RECOMP_ABI_CALL(0x000F43F2u, sub_000F43F2); /* call 0x000F43F2 */

loc_002B4980: ;
    eax = MEM32(0x735844);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B499A; /* je: equal / zero */

loc_002B4989: ;
    edx = MEM32(0x735848);
    eax = MEM32(0x735844);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x002B4997u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002B4995u); } /* indirect call */
    }

loc_002B4997: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002B499A: ;
    eax = MEM32(0x735854);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B4950; /* je: equal / zero */

loc_002B49A3: ;
    MEM32(0x735858) = 1;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002B49C0
 * Original: 0x002B49C0 - 0x002B49F7 (55 bytes, 13 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_002B49C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B49C0: ;
    eax = MEM32(0x73585C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B49E8; /* jne: not equal / not zero */

loc_002B49C9: ;
    /* nop */

loc_002B49D0: ;
    PUSH32(esp, 0x002B49D5u); RECOMP_ABI_CALL(0x003C8EC0u, sub_003C8EC0); /* call 0x003C8EC0 */

loc_002B49D5: ;
    PUSH32(esp, 0x002B49DAu); RECOMP_ABI_CALL(0x000F449Eu, sub_000F449E); /* call 0x000F449E */

loc_002B49DA: ;
    PUSH32(esp, 0x002B49DFu); RECOMP_ABI_CALL(0x002BB870u, sub_002BB870); /* call 0x002BB870 */

loc_002B49DF: ;
    eax = MEM32(0x73585C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B49D0; /* je: equal / zero */

loc_002B49E8: ;
    MEM32(0x735860) = 1;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

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
 * sub_002B4A80
 * Original: 0x002B4A80 - 0x002B4B67 (231 bytes, 65 insns)
 * Category: game_debug
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_002B4A80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B4A80: ;
    eax = MEM32(0x73586C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B4B64; /* je: equal / zero */

loc_002B4A8D: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x791364);
    PUSH32(esp, 4);
    PUSH32(esp, 0);
    PUSH32(esp, 0x2B4940);
    PUSH32(esp, 0x3000);
    PUSH32(esp, 0);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x002B4AA4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002B4AA2u); } /* indirect call */
    }

loc_002B4AA4: ;
    MEM32(0x79135C) = eax;
    eax = MEM32(0x79135C);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B4AC6; /* jne: not equal / not zero */

loc_002B4AB5: ;
    PUSH32(esp, 0x4C37E0);
    PUSH32(esp, 0x002B4ABFu); RECOMP_ABI_CALL(0x002BB320u, sub_002BB320); /* call 0x002BB320 */

loc_002B4ABF: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 4; return; /* ret */

loc_002B4AC6: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x791360);
    PUSH32(esp, 4);
    PUSH32(esp, 0);
    PUSH32(esp, 0x2B49C0);
    PUSH32(esp, 0x3000);
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(0x73586C); PUSH32(esp, 0x002B4AE1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002B4ADBu); } /* indirect call */
    }

loc_002B4AE1: ;
    MEM32(0x791370) = eax;
    eax = MEM32(0x791370);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B4B03; /* jne: not equal / not zero */

loc_002B4AF2: ;
    PUSH32(esp, 0x4C3798);
    PUSH32(esp, 0x002B4AFCu); RECOMP_ABI_CALL(0x002BB320u, sub_002BB320); /* call 0x002BB320 */

loc_002B4AFC: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 4; return; /* ret */

loc_002B4B03: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x791368);
    PUSH32(esp, 4);
    PUSH32(esp, 0);
    PUSH32(esp, 0x2B4570);
    PUSH32(esp, 0x3000);
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(0x73586C); PUSH32(esp, 0x002B4B1Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002B4B18u); } /* indirect call */
    }

loc_002B4B1E: ;
    MEM32(0x791328) = eax;
    eax = MEM32(0x791328);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B4B40; /* jne: not equal / not zero */

loc_002B4B2F: ;
    PUSH32(esp, 0x4C3750);
    PUSH32(esp, 0x002B4B39u); RECOMP_ABI_CALL(0x002BB320u, sub_002BB320); /* call 0x002BB320 */

loc_002B4B39: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 4; return; /* ret */

loc_002B4B40: ;
    MEM32(0x79136C) = 0xFFFFFFFEu;
    eax = MEM32(0x79136C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B4B64; /* jne: not equal / not zero */

loc_002B4B53: ;
    PUSH32(esp, 0x4C3708);
    PUSH32(esp, 0x002B4B5Du); RECOMP_ABI_CALL(0x002BB320u, sub_002BB320); /* call 0x002BB320 */

loc_002B4B5D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 4; return; /* ret */

loc_002B4B64: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
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
 * sub_002B4F20
 * Original: 0x002B4F20 - 0x002B4F8E (110 bytes, 40 insns)
 * Category: game_debug
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B4F20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B4F20: ;
    PUSH32(esp, esi);
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B4F36; /* jne: not equal / not zero */

loc_002B4F27: ;
    PUSH32(esp, 0x4C386C);
    PUSH32(esp, 0x002B4F31u); RECOMP_ABI_CALL(0x002BF770u, sub_002BF770); /* call 0x002BF770 */

loc_002B4F31: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_002B4F36: ;
    eax = MEM32(0x735898);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B4F52; /* je: equal / zero */

loc_002B4F3F: ;
    eax = MEM32(esi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002B4F48u); RECOMP_ABI_CALL(0x002BC280u, sub_002BC280); /* call 0x002BC280 */

loc_002B4F48: ;
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x735898); PUSH32(esp, 0x002B4F4Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002B4F49u); } /* indirect call */
    }

loc_002B4F4F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002B4F52: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B4F62; /* je: equal / zero */

loc_002B4F59: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002B4F5Fu); RECOMP_ABI_CALL(0x002BE8C0u, sub_002BE8C0); /* call 0x002BE8C0 */

loc_002B4F5F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002B4F62: ;
    _fa = (uint32_t)(MEM8(esi + 2)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 2), 4 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B4F87; /* jne: not equal / not zero */

loc_002B4F68: ;
    ecx = MEM32(esi + 0x94);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002B4F74u); RECOMP_ABI_CALL(0x002BF5F0u, sub_002BF5F0); /* call 0x002BF5F0 */

loc_002B4F74: ;
    eax = MEM32(esi + 0x14);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B4F87; /* je: equal / zero */

loc_002B4F7E: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x002B4F84u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002B4F81u); } /* indirect call */
    }

loc_002B4F84: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002B4F87: ;
    PUSH32(esp, 0x002B4F8Cu); RECOMP_ABI_CALL(0x002B4EB0u, sub_002B4EB0); /* call 0x002B4EB0 */

loc_002B4F8C: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002B4F90
 * Original: 0x002B4F90 - 0x002B4FAA (26 bytes, 9 insns)
 * Category: game_debug
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B4F90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B4F90: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B4FA5; /* jne: not equal / not zero */

loc_002B4F94: ;
    PUSH32(esp, 0x4C3894);
    PUSH32(esp, 0x002B4F9Eu); RECOMP_ABI_CALL(0x002BF770u, sub_002BF770); /* call 0x002BF770 */

loc_002B4F9E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 4; return; /* ret */

loc_002B4FA5: ;
    eax = (uint32_t)(int32_t)SMEM8(eax + 1);
    esp += 4; return; /* ret */

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
 * sub_002B5070
 * Original: 0x002B5070 - 0x002B5221 (433 bytes, 130 insns)
 * Category: game_debug
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B5070(void)
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

loc_002B5070: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    PUSH32(esp, edi);
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B520D; /* je: equal / zero */

loc_002B5084: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B520D; /* je: equal / zero */

loc_002B508C: ;
    ebx = MEM32(esp + 0x1C);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B520D; /* je: equal / zero */

loc_002B5098: ;
    eax = MEM32(0x735880);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_002B50B1; /* jne: not equal / not zero */

loc_002B50A2: ;
    esi = ebp;
    PUSH32(esp, 0x002B50A9u); RECOMP_ABI_CALL(0x002B4FE0u, sub_002B4FE0); /* call 0x002B4FE0 */

loc_002B50A9: ;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_002B50B1: ;
    MEM32(0x791318) = 0;
    SET_LO8(eax, MEM8(edi + 1));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 3 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B5137; /* je: equal / zero */

loc_002B50C2: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 4 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B5137; /* je: equal / zero */

loc_002B50C6: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 5 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B512B; /* jne: not equal / not zero */

loc_002B50CA: ;
    eax = MEM32(edi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002B50D3u); RECOMP_ABI_CALL(0x002BCB50u, sub_002BCB50); /* call 0x002BCB50 */

loc_002B50D3: ;
    ecx = MEM32(edi + 4);
    PUSH32(esp, ecx);
    MEM32(esp + 0x18) = eax;
    PUSH32(esp, 0x002B50E0u); RECOMP_ABI_CALL(0x002BCB00u, sub_002BCB00); /* call 0x002BCB00 */

loc_002B50E0: ;
    edx = MEM32(edi + 4);
    PUSH32(esp, edx);
    MEM32(esp + 0x20) = eax;
    PUSH32(esp, 0x002B50EDu); RECOMP_ABI_CALL(0x002BCB20u, sub_002BCB20); /* call 0x002BCB20 */

loc_002B50ED: ;
    ecx = eax;
    eax = 0x10;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esp + 0x10));
    MEM32(esp + 0x10) = eax;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() / (double)SMEM32(esp + 0x14)); /* fidiv dword ptr [esp + 0x14] */
    fp_top() = RECOMP_FP_PC(fp_top() * (double)SMEM32(0x79131C)); /* fimul dword ptr [0x79131c] */
    PUSH32(esp, 0x002B5116u); RECOMP_ABI_CALL(0x000EB38Cu, sub_000EB38C); /* call 0x000EB38C */

loc_002B5116: ;
    MEM32(ebp) = eax;
    edx = MEM32(edi + 0x9C);
    eax = edx + eax + 1;
    MEM32(ebp) = eax;
    goto loc_002B51EB;

loc_002B512B: ;
    MEM32(ebp) = 0;
    goto loc_002B51EB;

loc_002B5137: ;
    SET_LO8(eax, MEM8(edi + 0x72));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B515C; /* jne: not equal / not zero */

loc_002B513E: ;
    ecx = MEM32(0x735984);
    edx = MEM32(edi + 0xA0);
    eax = MEM32(edi + 0x9C);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x64);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp) = ecx;
    goto loc_002B5165;

loc_002B515C: ;
    edx = MEM32(edi + 0x9C);
    MEM32(ebp) = edx;

loc_002B5165: ;
    ebx = esp + 0x14;
    esi = esp + 0x10;
    PUSH32(esp, 0x002B5172u); RECOMP_ABI_CALL(0x002B4FE0u, sub_002B4FE0); /* call 0x002B4FE0 */

loc_002B5172: ;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() / (double)SMEM32(esp + 0x14)); /* fidiv dword ptr [esp + 0x14] */
    fp_push((double)SMEM32(ebp)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() / (double)SMEM32(0x79131C)); /* fidiv dword ptr [0x79131c] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x496B28)); /* fmul dword ptr [0x496b28] */
    MEMF(0x791318) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x4978D4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x4978d4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002B51B1; /* je: equal / zero */

loc_002B519E: ;
    fp_push(MEMF(0x791318)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x4C38E4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x4c38e4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_002B51EB; /* jp: parity */

loc_002B51B1: ;
    edx = MEM32(edi + 0xC);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x002B51C4u); RECOMP_ABI_CALL(0x002BEB30u, sub_002BEB30); /* call 0x002BEB30 */

loc_002B51C4: ;
    fp_push((double)SMEM32(esp + 0x1C)); /* fild */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_top() = RECOMP_FP_PC(fp_top() / (double)SMEM32(esp + 0x14)); /* fidiv dword ptr [esp + 0x14] */
    fp_top() = RECOMP_FP_PC(fp_top() * (double)SMEM32(0x79131C)); /* fimul dword ptr [0x79131c] */
    PUSH32(esp, 0x002B51DAu); RECOMP_ABI_CALL(0x000EB38Cu, sub_000EB38C); /* call 0x000EB38C */

loc_002B51DA: ;
    MEM32(edi + 0x9C) = eax;
    eax = MEM32(0x735984);
    MEM32(edi + 0xA0) = eax;

loc_002B51EB: ;
    ecx = MEM32(edi + 0x88);
    eax = MEM32(ebp);
    POP32(esp, esi);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp) = eax;
    edx = MEM32(0x79131C);
    eax = MEM32(esp + 0x1C);
    POP32(esp, edi);
    POP32(esp, ebp);
    MEM32(eax) = edx;
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_002B520D: ;
    PUSH32(esp, 0x4C38BC);
    PUSH32(esp, 0x002B5217u); RECOMP_ABI_CALL(0x002BF770u, sub_002BF770); /* call 0x002BF770 */

loc_002B5217: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, ebp);
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
 * sub_002B5260
 * Original: 0x002B5260 - 0x002B528B (43 bytes, 16 insns)
 * Category: game_debug
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_002B5260(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B5260: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B5275; /* jne: not equal / not zero */

loc_002B5264: ;
    PUSH32(esp, 0x4C38E8);
    PUSH32(esp, 0x002B526Eu); RECOMP_ABI_CALL(0x002BF770u, sub_002BF770); /* call 0x002BF770 */

loc_002B526E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 4; return; /* ret */

loc_002B5275: ;
    _fa = (uint32_t)(MEM8(eax + 1)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 1), 2 (8-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002B5288; /* jl: less (signed <) */

loc_002B527B: ;
    eax = MEM32(eax + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002B5284u); RECOMP_ABI_CALL(0x002BCB50u, sub_002BCB50); /* call 0x002BCB50 */

loc_002B5284: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_002B5288: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_002B5290
 * Original: 0x002B5290 - 0x002B52BB (43 bytes, 16 insns)
 * Category: game_debug
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_002B5290(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B5290: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B52A5; /* jne: not equal / not zero */

loc_002B5294: ;
    PUSH32(esp, 0x4C3914);
    PUSH32(esp, 0x002B529Eu); RECOMP_ABI_CALL(0x002BF770u, sub_002BF770); /* call 0x002BF770 */

loc_002B529E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 4; return; /* ret */

loc_002B52A5: ;
    _fa = (uint32_t)(MEM8(eax + 1)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 1), 2 (8-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002B52B8; /* jl: less (signed <) */

loc_002B52AB: ;
    eax = MEM32(eax + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002B52B4u); RECOMP_ABI_CALL(0x002BCB00u, sub_002BCB00); /* call 0x002BCB00 */

loc_002B52B4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_002B52B8: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_002B52C0
 * Original: 0x002B52C0 - 0x002B52EB (43 bytes, 16 insns)
 * Category: game_debug
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_002B52C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B52C0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B52D5; /* jne: not equal / not zero */

loc_002B52C4: ;
    PUSH32(esp, 0x4C3940);
    PUSH32(esp, 0x002B52CEu); RECOMP_ABI_CALL(0x002BF770u, sub_002BF770); /* call 0x002BF770 */

loc_002B52CE: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 4; return; /* ret */

loc_002B52D5: ;
    _fa = (uint32_t)(MEM8(eax + 1)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 1), 2 (8-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002B52E8; /* jl: less (signed <) */

loc_002B52DB: ;
    eax = MEM32(eax + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002B52E4u); RECOMP_ABI_CALL(0x002BCB10u, sub_002BCB10); /* call 0x002BCB10 */

loc_002B52E4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_002B52E8: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_002B52F0
 * Original: 0x002B52F0 - 0x002B531B (43 bytes, 16 insns)
 * Category: game_debug
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_002B52F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B52F0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B5305; /* jne: not equal / not zero */

loc_002B52F4: ;
    PUSH32(esp, 0x4C396C);
    PUSH32(esp, 0x002B52FEu); RECOMP_ABI_CALL(0x002BF770u, sub_002BF770); /* call 0x002BF770 */

loc_002B52FE: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 4; return; /* ret */

loc_002B5305: ;
    _fa = (uint32_t)(MEM8(eax + 1)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 1), 2 (8-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002B5318; /* jl: less (signed <) */

loc_002B530B: ;
    eax = MEM32(eax + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002B5314u); RECOMP_ABI_CALL(0x002BCCB0u, sub_002BCCB0); /* call 0x002BCCB0 */

loc_002B5314: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_002B5318: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_002B5320
 * Original: 0x002B5320 - 0x002B534B (43 bytes, 16 insns)
 * Category: game_debug
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_002B5320(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B5320: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B5335; /* jne: not equal / not zero */

loc_002B5324: ;
    PUSH32(esp, 0x4C3998);
    PUSH32(esp, 0x002B532Eu); RECOMP_ABI_CALL(0x002BF770u, sub_002BF770); /* call 0x002BF770 */

loc_002B532E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 4; return; /* ret */

loc_002B5335: ;
    _fa = (uint32_t)(MEM8(eax + 1)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 1), 2 (8-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002B5348; /* jl: less (signed <) */

loc_002B533B: ;
    eax = MEM32(eax + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002B5344u); RECOMP_ABI_CALL(0x002BCCC0u, sub_002BCCC0); /* call 0x002BCCC0 */

loc_002B5344: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_002B5348: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_002B5350
 * Original: 0x002B5350 - 0x002B53F0 (160 bytes, 59 insns)
 * Category: game_debug
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B5350(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B5350: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    if (CMP_NE(_fa, _fb)) goto loc_002B5367; /* jne: not equal / not zero */

loc_002B5359: ;
    POP32(esp, ebp);
    MEM32(esp + 4) = 0x4C39F0;
    g_seh_ebp = ebp; sub_002BF770(); return; /* tail jmp 0x002BF770 */

loc_002B5367: ;
    _fa = (uint32_t)(MEM8(edi + 0xA9)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi + 0xA9), 1 (8-bit) */
    _cf = (int)(_fa < _fb);
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_002B5386; /* jne: not equal / not zero */

loc_002B5371: ;
    eax = MEM32(edi + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002B537Bu); RECOMP_ABI_CALL(0x002BCC30u, sub_002BCC30); /* call 0x002BCC30 */

loc_002B537B: ;
    esi = SX16(LO16(eax));
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFF80u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFF80u (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_002B5388; /* jne: not equal / not zero */

loc_002B5386: ;
    _cf = 0; /* xor clears CF */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002B5388: ;
    eax = MEM32(0x73597C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_002B53C2; /* jne: not equal / not zero */

loc_002B5391: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFF80u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0xFFFFFF80u (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_002B53BD; /* jne: not equal / not zero */

loc_002B5396: ;
    ecx = MEM32(edi + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002B539Fu); RECOMP_ABI_CALL(0x002BCB10u, sub_002BCB10); /* call 0x002BCB10 */

loc_002B539F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_002B53B7; /* jne: not equal / not zero */

loc_002B53A7: ;
    eax = ebx;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x1E;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0xFFFFFFF1u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFF1u)) >> 32) & 1);
    eax = eax + 0xFFFFFFF1u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(esi)) >> 32) & 1);
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_002B53C4;

loc_002B53B7: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = esi;
    goto loc_002B53C4;

loc_002B53BD: ;
    eax = esi + ebp;
    goto loc_002B53C4;

loc_002B53C2: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002B53C4: ;
    MEM16(edi + ebx * 2 + 0x42) = LO16(ebp);
    edx = (uint32_t)(int32_t)SMEM8(edi + 3);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    POP32(esp, esi);
    if (CMP_GE(_fas, _fbs)) goto loc_002B53E2; /* jge: greater or equal (signed >=) */

loc_002B53D2: ;
    PUSH32(esp, eax);
    eax = MEM32(edi + 0xC);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002B53DDu); RECOMP_ABI_CALL(0x002BEBC0u, sub_002BEBC0); /* call 0x002BEBC0 */

loc_002B53DD: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_002B53E2: ;
    POP32(esp, ebp);
    MEM32(esp + 4) = 0x4C39C4;
    g_seh_ebp = ebp; sub_002BF770(); return; /* tail jmp 0x002BF770 */

}

/**
 * sub_002B5410
 * Original: 0x002B5410 - 0x002B546B (91 bytes, 31 insns)
 * Category: game_debug
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B5410(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B5410: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B5422; /* jne: not equal / not zero */

loc_002B5414: ;
    PUSH32(esp, 0x4C3A48);
    PUSH32(esp, 0x002B541Eu); RECOMP_ABI_CALL(0x002BF770u, sub_002BF770); /* call 0x002BF770 */

loc_002B541E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_002B5422: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFF1u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFF1u (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002B542F; /* jge: greater or equal (signed >=) */

loc_002B5427: ;
    MEM16(eax + 0x46) = 0xFFF1;
    goto loc_002B5440;

loc_002B542F: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_002B543C; /* jle: less or equal (signed <=) */

loc_002B5434: ;
    MEM16(eax + 0x46) = 0xF;
    goto loc_002B5440;

loc_002B543C: ;
    MEM16(eax + 0x46) = LO16(ecx);

loc_002B5440: ;
    ecx = MEM32(0x73597C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B545C; /* jne: not equal / not zero */

loc_002B544A: ;
    ecx = (uint32_t)(int32_t)SMEM16(eax + 0x46);
    edx = MEM32(eax + 0xC);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x002B5458u); RECOMP_ABI_CALL(0x002BEBD0u, sub_002BEBD0); /* call 0x002BEBD0 */

loc_002B5458: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_002B545C: ;
    eax = MEM32(eax + 0xC);
    PUSH32(esp, 0xFFFFFF80u);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002B5467u); RECOMP_ABI_CALL(0x002BEBD0u, sub_002BEBD0); /* call 0x002BEBD0 */

loc_002B5467: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002B5470
 * Original: 0x002B5470 - 0x002B5489 (25 bytes, 9 insns)
 * Category: game_debug
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B5470(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B5470: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B5484; /* jne: not equal / not zero */

loc_002B5474: ;
    PUSH32(esp, 0x4C3A78);
    PUSH32(esp, 0x002B547Eu); RECOMP_ABI_CALL(0x002BF770u, sub_002BF770); /* call 0x002BF770 */

loc_002B547E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_002B5484: ;
    eax = (uint32_t)(int32_t)SMEM16(eax + 0x46);
    esp += 4; return; /* ret */

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
 * sub_002B54F0
 * Original: 0x002B54F0 - 0x002B5509 (25 bytes, 9 insns)
 * Category: game_debug
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B54F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B54F0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B5504; /* jne: not equal / not zero */

loc_002B54F4: ;
    PUSH32(esp, 0x4C3AD4);
    PUSH32(esp, 0x002B54FEu); RECOMP_ABI_CALL(0x002BF770u, sub_002BF770); /* call 0x002BF770 */

loc_002B54FE: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_002B5504: ;
    eax = (uint32_t)(int32_t)SMEM16(eax + 0x40);
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
 * sub_002B55C0
 * Original: 0x002B55C0 - 0x002B55DB (27 bytes, 9 insns)
 * Category: game_debug
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B55C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B55C0: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B55D2; /* jne: not equal / not zero */

loc_002B55C4: ;
    PUSH32(esp, 0x4C3B00);
    PUSH32(esp, 0x002B55CEu); RECOMP_ABI_CALL(0x002BF770u, sub_002BF770); /* call 0x002BF770 */

loc_002B55CE: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_002B55D2: ;
    MEM32(ecx + 0x38) = eax;
    MEM32(0x73588C) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_002B55E0
 * Original: 0x002B55E0 - 0x002B564D (109 bytes, 41 insns)
 * Category: game_io
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B55E0(void)
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

loc_002B55E0: ;
    PUSH32(esp, esi);
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B55F6; /* jne: not equal / not zero */

loc_002B55E7: ;
    PUSH32(esp, 0x4C3B2C);
    PUSH32(esp, 0x002B55F1u); RECOMP_ABI_CALL(0x002BF770u, sub_002BF770); /* call 0x002BF770 */

loc_002B55F1: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_002B55F6: ;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 8)); /* fmul dword ptr [esp + 8] */
    PUSH32(esp, 0x002B5603u); RECOMP_ABI_CALL(0x000EB38Cu, sub_000EB38C); /* call 0x000EB38C */

loc_002B5603: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x3C);
    edx = edx & 0x1F;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esp + 0xC));
    eax = eax + eax * 8;
    eax = eax << 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 0x7FF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((0xB) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002B562C; /* jl: less (signed <) */

loc_002B562A: ;
    eax = ecx;

loc_002B562C: ;
    MEM16(esi + 0x3E) = LO16(eax);
    esi = MEM32(esi + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B564B; /* je: equal / zero */

loc_002B5637: ;
    eax = SX16(LO16(eax));
    ecx = ecx << 0xB;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, ecx);
    eax = eax << 0xB;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x002B5648u); RECOMP_ABI_CALL(0x002BE230u, sub_002BE230); /* call 0x002BE230 */

loc_002B5648: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002B564B: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_002B5650
 * Original: 0x002B5650 - 0x002B56A3 (83 bytes, 33 insns)
 * Category: game_io
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B5650(void)
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

loc_002B5650: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B5668; /* jne: not equal / not zero */

loc_002B5658: ;
    PUSH32(esp, 0x4C3B5C);
    PUSH32(esp, 0x002B5662u); RECOMP_ABI_CALL(0x002BF770u, sub_002BF770); /* call 0x002BF770 */

loc_002B5662: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_002B5668: ;
    PUSH32(esp, edi);
    edi = (uint32_t)(int32_t)SMEM16(esi + 0x3C);
    MEM32(esp + 8) = edi;
    fp_push((double)SMEM32(esp + 8)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x4B6400)); /* fmul dword ptr [0x4b6400] */
    PUSH32(esp, 0x002B5680u); RECOMP_ABI_CALL(0x000EB38Cu, sub_000EB38C); /* call 0x000EB38C */

loc_002B5680: ;
    MEM16(esi + 0x3E) = LO16(eax);
    esi = MEM32(esi + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B569F; /* je: equal / zero */

loc_002B568B: ;
    eax = SX16(LO16(eax));
    edi = edi << 0xB;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, edi);
    eax = eax << 0xB;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x002B569Cu); RECOMP_ABI_CALL(0x002BE230u, sub_002BE230); /* call 0x002BE230 */

loc_002B569C: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002B569F: ;
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
 * sub_002B56B0
 * Original: 0x002B56B0 - 0x002B56E6 (54 bytes, 20 insns)
 * Category: game_io
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B56B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B56B0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B56C2; /* jne: not equal / not zero */

loc_002B56B4: ;
    PUSH32(esp, 0x4C3B8C);
    PUSH32(esp, 0x002B56BEu); RECOMP_ABI_CALL(0x002BF770u, sub_002BF770); /* call 0x002BF770 */

loc_002B56BE: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_002B56C2: ;
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM16(eax + 0x3E) = LO16(edx);
    if (CMP_EQ(_fa, _fb)) goto loc_002B56E5; /* je: equal / zero */

loc_002B56CD: ;
    eax = (uint32_t)(int32_t)SMEM16(eax + 0x3C);
    edx = SX16(LO16(edx));
    eax = eax << 0xB;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    edx = edx << 0xB;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002B56E2u); RECOMP_ABI_CALL(0x002BE230u, sub_002BE230); /* call 0x002BE230 */

loc_002B56E2: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002B56E5: ;
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
 * sub_002B5700
 * Original: 0x002B5700 - 0x002B5739 (57 bytes, 23 insns)
 * Category: game_debug
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_002B5700(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B5700: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B5715; /* jne: not equal / not zero */

loc_002B5704: ;
    PUSH32(esp, 0x4C3BBC);
    PUSH32(esp, 0x002B570Eu); RECOMP_ABI_CALL(0x002BF770u, sub_002BF770); /* call 0x002BF770 */

loc_002B570E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 4; return; /* ret */

loc_002B5715: ;
    ecx = MEM32(eax + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B5736; /* je: equal / zero */

loc_002B571C: ;
    eax = ecx;
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 0x24); PUSH32(esp, 0x002B5726u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002B5723u); } /* indirect call */
    }

loc_002B5726: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 0x7FF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((0xB) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    esp += 4; return; /* ret */

loc_002B5736: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_002B5740
 * Original: 0x002B5740 - 0x002B5777 (55 bytes, 24 insns)
 * Category: game_debug
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B5740(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B5740: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B5766; /* je: equal / zero */

loc_002B5744: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002B5766; /* jl: less (signed <) */

loc_002B5748: ;
    edx = MEM32(ecx + eax * 4 + 0x18);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B5763; /* je: equal / zero */

loc_002B5750: ;
    eax = edx;
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 0x24); PUSH32(esp, 0x002B575Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002B5757u); } /* indirect call */
    }

loc_002B575A: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    esp += 4; return; /* ret */

loc_002B5763: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_002B5766: ;
    PUSH32(esp, 0x4C3BEC);
    PUSH32(esp, 0x002B5770u); RECOMP_ABI_CALL(0x002BF770u, sub_002BF770); /* call 0x002BF770 */

loc_002B5770: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 4; return; /* ret */

}

/**
 * sub_002B5780
 * Original: 0x002B5780 - 0x002B57FE (126 bytes, 44 insns)
 * Category: game_debug
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B5780(void)
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

loc_002B5780: ;
    fp_push(MEMF(0x4964E8)); /* fld float */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B57A6; /* jne: not equal / not zero */

loc_002B578D: ;
    PUSH32(esp, 0x4C3C1C);
    fp_pop(); /* fstp st(0) */
    PUSH32(esp, 0x002B5799u); RECOMP_ABI_CALL(0x002BF770u, sub_002BF770); /* call 0x002BF770 */

loc_002B5799: ;
    fp_push(MEMF(0x4976B4)); /* fld float */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_002B57A6: ;
    eax = (uint32_t)(int32_t)SMEM8(esi + 1);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002B57FA; /* jl: less (signed <) */

loc_002B57AF: ;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B57FA; /* je: equal / zero */

loc_002B57B6: ;
    ecx = MEM32(eax);
    fp_pop(); /* fstp st(0) */
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 0x24); PUSH32(esp, 0x002B57C1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002B57BEu); } /* indirect call */
    }

loc_002B57C1: ;
    edi = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    PUSH32(esp, 0x002B57CDu); RECOMP_ABI_CALL(0x002B52C0u, sub_002B52C0); /* call 0x002B52C0 */

loc_002B57CD: ;
    ecx = eax + eax * 8;
    eax = edi;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = ecx << 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    eax = eax << 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(esp + 4) = eax;
    fp_push((double)SMEM32(esp + 4)); /* fild */
    eax = esi;
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x002B57EDu); RECOMP_ABI_CALL(0x002B5290u, sub_002B5290); /* call 0x002B5290 */

loc_002B57ED: ;
    MEM32(esp + 4) = eax;
    fp_push((double)SMEM32(esp + 4)); /* fild */
    POP32(esp, edi);
    fp_top() = RECOMP_FP_PC(MEMF(esp + 4) / fp_top()); /* fdivr dword ptr [esp + 4] */

loc_002B57FA: ;
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
 * sub_002B5800
 * Original: 0x002B5800 - 0x002B583B (59 bytes, 24 insns)
 * Category: game_debug
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_002B5800(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B5800: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B5815; /* jne: not equal / not zero */

loc_002B5804: ;
    PUSH32(esp, 0x4C3C50);
    PUSH32(esp, 0x002B580Eu); RECOMP_ABI_CALL(0x002BF770u, sub_002BF770); /* call 0x002BF770 */

loc_002B580E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 4; return; /* ret */

loc_002B5815: ;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B5838; /* je: equal / zero */

loc_002B581C: ;
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 0x24); PUSH32(esp, 0x002B5824u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002B5821u); } /* indirect call */
    }

loc_002B5824: ;
    edx = (uint32_t)(int32_t)SMEM16(esi + 0x3E);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = edx << 0xB;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    SET_LO8(ecx, (CMP_GE(_fas, _fbs)) ? 1 : 0); /* setge */
    eax = ecx;
    esp += 4; return; /* ret */

loc_002B5838: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
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
 * sub_002B5850
 * Original: 0x002B5850 - 0x002B5873 (35 bytes, 13 insns)
 * Category: game_debug
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B5850(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B5850: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B5865; /* jne: not equal / not zero */

loc_002B5854: ;
    PUSH32(esp, 0x4C3C80);
    PUSH32(esp, 0x002B585Eu); RECOMP_ABI_CALL(0x002BF770u, sub_002BF770); /* call 0x002BF770 */

loc_002B585E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 4; return; /* ret */

loc_002B5865: ;
    SET_LO8(edx, MEM8(eax + 1));
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 5 (8-bit) */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    eax = ecx;
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
 * sub_002B5900
 * Original: 0x002B5900 - 0x002B591A (26 bytes, 9 insns)
 * Category: game_debug
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B5900(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B5900: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B5915; /* jne: not equal / not zero */

loc_002B5904: ;
    PUSH32(esp, 0x4C3CAC);
    PUSH32(esp, 0x002B590Eu); RECOMP_ABI_CALL(0x002BF770u, sub_002BF770); /* call 0x002BF770 */

loc_002B590E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 4; return; /* ret */

loc_002B5915: ;
    eax = (uint32_t)(int32_t)SMEM16(eax + 0x60);
    esp += 4; return; /* ret */

}

/**
 * sub_002B5920
 * Original: 0x002B5920 - 0x002B5944 (36 bytes, 12 insns)
 * Category: game_debug
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B5920(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B5920: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B5934; /* jne: not equal / not zero */

loc_002B5926: ;
    PUSH32(esp, 0x4C3CD8);
    PUSH32(esp, 0x002B5930u); RECOMP_ABI_CALL(0x002BF770u, sub_002BF770); /* call 0x002BF770 */

loc_002B5930: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_002B5934: ;
    MEM16(eax + 0x60) = LO16(ecx);
    MEM32(eax + 0x64) = ecx;
    MEM16(eax + 0x68) = LO16(ecx);
    MEM16(eax + 0x6A) = LO16(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002B5950
 * Original: 0x002B5950 - 0x002B5969 (25 bytes, 9 insns)
 * Category: game_debug
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B5950(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B5950: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B5965; /* jne: not equal / not zero */

loc_002B5954: ;
    PUSH32(esp, 0x4C3D08);
    PUSH32(esp, 0x002B595Eu); RECOMP_ABI_CALL(0x002BF770u, sub_002BF770); /* call 0x002BF770 */

loc_002B595E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 4; return; /* ret */

loc_002B5965: ;
    eax = MEM32(eax + 0x4C);
    esp += 4; return; /* ret */

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
 * sub_002B5A20
 * Original: 0x002B5A20 - 0x002B5A38 (24 bytes, 9 insns)
 * Category: game_debug
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B5A20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B5A20: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B5A34; /* jne: not equal / not zero */

loc_002B5A24: ;
    PUSH32(esp, 0x4C3D60);
    PUSH32(esp, 0x002B5A2Eu); RECOMP_ABI_CALL(0x002BF770u, sub_002BF770); /* call 0x002BF770 */

loc_002B5A2E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_002B5A34: ;
    eax = MEM32(eax + 0x14);
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
 * sub_002B5A60
 * Original: 0x002B5A60 - 0x002B5A7A (26 bytes, 9 insns)
 * Category: game_debug
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B5A60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B5A60: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B5A75; /* jne: not equal / not zero */

loc_002B5A64: ;
    PUSH32(esp, 0x4C3DC0);
    PUSH32(esp, 0x002B5A6Eu); RECOMP_ABI_CALL(0x002BF770u, sub_002BF770); /* call 0x002BF770 */

loc_002B5A6E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 4; return; /* ret */

loc_002B5A75: ;
    eax = (uint32_t)(int32_t)SMEM8(eax + 0x71);
    esp += 4; return; /* ret */

}

/**
 * sub_002B5A80
 * Original: 0x002B5A80 - 0x002B5B33 (179 bytes, 52 insns)
 * Category: game_debug
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B5A80(void)
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

loc_002B5A80: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B5A98; /* jne: not equal / not zero */

loc_002B5A87: ;
    PUSH32(esp, 0x4C3DF4);
    PUSH32(esp, 0x002B5A91u); RECOMP_ABI_CALL(0x002BF770u, sub_002BF770); /* call 0x002BF770 */

loc_002B5A91: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_002B5A98: ;
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x72);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    PUSH32(esp, edi);
    edi = (uint32_t)(int32_t)SMEM8(esi + 1);
    if (CMP_EQ(_fa, _fb)) goto loc_002B5B2E; /* je: equal / zero */

loc_002B5AA9: ;
    PUSH32(esp, 0x002B5AAEu); RECOMP_ABI_CALL(0x002BEA50u, sub_002BEA50); /* call 0x002BEA50 */

loc_002B5AAE: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 3 (32-bit) */
    MEM8(esi + 0x72) = LO8(ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_002B5ABB; /* je: equal / zero */

loc_002B5AB6: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B5B29; /* jne: not equal / not zero */

loc_002B5ABB: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B5ACD; /* jne: not equal / not zero */

loc_002B5AC0: ;
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002B5ACBu); RECOMP_ABI_CALL(0x002BEB20u, sub_002BEB20); /* call 0x002BEB20 */

loc_002B5ACB: ;
    goto loc_002B5AE3;

loc_002B5ACD: ;
    edx = MEM32(esi + 0xC);
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    PUSH32(esp, 0x002B5AD8u); RECOMP_ABI_CALL(0x002BEB20u, sub_002BEB20); /* call 0x002BEB20 */

loc_002B5AD8: ;
    eax = MEM32(0x735984);
    MEM32(esi + 0xA0) = eax;

loc_002B5AE3: ;
    edi = MEM32(0x735880);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 8;
    PUSH32(esp, ecx);
    edx = esp + 8;
    PUSH32(esp, edx);
    eax = esi;
    MEM32(0x735880) = 0;
    PUSH32(esp, 0x002B5B07u); RECOMP_ABI_CALL(0x002B5070u, sub_002B5070); /* call 0x002B5070 */

loc_002B5B07: ;
    fp_push((double)SMEM32(esp + 0xC)); /* fild */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x735880) = edi;
    fp_top() = RECOMP_FP_PC(fp_top() / (double)SMEM32(esp + 8)); /* fidiv dword ptr [esp + 8] */
    fp_top() = RECOMP_FP_PC(fp_top() * (double)SMEM32(0x79131C)); /* fimul dword ptr [0x79131c] */
    PUSH32(esp, 0x002B5B23u); RECOMP_ABI_CALL(0x000EB38Cu, sub_000EB38C); /* call 0x000EB38C */

loc_002B5B23: ;
    MEM32(esi + 0x9C) = eax;

loc_002B5B29: ;
    PUSH32(esp, 0x002B5B2Eu); RECOMP_ABI_CALL(0x002BEA60u, sub_002BEA60); /* call 0x002BEA60 */

loc_002B5B2E: ;
    POP32(esp, edi);
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
 * sub_002B5B40
 * Original: 0x002B5B40 - 0x002B5B59 (25 bytes, 9 insns)
 * Category: game_debug
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B5B40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B5B40: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B5B54; /* jne: not equal / not zero */

loc_002B5B44: ;
    PUSH32(esp, 0x4C3E1C);
    PUSH32(esp, 0x002B5B4Eu); RECOMP_ABI_CALL(0x002BF770u, sub_002BF770); /* call 0x002BF770 */

loc_002B5B4E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_002B5B54: ;
    eax = (uint32_t)(int32_t)SMEM8(eax + 0x72);
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
 * sub_002B5C20
 * Original: 0x002B5C20 - 0x002B5C42 (34 bytes, 10 insns)
 * Category: game_debug
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B5C20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B5C20: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B5C36; /* jne: not equal / not zero */

loc_002B5C28: ;
    PUSH32(esp, 0x4C3E4C);
    PUSH32(esp, 0x002B5C32u); RECOMP_ABI_CALL(0x002BF770u, sub_002BF770); /* call 0x002BF770 */

loc_002B5C32: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_002B5C36: ;
    eax = MEM32(eax + 0xC);
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_002BEBF0(); return; /* tail jmp 0x002BEBF0 */

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
 * sub_002B5D50
 * Original: 0x002B5D50 - 0x002B5D72 (34 bytes, 12 insns)
 * Category: game_debug
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B5D50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B5D50: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B5D65; /* jne: not equal / not zero */

loc_002B5D54: ;
    PUSH32(esp, 0x4C3E78);
    PUSH32(esp, 0x002B5D5Eu); RECOMP_ABI_CALL(0x002BF770u, sub_002BF770); /* call 0x002BF770 */

loc_002B5D5E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 4; return; /* ret */

loc_002B5D65: ;
    eax = MEM32(eax + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002B5D6Eu); RECOMP_ABI_CALL(0x002BC970u, sub_002BC970); /* call 0x002BC970 */

loc_002B5D6E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002B5D80
 * Original: 0x002B5D80 - 0x002B5DA2 (34 bytes, 12 insns)
 * Category: game_debug
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B5D80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B5D80: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B5D95; /* jne: not equal / not zero */

loc_002B5D84: ;
    PUSH32(esp, 0x4C3EA8);
    PUSH32(esp, 0x002B5D8Eu); RECOMP_ABI_CALL(0x002BF770u, sub_002BF770); /* call 0x002BF770 */

loc_002B5D8E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 4; return; /* ret */

loc_002B5D95: ;
    eax = MEM32(eax + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002B5D9Eu); RECOMP_ABI_CALL(0x002BC960u, sub_002BC960); /* call 0x002BC960 */

loc_002B5D9E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002B5DB0
 * Original: 0x002B5DB0 - 0x002B5DD9 (41 bytes, 15 insns)
 * Category: game_debug
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B5DB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B5DB0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B5DC2; /* jne: not equal / not zero */

loc_002B5DB4: ;
    PUSH32(esp, 0x4C3ED4);
    PUSH32(esp, 0x002B5DBEu); RECOMP_ABI_CALL(0x002BF770u, sub_002BF770); /* call 0x002BF770 */

loc_002B5DBE: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_002B5DC2: ;
    ecx = MEM32(esp + 8);
    edx = MEM32(esp + 4);
    eax = MEM32(eax + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002B5DD5u); RECOMP_ABI_CALL(0x002BC980u, sub_002BC980); /* call 0x002BC980 */

loc_002B5DD5: ;
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
 * sub_002B6210
 * Original: 0x002B6210 - 0x002B6261 (81 bytes, 28 insns)
 * Category: game_debug
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B6210(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B6210: ;
    PUSH32(esp, esi);
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B6252; /* je: equal / zero */

loc_002B6217: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B6252; /* je: equal / zero */

loc_002B621B: ;
    PUSH32(esp, 0x002B6220u); RECOMP_ABI_CALL(0x002B4F20u, sub_002B4F20); /* call 0x002B4F20 */

loc_002B6220: ;
    PUSH32(esp, 0x002B6225u); RECOMP_ABI_CALL(0x002BEA50u, sub_002BEA50); /* call 0x002BEA50 */

loc_002B6225: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x002B622Cu); RECOMP_ABI_CALL(0x002B4D80u, sub_002B4D80); /* call 0x002B4D80 */

loc_002B622C: ;
    MEM8(esi + 2) = 3;
    MEM8(esi + 0x98) = 1;
    esi = MEM32(esi + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B624C; /* je: equal / zero */

loc_002B6241: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x002B6249u); RECOMP_ABI_CALL(0x002BC9B0u, sub_002BC9B0); /* call 0x002BC9B0 */

loc_002B6249: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002B624C: ;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_002BEA60(); return; /* tail jmp 0x002BEA60 */

loc_002B6252: ;
    PUSH32(esp, 0x4C3F94);
    PUSH32(esp, 0x002B625Cu); RECOMP_ABI_CALL(0x002BF770u, sub_002BF770); /* call 0x002BF770 */

loc_002B625C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
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
 * sub_002B62B0
 * Original: 0x002B62B0 - 0x002B62E4 (52 bytes, 18 insns)
 * Category: game_debug
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B62B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B62B0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002B62B6u); RECOMP_ABI_CALL(0x002BEA70u, sub_002BEA70); /* call 0x002BEA70 */

loc_002B62B6: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B62D7; /* jne: not equal / not zero */

loc_002B62BE: ;
    PUSH32(esp, 0x4C3894);
    PUSH32(esp, 0x002B62C8u); RECOMP_ABI_CALL(0x002BF770u, sub_002BF770); /* call 0x002BF770 */

loc_002B62C8: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = esi | 0xFFFFFFFFu;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0x002B62D3u); RECOMP_ABI_CALL(0x002BEA80u, sub_002BEA80); /* call 0x002BEA80 */

loc_002B62D3: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_002B62D7: ;
    esi = (uint32_t)(int32_t)SMEM8(eax + 1);
    PUSH32(esp, 0x002B62E0u); RECOMP_ABI_CALL(0x002BEA80u, sub_002BEA80); /* call 0x002BEA80 */

loc_002B62E0: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

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
 * sub_002B6490
 * Original: 0x002B6490 - 0x002B64DF (79 bytes, 29 insns)
 * Category: game_debug
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B6490(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B6490: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002B6496u); RECOMP_ABI_CALL(0x002BEA70u, sub_002BEA70); /* call 0x002BEA70 */

loc_002B6496: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B64B7; /* jne: not equal / not zero */

loc_002B649E: ;
    PUSH32(esp, 0x4C38E8);
    PUSH32(esp, 0x002B64A8u); RECOMP_ABI_CALL(0x002BF770u, sub_002BF770); /* call 0x002BF770 */

loc_002B64A8: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = esi | 0xFFFFFFFFu;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0x002B64B3u); RECOMP_ABI_CALL(0x002BEA80u, sub_002BEA80); /* call 0x002BEA80 */

loc_002B64B3: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_002B64B7: ;
    _fa = (uint32_t)(MEM8(eax + 1)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 1), 2 (8-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002B64D4; /* jl: less (signed <) */

loc_002B64BD: ;
    eax = MEM32(eax + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002B64C6u); RECOMP_ABI_CALL(0x002BCB50u, sub_002BCB50); /* call 0x002BCB50 */

loc_002B64C6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = eax;
    PUSH32(esp, 0x002B64D0u); RECOMP_ABI_CALL(0x002BEA80u, sub_002BEA80); /* call 0x002BEA80 */

loc_002B64D0: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_002B64D4: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x002B64DBu); RECOMP_ABI_CALL(0x002BEA80u, sub_002BEA80); /* call 0x002BEA80 */

loc_002B64DB: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002B64E0
 * Original: 0x002B64E0 - 0x002B652F (79 bytes, 29 insns)
 * Category: game_debug
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B64E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B64E0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002B64E6u); RECOMP_ABI_CALL(0x002BEA70u, sub_002BEA70); /* call 0x002BEA70 */

loc_002B64E6: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B6507; /* jne: not equal / not zero */

loc_002B64EE: ;
    PUSH32(esp, 0x4C3914);
    PUSH32(esp, 0x002B64F8u); RECOMP_ABI_CALL(0x002BF770u, sub_002BF770); /* call 0x002BF770 */

loc_002B64F8: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = esi | 0xFFFFFFFFu;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0x002B6503u); RECOMP_ABI_CALL(0x002BEA80u, sub_002BEA80); /* call 0x002BEA80 */

loc_002B6503: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_002B6507: ;
    _fa = (uint32_t)(MEM8(eax + 1)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 1), 2 (8-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002B6524; /* jl: less (signed <) */

loc_002B650D: ;
    eax = MEM32(eax + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002B6516u); RECOMP_ABI_CALL(0x002BCB00u, sub_002BCB00); /* call 0x002BCB00 */

loc_002B6516: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = eax;
    PUSH32(esp, 0x002B6520u); RECOMP_ABI_CALL(0x002BEA80u, sub_002BEA80); /* call 0x002BEA80 */

loc_002B6520: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_002B6524: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x002B652Bu); RECOMP_ABI_CALL(0x002BEA80u, sub_002BEA80); /* call 0x002BEA80 */

loc_002B652B: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002B6530
 * Original: 0x002B6530 - 0x002B657F (79 bytes, 29 insns)
 * Category: game_debug
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B6530(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B6530: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002B6536u); RECOMP_ABI_CALL(0x002BEA70u, sub_002BEA70); /* call 0x002BEA70 */

loc_002B6536: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B6557; /* jne: not equal / not zero */

loc_002B653E: ;
    PUSH32(esp, 0x4C3940);
    PUSH32(esp, 0x002B6548u); RECOMP_ABI_CALL(0x002BF770u, sub_002BF770); /* call 0x002BF770 */

loc_002B6548: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = esi | 0xFFFFFFFFu;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0x002B6553u); RECOMP_ABI_CALL(0x002BEA80u, sub_002BEA80); /* call 0x002BEA80 */

loc_002B6553: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_002B6557: ;
    _fa = (uint32_t)(MEM8(eax + 1)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 1), 2 (8-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002B6574; /* jl: less (signed <) */

loc_002B655D: ;
    eax = MEM32(eax + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002B6566u); RECOMP_ABI_CALL(0x002BCB10u, sub_002BCB10); /* call 0x002BCB10 */

loc_002B6566: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = eax;
    PUSH32(esp, 0x002B6570u); RECOMP_ABI_CALL(0x002BEA80u, sub_002BEA80); /* call 0x002BEA80 */

loc_002B6570: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_002B6574: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x002B657Bu); RECOMP_ABI_CALL(0x002BEA80u, sub_002BEA80); /* call 0x002BEA80 */

loc_002B657B: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002B6580
 * Original: 0x002B6580 - 0x002B65CF (79 bytes, 29 insns)
 * Category: game_debug
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B6580(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B6580: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002B6586u); RECOMP_ABI_CALL(0x002BEA70u, sub_002BEA70); /* call 0x002BEA70 */

loc_002B6586: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B65A7; /* jne: not equal / not zero */

loc_002B658E: ;
    PUSH32(esp, 0x4C396C);
    PUSH32(esp, 0x002B6598u); RECOMP_ABI_CALL(0x002BF770u, sub_002BF770); /* call 0x002BF770 */

loc_002B6598: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = esi | 0xFFFFFFFFu;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0x002B65A3u); RECOMP_ABI_CALL(0x002BEA80u, sub_002BEA80); /* call 0x002BEA80 */

loc_002B65A3: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_002B65A7: ;
    _fa = (uint32_t)(MEM8(eax + 1)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 1), 2 (8-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002B65C4; /* jl: less (signed <) */

loc_002B65AD: ;
    eax = MEM32(eax + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002B65B6u); RECOMP_ABI_CALL(0x002BCCB0u, sub_002BCCB0); /* call 0x002BCCB0 */

loc_002B65B6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = eax;
    PUSH32(esp, 0x002B65C0u); RECOMP_ABI_CALL(0x002BEA80u, sub_002BEA80); /* call 0x002BEA80 */

loc_002B65C0: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_002B65C4: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x002B65CBu); RECOMP_ABI_CALL(0x002BEA80u, sub_002BEA80); /* call 0x002BEA80 */

loc_002B65CB: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002B65D0
 * Original: 0x002B65D0 - 0x002B661F (79 bytes, 29 insns)
 * Category: game_debug
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B65D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B65D0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002B65D6u); RECOMP_ABI_CALL(0x002BEA70u, sub_002BEA70); /* call 0x002BEA70 */

loc_002B65D6: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B65F7; /* jne: not equal / not zero */

loc_002B65DE: ;
    PUSH32(esp, 0x4C3998);
    PUSH32(esp, 0x002B65E8u); RECOMP_ABI_CALL(0x002BF770u, sub_002BF770); /* call 0x002BF770 */

loc_002B65E8: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = esi | 0xFFFFFFFFu;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0x002B65F3u); RECOMP_ABI_CALL(0x002BEA80u, sub_002BEA80); /* call 0x002BEA80 */

loc_002B65F3: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_002B65F7: ;
    _fa = (uint32_t)(MEM8(eax + 1)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 1), 2 (8-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002B6614; /* jl: less (signed <) */

loc_002B65FD: ;
    eax = MEM32(eax + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002B6606u); RECOMP_ABI_CALL(0x002BCCC0u, sub_002BCCC0); /* call 0x002BCCC0 */

loc_002B6606: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = eax;
    PUSH32(esp, 0x002B6610u); RECOMP_ABI_CALL(0x002BEA80u, sub_002BEA80); /* call 0x002BEA80 */

loc_002B6610: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_002B6614: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x002B661Bu); RECOMP_ABI_CALL(0x002BEA80u, sub_002BEA80); /* call 0x002BEA80 */

loc_002B661B: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

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
 * sub_002B6650
 * Original: 0x002B6650 - 0x002B6688 (56 bytes, 19 insns)
 * Category: game_debug
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B6650(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B6650: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002B6656u); RECOMP_ABI_CALL(0x002BEA70u, sub_002BEA70); /* call 0x002BEA70 */

loc_002B6656: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B6676; /* jne: not equal / not zero */

loc_002B665E: ;
    PUSH32(esp, 0x4C3A1C);
    PUSH32(esp, 0x002B6668u); RECOMP_ABI_CALL(0x002BF770u, sub_002BF770); /* call 0x002BF770 */

loc_002B6668: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x002B6672u); RECOMP_ABI_CALL(0x002BEA80u, sub_002BEA80); /* call 0x002BEA80 */

loc_002B6672: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_002B6676: ;
    ecx = MEM32(esp + 0xC);
    esi = (uint32_t)(int32_t)SMEM16(eax + ecx * 2 + 0x42);
    PUSH32(esp, 0x002B6684u); RECOMP_ABI_CALL(0x002BEA80u, sub_002BEA80); /* call 0x002BEA80 */

loc_002B6684: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

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
 * sub_002B66B0
 * Original: 0x002B66B0 - 0x002B66E3 (51 bytes, 18 insns)
 * Category: game_debug
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B66B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B66B0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002B66B6u); RECOMP_ABI_CALL(0x002BEA70u, sub_002BEA70); /* call 0x002BEA70 */

loc_002B66B6: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B66D6; /* jne: not equal / not zero */

loc_002B66BE: ;
    PUSH32(esp, 0x4C3A78);
    PUSH32(esp, 0x002B66C8u); RECOMP_ABI_CALL(0x002BF770u, sub_002BF770); /* call 0x002BF770 */

loc_002B66C8: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x002B66D2u); RECOMP_ABI_CALL(0x002BEA80u, sub_002BEA80); /* call 0x002BEA80 */

loc_002B66D2: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_002B66D6: ;
    esi = (uint32_t)(int32_t)SMEM16(eax + 0x46);
    PUSH32(esp, 0x002B66DFu); RECOMP_ABI_CALL(0x002BEA80u, sub_002BEA80); /* call 0x002BEA80 */

loc_002B66DF: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

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
 * sub_002B6710
 * Original: 0x002B6710 - 0x002B6743 (51 bytes, 18 insns)
 * Category: game_debug
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B6710(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B6710: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002B6716u); RECOMP_ABI_CALL(0x002BEA70u, sub_002BEA70); /* call 0x002BEA70 */

loc_002B6716: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B6736; /* jne: not equal / not zero */

loc_002B671E: ;
    PUSH32(esp, 0x4C3AD4);
    PUSH32(esp, 0x002B6728u); RECOMP_ABI_CALL(0x002BF770u, sub_002BF770); /* call 0x002BF770 */

loc_002B6728: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x002B6732u); RECOMP_ABI_CALL(0x002BEA80u, sub_002BEA80); /* call 0x002BEA80 */

loc_002B6732: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_002B6736: ;
    esi = (uint32_t)(int32_t)SMEM16(eax + 0x40);
    PUSH32(esp, 0x002B673Fu); RECOMP_ABI_CALL(0x002BEA80u, sub_002BEA80); /* call 0x002BEA80 */

loc_002B673F: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

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
 * sub_002B6890
 * Original: 0x002B6890 - 0x002B68C0 (48 bytes, 12 insns)
 * Category: game_debug
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B6890(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B6890: ;
    PUSH32(esp, 0x002B6895u); RECOMP_ABI_CALL(0x002BEA70u, sub_002BEA70); /* call 0x002BEA70 */

loc_002B6895: ;
    ecx = MEM32(esp + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B68AF; /* jne: not equal / not zero */

loc_002B689D: ;
    PUSH32(esp, 0x4C3B00);
    PUSH32(esp, 0x002B68A7u); RECOMP_ABI_CALL(0x002BF770u, sub_002BF770); /* call 0x002BF770 */

loc_002B68A7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_002BEA80(); return; /* tail jmp 0x002BEA80 */

loc_002B68AF: ;
    eax = MEM32(esp + 8);
    MEM32(ecx + 0x38) = eax;
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
 * sub_002B6910
 * Original: 0x002B6910 - 0x002B695B (75 bytes, 23 insns)
 * Category: game_io
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B6910(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B6910: ;
    PUSH32(esp, 0x002B6915u); RECOMP_ABI_CALL(0x002BEA70u, sub_002BEA70); /* call 0x002BEA70 */

loc_002B6915: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B692F; /* jne: not equal / not zero */

loc_002B691D: ;
    PUSH32(esp, 0x4C3B8C);
    PUSH32(esp, 0x002B6927u); RECOMP_ABI_CALL(0x002BF770u, sub_002BF770); /* call 0x002BF770 */

loc_002B6927: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_002BEA80(); return; /* tail jmp 0x002BEA80 */

loc_002B692F: ;
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    edx = MEM32(esp + 8);
    MEM16(eax + 0x3E) = LO16(edx);
    if (CMP_EQ(_fa, _fb)) goto loc_002B6956; /* je: equal / zero */

loc_002B693E: ;
    eax = (uint32_t)(int32_t)SMEM16(eax + 0x3C);
    edx = SX16(LO16(edx));
    eax = eax << 0xB;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    edx = edx << 0xB;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002B6953u); RECOMP_ABI_CALL(0x002BE230u, sub_002BE230); /* call 0x002BE230 */

loc_002B6953: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002B6956: ;
    g_seh_ebp = ebp; sub_002BEA80(); return; /* tail jmp 0x002BEA80 */

}

/**
 * sub_002B6960
 * Original: 0x002B6960 - 0x002B69BD (93 bytes, 36 insns)
 * Category: game_debug
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B6960(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B6960: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002B6966u); RECOMP_ABI_CALL(0x002BEA70u, sub_002BEA70); /* call 0x002BEA70 */

loc_002B6966: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B6987; /* jne: not equal / not zero */

loc_002B696E: ;
    PUSH32(esp, 0x4C3BBC);
    PUSH32(esp, 0x002B6978u); RECOMP_ABI_CALL(0x002BF770u, sub_002BF770); /* call 0x002BF770 */

loc_002B6978: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = esi | 0xFFFFFFFFu;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0x002B6983u); RECOMP_ABI_CALL(0x002BEA80u, sub_002BEA80); /* call 0x002BEA80 */

loc_002B6983: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_002B6987: ;
    ecx = MEM32(eax + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B69B2; /* je: equal / zero */

loc_002B698E: ;
    eax = ecx;
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 0x24); PUSH32(esp, 0x002B6998u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002B6995u); } /* indirect call */
    }

loc_002B6998: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 0x7FF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = (uint32_t)(((int32_t)(int32_t)(esi)) >> ((0xB) & 31u));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    PUSH32(esp, 0x002B69AEu); RECOMP_ABI_CALL(0x002BEA80u, sub_002BEA80); /* call 0x002BEA80 */

loc_002B69AE: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_002B69B2: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x002B69B9u); RECOMP_ABI_CALL(0x002BEA80u, sub_002BEA80); /* call 0x002BEA80 */

loc_002B69B9: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002B69C0
 * Original: 0x002B69C0 - 0x002B6A1F (95 bytes, 38 insns)
 * Category: game_debug
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B69C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B69C0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002B69C6u); RECOMP_ABI_CALL(0x002BEA70u, sub_002BEA70); /* call 0x002BEA70 */

loc_002B69C6: ;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B6A06; /* je: equal / zero */

loc_002B69CE: ;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002B6A06; /* jl: less (signed <) */

loc_002B69D6: ;
    edx = MEM32(ecx + eax * 4 + 0x18);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B69FB; /* je: equal / zero */

loc_002B69DE: ;
    eax = edx;
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 0x24); PUSH32(esp, 0x002B69E8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002B69E5u); } /* indirect call */
    }

loc_002B69E8: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = (uint32_t)(((int32_t)(int32_t)(esi)) >> ((1) & 31u));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    PUSH32(esp, 0x002B69F7u); RECOMP_ABI_CALL(0x002BEA80u, sub_002BEA80); /* call 0x002BEA80 */

loc_002B69F7: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_002B69FB: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x002B6A02u); RECOMP_ABI_CALL(0x002BEA80u, sub_002BEA80); /* call 0x002BEA80 */

loc_002B6A02: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_002B6A06: ;
    PUSH32(esp, 0x4C3BEC);
    PUSH32(esp, 0x002B6A10u); RECOMP_ABI_CALL(0x002BF770u, sub_002BF770); /* call 0x002BF770 */

loc_002B6A10: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = esi | 0xFFFFFFFFu;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0x002B6A1Bu); RECOMP_ABI_CALL(0x002BEA80u, sub_002BEA80); /* call 0x002BEA80 */

loc_002B6A1B: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

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
 * sub_002B6A40
 * Original: 0x002B6A40 - 0x002B6A9D (93 bytes, 36 insns)
 * Category: game_debug
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B6A40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B6A40: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002B6A46u); RECOMP_ABI_CALL(0x002BEA70u, sub_002BEA70); /* call 0x002BEA70 */

loc_002B6A46: ;
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B6A67; /* jne: not equal / not zero */

loc_002B6A4E: ;
    PUSH32(esp, 0x4C3C50);
    PUSH32(esp, 0x002B6A58u); RECOMP_ABI_CALL(0x002BF770u, sub_002BF770); /* call 0x002BF770 */

loc_002B6A58: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = esi | 0xFFFFFFFFu;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0x002B6A63u); RECOMP_ABI_CALL(0x002BEA80u, sub_002BEA80); /* call 0x002BEA80 */

loc_002B6A63: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_002B6A67: ;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B6A92; /* je: equal / zero */

loc_002B6A6E: ;
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 0x24); PUSH32(esp, 0x002B6A76u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002B6A73u); } /* indirect call */
    }

loc_002B6A76: ;
    edx = (uint32_t)(int32_t)SMEM16(esi + 0x3E);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = edx << 0xB;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    SET_LO8(ecx, (CMP_GE(_fas, _fbs)) ? 1 : 0); /* setge */
    esi = ecx;
    PUSH32(esp, 0x002B6A8Eu); RECOMP_ABI_CALL(0x002BEA80u, sub_002BEA80); /* call 0x002BEA80 */

loc_002B6A8E: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_002B6A92: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x002B6A99u); RECOMP_ABI_CALL(0x002BEA80u, sub_002BEA80); /* call 0x002BEA80 */

loc_002B6A99: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

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
 * sub_002B6AC0
 * Original: 0x002B6AC0 - 0x002B6AFD (61 bytes, 22 insns)
 * Category: game_debug
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B6AC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B6AC0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002B6AC6u); RECOMP_ABI_CALL(0x002BEA70u, sub_002BEA70); /* call 0x002BEA70 */

loc_002B6AC6: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B6AE7; /* jne: not equal / not zero */

loc_002B6ACE: ;
    PUSH32(esp, 0x4C3C80);
    PUSH32(esp, 0x002B6AD8u); RECOMP_ABI_CALL(0x002BF770u, sub_002BF770); /* call 0x002BF770 */

loc_002B6AD8: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = esi | 0xFFFFFFFFu;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0x002B6AE3u); RECOMP_ABI_CALL(0x002BEA80u, sub_002BEA80); /* call 0x002BEA80 */

loc_002B6AE3: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_002B6AE7: ;
    SET_LO8(edx, MEM8(eax + 1));
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 5 (8-bit) */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    esi = ecx;
    PUSH32(esp, 0x002B6AF9u); RECOMP_ABI_CALL(0x002BEA80u, sub_002BEA80); /* call 0x002BEA80 */

loc_002B6AF9: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

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
 * sub_002B6B20
 * Original: 0x002B6B20 - 0x002B6B54 (52 bytes, 18 insns)
 * Category: game_debug
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B6B20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B6B20: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002B6B26u); RECOMP_ABI_CALL(0x002BEA70u, sub_002BEA70); /* call 0x002BEA70 */

loc_002B6B26: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B6B47; /* jne: not equal / not zero */

loc_002B6B2E: ;
    PUSH32(esp, 0x4C3CAC);
    PUSH32(esp, 0x002B6B38u); RECOMP_ABI_CALL(0x002BF770u, sub_002BF770); /* call 0x002BF770 */

loc_002B6B38: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = esi | 0xFFFFFFFFu;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0x002B6B43u); RECOMP_ABI_CALL(0x002BEA80u, sub_002BEA80); /* call 0x002BEA80 */

loc_002B6B43: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_002B6B47: ;
    esi = (uint32_t)(int32_t)SMEM16(eax + 0x60);
    PUSH32(esp, 0x002B6B50u); RECOMP_ABI_CALL(0x002BEA80u, sub_002BEA80); /* call 0x002BEA80 */

loc_002B6B50: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002B6B60
 * Original: 0x002B6B60 - 0x002B6B95 (53 bytes, 14 insns)
 * Category: game_debug
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B6B60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B6B60: ;
    PUSH32(esp, 0x002B6B65u); RECOMP_ABI_CALL(0x002BEA70u, sub_002BEA70); /* call 0x002BEA70 */

loc_002B6B65: ;
    eax = MEM32(esp + 4);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B6B81; /* jne: not equal / not zero */

loc_002B6B6F: ;
    PUSH32(esp, 0x4C3CD8);
    PUSH32(esp, 0x002B6B79u); RECOMP_ABI_CALL(0x002BF770u, sub_002BF770); /* call 0x002BF770 */

loc_002B6B79: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_002BEA80(); return; /* tail jmp 0x002BEA80 */

loc_002B6B81: ;
    MEM16(eax + 0x60) = LO16(ecx);
    MEM32(eax + 0x64) = ecx;
    MEM16(eax + 0x68) = LO16(ecx);
    MEM16(eax + 0x6A) = LO16(ecx);
    g_seh_ebp = ebp; sub_002BEA80(); return; /* tail jmp 0x002BEA80 */

}

/**
 * sub_002B6BA0
 * Original: 0x002B6BA0 - 0x002B6BD3 (51 bytes, 18 insns)
 * Category: game_debug
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B6BA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B6BA0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002B6BA6u); RECOMP_ABI_CALL(0x002BEA70u, sub_002BEA70); /* call 0x002BEA70 */

loc_002B6BA6: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B6BC7; /* jne: not equal / not zero */

loc_002B6BAE: ;
    PUSH32(esp, 0x4C3D08);
    PUSH32(esp, 0x002B6BB8u); RECOMP_ABI_CALL(0x002BF770u, sub_002BF770); /* call 0x002BF770 */

loc_002B6BB8: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = esi | 0xFFFFFFFFu;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0x002B6BC3u); RECOMP_ABI_CALL(0x002BEA80u, sub_002BEA80); /* call 0x002BEA80 */

loc_002B6BC3: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_002B6BC7: ;
    esi = MEM32(eax + 0x4C);
    PUSH32(esp, 0x002B6BCFu); RECOMP_ABI_CALL(0x002BEA80u, sub_002BEA80); /* call 0x002BEA80 */

loc_002B6BCF: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

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
 * sub_002B6C00
 * Original: 0x002B6C00 - 0x002B6C32 (50 bytes, 18 insns)
 * Category: game_debug
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B6C00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B6C00: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002B6C06u); RECOMP_ABI_CALL(0x002BEA70u, sub_002BEA70); /* call 0x002BEA70 */

loc_002B6C06: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B6C26; /* jne: not equal / not zero */

loc_002B6C0E: ;
    PUSH32(esp, 0x4C3D60);
    PUSH32(esp, 0x002B6C18u); RECOMP_ABI_CALL(0x002BF770u, sub_002BF770); /* call 0x002BF770 */

loc_002B6C18: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x002B6C22u); RECOMP_ABI_CALL(0x002BEA80u, sub_002BEA80); /* call 0x002BEA80 */

loc_002B6C22: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_002B6C26: ;
    esi = MEM32(eax + 0x14);
    PUSH32(esp, 0x002B6C2Eu); RECOMP_ABI_CALL(0x002BEA80u, sub_002BEA80); /* call 0x002BEA80 */

loc_002B6C2E: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002B6C40
 * Original: 0x002B6C40 - 0x002B6C6B (43 bytes, 11 insns)
 * Category: game_debug
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B6C40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B6C40: ;
    PUSH32(esp, 0x002B6C45u); RECOMP_ABI_CALL(0x002BEA70u, sub_002BEA70); /* call 0x002BEA70 */

loc_002B6C45: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B6C5F; /* jne: not equal / not zero */

loc_002B6C4D: ;
    PUSH32(esp, 0x4C3D8C);
    PUSH32(esp, 0x002B6C57u); RECOMP_ABI_CALL(0x002BF770u, sub_002BF770); /* call 0x002BF770 */

loc_002B6C57: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_002BEA80(); return; /* tail jmp 0x002BEA80 */

loc_002B6C5F: ;
    SET_LO8(ecx, MEM8(esp + 8));
    MEM8(eax + 0x70) = LO8(ecx);
    g_seh_ebp = ebp; sub_002BEA80(); return; /* tail jmp 0x002BEA80 */

}

/**
 * sub_002B6C70
 * Original: 0x002B6C70 - 0x002B6CA4 (52 bytes, 18 insns)
 * Category: game_debug
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B6C70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B6C70: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002B6C76u); RECOMP_ABI_CALL(0x002BEA70u, sub_002BEA70); /* call 0x002BEA70 */

loc_002B6C76: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B6C97; /* jne: not equal / not zero */

loc_002B6C7E: ;
    PUSH32(esp, 0x4C3DC0);
    PUSH32(esp, 0x002B6C88u); RECOMP_ABI_CALL(0x002BF770u, sub_002BF770); /* call 0x002BF770 */

loc_002B6C88: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = esi | 0xFFFFFFFFu;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0x002B6C93u); RECOMP_ABI_CALL(0x002BEA80u, sub_002BEA80); /* call 0x002BEA80 */

loc_002B6C93: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_002B6C97: ;
    esi = (uint32_t)(int32_t)SMEM8(eax + 0x71);
    PUSH32(esp, 0x002B6CA0u); RECOMP_ABI_CALL(0x002BEA80u, sub_002BEA80); /* call 0x002BEA80 */

loc_002B6CA0: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

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
 * sub_002B6CD0
 * Original: 0x002B6CD0 - 0x002B6D03 (51 bytes, 18 insns)
 * Category: game_debug
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B6CD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B6CD0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002B6CD6u); RECOMP_ABI_CALL(0x002BEA70u, sub_002BEA70); /* call 0x002BEA70 */

loc_002B6CD6: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B6CF6; /* jne: not equal / not zero */

loc_002B6CDE: ;
    PUSH32(esp, 0x4C3E1C);
    PUSH32(esp, 0x002B6CE8u); RECOMP_ABI_CALL(0x002BF770u, sub_002BF770); /* call 0x002BF770 */

loc_002B6CE8: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x002B6CF2u); RECOMP_ABI_CALL(0x002BEA80u, sub_002BEA80); /* call 0x002BEA80 */

loc_002B6CF2: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_002B6CF6: ;
    esi = (uint32_t)(int32_t)SMEM8(eax + 0x72);
    PUSH32(esp, 0x002B6CFFu); RECOMP_ABI_CALL(0x002BEA80u, sub_002BEA80); /* call 0x002BEA80 */

loc_002B6CFF: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

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
 * sub_002B6F70
 * Original: 0x002B6F70 - 0x002B6FAE (62 bytes, 22 insns)
 * Category: game_debug
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B6F70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B6F70: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002B6F76u); RECOMP_ABI_CALL(0x002BEA70u, sub_002BEA70); /* call 0x002BEA70 */

loc_002B6F76: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B6F97; /* jne: not equal / not zero */

loc_002B6F7E: ;
    PUSH32(esp, 0x4C3E78);
    PUSH32(esp, 0x002B6F88u); RECOMP_ABI_CALL(0x002BF770u, sub_002BF770); /* call 0x002BF770 */

loc_002B6F88: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = esi | 0xFFFFFFFFu;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0x002B6F93u); RECOMP_ABI_CALL(0x002BEA80u, sub_002BEA80); /* call 0x002BEA80 */

loc_002B6F93: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_002B6F97: ;
    eax = MEM32(eax + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002B6FA0u); RECOMP_ABI_CALL(0x002BC970u, sub_002BC970); /* call 0x002BC970 */

loc_002B6FA0: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = eax;
    PUSH32(esp, 0x002B6FAAu); RECOMP_ABI_CALL(0x002BEA80u, sub_002BEA80); /* call 0x002BEA80 */

loc_002B6FAA: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002B6FB0
 * Original: 0x002B6FB0 - 0x002B6FEE (62 bytes, 22 insns)
 * Category: game_debug
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B6FB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B6FB0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002B6FB6u); RECOMP_ABI_CALL(0x002BEA70u, sub_002BEA70); /* call 0x002BEA70 */

loc_002B6FB6: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B6FD7; /* jne: not equal / not zero */

loc_002B6FBE: ;
    PUSH32(esp, 0x4C3EA8);
    PUSH32(esp, 0x002B6FC8u); RECOMP_ABI_CALL(0x002BF770u, sub_002BF770); /* call 0x002BF770 */

loc_002B6FC8: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = esi | 0xFFFFFFFFu;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0x002B6FD3u); RECOMP_ABI_CALL(0x002BEA80u, sub_002BEA80); /* call 0x002BEA80 */

loc_002B6FD3: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_002B6FD7: ;
    eax = MEM32(eax + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002B6FE0u); RECOMP_ABI_CALL(0x002BC960u, sub_002BC960); /* call 0x002BC960 */

loc_002B6FE0: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = eax;
    PUSH32(esp, 0x002B6FEAu); RECOMP_ABI_CALL(0x002BEA80u, sub_002BEA80); /* call 0x002BEA80 */

loc_002B6FEA: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002B6FF0
 * Original: 0x002B6FF0 - 0x002B702A (58 bytes, 17 insns)
 * Category: game_debug
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B6FF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B6FF0: ;
    PUSH32(esp, 0x002B6FF5u); RECOMP_ABI_CALL(0x002BEA70u, sub_002BEA70); /* call 0x002BEA70 */

loc_002B6FF5: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B700F; /* jne: not equal / not zero */

loc_002B6FFD: ;
    PUSH32(esp, 0x4C3ED4);
    PUSH32(esp, 0x002B7007u); RECOMP_ABI_CALL(0x002BF770u, sub_002BF770); /* call 0x002BF770 */

loc_002B7007: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_002BEA80(); return; /* tail jmp 0x002BEA80 */

loc_002B700F: ;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 8);
    eax = MEM32(eax + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002B7022u); RECOMP_ABI_CALL(0x002BC980u, sub_002BC980); /* call 0x002BC980 */

loc_002B7022: ;
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
 * sub_002B7060
 * Original: 0x002B7060 - 0x002B7095 (53 bytes, 15 insns)
 * Category: game_debug
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B7060(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B7060: ;
    PUSH32(esp, 0x002B7065u); RECOMP_ABI_CALL(0x002BEA70u, sub_002BEA70); /* call 0x002BEA70 */

loc_002B7065: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B707F; /* jne: not equal / not zero */

loc_002B706D: ;
    PUSH32(esp, 0x4C3F3C);
    PUSH32(esp, 0x002B7077u); RECOMP_ABI_CALL(0x002BF770u, sub_002BF770); /* call 0x002BF770 */

loc_002B7077: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_002BEA80(); return; /* tail jmp 0x002BEA80 */

loc_002B707F: ;
    ecx = MEM32(esp + 8);
    edx = MEM32(eax + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x002B708Du); RECOMP_ABI_CALL(0x002BC9D0u, sub_002BC9D0); /* call 0x002BC9D0 */

loc_002B708D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_002BEA80(); return; /* tail jmp 0x002BEA80 */

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
 * sub_002B7100
 * Original: 0x002B7100 - 0x002B737D (637 bytes, 223 insns)
 * Category: game_debug
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B7100(void)
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

loc_002B7100: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebx = edx;
    ebp = eax + 0x3F;
    _cf = 0; /* logical op clears CF */
    ebp = ebp & 0xFFFFFFC0u;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = eax;
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edx) < (uint32_t)(ebp));
    edx = edx - ebp;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(ecx)) >> 32) & 1);
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) goto loc_002B736A; /* jl: less (signed <) */

loc_002B7119: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_002B736A; /* je: equal / zero */

loc_002B7121: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) goto loc_002B736A; /* jl: less (signed <) */

loc_002B7129: ;
    PUSH32(esp, esi);
    _cf = 0; /* xor clears CF */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = 0x790504;

loc_002B7131: ;
    SET_LO8(ecx, MEM8(eax + -196));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_002B7170; /* je: equal / zero */

loc_002B713B: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_002B7165; /* je: equal / zero */

loc_002B7140: ;
    SET_LO8(ecx, MEM8(eax + 0xC4));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_002B7168; /* je: equal / zero */

loc_002B714A: ;
    SET_LO8(ecx, MEM8(eax + 0x188));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_002B716D; /* je: equal / zero */

loc_002B7154: ;
    _fb = (uint32_t)(0x310) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x310)) >> 32) & 1);
    eax = eax + 0x310;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(4)) >> 32) & 1);
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x791144) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x791144 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_002B7131; /* jl: less (signed <) */

loc_002B7163: ;
    goto loc_002B7170;

loc_002B7165: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_002B7170;

loc_002B7168: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(2)) >> 32) & 1);
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_002B7170;

loc_002B716D: ;
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(3)) >> 32) & 1);
    esi = esi + 3;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002B7170: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x10 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_002B7189; /* jne: not equal / not zero */

loc_002B7175: ;
    PUSH32(esp, 0x4C3FE4);
    PUSH32(esp, 0x002B717Fu); RECOMP_ABI_CALL(0x002BF770u, sub_002BF770); /* call 0x002BF770 */

loc_002B717F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, ebp);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_002B7189: ;
    esi = (uint32_t)((int32_t)esi * (int32_t)0xC4);
    _fb = (uint32_t)(0x790440) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0x790440)) >> 32) & 1);
    esi = esi + 0x790440;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    ecx = 0x31;
    edi = esi;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = ebx;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x40C0);
    eax = edx;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(ecx));
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0x124) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(0x124));
    eax = eax - 0x124;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _cf = 0; /* logical op clears CF */
    edx = edx & 0x7FF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(edx)) >> 32) & 1);
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = ecx + ebp;
    if (((0xB) & 31u)) _cf = (int)(((uint32_t)((int32_t)(int32_t)(eax)) >> ((((0xB) & 31u)) - 1)) & 1);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((0xB) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    if (0xB) _cf = (int)(((eax) >> (32 - (0xB))) & 1);
    eax = eax << 0xB;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, 0x24);
    MEM32(esi + 0x2C) = ebp;
    PUSH32(esp, eax);
    ecx = eax + edi + 0x24;
    _cf = 0; /* xor clears CF */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    MEM8(esi + 3) = LO8(ebx);
    MEM32(esi + 0x20) = edi;
    MEM32(esi + 0x24) = eax;
    MEM32(esi + 0x28) = 0x24;
    MEM32(esi + 0xAC) = ecx;
    MEM32(esi + 0x30) = 0x2000;
    MEM32(esi + 0x34) = 0x2060;
    MEM32(esi + 0x14) = ebp;
    PUSH32(esp, 0x002B71FDu); RECOMP_ABI_CALL(0x002C37F0u, sub_002C37F0); /* call 0x002C37F0 */

loc_002B71FD: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esi + 0x10) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_002B7218; /* jne: not equal / not zero */

loc_002B7207: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002B720Du); RECOMP_ABI_CALL(0x002B6040u, sub_002B6040); /* call 0x002B6040 */

loc_002B720D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_002B7218: ;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002B721Fu); RECOMP_ABI_CALL(0x002BE4E0u, sub_002BE4E0); /* call 0x002BE4E0 */

loc_002B721F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esi + 8) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_002B7207; /* je: equal / zero */

loc_002B7229: ;
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_002B7265; /* jle: less or equal (signed <=) */

loc_002B722F: ;
    ebp = esi + 0x18;

loc_002B7232: ;
    eax = MEM32(esi + 0x34);
    ecx = MEM32(esi + 0x30);
    edx = eax;
    eax = (uint32_t)((int32_t)eax * (int32_t)edi);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edx) < (uint32_t)(ecx));
    edx = edx - ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if (1) _cf = (int)(((edx) >> (32 - (1))) & 1);
    edx = edx << 1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, edx);
    edx = MEM32(esi + 0x2C);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(ecx)) >> 32) & 1);
    ecx = ecx + ecx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    eax = edx + eax * 2;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002B7251u); RECOMP_ABI_CALL(0x002C37F0u, sub_002C37F0); /* call 0x002C37F0 */

loc_002B7251: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(ebp) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_002B7207; /* je: equal / zero */

loc_002B725B: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebp) + (uint64_t)(4)) >> 32) & 1);
    ebp = ebp + 4;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_002B7232; /* jl: less (signed <) */

loc_002B7263: ;
    _cf = 0; /* xor clears CF */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002B7265: ;
    ecx = MEM32(esi + 0x10);
    edi = esi + 0x18;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002B7273u); RECOMP_ABI_CALL(0x002BCD00u, sub_002BCD00); /* call 0x002BCD00 */

loc_002B7273: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esi + 4) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_002B7207; /* je: equal / zero */

loc_002B727D: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x002B7284u); RECOMP_ABI_CALL(0x002BEAC0u, sub_002BEAC0); /* call 0x002BEAC0 */

loc_002B7284: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esi + 0xC) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_002B7207; /* je: equal / zero */

loc_002B7292: ;
    edx = MEM32(esi + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, 0x002B729Bu); RECOMP_ABI_CALL(0x002BF200u, sub_002BF200); /* call 0x002BF200 */

loc_002B729B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esi + 0x94) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_002B7207; /* je: equal / zero */

loc_002B72AC: ;
    ecx = MEM32(esi + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002B72B6u); RECOMP_ABI_CALL(0x002BF220u, sub_002BF220); /* call 0x002BF220 */

loc_002B72B6: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x002B72BEu); RECOMP_ABI_CALL(0x002BEA50u, sub_002BEA50); /* call 0x002BEA50 */

loc_002B72BE: ;
    edx = MEM32(0x735888);
    eax = MEM32(esi + 0x24);
    MEM32(esi + 0x38) = edx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _cf = 0; /* logical op clears CF */
    edx = edx & 0x7FF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(edx)) >> 32) & 1);
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if (((0xB) & 31u)) _cf = (int)(((uint32_t)((int32_t)(int32_t)(eax)) >> ((((0xB) & 31u)) - 1)) & 1);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((0xB) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    MEM16(esi + 0x3C) = LO16(eax);
    eax = SX16(LO16(eax));
    MEM32(esp + 0x10) = eax;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x4B6400)); /* fmul dword ptr [0x4b6400] */
    PUSH32(esp, 0x002B72F0u); RECOMP_ABI_CALL(0x000EB38Cu, sub_000EB38C); /* call 0x000EB38C */

loc_002B72F0: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM16(esi + 0x3E) = LO16(eax);
    MEM16(esi + 0x40) = LO16(ebp);
    if (CMP_LE(_fas, _fbs)) goto loc_002B730F; /* jle: less or equal (signed <=) */

loc_002B72FC: ;
    ecx = ebx;
    if (1) _cf = (int)(((ecx) >> ((1) - 1)) & 1);
    ecx = ecx >> 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = esi + 0x42;
    eax = 0xFF80FF80u;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    { uint64_t _t = (uint64_t)(ecx) + (uint64_t)(ecx) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); ecx = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(2); for (_i = 0; _i < ecx; _i++) MEM16(edi + _i*_st) = LO16(eax); edi += ecx * _st; }
    ecx = 0; /* rep stosw */

loc_002B730F: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    SET_LO8(ebx, 1);
    MEM16(esi + 0x46) = LO16(ebp);
    MEM8(esi + 0x6C) = LO8(ebx);
    MEM32(esi + 0x54) = ebp;
    MEM32(esi + 0x58) = ebp;
    MEM32(esi + 0x5C) = ebp;
    MEM16(esi + 0x60) = LO16(ebp);
    MEM32(esi + 0x64) = ebp;
    MEM16(esi + 0x68) = LO16(ebp);
    MEM16(esi + 0x6A) = LO16(ebp);
    MEM8(esi + 0x6D) = LO8(ebx);
    MEM8(esi + 0x72) = 0;
    MEM32(esi + 0x88) = ebp;
    MEM8(esi + 0x98) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_002B7355; /* je: equal / zero */

loc_002B734B: ;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002B7352u); RECOMP_ABI_CALL(0x002BC9B0u, sub_002BC9B0); /* call 0x002BC9B0 */

loc_002B7352: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002B7355: ;
    MEM8(esi + 0xA9) = LO8(ebx);
    MEM8(esi) = LO8(ebx);
    PUSH32(esp, 0x002B7362u); RECOMP_ABI_CALL(0x002BEA60u, sub_002BEA60); /* call 0x002BEA60 */

loc_002B7362: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_002B736A: ;
    PUSH32(esp, 0x4C3FBC);
    PUSH32(esp, 0x002B7374u); RECOMP_ABI_CALL(0x002BF770u, sub_002BF770); /* call 0x002BF770 */

loc_002B7374: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebp);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
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
 * sub_002B8120
 * Original: 0x002B8120 - 0x002B813D (29 bytes, 11 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B8120(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B8120: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B813C; /* je: equal / zero */

loc_002B8128: ;
    edx = MEM32(eax + 0xC);
    ecx = MEM32(esp + 8);
    eax = MEM32(edx + 0x50);
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002B813Cu); RECOMP_ABI_CALL(0x003FCDE6u, sub_003FCDE6); /* call 0x003FCDE6 */

loc_002B813C: ;
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
 * sub_002B8160
 * Original: 0x002B8160 - 0x002B817D (29 bytes, 11 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B8160(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B8160: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B817C; /* je: equal / zero */

loc_002B8168: ;
    edx = MEM32(eax + 0xC);
    ecx = MEM32(esp + 8);
    eax = MEM32(edx + 0x50);
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002B817Cu); RECOMP_ABI_CALL(0x003FCE02u, sub_003FCE02); /* call 0x003FCE02 */

loc_002B817C: ;
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
