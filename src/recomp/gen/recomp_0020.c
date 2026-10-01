/**
 * MK: Shaolin Monks - Recompiled code chunk 20
 * Functions: 500 (0x0012E620 - 0x00146AB0)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_0012E620
 * Original: 0x0012E620 - 0x0012E62D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012E620(void)
{

loc_0012E620: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0xB0) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0012E630
 * Original: 0x0012E630 - 0x0012E633 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012E630(void)
{

loc_0012E630: ;
    eax = MEM32(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0012E640
 * Original: 0x0012E640 - 0x0012E673 (51 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012E640(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012E640: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    ecx = esi + 0x50;
    PUSH32(esp, 0x0012E64Cu); RECOMP_ABI_CALL(0x00112510u, sub_00112510); /* call 0x00112510 */

loc_0012E64C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = esi;
    ecx = 0x464;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM32(esi + 0x1180) = eax;
    POP32(esp, edi);
    MEM32(esi + 0x1098) = 0xFFFFFFFFu;
    MEM32(esi + 0x44) = 0x43000000;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0012E750
 * Original: 0x0012E750 - 0x0012E75F (15 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012E750(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012E750: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + 0x1174) = eax;
    MEM32(ecx + 0x1178) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0012E760
 * Original: 0x0012E760 - 0x0012E777 (23 bytes, 5 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012E760(void)
{

loc_0012E760: ;
    eax = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    MEM32(ecx + 0x1174) = eax;
    MEM32(ecx + 0x1170) = edx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0012E780
 * Original: 0x0012E780 - 0x0012E802 (130 bytes, 45 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012E780(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012E780: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, ebx);
    ebx = ecx;
    ecx = MEM32(edx + 0x34);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0012E7FE; /* jle: less or equal (signed <=) */

loc_0012E790: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);

loc_0012E792: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 0x1170)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebx + 0x1170) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0012E79E; /* jl: less (signed <) */

loc_0012E79A: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0012E7A7;

loc_0012E79E: ;
    ecx = MEM32(ebx + 0x1174);
    edi = MEM32(ecx + eax * 4);

loc_0012E7A7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + 0x1170)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edx + 0x1170) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0012E7B3; /* jl: less (signed <) */

loc_0012E7AF: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0012E7BC;

loc_0012E7B3: ;
    ecx = MEM32(edx + 0x1174);
    esi = MEM32(ecx + eax * 4);

loc_0012E7BC: ;
    ecx = 0x10;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 0x1170)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebx + 0x1170) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0012E7CF; /* jl: less (signed <) */

loc_0012E7CB: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0012E7D8;

loc_0012E7CF: ;
    ecx = MEM32(ebx + 0x1178);
    edi = MEM32(ecx + eax * 4);

loc_0012E7D8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + 0x1170)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edx + 0x1170) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0012E7E4; /* jl: less (signed <) */

loc_0012E7E0: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0012E7ED;

loc_0012E7E4: ;
    ecx = MEM32(edx + 0x1178);
    esi = MEM32(ecx + eax * 4);

loc_0012E7ED: ;
    ecx = 0xA;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    ecx = MEM32(edx + 0x34);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0012E792; /* jl: less (signed <) */

loc_0012E7FC: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_0012E7FE: ;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0012E810
 * Original: 0x0012E810 - 0x0012E8EE (222 bytes, 61 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012E810(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012E810: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x3BC29E);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x116C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x40);
    MEM32(esp + 0xC) = esi;
    PUSH32(esp, 0x0012E83Du); RECOMP_ABI_CALL(0x00102BE0u, sub_00102BE0); /* call 0x00102BE0 */

loc_0012E83D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 8) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x14) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_0012E859; /* je: equal / zero */

loc_0012E850: ;
    ecx = eax;
    PUSH32(esp, 0x0012E857u); RECOMP_ABI_CALL(0x0010F740u, sub_0010F740); /* call 0x0010F740 */

loc_0012E857: ;
    goto loc_0012E85B;

loc_0012E859: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0012E85B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x14) = 0xFFFFFFFFu;
    if (CMP_EQ(_fa, _fb)) goto loc_0012E8AA; /* je: equal / zero */

loc_0012E867: ;
    ecx = MEM32(esi + 0x1170);
    edx = MEM32(esi + 0x1174);
    MEM32(edx + ecx * 4) = eax;
    ecx = MEM32(esi + 0x1170);
    MEM32(eax) = ecx;
    eax = MEM32(esi + 0x116C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x28);
    PUSH32(esp, 0x0012E88Cu); RECOMP_ABI_CALL(0x00102BE0u, sub_00102BE0); /* call 0x00102BE0 */

loc_0012E88C: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 8) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x14) = 1;
    if (CMP_EQ(_fa, _fb)) goto loc_0012E8AA; /* je: equal / zero */

loc_0012E89F: ;
    ecx = eax;
    PUSH32(esp, 0x0012E8A6u); RECOMP_ABI_CALL(0x00148660u, sub_00148660); /* call 0x00148660 */

loc_0012E8A6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012E8BE; /* jne: not equal / not zero */

loc_0012E8AA: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    ecx = MEM32(esp + 8);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0012E8BE: ;
    edx = MEM32(esi + 0x1170);
    ecx = MEM32(esi + 0x1178);
    MEM32(ecx + edx * 4) = eax;
    eax = MEM32(esi + 0x1170);
    ecx = MEM32(esp + 0xC);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0x1170) = eax;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0012E8F0
 * Original: 0x0012E8F0 - 0x0012E94E (94 bytes, 28 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012E8F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012E8F0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012E8FD; /* je: equal / zero */

loc_0012E8F8: ;
    edx = eax + 0x10;
    goto loc_0012E8FF;

loc_0012E8FD: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0012E8FF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x1170);
    PUSH32(esp, edi);
    edi = MEM32(ecx + 0x1174);
    MEM32(edi + esi * 4) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_0012E927; /* je: equal / zero */

loc_0012E914: ;
    edx = MEM32(ecx + 0x1170);
    MEM32(eax + 0x10) = edx;
    edx = MEM32(esp + 0x14);
    MEM32(eax + 0xB0) = edx;

loc_0012E927: ;
    eax = MEM32(ecx + 0x1170);
    esi = MEM32(esp + 0x10);
    edx = MEM32(ecx + 0x1178);
    MEM32(edx + eax * 4) = esi;
    eax = MEM32(ecx + 0x1170);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(ecx + 0x1170) = eax;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0012E950
 * Original: 0x0012E950 - 0x0012EA96 (326 bytes, 112 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012E950(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0012E950: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x10);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    esi = ecx;
    MEM32(esp + 8) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_0012EA8E; /* je: equal / zero */

loc_0012E969: ;
    edx = MEM32(esp + 0x1C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0012EA8E; /* jle: less or equal (signed <=) */

loc_0012E975: ;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    MEM32(esp + 0x20) = edx;
    ebp = 1;
    ecx = 2;
    goto loc_0012E990;

loc_0012E987: ;
    esi = MEM32(esp + 0x10);
    goto loc_0012E990;

    /* nop */

loc_0012E990: ;
    edx = MEM32(eax);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012EA7A; /* je: equal / zero */

loc_0012E99B: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x1170)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(esi + 0x1170) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0012E9A7; /* jl: less (signed <) */

loc_0012E9A3: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0012E9B0;

loc_0012E9A7: ;
    esi = MEM32(esi + 0x1174);
    edi = MEM32(esi + edx * 4);

loc_0012E9B0: ;
    MEM32(edi + 0x34) = ebx;
    edx = MEM32(eax + 8);
    edx = edx & ebp;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = edx | esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    if ((_fa == 0)) goto loc_0012E9C1; /* je: equal / zero */

loc_0012E9BE: ;
    MEM32(edi + 0x34) = ebp;

loc_0012E9C1: ;
    edx = MEM32(eax + 8);
    edx = edx & ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = edx | esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    if ((_fa == 0)) goto loc_0012E9CF; /* je: equal / zero */

loc_0012E9CC: ;
    MEM32(edi + 0x34) = MEM32(edi + 0x34) | ecx;
    _fa = (uint32_t)(MEM32(edi + 0x34)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0012E9CF: ;
    edx = MEM32(eax + 8);
    edx = edx & 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = edx | esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    if ((_fa == 0)) goto loc_0012E9DF; /* je: equal / zero */

loc_0012E9DB: ;
    MEM32(edi + 0x34) = MEM32(edi + 0x34) | 4;
    _fa = (uint32_t)(MEM32(edi + 0x34)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0012E9DF: ;
    edx = MEM32(eax + 8);
    edx = edx & 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = edx | esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    if ((_fa == 0)) goto loc_0012E9EF; /* je: equal / zero */

loc_0012E9EB: ;
    MEM32(edi + 0x34) = MEM32(edi + 0x34) | 8;
    _fa = (uint32_t)(MEM32(edi + 0x34)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0012E9EF: ;
    edx = MEM32(eax + 8);
    edx = edx & 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = edx | esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    if ((_fa == 0)) goto loc_0012E9FF; /* je: equal / zero */

loc_0012E9FB: ;
    MEM32(edi + 0x34) = MEM32(edi + 0x34) | 0x10;
    _fa = (uint32_t)(MEM32(edi + 0x34)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0012E9FF: ;
    edx = MEM32(eax + 8);
    edx = edx & 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = edx | esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    if ((_fa == 0)) goto loc_0012EA0F; /* je: equal / zero */

loc_0012EA0B: ;
    MEM32(edi + 0x34) = MEM32(edi + 0x34) | 0x20;
    _fa = (uint32_t)(MEM32(edi + 0x34)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0012EA0F: ;
    edx = MEM32(eax + 8);
    edx = edx & 0x40;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = edx | esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    if ((_fa == 0)) goto loc_0012EA1F; /* je: equal / zero */

loc_0012EA1B: ;
    MEM32(edi + 0x34) = MEM32(edi + 0x34) | 0x40;
    _fa = (uint32_t)(MEM32(edi + 0x34)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0012EA1F: ;
    edx = MEM32(eax + 8);
    edx = edx & 0x80;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = edx | esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    if ((_fa == 0)) goto loc_0012EA35; /* je: equal / zero */

loc_0012EA2E: ;
    MEM32(edi + 0x34) = MEM32(edi + 0x34) | 0x80;
    _fa = (uint32_t)(MEM32(edi + 0x34)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0012EA35: ;
    edx = MEM32(eax + 8);
    edx = edx & 0x100;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = edx | esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    if ((_fa == 0)) goto loc_0012EA4B; /* je: equal / zero */

loc_0012EA44: ;
    MEM32(edi + 0x34) = MEM32(edi + 0x34) | 0x100;
    _fa = (uint32_t)(MEM32(edi + 0x34)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0012EA4B: ;
    edx = MEM32(eax + 0xC);
    esi = MEM32(eax + 8);
    MEM32(esp + 0x18) = edx;
    edx = esi;
    edx = edx & 0x1000;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx | ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    if ((_fa == 0)) goto loc_0012EA66; /* je: equal / zero */

loc_0012EA61: ;
    MEM32(edi + 4) = ebp;
    goto loc_0012EA7A;

loc_0012EA66: ;
    esi = esi & 0x2000;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = esi | edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    if ((_fa == 0)) goto loc_0012EA77; /* je: equal / zero */

loc_0012EA72: ;
    MEM32(edi + 4) = ecx;
    goto loc_0012EA7A;

loc_0012EA77: ;
    MEM32(edi + 4) = ebx;

loc_0012EA7A: ;
    edx = MEM32(esp + 0x20);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x20) = edx;
    if ((_fa != 0)) goto loc_0012E987; /* jne: not equal / not zero */

loc_0012EA8C: ;
    POP32(esp, edi);
    POP32(esp, ebp);

loc_0012EA8E: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0012EAA0
 * Original: 0x0012EAA0 - 0x0012ED41 (673 bytes, 188 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012EAA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012EAA0: ;
    PUSH32(esp, ecx);
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    esi = ecx;
    MEM32(esp + 8) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_0012ED3B; /* je: equal / zero */

loc_0012EAB7: ;
    edx = MEM32(esp + 0x14);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0012ED3B; /* jle: less or equal (signed <=) */

loc_0012EAC3: ;
    MEM32(esp + 0x10) = edx;
    ecx = 0x40000000;
    goto loc_0012EAD2;

loc_0012EACE: ;
    esi = MEM32(esp + 8);

loc_0012EAD2: ;
    edx = MEM32(eax);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x1170)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(esi + 0x1170) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0012EAE0; /* jl: less (signed <) */

loc_0012EADC: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0012EAE9;

loc_0012EAE0: ;
    esi = MEM32(esi + 0x1174);
    edx = MEM32(esi + edx * 4);

loc_0012EAE9: ;
    MEM32(edx + 0x34) = edi;
    esi = MEM32(eax + 8);
    esi = esi & 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = esi | edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    if ((_fa == 0)) goto loc_0012EAFD; /* je: equal / zero */

loc_0012EAF6: ;
    MEM32(edx + 0x34) = 1;

loc_0012EAFD: ;
    esi = MEM32(eax + 8);
    esi = esi & 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = esi | edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    if ((_fa == 0)) goto loc_0012EB0B; /* je: equal / zero */

loc_0012EB07: ;
    MEM32(edx + 0x34) = MEM32(edx + 0x34) | 2;
    _fa = (uint32_t)(MEM32(edx + 0x34)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0012EB0B: ;
    esi = MEM32(eax + 8);
    esi = esi & 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = esi | edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    if ((_fa == 0)) goto loc_0012EB19; /* je: equal / zero */

loc_0012EB15: ;
    MEM32(edx + 0x34) = MEM32(edx + 0x34) | 4;
    _fa = (uint32_t)(MEM32(edx + 0x34)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0012EB19: ;
    esi = MEM32(eax + 8);
    esi = esi & 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = esi | edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    if ((_fa == 0)) goto loc_0012EB27; /* je: equal / zero */

loc_0012EB23: ;
    MEM32(edx + 0x34) = MEM32(edx + 0x34) | 8;
    _fa = (uint32_t)(MEM32(edx + 0x34)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0012EB27: ;
    esi = MEM32(eax + 8);
    esi = esi & 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = esi | edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    if ((_fa == 0)) goto loc_0012EB35; /* je: equal / zero */

loc_0012EB31: ;
    MEM32(edx + 0x34) = MEM32(edx + 0x34) | 0x10;
    _fa = (uint32_t)(MEM32(edx + 0x34)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0012EB35: ;
    esi = MEM32(eax + 8);
    esi = esi & 0x20;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = esi | edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    if ((_fa == 0)) goto loc_0012EB43; /* je: equal / zero */

loc_0012EB3F: ;
    MEM32(edx + 0x34) = MEM32(edx + 0x34) | 0x20;
    _fa = (uint32_t)(MEM32(edx + 0x34)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0012EB43: ;
    esi = MEM32(eax + 8);
    esi = esi & 0x40;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = esi | edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    if ((_fa == 0)) goto loc_0012EB51; /* je: equal / zero */

loc_0012EB4D: ;
    MEM32(edx + 0x34) = MEM32(edx + 0x34) | 0x40;
    _fa = (uint32_t)(MEM32(edx + 0x34)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0012EB51: ;
    esi = MEM32(eax + 8);
    esi = esi & 0x80;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = esi | edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    if ((_fa == 0)) goto loc_0012EB65; /* je: equal / zero */

loc_0012EB5E: ;
    MEM32(edx + 0x34) = MEM32(edx + 0x34) | 0x80;
    _fa = (uint32_t)(MEM32(edx + 0x34)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0012EB65: ;
    esi = MEM32(eax + 8);
    esi = esi & 0x100;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = esi | edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    if ((_fa == 0)) goto loc_0012EB79; /* je: equal / zero */

loc_0012EB72: ;
    MEM32(edx + 0x34) = MEM32(edx + 0x34) | 0x100;
    _fa = (uint32_t)(MEM32(edx + 0x34)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0012EB79: ;
    esi = MEM32(eax + 8);
    esi = esi & 0x200;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = esi | edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    if ((_fa == 0)) goto loc_0012EB8D; /* je: equal / zero */

loc_0012EB86: ;
    MEM32(edx + 0x34) = MEM32(edx + 0x34) | 0x200;
    _fa = (uint32_t)(MEM32(edx + 0x34)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0012EB8D: ;
    esi = MEM32(eax + 8);
    esi = esi & 0x400;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = esi | edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    if ((_fa == 0)) goto loc_0012EBA1; /* je: equal / zero */

loc_0012EB9A: ;
    MEM32(edx + 0x34) = MEM32(edx + 0x34) | 0x400;
    _fa = (uint32_t)(MEM32(edx + 0x34)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0012EBA1: ;
    esi = MEM32(eax + 8);
    esi = esi & 0x800;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = esi | edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    if ((_fa == 0)) goto loc_0012EBB5; /* je: equal / zero */

loc_0012EBAE: ;
    MEM32(edx + 0x34) = MEM32(edx + 0x34) | 0x800;
    _fa = (uint32_t)(MEM32(edx + 0x34)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0012EBB5: ;
    esi = MEM32(eax + 8);
    esi = esi & 0x1000;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = esi | edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    if ((_fa == 0)) goto loc_0012EBC9; /* je: equal / zero */

loc_0012EBC2: ;
    MEM32(edx + 0x34) = MEM32(edx + 0x34) | 0x1000;
    _fa = (uint32_t)(MEM32(edx + 0x34)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0012EBC9: ;
    esi = MEM32(eax + 8);
    esi = esi & 0x2000;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = esi | edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    if ((_fa == 0)) goto loc_0012EBDD; /* je: equal / zero */

loc_0012EBD6: ;
    MEM32(edx + 0x34) = MEM32(edx + 0x34) | 0x2000;
    _fa = (uint32_t)(MEM32(edx + 0x34)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0012EBDD: ;
    esi = MEM32(eax + 8);
    esi = esi & 0x4000;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = esi | edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    if ((_fa == 0)) goto loc_0012EBF1; /* je: equal / zero */

loc_0012EBEA: ;
    MEM32(edx + 0x34) = MEM32(edx + 0x34) | 0x4000;
    _fa = (uint32_t)(MEM32(edx + 0x34)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0012EBF1: ;
    esi = MEM32(eax + 8);
    esi = esi & 0x8000;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = esi | edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    if ((_fa == 0)) goto loc_0012EC05; /* je: equal / zero */

loc_0012EBFE: ;
    MEM32(edx + 0x34) = MEM32(edx + 0x34) | 0x8000;
    _fa = (uint32_t)(MEM32(edx + 0x34)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0012EC05: ;
    esi = MEM32(eax + 8);
    esi = esi & 0x10000;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = esi | edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    if ((_fa == 0)) goto loc_0012EC19; /* je: equal / zero */

loc_0012EC12: ;
    MEM32(edx + 0x34) = MEM32(edx + 0x34) | 0x10000;
    _fa = (uint32_t)(MEM32(edx + 0x34)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0012EC19: ;
    esi = MEM32(eax + 8);
    esi = esi & 0x20000;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = esi | edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    if ((_fa == 0)) goto loc_0012EC2D; /* je: equal / zero */

loc_0012EC26: ;
    MEM32(edx + 0x34) = MEM32(edx + 0x34) | 0x20000;
    _fa = (uint32_t)(MEM32(edx + 0x34)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0012EC2D: ;
    esi = MEM32(eax + 8);
    esi = esi & 0x40000;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = esi | edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    if ((_fa == 0)) goto loc_0012EC41; /* je: equal / zero */

loc_0012EC3A: ;
    MEM32(edx + 0x34) = MEM32(edx + 0x34) | 0x40000;
    _fa = (uint32_t)(MEM32(edx + 0x34)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0012EC41: ;
    esi = MEM32(eax + 8);
    esi = esi & 0x80000;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = esi | edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    if ((_fa == 0)) goto loc_0012EC55; /* je: equal / zero */

loc_0012EC4E: ;
    MEM32(edx + 0x34) = MEM32(edx + 0x34) | 0x80000;
    _fa = (uint32_t)(MEM32(edx + 0x34)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0012EC55: ;
    esi = MEM32(eax + 8);
    esi = esi & 0x100000;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = esi | edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    if ((_fa == 0)) goto loc_0012EC69; /* je: equal / zero */

loc_0012EC62: ;
    MEM32(edx + 0x34) = MEM32(edx + 0x34) | 0x100000;
    _fa = (uint32_t)(MEM32(edx + 0x34)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0012EC69: ;
    esi = MEM32(eax + 8);
    esi = esi & 0x200000;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = esi | edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    if ((_fa == 0)) goto loc_0012EC7D; /* je: equal / zero */

loc_0012EC76: ;
    MEM32(edx + 0x34) = MEM32(edx + 0x34) | 0x200000;
    _fa = (uint32_t)(MEM32(edx + 0x34)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0012EC7D: ;
    esi = MEM32(eax + 8);
    esi = esi & 0x400000;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = esi | edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    if ((_fa == 0)) goto loc_0012EC91; /* je: equal / zero */

loc_0012EC8A: ;
    MEM32(edx + 0x34) = MEM32(edx + 0x34) | 0x400000;
    _fa = (uint32_t)(MEM32(edx + 0x34)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0012EC91: ;
    esi = MEM32(eax + 8);
    esi = esi & 0x800000;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = esi | edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    if ((_fa == 0)) goto loc_0012ECA5; /* je: equal / zero */

loc_0012EC9E: ;
    MEM32(edx + 0x34) = MEM32(edx + 0x34) | 0x800000;
    _fa = (uint32_t)(MEM32(edx + 0x34)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0012ECA5: ;
    esi = MEM32(eax + 8);
    esi = esi & 0x1000000;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = esi | edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    if ((_fa == 0)) goto loc_0012ECB9; /* je: equal / zero */

loc_0012ECB2: ;
    MEM32(edx + 0x34) = MEM32(edx + 0x34) | 0x1000000;
    _fa = (uint32_t)(MEM32(edx + 0x34)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0012ECB9: ;
    esi = MEM32(eax + 8);
    esi = esi & 0x2000000;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = esi | edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    if ((_fa == 0)) goto loc_0012ECCD; /* je: equal / zero */

loc_0012ECC6: ;
    MEM32(edx + 0x34) = MEM32(edx + 0x34) | 0x2000000;
    _fa = (uint32_t)(MEM32(edx + 0x34)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0012ECCD: ;
    esi = MEM32(eax + 8);
    esi = esi & 0x4000000;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = esi | edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    if ((_fa == 0)) goto loc_0012ECE1; /* je: equal / zero */

loc_0012ECDA: ;
    MEM32(edx + 0x34) = MEM32(edx + 0x34) | 0x4000000;
    _fa = (uint32_t)(MEM32(edx + 0x34)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0012ECE1: ;
    esi = MEM32(eax + 8);
    esi = esi & 0x8000000;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = esi | edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    if ((_fa == 0)) goto loc_0012ECF5; /* je: equal / zero */

loc_0012ECEE: ;
    MEM32(edx + 0x34) = MEM32(edx + 0x34) | 0x8000000;
    _fa = (uint32_t)(MEM32(edx + 0x34)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0012ECF5: ;
    esi = MEM32(eax + 8);
    esi = esi & 0x10000000;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = esi | edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    if ((_fa == 0)) goto loc_0012ED09; /* je: equal / zero */

loc_0012ED02: ;
    MEM32(edx + 0x34) = MEM32(edx + 0x34) | 0x10000000;
    _fa = (uint32_t)(MEM32(edx + 0x34)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0012ED09: ;
    esi = MEM32(eax + 8);
    esi = esi & 0x20000000;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = esi | edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    if ((_fa == 0)) goto loc_0012ED1D; /* je: equal / zero */

loc_0012ED16: ;
    MEM32(edx + 0x34) = MEM32(edx + 0x34) | 0x20000000;
    _fa = (uint32_t)(MEM32(edx + 0x34)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0012ED1D: ;
    esi = MEM32(eax + 8);
    esi = esi & ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = esi | edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    if ((_fa == 0)) goto loc_0012ED29; /* je: equal / zero */

loc_0012ED26: ;
    MEM32(edx + 0x34) = MEM32(edx + 0x34) | ecx;
    _fa = (uint32_t)(MEM32(edx + 0x34)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0012ED29: ;
    edx = MEM32(esp + 0x10);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x10) = edx;
    if ((_fa != 0)) goto loc_0012EACE; /* jne: not equal / not zero */

loc_0012ED3B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0012EEC0
 * Original: 0x0012EEC0 - 0x0012EF0B (75 bytes, 27 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012EEC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012EEC0: ;
    edx = MEM32(ecx + 0x28);
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x390);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x390);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    edx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    MEM32(edx) = 1;
    if (CMP_EQ(_fa, _fb)) goto loc_0012EEFF; /* je: equal / zero */

loc_0012EEEA: ;
    /* nop */

loc_0012EEF0: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012EF05; /* je: equal / zero */

loc_0012EEF6: ;
    esi = MEM32(edx);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(edx) = esi;
    if (CMP_NE(_fa, _fb)) goto loc_0012EEF0; /* jne: not equal / not zero */

loc_0012EEFF: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_0012EF05: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0012EF10
 * Original: 0x0012EF10 - 0x0012EF21 (17 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012EF10(void)
{

loc_0012EF10: ;
    eax = MEM32(ecx + 0x1180);
    ecx = MEM32(esp + 4);
    MEM8(ecx + eax) = 1;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0012EF30
 * Original: 0x0012EF30 - 0x0012EF41 (17 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012EF30(void)
{

loc_0012EF30: ;
    eax = MEM32(ecx + 0x1180);
    ecx = MEM32(esp + 4);
    MEM8(ecx + eax) = 0;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0012EF50
 * Original: 0x0012EF50 - 0x0012EF64 (20 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012EF50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012EF50: ;
    eax = MEM32(ecx + 0x1180);
    ecx = MEM32(esp + 4);
    _fa = (uint32_t)(MEM8(ecx + eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + eax), 0 (8-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0012EF70
 * Original: 0x0012EF70 - 0x0012EFE0 (112 bytes, 43 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012EF70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012EF70: ;
    eax = MEM32(ecx + 0x1170);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0012EFDC; /* jle: less or equal (signed <=) */

loc_0012EF7D: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    if (CMP_GE(_fas, _fbs)) goto loc_0012EFCF; /* jge: greater or equal (signed >=) */

loc_0012EF87: ;
    eax = MEM32(ecx + 0x1174);
    eax = MEM32(eax + edi * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012EFCF; /* je: equal / zero */

loc_0012EF94: ;
    edx = eax + -16;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012EFCF; /* je: equal / zero */

loc_0012EF9B: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(edx + 0x52)) & 0xFFFFu; _fb = (uint32_t)(LO16(esi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edx + 0x52), LO16(esi) (16-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0012EFCF; /* jle: less or equal (signed <=) */

loc_0012EFA3: ;
    eax = MEM32(edx + 0x54);
    eax = MEM32(eax + esi * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012EFC6; /* je: equal / zero */

loc_0012EFAD: ;
    eax = MEM32(eax + 0x154);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012EFC6; /* je: equal / zero */

loc_0012EFB7: ;
    _fa = (uint32_t)(MEM32(eax + 0x4C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x4C), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012EFC6; /* jne: not equal / not zero */

loc_0012EFBC: ;
    eax = MEM32(ecx + 0x1180);
    MEM8(edi + eax) = 1;

loc_0012EFC6: ;
    eax = (uint32_t)(int32_t)SMEM16(edx + 0x52);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0012EFA3; /* jl: less (signed <) */

loc_0012EFCF: ;
    eax = MEM32(ecx + 0x1170);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0012EF87; /* jl: less (signed <) */

loc_0012EFDA: ;
    POP32(esp, esi);
    POP32(esp, ebx);

loc_0012EFDC: ;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0012EFE0
 * Original: 0x0012EFE0 - 0x0012F050 (112 bytes, 43 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012EFE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012EFE0: ;
    eax = MEM32(ecx + 0x1170);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0012F04C; /* jle: less or equal (signed <=) */

loc_0012EFED: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    if (CMP_GE(_fas, _fbs)) goto loc_0012F03F; /* jge: greater or equal (signed >=) */

loc_0012EFF7: ;
    eax = MEM32(ecx + 0x1174);
    eax = MEM32(eax + edi * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012F03F; /* je: equal / zero */

loc_0012F004: ;
    edx = eax + -16;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012F03F; /* je: equal / zero */

loc_0012F00B: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(edx + 0x52)) & 0xFFFFu; _fb = (uint32_t)(LO16(esi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edx + 0x52), LO16(esi) (16-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0012F03F; /* jle: less or equal (signed <=) */

loc_0012F013: ;
    eax = MEM32(edx + 0x54);
    eax = MEM32(eax + esi * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012F036; /* je: equal / zero */

loc_0012F01D: ;
    eax = MEM32(eax + 0x154);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012F036; /* je: equal / zero */

loc_0012F027: ;
    _fa = (uint32_t)(MEM32(eax + 0x4C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x4C), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012F036; /* jne: not equal / not zero */

loc_0012F02C: ;
    eax = MEM32(ecx + 0x1180);
    MEM8(edi + eax) = 0;

loc_0012F036: ;
    eax = (uint32_t)(int32_t)SMEM16(edx + 0x52);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0012F013; /* jl: less (signed <) */

loc_0012F03F: ;
    eax = MEM32(ecx + 0x1170);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0012EFF7; /* jl: less (signed <) */

loc_0012F04A: ;
    POP32(esp, esi);
    POP32(esp, ebx);

loc_0012F04C: ;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0012F050
 * Original: 0x0012F050 - 0x0012F0B7 (103 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012F050(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012F050: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x1170);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0012F081; /* jle: less or equal (signed <=) */

loc_0012F05D: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0012F07C; /* jge: greater or equal (signed >=) */

loc_0012F061: ;
    eax = MEM32(ecx + 0x1174);
    eax = MEM32(eax + edx * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012F07C; /* je: equal / zero */

loc_0012F06E: ;
    _fb = (uint32_t)(0xFFFFFFF0u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFF0u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fa == 0)) goto loc_0012F07C; /* je: equal / zero */

loc_0012F073: ;
    _fa = (uint32_t)(MEM32(eax + 0x48)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + 0x48), 0x20000000 (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0012F094; /* jne: not equal / not zero */

loc_0012F07C: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0012F061; /* jl: less (signed <) */

loc_0012F081: ;
    ecx = MEM32(0x63A1D0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0012F092u); RECOMP_ABI_CALL(0x001376B0u, sub_001376B0); /* call 0x001376B0 */

loc_0012F092: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0012F094: ;
    ecx = MEM32(eax + 0x54);
    ecx = MEM32(ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012F081; /* je: equal / zero */

loc_0012F09D: ;
    edx = MEM32(ecx + 0x154);
    ecx = MEM32(edx + 0xC);
    PUSH32(esp, ecx);
    ecx = MEM32(0x63A1D0);
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, 0x0012F0B5u); RECOMP_ABI_CALL(0x001376B0u, sub_001376B0); /* call 0x001376B0 */

loc_0012F0B5: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0012F110
 * Original: 0x0012F110 - 0x0012F17C (108 bytes, 44 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012F110(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0012F110: ;
    eax = MEM32(ecx + 0x1170);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0012F179; /* jle: less or equal (signed <=) */

loc_0012F11C: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_GE(_fas, _fbs)) goto loc_0012F16A; /* jge: greater or equal (signed >=) */

loc_0012F128: ;
    eax = MEM32(ecx + 0x1174);
    eax = MEM32(eax + edx * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012F16A; /* je: equal / zero */

loc_0012F135: ;
    _fb = (uint32_t)(0xFFFFFFF0u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFF0u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fa == 0)) goto loc_0012F16A; /* je: equal / zero */

loc_0012F13A: ;
    eax = MEM32(ecx + 0x1178);
    eax = MEM32(eax + edx * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012F16A; /* je: equal / zero */

loc_0012F147: ;
    edi = MEM32(eax);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0012F16A; /* jle: less or equal (signed <=) */

loc_0012F14F: ;
    edi = eax + 8;

loc_0012F152: ;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012F160; /* jne: not equal / not zero */

loc_0012F156: ;
    ebp = MEM32(ecx + 0x1180);
    MEM8(edx + ebp) = 1;

loc_0012F160: ;
    ebp = MEM32(eax);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0012F152; /* jl: less (signed <) */

loc_0012F16A: ;
    eax = MEM32(ecx + 0x1170);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0012F128; /* jl: less (signed <) */

loc_0012F175: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_0012F179: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0012F180
 * Original: 0x0012F180 - 0x0012F1EC (108 bytes, 44 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012F180(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0012F180: ;
    eax = MEM32(ecx + 0x1170);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0012F1E9; /* jle: less or equal (signed <=) */

loc_0012F18C: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_GE(_fas, _fbs)) goto loc_0012F1DA; /* jge: greater or equal (signed >=) */

loc_0012F198: ;
    eax = MEM32(ecx + 0x1174);
    eax = MEM32(eax + edx * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012F1DA; /* je: equal / zero */

loc_0012F1A5: ;
    _fb = (uint32_t)(0xFFFFFFF0u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFF0u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fa == 0)) goto loc_0012F1DA; /* je: equal / zero */

loc_0012F1AA: ;
    eax = MEM32(ecx + 0x1178);
    eax = MEM32(eax + edx * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012F1DA; /* je: equal / zero */

loc_0012F1B7: ;
    edi = MEM32(eax);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0012F1DA; /* jle: less or equal (signed <=) */

loc_0012F1BF: ;
    edi = eax + 8;

loc_0012F1C2: ;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012F1D0; /* jne: not equal / not zero */

loc_0012F1C6: ;
    ebp = MEM32(ecx + 0x1180);
    MEM8(edx + ebp) = 0;

loc_0012F1D0: ;
    ebp = MEM32(eax);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0012F1C2; /* jl: less (signed <) */

loc_0012F1DA: ;
    eax = MEM32(ecx + 0x1170);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0012F198; /* jl: less (signed <) */

loc_0012F1E5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_0012F1E9: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0012F1F0
 * Original: 0x0012F1F0 - 0x0012F213 (35 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012F1F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012F1F0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0012F20F; /* je: equal / zero */

loc_0012F1FB: ;
    PUSH32(esp, eax);
    ecx = esp + 0xC;
    PUSH32(esp, 0x0012F205u); RECOMP_ABI_CALL(0x001059E0u, sub_001059E0); /* call 0x001059E0 */

loc_0012F205: ;
    eax = MEM32(eax);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0012F20Fu); RECOMP_ABI_CALL(0x0012EF70u, sub_0012EF70); /* call 0x0012EF70 */

loc_0012F20F: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0012F220
 * Original: 0x0012F220 - 0x0012F243 (35 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012F220(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012F220: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0012F23F; /* je: equal / zero */

loc_0012F22B: ;
    PUSH32(esp, eax);
    ecx = esp + 0xC;
    PUSH32(esp, 0x0012F235u); RECOMP_ABI_CALL(0x001059E0u, sub_001059E0); /* call 0x001059E0 */

loc_0012F235: ;
    eax = MEM32(eax);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0012F23Fu); RECOMP_ABI_CALL(0x0012EFE0u, sub_0012EFE0); /* call 0x0012EFE0 */

loc_0012F23F: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0012F2F0
 * Original: 0x0012F2F0 - 0x0012F340 (80 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012F2F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012F2F0: ;
    PUSH32(esp, esi);
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = eax + 0x4B8;
    PUSH32(esp, edi);
    edi = edi;

loc_0012F300: ;
    MEM32(eax + esi * 4) = ecx;
    MEM32(eax + esi * 4 + 0x4A8) = ecx;
    edi = 0x20;
    /* nop */

loc_0012F310: ;
    MEM32(edx + -1192) = ecx;
    MEM32(edx) = ecx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0012F310; /* jne: not equal / not zero */

loc_0012F31E: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 3 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0012F300; /* jb: below (unsigned <) */

loc_0012F324: ;
    edx = eax + 0x6B8;
    esi = 0xA6;
    POP32(esp, edi);

loc_0012F330: ;
    MEM32(edx + -1192) = ecx;
    MEM32(edx) = ecx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0012F330; /* jne: not equal / not zero */

loc_0012F33E: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0012F610
 * Original: 0x0012F610 - 0x0012F693 (131 bytes, 57 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012F610(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0012F610: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (CMP_LE(_fas, _fbs)) goto loc_0012F68F; /* jle: less or equal (signed <=) */

loc_0012F61B: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = eax;

loc_0012F626: ;
    eax = MEM32(esi + -8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0012F687; /* ja: above (unsigned >) */

loc_0012F62E: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x12F694); /* switch: 5 entries, 5 targets */
    if (_jt == 0x0012F635u) goto loc_0012F635;
    if (_jt == 0x0012F645u) goto loc_0012F645;
    if (_jt == 0x0012F655u) goto loc_0012F655;
    if (_jt == 0x0012F669u) goto loc_0012F669;
    if (_jt == 0x0012F679u) goto loc_0012F679;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0012F635: ;
    eax = MEM32(esi);
    ecx = MEM32(esi + -4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x0012F643u); RECOMP_ABI_CALL(0x0012F340u, sub_0012F340); /* call 0x0012F340 */

loc_0012F643: ;
    goto loc_0012F687;

loc_0012F645: ;
    edx = MEM32(esi);
    eax = MEM32(esi + -4);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0012F653u); RECOMP_ABI_CALL(0x0012F3E0u, sub_0012F3E0); /* call 0x0012F3E0 */

loc_0012F653: ;
    goto loc_0012F687;

loc_0012F655: ;
    ecx = MEM32(esi + 4);
    edx = MEM32(esi);
    eax = MEM32(esi + -4);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0012F667u); RECOMP_ABI_CALL(0x0012F450u, sub_0012F450); /* call 0x0012F450 */

loc_0012F667: ;
    goto loc_0012F687;

loc_0012F669: ;
    ecx = MEM32(esi);
    edx = MEM32(esi + -4);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x0012F677u); RECOMP_ABI_CALL(0x0012F5A0u, sub_0012F5A0); /* call 0x0012F5A0 */

loc_0012F677: ;
    goto loc_0012F687;

loc_0012F679: ;
    eax = MEM32(esi);
    ecx = MEM32(esi + -4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x0012F687u); RECOMP_ABI_CALL(0x0012F610u, sub_0012F610); /* call 0x0012F610 */

loc_0012F687: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0012F626; /* jne: not equal / not zero */

loc_0012F68D: ;
    POP32(esp, esi);
    POP32(esp, ebx);

loc_0012F68F: ;
    POP32(esp, edi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0012F6B0
 * Original: 0x0012F6B0 - 0x0012F6DF (47 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012F6B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012F6B0: ;
    eax = MEM32(0x639750);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0012F6DE; /* jne: not equal / not zero */

loc_0012F6B9: ;
    PUSH32(esp, 0x950);
    PUSH32(esp, 0x0012F6C3u); RECOMP_ABI_CALL(0x000EBFBFu, sub_000EBFBF); /* call 0x000EBFBF */

loc_0012F6C3: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012F6D7; /* je: equal / zero */

loc_0012F6CA: ;
    ecx = eax;
    PUSH32(esp, 0x0012F6D1u); RECOMP_ABI_CALL(0x0012F2F0u, sub_0012F2F0); /* call 0x0012F2F0 */

loc_0012F6D1: ;
    MEM32(0x639750) = eax;
    esp += 4; return; /* ret */

loc_0012F6D7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x639750) = eax;

loc_0012F6DE: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0012F6E0
 * Original: 0x0012F6E0 - 0x0012F769 (137 bytes, 41 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012F6E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012F6E0: ;
    eax = MEM32(esp + 4);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0012F72D; /* je: equal / zero */

loc_0012F6E7: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0012F6F4; /* je: equal / zero */

loc_0012F6EA: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0012F72D; /* jne: not equal / not zero */

loc_0012F6ED: ;
    PUSH32(esp, 0x800B);
    goto loc_0012F6F9;

loc_0012F6F4: ;
    PUSH32(esp, 0x8006);

loc_0012F6F9: ;
    PUSH32(esp, 0x4A);
    PUSH32(esp, 0x0012F700u); RECOMP_ABI_CALL(0x0012F6B0u, sub_0012F6B0); /* call 0x0012F6B0 */

loc_0012F700: ;
    ecx = eax;
    PUSH32(esp, 0x0012F707u); RECOMP_ABI_CALL(0x0012F5A0u, sub_0012F5A0); /* call 0x0012F5A0 */

loc_0012F707: ;
    PUSH32(esp, 0x302);
    PUSH32(esp, 0x3E);
    PUSH32(esp, 0x0012F713u); RECOMP_ABI_CALL(0x0012F6B0u, sub_0012F6B0); /* call 0x0012F6B0 */

loc_0012F713: ;
    ecx = eax;
    PUSH32(esp, 0x0012F71Au); RECOMP_ABI_CALL(0x0012F5A0u, sub_0012F5A0); /* call 0x0012F5A0 */

loc_0012F71A: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x3F);
    PUSH32(esp, 0x0012F723u); RECOMP_ABI_CALL(0x0012F6B0u, sub_0012F6B0); /* call 0x0012F6B0 */

loc_0012F723: ;
    ecx = eax;
    PUSH32(esp, 0x0012F72Au); RECOMP_ABI_CALL(0x0012F5A0u, sub_0012F5A0); /* call 0x0012F5A0 */

loc_0012F72A: ;
    esp += 8; return; /* ret 4 */

loc_0012F72D: ;
    PUSH32(esp, 0x8006);
    PUSH32(esp, 0x4A);
    PUSH32(esp, 0x0012F739u); RECOMP_ABI_CALL(0x0012F6B0u, sub_0012F6B0); /* call 0x0012F6B0 */

loc_0012F739: ;
    ecx = eax;
    PUSH32(esp, 0x0012F740u); RECOMP_ABI_CALL(0x0012F5A0u, sub_0012F5A0); /* call 0x0012F5A0 */

loc_0012F740: ;
    PUSH32(esp, 0x302);
    PUSH32(esp, 0x3E);
    PUSH32(esp, 0x0012F74Cu); RECOMP_ABI_CALL(0x0012F6B0u, sub_0012F6B0); /* call 0x0012F6B0 */

loc_0012F74C: ;
    ecx = eax;
    PUSH32(esp, 0x0012F753u); RECOMP_ABI_CALL(0x0012F5A0u, sub_0012F5A0); /* call 0x0012F5A0 */

loc_0012F753: ;
    PUSH32(esp, 0x303);
    PUSH32(esp, 0x3F);
    PUSH32(esp, 0x0012F75Fu); RECOMP_ABI_CALL(0x0012F6B0u, sub_0012F6B0); /* call 0x0012F6B0 */

loc_0012F75F: ;
    ecx = eax;
    PUSH32(esp, 0x0012F766u); RECOMP_ABI_CALL(0x0012F5A0u, sub_0012F5A0); /* call 0x0012F5A0 */

loc_0012F766: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0012F7A0
 * Original: 0x0012F7A0 - 0x0012F7B7 (23 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012F7A0(void)
{

loc_0012F7A0: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0012F7AFu); RECOMP_ABI_CALL(0x0012F6B0u, sub_0012F6B0); /* call 0x0012F6B0 */

loc_0012F7AF: ;
    ecx = eax;
    PUSH32(esp, 0x0012F7B6u); RECOMP_ABI_CALL(0x0012F610u, sub_0012F610); /* call 0x0012F610 */

loc_0012F7B6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0012F7C0
 * Original: 0x0012F7C0 - 0x0012F7FA (58 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012F7C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0012F7C0: ;
    SET_LO8(eax, MEM8(0x50FF48));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012F7F9; /* je: equal / zero */

loc_0012F7C9: ;
    ecx = 0x66C0E8;
    PUSH32(esp, 0x0012F7D3u); RECOMP_ABI_CALL(0x001EE6B0u, sub_001EE6B0); /* call 0x001EE6B0 */

loc_0012F7D3: ;
    SET_LO8(eax, MEM8(0x50FF48));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012F7F9; /* je: equal / zero */

loc_0012F7DC: ;
    ecx = 0x6644E0;
    PUSH32(esp, 0x0012F7E6u); RECOMP_ABI_CALL(0x001EE6B0u, sub_001EE6B0); /* call 0x001EE6B0 */

loc_0012F7E6: ;
    SET_LO8(eax, MEM8(0x50FF48));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0012F7F9; /* je: equal / zero */

loc_0012F7EF: ;
    ecx = 0x673CF0;
    g_seh_ebp = ebp; sub_001EE6B0(); return; /* tail jmp 0x001EE6B0 */

loc_0012F7F9: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0012FA20
 * Original: 0x0012FA20 - 0x0012FA2A (10 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012FA20(void)
{

loc_0012FA20: ;
    eax = ecx;
    MEM8(eax + 1) = 0;
    MEM8(eax) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_0012FA30
 * Original: 0x0012FA30 - 0x0012FA3A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012FA30(void)
{

loc_0012FA30: ;
    SET_LO8(eax, MEM8(esp + 4));
    MEM8(ecx + 1) = LO8(eax);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0012FA40
 * Original: 0x0012FA40 - 0x0012FA4A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012FA40(void)
{

loc_0012FA40: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x24) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0012FA50
 * Original: 0x0012FA50 - 0x0012FA59 (9 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012FA50(void)
{

loc_0012FA50: ;
    SET_LO8(eax, MEM8(esp + 4));
    MEM8(ecx) = LO8(eax);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0012FA60
 * Original: 0x0012FA60 - 0x0012FA6A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012FA60(void)
{

loc_0012FA60: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x28) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0012FA70
 * Original: 0x0012FA70 - 0x0012FA8F (31 bytes, 9 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012FA70(void)
{

loc_0012FA70: ;
    eax = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    MEM32(ecx + 4) = eax;
    eax = MEM32(esp + 0xC);
    MEM32(ecx + 0xC) = edx;
    edx = MEM32(esp + 0x10);
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0x10) = edx;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0012FA90
 * Original: 0x0012FA90 - 0x0012FAA3 (19 bytes, 6 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012FA90(void)
{

loc_0012FA90: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x14) = eax;
    MEM32(ecx + 0x18) = eax;
    MEM32(ecx + 0x1C) = eax;
    MEM32(ecx + 0x20) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0012FAB0
 * Original: 0x0012FAB0 - 0x0012FACF (31 bytes, 9 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012FAB0(void)
{

loc_0012FAB0: ;
    eax = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    MEM32(ecx + 0x14) = eax;
    eax = MEM32(esp + 0xC);
    MEM32(ecx + 0x18) = edx;
    edx = MEM32(esp + 0x10);
    MEM32(ecx + 0x1C) = eax;
    MEM32(ecx + 0x20) = edx;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0012FAD0
 * Original: 0x0012FAD0 - 0x0012FAF4 (36 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012FAD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012FAD0: ;
    MEM32(ecx) = 0;
    eax = ecx + 5;
    edx = 0x20;
    edi = edi;

loc_0012FAE0: ;
    MEM8(eax) = 0;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x2C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0012FAE0; /* jne: not equal / not zero */

loc_0012FAE9: ;
    MEM32(ecx + 0x584) = 0x3F000000;
    esp += 4; return; /* ret */

}

/**
 * sub_0012FB00
 * Original: 0x0012FB00 - 0x0012FB61 (97 bytes, 30 insns)
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012FB00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012FB00: ;
    edx = MEM32(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x20 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0012FB0C; /* jl: less (signed <) */

loc_0012FB07: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 28; return; /* ret 24 */

loc_0012FB0C: ;
    eax = edx;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2C);
    eax = eax + ecx + 4;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx) = edx;
    edx = MEM32(esp + 4);
    MEM32(eax + 4) = edx;
    edx = MEM32(esp + 8);
    MEM32(eax + 0xC) = edx;
    edx = MEM32(esp + 0xC);
    MEM32(eax + 8) = edx;
    edx = MEM32(esp + 0x10);
    MEM32(eax + 0x10) = edx;
    edx = MEM32(esp + 0x14);
    MEM32(eax + 0x14) = edx;
    MEM32(eax + 0x18) = edx;
    MEM32(eax + 0x1C) = edx;
    MEM32(eax + 0x20) = edx;
    SET_LO8(edx, MEM8(esp + 0x18));
    MEM8(eax + 1) = 1;
    ecx = MEM32(ecx + 0x584);
    MEM32(eax + 0x24) = ecx;
    MEM8(eax) = LO8(edx);
    MEM32(eax + 0x28) = 0;
    esp += 28; return; /* ret 24 */

}

/**
 * sub_0012FB70
 * Original: 0x0012FB70 - 0x0012FBDD (109 bytes, 33 insns)
 * CC: cdecl, 9 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0012FB70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0012FB70: ;
    edx = MEM32(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x20 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0012FB7C; /* jl: less (signed <) */

loc_0012FB77: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 40; return; /* ret 36 */

loc_0012FB7C: ;
    eax = edx;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2C);
    eax = eax + ecx + 4;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx) = edx;
    edx = MEM32(esp + 4);
    MEM32(eax + 4) = edx;
    edx = MEM32(esp + 8);
    MEM32(eax + 0xC) = edx;
    edx = MEM32(esp + 0xC);
    MEM32(eax + 8) = edx;
    edx = MEM32(esp + 0x10);
    MEM32(eax + 0x10) = edx;
    edx = MEM32(esp + 0x14);
    MEM32(eax + 0x14) = edx;
    edx = MEM32(esp + 0x18);
    MEM32(eax + 0x18) = edx;
    edx = MEM32(esp + 0x1C);
    MEM32(eax + 0x1C) = edx;
    edx = MEM32(esp + 0x20);
    MEM32(eax + 0x20) = edx;
    SET_LO8(edx, MEM8(esp + 0x24));
    MEM8(eax + 1) = 1;
    ecx = MEM32(ecx + 0x584);
    MEM32(eax + 0x24) = ecx;
    MEM8(eax) = LO8(edx);
    MEM32(eax + 0x28) = 0;
    esp += 40; return; /* ret 36 */

}

/**
 * sub_00130064
 * Original: 0x00130064 - 0x0013008E (42 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00130064(void)
{

loc_00130064: ;
    PUSH32(esp, 0x00130069u); RECOMP_ABI_CALL(0x0012F5A0u, sub_0012F5A0); /* call 0x0012F5A0 */

loc_00130069: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x3C);
    PUSH32(esp, 0x00130072u); RECOMP_ABI_CALL(0x0012F6B0u, sub_0012F6B0); /* call 0x0012F6B0 */

loc_00130072: ;
    ecx = eax;
    PUSH32(esp, 0x00130079u); RECOMP_ABI_CALL(0x0012F5A0u, sub_0012F5A0); /* call 0x0012F5A0 */

loc_00130079: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x8F);
    PUSH32(esp, 0x00130085u); RECOMP_ABI_CALL(0x0012F6B0u, sub_0012F6B0); /* call 0x0012F6B0 */

loc_00130085: ;
    ecx = eax;
    PUSH32(esp, 0x0013008Cu); RECOMP_ABI_CALL(0x0012F5A0u, sub_0012F5A0); /* call 0x0012F5A0 */

loc_0013008C: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00130085
 * Original: 0x00130085 - 0x0013008E (9 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00130085(void)
{

loc_00130085: ;
    ecx = eax;
    PUSH32(esp, 0x0013008Cu); RECOMP_ABI_CALL(0x0012F5A0u, sub_0012F5A0); /* call 0x0012F5A0 */

loc_0013008C: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00130090
 * Original: 0x00130090 - 0x001300C9 (57 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00130090(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00130090: ;
    eax = ecx;
    PUSH32(esp, esi);
    edx = eax + 4;
    esi = 0x20;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_001300A0: ;
    MEM8(edx + 1) = LO8(ecx);
    MEM8(edx) = LO8(ecx);
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x2C;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001300A0; /* jne: not equal / not zero */

loc_001300AB: ;
    MEM32(eax) = ecx;
    edx = eax + 5;
    esi = 0x20;

loc_001300B5: ;
    MEM8(edx) = LO8(ecx);
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x2C;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001300B5; /* jne: not equal / not zero */

loc_001300BD: ;
    MEM32(eax + 0x584) = 0x3F000000;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001300D0
 * Original: 0x001300D0 - 0x0013014C (124 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001300D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001300D0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    esi = ecx;
    PUSH32(esp, 0x001300DDu); RECOMP_ABI_CALL(0x0012F6B0u, sub_0012F6B0); /* call 0x0012F6B0 */

loc_001300DD: ;
    ecx = eax;
    PUSH32(esp, 0x001300E4u); RECOMP_ABI_CALL(0x0012F340u, sub_0012F340); /* call 0x0012F340 */

loc_001300E4: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x001300EDu); RECOMP_ABI_CALL(0x0012F6B0u, sub_0012F6B0); /* call 0x0012F6B0 */

loc_001300ED: ;
    ecx = eax;
    PUSH32(esp, 0x001300F4u); RECOMP_ABI_CALL(0x0012F340u, sub_0012F340); /* call 0x0012F340 */

loc_001300F4: ;
    PUSH32(esp, 0);
    PUSH32(esp, 2);
    PUSH32(esp, 0x001300FDu); RECOMP_ABI_CALL(0x0012F6B0u, sub_0012F6B0); /* call 0x0012F6B0 */

loc_001300FD: ;
    ecx = eax;
    PUSH32(esp, 0x00130104u); RECOMP_ABI_CALL(0x0012F340u, sub_0012F340); /* call 0x0012F340 */

loc_00130104: ;
    PUSH32(esp, 0);
    PUSH32(esp, 3);
    PUSH32(esp, 0x0013010Du); RECOMP_ABI_CALL(0x0012F6B0u, sub_0012F6B0); /* call 0x0012F6B0 */

loc_0013010D: ;
    ecx = eax;
    PUSH32(esp, 0x00130114u); RECOMP_ABI_CALL(0x0012F340u, sub_0012F340); /* call 0x0012F340 */

loc_00130114: ;
    ecx = esi;
    PUSH32(esp, 0x0013011Bu); RECOMP_ABI_CALL(0x0012FCC0u, sub_0012FCC0); /* call 0x0012FCC0 */

loc_0013011B: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x5C);
    PUSH32(esp, 0x00130124u); RECOMP_ABI_CALL(0x0012F6B0u, sub_0012F6B0); /* call 0x0012F6B0 */

loc_00130124: ;
    ecx = eax;
    PUSH32(esp, 0x0013012Bu); RECOMP_ABI_CALL(0x0012F5A0u, sub_0012F5A0); /* call 0x0012F5A0 */

loc_0013012B: ;
    eax = MEM32(esi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00130149; /* jle: less or equal (signed <=) */

loc_00130133: ;
    PUSH32(esp, ebx);
    ebx = esi + 4;

loc_00130137: ;
    ecx = ebx;
    PUSH32(esp, 0x0013013Eu); RECOMP_ABI_CALL(0x0012FDE0u, sub_0012FDE0); /* call 0x0012FDE0 */

loc_0013013E: ;
    eax = MEM32(esi);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x2C;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00130137; /* jl: less (signed <) */

loc_00130148: ;
    POP32(esp, ebx);

loc_00130149: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0013010D
 * Original: 0x0013010D - 0x0013014C (63 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013010D(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013010D: ;
    ecx = eax;
    PUSH32(esp, 0x00130114u); RECOMP_ABI_CALL(0x0012F340u, sub_0012F340); /* call 0x0012F340 */

loc_00130114: ;
    ecx = esi;
    PUSH32(esp, 0x0013011Bu); RECOMP_ABI_CALL(0x0012FCC0u, sub_0012FCC0); /* call 0x0012FCC0 */

loc_0013011B: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x5C);
    PUSH32(esp, 0x00130124u); RECOMP_ABI_CALL(0x0012F6B0u, sub_0012F6B0); /* call 0x0012F6B0 */

loc_00130124: ;
    ecx = eax;
    PUSH32(esp, 0x0013012Bu); RECOMP_ABI_CALL(0x0012F5A0u, sub_0012F5A0); /* call 0x0012F5A0 */

loc_0013012B: ;
    eax = MEM32(esi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00130149; /* jle: less or equal (signed <=) */

loc_00130133: ;
    PUSH32(esp, ebx);
    ebx = esi + 4;

loc_00130137: ;
    ecx = ebx;
    PUSH32(esp, 0x0013013Eu); RECOMP_ABI_CALL(0x0012FDE0u, sub_0012FDE0); /* call 0x0012FDE0 */

loc_0013013E: ;
    eax = MEM32(esi);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x2C;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00130137; /* jl: less (signed <) */

loc_00130148: ;
    POP32(esp, ebx);

loc_00130149: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00130180
 * Original: 0x00130180 - 0x00130184 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00130180(void)
{

loc_00130180: ;
    SET_LO8(eax, MEM8(ecx + 1));
    esp += 4; return; /* ret */

}

/**
 * sub_00130183
 * Original: 0x00130183 - 0x00130184 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00130183(void)
{

loc_00130183: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00130190
 * Original: 0x00130190 - 0x00130194 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00130190(void)
{

loc_00130190: ;
    SET_LO8(eax, MEM8(ecx + 2));
    esp += 4; return; /* ret */

}

/**
 * sub_001301A0
 * Original: 0x001301A0 - 0x001301A3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001301A0(void)
{

loc_001301A0: ;
    eax = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00130250
 * Original: 0x00130250 - 0x00130330 (224 bytes, 63 insns)
 * CC: cdecl, 5 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00130250(void)
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

loc_00130250: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    eax = MEM32(esp + 0xC);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x496B98)); /* fmul dword ptr [0x496b98] */
    MEM32(ecx + 4) = eax;
    eax = MEM32(esp + 0x1C);
    edx = MEM32(esp + 0x10);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, esi);
    fp_push(MEMF(esp + 0x14)); /* fld float */
    esi = MEM32(esp + 0x1C);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x496B98)); /* fmul dword ptr [0x496b98] */
    MEM32(ecx + 0x24) = esi;
    MEM32(ecx + 0x28) = esi;
    MEM32(ecx + 0x40) = esi;
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(ecx + 0x54) = esi;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    MEM32(ecx + 8) = edx;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 4)); /* fsub dword ptr [esp + 4] */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + 0x20) = eax;
    MEM32(ecx + 0x38) = eax;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x50F17C)); /* fsub dword ptr [0x50f17c] */
    MEM32(ecx + 0x50) = eax;
    MEM32(ecx + 0x68) = eax;
    MEM32(ecx + 0x1C) = edx;
    MEMF(ecx + 0x14) = (float)fp_top(); /* fst */
    MEM32(ecx + 0x34) = edx;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    MEM32(ecx + 0x4C) = edx;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 8)); /* fsub dword ptr [esp + 8] */
    MEM32(ecx + 0x64) = edx;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x50F178)); /* fsub dword ptr [0x50f178] */
    MEMF(ecx + 0x18) = (float)fp_top(); /* fst */
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x18)); /* fsub dword ptr [esp + 0x18] */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x50F17C)); /* fsub dword ptr [0x50f17c] */
    MEMF(esp + 0x20) = (float)fp_top(); /* fst */
    MEMF(ecx + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    esi = MEM32(esp + 0x20);
    MEM32(ecx + 0x5C) = esi;
    MEMF(ecx + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, esi);
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x18)); /* fsub dword ptr [esp + 0x18] */
    MEMF(ecx + 0x3C) = (float)fp_top(); /* fst */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMF(ecx + 0x44) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x14)); /* fsub dword ptr [esp + 0x14] */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x50F178)); /* fsub dword ptr [0x50f178] */
    MEMF(ecx + 0x48) = (float)fp_top(); /* fst */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x18)); /* fsub dword ptr [esp + 0x18] */
    MEMF(esp + 0x18) = (float)fp_top(); /* fst */
    eax = MEM32(esp + 0x18);
    MEMF(ecx + 0x58) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(ecx + 0x70) = eax;
    MEMF(ecx + 0x60) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(ecx + 0x6C) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 24; return; /* ret 20 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00130284
 * Original: 0x00130284 - 0x00130330 (172 bytes, 49 insns)
 * CC: cdecl, 5 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00130284(void)
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

loc_00130284: ;
    MEM32(ecx + 0x40) = esi;
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(ecx + 0x54) = esi;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    MEM32(ecx + 8) = edx;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 4)); /* fsub dword ptr [esp + 4] */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + 0x20) = eax;
    MEM32(ecx + 0x38) = eax;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x50F17C)); /* fsub dword ptr [0x50f17c] */
    MEM32(ecx + 0x50) = eax;
    MEM32(ecx + 0x68) = eax;
    MEM32(ecx + 0x1C) = edx;
    MEMF(ecx + 0x14) = (float)fp_top(); /* fst */
    MEM32(ecx + 0x34) = edx;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    MEM32(ecx + 0x4C) = edx;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 8)); /* fsub dword ptr [esp + 8] */
    MEM32(ecx + 0x64) = edx;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x50F178)); /* fsub dword ptr [0x50f178] */
    MEMF(ecx + 0x18) = (float)fp_top(); /* fst */
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x18)); /* fsub dword ptr [esp + 0x18] */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x50F17C)); /* fsub dword ptr [0x50f17c] */
    MEMF(esp + 0x20) = (float)fp_top(); /* fst */
    MEMF(ecx + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    esi = MEM32(esp + 0x20);
    MEM32(ecx + 0x5C) = esi;
    MEMF(ecx + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, esi);
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x18)); /* fsub dword ptr [esp + 0x18] */
    MEMF(ecx + 0x3C) = (float)fp_top(); /* fst */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMF(ecx + 0x44) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x14)); /* fsub dword ptr [esp + 0x14] */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x50F178)); /* fsub dword ptr [0x50f178] */
    MEMF(ecx + 0x48) = (float)fp_top(); /* fst */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x18)); /* fsub dword ptr [esp + 0x18] */
    MEMF(esp + 0x18) = (float)fp_top(); /* fst */
    eax = MEM32(esp + 0x18);
    MEMF(ecx + 0x58) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(ecx + 0x70) = eax;
    MEMF(ecx + 0x60) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(ecx + 0x6C) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 24; return; /* ret 20 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00130350
 * Original: 0x00130350 - 0x0013036B (27 bytes, 7 insns)
 * CC: cdecl, 1 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00130350(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00130350: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    MEM32(ecx + 0xC) = 0x437F0000;
    fp_top() = -fp_top(); /* fchs */
    MEM8(ecx + 1) = 0;
    MEMF(ecx + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    MEM8(ecx + 2) = 1;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001308E0
 * Original: 0x001308E0 - 0x00130A55 (373 bytes, 98 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_001308E0(void)
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

loc_001308E0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 1));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00130909; /* jne: not equal / not zero */

loc_001308ED: ;
    SET_LO8(eax, MEM8(esi + 2));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00130909; /* jne: not equal / not zero */

loc_001308F4: ;
    eax = MEM32(0x639CE8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013090E; /* jne: not equal / not zero */

loc_001308FD: ;
    eax = MEM32(0x639CEC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013090E; /* jne: not equal / not zero */

loc_00130906: ;
    MEM8(esi) = 0;

loc_00130909: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0013090E: ;
    fp_push(MEMF(0x4964E8)); /* fld float */
    MEM8(esi) = 1;
    fp_push(MEMF(0x639D00)); /* fld float */
    ecx = MEM32(0x639CF0);
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x639CF0) = ecx;
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00130A36; /* jp: parity */

loc_00130937: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00130977; /* jle: less or equal (signed <=) */

loc_0013093B: ;
    fp_push(MEMF(0x639CF8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x639D00)); /* fadd dword ptr [0x639d00] */
    MEMF(0x639CF8) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x639CFC)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x639cfc] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00130964; /* jne: not equal / not zero */

loc_0013095A: ;
    eax = MEM32(0x639CFC);
    MEM32(0x639CF8) = eax;

loc_00130964: ;
    fp_push(MEMF(0x639CF8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x4964E8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x4964e8] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0013098B; /* jp: parity */

loc_00130977: ;
    MEM32(0x639CEC) = 0;
    MEM32(0x639CF8) = 0;

loc_0013098B: ;
    eax = MEM32(0x639CEC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(0x639CF4) = 0x19;
    MEM32(esp + 8) = 0x41C80000;
    if (CMP_NE(_fa, _fb)) goto loc_001309AE; /* jne: not equal / not zero */

loc_001309A6: ;
    MEM32(esp + 8) = 0;

loc_001309AE: ;
    fp_push(MEMF(0x50F180)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x639CF8)); /* fmul dword ptr [0x639cf8] */
    MEMF(esp + 4) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x49FC20)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x49fc20] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001309D3; /* jne: not equal / not zero */

loc_001309CB: ;
    MEM32(esp + 4) = 0x437F0000;

loc_001309D3: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001309D9u); RECOMP_ABI_CALL(0x001072C0u, sub_001072C0); /* call 0x001072C0 */

loc_001309D9: ;
    ecx = MEM32(eax + 0xC4);
    MEM32(esp + 0x10) = ecx;
    PUSH32(esp, 0x001309E8u); RECOMP_ABI_CALL(0x001072C0u, sub_001072C0); /* call 0x001072C0 */

loc_001309E8: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    edi = eax;
    PUSH32(esp, 0x001309F3u); RECOMP_ABI_CALL(0x000EB38Cu, sub_000EB38C); /* call 0x000EB38C */

loc_001309F3: ;
    edx = MEM32(esp + 0xC);
    ecx = MEM32(edi + 0xC0);
    eax = eax << 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax | 0xFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00130A16u); RECOMP_ABI_CALL(0x00130250u, sub_00130250); /* call 0x00130250 */

loc_00130A16: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x3B);
    PUSH32(esp, 0x00130A1Fu); RECOMP_ABI_CALL(0x0012F6B0u, sub_0012F6B0); /* call 0x0012F6B0 */

loc_00130A1F: ;
    ecx = eax;
    PUSH32(esp, 0x00130A26u); RECOMP_ABI_CALL(0x0012F5A0u, sub_0012F5A0); /* call 0x0012F5A0 */

loc_00130A26: ;
    POP32(esp, edi);
    MEM8(esi + 3) = 1;
    ecx = esi;
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00130370(); return; /* tail jmp 0x00130370 */

loc_00130A36: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0013093B; /* jg: greater (signed >) */

loc_00130A3E: ;
    fp_push(MEMF(0x639CF8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x639D00)); /* fsub dword ptr [0x639d00] */
    MEMF(0x639CF8) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_00130964;

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00130A00
 * Original: 0x00130A00 - 0x00130A55 (85 bytes, 26 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00130A00(void)
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

loc_00130A00: ;
    eax = eax | 0xFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00130A16u); RECOMP_ABI_CALL(0x00130250u, sub_00130250); /* call 0x00130250 */

loc_00130A16: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x3B);
    PUSH32(esp, 0x00130A1Fu); RECOMP_ABI_CALL(0x0012F6B0u, sub_0012F6B0); /* call 0x0012F6B0 */

loc_00130A1F: ;
    ecx = eax;
    PUSH32(esp, 0x00130A26u); RECOMP_ABI_CALL(0x0012F5A0u, sub_0012F5A0); /* call 0x0012F5A0 */

loc_00130A26: ;
    POP32(esp, edi);
    MEM8(esi + 3) = 1;
    ecx = esi;
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00130370(); return; /* tail jmp 0x00130370 */

    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) { g_seh_ebp = ebp; sub_0013093B(); return; } /* jg: greater (signed >) */

loc_00130A3E: ;
    fp_push(MEMF(0x639CF8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x639D00)); /* fsub dword ptr [0x639d00] */
    MEMF(0x639CF8) = (float)fp_top(); fp_pop(); /* fstp */
    g_seh_ebp = ebp; sub_00130964(); return; /* tail jmp 0x00130964 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00130A60
 * Original: 0x00130A60 - 0x00130A6D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00130A60(void)
{

loc_00130A60: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x158) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00130A70
 * Original: 0x00130A70 - 0x00130A7D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00130A70(void)
{

loc_00130A70: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x154) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00130A80
 * Original: 0x00130A80 - 0x00130A8A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00130A80(void)
{

loc_00130A80: ;
    SET_LO8(eax, MEM8(esp + 4));
    MEM8(ecx + 4) = LO8(eax);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00130A90
 * Original: 0x00130A90 - 0x00130A9A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00130A90(void)
{

loc_00130A90: ;
    SET_LO8(eax, MEM8(esp + 4));
    MEM8(ecx + 5) = LO8(eax);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00130AA0
 * Original: 0x00130AA0 - 0x00130AA4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00130AA0(void)
{

loc_00130AA0: ;
    eax = MEM32(ecx + 0x14);
    esp += 4; return; /* ret */

}

/**
 * sub_00130AB0
 * Original: 0x00130AB0 - 0x00130AB4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00130AB0(void)
{

loc_00130AB0: ;
    eax = MEM32(ecx + 0x10);
    esp += 4; return; /* ret */

}

/**
 * sub_00130AC0
 * Original: 0x00130AC0 - 0x00130AC4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00130AC0(void)
{

loc_00130AC0: ;
    eax = MEM32(ecx + 0x14);
    esp += 4; return; /* ret */

}

/**
 * sub_00130AD0
 * Original: 0x00130AD0 - 0x00130AD4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00130AD0(void)
{

loc_00130AD0: ;
    eax = MEM32(ecx + 0x1C);
    esp += 4; return; /* ret */

}

/**
 * sub_00130AE0
 * Original: 0x00130AE0 - 0x00130B29 (73 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00130AE0(void)
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

loc_00130AE0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    fp_push(MEMF(esi + 4)); /* fld float */
    PUSH32(esp, edi);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x4AAC60)); /* fmul dword ptr [0x4aac60] */
    PUSH32(esp, 0x00130AF4u); RECOMP_ABI_CALL(0x000EB38Cu, sub_000EB38C); /* call 0x000EB38C */

loc_00130AF4: ;
    fp_push(MEMF(esi + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x4AC184)); /* fmul dword ptr [0x4ac184] */
    edi = eax;
    edi = edi & 0x7FF;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0x00130B0Au); RECOMP_ABI_CALL(0x000EB38Cu, sub_000EB38C); /* call 0x000EB38C */

loc_00130B0A: ;
    fp_push(MEMF(esi)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x4AAC60)); /* fmul dword ptr [0x4aac60] */
    eax = eax << 0xB;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = edi | eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edi = edi << 0xB;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, 0x00130B1Fu); RECOMP_ABI_CALL(0x000EB38Cu, sub_000EB38C); /* call 0x000EB38C */

loc_00130B1F: ;
    eax = eax & 0x7FF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
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
 * sub_00130B30
 * Original: 0x00130B30 - 0x00130B36 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00130B30(void)
{

loc_00130B30: ;
    eax = 0x639D94;
    esp += 4; return; /* ret */

}

/**
 * sub_00130B70
 * Original: 0x00130B70 - 0x00130B7D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00130B70(void)
{

loc_00130B70: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x94) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00130B80
 * Original: 0x00130B80 - 0x00130B87 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00130B80(void)
{

loc_00130B80: ;
    eax = ecx + 0x11C;
    esp += 4; return; /* ret */

}

/**
 * sub_00130B90
 * Original: 0x00130B90 - 0x00130B97 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00130B90(void)
{

loc_00130B90: ;
    eax = ecx + 0x23C;
    esp += 4; return; /* ret */

}

/**
 * sub_00130BA0
 * Original: 0x00130BA0 - 0x00130BAD (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00130BA0(void)
{

loc_00130BA0: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x4D0) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00130BB0
 * Original: 0x00130BB0 - 0x00130BBD (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00130BB0(void)
{

loc_00130BB0: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x4D4) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00130BC0
 * Original: 0x00130BC0 - 0x00130BCD (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00130BC0(void)
{

loc_00130BC0: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x4C4) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00130BD0
 * Original: 0x00130BD0 - 0x00130BDD (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00130BD0(void)
{

loc_00130BD0: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x4CC) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00130BE0
 * Original: 0x00130BE0 - 0x00130BE9 (9 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00130BE0(void)
{

loc_00130BE0: ;
    eax = MEM32(esp + 4);
    MEM32(ecx) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00130BF0
 * Original: 0x00130BF0 - 0x00130C60 (112 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00130BF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00130BF0: ;
    SET_LO8(eax, MEM8(esp + 0x14));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    SET_LO8(eax, MEM8(esp + 0x10));
    if (CMP_EQ(_fa, _fb)) goto loc_00130C2E; /* je: equal / zero */

loc_00130BFC: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00130C0F; /* je: equal / zero */

loc_00130C00: ;
    eax = MEM32(esp + 4);
    MEM32(eax + 0x4C4) = 0xC01;
    esp += 4; return; /* ret */

loc_00130C0F: ;
    SET_LO8(ecx, MEM8(esp + 0xC));
    edx = MEM32(esp + 4);
    _cf = (int)((LO8(ecx)) != 0);
    SET_LO8(ecx, (uint32_t)(-(int32_t)LO8(ecx)));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0xFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x903) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0x903)) >> 32) & 1);
    ecx = ecx + 0x903;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx + 0x4C4) = ecx;
    esp += 4; return; /* ret */

loc_00130C2E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00130C41; /* je: equal / zero */

loc_00130C32: ;
    eax = MEM32(esp + 4);
    MEM32(eax + 0x4C4) = 0x404;
    esp += 4; return; /* ret */

loc_00130C41: ;
    SET_LO8(ecx, MEM8(esp + 0xC));
    edx = MEM32(esp + 4);
    _cf = (int)((LO8(ecx)) != 0);
    SET_LO8(ecx, (uint32_t)(-(int32_t)LO8(ecx)));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0xFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x106) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0x106)) >> 32) & 1);
    ecx = ecx + 0x106;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx + 0x4C4) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00130C0E
 * Original: 0x00130C0E - 0x00130C60 (82 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00130C0E(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00130C0E: ;
    esp += 4; return; /* ret */

    eax = MEM32(esp + 4);
    MEM32(eax + 0x4C4) = 0x404;
    esp += 4; return; /* ret */

loc_00130C41: ;
    SET_LO8(ecx, MEM8(esp + 0xC));
    edx = MEM32(esp + 4);
    _cf = (int)((LO8(ecx)) != 0);
    SET_LO8(ecx, (uint32_t)(-(int32_t)LO8(ecx)));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0xFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x106) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0x106)) >> 32) & 1);
    ecx = ecx + 0x106;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx + 0x4C4) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00130D01
 * Original: 0x00130D01 - 0x00130DA4 (163 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00130D01(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00130D01: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    eax = esi + -1;
    if (CMP_EQ(_fa, _fb)) goto loc_00130D58; /* je: equal / zero */

loc_00130D08: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00130DA2; /* ja: above (unsigned >) */

loc_00130D11: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x130DB4); /* switch: 8 entries, 8 targets */
    if (_jt == 0x00130D18u) goto loc_00130D18;
    if (_jt == 0x00130D28u) goto loc_00130D28;
    if (_jt == 0x00130D38u) goto loc_00130D38;
    if (_jt == 0x00130D48u) goto loc_00130D48;
    if (_jt == 0x00130D64u) goto loc_00130D64;
    if (_jt == 0x00130D74u) goto loc_00130D74;
    if (_jt == 0x00130D84u) goto loc_00130D84;
    if (_jt == 0x00130D94u) goto loc_00130D94;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00130D18: ;
    ecx = MEM32(esp + 8);
    MEM32(ecx + 0x4C4) = 0x1208;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00130D28: ;
    edx = MEM32(esp + 8);
    MEM32(edx + 0x4C4) = 0x120B;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00130D38: ;
    eax = MEM32(esp + 8);
    MEM32(eax + 0x4C4) = 0x120E;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00130D48: ;
    ecx = MEM32(esp + 8);
    MEM32(ecx + 0x4C4) = 0x1211;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00130D58: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00130DA2; /* ja: above (unsigned >) */

loc_00130D5D: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x130DC4); /* switch: 4 entries, 4 targets */
    if (_jt == 0x00130D64u) goto loc_00130D64;
    if (_jt == 0x00130D74u) goto loc_00130D74;
    if (_jt == 0x00130D84u) goto loc_00130D84;
    if (_jt == 0x00130D94u) goto loc_00130D94;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00130D64: ;
    edx = MEM32(esp + 8);
    MEM32(edx + 0x4C4) = 0x1107;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00130D74: ;
    eax = MEM32(esp + 8);
    MEM32(eax + 0x4C4) = 0x110A;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00130D84: ;
    ecx = MEM32(esp + 8);
    MEM32(ecx + 0x4C4) = 0x110D;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00130D94: ;
    edx = MEM32(esp + 8);
    MEM32(edx + 0x4C4) = 0x1110;

loc_00130DA2: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00130D82
 * Original: 0x00130D82 - 0x00130DA4 (34 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00130D82(void)
{

loc_00130D82: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00130ED0
 * Original: 0x00130ED0 - 0x00130F81 (177 bytes, 56 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00130ED0(void)
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

loc_00130ED0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    fp_push(MEMF(edi + 0x24)); /* fld float */
    ebx = ecx;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x4AAC60)); /* fmul dword ptr [0x4aac60] */
    PUSH32(esp, 0x00130EE7u); RECOMP_ABI_CALL(0x000EB38Cu, sub_000EB38C); /* call 0x000EB38C */

loc_00130EE7: ;
    fp_push(MEMF(edi + 0x28)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x4AC184)); /* fmul dword ptr [0x4ac184] */
    esi = eax;
    esi = esi & 0x7FF;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0x00130EFDu); RECOMP_ABI_CALL(0x000EB38Cu, sub_000EB38C); /* call 0x000EB38C */

loc_00130EFD: ;
    fp_push(MEMF(edi + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x4AAC60)); /* fmul dword ptr [0x4aac60] */
    eax = eax << 0xB;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = esi | eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esi = esi << 0xB;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, 0x00130F13u); RECOMP_ABI_CALL(0x000EB38Cu, sub_000EB38C); /* call 0x000EB38C */

loc_00130F13: ;
    ebx = MEM32(ebx + 0x30);
    eax = eax & 0x7FF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = esi | eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = ebx + -4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00130F53; /* ja: above (unsigned >) */

loc_00130F25: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x130F84); /* switch: 4 entries, 3 targets */
    if (_jt == 0x00130F2Cu) goto loc_00130F2C;
    if (_jt == 0x00130F39u) goto loc_00130F39;
    if (_jt == 0x00130F46u) goto loc_00130F46;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00130F2C: ;
    eax = MEM32(esp + 0x10);
    POP32(esp, edi);
    MEM32(eax + 6) = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_00130F39: ;
    ecx = MEM32(esp + 0x10);
    POP32(esp, edi);
    MEM32(ecx + 6) = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_00130F46: ;
    edx = MEM32(esp + 0x10);
    POP32(esp, edi);
    MEM32(edx + 6) = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_00130F53: ;
    PUSH32(esp, 0x149);
    PUSH32(esp, 0x4AC360);
    PUSH32(esp, 0x4AC2C4);
    PUSH32(esp, 0x497CF0);
    PUSH32(esp, 0x4AC308);
    MEM8(0x50FF48) = 0;
    PUSH32(esp, 0x00130F78u); RECOMP_ABI_CALL(0x0014E700u, sub_0014E700); /* call 0x0014E700 */

loc_00130F78: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001312B0
 * Original: 0x001312B0 - 0x0013151C (620 bytes, 203 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001312B0(void)
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

loc_001312B0: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x18));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    eax = MEM32(esi + 0x14);
    if (CMP_EQ(_fa, _fb)) goto loc_001312D2; /* je: equal / zero */

loc_001312C2: ;
    ecx = MEM32(eax + 8);
    edx = MEM32(eax + 4);
    eax = edx + ecx * 2;
    eax = eax | 0x80000000u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_001312D5;

loc_001312D2: ;
    eax = MEM32(eax + 4);

loc_001312D5: ;
    ecx = MEM32(esi + 0x10);
    ecx = MEM32(ecx + 0x14);
    PUSH32(esp, 0x16);
    PUSH32(esp, eax);
    PUSH32(esp, 0x205);
    PUSH32(esp, 0x001312E8u); RECOMP_ABI_CALL(0x001430E0u, sub_001430E0); /* call 0x001430E0 */

loc_001312E8: ;
    eax = MEM32(esi + 0x10);
    ecx = MEM32(eax + 0x14);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, 0x001312F8u); RECOMP_ABI_CALL(0x00142DE0u, sub_00142DE0); /* call 0x00142DE0 */

loc_001312F8: ;
    ecx = MEM32(esi + 0x10);
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x00131304u); RECOMP_ABI_CALL(0x0013B6D0u, sub_0013B6D0); /* call 0x0013B6D0 */

loc_00131304: ;
    ecx = MEM32(esi + 0x10);
    MEM8(ecx + 4) = 0;
    edx = MEM32(esi + 4);
    _fa = (uint32_t)(MEM32(edx + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 0x10), ebp (32-bit) */
    MEM32(esp + 0x10) = ebp;
    if (CMP_LE(_fas, _fbs)) goto loc_0013150D; /* jle: less or equal (signed <=) */

loc_0013131B: ;
    PUSH32(esp, edi);
    /* nop */

loc_00131320: ;
    eax = MEM32(esi + 4);
    ecx = MEM32(eax + 8);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00131335u); RECOMP_ABI_CALL(0x001EFE80u, sub_001EFE80); /* call 0x001EFE80 */

loc_00131335: ;
    ecx = MEM32(esi + 0x14);
    edi = eax;
    edx = MEM32(edi + 0x38);
    eax = MEM32(ecx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001314F5; /* jne: not equal / not zero */

loc_0013134A: ;
    SET_LO8(eax, MEM8(esi + 0x18));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00131390; /* je: equal / zero */

loc_00131351: ;
    _fa = (uint32_t)(MEM8(edi + 0x34)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi + 0x34), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00131390; /* je: equal / zero */

loc_00131357: ;
    eax = MEM32(esp + 0x10);
    ecx = eax + -22;
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
    SET_LO16(ecx, MEM16(ecx + 0x14));
    MEM16(eax + 0x14) = LO16(ecx);
    ecx = MEM32(esp + 0x10);
    _fb = (uint32_t)(0x16) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x16;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(ebx, 1);
    MEM32(esp + 0x10) = ecx;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00131390: ;
    _fa = (uint32_t)(MEM8(edi + 0x90)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi + 0x90), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001313A6; /* je: equal / zero */

loc_00131399: ;
    edx = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x001313A6u); RECOMP_ABI_CALL(0x00130ED0u, sub_00130ED0); /* call 0x00130ED0 */

loc_001313A6: ;
    _fa = (uint32_t)(MEM8(edi + 0x90)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi + 0x90), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001313BC; /* je: equal / zero */

loc_001313AF: ;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001313BCu); RECOMP_ABI_CALL(0x00130DE0u, sub_00130DE0); /* call 0x00130DE0 */

loc_001313BC: ;
    ecx = MEM32(edi + 4);
    edx = MEM32(edi + 8);
    eax = MEM32(edi + 0xC);
    MEM32(esp + 0x20) = ecx;
    fp_push(MEMF(esp + 0x20)); /* fld float */
    MEM32(esp + 0x1C) = edx;
    MEM32(esp + 0x18) = eax;
    PUSH32(esp, 0x001313DAu); RECOMP_ABI_CALL(0x000EB38Cu, sub_000EB38C); /* call 0x000EB38C */

loc_001313DA: ;
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    ecx = MEM32(esp + 0x10);
    MEM16(ecx) = LO16(eax);
    PUSH32(esp, 0x001313EAu); RECOMP_ABI_CALL(0x000EB38Cu, sub_000EB38C); /* call 0x000EB38C */

loc_001313EA: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    edx = MEM32(esp + 0x10);
    MEM16(edx + 2) = LO16(eax);
    PUSH32(esp, 0x001313FBu); RECOMP_ABI_CALL(0x000EB38Cu, sub_000EB38C); /* call 0x000EB38C */

loc_001313FB: ;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esp + 0x18);
    MEM16(ecx + 4) = LO16(eax);
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x10);
    PUSH32(esp, 0x0013141Au); RECOMP_ABI_CALL(0x0013B700u, sub_0013B700); /* call 0x0013B700 */

loc_0013141A: ;
    _fa = (uint32_t)(MEM8(edi + 0x90)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi + 0x90), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00131430; /* je: equal / zero */

loc_00131423: ;
    edx = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x00131430u); RECOMP_ABI_CALL(0x00130FA0u, sub_00130FA0); /* call 0x00130FA0 */

loc_00131430: ;
    SET_LO8(eax, MEM8(esi + 0x1B));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00131458; /* je: equal / zero */

loc_00131437: ;
    eax = MEM32(esi + 0x1C);
    ecx = MEM32(esi + 0x28);
    eax = eax << 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax | ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    MEM32(ecx + ebp * 4) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00131491; /* je: equal / zero */

loc_00131449: ;
    edx = MEM32(esi + 0x24);
    MEM8(edx + ebp + -1) = 1;
    eax = MEM32(esi + 0x24);
    MEM8(eax + ebp) = 1;

loc_00131458: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00131491; /* je: equal / zero */

loc_0013145C: ;
    eax = MEM32(esp + 0x10);
    _fb = (uint32_t)(0x16) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x16;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x10) = eax;
    ecx = eax + -22;
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
    SET_LO16(ecx, MEM16(ecx + 0x14));
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM16(eax + 0x14) = LO16(ecx);
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_00131491: ;
    SET_LO8(eax, MEM8(esi + 0x19));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001314B1; /* je: equal / zero */

loc_00131498: ;
    edx = MEM32(esi + 0x2C);
    eax = MEM32(esp + 0x14);
    MEM16(edx + eax * 4 + 2) = LO16(ebp);
    ecx = MEM32(esi + 0x14);
    edx = MEM32(esi + 0x2C);
    SET_LO16(ecx, MEM16(ecx));
    MEM16(edx + eax * 4) = LO16(ecx);

loc_001314B1: ;
    edi = MEM32(esp + 0x10);
    edx = MEM32(esi + 0x10);
    _fb = (uint32_t)(0x16) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x16;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x10) = edi;
    eax = MEM32(edx + 0x14);
    edx = MEM32(eax + 0x10);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, edx (32-bit) */
    SET_LO8(eax, (CMP_LE(_fas, _fbs)) ? 1 : 0); /* setle */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM8(0x50FF48) = LO8(eax);
    if (CMP_NE(_fa, _fb)) goto loc_001314F5; /* jne: not equal / not zero */

loc_001314D4: ;
    PUSH32(esp, 0x2B8);
    PUSH32(esp, 0x4AC560);
    PUSH32(esp, 0x4AC2C4);
    PUSH32(esp, 0x4AC518);
    PUSH32(esp, 0x49657C);
    PUSH32(esp, 0x001314F2u); RECOMP_ABI_CALL(0x0014E700u, sub_0014E700); /* call 0x0014E700 */

loc_001314F2: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001314F5: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esi + 4);
    edx = MEM32(ecx + 0x10);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    MEM32(esp + 0x14) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_00131320; /* jl: less (signed <) */

loc_0013150C: ;
    POP32(esp, edi);

loc_0013150D: ;
    ecx = MEM32(esi + 0x10);
    PUSH32(esp, 0x00131515u); RECOMP_ABI_CALL(0x0013B7B0u, sub_0013B7B0); /* call 0x0013B7B0 */

loc_00131515: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
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
 * sub_00131307
 * Original: 0x00131307 - 0x0013151C (533 bytes, 172 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00131307(void)
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

loc_00131307: ;
    MEM8(ecx + 4) = 0;
    edx = MEM32(esi + 4);
    _fa = (uint32_t)(MEM32(edx + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 0x10), ebp (32-bit) */
    MEM32(esp + 0x10) = ebp;
    if (CMP_LE(_fas, _fbs)) goto loc_0013150D; /* jle: less or equal (signed <=) */

loc_0013131B: ;
    PUSH32(esp, edi);
    /* nop */

loc_00131320: ;
    eax = MEM32(esi + 4);
    ecx = MEM32(eax + 8);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00131335u); RECOMP_ABI_CALL(0x001EFE80u, sub_001EFE80); /* call 0x001EFE80 */

loc_00131335: ;
    ecx = MEM32(esi + 0x14);
    edi = eax;
    edx = MEM32(edi + 0x38);
    eax = MEM32(ecx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001314F5; /* jne: not equal / not zero */

loc_0013134A: ;
    SET_LO8(eax, MEM8(esi + 0x18));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00131390; /* je: equal / zero */

loc_00131351: ;
    _fa = (uint32_t)(MEM8(edi + 0x34)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi + 0x34), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00131390; /* je: equal / zero */

loc_00131357: ;
    eax = MEM32(esp + 0x10);
    ecx = eax + -22;
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
    SET_LO16(ecx, MEM16(ecx + 0x14));
    MEM16(eax + 0x14) = LO16(ecx);
    ecx = MEM32(esp + 0x10);
    _fb = (uint32_t)(0x16) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x16;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(ebx, 1);
    MEM32(esp + 0x10) = ecx;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00131390: ;
    _fa = (uint32_t)(MEM8(edi + 0x90)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi + 0x90), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001313A6; /* je: equal / zero */

loc_00131399: ;
    edx = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x001313A6u); RECOMP_ABI_CALL(0x00130ED0u, sub_00130ED0); /* call 0x00130ED0 */

loc_001313A6: ;
    _fa = (uint32_t)(MEM8(edi + 0x90)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi + 0x90), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001313BC; /* je: equal / zero */

loc_001313AF: ;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001313BCu); RECOMP_ABI_CALL(0x00130DE0u, sub_00130DE0); /* call 0x00130DE0 */

loc_001313BC: ;
    ecx = MEM32(edi + 4);
    edx = MEM32(edi + 8);
    eax = MEM32(edi + 0xC);
    MEM32(esp + 0x20) = ecx;
    fp_push(MEMF(esp + 0x20)); /* fld float */
    MEM32(esp + 0x1C) = edx;
    MEM32(esp + 0x18) = eax;
    PUSH32(esp, 0x001313DAu); RECOMP_ABI_CALL(0x000EB38Cu, sub_000EB38C); /* call 0x000EB38C */

loc_001313DA: ;
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    ecx = MEM32(esp + 0x10);
    MEM16(ecx) = LO16(eax);
    PUSH32(esp, 0x001313EAu); RECOMP_ABI_CALL(0x000EB38Cu, sub_000EB38C); /* call 0x000EB38C */

loc_001313EA: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    edx = MEM32(esp + 0x10);
    MEM16(edx + 2) = LO16(eax);
    PUSH32(esp, 0x001313FBu); RECOMP_ABI_CALL(0x000EB38Cu, sub_000EB38C); /* call 0x000EB38C */

loc_001313FB: ;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esp + 0x18);
    MEM16(ecx + 4) = LO16(eax);
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x10);
    PUSH32(esp, 0x0013141Au); RECOMP_ABI_CALL(0x0013B700u, sub_0013B700); /* call 0x0013B700 */

loc_0013141A: ;
    _fa = (uint32_t)(MEM8(edi + 0x90)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi + 0x90), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00131430; /* je: equal / zero */

loc_00131423: ;
    edx = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x00131430u); RECOMP_ABI_CALL(0x00130FA0u, sub_00130FA0); /* call 0x00130FA0 */

loc_00131430: ;
    SET_LO8(eax, MEM8(esi + 0x1B));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00131458; /* je: equal / zero */

loc_00131437: ;
    eax = MEM32(esi + 0x1C);
    ecx = MEM32(esi + 0x28);
    eax = eax << 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax | ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    MEM32(ecx + ebp * 4) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00131491; /* je: equal / zero */

loc_00131449: ;
    edx = MEM32(esi + 0x24);
    MEM8(edx + ebp + -1) = 1;
    eax = MEM32(esi + 0x24);
    MEM8(eax + ebp) = 1;

loc_00131458: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00131491; /* je: equal / zero */

loc_0013145C: ;
    eax = MEM32(esp + 0x10);
    _fb = (uint32_t)(0x16) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x16;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x10) = eax;
    ecx = eax + -22;
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
    SET_LO16(ecx, MEM16(ecx + 0x14));
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM16(eax + 0x14) = LO16(ecx);
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_00131491: ;
    SET_LO8(eax, MEM8(esi + 0x19));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001314B1; /* je: equal / zero */

loc_00131498: ;
    edx = MEM32(esi + 0x2C);
    eax = MEM32(esp + 0x14);
    MEM16(edx + eax * 4 + 2) = LO16(ebp);
    ecx = MEM32(esi + 0x14);
    edx = MEM32(esi + 0x2C);
    SET_LO16(ecx, MEM16(ecx));
    MEM16(edx + eax * 4) = LO16(ecx);

loc_001314B1: ;
    edi = MEM32(esp + 0x10);
    edx = MEM32(esi + 0x10);
    _fb = (uint32_t)(0x16) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x16;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x10) = edi;
    eax = MEM32(edx + 0x14);
    edx = MEM32(eax + 0x10);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, edx (32-bit) */
    SET_LO8(eax, (CMP_LE(_fas, _fbs)) ? 1 : 0); /* setle */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM8(0x50FF48) = LO8(eax);
    if (CMP_NE(_fa, _fb)) goto loc_001314F5; /* jne: not equal / not zero */

loc_001314D4: ;
    PUSH32(esp, 0x2B8);
    PUSH32(esp, 0x4AC560);
    PUSH32(esp, 0x4AC2C4);
    PUSH32(esp, 0x4AC518);
    PUSH32(esp, 0x49657C);
    PUSH32(esp, 0x001314F2u); RECOMP_ABI_CALL(0x0014E700u, sub_0014E700); /* call 0x0014E700 */

loc_001314F2: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001314F5: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esi + 4);
    edx = MEM32(ecx + 0x10);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    MEM32(esp + 0x14) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_00131320; /* jl: less (signed <) */

loc_0013150C: ;
    POP32(esp, edi);

loc_0013150D: ;
    ecx = MEM32(esi + 0x10);
    PUSH32(esp, 0x00131515u); RECOMP_ABI_CALL(0x0013B7B0u, sub_0013B7B0); /* call 0x0013B7B0 */

loc_00131515: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
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
 * sub_00133A46
 * Original: 0x00133A46 - 0x00133A60 (26 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00133A46(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00133A46: ;
    edi = edi;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    _fa = (uint32_t)(MEM8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebx), LO8(edx) (8-bit) */
    _fb = (uint32_t)(HI8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(eax + -889187528) = MEM8(eax + -889187528) + HI8(ebx);
    _fa = (uint32_t)(MEM8(eax + -889187528)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebx), LO8(edx) (8-bit) */
    _fb = (uint32_t)(LO8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_HI8(edx, HI8(edx) + LO8(ebx));
    _fa = (uint32_t)(HI8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebx), LO8(edx) (8-bit) */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_HI8(eax, HI8(eax) + LO8(ecx));
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00133B20
 * Original: 0x00133B20 - 0x00133B28 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00133B20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00133B20: ;
    _fa = (uint32_t)(MEM32(ecx + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x14), 0xFFFFFFFFu (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    esp += 4; return; /* ret */

}

/**
 * sub_00133B30
 * Original: 0x00133B30 - 0x00133B39 (9 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00133B30(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00133B30: ;
    SET_LO8(eax, MEM8(ecx + 8));
    SET_LO8(eax, LO8(eax) >> 5);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    SET_LO8(eax, LO8(eax) & 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}

/**
 * sub_00133B40
 * Original: 0x00133B40 - 0x00133B48 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00133B40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00133B40: ;
    ecx = MEM32(ecx + 0xC);
    g_seh_ebp = ebp; sub_00148DB0(); return; /* tail jmp 0x00148DB0 */

}

/**
 * sub_00133B50
 * Original: 0x00133B50 - 0x00133B57 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00133B50(void)
{

loc_00133B50: ;
    eax = MEM32(ecx + 0x143A4);
    esp += 4; return; /* ret */

}

/**
 * sub_00133B60
 * Original: 0x00133B60 - 0x00133BBB (91 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00133B60(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00133B60: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x14);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = edx | 0xFFFFFFFFu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 4) = edx;
    MEM32(eax + 0xC) = edx;
    MEM32(eax + 0x10) = edx;
    MEM32(eax + 0x14) = edx;
    MEM32(eax + 0x18) = edx;
    PUSH32(esp, esi);
    esi = ecx;
    edx = eax + 0x2C;
    MEM32(edx) = esi;
    MEM32(edx + 4) = esi;
    MEM32(edx + 8) = esi;
    esi = MEM32(esp + 0x10);
    MEM32(edx + 0xC) = esi;
    MEM32(eax) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0x1C) = ecx;
    MEM32(eax + 0x20) = ecx;
    MEM32(eax + 0x24) = ecx;
    MEM32(eax + 0x28) = ecx;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = ecx;
    MEM32(eax + 0x3C) = ecx;
    MEM32(eax + 0x40) = ecx;
    MEM8(eax + 0x44) = LO8(ecx);
    POP32(esp, esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00133BC0
 * Original: 0x00133BC0 - 0x00133BE8 (40 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00133BC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00133BC0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi + 0x4C) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_00133BE4; /* je: equal / zero */

loc_00133BD2: ;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x40;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esp + 0xC;
    PUSH32(esp, 0x00133BDFu); RECOMP_ABI_CALL(0x001059E0u, sub_001059E0); /* call 0x001059E0 */

loc_00133BDF: ;
    eax = MEM32(eax);
    MEM32(esi + 0x4C) = eax;

loc_00133BE4: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00133CB0
 * Original: 0x00133CB0 - 0x00133CCD (29 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00133CB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00133CB0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00133CC6; /* je: equal / zero */

loc_00133CB8: ;
    edx = MEM32(eax + 0x24);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00133CC6; /* je: equal / zero */

loc_00133CBF: ;
    MEM32(ecx + 8) = MEM32(ecx + 8) | 0x20;
    _fa = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 8; return; /* ret 4 */

loc_00133CC6: ;
    MEM32(ecx + 8) = MEM32(ecx + 8) & 0xFFFFFFDFu;
    _fa = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00133E60
 * Original: 0x00133E60 - 0x00133E96 (54 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00133E60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00133E60: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(eax);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00133E8C; /* jle: less or equal (signed <=) */

loc_00133E71: ;
    edx = MEM32(eax + 8);
    esi = MEM32(eax + 0xC);

loc_00133E77: ;
    eax = edx + ecx;
    eax = MEM32(esi + eax * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00133E87; /* je: equal / zero */

loc_00133E81: ;
    _fa = (uint32_t)(MEM32(eax + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x14), 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00133E91; /* jne: not equal / not zero */

loc_00133E87: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00133E77; /* jl: less (signed <) */

loc_00133E8C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_00133E91: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_00133EA0
 * Original: 0x00133EA0 - 0x00133ED6 (54 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00133EA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00133EA0: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(eax);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00133ECC; /* jle: less or equal (signed <=) */

loc_00133EB1: ;
    edx = MEM32(eax + 8);
    esi = MEM32(eax + 0xC);

loc_00133EB7: ;
    eax = edx + ecx;
    eax = MEM32(esi + eax * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00133EC7; /* je: equal / zero */

loc_00133EC1: ;
    _fa = (uint32_t)(MEM8(eax + 8)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 8), 0x20 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00133ED1; /* jne: not equal / not zero */

loc_00133EC7: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00133EB7; /* jl: less (signed <) */

loc_00133ECC: ;
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00133ED1: ;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001340E0
 * Original: 0x001340E0 - 0x00134125 (69 bytes, 22 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001340E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001340E0: ;
    eax = MEM32(ecx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001340ED; /* jne: not equal / not zero */

loc_001340E7: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 8; return; /* ret 4 */

loc_001340ED: ;
    edx = MEM32(eax + 0x18);
    MEM32(ecx + 8) = edx;
    edx = MEM32(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x103C928) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x103C928 (32-bit) */
    MEM32(eax + 0x18) = edx;
    if (CMP_NE(_fa, _fb)) goto loc_00134103; /* jne: not equal / not zero */

loc_00134100: ;
    MEM32(eax + 0x18) = edx;

loc_00134103: ;
    edx = MEM32(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013410C; /* je: equal / zero */

loc_00134109: ;
    MEM32(edx + 0x14) = eax;

loc_0013410C: ;
    MEM32(ecx) = eax;
    ecx = MEM32(esp + 4);
    MEM32(eax + 0x14) = 0;
    MEM32(eax + 0x10) = 0;
    MEM32(eax) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00134430
 * Original: 0x00134430 - 0x00134437 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00134430(void)
{

loc_00134430: ;
    eax = MEM32(ecx + 0xC8);
    esp += 4; return; /* ret */

}

/**
 * sub_00134440
 * Original: 0x00134440 - 0x00134447 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00134440(void)
{

loc_00134440: ;
    eax = MEM32(ecx + 0x4D0);
    esp += 4; return; /* ret */

}

/**
 * sub_00134450
 * Original: 0x00134450 - 0x00134457 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00134450(void)
{

loc_00134450: ;
    eax = MEM32(ecx + 0x4D4);
    esp += 4; return; /* ret */

}

/**
 * sub_00134460
 * Original: 0x00134460 - 0x001344AB (75 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00134460(void)
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

loc_00134460: ;
    ecx = MEM32(esp + 4);
    fp_push(MEMF(ecx)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x4A08A4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x4a08a4] */
    fp_push(MEMF(ecx)); /* fld float */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00134484; /* jne: not equal / not zero */

loc_00134475: ;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x49E43C)); /* fsub dword ptr [0x49e43c] */
    eax = MEM32(esp + 8);
    MEMF(ecx) = (float)fp_top(); /* fst */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

loc_00134484: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x4A08A0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x4a08a0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001344A2; /* jp: parity */

loc_00134491: ;
    fp_push(MEMF(ecx)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x49E43C)); /* fadd dword ptr [0x49e43c] */
    MEMF(ecx) = (float)fp_top(); /* fst */
    ecx = MEM32(esp + 8);
    MEMF(ecx) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

loc_001344A2: ;
    edx = MEM32(ecx);
    eax = MEM32(esp + 8);
    MEM32(eax) = edx;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001344F0
 * Original: 0x001344F0 - 0x001344F1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001344F0(void)
{

loc_001344F0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00134500
 * Original: 0x00134500 - 0x0013452A (42 bytes, 18 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00134500(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00134500: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = esi;

loc_00134508: ;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013451D; /* je: equal / zero */

loc_0013450D: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x40 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00134508; /* jl: less (signed <) */

loc_00134516: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0013451D: ;
    MEM32(ecx) = MEM32(ecx) + 1;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = MEM32(esp + 8);
    MEM32(esi + eax * 4) = ecx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00134A40
 * Original: 0x00134A40 - 0x00134AF9 (185 bytes, 62 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00134A40(void)
{

loc_00134A40: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    edx = MEM32(ecx + 0x1C);
    MEM32(eax) = edx;
    edx = MEM32(ecx + 0x20);
    MEM32(eax + 4) = edx;
    edx = MEM32(ecx + 0x24);
    MEM32(eax + 8) = edx;
    PUSH32(esp, esi);
    edx = 0x3F800000;
    MEM32(eax + 0xC) = edx;
    esi = MEM32(ecx + 0x1C);
    MEM32(eax + 0x10) = esi;
    esi = MEM32(ecx + 0x20);
    MEM32(eax + 0x14) = esi;
    esi = MEM32(ecx + 0x30);
    MEM32(eax + 0x18) = esi;
    MEM32(eax + 0x1C) = edx;
    esi = MEM32(ecx + 0x1C);
    MEM32(eax + 0x20) = esi;
    esi = MEM32(ecx + 0x2C);
    MEM32(eax + 0x24) = esi;
    esi = MEM32(ecx + 0x30);
    MEM32(eax + 0x28) = esi;
    MEM32(eax + 0x2C) = edx;
    esi = MEM32(ecx + 0x1C);
    MEM32(eax + 0x30) = esi;
    esi = MEM32(ecx + 0x2C);
    MEM32(eax + 0x34) = esi;
    esi = MEM32(ecx + 0x24);
    MEM32(eax + 0x38) = esi;
    MEM32(eax + 0x3C) = edx;
    esi = MEM32(ecx + 0x28);
    MEM32(eax + 0x40) = esi;
    esi = MEM32(ecx + 0x20);
    MEM32(eax + 0x44) = esi;
    esi = MEM32(ecx + 0x24);
    MEM32(eax + 0x48) = esi;
    MEM32(eax + 0x4C) = edx;
    esi = MEM32(ecx + 0x28);
    MEM32(eax + 0x50) = esi;
    esi = MEM32(ecx + 0x20);
    MEM32(eax + 0x54) = esi;
    esi = MEM32(ecx + 0x30);
    MEM32(eax + 0x58) = esi;
    MEM32(eax + 0x5C) = edx;
    esi = MEM32(ecx + 0x28);
    MEM32(eax + 0x60) = esi;
    esi = MEM32(ecx + 0x2C);
    MEM32(eax + 0x64) = esi;
    esi = MEM32(ecx + 0x24);
    MEM32(eax + 0x68) = esi;
    MEM32(eax + 0x6C) = edx;
    esi = MEM32(ecx + 0x28);
    MEM32(eax + 0x70) = esi;
    esi = MEM32(ecx + 0x2C);
    MEM32(eax + 0x74) = esi;
    ecx = MEM32(ecx + 0x30);
    MEM32(eax + 0x78) = ecx;
    MEM32(eax + 0x7C) = edx;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00134B00
 * Original: 0x00134B00 - 0x00134B17 (23 bytes, 7 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00134B00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00134B00: ;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00134B14; /* je: equal / zero */

loc_00134B08: ;
    ecx = MEM32(eax);
    edx = MEM32(esp + 4);
    MEM32(edx + 0x1E0) = ecx;

loc_00134B14: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00134B20
 * Original: 0x00134B20 - 0x00134B27 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00134B20(void)
{

loc_00134B20: ;
    MEM32(ecx) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_00135BE0
 * Original: 0x00135BE0 - 0x00135BEF (15 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00135BE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00135BE0: ;
    eax = MEM32(0x4A8660);
    MEM32(0x50D86C) = eax;
    g_seh_ebp = ebp; sub_00134570(); return; /* tail jmp 0x00134570 */

}

/**
 * sub_00135C80
 * Original: 0x00135C80 - 0x00135C84 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00135C80(void)
{

loc_00135C80: ;
    eax = MEM32(ecx + 4);
    esp += 4; return; /* ret */

}

/**
 * sub_00135C90
 * Original: 0x00135C90 - 0x00135C93 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00135C90(void)
{

loc_00135C90: ;
    eax = MEM32(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00135CA0
 * Original: 0x00135CA0 - 0x00135CA4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00135CA0(void)
{

loc_00135CA0: ;
    SET_LO8(eax, MEM8(ecx + 0x48));
    esp += 4; return; /* ret */

}

/**
 * sub_00135CB0
 * Original: 0x00135CB0 - 0x00135CBA (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00135CB0(void)
{

loc_00135CB0: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x4C) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00135CC0
 * Original: 0x00135CC0 - 0x00135CC4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00135CC0(void)
{

loc_00135CC0: ;
    eax = MEM32(ecx + 0x4C);
    esp += 4; return; /* ret */

}

/**
 * sub_00135CD0
 * Original: 0x00135CD0 - 0x00135CD4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00135CD0(void)
{

loc_00135CD0: ;
    eax = MEM32(ecx + 0x3C);
    esp += 4; return; /* ret */

}

/**
 * sub_00135CE0
 * Original: 0x00135CE0 - 0x00135CE4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00135CE0(void)
{

loc_00135CE0: ;
    eax = MEM32(ecx + 0x44);
    esp += 4; return; /* ret */

}

/**
 * sub_00135CF0
 * Original: 0x00135CF0 - 0x00135CFA (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00135CF0(void)
{

loc_00135CF0: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x44) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00135D00
 * Original: 0x00135D00 - 0x00135D09 (9 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00135D00(void)
{

loc_00135D00: ;
    eax = MEM32(esp + 4);
    MEM32(ecx) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00135D10
 * Original: 0x00135D10 - 0x00135D13 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00135D10(void)
{

loc_00135D10: ;
    eax = MEM32(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00135D20
 * Original: 0x00135D20 - 0x00135D2A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00135D20(void)
{

loc_00135D20: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 4) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00135D30
 * Original: 0x00135D30 - 0x00135D34 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00135D30(void)
{

loc_00135D30: ;
    eax = MEM32(ecx + 4);
    esp += 4; return; /* ret */

}

/**
 * sub_00135D40
 * Original: 0x00135D40 - 0x00135D4A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00135D40(void)
{

loc_00135D40: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 8) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00135D50
 * Original: 0x00135D50 - 0x00135D54 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00135D50(void)
{

loc_00135D50: ;
    eax = MEM32(ecx + 8);
    esp += 4; return; /* ret */

}

/**
 * sub_00135D60
 * Original: 0x00135D60 - 0x00135D6A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00135D60(void)
{

loc_00135D60: ;
    SET_LO8(eax, MEM8(esp + 4));
    MEM8(ecx + 0x5C) = LO8(eax);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00135D70
 * Original: 0x00135D70 - 0x00135D74 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00135D70(void)
{

loc_00135D70: ;
    SET_LO8(eax, MEM8(ecx + 0x5C));
    esp += 4; return; /* ret */

}

/**
 * sub_00135D80
 * Original: 0x00135D80 - 0x00135D8A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00135D80(void)
{

loc_00135D80: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x60) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00135D90
 * Original: 0x00135D90 - 0x00135D9A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00135D90(void)
{

loc_00135D90: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x64) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00135DA0
 * Original: 0x00135DA0 - 0x00135DAA (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00135DA0(void)
{

loc_00135DA0: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x6C) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00135DB0
 * Original: 0x00135DB0 - 0x00135DBA (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00135DB0(void)
{

loc_00135DB0: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x70) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00135DC0
 * Original: 0x00135DC0 - 0x00135DCA (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00135DC0(void)
{

loc_00135DC0: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x68) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00135DD0
 * Original: 0x00135DD0 - 0x00135DDA (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00135DD0(void)
{

loc_00135DD0: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x74) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00135DE0
 * Original: 0x00135DE0 - 0x00135DE4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00135DE0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00135DE0: ;
    fp_push(MEMF(ecx + 0x60)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00135DF0
 * Original: 0x00135DF0 - 0x00135DF4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00135DF0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00135DF0: ;
    fp_push(MEMF(ecx + 0x64)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00135E00
 * Original: 0x00135E00 - 0x00135E04 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00135E00(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00135E00: ;
    fp_push(MEMF(ecx + 0x6C)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00135E10
 * Original: 0x00135E10 - 0x00135E14 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00135E10(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00135E10: ;
    fp_push(MEMF(ecx + 0x70)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00135E20
 * Original: 0x00135E20 - 0x00135E24 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00135E20(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00135E20: ;
    fp_push(MEMF(ecx + 0x68)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00135E30
 * Original: 0x00135E30 - 0x00135E34 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00135E30(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00135E30: ;
    fp_push(MEMF(ecx + 0x74)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00135E40
 * Original: 0x00135E40 - 0x00135E4A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00135E40(void)
{

loc_00135E40: ;
    SET_LO8(eax, MEM8(esp + 4));
    MEM8(ecx + 0x48) = LO8(eax);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00135E50
 * Original: 0x00135E50 - 0x00135E54 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00135E50(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00135E50: ;
    fp_push(MEMF(ecx + 0x58)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00135E60
 * Original: 0x00135E60 - 0x00135E6A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00135E60(void)
{

loc_00135E60: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x58) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00135E70
 * Original: 0x00135E70 - 0x00135E74 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00135E70(void)
{

loc_00135E70: ;
    eax = MEM32(ecx + 0xC);
    esp += 4; return; /* ret */

}

/**
 * sub_00135E80
 * Original: 0x00135E80 - 0x00135E87 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00135E80(void)
{

loc_00135E80: ;
    SET_LO8(eax, MEM8(ecx + 0xC8));
    esp += 4; return; /* ret */

}

/**
 * sub_00135E90
 * Original: 0x00135E90 - 0x00135E9D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00135E90(void)
{

loc_00135E90: ;
    SET_LO8(eax, MEM8(esp + 4));
    MEM8(ecx + 0xC8) = LO8(eax);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00135EA0
 * Original: 0x00135EA0 - 0x00135EA5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00135EA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00135EA0: ;
    g_seh_ebp = ebp; sub_0014CEF0(); return; /* tail jmp 0x0014CEF0 */

}

/**
 * sub_00135F80
 * Original: 0x00135F80 - 0x00135F88 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00135F80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00135F80: ;
    ecx = MEM32(ecx + 4);
    g_seh_ebp = ebp; sub_0014D300(); return; /* tail jmp 0x0014D300 */

}

/**
 * sub_00135F90
 * Original: 0x00135F90 - 0x00135F98 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00135F90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00135F90: ;
    ecx = MEM32(ecx + 4);
    g_seh_ebp = ebp; sub_0014D320(); return; /* tail jmp 0x0014D320 */

}

/**
 * sub_00136200
 * Original: 0x00136200 - 0x00136268 (104 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00136200(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00136200: ;
    PUSH32(esp, ebp);
    ebp = ecx;
    ecx = MEM32(ebp + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00136266; /* je: equal / zero */

loc_0013620A: ;
    eax = MEM32(ecx + 0xC);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00136265; /* jle: less or equal (signed <=) */

loc_00136214: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);

loc_00136216: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0013621Cu); RECOMP_ABI_CALL(0x0014D2D0u, sub_0014D2D0); /* call 0x0014D2D0 */

loc_0013621C: ;
    esi = eax;
    _fa = (uint32_t)(MEM8(esi + 0x48)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x48), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00136258; /* je: equal / zero */

loc_00136224: ;
    eax = MEM32(esi + 0x44);
    ecx = MEM32(ebp + 4);
    edi = MEM32(esi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00136233u); RECOMP_ABI_CALL(0x0014D2D0u, sub_0014D2D0); /* call 0x0014D2D0 */

loc_00136233: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00136258; /* je: equal / zero */

loc_00136237: ;
    _fa = (uint32_t)(MEM8(edi + 0x340)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi + 0x340), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00136258; /* je: equal / zero */

loc_00136240: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00136258; /* je: equal / zero */

loc_00136244: ;
    eax = MEM32(eax);
    ecx = MEM32(esi);
    edx = MEM32(ebp);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(edx + 0x1164);
    PUSH32(esp, 0x00136258u); RECOMP_ABI_CALL(0x0014C380u, sub_0014C380); /* call 0x0014C380 */

loc_00136258: ;
    ecx = MEM32(ebp + 4);
    eax = MEM32(ecx + 0xC);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00136216; /* jl: less (signed <) */

loc_00136263: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_00136265: ;
    POP32(esp, ebx);

loc_00136266: ;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00136270
 * Original: 0x00136270 - 0x001363BC (332 bytes, 109 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00136270(void)
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

loc_00136270: ;
    _fb = (uint32_t)(0xC0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC0;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    ecx = MEM32(eax + 0xC);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esp + 0xC) = esi;
    MEM32(esp + 8) = edi;
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x10) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_001363B3; /* jle: less or equal (signed <=) */

loc_0013629C: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    edi = edi;

loc_001362A0: ;
    ecx = MEM32(esi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001362A9u); RECOMP_ABI_CALL(0x0014D2D0u, sub_0014D2D0); /* call 0x0014D2D0 */

loc_001362A9: ;
    SET_LO8(ecx, MEM8(eax + 0x48));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013639C; /* je: equal / zero */

loc_001362B4: ;
    ecx = MEM32(eax + 0x3C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001362D2; /* je: equal / zero */

loc_001362BB: ;
    goto loc_001362C0;

    /* nop */

loc_001362C0: ;
    edx = MEM32(ecx);
    ecx = MEM32(ecx + 4);
    MEM32(esp + edi * 4 + 0x50) = edx;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001362C0; /* jne: not equal / not zero */

loc_001362CE: ;
    MEM32(esp + 0x10) = edi;

loc_001362D2: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    ebp = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_0013639C; /* jle: less or equal (signed <=) */

loc_001362DE: ;
    edi = edi;

loc_001362E0: ;
    ecx = MEM32(esi + 4);
    edi = MEM32(esp + ebx * 4 + 0x50);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x001362F0u); RECOMP_ABI_CALL(0x0014DCB0u, sub_0014DCB0); /* call 0x0014DCB0 */

loc_001362F0: ;
    PUSH32(esp, ebp);
    ecx = edi;
    esi = eax;
    PUSH32(esp, 0x001362FAu); RECOMP_ABI_CALL(0x0014D8F0u, sub_0014D8F0); /* call 0x0014D8F0 */

loc_001362FA: ;
    PUSH32(esp, edi);
    ecx = ebp;
    PUSH32(esp, 0x00136302u); RECOMP_ABI_CALL(0x0014D8F0u, sub_0014D8F0); /* call 0x0014D8F0 */

loc_00136302: ;
    eax = esp + 0x20;
    PUSH32(esp, eax);
    ecx = ebp;
    PUSH32(esp, 0x0013630Eu); RECOMP_ABI_CALL(0x0014D040u, sub_0014D040); /* call 0x0014D040 */

loc_0013630E: ;
    ecx = esp + 0x40;
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x0013631Au); RECOMP_ABI_CALL(0x0014D040u, sub_0014D040); /* call 0x0014D040 */

loc_0013631A: ;
    fp_push(MEMF(esp + 0x40)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x20)); /* fadd dword ptr [esp + 0x20] */
    edx = esp + 0x30;
    PUSH32(esp, edx);
    ecx = esi;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x496B98)); /* fmul dword ptr [0x496b98] */
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x48)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x28)); /* fadd dword ptr [esp + 0x28] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x496B98)); /* fmul dword ptr [0x496b98] */
    MEMF(esp + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x4C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x2C)); /* fadd dword ptr [esp + 0x2c] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x496B98)); /* fmul dword ptr [0x496b98] */
    MEMF(esp + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0013635Cu); RECOMP_ABI_CALL(0x0014D060u, sub_0014D060); /* call 0x0014D060 */

loc_0013635C: ;
    PUSH32(esp, esi);
    ecx = edi;
    MEM8(esi + 0x48) = 0;
    MEM32(esi + 4) = 0;
    PUSH32(esp, 0x0013636Fu); RECOMP_ABI_CALL(0x0014D890u, sub_0014D890); /* call 0x0014D890 */

loc_0013636F: ;
    PUSH32(esp, esi);
    ecx = ebp;
    PUSH32(esp, 0x00136377u); RECOMP_ABI_CALL(0x0014D890u, sub_0014D890); /* call 0x0014D890 */

loc_00136377: ;
    PUSH32(esp, ebp);
    ecx = esi;
    PUSH32(esp, 0x0013637Fu); RECOMP_ABI_CALL(0x0014D890u, sub_0014D890); /* call 0x0014D890 */

loc_0013637F: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00136387u); RECOMP_ABI_CALL(0x0014D890u, sub_0014D890); /* call 0x0014D890 */

loc_00136387: ;
    eax = MEM32(esp + 0x10);
    esi = MEM32(esp + 0x14);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    ebp = edi;
    if (CMP_L(_fas, _fbs)) goto loc_001362E0; /* jl: less (signed <) */

loc_0013639A: ;
    edi = eax;

loc_0013639C: ;
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x1C);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x18) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_001362A0; /* jl: less (signed <) */

loc_001363B1: ;
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_001363B3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0xC0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC0;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001363C0
 * Original: 0x001363C0 - 0x001364FC (316 bytes, 104 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001363C0(void)
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

loc_001363C0: ;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = ecx;
    ecx = MEM32(ebx + 4);
    eax = MEM32(ecx + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00136437; /* jle: less or equal (signed <=) */

loc_001363D4: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001363DAu); RECOMP_ABI_CALL(0x0014D2D0u, sub_0014D2D0); /* call 0x0014D2D0 */

loc_001363DA: ;
    esi = eax;
    eax = MEM32(esi);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = 0x64F368;
    PUSH32(esp, 0x001363EEu); RECOMP_ABI_CALL(0x00148F00u, sub_00148F00); /* call 0x00148F00 */

loc_001363EE: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00136428; /* jne: not equal / not zero */

loc_001363F2: ;
    MEM8(esi + 0x5C) = LO8(eax);
    edx = MEM32(esp + 0x38);
    MEM32(esi + 0x68) = edx;
    eax = MEM32(esp + 0x28);
    MEM32(esi + 0x64) = eax;
    ecx = MEM32(esp + 0x30);
    MEM32(esi + 0x6C) = ecx;
    edx = MEM32(esp + 0x24);
    MEM32(esi + 0x60) = edx;
    eax = MEM32(esp + 0x34);
    MEM32(esi + 0x74) = eax;
    ecx = MEM32(esp + 0x2C);
    MEM32(esi + 0x70) = ecx;
    edx = MEM32(esp + 0x3C);
    MEM32(esi + 0x58) = edx;
    goto loc_0013642C;

loc_00136428: ;
    MEM8(esi + 0x5C) = 0;

loc_0013642C: ;
    ecx = MEM32(ebx + 4);
    eax = MEM32(ecx + 0xC);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001363D4; /* jl: less (signed <) */

loc_00136437: ;
    ecx = MEM32(ebx + 4);
    eax = MEM32(ecx + 0xC);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001364F5; /* jle: less or equal (signed <=) */

loc_00136449: ;
    PUSH32(esp, ebp);
    ebp = 0x3F800000;
    /* nop */

loc_00136450: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00136456u); RECOMP_ABI_CALL(0x0014D2D0u, sub_0014D2D0); /* call 0x0014D2D0 */

loc_00136456: ;
    _fa = (uint32_t)(MEM8(eax + 0x48)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x48), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00136492; /* jne: not equal / not zero */

loc_0013645C: ;
    SET_LO8(ecx, MEM8(eax + 0x5C));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    esi = eax;
    if (CMP_NE(_fa, _fb)) goto loc_001364E5; /* jne: not equal / not zero */

loc_00136469: ;
    MEM32(eax + 0x68) = ebp;
    MEM32(eax + 0x6C) = 0x41200000;
    MEM32(eax + 0x60) = 0x3F000000;
    MEM32(eax + 0x64) = 0x3E99999A;
    MEM32(eax + 0x74) = 0x3F91EB85;
    MEM32(eax + 0x70) = ebp;
    MEM32(eax + 0x58) = 0;

loc_00136492: ;
    SET_LO8(ecx, MEM8(eax + 0x5C));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001364E5; /* jne: not equal / not zero */

loc_00136499: ;
    ecx = MEM32(esi + 0x64);
    fp_push(MEMF(esi + 0x6C)); /* fld float */
    edx = MEM32(esi + 0x74);
    fp_push(MEMF(esi + 0x60)); /* fld float */
    MEM32(esp + 0x10) = ecx;
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    ecx = MEM32(esi + 0x70);
    MEM32(esp + 0x14) = edx;
    edx = MEM32(esi + 0x58);
    MEM32(esp + 0x18) = ecx;
    ecx = MEM32(esi + 0x68);
    MEMF(eax + 0x6C) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0x1C) = edx;
    edx = MEM32(esp + 0x10);
    MEMF(eax + 0x60) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(eax + 0x68) = ecx;
    ecx = MEM32(esp + 0x14);
    MEM32(eax + 0x64) = edx;
    edx = MEM32(esp + 0x18);
    MEM32(eax + 0x74) = ecx;
    ecx = MEM32(esp + 0x1C);
    MEM32(eax + 0x70) = edx;
    MEM32(eax + 0x58) = ecx;

loc_001364E5: ;
    ecx = MEM32(ebx + 4);
    eax = MEM32(ecx + 0xC);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00136450; /* jl: less (signed <) */

loc_001364F4: ;
    POP32(esp, ebp);

loc_001364F5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00136500
 * Original: 0x00136500 - 0x00136599 (153 bytes, 47 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00136500(void)
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

loc_00136500: ;
    eax = MEM32(esp + 8);
    fp_push(MEMF(eax + 4)); /* fld float */
    ecx = MEM32(esp + 4);
    fp_push(MEMF(eax)); /* fld float */
    MEM32(ecx + 4) = 0;
    { fp_st1() = atan2(fp_st1(), fp_top()); fp_pop(); } /* fpatan */
    fp_top() = -fp_top(); /* fchs */
    MEMF(ecx) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_push(MEMF(eax + 8)); /* fld float */
    MEM32(ecx + 0xC) = 0x3F800000;
    { fp_st1() = atan2(fp_st1(), fp_top()); fp_pop(); } /* fpatan */
    fp_top() = -fp_top(); /* fchs */
    MEMF(ecx + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x49E2A8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x49e2a8] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00136547; /* jne: not equal / not zero */

loc_0013653D: ;
    fp_push(MEMF(ecx)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x4A08A4)); /* fsub dword ptr [0x4a08a4] */
    MEMF(ecx) = (float)fp_top(); fp_pop(); /* fstp */

loc_00136547: ;
    fp_push(MEMF(ecx)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x4ACA18)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x4aca18] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00136560; /* jp: parity */

loc_00136556: ;
    fp_push(MEMF(ecx)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x4A08A4)); /* fadd dword ptr [0x4a08a4] */
    MEMF(ecx) = (float)fp_top(); fp_pop(); /* fstp */

loc_00136560: ;
    fp_push(MEMF(ecx + 8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x49E2A8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x49e2a8] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0013657C; /* jne: not equal / not zero */

loc_00136570: ;
    fp_push(MEMF(ecx + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x4A08A4)); /* fsub dword ptr [0x4a08a4] */
    MEMF(ecx + 8) = (float)fp_top(); fp_pop(); /* fstp */

loc_0013657C: ;
    fp_push(MEMF(ecx + 8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x4ACA18)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x4aca18] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00136598; /* jp: parity */

loc_0013658C: ;
    fp_push(MEMF(ecx + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x4A08A4)); /* fadd dword ptr [0x4a08a4] */
    MEMF(ecx + 8) = (float)fp_top(); fp_pop(); /* fstp */

loc_00136598: ;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001365A0
 * Original: 0x001365A0 - 0x001366BA (282 bytes, 86 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001365A0(void)
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

loc_001365A0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x94) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x94;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = ecx;
    ecx = MEM32(ebx + 4);
    edx = MEM32(ecx + 0xC);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x1C) = ebx;
    MEM32(esp + 0x18) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_001366B3; /* jle: less or equal (signed <=) */

loc_001365C9: ;
    /* nop */

loc_001365D0: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001365D6u); RECOMP_ABI_CALL(0x0014D2D0u, sub_0014D2D0); /* call 0x0014D2D0 */

loc_001365D6: ;
    esi = eax;
    _fa = (uint32_t)(MEM8(esi + 0x48)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x48), 1 (8-bit) */
    MEM32(esi + 0x74) = 0x3F800000;
    if (CMP_EQ(_fa, _fb)) goto loc_0013669C; /* je: equal / zero */

loc_001365E9: ;
    edi = MEM32(esi + 4);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013669C; /* je: equal / zero */

loc_001365F4: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013669C; /* je: equal / zero */

loc_001365FF: ;
    ecx = MEM32(ebx + 4);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00136608u); RECOMP_ABI_CALL(0x0014D320u, sub_0014D320); /* call 0x0014D320 */

loc_00136608: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00136698; /* je: equal / zero */

loc_00136612: ;
    eax = esp + 0x30;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013661Eu); RECOMP_ABI_CALL(0x0014D040u, sub_0014D040); /* call 0x0014D040 */

loc_0013661E: ;
    ecx = esp + 0x40;
    PUSH32(esp, ecx);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013662Au); RECOMP_ABI_CALL(0x0014D040u, sub_0014D040); /* call 0x0014D040 */

loc_0013662A: ;
    fp_push(MEMF(esp + 0x30)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x40)); /* fsub dword ptr [esp + 0x40] */
    eax = esp + 0x20;
    fp_push(MEMF(esp + 0x34)); /* fld float */
    PUSH32(esp, eax);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x48)); /* fsub dword ptr [esp + 0x48] */
    ecx = esp + 0x64;
    fp_push(MEMF(esp + 0x3C)); /* fld float */
    PUSH32(esp, ecx);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x50)); /* fsub dword ptr [esp + 0x50] */
    MEM32(esp + 0x34) = 0;
    MEMF(esp + 0x60) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x60);
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0x30) = edx;
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013666Fu); RECOMP_ABI_CALL(0x0010E100u, sub_0010E100); /* call 0x0010E100 */

loc_0013666F: ;
    edx = edi + 0xA0;
    PUSH32(esp, edx);
    eax = esp + 0x6C;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00136680u); RECOMP_ABI_CALL(0x0010DD70u, sub_0010DD70); /* call 0x0010DD70 */

loc_00136680: ;
    ecx = esp + 0x70;
    PUSH32(esp, ecx);
    edx = edi + 0x60;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0013668Eu); RECOMP_ABI_CALL(0x0010DDB0u, sub_0010DDB0); /* call 0x0010DDB0 */

loc_0013668E: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(edi + 0x210) = 0;

loc_00136698: ;
    ebx = MEM32(esp + 0x1C);

loc_0013669C: ;
    eax = MEM32(esp + 0x18);
    ecx = MEM32(ebx + 4);
    edx = MEM32(ecx + 0xC);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    MEM32(esp + 0x18) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_001365D0; /* jl: less (signed <) */

loc_001366B3: ;
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
 * sub_001366C0
 * Original: 0x001366C0 - 0x001368A6 (486 bytes, 148 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001366C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001366C0: ;
    SET_LO8(eax, MEM8(0x50FF08));
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    PUSH32(esp, ebx);
    ebx = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_001368A1; /* je: equal / zero */

loc_001366D3: ;
    eax = MEM32(ebx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001368A1; /* je: equal / zero */

loc_001366DE: ;
    eax = MEM32(ebx + 0x20);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0013671F; /* jle: less or equal (signed <=) */

loc_001366E9: ;
    esi = ebx + 0x78;
    /* nop */

loc_001366F0: ;
    eax = MEM32(esi);
    ecx = MEM32(eax + 0x40);
    MEM32(esp + 0x14) = ecx;
    edx = MEM32(eax + 0x44);
    ecx = esp + 0x14;
    MEM32(esp + 0x18) = edx;
    eax = MEM32(eax + 0x48);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + -84);
    MEM32(esp + 0x20) = eax;
    PUSH32(esp, 0x00136714u); RECOMP_ABI_CALL(0x0014D060u, sub_0014D060); /* call 0x0014D060 */

loc_00136714: ;
    eax = MEM32(ebx + 0x20);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001366F0; /* jl: less (signed <) */

loc_0013671F: ;
    eax = MEM32(0x6C92EC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00136747; /* jne: not equal / not zero */

loc_00136728: ;
    eax = MEM32(ebx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013673F; /* je: equal / zero */

loc_0013672E: ;
    eax = MEM32(eax + 0x1164);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013673F; /* je: equal / zero */

loc_00136738: ;
    ecx = eax;
    PUSH32(esp, 0x0013673Fu); RECOMP_ABI_CALL(0x0014CB00u, sub_0014CB00); /* call 0x0014CB00 */

loc_0013673F: ;
    ecx = MEM32(ebx + 4);
    PUSH32(esp, 0x00136747u); RECOMP_ABI_CALL(0x0014DD20u, sub_0014DD20); /* call 0x0014DD20 */

loc_00136747: ;
    ecx = MEM32(ebx + 4);
    eax = MEM32(ecx + 0xC);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0xC) = 0;
    MEM32(esp + 0x10) = edi;
    if (CMP_LE(_fas, _fbs)) goto loc_00136852; /* jle: less or equal (signed <=) */

loc_00136763: ;
    PUSH32(esp, ebp);

loc_00136764: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0013676Au); RECOMP_ABI_CALL(0x0014D2D0u, sub_0014D2D0); /* call 0x0014D2D0 */

loc_0013676A: ;
    esi = eax;
    _fa = (uint32_t)(MEM8(esi + 0x48)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x48), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013677E; /* jne: not equal / not zero */

loc_00136772: ;
    edx = MEM32(esi + 4);
    MEM32(esp + 0x10) = edx;
    goto loc_0013683E;

loc_0013677E: ;
    eax = esp + 0x18;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0013678Au); RECOMP_ABI_CALL(0x0014D040u, sub_0014D040); /* call 0x0014D040 */

loc_0013678A: ;
    ebp = MEM32(esi + 4);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013683E; /* je: equal / zero */

loc_00136795: ;
    ecx = MEM32(esp + 0x10);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    esi = ebp + 0x10;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001367A6u); RECOMP_ABI_CALL(0x0010DDB0u, sub_0010DDB0); /* call 0x0010DDB0 */

loc_001367A6: ;
    edx = MEM32(esp + 0x20);
    MEM32(ebp + 0x40) = edx;
    eax = MEM32(esp + 0x24);
    MEM32(ebp + 0x44) = eax;
    ecx = MEM32(esp + 0x28);
    MEM32(ebp + 0x48) = ecx;
    edx = MEM32(esp + 0x20);
    MEM32(ebp + 0x50) = edx;
    eax = MEM32(esp + 0x24);
    MEM32(ebp + 0x54) = eax;
    ecx = MEM32(esp + 0x28);
    MEM32(ebp + 0x58) = ecx;
    eax = MEM32(ebp + 0x344);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001367F9; /* je: equal / zero */

loc_001367DD: ;
    edi = eax + 0x480;
    ecx = 0x10;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    ecx = MEM32(ebp + 0x344);
    PUSH32(esp, 0x001367F5u); RECOMP_ABI_CALL(0x00147EF0u, sub_00147EF0); /* call 0x00147EF0 */

loc_001367F5: ;
    edi = MEM32(esp + 0x14);

loc_001367F9: ;
    _fa = (uint32_t)(MEM8(ebx + 0xC8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebx + 0xC8), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013683E; /* jne: not equal / not zero */

loc_00136802: ;
    edx = MEM32(esp + 0x18);
    MEM32(ebp + 0x90) = edx;
    eax = MEM32(esp + 0x1C);
    MEM32(ebp + 0x94) = eax;
    ecx = MEM32(esp + 0x20);
    MEM32(ebp + 0x98) = ecx;
    edx = MEM32(esp + 0x18);
    MEM32(ebp + 0xA0) = edx;
    eax = MEM32(esp + 0x1C);
    MEM32(ebp + 0xA4) = eax;
    ecx = MEM32(esp + 0x20);
    MEM32(ebp + 0xA8) = ecx;

loc_0013683E: ;
    ecx = MEM32(ebx + 4);
    eax = MEM32(ecx + 0xC);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    MEM32(esp + 0x14) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_00136764; /* jl: less (signed <) */

loc_00136851: ;
    POP32(esp, ebp);

loc_00136852: ;
    _fa = (uint32_t)(MEM8(ebx + 0xC8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebx + 0xC8), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00136862; /* jne: not equal / not zero */

loc_0013685B: ;
    ecx = ebx;
    PUSH32(esp, 0x00136862u); RECOMP_ABI_CALL(0x001365A0u, sub_001365A0); /* call 0x001365A0 */

loc_00136862: ;
    ecx = MEM32(ebx);
    esi = MEM32(ecx + 0x30);
    eax = MEM32(ecx + 0x28);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0013689F; /* jle: less or equal (signed <=) */

loc_00136870: ;
    SET_LO8(ecx, MEM8(eax + 0x33B));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00136890; /* jne: not equal / not zero */

loc_0013687A: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00136890; /* je: equal / zero */

loc_00136880: ;
    _fa = (uint32_t)(MEM8(ecx + 0x33B)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x33B), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00136890; /* je: equal / zero */

loc_00136889: ;
    MEM8(eax + 0x210) = 0;

loc_00136890: ;
    ecx = MEM32(ebx);
    esi = MEM32(ecx + 0x30);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x390) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x390;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00136870; /* jl: less (signed <) */

loc_0013689F: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_001368A1: ;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001368B0
 * Original: 0x001368B0 - 0x001368E4 (52 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001368B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001368B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    ecx = MEM32(eax + 0x30);
    edx = MEM32(eax + 0x28);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x001368C4u); RECOMP_ABI_CALL(0x00135FA0u, sub_00135FA0); /* call 0x00135FA0 */

loc_001368C4: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001368E2; /* je: equal / zero */

loc_001368CB: ;
    ecx = esi;
    PUSH32(esp, 0x001368D2u); RECOMP_ABI_CALL(0x00136200u, sub_00136200); /* call 0x00136200 */

loc_001368D2: ;
    ecx = MEM32(esi + 4);
    PUSH32(esp, 0x001368DAu); RECOMP_ABI_CALL(0x0014DB90u, sub_0014DB90); /* call 0x0014DB90 */

loc_001368DA: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_001363C0(); return; /* tail jmp 0x001363C0 */

loc_001368E2: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001368F0
 * Original: 0x001368F0 - 0x00136968 (120 bytes, 39 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001368F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001368F0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x3BC348);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    eax = MEM32(esp + 0x14);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, eax);
    MEM32(esp + 0xC) = esi;
    PUSH32(esp, 0x00136918u); RECOMP_ABI_CALL(0x0014CF40u, sub_0014CF40); /* call 0x0014CF40 */

loc_00136918: ;
    eax = MEM32(esi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(esi + 0x14) = LO8(ebx);
    ecx = MEM32(eax + 0x30);
    edx = MEM32(eax + 0x28);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esi;
    MEM32(esp + 0x1C) = ebx;
    PUSH32(esp, 0x00136932u); RECOMP_ABI_CALL(0x00135FA0u, sub_00135FA0); /* call 0x00135FA0 */

loc_00136932: ;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013694D; /* je: equal / zero */

loc_00136937: ;
    ecx = esi;
    PUSH32(esp, 0x0013693Eu); RECOMP_ABI_CALL(0x00136200u, sub_00136200); /* call 0x00136200 */

loc_0013693E: ;
    ecx = MEM32(esi + 4);
    PUSH32(esp, 0x00136946u); RECOMP_ABI_CALL(0x0014DB90u, sub_0014DB90); /* call 0x0014DB90 */

loc_00136946: ;
    ecx = esi;
    PUSH32(esp, 0x0013694Du); RECOMP_ABI_CALL(0x001363C0u, sub_001363C0); /* call 0x001363C0 */

loc_0013694D: ;
    ecx = MEM32(esp + 0xC);
    MEM8(esi + 0xC8) = LO8(ebx);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00136970
 * Original: 0x00136970 - 0x001369AC (60 bytes, 23 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00136970(void)
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

loc_00136970: ;
    edx = MEM32(esp + 4);
    fp_push(MEMF(edx)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ecx] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00136983; /* jp: parity */

loc_0013697F: ;
    eax = MEM32(edx);
    MEM32(ecx) = eax;

loc_00136983: ;
    fp_push(MEMF(edx + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx + 4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ecx + 4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00136996; /* jp: parity */

loc_00136990: ;
    eax = MEM32(edx + 4);
    MEM32(ecx + 4) = eax;

loc_00136996: ;
    fp_push(MEMF(edx + 8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx + 8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ecx + 8] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001369A9; /* jp: parity */

loc_001369A3: ;
    edx = MEM32(edx + 8);
    MEM32(ecx + 8) = edx;

loc_001369A9: ;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001369B0
 * Original: 0x001369B0 - 0x001369EC (60 bytes, 23 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001369B0(void)
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

loc_001369B0: ;
    edx = MEM32(esp + 4);
    fp_push(MEMF(edx)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ecx] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001369C3; /* jne: not equal / not zero */

loc_001369BF: ;
    eax = MEM32(edx);
    MEM32(ecx) = eax;

loc_001369C3: ;
    fp_push(MEMF(edx + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx + 4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ecx + 4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001369D6; /* jne: not equal / not zero */

loc_001369D0: ;
    eax = MEM32(edx + 4);
    MEM32(ecx + 4) = eax;

loc_001369D6: ;
    fp_push(MEMF(edx + 8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx + 8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ecx + 8] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001369E9; /* jne: not equal / not zero */

loc_001369E3: ;
    edx = MEM32(edx + 8);
    MEM32(ecx + 8) = edx;

loc_001369E9: ;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00136A50
 * Original: 0x00136A50 - 0x00136A54 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00136A50(void)
{

loc_00136A50: ;
    MEM8(ecx) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_001372A0
 * Original: 0x001372A0 - 0x001372B7 (23 bytes, 5 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001372A0(void)
{

loc_001372A0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    MEM32(eax) = 0x100;
    MEM32(ecx) = 0x100;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001373D0
 * Original: 0x001373D0 - 0x001373E7 (23 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001373D0(void)
{

loc_001373D0: ;
    PUSH32(esp, 0x204);
    PUSH32(esp, 0x9C);
    PUSH32(esp, 0x001373DFu); RECOMP_ABI_CALL(0x0012F6B0u, sub_0012F6B0); /* call 0x0012F6B0 */

loc_001373DF: ;
    ecx = eax;
    PUSH32(esp, 0x001373E6u); RECOMP_ABI_CALL(0x0012F5A0u, sub_0012F5A0); /* call 0x0012F5A0 */

loc_001373E6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001373F0
 * Original: 0x001373F0 - 0x00137407 (23 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001373F0(void)
{

loc_001373F0: ;
    PUSH32(esp, 0x200);
    PUSH32(esp, 0x9C);
    PUSH32(esp, 0x001373FFu); RECOMP_ABI_CALL(0x0012F6B0u, sub_0012F6B0); /* call 0x0012F6B0 */

loc_001373FF: ;
    ecx = eax;
    PUSH32(esp, 0x00137406u); RECOMP_ABI_CALL(0x0012F5A0u, sub_0012F5A0); /* call 0x0012F5A0 */

loc_00137406: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00137410
 * Original: 0x00137410 - 0x00137450 (64 bytes, 23 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00137410(void)
{

loc_00137410: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, eax);
    ecx = eax;
    edx = eax;
    PUSH32(esp, 0x4E);
    MEM32(esi + 4) = eax;
    MEM32(esi + 8) = ecx;
    MEM32(esp + 0x10) = edx;
    PUSH32(esp, 0x0013742Du); RECOMP_ABI_CALL(0x0012F6B0u, sub_0012F6B0); /* call 0x0012F6B0 */

loc_0013742D: ;
    ecx = eax;
    PUSH32(esp, 0x00137434u); RECOMP_ABI_CALL(0x0012F5A0u, sub_0012F5A0); /* call 0x0012F5A0 */

loc_00137434: ;
    ecx = MEM32(esi + 8);
    edx = ecx;
    PUSH32(esp, edx);
    PUSH32(esp, 0x4D);
    MEM32(esp + 0x10) = ecx;
    PUSH32(esp, 0x00137445u); RECOMP_ABI_CALL(0x0012F6B0u, sub_0012F6B0); /* call 0x0012F6B0 */

loc_00137445: ;
    ecx = eax;
    PUSH32(esp, 0x0013744Cu); RECOMP_ABI_CALL(0x0012F5A0u, sub_0012F5A0); /* call 0x0012F5A0 */

loc_0013744C: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00137450
 * Original: 0x00137450 - 0x00137563 (275 bytes, 95 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00137450(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00137450: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 6 (32-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (CMP_GE(_fas, _fbs)) goto loc_0013755E; /* jge: greater or equal (signed >=) */

loc_00137461: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x204);
    PUSH32(esp, 0x9C);
    PUSH32(esp, 0x00137471u); RECOMP_ABI_CALL(0x0012F6B0u, sub_0012F6B0); /* call 0x0012F6B0 */

loc_00137471: ;
    ecx = eax;
    PUSH32(esp, 0x00137478u); RECOMP_ABI_CALL(0x0012F5A0u, sub_0012F5A0); /* call 0x0012F5A0 */

loc_00137478: ;
    esi = MEM32(esp + 0x14);
    PUSH32(esp, 4);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00137486u); RECOMP_ABI_CALL(0x0012F6B0u, sub_0012F6B0); /* call 0x0012F6B0 */

loc_00137486: ;
    ecx = eax;
    PUSH32(esp, 0x0013748Du); RECOMP_ABI_CALL(0x0012F450u, sub_0012F450); /* call 0x0012F450 */

loc_0013748D: ;
    PUSH32(esp, 4);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00137497u); RECOMP_ABI_CALL(0x0012F6B0u, sub_0012F6B0); /* call 0x0012F6B0 */

loc_00137497: ;
    ecx = eax;
    PUSH32(esp, 0x0013749Eu); RECOMP_ABI_CALL(0x0012F450u, sub_0012F450); /* call 0x0012F450 */

loc_0013749E: ;
    PUSH32(esp, 4);
    PUSH32(esp, 2);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001374A8u); RECOMP_ABI_CALL(0x0012F6B0u, sub_0012F6B0); /* call 0x0012F6B0 */

loc_001374A8: ;
    ecx = eax;
    PUSH32(esp, 0x001374AFu); RECOMP_ABI_CALL(0x0012F450u, sub_0012F450); /* call 0x0012F450 */

loc_001374AF: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x1D);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001374B9u); RECOMP_ABI_CALL(0x0012F6B0u, sub_0012F6B0); /* call 0x0012F6B0 */

loc_001374B9: ;
    ecx = eax;
    PUSH32(esp, 0x001374C0u); RECOMP_ABI_CALL(0x0012F450u, sub_0012F450); /* call 0x0012F450 */

loc_001374C0: ;
    PUSH32(esp, 2);
    PUSH32(esp, 3);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001374CAu); RECOMP_ABI_CALL(0x0012F6B0u, sub_0012F6B0); /* call 0x0012F6B0 */

loc_001374CA: ;
    ecx = eax;
    PUSH32(esp, 0x001374D1u); RECOMP_ABI_CALL(0x0012F450u, sub_0012F450); /* call 0x0012F450 */

loc_001374D1: ;
    PUSH32(esp, 2);
    PUSH32(esp, 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001374DBu); RECOMP_ABI_CALL(0x0012F6B0u, sub_0012F6B0); /* call 0x0012F6B0 */

loc_001374DB: ;
    ecx = eax;
    PUSH32(esp, 0x001374E2u); RECOMP_ABI_CALL(0x0012F450u, sub_0012F450); /* call 0x0012F450 */

loc_001374E2: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001374ECu); RECOMP_ABI_CALL(0x0012F6B0u, sub_0012F6B0); /* call 0x0012F6B0 */

loc_001374EC: ;
    ecx = eax;
    PUSH32(esp, 0x001374F3u); RECOMP_ABI_CALL(0x0012F450u, sub_0012F450); /* call 0x0012F450 */

loc_001374F3: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0xE);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001374FDu); RECOMP_ABI_CALL(0x0012F6B0u, sub_0012F6B0); /* call 0x0012F6B0 */

loc_001374FD: ;
    ecx = eax;
    PUSH32(esp, 0x00137504u); RECOMP_ABI_CALL(0x0012F450u, sub_0012F450); /* call 0x0012F450 */

loc_00137504: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0xF);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0013750Eu); RECOMP_ABI_CALL(0x0012F6B0u, sub_0012F6B0); /* call 0x0012F6B0 */

loc_0013750E: ;
    ecx = eax;
    PUSH32(esp, 0x00137515u); RECOMP_ABI_CALL(0x0012F450u, sub_0012F450); /* call 0x0012F450 */

loc_00137515: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0013751Fu); RECOMP_ABI_CALL(0x0012F6B0u, sub_0012F6B0); /* call 0x0012F6B0 */

loc_0013751F: ;
    ecx = eax;
    PUSH32(esp, 0x00137526u); RECOMP_ABI_CALL(0x0012F450u, sub_0012F450); /* call 0x0012F450 */

loc_00137526: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x12);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00137530u); RECOMP_ABI_CALL(0x0012F6B0u, sub_0012F6B0); /* call 0x0012F6B0 */

loc_00137530: ;
    ecx = eax;
    PUSH32(esp, 0x00137537u); RECOMP_ABI_CALL(0x0012F450u, sub_0012F450); /* call 0x0012F450 */

loc_00137537: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x13);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00137541u); RECOMP_ABI_CALL(0x0012F6B0u, sub_0012F6B0); /* call 0x0012F6B0 */

loc_00137541: ;
    ecx = eax;
    PUSH32(esp, 0x00137548u); RECOMP_ABI_CALL(0x0012F450u, sub_0012F450); /* call 0x0012F450 */

loc_00137548: ;
    eax = MEM32(edi + ebx * 4 + 0x150);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00137556u); RECOMP_ABI_CALL(0x0012F6B0u, sub_0012F6B0); /* call 0x0012F6B0 */

loc_00137556: ;
    ecx = eax;
    PUSH32(esp, 0x0013755Du); RECOMP_ABI_CALL(0x0012F340u, sub_0012F340); /* call 0x0012F340 */

loc_0013755D: ;
    POP32(esp, esi);

loc_0013755E: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001376A0
 * Original: 0x001376A0 - 0x001376A3 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001376A0(void)
{

loc_001376A0: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001376B0
 * Original: 0x001376B0 - 0x001376DC (44 bytes, 11 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001376B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001376B0: ;
    edx = MEM32(esp + 0xC);
    eax = ecx;
    SET_LO8(ecx, MEM8(esp + 4));
    MEM8(eax + 0x180) = LO8(ecx);
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(eax + 0x184) = edx;
    MEM32(eax + 0x188) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_001376D9; /* je: equal / zero */

loc_001376D4: ;
    PUSH32(esp, 0x001376D9u); RECOMP_ABI_CALL(0x001478C0u, sub_001478C0); /* call 0x001478C0 */

loc_001376D9: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001376E0
 * Original: 0x001376E0 - 0x0013787C (412 bytes, 102 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001376E0(void)
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

loc_001376E0: ;
    _fb = (uint32_t)(0xC0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC0;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x180));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00137872; /* je: equal / zero */

loc_001376F7: ;
    eax = MEM32(esi + 0x188);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00137872; /* je: equal / zero */

loc_00137705: ;
    eax = esp + 0x34;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0013770Fu); RECOMP_ABI_CALL(0x0015BE90u, sub_0015BE90); /* call 0x0015BE90 */

loc_0013770F: ;
    ecx = MEM32(esi + 0x188);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0013771Du); RECOMP_ABI_CALL(0x001478C0u, sub_001478C0); /* call 0x001478C0 */

loc_0013771D: ;
    eax = MEM32(esi + 0x188);
    ecx = MEM32(eax + 0x244);
    MEM32(esp + 0x24) = ecx;
    edx = MEM32(eax + 0x248);
    MEM32(esp + 0x28) = edx;
    ecx = MEM32(eax + 0x24C);
    MEM32(esp + 0x2C) = ecx;
    fp_push(MEMF(eax + 0x25C)); /* fld float */
    fp_push(MEMF(eax + 0x254)); /* fld float */
    eax = MEM32(0x5C5EAC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x24)); /* fsub dword ptr [esp + 0x24] */
    MEM32(esp + 0x48) = 0;
    fp_top() = RECOMP_FP_PC(MEMF(0x496454) / fp_top()); /* fdivr dword ptr [0x496454] */
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x2C)); /* fsub dword ptr [esp + 0x2c] */
    fp_top() = RECOMP_FP_PC(MEMF(0x4976B4) / fp_top()); /* fdivr dword ptr [0x4976b4] */
    MEMF(esp + 0x58) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_NE(_fa, _fb)) goto loc_0013779D; /* jne: not equal / not zero */

loc_0013777A: ;
    eax = MEM32(0x5C5EB4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013779D; /* jne: not equal / not zero */

loc_00137783: ;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = 0xC2C80000u;
    MEM32(esp + 0xC) = 0;
    goto loc_001377BB;

loc_0013779D: ;
    fp_push((double)SMEM32(0x5C5EAC)); /* fild */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(0x5C5EB4)); /* fild */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(0x5C5EBC)); /* fild */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */

loc_001377BB: ;
    edx = esp + 4;
    PUSH32(esp, edx);
    eax = edx;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001377C8u); RECOMP_ABI_CALL(0x0015BC50u, sub_0015BC50); /* call 0x0015BC50 */

loc_001377C8: ;
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    edx = esp + 0x80;
    PUSH32(esp, edx);
    PUSH32(esp, 0x001377DAu); RECOMP_ABI_CALL(0x0015C9F0u, sub_0015C9F0); /* call 0x0015C9F0 */

loc_001377DA: ;
    eax = esp + 0x94;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001377E7u); RECOMP_ABI_CALL(0x0015BE90u, sub_0015BE90); /* call 0x0015BE90 */

loc_001377E7: ;
    fp_push(MEMF(esp + 0x40)); /* fld float */
    esi = MEM32(esi + 0x188);
    fp_top() = -fp_top(); /* fchs */
    ecx = MEM32(esi + 0x4B0);
    MEM32(esp + 0x28) = ecx;
    edx = MEM32(esi + 0x4B4);
    MEM32(esp + 0x2C) = edx;
    eax = MEM32(esi + 0x4B8);
    MEMF(esp + 0x40) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = esp + 0x38;
    PUSH32(esp, ecx);
    edx = esp + 0x2C;
    MEM32(esp + 0x34) = eax;
    PUSH32(esp, edx);
    eax = edx;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00137827u); RECOMP_ABI_CALL(0x0015BCF0u, sub_0015BCF0); /* call 0x0015BCF0 */

loc_00137827: ;
    ecx = esp + 0x34;
    PUSH32(esp, 0xBF800000u);
    PUSH32(esp, ecx);
    edx = ecx;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00137839u); RECOMP_ABI_CALL(0x0015BD50u, sub_0015BD50); /* call 0x0015BD50 */

loc_00137839: ;
    eax = esp + 0x40;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00137843u); RECOMP_ABI_CALL(0x0015CA10u, sub_0015CA10); /* call 0x0015CA10 */

loc_00137843: ;
    ecx = esp + 0x44;
    PUSH32(esp, ecx);
    edx = esp + 0xB8;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00137855u); RECOMP_ABI_CALL(0x0015BBA0u, sub_0015BBA0); /* call 0x0015BBA0 */

loc_00137855: ;
    edx = MEM32(esp + 0x100);
    eax = esp + 0xBC;
    PUSH32(esp, eax);
    ecx = esp + 0x70;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0013786Fu); RECOMP_ABI_CALL(0x0015CC90u, sub_0015CC90); /* call 0x0015CC90 */

loc_0013786F: ;
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00137872: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0xC0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC0;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00137880
 * Original: 0x00137880 - 0x001378C0 (64 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00137880(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00137880: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebx = ecx;
    PUSH32(esp, edi);
    edi = ebx + 0x168;
    esi = ebx + 0x8C;
    ebp = 6;

loc_00137897: ;
    PUSH32(esp, esi);
    eax = esi + -120;
    PUSH32(esp, eax);
    PUSH32(esp, 0x100);
    PUSH32(esp, 0x100);
    ecx = ebx;
    MEM32(edi + -24) = eax;
    MEM32(edi) = esi;
    PUSH32(esp, 0x001378B2u); RECOMP_ABI_CALL(0x00136A60u, sub_00136A60); /* call 0x00136A60 */

loc_001378B2: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x14;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00137897; /* jne: not equal / not zero */

loc_001378BB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001378C0
 * Original: 0x001378C0 - 0x001378DF (31 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001378C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001378C0: ;
    eax = MEM32(0x50EF70);
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x001378D0u); RECOMP_ABI_CALL(0x00104F40u, sub_00104F40); /* call 0x00104F40 */

loc_001378D0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    PUSH32(esp, 0x001378DAu); RECOMP_ABI_CALL(0x00137880u, sub_00137880); /* call 0x00137880 */

loc_001378DA: ;
    MEM8(esi) = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00137C40
 * Original: 0x00137C40 - 0x00137D83 (323 bytes, 85 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00137C40(void)
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

loc_00137C40: ;
    fp_push(MEMF(ecx)); /* fld float */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x496454)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x496454] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00137C5C; /* jne: not equal / not zero */

loc_00137C52: ;
    MEM32(esp + 4) = 0x437F0000;
    goto loc_00137C87;

loc_00137C5C: ;
    fp_push(MEMF(ecx)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x4964E8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x4964e8] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00137C75; /* jp: parity */

loc_00137C6B: ;
    MEM32(esp + 4) = 0;
    goto loc_00137C87;

loc_00137C75: ;
    fp_push(MEMF(ecx)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x49FC20)); /* fmul dword ptr [0x49fc20] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x496B98)); /* fadd dword ptr [0x496b98] */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */

loc_00137C87: ;
    fp_push(MEMF(ecx + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x496454)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x496454] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00137CA0; /* jne: not equal / not zero */

loc_00137C97: ;
    MEM32(esp) = 0x437F0000;
    goto loc_00137CCB;

loc_00137CA0: ;
    fp_push(MEMF(ecx + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x4964E8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x4964e8] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00137CB9; /* jp: parity */

loc_00137CB0: ;
    MEM32(esp) = 0;
    goto loc_00137CCB;

loc_00137CB9: ;
    fp_push(MEMF(ecx + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x49FC20)); /* fmul dword ptr [0x49fc20] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x496B98)); /* fadd dword ptr [0x496b98] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */

loc_00137CCB: ;
    fp_push(MEMF(ecx + 8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x496454)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x496454] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00137CE5; /* jne: not equal / not zero */

loc_00137CDB: ;
    MEM32(esp + 0xC) = 0x437F0000;
    goto loc_00137D12;

loc_00137CE5: ;
    fp_push(MEMF(ecx + 8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x4964E8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x4964e8] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00137CFF; /* jp: parity */

loc_00137CF5: ;
    MEM32(esp + 0xC) = 0;
    goto loc_00137D12;

loc_00137CFF: ;
    fp_push(MEMF(ecx + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x49FC20)); /* fmul dword ptr [0x49fc20] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x496B98)); /* fadd dword ptr [0x496b98] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */

loc_00137D12: ;
    fp_push(MEMF(ecx + 0xC)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x496454)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x496454] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00137D2C; /* jne: not equal / not zero */

loc_00137D22: ;
    MEM32(esp + 8) = 0x437F0000;
    goto loc_00137D59;

loc_00137D2C: ;
    fp_push(MEMF(ecx + 0xC)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x4964E8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x4964e8] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00137D46; /* jp: parity */

loc_00137D3C: ;
    MEM32(esp + 8) = 0;
    goto loc_00137D59;

loc_00137D46: ;
    fp_push(MEMF(ecx + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x49FC20)); /* fmul dword ptr [0x49fc20] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x496B98)); /* fadd dword ptr [0x496b98] */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */

loc_00137D59: ;
    eax = (int32_t)MEMF(esp + 0xC); /* cvtss2si */
    edx = (int32_t)MEMF(esp + 8); /* cvtss2si */
    edx = edx << 0x18;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax | edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = (int32_t)MEMF(esp + 4); /* cvtss2si */
    edx = edx << 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax | edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = (int32_t)MEMF(esp); /* cvtss2si */
    edx = edx << 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax | edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
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
 * sub_00137D90
 * Original: 0x00137D90 - 0x00137DBB (43 bytes, 14 insns)
 * CC: cdecl, 1 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00137D90(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00137D90: ;
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
 * sub_00137DC0
 * Original: 0x00137DC0 - 0x00137DC1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00137DC0(void)
{

loc_00137DC0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00137DD0
 * Original: 0x00137DD0 - 0x00137DD4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00137DD0(void)
{

loc_00137DD0: ;
    SET_LO8(eax, MEM8(ecx + 5));
    esp += 4; return; /* ret */

}

/**
 * sub_00137DE0
 * Original: 0x00137DE0 - 0x00137DEA (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00137DE0(void)
{

loc_00137DE0: ;
    SET_LO8(eax, MEM8(esp + 4));
    MEM8(ecx + 4) = LO8(eax);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00137DF0
 * Original: 0x00137DF0 - 0x00137DF4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00137DF0(void)
{

loc_00137DF0: ;
    SET_LO8(eax, MEM8(ecx + 4));
    esp += 4; return; /* ret */

}

/**
 * sub_00137E00
 * Original: 0x00137E00 - 0x00137E0E (14 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00137E00(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00137E00: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 0x18) = ecx;
    MEM8(eax + 5) = LO8(ecx);
    MEM8(eax + 4) = LO8(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00139290
 * Original: 0x00139290 - 0x00139293 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00139290(void)
{

loc_00139290: ;
    eax = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00139B10
 * Original: 0x00139B10 - 0x00139B11 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00139B10(void)
{

loc_00139B10: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00139B20
 * Original: 0x00139B20 - 0x00139B21 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00139B20(void)
{

loc_00139B20: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00139B30
 * Original: 0x00139B30 - 0x00139CAF (383 bytes, 104 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00139B30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00139B30: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0xB1;
    edi = 0x63A218;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = 0x63A4E4;
    edi = 0x50F328;
    edi = edi;

loc_00139B50: ;
    ebx = MEM32(edi);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00139B85; /* je: equal / zero */

loc_00139B56: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x63A4E4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x63A4E4 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00139B75; /* jle: less or equal (signed <=) */

loc_00139B60: ;
    edx = 0x63A4E0;

loc_00139B65: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(edx) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00139CA2; /* je: equal / zero */

loc_00139B6D: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xC;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00139B65; /* jl: less (signed <) */

loc_00139B75: ;
    MEM32(edi + 8) = ecx;
    MEM32(esi + -4) = ebx;
    MEM32(esi) = 0;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00139B85: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0xC;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x50F8A4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x50F8A4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00139B50; /* jl: less (signed <) */

loc_00139B90: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x63A218) = eax;
    MEM32(0x63A21C) = eax;
    MEM32(0x63A220) = eax;
    MEM32(0x63A224) = eax;
    MEM32(0x63A228) = eax;
    MEM32(0x63A22C) = eax;
    MEM32(0x63A230) = eax;
    MEM32(0x63A234) = eax;
    MEM32(0x63A238) = eax;
    MEM32(0x63A23C) = eax;
    MEM32(0x63A240) = eax;
    MEM32(0x63A244) = eax;
    MEM32(0x63A248) = eax;
    MEM32(0x63A24C) = eax;
    MEM32(0x63A250) = eax;
    MEM32(0x63A254) = eax;
    MEM32(0x63A258) = eax;
    MEM32(0x63A25C) = eax;
    MEM32(0x63A260) = eax;
    MEM32(0x63A264) = eax;
    MEM32(0x63A268) = eax;
    MEM32(0x63A26C) = eax;
    MEM32(0x63A270) = eax;
    MEM32(0x63A274) = eax;
    MEM32(0x63A278) = eax;
    MEM32(0x63A27C) = eax;
    MEM32(0x63A280) = eax;
    MEM32(0x63A284) = eax;
    MEM32(0x63ABC0) = ecx;
    ebp = 0x63AA60;
    edi = 0x50F8A8;
    MEM32(0x63A288) = eax;

loc_00139C35: ;
    ebx = MEM32(edi);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00139C74; /* je: equal / zero */

loc_00139C3B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0x63AA60) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0x63AA60 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00139C5C; /* jle: less or equal (signed <=) */

loc_00139C45: ;
    esi = 0x63AA60;
    /* nop */

loc_00139C50: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(esi) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00139CAA; /* je: equal / zero */

loc_00139C54: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00139C50; /* jl: less (signed <) */

loc_00139C5C: ;
    MEM32(edi + 4) = edx;
    MEM32(ebp) = ebx;
    eax = ecx + ecx * 2;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(eax * 4 + 0x63AA64) = 0;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0xC;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00139C74: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x50F990) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x50F990 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00139C35; /* jl: less (signed <) */

loc_00139C7F: ;
    ecx = MEM32(0x4ACC34);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(0x63ABC4) = edx;
    edx = MEM32(0x4ACC30);
    POP32(esp, ebp);
    MEM32(0x63A3E8) = ecx;
    MEM32(0x63A45C) = edx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00139CA2: ;
    MEM32(edi + 8) = eax;
    goto loc_00139B85;

loc_00139CAA: ;
    MEM32(edi + 4) = eax;
    goto loc_00139C74;

}

/**
 * sub_00139D80
 * Original: 0x00139D80 - 0x00139E25 (165 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00139D80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00139D80: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0x50F32C;
    esi = 0x63A218;
    /* nop */

loc_00139D90: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00139DCA; /* jne: not equal / not zero */

loc_00139D95: ;
    eax = MEM32(edi + 4);
    eax = eax + eax * 2;
    eax = MEM32(eax * 4 + 0x63A4E4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00139DCA; /* je: equal / zero */

loc_00139DA6: ;
    edx = MEM32(edi);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00139DCA; /* je: equal / zero */

loc_00139DAC: ;
    ecx = MEM32(0x63AFB4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00139DC1; /* jne: not equal / not zero */

loc_00139DB6: ;
    ecx = 0x63AFB8;
    MEM32(0x63AFB4) = ecx;

loc_00139DC1: ;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00139DC8u); RECOMP_ABI_CALL(0x0013AE40u, sub_0013AE40); /* call 0x0013AE40 */

loc_00139DC8: ;
    MEM32(esi) = eax;

loc_00139DCA: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0xC;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x63A3EC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x63A3EC (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00139D90; /* jl: less (signed <) */

loc_00139DD8: ;
    edi = 0x50F8AC;
    esi = 0x63A3EC;

loc_00139DE2: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00139E14; /* jne: not equal / not zero */

loc_00139DE7: ;
    eax = MEM32(edi);
    ecx = eax + eax * 2;
    eax = MEM32(ecx * 4 + 0x63AA64);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00139E14; /* je: equal / zero */

loc_00139DF7: ;
    ecx = MEM32(0x63AFB4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00139E0C; /* jne: not equal / not zero */

loc_00139E01: ;
    ecx = 0x63AFB8;
    MEM32(0x63AFB4) = ecx;

loc_00139E0C: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00139E12u); RECOMP_ABI_CALL(0x0013AD40u, sub_0013AD40); /* call 0x0013AD40 */

loc_00139E12: ;
    MEM32(esi) = eax;

loc_00139E14: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x63A460) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x63A460 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00139DE2; /* jl: less (signed <) */

loc_00139E22: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00139E30
 * Original: 0x00139E30 - 0x00139E82 (82 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00139E30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00139E30: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0x63A460;
    esi = 0x50F990;
    /* nop */

loc_00139E40: ;
    ecx = MEM32(0x63AFB4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00139E55; /* jne: not equal / not zero */

loc_00139E4A: ;
    ecx = 0x63AFB8;
    MEM32(0x63AFB4) = ecx;

loc_00139E55: ;
    eax = MEM32(esi + 4);
    edx = MEM32(eax * 4 + 0x63A218);
    eax = MEM32(esi);
    PUSH32(esp, edx);
    edx = MEM32(eax * 4 + 0x63A218);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00139E6Fu); RECOMP_ABI_CALL(0x0013B1B0u, sub_0013B1B0); /* call 0x0013B1B0 */

loc_00139E6F: ;
    MEM32(edi) = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x50FA88) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x50FA88 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00139E40; /* jl: less (signed <) */

loc_00139E7F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00139E90
 * Original: 0x00139E90 - 0x00139ED5 (69 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00139E90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00139E90: ;
    ecx = MEM32(0x63ABC0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00139ED0; /* jle: less or equal (signed <=) */

loc_00139E9A: ;
    eax = 0x63A4E8;
    edx = ecx;

loc_00139EA1: ;
    ecx = MEM32(eax + -8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x28) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x28 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00139EB8; /* jne: not equal / not zero */

loc_00139EA9: ;
    MEM32(eax + -4) = 0x50F210;
    MEM32(eax) = 0x45;
    goto loc_00139ECA;

loc_00139EB8: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x7B (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00139ECA; /* jne: not equal / not zero */

loc_00139EBD: ;
    MEM32(eax + -4) = 0x50F188;
    MEM32(eax) = 0x21;

loc_00139ECA: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00139EA1; /* jne: not equal / not zero */

loc_00139ED0: ;
    g_seh_ebp = ebp; sub_00139D80(); return; /* tail jmp 0x00139D80 */

}

/**
 * sub_0013A180
 * Original: 0x0013A180 - 0x0013A18D (13 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013A180(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013A180: ;
    eax = MEM32(esp + 4);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x16);
    _fb = (uint32_t)(0x63ABC8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x63ABC8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0013A850
 * Original: 0x0013A850 - 0x0013A8FB (171 bytes, 54 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013A850(void)
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

loc_0013A850: ;
    ecx = MEM32(esp + 4);
    _fa = (uint32_t)(MEM16(ecx)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013A8F5; /* jne: not equal / not zero */

loc_0013A85E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0013A860: ;
    SET_LO8(edx, MEM8(ecx + eax + 2));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013A8F5; /* jne: not equal / not zero */

loc_0013A86C: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0013A860; /* jb: below (unsigned <) */

loc_0013A872: ;
    fp_push(MEMF(ecx + 0x14)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x4ACC20)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x4acc20] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0013A8F5; /* je: equal / zero */

loc_0013A882: ;
    fp_push(MEMF(ecx + 0x14)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x4ACC28)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x4acc28] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0013A8F5; /* jnp: not parity */

loc_0013A892: ;
    fp_push(MEMF(ecx + 0x18)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x4ACC20)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x4acc20] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0013A8F5; /* je: equal / zero */

loc_0013A8A2: ;
    fp_push(MEMF(ecx + 0x18)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x4ACC28)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x4acc28] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0013A8F5; /* jnp: not parity */

loc_0013A8B2: ;
    fp_push(MEMF(ecx + 0x1C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x4ACC20)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x4acc20] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0013A8F5; /* je: equal / zero */

loc_0013A8C2: ;
    fp_push(MEMF(ecx + 0x1C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x4ACC28)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x4acc28] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0013A8F5; /* jnp: not parity */

loc_0013A8D2: ;
    fp_push(MEMF(ecx + 0x20)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x4ACC20)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x4acc20] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0013A8F5; /* je: equal / zero */

loc_0013A8E2: ;
    fp_push(MEMF(ecx + 0x20)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x4ACC28)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x4acc28] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0013A8F5; /* jnp: not parity */

loc_0013A8F2: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_0013A8F5: ;
    eax = 1;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0013A980
 * Original: 0x0013A980 - 0x0013AA37 (183 bytes, 71 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013A980(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0013A980: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    MEM32(esp + 0x14) = edi;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x0013A993u); RECOMP_ABI_CALL(0x0013A2C0u, sub_0013A2C0); /* call 0x0013A2C0 */

loc_0013A993: ;
    ebp = MEM32(esp + 0x1C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0x63AC22;
    ebx = 4;
    ecx = 0x20;
    SET_LO16(edx, LO16(edi));
    /* nop */

loc_0013A9B0: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013A9B9; /* je: equal / zero */

loc_0013A9B5: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013AA07; /* jne: not equal / not zero */

loc_0013A9B9: ;
    _fa = (uint32_t)(MEM32(eax + 0xD6)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xD6), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013AA07; /* je: equal / zero */

loc_0013A9C2: ;
    SET_LO16(edx, LO16(edx) | MEM16(eax + -2));
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* or result */
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), LO8(ecx) (8-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0013A9CD; /* jb: below (unsigned <) */

loc_0013A9CA: ;
    esi = esi | 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0013A9CD: ;
    _fa = (uint32_t)(MEM8(eax + 1)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 1), LO8(ecx) (8-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0013A9D5; /* jb: below (unsigned <) */

loc_0013A9D2: ;
    esi = esi | 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0013A9D5: ;
    _fa = (uint32_t)(MEM8(eax + 2)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 2), LO8(ecx) (8-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0013A9DD; /* jb: below (unsigned <) */

loc_0013A9DA: ;
    esi = esi | 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0013A9DD: ;
    _fa = (uint32_t)(MEM8(eax + 3)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 3), LO8(ecx) (8-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0013A9E5; /* jb: below (unsigned <) */

loc_0013A9E2: ;
    esi = esi | 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0013A9E5: ;
    _fa = (uint32_t)(MEM8(eax + 4)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 4), LO8(ecx) (8-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0013A9ED; /* jb: below (unsigned <) */

loc_0013A9EA: ;
    esi = esi | 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0013A9ED: ;
    _fa = (uint32_t)(MEM8(eax + 5)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 5), LO8(ecx) (8-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0013A9F4; /* jb: below (unsigned <) */

loc_0013A9F2: ;
    esi = esi | ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0013A9F4: ;
    _fa = (uint32_t)(MEM8(eax + 6)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 6), LO8(ecx) (8-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0013A9FC; /* jb: below (unsigned <) */

loc_0013A9F9: ;
    esi = esi | 0x40;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0013A9FC: ;
    _fa = (uint32_t)(MEM8(eax + 7)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 7), LO8(ecx) (8-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0013AA07; /* jb: below (unsigned <) */

loc_0013AA01: ;
    esi = esi | 0x80;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0013AA07: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xE4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xE4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0013A9B0; /* jne: not equal / not zero */

loc_0013AA10: ;
    ecx = ZX16(LO16(edx));
    edx = ZX16(LO16(esi));
    esi = MEM32(esp + 0x1C);
    eax = ecx;
    eax = eax << 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax | edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013AA27; /* je: equal / zero */

loc_0013AA25: ;
    MEM32(esi) = ecx;

loc_0013AA27: ;
    ecx = MEM32(esp + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_0013AA35; /* je: equal / zero */

loc_0013AA33: ;
    MEM32(ecx) = edx;

loc_0013AA35: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0013AA40
 * Original: 0x0013AA40 - 0x0013AACE (142 bytes, 56 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013AA40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0013AA40: ;
    eax = MEM32(0x50FA8C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013AA5F; /* je: equal / zero */

loc_0013AA4A: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0xE4);
    _fb = (uint32_t)(0x63AC20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x63AC20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(eax + 0xD8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013AACD; /* jne: not equal / not zero */

loc_0013AA5F: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebp = ebp | 0xFFFFFFFFu;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = 0x63AC20;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_0013AA70: ;
    eax = MEM32(esi + 0xD8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013AA8E; /* je: equal / zero */

loc_0013AA7A: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013AA81; /* jne: not equal / not zero */

loc_0013AA7F: ;
    ebp = ebx;

loc_0013AA81: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0013AA87u); RECOMP_ABI_CALL(0x0013A850u, sub_0013A850); /* call 0x0013A850 */

loc_0013AA87: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013AAAF; /* jne: not equal / not zero */

loc_0013AA8E: ;
    _fb = (uint32_t)(0xE4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0xE4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xE4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xE4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x390) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x390 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0013AA70; /* jb: below (unsigned <) */

loc_0013AAA3: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013AABC; /* jne: not equal / not zero */

loc_0013AAA8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0013AAAF: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(0x50FA8C) = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0013AABC: ;
    eax = ebp;
    eax = (uint32_t)((int32_t)eax * (int32_t)0xE4);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x63AC20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x63AC20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);

loc_0013AACD: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013AB20
 * Original: 0x0013AB20 - 0x0013AB21 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013AB20(void)
{

loc_0013AB20: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013B230
 * Original: 0x0013B230 - 0x0013B2EF (191 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013B230(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013B230: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 1);
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x5F);
    MEM32(esp + 0xC) = 0;
    MEM32(esp + 0x10) = 0;
    MEM32(esp + 0x14) = 0;
    MEM32(esp + 0x18) = 0;
    PUSH32(esp, 0x0013B261u); RECOMP_ABI_CALL(0x00118440u, sub_00118440); /* call 0x00118440 */

loc_0013B261: ;
    PUSH32(esp, 1);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x5E);
    MEM32(esp + 0x24) = 0x3F800000;
    MEM32(esp + 0x20) = 0x3F800000;
    MEM32(esp + 0x1C) = 0x3F800000;
    MEM32(esp + 0x18) = 0x3F800000;
    PUSH32(esp, 0x0013B28Fu); RECOMP_ABI_CALL(0x00118440u, sub_00118440); /* call 0x00118440 */

loc_0013B28F: ;
    PUSH32(esp, 1);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    PUSH32(esp, 0x5D);
    MEM32(esp + 0x30) = 0x40000000;
    MEM32(esp + 0x2C) = 0x40000000;
    MEM32(esp + 0x28) = 0x40000000;
    MEM32(esp + 0x24) = 0x40000000;
    PUSH32(esp, 0x0013B2BDu); RECOMP_ABI_CALL(0x00118440u, sub_00118440); /* call 0x00118440 */

loc_0013B2BD: ;
    PUSH32(esp, 1);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    PUSH32(esp, 0x5C);
    MEM32(esp + 0x3C) = 0x3F000000;
    MEM32(esp + 0x38) = 0x3F000000;
    MEM32(esp + 0x34) = 0x3F000000;
    MEM32(esp + 0x30) = 0x3F000000;
    PUSH32(esp, 0x0013B2EBu); RECOMP_ABI_CALL(0x00118440u, sub_00118440); /* call 0x00118440 */

loc_0013B2EB: ;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0013B400
 * Original: 0x0013B400 - 0x0013B403 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013B400(void)
{

loc_0013B400: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_0013B410
 * Original: 0x0013B410 - 0x0013B413 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0013B410(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013B410: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0013B450
 * Original: 0x0013B450 - 0x0013B473 (35 bytes, 12 insns)
 * CC: cdecl, 1 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0013B450(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0013B450: ;
    fp_push(MEMF(0x496454)); /* fld float */
    eax = ecx;
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(esp + 4)); /* fdiv dword ptr [esp + 4] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax)); /* fmul dword ptr [eax] */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 4)); /* fmul dword ptr [eax + 4] */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 8)); /* fmul dword ptr [eax + 8] */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0013B480
 * Original: 0x0013B480 - 0x0013B487 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013B480(void)
{

loc_0013B480: ;
    eax = MEM32(ecx + 0x158);
    esp += 4; return; /* ret */

}

/**
 * sub_0013B490
 * Original: 0x0013B490 - 0x0013B497 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013B490(void)
{

loc_0013B490: ;
    eax = ecx + 0xD0;
    esp += 4; return; /* ret */

}

/**
 * sub_0013B4A0
 * Original: 0x0013B4A0 - 0x0013B4A7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013B4A0(void)
{

loc_0013B4A0: ;
    eax = ecx + 0x110;
    esp += 4; return; /* ret */

}

/**
 * sub_0013B4B0
 * Original: 0x0013B4B0 - 0x0013B4E5 (53 bytes, 18 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013B4B0(void)
{

loc_0013B4B0: ;
    edx = MEM32(esp + 0x10);
    eax = ecx;
    ecx = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    MEM32(eax) = ecx;
    edi = eax + 0x10;
    ecx = 0x10;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    esi = MEM32(esp + 0x14);
    edi = eax + 0x50;
    ecx = 0x10;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    POP32(esp, edi);
    MEM32(eax + 0x90) = edx;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0013B4F0
 * Original: 0x0013B4F0 - 0x0013B4F3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013B4F0(void)
{

loc_0013B4F0: ;
    eax = MEM32(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0013B500
 * Original: 0x0013B500 - 0x0013B504 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013B500(void)
{

loc_0013B500: ;
    eax = ecx + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_0013B510
 * Original: 0x0013B510 - 0x0013B514 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013B510(void)
{

loc_0013B510: ;
    eax = ecx + 0x50;
    esp += 4; return; /* ret */

}

/**
 * sub_0013B520
 * Original: 0x0013B520 - 0x0013B527 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013B520(void)
{

loc_0013B520: ;
    eax = MEM32(ecx + 0x90);
    esp += 4; return; /* ret */

}

/**
 * sub_0013B530
 * Original: 0x0013B530 - 0x0013B541 (17 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013B530(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013B530: ;
    eax = MEM32(esp + 4);
    eax = eax << 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax + ecx + 0x874;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0013B550
 * Original: 0x0013B550 - 0x0013B553 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013B550(void)
{

loc_0013B550: ;
    eax = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_0013B560
 * Original: 0x0013B560 - 0x0013B564 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013B560(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0013B560: ;
    fp_push(MEMF(ecx + 0x24)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0013B570
 * Original: 0x0013B570 - 0x0013B577 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013B570(void)
{

loc_0013B570: ;
    eax = ecx + 0xCC;
    esp += 4; return; /* ret */

}

/**
 * sub_0013B580
 * Original: 0x0013B580 - 0x0013B592 (18 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013B580(void)
{

loc_0013B580: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0013B58Au); RECOMP_ABI_CALL(0x0012F6B0u, sub_0012F6B0); /* call 0x0012F6B0 */

loc_0013B58A: ;
    ecx = eax;
    PUSH32(esp, 0x0013B591u); RECOMP_ABI_CALL(0x0012F6E0u, sub_0012F6E0); /* call 0x0012F6E0 */

loc_0013B591: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013B5A0
 * Original: 0x0013B5A0 - 0x0013B5BF (31 bytes, 9 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013B5A0(void)
{

loc_0013B5A0: ;
    edx = MEM32(ecx + 4);
    eax = MEM32(esp + 4);
    MEM32(eax) = edx;
    edx = MEM32(ecx + 8);
    MEM32(eax + 4) = edx;
    ecx = MEM32(ecx + 0xC);
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = 0x3F800000;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0013B5C0
 * Original: 0x0013B5C0 - 0x0013B5C7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013B5C0(void)
{

loc_0013B5C0: ;
    eax = ecx + 0x4C0;
    esp += 4; return; /* ret */

}

/**
 * sub_0013B5D0
 * Original: 0x0013B5D0 - 0x0013B5D7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013B5D0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0013B5D0: ;
    fp_push(MEMF(ecx + 0x94)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0013B5E0
 * Original: 0x0013B5E0 - 0x0013B5E4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013B5E0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0013B5E0: ;
    fp_push(MEMF(ecx + 0x74)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0013B5F0
 * Original: 0x0013B5F0 - 0x0013B5F7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013B5F0(void)
{

loc_0013B5F0: ;
    eax = MEM32(ecx + 0xC4);
    esp += 4; return; /* ret */

}

/**
 * sub_0013B600
 * Original: 0x0013B600 - 0x0013B66F (111 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013B600(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013B600: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x3BC36B);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    eax = MEM32(0x50D86C);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x30);
    esi = ecx;
    PUSH32(esp, 0x0013B626u); RECOMP_ABI_CALL(0x00102BE0u, sub_00102BE0); /* call 0x00102BE0 */

loc_0013B626: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 4) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x10) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_0013B65A; /* je: equal / zero */

loc_0013B639: ;
    ecx = MEM32(esi + 0x160);
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x0013B647u); RECOMP_ABI_CALL(0x00142D60u, sub_00142D60); /* call 0x00142D60 */

loc_0013B647: ;
    MEM32(esi + 0x14) = eax;
    POP32(esp, esi);
    ecx = MEM32(esp + 4);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0013B65A: ;
    ecx = MEM32(esp + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x14) = eax;
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0013B670
 * Original: 0x0013B670 - 0x0013B671 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013B670(void)
{

loc_0013B670: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013B680
 * Original: 0x0013B680 - 0x0013B6B0 (48 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013B680(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013B680: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = edx | 0xFFFFFFFFu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ecx + 0x150) = eax;
    MEM32(ecx + 0x154) = eax;
    MEM32(ecx + 0x158) = eax;
    MEM32(ecx + 8) = edx;
    MEM32(ecx + 0xC) = edx;
    MEM32(ecx + 0x15C) = eax;
    MEM8(ecx + 4) = LO8(eax);
    MEM8(ecx + 5) = LO8(eax);
    MEM8(ecx + 0x164) = LO8(eax);
    esp += 4; return; /* ret */

}

/**
 * sub_0013B6B0
 * Original: 0x0013B6B0 - 0x0013B6B7 (7 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013B6B0(void)
{

loc_0013B6B0: ;
    eax = MEM32(ecx + 0x14);
    eax = MEM32(eax + 0x10);
    esp += 4; return; /* ret */

}

/**
 * sub_0013B6C0
 * Original: 0x0013B6C0 - 0x0013B6C1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013B6C0(void)
{

loc_0013B6C0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013B6D0
 * Original: 0x0013B6D0 - 0x0013B6FA (42 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013B6D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013B6D0: ;
    eax = 0x469C4000;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + 0x20) = eax;
    MEM32(ecx + 0x1C) = eax;
    MEM32(ecx + 0x18) = eax;
    eax = 0xC69C4000u;
    MEM32(ecx) = edx;
    MEM32(ecx + 0x30) = eax;
    MEM32(ecx + 0x2C) = eax;
    MEM32(ecx + 0x28) = eax;
    MEM32(ecx + 0x38) = edx;
    MEM32(ecx + 0x3C) = edx;
    MEM32(ecx + 0x40) = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_0013B700
 * Original: 0x0013B700 - 0x0013B7A4 (164 bytes, 55 insns)
 * CC: cdecl, 3 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0013B700(void)
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

loc_0013B700: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx + 0x18)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ecx + 0x18] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0013B715; /* jp: parity */

loc_0013B70E: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x18) = eax;

loc_0013B715: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx + 0x1C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ecx + 0x1c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0013B72A; /* jp: parity */

loc_0013B723: ;
    edx = MEM32(esp + 8);
    MEM32(ecx + 0x1C) = edx;

loc_0013B72A: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx + 0x20)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ecx + 0x20] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0013B73F; /* jp: parity */

loc_0013B738: ;
    eax = MEM32(esp + 0xC);
    MEM32(ecx + 0x20) = eax;

loc_0013B73F: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx + 0x28)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ecx + 0x28] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0013B754; /* jne: not equal / not zero */

loc_0013B74D: ;
    edx = MEM32(esp + 4);
    MEM32(ecx + 0x28) = edx;

loc_0013B754: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx + 0x2C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ecx + 0x2c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0013B769; /* jne: not equal / not zero */

loc_0013B762: ;
    eax = MEM32(esp + 8);
    MEM32(ecx + 0x2C) = eax;

loc_0013B769: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ecx + 0x30)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ecx + 0x30] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0013B77E; /* jne: not equal / not zero */

loc_0013B777: ;
    edx = MEM32(esp + 0xC);
    MEM32(ecx + 0x30) = edx;

loc_0013B77E: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    eax = MEM32(ecx);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0x38)); /* fadd dword ptr [ecx + 0x38] */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx) = eax;
    MEMF(ecx + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0x3C)); /* fadd dword ptr [ecx + 0x3c] */
    MEMF(ecx + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + 0x40)); /* fadd dword ptr [ecx + 0x40] */
    MEMF(ecx + 0x40) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0013B7B0
 * Original: 0x0013B7B0 - 0x0013B885 (213 bytes, 71 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0013B7B0(void)
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

loc_0013B7B0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    fp_push((double)SMEM32(ecx)); /* fild */
    fp_top() = RECOMP_FP_PC(MEMF(0x496454) / fp_top()); /* fdivr dword ptr [0x496454] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x38)); /* fmul dword ptr [ecx + 0x38] */
    MEMF(ecx + 0x38) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x3C)); /* fmul dword ptr [ecx + 0x3c] */
    MEMF(ecx + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x40)); /* fmul dword ptr [ecx + 0x40] */
    MEMF(ecx + 0x40) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 0x28)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + 0x18)); /* fsub dword ptr [ecx + 0x18] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x496B98)); /* fmul dword ptr [0x496b98] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 0x2C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + 0x1C)); /* fsub dword ptr [ecx + 0x1c] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x496B98)); /* fmul dword ptr [0x496b98] */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 0x30)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + 0x20)); /* fsub dword ptr [ecx + 0x20] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x496B98)); /* fmul dword ptr [0x496b98] */
    fp_push(MEMF(esp)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x4964E8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x4964e8] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0013B814; /* jp: parity */

loc_0013B80C: ;
    fp_push(MEMF(esp)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */

loc_0013B814: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x4964E8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x4964e8] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0013B82F; /* jp: parity */

loc_0013B825: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */

loc_0013B82F: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x4964E8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x4964e8] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0013B83E; /* jp: parity */

loc_0013B83C: ;
    fp_top() = -fp_top(); /* fchs */

loc_0013B83E: ;
    fp_push(MEMF(esp)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0013B864; /* jne: not equal / not zero */

loc_0013B84C: ;
    fp_push(MEMF(esp)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0013B87E; /* jne: not equal / not zero */

loc_0013B858: ;
    eax = MEM32(esp);
    fp_pop(); /* fstp st(0) */
    MEM32(ecx + 0x48) = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0013B864: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0013B87E; /* jne: not equal / not zero */

loc_0013B871: ;
    edx = MEM32(esp + 4);
    fp_pop(); /* fstp st(0) */
    MEM32(ecx + 0x48) = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0013B87E: ;
    MEMF(ecx + 0x48) = (float)fp_top(); fp_pop(); /* fstp */
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
 * sub_0013B890
 * Original: 0x0013B890 - 0x0013B8CD (61 bytes, 26 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013B890(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013B890: ;
    eax = MEM32(ecx + 0x158);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013B89F; /* je: equal / zero */

loc_0013B89A: ;
    ecx = eax + -16;
    goto loc_0013B8A1;

loc_0013B89F: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0013B8A1: ;
    edx = MEM32(ecx + 0x20);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_0013B8B0: ;
    edi = 1;
    ecx = eax;
    edi = edi << LO8(ecx);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, edi (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0013B8C0; /* je: equal / zero */

loc_0013B8BD: ;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0013B8C8; /* je: equal / zero */

loc_0013B8C0: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0013B8B0; /* jl: less (signed <) */

loc_0013B8C6: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0013B8C8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0013BB80
 * Original: 0x0013BB80 - 0x0013BBB5 (53 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013BB80(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013BB80: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x14);
    PUSH32(esp, 1);
    ecx = esp + 4;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x5A);
    MEM32(esp + 0xC) = 0x3F800000;
    MEM32(esp + 0x10) = 0x3F800000;
    MEM32(esp + 0x14) = 0x3F800000;
    MEM32(esp + 0x18) = eax;
    PUSH32(esp, 0x0013BBB1u); RECOMP_ABI_CALL(0x00118440u, sub_00118440); /* call 0x00118440 */

loc_0013BBB1: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0013BBC0
 * Original: 0x0013BBC0 - 0x0013BBD2 (18 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013BBC0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013BBC0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0x36);
    PUSH32(esp, 0x0013BBCEu); RECOMP_ABI_CALL(0x00118440u, sub_00118440); /* call 0x00118440 */

loc_0013BBCE: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0013BBE0
 * Original: 0x0013BBE0 - 0x0013BC29 (73 bytes, 20 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013BBE0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013BBE0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    esi = ecx;
    ecx = ecx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi + 0x150) = eax;
    MEM32(esi + 0x154) = eax;
    MEM32(esi + 0x158) = eax;
    MEM32(esi + 0x15C) = eax;
    MEM8(esi + 4) = LO8(eax);
    MEM8(esi + 5) = LO8(eax);
    MEM8(esi + 0x164) = LO8(eax);
    eax = MEM32(esp + 8);
    MEM32(esi + 8) = ecx;
    MEM32(esi + 0xC) = ecx;
    ecx = esi;
    MEM32(esi + 0x160) = eax;
    PUSH32(esp, 0x0013BC23u); RECOMP_ABI_CALL(0x0013B600u, sub_0013B600); /* call 0x0013B600 */

loc_0013BC23: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0013BC30
 * Original: 0x0013BC30 - 0x0013BC31 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013BC30(void)
{

loc_0013BC30: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013C6F0
 * Original: 0x0013C6F0 - 0x0013C99C (684 bytes, 200 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013C6F0(void)
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

loc_0013C6F0: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    esi = MEM32(eax + 8);
    PUSH32(esp, 1);
    PUSH32(esp, 0x50FA90);
    PUSH32(esp, 0x12);
    MEM32(0x50FA90) = 0;
    MEM32(0x50FA94) = 0;
    PUSH32(esp, 0x0013C71Du); RECOMP_ABI_CALL(0x00118440u, sub_00118440); /* call 0x00118440 */

loc_0013C71D: ;
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x142);
    MEM32(esp + 0x24) = ecx;
    PUSH32(esp, 1);
    edx = esp + 0x14;
    fp_push((double)SMEM32(esp + 0x28)); /* fild */
    PUSH32(esp, edx);
    PUSH32(esp, 0x5A);
    MEM32(esp + 0x1C) = 0x3F800000;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x4A8598)); /* fmul dword ptr [0x4a8598] */
    MEM32(esp + 0x20) = 0x3F800000;
    MEM32(esp + 0x24) = 0x3F800000;
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0013C75Cu); RECOMP_ABI_CALL(0x00118440u, sub_00118440); /* call 0x00118440 */

loc_0013C75C: ;
    ecx = MEM32(0x63AFB4);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013C774; /* jne: not equal / not zero */

loc_0013C769: ;
    ecx = 0x63AFB8;
    MEM32(0x63AFB4) = ecx;

loc_0013C774: ;
    eax = MEM32(0x63A238);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0013C77Fu); RECOMP_ABI_CALL(0x0013B2F0u, sub_0013B2F0); /* call 0x0013B2F0 */

loc_0013C77F: ;
    ecx = MEM32(0x63AFB4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013C794; /* jne: not equal / not zero */

loc_0013C789: ;
    ecx = 0x63AFB8;
    MEM32(0x63AFB4) = ecx;

loc_0013C794: ;
    edx = MEM32(0x63A3EC);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0013C7A0u); RECOMP_ABI_CALL(0x0013B2F0u, sub_0013B2F0); /* call 0x0013B2F0 */

loc_0013C7A0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x3C);
    PUSH32(esp, 0x0013C7A9u); RECOMP_ABI_CALL(0x0012F6B0u, sub_0012F6B0); /* call 0x0012F6B0 */

loc_0013C7A9: ;
    ecx = eax;
    PUSH32(esp, 0x0013C7B0u); RECOMP_ABI_CALL(0x0012F5A0u, sub_0012F5A0); /* call 0x0012F5A0 */

loc_0013C7B0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x40);
    PUSH32(esp, 0x0013C7B9u); RECOMP_ABI_CALL(0x0012F6B0u, sub_0012F6B0); /* call 0x0012F6B0 */

loc_0013C7B9: ;
    ecx = eax;
    PUSH32(esp, 0x0013C7C0u); RECOMP_ABI_CALL(0x0012F5A0u, sub_0012F5A0); /* call 0x0012F5A0 */

loc_0013C7C0: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x8F);
    PUSH32(esp, 0x0013C7CCu); RECOMP_ABI_CALL(0x0012F6B0u, sub_0012F6B0); /* call 0x0012F6B0 */

loc_0013C7CC: ;
    ecx = eax;
    PUSH32(esp, 0x0013C7D3u); RECOMP_ABI_CALL(0x0012F5A0u, sub_0012F5A0); /* call 0x0012F5A0 */

loc_0013C7D3: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x93);
    PUSH32(esp, 0x0013C7DFu); RECOMP_ABI_CALL(0x0012F6B0u, sub_0012F6B0); /* call 0x0012F6B0 */

loc_0013C7DF: ;
    ecx = eax;
    PUSH32(esp, 0x0013C7E6u); RECOMP_ABI_CALL(0x0012F5A0u, sub_0012F5A0); /* call 0x0012F5A0 */

loc_0013C7E6: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x66);
    PUSH32(esp, 0x0013C7EFu); RECOMP_ABI_CALL(0x0012F6B0u, sub_0012F6B0); /* call 0x0012F6B0 */

loc_0013C7EF: ;
    ecx = eax;
    PUSH32(esp, 0x0013C7F6u); RECOMP_ABI_CALL(0x0012F5A0u, sub_0012F5A0); /* call 0x0012F5A0 */

loc_0013C7F6: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x3B);
    PUSH32(esp, 0x0013C7FFu); RECOMP_ABI_CALL(0x0012F6B0u, sub_0012F6B0); /* call 0x0012F6B0 */

loc_0013C7FF: ;
    ecx = eax;
    PUSH32(esp, 0x0013C806u); RECOMP_ABI_CALL(0x0012F5A0u, sub_0012F5A0); /* call 0x0012F5A0 */

loc_0013C806: ;
    PUSH32(esp, 5);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0013C811u); RECOMP_ABI_CALL(0x0012F6B0u, sub_0012F6B0); /* call 0x0012F6B0 */

loc_0013C811: ;
    ecx = eax;
    PUSH32(esp, 0x0013C818u); RECOMP_ABI_CALL(0x0012F450u, sub_0012F450); /* call 0x0012F450 */

loc_0013C818: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x12);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0013C823u); RECOMP_ABI_CALL(0x0012F6B0u, sub_0012F6B0); /* call 0x0012F6B0 */

loc_0013C823: ;
    ecx = eax;
    PUSH32(esp, 0x0013C82Au); RECOMP_ABI_CALL(0x0012F450u, sub_0012F450); /* call 0x0012F450 */

loc_0013C82A: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x13);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0013C835u); RECOMP_ABI_CALL(0x0012F6B0u, sub_0012F6B0); /* call 0x0012F6B0 */

loc_0013C835: ;
    ecx = eax;
    PUSH32(esp, 0x0013C83Cu); RECOMP_ABI_CALL(0x0012F450u, sub_0012F450); /* call 0x0012F450 */

loc_0013C83C: ;
    SET_LO8(eax, MEM8(esi + 0x72));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013C8BC; /* jne: not equal / not zero */

loc_0013C843: ;
    SET_LO16(esi, MEM16(esi + 0x13A));
    _fa = (uint32_t)(LO16(esi)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(esi), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013C8BC; /* je: equal / zero */

loc_0013C84F: ;
    PUSH32(esp, 5);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0013C85Au); RECOMP_ABI_CALL(0x0012F6B0u, sub_0012F6B0); /* call 0x0012F6B0 */

loc_0013C85A: ;
    ecx = eax;
    PUSH32(esp, 0x0013C861u); RECOMP_ABI_CALL(0x0012F450u, sub_0012F450); /* call 0x0012F450 */

loc_0013C861: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0xE);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0013C86Cu); RECOMP_ABI_CALL(0x0012F6B0u, sub_0012F6B0); /* call 0x0012F6B0 */

loc_0013C86C: ;
    ecx = eax;
    PUSH32(esp, 0x0013C873u); RECOMP_ABI_CALL(0x0012F450u, sub_0012F450); /* call 0x0012F450 */

loc_0013C873: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0xF);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0013C87Eu); RECOMP_ABI_CALL(0x0012F6B0u, sub_0012F6B0); /* call 0x0012F6B0 */

loc_0013C87E: ;
    ecx = eax;
    PUSH32(esp, 0x0013C885u); RECOMP_ABI_CALL(0x0012F450u, sub_0012F450); /* call 0x0012F450 */

loc_0013C885: ;
    _fa = (uint32_t)(LO16(esi)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(esi), 1 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013C892; /* jne: not equal / not zero */

loc_0013C88B: ;
    PUSH32(esp, 0x8006);
    goto loc_0013C897;

loc_0013C892: ;
    PUSH32(esp, 0x800B);

loc_0013C897: ;
    PUSH32(esp, 0x4A);
    PUSH32(esp, 0x0013C89Eu); RECOMP_ABI_CALL(0x0012F6B0u, sub_0012F6B0); /* call 0x0012F6B0 */

loc_0013C89E: ;
    ecx = eax;
    PUSH32(esp, 0x0013C8A5u); RECOMP_ABI_CALL(0x0012F5A0u, sub_0012F5A0); /* call 0x0012F5A0 */

loc_0013C8A5: ;
    PUSH32(esp, 0x302);
    PUSH32(esp, 0x3E);
    PUSH32(esp, 0x0013C8B1u); RECOMP_ABI_CALL(0x0012F6B0u, sub_0012F6B0); /* call 0x0012F6B0 */

loc_0013C8B1: ;
    ecx = eax;
    PUSH32(esp, 0x0013C8B8u); RECOMP_ABI_CALL(0x0012F5A0u, sub_0012F5A0); /* call 0x0012F5A0 */

loc_0013C8B8: ;
    PUSH32(esp, 1);
    goto loc_0013C91D;

loc_0013C8BC: ;
    PUSH32(esp, 5);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0013C8C7u); RECOMP_ABI_CALL(0x0012F6B0u, sub_0012F6B0); /* call 0x0012F6B0 */

loc_0013C8C7: ;
    ecx = eax;
    PUSH32(esp, 0x0013C8CEu); RECOMP_ABI_CALL(0x0012F450u, sub_0012F450); /* call 0x0012F450 */

loc_0013C8CE: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0xE);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0013C8D9u); RECOMP_ABI_CALL(0x0012F6B0u, sub_0012F6B0); /* call 0x0012F6B0 */

loc_0013C8D9: ;
    ecx = eax;
    PUSH32(esp, 0x0013C8E0u); RECOMP_ABI_CALL(0x0012F450u, sub_0012F450); /* call 0x0012F450 */

loc_0013C8E0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0xF);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0013C8EBu); RECOMP_ABI_CALL(0x0012F6B0u, sub_0012F6B0); /* call 0x0012F6B0 */

loc_0013C8EB: ;
    ecx = eax;
    PUSH32(esp, 0x0013C8F2u); RECOMP_ABI_CALL(0x0012F450u, sub_0012F450); /* call 0x0012F450 */

loc_0013C8F2: ;
    PUSH32(esp, 0x8006);
    PUSH32(esp, 0x4A);
    PUSH32(esp, 0x0013C8FEu); RECOMP_ABI_CALL(0x0012F6B0u, sub_0012F6B0); /* call 0x0012F6B0 */

loc_0013C8FE: ;
    ecx = eax;
    PUSH32(esp, 0x0013C905u); RECOMP_ABI_CALL(0x0012F5A0u, sub_0012F5A0); /* call 0x0012F5A0 */

loc_0013C905: ;
    PUSH32(esp, 0x302);
    PUSH32(esp, 0x3E);
    PUSH32(esp, 0x0013C911u); RECOMP_ABI_CALL(0x0012F6B0u, sub_0012F6B0); /* call 0x0012F6B0 */

loc_0013C911: ;
    ecx = eax;
    PUSH32(esp, 0x0013C918u); RECOMP_ABI_CALL(0x0012F5A0u, sub_0012F5A0); /* call 0x0012F5A0 */

loc_0013C918: ;
    PUSH32(esp, 0x303);

loc_0013C91D: ;
    PUSH32(esp, 0x3F);
    PUSH32(esp, 0x0013C924u); RECOMP_ABI_CALL(0x0012F6B0u, sub_0012F6B0); /* call 0x0012F6B0 */

loc_0013C924: ;
    ecx = eax;
    PUSH32(esp, 0x0013C92Bu); RECOMP_ABI_CALL(0x0012F5A0u, sub_0012F5A0); /* call 0x0012F5A0 */

loc_0013C92B: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0xC);
    PUSH32(esp, 1);
    PUSH32(esp, 0x0013C936u); RECOMP_ABI_CALL(0x0012F6B0u, sub_0012F6B0); /* call 0x0012F6B0 */

loc_0013C936: ;
    ecx = eax;
    PUSH32(esp, 0x0013C93Du); RECOMP_ABI_CALL(0x0012F450u, sub_0012F450); /* call 0x0012F450 */

loc_0013C93D: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x10);
    PUSH32(esp, 1);
    PUSH32(esp, 0x0013C948u); RECOMP_ABI_CALL(0x0012F6B0u, sub_0012F6B0); /* call 0x0012F6B0 */

loc_0013C948: ;
    ecx = eax;
    PUSH32(esp, 0x0013C94Fu); RECOMP_ABI_CALL(0x0012F450u, sub_0012F450); /* call 0x0012F450 */

loc_0013C94F: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0xC);
    PUSH32(esp, 2);
    PUSH32(esp, 0x0013C95Au); RECOMP_ABI_CALL(0x0012F6B0u, sub_0012F6B0); /* call 0x0012F6B0 */

loc_0013C95A: ;
    ecx = eax;
    PUSH32(esp, 0x0013C961u); RECOMP_ABI_CALL(0x0012F450u, sub_0012F450); /* call 0x0012F450 */

loc_0013C961: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x10);
    PUSH32(esp, 2);
    PUSH32(esp, 0x0013C96Cu); RECOMP_ABI_CALL(0x0012F6B0u, sub_0012F6B0); /* call 0x0012F6B0 */

loc_0013C96C: ;
    ecx = eax;
    PUSH32(esp, 0x0013C973u); RECOMP_ABI_CALL(0x0012F450u, sub_0012F450); /* call 0x0012F450 */

loc_0013C973: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0xC);
    PUSH32(esp, 3);
    PUSH32(esp, 0x0013C97Eu); RECOMP_ABI_CALL(0x0012F6B0u, sub_0012F6B0); /* call 0x0012F6B0 */

loc_0013C97E: ;
    ecx = eax;
    PUSH32(esp, 0x0013C985u); RECOMP_ABI_CALL(0x0012F450u, sub_0012F450); /* call 0x0012F450 */

loc_0013C985: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x10);
    PUSH32(esp, 3);
    PUSH32(esp, 0x0013C990u); RECOMP_ABI_CALL(0x0012F6B0u, sub_0012F6B0); /* call 0x0012F6B0 */

loc_0013C990: ;
    ecx = eax;
    PUSH32(esp, 0x0013C997u); RECOMP_ABI_CALL(0x0012F450u, sub_0012F450); /* call 0x0012F450 */

loc_0013C997: ;
    POP32(esp, esi);
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
 * sub_0013CA90
 * Original: 0x0013CA90 - 0x0013CB0E (126 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013CA90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0013CA90: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    ebx = MEM32(ebp);
    eax = MEM32(ebx + 0x154);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0013CAA9u); RECOMP_ABI_CALL(0x0012F6B0u, sub_0012F6B0); /* call 0x0012F6B0 */

loc_0013CAA9: ;
    ecx = eax;
    PUSH32(esp, 0x0013CAB0u); RECOMP_ABI_CALL(0x0012F3E0u, sub_0012F3E0); /* call 0x0012F3E0 */

loc_0013CAB0: ;
    eax = MEM32(ebx + 0x158);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    esi = ebp + 0x10;
    edi = ebx + 0xD0;
    ecx = 0x10;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    esi = ebp + 0x50;
    edi = ebx + 0x110;
    ecx = 0x10;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    if (CMP_EQ(_fa, _fb)) goto loc_0013CADF; /* je: equal / zero */

loc_0013CADA: ;
    _fb = (uint32_t)(0xFFFFFFF0u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFF0u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0013CAE1;

loc_0013CADF: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0013CAE1: ;
    ecx = MEM32(ebp + 0x90);
    MEM32(eax + 0xC4) = ecx;
    ecx = ebx;
    MEM32(ebx + 0x17C) = 0x78;
    PUSH32(esp, 0x0013CAFEu); RECOMP_ABI_CALL(0x0013C020u, sub_0013C020); /* call 0x0013C020 */

loc_0013CAFE: ;
    eax = MEM32(0x63AFDC);
    POP32(esp, edi);
    POP32(esp, esi);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, ebp);
    MEM32(0x63AFDC) = eax;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0013D600
 * Original: 0x0013D600 - 0x0013D633 (51 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013D600(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013D600: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + 0x158);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013D613; /* je: equal / zero */

loc_0013D60E: ;
    _fb = (uint32_t)(0xFFFFFFF0u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFF0u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0013D615;

loc_0013D613: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0013D615: ;
    MEM8(0x50FF48) = 1;
    _fa = (uint32_t)(MEM32(eax + 0xE0)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xE0), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013D632; /* je: equal / zero */

loc_0013D625: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x0013D62Cu); RECOMP_ABI_CALL(0x0013CF20u, sub_0013CF20); /* call 0x0013CF20 */

loc_0013D62C: ;
    MEM32(0x63AFD8) = MEM32(0x63AFD8) + 1;
    _fa = (uint32_t)(MEM32(0x63AFD8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0013D632: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013D6F0
 * Original: 0x0013D6F0 - 0x0013D6F4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013D6F0(void)
{

loc_0013D6F0: ;
    eax = ecx + 0x7C;
    esp += 4; return; /* ret */

}

/**
 * sub_0013D700
 * Original: 0x0013D700 - 0x0013D704 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013D700(void)
{

loc_0013D700: ;
    eax = ecx + 0x4C;
    esp += 4; return; /* ret */

}

/**
 * sub_0013D710
 * Original: 0x0013D710 - 0x0013D717 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013D710(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0013D710: ;
    fp_push(MEMF(ecx + 0x90)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0013D720
 * Original: 0x0013D720 - 0x0013D727 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013D720(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0013D720: ;
    fp_push(MEMF(ecx + 0x94)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0013D730
 * Original: 0x0013D730 - 0x0013D737 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013D730(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0013D730: ;
    fp_push(MEMF(ecx + 0x98)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0013DC60
 * Original: 0x0013DC60 - 0x0013DC71 (17 bytes, 6 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013DC60(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013DC60: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0013DC6Bu); RECOMP_ABI_CALL(0x00107100u, sub_00107100); /* call 0x00107100 */

loc_0013DC6B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0013DF40
 * Original: 0x0013DF40 - 0x0013DF4D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013DF40(void)
{

loc_0013DF40: ;
    SET_LO8(eax, MEM8(esp + 4));
    MEM8(ecx + 0xE8) = LO8(eax);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0013DF50
 * Original: 0x0013DF50 - 0x0013DF58 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013DF50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0013DF50: ;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x34;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00149980(); return; /* tail jmp 0x00149980 */

}

/**
 * sub_0013DF60
 * Original: 0x0013DF60 - 0x0013DF80 (32 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013DF60(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013DF60: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    ecx = esi + 0x34;
    PUSH32(esp, 0x0013DF6Cu); RECOMP_ABI_CALL(0x0014B1C0u, sub_0014B1C0); /* call 0x0014B1C0 */

loc_0013DF6C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = esi + 4;
    MEM8(esi) = 0;
    ecx = 0xC;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0013E1B0
 * Original: 0x0013E1B0 - 0x0013E1BE (14 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013E1B0(void)
{

loc_0013E1B0: ;
    eax = ecx;
    MEM32(eax) = 0x4AD1C8;
    MEM32(0x63D048) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0013E8B0
 * Original: 0x0013E8B0 - 0x0013E8C4 (20 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013E8B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013E8B0: ;
    eax = MEM32(0x50D86C);
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0013E8C0u); RECOMP_ABI_CALL(0x00102BE0u, sub_00102BE0); /* call 0x00102BE0 */

loc_0013E8C0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0013E8D0
 * Original: 0x0013E8D0 - 0x0013E8DA (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013E8D0(void)
{

loc_0013E8D0: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 8) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0013E8E0
 * Original: 0x0013E8E0 - 0x0013E8E4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013E8E0(void)
{

loc_0013E8E0: ;
    eax = MEM32(ecx + 8);
    esp += 4; return; /* ret */

}

/**
 * sub_0013E8F0
 * Original: 0x0013E8F0 - 0x0013E8F1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013E8F0(void)
{

loc_0013E8F0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013E900
 * Original: 0x0013E900 - 0x0013E9F7 (247 bytes, 92 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013E900(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013E900: ;
    eax = MEM32(ecx + 4);
    PUSH32(esp, ebx);
    MEM32(ecx + 8) = eax;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx) = edi;
    MEM32(eax + 0x14) = edi;
    eax = MEM32(ecx + 8);
    edx = eax + 0x1C;
    MEM32(eax + 0x18) = edx;
    eax = MEM32(ecx + 8);
    MEM32(eax + 4) = edi;
    edx = MEM32(ecx + 8);
    MEM32(edx) = edi;
    eax = MEM32(ecx + 0x10);
    esi = 1;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0013E965; /* jle: less or equal (signed <=) */

loc_0013E931: ;
    eax = 0x1C;

loc_0013E936: ;
    edx = MEM32(ecx + 8);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = edx + -28;
    MEM32(edx + 0x14) = ebx;
    edx = MEM32(ecx + 8);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = edx + 0x1C;
    MEM32(edx + 0x18) = ebx;
    edx = MEM32(ecx + 8);
    MEM32(eax + edx + 4) = edi;
    edx = MEM32(ecx + 8);
    MEM32(eax + edx) = edi;
    edx = MEM32(ecx + 0x10);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x1C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0013E936; /* jl: less (signed <) */

loc_0013E965: ;
    eax = MEM32(ecx + 0x10);
    edx = MEM32(ecx + 8);
    esi = eax + -2;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1C);
    esi = (uint32_t)((int32_t)esi * (int32_t)0x1C);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + edx + -8) = esi;
    eax = MEM32(ecx + 0x10);
    edx = MEM32(ecx + 8);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1C);
    MEM32(eax + edx + -4) = edi;
    eax = MEM32(ecx + 0x14);
    MEM32(ecx + 0x18) = eax;
    MEM32(eax + 4) = edi;
    eax = MEM32(ecx + 0x18);
    edx = eax + 0xC;
    MEM32(eax + 8) = edx;
    eax = MEM32(ecx + 0xC);
    esi = 1;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0013E9D2; /* jle: less or equal (signed <=) */

loc_0013E9A6: ;
    eax = 0xC;
    goto loc_0013E9B0;

    /* nop */

loc_0013E9B0: ;
    edx = MEM32(ecx + 0x18);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = edx + -12;
    MEM32(edx + 4) = ebx;
    edx = MEM32(ecx + 0x18);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = edx + 0xC;
    MEM32(edx + 8) = ebx;
    edx = MEM32(ecx + 0xC);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0013E9B0; /* jl: less (signed <) */

loc_0013E9D2: ;
    eax = MEM32(ecx + 0xC);
    edx = MEM32(ecx + 0x18);
    esi = eax + eax * 2 + -6;
    esi = edx + esi * 4;
    eax = eax + eax * 2;
    MEM32(edx + eax * 4 + -8) = esi;
    eax = MEM32(ecx + 0xC);
    edx = eax + eax * 2;
    eax = MEM32(ecx + 0x18);
    MEM32(eax + edx * 4 + -4) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0013EB60
 * Original: 0x0013EB60 - 0x0013EBAC (76 bytes, 33 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013EB60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0013EB60: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    ebp = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0013EB72; /* je: equal / zero */

loc_0013EB6D: ;
    ebx = eax + 0x10;
    goto loc_0013EB74;

loc_0013EB72: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0013EB74: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(ebx + 0x42)) & 0xFFFFu; _fb = (uint32_t)(LO16(edi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebx + 0x42), LO16(edi) (16-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0013EBA6; /* jle: less or equal (signed <=) */

loc_0013EB7C: ;
    PUSH32(esp, esi);
    /* nop */

loc_0013EB80: ;
    eax = MEM32(ebx + 0x44);
    esi = MEM32(eax + edi * 4);
    eax = MEM32(esi + 0x154);
    ecx = MEM32(eax + 4);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    ecx = MEM32(ebp);
    PUSH32(esp, 0x0013EB99u); RECOMP_ABI_CALL(0x0013EA00u, sub_0013EA00); /* call 0x0013EA00 */

loc_0013EB99: ;
    MEM32(esi + 8) = eax;
    edx = (uint32_t)(int32_t)SMEM16(ebx + 0x42);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0013EB80; /* jl: less (signed <) */

loc_0013EBA5: ;
    POP32(esp, esi);

loc_0013EBA6: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0013EBB0
 * Original: 0x0013EBB0 - 0x0013EBF5 (69 bytes, 30 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013EBB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013EBB0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0013EBC2; /* je: equal / zero */

loc_0013EBBD: ;
    edi = eax + 0x10;
    goto loc_0013EBC4;

loc_0013EBC2: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0013EBC4: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(edi + 0x42)) & 0xFFFFu; _fb = (uint32_t)(LO16(esi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edi + 0x42), LO16(esi) (16-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0013EBEF; /* jle: less or equal (signed <=) */

loc_0013EBCC: ;
    /* nop */

loc_0013EBD0: ;
    eax = MEM32(edi + 0x44);
    eax = MEM32(eax + esi * 4);
    eax = MEM32(eax + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013EBE6; /* je: equal / zero */

loc_0013EBDE: ;
    ecx = MEM32(ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0013EBE6u); RECOMP_ABI_CALL(0x0013EAE0u, sub_0013EAE0); /* call 0x0013EAE0 */

loc_0013EBE6: ;
    ecx = (uint32_t)(int32_t)SMEM16(edi + 0x42);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0013EBD0; /* jl: less (signed <) */

loc_0013EBEF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0013EC00
 * Original: 0x0013EC00 - 0x0013EC07 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013EC00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0013EC00: ;
    ecx = MEM32(ecx);
    g_seh_ebp = ebp; sub_0013E900(); return; /* tail jmp 0x0013E900 */

}

/**
 * sub_0013ED60
 * Original: 0x0013ED60 - 0x0013ED70 (16 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013ED60(void)
{

loc_0013ED60: ;
    eax = MEM32(esp + 4);
    MEM32(ecx) = 1;
    MEM32(ecx + 4) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0013ED70
 * Original: 0x0013ED70 - 0x0013ED80 (16 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013ED70(void)
{

loc_0013ED70: ;
    eax = MEM32(esp + 4);
    MEM32(ecx) = 3;
    MEM32(ecx + 4) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0013ED80
 * Original: 0x0013ED80 - 0x0013ED90 (16 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013ED80(void)
{

loc_0013ED80: ;
    eax = MEM32(esp + 4);
    MEM32(ecx) = 2;
    MEM32(ecx + 4) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0013ED90
 * Original: 0x0013ED90 - 0x0013EE37 (167 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013ED90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0013ED90: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    ecx = MEM32(0x639224);
    edx = MEM32(ecx + 0x143B0);
    if (CMP_NE(_fa, _fb)) goto loc_0013EDCC; /* jne: not equal / not zero */

loc_0013EDA6: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013EDBE; /* je: equal / zero */

loc_0013EDAA: ;
    PUSH32(esp, 0x0013EDAFu); RECOMP_ABI_CALL(0x00120E70u, sub_00120E70); /* call 0x00120E70 */

loc_0013EDAF: ;
    eax = MEM32(0x639224);
    MEM32(eax + 0x143B0) = 1;

loc_0013EDBE: ;
    ecx = MEM32(esi + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0013EDC7u); RECOMP_ABI_CALL(0x0013D600u, sub_0013D600); /* call 0x0013D600 */

loc_0013EDC7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0013EDCA: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0013EDCC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013EDF8; /* jne: not equal / not zero */

loc_0013EDD1: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013EDEA; /* je: equal / zero */

loc_0013EDD5: ;
    PUSH32(esp, 0x0013EDDAu); RECOMP_ABI_CALL(0x00120E70u, sub_00120E70); /* call 0x00120E70 */

loc_0013EDDA: ;
    edx = MEM32(0x639224);
    MEM32(edx + 0x143B0) = 2;

loc_0013EDEA: ;
    eax = MEM32(esi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0013EDF3u); RECOMP_ABI_CALL(0x0013CA90u, sub_0013CA90); /* call 0x0013CA90 */

loc_0013EDF3: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0013EDF8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0013EDCA; /* jne: not equal / not zero */

loc_0013EDFD: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0013EE1C; /* je: equal / zero */

loc_0013EE01: ;
    ecx = MEM32(0x639714);
    PUSH32(esp, 0x0013EE0Cu); RECOMP_ABI_CALL(0x0012C850u, sub_0012C850); /* call 0x0012C850 */

loc_0013EE0C: ;
    ecx = MEM32(0x639224);
    MEM32(ecx + 0x143B0) = 3;

loc_0013EE1C: ;
    edx = MEM32(esi + 4);
    ecx = MEM32(0x639714);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0013EE2Bu); RECOMP_ABI_CALL(0x0012DC50u, sub_0012DC50); /* call 0x0012DC50 */

loc_0013EE2B: ;
    ecx = MEM32(0x639714);
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0012B3B0(); return; /* tail jmp 0x0012B3B0 */

}

/**
 * sub_0013EE40
 * Original: 0x0013EE40 - 0x0013EE52 (18 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013EE40(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013EE40: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0013EE48u); RECOMP_ABI_CALL(0x0014B9C0u, sub_0014B9C0); /* call 0x0014B9C0 */

loc_0013EE48: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x18) = eax;
    MEM32(esi + 0x14) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0013EE60
 * Original: 0x0013EE60 - 0x0013EECF (111 bytes, 31 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013EE60(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013EE60: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x3BC3A8);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    eax = MEM32(esp + 0x20);
    edx = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esi;
    MEM32(esp + 0x14) = esi;
    PUSH32(esp, 0x0013EE98u); RECOMP_ABI_CALL(0x0014BD60u, sub_0014BD60); /* call 0x0014BD60 */

loc_0013EE98: ;
    ecx = esi;
    MEM32(esp + 0x10) = 0;
    MEM32(esi) = 0x4AD3BC;
    PUSH32(esp, 0x0013EEADu); RECOMP_ABI_CALL(0x0014B9C0u, sub_0014B9C0); /* call 0x0014B9C0 */

loc_0013EEAD: ;
    ecx = MEM32(esp + 8);
    MEM32(esi + 0x18) = 0;
    MEM32(esi + 0x14) = 0;
    eax = esi;
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0013F0D0
 * Original: 0x0013F0D0 - 0x0013F0DB (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013F0D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013F0D0: ;
    eax = ecx;
    SET_LO8(ecx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(eax + 2) = LO8(ecx);
    MEM8(eax + 1) = LO8(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0013F0E0
 * Original: 0x0013F0E0 - 0x0013F0E9 (9 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013F0E0(void)
{

loc_0013F0E0: ;
    SET_LO8(eax, MEM8(esp + 4));
    MEM8(ecx) = LO8(eax);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0013F0F0
 * Original: 0x0013F0F0 - 0x0013F0FA (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013F0F0(void)
{

loc_0013F0F0: ;
    SET_LO8(eax, MEM8(esp + 4));
    MEM8(ecx + 2) = LO8(eax);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0013F100
 * Original: 0x0013F100 - 0x0013F10A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013F100(void)
{

loc_0013F100: ;
    SET_LO8(eax, MEM8(esp + 4));
    MEM8(ecx + 1) = LO8(eax);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0013F110
 * Original: 0x0013F110 - 0x0013F168 (88 bytes, 32 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013F110(void)
{

loc_0013F110: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax);
    MEM32(ecx + 0x10) = edx;
    edx = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(edx);
    MEM32(ecx + 0x20) = esi;
    esi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    edi = MEM32(esi);
    MEM32(ecx + 0x30) = edi;
    edi = MEM32(eax + 4);
    MEM32(ecx + 0x14) = edi;
    edi = MEM32(edx + 4);
    MEM32(ecx + 0x24) = edi;
    edi = MEM32(esi + 4);
    MEM32(ecx + 0x34) = edi;
    edi = MEM32(eax + 8);
    MEM32(ecx + 0x18) = edi;
    edi = MEM32(edx + 8);
    MEM32(ecx + 0x28) = edi;
    edi = MEM32(esi + 8);
    MEM32(ecx + 0x38) = edi;
    eax = MEM32(eax + 0xC);
    MEM32(ecx + 0x1C) = eax;
    edx = MEM32(edx + 0xC);
    MEM32(ecx + 0x2C) = edx;
    eax = MEM32(esi + 0xC);
    POP32(esp, edi);
    MEM32(ecx + 0x3C) = eax;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0013F170
 * Original: 0x0013F170 - 0x0013F180 (16 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013F170(void)
{

loc_0013F170: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x58) = eax;
    MEM32(ecx + 0x5C) = eax;
    MEM32(ecx + 0x60) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0013F1A0
 * Original: 0x0013F1A0 - 0x0013F1A4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013F1A0(void)
{

loc_0013F1A0: ;
    SET_LO8(eax, MEM8(ecx + 0xA));
    esp += 4; return; /* ret */

}

/**
 * sub_0013F1B0
 * Original: 0x0013F1B0 - 0x0013F1C9 (25 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013F1B0(void)
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

loc_0013F1B0: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 8] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0013F1C4; /* jp: parity */

loc_0013F1BF: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    esp += 4; return; /* ret */

loc_0013F1C4: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0013F1D0
 * Original: 0x0013F1D0 - 0x0013F1E9 (25 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013F1D0(void)
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

loc_0013F1D0: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 8] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0013F1E4; /* jp: parity */

loc_0013F1DF: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    esp += 4; return; /* ret */

loc_0013F1E4: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0013F1F0
 * Original: 0x0013F1F0 - 0x0013F21D (45 bytes, 16 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0013F1F0(void)
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

loc_0013F1F0: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0xC)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0xc] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0013F205; /* jp: parity */

loc_0013F1FF: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    goto loc_0013F209;

loc_0013F205: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */

loc_0013F209: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp st(1) */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0013F21C; /* jnp: not parity */

loc_0013F216: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(esp + 8)); /* fld float */

loc_0013F21C: ;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0013F220
 * Original: 0x0013F220 - 0x0013F359 (313 bytes, 109 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013F220(void)
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

loc_0013F220: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    eax = MEM32(esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    MEM32(ecx + 0x40) = eax;
    fp_push(MEMF(edi)); /* fld float */
    MEMF(ecx + 0x4C) = (float)fp_top(); /* fst */
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    fp_push(MEMF(ecx + 0x40)); /* fld float */
    SET_LO8(edx, 0); /* xor self */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x4964E8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x4964e8] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0013F259; /* jnp: not parity */

loc_0013F249: ;
    fp_push(MEMF(ecx + 0x40)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x496454)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x496454] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0013F25B; /* jne: not equal / not zero */

loc_0013F259: ;
    SET_LO8(ebx, 1);

loc_0013F25B: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x4964E8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x4964e8] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0013F277; /* jnp: not parity */

loc_0013F268: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x496454)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x496454] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0013F27B; /* jne: not equal / not zero */

loc_0013F275: ;
    goto loc_0013F279;

loc_0013F277: ;
    fp_pop(); /* fstp st(0) */

loc_0013F279: ;
    SET_LO8(edx, 1);

loc_0013F27B: ;
    fp_push(MEMF(ecx + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x40)); /* fmul dword ptr [ecx + 0x40] */
    MEMF(ecx + 0x40) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x4C)); /* fmul dword ptr [ecx + 0x4c] */
    MEMF(ecx + 0x4C) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esi + 4);
    MEM32(ecx + 0x44) = eax;
    fp_push(MEMF(edi + 4)); /* fld float */
    MEMF(ecx + 0x50) = (float)fp_top(); /* fst */
    fp_push(MEMF(ecx + 0x44)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x4964E8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x4964e8] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0013F2B9; /* jnp: not parity */

loc_0013F2A9: ;
    fp_push(MEMF(ecx + 0x44)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x496454)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x496454] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0013F2BB; /* jne: not equal / not zero */

loc_0013F2B9: ;
    SET_LO8(ebx, 1);

loc_0013F2BB: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x4964E8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x4964e8] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0013F2D7; /* jnp: not parity */

loc_0013F2C8: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x496454)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x496454] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0013F2DB; /* jne: not equal / not zero */

loc_0013F2D5: ;
    goto loc_0013F2D9;

loc_0013F2D7: ;
    fp_pop(); /* fstp st(0) */

loc_0013F2D9: ;
    SET_LO8(edx, 1);

loc_0013F2DB: ;
    fp_push(MEMF(ecx + 0x44)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 8)); /* fmul dword ptr [ecx + 8] */
    MEMF(ecx + 0x44) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x50)); /* fmul dword ptr [ecx + 0x50] */
    MEMF(ecx + 0x50) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esi + 8);
    MEM32(ecx + 0x48) = eax;
    fp_push(MEMF(edi + 8)); /* fld float */
    MEMF(ecx + 0x54) = (float)fp_top(); /* fst */
    fp_push(MEMF(ecx + 0x48)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x4964E8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x4964e8] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0013F319; /* jnp: not parity */

loc_0013F309: ;
    fp_push(MEMF(ecx + 0x48)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x496454)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x496454] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0013F31B; /* jne: not equal / not zero */

loc_0013F319: ;
    SET_LO8(ebx, 1);

loc_0013F31B: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x4964E8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x4964e8] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0013F337; /* jnp: not parity */

loc_0013F328: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x496454)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x496454] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0013F33B; /* jne: not equal / not zero */

loc_0013F335: ;
    goto loc_0013F339;

loc_0013F337: ;
    fp_pop(); /* fstp st(0) */

loc_0013F339: ;
    SET_LO8(edx, 1);

loc_0013F33B: ;
    fp_push(MEMF(ecx + 8)); /* fld float */
    POP32(esp, edi);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x48)); /* fmul dword ptr [ecx + 0x48] */
    POP32(esp, esi);
    MEMF(ecx + 0x48) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx + 0x54)); /* fmul dword ptr [ecx + 0x54] */
    MEMF(ecx + 0x54) = (float)fp_top(); fp_pop(); /* fstp */
    MEM8(ecx + 3) = LO8(ebx);
    MEM8(ecx + 4) = LO8(edx);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0013F360
 * Original: 0x0013F360 - 0x0013F37A (26 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013F360(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013F360: ;
    MEM32(ecx) = 0;
    eax = ecx + 6;
    ecx = 0x200;
    edi = edi;

loc_0013F370: ;
    MEM8(eax) = 0;
    _fb = (uint32_t)(0x6C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x6C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0013F370; /* jne: not equal / not zero */

loc_0013F379: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013F5F0
 * Original: 0x0013F5F0 - 0x0013F5F1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013F5F0(void)
{

loc_0013F5F0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013F600
 * Original: 0x0013F600 - 0x0013F77C (380 bytes, 98 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013F600(void)
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

loc_0013F600: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = ZX8(MEM8(esi));
    MEM32(esp + 8) = eax;
    fp_push((double)SMEM32(esp + 8)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x50FAE0)); /* fmul dword ptr [0x50fae0] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x50FAE4)); /* fadd dword ptr [0x50fae4] */
    MEMF(esp + 8) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x49FC20)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x49fc20] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0013F74F; /* jp: parity */

loc_0013F631: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_push(MEMF(0x4964E8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 8] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0013F64E; /* jnp: not parity */

loc_0013F646: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x4964E8)); /* fld float */

loc_0013F64E: ;
    PUSH32(esp, 0x0013F653u); RECOMP_ABI_CALL(0x000EB38Cu, sub_000EB38C); /* call 0x000EB38C */

loc_0013F653: ;
    MEM8(esi) = LO8(eax);
    esi = MEM32(esp + 0xC);
    ecx = ZX8(MEM8(esi));
    MEM32(esp + 8) = ecx;
    fp_push((double)SMEM32(esp + 8)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x50FAE8)); /* fmul dword ptr [0x50fae8] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x50FAEC)); /* fadd dword ptr [0x50faec] */
    MEMF(esp + 8) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x49FC20)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x49fc20] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0013F75A; /* jp: parity */

loc_0013F685: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_push(MEMF(0x4964E8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 8] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0013F6A2; /* jnp: not parity */

loc_0013F69A: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x4964E8)); /* fld float */

loc_0013F6A2: ;
    PUSH32(esp, 0x0013F6A7u); RECOMP_ABI_CALL(0x000EB38Cu, sub_000EB38C); /* call 0x000EB38C */

loc_0013F6A7: ;
    MEM8(esi) = LO8(eax);
    esi = MEM32(esp + 0x10);
    edx = ZX8(MEM8(esi));
    MEM32(esp + 8) = edx;
    fp_push((double)SMEM32(esp + 8)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x50FAF0)); /* fmul dword ptr [0x50faf0] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x50FAF4)); /* fadd dword ptr [0x50faf4] */
    MEMF(esp + 8) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x49FC20)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x49fc20] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0013F765; /* jp: parity */

loc_0013F6D9: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_push(MEMF(0x4964E8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 8] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0013F6F6; /* jnp: not parity */

loc_0013F6EE: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x4964E8)); /* fld float */

loc_0013F6F6: ;
    PUSH32(esp, 0x0013F6FBu); RECOMP_ABI_CALL(0x000EB38Cu, sub_000EB38C); /* call 0x000EB38C */

loc_0013F6FB: ;
    MEM8(esi) = LO8(eax);
    esi = MEM32(esp + 0x14);
    eax = ZX8(MEM8(esi));
    MEM32(esp + 8) = eax;
    fp_push((double)SMEM32(esp + 8)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x50FAF8)); /* fmul dword ptr [0x50faf8] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x50FAFC)); /* fadd dword ptr [0x50fafc] */
    MEMF(esp + 8) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x49FC20)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x49fc20] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0013F76D; /* jp: parity */

loc_0013F729: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_push(MEMF(0x4964E8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 8] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0013F746; /* jnp: not parity */

loc_0013F73E: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x4964E8)); /* fld float */

loc_0013F746: ;
    PUSH32(esp, 0x0013F74Bu); RECOMP_ABI_CALL(0x000EB38Cu, sub_000EB38C); /* call 0x000EB38C */

loc_0013F74B: ;
    MEM8(esi) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0013F74F: ;
    fp_push(MEMF(0x49FC20)); /* fld float */
    goto loc_0013F64E;

loc_0013F75A: ;
    fp_push(MEMF(0x49FC20)); /* fld float */
    goto loc_0013F6A2;

loc_0013F765: ;
    fp_push(MEMF(0x49FC20)); /* fld float */
    goto loc_0013F6F6;

loc_0013F76D: ;
    fp_push(MEMF(0x49FC20)); /* fld float */
    PUSH32(esp, 0x0013F778u); RECOMP_ABI_CALL(0x000EB38Cu, sub_000EB38C); /* call 0x000EB38C */

loc_0013F778: ;
    MEM8(esi) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0013F780
 * Original: 0x0013F780 - 0x0013F7BA (58 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013F780(void)
{

loc_0013F780: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax);
    MEM32(0x50FAC8) = ecx;
    edx = MEM32(eax + 4);
    MEM32(0x50FACC) = edx;
    ecx = MEM32(eax + 8);
    MEM32(0x50FAD0) = ecx;
    edx = MEM32(eax + 0xC);
    MEM32(0x50FAD4) = edx;
    ecx = MEM32(eax + 0x10);
    MEM32(0x50FAD8) = ecx;
    edx = MEM32(eax + 0x14);
    MEM32(0x50FADC) = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_0013F7C0
 * Original: 0x0013F7C0 - 0x0013F7E9 (41 bytes, 9 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0013F7C0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0013F7C0: ;
    fp_push((double)SMEM32(esp + 4)); /* fild */
    MEMF(0x63F5D8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(esp + 8)); /* fild */
    MEMF(0x63F5DC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(esp + 0xC)); /* fild */
    MEMF(0x63F5D0) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    MEMF(0x63F5D4) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0013F7F0
 * Original: 0x0013F7F0 - 0x0013F886 (150 bytes, 36 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0013F7F0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0013F7F0: ;
    ecx = MEM32(esp + 4);
    eax = ecx;
    edx = MEM32(eax);
    MEM32(0x50FAC8) = edx;
    fp_push(MEMF(0x50FAC8)); /* fld float */
    edx = MEM32(eax + 4);
    MEM32(0x50FACC) = edx;
    edx = MEM32(eax + 8);
    MEM32(0x50FAD0) = edx;
    edx = MEM32(eax + 0xC);
    MEM32(0x50FAD4) = edx;
    edx = MEM32(eax + 0x10);
    MEM32(0x50FAD8) = edx;
    eax = MEM32(eax + 0x14);
    MEM32(0x50FADC) = eax;
    eax = MEM32(esp + 8);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax)); /* fmul dword ptr [eax] */
    MEMF(0x50FAC8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x50FACC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax)); /* fmul dword ptr [eax] */
    MEMF(0x50FACC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax)); /* fmul dword ptr [eax] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 8)); /* fadd dword ptr [eax + 8] */
    MEMF(0x50FAD0) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x50FAD4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x10)); /* fmul dword ptr [eax + 0x10] */
    MEMF(0x50FAD4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x50FAD8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x10)); /* fmul dword ptr [eax + 0x10] */
    MEMF(0x50FAD8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ecx + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x10)); /* fmul dword ptr [eax + 0x10] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 0x14)); /* fadd dword ptr [eax + 0x14] */
    MEMF(0x50FADC) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0013F890
 * Original: 0x0013F890 - 0x0013F8A5 (21 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013F890(void)
{

loc_0013F890: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    ecx = 8;
    edi = 0x50FAE0;
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0013F8B0
 * Original: 0x0013F8B0 - 0x0013F901 (81 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013F8B0(void)
{

loc_0013F8B0: ;
    MEM32(0x50FAE0) = 0x3F800000;
    MEM32(0x50FAE8) = 0x3F800000;
    MEM32(0x50FAF0) = 0x3F800000;
    MEM32(0x50FAF8) = 0x3F800000;
    MEM32(0x50FAE4) = 0;
    MEM32(0x50FAEC) = 0;
    MEM32(0x50FAF4) = 0;
    MEM32(0x50FAFC) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_0013F910
 * Original: 0x0013F910 - 0x0013F96B (91 bytes, 24 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0013F910(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_0013F910: ;
    eax = MEM32(esp + 4);
    fp_push((double)SMEM32(eax)); /* fild */
    ecx = MEM32(esp + 8);
    fp_push((double)SMEM32(ecx)); /* fild */
    edx = MEM32(esp + 0xC);
    fp_push(MEMF(0x50FAD8)); /* fld float */
    eax = MEM32(esp + 0x10);
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x50FAD4)); /* fmul dword ptr [0x50fad4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x50FADC)); /* fadd dword ptr [0x50fadc] */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x50FACC)); /* fmul dword ptr [0x50facc] */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x50FAC8)); /* fmul dword ptr [0x50fac8] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x50FAD0)); /* fadd dword ptr [0x50fad0] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x49D454)); /* fmul dword ptr [0x49d454] */
    MEMF(edx) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x49D454)); /* fmul dword ptr [0x49d454] */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0013F970
 * Original: 0x0013F970 - 0x0013F971 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013F970(void)
{

loc_0013F970: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0013FC60
 * Original: 0x0013FC60 - 0x0013FC8F (47 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013FC60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013FC60: ;
    eax = ecx;
    PUSH32(esp, esi);
    edx = eax + 5;
    esi = 0x200;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_0013FC70: ;
    MEM8(edx + 1) = LO8(ecx);
    MEM8(edx) = LO8(ecx);
    _fb = (uint32_t)(0x6C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x6C;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0013FC70; /* jne: not equal / not zero */

loc_0013FC7B: ;
    MEM32(eax) = ecx;
    edx = eax + 6;
    esi = 0x200;

loc_0013FC85: ;
    MEM8(edx) = LO8(ecx);
    _fb = (uint32_t)(0x6C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x6C;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0013FC85; /* jne: not equal / not zero */

loc_0013FC8D: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0013FC90
 * Original: 0x0013FC90 - 0x0013FCF5 (101 bytes, 36 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013FC90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013FC90: ;
    eax = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x200) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x200 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0013FC9E; /* jl: less (signed <) */

loc_0013FC99: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 24; return; /* ret 20 */

loc_0013FC9E: ;
    edx = eax;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x6C);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, esi);
    MEM32(ecx) = eax;
    eax = MEM32(esp + 0x10);
    esi = edx + ecx + 4;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x0013FCC1u); RECOMP_ABI_CALL(0x0013F110u, sub_0013F110); /* call 0x0013F110 */

loc_0013FCC1: ;
    eax = MEM32(esp + 0x14);
    MEM32(esi + 0x58) = eax;
    MEM32(esi + 0x5C) = eax;
    MEM32(esi + 0x60) = eax;
    SET_LO8(eax, MEM8(esp + 0x18));
    MEM8(esi + 1) = LO8(eax);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x68) = eax;
    MEM8(esi + 5) = LO8(eax);
    eax = 0x3F800000;
    MEM32(esi + 8) = eax;
    MEM32(esi + 0xC) = eax;
    MEM8(esi + 2) = 1;
    MEM8(esi) = 1;
    eax = esi;
    POP32(esp, esi);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_0013FD00
 * Original: 0x0013FD00 - 0x0013FD70 (112 bytes, 37 insns)
 * CC: cdecl, 7 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0013FD00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0013FD00: ;
    eax = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x200) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x200 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0013FD0E; /* jl: less (signed <) */

loc_0013FD09: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 32; return; /* ret 28 */

loc_0013FD0E: ;
    edx = eax;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x6C);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx) = eax;
    PUSH32(esp, esi);
    esi = edx + ecx + 4;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 8);
    eax = 0x3F800000;
    MEM32(esi + 8) = eax;
    MEM32(esi + 0xC) = eax;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esi;
    MEM8(esi + 5) = 0;
    PUSH32(esp, 0x0013FD40u); RECOMP_ABI_CALL(0x0013F110u, sub_0013F110); /* call 0x0013F110 */

loc_0013FD40: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x18);
    edx = MEM32(esp + 0x1C);
    MEM32(esi + 0x58) = eax;
    SET_LO8(eax, MEM8(esp + 0x20));
    MEM8(esi + 1) = LO8(eax);
    MEM32(esi + 0x5C) = ecx;
    MEM32(esi + 0x60) = edx;
    MEM8(esi + 2) = 1;
    MEM32(esi + 0x68) = 0;
    MEM8(esi) = 1;
    eax = esi;
    POP32(esp, esi);
    esp += 32; return; /* ret 28 */

}

/**
 * sub_00140000
 * Original: 0x00140000 - 0x00140497 (1175 bytes, 322 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00140000(void)
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

loc_00140000: ;
    MEM8(esp + 5) = LO8(edx);
    if (_flags /* jg: greater (signed >) */) goto loc_0014000A;

loc_00140006: ;
    MEM8(esp + 5) = LO8(eax);

loc_0014000A: ;
    eax = ZX8(MEM8(ecx + 1));
    eax = eax << 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    MEM8(esp + 6) = LO8(edx);
    if (CMP_G(_fas, _fbs)) goto loc_0014001C; /* jg: greater (signed >) */

loc_00140018: ;
    MEM8(esp + 6) = LO8(eax);

loc_0014001C: ;
    eax = ZX8(MEM8(ecx + 2));
    eax = eax << 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    MEM8(esp + 7) = LO8(edx);
    if (CMP_G(_fas, _fbs)) goto loc_0014002E; /* jg: greater (signed >) */

loc_0014002A: ;
    MEM8(esp + 7) = LO8(eax);

loc_0014002E: ;
    eax = ZX8(MEM8(ecx + 3));
    eax = eax << 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    MEM8(esp + 0x70) = LO8(edx);
    if (CMP_G(_fas, _fbs)) goto loc_00140040; /* jg: greater (signed >) */

loc_0014003C: ;
    MEM8(esp + 0x70) = LO8(eax);

loc_00140040: ;
    eax = esp + 0x70;
    PUSH32(esp, eax);
    ecx = esp + 0xB;
    PUSH32(esp, ecx);
    edx = esp + 0xE;
    PUSH32(esp, edx);
    eax = esp + 0x11;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00140059u); RECOMP_ABI_CALL(0x0013F600u, sub_0013F600); /* call 0x0013F600 */

loc_00140059: ;
    edx = ZX8(MEM8(esp + 0x16));
    eax = ZX8(MEM8(esp + 0x17));
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_HI8(ecx, MEM8(esp + 0x80));
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(ecx, MEM8(esp + 5));
    ecx = ecx << 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx | edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = ecx << 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx | eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(esp + 0x10) = ecx;
    if (CMP_LE(_fas, _fbs)) goto loc_00140492; /* jle: less or equal (signed <=) */

loc_00140089: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x70);
    PUSH32(esp, ebp);
    ebp = MEM32(0x638988);
    PUSH32(esp, edi);
    MEM32(esp + 0x18) = esi;
    /* nop */

loc_001400A0: ;
    edi = esp + 0x3C;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001400A6: ;
    eax = MEM32(esp + 0x6C);
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x6C) = eax;
    eax = MEM32(esp + 0x74);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x7C) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_00140168; /* jl: less (signed <) */

loc_001400CD: ;
    fp_push((double)SMEM32(esp + 0x7C)); /* fild */
    eax = MEM32(esp + 0x84);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx + 4)); /* fmul dword ptr [ebx + 4] */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx)); /* fmul dword ptr [ebx] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ebx + 8)); /* fadd dword ptr [ebx + 8] */
    MEMF(esp + esi + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx + 0xC)); /* fmul dword ptr [ebx + 0xc] */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx + 0x10)); /* fmul dword ptr [ebx + 0x10] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ebx + 0x14)); /* fadd dword ptr [ebx + 0x14] */
    MEMF(esp + esi + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_NE(_fa, _fb)) goto loc_00140189; /* jne: not equal / not zero */

loc_00140107: ;
    PUSH32(esp, 0x0014010Cu); RECOMP_ABI_CALL(0x00102CE0u, sub_00102CE0); /* call 0x00102CE0 */

loc_0014010C: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x00140113u); RECOMP_ABI_CALL(0x00102D00u, sub_00102D00); /* call 0x00102D00 */

loc_00140113: ;
    edx = MEM32(0x637AEC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM8(0x50FF48) = LO8(eax);
    if (CMP_NE(_fa, _fb)) goto loc_0014014B; /* jne: not equal / not zero */

loc_0014012A: ;
    PUSH32(esp, 0x123);
    PUSH32(esp, 0x4A962C);
    PUSH32(esp, 0x4A95FC);
    PUSH32(esp, 0x4A95DC);
    PUSH32(esp, 0x4A95A4);
    PUSH32(esp, 0x00140148u); RECOMP_ABI_CALL(0x0014E700u, sub_0014E700); /* call 0x0014E700 */

loc_00140148: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0014014B: ;
    PUSH32(esp, 0x00140150u); RECOMP_ABI_CALL(0x00102CA0u, sub_00102CA0); /* call 0x00102CA0 */

loc_00140150: ;
    eax = MEM32(esp + 0x74);
    ecx = MEM32(0x637AEC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00140160u); RECOMP_ABI_CALL(0x001153F0u, sub_001153F0); /* call 0x001153F0 */

loc_00140160: ;
    ebp = MEM32(0x638988);
    goto loc_00140189;

loc_00140168: ;
    fp_push(MEMF(0x496B98)); /* fld float */
    fp_push(MEMF(esp + 0x80)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00140189; /* jp: parity */

loc_0014017E: ;
    MEM32(esp + 0x80) = 0x3F800000;

loc_00140189: ;
    fp_push((double)SMEM32(esp + 0x7C)); /* fild */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    fp_push(MEMF(0x50FAC8)); /* fld float */
    MEM8(0x50FF48) = LO8(eax);
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x50FACC)); /* fmul dword ptr [0x50facc] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x50FAD0)); /* fadd dword ptr [0x50fad0] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x49D454)); /* fmul dword ptr [0x49d454] */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x50FAD4)); /* fmul dword ptr [0x50fad4] */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x50FAD8)); /* fmul dword ptr [0x50fad8] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x50FADC)); /* fadd dword ptr [0x50fadc] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x49D454)); /* fmul dword ptr [0x49d454] */
    MEMF(esp + 0x7C) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_NE(_fa, _fb)) goto loc_00140208; /* jne: not equal / not zero */

loc_001401E1: ;
    PUSH32(esp, 0xB3);
    PUSH32(esp, 0x4A9768);
    PUSH32(esp, 0x4A9740);
    PUSH32(esp, 0x4A9728);
    PUSH32(esp, 0x4A96FC);
    PUSH32(esp, 0x001401FFu); RECOMP_ABI_CALL(0x0014E700u, sub_0014E700); /* call 0x0014E700 */

loc_001401FF: ;
    ebp = MEM32(0x638988);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00140208: ;
    SET_LO8(eax, MEM8(ebp + 0xA));
    fp_push(MEMF(esp + 0x14)); /* fld float */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014024F; /* je: equal / zero */

loc_00140213: ;
    MEM8(0x50FF48) = 1;
    fp_push(MEMF(ebp + 0xC0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x4AB678)); /* fsub dword ptr [0x4ab678] */
    MEM8(0x50FF48) = 1;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x496B98)); /* fmul dword ptr [0x496b98] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(ebp + 0xC4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x4AB674)); /* fsub dword ptr [0x4ab674] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x496B98)); /* fmul dword ptr [0x496b98] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x7C)); /* fadd dword ptr [esp + 0x7c] */
    MEMF(esp + 0x7C) = (float)fp_top(); fp_pop(); /* fstp */

loc_0014024F: ;
    ecx = MEM32(esp + 0x7C);
    MEMF(edi + -4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x496454)); /* fld float */
    MEM32(edi) = ecx;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x80)); /* fsub dword ptr [esp + 0x80] */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x10;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xC (32-bit) */
    MEMF(edi + -12) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_L(_fas, _fbs)) goto loc_001400A6; /* jl: less (signed <) */

loc_00140277: ;
    ecx = MEM32(0x63F5E0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x200) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x200 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00140289; /* jl: less (signed <) */

loc_00140285: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_001402F1;

loc_00140289: ;
    eax = ecx;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6C);
    _fb = (uint32_t)(0x63F5E4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x63F5E4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi = esp + 0x38;
    MEM32(0x63F5E0) = ecx;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = eax + 0x20;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_001402A5: ;
    edi = MEM32(esp + edx * 4 + 0x38);
    MEM32(ecx + -16) = edi;
    edi = MEM32(esp + edx * 4 + 0x48);
    MEM32(ecx) = edi;
    edi = MEM32(esi + ecx);
    MEM32(ecx + 0x10) = edi;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001402A5; /* jl: less (signed <) */

loc_001402C1: ;
    ecx = MEM32(esp + 0x1C);
    MEM32(eax + 0x58) = ecx;
    MEM32(eax + 0x5C) = ecx;
    MEM32(eax + 0x60) = ecx;
    ecx = 0x3F800000;
    MEM8(eax + 2) = 1;
    MEM8(eax + 1) = 1;
    MEM32(eax + 0x68) = 0;
    MEM8(eax) = 1;
    MEM8(eax + 5) = 0;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    esi = eax;

loc_001402F1: ;
    eax = MEM32(esp + 0x74);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00140485; /* jl: less (signed <) */

loc_001402FD: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00140485; /* je: equal / zero */

loc_00140305: ;
    PUSH32(esp, 0x0014030Au); RECOMP_ABI_CALL(0x00102CE0u, sub_00102CE0); /* call 0x00102CE0 */

loc_0014030A: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x00140311u); RECOMP_ABI_CALL(0x00102D00u, sub_00102D00); /* call 0x00102D00 */

loc_00140311: ;
    edx = MEM32(0x637AEC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM8(0x50FF48) = LO8(eax);
    if (CMP_NE(_fa, _fb)) goto loc_00140349; /* jne: not equal / not zero */

loc_00140328: ;
    PUSH32(esp, 0x123);
    PUSH32(esp, 0x4A962C);
    PUSH32(esp, 0x4A95FC);
    PUSH32(esp, 0x4A95DC);
    PUSH32(esp, 0x4A95A4);
    PUSH32(esp, 0x00140346u); RECOMP_ABI_CALL(0x0014E700u, sub_0014E700); /* call 0x0014E700 */

loc_00140346: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00140349: ;
    PUSH32(esp, 0x0014034Eu); RECOMP_ABI_CALL(0x00102CA0u, sub_00102CA0); /* call 0x00102CA0 */

loc_0014034E: ;
    ebp = MEM32(esp + 0x74);
    ecx = MEM32(0x637AEC);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0014035Eu); RECOMP_ABI_CALL(0x001153F0u, sub_001153F0); /* call 0x001153F0 */

loc_0014035E: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014047F; /* je: equal / zero */

loc_00140368: ;
    PUSH32(esp, 0x0014036Du); RECOMP_ABI_CALL(0x00102CE0u, sub_00102CE0); /* call 0x00102CE0 */

loc_0014036D: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x00140374u); RECOMP_ABI_CALL(0x00102D00u, sub_00102D00); /* call 0x00102D00 */

loc_00140374: ;
    edx = MEM32(0x637AEC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM8(0x50FF48) = LO8(eax);
    if (CMP_NE(_fa, _fb)) goto loc_001403AC; /* jne: not equal / not zero */

loc_0014038B: ;
    PUSH32(esp, 0x123);
    PUSH32(esp, 0x4A962C);
    PUSH32(esp, 0x4A95FC);
    PUSH32(esp, 0x4A95DC);
    PUSH32(esp, 0x4A95A4);
    PUSH32(esp, 0x001403A9u); RECOMP_ABI_CALL(0x0014E700u, sub_0014E700); /* call 0x0014E700 */

loc_001403A9: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001403AC: ;
    PUSH32(esp, 0x001403B1u); RECOMP_ABI_CALL(0x00102CA0u, sub_00102CA0); /* call 0x00102CA0 */

loc_001403B1: ;
    ecx = MEM32(0x637AEC);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x001403BDu); RECOMP_ABI_CALL(0x00115470u, sub_00115470); /* call 0x00115470 */

loc_001403BD: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001403F2; /* jne: not equal / not zero */

loc_001403C1: ;
    MEM8(esi + 5) = LO8(eax);
    MEM8(esi + 3) = 0;
    MEM8(esi + 4) = 0;
    fp_push((double)SMEM32(edi + 0x24)); /* fild */
    edx = MEM32(edi + 0x24);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001403DC; /* jge: greater or equal (signed >=) */

loc_001403D6: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x49F3D8)); /* fadd dword ptr [0x49f3d8] */

loc_001403DC: ;
    eax = MEM32(edi + 0x20);
    fp_push((double)SMEM32(edi + 0x20)); /* fild */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001403EC; /* jge: greater or equal (signed >=) */

loc_001403E6: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x49F3D8)); /* fadd dword ptr [0x49f3d8] */

loc_001403EC: ;
    MEMF(esi + 8) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esi + 0xC) = (float)fp_top(); fp_pop(); /* fstp */

loc_001403F2: ;
    ecx = MEM32(edi + 0x18);
    MEM32(esi + 0x68) = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_00140400: ;
    fp_push(MEMF(esp + ecx + 0x2C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x496454)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x496454] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0014042A; /* jne: not equal / not zero */

loc_00140411: ;
    fp_push(MEMF(esp + ecx + 0x2C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x4AD3C0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x4ad3c0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0014042A; /* jp: parity */

loc_00140422: ;
    MEM32(esp + ecx + 0x2C) = 0x3F800000;

loc_0014042A: ;
    fp_push(MEMF(esp + ecx + 0x20)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x496454)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x496454] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00140454; /* jne: not equal / not zero */

loc_0014043B: ;
    fp_push(MEMF(esp + ecx + 0x20)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x4AD3C0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x4ad3c0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00140454; /* jp: parity */

loc_0014044C: ;
    MEM32(esp + ecx + 0x20) = 0x3F800000;

loc_00140454: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xC (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00140400; /* jl: less (signed <) */

loc_0014045C: ;
    edx = esp + 0x20;
    PUSH32(esp, edx);
    eax = esp + 0x30;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0014046Du); RECOMP_ABI_CALL(0x0013F220u, sub_0013F220); /* call 0x0013F220 */

loc_0014046D: ;
    eax = MEM32(edi + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00140478u); RECOMP_ABI_CALL(0x0012F6B0u, sub_0012F6B0); /* call 0x0012F6B0 */

loc_00140478: ;
    ecx = eax;
    PUSH32(esp, 0x0014047Fu); RECOMP_ABI_CALL(0x0012F340u, sub_0012F340); /* call 0x0012F340 */

loc_0014047F: ;
    ebp = MEM32(0x638988);

loc_00140485: ;
    MEM32(esp + 0x18) = MEM32(esp + 0x18) - 1;
    _fa = (uint32_t)(MEM32(esp + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001400A0; /* jne: not equal / not zero */

loc_0014048F: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_00140492: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x58) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x58;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00140004
 * Original: 0x00140004 - 0x00140497 (1171 bytes, 321 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00140004(void)
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

loc_00140004: ;
    if (_flags /* jg: greater (signed >) */) goto loc_0014000A;

loc_00140006: ;
    MEM8(esp + 5) = LO8(eax);

loc_0014000A: ;
    eax = ZX8(MEM8(ecx + 1));
    eax = eax << 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    MEM8(esp + 6) = LO8(edx);
    if (CMP_G(_fas, _fbs)) goto loc_0014001C; /* jg: greater (signed >) */

loc_00140018: ;
    MEM8(esp + 6) = LO8(eax);

loc_0014001C: ;
    eax = ZX8(MEM8(ecx + 2));
    eax = eax << 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    MEM8(esp + 7) = LO8(edx);
    if (CMP_G(_fas, _fbs)) goto loc_0014002E; /* jg: greater (signed >) */

loc_0014002A: ;
    MEM8(esp + 7) = LO8(eax);

loc_0014002E: ;
    eax = ZX8(MEM8(ecx + 3));
    eax = eax << 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    MEM8(esp + 0x70) = LO8(edx);
    if (CMP_G(_fas, _fbs)) goto loc_00140040; /* jg: greater (signed >) */

loc_0014003C: ;
    MEM8(esp + 0x70) = LO8(eax);

loc_00140040: ;
    eax = esp + 0x70;
    PUSH32(esp, eax);
    ecx = esp + 0xB;
    PUSH32(esp, ecx);
    edx = esp + 0xE;
    PUSH32(esp, edx);
    eax = esp + 0x11;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00140059u); RECOMP_ABI_CALL(0x0013F600u, sub_0013F600); /* call 0x0013F600 */

loc_00140059: ;
    edx = ZX8(MEM8(esp + 0x16));
    eax = ZX8(MEM8(esp + 0x17));
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_HI8(ecx, MEM8(esp + 0x80));
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(ecx, MEM8(esp + 5));
    ecx = ecx << 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx | edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = ecx << 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx | eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(esp + 0x10) = ecx;
    if (CMP_LE(_fas, _fbs)) goto loc_00140492; /* jle: less or equal (signed <=) */

loc_00140089: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x70);
    PUSH32(esp, ebp);
    ebp = MEM32(0x638988);
    PUSH32(esp, edi);
    MEM32(esp + 0x18) = esi;
    /* nop */

loc_001400A0: ;
    edi = esp + 0x3C;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001400A6: ;
    eax = MEM32(esp + 0x6C);
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x6C) = eax;
    eax = MEM32(esp + 0x74);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x7C) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_00140168; /* jl: less (signed <) */

loc_001400CD: ;
    fp_push((double)SMEM32(esp + 0x7C)); /* fild */
    eax = MEM32(esp + 0x84);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx + 4)); /* fmul dword ptr [ebx + 4] */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx)); /* fmul dword ptr [ebx] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ebx + 8)); /* fadd dword ptr [ebx + 8] */
    MEMF(esp + esi + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx + 0xC)); /* fmul dword ptr [ebx + 0xc] */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ebx + 0x10)); /* fmul dword ptr [ebx + 0x10] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ebx + 0x14)); /* fadd dword ptr [ebx + 0x14] */
    MEMF(esp + esi + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_NE(_fa, _fb)) goto loc_00140189; /* jne: not equal / not zero */

loc_00140107: ;
    PUSH32(esp, 0x0014010Cu); RECOMP_ABI_CALL(0x00102CE0u, sub_00102CE0); /* call 0x00102CE0 */

loc_0014010C: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x00140113u); RECOMP_ABI_CALL(0x00102D00u, sub_00102D00); /* call 0x00102D00 */

loc_00140113: ;
    edx = MEM32(0x637AEC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM8(0x50FF48) = LO8(eax);
    if (CMP_NE(_fa, _fb)) goto loc_0014014B; /* jne: not equal / not zero */

loc_0014012A: ;
    PUSH32(esp, 0x123);
    PUSH32(esp, 0x4A962C);
    PUSH32(esp, 0x4A95FC);
    PUSH32(esp, 0x4A95DC);
    PUSH32(esp, 0x4A95A4);
    PUSH32(esp, 0x00140148u); RECOMP_ABI_CALL(0x0014E700u, sub_0014E700); /* call 0x0014E700 */

loc_00140148: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0014014B: ;
    PUSH32(esp, 0x00140150u); RECOMP_ABI_CALL(0x00102CA0u, sub_00102CA0); /* call 0x00102CA0 */

loc_00140150: ;
    eax = MEM32(esp + 0x74);
    ecx = MEM32(0x637AEC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00140160u); RECOMP_ABI_CALL(0x001153F0u, sub_001153F0); /* call 0x001153F0 */

loc_00140160: ;
    ebp = MEM32(0x638988);
    goto loc_00140189;

loc_00140168: ;
    fp_push(MEMF(0x496B98)); /* fld float */
    fp_push(MEMF(esp + 0x80)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00140189; /* jp: parity */

loc_0014017E: ;
    MEM32(esp + 0x80) = 0x3F800000;

loc_00140189: ;
    fp_push((double)SMEM32(esp + 0x7C)); /* fild */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    fp_push(MEMF(0x50FAC8)); /* fld float */
    MEM8(0x50FF48) = LO8(eax);
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x50FACC)); /* fmul dword ptr [0x50facc] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x50FAD0)); /* fadd dword ptr [0x50fad0] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x49D454)); /* fmul dword ptr [0x49d454] */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x50FAD4)); /* fmul dword ptr [0x50fad4] */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x50FAD8)); /* fmul dword ptr [0x50fad8] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x50FADC)); /* fadd dword ptr [0x50fadc] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x49D454)); /* fmul dword ptr [0x49d454] */
    MEMF(esp + 0x7C) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_NE(_fa, _fb)) goto loc_00140208; /* jne: not equal / not zero */

loc_001401E1: ;
    PUSH32(esp, 0xB3);
    PUSH32(esp, 0x4A9768);
    PUSH32(esp, 0x4A9740);
    PUSH32(esp, 0x4A9728);
    PUSH32(esp, 0x4A96FC);
    PUSH32(esp, 0x001401FFu); RECOMP_ABI_CALL(0x0014E700u, sub_0014E700); /* call 0x0014E700 */

loc_001401FF: ;
    ebp = MEM32(0x638988);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00140208: ;
    SET_LO8(eax, MEM8(ebp + 0xA));
    fp_push(MEMF(esp + 0x14)); /* fld float */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014024F; /* je: equal / zero */

loc_00140213: ;
    MEM8(0x50FF48) = 1;
    fp_push(MEMF(ebp + 0xC0)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x4AB678)); /* fsub dword ptr [0x4ab678] */
    MEM8(0x50FF48) = 1;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x496B98)); /* fmul dword ptr [0x496b98] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(ebp + 0xC4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x4AB674)); /* fsub dword ptr [0x4ab674] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x496B98)); /* fmul dword ptr [0x496b98] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x7C)); /* fadd dword ptr [esp + 0x7c] */
    MEMF(esp + 0x7C) = (float)fp_top(); fp_pop(); /* fstp */

loc_0014024F: ;
    ecx = MEM32(esp + 0x7C);
    MEMF(edi + -4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x496454)); /* fld float */
    MEM32(edi) = ecx;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x80)); /* fsub dword ptr [esp + 0x80] */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x10;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xC (32-bit) */
    MEMF(edi + -12) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_L(_fas, _fbs)) goto loc_001400A6; /* jl: less (signed <) */

loc_00140277: ;
    ecx = MEM32(0x63F5E0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x200) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x200 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00140289; /* jl: less (signed <) */

loc_00140285: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_001402F1;

loc_00140289: ;
    eax = ecx;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x6C);
    _fb = (uint32_t)(0x63F5E4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x63F5E4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi = esp + 0x38;
    MEM32(0x63F5E0) = ecx;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = eax + 0x20;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_001402A5: ;
    edi = MEM32(esp + edx * 4 + 0x38);
    MEM32(ecx + -16) = edi;
    edi = MEM32(esp + edx * 4 + 0x48);
    MEM32(ecx) = edi;
    edi = MEM32(esi + ecx);
    MEM32(ecx + 0x10) = edi;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001402A5; /* jl: less (signed <) */

loc_001402C1: ;
    ecx = MEM32(esp + 0x1C);
    MEM32(eax + 0x58) = ecx;
    MEM32(eax + 0x5C) = ecx;
    MEM32(eax + 0x60) = ecx;
    ecx = 0x3F800000;
    MEM8(eax + 2) = 1;
    MEM8(eax + 1) = 1;
    MEM32(eax + 0x68) = 0;
    MEM8(eax) = 1;
    MEM8(eax + 5) = 0;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    esi = eax;

loc_001402F1: ;
    eax = MEM32(esp + 0x74);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00140485; /* jl: less (signed <) */

loc_001402FD: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00140485; /* je: equal / zero */

loc_00140305: ;
    PUSH32(esp, 0x0014030Au); RECOMP_ABI_CALL(0x00102CE0u, sub_00102CE0); /* call 0x00102CE0 */

loc_0014030A: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x00140311u); RECOMP_ABI_CALL(0x00102D00u, sub_00102D00); /* call 0x00102D00 */

loc_00140311: ;
    edx = MEM32(0x637AEC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM8(0x50FF48) = LO8(eax);
    if (CMP_NE(_fa, _fb)) goto loc_00140349; /* jne: not equal / not zero */

loc_00140328: ;
    PUSH32(esp, 0x123);
    PUSH32(esp, 0x4A962C);
    PUSH32(esp, 0x4A95FC);
    PUSH32(esp, 0x4A95DC);
    PUSH32(esp, 0x4A95A4);
    PUSH32(esp, 0x00140346u); RECOMP_ABI_CALL(0x0014E700u, sub_0014E700); /* call 0x0014E700 */

loc_00140346: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00140349: ;
    PUSH32(esp, 0x0014034Eu); RECOMP_ABI_CALL(0x00102CA0u, sub_00102CA0); /* call 0x00102CA0 */

loc_0014034E: ;
    ebp = MEM32(esp + 0x74);
    ecx = MEM32(0x637AEC);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0014035Eu); RECOMP_ABI_CALL(0x001153F0u, sub_001153F0); /* call 0x001153F0 */

loc_0014035E: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014047F; /* je: equal / zero */

loc_00140368: ;
    PUSH32(esp, 0x0014036Du); RECOMP_ABI_CALL(0x00102CE0u, sub_00102CE0); /* call 0x00102CE0 */

loc_0014036D: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x00140374u); RECOMP_ABI_CALL(0x00102D00u, sub_00102D00); /* call 0x00102D00 */

loc_00140374: ;
    edx = MEM32(0x637AEC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM8(0x50FF48) = LO8(eax);
    if (CMP_NE(_fa, _fb)) goto loc_001403AC; /* jne: not equal / not zero */

loc_0014038B: ;
    PUSH32(esp, 0x123);
    PUSH32(esp, 0x4A962C);
    PUSH32(esp, 0x4A95FC);
    PUSH32(esp, 0x4A95DC);
    PUSH32(esp, 0x4A95A4);
    PUSH32(esp, 0x001403A9u); RECOMP_ABI_CALL(0x0014E700u, sub_0014E700); /* call 0x0014E700 */

loc_001403A9: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001403AC: ;
    PUSH32(esp, 0x001403B1u); RECOMP_ABI_CALL(0x00102CA0u, sub_00102CA0); /* call 0x00102CA0 */

loc_001403B1: ;
    ecx = MEM32(0x637AEC);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x001403BDu); RECOMP_ABI_CALL(0x00115470u, sub_00115470); /* call 0x00115470 */

loc_001403BD: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001403F2; /* jne: not equal / not zero */

loc_001403C1: ;
    MEM8(esi + 5) = LO8(eax);
    MEM8(esi + 3) = 0;
    MEM8(esi + 4) = 0;
    fp_push((double)SMEM32(edi + 0x24)); /* fild */
    edx = MEM32(edi + 0x24);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001403DC; /* jge: greater or equal (signed >=) */

loc_001403D6: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x49F3D8)); /* fadd dword ptr [0x49f3d8] */

loc_001403DC: ;
    eax = MEM32(edi + 0x20);
    fp_push((double)SMEM32(edi + 0x20)); /* fild */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001403EC; /* jge: greater or equal (signed >=) */

loc_001403E6: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x49F3D8)); /* fadd dword ptr [0x49f3d8] */

loc_001403EC: ;
    MEMF(esi + 8) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esi + 0xC) = (float)fp_top(); fp_pop(); /* fstp */

loc_001403F2: ;
    ecx = MEM32(edi + 0x18);
    MEM32(esi + 0x68) = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_00140400: ;
    fp_push(MEMF(esp + ecx + 0x2C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x496454)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x496454] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0014042A; /* jne: not equal / not zero */

loc_00140411: ;
    fp_push(MEMF(esp + ecx + 0x2C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x4AD3C0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x4ad3c0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0014042A; /* jp: parity */

loc_00140422: ;
    MEM32(esp + ecx + 0x2C) = 0x3F800000;

loc_0014042A: ;
    fp_push(MEMF(esp + ecx + 0x20)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x496454)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x496454] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00140454; /* jne: not equal / not zero */

loc_0014043B: ;
    fp_push(MEMF(esp + ecx + 0x20)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x4AD3C0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x4ad3c0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00140454; /* jp: parity */

loc_0014044C: ;
    MEM32(esp + ecx + 0x20) = 0x3F800000;

loc_00140454: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xC (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00140400; /* jl: less (signed <) */

loc_0014045C: ;
    edx = esp + 0x20;
    PUSH32(esp, edx);
    eax = esp + 0x30;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0014046Du); RECOMP_ABI_CALL(0x0013F220u, sub_0013F220); /* call 0x0013F220 */

loc_0014046D: ;
    eax = MEM32(edi + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00140478u); RECOMP_ABI_CALL(0x0012F6B0u, sub_0012F6B0); /* call 0x0012F6B0 */

loc_00140478: ;
    ecx = eax;
    PUSH32(esp, 0x0014047Fu); RECOMP_ABI_CALL(0x0012F340u, sub_0012F340); /* call 0x0012F340 */

loc_0014047F: ;
    ebp = MEM32(0x638988);

loc_00140485: ;
    MEM32(esp + 0x18) = MEM32(esp + 0x18) - 1;
    _fa = (uint32_t)(MEM32(esp + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001400A0; /* jne: not equal / not zero */

loc_0014048F: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_00140492: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x58) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x58;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00140485
 * Original: 0x00140485 - 0x00140497 (18 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00140485(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00140485: ;
    MEM32(esp + 0x18) = MEM32(esp + 0x18) - 1;
    _fa = (uint32_t)(MEM32(esp + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) { g_seh_ebp = ebp; sub_001400A0(); return; } /* jne: not equal / not zero */

loc_0014048F: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, esi);
    _fb = (uint32_t)(0x58) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x58;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001404D0
 * Original: 0x001404D0 - 0x001404D7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001404D0(void)
{

loc_001404D0: ;
    eax = MEM32(ecx + 0x117C);
    esp += 4; return; /* ret */

}

/**
 * sub_001404E0
 * Original: 0x001404E0 - 0x001404E7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001404E0(void)
{

loc_001404E0: ;
    eax = MEM32(ecx + 0x143B8);
    esp += 4; return; /* ret */

}

/**
 * sub_001404F0
 * Original: 0x001404F0 - 0x001404F1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001404F0(void)
{

loc_001404F0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00140740
 * Original: 0x00140740 - 0x00140741 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00140740(void)
{

loc_00140740: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00140950
 * Original: 0x00140950 - 0x0014097D (45 bytes, 16 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00140950(void)
{

loc_00140950: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    MEM32(esi) = 0x4AD420;
    MEM32(esi + 4) = 0xFFFFFFFFu;
    eax = MEM32(0x50FB00);
    PUSH32(esp, eax);
    edi = esi + 8;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00140970u); RECOMP_ABI_CALL(0x000FA24Eu, sub_000FA24E); /* call 0x000FA24E */

loc_00140970: ;
    SET_LO8(ecx, MEM8(esp + 0xC));
    MEM8(edi) = LO8(ecx);
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00140980
 * Original: 0x00140980 - 0x001409B0 (48 bytes, 17 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00140980(void)
{

loc_00140980: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    MEM32(esi) = 0x4AD420;
    MEM32(esi + 4) = 0xFFFFFFFFu;
    eax = MEM32(0x50FB00);
    PUSH32(esp, eax);
    edi = esi + 8;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001409A0u); RECOMP_ABI_CALL(0x000FA24Eu, sub_000FA24E); /* call 0x000FA24E */

loc_001409A0: ;
    ecx = MEM32(esp + 0xC);
    SET_LO8(edx, MEM8(ecx + 8));
    MEM8(edi) = LO8(edx);
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001409B0
 * Original: 0x001409B0 - 0x001409B6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001409B0(void)
{

loc_001409B0: ;
    eax = 0x4000;
    esp += 4; return; /* ret */

}

/**
 * sub_001409C0
 * Original: 0x001409C0 - 0x001409C4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001409C0(void)
{

loc_001409C0: ;
    SET_LO8(eax, MEM8(ecx + 8));
    esp += 4; return; /* ret */

}

/**
 * sub_001409D0
 * Original: 0x001409D0 - 0x001409DB (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001409D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001409D0: ;
    SET_LO8(edx, MEM8(ecx + 8));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    esp += 4; return; /* ret */

}

/**
 * sub_001409E0
 * Original: 0x001409E0 - 0x00140A10 (48 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001409E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001409E0: ;
    SET_LO8(eax, MEM8(ecx + 8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x55) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x55 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00140A0A; /* je: equal / zero */

loc_001409E7: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x46) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x46 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00140A0A; /* je: equal / zero */

loc_001409EB: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x47) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x47 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00140A0A; /* je: equal / zero */

loc_001409EF: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x48) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x48 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00140A0A; /* je: equal / zero */

loc_001409F3: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x49) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x49 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00140A0A; /* je: equal / zero */

loc_001409F7: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x4A) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x4A (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00140A0A; /* je: equal / zero */

loc_001409FB: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x4B) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x4B (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00140A0A; /* je: equal / zero */

loc_001409FF: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x4C) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x4C (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00140A0A; /* je: equal / zero */

loc_00140A03: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x4D) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x4D (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00140A0A; /* je: equal / zero */

loc_00140A07: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_00140A0A: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00140A30
 * Original: 0x00140A30 - 0x00140A3C (12 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00140A30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00140A30: ;
    SET_LO8(edx, MEM8(ecx + 8));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0x54) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0x54 (8-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    esp += 4; return; /* ret */

}

/**
 * sub_00140A40
 * Original: 0x00140A40 - 0x00140A4C (12 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00140A40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00140A40: ;
    SET_LO8(edx, MEM8(ecx + 8));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0x5A) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0x5A (8-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    esp += 4; return; /* ret */

}

/**
 * sub_00140A50
 * Original: 0x00140A50 - 0x00140BC9 (377 bytes, 108 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00140A50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00140A50: ;
    _fb = (uint32_t)(0x8C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x8C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x50C524);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x94);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    PUSH32(esp, edi);
    MEM32(esp + 0x90) = eax;
    edi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_00140A88; /* jne: not equal / not zero */

loc_00140A71: ;
    PUSH32(esp, 0xF0);
    PUSH32(esp, 0x4AD4BC);
    PUSH32(esp, 0x4AD4A4);
    PUSH32(esp, 0x00140A85u); RECOMP_ABI_CALL(0x000EB51Cu, sub_000EB51C); /* call 0x000EB51C */

loc_00140A85: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00140A88: ;
    SET_LO8(eax, MEM8(edi + 8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00140AAB; /* jne: not equal / not zero */

loc_00140A8F: ;
    POP32(esp, edi);
    MEM16(esi) = 0;
    POP32(esp, esi);
    ecx = MEM32(esp + 0x88);
    PUSH32(esp, 0x00140AA2u); RECOMP_ABI_CALL(0x000EB37Bu, sub_000EB37B); /* call 0x000EB37B */

loc_00140AA2: ;
    _fb = (uint32_t)(0x8C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x8C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_00140AAB: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x46) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x46 (8-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00140BA7; /* jl: less (signed <) */

loc_00140AB3: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x4D) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x4D (8-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00140BA7; /* jg: greater (signed >) */

loc_00140ABB: ;
    PUSH32(esp, 0x4AD49C);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00140AC6u); RECOMP_ABI_CALL(0x000FD86Du, sub_000FD86D); /* call 0x000FD86D */

loc_00140AC6: ;
    eax = (uint32_t)(int32_t)SMEM8(edi + 8);
    _fb = (uint32_t)(0xFFFFFFBAu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFBAu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 7 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00140B41; /* ja: above (unsigned >) */

loc_00140AD2: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x140BCC); /* switch: 8 entries, 8 targets */
    if (_jt == 0x00140AD9u) goto loc_00140AD9;
    if (_jt == 0x00140AE6u) goto loc_00140AE6;
    if (_jt == 0x00140AF3u) goto loc_00140AF3;
    if (_jt == 0x00140B00u) goto loc_00140B00;
    if (_jt == 0x00140B0Du) goto loc_00140B0D;
    if (_jt == 0x00140B1Au) goto loc_00140B1A;
    if (_jt == 0x00140B27u) goto loc_00140B27;
    if (_jt == 0x00140B34u) goto loc_00140B34;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00140AD9: ;
    PUSH32(esp, 0x4AD494);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00140AE4u); RECOMP_ABI_CALL(0x000FD911u, sub_000FD911); /* call 0x000FD911 */

loc_00140AE4: ;
    goto loc_00140B58;

loc_00140AE6: ;
    PUSH32(esp, 0x4AD48C);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00140AF1u); RECOMP_ABI_CALL(0x000FD911u, sub_000FD911); /* call 0x000FD911 */

loc_00140AF1: ;
    goto loc_00140B58;

loc_00140AF3: ;
    PUSH32(esp, 0x4AD484);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00140AFEu); RECOMP_ABI_CALL(0x000FD911u, sub_000FD911); /* call 0x000FD911 */

loc_00140AFE: ;
    goto loc_00140B58;

loc_00140B00: ;
    PUSH32(esp, 0x4AD47C);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00140B0Bu); RECOMP_ABI_CALL(0x000FD911u, sub_000FD911); /* call 0x000FD911 */

loc_00140B0B: ;
    goto loc_00140B58;

loc_00140B0D: ;
    PUSH32(esp, 0x4AD474);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00140B18u); RECOMP_ABI_CALL(0x000FD911u, sub_000FD911); /* call 0x000FD911 */

loc_00140B18: ;
    goto loc_00140B58;

loc_00140B1A: ;
    PUSH32(esp, 0x4AD46C);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00140B25u); RECOMP_ABI_CALL(0x000FD911u, sub_000FD911); /* call 0x000FD911 */

loc_00140B25: ;
    goto loc_00140B58;

loc_00140B27: ;
    PUSH32(esp, 0x4AD464);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00140B32u); RECOMP_ABI_CALL(0x000FD911u, sub_000FD911); /* call 0x000FD911 */

loc_00140B32: ;
    goto loc_00140B58;

loc_00140B34: ;
    PUSH32(esp, 0x4AD45C);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00140B3Fu); RECOMP_ABI_CALL(0x000FD911u, sub_000FD911); /* call 0x000FD911 */

loc_00140B3F: ;
    goto loc_00140B58;

loc_00140B41: ;
    PUSH32(esp, 0x105);
    PUSH32(esp, 0x4AD4BC);
    PUSH32(esp, 0x4AD454);
    PUSH32(esp, 0x00140B55u); RECOMP_ABI_CALL(0x000EB51Cu, sub_000EB51C); /* call 0x000EB51C */

loc_00140B55: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00140B58: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ecx, MEM8(edi + 8));
    PUSH32(esp, 0x20);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00140B6Au); RECOMP_ABI_CALL(0x000FBDEBu, sub_000FBDEB); /* call 0x000FBDEB */

loc_00140B6A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00140BB2; /* jne: not equal / not zero */

loc_00140B6E: ;
    edx = esp + 8;
    PUSH32(esp, edx);
    eax = esp + 0x4C;
    PUSH32(esp, 0x4AD444);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00140B82u); RECOMP_ABI_CALL(0x000F4F93u, sub_000F4F93); /* call 0x000F4F93 */

loc_00140B82: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0x48;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00140B90u); RECOMP_ABI_CALL(0x000FD911u, sub_000FD911); /* call 0x000FD911 */

loc_00140B90: ;
    POP32(esp, edi);
    POP32(esp, esi);
    ecx = MEM32(esp + 0x88);
    PUSH32(esp, 0x00140B9Eu); RECOMP_ABI_CALL(0x000EB37Bu, sub_000EB37B); /* call 0x000EB37B */

loc_00140B9E: ;
    _fb = (uint32_t)(0x8C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x8C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_00140BA7: ;
    PUSH32(esp, 0x4AD424);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00140BB2u); RECOMP_ABI_CALL(0x000FD86Du, sub_000FD86D); /* call 0x000FD86D */

loc_00140BB2: ;
    ecx = MEM32(esp + 0x90);
    POP32(esp, edi);
    POP32(esp, esi);
    PUSH32(esp, 0x00140BC0u); RECOMP_ABI_CALL(0x000EB37Bu, sub_000EB37B); /* call 0x000EB37B */

loc_00140BC0: ;
    _fb = (uint32_t)(0x8C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x8C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00140BF0
 * Original: 0x00140BF0 - 0x00140C5D (109 bytes, 40 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00140BF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00140BF0: ;
    eax = ecx + 8;
    SET_LO8(ecx, MEM8(eax));
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x18));
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00140C15; /* je: equal / zero */

loc_00140BFC: ;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    edx = esp + 4;
    PUSH32(esp, edx);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00140C11u); RECOMP_ABI_CALL(0x000FAE5Eu, sub_000FAE5E); /* call 0x000FAE5E */

loc_00140C11: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00140C1D; /* jne: not equal / not zero */

loc_00140C15: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x18)) >> 32) & 1);
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_00140C1D: ;
    eax = MEM32(esp + 0x1C);
    edx = MEM32(esp);
    ecx = MEM32(esp + 4);
    MEM32(eax) = edx;
    edx = MEM32(esp + 0x24);
    MEM32(eax + 4) = ecx;
    ecx = MEM32(esp + 8);
    MEM32(edx) = ecx;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    MEM32(edx + 4) = esi;
    edx = MEM32(eax);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edx) < (uint32_t)(ecx));
    edx = edx - ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(eax + 4);
    eax = MEM32(esp + 0x24);
    { uint64_t _t = (uint64_t)(ecx) - (uint64_t)(esi) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); ecx = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    MEM32(eax) = edx;
    MEM32(eax + 4) = ecx;
    eax = 1;
    POP32(esp, esi);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x18)) >> 32) & 1);
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00140C46
 * Original: 0x00140C46 - 0x00140C5D (23 bytes, 8 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00140C46(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00140C46: ;
    eax = MEM32(esp + 0x24);
    { uint64_t _t = (uint64_t)(ecx) - (uint64_t)(esi) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); ecx = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    MEM32(eax) = edx;
    MEM32(eax + 4) = ecx;
    eax = 1;
    POP32(esp, esi);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x18)) >> 32) & 1);
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00140C60
 * Original: 0x00140C60 - 0x00140C6A (10 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00140C60(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00140C60: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00140C69u); RECOMP_ABI_CALL(0x000FBD50u, sub_000FBD50); /* call 0x000FBD50 */

loc_00140C69: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00140C70
 * Original: 0x00140C70 - 0x00140C7A (10 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00140C70(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00140C70: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00140C79u); RECOMP_ABI_CALL(0x000FBCB1u, sub_000FBCB1); /* call 0x000FBCB1 */

loc_00140C79: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00140C80
 * Original: 0x00140C80 - 0x00140C8C (12 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00140C80(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00140C80: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00140C89u); RECOMP_ABI_CALL(0x000FBCB1u, sub_000FBCB1); /* call 0x000FBCB1 */

loc_00140C89: ;
    eax = eax << 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esp += 4; return; /* ret */

}

/**
 * sub_00140C89
 * Original: 0x00140C89 - 0x00140C8C (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00140C89(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00140C89: ;
    eax = eax << 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esp += 4; return; /* ret */

}

/**
 * sub_00140C90
 * Original: 0x00140C90 - 0x00140CB4 (36 bytes, 16 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00140C90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00140C90: ;
    PUSH32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00140C9Au); RECOMP_ABI_CALL(0x000FBCB1u, sub_000FBCB1); /* call 0x000FBCB1 */

loc_00140C9A: ;
    esi = MEM32(esp + 8);
    ecx = eax;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = esi;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00140CAE; /* je: equal / zero */

loc_00140CAA: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00140CAE: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00140CC0
 * Original: 0x00140CC0 - 0x00140CD1 (17 bytes, 6 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00140CC0(void)
{

loc_00140CC0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(ecx + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00140CCEu); RECOMP_ABI_CALL(0x002ACADCu, sub_002ACADC); /* call 0x002ACADC */

loc_00140CCE: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00140CE0
 * Original: 0x00140CE0 - 0x00140CFA (26 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00140CE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00140CE0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00140CF8; /* je: equal / zero */

loc_00140CEB: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00140CF1u); RECOMP_ABI_CALL(0x002ACB23u, sub_002ACB23); /* call 0x002ACB23 */

loc_00140CF1: ;
    MEM32(esi + 4) = 0xFFFFFFFFu;

loc_00140CF8: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00140D00
 * Original: 0x00140D00 - 0x00140D28 (40 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00140D00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00140D00: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00140D18; /* je: equal / zero */

loc_00140D0B: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00140D11u); RECOMP_ABI_CALL(0x002ACB23u, sub_002ACB23); /* call 0x002ACB23 */

loc_00140D11: ;
    MEM32(esi + 4) = 0xFFFFFFFFu;

loc_00140D18: ;
    eax = MEM32(esp + 8);
    SET_LO8(ecx, MEM8(eax + 8));
    MEM8(esi + 8) = LO8(ecx);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00140D30
 * Original: 0x00140D30 - 0x00140D50 (32 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00140D30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00140D30: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    MEM32(esi) = 0x4AD420;
    if (CMP_EQ(_fa, _fb)) goto loc_00140D4E; /* je: equal / zero */

loc_00140D41: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00140D47u); RECOMP_ABI_CALL(0x002ACB23u, sub_002ACB23); /* call 0x002ACB23 */

loc_00140D47: ;
    MEM32(esi + 4) = 0xFFFFFFFFu;

loc_00140D4E: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00140D90
 * Original: 0x00140D90 - 0x00140DC4 (52 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00140D90(void)
{

loc_00140D90: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    MEM32(esi) = 0x4AD420;
    MEM32(esi + 4) = 0xFFFFFFFFu;
    eax = MEM32(0x50FB00);
    PUSH32(esp, eax);
    edi = esi + 8;
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = 0;
    PUSH32(esp, 0x00140DBBu); RECOMP_ABI_CALL(0x000FA24Eu, sub_000FA24E); /* call 0x000FA24E */

loc_00140DBB: ;
    MEM8(edi) = 0x54;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00140DD0
 * Original: 0x00140DD0 - 0x00140E0F (63 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00140DD0(void)
{

loc_00140DD0: ;
    PUSH32(esp, ecx);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    MEM32(esp + 0xC) = 0;
    PUSH32(esp, 0x00140DE5u); RECOMP_ABI_CALL(0x000FB3F4u, sub_000FB3F4); /* call 0x000FB3F4 */

loc_00140DE5: ;
    esi = MEM32(esp + 0x10);
    MEM32(esi) = 0x4AD420;
    MEM32(esi + 4) = 0xFFFFFFFFu;
    ecx = MEM32(0x50FB00);
    PUSH32(esp, ecx);
    edi = esi + 8;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00140E06u); RECOMP_ABI_CALL(0x000FA24Eu, sub_000FA24E); /* call 0x000FA24E */

loc_00140E06: ;
    MEM8(edi) = 0x5A;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00140E10
 * Original: 0x00140E10 - 0x00140E3E (46 bytes, 16 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00140E10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00140E10: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00140E33; /* je: equal / zero */

loc_00140E1B: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00140E21u); RECOMP_ABI_CALL(0x002ACB23u, sub_002ACB23); /* call 0x002ACB23 */

loc_00140E21: ;
    SET_LO8(eax, MEM8(esp + 8));
    MEM32(esi + 4) = 0xFFFFFFFFu;
    MEM8(esi + 8) = LO8(eax);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00140E33: ;
    SET_LO8(ecx, MEM8(esp + 8));
    MEM8(esi + 8) = LO8(ecx);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00140E40
 * Original: 0x00140E40 - 0x00140E84 (68 bytes, 26 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00140E40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00140E40: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00140E58; /* je: equal / zero */

loc_00140E4B: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00140E51u); RECOMP_ABI_CALL(0x002ACB23u, sub_002ACB23); /* call 0x002ACB23 */

loc_00140E51: ;
    MEM32(esi + 4) = 0xFFFFFFFFu;

loc_00140E58: ;
    SET_LO8(ecx, MEM8(esi + 8));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    eax = esi + 8;
    if (CMP_NE(_fa, _fb)) goto loc_00140E68; /* jne: not equal / not zero */

loc_00140E62: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00140E68: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00140E73u); RECOMP_ABI_CALL(0x002AC9D2u, sub_002AC9D2); /* call 0x002AC9D2 */

loc_00140E73: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM32(esi + 4) = eax;
    POP32(esp, esi);
    eax = edx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00140E81
 * Original: 0x00140E81 - 0x00140E84 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00140E81(void)
{

loc_00140E81: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00140E90
 * Original: 0x00140E90 - 0x00140EC4 (52 bytes, 17 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00140E90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00140E90: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    MEM32(esi) = 0x4AD420;
    if (CMP_EQ(_fa, _fb)) goto loc_00140EAE; /* je: equal / zero */

loc_00140EA1: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00140EA7u); RECOMP_ABI_CALL(0x002ACB23u, sub_002ACB23); /* call 0x002ACB23 */

loc_00140EA7: ;
    MEM32(esi + 4) = 0xFFFFFFFFu;

loc_00140EAE: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00140EBE; /* je: equal / zero */

loc_00140EB5: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00140EBBu); RECOMP_ABI_CALL(0x000EB425u, sub_000EB425); /* call 0x000EB425 */

loc_00140EBB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00140EBE: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00140ED0
 * Original: 0x00140ED0 - 0x00140FC7 (247 bytes, 73 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00140ED0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00140ED0: ;
    _fb = (uint32_t)(0x354) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x354;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x50C524);
    PUSH32(esp, esi);
    MEM32(esp + 0x354) = eax;
    eax = MEM32(0x50FB00);
    esi = ecx;
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    MEM32(esp + 0xC) = 0x4AD420;
    MEM32(esp + 0x10) = 0xFFFFFFFFu;
    PUSH32(esp, 0x00140F05u); RECOMP_ABI_CALL(0x000FA24Eu, sub_000FA24E); /* call 0x000FA24E */

loc_00140F05: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    SET_LO8(edx, MEM8(esi + 8));
    MEM8(esp + 0xC) = LO8(edx);
    if (CMP_EQ(_fa, _fb)) goto loc_00140F22; /* je: equal / zero */

loc_00140F15: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00140F1Bu); RECOMP_ABI_CALL(0x002ACB23u, sub_002ACB23); /* call 0x002ACB23 */

loc_00140F1B: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 8) = eax;

loc_00140F22: ;
    SET_LO8(ecx, MEM8(esp + 0xC));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00140F49; /* je: equal / zero */

loc_00140F2A: ;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00140F39u); RECOMP_ABI_CALL(0x002AC9D2u, sub_002AC9D2); /* call 0x002AC9D2 */

loc_00140F39: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM32(esp + 8) = eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00140F72; /* jne: not equal / not zero */

loc_00140F49: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    MEM32(esp + 4) = 0x4AD420;
    if (CMP_EQ(_fa, _fb)) goto loc_00140F5C; /* je: equal / zero */

loc_00140F56: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00140F5Cu); RECOMP_ABI_CALL(0x002ACB23u, sub_002ACB23); /* call 0x002ACB23 */

loc_00140F5C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    ecx = MEM32(esp + 0x350);
    PUSH32(esp, 0x00140F6Bu); RECOMP_ABI_CALL(0x000EB37Bu, sub_000EB37B); /* call 0x000EB37B */

loc_00140F6B: ;
    _fb = (uint32_t)(0x354) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x354;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00140F72: ;
    edx = esp + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    esi = 1;
    PUSH32(esp, 0x00140F82u); RECOMP_ABI_CALL(0x002ACADCu, sub_002ACADC); /* call 0x002ACADC */

loc_00140F82: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00140F9A; /* je: equal / zero */

loc_00140F86: ;
    ecx = MEM32(esp + 8);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x00140F96u); RECOMP_ABI_CALL(0x002ACADCu, sub_002ACADC); /* call 0x002ACADC */

loc_00140F96: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00140F86; /* jne: not equal / not zero */

loc_00140F9A: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    MEM32(esp + 4) = 0x4AD420;
    if (CMP_EQ(_fa, _fb)) goto loc_00140FB1; /* je: equal / zero */

loc_00140FAB: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00140FB1u); RECOMP_ABI_CALL(0x002ACB23u, sub_002ACB23); /* call 0x002ACB23 */

loc_00140FB1: ;
    ecx = MEM32(esp + 0x354);
    eax = esi;
    POP32(esp, esi);
    PUSH32(esp, 0x00140FC0u); RECOMP_ABI_CALL(0x000EB37Bu, sub_000EB37B); /* call 0x000EB37B */

loc_00140FC0: ;
    _fb = (uint32_t)(0x354) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x354;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00140FD0
 * Original: 0x00140FD0 - 0x00140FFA (42 bytes, 16 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00140FD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00140FD0: ;
    eax = MEM32(esp + 4);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00140FEB; /* je: equal / zero */

loc_00140FDA: ;
    if (CMP_LE(_fas, _fbs)) goto loc_00140FF0; /* jle: less or equal (signed <=) */

loc_00140FDC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00140FF0; /* jg: greater (signed >) */

loc_00140FE1: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00140FE7u); RECOMP_ABI_CALL(0x002B5F90u, sub_002B5F90); /* call 0x002B5F90 */

loc_00140FE7: ;
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_00140FEB: ;
    ecx = 1;

loc_00140FF0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00140FF6u); RECOMP_ABI_CALL(0x002B5F90u, sub_002B5F90); /* call 0x002B5F90 */

loc_00140FF6: ;
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00141000
 * Original: 0x00141000 - 0x0014104F (79 bytes, 24 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00141000(void)
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

loc_00141000: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x4964E8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x4964e8] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00141047; /* jne: not equal / not zero */

loc_00141011: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x496454)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x496454] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00141042; /* je: equal / zero */

loc_00141022: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_push(0.69314718055994530942); /* fldln2 */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    { fp_st1() = fp_st1() * log2(fp_top()); fp_pop(); } /* fyl2x */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x496544)); /* fmul dword ptr [0x496544] */
    PUSH32(esp, 0x00141037u); RECOMP_ABI_CALL(0x000EB38Cu, sub_000EB38C); /* call 0x000EB38C */

loc_00141037: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFC40u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFC40u (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00141047; /* jl: less (signed <) */

loc_0014103E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0014104C; /* jle: less or equal (signed <=) */

loc_00141042: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

loc_00141047: ;
    eax = 0xFFFFFC40u;

loc_0014104C: ;
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00141050
 * Original: 0x00141050 - 0x00141055 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00141050(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00141050: ;
    g_seh_ebp = ebp; sub_002B7500(); return; /* tail jmp 0x002B7500 */

}

/**
 * sub_00141060
 * Original: 0x00141060 - 0x00141065 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00141060(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00141060: ;
    g_seh_ebp = ebp; sub_002B7520(); return; /* tail jmp 0x002B7520 */

}

/**
 * sub_00141070
 * Original: 0x00141070 - 0x0014109C (44 bytes, 17 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00141070(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00141070: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0014107Bu); RECOMP_ABI_CALL(0x00106120u, sub_00106120); /* call 0x00106120 */

loc_0014107B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00141098; /* je: equal / zero */

loc_00141082: ;
    eax = MEM32(eax + 0x40);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0014108Bu); RECOMP_ABI_CALL(0x002B7A70u, sub_002B7A70); /* call 0x002B7A70 */

loc_0014108B: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00141091u); RECOMP_ABI_CALL(0x00106150u, sub_00106150); /* call 0x00106150 */

loc_00141091: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00141082; /* jne: not equal / not zero */

loc_00141098: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001410A0
 * Original: 0x001410A0 - 0x001410C4 (36 bytes, 11 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001410A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001410A0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001410AAu); RECOMP_ABI_CALL(0x002B7F50u, sub_002B7F50); /* call 0x002B7F50 */

loc_001410AA: ;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001410B4u); RECOMP_ABI_CALL(0x002B7F80u, sub_002B7F80); /* call 0x002B7F80 */

loc_001410B4: ;
    edx = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001410BEu); RECOMP_ABI_CALL(0x002B7FB0u, sub_002B7FB0); /* call 0x002B7FB0 */

loc_001410BE: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001410D0
 * Original: 0x001410D0 - 0x001410D5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001410D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001410D0: ;
    g_seh_ebp = ebp; sub_002B7F10(); return; /* tail jmp 0x002B7F10 */

}

/**
 * sub_001410E0
 * Original: 0x001410E0 - 0x001410E5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001410E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001410E0: ;
    g_seh_ebp = ebp; sub_002B7F30(); return; /* tail jmp 0x002B7F30 */

}

/**
 * sub_001410F0
 * Original: 0x001410F0 - 0x00141178 (136 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001410F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_001410F0: ;
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x38));
    esp = esp - 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(esp + 0x40);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x1C) = eax;
    MEM32(esp + 0x24) = eax;
    MEM32(esp + 0x2C) = eax;
    MEM32(esp + 0x30) = eax;
    MEM32(esp + 0x34) = eax;
    eax = MEM32(esp + 0x44);
    _fb = (uint32_t)(0xB) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(0xB)) >> 32) & 1);
    edx = edx + 0xB;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x251C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0xFFFFD8F0u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFD8F0u)) >> 32) & 1);
    eax = eax + 0xFFFFD8F0u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 6;
    MEM32(esp + 0x30) = edx;
    edx = esp;
    MEM32(esp + 0x34) = eax;
    eax = MEM32(esp + 0x3C);
    MEM32(esp + 8) = ecx;
    MEM32(esp) = ecx;
    PUSH32(esp, edx);
    ecx = esp + 0xC;
    PUSH32(esp, eax);
    MEM32(esp + 0x18) = 8;
    MEM32(esp + 0x20) = 7;
    MEM32(esp + 0x28) = 9;
    MEM32(esp + 0x30) = 2;
    MEM32(esp + 0xC) = ecx;
    PUSH32(esp, 0x00141174u); RECOMP_ABI_CALL(0x002B8140u, sub_002B8140); /* call 0x002B8140 */

loc_00141174: ;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x40)) >> 32) & 1);
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00141180
 * Original: 0x00141180 - 0x001411B3 (51 bytes, 19 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00141180(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00141180: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0014118Bu); RECOMP_ABI_CALL(0x00106100u, sub_00106100); /* call 0x00106100 */

loc_0014118B: ;
    esi = eax;
    eax = MEM32(esi + 0x38);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001411A3; /* je: equal / zero */

loc_00141197: ;
    ecx = MEM32(esi + 0x40);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001411A0u); RECOMP_ABI_CALL(0x002B7D90u, sub_002B7D90); /* call 0x002B7D90 */

loc_001411A0: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001411A3: ;
    edx = MEM32(esi + 0x40);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001411ACu); RECOMP_ABI_CALL(0x002B7970u, sub_002B7970); /* call 0x002B7970 */

loc_001411AC: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001411C0
 * Original: 0x001411C0 - 0x00141209 (73 bytes, 27 insns)
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001411C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001411C0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x28);
    edx = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x40);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001411D6u); RECOMP_ABI_CALL(0x002B7C10u, sub_002B7C10); /* call 0x002B7C10 */

loc_001411D6: ;
    eax = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001411E1u); RECOMP_ABI_CALL(0x002B7C30u, sub_002B7C30); /* call 0x002B7C30 */

loc_001411E1: ;
    ecx = MEM32(esp + 0x24);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001411ECu); RECOMP_ABI_CALL(0x002B7C50u, sub_002B7C50); /* call 0x002B7C50 */

loc_001411EC: ;
    edx = MEM32(esp + 0x30);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001411F7u); RECOMP_ABI_CALL(0x002B7CD0u, sub_002B7CD0); /* call 0x002B7CD0 */

loc_001411F7: ;
    eax = MEM32(esp + 0x3C);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00141202u); RECOMP_ABI_CALL(0x002B7D10u, sub_002B7D10); /* call 0x002B7D10 */

loc_00141202: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 28; return; /* ret 24 */

}

/**
 * sub_00141210
 * Original: 0x00141210 - 0x0014122F (31 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00141210(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00141210: ;
    eax = MEM32(0x653C6C);
    ecx = MEM32(0x653C68);
    edx = MEM32(esp + 4);
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00141229u); RECOMP_ABI_CALL(0x00105E10u, sub_00105E10); /* call 0x00105E10 */

loc_00141229: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00141230
 * Original: 0x00141230 - 0x00141277 (71 bytes, 27 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00141230(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00141230: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x40);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00141240u); RECOMP_ABI_CALL(0x002B7A90u, sub_002B7A90); /* call 0x002B7A90 */

loc_00141240: ;
    ecx = MEM32(esp + 0x18);
    edx = MEM32(esi + 0x40);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0014124Eu); RECOMP_ABI_CALL(0x002B7BF0u, sub_002B7BF0); /* call 0x002B7BF0 */

loc_0014124E: ;
    eax = MEM32(esp + 0x24);
    ecx = MEM32(esi + 0x5C);
    edx = MEM32(esi + 0x44);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00141260u); RECOMP_ABI_CALL(0x001410F0u, sub_001410F0); /* call 0x001410F0 */

loc_00141260: ;
    eax = MEM32(esp + 0x28);
    ecx = MEM32(esi + 0x40);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0014126Eu); RECOMP_ABI_CALL(0x002B79C0u, sub_002B79C0); /* call 0x002B79C0 */

loc_0014126E: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00141280
 * Original: 0x00141280 - 0x001412CC (76 bytes, 29 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00141280(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00141280: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x40);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00141290u); RECOMP_ABI_CALL(0x002B7A90u, sub_002B7A90); /* call 0x002B7A90 */

loc_00141290: ;
    ecx = MEM32(esp + 0x1C);
    edx = MEM32(esi + 0x40);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0014129Eu); RECOMP_ABI_CALL(0x002B7BF0u, sub_002B7BF0); /* call 0x002B7BF0 */

loc_0014129E: ;
    eax = MEM32(esp + 0x28);
    ecx = MEM32(esi + 0x5C);
    edx = MEM32(esi + 0x44);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001412B0u); RECOMP_ABI_CALL(0x001410F0u, sub_001410F0); /* call 0x001410F0 */

loc_001412B0: ;
    eax = MEM32(esp + 0x2C);
    ecx = MEM32(esp + 0x28);
    edx = MEM32(esi + 0x40);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001412C3u); RECOMP_ABI_CALL(0x002B79E0u, sub_002B79E0); /* call 0x002B79E0 */

loc_001412C3: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_001412D0
 * Original: 0x001412D0 - 0x00141317 (71 bytes, 27 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001412D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001412D0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x40);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001412E0u); RECOMP_ABI_CALL(0x002B7A90u, sub_002B7A90); /* call 0x002B7A90 */

loc_001412E0: ;
    ecx = MEM32(esp + 0x18);
    edx = MEM32(esi + 0x40);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001412EEu); RECOMP_ABI_CALL(0x002B7BF0u, sub_002B7BF0); /* call 0x002B7BF0 */

loc_001412EE: ;
    eax = MEM32(esp + 0x24);
    ecx = MEM32(esi + 0x5C);
    edx = MEM32(esi + 0x44);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00141300u); RECOMP_ABI_CALL(0x001410F0u, sub_001410F0); /* call 0x001410F0 */

loc_00141300: ;
    eax = MEM32(esp + 0x28);
    ecx = MEM32(esi + 0x40);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0014130Eu); RECOMP_ABI_CALL(0x002B79C0u, sub_002B79C0); /* call 0x002B79C0 */

loc_0014130E: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00141320
 * Original: 0x00141320 - 0x0014136C (76 bytes, 29 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00141320(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00141320: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x40);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00141330u); RECOMP_ABI_CALL(0x002B7A90u, sub_002B7A90); /* call 0x002B7A90 */

loc_00141330: ;
    ecx = MEM32(esp + 0x1C);
    edx = MEM32(esi + 0x40);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0014133Eu); RECOMP_ABI_CALL(0x002B7BF0u, sub_002B7BF0); /* call 0x002B7BF0 */

loc_0014133E: ;
    eax = MEM32(esp + 0x28);
    ecx = MEM32(esi + 0x5C);
    edx = MEM32(esi + 0x44);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00141350u); RECOMP_ABI_CALL(0x001410F0u, sub_001410F0); /* call 0x001410F0 */

loc_00141350: ;
    eax = MEM32(esp + 0x2C);
    ecx = MEM32(esp + 0x28);
    edx = MEM32(esi + 0x40);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00141363u); RECOMP_ABI_CALL(0x002B79E0u, sub_002B79E0); /* call 0x002B79E0 */

loc_00141363: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_00141370
 * Original: 0x00141370 - 0x00141394 (36 bytes, 15 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00141370(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00141370: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x40);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    SET_LO8(ebx, 1);
    PUSH32(esp, 0x00141380u); RECOMP_ABI_CALL(0x002B7AD0u, sub_002B7AD0); /* call 0x002B7AD0 */

loc_00141380: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014138E; /* je: equal / zero */

loc_00141388: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_0014138E: ;
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001413A0
 * Original: 0x001413A0 - 0x001413C9 (41 bytes, 17 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001413A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001413A0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x40);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    SET_LO8(ebx, 1);
    PUSH32(esp, 0x001413B0u); RECOMP_ABI_CALL(0x002B7AD0u, sub_002B7AD0); /* call 0x002B7AD0 */

loc_001413B0: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001413C3; /* je: equal / zero */

loc_001413B8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001413C3; /* je: equal / zero */

loc_001413BD: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_001413C3: ;
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001413D0
 * Original: 0x001413D0 - 0x001413E8 (24 bytes, 8 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001413D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001413D0: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    edx = MEM32(ecx + 0x40);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001413E2u); RECOMP_ABI_CALL(0x002B7A90u, sub_002B7A90); /* call 0x002B7A90 */

loc_001413E2: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001413F0
 * Original: 0x001413F0 - 0x00141410 (32 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001413F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001413F0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x40);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001413FEu); RECOMP_ABI_CALL(0x002B7A70u, sub_002B7A70); /* call 0x002B7A70 */

loc_001413FE: ;
    ecx = MEM32(esi + 0x40);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00141409u); RECOMP_ABI_CALL(0x002B7A90u, sub_002B7A90); /* call 0x002B7A90 */

loc_00141409: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00141410
 * Original: 0x00141410 - 0x00141428 (24 bytes, 8 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00141410(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00141410: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    edx = MEM32(ecx + 0x40);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00141422u); RECOMP_ABI_CALL(0x002B7BF0u, sub_002B7BF0); /* call 0x002B7BF0 */

loc_00141422: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00141430
 * Original: 0x00141430 - 0x00141448 (24 bytes, 8 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00141430(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00141430: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    edx = MEM32(ecx + 0x40);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00141442u); RECOMP_ABI_CALL(0x002B7C30u, sub_002B7C30); /* call 0x002B7C30 */

loc_00141442: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00141450
 * Original: 0x00141450 - 0x00141468 (24 bytes, 8 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00141450(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00141450: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    edx = MEM32(ecx + 0x40);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00141462u); RECOMP_ABI_CALL(0x002B7C10u, sub_002B7C10); /* call 0x002B7C10 */

loc_00141462: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00141470
 * Original: 0x00141470 - 0x0014147E (14 bytes, 4 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00141470(void)
{

loc_00141470: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    MEM32(ecx + 0x50) = eax;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00141480
 * Original: 0x00141480 - 0x0014148E (14 bytes, 4 insns)
 * CC: cdecl, 2 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00141480(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00141480: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    eax = MEM32(esp + 4);
    MEMF(eax + 0x54) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00141490
 * Original: 0x00141490 - 0x001414BD (45 bytes, 16 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00141490(void)
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

loc_00141490: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    MEMF(esi + 0x58) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, ecx);
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x54)); /* fmul dword ptr [esi + 0x54] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x001414ACu); RECOMP_ABI_CALL(0x00141000u, sub_00141000); /* call 0x00141000 */

loc_001414AC: ;
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x40);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001414B6u); RECOMP_ABI_CALL(0x002B7B50u, sub_002B7B50); /* call 0x002B7B50 */

loc_001414B6: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001414C0
 * Original: 0x001414C0 - 0x001414E5 (37 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001414C0(void)
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

loc_001414C0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    fp_push(MEMF(esi + 0x58)); /* fld float */
    PUSH32(esp, ecx);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x54)); /* fmul dword ptr [esi + 0x54] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x001414D4u); RECOMP_ABI_CALL(0x00141000u, sub_00141000); /* call 0x00141000 */

loc_001414D4: ;
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x40);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001414DEu); RECOMP_ABI_CALL(0x002B7B50u, sub_002B7B50); /* call 0x002B7B50 */

loc_001414DE: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001414F0
 * Original: 0x001414F0 - 0x00141513 (35 bytes, 12 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001414F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001414F0: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001414FAu); RECOMP_ABI_CALL(0x00141000u, sub_00141000); /* call 0x00141000 */

loc_001414FA: ;
    ecx = MEM32(esp + 8);
    edx = MEM32(esp + 4);
    PUSH32(esp, eax);
    eax = MEM32(edx + 0x40);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0014150Du); RECOMP_ABI_CALL(0x002B7B90u, sub_002B7B90); /* call 0x002B7B90 */

loc_0014150D: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00141520
 * Original: 0x00141520 - 0x00141545 (37 bytes, 11 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00141520(void)
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

loc_00141520: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x4AD4E4)); /* fmul dword ptr [0x4ad4e4] */
    PUSH32(esp, 0x0014152Fu); RECOMP_ABI_CALL(0x000EB38Cu, sub_000EB38C); /* call 0x000EB38C */

loc_0014152F: ;
    PUSH32(esp, eax);
    eax = MEM32(esp + 8);
    ecx = MEM32(eax + 0x44);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0014153Fu); RECOMP_ABI_CALL(0x002B6620u, sub_002B6620); /* call 0x002B6620 */

loc_0014153F: ;
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
 * sub_00141550
 * Original: 0x00141550 - 0x00141568 (24 bytes, 8 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00141550(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00141550: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    edx = MEM32(ecx + 0x40);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00141562u); RECOMP_ABI_CALL(0x002B7C50u, sub_002B7C50); /* call 0x002B7C50 */

loc_00141562: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00141570
 * Original: 0x00141570 - 0x00141588 (24 bytes, 8 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00141570(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00141570: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    edx = MEM32(ecx + 0x40);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00141582u); RECOMP_ABI_CALL(0x002B7CD0u, sub_002B7CD0); /* call 0x002B7CD0 */

loc_00141582: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00141590
 * Original: 0x00141590 - 0x001415A8 (24 bytes, 8 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00141590(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00141590: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    edx = MEM32(ecx + 0x40);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001415A2u); RECOMP_ABI_CALL(0x002B7D10u, sub_002B7D10); /* call 0x002B7D10 */

loc_001415A2: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001415B0
 * Original: 0x001415B0 - 0x001415EC (60 bytes, 19 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001415B0(void)
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

loc_001415B0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x3C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001415E8; /* je: equal / zero */

loc_001415BC: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x49653C)); /* fmul dword ptr [0x49653c] */
    PUSH32(esp, 0x001415CBu); RECOMP_ABI_CALL(0x000EB38Cu, sub_000EB38C); /* call 0x000EB38C */

loc_001415CB: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x49653C)); /* fmul dword ptr [0x49653c] */
    PUSH32(esp, eax);
    PUSH32(esp, 0x001415DBu); RECOMP_ABI_CALL(0x000EB38Cu, sub_000EB38C); /* call 0x000EB38C */

loc_001415DB: ;
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x44);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001415E5u); RECOMP_ABI_CALL(0x002B5C20u, sub_002B5C20); /* call 0x002B5C20 */

loc_001415E5: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001415E8: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001415F0
 * Original: 0x001415F0 - 0x00141623 (51 bytes, 21 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001415F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001415F0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001415FBu); RECOMP_ABI_CALL(0x00106120u, sub_00106120); /* call 0x00106120 */

loc_001415FB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014161F; /* je: equal / zero */

loc_00141602: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);

loc_00141607: ;
    eax = MEM32(eax + 0x40);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00141611u); RECOMP_ABI_CALL(0x002B7A90u, sub_002B7A90); /* call 0x002B7A90 */

loc_00141611: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00141617u); RECOMP_ABI_CALL(0x00106150u, sub_00106150); /* call 0x00106150 */

loc_00141617: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00141607; /* jne: not equal / not zero */

loc_0014161E: ;
    POP32(esp, edi);

loc_0014161F: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00141630
 * Original: 0x00141630 - 0x00141704 (212 bytes, 73 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00141630(void)
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

loc_00141630: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x0014163Fu); RECOMP_ABI_CALL(0x00106120u, sub_00106120); /* call 0x00106120 */

loc_0014163F: ;
    esi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001416FC; /* je: equal / zero */

loc_0014164C: ;
    /* nop */

loc_00141650: ;
    eax = MEM32(esi + 0x40);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00141659u); RECOMP_ABI_CALL(0x002B7AD0u, sub_002B7AD0); /* call 0x002B7AD0 */

loc_00141659: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00141677; /* je: equal / zero */

loc_00141661: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00141677; /* je: equal / zero */

loc_00141666: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0014166Cu); RECOMP_ABI_CALL(0x00105F30u, sub_00105F30); /* call 0x00105F30 */

loc_0014166C: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00141672u); RECOMP_ABI_CALL(0x00106180u, sub_00106180); /* call 0x00106180 */

loc_00141672: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_001416F2;

loc_00141677: ;
    ecx = MEM32(esi + 0x50);
    PUSH32(esp, ecx);
    ecx = 0x64CFB8;
    PUSH32(esp, 0x00141685u); RECOMP_ABI_CALL(0x00143860u, sub_00143860); /* call 0x00143860 */

loc_00141685: ;
    MEMF(esi + 0x54) = (float)fp_top(); /* fst */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x58)); /* fmul dword ptr [esi + 0x58] */
    MEMF(esp + 0x10) = (float)fp_top(); /* fst */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x4964E8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x4964e8] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001416D5; /* jne: not equal / not zero */

loc_0014169C: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x496454)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x496454] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001416B1; /* jne: not equal / not zero */

loc_001416AD: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_001416DA;

loc_001416B1: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_push(0.69314718055994530942); /* fldln2 */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    { fp_st1() = fp_st1() * log2(fp_top()); fp_pop(); } /* fyl2x */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x496544)); /* fmul dword ptr [0x496544] */
    PUSH32(esp, 0x001416C6u); RECOMP_ABI_CALL(0x000EB38Cu, sub_000EB38C); /* call 0x000EB38C */

loc_001416C6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFC40u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFC40u (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001416D5; /* jl: less (signed <) */

loc_001416CD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001416DA; /* jle: less or equal (signed <=) */

loc_001416D1: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_001416DA;

loc_001416D5: ;
    eax = 0xFFFFFC40u;

loc_001416DA: ;
    edx = MEM32(esi + 0x40);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001416E4u); RECOMP_ABI_CALL(0x002B7B50u, sub_002B7B50); /* call 0x002B7B50 */

loc_001416E4: ;
    PUSH32(esp, ebx);
    edi = 1;
    PUSH32(esp, 0x001416EFu); RECOMP_ABI_CALL(0x00106150u, sub_00106150); /* call 0x00106150 */

loc_001416EF: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001416F2: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00141650; /* jne: not equal / not zero */

loc_001416FC: ;
    eax = edi;
    POP32(esp, edi);
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
 * sub_001418A0
 * Original: 0x001418A0 - 0x001418A1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001418A0(void)
{

loc_001418A0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001418B0
 * Original: 0x001418B0 - 0x001418B1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001418B0(void)
{

loc_001418B0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001418C0
 * Original: 0x001418C0 - 0x001418CA (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001418C0(void)
{

loc_001418C0: ;
    ecx = MEM32(eax * 4 + 0x3F0970);
    MEM32(edx) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_001418D0
 * Original: 0x001418D0 - 0x001418E3 (19 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001418D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001418D0: ;
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
 * sub_00141B80
 * Original: 0x00141B80 - 0x00141B85 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00141B80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00141B80: ;
    g_seh_ebp = ebp; sub_003C90A0(); return; /* tail jmp 0x003C90A0 */

}

/**
 * sub_00141BD0
 * Original: 0x00141BD0 - 0x00141BD1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00141BD0(void)
{

loc_00141BD0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00141BE0
 * Original: 0x00141BE0 - 0x00141BE5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00141BE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00141BE0: ;
    g_seh_ebp = ebp; sub_003FA941(); return; /* tail jmp 0x003FA941 */

}

/**
 * sub_00141BF0
 * Original: 0x00141BF0 - 0x00141D72 (386 bytes, 126 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00141BF0(void)
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

loc_00141BF0: ;
    ecx = MEM32(esp + 0xC);
    eax = MEM32(0x50FB0C);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(0x50FB04);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x20);
    PUSH32(esp, edi);
    edi = MEM32(0x50FB08);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00141C4A; /* je: equal / zero */

loc_00141C16: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00141C4A; /* je: equal / zero */

loc_00141C1A: ;
    fp_push((double)SMEM32(esp + 0x24)); /* fild */
    fp_push((double)SMEM32(0x50FB04)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() / fp_st1()); /* fdiv st(1) */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x14)); /* fmul dword ptr [esp + 0x14] */
    PUSH32(esp, 0x00141C33u); RECOMP_ABI_CALL(0x000EB38Cu, sub_000EB38C); /* call 0x000EB38C */

loc_00141C33: ;
    fp_push((double)SMEM32(esp + 0x28)); /* fild */
    esi = eax;
    MEM32(esp + 0x10) = esi;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x14)); /* fmul dword ptr [esp + 0x14] */
    PUSH32(esp, 0x00141C46u); RECOMP_ABI_CALL(0x000EB38Cu, sub_000EB38C); /* call 0x000EB38C */

loc_00141C46: ;
    ecx = eax;
    goto loc_00141C4E;

loc_00141C4A: ;
    MEM32(esp + 0x10) = esi;

loc_00141C4E: ;
    eax = ebx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ebx = eax;
    eax = esi;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((1) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = edi;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi = eax;
    eax = ecx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    MEM32(esp + 0x18) = ebx;
    esi = (uint32_t)(((int32_t)(int32_t)(esi)) >> ((1) & 31u));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x20);
    fp_push((double)SMEM32(esp + 0x18)); /* fild */
    MEM32(esp + 0x18) = esi;
    MEM32(esp + 0x14) = ecx;
    ecx = 0x3F800000;
    fp_push((double)SMEM32(esp + 0x18)); /* fild */
    MEM32(eax + 8) = ecx;
    fp_push((double)SMEM32(esp + 0x10)); /* fild */
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x20) = ecx;
    MEM32(eax + 0x24) = ecx;
    fp_top() = RECOMP_FP_PC(fp_top() + g_fp_stack[(g_fp_top + 2) & 7]); /* fadd st(2) */
    MEM32(eax + 0x38) = ecx;
    MEM32(eax + 0x3C) = ecx;
    MEM32(eax + 0x50) = ecx;
    MEMF(esp + 0x18) = (float)fp_top(); /* fst */
    MEM32(eax + 0x54) = ecx;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    MEM32(eax + 0x10) = ebp;
    MEM32(eax + 0x14) = ebp;
    MEM32(eax + 0x2C) = ebp;
    fp_top() = RECOMP_FP_PC(fp_top() + g_fp_stack[(g_fp_top + 2) & 7]); /* fadd st(2) */
    MEM32(eax + 0x40) = ebp;
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x14);
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(eax + 0x34) = edx;
    edx = MEM32(esp + 0x18);
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(eax + 0x48) = edx;
    edx = MEM32(esp + 0x14);
    MEMF(eax + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(eax + 0x4C) = edx;
    MEMF(eax + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(esp + 0x24)); /* fild */
    MEMF(eax + 0x28) = (float)fp_top(); /* fst */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMF(eax + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(esp + 0x28)); /* fild */
    MEMF(esp + 0x24) = (float)fp_top(); /* fst */
    ecx = MEM32(esp + 0x24);
    MEMF(eax + 0x44) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(eax + 0x5C) = ecx;
    MEMF(eax + 0x58) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x496B98)); /* fsub dword ptr [0x496b98] */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x496B98)); /* fsub dword ptr [0x496b98] */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x496B98)); /* fsub dword ptr [0x496b98] */
    MEMF(eax + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x496B98)); /* fsub dword ptr [0x496b98] */
    MEMF(eax + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 0x30)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x496B98)); /* fsub dword ptr [0x496b98] */
    MEMF(eax + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, edi);
    fp_push(MEMF(eax + 0x34)); /* fld float */
    POP32(esp, esi);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x496B98)); /* fsub dword ptr [0x496b98] */
    POP32(esp, ebp);
    POP32(esp, ebx);
    MEMF(eax + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 0x48)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x496B98)); /* fsub dword ptr [0x496b98] */
    MEMF(eax + 0x48) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 0x4C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x496B98)); /* fsub dword ptr [0x496b98] */
    MEMF(eax + 0x4C) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00141D80
 * Original: 0x00141D80 - 0x00141DE5 (101 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00141D80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00141D80: ;
    eax = MEM32(esp + 0xC);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00141DE4; /* jle: less or equal (signed <=) */

loc_00141D8A: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x14);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    /* nop */

loc_00141DA0: ;
    ecx = MEM32(esi);
    eax = MEM32(esi + 4);
    edi = ecx;
    edi = (uint32_t)((int32_t)edi * (int32_t)edx);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00141DC3; /* jne: not equal / not zero */

loc_00141DB0: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00141DD7; /* jle: less or equal (signed <=) */

loc_00141DB4: ;
    ecx = ebp + -1;
    ecx = ecx >> 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = 0x80108010u;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    goto loc_00141DD7;

loc_00141DC3: ;
    ebp = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = ebp;
    ebp = MEM32(esp + 0x18);
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = LO8(eax); edi -= ecx; }
    ecx = 0; /* rep stosb */

loc_00141DD7: ;
    eax = MEM32(esp + 0x1C);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00141DA0; /* jl: less (signed <) */

loc_00141DE0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_00141DE4: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00141ED0
 * Original: 0x00141ED0 - 0x00141ED3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00141ED0(void)
{

loc_00141ED0: ;
    eax = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00141EE0
 * Original: 0x00141EE0 - 0x00141F03 (35 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00141EE0(void)
{

loc_00141EE0: ;
    eax = MEM32(esp + 4);
    MEM32(0x64CE8C) = eax;
    MEM32(0x64CE90) = eax;
    MEM32(0x64CE94) = 0;
    MEM32(0x64CE98) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_001420B0
 * Original: 0x001420B0 - 0x001420B5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001420B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001420B0: ;
    g_seh_ebp = ebp; sub_003C8EC0(); return; /* tail jmp 0x003C8EC0 */

}

/**
 * sub_001420F0
 * Original: 0x001420F0 - 0x001420F5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001420F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001420F0: ;
    g_seh_ebp = ebp; sub_002B83A0(); return; /* tail jmp 0x002B83A0 */

}

/**
 * sub_001421A0
 * Original: 0x001421A0 - 0x001421A3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001421A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001421A0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_001421B0
 * Original: 0x001421B0 - 0x00142221 (113 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001421B0(void)
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

loc_001421B0: ;
    fp_push((double)SMEM32(esp + 8)); /* fild */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    fp_top() = RECOMP_FP_PC(fp_top() / (double)SMEM32(esp + 0x10)); /* fidiv dword ptr [esp + 0x10] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x49778C)); /* fmul dword ptr [0x49778c] */
    PUSH32(esp, 0x001421C6u); RECOMP_ABI_CALL(0x000EB38Cu, sub_000EB38C); /* call 0x000EB38C */

loc_001421C6: ;
    edi = eax;
    ebx = MEM32(esp + 0x18);
    eax = 0x5D34EDEF;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)edi;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((0x11) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ecx = edx;
    ecx = ecx >> 0x1F;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebx) = ecx;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x3C);
    eax = 0x57619F1;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)edi;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    eax = MEM32(esp + 0x1C);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((7) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    esi = edx;
    esi = esi >> 0x1F;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(eax) = esi;
    eax = edi;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x64;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    ecx = MEM32(ebx);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x3C);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x3C);
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(esp + 0x18);
    MEM32(ecx) = eax;
    eax = MEM32(esp + 0x1C);
    MEM32(eax) = edx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00142230
 * Original: 0x00142230 - 0x0014223F (15 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00142230(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00142230: ;
    PUSH32(esp, 0x00142235u); RECOMP_ABI_CALL(0x002B34A0u, sub_002B34A0); /* call 0x002B34A0 */

loc_00142235: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0014223Bu); RECOMP_ABI_CALL(0x002B34E0u, sub_002B34E0); /* call 0x002B34E0 */

loc_0014223B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00142640
 * Original: 0x00142640 - 0x0014266C (44 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00142640(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00142640: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, 0x64CE2C);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00142655u); RECOMP_ABI_CALL(0x00142390u, sub_00142390); /* call 0x00142390 */

loc_00142655: ;
    ecx = MEM32(esi + 0x10);
    edx = MEM32(esi + 0xC);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x64CE2C);
    PUSH32(esp, 0x00142667u); RECOMP_ABI_CALL(0x00141BF0u, sub_00141BF0); /* call 0x00141BF0 */

loc_00142667: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00142670
 * Original: 0x00142670 - 0x0014267A (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00142670(void)
{

loc_00142670: ;
    eax = MEM32(esp + 4);
    MEM32(0x64CFB0) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00142680
 * Original: 0x00142680 - 0x00142686 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00142680(void)
{

loc_00142680: ;
    eax = MEM32(0x64CFB0);
    esp += 4; return; /* ret */

}

/**
 * sub_00142690
 * Original: 0x00142690 - 0x0014269E (14 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00142690(void)
{

loc_00142690: ;
    MEM32(ecx) = 0;
    MEM32(ecx + 0x14) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_001426A0
 * Original: 0x001426A0 - 0x001426E5 (69 bytes, 22 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001426A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001426A0: ;
    eax = MEM32(ecx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001426AD; /* jne: not equal / not zero */

loc_001426A7: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 8; return; /* ret 4 */

loc_001426AD: ;
    edx = MEM32(eax + 0x18);
    MEM32(ecx + 8) = edx;
    edx = MEM32(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x103C928) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x103C928 (32-bit) */
    MEM32(eax + 0x18) = edx;
    if (CMP_NE(_fa, _fb)) goto loc_001426C3; /* jne: not equal / not zero */

loc_001426C0: ;
    MEM32(eax + 0x18) = edx;

loc_001426C3: ;
    edx = MEM32(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001426CC; /* je: equal / zero */

loc_001426C9: ;
    MEM32(edx + 0x14) = eax;

loc_001426CC: ;
    MEM32(ecx) = eax;
    ecx = MEM32(esp + 4);
    MEM32(eax + 0x14) = 0;
    MEM32(eax + 0x10) = 0;
    MEM32(eax) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001426F0
 * Original: 0x001426F0 - 0x001427E7 (247 bytes, 92 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001426F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001426F0: ;
    eax = MEM32(ecx + 4);
    PUSH32(esp, ebx);
    MEM32(ecx + 8) = eax;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx) = edi;
    MEM32(eax + 0x14) = edi;
    eax = MEM32(ecx + 8);
    edx = eax + 0x1C;
    MEM32(eax + 0x18) = edx;
    eax = MEM32(ecx + 8);
    MEM32(eax + 4) = edi;
    edx = MEM32(ecx + 8);
    MEM32(edx) = edi;
    eax = MEM32(ecx + 0x10);
    esi = 1;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00142755; /* jle: less or equal (signed <=) */

loc_00142721: ;
    eax = 0x1C;

loc_00142726: ;
    edx = MEM32(ecx + 8);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = edx + -28;
    MEM32(edx + 0x14) = ebx;
    edx = MEM32(ecx + 8);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = edx + 0x1C;
    MEM32(edx + 0x18) = ebx;
    edx = MEM32(ecx + 8);
    MEM32(eax + edx + 4) = edi;
    edx = MEM32(ecx + 8);
    MEM32(eax + edx) = edi;
    edx = MEM32(ecx + 0x10);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x1C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00142726; /* jl: less (signed <) */

loc_00142755: ;
    eax = MEM32(ecx + 0x10);
    edx = MEM32(ecx + 8);
    esi = eax + -2;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1C);
    esi = (uint32_t)((int32_t)esi * (int32_t)0x1C);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + edx + -8) = esi;
    eax = MEM32(ecx + 0x10);
    edx = MEM32(ecx + 8);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1C);
    MEM32(eax + edx + -4) = edi;
    eax = MEM32(ecx + 0x14);
    MEM32(ecx + 0x18) = eax;
    MEM32(eax + 4) = edi;
    eax = MEM32(ecx + 0x18);
    edx = eax + 0xC;
    MEM32(eax + 8) = edx;
    eax = MEM32(ecx + 0xC);
    esi = 1;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001427C2; /* jle: less or equal (signed <=) */

loc_00142796: ;
    eax = 0xC;
    goto loc_001427A0;

    /* nop */

loc_001427A0: ;
    edx = MEM32(ecx + 0x18);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = edx + -12;
    MEM32(edx + 4) = ebx;
    edx = MEM32(ecx + 0x18);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = edx + 0xC;
    MEM32(edx + 8) = ebx;
    edx = MEM32(ecx + 0xC);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001427A0; /* jl: less (signed <) */

loc_001427C2: ;
    eax = MEM32(ecx + 0xC);
    edx = MEM32(ecx + 0x18);
    esi = eax + eax * 2 + -6;
    esi = edx + esi * 4;
    eax = eax + eax * 2;
    MEM32(edx + eax * 4 + -8) = esi;
    eax = MEM32(ecx + 0xC);
    edx = eax + eax * 2;
    eax = MEM32(ecx + 0x18);
    MEM32(eax + edx * 4 + -4) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001427F0
 * Original: 0x001427F0 - 0x0014283A (74 bytes, 26 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001427F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001427F0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00142836; /* je: equal / zero */

loc_001427FA: ;
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00142836; /* je: equal / zero */

loc_00142801: ;
    edx = MEM32(eax + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00142812; /* je: equal / zero */

loc_00142808: ;
    eax = MEM32(eax + 8);
    edx = MEM32(eax + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00142808; /* jne: not equal / not zero */

loc_00142812: ;
    edx = MEM32(ecx + 0x18);
    MEM32(eax + 8) = edx;
    edx = MEM32(ecx + 0x18);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00142822; /* je: equal / zero */

loc_0014281F: ;
    MEM32(edx + 4) = eax;

loc_00142822: ;
    eax = MEM32(esi + 0x10);
    MEM32(ecx + 0x18) = eax;
    MEM32(esi + 0x10) = 0;
    MEM32(esi + 4) = 0;

loc_00142836: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001429F0
 * Original: 0x001429F0 - 0x00142A02 (18 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001429F0(void)
{

loc_001429F0: ;
    eax = ecx;
    MEM32(eax) = 0;
    MEM32(eax + 0x14) = 0;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00142AC0
 * Original: 0x00142AC0 - 0x00142B0F (79 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00142AC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00142AC0: ;
    edx = MEM32(ecx);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00142B0D; /* je: equal / zero */

loc_00142AC9: ;
    PUSH32(esp, esi);
    /* nop */

loc_00142AD0: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00142B05; /* je: equal / zero */

loc_00142AD5: ;
    eax = MEM32(edx + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00142B05; /* je: equal / zero */

loc_00142ADC: ;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 8), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00142AE9; /* je: equal / zero */

loc_00142AE1: ;
    eax = MEM32(eax + 8);
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 8), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00142AE1; /* jne: not equal / not zero */

loc_00142AE9: ;
    esi = MEM32(ecx + 0x18);
    MEM32(eax + 8) = esi;
    esi = MEM32(ecx + 0x18);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00142AF9; /* je: equal / zero */

loc_00142AF6: ;
    MEM32(esi + 4) = eax;

loc_00142AF9: ;
    eax = MEM32(edx + 0x10);
    MEM32(ecx + 0x18) = eax;
    MEM32(edx + 0x10) = edi;
    MEM32(edx + 4) = edi;

loc_00142B05: ;
    edx = MEM32(edx + 0x18);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00142AD0; /* jne: not equal / not zero */

loc_00142B0C: ;
    POP32(esp, esi);

loc_00142B0D: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_00142B10
 * Original: 0x00142B10 - 0x00142B2A (26 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00142B10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00142B10: ;
    eax = MEM32(ecx);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00142B1D; /* je: equal / zero */

loc_00142B18: ;
    MEM32(eax) = edx;
    MEM32(eax + 0x14) = edx;

loc_00142B1D: ;
    eax = MEM32(ecx + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00142B29; /* je: equal / zero */

loc_00142B24: ;
    MEM32(eax) = edx;
    MEM32(eax + 0x14) = edx;

loc_00142B29: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00142B30
 * Original: 0x00142B30 - 0x00142C62 (306 bytes, 108 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00142B30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00142B30: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x3BC3D6);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    eax = MEM32(0x50D86C);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x1C);
    ebp = ecx;
    PUSH32(esp, 0x00142B59u); RECOMP_ABI_CALL(0x00102BE0u, sub_00102BE0); /* call 0x00102BE0 */

loc_00142B59: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x10) = eax;
    esi = MEM32(esp + 0x28);
    edi = MEM32(esp + 0x24);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esp + 0x1C) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_00142B7D; /* je: equal / zero */

loc_00142B72: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = eax;
    PUSH32(esp, 0x00142B7Bu); RECOMP_ABI_CALL(0x00142A10u, sub_00142A10); /* call 0x00142A10 */

loc_00142B7B: ;
    goto loc_00142B7F;

loc_00142B7D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00142B7F: ;
    MEM32(ebp) = eax;
    ecx = MEM32(0x50D86C);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x1C);
    MEM32(esp + 0x24) = 0xFFFFFFFFu;
    PUSH32(esp, 0x00142B98u); RECOMP_ABI_CALL(0x00102BE0u, sub_00102BE0); /* call 0x00102BE0 */

loc_00142B98: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x28) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esp + 0x1C) = 1;
    if (CMP_EQ(_fa, _fb)) goto loc_00142BB6; /* je: equal / zero */

loc_00142BAB: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = eax;
    PUSH32(esp, 0x00142BB4u); RECOMP_ABI_CALL(0x00142A10u, sub_00142A10); /* call 0x00142A10 */

loc_00142BB4: ;
    goto loc_00142BB8;

loc_00142BB6: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00142BB8: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    MEM32(ebp + 0x14) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_00142C4D; /* jle: less or equal (signed <=) */

loc_00142BC5: ;
    edi = ebp + 0x18;

loc_00142BC8: ;
    ecx = MEM32(ebp);
    eax = MEM32(ecx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00142BD7; /* jne: not equal / not zero */

loc_00142BD2: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_00142C00;

loc_00142BD7: ;
    edx = MEM32(eax + 0x18);
    MEM32(ecx + 8) = edx;
    edx = MEM32(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x103C928) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x103C928 (32-bit) */
    MEM32(eax + 0x18) = edx;
    if (CMP_NE(_fa, _fb)) goto loc_00142BED; /* jne: not equal / not zero */

loc_00142BEA: ;
    MEM32(eax + 0x18) = edx;

loc_00142BED: ;
    edx = MEM32(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00142BF6; /* je: equal / zero */

loc_00142BF3: ;
    MEM32(edx + 0x14) = eax;

loc_00142BF6: ;
    MEM32(ecx) = eax;
    MEM32(eax + 0x14) = ebx;
    MEM32(eax + 0x10) = ebx;
    MEM32(eax) = esi;

loc_00142C00: ;
    MEM32(edi + -20) = eax;
    ecx = MEM32(ebp + 0x14);
    eax = MEM32(ecx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00142C12; /* jne: not equal / not zero */

loc_00142C0D: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_00142C3B;

loc_00142C12: ;
    edx = MEM32(eax + 0x18);
    MEM32(ecx + 8) = edx;
    edx = MEM32(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x103C928) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x103C928 (32-bit) */
    MEM32(eax + 0x18) = edx;
    if (CMP_NE(_fa, _fb)) goto loc_00142C28; /* jne: not equal / not zero */

loc_00142C25: ;
    MEM32(eax + 0x18) = edx;

loc_00142C28: ;
    edx = MEM32(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00142C31; /* je: equal / zero */

loc_00142C2E: ;
    MEM32(edx + 0x14) = eax;

loc_00142C31: ;
    MEM32(ecx) = eax;
    MEM32(eax + 0x14) = ebx;
    MEM32(eax + 0x10) = ebx;
    MEM32(eax) = esi;

loc_00142C3B: ;
    MEM32(edi) = eax;
    eax = MEM32(esp + 0x24);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00142BC8; /* jl: less (signed <) */

loc_00142C4D: ;
    ecx = MEM32(esp + 0x14);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00142C70
 * Original: 0x00142C70 - 0x00142C83 (19 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00142C70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00142C70: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x14);
    PUSH32(esp, 0x00142C7Bu); RECOMP_ABI_CALL(0x00142AC0u, sub_00142AC0); /* call 0x00142AC0 */

loc_00142C7B: ;
    ecx = MEM32(esi);
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00142AC0(); return; /* tail jmp 0x00142AC0 */

}

/**
 * sub_00142D40
 * Original: 0x00142D40 - 0x00142D4A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00142D40(void)
{

loc_00142D40: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x2C) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00142D50
 * Original: 0x00142D50 - 0x00142D54 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00142D50(void)
{

loc_00142D50: ;
    eax = MEM32(ecx + 0x2C);
    esp += 4; return; /* ret */

}

/**
 * sub_00142D60
 * Original: 0x00142D60 - 0x00142D80 (32 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00142D60(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00142D60: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 0x18) = ecx;
    MEM32(eax + 0x24) = ecx;
    MEM32(eax + 0x1C) = ecx;
    MEM8(eax) = LO8(ecx);
    ecx = MEM32(esp + 4);
    MEM32(eax + 0x28) = ecx;
    MEM32(eax + 0x2C) = 4;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00142E40
 * Original: 0x00142E40 - 0x00142E44 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00142E40(void)
{

loc_00142E40: ;
    MEM8(ecx) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_00143320
 * Original: 0x00143320 - 0x00143325 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00143320(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00143320: ;
    g_seh_ebp = ebp; sub_004001B7(); return; /* tail jmp 0x004001B7 */

}

/**
 * sub_00143330
 * Original: 0x00143330 - 0x00143335 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00143330(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00143330: ;
    g_seh_ebp = ebp; sub_00400201(); return; /* tail jmp 0x00400201 */

}

/**
 * sub_00143340
 * Original: 0x00143340 - 0x00143345 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00143340(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00143340: ;
    g_seh_ebp = ebp; sub_0040025A(); return; /* tail jmp 0x0040025A */

}

/**
 * sub_00143450
 * Original: 0x00143450 - 0x00143466 (22 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00143450(void)
{

loc_00143450: ;
    PUSH32(esp, 0x00143455u); RECOMP_ABI_CALL(0x00317BA0u, sub_00317BA0); /* call 0x00317BA0 */

loc_00143455: ;
    PUSH32(esp, 0x0014345Au); RECOMP_ABI_CALL(0x003174F0u, sub_003174F0); /* call 0x003174F0 */

loc_0014345A: ;
    PUSH32(esp, 0x64CFF8);
    PUSH32(esp, 0x00143464u); RECOMP_ABI_CALL(0x00105D60u, sub_00105D60); /* call 0x00105D60 */

loc_00143464: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00143530
 * Original: 0x00143530 - 0x0014354F (31 bytes, 9 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00143530(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00143530: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014353E; /* je: equal / zero */

loc_00143538: ;
    MEM32(eax) = 0x64D1CC;

loc_0014353E: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014354C; /* je: equal / zero */

loc_00143546: ;
    MEM32(eax) = 0x64D1DC;

loc_0014354C: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00143550
 * Original: 0x00143550 - 0x00143612 (194 bytes, 70 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00143550(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00143550: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    PUSH32(esp, 0x00143559u); RECOMP_ABI_CALL(0x00317C20u, sub_00317C20); /* call 0x00317C20 */

loc_00143559: ;
    PUSH32(esp, 0x64CFF8);
    MEM32(edi + 0x24) = 0;
    MEM32(edi + 0x20) = 0;
    PUSH32(esp, 0x00143571u); RECOMP_ABI_CALL(0x00106120u, sub_00106120); /* call 0x00106120 */

loc_00143571: ;
    esi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001435F9; /* je: equal / zero */

loc_0014357A: ;
    /* nop */

loc_00143580: ;
    SET_LO8(eax, MEM8(esi + 0x19));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001435D2; /* jne: not equal / not zero */

loc_00143587: ;
    SET_LO8(eax, MEM8(esi + 0x1A));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_001435A0; /* jbe: below or equal (unsigned <=) */

loc_0014358E: ;
    SET_LO8(eax, LO8(eax) - 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    MEM8(esi + 0x1A) = LO8(eax);
    if ((_fa != 0)) goto loc_001435E6; /* jne: not equal / not zero */

loc_00143595: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0014359Bu); RECOMP_ABI_CALL(0x00105F30u, sub_00105F30); /* call 0x00105F30 */

loc_0014359B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_001435E6;

loc_001435A0: ;
    eax = MEM32(esi + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001435BA; /* je: equal / zero */

loc_001435A7: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001435ADu); RECOMP_ABI_CALL(0x0031AB70u, sub_0031AB70); /* call 0x0031AB70 */

loc_001435AD: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_001435DE; /* jg: greater (signed >) */

loc_001435B4: ;
    MEM8(esi + 0x1A) = 8;
    goto loc_001435E6;

loc_001435BA: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(esi + 0x18));
    PUSH32(esp, eax);
    PUSH32(esp, 0x001435C5u); RECOMP_ABI_CALL(0x00318530u, sub_00318530); /* call 0x00318530 */

loc_001435C5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_001435E3; /* jg: greater (signed >) */

loc_001435CC: ;
    MEM8(esi + 0x1A) = 8;
    goto loc_001435E6;

loc_001435D2: ;
    SET_LO8(eax, LO8(eax) - 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    MEM8(esi + 0x19) = LO8(eax);
    eax = MEM32(esi + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001435E3; /* je: equal / zero */

loc_001435DE: ;
    MEM32(edi + 0x20) = MEM32(edi + 0x20) + 1;
    _fa = (uint32_t)(MEM32(edi + 0x20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_001435E6;

loc_001435E3: ;
    MEM32(edi + 0x24) = MEM32(edi + 0x24) + 1;
    _fa = (uint32_t)(MEM32(edi + 0x24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001435E6: ;
    PUSH32(esp, 0x64CFF8);
    PUSH32(esp, 0x001435F0u); RECOMP_ABI_CALL(0x00106150u, sub_00106150); /* call 0x00106150 */

loc_001435F0: ;
    esi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00143580; /* jne: not equal / not zero */

loc_001435F9: ;
    eax = MEM32(edi + 0x24);
    _fa = (uint32_t)(MEM32(edi + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x1C), eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00143604; /* jge: greater or equal (signed >=) */

loc_00143601: ;
    MEM32(edi + 0x1C) = eax;

loc_00143604: ;
    eax = MEM32(edi + 0x20);
    _fa = (uint32_t)(MEM32(edi + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x18), eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0014360F; /* jge: greater or equal (signed >=) */

loc_0014360C: ;
    MEM32(edi + 0x18) = eax;

loc_0014360F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00143620
 * Original: 0x00143620 - 0x0014362A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00143620(void)
{

loc_00143620: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x14) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00143630
 * Original: 0x00143630 - 0x00143634 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00143630(void)
{

loc_00143630: ;
    eax = MEM32(ecx + 0x14);
    esp += 4; return; /* ret */

}

/**
 * sub_00143640
 * Original: 0x00143640 - 0x00143668 (40 bytes, 9 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00143640(void)
{

loc_00143640: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    edx = MEM32(esp + 0xC);
    MEM32(eax * 4 + 0x64D028) = ecx;
    PUSH32(esp, 0x64D028);
    MEM32(eax * 4 + 0x64D0E8) = edx;
    PUSH32(esp, 0x00143664u); RECOMP_ABI_CALL(0x00318F20u, sub_00318F20); /* call 0x00318F20 */

loc_00143664: ;
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00143670
 * Original: 0x00143670 - 0x00143680 (16 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00143670(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00143670: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0014367Au); RECOMP_ABI_CALL(0x0031CFA0u, sub_0031CFA0); /* call 0x0031CFA0 */

loc_0014367A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00143680
 * Original: 0x00143680 - 0x00143695 (21 bytes, 7 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00143680(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00143680: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0014368Fu); RECOMP_ABI_CALL(0x00319D90u, sub_00319D90); /* call 0x00319D90 */

loc_0014368F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00143730
 * Original: 0x00143730 - 0x00143752 (34 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00143730(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00143730: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0014373Bu); RECOMP_ABI_CALL(0x00318B60u, sub_00318B60); /* call 0x00318B60 */

loc_0014373B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi * 4 + 0x64D028) = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi * 4 + 0x64D0E8) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00143760
 * Original: 0x00143760 - 0x00143771 (17 bytes, 5 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00143760(void)
{

loc_00143760: ;
    eax = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    MEM32(ecx + 0xC) = eax;
    MEM32(ecx + 0x10) = edx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00143780
 * Original: 0x00143780 - 0x001437A6 (38 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00143780(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00143780: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00143797; /* je: equal / zero */

loc_0014378B: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00143791u); RECOMP_ABI_CALL(0x0031AAB0u, sub_0031AAB0); /* call 0x0031AAB0 */

loc_00143791: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_00143797: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(ecx + 0x18));
    PUSH32(esp, eax);
    PUSH32(esp, 0x001437A2u); RECOMP_ABI_CALL(0x003182E0u, sub_003182E0); /* call 0x003182E0 */

loc_001437A2: ;
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001437B0
 * Original: 0x001437B0 - 0x001437C2 (18 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001437B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001437B0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0xA0000100u);
    PUSH32(esp, 0x20);
    PUSH32(esp, 0x001437BEu); RECOMP_ABI_CALL(0x00318690u, sub_00318690); /* call 0x00318690 */

loc_001437BE: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001437D0
 * Original: 0x001437D0 - 0x00143811 (65 bytes, 22 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001437D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001437D0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x64CFF8);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x001437DDu); RECOMP_ABI_CALL(0x00106120u, sub_00106120); /* call 0x00106120 */

loc_001437DD: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014380B; /* je: equal / zero */

loc_001437E4: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    /* nop */

loc_001437F0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001437F9; /* jne: not equal / not zero */

loc_001437F4: ;
    esi = 1;

loc_001437F9: ;
    PUSH32(esp, 0x64CFF8);
    PUSH32(esp, 0x00143803u); RECOMP_ABI_CALL(0x00106150u, sub_00106150); /* call 0x00106150 */

loc_00143803: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001437F0; /* jne: not equal / not zero */

loc_0014380A: ;
    POP32(esp, edi);

loc_0014380B: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00143820
 * Original: 0x00143820 - 0x0014384B (43 bytes, 13 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00143820(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00143820: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0014383A; /* jge: greater or equal (signed >=) */

loc_00143828: ;
    PUSH32(esp, 0x7F);
    PUSH32(esp, 0xA4000000u);
    PUSH32(esp, 0x00143834u); RECOMP_ABI_CALL(0x00318A00u, sub_00318A00); /* call 0x00318A00 */

loc_00143834: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0014383A: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0xA4000000u);
    PUSH32(esp, 0x00143845u); RECOMP_ABI_CALL(0x00318A00u, sub_00318A00); /* call 0x00318A00 */

loc_00143845: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00143850
 * Original: 0x00143850 - 0x0014385E (14 bytes, 4 insns)
 * CC: cdecl, 2 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00143850(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00143850: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    eax = MEM32(esp + 4);
    MEMF(ecx + eax * 4) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00143860
 * Original: 0x00143860 - 0x0014386A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00143860(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00143860: ;
    eax = MEM32(esp + 4);
    fp_push(MEMF(ecx + eax * 4)); /* fld float */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00143870
 * Original: 0x00143870 - 0x00143873 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00143870(void)
{

loc_00143870: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00143880
 * Original: 0x00143880 - 0x00143887 (7 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00143880(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00143880: ;
    eax = MEM32(ecx + 0x24);
    _fb = (uint32_t)(MEM32(ecx + 0x20)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(ecx + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00143890
 * Original: 0x00143890 - 0x0014395E (206 bytes, 71 insns)
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00143890(void)
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

loc_00143890: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 4);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x64CFF8);
    ebx = ecx;
    PUSH32(esp, 0x001438A7u); RECOMP_ABI_CALL(0x00105E10u, sub_00105E10); /* call 0x00105E10 */

loc_001438A7: ;
    ecx = MEM32(esp + 0x38);
    edx = MEM32(esp + 0x34);
    ebp = MEM32(esp + 0x2C);
    esi = eax;
    SET_LO8(eax, MEM8(esi + 0x18));
    MEM8(esp + 0x20) = LO8(eax);
    eax = MEM32(esp + 0x28);
    edi = MEM32(esp + 0x20);
    MEM32(esi + 0x3C) = ecx;
    ecx = ZX8(MEM8(esp + 0x2A));
    MEM32(esi + 0x30) = edx;
    edx = ZX8(HI8(eax));
    PUSH32(esp, ecx);
    MEM32(esi + 0x20) = eax;
    PUSH32(esp, edx);
    eax = eax & 0xF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, eax);
    eax = ZX8(MEM8(esp + 0x37));
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    MEM32(esi + 0x24) = ebp;
    MEM32(esi + 0x1C) = 0;
    MEM8(esi + 0x19) = 8;
    PUSH32(esp, 0x001438F5u); RECOMP_ABI_CALL(0x00318140u, sub_00318140); /* call 0x00318140 */

loc_001438F5: ;
    fp_push(MEMF(ebx + ebp * 4)); /* fld float */
    MEMF(esi + 0x28) = (float)fp_top(); /* fst */
    fp_push(MEMF(esp + 0x44)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x4C)); /* fmul dword ptr [esp + 0x4c] */
    fp_st1() = RECOMP_FP_PC(fp_st1() * fp_top()); fp_pop(); /* fmulp st(1) */
    MEMF(esi + 0x2C) = (float)fp_top(); /* fst */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x49653C)); /* fmul dword ptr [0x49653c] */
    PUSH32(esp, 0x00143913u); RECOMP_ABI_CALL(0x000EB38Cu, sub_000EB38C); /* call 0x000EB38C */

loc_00143913: ;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0014391Au); RECOMP_ABI_CALL(0x00318320u, sub_00318320); /* call 0x00318320 */

loc_0014391A: ;
    fp_push(MEMF(esp + 0x50)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x4AD840)); /* fmul dword ptr [0x4ad840] */
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x4AD840)); /* fadd dword ptr [0x4ad840] */
    PUSH32(esp, 0x00143932u); RECOMP_ABI_CALL(0x000EB38Cu, sub_000EB38C); /* call 0x000EB38C */

loc_00143932: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0014393A; /* jge: greater or equal (signed >=) */

loc_00143936: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00143944;

loc_0014393A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7F (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00143944; /* jle: less or equal (signed <=) */

loc_0014393F: ;
    eax = 0x7F;

loc_00143944: ;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0014394Bu); RECOMP_ABI_CALL(0x00318350u, sub_00318350); /* call 0x00318350 */

loc_0014394B: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00143951u); RECOMP_ABI_CALL(0x00319CB0u, sub_00319CB0); /* call 0x00319CB0 */

loc_00143951: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 28; return; /* ret 24 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00143960
 * Original: 0x00143960 - 0x00143ADB (379 bytes, 135 insns)
 * CC: cdecl, 8 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00143960(void)
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

loc_00143960: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 4);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x64CFF8);
    edi = ecx;
    PUSH32(esp, 0x00143976u); RECOMP_ABI_CALL(0x00105E10u, sub_00105E10); /* call 0x00105E10 */

loc_00143976: ;
    ecx = MEM32(esp + 0x30);
    edx = MEM32(esp + 0x34);
    ebp = MEM32(esp + 0x28);
    esi = eax;
    eax = MEM32(esp + 0x24);
    MEM32(esi + 0x38) = ecx;
    ecx = ZX8(MEM8(esp + 0x26));
    MEM32(esi + 0x3C) = edx;
    edx = ZX8(HI8(eax));
    PUSH32(esp, ecx);
    MEM32(esi + 0x20) = eax;
    PUSH32(esp, edx);
    eax = eax & 0xF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, eax);
    eax = ZX8(MEM8(esp + 0x33));
    PUSH32(esp, eax);
    MEM32(esi + 0x24) = ebp;
    MEM8(esi + 0x19) = 8;
    PUSH32(esp, 0x001439B1u); RECOMP_ABI_CALL(0x0031CAB0u, sub_0031CAB0); /* call 0x0031CAB0 */

loc_001439B1: ;
    ebx = eax;
    MEM32(esi + 0x1C) = ebx;
    fp_push(MEMF(edi + ebp * 4)); /* fld float */
    MEMF(esi + 0x28) = (float)fp_top(); /* fst */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x3C)); /* fmul dword ptr [esp + 0x3c] */
    MEMF(esi + 0x2C) = (float)fp_top(); /* fst */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x49653C)); /* fmul dword ptr [0x49653c] */
    PUSH32(esp, 0x001439CEu); RECOMP_ABI_CALL(0x000EB38Cu, sub_000EB38C); /* call 0x000EB38C */

loc_001439CE: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001439D5u); RECOMP_ABI_CALL(0x0031AD10u, sub_0031AD10); /* call 0x0031AD10 */

loc_001439D5: ;
    fp_push(MEMF(0x4964E8)); /* fld float */
    fp_push(MEMF(edi + 0xC)); /* fld float */
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    PUSH32(esp, 0);
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_001439F6; /* jnp: not parity */

loc_001439EC: ;
    ecx = MEM32(edi + 0xC);
    edx = MEM32(esi + 0x1C);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    goto loc_00143A00;

loc_001439F6: ;
    eax = MEM32(0x50FF74);
    ecx = MEM32(esi + 0x1C);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);

loc_00143A00: ;
    PUSH32(esp, 0x00143A05u); RECOMP_ABI_CALL(0x0031B510u, sub_0031B510); /* call 0x0031B510 */

loc_00143A05: ;
    fp_push(MEMF(0x4964E8)); /* fld float */
    fp_push(MEMF(edi + 0x10)); /* fld float */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    PUSH32(esp, 0);
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00143A26; /* jnp: not parity */

loc_00143A1C: ;
    edx = MEM32(edi + 0x10);
    eax = MEM32(esi + 0x1C);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    goto loc_00143A31;

loc_00143A26: ;
    ecx = MEM32(0x50FF78);
    edx = MEM32(esi + 0x1C);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);

loc_00143A31: ;
    PUSH32(esp, 0x00143A36u); RECOMP_ABI_CALL(0x0031B430u, sub_0031B430); /* call 0x0031B430 */

loc_00143A36: ;
    eax = MEM32(esp + 0x38);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(edi + 0xC) = 0;
    MEM32(edi + 0x10) = 0;
    eax = 0xFFFFFE0Cu;
    if (CMP_NE(_fa, _fb)) goto loc_00143A59; /* jne: not equal / not zero */

loc_00143A54: ;
    eax = 0xFFFFD8F0u;

loc_00143A59: ;
    PUSH32(esp, 0);
    MEM32(0x64D1B0) = eax;
    MEM32(0x64D1B4) = eax;
    eax = MEM32(esi + 0x1C);
    PUSH32(esp, 0x64D1A8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00143A73u); RECOMP_ABI_CALL(0x0031B350u, sub_0031B350); /* call 0x0031B350 */

loc_00143A73: ;
    edi = MEM32(esp + 0x34);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    PUSH32(esp, 0);
    if (CMP_EQ(_fa, _fb)) goto loc_00143AA3; /* je: equal / zero */

loc_00143A80: ;
    ecx = MEM32(edi + 8);
    edx = MEM32(edi + 4);
    eax = MEM32(edi);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x1C);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00143A94u); RECOMP_ABI_CALL(0x0031B6D0u, sub_0031B6D0); /* call 0x0031B6D0 */

loc_00143A94: ;
    edx = esi + 0x40;
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00143A9Eu); RECOMP_ABI_CALL(0x0015BDF0u, sub_0015BDF0); /* call 0x0015BDF0 */

loc_00143A9E: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00143AB5;

loc_00143AA3: ;
    eax = MEM32(esi + 0x1C);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00143AB2u); RECOMP_ABI_CALL(0x0031B6D0u, sub_0031B6D0); /* call 0x0031B6D0 */

loc_00143AB2: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00143AB5: ;
    ecx = MEM32(esi + 0x1C);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00143AC6u); RECOMP_ABI_CALL(0x0031B990u, sub_0031B990); /* call 0x0031B990 */

loc_00143AC6: ;
    edx = MEM32(esi + 0x1C);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00143ACFu); RECOMP_ABI_CALL(0x0031C310u, sub_0031C310); /* call 0x0031C310 */

loc_00143ACF: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 36; return; /* ret 32 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00143AE0
 * Original: 0x00143AE0 - 0x00143D65 (645 bytes, 229 insns)
 * CC: cdecl, 8 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00143AE0(void)
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

loc_00143AE0: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x1C);
    eax = MEM32(esi + 0x24);
    ebx = MEM32(esi + 0x1C);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    fp_push(MEMF(edi + eax * 4)); /* fld float */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    if (CMP_NE(_fa, _fb)) goto loc_00143C27; /* jne: not equal / not zero */

loc_00143B0B: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x38)); /* fmul dword ptr [esp + 0x38] */
    MEMF(esp + 0x24) = (float)fp_top(); /* fst */
    fp_push(MEMF(esi + 0x2C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00143B2D; /* jp: parity */

loc_00143B1F: ;
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_push(MEMF(esi + 0x28)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00143B57; /* jnp: not parity */

loc_00143B2D: ;
    ecx = MEM32(esp + 0x24);
    MEMF(esi + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    MEM32(esi + 0x2C) = ecx;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x49653C)); /* fmul dword ptr [0x49653c] */
    PUSH32(esp, 0x00143B46u); RECOMP_ABI_CALL(0x000EB38Cu, sub_000EB38C); /* call 0x000EB38C */

loc_00143B46: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(edx, MEM8(esi + 0x18));
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00143B52u); RECOMP_ABI_CALL(0x00318320u, sub_00318320); /* call 0x00318320 */

loc_00143B52: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00143B59;

loc_00143B57: ;
    fp_pop(); /* fstp st(0) */

loc_00143B59: ;
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_push(MEMF(esi + 0x30)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00143BA6; /* jnp: not parity */

loc_00143B69: ;
    fp_push(MEMF(esp + 0x28)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x4AD840)); /* fmul dword ptr [0x4ad840] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x4AD840)); /* fadd dword ptr [0x4ad840] */
    PUSH32(esp, 0x00143B7Eu); RECOMP_ABI_CALL(0x000EB38Cu, sub_000EB38C); /* call 0x000EB38C */

loc_00143B7E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00143B86; /* jge: greater or equal (signed >=) */

loc_00143B82: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00143B90;

loc_00143B86: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7F (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00143B90; /* jle: less or equal (signed <=) */

loc_00143B8B: ;
    eax = 0x7F;

loc_00143B90: ;
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(esi + 0x18));
    PUSH32(esp, eax);
    PUSH32(esp, 0x00143B9Cu); RECOMP_ABI_CALL(0x00318350u, sub_00318350); /* call 0x00318350 */

loc_00143B9C: ;
    ecx = MEM32(esp + 0x30);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x30) = ecx;

loc_00143BA6: ;
    fp_push(MEMF(esp + 0x30)); /* fld float */
    fp_push(MEMF(esi + 0x34)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00143D5A; /* jnp: not parity */

loc_00143BBA: ;
    fp_push(MEMF(esp + 0x30)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x4964E8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x4964e8] */
    fp_push(MEMF(esp + 0x30)); /* fld float */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00143BFB; /* jp: parity */

loc_00143BCF: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x4AD848)); /* fmul dword ptr [0x4ad848] */
    PUSH32(esp, 0x00143BDAu); RECOMP_ABI_CALL(0x000EB38Cu, sub_000EB38C); /* call 0x000EB38C */

loc_00143BDA: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(edx, MEM8(esi + 0x18));
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00143BE6u); RECOMP_ABI_CALL(0x003183A0u, sub_003183A0); /* call 0x003183A0 */

loc_00143BE6: ;
    ecx = MEM32(esp + 0x38);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM32(esi + 0x34) = ecx;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 36; return; /* ret 32 */

loc_00143BFB: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x4AD844)); /* fmul dword ptr [0x4ad844] */
    PUSH32(esp, 0x00143C06u); RECOMP_ABI_CALL(0x000EB38Cu, sub_000EB38C); /* call 0x000EB38C */

loc_00143C06: ;
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(esi + 0x18));
    PUSH32(esp, eax);
    PUSH32(esp, 0x00143C12u); RECOMP_ABI_CALL(0x003183A0u, sub_003183A0); /* call 0x003183A0 */

loc_00143C12: ;
    ecx = MEM32(esp + 0x38);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM32(esi + 0x34) = ecx;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 36; return; /* ret 32 */

loc_00143C27: ;
    fp_push(MEMF(esi + 0x2C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00143C41; /* jp: parity */

loc_00143C33: ;
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_push(MEMF(esi + 0x28)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00143C74; /* jnp: not parity */

loc_00143C41: ;
    edx = MEM32(esp + 0x24);
    MEMF(esi + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    MEM32(esi + 0x2C) = edx;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x49653C)); /* fmul dword ptr [0x49653c] */
    PUSH32(esp, 0x00143C5Au); RECOMP_ABI_CALL(0x000EB38Cu, sub_000EB38C); /* call 0x000EB38C */

loc_00143C5A: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00143C61u); RECOMP_ABI_CALL(0x0031AD10u, sub_0031AD10); /* call 0x0031AD10 */

loc_00143C61: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFDu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFDu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00143C76; /* jne: not equal / not zero */

loc_00143C69: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 36; return; /* ret 32 */

loc_00143C74: ;
    fp_pop(); /* fstp st(0) */

loc_00143C76: ;
    fp_push(MEMF(0x4964E8)); /* fld float */
    PUSH32(esp, 0);
    fp_push(MEMF(edi + 0xC)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00143C94; /* jnp: not parity */

loc_00143C8A: ;
    eax = MEM32(edi + 0xC);
    ecx = MEM32(esi + 0x1C);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    goto loc_00143C9F;

loc_00143C94: ;
    edx = MEM32(0x50FF74);
    eax = MEM32(esi + 0x1C);
    PUSH32(esp, edx);
    PUSH32(esp, eax);

loc_00143C9F: ;
    PUSH32(esp, 0x00143CA4u); RECOMP_ABI_CALL(0x0031B510u, sub_0031B510); /* call 0x0031B510 */

loc_00143CA4: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFDu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFDu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00143D5A; /* je: equal / zero */

loc_00143CB0: ;
    fp_push(MEMF(0x4964E8)); /* fld float */
    PUSH32(esp, 0);
    fp_push(MEMF(edi + 0x10)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00143CCE; /* jnp: not parity */

loc_00143CC4: ;
    ecx = MEM32(edi + 0x10);
    edx = MEM32(esi + 0x1C);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    goto loc_00143CD8;

loc_00143CCE: ;
    eax = MEM32(0x50FF78);
    ecx = MEM32(esi + 0x1C);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);

loc_00143CD8: ;
    PUSH32(esp, 0x00143CDDu); RECOMP_ABI_CALL(0x0031B430u, sub_0031B430); /* call 0x0031B430 */

loc_00143CDD: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFDu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFDu (32-bit) */
    MEM32(edi + 0xC) = 0;
    MEM32(edi + 0x10) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_00143D5A; /* je: equal / zero */

loc_00143CF3: ;
    edi = MEM32(esp + 0x3C);
    edx = MEM32(edi + 8);
    eax = MEM32(edi + 4);
    ecx = MEM32(edi);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    edx = MEM32(esi + 0x1C);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00143D0Du); RECOMP_ABI_CALL(0x0031B6D0u, sub_0031B6D0); /* call 0x0031B6D0 */

loc_00143D0D: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFDu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFDu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00143D5A; /* je: equal / zero */

loc_00143D15: ;
    eax = esp + 0xC;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00143D20u); RECOMP_ABI_CALL(0x0015BDF0u, sub_0015BDF0); /* call 0x0015BDF0 */

loc_00143D20: ;
    ebx = esi + 0x40;
    ecx = esp + 0x14;
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00143D2Eu); RECOMP_ABI_CALL(0x0010DE90u, sub_0010DE90); /* call 0x0010DE90 */

loc_00143D2E: ;
    edx = MEM32(esp + 0x24);
    eax = MEM32(esp + 0x20);
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    edx = MEM32(esi + 0x1C);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00143D48u); RECOMP_ABI_CALL(0x0031B990u, sub_0031B990); /* call 0x0031B990 */

loc_00143D48: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFDu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFDu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00143D5A; /* je: equal / zero */

loc_00143D50: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00143D57u); RECOMP_ABI_CALL(0x0015BDF0u, sub_0015BDF0); /* call 0x0015BDF0 */

loc_00143D57: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00143D5A: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 36; return; /* ret 32 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00143D70
 * Original: 0x00143D70 - 0x00143D73 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00143D70(void)
{

loc_00143D70: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00143E60
 * Original: 0x00143E60 - 0x00143E61 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00143E60(void)
{

loc_00143E60: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00143E70
 * Original: 0x00143E70 - 0x00143E71 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00143E70(void)
{

loc_00143E70: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00143E80
 * Original: 0x00143E80 - 0x00143E85 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00143E80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00143E80: ;
    g_seh_ebp = ebp; sub_002B4660(); return; /* tail jmp 0x002B4660 */

}

/**
 * sub_00143E90
 * Original: 0x00143E90 - 0x00143EA9 (25 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00143E90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00143E90: ;
    PUSH32(esp, 0x00143E95u); RECOMP_ABI_CALL(0x002B8550u, sub_002B8550); /* call 0x002B8550 */

loc_00143E95: ;
    PUSH32(esp, 0x00143E9Au); RECOMP_ABI_CALL(0x002B4A00u, sub_002B4A00); /* call 0x002B4A00 */

loc_00143E9A: ;
    PUSH32(esp, 0x00143E9Fu); RECOMP_ABI_CALL(0x002B83C0u, sub_002B83C0); /* call 0x002B83C0 */

loc_00143E9F: ;
    PUSH32(esp, 0x00143EA4u); RECOMP_ABI_CALL(0x002B83A0u, sub_002B83A0); /* call 0x002B83A0 */

loc_00143EA4: ;
    g_seh_ebp = ebp; sub_002B8380(); return; /* tail jmp 0x002B8380 */

}

/**
 * sub_00143F20
 * Original: 0x00143F20 - 0x00143F34 (20 bytes, 7 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00143F20(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00143F20: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(ecx + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00143F2Eu); RECOMP_ABI_CALL(0x002B8100u, sub_002B8100); /* call 0x002B8100 */

loc_00143F2E: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00143F40
 * Original: 0x00143F40 - 0x00143F54 (20 bytes, 7 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00143F40(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00143F40: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(ecx + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00143F4Eu); RECOMP_ABI_CALL(0x002B8BE0u, sub_002B8BE0); /* call 0x002B8BE0 */

loc_00143F4E: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00143F60
 * Original: 0x00143F60 - 0x00143F74 (20 bytes, 7 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00143F60(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00143F60: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(ecx + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00143F6Eu); RECOMP_ABI_CALL(0x002B87E0u, sub_002B87E0); /* call 0x002B87E0 */

loc_00143F6E: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00143F80
 * Original: 0x00143F80 - 0x00143FA0 (32 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00143F80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00143F80: ;
    eax = MEM32(ecx + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    SET_LO8(ebx, 1);
    PUSH32(esp, 0x00143F8Cu); RECOMP_ABI_CALL(0x002B62B0u, sub_002B62B0); /* call 0x002B62B0 */

loc_00143F8C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00143F98; /* je: equal / zero */

loc_00143F94: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00143F9C; /* jne: not equal / not zero */

loc_00143F98: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00143F9C: ;
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00143FA0
 * Original: 0x00143FA0 - 0x00143FAF (15 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00143FA0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00143FA0: ;
    eax = MEM32(ecx + 4);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00143FABu); RECOMP_ABI_CALL(0x002B6CB0u, sub_002B6CB0); /* call 0x002B6CB0 */

loc_00143FAB: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00143FB0
 * Original: 0x00143FB0 - 0x00143FBF (15 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00143FB0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00143FB0: ;
    eax = MEM32(ecx + 4);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00143FBBu); RECOMP_ABI_CALL(0x002B6CB0u, sub_002B6CB0); /* call 0x002B6CB0 */

loc_00143FBB: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00143FC0
 * Original: 0x00143FC0 - 0x00143FCB (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00143FC0(void)
{

loc_00143FC0: ;
    eax = MEM32(ecx + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00143FC9u); RECOMP_ABI_CALL(0x002B6290u, sub_002B6290); /* call 0x002B6290 */

loc_00143FC9: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00143FD0
 * Original: 0x00143FD0 - 0x00143FE4 (20 bytes, 7 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00143FD0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00143FD0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(ecx + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00143FDEu); RECOMP_ABI_CALL(0x002B66F0u, sub_002B66F0); /* call 0x002B66F0 */

loc_00143FDE: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00144030
 * Original: 0x00144030 - 0x00144054 (36 bytes, 17 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00144030(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00144030: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    esi = ecx;
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    PUSH32(esp, 0x00144042u); RECOMP_ABI_CALL(0x002BAAC0u, sub_002BAAC0); /* call 0x002BAAC0 */

loc_00144042: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(eax, 1);
    if (CMP_EQ(_fa, _fb)) goto loc_0014404F; /* je: equal / zero */

loc_0014404D: ;
    SET_LO8(eax, LO8(ebx));

loc_0014404F: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00144060
 * Original: 0x00144060 - 0x0014406E (14 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00144060(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00144060: ;
    eax = MEM32(ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00144068u); RECOMP_ABI_CALL(0x002B9E90u, sub_002B9E90); /* call 0x002B9E90 */

loc_00144068: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00144070
 * Original: 0x00144070 - 0x00144096 (38 bytes, 13 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00144070(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00144070: ;
    eax = MEM32(esp + 4);
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
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    eax = MEM32(ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00144090u); RECOMP_ABI_CALL(0x002B9E00u, sub_002B9E00); /* call 0x002B9E00 */

loc_00144090: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001440A0
 * Original: 0x001440A0 - 0x00144101 (97 bytes, 33 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001440A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001440A0: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(0x7FF) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x7FF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 0x7FF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(0x7FF) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x7FF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    PUSH32(esp, edi);
    edx = edx & 0x7FF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((0xB) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    PUSH32(esp, 0);
    edi = ecx;
    PUSH32(esp, eax);
    eax = MEM32(edi);
    PUSH32(esp, eax);
    esi = (uint32_t)(((int32_t)(int32_t)(esi)) >> ((0xB) & 31u));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    PUSH32(esp, 0x001440DBu); RECOMP_ABI_CALL(0x002B9E00u, sub_002B9E00); /* call 0x002B9E00 */

loc_001440DB: ;
    ecx = MEM32(esp + 0x20);
    edx = MEM32(edi);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001440E9u); RECOMP_ABI_CALL(0x002B9D60u, sub_002B9D60); /* call 0x002B9D60 */

loc_001440E9: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM32(0x64D1F0) = esi;
    MEM32(0x64D20C) = 0;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00144110
 * Original: 0x00144110 - 0x0014416D (93 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00144110(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00144110: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x0014411Eu); RECOMP_ABI_CALL(0x002B9F40u, sub_002B9F40); /* call 0x002B9F40 */

loc_0014411E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0014412E; /* jne: not equal / not zero */

loc_00144126: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0014412E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00144167; /* je: equal / zero */

loc_00144133: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00144167; /* jl: less (signed <) */

loc_00144137: ;
    ecx = MEM32(esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0014413Fu); RECOMP_ABI_CALL(0x002B9F00u, sub_002B9F00); /* call 0x002B9F00 */

loc_0014413F: ;
    ecx = MEM32(0x64D1F0);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    MEM32(0x64D1EC) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00144161; /* je: equal / zero */

loc_00144151: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x64);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    MEM32(0x64D20C) = eax;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00144161: ;
    MEM32(0x64D20C) = edi;

loc_00144167: ;
    POP32(esp, edi);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00144170
 * Original: 0x00144170 - 0x00144176 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00144170(void)
{

loc_00144170: ;
    eax = MEM32(0x64D20C);
    esp += 4; return; /* ret */

}

/**
 * sub_00144180
 * Original: 0x00144180 - 0x00144196 (22 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00144180(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00144180: ;
    eax = MEM32(ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00144188u); RECOMP_ABI_CALL(0x002BA790u, sub_002BA790); /* call 0x002BA790 */

loc_00144188: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x64D20C) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_00144230
 * Original: 0x00144230 - 0x00144260 (48 bytes, 19 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00144230(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00144230: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = 1;
    PUSH32(esp, 0x00144240u); RECOMP_ABI_CALL(0x002BAC40u, sub_002BAC40); /* call 0x002BAC40 */

loc_00144240: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0014424E; /* jne: not equal / not zero */

loc_00144248: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0014424E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0014425A; /* jne: not equal / not zero */

loc_00144253: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0014425A: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001444A0
 * Original: 0x001444A0 - 0x001444A9 (9 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001444A0(void)
{

loc_001444A0: ;
    eax = MEM32(esp + 4);
    MEM32(ecx) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001444B0
 * Original: 0x001444B0 - 0x001444B3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001444B0(void)
{

loc_001444B0: ;
    eax = MEM32(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00144510
 * Original: 0x00144510 - 0x0014451A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00144510(void)
{

loc_00144510: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 8) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00144520
 * Original: 0x00144520 - 0x00144524 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00144520(void)
{

loc_00144520: ;
    eax = MEM32(ecx + 8);
    esp += 4; return; /* ret */

}

/**
 * sub_001446C0
 * Original: 0x001446C0 - 0x00144701 (65 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001446C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001446C0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = MEM32(edi + 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1F4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x1F4 (32-bit) */
    SET_LO8(eax, (CMP_L(_fas, _fbs)) ? 1 : 0); /* setl */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM8(0x50FF48) = LO8(eax);
    if (CMP_NE(_fa, _fb)) goto loc_001446F7; /* jne: not equal / not zero */

loc_001446D9: ;
    PUSH32(esp, 0x3A);
    PUSH32(esp, 0x4AD9F8);
    PUSH32(esp, 0x4AD920);
    PUSH32(esp, 0x4AD908);
    PUSH32(esp, 0x49657C);
    PUSH32(esp, 0x001446F4u); RECOMP_ABI_CALL(0x0014E700u, sub_0014E700); /* call 0x0014E700 */

loc_001446F4: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001446F7: ;
    eax = esi + esi * 2;
    eax = MEM32(edi + eax * 4 + 0x10);
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00144710
 * Original: 0x00144710 - 0x00144740 (48 bytes, 18 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00144710(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00144710: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = ecx + 0x10;
    /* nop */

loc_00144720: ;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00144735; /* je: equal / zero */

loc_00144724: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xC;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1F4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1F4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00144720; /* jl: less (signed <) */

loc_0014472F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00144735: ;
    eax = eax + eax * 2 + 3;
    eax = MEM32(ecx + eax * 4);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00144790
 * Original: 0x00144790 - 0x00144793 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00144790(void)
{

loc_00144790: ;
    eax = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_001447A0
 * Original: 0x001447A0 - 0x001447B9 (25 bytes, 8 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001447A0(void)
{

loc_001447A0: ;
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
 * sub_001447C0
 * Original: 0x001447C0 - 0x001447C6 (6 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001447C0(void)
{

loc_001447C0: ;
    eax = ecx;
    MEM8(eax) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_001447D0
 * Original: 0x001447D0 - 0x001447DF (15 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001447D0(void)
{

loc_001447D0: ;
    MEM32(ecx + 0x10) = 0xFFFFFFFFu;
    MEM32(ecx + 0x14) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_001447E0
 * Original: 0x001447E0 - 0x001447EB (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001447E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001447E0: ;
    eax = MEM32(ecx);
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    esp += 4; return; /* ret */

}

/**
 * sub_001447F0
 * Original: 0x001447F0 - 0x001447F9 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001447F0(void)
{

loc_001447F0: ;
    eax = ecx;
    MEM32(eax) = 0x4ADA80;
    esp += 4; return; /* ret */

}

/**
 * sub_00144800
 * Original: 0x00144800 - 0x0014480E (14 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00144800(void)
{

loc_00144800: ;
    eax = ecx;
    MEM32(eax) = 0x4ADA88;
    MEM32(0x64E994) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00144810
 * Original: 0x00144810 - 0x0014482A (26 bytes, 9 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00144810(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00144810: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 4) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0014481E; /* jl: less (signed <) */

loc_00144819: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

loc_0014481E: ;
    ecx = MEM32(ecx + 8);
    edx = MEM32(ecx + 0x14);
    eax = edx + eax * 8;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00144830
 * Original: 0x00144830 - 0x0014483D (13 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00144830(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00144830: ;
    eax = MEM32(ecx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0014483A; /* jne: not equal / not zero */

loc_00144837: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_0014483A: ;
    SET_LO8(eax, MEM8(ecx));
    esp += 4; return; /* ret */

}

/**
 * sub_00144840
 * Original: 0x00144840 - 0x0014486B (43 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00144840(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00144840: ;
    eax = ecx;
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00144868; /* je: equal / zero */

loc_00144849: ;
    SET_LO8(edx, MEM8(esp + 4));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    MEM8(eax) = LO8(edx);
    MEM32(esp + 4) = 0;
    if (CMP_NE(_fa, _fb)) goto loc_00144863; /* jne: not equal / not zero */

loc_0014485B: ;
    MEM32(esp + 4) = 1;

loc_00144863: ;
    g_seh_ebp = ebp; sub_0015DAE0(); return; /* tail jmp 0x0015DAE0 */

loc_00144868: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00144870
 * Original: 0x00144870 - 0x0014489E (46 bytes, 13 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00144870(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00144870: ;
    eax = ecx;
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014489B; /* je: equal / zero */

loc_00144879: ;
    SET_LO8(edx, MEM8(esp + 4));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0014488E; /* jne: not equal / not zero */

loc_00144881: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    MEM32(esp + 4) = 0;
    if (CMP_NE(_fa, _fb)) goto loc_00144896; /* jne: not equal / not zero */

loc_0014488E: ;
    MEM32(esp + 4) = 1;

loc_00144896: ;
    g_seh_ebp = ebp; sub_0015DAE0(); return; /* tail jmp 0x0015DAE0 */

loc_0014489B: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001448A0
 * Original: 0x001448A0 - 0x001448C5 (37 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001448A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001448A0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(0x64E994);
    edx = MEM32(esi + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x001448B2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001448AFu); } /* indirect call */
    }

loc_001448B2: ;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001448C3; /* je: equal / zero */

loc_001448B9: ;
    PUSH32(esp, 0);
    MEM8(esi) = 1;
    PUSH32(esp, 0x001448C3u); RECOMP_ABI_CALL(0x0015DAE0u, sub_0015DAE0); /* call 0x0015DAE0 */

loc_001448C3: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001448D0
 * Original: 0x001448D0 - 0x00144965 (149 bytes, 56 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001448D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001448D0: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x14);
    ecx = MEM32(esp + 0x10);
    MEM32(eax + 4) = ecx;
    esi = MEM32(edi + 0x14);
    ecx = MEM32(0x64E994);
    eax = MEM32(esi + 4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x001448F1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001448EEu); } /* indirect call */
    }

loc_001448F1: ;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00144902; /* je: equal / zero */

loc_001448F8: ;
    PUSH32(esp, 0);
    MEM8(esi) = 1;
    PUSH32(esp, 0x00144902u); RECOMP_ABI_CALL(0x0015DAE0u, sub_0015DAE0); /* call 0x0015DAE0 */

loc_00144902: ;
    ecx = MEM32(edi);
    eax = MEM32(ecx + 4);
    ebp = 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0014495F; /* jle: less or equal (signed <=) */

loc_00144910: ;
    PUSH32(esp, ebx);

loc_00144911: ;
    ecx = MEM32(0x64E994);
    eax = MEM32(edi + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ebx = ebp * 8;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00144927u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00144924u); } /* indirect call */
    }

loc_00144927: ;
    ecx = MEM32(edi + 0x14);
    MEM32(ebx + ecx + 4) = eax;
    esi = MEM32(edi + 0x14);
    ecx = MEM32(0x64E994);
    eax = MEM32(esi + ebx + 4);
    edx = MEM32(ecx);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ebx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00144943u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00144940u); } /* indirect call */
    }

loc_00144943: ;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00144954; /* je: equal / zero */

loc_0014494A: ;
    PUSH32(esp, 0);
    MEM8(esi) = 1;
    PUSH32(esp, 0x00144954u); RECOMP_ABI_CALL(0x0015DAE0u, sub_0015DAE0); /* call 0x0015DAE0 */

loc_00144954: ;
    ecx = MEM32(edi);
    eax = MEM32(ecx + 4);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00144911; /* jl: less (signed <) */

loc_0014495E: ;
    POP32(esp, ebx);

loc_0014495F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00144961
 * Original: 0x00144961 - 0x00144965 (4 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00144961(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00144961: ;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00144970
 * Original: 0x00144970 - 0x001449B5 (69 bytes, 32 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00144970(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00144970: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi);
    ecx = MEM32(eax + 4);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001449B0; /* jle: less or equal (signed <=) */

loc_0014497F: ;
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(esp + 0x10));

loc_00144984: ;
    ecx = MEM32(edi + 0x14);
    eax = ecx + esi * 8;
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001449A5; /* je: equal / zero */

loc_00144991: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0014499E; /* jne: not equal / not zero */

loc_00144995: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014499E; /* je: equal / zero */

loc_0014499A: ;
    PUSH32(esp, 0);
    goto loc_001449A0;

loc_0014499E: ;
    PUSH32(esp, 1);

loc_001449A0: ;
    PUSH32(esp, 0x001449A5u); RECOMP_ABI_CALL(0x0015DAE0u, sub_0015DAE0); /* call 0x0015DAE0 */

loc_001449A5: ;
    edx = MEM32(edi);
    eax = MEM32(edx + 4);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00144984; /* jl: less (signed <) */

loc_001449AF: ;
    POP32(esp, ebx);

loc_001449B0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001449C0
 * Original: 0x001449C0 - 0x001449ED (45 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001449C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001449C0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001449CDu); RECOMP_ABI_CALL(0x00104F40u, sub_00104F40); /* call 0x00104F40 */

loc_001449CD: ;
    ecx = MEM32(0x637AE8);
    eax = MEM32(esi + 4);
    edx = MEM32(ecx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x001449DFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001449DCu); } /* indirect call */
    }

loc_001449DF: ;
    ecx = MEM32(esi + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001449E8u); RECOMP_ABI_CALL(0x00114AC0u, sub_00114AC0); /* call 0x00114AC0 */

loc_001449E8: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001449F0
 * Original: 0x001449F0 - 0x001449F7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001449F0(void)
{

loc_001449F0: ;
    eax = MEM32(ecx + 0x960);
    esp += 4; return; /* ret */

}

/**
 * sub_00144A00
 * Original: 0x00144A00 - 0x00144A03 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00144A00(void)
{

loc_00144A00: ;
    eax = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00144A10
 * Original: 0x00144A10 - 0x00144A1D (13 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00144A10(void)
{

loc_00144A10: ;
    eax = MEM32(ecx + 0x960);
    eax = eax + eax * 2;
    eax = ecx + eax * 8;
    esp += 4; return; /* ret */

}

/**
 * sub_00144A20
 * Original: 0x00144A20 - 0x00144A2B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00144A20(void)
{

loc_00144A20: ;
    MEM32(ecx + 0x960) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_00144A30
 * Original: 0x00144A30 - 0x00144A81 (81 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00144A30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00144A30: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x960);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x64) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x64 (32-bit) */
    MEM32(esi + 0x960) = eax;
    SET_LO8(eax, (CMP_LE(_fas, _fbs)) ? 1 : 0); /* setle */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM8(0x50FF48) = LO8(eax);
    if (CMP_NE(_fa, _fb)) goto loc_00144A72; /* jne: not equal / not zero */

loc_00144A51: ;
    PUSH32(esp, 0x95);
    PUSH32(esp, 0x4ADAA4);
    PUSH32(esp, 0x496604);
    PUSH32(esp, 0x4965F0);
    PUSH32(esp, 0x4965D8);
    PUSH32(esp, 0x00144A6Fu); RECOMP_ABI_CALL(0x0014E700u, sub_0014E700); /* call 0x0014E700 */

loc_00144A6F: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00144A72: ;
    eax = MEM32(esi + 0x960);
    eax = eax + eax * 2;
    eax = esi + eax * 8 + -24;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00144A90
 * Original: 0x00144A90 - 0x00144AA1 (17 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00144A90(void)
{

loc_00144A90: ;
    eax = ecx;
    MEM32(eax + 0x10) = 0xFFFFFFFFu;
    MEM32(eax + 0x14) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_00144AB0
 * Original: 0x00144AB0 - 0x00144AC9 (25 bytes, 6 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00144AB0(void)
{

loc_00144AB0: ;
    eax = ecx;
    ecx = MEM32(esp + 4);
    MEM32(eax) = ecx;
    MEM32(eax + 0x10) = 0xFFFFFFFFu;
    MEM32(eax + 0x14) = 0;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00144AD0
 * Original: 0x00144AD0 - 0x00144BC5 (245 bytes, 79 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00144AD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00144AD0: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    ebp = ecx;
    SET_LO8(eax, MEM8(ebp + 4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00144BC0; /* jne: not equal / not zero */

loc_00144AE1: ;
    edx = esp + 8;
    MEM8(ebp + 4) = 1;
    ecx = MEM32(0x64E994);
    eax = 0xFFFFFFFFu;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = esp + 8;
    MEM32(esp + 8) = eax;
    MEM32(esp + 0xC) = eax;
    eax = MEM32(ecx);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x00144B07u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00144B04u); } /* indirect call */
    }

loc_00144B07: ;
    eax = MEM32(esp + 8);
    edx = MEM32(esp + 4);
    ecx = MEM32(ebp + 0x968);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00144B43; /* jge: greater or equal (signed >=) */

loc_00144B1B: ;
    PUSH32(esp, 0xF8);
    PUSH32(esp, 0x4ADB48);
    PUSH32(esp, 0x4ADB24);
    PUSH32(esp, 0x497990);
    PUSH32(esp, 0x4ADAD0);
    MEM8(0x50FF48) = 0;
    PUSH32(esp, 0x00144B40u); RECOMP_ABI_CALL(0x0014E700u, sub_0014E700); /* call 0x0014E700 */

loc_00144B40: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00144B43: ;
    ecx = MEM32(ebp + 0x968);
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 8;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ecx + ecx * 2;
    PUSH32(esp, edi);
    edi = ebp;
    edx = ebp + ecx * 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00144BBF; /* je: equal / zero */

loc_00144B5E: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = edi + 4;
    goto loc_00144B70;

loc_00144B65: ;
    eax = MEM32(esp + 0x20);
    /* nop */

loc_00144B70: ;
    esi = MEM32(edi);
    MEM32(ebx + 0xC) = eax;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x20) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esp + 0x1C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    edx = esp + 0x1C;
    MEM32(esp + 0x1C) = eax;
    MEM32(esp + 0x20) = eax;
    eax = MEM32(esi);
    PUSH32(esp, edx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00144B94u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00144B92u); } /* indirect call */
    }

loc_00144B94: ;
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x1C);
    edx = ebx;
    MEM32(edx) = eax;
    MEM32(edx + 4) = ecx;
    MEM32(edx + 8) = esi;
    eax = MEM32(ebp + 0x960);
    eax = eax + eax * 2;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x18;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ebp + eax * 8;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x18;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00144B65; /* jne: not equal / not zero */

loc_00144BBD: ;
    POP32(esp, esi);
    POP32(esp, ebx);

loc_00144BBF: ;
    POP32(esp, edi);

loc_00144BC0: ;
    POP32(esp, ebp);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00144BD0
 * Original: 0x00144BD0 - 0x00144C11 (65 bytes, 25 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00144BD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00144BD0: ;
    eax = MEM32(ecx + 0x968);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx + 8;
    eax = eax + eax * 2;
    esi = edi;
    ecx = edi + eax * 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00144C0C; /* je: equal / zero */

loc_00144BE7: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10);
    /* nop */

loc_00144BF0: ;
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x00144BF8u); RECOMP_ABI_CALL(0x00144970u, sub_00144970); /* call 0x00144970 */

loc_00144BF8: ;
    eax = MEM32(edi + 0x960);
    edx = eax + eax * 2;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x18;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = edi + edx * 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00144BF0; /* jne: not equal / not zero */

loc_00144C0B: ;
    POP32(esp, ebx);

loc_00144C0C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00144C20
 * Original: 0x00144C20 - 0x00144C9D (125 bytes, 51 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00144C20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00144C20: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    edi = MEM32(eax + 4);
    PUSH32(esp, ecx);
    edx = edi * 8;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00144C3Eu); RECOMP_ABI_CALL(0x00102BE0u, sub_00102BE0); /* call 0x00102BE0 */

loc_00144C3E: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00144C5B; /* je: equal / zero */

loc_00144C45: ;
    edx = edi + -1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    ecx = eax;
    if (CMP_L(_fas, _fbs)) goto loc_00144C5D; /* jl: less (signed <) */

loc_00144C4E: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    /* nop */

loc_00144C50: ;
    MEM8(ecx) = 0;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00144C50; /* jne: not equal / not zero */

loc_00144C59: ;
    goto loc_00144C5D;

loc_00144C5B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00144C5D: ;
    ecx = MEM32(esi);
    MEM32(esi + 0x14) = eax;
    edx = MEM32(ecx + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00144C95; /* jle: less or equal (signed <=) */

loc_00144C6B: ;
    ecx = MEM32(esp + 0xC);
    MEM8(esp + 8) = LO8(eax);
    edx = MEM32(esp + 8);
    PUSH32(esp, ebx);
    goto loc_00144C80;

    /* nop */

loc_00144C80: ;
    edi = MEM32(esi + 0x14);
    MEM32(edi + eax * 8) = edx;
    MEM32(edi + eax * 8 + 4) = ecx;
    edi = MEM32(esi);
    ebx = MEM32(edi + 4);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00144C80; /* jl: less (signed <) */

loc_00144C94: ;
    POP32(esp, ebx);

loc_00144C95: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00144CA0
 * Original: 0x00144CA0 - 0x00144D27 (135 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00144CA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00144CA0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    edx = esp + 0xC;
    esi = ecx;
    ecx = MEM32(esi);
    PUSH32(esp, edx);
    edi = edi | 0xFFFFFFFFu;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = esp + 0xC;
    MEM32(esp + 0xC) = edi;
    MEM32(esp + 0x10) = edi;
    eax = MEM32(ecx);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x00144CC3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00144CC0u); } /* indirect call */
    }

loc_00144CC3: ;
    _fa = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 8), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00144D21; /* je: equal / zero */

loc_00144CC9: ;
    ecx = MEM32(0x64E994);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00144CD4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00144CD1u); } /* indirect call */
    }

loc_00144CD4: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00144D21; /* je: equal / zero */

loc_00144CDA: ;
    ecx = MEM32(esi);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00144CE1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00144CDEu); } /* indirect call */
    }

loc_00144CE1: ;
    ecx = MEM32(esi);
    MEM32(ecx + 4) = eax;
    edx = MEM32(esi + 4);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x00144CF1u); RECOMP_ABI_CALL(0x00144C20u, sub_00144C20); /* call 0x00144C20 */

loc_00144CF1: ;
    edx = MEM32(esi + 8);
    ecx = MEM32(0x64E994);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esi + 4);
    PUSH32(esp, edx);
    edx = MEM32(esi + 0x10);
    PUSH32(esp, edx);
    edx = MEM32(esi);
    edx = MEM32(edx + 4);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x1C);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x1C);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x00144D19u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00144D16u); } /* indirect call */
    }

loc_00144D19: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00144D21u); RECOMP_ABI_CALL(0x001448D0u, sub_001448D0); /* call 0x001448D0 */

loc_00144D21: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00144D30
 * Original: 0x00144D30 - 0x00144DC9 (153 bytes, 56 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00144D30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00144D30: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi);
    eax = MEM32(ecx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00144DC5; /* je: equal / zero */

loc_00144D40: ;
    SET_LO8(eax, MEM8(esp + 8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00144D4F; /* je: equal / zero */

loc_00144D48: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x00144D4Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00144D4Au); } /* indirect call */
    }

loc_00144D4D: ;
    goto loc_00144D54;

loc_00144D4F: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00144D54u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00144D51u); } /* indirect call */
    }

loc_00144D54: ;
    eax = MEM32(esi);
    ecx = MEM32(eax + 4);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00144D7C; /* jle: less or equal (signed <=) */

loc_00144D60: ;
    eax = MEM32(esi + 0x14);
    ecx = MEM32(0x64E994);
    eax = MEM32(eax + edi * 8 + 4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00144D72u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00144D70u); } /* indirect call */
    }

loc_00144D72: ;
    ecx = MEM32(esi);
    eax = MEM32(ecx + 4);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00144D60; /* jl: less (signed <) */

loc_00144D7C: ;
    edx = MEM32(esi);
    MEM32(edx + 4) = 0;
    edx = MEM32(esi + 0x10);
    MEM32(esi + 0x14) = 0;
    ecx = MEM32(0x64E994);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x00144D9Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00144D98u); } /* indirect call */
    }

loc_00144D9B: ;
    eax = MEM32(esi + 4);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00144DA6u); RECOMP_ABI_CALL(0x00104F40u, sub_00104F40); /* call 0x00104F40 */

loc_00144DA6: ;
    ecx = MEM32(0x637AE8);
    eax = MEM32(esi + 8);
    edx = MEM32(ecx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00144DB8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00144DB5u); } /* indirect call */
    }

loc_00144DB8: ;
    ecx = MEM32(esi + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00144DC1u); RECOMP_ABI_CALL(0x00114AC0u, sub_00114AC0); /* call 0x00114AC0 */

loc_00144DC1: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);

loc_00144DC5: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00144DD0
 * Original: 0x00144DD0 - 0x00144DF9 (41 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00144DD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00144DD0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(eax + 8);
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x00144DE3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00144DE0u); } /* indirect call */
    }

loc_00144DE3: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00144DF5; /* je: equal / zero */

loc_00144DE7: ;
    ecx = MEM32(esi + 8);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00144DF1u); RECOMP_ABI_CALL(0x00144D30u, sub_00144D30); /* call 0x00144D30 */

loc_00144DF1: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00144DF5: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00144E00
 * Original: 0x00144E00 - 0x00144E2F (47 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00144E00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00144E00: ;
    eax = ecx;
    PUSH32(esp, esi);
    edx = eax + 0x14;
    esi = 0x64;
    goto loc_00144E10;

    /* nop */

loc_00144E10: ;
    MEM32(edx + -4) = 0xFFFFFFFFu;
    MEM32(edx) = 0;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x18;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00144E10; /* jne: not equal / not zero */

loc_00144E23: ;
    MEM32(eax + 0x960) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00144E30
 * Original: 0x00144E30 - 0x00144EA7 (119 bytes, 36 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00144E30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00144E30: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x960);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x64) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x64 (32-bit) */
    SET_LO8(eax, (CMP_LE(_fas, _fbs)) ? 1 : 0); /* setle */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM8(0x50FF48) = LO8(eax);
    if (CMP_NE(_fa, _fb)) goto loc_00144E6A; /* jne: not equal / not zero */

loc_00144E49: ;
    PUSH32(esp, 0xAA);
    PUSH32(esp, 0x4ADAA4);
    PUSH32(esp, 0x496604);
    PUSH32(esp, 0x496664);
    PUSH32(esp, 0x4965D8);
    PUSH32(esp, 0x00144E67u); RECOMP_ABI_CALL(0x0014E700u, sub_0014E700); /* call 0x0014E700 */

loc_00144E67: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00144E6A: ;
    eax = MEM32(esi + 0x960);
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
    ecx = esi;
    MEM32(edx + 0x14) = eax;
    PUSH32(esp, 0x00144EA3u); RECOMP_ABI_CALL(0x00144A30u, sub_00144A30); /* call 0x00144A30 */

loc_00144EA3: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00144EB0
 * Original: 0x00144EB0 - 0x00144EE3 (51 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00144EB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00144EB0: ;
    eax = ecx;
    PUSH32(esp, esi);
    MEM32(eax) = 0x4ADB64;
    edx = eax + 0x1C;
    esi = 0x64;
    ecx = ecx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_00144EC4: ;
    MEM32(edx + -4) = ecx;
    MEM32(edx) = 0;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x18;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00144EC4; /* jne: not equal / not zero */

loc_00144ED3: ;
    MEM32(eax + 0x968) = 0;
    MEM8(eax + 4) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00144EF0
 * Original: 0x00144EF0 - 0x00144F26 (54 bytes, 21 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00144EF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00144EF0: ;
    eax = MEM32(ecx + 0x968);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx + 8;
    eax = eax + eax * 2;
    esi = edi;
    ecx = edi + eax * 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00144F23; /* je: equal / zero */

loc_00144F07: ;
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0x00144F10u); RECOMP_ABI_CALL(0x00144D30u, sub_00144D30); /* call 0x00144D30 */

loc_00144F10: ;
    eax = MEM32(edi + 0x960);
    edx = eax + eax * 2;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x18;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = edi + edx * 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00144F07; /* jne: not equal / not zero */

loc_00144F23: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00144F30
 * Original: 0x00144F30 - 0x00144F63 (51 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00144F30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00144F30: ;
    eax = MEM32(0x64E998);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00144F62; /* jne: not equal / not zero */

loc_00144F39: ;
    SET_LO8(ecx, MEM8(0x64F30C));
    eax = 1;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00144F58; /* jne: not equal / not zero */

loc_00144F48: ;
    MEM32(0x64F30C) = MEM32(0x64F30C) | eax;
    _fa = (uint32_t)(MEM32(0x64F30C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = 0x64E9A0;
    PUSH32(esp, 0x00144F58u); RECOMP_ABI_CALL(0x00144EB0u, sub_00144EB0); /* call 0x00144EB0 */

loc_00144F58: ;
    eax = 0x64E9A0;
    MEM32(0x64E998) = eax;

loc_00144F62: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00144F70
 * Original: 0x00144F70 - 0x00144F81 (17 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00144F70(void)
{

loc_00144F70: ;
    PUSH32(esp, 0x00144F75u); RECOMP_ABI_CALL(0x00144AD0u, sub_00144AD0); /* call 0x00144AD0 */

loc_00144F75: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, 0x00144F7Eu); RECOMP_ABI_CALL(0x00144CA0u, sub_00144CA0); /* call 0x00144CA0 */

loc_00144F7E: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00144F90
 * Original: 0x00144F90 - 0x00144FBD (45 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00144F90(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00144F90: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x1C);
    edx = esp;
    PUSH32(esp, edx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 4) = eax;
    MEM32(esp + 0x14) = 0xFFFFFFFFu;
    MEM32(esp + 0x18) = 0;
    PUSH32(esp, 0x00144FB7u); RECOMP_ABI_CALL(0x00144E30u, sub_00144E30); /* call 0x00144E30 */

loc_00144FB7: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00144FC0
 * Original: 0x00144FC0 - 0x00145003 (67 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00144FC0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00144FC0: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x4ADB6C;
    MEM32(esi + 4) = 0;
    PUSH32(esp, 0x00144FD8u); RECOMP_ABI_CALL(0x00144F30u, sub_00144F30); /* call 0x00144F30 */

loc_00144FD8: ;
    ecx = esp + 4;
    PUSH32(esp, ecx);
    ecx = eax + 8;
    MEM32(esp + 8) = esi;
    MEM32(esp + 0x18) = 0xFFFFFFFFu;
    MEM32(esp + 0x1C) = 0;
    PUSH32(esp, 0x00144FF9u); RECOMP_ABI_CALL(0x00144E30u, sub_00144E30); /* call 0x00144E30 */

loc_00144FF9: ;
    MEM32(esi + 8) = eax;
    eax = esi;
    POP32(esp, esi);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00145010
 * Original: 0x00145010 - 0x00145011 (1 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00145010(void)
{

loc_00145010: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00145020
 * Original: 0x00145020 - 0x00145021 (1 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00145020(void)
{

loc_00145020: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00145030
 * Original: 0x00145030 - 0x00145031 (1 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00145030(void)
{

loc_00145030: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00145040
 * Original: 0x00145040 - 0x00145063 (35 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00145040(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00145040: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x00145049u); RECOMP_ABI_CALL(0x00144F30u, sub_00144F30); /* call 0x00144F30 */

loc_00145049: ;
    edi = MEM32(esi + 8);
    ecx = eax;
    PUSH32(esp, 0x00145053u); RECOMP_ABI_CALL(0x00144AD0u, sub_00144AD0); /* call 0x00144AD0 */

loc_00145053: ;
    ecx = edi;
    PUSH32(esp, 0x0014505Au); RECOMP_ABI_CALL(0x00144CA0u, sub_00144CA0); /* call 0x00144CA0 */

loc_0014505A: ;
    eax = MEM32(esi);
    POP32(esp, edi);
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x14)); return; /* indirect tail jmp */

}

/**
 * sub_00145070
 * Original: 0x00145070 - 0x001450AB (59 bytes, 22 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00145070(void)
{

loc_00145070: ;
    eax = MEM32(esp + 8);
    edx = MEM32(eax);
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    edx = MEM32(eax + 8);
    MEM32(ecx + 8) = edx;
    eax = MEM32(eax + 0xC);
    MEM32(ecx + 0xC) = eax;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = MEM32(ecx);
    edx = eax;
    MEM32(edx) = esi;
    esi = MEM32(ecx + 4);
    MEM32(edx + 4) = esi;
    esi = MEM32(ecx + 8);
    MEM32(edx + 8) = esi;
    ecx = MEM32(ecx + 0xC);
    MEM32(edx + 0xC) = ecx;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001450B0
 * Original: 0x001450B0 - 0x001450D4 (36 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001450B0(void)
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

loc_001450B0: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ecx);
    edx = MEM32(ecx + 4);
    MEM32(esp) = eax;
    fp_push(MEMF(esp)); /* fld float */
    eax = MEM32(ecx + 8);
    ecx = MEM32(ecx + 0xC);
    MEM32(esp + 4) = edx;
    MEM32(esp + 8) = eax;
    MEM32(esp + 0xC) = ecx;
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
 * sub_001450E0
 * Original: 0x001450E0 - 0x00145105 (37 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001450E0(void)
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

loc_001450E0: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ecx);
    edx = MEM32(ecx + 4);
    MEM32(esp) = eax;
    eax = MEM32(ecx + 8);
    ecx = MEM32(ecx + 0xC);
    MEM32(esp + 4) = edx;
    fp_push(MEMF(esp + 4)); /* fld float */
    MEM32(esp + 8) = eax;
    MEM32(esp + 0xC) = ecx;
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
 * sub_00145110
 * Original: 0x00145110 - 0x00145135 (37 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00145110(void)
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

loc_00145110: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ecx);
    edx = MEM32(ecx + 4);
    MEM32(esp) = eax;
    eax = MEM32(ecx + 8);
    ecx = MEM32(ecx + 0xC);
    MEM32(esp + 8) = eax;
    fp_push(MEMF(esp + 8)); /* fld float */
    MEM32(esp + 4) = edx;
    MEM32(esp + 0xC) = ecx;
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
 * sub_00145140
 * Original: 0x00145140 - 0x001451D6 (150 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00145140(void)
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

loc_00145140: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(esp + 0x2C);
    eax = MEM32(esp + 0x28);
    edx = MEM32(esp + 0x30);
    MEM32(esp + 4) = ecx;
    ecx = MEM32(esp + 0x18);
    MEM32(esp + 0x28) = ecx;
    fp_push(MEMF(esp + 0x28)); /* fld float */
    ecx = MEM32(esp + 0x24);
    MEM32(esp) = eax;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp)); /* fsub dword ptr [esp] */
    eax = MEM32(esp + 0x34);
    MEM32(esp + 8) = edx;
    edx = MEM32(esp + 0x1C);
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0x2C) = edx;
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 4)); /* fsub dword ptr [esp + 4] */
    MEM32(esp + 0xC) = eax;
    eax = MEM32(esp + 0x20);
    MEM32(esp + 0x30) = eax;
    eax = MEM32(esp + 0x14);
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x30)); /* fld float */
    MEM32(esp + 0x34) = ecx;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 8)); /* fsub dword ptr [esp + 8] */
    ecx = MEM32(esp + 0x18);
    edx = eax;
    MEM32(edx) = ecx;
    ecx = MEM32(esp + 0x1C);
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x34)); /* fld float */
    MEM32(edx + 4) = ecx;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0xC)); /* fsub dword ptr [esp + 0xc] */
    ecx = MEM32(esp + 0x20);
    MEM32(edx + 8) = ecx;
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x24);
    MEM32(edx + 0xC) = ecx;
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
 * sub_001451E0
 * Original: 0x001451E0 - 0x00145256 (118 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001451E0(void)
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

loc_001451E0: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x1C);
    edx = MEM32(esp + 0x20);
    MEM32(esp) = eax;
    fp_push(MEMF(esp)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x28)); /* fmul dword ptr [esp + 0x28] */
    eax = MEM32(esp + 0x24);
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = edx;
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x18);
    fp_push(MEMF(esp + 4)); /* fld float */
    MEM32(esp + 0xC) = eax;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x28)); /* fmul dword ptr [esp + 0x28] */
    eax = MEM32(esp + 0x14);
    ecx = eax;
    MEM32(ecx) = edx;
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x1C);
    fp_push(MEMF(esp + 8)); /* fld float */
    MEM32(ecx + 4) = edx;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x28)); /* fmul dword ptr [esp + 0x28] */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x20);
    fp_push(MEMF(esp + 0xC)); /* fld float */
    MEM32(ecx + 8) = edx;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x28)); /* fmul dword ptr [esp + 0x28] */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x24);
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
 * sub_00145260
 * Original: 0x00145260 - 0x00145264 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00145260(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00145260: ;
    fp_push(MEMF(ecx + 4)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00145270
 * Original: 0x00145270 - 0x0014527A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00145270(void)
{

loc_00145270: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 4) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00145280
 * Original: 0x00145280 - 0x00145283 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00145280(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00145280: ;
    fp_push(MEMF(ecx)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00145290
 * Original: 0x00145290 - 0x00145299 (9 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00145290(void)
{

loc_00145290: ;
    eax = MEM32(esp + 4);
    MEM32(ecx) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001452A0
 * Original: 0x001452A0 - 0x001452B7 (23 bytes, 6 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001452A0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_001452A0: ;
    eax = MEM32(esp + 8);
    eax = (uint32_t)(int32_t)SMEM16(ecx + eax * 2 + 8);
    edx = MEM32(esp + 4);
    ecx = eax + eax * 2;
    fp_push(MEMF(edx + ecx * 8 + 4)); /* fld float */
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001452C0
 * Original: 0x001452C0 - 0x001452CC (12 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001452C0(void)
{

loc_001452C0: ;
    eax = MEM32(esp + 4);
    eax = (uint32_t)(int32_t)SMEM16(ecx + eax * 2 + 8);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001452D0
 * Original: 0x001452D0 - 0x001452F0 (32 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001452D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001452D0: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
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
 * sub_00145300
 * Original: 0x00145300 - 0x0014530C (12 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00145300(void)
{

loc_00145300: ;
    eax = MEM32(ecx + 0x48);
    ecx = MEM32(esp + 4);
    MEM32(eax) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00145310
 * Original: 0x00145310 - 0x00145317 (7 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00145310(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00145310: ;
    eax = MEM32(ecx + 0x48);
    fp_push(MEMF(eax + 4)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00145320
 * Original: 0x00145320 - 0x0014537E (94 bytes, 31 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00145320(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00145320: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x14);
    edx = ecx;
    PUSH32(esp, esi);
    esi = MEM32(edx);
    MEM32(esp + 4) = esi;
    esi = MEM32(edx + 4);
    MEM32(ecx + 0x48) = eax;
    MEM32(esp + 8) = esi;
    esi = MEM32(edx + 8);
    edx = MEM32(edx + 0xC);
    MEM32(esp + 0x10) = edx;
    edx = MEM32(esp + 8);
    MEM32(eax + 4) = edx;
    eax = MEM32(ecx + 0x48);
    MEM32(eax) = 0;
    eax = MEM32(ecx + 0x48);
    edx = ecx + 0x30;
    ecx = MEM32(edx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = ecx;
    ecx = MEM32(edx + 4);
    MEM32(eax + 4) = ecx;
    ecx = MEM32(edx + 8);
    MEM32(eax + 8) = ecx;
    edx = MEM32(edx + 0xC);
    MEM32(esp + 0xC) = esi;
    MEM32(eax + 0xC) = edx;
    POP32(esp, esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00145380
 * Original: 0x00145380 - 0x00145390 (16 bytes, 5 insns)
 * CC: cdecl, 1 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00145380(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00145380: ;
    eax = MEM32(ecx + 0x48);
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 4)); /* fadd dword ptr [eax + 4] */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001453B0
 * Original: 0x001453B0 - 0x001453B9 (9 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001453B0(void)
{

loc_001453B0: ;
    eax = MEM32(esp + 4);
    MEM32(ecx) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001453C0
 * Original: 0x001453C0 - 0x001453CA (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001453C0(void)
{

loc_001453C0: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 4) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001453D0
 * Original: 0x001453D0 - 0x001453D4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001453D0(void)
{

loc_001453D0: ;
    eax = MEM32(ecx + 4);
    esp += 4; return; /* ret */

}

/**
 * sub_001453E0
 * Original: 0x001453E0 - 0x001453EA (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001453E0(void)
{

loc_001453E0: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 4) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001453F0
 * Original: 0x001453F0 - 0x001453F4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001453F0(void)
{

loc_001453F0: ;
    eax = ecx + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_00145400
 * Original: 0x00145400 - 0x00145401 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00145400(void)
{

loc_00145400: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00145410
 * Original: 0x00145410 - 0x00145424 (20 bytes, 7 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00145410(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00145410: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0014541Cu); RECOMP_ABI_CALL(0x000EB38Cu, sub_000EB38C); /* call 0x000EB38C */

loc_0014541C: ;
    MEM16(esi + 2) = LO16(eax);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00145430
 * Original: 0x00145430 - 0x00145480 (80 bytes, 23 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00145430(void)
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

loc_00145430: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    PUSH32(esp, esi);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x4AAC60)); /* fmul dword ptr [0x4aac60] */
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x00145443u); RECOMP_ABI_CALL(0x000EB38Cu, sub_000EB38C); /* call 0x000EB38C */

loc_00145443: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x4AC184)); /* fmul dword ptr [0x4ac184] */
    edi = eax;
    edi = edi & 0x7FF;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0x0014545Au); RECOMP_ABI_CALL(0x000EB38Cu, sub_000EB38C); /* call 0x000EB38C */

loc_0014545A: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x4AAC60)); /* fmul dword ptr [0x4aac60] */
    eax = eax << 0xB;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = edi | eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edi = edi << 0xB;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, 0x00145471u); RECOMP_ABI_CALL(0x000EB38Cu, sub_000EB38C); /* call 0x000EB38C */

loc_00145471: ;
    eax = eax & 0x7FF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = edi | eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi + 6) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00145480
 * Original: 0x00145480 - 0x001454DB (91 bytes, 26 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00145480(void)
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

loc_00145480: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(int32_t)SMEM16(ecx);
    edx = (uint32_t)(int32_t)SMEM16(ecx + 2);
    MEM32(esp) = eax;
    eax = (uint32_t)(int32_t)SMEM16(ecx + 4);
    fp_push((double)SMEM32(esp)); /* fild */
    MEM32(esp) = edx;
    MEM32(esp + 0x10) = 0x3F800000;
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 4);
    fp_push((double)SMEM32(esp)); /* fild */
    MEM32(esp) = eax;
    eax = MEM32(esp + 0x18);
    ecx = eax;
    MEM32(ecx) = edx;
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push((double)SMEM32(esp)); /* fild */
    edx = MEM32(esp + 8);
    MEM32(ecx + 4) = edx;
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0xC);
    MEM32(ecx + 8) = edx;
    edx = MEM32(esp + 0x10);
    MEM32(ecx + 0xC) = edx;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001454E0
 * Original: 0x001454E0 - 0x00145630 (336 bytes, 107 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001454E0(void)
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

loc_001454E0: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebx = ecx;
    PUSH32(esp, esi);
    esi = MEM32(ebx);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebx + 8) = edi;
    MEM32(ebx + 0xC) = edi;
    ecx = MEM32(eax + 0x34);
    MEM32(ebx + 0x18) = ecx;
    ecx = MEM32(0x653AF0);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00145508u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00145505u); } /* indirect call */
    }

loc_00145508: ;
    eax = MEM32(eax + 4);
    ecx = MEM32(eax + 8);
    edx = MEM32(eax + 0xC);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = MEM32(edx + ecx * 4);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00145523; /* je: equal / zero */

loc_0014551A: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x10;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x10) = ebp;
    goto loc_00145529;

loc_00145523: ;
    MEM32(esp + 0x10) = edi;
    ebp = edi;

loc_00145529: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 0x42);
    ecx = MEM32(0x64F320);
    PUSH32(esp, ecx);
    MEM32(esp + 0x1C) = eax;
    PUSH32(esp, 0x0014553Du); RECOMP_ABI_CALL(0x001030C0u, sub_001030C0); /* call 0x001030C0 */

loc_0014553D: ;
    MEM32(ebx + 0x3C) = eax;
    esi = eax;
    eax = MEM32(esp + 0x1C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x14) = edi;
    if (CMP_LE(_fas, _fbs)) goto loc_00145626; /* jle: less or equal (signed <=) */

loc_00145555: ;
    eax = MEM32(ebp + 0x44);
    ecx = MEM32(eax + edi * 4);
    ecx = MEM32(ecx + 0x14);
    edx = esp + 0x34;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00145568u); RECOMP_ABI_CALL(0x00142DE0u, sub_00142DE0); /* call 0x00142DE0 */

loc_00145568: ;
    edx = MEM32(ebp + 0x44);
    ecx = MEM32(edx + edi * 4);
    PUSH32(esp, 0x00145573u); RECOMP_ABI_CALL(0x0013B6B0u, sub_0013B6B0); /* call 0x0013B6B0 */

loc_00145573: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00145615; /* jle: less or equal (signed <=) */

loc_0014557B: ;
    edx = MEM32(esp + 0x34);
    MEM32(esp + 0x2C) = 0x3F800000;
    ebp = eax;
    /* nop */

loc_00145590: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = esi;
    ecx = 0x13;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = (uint32_t)(int32_t)SMEM16(edx);
    ecx = (uint32_t)(int32_t)SMEM16(edx + 2);
    MEM32(esp + 0x1C) = eax;
    eax = (uint32_t)(int32_t)SMEM16(edx + 4);
    fp_push((double)SMEM32(esp + 0x1C)); /* fild */
    MEM32(esp + 0x1C) = ecx;
    ecx = esi;
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x4C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push((double)SMEM32(esp + 0x1C)); /* fild */
    MEM32(esp + 0x1C) = eax;
    eax = MEM32(esp + 0x20);
    MEM32(ecx) = eax;
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x24);
    fp_push((double)SMEM32(esp + 0x1C)); /* fild */
    MEM32(ecx + 4) = eax;
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x28);
    MEM32(ecx + 8) = eax;
    eax = MEM32(esp + 0x2C);
    MEM32(ecx + 0xC) = eax;
    ecx = MEM32(esi + -12);
    MEM32(esi + ecx * 4 + -60) = edx;
    eax = MEM32(esi + -12);
    edx = MEM32(esp + 0x34);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + -12) = eax;
    edi = MEM32(ebx + 8);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x12) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x12;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ebx + 8) = edi;
    MEM32(esp + 0x34) = edx;
    if ((_fa != 0)) goto loc_00145590; /* jne: not equal / not zero */

loc_0014560D: ;
    edi = MEM32(esp + 0x14);
    ebp = MEM32(esp + 0x10);

loc_00145615: ;
    eax = MEM32(esp + 0x18);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    MEM32(esp + 0x14) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_00145555; /* jl: less (signed <) */

loc_00145626: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
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
 * sub_00145555
 * Original: 0x00145555 - 0x00145630 (219 bytes, 67 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00145555(void)
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

loc_00145555: ;
    eax = MEM32(ebp + 0x44);
    ecx = MEM32(eax + edi * 4);
    ecx = MEM32(ecx + 0x14);
    edx = esp + 0x34;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00145568u); RECOMP_ABI_CALL(0x00142DE0u, sub_00142DE0); /* call 0x00142DE0 */

loc_00145568: ;
    edx = MEM32(ebp + 0x44);
    ecx = MEM32(edx + edi * 4);
    PUSH32(esp, 0x00145573u); RECOMP_ABI_CALL(0x0013B6B0u, sub_0013B6B0); /* call 0x0013B6B0 */

loc_00145573: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00145615; /* jle: less or equal (signed <=) */

loc_0014557B: ;
    edx = MEM32(esp + 0x34);
    MEM32(esp + 0x2C) = 0x3F800000;
    ebp = eax;
    /* nop */

loc_00145590: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = esi;
    ecx = 0x13;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = (uint32_t)(int32_t)SMEM16(edx);
    ecx = (uint32_t)(int32_t)SMEM16(edx + 2);
    MEM32(esp + 0x1C) = eax;
    eax = (uint32_t)(int32_t)SMEM16(edx + 4);
    fp_push((double)SMEM32(esp + 0x1C)); /* fild */
    MEM32(esp + 0x1C) = ecx;
    ecx = esi;
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x4C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push((double)SMEM32(esp + 0x1C)); /* fild */
    MEM32(esp + 0x1C) = eax;
    eax = MEM32(esp + 0x20);
    MEM32(ecx) = eax;
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x24);
    fp_push((double)SMEM32(esp + 0x1C)); /* fild */
    MEM32(ecx + 4) = eax;
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x28);
    MEM32(ecx + 8) = eax;
    eax = MEM32(esp + 0x2C);
    MEM32(ecx + 0xC) = eax;
    ecx = MEM32(esi + -12);
    MEM32(esi + ecx * 4 + -60) = edx;
    eax = MEM32(esi + -12);
    edx = MEM32(esp + 0x34);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + -12) = eax;
    edi = MEM32(ebx + 8);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x12) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x12;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ebx + 8) = edi;
    MEM32(esp + 0x34) = edx;
    if ((_fa != 0)) goto loc_00145590; /* jne: not equal / not zero */

loc_0014560D: ;
    edi = MEM32(esp + 0x14);
    ebp = MEM32(esp + 0x10);

loc_00145615: ;
    eax = MEM32(esp + 0x18);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    MEM32(esp + 0x14) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_00145555; /* jl: less (signed <) */

loc_00145626: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
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
 * sub_00145630
 * Original: 0x00145630 - 0x0014576E (318 bytes, 113 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00145630(void)
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

loc_00145630: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = ecx;
    eax = MEM32(ebx + 8);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(ebx + 0x3C);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    MEM32(ebx + 0x14) = 0;
    if (CMP_LE(_fas, _fbs)) goto loc_001456FF; /* jle: less or equal (signed <=) */

loc_0014564F: ;
    ebp = 1;
    MEM32(esp + 0x10) = ebp;

loc_00145658: ;
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    edi = esi + 0x4C;
    MEM32(esp + 0x14) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_001456E9; /* je: equal / zero */

loc_0014566A: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, MEM32(ebx + 8) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001456E9; /* jge: greater or equal (signed >=) */

loc_0014566F: ;
    /* nop */

loc_00145670: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = esi;
    eax = MEM32(ecx);
    edx = esp;
    MEM32(edx) = eax;
    eax = MEM32(ecx + 4);
    MEM32(edx + 4) = eax;
    eax = MEM32(ecx + 8);
    ecx = MEM32(ecx + 0xC);
    MEM32(edx + 8) = eax;
    MEM32(edx + 0xC) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = edi;
    ecx = MEM32(edx);
    eax = esp;
    MEM32(eax) = ecx;
    ecx = MEM32(edx + 4);
    MEM32(eax + 4) = ecx;
    ecx = MEM32(edx + 8);
    edx = MEM32(edx + 0xC);
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = edx;
    PUSH32(esp, 0x001456AFu); RECOMP_ABI_CALL(0x00016B09u, sub_00016B09); /* call 0x00016B09 */

loc_001456AF: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x4ADBE4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x4adbe4] */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001456D6; /* jp: parity */

loc_001456BF: ;
    eax = MEM32(esi + 0x40);
    ecx = MEM32(edi + 0x10);
    MEM32(esi + eax * 4 + 0x10) = ecx;
    MEM32(esi + 0x40) = MEM32(esi + 0x40) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x40)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(edi + 0x10) = 0;
    MEM32(ebx + 0x14) = MEM32(ebx + 0x14) + 1;
    _fa = (uint32_t)(MEM32(ebx + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001456D6: ;
    eax = MEM32(ebx + 8);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x4C;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00145670; /* jl: less (signed <) */

loc_001456E1: ;
    edi = MEM32(esp + 0x14);
    ebp = MEM32(esp + 0x10);

loc_001456E9: ;
    eax = MEM32(ebx + 8);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = ebp + -1;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    MEM32(esp + 0x10) = ebp;
    esi = edi;
    if (CMP_L(_fas, _fbs)) goto loc_00145658; /* jl: less (signed <) */

loc_001456FF: ;
    ecx = MEM32(ebx + 8);
    edx = MEM32(ebx + 0x3C);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    eax = edx;
    MEM32(esp + 0x10) = ebp;
    if (CMP_LE(_fas, _fbs)) goto loc_0014573F; /* jle: less or equal (signed <=) */

loc_00145711: ;
    ecx = MEM32(eax + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014572C; /* je: equal / zero */

loc_00145718: ;
    esi = eax;
    edi = edx;
    ecx = 0x13;
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x4C;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x4C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0014572F;

loc_0014572C: ;
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x4C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0014572F: ;
    ecx = MEM32(esp + 0x10);
    esi = MEM32(ebx + 8);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    MEM32(esp + 0x10) = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_00145711; /* jl: less (signed <) */

loc_0014573F: ;
    MEM32(ebx + 8) = ebp;
    ebp = (uint32_t)((int32_t)ebp * (int32_t)0x4C);
    ecx = MEM32(0x64F320);
    PUSH32(esp, 0x244);
    PUSH32(esp, 0x4ADBBC);
    PUSH32(esp, 0x4ADB88);
    PUSH32(esp, 1);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00145763u); RECOMP_ABI_CALL(0x001050A0u, sub_001050A0); /* call 0x001050A0 */

loc_00145763: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
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
 * sub_00145770
 * Original: 0x00145770 - 0x0014587F (271 bytes, 85 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00145770(void)
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

loc_00145770: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(esp + 0x24);
    eax = ecx;
    edx = MEM32(eax);
    MEM32(esp + 0x10) = edx;
    edx = MEM32(eax + 4);
    MEM32(esp + 0x14) = edx;
    edx = MEM32(eax + 8);
    eax = MEM32(eax + 0xC);
    MEM32(esp + 0x1C) = eax;
    MEM32(esp + 0x18) = edx;
    edx = MEM32(esp + 0x28);
    PUSH32(esp, esi);
    eax = edx;
    esi = MEM32(eax);
    MEM32(esp + 4) = esi;
    esi = MEM32(eax + 4);
    MEM32(esp + 8) = esi;
    esi = MEM32(eax + 8);
    eax = MEM32(eax + 0xC);
    MEM32(esp + 0xC) = esi;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x49E748)); /* fadd dword ptr [0x49e748] */
    MEM32(esp + 0x10) = eax;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x1C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x1c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_001457D5; /* jp: parity */

loc_001457CB: ;
    eax = 1;
    POP32(esp, esi);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001457D5: ;
    eax = ecx;
    esi = MEM32(eax);
    MEM32(esp + 4) = esi;
    esi = MEM32(eax + 4);
    MEM32(esp + 8) = esi;
    esi = MEM32(eax + 8);
    eax = MEM32(eax + 0xC);
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0xC) = esi;
    eax = edx;
    esi = MEM32(eax);
    MEM32(esp + 0x14) = esi;
    esi = MEM32(eax + 4);
    MEM32(esp + 0x18) = esi;
    esi = MEM32(eax + 8);
    eax = MEM32(eax + 0xC);
    MEM32(esp + 0x1C) = esi;
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x49E748)); /* fsub dword ptr [0x49e748] */
    MEM32(esp + 0x20) = eax;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0xC)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0xc] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0014582E; /* jne: not equal / not zero */

loc_00145824: ;
    eax = 0xFFFFFFFFu;
    POP32(esp, esi);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0014582E: ;
    eax = MEM32(ecx);
    MEM32(esp + 0x14) = eax;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    eax = MEM32(ecx + 4);
    MEM32(esp + 0x18) = eax;
    eax = MEM32(ecx + 8);
    ecx = MEM32(ecx + 0xC);
    MEM32(esp + 0x1C) = eax;
    eax = MEM32(edx);
    MEM32(esp + 4) = eax;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 4] */
    eax = MEM32(edx + 8);
    MEM32(esp + 0x20) = ecx;
    ecx = MEM32(edx + 4);
    MEM32(esp + 0xC) = eax;
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    MEM32(esp + 8) = ecx;
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    ecx = MEM32(edx + 0xC);
    MEM32(esp + 0x10) = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_001457CB; /* je: equal / zero */

loc_00145877: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
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
 * sub_00145880
 * Original: 0x00145880 - 0x00145898 (24 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00145880(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00145880: ;
    eax = MEM32(ecx + 8);
    ecx = MEM32(ecx + 0x3C);
    PUSH32(esp, 0x145770);
    PUSH32(esp, 0x4C);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00145894u); RECOMP_ABI_CALL(0x002A9C20u, sub_002A9C20); /* call 0x002A9C20 */

loc_00145894: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001458A0
 * Original: 0x001458A0 - 0x00145A6F (463 bytes, 158 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001458A0(void)
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

loc_001458A0: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = ecx;
    eax = MEM32(ebx + 8);
    PUSH32(esp, ebp);
    ebp = MEM32(ebx + 0x3C);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebx + 0x10) = 0;
    MEM32(esp + 0x10) = 0x49742400;
    MEM32(esp + 0x20) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_0014596F; /* jle: less or equal (signed <=) */

loc_001458CB: ;
    ecx = MEM32(ebx + 8);
    eax = 1;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x1C) = ecx;
    /* nop */

loc_001458E0: ;
    ecx = MEM32(ebx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    esi = ebp + 0x4C;
    MEM32(esp + 0x14) = esi;
    if (CMP_GE(_fas, _fbs)) goto loc_00145955; /* jge: greater or equal (signed >=) */

loc_001458EE: ;
    edi = ecx;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_001458F2: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = ebp;
    edx = MEM32(eax);
    ecx = esp;
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    edx = MEM32(eax + 8);
    eax = MEM32(eax + 0xC);
    MEM32(ecx + 8) = edx;
    MEM32(ecx + 0xC) = eax;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = esi;
    eax = MEM32(ecx);
    edx = esp;
    MEM32(edx) = eax;
    eax = MEM32(ecx + 4);
    MEM32(edx + 4) = eax;
    eax = MEM32(ecx + 8);
    ecx = MEM32(ecx + 0xC);
    MEM32(edx + 8) = eax;
    MEM32(edx + 0xC) = ecx;
    PUSH32(esp, 0x00145931u); RECOMP_ABI_CALL(0x00016B09u, sub_00016B09); /* call 0x00016B09 */

loc_00145931: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x30)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [esp + 0x30] */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00145945; /* jp: parity */

loc_0014593F: ;
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_00145947;

loc_00145945: ;
    fp_pop(); /* fstp st(0) */

loc_00145947: ;
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x4C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001458F2; /* jne: not equal / not zero */

loc_0014594D: ;
    eax = MEM32(esp + 0x18);
    esi = MEM32(esp + 0x14);

loc_00145955: ;
    ecx = MEM32(esp + 0x1C);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x18) = eax;
    ebp = esi;
    MEM32(esp + 0x1C) = ecx;
    if ((_fa != 0)) goto loc_001458E0; /* jne: not equal / not zero */

loc_0014596B: ;
    eax = MEM32(esp + 0x20);

loc_0014596F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x4ADBE8)); /* fmul dword ptr [0x4adbe8] */
    edi = MEM32(ebx + 0x3C);
    MEMF(esp + 0x10) = (float)fp_top(); /* fst */
    MEMF(ebx + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_LE(_fas, _fbs)) goto loc_00145A67; /* jle: less or equal (signed <=) */

loc_0014598B: ;
    ebp = 1;
    MEM32(esp + 0x1C) = ebp;

loc_00145994: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, MEM32(ebx + 8) (32-bit) */
    esi = edi + 0x4C;
    MEM32(esp + 0x14) = esi;
    if (CMP_GE(_fas, _fbs)) goto loc_00145A51; /* jge: greater or equal (signed >=) */

loc_001459A4: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = edi;
    ecx = MEM32(edx);
    eax = esp;
    MEM32(eax) = ecx;
    ecx = MEM32(edx + 4);
    MEM32(eax + 4) = ecx;
    ecx = MEM32(edx + 8);
    edx = MEM32(edx + 0xC);
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = edx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = esi;
    edx = MEM32(eax);
    ecx = esp;
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    edx = MEM32(eax + 8);
    eax = MEM32(eax + 0xC);
    MEM32(ecx + 8) = edx;
    MEM32(ecx + 0xC) = eax;
    PUSH32(esp, 0x001459E3u); RECOMP_ABI_CALL(0x00016B09u, sub_00016B09); /* call 0x00016B09 */

loc_001459E3: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x30)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x30] */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00145A3A; /* jp: parity */

loc_001459F1: ;
    edx = MEM32(ebx + 0x3C);
    ecx = esi;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = 0x6BCA1AF3;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ecx = edx;
    ecx = ecx >> 0x1F;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(edi + 0x44);
    MEM16(edi + edx * 2 + 0x30) = LO16(ecx);
    MEM32(edi + 0x44) = MEM32(edi + 0x44) + 1;
    _fa = (uint32_t)(MEM32(edi + 0x44)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = MEM32(ebx + 0x3C);
    ecx = edi;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = 0x6BCA1AF3;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    ecx = MEM32(esi + 0x44);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = edx;
    eax = eax >> 0x1F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(esi + ecx * 2 + 0x30) = LO16(eax);
    MEM32(esi + 0x44) = MEM32(esi + 0x44) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x44)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebx + 0x10) = MEM32(ebx + 0x10) + 1;
    _fa = (uint32_t)(MEM32(ebx + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00145A3A: ;
    eax = MEM32(ebx + 8);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x4C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001459A4; /* jl: less (signed <) */

loc_00145A49: ;
    ebp = MEM32(esp + 0x1C);
    esi = MEM32(esp + 0x14);

loc_00145A51: ;
    eax = MEM32(ebx + 8);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = ebp + -1;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    MEM32(esp + 0x1C) = ebp;
    edi = esi;
    if (CMP_L(_fas, _fbs)) goto loc_00145994; /* jl: less (signed <) */

loc_00145A67: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
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
 * sub_00145A70
 * Original: 0x00145A70 - 0x00145CE6 (630 bytes, 221 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00145A70(void)
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

loc_00145A70: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x90) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x90;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = ecx;
    ecx = MEM32(eax + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x3C);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    PUSH32(esp, edi);
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x14) = esi;
    MEM32(esp + 0x1C) = 0;
    if (CMP_LE(_fas, _fbs)) goto loc_00145CDE; /* jle: less or equal (signed <=) */

loc_00145AA1: ;
    goto loc_00145AB0;

loc_00145AA3: ;
    esi = MEM32(esp + 0x14);
    eax = MEM32(esp + 0x18);
    goto loc_00145AB0;

    /* nop */

loc_00145AB0: ;
    ecx = MEM32(esi + 0x44);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00145B7D; /* jle: less or equal (signed <=) */

loc_00145ABD: ;
    edi = MEM32(eax + 0x3C);
    eax = esi;
    ebx = MEM32(eax);
    MEM32(esp + 0x40) = ebx;
    ebx = MEM32(eax + 4);
    MEM32(esp + 0x44) = ebx;
    ebx = MEM32(eax + 8);
    eax = MEM32(eax + 0xC);
    MEM32(esp + 0x4C) = eax;
    MEM32(esp + 0x48) = ebx;
    eax = esi;
    ebx = MEM32(eax);
    MEM32(esp + 0x50) = ebx;
    ebx = MEM32(eax + 4);
    MEM32(esp + 0x54) = ebx;
    ebx = MEM32(eax + 8);
    eax = MEM32(eax + 0xC);
    MEM32(esp + 0x58) = ebx;
    MEM32(esp + 0x5C) = eax;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x30;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    /* nop */

loc_00145B00: ;
    eax = (uint32_t)(int32_t)SMEM16(esi);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x4C);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = eax;
    ebp = MEM32(ebx);
    MEM32(esp + 0x30) = ebp;
    ebp = MEM32(ebx + 4);
    MEM32(esp + 0x34) = ebp;
    ebp = MEM32(ebx + 8);
    ebx = MEM32(ebx + 0xC);
    MEM32(esp + 0x3C) = ebx;
    ebx = MEM32(eax);
    MEM32(esp + 0x20) = ebx;
    ebx = MEM32(eax + 4);
    MEM32(esp + 0x24) = ebx;
    ebx = MEM32(eax + 8);
    MEM32(esp + 0x28) = ebx;
    MEM32(esp + edx * 8 + 0x64) = eax;
    fp_push(MEMF(esp + 0x28)); /* fld float */
    eax = MEM32(eax + 0xC);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x58)); /* fsub dword ptr [esp + 0x58] */
    MEM32(esp + 0x2C) = eax;
    fp_push(MEMF(esp + 0x30)); /* fld float */
    MEM32(esp + 0x38) = ebp;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x40)); /* fsub dword ptr [esp + 0x40] */
    { fp_st1() = atan2(fp_st1(), fp_top()); fp_pop(); } /* fpatan */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x4ADBEC)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x4adbec] */
    MEMF(esp + edx * 8 + 0x60) = (float)fp_top(); /* fst */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00145B73; /* jp: parity */

loc_00145B67: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x49E43C)); /* fadd dword ptr [0x49e43c] */
    MEMF(esp + edx * 8 + 0x60) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_00145B75;

loc_00145B73: ;
    fp_pop(); /* fstp st(0) */

loc_00145B75: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00145B00; /* jl: less (signed <) */

loc_00145B7D: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edi = edi;

loc_00145B80: ;
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00145C40; /* jl: less (signed <) */

loc_00145B8D: ;
    edi = ecx + -4;
    edi = edi >> 2;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = esp + 0x68;
    ebp = edi * 4;
    /* nop */

loc_00145BA0: ;
    fp_push(MEMF(edx + -8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(edx)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [edx] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00145BC4; /* jp: parity */

loc_00145BAC: ;
    ebx = MEM32(edx);
    eax = MEM32(edx + -8);
    esi = MEM32(edx + -4);
    MEM32(edx + -8) = ebx;
    ebx = MEM32(edx + 4);
    MEM32(edx + -4) = ebx;
    MEM32(edx) = eax;
    MEM32(edx + 4) = esi;
    SET_LO8(ebx, 1);

loc_00145BC4: ;
    fp_push(MEMF(edx)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(edx + 8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [edx + 8] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00145BE8; /* jp: parity */

loc_00145BD0: ;
    ebx = MEM32(edx + 8);
    eax = MEM32(edx);
    esi = MEM32(edx + 4);
    MEM32(edx) = ebx;
    ebx = MEM32(edx + 0xC);
    MEM32(edx + 4) = ebx;
    MEM32(edx + 8) = eax;
    MEM32(edx + 0xC) = esi;
    SET_LO8(ebx, 1);

loc_00145BE8: ;
    fp_push(MEMF(edx + 8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(edx + 0x10)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [edx + 0x10] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00145C0F; /* jp: parity */

loc_00145BF5: ;
    ebx = MEM32(edx + 0x10);
    eax = MEM32(edx + 8);
    esi = MEM32(edx + 0xC);
    MEM32(edx + 8) = ebx;
    ebx = MEM32(edx + 0x14);
    MEM32(edx + 0xC) = ebx;
    MEM32(edx + 0x10) = eax;
    MEM32(edx + 0x14) = esi;
    SET_LO8(ebx, 1);

loc_00145C0F: ;
    fp_push(MEMF(edx + 0x10)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(edx + 0x18)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [edx + 0x18] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00145C36; /* jp: parity */

loc_00145C1C: ;
    ebx = MEM32(edx + 0x18);
    eax = MEM32(edx + 0x10);
    esi = MEM32(edx + 0x14);
    MEM32(edx + 0x10) = ebx;
    ebx = MEM32(edx + 0x1C);
    MEM32(edx + 0x14) = ebx;
    MEM32(edx + 0x18) = eax;
    MEM32(edx + 0x1C) = esi;
    SET_LO8(ebx, 1);

loc_00145C36: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00145BA0; /* jne: not equal / not zero */

loc_00145C40: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00145C7A; /* jge: greater or equal (signed >=) */

loc_00145C44: ;
    edi = ecx;
    edx = esp + ebp * 8 + 0x68;
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - ebp;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    /* nop */

loc_00145C50: ;
    fp_push(MEMF(edx + -8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(edx)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [edx] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00145C74; /* jp: parity */

loc_00145C5C: ;
    ebx = MEM32(edx);
    eax = MEM32(edx + -8);
    esi = MEM32(edx + -4);
    MEM32(edx + -8) = ebx;
    ebx = MEM32(edx + 4);
    MEM32(edx + -4) = ebx;
    MEM32(edx) = eax;
    MEM32(edx + 4) = esi;
    SET_LO8(ebx, 1);

loc_00145C74: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00145C50; /* jne: not equal / not zero */

loc_00145C7A: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00145B80; /* jne: not equal / not zero */

loc_00145C82: ;
    ecx = MEM32(esp + 0x14);
    eax = MEM32(ecx + 0x44);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00145CBE; /* jle: less or equal (signed <=) */

loc_00145C8F: ;
    edi = ecx + 0x30;

loc_00145C92: ;
    eax = MEM32(esp + 0x18);
    ebx = MEM32(eax + 0x3C);
    edx = MEM32(esp + esi * 8 + 0x64);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = 0x6BCA1AF3;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)edx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = edx;
    eax = eax >> 0x1F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(edi) = LO16(eax);
    eax = MEM32(ecx + 0x44);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 2;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00145C92; /* jl: less (signed <) */

loc_00145CBE: ;
    eax = MEM32(esp + 0x1C);
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x4C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x14) = ecx;
    ecx = MEM32(esp + 0x18);
    edx = MEM32(ecx + 8);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    MEM32(esp + 0x1C) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_00145AA3; /* jl: less (signed <) */

loc_00145CDE: ;
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
 * sub_00145CF0
 * Original: 0x00145CF0 - 0x00145D9C (172 bytes, 55 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00145CF0(void)
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

loc_00145CF0: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(esp + 0x24);
    eax = MEM32(ecx + 0x3C);
    PUSH32(esp, esi);
    esi = MEM32(edx + 0x50);
    MEM32(esp + 4) = esi;
    esi = MEM32(edx + 0x54);
    MEM32(esp + 8) = esi;
    esi = MEM32(edx + 0x58);
    edx = MEM32(edx + 0x5C);
    MEM32(esp + 0xC) = esi;
    esi = MEM32(ecx + 8);
    MEM32(esp + 0x10) = edx;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00145D95; /* jle: less or equal (signed <=) */

loc_00145D20: ;
    esi = MEM32(esp + 4);
    MEM32(esp + 0x14) = esi;
    esi = MEM32(esp + 8);
    MEM32(esp + 0x18) = esi;
    esi = MEM32(esp + 0xC);
    MEM32(esp + 0x1C) = esi;
    esi = MEM32(esp + 0x10);
    MEM32(esp + 0x20) = esi;
    PUSH32(esp, edi);

loc_00145D41: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    esi = eax;
    edi = MEM32(esi);
    MEM32(esp + 8) = edi;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 8)); /* fadd dword ptr [esp + 8] */
    edi = MEM32(esi + 4);
    MEM32(esp + 0xC) = edi;
    edi = MEM32(esi + 8);
    esi = MEM32(esi + 0xC);
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    MEM32(esp + 0x10) = edi;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0xC)); /* fadd dword ptr [esp + 0xc] */
    MEM32(esp + 0x14) = esi;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x4C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(eax + -72) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x10)); /* fadd dword ptr [esp + 0x10] */
    MEMF(eax + -68) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 0x14)); /* fadd dword ptr [esp + 0x14] */
    MEMF(eax + -64) = (float)fp_top(); fp_pop(); /* fstp */
    esi = MEM32(ecx + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00145D41; /* jl: less (signed <) */

loc_00145D94: ;
    POP32(esp, edi);

loc_00145D95: ;
    POP32(esp, esi);
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
 * sub_00145DA0
 * Original: 0x00145DA0 - 0x00145DE9 (73 bytes, 26 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00145DA0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00145DA0: ;
    edx = ecx;
    PUSH32(esp, esi);
    esi = MEM32(edx + 8);
    PUSH32(esp, edi);
    edi = MEM32(edx);
    edi = (uint32_t)((int32_t)edi * (int32_t)0x10C);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + esi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = MEM32(esp + 0xC);
    ecx = 0x43;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = MEM32(edx);
    ecx = MEM32(edx + 8);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x10C);
    MEM32(eax + ecx) = esi;
    eax = MEM32(edx);
    esi = MEM32(esp + 0x10);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x10C);
    ecx = MEM32(edx + 8);
    MEM32(eax + ecx + 4) = esi;
    eax = MEM32(edx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(edx) = eax;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00145DF0
 * Original: 0x00145DF0 - 0x00145F16 (294 bytes, 91 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00145DF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00145DF0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0;
    eax = MEM32(0x64F320);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00145E06u); RECOMP_ABI_CALL(0x001030C0u, sub_001030C0); /* call 0x001030C0 */

loc_00145E06: ;
    ebx = MEM32(esp + 0x14);
    MEM32(esi + 8) = eax;
    eax = MEM32(ebx + 0x34);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00145E7D; /* jle: less or equal (signed <=) */

loc_00145E19: ;
    /* nop */

loc_00145E20: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 0x1170)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ebx + 0x1170) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00145E2C; /* jl: less (signed <) */

loc_00145E28: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00145E35;

loc_00145E2C: ;
    ecx = MEM32(ebx + 0x1174);
    eax = MEM32(ecx + edx * 4);

loc_00145E35: ;
    _fa = (uint32_t)(MEM32(eax + 0x38)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + 0x38), 0x4000000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00145E75; /* je: equal / zero */

loc_00145E3E: ;
    edi = MEM32(esi);
    edi = (uint32_t)((int32_t)edi * (int32_t)0x10C);
    _fb = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + MEM32(esi + 8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x43;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = MEM32(esi);
    ecx = MEM32(esi + 8);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x10C);
    MEM32(eax + ecx) = edx;
    eax = MEM32(esi);
    ecx = MEM32(esi + 8);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x10C);
    MEM32(eax + ecx + 4) = 1;
    MEM32(esi) = MEM32(esi) + 1;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00145E75: ;
    eax = MEM32(ebx + 0x34);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00145E20; /* jl: less (signed <) */

loc_00145E7D: ;
    eax = MEM32(ebx + 0x34);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00145EE3; /* jle: less or equal (signed <=) */

loc_00145E86: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 0x1170)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ebx + 0x1170) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00145E92; /* jl: less (signed <) */

loc_00145E8E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00145E9B;

loc_00145E92: ;
    eax = MEM32(ebx + 0x1174);
    eax = MEM32(eax + edx * 4);

loc_00145E9B: ;
    _fa = (uint32_t)(MEM32(eax + 0x38)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + 0x38), 0x8000000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00145EDB; /* je: equal / zero */

loc_00145EA4: ;
    edi = MEM32(esi);
    edi = (uint32_t)((int32_t)edi * (int32_t)0x10C);
    _fb = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + MEM32(esi + 8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x43;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = MEM32(esi);
    eax = MEM32(esi + 8);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x10C);
    MEM32(ecx + eax) = edx;
    ecx = MEM32(esi);
    eax = MEM32(esi + 8);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x10C);
    MEM32(ecx + eax + 4) = 0;
    MEM32(esi) = MEM32(esi) + 1;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00145EDB: ;
    eax = MEM32(ebx + 0x34);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00145E86; /* jl: less (signed <) */

loc_00145EE3: ;
    esi = MEM32(esi);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00145F10; /* je: equal / zero */

loc_00145EE9: ;
    ecx = MEM32(0x64F320);
    esi = (uint32_t)((int32_t)esi * (int32_t)0x10C);
    PUSH32(esp, 0x321);
    PUSH32(esp, 0x4ADBF0);
    PUSH32(esp, 0x4ADB88);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00145F0Du); RECOMP_ABI_CALL(0x001050A0u, sub_001050A0); /* call 0x001050A0 */

loc_00145F0D: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00145F10: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00145F20
 * Original: 0x00145F20 - 0x0014609C (380 bytes, 131 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00145F20(void)
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

loc_00145F20: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebx = ecx;
    ebp = MEM32(ebx + 0x3C);
    eax = 0x49742400;
    MEM32(ebx + 0x48) = eax;
    MEM32(ebx + 0x4C) = eax;
    MEM32(ebx + 0x50) = eax;
    MEM32(ebx + 0x54) = eax;
    PUSH32(esp, esi);
    esi = ebx + 0x48;
    eax = 0xC9742400u;
    PUSH32(esp, edi);
    edi = ebx + 0x58;
    MEM32(edi) = eax;
    MEM32(edi + 4) = eax;
    MEM32(edi + 8) = eax;
    MEM32(edi + 0xC) = eax;
    eax = MEM32(ebx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x10) = 0;
    if (CMP_LE(_fas, _fbs)) goto loc_00146000; /* jle: less or equal (signed <=) */

loc_00145F66: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = ebp;
    edx = MEM32(eax);
    ecx = esp;
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    edx = MEM32(eax + 8);
    eax = MEM32(eax + 0xC);
    MEM32(ecx + 8) = edx;
    MEM32(ecx + 0xC) = eax;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = esi;
    eax = MEM32(ecx);
    edx = esp;
    MEM32(edx) = eax;
    eax = MEM32(ecx + 4);
    MEM32(edx + 4) = eax;
    eax = MEM32(ecx + 8);
    ecx = MEM32(ecx + 0xC);
    MEM32(edx + 8) = eax;
    PUSH32(esp, esi);
    MEM32(edx + 0xC) = ecx;
    PUSH32(esp, 0x00145FA6u); RECOMP_ABI_CALL(0x00015FDDu, sub_00015FDD); /* call 0x00015FDD */

loc_00145FA6: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = ebp;
    ecx = MEM32(edx);
    eax = esp;
    MEM32(eax) = ecx;
    ecx = MEM32(edx + 4);
    MEM32(eax + 4) = ecx;
    ecx = MEM32(edx + 8);
    edx = MEM32(edx + 0xC);
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = edx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = edi;
    edx = MEM32(eax);
    ecx = esp;
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    edx = MEM32(eax + 8);
    eax = MEM32(eax + 0xC);
    MEM32(ecx + 8) = edx;
    PUSH32(esp, edi);
    MEM32(ecx + 0xC) = eax;
    PUSH32(esp, 0x00145FE6u); RECOMP_ABI_CALL(0x00014908u, sub_00014908); /* call 0x00014908 */

loc_00145FE6: ;
    eax = MEM32(esp + 0x34);
    ecx = MEM32(ebx + 8);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x4C;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_00145F66; /* jl: less (signed <) */

loc_00146000: ;
    edx = MEM32(esi);
    eax = MEM32(esi + 4);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = esp;
    MEM32(ecx) = edx;
    edx = MEM32(esi + 8);
    MEM32(ecx + 4) = eax;
    eax = MEM32(esi + 0xC);
    MEM32(ecx + 8) = edx;
    edx = MEM32(edi);
    MEM32(ecx + 0xC) = eax;
    eax = MEM32(edi + 4);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = esp;
    MEM32(ecx) = edx;
    edx = MEM32(edi + 8);
    MEM32(ecx + 4) = eax;
    eax = MEM32(edi + 0xC);
    MEM32(ecx + 8) = edx;
    MEM32(ecx + 0xC) = eax;
    ecx = esp + 0x44;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00146040u); RECOMP_ABI_CALL(0x00145140u, sub_00145140); /* call 0x00145140 */

loc_00146040: ;
    edx = MEM32(esp + 0x50);
    ecx = MEM32(esp + 0x4C);
    eax = MEM32(esp + 0x48);
    MEM32(esp + 0x40) = edx;
    fp_push(MEMF(esp + 0x40)); /* fld float */
    MEM32(esp + 0x50) = edx;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x50)); /* fmul dword ptr [esp + 0x50] */
    MEM32(esp + 0x3C) = ecx;
    fp_push(MEMF(esp + 0x3C)); /* fld float */
    MEM32(esp + 0x4C) = ecx;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x4C)); /* fmul dword ptr [esp + 0x4c] */
    MEM32(esp + 0x38) = eax;
    MEM32(esp + 0x48) = eax;
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    esi = MEM32(esp + 0x54);
    fp_push(MEMF(esp + 0x38)); /* fld float */
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x24)); /* fmul dword ptr [esp + 0x24] */
    POP32(esp, edi);
    MEM32(esp + 0x1C) = esi;
    MEM32(esp + 0x2C) = esi;
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    POP32(esp, esi);
    POP32(esp, ebp);
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(ebx + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, ebx);
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
 * sub_00146180
 * Original: 0x00146180 - 0x00146232 (178 bytes, 60 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00146180(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00146180: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    ecx = MEM32(esp + 0xC);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x390);
    edx = MEM32(ecx + 0x28);
    eax = eax + edx + 0x50;
    edx = MEM32(eax);
    MEM32(esi + 0x1C) = edx;
    edx = MEM32(eax + 4);
    MEM32(esi + 0x20) = edx;
    edx = MEM32(eax + 8);
    MEM32(esi + 0x24) = edx;
    eax = MEM32(eax + 0xC);
    MEM32(esi + 0x28) = eax;
    eax = MEM32(ecx + 0x1170);
    PUSH32(esp, edi);
    edi = MEM32(esi);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001461BF; /* jl: less (signed <) */

loc_001461BB: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_001461C8;

loc_001461BF: ;
    ecx = MEM32(ecx + 0x1174);
    ebx = MEM32(ecx + edi * 4);

loc_001461C8: ;
    ecx = MEM32(0x653AF0);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x001461D3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001461D0u); } /* indirect call */
    }

loc_001461D3: ;
    eax = MEM32(eax + 4);
    ecx = MEM32(eax + 8);
    edx = MEM32(eax + 0xC);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(edx + ecx * 4);
    ecx = MEM32(eax + 0x4C0);
    MEM32(esi + 0x30) = ecx;
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x001461F2u); RECOMP_ABI_CALL(0x001454E0u, sub_001454E0); /* call 0x001454E0 */

loc_001461F2: ;
    ecx = esi;
    PUSH32(esp, 0x001461F9u); RECOMP_ABI_CALL(0x00145630u, sub_00145630); /* call 0x00145630 */

loc_001461F9: ;
    edx = MEM32(esi + 8);
    eax = MEM32(esi + 0x3C);
    PUSH32(esp, 0x145770);
    PUSH32(esp, 0x4C);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0014620Du); RECOMP_ABI_CALL(0x002A9C20u, sub_002A9C20); /* call 0x002A9C20 */

loc_0014620D: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    PUSH32(esp, 0x00146217u); RECOMP_ABI_CALL(0x001458A0u, sub_001458A0); /* call 0x001458A0 */

loc_00146217: ;
    ecx = esi;
    PUSH32(esp, 0x0014621Eu); RECOMP_ABI_CALL(0x00145A70u, sub_00145A70); /* call 0x00145A70 */

loc_0014621E: ;
    ecx = esi;
    PUSH32(esp, 0x00146225u); RECOMP_ABI_CALL(0x00145F20u, sub_00145F20); /* call 0x00145F20 */

loc_00146225: ;
    ecx = esi;
    PUSH32(esp, 0x0014622Cu); RECOMP_ABI_CALL(0x001460A0u, sub_001460A0); /* call 0x001460A0 */

loc_0014622C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00146240
 * Original: 0x00146240 - 0x001464A1 (609 bytes, 202 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00146240(void)
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

loc_00146240: ;
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x50);
    eax = MEM32(edi + 0x50);
    ecx = MEM32(edi + 0x58);
    MEM32(esp + 0x50) = eax;
    MEM32(esp + 0x14) = ecx;
    ebp = edi + 0x50;
    ebx = esi + 0x1C;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = ebx;
    ecx = MEM32(edx);
    eax = esp;
    MEM32(eax) = ecx;
    ecx = MEM32(edx + 4);
    MEM32(eax + 4) = ecx;
    ecx = MEM32(edx + 8);
    edx = MEM32(edx + 0xC);
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = edx;
    eax = esi + 0x48;
    edx = MEM32(eax);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = esp;
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    edx = MEM32(eax + 8);
    eax = MEM32(eax + 0xC);
    MEM32(ecx + 8) = edx;
    MEM32(ecx + 0xC) = eax;
    ecx = esp + 0x48;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001462A6u); RECOMP_ABI_CALL(0x000118CAu, sub_000118CA); /* call 0x000118CA */

loc_001462A6: ;
    MEM32(esp + 0x34) = eax;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = ebx;
    ecx = MEM32(edx);
    eax = esp;
    MEM32(eax) = ecx;
    ecx = MEM32(edx + 4);
    MEM32(eax + 4) = ecx;
    ecx = MEM32(edx + 8);
    edx = MEM32(edx + 0xC);
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = edx;
    eax = esi + 0x58;
    edx = MEM32(eax);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = esp;
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    edx = MEM32(eax + 8);
    eax = MEM32(eax + 0xC);
    MEM32(ecx + 8) = edx;
    MEM32(ecx + 0xC) = eax;
    ecx = esp + 0x58;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001462EFu); RECOMP_ABI_CALL(0x000118CAu, sub_000118CA); /* call 0x000118CA */

loc_001462EF: ;
    edx = MEM32(esp + 0x34);
    ecx = eax;
    eax = MEM32(edx);
    MEM32(esp + 0x3C) = eax;
    fp_push(MEMF(esp + 0x3C)); /* fld float */
    eax = MEM32(edx + 4);
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x74)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x74] */
    MEM32(esp + 0x40) = eax;
    eax = MEM32(edx + 8);
    edx = MEM32(edx + 0xC);
    MEM32(esp + 0x44) = eax;
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    MEM32(esp + 0x24) = edx;
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00146497; /* jp: parity */

loc_00146326: ;
    fp_push(MEMF(esp + 0x50)); /* fld float */
    eax = ecx;
    edx = MEM32(eax);
    MEM32(esp + 0x18) = edx;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x18)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x18] */
    edx = MEM32(eax + 4);
    MEM32(esp + 0x1C) = edx;
    edx = MEM32(eax + 8);
    eax = MEM32(eax + 0xC);
    MEM32(esp + 0x24) = eax;
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    MEM32(esp + 0x20) = edx;
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00146497; /* jp: parity */

loc_00146356: ;
    eax = MEM32(esp + 0x10);
    edx = MEM32(eax);
    MEM32(esp + 0x18) = edx;
    edx = MEM32(eax + 4);
    MEM32(esp + 0x1C) = edx;
    edx = MEM32(eax + 8);
    eax = MEM32(eax + 0xC);
    MEM32(esp + 0x20) = edx;
    fp_push(MEMF(esp + 0x20)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x14)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x14] */
    MEM32(esp + 0x24) = eax;
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00146497; /* jp: parity */

loc_00146388: ;
    edx = MEM32(ecx);
    fp_push(MEMF(esp + 0x14)); /* fld float */
    eax = MEM32(ecx + 4);
    MEM32(esp + 0x18) = edx;
    edx = MEM32(ecx + 8);
    MEM32(esp + 0x20) = edx;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x20)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x20] */
    MEM32(esp + 0x1C) = eax;
    eax = MEM32(ecx + 0xC);
    MEM32(esp + 0x24) = eax;
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00146497; /* jp: parity */

loc_001463B6: ;
    ecx = MEM32(esi + 0x68);
    PUSH32(esp, ebp);
    edx = esp + 0x3C;
    MEM32(esi + ecx * 8 + 0x6C) = edi;
    PUSH32(esp, edx);
    ecx = esp + 0x20;
    MEM32(esp + 0x58) = 0x501502F9;
    PUSH32(esp, 0x001463D4u); RECOMP_ABI_CALL(0x00145070u, sub_00145070); /* call 0x00145070 */

loc_001463D4: ;
    eax = MEM32(esi + 8);
    edi = MEM32(esi + 0x3C);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00146494; /* jle: less or equal (signed <=) */

loc_001463E4: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = ebx;
    edx = MEM32(eax);
    ecx = esp;
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    edx = MEM32(eax + 8);
    eax = MEM32(eax + 0xC);
    MEM32(ecx + 8) = edx;
    MEM32(ecx + 0xC) = eax;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = edi;
    eax = MEM32(ecx);
    edx = esp;
    MEM32(edx) = eax;
    eax = MEM32(ecx + 4);
    MEM32(edx + 4) = eax;
    eax = MEM32(ecx + 8);
    ecx = MEM32(ecx + 0xC);
    MEM32(edx + 8) = eax;
    MEM32(edx + 0xC) = ecx;
    edx = esp + 0x58;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00146428u); RECOMP_ABI_CALL(0x000118CAu, sub_000118CA); /* call 0x000118CA */

loc_00146428: ;
    edx = MEM32(eax);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp;
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    edx = MEM32(eax + 8);
    eax = MEM32(eax + 0xC);
    MEM32(ecx + 8) = edx;
    edx = MEM32(esp + 0x28);
    MEM32(ecx + 0xC) = eax;
    eax = MEM32(esp + 0x2C);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = esp;
    MEM32(ecx) = edx;
    edx = MEM32(esp + 0x40);
    MEM32(ecx + 4) = eax;
    eax = MEM32(esp + 0x44);
    MEM32(ecx + 8) = edx;
    MEM32(ecx + 0xC) = eax;
    PUSH32(esp, 0x00146468u); RECOMP_ABI_CALL(0x00016B09u, sub_00016B09); /* call 0x00016B09 */

loc_00146468: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x70)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [esp + 0x70] */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00146483; /* jp: parity */

loc_00146476: ;
    ecx = MEM32(esi + 0x68);
    MEMF(esp + 0x50) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esi + ecx * 8 + 0x70) = edi;
    goto loc_00146485;

loc_00146483: ;
    fp_pop(); /* fstp st(0) */

loc_00146485: ;
    eax = MEM32(esi + 8);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x4C;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001463E4; /* jl: less (signed <) */

loc_00146494: ;
    MEM32(esi + 0x68) = MEM32(esi + 0x68) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x68)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00146497: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_001464B0
 * Original: 0x001464B0 - 0x001464E3 (51 bytes, 25 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001464B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001464B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001464DE; /* jle: less or equal (signed <=) */

loc_001464BC: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001464C4: ;
    ecx = MEM32(esi + 8);
    PUSH32(esp, ebp);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x001464CFu); RECOMP_ABI_CALL(0x00146180u, sub_00146180); /* call 0x00146180 */

loc_001464CF: ;
    eax = MEM32(esi);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x10C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x10C;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001464C4; /* jl: less (signed <) */

loc_001464DC: ;
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_001464DE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001464F0
 * Original: 0x001464F0 - 0x0014651C (44 bytes, 17 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001464F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001464F0: ;
    edx = MEM32(ecx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00146519; /* jle: less or equal (signed <=) */

loc_001464F8: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    goto loc_00146500;

    /* nop */

loc_00146500: ;
    edi = MEM32(ecx + 8);
    MEM32(edx + edi + 0x68) = 0;
    edi = MEM32(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x10C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x10C;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00146500; /* jl: less (signed <) */

loc_00146518: ;
    POP32(esp, edi);

loc_00146519: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00146520
 * Original: 0x00146520 - 0x00146569 (73 bytes, 21 insns)
 * CC: cdecl, 1 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00146520(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00146520: ;
    eax = MEM32(esp + 4);
    fp_push(MEMF(eax + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x49D538)); /* fmul dword ptr [0x49d538] */
    MEMF(ecx + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(eax + 0xC);
    MEM32(ecx + 0x18) = edx;
    edx = MEM32(eax + 0x10);
    MEM32(ecx + 0x1C) = edx;
    edx = MEM32(eax + 0x14);
    MEM32(ecx + 0x20) = edx;
    edx = MEM32(eax + 0x18);
    MEM32(ecx + 0x24) = edx;
    fp_push(MEMF(eax + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x49D44C)); /* fmul dword ptr [0x49d44c] */
    MEMF(ecx + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(eax + 0x20);
    MEM32(ecx + 0x2C) = edx;
    fp_push(MEMF(eax + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x49D450)); /* fmul dword ptr [0x49d450] */
    MEMF(ecx + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00146570
 * Original: 0x00146570 - 0x0014691C (940 bytes, 280 insns)
 * CC: cdecl, 8 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00146570(void)
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

loc_00146570: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x3C);
    MEM32(esp + 0xC) = eax;
    eax = esi + 0x1C;
    ecx = eax;
    edx = MEM32(ecx);
    MEM32(esp + 0x2C) = edx;
    edx = MEM32(ecx + 4);
    MEM32(esp + 0x30) = edx;
    edx = MEM32(ecx + 8);
    ecx = MEM32(ecx + 0xC);
    MEM32(esp + 0x34) = edx;
    edx = MEM32(esp + 0x40);
    MEM32(esp + 0x1C) = edx;
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x2C)); /* fsub dword ptr [esp + 0x2c] */
    edx = MEM32(esp + 0x48);
    MEM32(esp + 0x38) = ecx;
    ecx = MEM32(esp + 0x44);
    MEMF(esp + 0x40) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0x20) = ecx;
    fp_push(MEMF(esp + 0x20)); /* fld float */
    ecx = MEM32(esp + 0x4C);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x30)); /* fsub dword ptr [esp + 0x30] */
    MEM32(esp + 0x24) = edx;
    edx = MEM32(eax);
    MEM32(esp + 0x28) = ecx;
    ecx = MEM32(eax + 4);
    MEMF(esp + 0x44) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    MEM32(esp + 0x20) = ecx;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x34)); /* fsub dword ptr [esp + 0x34] */
    ecx = MEM32(esp + 0x50);
    ebx = MEM32(esp + 0x44);
    MEM32(esp + 0x1C) = edx;
    edx = MEM32(eax + 8);
    MEMF(esp + 0x48) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    eax = MEM32(eax + 0xC);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x38)); /* fsub dword ptr [esp + 0x38] */
    ebp = MEM32(esp + 0x48);
    MEM32(esp + 0x2C) = ecx;
    ecx = MEM32(esp + 0x5C);
    MEMF(esp + 0x4C) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0x24) = edx;
    fp_push(MEMF(esp + 0x2C)); /* fld float */
    edx = MEM32(esp + 0x54);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x1C)); /* fsub dword ptr [esp + 0x1c] */
    MEM32(esp + 0x30) = edx;
    MEM32(esp + 0x28) = eax;
    eax = MEM32(esp + 0x58);
    MEMF(esp + 0x50) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0x34) = eax;
    fp_push(MEMF(esp + 0x30)); /* fld float */
    MEM32(esp + 0x38) = ecx;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x20)); /* fsub dword ptr [esp + 0x20] */
    ecx = MEM32(esp + 0x4C);
    eax = esi + 0x48;
    edx = MEM32(eax);
    MEMF(esp + 0x54) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0x1C) = edx;
    fp_push(MEMF(esp + 0x34)); /* fld float */
    edx = MEM32(eax + 4);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x24)); /* fsub dword ptr [esp + 0x24] */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x44);
    MEM32(esp + 0x24) = edx;
    edx = MEM32(eax + 8);
    MEMF(esp + 0x5C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x3C)); /* fld float */
    MEM32(esp + 0x1C) = 0;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x2C)); /* fsub dword ptr [esp + 0x2c] */
    MEM32(esp + 0x14) = 0x501502F9;
    MEM32(esp + 0x30) = edi;
    MEM32(esp + 0x34) = ebx;
    MEMF(esp + 0x60) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0x38) = ebp;
    MEM32(esp + 0x3C) = ecx;
    fp_push(MEMF(esp + 0x30)); /* fld float */
    eax = MEM32(eax + 0xC);
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x20)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x20] */
    MEM32(esp + 0x2C) = eax;
    MEM32(esp + 0x28) = edx;
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00146910; /* jnp: not parity */

loc_001466BC: ;
    MEM32(esp + 0x3C) = ecx;
    edx = esi + 0x58;
    ecx = edx;
    eax = MEM32(ecx);
    MEM32(esp + 0x20) = eax;
    eax = MEM32(ecx + 4);
    MEM32(esp + 0x30) = edi;
    fp_push(MEMF(esp + 0x30)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x20)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x20] */
    MEM32(esp + 0x24) = eax;
    eax = MEM32(ecx + 8);
    ecx = MEM32(ecx + 0xC);
    MEM32(esp + 0x28) = eax;
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    MEM32(esp + 0x34) = ebx;
    MEM32(esp + 0x38) = ebp;
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    MEM32(esp + 0x2C) = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_00146910; /* je: equal / zero */

loc_001466FF: ;
    eax = MEM32(esp + 0x50);
    MEM32(esp + 0x3C) = eax;
    eax = esi + 0x48;
    ecx = MEM32(eax);
    MEM32(esp + 0x20) = ecx;
    ecx = MEM32(eax + 4);
    MEM32(esp + 0x24) = ecx;
    ecx = MEM32(eax + 8);
    eax = MEM32(eax + 0xC);
    MEM32(esp + 0x38) = ebp;
    fp_push(MEMF(esp + 0x38)); /* fld float */
    MEM32(esp + 0x28) = ecx;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x28)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x28] */
    MEM32(esp + 0x2C) = eax;
    MEM32(esp + 0x30) = edi;
    MEM32(esp + 0x34) = ebx;
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00146910; /* jnp: not parity */

loc_00146744: ;
    eax = MEM32(edx);
    ecx = MEM32(esp + 0x50);
    MEM32(esp + 0x20) = eax;
    eax = MEM32(edx + 4);
    MEM32(esp + 0x24) = eax;
    eax = MEM32(edx + 8);
    edx = MEM32(edx + 0xC);
    MEM32(esp + 0x38) = ebp;
    fp_push(MEMF(esp + 0x38)); /* fld float */
    MEM32(esp + 0x28) = eax;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x28)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x28] */
    MEM32(esp + 0x30) = edi;
    MEM32(esp + 0x34) = ebx;
    MEM32(esp + 0x3C) = ecx;
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    MEM32(esp + 0x2C) = edx;
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00146910; /* je: equal / zero */

loc_00146786: ;
    MEM32(esp + 0x3C) = ecx;
    ecx = esi + 0x48;
    MEM32(esp + 0x30) = edi;
    MEM32(esp + 0x34) = ebx;
    MEM32(esp + 0x38) = ebp;
    PUSH32(esp, 0x0014679Eu); RECOMP_ABI_CALL(0x001450E0u, sub_001450E0); /* call 0x001450E0 */

loc_0014679E: ;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x49F31C)); /* fsub dword ptr [0x49f31c] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x34)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x34] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00146910; /* je: equal / zero */

loc_001467B3: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00146832; /* jle: less or equal (signed <=) */

loc_001467BA: ;
    MEM32(esp + 0x18) = eax;
    edi = edi;

loc_001467C0: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(MEM32(eax + 0x44)) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x44), 8 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0014681C; /* jne: not equal / not zero */

loc_001467CA: ;
    edx = MEM32(eax);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = esp;
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    edx = MEM32(eax + 8);
    eax = MEM32(eax + 0xC);
    MEM32(ecx + 8) = edx;
    edx = MEM32(esp + 0x60);
    MEM32(ecx + 0xC) = eax;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = esp;
    MEM32(ecx) = edi;
    MEM32(ecx + 4) = ebx;
    MEM32(ecx + 8) = ebp;
    MEM32(ecx + 0xC) = edx;
    PUSH32(esp, 0x001467FEu); RECOMP_ABI_CALL(0x00016B09u, sub_00016B09); /* call 0x00016B09 */

loc_001467FE: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x34)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [esp + 0x34] */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0014681A; /* jp: parity */

loc_0014680C: ;
    eax = MEM32(esp + 0x10);
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(esp + 0x1C) = eax;
    goto loc_0014681C;

loc_0014681A: ;
    fp_pop(); /* fstp st(0) */

loc_0014681C: ;
    ecx = MEM32(esp + 0x10);
    eax = MEM32(esp + 0x18);
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x4C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0x18) = eax;
    if ((_fa != 0)) goto loc_001467C0; /* jne: not equal / not zero */

loc_00146832: ;
    fp_push(MEMF(esi + 0x34)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x49F114)); /* fmul dword ptr [0x49f114] */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(esp + 0x14)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [esp + 0x14] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00146904; /* jne: not equal / not zero */

loc_0014684A: ;
    edx = MEM32(esp + 0x50);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = esp;
    MEM32(ecx) = edi;
    MEM32(ecx + 4) = ebx;
    MEM32(ecx + 8) = ebp;
    MEM32(ecx + 0xC) = edx;
    ecx = MEM32(esp + 0x64);
    edx = MEM32(esp + 0x68);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = esp;
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0x7C);
    MEM32(eax + 4) = edx;
    edx = MEM32(esp + 0x80);
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = edx;
    PUSH32(esp, 0x00146886u); RECOMP_ABI_CALL(0x00016B09u, sub_00016B09); /* call 0x00016B09 */

loc_00146886: ;
    SET_LO8(eax, MEM8(esi + 0x38));
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001468A1; /* je: equal / zero */

loc_00146890: ;
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = fabs(fp_top()); /* fabs */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x64F340)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x64f340] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001468FE; /* jne: not equal / not zero */

loc_001468A1: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x49DA68)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [0x49da68] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001468B6; /* jne: not equal / not zero */

loc_001468AE: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x49DA68)); /* fld float */

loc_001468B6: ;
    ecx = MEM32(esp + 0x1C);
    fp_push(MEMF(0x64F338)); /* fld float */
    eax = MEM32(ecx + 0x48);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 4)); /* fadd dword ptr [eax + 4] */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(ecx + 0x48);
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x64F33C)); /* fmul dword ptr [0x64f33c] */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(ecx + 0x48);
    fp_push(MEMF(ecx)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x496B28)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x496b28] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00146900; /* jne: not equal / not zero */

loc_001468E8: ;
    MEM32(ecx) = 0x447A0000;
    MEM8(esi + 0x38) = 1;
    SET_LO8(eax, 1);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 36; return; /* ret 32 */

loc_001468FE: ;
    fp_pop(); /* fstp st(0) */

loc_00146900: ;
    MEM8(esi + 0x38) = 1;

loc_00146904: ;
    SET_LO8(eax, 1);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 36; return; /* ret 32 */

loc_00146910: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 36; return; /* ret 32 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00146920
 * Original: 0x00146920 - 0x00146A17 (247 bytes, 76 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00146920(void)
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

loc_00146920: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(int32_t)SMEM16(ecx + 0x16);
    edx = eax + eax * 2;
    eax = (uint32_t)(int32_t)SMEM16(ecx + 0xE);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = (uint32_t)(int32_t)SMEM16(ecx + 8);
    esi = eax + eax * 2;
    eax = MEM32(esp + 0x28);
    ebx = edi + edi * 2;
    edi = (uint32_t)(int32_t)SMEM16(ecx + 0x10);
    fp_push(MEMF(eax + edx * 8 + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax + esi * 8 + 4)); /* fsub dword ptr [eax + esi*8 + 4] */
    edx = (uint32_t)(int32_t)SMEM16(ecx + 0xA);
    esi = (uint32_t)(int32_t)SMEM16(ecx + 0x12);
    edx = edx + edx * 2;
    edx = eax + edx * 8 + 4;
    edi = edi + edi * 2;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x4ADC34)); /* fmul dword ptr [0x4adc34] */
    esi = esi + esi * 2;
    fp_push(MEMF(eax + ebx * 8 + 4)); /* fld float */
    esi = eax + esi * 8 + 4;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax + edi * 8 + 4)); /* fsub dword ptr [eax + edi*8 + 4] */
    edi = (uint32_t)(int32_t)SMEM16(ecx + 0x14);
    fp_push(MEMF(edx)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi)); /* fsub dword ptr [esi] */
    ecx = (uint32_t)(int32_t)SMEM16(ecx + 0xC);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x4ADC34)); /* fmul dword ptr [0x4adc34] */
    ecx = ecx + ecx * 2;
    edi = edi + edi * 2;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEM32(esp + 0x28) = 0;
    fp_top() = RECOMP_FP_PC(fp_top() + fp_st1()); /* fadd st(1) */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x34)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + edi * 8 + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax + ecx * 8 + 4)); /* fsub dword ptr [eax + ecx*8 + 4] */
    eax = MEM32(esp + 0x1C);
    fp_push(MEMF(esi)); /* fld float */
    ecx = MEM32(esp + 0x20);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(edx)); /* fsub dword ptr [edx] */
    edx = esp;
    MEM32(edx) = eax;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x4ADC34)); /* fmul dword ptr [0x4adc34] */
    MEM32(edx + 4) = ecx;
    ecx = MEM32(esp + 0x28);
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_st1()); /* fadd st(1) */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x24);
    MEM32(edx + 8) = eax;
    MEM32(edx + 0xC) = ecx;
    fp_pop(); /* fstp st(0) */
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    PUSH32(esp, 0x001469EAu); RECOMP_ABI_CALL(0x00014430u, sub_00014430); /* call 0x00014430 */

loc_001469EA: ;
    eax = MEM32(esp + 0x34);
    edx = MEM32(esp + 0x20);
    ecx = eax;
    MEM32(ecx) = edx;
    edx = MEM32(esp + 0x24);
    MEM32(ecx + 4) = edx;
    edx = MEM32(esp + 0x28);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM32(ecx + 8) = edx;
    edx = MEM32(esp + 0x14);
    POP32(esp, esi);
    MEM32(ecx + 0xC) = edx;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00146A20
 * Original: 0x00146A20 - 0x00146AA9 (137 bytes, 41 insns)
 * CC: cdecl, 3 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00146A20(void)
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

loc_00146A20: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    SET_LO16(esi, MEM16(eax + 0x16));
    _fa = (uint32_t)(LO16(esi)) & 0xFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(esi), 0xFFFFFFFFu (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00146AA5; /* je: equal / zero */

loc_00146A2F: ;
    ecx = (uint32_t)(int32_t)SMEM16(eax + 0xC);
    edx = ecx + ecx * 2;
    ecx = (uint32_t)(int32_t)SMEM16(eax + 8);
    PUSH32(esp, edi);
    edi = ecx + ecx * 2;
    ecx = MEM32(esp + 0xC);
    fp_push(MEMF(ecx + edx * 8 + 4)); /* fld float */
    edx = (uint32_t)(int32_t)SMEM16(eax + 0x10);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + edi * 8 + 4)); /* fadd dword ptr [ecx + edi*8 + 4] */
    edx = edx + edx * 2;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + edx * 8 + 4)); /* fadd dword ptr [ecx + edx*8 + 4] */
    edx = (uint32_t)(int32_t)SMEM16(eax + 0x14);
    edx = edx + edx * 2;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + edx * 8 + 4)); /* fadd dword ptr [ecx + edx*8 + 4] */
    edx = (uint32_t)(int32_t)SMEM16(eax + 0xE);
    edi = edx + edx * 2;
    edx = (uint32_t)(int32_t)SMEM16(eax + 0xA);
    edx = edx + edx * 2;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x4ADC3C)); /* fmul dword ptr [0x4adc3c] */
    fp_push(MEMF(ecx + edi * 8 + 4)); /* fld float */
    POP32(esp, edi);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + edx * 8 + 4)); /* fadd dword ptr [ecx + edx*8 + 4] */
    edx = (uint32_t)(int32_t)SMEM16(eax + 0x12);
    edx = edx + edx * 2;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + edx * 8 + 4)); /* fadd dword ptr [ecx + edx*8 + 4] */
    edx = SX16(LO16(esi));
    edx = edx + edx * 2;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ecx + edx * 8 + 4)); /* fadd dword ptr [ecx + edx*8 + 4] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x4ADC38)); /* fmul dword ptr [0x4adc38] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax + 4)); /* fsub dword ptr [eax + 4] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax)); /* fadd dword ptr [eax] */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */

loc_00146AA5: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00146AB0
 * Original: 0x00146AB0 - 0x00146AC6 (22 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00146AB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00146AB0: ;
    eax = ecx;
    ecx = MEM32(0x632F24);
    edx = 1;
    edx = edx << LO8(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(MEM32(eax + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + 0x18), edx (32-bit) */
    SET_LO8(eax, (TEST_NZ(_fa, _fb)) ? 1 : 0); /* setne */
    esp += 4; return; /* ret */

}
