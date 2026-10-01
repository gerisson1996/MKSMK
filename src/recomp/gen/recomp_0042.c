/**
 * MKSM - Recompiled code chunk 42
 * Functions: 500 (0x002B8240 - 0x002C0900)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

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
 * sub_002B87E0
 * Original: 0x002B87E0 - 0x002B8813 (51 bytes, 14 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B87E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B87E0: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(0x104) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x104;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, eax);
    ecx = esp + 4;
    PUSH32(esp, 0x4C4184);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002B87FAu); RECOMP_ABI_CALL(0x000F4FA6u, sub_000F4FA6); /* call 0x000F4FA6 */

loc_002B87FA: ;
    eax = MEM32(esp + 0x114);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002B880Cu); RECOMP_ABI_CALL(0x002B8BE0u, sub_002B8BE0); /* call 0x002B8BE0 */

loc_002B880C: ;
    _fb = (uint32_t)(0x118) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x118;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

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
 * sub_002B8830
 * Original: 0x002B8830 - 0x002B88FB (203 bytes, 60 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B8830(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B8830: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x002B883Du); RECOMP_ABI_CALL(0x002B6290u, sub_002B6290); /* call 0x002B6290 */

loc_002B883D: ;
    eax = MEM32(0x735894);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B884F; /* je: equal / zero */

loc_002B8849: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x002B884Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002B884Au); } /* indirect call */
    }

loc_002B884C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002B884F: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x2B8820);
    PUSH32(esp, 0x002B885Bu); RECOMP_ABI_CALL(0x002CCBF0u, sub_002CCBF0); /* call 0x002CCBF0 */

loc_002B885B: ;
    PUSH32(esp, 0x002B8860u); RECOMP_ABI_CALL(0x002CCC50u, sub_002CCC50); /* call 0x002CCC50 */

loc_002B8860: ;
    eax = MEM32(esi + 4);
    edi = MEM32(eax + 4);
    ebx = MEM32(esi + 0x10);
    PUSH32(esp, 0x002B886Eu); RECOMP_ABI_CALL(0x002B4630u, sub_002B4630); /* call 0x002B4630 */

loc_002B886E: ;
    edx = MEM32(esp + 0x20);
    eax = MEM32(esp + 0x1C);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002B8882u); RECOMP_ABI_CALL(0x002CD750u, sub_002CD750); /* call 0x002CD750 */

loc_002B8882: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002B88E5; /* jl: less (signed <) */

loc_002B8889: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B88E5; /* je: equal / zero */

loc_002B8891: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x18;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 2);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002B889Eu); RECOMP_ABI_CALL(0x002CD5A0u, sub_002CD5A0); /* call 0x002CD5A0 */

loc_002B889E: ;
    ecx = MEM32(esp + 0x20);
    MEM32(edi + 0xC0) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(0x735894) = 0x2B8650;
    MEM32(0x736A88) = 0x2B86B0;
    MEM32(0x735898) = 0x2B8690;
    MEM32(0x736A80) = 0x2B8790;
    MEM32(0x736A84) = 0x2B87D0;
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_002B4640(); return; /* tail jmp 0x002B4640 */

loc_002B88E5: ;
    PUSH32(esp, 0x4C41AC);
    PUSH32(esp, 0x4C4190);
    PUSH32(esp, 0x002B88F4u); RECOMP_ABI_CALL(0x002BF7B0u, sub_002BF7B0); /* call 0x002BF7B0 */

loc_002B88F4: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002B8900
 * Original: 0x002B8900 - 0x002B89BD (189 bytes, 60 insns)
 * Category: game_debug
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B8900(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B8900: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B8918; /* jne: not equal / not zero */

loc_002B8907: ;
    PUSH32(esp, 0x4C41E4);
    PUSH32(esp, 0x002B8911u); RECOMP_ABI_CALL(0x002BF770u, sub_002BF770); /* call 0x002BF770 */

loc_002B8911: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_002B8918: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002B891Eu); RECOMP_ABI_CALL(0x002B6290u, sub_002B6290); /* call 0x002B6290 */

loc_002B891E: ;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    eax = MEM32(esi + 0xAC);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x002B893Bu); RECOMP_ABI_CALL(0x002B9FA0u, sub_002B9FA0); /* call 0x002B9FA0 */

loc_002B893B: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B89B9; /* jne: not equal / not zero */

loc_002B8942: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B8977; /* jne: not equal / not zero */

loc_002B8949: ;
    PUSH32(esp, 0x10);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x002B8957u); RECOMP_ABI_CALL(0x002BF880u, sub_002BF880); /* call 0x002BF880 */

loc_002B8957: ;
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    PUSH32(esp, 0x4C41C0);
    PUSH32(esp, 0x002B8966u); RECOMP_ABI_CALL(0x002BF7B0u, sub_002BF7B0); /* call 0x002BF7B0 */

loc_002B8966: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(esi + 0x60) = 0xFFFF;
    MEM8(esi + 1) = 6;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_002B8977: ;
    eax = MEM32(esi + 0xAC);
    ecx = MEM32(esp);
    edx = MEM32(esp + 4);
    MEM32(esi + 0xB0) = eax;
    eax = MEM32(esp + 8);
    MEM32(esi + 0xBC) = eax;
    SET_LO8(eax, 1);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    MEM32(esi + 0xB4) = ecx;
    MEM32(esi + 0xB8) = edx;
    MEM8(esi + 1) = LO8(eax);
    MEM8(esi + 0xA8) = LO8(eax);
    MEM8(esi + 2) = LO8(eax);
    PUSH32(esp, 0x002B89B6u); RECOMP_ABI_CALL(0x002B6EF0u, sub_002B6EF0); /* call 0x002B6EF0 */

loc_002B89B6: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002B89B9: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
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
 * sub_002B8AB0
 * Original: 0x002B8AB0 - 0x002B8B79 (201 bytes, 66 insns)
 * Category: game_debug
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B8AB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B8AB0: ;
    PUSH32(esp, ecx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B8B6A; /* je: equal / zero */

loc_002B8AB9: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B8B6A; /* je: equal / zero */

loc_002B8AC1: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002B8B6A; /* jl: less (signed <) */

loc_002B8AC9: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x002B8ACFu); RECOMP_ABI_CALL(0x002B6290u, sub_002B6290); /* call 0x002B6290 */

loc_002B8ACF: ;
    eax = MEM32(esi + 4);
    ecx = eax;
    MEM32(esp + 4) = eax;
    edx = eax;
    ecx = ecx << 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & 0xFF00;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx | eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_HI8(eax, MEM8(esp + 6));
    ecx = ecx << 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx >> 0x18;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx | edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ecx | eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002B8B77; /* jge: greater or equal (signed >=) */

loc_002B8AFB: ;
    PUSH32(esp, 0x002B8B00u); RECOMP_ABI_CALL(0x002BEA50u, sub_002BEA50); /* call 0x002BEA50 */

loc_002B8B00: ;
    ecx = MEM32(esi + edi * 8 + 8);
    eax = ecx;
    MEM32(esp) = ecx;
    eax = eax << 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx & 0xFF00;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = MEM32(esp);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_HI8(edx, MEM8(esp + 2));
    eax = eax << 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx >> 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax | ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0x40000000);
    eax = eax | edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x002B8B34u); RECOMP_ABI_CALL(0x002CC1E0u, sub_002CC1E0); /* call 0x002CC1E0 */

loc_002B8B34: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B8B4F; /* jne: not equal / not zero */

loc_002B8B3B: ;
    PUSH32(esp, 0x002B8B40u); RECOMP_ABI_CALL(0x002BEA60u, sub_002BEA60); /* call 0x002BEA60 */

loc_002B8B40: ;
    PUSH32(esp, 0x4C42C4);
    PUSH32(esp, 0x002B8B4Au); RECOMP_ABI_CALL(0x002BF770u, sub_002BF770); /* call 0x002BF770 */

loc_002B8B4A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_002B8B4F: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x002B8B56u); RECOMP_ABI_CALL(0x002B4D80u, sub_002B4D80); /* call 0x002B4D80 */

loc_002B8B56: ;
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    MEM8(ebx + 2) = 2;
    PUSH32(esp, 0x002B8B62u); RECOMP_ABI_CALL(0x002B6EF0u, sub_002B6EF0); /* call 0x002B6EF0 */

loc_002B8B62: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_002BEA60(); return; /* tail jmp 0x002BEA60 */

loc_002B8B6A: ;
    PUSH32(esp, 0x4C4298);
    PUSH32(esp, 0x002B8B74u); RECOMP_ABI_CALL(0x002BF770u, sub_002BF770); /* call 0x002BF770 */

loc_002B8B74: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002B8B77: ;
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
 * sub_002B8C10
 * Original: 0x002B8C10 - 0x002B8C6F (95 bytes, 31 insns)
 * Category: game_debug
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B8C10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002B8C10: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B8C63; /* je: equal / zero */

loc_002B8C14: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002B8C63; /* je: equal / zero */

loc_002B8C18: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002B8C1Eu); RECOMP_ABI_CALL(0x002B6290u, sub_002B6290); /* call 0x002B6290 */

loc_002B8C1E: ;
    PUSH32(esp, 0x002B8C23u); RECOMP_ABI_CALL(0x002BEA50u, sub_002BEA50); /* call 0x002BEA50 */

loc_002B8C23: ;
    PUSH32(esp, 0x40000000);
    PUSH32(esp, edi);
    PUSH32(esp, 0x002B8C2Eu); RECOMP_ABI_CALL(0x002CC1E0u, sub_002CC1E0); /* call 0x002CC1E0 */

loc_002B8C2E: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B8C48; /* jne: not equal / not zero */

loc_002B8C35: ;
    PUSH32(esp, 0x002B8C3Au); RECOMP_ABI_CALL(0x002BEA60u, sub_002BEA60); /* call 0x002BEA60 */

loc_002B8C3A: ;
    PUSH32(esp, 0x4C426C);
    PUSH32(esp, 0x002B8C44u); RECOMP_ABI_CALL(0x002BF770u, sub_002BF770); /* call 0x002BF770 */

loc_002B8C44: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_002B8C48: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x002B8C4Fu); RECOMP_ABI_CALL(0x002B4D80u, sub_002B4D80); /* call 0x002B4D80 */

loc_002B8C4F: ;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    MEM8(esi + 2) = 2;
    PUSH32(esp, 0x002B8C5Bu); RECOMP_ABI_CALL(0x002B6EF0u, sub_002B6EF0); /* call 0x002B6EF0 */

loc_002B8C5B: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_002BEA60(); return; /* tail jmp 0x002BEA60 */

loc_002B8C63: ;
    PUSH32(esp, 0x4C4240);
    PUSH32(esp, 0x002B8C6Du); RECOMP_ABI_CALL(0x002BF770u, sub_002BF770); /* call 0x002BF770 */

loc_002B8C6D: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

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
 * sub_002B8E20
 * Original: 0x002B8E20 - 0x002B8E60 (64 bytes, 20 insns)
 * Category: game_io
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002B8E20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002B8E20: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002B8E4D; /* jl: less (signed <) */

loc_002B8E28: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x100) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x100 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002B8E4D; /* jge: greater or equal (signed >=) */

loc_002B8E2F: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002B8E4A; /* jne: not equal / not zero */

loc_002B8E37: ;
    PUSH32(esp, 0x4C432C);
    PUSH32(esp, 0x002B8E41u); RECOMP_ABI_CALL(0x002BF770u, sub_002BF770); /* call 0x002BF770 */

loc_002B8E41: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0xFFFFFFFDu;
    esp += 4; return; /* ret */

loc_002B8E4A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_002B8E4D: ;
    PUSH32(esp, 0x4C42F4);
    PUSH32(esp, 0x002B8E57u); RECOMP_ABI_CALL(0x002BF770u, sub_002BF770); /* call 0x002BF770 */

loc_002B8E57: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0xFFFFFFFDu;
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
 * sub_002BA860
 * Original: 0x002BA860 - 0x002BAA71 (529 bytes, 159 insns)
 * Category: game_io
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BA860(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002BA860: ;
    eax = MEM32(0x779560);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002BA881; /* jne: not equal / not zero */

loc_002BA86D: ;
    PUSH32(esp, 0x4C4928);
    PUSH32(esp, 0x002BA877u); RECOMP_ABI_CALL(0x002BF770u, sub_002BF770); /* call 0x002BF770 */

loc_002BA877: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_002BA881: ;
    eax = MEM32(0x7796C0);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002BA898; /* je: equal / zero */

loc_002BA88D: ;
    PUSH32(esp, 0x002BA892u); RECOMP_ABI_CALL(0x002B9BE0u, sub_002B9BE0); /* call 0x002B9BE0 */

loc_002BA892: ;
    MEM32(0x7796C0) = edi;

loc_002BA898: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x38);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    MEM32(0x779370) = 0xFFFFFFFFu;
    MEM32(0x779560) = 1;
    if (CMP_NE(_fa, _fb)) goto loc_002BA8D7; /* jne: not equal / not zero */

loc_002BA8B5: ;
    PUSH32(esp, 0x4C48FC);

loc_002BA8BA: ;
    PUSH32(esp, 0x002BA8BFu); RECOMP_ABI_CALL(0x002BF770u, sub_002BF770); /* call 0x002BF770 */

loc_002BA8BF: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    MEM32(0x779560) = 4;
    eax = 0xFFFFFFFDu;
    POP32(esp, edi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_002BA8D7: ;
    _fa = (uint32_t)(MEM32(esp + 0x3C)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x3C), edi (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_002BA8E4; /* jg: greater (signed >) */

loc_002BA8DD: ;
    PUSH32(esp, 0x4C48D4);
    goto loc_002BA8BA;

loc_002BA8E4: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x1C);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x3C);
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x002BA8F5u); RECOMP_ABI_CALL(0x002B8E20u, sub_002B8E20); /* call 0x002B8E20 */

loc_002BA8F5: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002BA981; /* jl: less (signed <) */

loc_002BA900: ;
    _fa = (uint32_t)(MEM32(0x779370)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x779370), edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002BA912; /* jl: less (signed <) */

loc_002BA908: ;
    PUSH32(esp, 0x4C48A4);
    goto loc_002BA9C3;

loc_002BA912: ;
    MEM32(0x7796C4) = edi;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x779370) = ebx;
    MEM32(0x779560) = 2;
    ecx = 0x47;
    edi = ebp;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM32(ebx * 4 + 0x7796E0) = ebp;
    ebx = MEM32(esp + 0x2C);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    MEM32(ebp) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_002BA99F; /* jne: not equal / not zero */

loc_002BA945: ;
    edi = MEM32(esp + 0x28);
    ebx = MEM32(esp + 0x24);
    PUSH32(esp, 0x002BA952u); RECOMP_ABI_CALL(0x002BA6D0u, sub_002BA6D0); /* call 0x002BA6D0 */

loc_002BA952: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(0x7796C0) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_002BA9BE; /* je: equal / zero */

loc_002BA95B: ;
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    eax = esp + 0x3C;
    PUSH32(esp, eax);
    ecx = ebp + 0x10;
    PUSH32(esp, ecx);
    eax = ebx;
    PUSH32(esp, 0x002BA97Au); RECOMP_ABI_CALL(0x002B9850u, sub_002B9850); /* call 0x002B9850 */

loc_002BA97A: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002BA993; /* jge: greater or equal (signed >=) */

loc_002BA981: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, esi);
    MEM32(0x779560) = 4;
    POP32(esp, edi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_002BA993: ;
    edx = MEM32(esp + 0x10);
    MEM32(ebp + 0x114) = edx;
    goto loc_002BA9FC;

loc_002BA99F: ;
    eax = MEM32(esp + 0x38);
    esi = MEM32(esp + 0x34);
    edi = MEM32(esp + 0x30);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x002BA9B2u); RECOMP_ABI_CALL(0x002BA600u, sub_002BA600); /* call 0x002BA600 */

loc_002BA9B2: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(0x7796C0) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_002BA9E0; /* jne: not equal / not zero */

loc_002BA9BE: ;
    PUSH32(esp, 0x4C4878);

loc_002BA9C3: ;
    PUSH32(esp, 0x002BA9C8u); RECOMP_ABI_CALL(0x002BF770u, sub_002BF770); /* call 0x002BF770 */

loc_002BA9C8: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, esi);
    MEM32(0x779560) = 4;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, edi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_002BA9E0: ;
    PUSH32(esp, 0x100);
    ecx = ebp + 0x10;
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002BA9EFu); RECOMP_ABI_CALL(0x000EBBD0u, sub_000EBBD0); /* call 0x000EBBD0 */

loc_002BA9EF: ;
    MEM32(ebp + 0x114) = esi;
    esi = MEM32(esp + 0x4C);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002BA9FC: ;
    SET_LO8(eax, MEM8(esp + 0x48));
    edx = MEM32(esp + 0x30);
    MEM8(ebp + 0xF) = LO8(eax);
    eax = MEM32(esp + 0x44);
    MEM32(ebp + 0x110) = edx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 0x7FF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(ebp + 0xE) = 0;
    ebx = eax;
    MEM32(0x735994) = esi;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((0xB) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = esi;
    esi = MEM32(0x7796C0);
    MEM32(0x735998) = ebx;
    PUSH32(esp, 0x002BAA3Cu); RECOMP_ABI_CALL(0x002B9310u, sub_002B9310); /* call 0x002B9310 */

loc_002BAA3C: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002BAA60; /* jge: greater or equal (signed >=) */

loc_002BAA42: ;
    eax = MEM32(0x7796C0);
    PUSH32(esp, 0x002BAA4Cu); RECOMP_ABI_CALL(0x002B9BE0u, sub_002B9BE0); /* call 0x002B9BE0 */

loc_002BAA4C: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    eax = esi;
    POP32(esp, esi);
    MEM32(0x779560) = 4;
    POP32(esp, edi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_002BAA60: ;
    MEM32(ebp + 8) = 0;
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
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

/**
 * sub_002BB8B0
 * Original: 0x002BB8B0 - 0x002BB8C8 (24 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_002BB8B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002BB8B0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_002BB8C5; /* jg: greater (signed >) */

loc_002BB8B9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002BB8C5; /* jl: less (signed <) */

loc_002BB8BD: ;
    eax = MEM32(eax * 4 + 0x78DD00);
    esp += 4; return; /* ret */

loc_002BB8C5: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_002BB8D0
 * Original: 0x002BB8D0 - 0x002BB94C (124 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BB8D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002BB8D0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x78DC20) = eax;
    MEM32(0x78DC24) = eax;
    MEM32(0x78DC28) = eax;
    MEM32(0x78DC2C) = eax;
    MEM32(0x78DC30) = eax;
    MEM32(0x78DC34) = eax;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x78DC38) = eax;
    MEM32(0x7359F4) = ecx;
    MEM32(0x78DC3C) = eax;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x735C50) = eax;
    MEM32(0x7359F8) = ecx;
    MEM32(0x7359FC) = edx;
    MEM32(0x735A04) = ecx;
    MEM32(0x735C54) = eax;
    MEM32(0x735A00) = edx;
    MEM32(0x735A08) = ecx;
    eax = 0x78DD00;

loc_002BB931: ;
    MEM32(eax) = 0;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x78DD18) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x78DD18 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002BB931; /* jl: less (signed <) */

loc_002BB941: ;
    MEM32(0x7359F0) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_002BB950
 * Original: 0x002BB950 - 0x002BB96A (26 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BB950(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002BB950: ;
    eax = MEM32(0x735CC0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002BB95E; /* jne: not equal / not zero */

loc_002BB959: ;
    PUSH32(esp, 0x002BB95Eu); RECOMP_ABI_CALL(0x002BB8D0u, sub_002BB8D0); /* call 0x002BB8D0 */

loc_002BB95E: ;
    eax = MEM32(0x735CC0);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x735CC0) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_002BB970
 * Original: 0x002BB970 - 0x002BB991 (33 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BB970(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002BB970: ;
    eax = MEM32(0x735CC0);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x735CC0) = eax;
    if ((_fa != 0)) goto loc_002BB990; /* jne: not equal / not zero */

loc_002BB97D: ;
    PUSH32(esp, 0x002BB982u); RECOMP_ABI_CALL(0x002BB8D0u, sub_002BB8D0); /* call 0x002BB8D0 */

loc_002BB982: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x735C58) = ecx;
    MEM32(0x735C5C) = ecx;

loc_002BB990: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002BB9A0
 * Original: 0x002BB9A0 - 0x002BB9BB (27 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BB9A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002BB9A0: ;
    eax = MEM32(0x7359F0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002BB9AC; /* je: equal / zero */

loc_002BB9A9: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_002BB9AC: ;
    eax = MEM32(esp + 4);
    MEM32(0x7359F0) = eax;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_002BB9C0
 * Original: 0x002BB9C0 - 0x002BB9D4 (20 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BB9C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002BB9C0: ;
    eax = MEM32(0x7359F0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002BB9D3; /* jne: not equal / not zero */

loc_002BB9C9: ;
    MEM32(0x7359F0) = 0;

loc_002BB9D3: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002BB9E0
 * Original: 0x002BB9E0 - 0x002BB9F4 (20 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BB9E0(void)
{

loc_002BB9E0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    MEM32(0x735C50) = eax;
    MEM32(0x735C54) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_002BBA00
 * Original: 0x002BBA00 - 0x002BBA14 (20 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BBA00(void)
{

loc_002BBA00: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    MEM32(0x735A04) = eax;
    MEM32(0x735A08) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_002BBA20
 * Original: 0x002BBA20 - 0x002BBA34 (20 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BBA20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002BBA20: ;
    eax = MEM32(0x735C50);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002BBA33; /* je: equal / zero */

loc_002BBA29: ;
    ecx = MEM32(0x735C54);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x002BBA32u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002BBA30u); } /* indirect call */
    }

loc_002BBA32: ;
    POP32(esp, ecx);

loc_002BBA33: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002BBA40
 * Original: 0x002BBA40 - 0x002BBA54 (20 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BBA40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002BBA40: ;
    eax = MEM32(0x735A04);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002BBA53; /* je: equal / zero */

loc_002BBA49: ;
    ecx = MEM32(0x735A08);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x002BBA52u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002BBA50u); } /* indirect call */
    }

loc_002BBA52: ;
    POP32(esp, ecx);

loc_002BBA53: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002BBA60
 * Original: 0x002BBA60 - 0x002BBA66 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BBA60(void)
{

loc_002BBA60: ;
    eax = 0x735A10;
    esp += 4; return; /* ret */

}

/**
 * sub_002BBA70
 * Original: 0x002BBA70 - 0x002BBABE (78 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BBA70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002BBA70: ;
    ecx = MEM32(0x7359FC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002BBABD; /* je: equal / zero */

loc_002BBA7A: ;
    ecx = MEM32(0x735CC4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x735CC4) = ecx;
    if ((_fa != 0)) goto loc_002BBAB0; /* jne: not equal / not zero */

loc_002BBA89: ;
    _fa = (uint32_t)(MEM32(0x735CC8)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x735CC8), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002BBAA6; /* je: equal / zero */

loc_002BBA91: ;
    edx = MEM32(0x735CC8);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x4C4B10);
    PUSH32(esp, 0x002BBAA3u); RECOMP_ABI_CALL(0x002BB2D0u, sub_002BB2D0); /* call 0x002BB2D0 */

loc_002BBAA3: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002BBAA6: ;
    MEM32(0x735CC8) = 0;

loc_002BBAB0: ;
    eax = MEM32(0x735A00);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x7359FC); PUSH32(esp, 0x002BBABCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002BBAB6u); } /* indirect call */
    }

loc_002BBABC: ;
    POP32(esp, ecx);

loc_002BBABD: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002BBAC0
 * Original: 0x002BBAC0 - 0x002BBB0E (78 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BBAC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002BBAC0: ;
    eax = MEM32(0x7359FC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002BBB0D; /* je: equal / zero */

loc_002BBAC9: ;
    eax = MEM32(0x735CC4);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x735CC4) = eax;
    if ((_fa != 0)) goto loc_002BBAFF; /* jne: not equal / not zero */

loc_002BBAD6: ;
    _fa = (uint32_t)(MEM32(0x735CC8)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x735CC8), 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002BBAF5; /* je: equal / zero */

loc_002BBADF: ;
    ecx = MEM32(0x735CC8);
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x4C4B10);
    PUSH32(esp, 0x002BBAF2u); RECOMP_ABI_CALL(0x002BB2D0u, sub_002BB2D0); /* call 0x002BB2D0 */

loc_002BBAF2: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002BBAF5: ;
    MEM32(0x735CC8) = 0;

loc_002BBAFF: ;
    edx = MEM32(0x735A00);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(0x7359FC); PUSH32(esp, 0x002BBB0Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002BBB06u); } /* indirect call */
    }

loc_002BBB0C: ;
    POP32(esp, ecx);

loc_002BBB0D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002BBB10
 * Original: 0x002BBB10 - 0x002BBB5E (78 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BBB10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002BBB10: ;
    eax = MEM32(0x7359FC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002BBB5D; /* je: equal / zero */

loc_002BBB19: ;
    eax = MEM32(0x735CC4);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x735CC4) = eax;
    if ((_fa != 0)) goto loc_002BBB4F; /* jne: not equal / not zero */

loc_002BBB26: ;
    _fa = (uint32_t)(MEM32(0x735CC8)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x735CC8), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002BBB45; /* je: equal / zero */

loc_002BBB2F: ;
    ecx = MEM32(0x735CC8);
    PUSH32(esp, 2);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x4C4B10);
    PUSH32(esp, 0x002BBB42u); RECOMP_ABI_CALL(0x002BB2D0u, sub_002BB2D0); /* call 0x002BB2D0 */

loc_002BBB42: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002BBB45: ;
    MEM32(0x735CC8) = 0;

loc_002BBB4F: ;
    edx = MEM32(0x735A00);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(0x7359FC); PUSH32(esp, 0x002BBB5Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002BBB56u); } /* indirect call */
    }

loc_002BBB5C: ;
    POP32(esp, ecx);

loc_002BBB5D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002BBB60
 * Original: 0x002BBB60 - 0x002BBBAE (78 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BBB60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002BBB60: ;
    eax = MEM32(0x7359FC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002BBBAD; /* je: equal / zero */

loc_002BBB69: ;
    eax = MEM32(0x735CC4);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x735CC4) = eax;
    if ((_fa != 0)) goto loc_002BBB9F; /* jne: not equal / not zero */

loc_002BBB76: ;
    _fa = (uint32_t)(MEM32(0x735CC8)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x735CC8), 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002BBB95; /* je: equal / zero */

loc_002BBB7F: ;
    ecx = MEM32(0x735CC8);
    PUSH32(esp, 3);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x4C4B10);
    PUSH32(esp, 0x002BBB92u); RECOMP_ABI_CALL(0x002BB2D0u, sub_002BB2D0); /* call 0x002BB2D0 */

loc_002BBB92: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002BBB95: ;
    MEM32(0x735CC8) = 0;

loc_002BBB9F: ;
    edx = MEM32(0x735A00);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(0x7359FC); PUSH32(esp, 0x002BBBACu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002BBBA6u); } /* indirect call */
    }

loc_002BBBAC: ;
    POP32(esp, ecx);

loc_002BBBAD: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002BBBB0
 * Original: 0x002BBBB0 - 0x002BBBFE (78 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BBBB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002BBBB0: ;
    eax = MEM32(0x7359FC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002BBBFD; /* je: equal / zero */

loc_002BBBB9: ;
    eax = MEM32(0x735CC4);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x735CC4) = eax;
    if ((_fa != 0)) goto loc_002BBBEF; /* jne: not equal / not zero */

loc_002BBBC6: ;
    _fa = (uint32_t)(MEM32(0x735CC8)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x735CC8), 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002BBBE5; /* je: equal / zero */

loc_002BBBCF: ;
    ecx = MEM32(0x735CC8);
    PUSH32(esp, 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x4C4B10);
    PUSH32(esp, 0x002BBBE2u); RECOMP_ABI_CALL(0x002BB2D0u, sub_002BB2D0); /* call 0x002BB2D0 */

loc_002BBBE2: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002BBBE5: ;
    MEM32(0x735CC8) = 0;

loc_002BBBEF: ;
    edx = MEM32(0x735A00);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(0x7359FC); PUSH32(esp, 0x002BBBFCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002BBBF6u); } /* indirect call */
    }

loc_002BBBFC: ;
    POP32(esp, ecx);

loc_002BBBFD: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002BBC00
 * Original: 0x002BBC00 - 0x002BBC4E (78 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BBC00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002BBC00: ;
    eax = MEM32(0x7359FC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002BBC4D; /* je: equal / zero */

loc_002BBC09: ;
    eax = MEM32(0x735CC4);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x735CC4) = eax;
    if ((_fa != 0)) goto loc_002BBC3F; /* jne: not equal / not zero */

loc_002BBC16: ;
    _fa = (uint32_t)(MEM32(0x735CC8)) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x735CC8), 5 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002BBC35; /* je: equal / zero */

loc_002BBC1F: ;
    ecx = MEM32(0x735CC8);
    PUSH32(esp, 5);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x4C4B10);
    PUSH32(esp, 0x002BBC32u); RECOMP_ABI_CALL(0x002BB2D0u, sub_002BB2D0); /* call 0x002BB2D0 */

loc_002BBC32: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002BBC35: ;
    MEM32(0x735CC8) = 0;

loc_002BBC3F: ;
    edx = MEM32(0x735A00);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(0x7359FC); PUSH32(esp, 0x002BBC4Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002BBC46u); } /* indirect call */
    }

loc_002BBC4C: ;
    POP32(esp, ecx);

loc_002BBC4D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002BBC50
 * Original: 0x002BBC50 - 0x002BBCA4 (84 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BBC50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002BBC50: ;
    eax = MEM32(0x7359FC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002BBCA3; /* je: equal / zero */

loc_002BBC59: ;
    eax = MEM32(0x735CC4);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x735CC4) = eax;
    if ((_fa != 0)) goto loc_002BBC95; /* jne: not equal / not zero */

loc_002BBC66: ;
    _fa = (uint32_t)(MEM32(0x735CC8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3E8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x735CC8), 0x3E8 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002BBC8B; /* je: equal / zero */

loc_002BBC72: ;
    ecx = MEM32(0x735CC8);
    PUSH32(esp, 0x3E8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x4C4B10);
    PUSH32(esp, 0x002BBC88u); RECOMP_ABI_CALL(0x002BB2D0u, sub_002BB2D0); /* call 0x002BB2D0 */

loc_002BBC88: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002BBC8B: ;
    MEM32(0x735CC8) = 0;

loc_002BBC95: ;
    edx = MEM32(0x735A00);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(0x7359FC); PUSH32(esp, 0x002BBCA2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002BBC9Cu); } /* indirect call */
    }

loc_002BBCA2: ;
    POP32(esp, ecx);

loc_002BBCA3: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002BBCB0
 * Original: 0x002BBCB0 - 0x002BBD0B (91 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BBCB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002BBCB0: ;
    eax = MEM32(0x7359F4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002BBCE5; /* je: equal / zero */

loc_002BBCB9: ;
    ecx = MEM32(0x7359F8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x002BBCC2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002BBCC0u); } /* indirect call */
    }

loc_002BBCC2: ;
    eax = MEM32(0x735CC4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002BBCD8; /* jne: not equal / not zero */

loc_002BBCCE: ;
    MEM32(0x735CC8) = 1;

loc_002BBCD8: ;
    edx = MEM32(0x735CC4);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x735CC4) = edx;

loc_002BBCE5: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 8);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, 0x002BBCFDu); RECOMP_ABI_CALL(0x002BB490u, sub_002BB490); /* call 0x002BB490 */

loc_002BBCFD: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = eax;
    PUSH32(esp, 0x002BBD07u); RECOMP_ABI_CALL(0x002BBAC0u, sub_002BBAC0); /* call 0x002BBAC0 */

loc_002BBD07: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002BBD10
 * Original: 0x002BBD10 - 0x002BBD57 (71 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BBD10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002BBD10: ;
    eax = MEM32(0x7359F4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002BBD45; /* je: equal / zero */

loc_002BBD19: ;
    ecx = MEM32(0x7359F8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x002BBD22u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002BBD20u); } /* indirect call */
    }

loc_002BBD22: ;
    eax = MEM32(0x735CC4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002BBD38; /* jne: not equal / not zero */

loc_002BBD2E: ;
    MEM32(0x735CC8) = 1;

loc_002BBD38: ;
    edx = MEM32(0x735CC4);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x735CC4) = edx;

loc_002BBD45: ;
    ecx = MEM32(esp + 8);
    eax = MEM32(esp + 4);
    PUSH32(esp, 0x002BBD52u); RECOMP_ABI_CALL(0x002BB540u, sub_002BB540); /* call 0x002BB540 */

loc_002BBD52: ;
    g_seh_ebp = ebp; sub_002BBAC0(); return; /* tail jmp 0x002BBAC0 */

}

/**
 * sub_002BBD60
 * Original: 0x002BBD60 - 0x002BBDBA (90 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BBD60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002BBD60: ;
    eax = MEM32(0x7359F4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002BBD95; /* je: equal / zero */

loc_002BBD69: ;
    ecx = MEM32(0x7359F8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x002BBD72u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002BBD70u); } /* indirect call */
    }

loc_002BBD72: ;
    eax = MEM32(0x735CC4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002BBD88; /* jne: not equal / not zero */

loc_002BBD7E: ;
    MEM32(0x735CC8) = 1;

loc_002BBD88: ;
    edx = MEM32(0x735CC4);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x735CC4) = edx;

loc_002BBD95: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, 0x002BBDB1u); RECOMP_ABI_CALL(0x002BB5E0u, sub_002BB5E0); /* call 0x002BB5E0 */

loc_002BBDB1: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    g_seh_ebp = ebp; sub_002BBAC0(); return; /* tail jmp 0x002BBAC0 */

}

/**
 * sub_002BBDC0
 * Original: 0x002BBDC0 - 0x002BBE14 (84 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BBDC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002BBDC0: ;
    eax = MEM32(0x7359F4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002BBDF5; /* je: equal / zero */

loc_002BBDC9: ;
    ecx = MEM32(0x7359F8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x002BBDD2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002BBDD0u); } /* indirect call */
    }

loc_002BBDD2: ;
    eax = MEM32(0x735CC4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002BBDE8; /* jne: not equal / not zero */

loc_002BBDDE: ;
    MEM32(0x735CC8) = 1;

loc_002BBDE8: ;
    edx = MEM32(0x735CC4);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x735CC4) = edx;

loc_002BBDF5: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    edx = MEM32(esp + 0xC);
    MEM32(eax * 8 + 0x735C60) = ecx;
    MEM32(eax * 8 + 0x735C64) = edx;
    g_seh_ebp = ebp; sub_002BBAC0(); return; /* tail jmp 0x002BBAC0 */

}

/**
 * sub_002BBE20
 * Original: 0x002BBE20 - 0x002BBE6D (77 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BBE20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002BBE20: ;
    eax = MEM32(0x7359F4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002BBE55; /* je: equal / zero */

loc_002BBE29: ;
    ecx = MEM32(0x7359F8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x002BBE32u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002BBE30u); } /* indirect call */
    }

loc_002BBE32: ;
    eax = MEM32(0x735CC4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002BBE48; /* jne: not equal / not zero */

loc_002BBE3E: ;
    MEM32(0x735CC8) = 1;

loc_002BBE48: ;
    edx = MEM32(0x735CC4);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x735CC4) = edx;

loc_002BBE55: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    MEM32(0x735C58) = eax;
    MEM32(0x735C5C) = ecx;
    g_seh_ebp = ebp; sub_002BBAC0(); return; /* tail jmp 0x002BBAC0 */

}

/**
 * sub_002BBE70
 * Original: 0x002BBE70 - 0x002BBECE (94 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BBE70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002BBE70: ;
    eax = MEM32(0x7359F0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002BBE7B; /* je: equal / zero */

loc_002BBE79: ;
    g_seh_ebp = ebp; RECOMP_ITAIL(eax); return; /* indirect tail jmp */

loc_002BBE7B: ;
    eax = MEM32(0x7359F4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002BBEAE; /* je: equal / zero */

loc_002BBE84: ;
    edx = MEM32(0x7359F8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x002BBE8Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002BBE8Bu); } /* indirect call */
    }

loc_002BBE8D: ;
    eax = MEM32(0x735CC4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002BBEA3; /* jne: not equal / not zero */

loc_002BBE99: ;
    MEM32(0x735CC8) = 1;

loc_002BBEA3: ;
    eax = MEM32(0x735CC4);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x735CC4) = eax;

loc_002BBEAE: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 1 (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    PUSH32(esp, esi);
    MEM32(eax) = 1;
    esi = ecx;
    PUSH32(esp, 0x002BBECAu); RECOMP_ABI_CALL(0x002BBAC0u, sub_002BBAC0); /* call 0x002BBAC0 */

loc_002BBECA: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002BBED0
 * Original: 0x002BBED0 - 0x002BBEEA (26 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BBED0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002BBED0: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 8);
    edx = MEM32(esp + 4);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x002BBEE6u); RECOMP_ABI_CALL(0x002BBCB0u, sub_002BBCB0); /* call 0x002BBCB0 */

loc_002BBEE6: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002BBEF0
 * Original: 0x002BBEF0 - 0x002BBF0F (31 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BBEF0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002BBEF0: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 8);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002BBF0Bu); RECOMP_ABI_CALL(0x002BBD60u, sub_002BBD60); /* call 0x002BBD60 */

loc_002BBF0B: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002BBF10
 * Original: 0x002BBF10 - 0x002BBF1A (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BBF10(void)
{

loc_002BBF10: ;
    eax = MEM32(esp + 4);
    MEM32(0x51DDE8) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_002BBF20
 * Original: 0x002BBF20 - 0x002BBF4B (43 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_002BBF20(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002BBF20: ;
    PUSH32(esp, 0x002BBF25u); RECOMP_ABI_CALL(0x002BB830u, sub_002BB830); /* call 0x002BB830 */

loc_002BBF25: ;
    PUSH32(esp, 0x002BBF2Au); RECOMP_ABI_CALL(0x002BB840u, sub_002BB840); /* call 0x002BB840 */

loc_002BBF2A: ;
    PUSH32(esp, 0x002BBF2Fu); RECOMP_ABI_CALL(0x002BB850u, sub_002BB850); /* call 0x002BB850 */

loc_002BBF2F: ;
    PUSH32(esp, 0x002BBF34u); RECOMP_ABI_CALL(0x002BB860u, sub_002BB860); /* call 0x002BB860 */

loc_002BBF34: ;
    PUSH32(esp, 0x002BBF39u); RECOMP_ABI_CALL(0x002BB870u, sub_002BB870); /* call 0x002BB870 */

loc_002BBF39: ;
    PUSH32(esp, 0x002BBF3Eu); RECOMP_ABI_CALL(0x002BB880u, sub_002BB880); /* call 0x002BB880 */

loc_002BBF3E: ;
    PUSH32(esp, 0x002BBF43u); RECOMP_ABI_CALL(0x002BB890u, sub_002BB890); /* call 0x002BB890 */

loc_002BBF43: ;
    PUSH32(esp, 0x002BBF48u); RECOMP_ABI_CALL(0x002BB8A0u, sub_002BB8A0); /* call 0x002BB8A0 */

loc_002BBF48: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_002BBF50
 * Original: 0x002BBF50 - 0x002BBF55 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BBF50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002BBF50: ;
    g_seh_ebp = ebp; sub_002BB830(); return; /* tail jmp 0x002BB830 */

}

/**
 * sub_002BBF60
 * Original: 0x002BBF60 - 0x002BBF65 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BBF60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002BBF60: ;
    g_seh_ebp = ebp; sub_002BB840(); return; /* tail jmp 0x002BB840 */

}

/**
 * sub_002BBF70
 * Original: 0x002BBF70 - 0x002BBF75 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BBF70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002BBF70: ;
    g_seh_ebp = ebp; sub_002BB850(); return; /* tail jmp 0x002BB850 */

}

/**
 * sub_002BBF80
 * Original: 0x002BBF80 - 0x002BBF85 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BBF80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002BBF80: ;
    g_seh_ebp = ebp; sub_002BB860(); return; /* tail jmp 0x002BB860 */

}

/**
 * sub_002BBF90
 * Original: 0x002BBF90 - 0x002BBF95 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BBF90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002BBF90: ;
    g_seh_ebp = ebp; sub_002BB870(); return; /* tail jmp 0x002BB870 */

}

/**
 * sub_002BBFA0
 * Original: 0x002BBFA0 - 0x002BBFA5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BBFA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002BBFA0: ;
    g_seh_ebp = ebp; sub_002BB880(); return; /* tail jmp 0x002BB880 */

}

/**
 * sub_002BBFB0
 * Original: 0x002BBFB0 - 0x002BBFB5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BBFB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002BBFB0: ;
    g_seh_ebp = ebp; sub_002BB890(); return; /* tail jmp 0x002BB890 */

}

/**
 * sub_002BBFC0
 * Original: 0x002BBFC0 - 0x002BBFC5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BBFC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002BBFC0: ;
    g_seh_ebp = ebp; sub_002BB8A0(); return; /* tail jmp 0x002BB8A0 */

}

/**
 * sub_002BBFD0
 * Original: 0x002BBFD0 - 0x002BBFE3 (19 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BBFD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_002BBFD0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_002BBFE2; /* jne: not equal / not zero */

loc_002BBFD5: ;
    PUSH32(esp, 0x002BBFDAu); RECOMP_ABI_CALL(0x002B4610u, sub_002B4610); /* call 0x002B4610 */

loc_002BBFDA: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(2)) >> 32) & 1);
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002BBFE2: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002BBFF0
 * Original: 0x002BBFF0 - 0x002BC050 (96 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_002BBFF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_002BBFF0: ;
    eax = MEM32(0x51DDE8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_002BC007; /* jne: not equal / not zero */

loc_002BBFFA: ;
    PUSH32(esp, 0x002BBFFFu); RECOMP_ABI_CALL(0x002B4610u, sub_002B4610); /* call 0x002B4610 */

loc_002BBFFF: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(2)) >> 32) & 1);
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002BC007: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_002BC025; /* je: equal / zero */

loc_002BC00A: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_002BC01D; /* je: equal / zero */

loc_002BC00D: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_002BC04D; /* jne: not equal / not zero */

loc_002BC010: ;
    PUSH32(esp, 0x002BC015u); RECOMP_ABI_CALL(0x002BB890u, sub_002BB890); /* call 0x002BB890 */

loc_002BC015: ;
    PUSH32(esp, 0x002BC01Au); RECOMP_ABI_CALL(0x002BB8A0u, sub_002BB8A0); /* call 0x002BB8A0 */

loc_002BC01A: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_002BC01D: ;
    PUSH32(esp, 0x002BC022u); RECOMP_ABI_CALL(0x002BB880u, sub_002BB880); /* call 0x002BB880 */

loc_002BC022: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_002BC025: ;
    PUSH32(esp, 0x002BC02Au); RECOMP_ABI_CALL(0x002BB830u, sub_002BB830); /* call 0x002BB830 */

loc_002BC02A: ;
    PUSH32(esp, 0x002BC02Fu); RECOMP_ABI_CALL(0x002BB840u, sub_002BB840); /* call 0x002BB840 */

loc_002BC02F: ;
    PUSH32(esp, 0x002BC034u); RECOMP_ABI_CALL(0x002BB850u, sub_002BB850); /* call 0x002BB850 */

loc_002BC034: ;
    PUSH32(esp, 0x002BC039u); RECOMP_ABI_CALL(0x002BB860u, sub_002BB860); /* call 0x002BB860 */

loc_002BC039: ;
    PUSH32(esp, 0x002BC03Eu); RECOMP_ABI_CALL(0x002BB870u, sub_002BB870); /* call 0x002BB870 */

loc_002BC03E: ;
    PUSH32(esp, 0x002BC043u); RECOMP_ABI_CALL(0x002BB880u, sub_002BB880); /* call 0x002BB880 */

loc_002BC043: ;
    PUSH32(esp, 0x002BC048u); RECOMP_ABI_CALL(0x002BB890u, sub_002BB890); /* call 0x002BB890 */

loc_002BC048: ;
    PUSH32(esp, 0x002BC04Du); RECOMP_ABI_CALL(0x002BB8A0u, sub_002BB8A0); /* call 0x002BB8A0 */

loc_002BC04D: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_002BC0A0
 * Original: 0x002BC0A0 - 0x002BC0A5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BC0A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002BC0A0: ;
    g_seh_ebp = ebp; sub_002CDF60(); return; /* tail jmp 0x002CDF60 */

}

/**
 * sub_002BC0B0
 * Original: 0x002BC0B0 - 0x002BC0B5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BC0B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002BC0B0: ;
    g_seh_ebp = ebp; sub_002CDF70(); return; /* tail jmp 0x002CDF70 */

}

/**
 * sub_002BC0C0
 * Original: 0x002BC0C0 - 0x002BC0EA (42 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BC0C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002BC0C0: ;
    eax = MEM32(0x735CCC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002BC0DE; /* jne: not equal / not zero */

loc_002BC0C9: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x002BC0CFu); RECOMP_ABI_CALL(0x002CEC00u, sub_002CEC00); /* call 0x002CEC00 */

loc_002BC0CF: ;
    ecx = 0x2A0;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = 0x78CF60;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    POP32(esp, edi);

loc_002BC0DE: ;
    eax = MEM32(0x735CCC);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x735CCC) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_002BC0F0
 * Original: 0x002BC0F0 - 0x002BC10E (30 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BC0F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002BC0F0: ;
    eax = MEM32(0x735CCC);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x735CCC) = eax;
    if ((_fa != 0)) goto loc_002BC10D; /* jne: not equal / not zero */

loc_002BC0FD: ;
    PUSH32(esp, edi);
    ecx = 0x2A0;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = 0x78CF60;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    POP32(esp, edi);

loc_002BC10D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002BC110
 * Original: 0x002BC110 - 0x002BC149 (57 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BC110(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002BC110: ;
    eax = MEM32(esp + 4);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 0x98) = ecx;
    MEM32(eax + 0x2C) = ecx;
    MEM32(eax + 0x30) = ecx;
    MEM32(eax + 0x34) = ecx;
    MEM32(eax + 0x38) = 0x7FFFFFFF;
    MEM32(eax + 0x3C) = 0xFFFFFFFFu;
    MEM32(eax + 0x40) = ecx;
    MEM32(eax + 0x44) = ecx;
    MEM8(eax + 3) = LO8(ecx);
    MEM32(eax + 0xA0) = ecx;
    MEM32(eax + 0xA4) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_002BC150
 * Original: 0x002BC150 - 0x002BC186 (54 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BC150(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002BC150: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002BC184; /* je: equal / zero */

loc_002BC159: ;
    eax = MEM32(edi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002BC170; /* je: equal / zero */

loc_002BC160: ;
    PUSH32(esp, eax);
    MEM32(edi + 4) = 0;
    PUSH32(esp, 0x002BC16Du); RECOMP_ABI_CALL(0x002CE020u, sub_002CE020); /* call 0x002CE020 */

loc_002BC16D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002BC170: ;
    PUSH32(esp, 0x002BC175u); RECOMP_ABI_CALL(0x002BEA50u, sub_002BEA50); /* call 0x002BEA50 */

loc_002BC175: ;
    ecx = 0x2A;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    POP32(esp, edi);
    g_seh_ebp = ebp; sub_002BEA60(); return; /* tail jmp 0x002BEA60 */

loc_002BC184: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_002BC190
 * Original: 0x002BC190 - 0x002BC199 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BC190(void)
{

loc_002BC190: ;
    eax = MEM32(esp + 4);
    eax = (uint32_t)(int32_t)SMEM8(eax + 1);
    esp += 4; return; /* ret */

}

/**
 * sub_002BC1A0
 * Original: 0x002BC1A0 - 0x002BC1C7 (39 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BC1A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002BC1A0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = MEM32(edi + 4);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    MEM32(edi + 8) = esi;
    PUSH32(esp, 0x002BC1B7u); RECOMP_ABI_CALL(0x002CF1E0u, sub_002CF1E0); /* call 0x002CF1E0 */

loc_002BC1B7: ;
    ecx = MEM32(edi + 4);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002BC1C1u); RECOMP_ABI_CALL(0x002CDE20u, sub_002CDE20); /* call 0x002CDE20 */

loc_002BC1C1: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002BC1D0
 * Original: 0x002BC1D0 - 0x002BC1E1 (17 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BC1D0(void)
{

loc_002BC1D0: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 8);
    edx = MEM32(esp + 4);
    MEM32(edx + ecx * 4 + 0xC) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_002BC1F0
 * Original: 0x002BC1F0 - 0x002BC217 (39 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BC1F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002BC1F0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = MEM32(edi + 4);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    MEM32(edi + 0x38) = esi;
    PUSH32(esp, 0x002BC207u); RECOMP_ABI_CALL(0x002CF200u, sub_002CF200); /* call 0x002CF200 */

loc_002BC207: ;
    ecx = MEM32(edi + 4);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002BC211u); RECOMP_ABI_CALL(0x002CDE40u, sub_002CDE40); /* call 0x002CDE40 */

loc_002BC211: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002BC220
 * Original: 0x002BC220 - 0x002BC23E (30 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BC220(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002BC220: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002BC22Eu); RECOMP_ABI_CALL(0x002CF250u, sub_002CF250); /* call 0x002CF250 */

loc_002BC22E: ;
    ecx = MEM32(esi + 4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    MEM32(esp + 4) = ecx;
    g_seh_ebp = ebp; sub_002CDE70(); return; /* tail jmp 0x002CDE70 */

}

/**
 * sub_002BC240
 * Original: 0x002BC240 - 0x002BC27D (61 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BC240(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002BC240: ;
    eax = MEM32(esp + 4);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 0x98) = ecx;
    MEM32(eax + 0x2C) = ecx;
    MEM32(eax + 0x30) = ecx;
    MEM32(eax + 0x34) = ecx;
    MEM32(eax + 0x38) = 0x7FFFFFFF;
    MEM32(eax + 0x3C) = 0xFFFFFFFFu;
    MEM32(eax + 0x40) = ecx;
    MEM32(eax + 0x44) = ecx;
    MEM8(eax + 3) = LO8(ecx);
    MEM32(eax + 0xA0) = ecx;
    MEM32(eax + 0xA4) = ecx;
    MEM8(eax + 1) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_002BC280
 * Original: 0x002BC280 - 0x002BC297 (23 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BC280(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002BC280: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002BC28Eu); RECOMP_ABI_CALL(0x002CE720u, sub_002CE720); /* call 0x002CE720 */

loc_002BC28E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(esi + 1) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002BC2A0
 * Original: 0x002BC2A0 - 0x002BC4F7 (599 bytes, 231 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002BC2A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002BC2A0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    ebx = MEM32(esi + 8);
    eax = MEM32(ebx);
    PUSH32(esp, edi);
    edi = MEM32(esi + 4);
    ecx = esp + 0x18;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0xC800);
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    MEM32(esp + 0x24) = edi;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x002BC2CBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002BC2C8u); } /* indirect call */
    }

loc_002BC2CB: ;
    ecx = MEM32(esp + 0x2C);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_002BC2EB; /* jle: less or equal (signed <=) */

loc_002BC2D8: ;
    edx = MEM32(esp + 0x18);
    /* nop */

loc_002BC2E0: ;
    _fa = (uint32_t)(MEM8(edx + eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx + eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002BC2EB; /* jne: not equal / not zero */

loc_002BC2E6: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002BC2E0; /* jl: less (signed <) */

loc_002BC2EB: ;
    edx = eax;
    edx = edx & 0x80000001u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fas >= 0)) goto loc_002BC2FA; /* jns: not sign (positive) */

loc_002BC2F5: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = edx | 0xFFFFFFFEu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_002BC2FA: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002BC334; /* jne: not equal / not zero */

loc_002BC2FF: ;
    eax = MEM32(ebx);
    ecx = esp + 0x18;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x002BC30Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002BC308u); } /* indirect call */
    }

loc_002BC30B: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002BC313u); RECOMP_ABI_CALL(0x002CDF70u, sub_002CDF70); /* call 0x002CDF70 */

loc_002BC313: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002BC329; /* jne: not equal / not zero */

loc_002BC317: ;
    PUSH32(esp, 0x4C4BBC);
    PUSH32(esp, 0x4C4B9C);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002BC326u); RECOMP_ABI_CALL(0x002BF7B0u, sub_002BF7B0); /* call 0x002BF7B0 */

loc_002BC326: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002BC329: ;
    MEM8(esi + 1) = 4;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_002BC334: ;
    edx = esp + 0x18;
    PUSH32(esp, edx);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002BC345u); RECOMP_ABI_CALL(0x002C2860u, sub_002C2860); /* call 0x002C2860 */

loc_002BC345: ;
    eax = MEM32(ebx);
    ecx = esp + 0x30;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x002BC352u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002BC34Fu); } /* indirect call */
    }

loc_002BC352: ;
    eax = MEM32(esp + 0x38);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x10 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002BC375; /* jge: greater or equal (signed >=) */

loc_002BC35E: ;
    edx = MEM32(ebx);
    eax = esp + 0x18;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x002BC36Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002BC368u); } /* indirect call */
    }

loc_002BC36B: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_002BC375: ;
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002BC381u); RECOMP_ABI_CALL(0x002CF000u, sub_002CF000); /* call 0x002CF000 */

loc_002BC381: ;
    esi = eax;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(esp + 0x10) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_002BC4E0; /* je: equal / zero */

loc_002BC392: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x1C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(esp + 0x1C) (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_002BC4E0; /* jg: greater (signed >) */

loc_002BC39C: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002BC3C3; /* jge: greater or equal (signed >=) */

loc_002BC3A0: ;
    _fa = (uint32_t)(MEM16(edi + 0x9A)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edi + 0x9A), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002BC489; /* je: equal / zero */

loc_002BC3AE: ;
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002BC3B4u); RECOMP_ABI_CALL(0x002CE1A0u, sub_002CE1A0); /* call 0x002CE1A0 */

loc_002BC3B4: ;
    MEM32(esp + 0x14) = 0;
    esi = MEM32(esp + 0x14);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002BC3C3: ;
    edx = MEM32(ebp + 8);
    PUSH32(esp, edi);
    MEM32(edx + 0x98) = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002BC3D2u); RECOMP_ABI_CALL(0x002CE280u, sub_002CE280); /* call 0x002CE280 */

loc_002BC3D2: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002BC3E1; /* jne: not equal / not zero */

loc_002BC3DA: ;
    eax = MEM32(ebp + 8);
    MEM8(eax + 3) = 1;

loc_002BC3E1: ;
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002BC3E7u); RECOMP_ABI_CALL(0x002CE280u, sub_002CE280); /* call 0x002CE280 */

loc_002BC3E7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002BC41D; /* jne: not equal / not zero */

loc_002BC3EF: ;
    ecx = MEM32(esp + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x40 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002BC3FD; /* jl: less (signed <) */

loc_002BC3F8: ;
    ecx = 0x40;

loc_002BC3FD: ;
    edi = MEM32(ebp + 8);
    esi = MEM32(esp + 0x18);
    edx = ecx;
    _fb = (uint32_t)(0x58) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x58;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx * 4;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*4) = MEM32(esi + _i*4); }
      esi += ecx * 4; edi += ecx * 4; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM32(edi - _i*4) = MEM32(esi - _i*4); esi -= ecx * 4; edi -= ecx * 4; }
    ecx = 0; /* rep movsd */
    ecx = edx;
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if (!g_df) { uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi); uint32_t _n = ecx;
      if (_d + _n <= _s || _s + _n <= _d) memcpy(_d, _s, _n);
      else { uint32_t _i; for (_i = 0; _i < _n; _i++) _d[_i] = _s[_i]; }
      esi += ecx; edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = MEM8(esi - _i); esi -= ecx; edi -= ecx; }
    ecx = 0; /* rep movsb */
    edi = MEM32(esp + 0x14);
    esi = MEM32(esp + 0x10);

loc_002BC41D: ;
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002BC423u); RECOMP_ABI_CALL(0x002CE280u, sub_002CE280); /* call 0x002CE280 */

loc_002BC423: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002BC4C2; /* je: equal / zero */

loc_002BC42F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xB (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002BC4C2; /* je: equal / zero */

loc_002BC438: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002BC4C2; /* je: equal / zero */

loc_002BC441: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x14 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002BC4C2; /* je: equal / zero */

loc_002BC446: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xF (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002BC4C2; /* je: equal / zero */

loc_002BC44B: ;
    eax = esp + 0x20;
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    edx = ecx;
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002BC45Eu); RECOMP_ABI_CALL(0x002C2860u, sub_002C2860); /* call 0x002C2860 */

loc_002BC45E: ;
    eax = MEM32(ebx);
    ecx = esp + 0x28;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x002BC46Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002BC468u); } /* indirect call */
    }

loc_002BC46B: ;
    edx = MEM32(ebx);
    eax = esp + 0x3C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x002BC478u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002BC475u); } /* indirect call */
    }

loc_002BC478: ;
    eax = MEM32(ebp + 8);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(eax + 1) = 2;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_002BC489: ;
    edx = MEM32(ebx);
    eax = esp + 0x18;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x002BC496u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002BC493u); } /* indirect call */
    }

loc_002BC496: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002BC49Eu); RECOMP_ABI_CALL(0x002CDF70u, sub_002CDF70); /* call 0x002CDF70 */

loc_002BC49E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002BC4B4; /* jne: not equal / not zero */

loc_002BC4A2: ;
    PUSH32(esp, 0x4C4B78);
    PUSH32(esp, 0x4C4B58);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002BC4B1u); RECOMP_ABI_CALL(0x002BF7B0u, sub_002BF7B0); /* call 0x002BF7B0 */

loc_002BC4B1: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002BC4B4: ;
    ecx = MEM32(ebp + 8);
    MEM8(ecx + 1) = 4;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_002BC4C2: ;
    ecx = MEM32(ebx);
    edx = esp + 0x18;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(ecx + 0x1C); PUSH32(esp, 0x002BC4CFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002BC4CCu); } /* indirect call */
    }

loc_002BC4CF: ;
    eax = MEM32(ebp + 8);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(eax + 1) = 2;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_002BC4E0: ;
    ecx = MEM32(ebx);
    edx = esp + 0x18;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(ecx + 0x1C); PUSH32(esp, 0x002BC4EDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002BC4EAu); } /* indirect call */
    }

loc_002BC4ED: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_002BC500
 * Original: 0x002BC500 - 0x002BC5C1 (193 bytes, 80 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002BC500(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002BC500: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    ecx = MEM32(esi + 4);
    eax = MEM32(esi + 0xC);
    PUSH32(esp, edi);
    edi = esi + 0xC;
    PUSH32(esp, ecx);
    MEM32(esp + 0x14) = eax;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x002BC51Cu); RECOMP_ABI_CALL(0x002CE2A0u, sub_002CE2A0); /* call 0x002CE2A0 */

loc_002BC51C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_002BC54F; /* jle: less or equal (signed <=) */

loc_002BC523: ;
    PUSH32(esp, ebx);
    ebx = esi + 0x1C;

loc_002BC527: ;
    eax = MEM32(edi);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x4000);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x002BC537u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002BC534u); } /* indirect call */
    }

loc_002BC537: ;
    eax = MEM32(esi + 4);
    PUSH32(esp, eax);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x002BC547u); RECOMP_ABI_CALL(0x002CE2A0u, sub_002CE2A0); /* call 0x002CE2A0 */

loc_002BC547: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002BC527; /* jl: less (signed <) */

loc_002BC54E: ;
    POP32(esp, ebx);

loc_002BC54F: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002BC559u); RECOMP_ABI_CALL(0x002C3600u, sub_002C3600); /* call 0x002C3600 */

loc_002BC559: ;
    ecx = eax;
    eax = MEM32(esi + 0x1C);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(esp + 0x18);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    MEM32(edx) = eax;
    eax = MEM32(esi + 0x20);
    ecx = MEM32(esi + 0x38);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002BC57F; /* jl: less (signed <) */

loc_002BC57D: ;
    eax = ecx;

loc_002BC57F: ;
    ecx = MEM32(esp + 0x18);
    MEM32(ecx) = eax;
    eax = MEM32(esi + 0x3C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002BC5A7; /* jl: less (signed <) */

loc_002BC58C: ;
    ecx = MEM32(esi + 0x40);
    edx = MEM32(esp + 0x1C);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(edx) = eax;
    ecx = MEM32(esi + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002BC5A0u); RECOMP_ABI_CALL(0x002CE270u, sub_002CE270); /* call 0x002CE270 */

loc_002BC5A0: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_002BC5A7: ;
    eax = MEM32(esp + 0x1C);
    MEM32(eax) = 0x1FFFFFFF;
    ecx = MEM32(esi + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002BC5BAu); RECOMP_ABI_CALL(0x002CE270u, sub_002CE270); /* call 0x002CE270 */

loc_002BC5BA: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_002BC5D0
 * Original: 0x002BC5D0 - 0x002BC72A (346 bytes, 135 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002BC5D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002BC5D0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    ebx = MEM32(esi + 8);
    PUSH32(esp, edi);
    edi = MEM32(esi + 4);
    PUSH32(esp, edi);
    MEM32(esp + 0x20) = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002BC5EFu); RECOMP_ABI_CALL(0x002CE350u, sub_002CE350); /* call 0x002CE350 */

loc_002BC5EF: ;
    PUSH32(esp, edi);
    MEM32(esp + 0x18) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002BC5F9u); RECOMP_ABI_CALL(0x002CE770u, sub_002CE770); /* call 0x002CE770 */

loc_002BC5F9: ;
    PUSH32(esp, edi);
    MEM32(esp + 0x24) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002BC603u); RECOMP_ABI_CALL(0x002CE780u, sub_002CE780); /* call 0x002CE780 */

loc_002BC603: ;
    edx = MEM32(esi + 0x34);
    ecx = eax;
    eax = MEM32(esp + 0x1C);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    MEM32(esp + 0x14) = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_002BC61D; /* jl: less (signed <) */

loc_002BC619: ;
    MEM32(esp + 0x14) = eax;

loc_002BC61D: ;
    edx = MEM32(esp + 0x18);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    eax = esi + 0x14;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002BC635u); RECOMP_ABI_CALL(0x002C2860u, sub_002C2860); /* call 0x002C2860 */

loc_002BC635: ;
    ecx = MEM32(ebx);
    edx = esp + 0x30;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(ecx + 0x20); PUSH32(esp, 0x002BC642u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002BC63Fu); } /* indirect call */
    }

loc_002BC642: ;
    eax = MEM32(ebx);
    ecx = esp + 0x44;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x002BC64Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002BC64Cu); } /* indirect call */
    }

loc_002BC64F: ;
    edx = MEM32(esi + 4);
    PUSH32(esp, edx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002BC65Au); RECOMP_ABI_CALL(0x002CE2A0u, sub_002CE2A0); /* call 0x002CE2A0 */

loc_002BC65A: ;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_002BC6EA; /* jle: less or equal (signed <=) */

loc_002BC665: ;
    eax = esi + 0x1C;
    edi = esi + 0xC;
    MEM32(esp + 0x10) = eax;
    /* nop */

loc_002BC670: ;
    eax = MEM32(esp + 0x14);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    edx = esp + 0x24;
    PUSH32(esp, edx);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002BC68Bu); RECOMP_ABI_CALL(0x002C2860u, sub_002C2860); /* call 0x002C2860 */

loc_002BC68B: ;
    eax = MEM32(esi + 0x50);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002BC6A9; /* je: equal / zero */

loc_002BC695: ;
    ecx = MEM32(esp + 0x24);
    edx = MEM32(esp + 0x20);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x54);
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x002BC6A6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002BC6A4u); } /* indirect call */
    }

loc_002BC6A6: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002BC6A9: ;
    eax = MEM32(edi);
    edx = MEM32(eax);
    ecx = esp + 0x20;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x002BC6B8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002BC6B5u); } /* indirect call */
    }

loc_002BC6B8: ;
    eax = MEM32(edi);
    edx = MEM32(eax);
    ecx = esp + 0x34;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x002BC6C7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002BC6C4u); } /* indirect call */
    }

loc_002BC6C7: ;
    ecx = MEM32(esp + 0x28);
    edx = MEM32(esi + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x2C) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002BC6DFu); RECOMP_ABI_CALL(0x002CE2A0u, sub_002CE2A0); /* call 0x002CE2A0 */

loc_002BC6DF: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002BC670; /* jl: less (signed <) */

loc_002BC6E6: ;
    edi = MEM32(esp + 0x1C);

loc_002BC6EA: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esi + 0x2C);
    ebx = MEM32(esi + 0x30);
    edx = MEM32(esi + 0x34);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x2C) = ecx;
    ecx = MEM32(esp + 0x18);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x30) = ebx;
    ebx = MEM32(esi + 0x40);
    MEM32(esi + 0x34) = edx;
    edx = MEM32(esi + 0x44);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    MEM32(esi + 0x40) = ebx;
    MEM32(esi + 0x44) = edx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002BC720u); RECOMP_ABI_CALL(0x002CE740u, sub_002CE740); /* call 0x002CE740 */

loc_002BC720: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_002BC730
 * Original: 0x002BC730 - 0x002BC775 (69 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BC730(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002BC730: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = MEM32(esi + 4);
    PUSH32(esp, edi);
    PUSH32(esp, 0x002BC73Cu); RECOMP_ABI_CALL(0x002CE350u, sub_002CE350); /* call 0x002CE350 */

loc_002BC73C: ;
    PUSH32(esp, edi);
    ebx = eax;
    PUSH32(esp, 0x002BC744u); RECOMP_ABI_CALL(0x002CE770u, sub_002CE770); /* call 0x002CE770 */

loc_002BC744: ;
    PUSH32(esp, edi);
    ebp = eax;
    PUSH32(esp, 0x002BC74Cu); RECOMP_ABI_CALL(0x002CE780u, sub_002CE780); /* call 0x002CE780 */

loc_002BC74C: ;
    edx = MEM32(esi + 0x34);
    ecx = ebx;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002BC75C; /* jl: less (signed <) */

loc_002BC75A: ;
    eax = ecx;

loc_002BC75C: ;
    edi = MEM32(esi + 0x2C);
    ecx = MEM32(esi + 0x30);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x2C) = edi;
    POP32(esp, edi);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebp;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebp);
    MEM32(esi + 0x30) = ecx;
    MEM32(esi + 0x34) = edx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002BC780
 * Original: 0x002BC780 - 0x002BC872 (242 bytes, 100 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002BC780(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002BC780: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    ebx = MEM32(edi + 0xA0);
    SET_LO8(eax, MEM8(edi + 2));
    ebx = ebx << 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_002BC7E7; /* jle: less or equal (signed <=) */

loc_002BC7A0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0xC;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002BC7A3: ;
    eax = MEM32(edi);
    ecx = MEM32(eax);
    edx = esp + 0x18;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, 0x7FFFFFFF);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 0x18); PUSH32(esp, 0x002BC7B7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002BC7B4u); } /* indirect call */
    }

loc_002BC7B7: ;
    eax = MEM32(esp + 0x2C);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002BC7C4; /* jl: less (signed <) */

loc_002BC7C2: ;
    ebx = eax;

loc_002BC7C4: ;
    eax = MEM32(edi);
    ecx = MEM32(eax);
    edx = esp + 0x18;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 0x1C); PUSH32(esp, 0x002BC7D3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002BC7D0u); } /* indirect call */
    }

loc_002BC7D3: ;
    eax = MEM32(ebp + 8);
    ecx = (uint32_t)(int32_t)SMEM8(eax + 2);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002BC7A3; /* jl: less (signed <) */

loc_002BC7E5: ;
    edi = eax;

loc_002BC7E7: ;
    eax = ebx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ebx = eax + eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    MEM32(esp + 0x14) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_002BC86B; /* jle: less or equal (signed <=) */

loc_002BC7F9: ;
    SET_LO8(ecx, MEM8(edi + 2));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    MEM32(esp + 0x10) = 0;
    if (CMP_LE(_fas, _fbs)) goto loc_002BC865; /* jle: less or equal (signed <=) */

loc_002BC808: ;
    esi = edi + 0xC;
    goto loc_002BC810;

    /* nop */

loc_002BC810: ;
    eax = MEM32(esi);
    edx = MEM32(eax);
    ecx = esp + 0x18;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x002BC820u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002BC81Du); } /* indirect call */
    }

loc_002BC820: ;
    edi = MEM32(esp + 0x28);
    ecx = ebx;
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
    edx = esp + 0x28;
    PUSH32(esp, edx);
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = LO8(eax); edi -= ecx; }
    ecx = 0; /* rep stosb */
    eax = MEM32(esi);
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 0x20); PUSH32(esp, 0x002BC845u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002BC842u); } /* indirect call */
    }

loc_002BC845: ;
    ecx = MEM32(ebp + 8);
    eax = MEM32(esp + 0x2C);
    edx = (uint32_t)(int32_t)SMEM8(ecx + 2);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_002BC810; /* jl: less (signed <) */

loc_002BC85F: ;
    eax = MEM32(esp + 0x14);
    edi = ecx;

loc_002BC865: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(edi + 0xA0) = MEM32(edi + 0xA0) - eax;
    _fa = (uint32_t)(MEM32(edi + 0xA0)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_002BC86B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_002BC880
 * Original: 0x002BC880 - 0x002BC954 (212 bytes, 85 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002BC880(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002BC880: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    SET_LO8(eax, MEM8(edi + 2));
    PUSH32(esp, ebx);
    ebx = MEM32(edi + 0xA4);
    ebx = ebx << 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    PUSH32(esp, esi);
    MEM32(esp + 0xC) = 0;
    if (CMP_LE(_fas, _fbs)) goto loc_002BC8EC; /* jle: less or equal (signed <=) */

loc_002BC8A2: ;
    esi = edi + 0xC;

loc_002BC8A5: ;
    eax = MEM32(esi);
    ecx = MEM32(eax);
    edx = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, 0x7FFFFFFF);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 0x18); PUSH32(esp, 0x002BC8B9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002BC8B6u); } /* indirect call */
    }

loc_002BC8B9: ;
    eax = MEM32(esp + 0x24);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002BC8C6; /* jl: less (signed <) */

loc_002BC8C4: ;
    ebx = eax;

loc_002BC8C6: ;
    eax = MEM32(esi);
    ecx = MEM32(eax);
    edx = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 0x1C); PUSH32(esp, 0x002BC8D5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002BC8D2u); } /* indirect call */
    }

loc_002BC8D5: ;
    eax = MEM32(esp + 0x18);
    ecx = (uint32_t)(int32_t)SMEM8(edi + 2);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0xC) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_002BC8A5; /* jl: less (signed <) */

loc_002BC8EC: ;
    eax = ebx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ecx = eax + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esp + 0xC) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_002BC94E; /* jle: less or equal (signed <=) */

loc_002BC8FE: ;
    SET_LO8(ecx, MEM8(edi + 2));
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_002BC948; /* jle: less or equal (signed <=) */

loc_002BC907: ;
    esi = edi + 0xC;
    /* nop */

loc_002BC910: ;
    eax = MEM32(esi);
    edx = MEM32(eax);
    ecx = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x10);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ecx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x002BC926u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002BC923u); } /* indirect call */
    }

loc_002BC926: ;
    eax = MEM32(esi);
    edx = MEM32(eax);
    ecx = esp + 0x20;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x002BC935u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002BC932u); } /* indirect call */
    }

loc_002BC935: ;
    edx = (uint32_t)(int32_t)SMEM8(edi + 2);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002BC910; /* jl: less (signed <) */

loc_002BC944: ;
    eax = MEM32(esp + 0xC);

loc_002BC948: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(edi + 0xA4) = MEM32(edi + 0xA4) - eax;
    _fa = (uint32_t)(MEM32(edi + 0xA4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_002BC94E: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_002BC960
 * Original: 0x002BC960 - 0x002BC968 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BC960(void)
{

loc_002BC960: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0x30);
    esp += 4; return; /* ret */

}

/**
 * sub_002BC970
 * Original: 0x002BC970 - 0x002BC978 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BC970(void)
{

loc_002BC970: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0x2C);
    esp += 4; return; /* ret */

}

/**
 * sub_002BC980
 * Original: 0x002BC980 - 0x002BC990 (16 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BC980(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002BC980: ;
    edx = MEM32(esp + 4);
    eax = MEM32(edx + 4);
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_002CE790(); return; /* tail jmp 0x002CE790 */

}

/**
 * sub_002BC990
 * Original: 0x002BC990 - 0x002BC99C (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BC990(void)
{

loc_002BC990: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    MEM32(ecx + 0x34) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_002BC9A0
 * Original: 0x002BC9A0 - 0x002BC9A8 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BC9A0(void)
{

loc_002BC9A0: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0x34);
    esp += 4; return; /* ret */

}

/**
 * sub_002BC9B0
 * Original: 0x002BC9B0 - 0x002BC9BF (15 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BC9B0(void)
{

loc_002BC9B0: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    MEM32(ecx + 0x9C) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_002BC9C0
 * Original: 0x002BC9C0 - 0x002BC9CB (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BC9C0(void)
{

loc_002BC9C0: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0x9C);
    esp += 4; return; /* ret */

}

/**
 * sub_002BC9D0
 * Original: 0x002BC9D0 - 0x002BC9E0 (16 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BC9D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002BC9D0: ;
    ecx = MEM32(esp + 4);
    edx = MEM32(ecx + 4);
    MEM32(esp + 4) = edx;
    g_seh_ebp = ebp; sub_002CE4B0(); return; /* tail jmp 0x002CE4B0 */

}

/**
 * sub_002BC9E0
 * Original: 0x002BC9E0 - 0x002BC9E5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BC9E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002BC9E0: ;
    g_seh_ebp = ebp; sub_002CE510(); return; /* tail jmp 0x002CE510 */

}

/**
 * sub_002BC9F0
 * Original: 0x002BC9F0 - 0x002BCA00 (16 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BC9F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002BC9F0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 4);
    MEM32(esp + 4) = ecx;
    g_seh_ebp = ebp; sub_002CE550(); return; /* tail jmp 0x002CE550 */

}

/**
 * sub_002BCA10
 * Original: 0x002BCA10 - 0x002BCA20 (16 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BCA10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002BCA10: ;
    ecx = MEM32(esp + 4);
    edx = MEM32(ecx + 4);
    MEM32(esp + 4) = edx;
    g_seh_ebp = ebp; sub_002CE190(); return; /* tail jmp 0x002CE190 */

}

/**
 * sub_002BCA20
 * Original: 0x002BCA20 - 0x002BCA50 (48 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BCA20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002BCA20: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002BCA26u); RECOMP_ABI_CALL(0x002BEA50u, sub_002BEA50); /* call 0x002BEA50 */

loc_002BCA26: ;
    esi = MEM32(esp + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    eax = MEM32(esp + 8);
    if (CMP_LE(_fas, _fbs)) goto loc_002BCA41; /* jle: less or equal (signed <=) */

loc_002BCA32: ;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(eax + 0xA0) = MEM32(eax + 0xA0) + esi;
    _fa = (uint32_t)(MEM32(eax + 0xA0)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x002BCA3Du); RECOMP_ABI_CALL(0x002BEA60u, sub_002BEA60); /* call 0x002BEA60 */

loc_002BCA3D: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_002BCA41: ;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(eax + 0xA4) = MEM32(eax + 0xA4) - esi;
    _fa = (uint32_t)(MEM32(eax + 0xA4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0x002BCA4Cu); RECOMP_ABI_CALL(0x002BEA60u, sub_002BEA60); /* call 0x002BEA60 */

loc_002BCA4C: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002BCA50
 * Original: 0x002BCA50 - 0x002BCA63 (19 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BCA50(void)
{

loc_002BCA50: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    edx = MEM32(esp + 0xC);
    MEM32(eax + 0x50) = ecx;
    MEM32(eax + 0x54) = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_002BCA70
 * Original: 0x002BCA70 - 0x002BCA83 (19 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BCA70(void)
{

loc_002BCA70: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    edx = MEM32(esp + 0xC);
    MEM32(eax + 0x48) = ecx;
    MEM32(eax + 0x4C) = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_002BCA90
 * Original: 0x002BCA90 - 0x002BCA9C (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BCA90(void)
{

loc_002BCA90: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    MEM32(ecx + 0x3C) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_002BCAA0
 * Original: 0x002BCAA0 - 0x002BCAA8 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BCAA0(void)
{

loc_002BCAA0: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0x3C);
    esp += 4; return; /* ret */

}

/**
 * sub_002BCAB0
 * Original: 0x002BCAB0 - 0x002BCABC (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BCAB0(void)
{

loc_002BCAB0: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    MEM32(ecx + 0x40) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_002BCAC0
 * Original: 0x002BCAC0 - 0x002BCAC8 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BCAC0(void)
{

loc_002BCAC0: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0x40);
    esp += 4; return; /* ret */

}

/**
 * sub_002BCAD0
 * Original: 0x002BCAD0 - 0x002BCADC (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BCAD0(void)
{

loc_002BCAD0: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    MEM32(ecx + 0x44) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_002BCAE0
 * Original: 0x002BCAE0 - 0x002BCAE8 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BCAE0(void)
{

loc_002BCAE0: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0x44);
    esp += 4; return; /* ret */

}

/**
 * sub_002BCAF0
 * Original: 0x002BCAF0 - 0x002BCB00 (16 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BCAF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002BCAF0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 4);
    MEM32(esp + 4) = ecx;
    g_seh_ebp = ebp; sub_002CE280(); return; /* tail jmp 0x002CE280 */

}

/**
 * sub_002BCB00
 * Original: 0x002BCB00 - 0x002BCB10 (16 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BCB00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002BCB00: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 4);
    MEM32(esp + 4) = ecx;
    g_seh_ebp = ebp; sub_002CE290(); return; /* tail jmp 0x002CE290 */

}

/**
 * sub_002BCB10
 * Original: 0x002BCB10 - 0x002BCB20 (16 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BCB10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002BCB10: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 4);
    MEM32(esp + 4) = ecx;
    g_seh_ebp = ebp; sub_002CE2A0(); return; /* tail jmp 0x002CE2A0 */

}

/**
 * sub_002BCB20
 * Original: 0x002BCB20 - 0x002BCB30 (16 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BCB20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002BCB20: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 4);
    MEM32(esp + 4) = ecx;
    g_seh_ebp = ebp; sub_002CE2D0(); return; /* tail jmp 0x002CE2D0 */

}

/**
 * sub_002BCB30
 * Original: 0x002BCB30 - 0x002BCB40 (16 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BCB30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002BCB30: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 4);
    MEM32(esp + 4) = ecx;
    g_seh_ebp = ebp; sub_002CE330(); return; /* tail jmp 0x002CE330 */

}

/**
 * sub_002BCB50
 * Original: 0x002BCB50 - 0x002BCB60 (16 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BCB50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002BCB50: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 4);
    MEM32(esp + 4) = ecx;
    g_seh_ebp = ebp; sub_002CE350(); return; /* tail jmp 0x002CE350 */

}

/**
 * sub_002BCB70
 * Original: 0x002BCB70 - 0x002BCB80 (16 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BCB70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002BCB70: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 4);
    MEM32(esp + 4) = ecx;
    g_seh_ebp = ebp; sub_002CE380(); return; /* tail jmp 0x002CE380 */

}

/**
 * sub_002BCB90
 * Original: 0x002BCB90 - 0x002BCBA0 (16 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BCB90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002BCB90: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 4);
    MEM32(esp + 4) = ecx;
    g_seh_ebp = ebp; sub_002CE390(); return; /* tail jmp 0x002CE390 */

}

/**
 * sub_002BCBA0
 * Original: 0x002BCBA0 - 0x002BCBB5 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BCBA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002BCBA0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002BCBA9; /* jne: not equal / not zero */

loc_002BCBA8: ;
    esp += 4; return; /* ret */

loc_002BCBA9: ;
    eax = MEM32(eax + 4);
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_002CE3A0(); return; /* tail jmp 0x002CE3A0 */

}

/**
 * sub_002BCBC0
 * Original: 0x002BCBC0 - 0x002BCBD0 (16 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BCBC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002BCBC0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 4);
    MEM32(esp + 4) = ecx;
    g_seh_ebp = ebp; sub_002CE3B0(); return; /* tail jmp 0x002CE3B0 */

}

/**
 * sub_002BCBD0
 * Original: 0x002BCBD0 - 0x002BCBE0 (16 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BCBD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002BCBD0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 4);
    MEM32(esp + 4) = ecx;
    g_seh_ebp = ebp; sub_002CE3C0(); return; /* tail jmp 0x002CE3C0 */

}

/**
 * sub_002BCBF0
 * Original: 0x002BCBF0 - 0x002BCC22 (50 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BCBF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002BCBF0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002BCBFEu); RECOMP_ABI_CALL(0x002CE3D0u, sub_002CE3D0); /* call 0x002CE3D0 */

loc_002BCBFE: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_002BCC1D; /* jle: less or equal (signed <=) */

loc_002BCC05: ;
    SET_LO8(eax, MEM8(esi + 1));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 2 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002BCC10; /* je: equal / zero */

loc_002BCC0C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 3 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002BCC1D; /* jne: not equal / not zero */

loc_002BCC10: ;
    ecx = MEM32(esi + 4);
    POP32(esp, esi);
    MEM32(esp + 4) = ecx;
    g_seh_ebp = ebp; sub_002CE3E0(); return; /* tail jmp 0x002CE3E0 */

loc_002BCC1D: ;
    SET_LO16(eax, 0); /* xor self */
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002BCC30
 * Original: 0x002BCC30 - 0x002BCC69 (57 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BCC30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002BCC30: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002BCC3Eu); RECOMP_ABI_CALL(0x002CE3D0u, sub_002CE3D0); /* call 0x002CE3D0 */

loc_002BCC3E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_002BCC63; /* jle: less or equal (signed <=) */

loc_002BCC45: ;
    SET_LO8(eax, MEM8(esi + 1));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 2 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002BCC50; /* je: equal / zero */

loc_002BCC4C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 3 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002BCC63; /* jne: not equal / not zero */

loc_002BCC50: ;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esi + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x002BCC5Eu); RECOMP_ABI_CALL(0x002CE3F0u, sub_002CE3F0); /* call 0x002CE3F0 */

loc_002BCC5E: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_002BCC63: ;
    SET_LO16(eax, 0xFF80);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002BCC70
 * Original: 0x002BCC70 - 0x002BCCA1 (49 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BCC70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002BCC70: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002BCC7Eu); RECOMP_ABI_CALL(0x002CE3D0u, sub_002CE3D0); /* call 0x002CE3D0 */

loc_002BCC7E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_002BCC9D; /* jle: less or equal (signed <=) */

loc_002BCC85: ;
    SET_LO8(eax, MEM8(esi + 1));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 2 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002BCC90; /* je: equal / zero */

loc_002BCC8C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 3 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002BCC9D; /* jne: not equal / not zero */

loc_002BCC90: ;
    ecx = MEM32(esi + 4);
    POP32(esp, esi);
    MEM32(esp + 4) = ecx;
    g_seh_ebp = ebp; sub_002CE410(); return; /* tail jmp 0x002CE410 */

loc_002BCC9D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002BCCB0
 * Original: 0x002BCCB0 - 0x002BCCBB (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BCCB0(void)
{

loc_002BCCB0: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0x98);
    esp += 4; return; /* ret */

}

/**
 * sub_002BCCC0
 * Original: 0x002BCCC0 - 0x002BCCD0 (16 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BCCC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002BCCC0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 4);
    MEM32(esp + 4) = ecx;
    g_seh_ebp = ebp; sub_002CE2C0(); return; /* tail jmp 0x002CE2C0 */

}

/**
 * sub_002BCCD0
 * Original: 0x002BCCD0 - 0x002BCCD8 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BCCD0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002BCCD0: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0x58) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x58;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002BCCE0
 * Original: 0x002BCCE0 - 0x002BCCF0 (16 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BCCE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002BCCE0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 4);
    MEM32(esp + 4) = ecx;
    g_seh_ebp = ebp; sub_002CE420(); return; /* tail jmp 0x002CE420 */

}

/**
 * sub_002BCCF0
 * Original: 0x002BCCF0 - 0x002BCD00 (16 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BCCF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002BCCF0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 4);
    MEM32(esp + 4) = ecx;
    g_seh_ebp = ebp; sub_002CE460(); return; /* tail jmp 0x002CE460 */

}

/**
 * sub_002BCD00
 * Original: 0x002BCD00 - 0x002BCE2E (302 bytes, 114 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BCD00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002BCD00: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, ebp);
    ebp = MEM32(eax);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = 0x78D008;
    /* nop */

loc_002BCD10: ;
    SET_LO8(ecx, MEM8(eax + -168));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002BCD4F; /* je: equal / zero */

loc_002BCD1A: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002BCD44; /* je: equal / zero */

loc_002BCD1F: ;
    SET_LO8(ecx, MEM8(eax + 0xA8));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002BCD47; /* je: equal / zero */

loc_002BCD29: ;
    SET_LO8(ecx, MEM8(eax + 0x150));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002BCD4C; /* je: equal / zero */

loc_002BCD33: ;
    _fb = (uint32_t)(0x2A0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x2A0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x78DA88) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x78DA88 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002BCD10; /* jl: less (signed <) */

loc_002BCD42: ;
    goto loc_002BCD4F;

loc_002BCD44: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_002BCD4F;

loc_002BCD47: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_002BCD4F;

loc_002BCD4C: ;
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 3;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002BCD4F: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x10 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002BCD59; /* jne: not equal / not zero */

loc_002BCD54: ;
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_002BCD59: ;
    esi = (uint32_t)((int32_t)esi * (int32_t)0xA8);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    _fb = (uint32_t)(0x78CF60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x78CF60;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x002BCD6Du); RECOMP_ABI_CALL(0x002C3600u, sub_002C3600); /* call 0x002C3600 */

loc_002BCD6D: ;
    PUSH32(esp, ebp);
    ebx = eax;
    PUSH32(esp, 0x002BCD75u); RECOMP_ABI_CALL(0x002C3660u, sub_002C3660); /* call 0x002C3660 */

loc_002BCD75: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = eax;
    PUSH32(esp, ebp);
    edi = (uint32_t)(((int32_t)(int32_t)(edi)) >> ((1) & 31u));
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    PUSH32(esp, 0x002BCD82u); RECOMP_ABI_CALL(0x002C36C0u, sub_002C36C0); /* call 0x002C36C0 */

loc_002BCD82: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x30);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x002BCD96u); RECOMP_ABI_CALL(0x002CEC50u, sub_002CEC50); /* call 0x002CEC50 */

loc_002BCD96: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(esi + 4) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_002BCDA9; /* jne: not equal / not zero */

loc_002BCDA2: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_002BCDA9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x2BC500);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002BCDB5u); RECOMP_ABI_CALL(0x002CE230u, sub_002CE230); /* call 0x002CE230 */

loc_002BCDB5: ;
    ecx = MEM32(esp + 0x20);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    MEM32(esi + 8) = ecx;
    MEM8(esi + 2) = LO8(ebx);
    if (CMP_LE(_fas, _fbs)) goto loc_002BCDE1; /* jle: less or equal (signed <=) */

loc_002BCDC8: ;
    ecx = esi + 0xC;
    goto loc_002BCDD0;

    /* nop */

loc_002BCDD0: ;
    edx = MEM32(esp + 0x1C);
    edx = MEM32(edx + eax * 4);
    MEM32(ecx) = edx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002BCDD0; /* jl: less (signed <) */

loc_002BCDE1: ;
    MEM32(esi + 0x98) = edi;
    MEM32(esi + 0x2C) = edi;
    MEM32(esi + 0x30) = edi;
    MEM32(esi + 0x34) = edi;
    MEM32(esi + 0x40) = edi;
    MEM32(esi + 0x44) = edi;
    MEM32(esi + 0xA0) = edi;
    MEM32(esi + 0xA4) = edi;
    MEM32(esi + 0x48) = edi;
    MEM32(esi + 0x4C) = edi;
    MEM32(esi + 0x50) = edi;
    MEM32(esi + 0x54) = edi;
    POP32(esp, edi);
    POP32(esp, ebx);
    MEM8(esi + 1) = 0;
    MEM32(esi + 0x38) = 0x7FFFFFFF;
    MEM32(esi + 0x3C) = 0xFFFFFFFFu;
    MEM8(esi + 3) = 0;
    MEM8(esi) = 1;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_002BCE30
 * Original: 0x002BCE30 - 0x002BD067 (567 bytes, 237 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BCE30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002BCE30: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x14);
    eax = MEM32(ebx + 0x3C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, ebp);
    ebp = MEM32(ebx + 4);
    PUSH32(esp, esi);
    esi = MEM32(ebx + 8);
    MEM32(esp + 0x1C) = ebp;
    if (CMP_L(_fas, _fbs)) goto loc_002BCE60; /* jl: less (signed <) */

loc_002BCE4B: ;
    _fa = (uint32_t)(MEM32(ebx + 0x40)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x40), eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002BCE60; /* jl: less (signed <) */

loc_002BCE50: ;
    eax = MEM32(ebx + 0x48);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002BCE60; /* je: equal / zero */

loc_002BCE57: ;
    ecx = MEM32(ebx + 0x4C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x002BCE5Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002BCE5Bu); } /* indirect call */
    }

loc_002BCE5D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002BCE60: ;
    _fa = (uint32_t)(MEM8(ebx + 3)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebx + 3), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002BCE80; /* jne: not equal / not zero */

loc_002BCE66: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x002BCE6Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002BCE6Bu); } /* indirect call */
    }

loc_002BCE6E: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002BCE80; /* jne: not equal / not zero */

loc_002BCE75: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM8(ebx + 1) = 3;
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_002BCE80: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    edi = ebx + 0x14;
    PUSH32(esp, edi);
    PUSH32(esp, 0x7FFFFFFF);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x002BCE92u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002BCE8Fu); } /* indirect call */
    }

loc_002BCE92: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x002BCE98u); RECOMP_ABI_CALL(0x002CE280u, sub_002CE280); /* call 0x002CE280 */

loc_002BCE98: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002BCFB0; /* jne: not equal / not zero */

loc_002BCEA3: ;
    ecx = MEM32(ebx + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002BCFB0; /* jl: less (signed <) */

loc_002BCEAF: ;
    ebp = MEM32(edi);
    SET_LO16(eax, MEM16(ebp));
    SET_LO16(edx, ZX8(HI8(eax)));
    SET_HI8(edx, LO8(eax));
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(0x8001) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), 0x8001 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002BCFB0; /* jne: not equal / not zero */

loc_002BCEC6: ;
    eax = esp + 0x20;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    MEM8(ebx + 1) = 3;
    PUSH32(esp, 0x002BCED6u); RECOMP_ABI_CALL(0x002BFF90u, sub_002BFF90); /* call 0x002BFF90 */

loc_002BCED6: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002BCF11; /* jne: not equal / not zero */

loc_002BCEDD: ;
    eax = (uint32_t)(int32_t)SMEM16(esp + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebx + 0x18) (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_002BCFC7; /* jg: greater (signed >) */

loc_002BCEEB: ;
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x002BCEF8u); RECOMP_ABI_CALL(0x002C2860u, sub_002C2860); /* call 0x002C2860 */

loc_002BCEF8: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x002BCF01u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002BCEFEu); } /* indirect call */
    }

loc_002BCF01: ;
    ecx = MEM32(esi);
    edx = esp + 0x30;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(ecx + 0x1C); PUSH32(esp, 0x002BCF0Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002BCF0Bu); } /* indirect call */
    }

loc_002BCF0E: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002BCF11: ;
    eax = MEM32(ebx + 0x9C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002BD05F; /* je: equal / zero */

loc_002BCF1F: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, 0x7FFFFFFF);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x002BCF2Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002BCF2Au); } /* indirect call */
    }

loc_002BCF2D: ;
    eax = MEM32(ebx + 0x18);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002BD05F; /* je: equal / zero */

loc_002BCF3B: ;
    goto loc_002BCF40;

    /* nop */

loc_002BCF40: ;
    eax = MEM32(ebx + 0x18);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_002BCF5E; /* jle: less or equal (signed <=) */

loc_002BCF4D: ;
    eax = MEM32(edi);
    /* nop */

loc_002BCF50: ;
    _fa = (uint32_t)(MEM8(eax + ebp)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + ebp), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002BCF5E; /* jne: not equal / not zero */

loc_002BCF56: ;
    ecx = MEM32(ebx + 0x18);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002BCF50; /* jl: less (signed <) */

loc_002BCF5E: ;
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    PUSH32(esp, 0x002BCF6Bu); RECOMP_ABI_CALL(0x002C2860u, sub_002C2860); /* call 0x002C2860 */

loc_002BCF6B: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x002BCF74u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002BCF71u); } /* indirect call */
    }

loc_002BCF74: ;
    eax = MEM32(esi);
    ecx = esp + 0x30;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x002BCF81u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002BCF7Eu); } /* indirect call */
    }

loc_002BCF81: ;
    eax = MEM32(esp + 0x38);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002BD05F; /* jl: less (signed <) */

loc_002BCF90: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, 0x7FFFFFFF);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x002BCF9Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002BCF9Bu); } /* indirect call */
    }

loc_002BCF9E: ;
    eax = MEM32(ebx + 0x18);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002BCF40; /* jne: not equal / not zero */

loc_002BCFA8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_002BCFB0: ;
    eax = MEM32(ebx + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002BCFB9u); RECOMP_ABI_CALL(0x002CE350u, sub_002CE350); /* call 0x002CE350 */

loc_002BCFB9: ;
    ecx = MEM32(ebx + 0x34);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002BCFDB; /* jl: less (signed <) */

loc_002BCFC3: ;
    MEM8(ebx + 1) = 3;

loc_002BCFC7: ;
    ecx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(ecx + 0x1C); PUSH32(esp, 0x002BCFD0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002BCFCDu); } /* indirect call */
    }

loc_002BCFD0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_002BCFDB: ;
    edx = MEM32(ebx + 4);
    PUSH32(esp, edx);
    PUSH32(esp, 0x002BCFE4u); RECOMP_ABI_CALL(0x002CE330u, sub_002CE330); /* call 0x002CE330 */

loc_002BCFE4: ;
    ebp = eax;
    eax = MEM32(ebx + 0xC);
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 0x24); PUSH32(esp, 0x002BCFF1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002BCFEEu); } /* indirect call */
    }

loc_002BCFF1: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002BD011; /* jge: greater or equal (signed >=) */

loc_002BCFFD: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x002BD006u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002BD003u); } /* indirect call */
    }

loc_002BD006: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_002BD011: ;
    ebp = MEM32(esp + 0x20);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x002BD01Bu); RECOMP_ABI_CALL(0x002CE280u, sub_002CE280); /* call 0x002CE280 */

loc_002BD01B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002BD02F; /* jne: not equal / not zero */

loc_002BD023: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x002BD02Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002BD029u); } /* indirect call */
    }

loc_002BD02C: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002BD02F: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x002BD035u); RECOMP_ABI_CALL(0x002CE280u, sub_002CE280); /* call 0x002CE280 */

loc_002BD035: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x14 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002BD049; /* jne: not equal / not zero */

loc_002BD03D: ;
    ecx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(ecx + 0x1C); PUSH32(esp, 0x002BD046u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002BD043u); } /* indirect call */
    }

loc_002BD046: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002BD049: ;
    edx = MEM32(ebx + 0x18);
    eax = MEM32(edi);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x002BD056u); RECOMP_ABI_CALL(0x002CE690u, sub_002CE690); /* call 0x002CE690 */

loc_002BD056: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x002BD05Cu); RECOMP_ABI_CALL(0x002CE700u, sub_002CE700); /* call 0x002CE700 */

loc_002BD05C: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002BD05F: ;
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
 * sub_002BD070
 * Original: 0x002BD070 - 0x002BD110 (160 bytes, 61 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BD070(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002BD070: ;
    PUSH32(esp, edi);
    edi = MEM32(esi + 4);
    PUSH32(esp, edi);
    PUSH32(esp, 0x002BD07Au); RECOMP_ABI_CALL(0x002CE680u, sub_002CE680); /* call 0x002CE680 */

loc_002BD07A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002BD08A; /* jne: not equal / not zero */

loc_002BD081: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002BD087u); RECOMP_ABI_CALL(0x002BCE30u, sub_002BCE30); /* call 0x002BCE30 */

loc_002BD087: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002BD08A: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x002BD090u); RECOMP_ABI_CALL(0x002CF0F0u, sub_002CF0F0); /* call 0x002CF0F0 */

loc_002BD090: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x002BD096u); RECOMP_ABI_CALL(0x002CE680u, sub_002CE680); /* call 0x002CE680 */

loc_002BD096: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002BD0A7; /* jne: not equal / not zero */

loc_002BD09E: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002BD0A4u); RECOMP_ABI_CALL(0x002BC5D0u, sub_002BC5D0); /* call 0x002BC5D0 */

loc_002BD0A4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002BD0A7: ;
    SET_LO16(eax, MEM16(edi + 0x98));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0xA (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002BD0CC; /* je: equal / zero */

loc_002BD0B4: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0x14 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002BD0CC; /* je: equal / zero */

loc_002BD0BA: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0xB) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0xB (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002BD0CC; /* je: equal / zero */

loc_002BD0C0: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0xC (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002BD0CC; /* je: equal / zero */

loc_002BD0C6: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0xF (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002BD10E; /* jne: not equal / not zero */

loc_002BD0CC: ;
    edi = MEM32(esi + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    PUSH32(esp, 0x002BD0D7u); RECOMP_ABI_CALL(0x002CE350u, sub_002CE350); /* call 0x002CE350 */

loc_002BD0D7: ;
    PUSH32(esp, edi);
    ebx = eax;
    PUSH32(esp, 0x002BD0DFu); RECOMP_ABI_CALL(0x002CE770u, sub_002CE770); /* call 0x002CE770 */

loc_002BD0DF: ;
    PUSH32(esp, edi);
    ebp = eax;
    PUSH32(esp, 0x002BD0E7u); RECOMP_ABI_CALL(0x002CE780u, sub_002CE780); /* call 0x002CE780 */

loc_002BD0E7: ;
    edx = MEM32(esi + 0x34);
    ecx = ebx;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002BD0F7; /* jl: less (signed <) */

loc_002BD0F5: ;
    eax = ecx;

loc_002BD0F7: ;
    edi = MEM32(esi + 0x2C);
    ecx = MEM32(esi + 0x30);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebp;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebp);
    MEM32(esi + 0x2C) = edi;
    MEM32(esi + 0x30) = ecx;
    MEM32(esi + 0x34) = edx;
    POP32(esp, ebx);

loc_002BD10E: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_002BD110
 * Original: 0x002BD110 - 0x002BD16D (93 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BD110(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002BD110: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0xA0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_002BD132; /* jle: less or equal (signed <=) */

loc_002BD11F: ;
    PUSH32(esp, 0x002BD124u); RECOMP_ABI_CALL(0x002BEA50u, sub_002BEA50); /* call 0x002BEA50 */

loc_002BD124: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002BD12Au); RECOMP_ABI_CALL(0x002BC780u, sub_002BC780); /* call 0x002BC780 */

loc_002BD12A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x002BD132u); RECOMP_ABI_CALL(0x002BEA60u, sub_002BEA60); /* call 0x002BEA60 */

loc_002BD132: ;
    SET_LO8(eax, MEM8(esi + 1));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 2 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002BD140; /* jne: not equal / not zero */

loc_002BD139: ;
    PUSH32(esp, 0x002BD13Eu); RECOMP_ABI_CALL(0x002BD070u, sub_002BD070); /* call 0x002BD070 */

loc_002BD13E: ;
    goto loc_002BD14D;

loc_002BD140: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002BD14D; /* jne: not equal / not zero */

loc_002BD144: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002BD14Au); RECOMP_ABI_CALL(0x002BC2A0u, sub_002BC2A0); /* call 0x002BC2A0 */

loc_002BD14A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002BD14D: ;
    eax = MEM32(esi + 0xA4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_002BD16B; /* jle: less or equal (signed <=) */

loc_002BD157: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x002BD15Du); RECOMP_ABI_CALL(0x002BEA50u, sub_002BEA50); /* call 0x002BEA50 */

loc_002BD15D: ;
    edi = esi;
    PUSH32(esp, 0x002BD164u); RECOMP_ABI_CALL(0x002BC880u, sub_002BC880); /* call 0x002BC880 */

loc_002BD164: ;
    POP32(esp, edi);
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_002BEA60(); return; /* tail jmp 0x002BEA60 */

loc_002BD16B: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002BD170
 * Original: 0x002BD170 - 0x002BD1E0 (112 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BD170(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002BD170: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = 0x78CF60;

loc_002BD177: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002BD1CF; /* jne: not equal / not zero */

loc_002BD17C: ;
    eax = MEM32(esi + 0xA0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_002BD199; /* jle: less or equal (signed <=) */

loc_002BD186: ;
    PUSH32(esp, 0x002BD18Bu); RECOMP_ABI_CALL(0x002BEA50u, sub_002BEA50); /* call 0x002BEA50 */

loc_002BD18B: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002BD191u); RECOMP_ABI_CALL(0x002BC780u, sub_002BC780); /* call 0x002BC780 */

loc_002BD191: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x002BD199u); RECOMP_ABI_CALL(0x002BEA60u, sub_002BEA60); /* call 0x002BEA60 */

loc_002BD199: ;
    SET_LO8(eax, MEM8(esi + 1));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 2 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002BD1A7; /* jne: not equal / not zero */

loc_002BD1A0: ;
    PUSH32(esp, 0x002BD1A5u); RECOMP_ABI_CALL(0x002BD070u, sub_002BD070); /* call 0x002BD070 */

loc_002BD1A5: ;
    goto loc_002BD1B4;

loc_002BD1A7: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002BD1B4; /* jne: not equal / not zero */

loc_002BD1AB: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002BD1B1u); RECOMP_ABI_CALL(0x002BC2A0u, sub_002BC2A0); /* call 0x002BC2A0 */

loc_002BD1B1: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002BD1B4: ;
    eax = MEM32(esi + 0xA4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_002BD1CF; /* jle: less or equal (signed <=) */

loc_002BD1BE: ;
    PUSH32(esp, 0x002BD1C3u); RECOMP_ABI_CALL(0x002BEA50u, sub_002BEA50); /* call 0x002BEA50 */

loc_002BD1C3: ;
    edi = esi;
    PUSH32(esp, 0x002BD1CAu); RECOMP_ABI_CALL(0x002BC880u, sub_002BC880); /* call 0x002BC880 */

loc_002BD1CA: ;
    PUSH32(esp, 0x002BD1CFu); RECOMP_ABI_CALL(0x002BEA60u, sub_002BEA60); /* call 0x002BEA60 */

loc_002BD1CF: ;
    _fb = (uint32_t)(0xA8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xA8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x78D9E0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x78D9E0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002BD177; /* jl: less (signed <) */

loc_002BD1DD: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002BD220
 * Original: 0x002BD220 - 0x002BD2DE (190 bytes, 69 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BD220(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002BD220: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = 0x78CBD0;

loc_002BD228: ;
    SET_LO8(ecx, MEM8(eax + -48));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002BD25E; /* je: equal / zero */

loc_002BD22F: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002BD253; /* je: equal / zero */

loc_002BD234: ;
    SET_LO8(ecx, MEM8(eax + 0x30));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002BD256; /* je: equal / zero */

loc_002BD23B: ;
    SET_LO8(ecx, MEM8(eax + 0x60));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002BD25B; /* je: equal / zero */

loc_002BD242: ;
    _fb = (uint32_t)(0xC0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x78CED0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x78CED0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002BD228; /* jl: less (signed <) */

loc_002BD251: ;
    goto loc_002BD25E;

loc_002BD253: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_002BD25E;

loc_002BD256: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_002BD25E;

loc_002BD25B: ;
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 3;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002BD25E: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x10 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002BD267; /* jne: not equal / not zero */

loc_002BD263: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_002BD267: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x002BD26Du); RECOMP_ABI_CALL(0x002BEA50u, sub_002BEA50); /* call 0x002BEA50 */

loc_002BD26D: ;
    ebx = MEM32(esp + 0xC);
    esi = esi + esi * 2;
    esi = esi << 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x78CBA0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x78CBA0;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    MEM8(esi + 2) = LO8(ebx);
    if (CMP_LE(_fas, _fbs)) goto loc_002BD2B1; /* jle: less or equal (signed <=) */

loc_002BD284: ;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    eax = esi + 0xC;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = ebx;

loc_002BD295: ;
    ebp = MEM32(edi + ecx);
    MEM32(eax + -8) = ebp;
    ebp = MEM32(ecx);
    MEM32(eax) = ebp;
    MEM32(eax + 8) = 0;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_002BD295; /* jne: not equal / not zero */

loc_002BD2AF: ;
    POP32(esp, edi);
    POP32(esp, ebp);

loc_002BD2B1: ;
    eax = 0x3DCCCCCD;
    MEM8(esi + 1) = 0;
    MEM32(esi + 0x2C) = 0;
    MEM32(esi + 0x1C) = ebx;
    MEM32(esi + 0x20) = 0xAC44;
    MEM32(esi + 0x24) = eax;
    MEM32(esi + 0x28) = eax;
    MEM8(esi) = 1;
    PUSH32(esp, 0x002BD2D9u); RECOMP_ABI_CALL(0x002BEA60u, sub_002BEA60); /* call 0x002BEA60 */

loc_002BD2D9: ;
    POP32(esp, ebx);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002BD2E0
 * Original: 0x002BD2E0 - 0x002BD2FF (31 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BD2E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002BD2E0: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002BD2FD; /* je: equal / zero */

loc_002BD2E9: ;
    PUSH32(esp, 0x002BD2EEu); RECOMP_ABI_CALL(0x002BEA50u, sub_002BEA50); /* call 0x002BEA50 */

loc_002BD2EE: ;
    ecx = 0xC;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    POP32(esp, edi);
    g_seh_ebp = ebp; sub_002BEA60(); return; /* tail jmp 0x002BEA60 */

loc_002BD2FD: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_002BD300
 * Original: 0x002BD300 - 0x002BD309 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BD300(void)
{

loc_002BD300: ;
    eax = MEM32(esp + 4);
    eax = (uint32_t)(int32_t)SMEM8(eax + 1);
    esp += 4; return; /* ret */

}

/**
 * sub_002BD310
 * Original: 0x002BD310 - 0x002BD446 (310 bytes, 126 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002BD310(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002BD310: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    SET_LO8(ecx, MEM8(ebx + 2));
    PUSH32(esp, esi);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    PUSH32(esp, edi);
    if (CMP_LE(_fas, _fbs)) goto loc_002BD33E; /* jle: less or equal (signed <=) */

loc_002BD32A: ;
    ecx = ebx + 0x14;
    /* nop */

loc_002BD330: ;
    MEM32(ecx) = edx;
    esi = (uint32_t)(int32_t)SMEM8(ebx + 2);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002BD330; /* jl: less (signed <) */

loc_002BD33E: ;
    SET_LO8(eax, MEM8(ebx + 2));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM32(ebx + 0x2C) = edx;
    MEM32(esp + 0x10) = edx;
    if (CMP_LE(_fas, _fbs)) goto loc_002BD3BF; /* jle: less or equal (signed <=) */

loc_002BD34C: ;
    eax = ebx + 4;
    MEM32(esp + 0x14) = eax;

loc_002BD353: ;
    ecx = MEM32(esp + 0x14);
    esi = MEM32(ecx);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x002BD35Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002BD35Cu); } /* indirect call */
    }

loc_002BD35F: ;
    edi = MEM32(esi);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp + 0x18;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edi + 0x24); PUSH32(esp, 0x002BD36Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002BD36Cu); } /* indirect call */
    }

loc_002BD36F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edi + 0x18); PUSH32(esp, 0x002BD379u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002BD376u); } /* indirect call */
    }

loc_002BD379: ;
    ecx = MEM32(esp + 0x2C);
    edi = MEM32(esp + 0x28);
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
    eax = MEM32(esi);
    ecx = esp + 0x28;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x002BD39Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002BD39Bu); } /* indirect call */
    }

loc_002BD39E: ;
    edx = MEM32(esp + 0x30);
    eax = MEM32(esp + 0x2C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x30) = edx;
    edx = (uint32_t)(int32_t)SMEM8(ebx + 2);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_002BD353; /* jl: less (signed <) */

loc_002BD3BD: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002BD3BF: ;
    SET_LO8(eax, MEM8(ebx + 2));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM32(esp + 0x10) = edx;
    if (CMP_LE(_fas, _fbs)) goto loc_002BD43B; /* jle: less or equal (signed <=) */

loc_002BD3CA: ;
    eax = ebx + 0xC;
    MEM32(esp + 0x14) = eax;

loc_002BD3D1: ;
    ecx = MEM32(esp + 0x14);
    esi = MEM32(ecx);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x002BD3DDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002BD3DAu); } /* indirect call */
    }

loc_002BD3DD: ;
    edi = MEM32(esi);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp + 0x18;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edi + 0x24); PUSH32(esp, 0x002BD3EDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002BD3EAu); } /* indirect call */
    }

loc_002BD3ED: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edi + 0x18); PUSH32(esp, 0x002BD3F7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002BD3F4u); } /* indirect call */
    }

loc_002BD3F7: ;
    ecx = MEM32(esp + 0x2C);
    edi = MEM32(esp + 0x28);
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
    eax = MEM32(esi);
    ecx = esp + 0x28;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x002BD41Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002BD419u); } /* indirect call */
    }

loc_002BD41C: ;
    edx = MEM32(esp + 0x30);
    eax = MEM32(esp + 0x2C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x30) = edx;
    edx = (uint32_t)(int32_t)SMEM8(ebx + 2);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_002BD3D1; /* jl: less (signed <) */

loc_002BD43B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM8(ebx + 1) = 2;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_002BD450
 * Original: 0x002BD450 - 0x002BD459 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BD450(void)
{

loc_002BD450: ;
    eax = MEM32(esp + 4);
    MEM8(eax + 1) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_002BD460
 * Original: 0x002BD460 - 0x002BD602 (418 bytes, 156 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002BD460(void)
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

loc_002BD460: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    fp_push((double)SMEM32(esi + 0x20)); /* fild */
    PUSH32(esp, edi);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 0x24)); /* fmul dword ptr [esi + 0x24] */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002BD47Au); RECOMP_ABI_CALL(0x000EB38Cu, sub_000EB38C); /* call 0x000EB38C */

loc_002BD47A: ;
    ebx = eax;
    eax = MEM32(esi + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x24) = 0;
    if (CMP_LE(_fas, _fbs)) goto loc_002BD5F2; /* jle: less or equal (signed <=) */

loc_002BD48F: ;
    edi = esi + 0xC;

loc_002BD492: ;
    eax = MEM32(edi + -8);
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 0x24); PUSH32(esp, 0x002BD49Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002BD49Au); } /* indirect call */
    }

loc_002BD49D: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ebx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ebx)); }
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    MEM32(esp + 0x2C) = eax;
    eax = MEM32(edi);
    edx = MEM32(eax);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x002BD4B3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002BD4B0u); } /* indirect call */
    }

loc_002BD4B3: ;
    ecx = MEM32(esp + 0x30);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 0xF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((4) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    MEM32(esp + 0x18) = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_002BD4CF; /* jl: less (signed <) */

loc_002BD4CB: ;
    MEM32(esp + 0x18) = eax;

loc_002BD4CF: ;
    ecx = MEM32(esp + 0x18);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    MEM32(esp + 0x20) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_002BD5DB; /* jle: less or equal (signed <=) */

loc_002BD4E1: ;
    goto loc_002BD4E5;

loc_002BD4E3: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002BD4E5: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x10) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_002BD575; /* jle: less or equal (signed <=) */

loc_002BD4F5: ;
    esi = MEM32(esp + 0x10);
    eax = MEM32(edi + -8);
    ecx = MEM32(eax);
    edx = esp + 0x28;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = ebx;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = edx << 1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, edx);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 0x18); PUSH32(esp, 0x002BD510u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002BD50Du); } /* indirect call */
    }

loc_002BD510: ;
    eax = MEM32(esp + 0x3C);
    ecx = MEM32(esp + 0x38);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi = eax;
    esi = (uint32_t)(((int32_t)(int32_t)(esi)) >> ((1) & 31u));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_002BD551; /* jle: less or equal (signed <=) */

loc_002BD526: ;
    MEM32(esp + 0x1C) = esi;
    /* nop */

loc_002BD530: ;
    eax = (uint32_t)(int32_t)SMEM16(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002BD539; /* jge: greater or equal (signed >=) */

loc_002BD537: ;
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */

loc_002BD539: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esp + 0x14) (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_002BD543; /* jle: less or equal (signed <=) */

loc_002BD53F: ;
    MEM32(esp + 0x14) = eax;

loc_002BD543: ;
    eax = MEM32(esp + 0x1C);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x1C) = eax;
    if ((_fa != 0)) goto loc_002BD530; /* jne: not equal / not zero */

loc_002BD551: ;
    eax = MEM32(edi + -8);
    ecx = MEM32(eax);
    edx = esp + 0x28;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 0x20); PUSH32(esp, 0x002BD561u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002BD55Eu); } /* indirect call */
    }

loc_002BD561: ;
    eax = MEM32(esp + 0x1C);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_002BD4F5; /* jl: less (signed <) */

loc_002BD572: ;
    esi = MEM32(ebp + 8);

loc_002BD575: ;
    eax = MEM32(edi);
    ecx = MEM32(eax);
    edx = esp + 0x30;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 0x18); PUSH32(esp, 0x002BD586u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002BD583u); } /* indirect call */
    }

loc_002BD586: ;
    eax = MEM32(esp + 0x44);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002BD600; /* je: equal / zero */

loc_002BD591: ;
    eax = MEM32(esp + 0x30);
    ecx = MEM32(esp + 0x14);
    MEM32(eax) = ecx;
    edx = MEM32(edi + 8);
    MEM32(eax + 4) = edx;
    ecx = MEM32(esi + 0x20);
    MEM32(eax + 8) = ecx;
    ecx = esp + 0x30;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    MEM32(eax + 0xC) = ebx;
    eax = MEM32(edi);
    edx = MEM32(eax);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x002BD5B9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002BD5B6u); } /* indirect call */
    }

loc_002BD5B9: ;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(edi + 8) = MEM32(edi + 8) + ebx;
    _fa = (uint32_t)(MEM32(edi + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esi + 0x2C);
    ecx = MEM32(esp + 0x24);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0x2C) = eax;
    eax = MEM32(esp + 0x20);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x20) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_002BD4E3; /* jl: less (signed <) */

loc_002BD5DB: ;
    eax = MEM32(esp + 0x24);
    ecx = MEM32(esi + 0x1C);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x24) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_002BD492; /* jl: less (signed <) */

loc_002BD5F2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_002BD600: ;
    goto loc_002BD600;

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_002BD610
 * Original: 0x002BD610 - 0x002BD624 (20 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BD610(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002BD610: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(MEM8(eax + 1)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 1), 2 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002BD623; /* jne: not equal / not zero */

loc_002BD61A: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_002BD460(); return; /* tail jmp 0x002BD460 */

loc_002BD623: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002BD630
 * Original: 0x002BD630 - 0x002BD657 (39 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BD630(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002BD630: ;
    PUSH32(esp, esi);
    esi = 0x78CBA0;

loc_002BD636: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002BD64A; /* jne: not equal / not zero */

loc_002BD63B: ;
    _fa = (uint32_t)(MEM8(esi + 1)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 1), 2 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002BD64A; /* jne: not equal / not zero */

loc_002BD641: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002BD647u); RECOMP_ABI_CALL(0x002BD460u, sub_002BD460); /* call 0x002BD460 */

loc_002BD647: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002BD64A: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x30;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x78CEA0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x78CEA0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002BD636; /* jl: less (signed <) */

loc_002BD655: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002BD660
 * Original: 0x002BD660 - 0x002BD668 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BD660(void)
{

loc_002BD660: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0x14);
    esp += 4; return; /* ret */

}

/**
 * sub_002BD670
 * Original: 0x002BD670 - 0x002BD67C (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BD670(void)
{

loc_002BD670: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    MEM32(ecx + 0x20) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_002BD680
 * Original: 0x002BD680 - 0x002BD688 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BD680(void)
{

loc_002BD680: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0x20);
    esp += 4; return; /* ret */

}

/**
 * sub_002BD690
 * Original: 0x002BD690 - 0x002BD69C (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_002BD690(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_002BD690: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    eax = MEM32(esp + 4);
    MEMF(eax + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_002BD6A0
 * Original: 0x002BD6A0 - 0x002BD6A8 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BD6A0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_002BD6A0: ;
    eax = MEM32(esp + 4);
    fp_push(MEMF(eax + 0x24)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_002BD6B0
 * Original: 0x002BD6B0 - 0x002BD6BC (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_002BD6B0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_002BD6B0: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    eax = MEM32(esp + 4);
    MEMF(eax + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_002BD6C0
 * Original: 0x002BD6C0 - 0x002BD6C8 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BD6C0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_002BD6C0: ;
    eax = MEM32(esp + 4);
    fp_push(MEMF(eax + 0x28)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_002BD6D0
 * Original: 0x002BD6D0 - 0x002BD6DA (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BD6D0(void)
{

loc_002BD6D0: ;
    eax = MEM32(esp + 4);
    MEM32(0x51DDEC) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_002BD6E0
 * Original: 0x002BD6E0 - 0x002BD6F7 (23 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BD6E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002BD6E0: ;
    eax = MEM32(esp + 4);
    ecx = 0x28;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(0x51DDF0) = ecx;
    MEM32(0x51DDF4) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_002BD700
 * Original: 0x002BD700 - 0x002BD726 (38 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BD700(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002BD700: ;
    eax = MEM32(0x735CD4);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    MEM32(0x735CD4) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_002BD720; /* jne: not equal / not zero */

loc_002BD710: ;
    PUSH32(esp, edi);
    ecx = 0x3C0;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = 0x78B980;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    POP32(esp, edi);

loc_002BD720: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_002BD730
 * Original: 0x002BD730 - 0x002BD731 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BD730(void)
{

loc_002BD730: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002BD740
 * Original: 0x002BD740 - 0x002BD759 (25 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BD740(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002BD740: ;
    MEM32(0x735CD4) = MEM32(0x735CD4) - 1;
    _fa = (uint32_t)(MEM32(0x735CD4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_002BD758; /* jne: not equal / not zero */

loc_002BD748: ;
    PUSH32(esp, edi);
    ecx = 0x3C0;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = 0x78B980;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    POP32(esp, edi);

loc_002BD758: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002BD760
 * Original: 0x002BD760 - 0x002BD769 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BD760(void)
{

loc_002BD760: ;
    eax = MEM32(esp + 4);
    eax = (uint32_t)(int32_t)SMEM8(eax + 0x49);
    esp += 4; return; /* ret */

}

/**
 * sub_002BD770
 * Original: 0x002BD770 - 0x002BD775 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BD770(void)
{

loc_002BD770: ;
    eax = (uint32_t)(int32_t)SMEM8(eax + 1);
    esp += 4; return; /* ret */

}

/**
 * sub_002BD780
 * Original: 0x002BD780 - 0x002BD791 (17 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BD780(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002BD780: ;
    ecx = MEM32(eax + 0x14);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    MEM32(eax + 0x58) = edx;
    if (CMP_LE(_fas, _fbs)) goto loc_002BD78D; /* jle: less or equal (signed <=) */

loc_002BD78A: ;
    MEM32(eax + 0x58) = ecx;

loc_002BD78D: ;
    eax = MEM32(eax + 0x58);
    esp += 4; return; /* ret */

}

/**
 * sub_002BD7A0
 * Original: 0x002BD7A0 - 0x002BD7AE (14 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_002BD7A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002BD7A0: ;
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002BD7AB; /* je: equal / zero */

loc_002BD7A7: ;
    eax = MEM32(eax + 0x58);
    esp += 4; return; /* ret */

loc_002BD7AB: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_002BD7B0
 * Original: 0x002BD7B0 - 0x002BD7D8 (40 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BD7B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002BD7B0: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax + 0x14);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    _fb = (uint32_t)(2) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(edx, LO8(edx) + 2);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    MEM32(eax + 0x34) = ecx;
    MEM32(eax + 0x4C) = ecx;
    MEM8(eax + 1) = LO8(edx);
    MEM8(eax + 2) = LO8(ecx);
    MEM32(eax + 0x24) = ecx;
    MEM32(eax + 0x28) = ecx;
    MEM8(eax + 0x47) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_002BD7E0
 * Original: 0x002BD7E0 - 0x002BD7E7 (7 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BD7E0(void)
{

loc_002BD7E0: ;
    MEM32(eax + 0x38) = ecx;
    MEM32(eax + 0x3C) = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_002BD7F0
 * Original: 0x002BD7F0 - 0x002BD7FB (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BD7F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002BD7F0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002BD7F7; /* jge: greater or equal (signed >=) */

loc_002BD7F4: ;
    eax = MEM32(ecx + 0x14);

loc_002BD7F7: ;
    MEM32(ecx + 0x30) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_002BD800
 * Original: 0x002BD800 - 0x002BD807 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BD800(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002BD800: ;
    MEM32(0x735CE4) = MEM32(0x735CE4) + 1;
    _fa = (uint32_t)(MEM32(0x735CE4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

}

/**
 * sub_002BD810
 * Original: 0x002BD810 - 0x002BD815 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BD810(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002BD810: ;
    g_seh_ebp = ebp; sub_002C9340(); return; /* tail jmp 0x002C9340 */

}

/**
 * sub_002BD820
 * Original: 0x002BD820 - 0x002BD834 (20 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BD820(void)
{

loc_002BD820: ;
    ecx = MEM32(eax + 0x1C);
    MEM32(edx) = ecx;
    eax = MEM32(eax + 0x18);
    ecx = MEM32(esp + 4);
    MEM32(ecx) = eax;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_002BD840
 * Original: 0x002BD840 - 0x002BD844 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BD840(void)
{

loc_002BD840: ;
    eax = MEM32(eax + 4);
    esp += 4; return; /* ret */

}

/**
 * sub_002BD850
 * Original: 0x002BD850 - 0x002BD85C (12 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BD850(void)
{

loc_002BD850: ;
    MEM32(eax + 0x1C) = ecx;
    MEM32(eax + 0x18) = edx;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_002BD860
 * Original: 0x002BD860 - 0x002BD869 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BD860(void)
{

loc_002BD860: ;
    MEM32(ecx + 0x2C) = eax;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_002BD870
 * Original: 0x002BD870 - 0x002BD871 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BD870(void)
{

loc_002BD870: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002BD880
 * Original: 0x002BD880 - 0x002BD884 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BD880(void)
{

loc_002BD880: ;
    eax = MEM32(eax + 0x10);
    esp += 4; return; /* ret */

}

/**
 * sub_002BD890
 * Original: 0x002BD890 - 0x002BD894 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BD890(void)
{

loc_002BD890: ;
    eax = MEM32(eax + 0x14);
    esp += 4; return; /* ret */

}

/**
 * sub_002BD8A0
 * Original: 0x002BD8A0 - 0x002BD8AA (10 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BD8A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002BD8A0: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002BD8A6u); RECOMP_ABI_CALL(0x002CA0F0u, sub_002CA0F0); /* call 0x002CA0F0 */

loc_002BD8A6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002BD8B0
 * Original: 0x002BD8B0 - 0x002BD8B8 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BD8B0(void)
{

loc_002BD8B0: ;
    SET_LO8(eax, MEM8(esp + 4));
    MEM8(ecx + 0x44) = LO8(eax);
    esp += 4; return; /* ret */

}

/**
 * sub_002BD8C0
 * Original: 0x002BD8C0 - 0x002BD8C5 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BD8C0(void)
{

loc_002BD8C0: ;
    eax = (uint32_t)(int32_t)SMEM8(eax + 0x44);
    esp += 4; return; /* ret */

}

/**
 * sub_002BD8D0
 * Original: 0x002BD8D0 - 0x002BD8E7 (23 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BD8D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002BD8D0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002BD8DDu); RECOMP_ABI_CALL(0x002C9370u, sub_002C9370); /* call 0x002C9370 */

loc_002BD8DD: ;
    edx = MEM32(esp + 0xC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_002BD8F0
 * Original: 0x002BD8F0 - 0x002BD900 (16 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BD8F0(void)
{

loc_002BD8F0: ;
    eax = MEM32(esp + 8);
    MEM32(eax) = 0;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_002BD940
 * Original: 0x002BD940 - 0x002BD955 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BD940(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002BD940: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002BD946u); RECOMP_ABI_CALL(0x002CA0F0u, sub_002CA0F0); /* call 0x002CA0F0 */

loc_002BD946: ;
    ecx = MEM32(esp + 8);
    MEM32(ecx) = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_002BD960
 * Original: 0x002BD960 - 0x002BD96C (12 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BD960(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002BD960: ;
    edx = eax;
    edx = edx << 0xB;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ecx + 0x10) = edx;
    MEM32(ecx + 0x14) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_002BD970
 * Original: 0x002BD970 - 0x002BD976 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BD970(void)
{

loc_002BD970: ;
    MEM32(0x735CE0) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_002BD980
 * Original: 0x002BD980 - 0x002BD986 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BD980(void)
{

loc_002BD980: ;
    eax = MEM32(0x735CE0);
    esp += 4; return; /* ret */

}

/**
 * sub_002BD990
 * Original: 0x002BD990 - 0x002BD997 (7 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BD990(void)
{

loc_002BD990: ;
    ecx = MEM32(eax + 8);
    eax = MEM32(ecx + 0x4C);
    esp += 4; return; /* ret */

}

/**
 * sub_002BD9A0
 * Original: 0x002BD9A0 - 0x002BD9A5 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BD9A0(void)
{

loc_002BD9A0: ;
    eax = (uint32_t)(int32_t)SMEM8(eax + 2);
    esp += 4; return; /* ret */

}

/**
 * sub_002BD9B0
 * Original: 0x002BD9B0 - 0x002BD9B5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BD9B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002BD9B0: ;
    g_seh_ebp = ebp; sub_002BEA50(); return; /* tail jmp 0x002BEA50 */

}

/**
 * sub_002BD9C0
 * Original: 0x002BD9C0 - 0x002BD9C5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BD9C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002BD9C0: ;
    g_seh_ebp = ebp; sub_002BEA60(); return; /* tail jmp 0x002BEA60 */

}

/**
 * sub_002BD9D0
 * Original: 0x002BD9D0 - 0x002BD9DA (10 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BD9D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002BD9D0: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002BD9D6u); RECOMP_ABI_CALL(0x002BBE70u, sub_002BBE70); /* call 0x002BBE70 */

loc_002BD9D6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002BD9E0
 * Original: 0x002BD9E0 - 0x002BD9E5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BD9E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002BD9E0: ;
    g_seh_ebp = ebp; sub_002BEA70(); return; /* tail jmp 0x002BEA70 */

}

/**
 * sub_002BD9F0
 * Original: 0x002BD9F0 - 0x002BD9F5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BD9F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002BD9F0: ;
    g_seh_ebp = ebp; sub_002BEA80(); return; /* tail jmp 0x002BEA80 */

}

/**
 * sub_002BDA00
 * Original: 0x002BDA00 - 0x002BDA9B (155 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002BDA00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002BDA00: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, 0x002BDA0Au); RECOMP_ABI_CALL(0x002BEA50u, sub_002BEA50); /* call 0x002BEA50 */

loc_002BDA0A: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 0xC);
    edx = ebp;
    edx = edx & 0x800007FFu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM8(esi + 1) = 1;
    MEM8(esi + 2) = 0;
    MEM32(esi + 4) = edi;
    MEM32(esi + 8) = eax;
    MEM32(esi + 0xC) = ecx;
    MEM32(esi + 0x10) = ebp;
    if ((_fas >= 0)) goto loc_002BDA38; /* jns: not sign (positive) */

loc_002BDA30: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = edx | 0xFFFFF800u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_002BDA38: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    SET_LO8(ecx, (CMP_G(_fas, _fbs)) ? 1 : 0); /* setg */
    eax = ebp;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 0x7FF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((0xB) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(esi + 0x14) = eax;
    MEM32(esi + 0x2C) = 0x200;
    MEM32(esi + 0x58) = 0;
    MEM32(esi + 0x5C) = 0xFFFFF;
    MEM32(esi + 0x30) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_002BDA8E; /* je: equal / zero */

loc_002BDA6E: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x002BDA76u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002BDA73u); } /* indirect call */
    }

loc_002BDA76: ;
    ebp = eax;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x002BDA80u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002BDA7Du); } /* indirect call */
    }

loc_002BDA80: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x40) = eax;
    MEM32(esi + 0x18) = eax;
    MEM32(esi + 0x1C) = eax;

loc_002BDA8E: ;
    MEM8(esi + 0x44) = 0;
    MEM8(esi) = 1;
    POP32(esp, ebp);
    g_seh_ebp = ebp; sub_002BEA60(); return; /* tail jmp 0x002BEA60 */

}

/**
 * sub_002BDAA0
 * Original: 0x002BDAA0 - 0x002BDAFC (92 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BDAA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002BDAA0: ;
    edx = MEM32(0x51DDEC);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_002BDACF; /* jle: less or equal (signed <=) */

loc_002BDAAF: ;
    eax = MEM32(0x735CD8);
    eax = eax + eax * 2;
    eax = eax << 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x78B980) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x78B980;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    /* nop */

loc_002BDAC0: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    esi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_002BDACF; /* je: equal / zero */

loc_002BDAC7: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x60;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002BDAC0; /* jl: less (signed <) */

loc_002BDACF: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002BDAD7; /* jne: not equal / not zero */

loc_002BDAD3: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_002BDAD7: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x002BDAF0u); RECOMP_ABI_CALL(0x002BDA00u, sub_002BDA00); /* call 0x002BDA00 */

loc_002BDAF0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM8(esi + 3) = 1;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002BDB00
 * Original: 0x002BDB00 - 0x002BDB5C (92 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BDB00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002BDB00: ;
    edx = MEM32(0x51DDF4);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_002BDB2F; /* jle: less or equal (signed <=) */

loc_002BDB0F: ;
    eax = MEM32(0x51DDF0);
    eax = eax + eax * 2;
    eax = eax << 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x78B980) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x78B980;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    /* nop */

loc_002BDB20: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    esi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_002BDB2F; /* je: equal / zero */

loc_002BDB27: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x60;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002BDB20; /* jl: less (signed <) */

loc_002BDB2F: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002BDB37; /* jne: not equal / not zero */

loc_002BDB33: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_002BDB37: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x002BDB50u); RECOMP_ABI_CALL(0x002BDA00u, sub_002BDA00); /* call 0x002BDA00 */

loc_002BDB50: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM8(esi + 3) = 0;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002BDB60
 * Original: 0x002BDB60 - 0x002BDB81 (33 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BDB60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002BDB60: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x100) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x100 (32-bit) */
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    if (CMP_GE(_fas, _fbs)) goto loc_002BDB78; /* jge: greater or equal (signed >=) */

loc_002BDB6F: ;
    PUSH32(esp, 0x002BDB74u); RECOMP_ABI_CALL(0x002BDAA0u, sub_002BDAA0); /* call 0x002BDAA0 */

loc_002BDB74: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_002BDB78: ;
    PUSH32(esp, 0x002BDB7Du); RECOMP_ABI_CALL(0x002BDB00u, sub_002BDB00); /* call 0x002BDB00 */

loc_002BDB7D: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002BDB90
 * Original: 0x002BDB90 - 0x002BDBBE (46 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BDB90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002BDB90: ;
    PUSH32(esp, 0x002BDB95u); RECOMP_ABI_CALL(0x002BEA50u, sub_002BEA50); /* call 0x002BEA50 */

loc_002BDB95: ;
    eax = MEM32(esp + 0xC);
    edx = MEM32(esp + 4);
    ecx = edi;
    MEM32(esi + 0xC) = eax;
    eax = MEM32(esp + 8);
    ecx = ecx << 0xB;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(esi + 0x10) = ecx;
    MEM32(esi + 0x14) = edi;
    MEM32(esi + 0x50) = edx;
    MEM32(esi + 0x54) = eax;
    MEM8(esi + 0x45) = 1;
    g_seh_ebp = ebp; sub_002BEA60(); return; /* tail jmp 0x002BEA60 */

}

/**
 * sub_002BDBC0
 * Original: 0x002BDBC0 - 0x002BDBD7 (23 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BDBC0(void)
{

loc_002BDBC0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002BDBC6u); RECOMP_ABI_CALL(0x002BEA70u, sub_002BEA70); /* call 0x002BEA70 */

loc_002BDBC6: ;
    eax = MEM32(esp + 8);
    esi = (uint32_t)(int32_t)SMEM8(eax + 1);
    PUSH32(esp, 0x002BDBD3u); RECOMP_ABI_CALL(0x002BEA80u, sub_002BEA80); /* call 0x002BEA80 */

loc_002BDBD3: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002BDBE0
 * Original: 0x002BDBE0 - 0x002BDC07 (39 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BDBE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002BDBE0: ;
    PUSH32(esp, 0x002BDBE5u); RECOMP_ABI_CALL(0x002BEA70u, sub_002BEA70); /* call 0x002BEA70 */

loc_002BDBE5: ;
    eax = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    ecx = MEM32(eax + 0x14);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    MEM32(eax + 0x58) = edx;
    if (CMP_LE(_fas, _fbs)) goto loc_002BDBFA; /* jle: less or equal (signed <=) */

loc_002BDBF7: ;
    MEM32(eax + 0x58) = ecx;

loc_002BDBFA: ;
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x58);
    PUSH32(esp, 0x002BDC03u); RECOMP_ABI_CALL(0x002BEA80u, sub_002BEA80); /* call 0x002BEA80 */

loc_002BDC03: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002BDC10
 * Original: 0x002BDC10 - 0x002BDC38 (40 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BDC10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002BDC10: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002BDC16u); RECOMP_ABI_CALL(0x002BEA70u, sub_002BEA70); /* call 0x002BEA70 */

loc_002BDC16: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002BDC2D; /* je: equal / zero */

loc_002BDC21: ;
    esi = MEM32(eax + 0x58);
    PUSH32(esp, 0x002BDC29u); RECOMP_ABI_CALL(0x002BEA80u, sub_002BEA80); /* call 0x002BEA80 */

loc_002BDC29: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_002BDC2D: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x002BDC34u); RECOMP_ABI_CALL(0x002BEA80u, sub_002BEA80); /* call 0x002BEA80 */

loc_002BDC34: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002BDC40
 * Original: 0x002BDC40 - 0x002BDC7A (58 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BDC40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002BDC40: ;
    PUSH32(esp, 0x002BDC45u); RECOMP_ABI_CALL(0x002BEA50u, sub_002BEA50); /* call 0x002BEA50 */

loc_002BDC45: ;
    ecx = MEM32(esi + 0x14);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    _fb = (uint32_t)(2) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(ecx, LO8(ecx) + 2);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    MEM32(esi + 0x34) = eax;
    MEM32(esi + 0x4C) = eax;
    MEM8(esi + 1) = LO8(ecx);
    MEM8(esi + 2) = LO8(eax);
    MEM32(esi + 0x24) = eax;
    MEM32(esi + 0x28) = eax;
    MEM8(esi + 0x47) = 1;
    MEM32(esi + 0x5C) = 0xFFFFF;
    PUSH32(esp, 0x002BDC74u); RECOMP_ABI_CALL(0x002BEA60u, sub_002BEA60); /* call 0x002BEA60 */

loc_002BDC74: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_002BDC80
 * Original: 0x002BDC80 - 0x002BDCBA (58 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BDC80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002BDC80: ;
    PUSH32(esp, 0x002BDC85u); RECOMP_ABI_CALL(0x002BEA50u, sub_002BEA50); /* call 0x002BEA50 */

loc_002BDC85: ;
    ecx = MEM32(esi + 0x14);
    edx = MEM32(esp + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    _fb = (uint32_t)(2) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(ecx, LO8(ecx) + 2);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    MEM32(esi + 0x34) = eax;
    MEM32(esi + 0x4C) = eax;
    MEM8(esi + 1) = LO8(ecx);
    MEM8(esi + 2) = LO8(eax);
    MEM32(esi + 0x24) = eax;
    MEM32(esi + 0x28) = eax;
    MEM8(esi + 0x47) = 1;
    MEM32(esi + 0x5C) = edx;
    PUSH32(esp, 0x002BDCB4u); RECOMP_ABI_CALL(0x002BEA60u, sub_002BEA60); /* call 0x002BEA60 */

loc_002BDCB4: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_002BDCC0
 * Original: 0x002BDCC0 - 0x002BDCEB (43 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BDCC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002BDCC0: ;
    PUSH32(esp, 0x002BDCC5u); RECOMP_ABI_CALL(0x002BEA50u, sub_002BEA50); /* call 0x002BEA50 */

loc_002BDCC5: ;
    _fa = (uint32_t)(MEM8(esi + 1)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 1), 2 (8-bit) */
    SET_LO8(eax, 1);
    if (CMP_NE(_fa, _fb)) goto loc_002BDCE3; /* jne: not equal / not zero */

loc_002BDCCD: ;
    _fa = (uint32_t)(MEM8(esi + 2)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 2), LO8(eax) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002BDCE3; /* jne: not equal / not zero */

loc_002BDCD2: ;
    _fa = (uint32_t)(MEM8(esi + 0x47)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x47), LO8(eax) (8-bit) */
    MEM8(esi + 0x48) = LO8(eax);
    if (CMP_NE(_fa, _fb)) goto loc_002BDCE6; /* jne: not equal / not zero */

loc_002BDCDA: ;
    MEM8(esi + 0x47) = 0;
    g_seh_ebp = ebp; sub_002BEA60(); return; /* tail jmp 0x002BEA60 */

loc_002BDCE3: ;
    MEM8(esi + 1) = LO8(eax);

loc_002BDCE6: ;
    g_seh_ebp = ebp; sub_002BEA60(); return; /* tail jmp 0x002BEA60 */

}

/**
 * sub_002BDCF0
 * Original: 0x002BDCF0 - 0x002BDD0C (28 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BDCF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002BDCF0: ;
    PUSH32(esp, 0x002BDCF5u); RECOMP_ABI_CALL(0x002BEA70u, sub_002BEA70); /* call 0x002BEA70 */

loc_002BDCF5: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    edx = MEM32(esp + 0xC);
    MEM32(eax + 0x38) = ecx;
    MEM32(eax + 0x3C) = edx;
    g_seh_ebp = ebp; sub_002BEA80(); return; /* tail jmp 0x002BEA80 */

}

/**
 * sub_002BDD10
 * Original: 0x002BDD10 - 0x002BDD38 (40 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BDD10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002BDD10: ;
    PUSH32(esp, 0x002BDD15u); RECOMP_ABI_CALL(0x002BEA70u, sub_002BEA70); /* call 0x002BEA70 */

loc_002BDD15: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002BDD29; /* jl: less (signed <) */

loc_002BDD1D: ;
    ecx = MEM32(esp + 4);
    MEM32(ecx + 0x30) = eax;
    g_seh_ebp = ebp; sub_002BEA80(); return; /* tail jmp 0x002BEA80 */

loc_002BDD29: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax + 0x14);
    MEM32(eax + 0x30) = edx;
    g_seh_ebp = ebp; sub_002BEA80(); return; /* tail jmp 0x002BEA80 */

}

/**
 * sub_002BDD40
 * Original: 0x002BDD40 - 0x002BDFCA (650 bytes, 249 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BDD40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002BDD40: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x20);
    eax = MEM32(esi + 8);
    PUSH32(esp, edi);
    edi = MEM32(esi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002BDD57u); RECOMP_ABI_CALL(0x002C9370u, sub_002C9370); /* call 0x002C9370 */

loc_002BDD57: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = eax;
    PUSH32(esp, 0x002BDD61u); RECOMP_ABI_CALL(0x002BEA50u, sub_002BEA50); /* call 0x002BEA50 */

loc_002BDD61: ;
    _fa = (uint32_t)(MEM8(esi + 2)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 2), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002BDE79; /* jne: not equal / not zero */

loc_002BDD6B: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002BDE12; /* jne: not equal / not zero */

loc_002BDD74: ;
    MEM8(esi + 2) = 0;
    PUSH32(esp, 0x002BDD7Du); RECOMP_ABI_CALL(0x002BEA60u, sub_002BEA60); /* call 0x002BEA60 */

loc_002BDD7D: ;
    ebp = MEM32(esi + 0x20);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    ebp = ebp << 0xB;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = esi + 0x24;
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x002BDD97u); RECOMP_ABI_CALL(0x002C2860u, sub_002C2860); /* call 0x002C2860 */

loc_002BDD97: ;
    eax = MEM32(edi);
    ecx = esp + 0x20;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x002BDDA4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002BDDA1u); } /* indirect call */
    }

loc_002BDDA4: ;
    edx = MEM32(edi);
    eax = esp + 0x34;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x002BDDB1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002BDDAEu); } /* indirect call */
    }

loc_002BDDB1: ;
    ecx = MEM32(esi + 0x20);
    edi = MEM32(esi + 0x58);
    edx = MEM32(esi + 0x34);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(esi + 0x30);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ebp;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = edi;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esi + 0x58) = edi;
    edi = MEM32(esi + 0x14);
    MEM32(esi + 0x34) = edx;
    MEM32(ebx) = ebp;
    MEM32(esi + 0x28) = ebp;
    if (CMP_NE(_fa, _fb)) goto loc_002BDDEA; /* jne: not equal / not zero */

loc_002BDDDA: ;
    eax = MEM32(esi + 0x38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002BDDEA; /* je: equal / zero */

loc_002BDDE1: ;
    edx = MEM32(esi + 0x3C);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x002BDDE7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002BDDE5u); } /* indirect call */
    }

loc_002BDDE7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002BDDEA: ;
    _fa = (uint32_t)(MEM32(esi + 0x58)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x58), edi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002BDE03; /* jge: greater or equal (signed >=) */

loc_002BDDEF: ;
    ecx = MEM32(esi + 0x34);
    eax = MEM32(esi + 0x5C);
    ecx = ecx >> 0xB;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_002BDE07; /* jb: below (unsigned <) */

loc_002BDDFC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFF (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_002BDE07; /* jae: above or equal (unsigned >=) */

loc_002BDE03: ;
    MEM8(esi + 1) = 3;

loc_002BDE07: ;
    POP32(esp, edi);
    MEM32(esi + 0x4C) = ebp;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_002BDE12: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002BDE6C; /* jne: not equal / not zero */

loc_002BDE17: ;
    MEM8(esi + 2) = 0;
    PUSH32(esp, 0x002BDE20u); RECOMP_ABI_CALL(0x002BEA60u, sub_002BEA60); /* call 0x002BEA60 */

loc_002BDE20: ;
    edx = MEM32(edi);
    ebx = esi + 0x24;
    PUSH32(esp, ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x002BDE2Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002BDE29u); } /* indirect call */
    }

loc_002BDE2C: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebx) = 0;
    MEM32(esi + 0x28) = 0;

loc_002BDE3C: ;
    eax = MEM32(0x735CE0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002BDE56; /* jl: less (signed <) */

loc_002BDE45: ;
    _fa = (uint32_t)(MEM32(esi + 0x4C)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x4C), eax (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_002BDE56; /* jle: less or equal (signed <=) */

loc_002BDE4A: ;
    POP32(esp, edi);
    MEM8(esi + 1) = 4;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_002BDE56: ;
    eax = MEM32(esi + 0x4C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7FFFFFFF (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002BDEA8; /* jge: greater or equal (signed >=) */

loc_002BDE60: ;
    POP32(esp, edi);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0x4C) = eax;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_002BDE6C: ;
    PUSH32(esp, 0x002BDE71u); RECOMP_ABI_CALL(0x002BEA60u, sub_002BEA60); /* call 0x002BEA60 */

loc_002BDE71: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_002BDE79: ;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = esi + 0x24;
    MEM8(esi + 2) = 1;
    MEM32(ebx) = ebp;
    MEM32(esi + 0x28) = ebp;
    PUSH32(esp, 0x002BDE8Cu); RECOMP_ABI_CALL(0x002BEA60u, sub_002BEA60); /* call 0x002BEA60 */

loc_002BDE8C: ;
    _fa = (uint32_t)(MEM8(esi + 0x44)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x44), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002BDEA4; /* je: equal / zero */

loc_002BDE92: ;
    _fa = (uint32_t)(MEM8(esi + 0x48)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x48), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002BDEA4; /* je: equal / zero */

loc_002BDE98: ;
    _fa = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x14), ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002BDEB0; /* jne: not equal / not zero */

loc_002BDE9D: ;
    MEM32(esi + 0x20) = ebp;
    MEM8(esi + 1) = 3;

loc_002BDEA4: ;
    MEM8(esi + 2) = 0;

loc_002BDEA8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_002BDEB0: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002BDFB3; /* je: equal / zero */

loc_002BDEB8: ;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002BDFB3; /* je: equal / zero */

loc_002BDEC2: ;
    PUSH32(esp, ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x002BDEC7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002BDEC4u); } /* indirect call */
    }

loc_002BDEC7: ;
    ecx = MEM32(esi + 0x40);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esi + 0x1C);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002BDEA4; /* jge: greater or equal (signed >=) */

loc_002BDED6: ;
    edx = MEM32(esi + 0x18);
    eax = MEM32(edi);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x002BDEE6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002BDEE3u); } /* indirect call */
    }

loc_002BDEE6: ;
    eax = MEM32(esp + 0x24);
    ecx = MEM32(esi + 0x58);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 0x7FF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = eax;
    eax = MEM32(esi + 0x30);
    ebp = (uint32_t)(((int32_t)(int32_t)(ebp)) >> ((0xB) & 31u));
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002BDF09; /* jl: less (signed <) */

loc_002BDF07: ;
    ebp = eax;

loc_002BDF09: ;
    eax = MEM32(esi + 0x14);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002BDF14; /* jl: less (signed <) */

loc_002BDF12: ;
    ebp = eax;

loc_002BDF14: ;
    eax = MEM32(esi + 0x2C);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002BDF1D; /* jl: less (signed <) */

loc_002BDF1B: ;
    ebp = eax;

loc_002BDF1D: ;
    eax = MEM32(esi + 0xC);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(esi + 8);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002BDF2Eu); RECOMP_ABI_CALL(0x002C9190u, sub_002C9190); /* call 0x002C9190 */

loc_002BDF2E: ;
    ecx = MEM32(esi + 0x5C);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFF (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002BDF55; /* je: equal / zero */

loc_002BDF3C: ;
    eax = MEM32(esi + 0x34);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 0x7FF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((0xB) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = ecx;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002BDF55; /* jl: less (signed <) */

loc_002BDF53: ;
    ebp = eax;

loc_002BDF55: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esi + 8);
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002BDF64u); RECOMP_ABI_CALL(0x002C9200u, sub_002C9200); /* call 0x002C9200 */

loc_002BDF64: ;
    edx = MEM32(esp + 0x1C);
    ecx = MEM32(esp + 0x20);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0x20) = eax;
    MEM32(ebx) = edx;
    MEM32(esi + 0x28) = ecx;
    if (CMP_G(_fas, _fbs)) goto loc_002BDEA8; /* jg: greater (signed >) */

loc_002BDF7F: ;
    edx = MEM32(edi);
    PUSH32(esp, ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x002BDF88u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002BDF85u); } /* indirect call */
    }

loc_002BDF88: ;
    eax = MEM32(esi + 8);
    PUSH32(esp, eax);
    MEM32(ebx) = 0;
    MEM32(esi + 0x28) = 0;
    MEM8(esi + 2) = 0;
    PUSH32(esp, 0x002BDFA2u); RECOMP_ABI_CALL(0x002C9370u, sub_002C9370); /* call 0x002C9370 */

loc_002BDFA2: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002BDEA8; /* jne: not equal / not zero */

loc_002BDFAE: ;
    goto loc_002BDE3C;

loc_002BDFB3: ;
    POP32(esp, edi);
    MEM8(esi + 2) = 0;
    eax = MEM32(0x735CE4);
    POP32(esp, esi);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, ebp);
    MEM32(0x735CE4) = eax;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002BDFD0
 * Original: 0x002BDFD0 - 0x002BE145 (373 bytes, 136 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BDFD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002BDFD0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    SET_LO8(eax, MEM8(esi + 2));
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_002BE127; /* jne: not equal / not zero */

loc_002BDFE4: ;
    _fa = (uint32_t)(MEM8(esi + 0x48)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x48), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002BDFF6; /* jne: not equal / not zero */

loc_002BDFEA: ;
    _fa = (uint32_t)(MEM8(esi + 0x47)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x47), LO8(ebx) (8-bit) */
    MEM8(esi + 0x48) = LO8(ebx);
    if (CMP_NE(_fa, _fb)) goto loc_002BDFF6; /* jne: not equal / not zero */

loc_002BDFF2: ;
    MEM8(esi + 1) = 1;

loc_002BDFF6: ;
    _fa = (uint32_t)(MEM8(esi + 0x46)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x46), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002BE01F; /* jne: not equal / not zero */

loc_002BDFFC: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002BE00F; /* je: equal / zero */

loc_002BE003: ;
    PUSH32(esp, eax);
    MEM32(esi + 8) = ebx;
    PUSH32(esp, 0x002BE00Cu); RECOMP_ABI_CALL(0x002C90C0u, sub_002C90C0); /* call 0x002C90C0 */

loc_002BE00C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002BE00F: ;
    PUSH32(esp, 0x002BE014u); RECOMP_ABI_CALL(0x002BEA50u, sub_002BEA50); /* call 0x002BEA50 */

loc_002BE014: ;
    MEM8(esi + 0x46) = LO8(ebx);
    MEM8(esi + 0x49) = LO8(ebx);
    PUSH32(esp, 0x002BE01Fu); RECOMP_ABI_CALL(0x002BEA60u, sub_002BEA60); /* call 0x002BEA60 */

loc_002BE01F: ;
    PUSH32(esp, 0x002BE024u); RECOMP_ABI_CALL(0x002BEA50u, sub_002BEA50); /* call 0x002BEA50 */

loc_002BE024: ;
    SET_LO8(eax, MEM8(esi + 0x45));
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002BE119; /* jne: not equal / not zero */

loc_002BE031: ;
    _fa = (uint32_t)(MEM8(esi + 0x49)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x49), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002BE080; /* jne: not equal / not zero */

loc_002BE036: ;
    MEM8(esi + 0x49) = 1;
    PUSH32(esp, 0x002BE03Fu); RECOMP_ABI_CALL(0x002BEA60u, sub_002BEA60); /* call 0x002BEA60 */

loc_002BE03F: ;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 8), ebx (32-bit) */
    edi = 1;
    if (CMP_NE(_fa, _fb)) goto loc_002BE080; /* jne: not equal / not zero */

loc_002BE049: ;
    eax = MEM32(esi + 0x54);
    ecx = MEM32(esi + 0x50);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002BE057u); RECOMP_ABI_CALL(0x002C9FE0u, sub_002C9FE0); /* call 0x002C9FE0 */

loc_002BE057: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esi + 8) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_002BE080; /* jne: not equal / not zero */

loc_002BE061: ;
    edx = MEM32(esi + 0x50);
    PUSH32(esp, edx);
    PUSH32(esp, 0x4C4BDC);
    PUSH32(esp, 0x002BE06Fu); RECOMP_ABI_CALL(0x002BF7B0u, sub_002BF7B0); /* call 0x002BF7B0 */

loc_002BE06F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM8(esi + 0x49) = LO8(ebx);
    MEM8(esi + 0x45) = LO8(ebx);
    MEM8(esi + 1) = 4;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_002BE080: ;
    _fa = (uint32_t)(MEM8(esi + 0x49)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x49), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002BE11E; /* jne: not equal / not zero */

loc_002BE08A: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002BE093; /* jne: not equal / not zero */

loc_002BE08E: ;
    PUSH32(esp, 0x002BE093u); RECOMP_ABI_CALL(0x002BEA60u, sub_002BEA60); /* call 0x002BEA60 */

loc_002BE093: ;
    eax = MEM32(esi + 8);
    PUSH32(esp, ebp);
    PUSH32(esp, 2);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002BE0A0u); RECOMP_ABI_CALL(0x002C9190u, sub_002C9190); /* call 0x002C9190 */

loc_002BE0A0: ;
    ecx = MEM32(esi + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002BE0A9u); RECOMP_ABI_CALL(0x002C9130u, sub_002C9130); /* call 0x002C9130 */

loc_002BE0A9: ;
    edi = eax;
    eax = MEM32(esi + 0x54);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002BE0C5; /* jne: not equal / not zero */

loc_002BE0B5: ;
    edx = MEM32(esi + 0x50);
    PUSH32(esp, edx);
    PUSH32(esp, 0x002BE0BEu); RECOMP_ABI_CALL(0x002CA0F0u, sub_002CA0F0); /* call 0x002CA0F0 */

loc_002BE0BE: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = eax;
    goto loc_002BE0CA;

loc_002BE0C5: ;
    ebp = edi;
    ebp = ebp << 0xB;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */

loc_002BE0CA: ;
    eax = MEM32(esi + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002BE0D5u); RECOMP_ABI_CALL(0x002C9190u, sub_002C9190); /* call 0x002C9190 */

loc_002BE0D5: ;
    eax = MEM32(esi + 0x10);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFF800) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7FFFF800 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002BE0E8; /* jne: not equal / not zero */

loc_002BE0E2: ;
    MEM32(esi + 0x10) = ebp;
    MEM32(esi + 0x14) = edi;

loc_002BE0E8: ;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xC), edi (32-bit) */
    POP32(esp, ebp);
    if (CMP_LE(_fas, _fbs)) goto loc_002BE0F1; /* jle: less or equal (signed <=) */

loc_002BE0EE: ;
    MEM32(esi + 0xC) = edi;

loc_002BE0F1: ;
    ecx = MEM32(esi + 0xC);
    edx = MEM32(esi + 0x14);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_002BE10A; /* jle: less or equal (signed <=) */

loc_002BE0FD: ;
    eax = edi;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esi + 0x14) = eax;
    eax = eax << 0xB;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(esi + 0x10) = eax;

loc_002BE10A: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x002BE111u); RECOMP_ABI_CALL(0x002BDBE0u, sub_002BDBE0); /* call 0x002BDBE0 */

loc_002BE111: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(esi + 0x45) = LO8(ebx);
    goto loc_002BE11E;

loc_002BE119: ;
    PUSH32(esp, 0x002BE11Eu); RECOMP_ABI_CALL(0x002BEA60u, sub_002BEA60); /* call 0x002BEA60 */

loc_002BE11E: ;
    _fa = (uint32_t)(MEM8(esi + 0x47)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x47), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002BE127; /* jne: not equal / not zero */

loc_002BE124: ;
    MEM8(esi + 0x47) = LO8(ebx);

loc_002BE127: ;
    _fa = (uint32_t)(MEM8(esi + 1)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 1), 2 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002BE141; /* jne: not equal / not zero */

loc_002BE12D: ;
    _fa = (uint32_t)(MEM8(esi + 0x49)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x49), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002BE141; /* jne: not equal / not zero */

loc_002BE133: ;
    _fa = (uint32_t)(MEM8(esi + 0x45)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x45), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002BE141; /* jne: not equal / not zero */

loc_002BE138: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002BE13Eu); RECOMP_ABI_CALL(0x002BDD40u, sub_002BDD40); /* call 0x002BDD40 */

loc_002BE13E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002BE141: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002BE150
 * Original: 0x002BE150 - 0x002BE18C (60 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BE150(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002BE150: ;
    PUSH32(esp, 0x735CDC);
    PUSH32(esp, 0x002BE15Au); RECOMP_ABI_CALL(0x002BBE70u, sub_002BBE70); /* call 0x002BBE70 */

loc_002BE15A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002BE18B; /* je: equal / zero */

loc_002BE161: ;
    PUSH32(esp, esi);
    esi = 0x78B980;

loc_002BE167: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002BE175; /* jne: not equal / not zero */

loc_002BE16C: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002BE172u); RECOMP_ABI_CALL(0x002BDFD0u, sub_002BDFD0); /* call 0x002BDFD0 */

loc_002BE172: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002BE175: ;
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x60;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x78C880) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x78C880 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002BE167; /* jl: less (signed <) */

loc_002BE180: ;
    MEM32(0x735CDC) = 0;
    POP32(esp, esi);

loc_002BE18B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002BE190
 * Original: 0x002BE190 - 0x002BE19F (15 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BE190(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002BE190: ;
    PUSH32(esp, 0x002BE195u); RECOMP_ABI_CALL(0x002BEA70u, sub_002BEA70); /* call 0x002BEA70 */

loc_002BE195: ;
    PUSH32(esp, 0x002BE19Au); RECOMP_ABI_CALL(0x002C9340u, sub_002C9340); /* call 0x002C9340 */

loc_002BE19A: ;
    g_seh_ebp = ebp; sub_002BEA80(); return; /* tail jmp 0x002BEA80 */

}

/**
 * sub_002BE1A0
 * Original: 0x002BE1A0 - 0x002BE1D8 (56 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BE1A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002BE1A0: ;
    PUSH32(esp, esi);
    esi = eax;
    PUSH32(esp, 0x002BE1A8u); RECOMP_ABI_CALL(0x002BEA70u, sub_002BEA70); /* call 0x002BEA70 */

loc_002BE1A8: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002BE1C4; /* je: equal / zero */

loc_002BE1AF: ;
    esi = MEM32(esi + 0x58);
    PUSH32(esp, 0x002BE1B7u); RECOMP_ABI_CALL(0x002BEA80u, sub_002BEA80); /* call 0x002BEA80 */

loc_002BE1B7: ;
    eax = MEM32(esp + 8);
    MEM32(eax) = esi;
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_002BE1C4: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x002BE1CBu); RECOMP_ABI_CALL(0x002BEA80u, sub_002BEA80); /* call 0x002BEA80 */

loc_002BE1CB: ;
    eax = MEM32(esp + 8);
    MEM32(eax) = esi;
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002BE1E0
 * Original: 0x002BE1E0 - 0x002BE206 (38 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BE1E0(void)
{

loc_002BE1E0: ;
    PUSH32(esp, 0x002BE1E5u); RECOMP_ABI_CALL(0x002BEA70u, sub_002BEA70); /* call 0x002BEA70 */

loc_002BE1E5: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x1C);
    edx = MEM32(esp + 8);
    MEM32(edx) = ecx;
    eax = MEM32(eax + 0x18);
    ecx = MEM32(esp + 0xC);
    MEM32(ecx) = eax;
    PUSH32(esp, 0x002BE200u); RECOMP_ABI_CALL(0x002BEA80u, sub_002BEA80); /* call 0x002BEA80 */

loc_002BE200: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_002BE210
 * Original: 0x002BE210 - 0x002BE226 (22 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BE210(void)
{

loc_002BE210: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002BE216u); RECOMP_ABI_CALL(0x002BEA70u, sub_002BEA70); /* call 0x002BEA70 */

loc_002BE216: ;
    eax = MEM32(esp + 8);
    esi = MEM32(eax + 4);
    PUSH32(esp, 0x002BE222u); RECOMP_ABI_CALL(0x002BEA80u, sub_002BEA80); /* call 0x002BEA80 */

loc_002BE222: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002BE230
 * Original: 0x002BE230 - 0x002BE252 (34 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BE230(void)
{

loc_002BE230: ;
    PUSH32(esp, 0x002BE235u); RECOMP_ABI_CALL(0x002BEA70u, sub_002BEA70); /* call 0x002BEA70 */

loc_002BE235: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    edx = MEM32(esp + 0xC);
    MEM32(eax + 0x1C) = ecx;
    MEM32(eax + 0x18) = edx;
    PUSH32(esp, 0x002BE24Cu); RECOMP_ABI_CALL(0x002BEA80u, sub_002BEA80); /* call 0x002BEA80 */

loc_002BE24C: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_002BE260
 * Original: 0x002BE260 - 0x002BE27B (27 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BE260(void)
{

loc_002BE260: ;
    PUSH32(esp, 0x002BE265u); RECOMP_ABI_CALL(0x002BEA70u, sub_002BEA70); /* call 0x002BEA70 */

loc_002BE265: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    MEM32(ecx + 0x2C) = eax;
    PUSH32(esp, 0x002BE275u); RECOMP_ABI_CALL(0x002BEA80u, sub_002BEA80); /* call 0x002BEA80 */

loc_002BE275: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_002BE280
 * Original: 0x002BE280 - 0x002BE296 (22 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BE280(void)
{

loc_002BE280: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002BE286u); RECOMP_ABI_CALL(0x002BEA70u, sub_002BEA70); /* call 0x002BEA70 */

loc_002BE286: ;
    eax = MEM32(esp + 8);
    esi = MEM32(eax + 0x10);
    PUSH32(esp, 0x002BE292u); RECOMP_ABI_CALL(0x002BEA80u, sub_002BEA80); /* call 0x002BEA80 */

loc_002BE292: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002BE2A0
 * Original: 0x002BE2A0 - 0x002BE2B6 (22 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BE2A0(void)
{

loc_002BE2A0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002BE2A6u); RECOMP_ABI_CALL(0x002BEA70u, sub_002BEA70); /* call 0x002BEA70 */

loc_002BE2A6: ;
    eax = MEM32(esp + 8);
    esi = MEM32(eax + 0x14);
    PUSH32(esp, 0x002BE2B2u); RECOMP_ABI_CALL(0x002BEA80u, sub_002BEA80); /* call 0x002BEA80 */

loc_002BE2B2: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002BE2C0
 * Original: 0x002BE2C0 - 0x002BE2DE (30 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BE2C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002BE2C0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002BE2C6u); RECOMP_ABI_CALL(0x002BEA70u, sub_002BEA70); /* call 0x002BEA70 */

loc_002BE2C6: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002BE2D0u); RECOMP_ABI_CALL(0x002CA0F0u, sub_002CA0F0); /* call 0x002CA0F0 */

loc_002BE2D0: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = eax;
    PUSH32(esp, 0x002BE2DAu); RECOMP_ABI_CALL(0x002BEA80u, sub_002BEA80); /* call 0x002BEA80 */

loc_002BE2DA: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002BE2E0
 * Original: 0x002BE2E0 - 0x002BE2F5 (21 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BE2E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002BE2E0: ;
    PUSH32(esp, 0x002BE2E5u); RECOMP_ABI_CALL(0x002BEA70u, sub_002BEA70); /* call 0x002BEA70 */

loc_002BE2E5: ;
    SET_LO8(eax, MEM8(esp + 8));
    ecx = MEM32(esp + 4);
    MEM8(ecx + 0x44) = LO8(eax);
    g_seh_ebp = ebp; sub_002BEA80(); return; /* tail jmp 0x002BEA80 */

}

/**
 * sub_002BE300
 * Original: 0x002BE300 - 0x002BE317 (23 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BE300(void)
{

loc_002BE300: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002BE306u); RECOMP_ABI_CALL(0x002BEA70u, sub_002BEA70); /* call 0x002BEA70 */

loc_002BE306: ;
    eax = MEM32(esp + 8);
    esi = (uint32_t)(int32_t)SMEM8(eax + 0x44);
    PUSH32(esp, 0x002BE313u); RECOMP_ABI_CALL(0x002BEA80u, sub_002BEA80); /* call 0x002BEA80 */

loc_002BE313: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002BE320
 * Original: 0x002BE320 - 0x002BE368 (72 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BE320(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002BE320: ;
    PUSH32(esp, 0x002BE325u); RECOMP_ABI_CALL(0x002BEA70u, sub_002BEA70); /* call 0x002BEA70 */

loc_002BE325: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002BE32Fu); RECOMP_ABI_CALL(0x002CA0F0u, sub_002CA0F0); /* call 0x002CA0F0 */

loc_002BE32F: ;
    ecx = eax;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 0x7FF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(esp + 0xC);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((0xB) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ecx & 0x800007FFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(edx) = eax;
    if ((_fas >= 0)) goto loc_002BE356; /* jns: not sign (positive) */

loc_002BE34E: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx | 0xFFFFF800u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_002BE356: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_002BE35D; /* jle: less or equal (signed <=) */

loc_002BE35A: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(edx) = eax;

loc_002BE35D: ;
    PUSH32(esp, 0x002BE362u); RECOMP_ABI_CALL(0x002BEA80u, sub_002BEA80); /* call 0x002BEA80 */

loc_002BE362: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_002BE370
 * Original: 0x002BE370 - 0x002BE393 (35 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BE370(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002BE370: ;
    PUSH32(esp, 0x002BE375u); RECOMP_ABI_CALL(0x002BEA70u, sub_002BEA70); /* call 0x002BEA70 */

loc_002BE375: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002BE37Fu); RECOMP_ABI_CALL(0x002CA0F0u, sub_002CA0F0); /* call 0x002CA0F0 */

loc_002BE37F: ;
    ecx = MEM32(esp + 0xC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx) = eax;
    PUSH32(esp, 0x002BE38Du); RECOMP_ABI_CALL(0x002BEA80u, sub_002BEA80); /* call 0x002BEA80 */

loc_002BE38D: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_002BE3A0
 * Original: 0x002BE3A0 - 0x002BE3D3 (51 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BE3A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002BE3A0: ;
    PUSH32(esp, ebx);
    MEM32(edi + 4) = esi;
    PUSH32(esp, 0x002BE3A9u); RECOMP_ABI_CALL(0x002BEA50u, sub_002BEA50); /* call 0x002BEA50 */

loc_002BE3A9: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x002BE3B1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002BE3AEu); } /* indirect call */
    }

loc_002BE3B1: ;
    ecx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    ebx = eax;
    { uint32_t _icall_target = MEM32(ecx + 0x24); PUSH32(esp, 0x002BE3BBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002BE3B8u); } /* indirect call */
    }

loc_002BE3BB: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + 0x40) = ebx;
    PUSH32(esp, 0x002BE3C8u); RECOMP_ABI_CALL(0x002BEA60u, sub_002BEA60); /* call 0x002BEA60 */

loc_002BE3C8: ;
    eax = MEM32(edi + 0x40);
    MEM32(edi + 0x18) = eax;
    MEM32(edi + 0x1C) = eax;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002BE3E0
 * Original: 0x002BE3E0 - 0x002BE3FD (29 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BE3E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002BE3E0: ;
    PUSH32(esp, 0x002BE3E5u); RECOMP_ABI_CALL(0x002BEA70u, sub_002BEA70); /* call 0x002BEA70 */

loc_002BE3E5: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    edx = eax;
    edx = edx << 0xB;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ecx + 0x10) = edx;
    MEM32(ecx + 0x14) = eax;
    g_seh_ebp = ebp; sub_002BEA80(); return; /* tail jmp 0x002BEA80 */

}

/**
 * sub_002BE400
 * Original: 0x002BE400 - 0x002BE41E (30 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BE400(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002BE400: ;
    MEM32(esi + 0xC) = eax;
    PUSH32(esp, 0x002BE408u); RECOMP_ABI_CALL(0x002BEA70u, sub_002BEA70); /* call 0x002BEA70 */

loc_002BE408: ;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0x58) = 0;
    if (CMP_GE(_fas, _fbs)) goto loc_002BE419; /* jge: greater or equal (signed >=) */

loc_002BE416: ;
    MEM32(esi + 0x58) = eax;

loc_002BE419: ;
    g_seh_ebp = ebp; sub_002BEA80(); return; /* tail jmp 0x002BEA80 */

}

/**
 * sub_002BE420
 * Original: 0x002BE420 - 0x002BE433 (19 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BE420(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002BE420: ;
    PUSH32(esp, 0x002BE425u); RECOMP_ABI_CALL(0x002BEA70u, sub_002BEA70); /* call 0x002BEA70 */

loc_002BE425: ;
    eax = MEM32(esp + 4);
    MEM32(0x735CE0) = eax;
    g_seh_ebp = ebp; sub_002BEA80(); return; /* tail jmp 0x002BEA80 */

}

/**
 * sub_002BE440
 * Original: 0x002BE440 - 0x002BE455 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BE440(void)
{

loc_002BE440: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002BE446u); RECOMP_ABI_CALL(0x002BEA70u, sub_002BEA70); /* call 0x002BEA70 */

loc_002BE446: ;
    esi = MEM32(0x735CE0);
    PUSH32(esp, 0x002BE451u); RECOMP_ABI_CALL(0x002BEA80u, sub_002BEA80); /* call 0x002BEA80 */

loc_002BE451: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002BE460
 * Original: 0x002BE460 - 0x002BE479 (25 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BE460(void)
{

loc_002BE460: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002BE466u); RECOMP_ABI_CALL(0x002BEA70u, sub_002BEA70); /* call 0x002BEA70 */

loc_002BE466: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(eax + 8);
    esi = MEM32(ecx + 0x4C);
    PUSH32(esp, 0x002BE475u); RECOMP_ABI_CALL(0x002BEA80u, sub_002BEA80); /* call 0x002BEA80 */

loc_002BE475: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002BE480
 * Original: 0x002BE480 - 0x002BE497 (23 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BE480(void)
{

loc_002BE480: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002BE486u); RECOMP_ABI_CALL(0x002BEA70u, sub_002BEA70); /* call 0x002BEA70 */

loc_002BE486: ;
    eax = MEM32(esp + 8);
    esi = (uint32_t)(int32_t)SMEM8(eax + 2);
    PUSH32(esp, 0x002BE493u); RECOMP_ABI_CALL(0x002BEA80u, sub_002BEA80); /* call 0x002BEA80 */

loc_002BE493: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002BE4A0
 * Original: 0x002BE4A0 - 0x002BE4DF (63 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BE4A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002BE4A0: ;
    eax = MEM32(esi + 0x50);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002BE4DE; /* je: equal / zero */

loc_002BE4A7: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002BE4DE; /* jne: not equal / not zero */

loc_002BE4AE: ;
    MEM8(esi + 0x45) = 1;

loc_002BE4B2: ;
    PUSH32(esp, 0x735CDC);
    PUSH32(esp, 0x002BE4BCu); RECOMP_ABI_CALL(0x002BBE70u, sub_002BBE70); /* call 0x002BBE70 */

loc_002BE4BC: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002BE4D7; /* jne: not equal / not zero */

loc_002BE4C4: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002BE4CAu); RECOMP_ABI_CALL(0x002BDFD0u, sub_002BDFD0); /* call 0x002BDFD0 */

loc_002BE4CA: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x735CDC) = 0;

loc_002BE4D7: ;
    SET_LO8(eax, MEM8(esi + 0x45));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002BE4B2; /* jne: not equal / not zero */

loc_002BE4DE: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002BE4E0
 * Original: 0x002BE4E0 - 0x002BE52C (76 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BE4E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002BE4E0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002BE4E6u); RECOMP_ABI_CALL(0x002BEA70u, sub_002BEA70); /* call 0x002BEA70 */

loc_002BE4E6: ;
    _fa = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x100) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0xC), 0x100 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002BE50E; /* jge: greater or equal (signed >=) */

loc_002BE4F0: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x002BE500u); RECOMP_ABI_CALL(0x002BDAA0u, sub_002BDAA0); /* call 0x002BDAA0 */

loc_002BE500: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = eax;
    PUSH32(esp, 0x002BE50Au); RECOMP_ABI_CALL(0x002BEA80u, sub_002BEA80); /* call 0x002BEA80 */

loc_002BE50A: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_002BE50E: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x002BE51Eu); RECOMP_ABI_CALL(0x002BDB00u, sub_002BDB00); /* call 0x002BDB00 */

loc_002BE51E: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = eax;
    PUSH32(esp, 0x002BE528u); RECOMP_ABI_CALL(0x002BEA80u, sub_002BEA80); /* call 0x002BEA80 */

loc_002BE528: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002BE530
 * Original: 0x002BE530 - 0x002BE570 (64 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BE530(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002BE530: ;
    PUSH32(esp, 0x002BE535u); RECOMP_ABI_CALL(0x002BEA70u, sub_002BEA70); /* call 0x002BEA70 */

loc_002BE535: ;
    PUSH32(esp, 0x002BE53Au); RECOMP_ABI_CALL(0x002BEA50u, sub_002BEA50); /* call 0x002BEA50 */

loc_002BE53A: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 0x10);
    MEM32(eax + 0xC) = ecx;
    ecx = MEM32(esp + 0x14);
    edx = ecx;
    edx = edx << 0xB;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(eax + 0x10) = edx;
    edx = MEM32(esp + 0xC);
    MEM32(eax + 0x14) = ecx;
    ecx = MEM32(esp + 8);
    MEM32(eax + 0x50) = ecx;
    MEM32(eax + 0x54) = edx;
    MEM8(eax + 0x45) = 1;
    PUSH32(esp, 0x002BE56Bu); RECOMP_ABI_CALL(0x002BEA60u, sub_002BEA60); /* call 0x002BEA60 */

loc_002BE56B: ;
    g_seh_ebp = ebp; sub_002BEA80(); return; /* tail jmp 0x002BEA80 */

}

/**
 * sub_002BE570
 * Original: 0x002BE570 - 0x002BE5D1 (97 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BE570(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002BE570: ;
    PUSH32(esp, 0x002BE575u); RECOMP_ABI_CALL(0x002BEA70u, sub_002BEA70); /* call 0x002BEA70 */

loc_002BE575: ;
    PUSH32(esp, 0x002BE57Au); RECOMP_ABI_CALL(0x002BEA50u, sub_002BEA50); /* call 0x002BEA50 */

loc_002BE57A: ;
    eax = MEM32(esp + 0xC);
    edx = MEM32(esp + 4);
    MEM32(esi + 0xC) = eax;
    eax = MEM32(esp + 8);
    ecx = edi;
    ecx = ecx << 0xB;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(esi + 0x10) = ecx;
    MEM32(esi + 0x14) = edi;
    MEM32(esi + 0x50) = edx;
    MEM32(esi + 0x54) = eax;
    MEM8(esi + 0x45) = 1;
    PUSH32(esp, 0x002BE5A3u); RECOMP_ABI_CALL(0x002BEA60u, sub_002BEA60); /* call 0x002BEA60 */

loc_002BE5A3: ;
    PUSH32(esp, 0x002BE5A8u); RECOMP_ABI_CALL(0x002BEA80u, sub_002BEA80); /* call 0x002BEA80 */

loc_002BE5A8: ;
    PUSH32(esp, 0x002BE5ADu); RECOMP_ABI_CALL(0x002CB650u, sub_002CB650); /* call 0x002CB650 */

loc_002BE5AD: ;
    SET_LO8(eax, MEM8(esi + 0x45));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002BE5D0; /* je: equal / zero */

loc_002BE5B4: ;
    eax = MEM32(0x7367C4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002BE5C4; /* je: equal / zero */

loc_002BE5BD: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x002BE5C4u); RECOMP_ABI_CALL(0x000FA0B1u, sub_000FA0B1); /* call 0x000FA0B1 */

loc_002BE5C4: ;
    PUSH32(esp, 0x002BE5C9u); RECOMP_ABI_CALL(0x002CB650u, sub_002CB650); /* call 0x002CB650 */

loc_002BE5C9: ;
    SET_LO8(eax, MEM8(esi + 0x45));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002BE5B4; /* jne: not equal / not zero */

loc_002BE5D0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002BE5E0
 * Original: 0x002BE5E0 - 0x002BE628 (72 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BE5E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002BE5E0: ;
    PUSH32(esp, 0x002BE5E5u); RECOMP_ABI_CALL(0x002BEA70u, sub_002BEA70); /* call 0x002BEA70 */

loc_002BE5E5: ;
    PUSH32(esp, 0x002BE5EAu); RECOMP_ABI_CALL(0x002BEA50u, sub_002BEA50); /* call 0x002BEA50 */

loc_002BE5EA: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax + 0x14);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    _fb = (uint32_t)(2) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(edx, LO8(edx) + 2);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    MEM32(eax + 0x34) = ecx;
    MEM32(eax + 0x4C) = ecx;
    MEM8(eax + 1) = LO8(edx);
    MEM8(eax + 2) = LO8(ecx);
    MEM32(eax + 0x24) = ecx;
    MEM32(eax + 0x28) = ecx;
    MEM8(eax + 0x47) = 1;
    MEM32(eax + 0x5C) = 0xFFFFF;
    PUSH32(esp, 0x002BE61Du); RECOMP_ABI_CALL(0x002BEA60u, sub_002BEA60); /* call 0x002BEA60 */

loc_002BE61D: ;
    PUSH32(esp, 0x002BE622u); RECOMP_ABI_CALL(0x002BEA80u, sub_002BEA80); /* call 0x002BEA80 */

loc_002BE622: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_002BE630
 * Original: 0x002BE630 - 0x002BE678 (72 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BE630(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002BE630: ;
    PUSH32(esp, 0x002BE635u); RECOMP_ABI_CALL(0x002BEA70u, sub_002BEA70); /* call 0x002BEA70 */

loc_002BE635: ;
    PUSH32(esp, 0x002BE63Au); RECOMP_ABI_CALL(0x002BEA50u, sub_002BEA50); /* call 0x002BEA50 */

loc_002BE63A: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax + 0x14);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    MEM32(eax + 0x34) = ecx;
    MEM32(eax + 0x4C) = ecx;
    MEM8(eax + 2) = LO8(ecx);
    MEM32(eax + 0x24) = ecx;
    MEM32(eax + 0x28) = ecx;
    ecx = MEM32(esp + 8);
    _fb = (uint32_t)(2) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(edx, LO8(edx) + 2);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    MEM8(eax + 1) = LO8(edx);
    MEM8(eax + 0x47) = 1;
    MEM32(eax + 0x5C) = ecx;
    PUSH32(esp, 0x002BE66Du); RECOMP_ABI_CALL(0x002BEA60u, sub_002BEA60); /* call 0x002BEA60 */

loc_002BE66D: ;
    PUSH32(esp, 0x002BE672u); RECOMP_ABI_CALL(0x002BEA80u, sub_002BEA80); /* call 0x002BEA80 */

loc_002BE672: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_002BE680
 * Original: 0x002BE680 - 0x002BE6BE (62 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BE680(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002BE680: ;
    PUSH32(esp, 0x002BE685u); RECOMP_ABI_CALL(0x002BEA70u, sub_002BEA70); /* call 0x002BEA70 */

loc_002BE685: ;
    PUSH32(esp, 0x002BE68Au); RECOMP_ABI_CALL(0x002BEA50u, sub_002BEA50); /* call 0x002BEA50 */

loc_002BE68A: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(MEM8(eax + 1)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 1), 2 (8-bit) */
    SET_LO8(ecx, 1);
    if (CMP_NE(_fa, _fb)) goto loc_002BE6B1; /* jne: not equal / not zero */

loc_002BE696: ;
    _fa = (uint32_t)(MEM8(eax + 2)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 2), LO8(ecx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002BE6B1; /* jne: not equal / not zero */

loc_002BE69B: ;
    _fa = (uint32_t)(MEM8(eax + 0x47)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x47), LO8(ecx) (8-bit) */
    MEM8(eax + 0x48) = LO8(ecx);
    if (CMP_NE(_fa, _fb)) goto loc_002BE6B4; /* jne: not equal / not zero */

loc_002BE6A3: ;
    MEM8(eax + 0x47) = 0;
    PUSH32(esp, 0x002BE6ACu); RECOMP_ABI_CALL(0x002BEA60u, sub_002BEA60); /* call 0x002BEA60 */

loc_002BE6AC: ;
    g_seh_ebp = ebp; sub_002BEA80(); return; /* tail jmp 0x002BEA80 */

loc_002BE6B1: ;
    MEM8(eax + 1) = LO8(ecx);

loc_002BE6B4: ;
    PUSH32(esp, 0x002BE6B9u); RECOMP_ABI_CALL(0x002BEA60u, sub_002BEA60); /* call 0x002BEA60 */

loc_002BE6B9: ;
    g_seh_ebp = ebp; sub_002BEA80(); return; /* tail jmp 0x002BEA80 */

}

/**
 * sub_002BE6C0
 * Original: 0x002BE6C0 - 0x002BE71A (90 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BE6C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002BE6C0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x002BE6C6u); RECOMP_ABI_CALL(0x002BEA70u, sub_002BEA70); /* call 0x002BEA70 */

loc_002BE6C6: ;
    PUSH32(esp, 0x002BE6CBu); RECOMP_ABI_CALL(0x002BEA50u, sub_002BEA50); /* call 0x002BEA50 */

loc_002BE6CB: ;
    _fa = (uint32_t)(MEM8(esi + 1)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 1), 2 (8-bit) */
    ebx = 1;
    if (CMP_NE(_fa, _fb)) goto loc_002BE6E9; /* jne: not equal / not zero */

loc_002BE6D6: ;
    _fa = (uint32_t)(MEM8(esi + 2)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 2), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002BE6E9; /* jne: not equal / not zero */

loc_002BE6DB: ;
    _fa = (uint32_t)(MEM8(esi + 0x47)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x47), LO8(ebx) (8-bit) */
    MEM8(esi + 0x48) = LO8(ebx);
    if (CMP_NE(_fa, _fb)) goto loc_002BE6EC; /* jne: not equal / not zero */

loc_002BE6E3: ;
    MEM8(esi + 0x47) = 0;
    goto loc_002BE6EC;

loc_002BE6E9: ;
    MEM8(esi + 1) = LO8(ebx);

loc_002BE6EC: ;
    PUSH32(esp, 0x002BE6F1u); RECOMP_ABI_CALL(0x002BEA60u, sub_002BEA60); /* call 0x002BEA60 */

loc_002BE6F1: ;
    PUSH32(esp, 0x002BE6F6u); RECOMP_ABI_CALL(0x002BEA80u, sub_002BEA80); /* call 0x002BEA80 */

loc_002BE6F6: ;
    PUSH32(esp, 0x002BE6FBu); RECOMP_ABI_CALL(0x002CB650u, sub_002CB650); /* call 0x002CB650 */

loc_002BE6FB: ;
    _fa = (uint32_t)(MEM8(esi + 1)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 1), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002BE707; /* jne: not equal / not zero */

loc_002BE700: ;
    eax = MEM32(esi + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002BE718; /* je: equal / zero */

loc_002BE707: ;
    eax = MEM32(0x7367C4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002BE6F6; /* je: equal / zero */

loc_002BE710: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x002BE716u); RECOMP_ABI_CALL(0x000FA0B1u, sub_000FA0B1); /* call 0x000FA0B1 */

loc_002BE716: ;
    goto loc_002BE6F6;

loc_002BE718: ;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002BE720
 * Original: 0x002BE720 - 0x002BE72F (15 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BE720(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002BE720: ;
    PUSH32(esp, 0x002BE725u); RECOMP_ABI_CALL(0x002BEA70u, sub_002BEA70); /* call 0x002BEA70 */

loc_002BE725: ;
    PUSH32(esp, 0x002BE72Au); RECOMP_ABI_CALL(0x002BE150u, sub_002BE150); /* call 0x002BE150 */

loc_002BE72A: ;
    g_seh_ebp = ebp; sub_002BEA80(); return; /* tail jmp 0x002BEA80 */

}

/**
 * sub_002BE730
 * Original: 0x002BE730 - 0x002BE764 (52 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BE730(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002BE730: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002BE736u); RECOMP_ABI_CALL(0x002BEA70u, sub_002BEA70); /* call 0x002BEA70 */

loc_002BE736: ;
    PUSH32(esp, 0x002BE73Bu); RECOMP_ABI_CALL(0x002BEA70u, sub_002BEA70); /* call 0x002BEA70 */

loc_002BE73B: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002BE74B; /* je: equal / zero */

loc_002BE746: ;
    esi = MEM32(eax + 0x58);
    goto loc_002BE74D;

loc_002BE74B: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002BE74D: ;
    PUSH32(esp, 0x002BE752u); RECOMP_ABI_CALL(0x002BEA80u, sub_002BEA80); /* call 0x002BEA80 */

loc_002BE752: ;
    eax = MEM32(esp + 0xC);
    MEM32(eax) = esi;
    PUSH32(esp, 0x002BE75Du); RECOMP_ABI_CALL(0x002BEA80u, sub_002BEA80); /* call 0x002BEA80 */

loc_002BE75D: ;
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002BE770
 * Original: 0x002BE770 - 0x002BE7B8 (72 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BE770(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002BE770: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x002BE778u); RECOMP_ABI_CALL(0x002BEA70u, sub_002BEA70); /* call 0x002BEA70 */

loc_002BE778: ;
    esi = MEM32(esp + 0x14);
    edi = MEM32(esp + 0x10);
    MEM32(edi + 4) = esi;
    PUSH32(esp, 0x002BE788u); RECOMP_ABI_CALL(0x002BEA50u, sub_002BEA50); /* call 0x002BEA50 */

loc_002BE788: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x002BE790u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002BE78Du); } /* indirect call */
    }

loc_002BE790: ;
    ecx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    ebx = eax;
    { uint32_t _icall_target = MEM32(ecx + 0x24); PUSH32(esp, 0x002BE79Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002BE797u); } /* indirect call */
    }

loc_002BE79A: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + 0x40) = ebx;
    PUSH32(esp, 0x002BE7A7u); RECOMP_ABI_CALL(0x002BEA60u, sub_002BEA60); /* call 0x002BEA60 */

loc_002BE7A7: ;
    eax = MEM32(edi + 0x40);
    MEM32(edi + 0x18) = eax;
    MEM32(edi + 0x1C) = eax;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_002BEA80(); return; /* tail jmp 0x002BEA80 */

}

/**
 * sub_002BE7C0
 * Original: 0x002BE7C0 - 0x002BE7F2 (50 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BE7C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002BE7C0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002BE7C6u); RECOMP_ABI_CALL(0x002BEA70u, sub_002BEA70); /* call 0x002BEA70 */

loc_002BE7C6: ;
    eax = MEM32(esp + 0xC);
    esi = MEM32(esp + 8);
    MEM32(esi + 0xC) = eax;
    PUSH32(esp, 0x002BE7D6u); RECOMP_ABI_CALL(0x002BEA70u, sub_002BEA70); /* call 0x002BEA70 */

loc_002BE7D6: ;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0x58) = 0;
    if (CMP_GE(_fas, _fbs)) goto loc_002BE7E7; /* jge: greater or equal (signed >=) */

loc_002BE7E4: ;
    MEM32(esi + 0x58) = eax;

loc_002BE7E7: ;
    PUSH32(esp, 0x002BE7ECu); RECOMP_ABI_CALL(0x002BEA80u, sub_002BEA80); /* call 0x002BEA80 */

loc_002BE7EC: ;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_002BEA80(); return; /* tail jmp 0x002BEA80 */

}

/**
 * sub_002BE800
 * Original: 0x002BE800 - 0x002BE815 (21 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BE800(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002BE800: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002BE806u); RECOMP_ABI_CALL(0x002BEA70u, sub_002BEA70); /* call 0x002BEA70 */

loc_002BE806: ;
    esi = MEM32(esp + 8);
    PUSH32(esp, 0x002BE80Fu); RECOMP_ABI_CALL(0x002BE4A0u, sub_002BE4A0); /* call 0x002BE4A0 */

loc_002BE80F: ;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_002BEA80(); return; /* tail jmp 0x002BEA80 */

}

/**
 * sub_002BE820
 * Original: 0x002BE820 - 0x002BE84D (45 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BE820(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002BE820: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x002BE827u); RECOMP_ABI_CALL(0x002BEA70u, sub_002BEA70); /* call 0x002BEA70 */

loc_002BE827: ;
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x10);
    edi = MEM32(esp + 0x1C);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x002BE843u); RECOMP_ABI_CALL(0x002BE570u, sub_002BE570); /* call 0x002BE570 */

loc_002BE843: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_002BEA80(); return; /* tail jmp 0x002BEA80 */

}

/**
 * sub_002BE850
 * Original: 0x002BE850 - 0x002BE89A (74 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BE850(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002BE850: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x002BE856u); RECOMP_ABI_CALL(0x002BEA70u, sub_002BEA70); /* call 0x002BEA70 */

loc_002BE856: ;
    PUSH32(esp, 0x002BE85Bu); RECOMP_ABI_CALL(0x002BEA50u, sub_002BEA50); /* call 0x002BEA50 */

loc_002BE85B: ;
    _fa = (uint32_t)(MEM8(esi + 1)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 1), 2 (8-bit) */
    SET_LO8(ebx, 1);
    if (CMP_NE(_fa, _fb)) goto loc_002BE876; /* jne: not equal / not zero */

loc_002BE863: ;
    _fa = (uint32_t)(MEM8(esi + 2)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 2), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002BE876; /* jne: not equal / not zero */

loc_002BE868: ;
    _fa = (uint32_t)(MEM8(esi + 0x47)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x47), LO8(ebx) (8-bit) */
    MEM8(esi + 0x48) = LO8(ebx);
    if (CMP_NE(_fa, _fb)) goto loc_002BE879; /* jne: not equal / not zero */

loc_002BE870: ;
    MEM8(esi + 0x47) = 0;
    goto loc_002BE879;

loc_002BE876: ;
    MEM8(esi + 1) = LO8(ebx);

loc_002BE879: ;
    PUSH32(esp, 0x002BE87Eu); RECOMP_ABI_CALL(0x002BEA60u, sub_002BEA60); /* call 0x002BEA60 */

loc_002BE87E: ;
    PUSH32(esp, 0x002BE883u); RECOMP_ABI_CALL(0x002BEA80u, sub_002BEA80); /* call 0x002BEA80 */

loc_002BE883: ;
    PUSH32(esp, 0x002BE888u); RECOMP_ABI_CALL(0x002BEA50u, sub_002BEA50); /* call 0x002BEA50 */

loc_002BE888: ;
    _fa = (uint32_t)(MEM8(esi + 0x49)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x49), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002BE890; /* jne: not equal / not zero */

loc_002BE88D: ;
    MEM8(esi + 0x46) = LO8(ebx);

loc_002BE890: ;
    MEM8(esi + 0x45) = 0;
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_002BEA60(); return; /* tail jmp 0x002BEA60 */

}

/**
 * sub_002BE8A0
 * Original: 0x002BE8A0 - 0x002BE8B5 (21 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BE8A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002BE8A0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002BE8A6u); RECOMP_ABI_CALL(0x002BEA70u, sub_002BEA70); /* call 0x002BEA70 */

loc_002BE8A6: ;
    esi = MEM32(esp + 8);
    PUSH32(esp, 0x002BE8AFu); RECOMP_ABI_CALL(0x002BE6C0u, sub_002BE6C0); /* call 0x002BE6C0 */

loc_002BE8AF: ;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_002BEA80(); return; /* tail jmp 0x002BEA80 */

}

/**
 * sub_002BE8C0
 * Original: 0x002BE8C0 - 0x002BE91A (90 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BE8C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002BE8C0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x002BE8C7u); RECOMP_ABI_CALL(0x002BEA70u, sub_002BEA70); /* call 0x002BEA70 */

loc_002BE8C7: ;
    PUSH32(esp, 0x002BE8CCu); RECOMP_ABI_CALL(0x002BEA70u, sub_002BEA70); /* call 0x002BEA70 */

loc_002BE8CC: ;
    PUSH32(esp, 0x002BE8D1u); RECOMP_ABI_CALL(0x002BEA50u, sub_002BEA50); /* call 0x002BEA50 */

loc_002BE8D1: ;
    esi = MEM32(esp + 0xC);
    _fa = (uint32_t)(MEM8(esi + 1)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 1), 2 (8-bit) */
    SET_LO8(ebx, 1);
    if (CMP_NE(_fa, _fb)) goto loc_002BE8F0; /* jne: not equal / not zero */

loc_002BE8DD: ;
    _fa = (uint32_t)(MEM8(esi + 2)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 2), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002BE8F0; /* jne: not equal / not zero */

loc_002BE8E2: ;
    _fa = (uint32_t)(MEM8(esi + 0x47)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x47), LO8(ebx) (8-bit) */
    MEM8(esi + 0x48) = LO8(ebx);
    if (CMP_NE(_fa, _fb)) goto loc_002BE8F3; /* jne: not equal / not zero */

loc_002BE8EA: ;
    MEM8(esi + 0x47) = 0;
    goto loc_002BE8F3;

loc_002BE8F0: ;
    MEM8(esi + 1) = LO8(ebx);

loc_002BE8F3: ;
    PUSH32(esp, 0x002BE8F8u); RECOMP_ABI_CALL(0x002BEA60u, sub_002BEA60); /* call 0x002BEA60 */

loc_002BE8F8: ;
    PUSH32(esp, 0x002BE8FDu); RECOMP_ABI_CALL(0x002BEA80u, sub_002BEA80); /* call 0x002BEA80 */

loc_002BE8FD: ;
    PUSH32(esp, 0x002BE902u); RECOMP_ABI_CALL(0x002BEA50u, sub_002BEA50); /* call 0x002BEA50 */

loc_002BE902: ;
    _fa = (uint32_t)(MEM8(esi + 0x49)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x49), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002BE90A; /* jne: not equal / not zero */

loc_002BE907: ;
    MEM8(esi + 0x46) = LO8(ebx);

loc_002BE90A: ;
    MEM8(esi + 0x45) = 0;
    PUSH32(esp, 0x002BE913u); RECOMP_ABI_CALL(0x002BEA60u, sub_002BEA60); /* call 0x002BEA60 */

loc_002BE913: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_002BEA80(); return; /* tail jmp 0x002BEA80 */

}

/**
 * sub_002BE920
 * Original: 0x002BE920 - 0x002BE960 (64 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BE920(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002BE920: ;
    PUSH32(esp, esi);
    esi = eax;
    PUSH32(esp, 0x002BE928u); RECOMP_ABI_CALL(0x002BEA70u, sub_002BEA70); /* call 0x002BEA70 */

loc_002BE928: ;
    PUSH32(esp, 0x002BE92Du); RECOMP_ABI_CALL(0x002BE6C0u, sub_002BE6C0); /* call 0x002BE6C0 */

loc_002BE92D: ;
    PUSH32(esp, 0x002BE932u); RECOMP_ABI_CALL(0x002BEA80u, sub_002BEA80); /* call 0x002BEA80 */

loc_002BE932: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002BE938u); RECOMP_ABI_CALL(0x002BE8C0u, sub_002BE8C0); /* call 0x002BE8C0 */

loc_002BE938: ;
    SET_LO8(eax, MEM8(esi + 0x49));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002BE95E; /* je: equal / zero */

loc_002BE942: ;
    PUSH32(esp, 0x002BE947u); RECOMP_ABI_CALL(0x002CB650u, sub_002CB650); /* call 0x002CB650 */

loc_002BE947: ;
    eax = MEM32(0x7367C4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002BE957; /* je: equal / zero */

loc_002BE950: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x002BE957u); RECOMP_ABI_CALL(0x000FA0B1u, sub_000FA0B1); /* call 0x000FA0B1 */

loc_002BE957: ;
    SET_LO8(eax, MEM8(esi + 0x49));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002BE942; /* jne: not equal / not zero */

loc_002BE95E: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002BE960
 * Original: 0x002BE960 - 0x002BE973 (19 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BE960(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002BE960: ;
    PUSH32(esp, 0x002BE965u); RECOMP_ABI_CALL(0x002BEA70u, sub_002BEA70); /* call 0x002BEA70 */

loc_002BE965: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 0x002BE96Eu); RECOMP_ABI_CALL(0x002BE920u, sub_002BE920); /* call 0x002BE920 */

loc_002BE96E: ;
    g_seh_ebp = ebp; sub_002BEA80(); return; /* tail jmp 0x002BEA80 */

}

/**
 * sub_002BE980
 * Original: 0x002BE980 - 0x002BE9B9 (57 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BE980(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002BE980: ;
    PUSH32(esp, esi);
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002BE9B7; /* je: equal / zero */

loc_002BE987: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x002BE98Du); RECOMP_ABI_CALL(0x002BEA70u, sub_002BEA70); /* call 0x002BEA70 */

loc_002BE98D: ;
    PUSH32(esp, 0x002BE992u); RECOMP_ABI_CALL(0x002BE6C0u, sub_002BE6C0); /* call 0x002BE6C0 */

loc_002BE992: ;
    PUSH32(esp, 0x002BE997u); RECOMP_ABI_CALL(0x002BEA80u, sub_002BEA80); /* call 0x002BEA80 */

loc_002BE997: ;
    PUSH32(esp, 0x002BE99Cu); RECOMP_ABI_CALL(0x002BEA70u, sub_002BEA70); /* call 0x002BEA70 */

loc_002BE99C: ;
    eax = esi;
    PUSH32(esp, 0x002BE9A3u); RECOMP_ABI_CALL(0x002BE920u, sub_002BE920); /* call 0x002BE920 */

loc_002BE9A3: ;
    PUSH32(esp, 0x002BE9A8u); RECOMP_ABI_CALL(0x002BEA80u, sub_002BEA80); /* call 0x002BEA80 */

loc_002BE9A8: ;
    ecx = 0x18;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = esi;
    MEM8(esi) = 0;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    POP32(esp, edi);

loc_002BE9B7: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002BE9C0
 * Original: 0x002BE9C0 - 0x002BEA04 (68 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BE9C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002BE9C0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002BE9C6u); RECOMP_ABI_CALL(0x002BEA70u, sub_002BEA70); /* call 0x002BEA70 */

loc_002BE9C6: ;
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002BE9FE; /* je: equal / zero */

loc_002BE9CE: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x002BE9D4u); RECOMP_ABI_CALL(0x002BEA70u, sub_002BEA70); /* call 0x002BEA70 */

loc_002BE9D4: ;
    PUSH32(esp, 0x002BE9D9u); RECOMP_ABI_CALL(0x002BE6C0u, sub_002BE6C0); /* call 0x002BE6C0 */

loc_002BE9D9: ;
    PUSH32(esp, 0x002BE9DEu); RECOMP_ABI_CALL(0x002BEA80u, sub_002BEA80); /* call 0x002BEA80 */

loc_002BE9DE: ;
    PUSH32(esp, 0x002BE9E3u); RECOMP_ABI_CALL(0x002BEA70u, sub_002BEA70); /* call 0x002BEA70 */

loc_002BE9E3: ;
    eax = esi;
    PUSH32(esp, 0x002BE9EAu); RECOMP_ABI_CALL(0x002BE920u, sub_002BE920); /* call 0x002BE920 */

loc_002BE9EA: ;
    PUSH32(esp, 0x002BE9EFu); RECOMP_ABI_CALL(0x002BEA80u, sub_002BEA80); /* call 0x002BEA80 */

loc_002BE9EF: ;
    ecx = 0x18;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = esi;
    MEM8(esi) = 0;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    POP32(esp, edi);

loc_002BE9FE: ;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_002BEA80(); return; /* tail jmp 0x002BEA80 */

}

/**
 * sub_002BEA10
 * Original: 0x002BEA10 - 0x002BEA2F (31 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BEA10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002BEA10: ;
    eax = MEM32(0x735CF0);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x735CF0) = eax;
    _fa = (uint32_t)(MEM32(0x735CF0)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x735CF0), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002BEA2E; /* jne: not equal / not zero */

loc_002BEA24: ;
    MEM32(0x735CE8) = 0;

loc_002BEA2E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002BEA30
 * Original: 0x002BEA30 - 0x002BEA48 (24 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BEA30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002BEA30: ;
    eax = MEM32(0x735CF0);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x735CF0) = eax;
    if ((_fa != 0)) goto loc_002BEA47; /* jne: not equal / not zero */

loc_002BEA3D: ;
    MEM32(0x735CE8) = 0;

loc_002BEA47: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002BEA50
 * Original: 0x002BEA50 - 0x002BEA55 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BEA50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002BEA50: ;
    g_seh_ebp = ebp; sub_002BB140(); return; /* tail jmp 0x002BB140 */

}

/**
 * sub_002BEA60
 * Original: 0x002BEA60 - 0x002BEA65 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BEA60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002BEA60: ;
    g_seh_ebp = ebp; sub_002BBAC0(); return; /* tail jmp 0x002BBAC0 */

}

/**
 * sub_002BEA70
 * Original: 0x002BEA70 - 0x002BEA71 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BEA70(void)
{

loc_002BEA70: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002BEA80
 * Original: 0x002BEA80 - 0x002BEA81 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BEA80(void)
{

loc_002BEA80: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002BEA90
 * Original: 0x002BEA90 - 0x002BEA95 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BEA90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002BEA90: ;
    g_seh_ebp = ebp; sub_002C0E90(); return; /* tail jmp 0x002C0E90 */

}

/**
 * sub_002BEAA0
 * Original: 0x002BEAA0 - 0x002BEAA5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BEAA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002BEAA0: ;
    g_seh_ebp = ebp; sub_002C27C0(); return; /* tail jmp 0x002C27C0 */

}

/**
 * sub_002BEAB0
 * Original: 0x002BEAB0 - 0x002BEAB5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BEAB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002BEAB0: ;
    g_seh_ebp = ebp; sub_002C1AD0(); return; /* tail jmp 0x002C1AD0 */

}

/**
 * sub_002BEAC0
 * Original: 0x002BEAC0 - 0x002BEAC5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BEAC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002BEAC0: ;
    g_seh_ebp = ebp; sub_002C2410(); return; /* tail jmp 0x002C2410 */

}

/**
 * sub_002BEAD0
 * Original: 0x002BEAD0 - 0x002BEAE6 (22 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BEAD0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002BEAD0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x002BEADBu); RECOMP_ABI_CALL(0x002C1020u, sub_002C1020); /* call 0x002C1020 */

loc_002BEADB: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002BEAE1u); RECOMP_ABI_CALL(0x002C2580u, sub_002C2580); /* call 0x002C2580 */

loc_002BEAE1: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002BEAF0
 * Original: 0x002BEAF0 - 0x002BEAF5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BEAF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002BEAF0: ;
    g_seh_ebp = ebp; sub_002C26C0(); return; /* tail jmp 0x002C26C0 */

}

/**
 * sub_002BEB00
 * Original: 0x002BEB00 - 0x002BEB05 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BEB00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002BEB00: ;
    g_seh_ebp = ebp; sub_002C1020(); return; /* tail jmp 0x002C1020 */

}

/**
 * sub_002BEB10
 * Original: 0x002BEB10 - 0x002BEB15 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BEB10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002BEB10: ;
    g_seh_ebp = ebp; sub_002C1C90(); return; /* tail jmp 0x002C1C90 */

}

/**
 * sub_002BEB20
 * Original: 0x002BEB20 - 0x002BEB25 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BEB20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002BEB20: ;
    g_seh_ebp = ebp; sub_002C1D80(); return; /* tail jmp 0x002C1D80 */

}

/**
 * sub_002BEB30
 * Original: 0x002BEB30 - 0x002BEB35 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BEB30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002BEB30: ;
    g_seh_ebp = ebp; sub_002C2240(); return; /* tail jmp 0x002C2240 */

}

/**
 * sub_002BEB40
 * Original: 0x002BEB40 - 0x002BEB45 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BEB40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002BEB40: ;
    g_seh_ebp = ebp; sub_002C1670(); return; /* tail jmp 0x002C1670 */

}

/**
 * sub_002BEB50
 * Original: 0x002BEB50 - 0x002BEB56 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BEB50(void)
{

loc_002BEB50: ;
    eax = 0x7FFFFFFF;
    esp += 4; return; /* ret */

}

/**
 * sub_002BEB60
 * Original: 0x002BEB60 - 0x002BEB65 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BEB60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002BEB60: ;
    g_seh_ebp = ebp; sub_002C15C0(); return; /* tail jmp 0x002C15C0 */

}

/**
 * sub_002BEB70
 * Original: 0x002BEB70 - 0x002BEB75 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BEB70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002BEB70: ;
    g_seh_ebp = ebp; sub_002C1FE0(); return; /* tail jmp 0x002C1FE0 */

}

/**
 * sub_002BEB80
 * Original: 0x002BEB80 - 0x002BEB85 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BEB80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002BEB80: ;
    g_seh_ebp = ebp; sub_002C1700(); return; /* tail jmp 0x002C1700 */

}

/**
 * sub_002BEB90
 * Original: 0x002BEB90 - 0x002BEB95 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BEB90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002BEB90: ;
    g_seh_ebp = ebp; sub_002C16B0(); return; /* tail jmp 0x002C16B0 */

}

/**
 * sub_002BEBA0
 * Original: 0x002BEBA0 - 0x002BEBA5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BEBA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002BEBA0: ;
    g_seh_ebp = ebp; sub_002C2270(); return; /* tail jmp 0x002C2270 */

}

/**
 * sub_002BEBB0
 * Original: 0x002BEBB0 - 0x002BEBB5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BEBB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002BEBB0: ;
    g_seh_ebp = ebp; sub_002C17A0(); return; /* tail jmp 0x002C17A0 */

}

/**
 * sub_002BEBC0
 * Original: 0x002BEBC0 - 0x002BEBC5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BEBC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002BEBC0: ;
    g_seh_ebp = ebp; sub_002C17E0(); return; /* tail jmp 0x002C17E0 */

}

/**
 * sub_002BEBD0
 * Original: 0x002BEBD0 - 0x002BEBD5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BEBD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002BEBD0: ;
    g_seh_ebp = ebp; sub_002C1840(); return; /* tail jmp 0x002C1840 */

}

/**
 * sub_002BEBE0
 * Original: 0x002BEBE0 - 0x002BEBE5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BEBE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002BEBE0: ;
    g_seh_ebp = ebp; sub_002C1720(); return; /* tail jmp 0x002C1720 */

}

/**
 * sub_002BEBF0
 * Original: 0x002BEBF0 - 0x002BEBF5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BEBF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002BEBF0: ;
    g_seh_ebp = ebp; sub_002C1770(); return; /* tail jmp 0x002C1770 */

}

/**
 * sub_002BEC00
 * Original: 0x002BEC00 - 0x002BEC05 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BEC00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002BEC00: ;
    g_seh_ebp = ebp; sub_002C1980(); return; /* tail jmp 0x002C1980 */

}

/**
 * sub_002BEC10
 * Original: 0x002BEC10 - 0x002BEC15 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BEC10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002BEC10: ;
    g_seh_ebp = ebp; sub_002C19A0(); return; /* tail jmp 0x002C19A0 */

}

/**
 * sub_002BEC20
 * Original: 0x002BEC20 - 0x002BEC25 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BEC20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002BEC20: ;
    g_seh_ebp = ebp; sub_002C19C0(); return; /* tail jmp 0x002C19C0 */

}

/**
 * sub_002BEC30
 * Original: 0x002BEC30 - 0x002BEC35 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BEC30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002BEC30: ;
    g_seh_ebp = ebp; sub_002C19F0(); return; /* tail jmp 0x002C19F0 */

}

/**
 * sub_002BEC40
 * Original: 0x002BEC40 - 0x002BEC45 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BEC40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002BEC40: ;
    g_seh_ebp = ebp; sub_002C1960(); return; /* tail jmp 0x002C1960 */

}

/**
 * sub_002BEC50
 * Original: 0x002BEC50 - 0x002BEC55 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BEC50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002BEC50: ;
    g_seh_ebp = ebp; sub_002C15B0(); return; /* tail jmp 0x002C15B0 */

}

/**
 * sub_002BEC60
 * Original: 0x002BEC60 - 0x002BEC61 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BEC60(void)
{

loc_002BEC60: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002BEC70
 * Original: 0x002BEC70 - 0x002BEC71 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BEC70(void)
{

loc_002BEC70: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002BEC80
 * Original: 0x002BEC80 - 0x002BEC85 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BEC80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002BEC80: ;
    g_seh_ebp = ebp; sub_002C2010(); return; /* tail jmp 0x002C2010 */

}

/**
 * sub_002BEC90
 * Original: 0x002BEC90 - 0x002BEC95 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BEC90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002BEC90: ;
    g_seh_ebp = ebp; sub_002C1580(); return; /* tail jmp 0x002C1580 */

}

/**
 * sub_002BECA0
 * Original: 0x002BECA0 - 0x002BECA1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BECA0(void)
{

loc_002BECA0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002BECB0
 * Original: 0x002BECB0 - 0x002BECB1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BECB0(void)
{

loc_002BECB0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002BECC0
 * Original: 0x002BECC0 - 0x002BECDC (28 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BECC0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002BECC0: ;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 8);
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x002BECD4u); RECOMP_ABI_CALL(0x002C22F0u, sub_002C22F0); /* call 0x002C22F0 */

loc_002BECD4: ;
    eax = MEM32(esp + 0xC);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002BECE0
 * Original: 0x002BECE0 - 0x002BED14 (52 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BECE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002BECE0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x779F20;
    /* nop */

loc_002BECF0: ;
    _fa = (uint32_t)(MEM8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002BED05; /* je: equal / zero */

loc_002BECF5: ;
    _fb = (uint32_t)(0x238) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x238;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x77E620) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x77E620 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002BECF0; /* jl: less (signed <) */

loc_002BED04: ;
    esp += 4; return; /* ret */

loc_002BED05: ;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x238);
    _fb = (uint32_t)(0x779F20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x779F20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_002BED20
 * Original: 0x002BED20 - 0x002BEDD4 (180 bytes, 68 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BED20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002BED20: ;
    PUSH32(esp, ecx);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002BED36; /* jne: not equal / not zero */

loc_002BED25: ;
    PUSH32(esp, 0x4C4C38);
    PUSH32(esp, 0x002BED2Fu); RECOMP_ABI_CALL(0x002CB6E0u, sub_002CB6E0); /* call 0x002CB6E0 */

loc_002BED2F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_002BED36: ;
    eax = esp;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002BED40u); RECOMP_ABI_CALL(0x002CF290u, sub_002CF290); /* call 0x002CF290 */

loc_002BED40: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x002BED48u); RECOMP_ABI_CALL(0x002BECE0u, sub_002BECE0); /* call 0x002BECE0 */

loc_002BED48: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002BED6D; /* jne: not equal / not zero */

loc_002BED4E: ;
    PUSH32(esp, 0x4C4C08);
    PUSH32(esp, 0x002BED58u); RECOMP_ABI_CALL(0x002CB6E0u, sub_002CB6E0); /* call 0x002CB6E0 */

loc_002BED58: ;
    ecx = esp + 8;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002BED65u); RECOMP_ABI_CALL(0x002CF2A0u, sub_002CF2A0); /* call 0x002CF2A0 */

loc_002BED65: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_002BED6D: ;
    PUSH32(esp, ebx);
    MEM32(esi + 8) = edi;
    MEM8(esi + 1) = 0;
    ecx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(ecx + 0x24); PUSH32(esp, 0x002BED7Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002BED7Au); } /* indirect call */
    }

loc_002BED7D: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    ebx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x002BED87u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002BED84u); } /* indirect call */
    }

loc_002BED87: ;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = eax * 8;
    MEM32(esi + 0x18) = eax;
    eax = 0x66666667;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((2) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = edx;
    eax = eax >> 0x1F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x14) = eax;
    eax = esi + 0x50;
    ecx = 0x10;
    POP32(esp, ebx);

loc_002BEDB3: ;
    MEM32(eax) = 0;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_002BEDB3; /* jne: not equal / not zero */

loc_002BEDBF: ;
    ecx = esp + 4;
    PUSH32(esp, ecx);
    MEM8(esi) = 1;
    PUSH32(esp, 0x002BEDCCu); RECOMP_ABI_CALL(0x002CF2A0u, sub_002CF2A0); /* call 0x002CF2A0 */

loc_002BEDCC: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002BEDE0
 * Original: 0x002BEDE0 - 0x002BEDE4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BEDE0(void)
{

loc_002BEDE0: ;
    MEM32(ecx + 0x28) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_002BEDF0
 * Original: 0x002BEDF0 - 0x002BEEC8 (216 bytes, 83 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BEDF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002BEDF0: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    if (CMP_NE(_fa, _fb)) goto loc_002BEE0B; /* jne: not equal / not zero */

loc_002BEDF9: ;
    PUSH32(esp, 0x4C4C94);
    PUSH32(esp, 0x002BEE03u); RECOMP_ABI_CALL(0x002CB6E0u, sub_002CB6E0); /* call 0x002CB6E0 */

loc_002BEE03: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_002BEE0B: ;
    _fa = (uint32_t)(MEM32(esi + 0x24)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x24), 0x10 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002BEE23; /* jge: greater or equal (signed >=) */

loc_002BEE11: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002BEE28; /* jne: not equal / not zero */

loc_002BEE15: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x4C4C68);
    PUSH32(esp, 0x002BEE20u); RECOMP_ABI_CALL(0x002CB6E0u, sub_002CB6E0); /* call 0x002CB6E0 */

loc_002BEE20: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002BEE23: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_002BEE28: ;
    ecx = MEM32(esi + 0x1C);
    eax = ecx + 0xF;
    eax = eax & 0x8000000Fu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fas >= 0)) goto loc_002BEE3A; /* jns: not sign (positive) */

loc_002BEE35: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax | 0xFFFFFFF0u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_002BEE3A: ;
    eax = eax << 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = MEM32(eax + esi + 0x38);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x7FFFFFFF (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002BEE4D; /* jne: not equal / not zero */

loc_002BEE49: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_002BEE50;

loc_002BEE4D: ;
    eax = edx + 1;

loc_002BEE50: ;
    ecx = ecx << 5;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, ebx);
    ecx = ecx + esi + 0x38;
    edx = ebp;
    PUSH32(esp, edi);
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = ebp;
    edi = edx + 1;

loc_002BEE63: ;
    SET_LO8(ebx, MEM8(edx));
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002BEE63; /* jne: not equal / not zero */

loc_002BEE6A: ;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = 0;
    MEM32(ecx + 8) = edi;
    if ((_fa == 0)) goto loc_002BEE84; /* je: equal / zero */

loc_002BEE76: ;
    ebx = ZX8(MEM8(edi + ebp));
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ecx + 8) = MEM32(ecx + 8) + ebx;
    _fa = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_002BEE76; /* jb: below (unsigned <) */

loc_002BEE82: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002BEE84: ;
    edx = MEM32(esp + 0x18);
    MEM32(ecx + 0x10) = edx;
    edx = MEM32(esp + 0x1C);
    MEM32(ecx + 0x14) = edx;
    edx = MEM32(esp + 0x14);
    MEM32(ecx + 0x18) = edi;
    MEM32(ecx + 0x1C) = edi;
    MEM32(ecx + 0xC) = edx;
    edi = MEM32(esi + 0x24);
    ecx = MEM32(esi + 0x1C);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = ecx & 0x8000000Fu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0x24) = edi;
    if ((_fas >= 0)) goto loc_002BEEB7; /* jns: not sign (positive) */

loc_002BEEB2: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx | 0xFFFFFFF0u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_002BEEB7: ;
    MEM32(esi + 0x1C) = ecx;
    _fa = (uint32_t)(MEM8(esi + 1)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 1), 1 (8-bit) */
    POP32(esp, edi);
    POP32(esp, ebx);
    if (CMP_NE(_fa, _fb)) goto loc_002BEEC6; /* jne: not equal / not zero */

loc_002BEEC2: ;
    MEM8(esi + 1) = 2;

loc_002BEEC6: ;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_002BEED0
 * Original: 0x002BEED0 - 0x002BEEF3 (35 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BEED0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002BEED0: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002BEEE4; /* jne: not equal / not zero */

loc_002BEED6: ;
    PUSH32(esp, 0x4C4CC0);
    PUSH32(esp, 0x002BEEE0u); RECOMP_ABI_CALL(0x002CB6E0u, sub_002CB6E0); /* call 0x002CB6E0 */

loc_002BEEE0: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_002BEEE4: ;
    _fa = (uint32_t)(MEM8(eax + 1)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 1), LO8(ecx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002BEEF2; /* jne: not equal / not zero */

loc_002BEEE9: ;
    MEM32(eax + 0x1C) = ecx;
    MEM32(eax + 0x20) = ecx;
    MEM32(eax + 0x24) = ecx;

loc_002BEEF2: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002BEF00
 * Original: 0x002BEF00 - 0x002BEF1D (29 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BEF00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002BEF00: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002BEF11; /* jne: not equal / not zero */

loc_002BEF04: ;
    MEM32(esp + 4) = 0x4C4CEC;
    g_seh_ebp = ebp; sub_002CB6E0(); return; /* tail jmp 0x002CB6E0 */

loc_002BEF11: ;
    _fa = (uint32_t)(MEM32(esp + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 4), 1 (32-bit) */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    MEM8(eax + 4) = LO8(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002BEF20
 * Original: 0x002BEF20 - 0x002BEF44 (36 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BEF20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002BEF20: ;
    PUSH32(esp, esi);
    esi = 0x779F20;

loc_002BEF26: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002BEF34; /* jne: not equal / not zero */

loc_002BEF2B: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002BEF31u); RECOMP_ABI_CALL(0x002CF490u, sub_002CF490); /* call 0x002CF490 */

loc_002BEF31: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002BEF34: ;
    _fb = (uint32_t)(0x238) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x238;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x77E620) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x77E620 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002BEF26; /* jl: less (signed <) */

loc_002BEF42: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002BEF50
 * Original: 0x002BEF50 - 0x002BEF6A (26 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BEF50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002BEF50: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002BEF65; /* jne: not equal / not zero */

loc_002BEF54: ;
    PUSH32(esp, 0x4C4D18);
    PUSH32(esp, 0x002BEF5Eu); RECOMP_ABI_CALL(0x002CB6E0u, sub_002CB6E0); /* call 0x002CB6E0 */

loc_002BEF5E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 4; return; /* ret */

loc_002BEF65: ;
    eax = (uint32_t)(int32_t)SMEM8(eax + 1);
    esp += 4; return; /* ret */

}

/**
 * sub_002BEF70
 * Original: 0x002BEF70 - 0x002BEF89 (25 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BEF70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002BEF70: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002BEF85; /* jne: not equal / not zero */

loc_002BEF74: ;
    PUSH32(esp, 0x4C4D44);
    PUSH32(esp, 0x002BEF7Eu); RECOMP_ABI_CALL(0x002CB6E0u, sub_002CB6E0); /* call 0x002CB6E0 */

loc_002BEF7E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 4; return; /* ret */

loc_002BEF85: ;
    eax = MEM32(eax + 0x24);
    esp += 4; return; /* ret */

}

/**
 * sub_002BEF90
 * Original: 0x002BEF90 - 0x002BEFDA (74 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BEF90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002BEF90: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002BEFA5; /* jne: not equal / not zero */

loc_002BEF94: ;
    PUSH32(esp, 0x4C4D98);
    PUSH32(esp, 0x002BEF9Eu); RECOMP_ABI_CALL(0x002CB6E0u, sub_002CB6E0); /* call 0x002CB6E0 */

loc_002BEF9E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 4; return; /* ret */

loc_002BEFA5: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002BEFC8; /* jl: less (signed <) */

loc_002BEFA9: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax + 0x24) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002BEFC8; /* jge: greater or equal (signed >=) */

loc_002BEFAE: ;
    edx = MEM32(eax + 0x20);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = edx & 0x8000000Fu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fas >= 0)) goto loc_002BEFC0; /* jns: not sign (positive) */

loc_002BEFBB: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = edx | 0xFFFFFFF0u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_002BEFC0: ;
    edx = edx << 5;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = MEM32(edx + eax + 0x38);
    esp += 4; return; /* ret */

loc_002BEFC8: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x4C4D70);
    PUSH32(esp, 0x002BEFD3u); RECOMP_ABI_CALL(0x002CB6E0u, sub_002CB6E0); /* call 0x002CB6E0 */

loc_002BEFD3: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 4; return; /* ret */

}

/**
 * sub_002BEFE0
 * Original: 0x002BEFE0 - 0x002BF04B (107 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BEFE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002BEFE0: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002BEFF4; /* jne: not equal / not zero */

loc_002BEFE4: ;
    PUSH32(esp, 0x4C4DF0);
    PUSH32(esp, 0x002BEFEEu); RECOMP_ABI_CALL(0x002CB6E0u, sub_002CB6E0); /* call 0x002CB6E0 */

loc_002BEFEE: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_002BEFF4: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = esi + 0x58;
    /* nop */

loc_002BF000: ;
    _fa = (uint32_t)(MEM32(eax + -32)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + -32), edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002BF02D; /* je: equal / zero */

loc_002BF005: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002BF022; /* je: equal / zero */

loc_002BF009: ;
    _fa = (uint32_t)(MEM32(eax + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x20), edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002BF025; /* je: equal / zero */

loc_002BF00E: ;
    _fa = (uint32_t)(MEM32(eax + 0x40)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x40), edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002BF02A; /* je: equal / zero */

loc_002BF013: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x80;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x10 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002BF000; /* jl: less (signed <) */

loc_002BF020: ;
    goto loc_002BF02D;

loc_002BF022: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_002BF02D;

loc_002BF025: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_002BF02D;

loc_002BF02A: ;
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002BF02D: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x10 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002BF043; /* jne: not equal / not zero */

loc_002BF032: ;
    PUSH32(esp, edx);
    PUSH32(esp, 0x4C4DC4);
    PUSH32(esp, 0x002BF03Du); RECOMP_ABI_CALL(0x002CB6E0u, sub_002CB6E0); /* call 0x002CB6E0 */

loc_002BF03D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_002BF043: ;
    ecx = ecx << 5;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = MEM32(ecx + esi + 0x3C);
    esp += 4; return; /* ret */

}

/**
 * sub_002BF050
 * Original: 0x002BF050 - 0x002BF0BC (108 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BF050(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002BF050: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002BF065; /* jne: not equal / not zero */

loc_002BF054: ;
    PUSH32(esp, 0x4C4E48);
    PUSH32(esp, 0x002BF05Eu); RECOMP_ABI_CALL(0x002CB6E0u, sub_002CB6E0); /* call 0x002CB6E0 */

loc_002BF05E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 4; return; /* ret */

loc_002BF065: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = esi + 0x58;
    /* nop */

loc_002BF070: ;
    _fa = (uint32_t)(MEM32(eax + -32)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + -32), edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002BF09D; /* je: equal / zero */

loc_002BF075: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002BF092; /* je: equal / zero */

loc_002BF079: ;
    _fa = (uint32_t)(MEM32(eax + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x20), edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002BF095; /* je: equal / zero */

loc_002BF07E: ;
    _fa = (uint32_t)(MEM32(eax + 0x40)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x40), edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002BF09A; /* je: equal / zero */

loc_002BF083: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x80;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x10 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002BF070; /* jl: less (signed <) */

loc_002BF090: ;
    goto loc_002BF09D;

loc_002BF092: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_002BF09D;

loc_002BF095: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_002BF09D;

loc_002BF09A: ;
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002BF09D: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x10 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002BF0B4; /* jne: not equal / not zero */

loc_002BF0A2: ;
    PUSH32(esp, edx);
    PUSH32(esp, 0x4C4E1C);
    PUSH32(esp, 0x002BF0ADu); RECOMP_ABI_CALL(0x002CB6E0u, sub_002CB6E0); /* call 0x002CB6E0 */

loc_002BF0AD: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 4; return; /* ret */

loc_002BF0B4: ;
    ecx = ecx << 5;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = MEM32(ecx + esi + 0x50);
    esp += 4; return; /* ret */

}

/**
 * sub_002BF0C0
 * Original: 0x002BF0C0 - 0x002BF12B (107 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BF0C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002BF0C0: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002BF0D4; /* jne: not equal / not zero */

loc_002BF0C4: ;
    PUSH32(esp, 0x4C4EA0);
    PUSH32(esp, 0x002BF0CEu); RECOMP_ABI_CALL(0x002CB6E0u, sub_002CB6E0); /* call 0x002CB6E0 */

loc_002BF0CE: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_002BF0D4: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = esi + 0x58;
    /* nop */

loc_002BF0E0: ;
    _fa = (uint32_t)(MEM32(eax + -32)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + -32), edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002BF10D; /* je: equal / zero */

loc_002BF0E5: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002BF102; /* je: equal / zero */

loc_002BF0E9: ;
    _fa = (uint32_t)(MEM32(eax + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x20), edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002BF105; /* je: equal / zero */

loc_002BF0EE: ;
    _fa = (uint32_t)(MEM32(eax + 0x40)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x40), edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002BF10A; /* je: equal / zero */

loc_002BF0F3: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x80;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x10 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002BF0E0; /* jl: less (signed <) */

loc_002BF100: ;
    goto loc_002BF10D;

loc_002BF102: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_002BF10D;

loc_002BF105: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_002BF10D;

loc_002BF10A: ;
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002BF10D: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x10 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002BF123; /* jne: not equal / not zero */

loc_002BF112: ;
    PUSH32(esp, edx);
    PUSH32(esp, 0x4C4E74);
    PUSH32(esp, 0x002BF11Du); RECOMP_ABI_CALL(0x002CB6E0u, sub_002CB6E0); /* call 0x002CB6E0 */

loc_002BF11D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_002BF123: ;
    ecx = ecx << 5;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = MEM32(ecx + esi + 0x54);
    esp += 4; return; /* ret */

}

/**
 * sub_002BF130
 * Original: 0x002BF130 - 0x002BF15E (46 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BF130(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002BF130: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002BF142; /* jne: not equal / not zero */

loc_002BF134: ;
    PUSH32(esp, 0x4C4EF8);
    PUSH32(esp, 0x002BF13Eu); RECOMP_ABI_CALL(0x002CB6E0u, sub_002CB6E0); /* call 0x002CB6E0 */

loc_002BF13E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_002BF142: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002BF14F; /* jl: less (signed <) */

loc_002BF146: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x18) (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_002BF14F; /* jg: greater (signed >) */

loc_002BF14B: ;
    MEM32(ecx + 0x14) = eax;
    esp += 4; return; /* ret */

loc_002BF14F: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x4C4ECC);
    PUSH32(esp, 0x002BF15Au); RECOMP_ABI_CALL(0x002CB6E0u, sub_002CB6E0); /* call 0x002CB6E0 */

loc_002BF15A: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002BF160
 * Original: 0x002BF160 - 0x002BF179 (25 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BF160(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002BF160: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002BF175; /* jne: not equal / not zero */

loc_002BF164: ;
    PUSH32(esp, 0x4C4F24);
    PUSH32(esp, 0x002BF16Eu); RECOMP_ABI_CALL(0x002CB6E0u, sub_002CB6E0); /* call 0x002CB6E0 */

loc_002BF16E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 4; return; /* ret */

loc_002BF175: ;
    eax = MEM32(eax + 0x14);
    esp += 4; return; /* ret */

}

/**
 * sub_002BF180
 * Original: 0x002BF180 - 0x002BF1B6 (54 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BF180(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002BF180: ;
    eax = MEM32(esp + 4);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002BF19D; /* jne: not equal / not zero */

loc_002BF18A: ;
    MEM32(0x735CF4) = ecx;
    MEM32(0x735CF8) = ecx;
    MEM32(0x735CFC) = ecx;
    esp += 4; return; /* ret */

loc_002BF19D: ;
    ecx = MEM32(esp + 0xC);
    MEM32(0x735CF4) = eax;
    eax = MEM32(esp + 8);
    MEM32(0x735CF8) = eax;
    MEM32(0x735CFC) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_002BF1C0
 * Original: 0x002BF1C0 - 0x002BF1DD (29 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BF1C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002BF1C0: ;
    eax = MEM32(0x735CF4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002BF1DC; /* je: equal / zero */

loc_002BF1C9: ;
    ecx = MEM32(0x735CFC);
    edx = MEM32(0x735CF8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x002BF1D9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002BF1D7u); } /* indirect call */
    }

loc_002BF1D9: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002BF1DC: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002BF1E0
 * Original: 0x002BF1E0 - 0x002BF1F9 (25 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BF1E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002BF1E0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002BF1F1; /* jne: not equal / not zero */

loc_002BF1E4: ;
    MEM32(esp + 4) = 0x4C4F50;
    g_seh_ebp = ebp; sub_002CB6E0(); return; /* tail jmp 0x002CB6E0 */

loc_002BF1F1: ;
    SET_LO8(ecx, MEM8(esp + 4));
    MEM8(eax + 3) = LO8(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002BF200
 * Original: 0x002BF200 - 0x002BF21C (28 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BF200(void)
{

loc_002BF200: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x002BF207u); RECOMP_ABI_CALL(0x002CF270u, sub_002CF270); /* call 0x002CF270 */

loc_002BF207: ;
    edi = MEM32(esp + 0xC);
    PUSH32(esp, 0x002BF210u); RECOMP_ABI_CALL(0x002BED20u, sub_002BED20); /* call 0x002BED20 */

loc_002BF210: ;
    esi = eax;
    PUSH32(esp, 0x002BF217u); RECOMP_ABI_CALL(0x002CF280u, sub_002CF280); /* call 0x002CF280 */

loc_002BF217: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002BF220
 * Original: 0x002BF220 - 0x002BF235 (21 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BF220(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002BF220: ;
    PUSH32(esp, 0x002BF225u); RECOMP_ABI_CALL(0x002CF270u, sub_002CF270); /* call 0x002CF270 */

loc_002BF225: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    MEM32(ecx + 0x28) = eax;
    g_seh_ebp = ebp; sub_002CF280(); return; /* tail jmp 0x002CF280 */

}

/**
 * sub_002BF240
 * Original: 0x002BF240 - 0x002BF253 (19 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BF240(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002BF240: ;
    PUSH32(esp, 0xFFFFF);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002BF24Fu); RECOMP_ABI_CALL(0x002BEDF0u, sub_002BEDF0); /* call 0x002BEDF0 */

loc_002BF24F: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002BF260
 * Original: 0x002BF260 - 0x002BF291 (49 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BF260(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002BF260: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002BF266u); RECOMP_ABI_CALL(0x002CF270u, sub_002CF270); /* call 0x002CF270 */

loc_002BF266: ;
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x10);
    esi = MEM32(esp + 8);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002BF283u); RECOMP_ABI_CALL(0x002BEDF0u, sub_002BEDF0); /* call 0x002BEDF0 */

loc_002BF283: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = eax;
    PUSH32(esp, 0x002BF28Du); RECOMP_ABI_CALL(0x002CF280u, sub_002CF280); /* call 0x002CF280 */

loc_002BF28D: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002BF2A0
 * Original: 0x002BF2A0 - 0x002BF2D4 (52 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BF2A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002BF2A0: ;
    PUSH32(esp, 0x002BF2A5u); RECOMP_ABI_CALL(0x002CF270u, sub_002CF270); /* call 0x002CF270 */

loc_002BF2A5: ;
    eax = MEM32(esp + 4);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002BF2C1; /* jne: not equal / not zero */

loc_002BF2AF: ;
    PUSH32(esp, 0x4C4CC0);
    PUSH32(esp, 0x002BF2B9u); RECOMP_ABI_CALL(0x002CB6E0u, sub_002CB6E0); /* call 0x002CB6E0 */

loc_002BF2B9: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_002CF280(); return; /* tail jmp 0x002CF280 */

loc_002BF2C1: ;
    _fa = (uint32_t)(MEM8(eax + 1)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 1), LO8(ecx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002BF2CF; /* jne: not equal / not zero */

loc_002BF2C6: ;
    MEM32(eax + 0x1C) = ecx;
    MEM32(eax + 0x20) = ecx;
    MEM32(eax + 0x24) = ecx;

loc_002BF2CF: ;
    g_seh_ebp = ebp; sub_002CF280(); return; /* tail jmp 0x002CF280 */

}

/**
 * sub_002BF2E0
 * Original: 0x002BF2E0 - 0x002BF337 (87 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BF2E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002BF2E0: ;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002BF2F6; /* jne: not equal / not zero */

loc_002BF2E7: ;
    PUSH32(esp, 0x4C4F7C);
    PUSH32(esp, 0x002BF2F1u); RECOMP_ABI_CALL(0x002CB6E0u, sub_002CB6E0); /* call 0x002CB6E0 */

loc_002BF2F1: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_002BF2F6: ;
    _fa = (uint32_t)(MEM8(esi + 1)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 1), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002BF335; /* je: equal / zero */

loc_002BF2FB: ;
    eax = MEM32(esi + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM8(esi + 1) = LO8(ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_002BF317; /* je: equal / zero */

loc_002BF305: ;
    _fa = (uint32_t)(MEM8(esi + 2)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 2), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002BF317; /* jne: not equal / not zero */

loc_002BF30B: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002BF311u); RECOMP_ABI_CALL(0x002BE8A0u, sub_002BE8A0); /* call 0x002BE8A0 */

loc_002BF311: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(esi + 2) = LO8(ebx);

loc_002BF317: ;
    MEM32(esi + 0x2C) = ebx;
    PUSH32(esp, 0x002BF31Fu); RECOMP_ABI_CALL(0x002CF270u, sub_002CF270); /* call 0x002CF270 */

loc_002BF31F: ;
    _fa = (uint32_t)(MEM8(esi + 1)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 1), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002BF32D; /* jne: not equal / not zero */

loc_002BF324: ;
    MEM32(esi + 0x1C) = ebx;
    MEM32(esi + 0x20) = ebx;
    MEM32(esi + 0x24) = ebx;

loc_002BF32D: ;
    PUSH32(esp, 0x002BF332u); RECOMP_ABI_CALL(0x002CF280u, sub_002CF280); /* call 0x002CF280 */

loc_002BF332: ;
    MEM32(esi + 0x34) = ebx;

loc_002BF335: ;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002BF340
 * Original: 0x002BF340 - 0x002BF36F (47 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BF340(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002BF340: ;
    PUSH32(esp, 0x002BF345u); RECOMP_ABI_CALL(0x002CF270u, sub_002CF270); /* call 0x002CF270 */

loc_002BF345: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002BF35F; /* jne: not equal / not zero */

loc_002BF34D: ;
    PUSH32(esp, 0x4C4CEC);
    PUSH32(esp, 0x002BF357u); RECOMP_ABI_CALL(0x002CB6E0u, sub_002CB6E0); /* call 0x002CB6E0 */

loc_002BF357: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_002CF280(); return; /* tail jmp 0x002CF280 */

loc_002BF35F: ;
    _fa = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 8), 1 (32-bit) */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    MEM8(eax + 4) = LO8(ecx);
    g_seh_ebp = ebp; sub_002CF280(); return; /* tail jmp 0x002CF280 */

}

/**
 * sub_002BF370
 * Original: 0x002BF370 - 0x002BF3A2 (50 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BF370(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002BF370: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002BF376u); RECOMP_ABI_CALL(0x002CF270u, sub_002CF270); /* call 0x002CF270 */

loc_002BF376: ;
    esi = 0x779F20;
    goto loc_002BF380;

    /* nop */

loc_002BF380: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002BF38E; /* jne: not equal / not zero */

loc_002BF385: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002BF38Bu); RECOMP_ABI_CALL(0x002CF490u, sub_002CF490); /* call 0x002CF490 */

loc_002BF38B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002BF38E: ;
    _fb = (uint32_t)(0x238) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x238;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x77E620) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x77E620 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002BF380; /* jl: less (signed <) */

loc_002BF39C: ;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_002CF280(); return; /* tail jmp 0x002CF280 */

}

/**
 * sub_002BF3B0
 * Original: 0x002BF3B0 - 0x002BF3E4 (52 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BF3B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002BF3B0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002BF3B6u); RECOMP_ABI_CALL(0x002CF270u, sub_002CF270); /* call 0x002CF270 */

loc_002BF3B6: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002BF3D7; /* jne: not equal / not zero */

loc_002BF3BE: ;
    PUSH32(esp, 0x4C4D18);
    PUSH32(esp, 0x002BF3C8u); RECOMP_ABI_CALL(0x002CB6E0u, sub_002CB6E0); /* call 0x002CB6E0 */

loc_002BF3C8: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = esi | 0xFFFFFFFFu;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0x002BF3D3u); RECOMP_ABI_CALL(0x002CF280u, sub_002CF280); /* call 0x002CF280 */

loc_002BF3D3: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_002BF3D7: ;
    esi = (uint32_t)(int32_t)SMEM8(eax + 1);
    PUSH32(esp, 0x002BF3E0u); RECOMP_ABI_CALL(0x002CF280u, sub_002CF280); /* call 0x002CF280 */

loc_002BF3E0: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002BF3F0
 * Original: 0x002BF3F0 - 0x002BF423 (51 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BF3F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002BF3F0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002BF3F6u); RECOMP_ABI_CALL(0x002CF270u, sub_002CF270); /* call 0x002CF270 */

loc_002BF3F6: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002BF417; /* jne: not equal / not zero */

loc_002BF3FE: ;
    PUSH32(esp, 0x4C4D44);
    PUSH32(esp, 0x002BF408u); RECOMP_ABI_CALL(0x002CB6E0u, sub_002CB6E0); /* call 0x002CB6E0 */

loc_002BF408: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = esi | 0xFFFFFFFFu;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0x002BF413u); RECOMP_ABI_CALL(0x002CF280u, sub_002CF280); /* call 0x002CF280 */

loc_002BF413: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_002BF417: ;
    esi = MEM32(eax + 0x24);
    PUSH32(esp, 0x002BF41Fu); RECOMP_ABI_CALL(0x002CF280u, sub_002CF280); /* call 0x002CF280 */

loc_002BF41F: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002BF430
 * Original: 0x002BF430 - 0x002BF4A0 (112 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BF430(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002BF430: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002BF436u); RECOMP_ABI_CALL(0x002CF270u, sub_002CF270); /* call 0x002CF270 */

loc_002BF436: ;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002BF457; /* jne: not equal / not zero */

loc_002BF43E: ;
    PUSH32(esp, 0x4C4D98);
    PUSH32(esp, 0x002BF448u); RECOMP_ABI_CALL(0x002CB6E0u, sub_002CB6E0); /* call 0x002CB6E0 */

loc_002BF448: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = esi | 0xFFFFFFFFu;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0x002BF453u); RECOMP_ABI_CALL(0x002CF280u, sub_002CF280); /* call 0x002CF280 */

loc_002BF453: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_002BF457: ;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002BF486; /* jl: less (signed <) */

loc_002BF45F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x24) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002BF486; /* jge: greater or equal (signed >=) */

loc_002BF464: ;
    edx = MEM32(ecx + 0x20);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = edx & 0x8000000Fu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fas >= 0)) goto loc_002BF476; /* jns: not sign (positive) */

loc_002BF471: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = edx | 0xFFFFFFF0u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_002BF476: ;
    edx = edx << 5;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = MEM32(edx + ecx + 0x38);
    PUSH32(esp, 0x002BF482u); RECOMP_ABI_CALL(0x002CF280u, sub_002CF280); /* call 0x002CF280 */

loc_002BF482: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_002BF486: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x4C4D70);
    PUSH32(esp, 0x002BF491u); RECOMP_ABI_CALL(0x002CB6E0u, sub_002CB6E0); /* call 0x002CB6E0 */

loc_002BF491: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = esi | 0xFFFFFFFFu;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0x002BF49Cu); RECOMP_ABI_CALL(0x002CF280u, sub_002CF280); /* call 0x002CF280 */

loc_002BF49C: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002BF4A0
 * Original: 0x002BF4A0 - 0x002BF4BE (30 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BF4A0(void)
{

loc_002BF4A0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002BF4A6u); RECOMP_ABI_CALL(0x002CF270u, sub_002CF270); /* call 0x002CF270 */

loc_002BF4A6: ;
    edx = MEM32(esp + 0xC);
    esi = MEM32(esp + 8);
    PUSH32(esp, 0x002BF4B3u); RECOMP_ABI_CALL(0x002BEFE0u, sub_002BEFE0); /* call 0x002BEFE0 */

loc_002BF4B3: ;
    esi = eax;
    PUSH32(esp, 0x002BF4BAu); RECOMP_ABI_CALL(0x002CF280u, sub_002CF280); /* call 0x002CF280 */

loc_002BF4BA: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002BF4C0
 * Original: 0x002BF4C0 - 0x002BF4DE (30 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BF4C0(void)
{

loc_002BF4C0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002BF4C6u); RECOMP_ABI_CALL(0x002CF270u, sub_002CF270); /* call 0x002CF270 */

loc_002BF4C6: ;
    edx = MEM32(esp + 0xC);
    esi = MEM32(esp + 8);
    PUSH32(esp, 0x002BF4D3u); RECOMP_ABI_CALL(0x002BF050u, sub_002BF050); /* call 0x002BF050 */

loc_002BF4D3: ;
    esi = eax;
    PUSH32(esp, 0x002BF4DAu); RECOMP_ABI_CALL(0x002CF280u, sub_002CF280); /* call 0x002CF280 */

loc_002BF4DA: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002BF4E0
 * Original: 0x002BF4E0 - 0x002BF4FE (30 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BF4E0(void)
{

loc_002BF4E0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002BF4E6u); RECOMP_ABI_CALL(0x002CF270u, sub_002CF270); /* call 0x002CF270 */

loc_002BF4E6: ;
    edx = MEM32(esp + 0xC);
    esi = MEM32(esp + 8);
    PUSH32(esp, 0x002BF4F3u); RECOMP_ABI_CALL(0x002BF0C0u, sub_002BF0C0); /* call 0x002BF0C0 */

loc_002BF4F3: ;
    esi = eax;
    PUSH32(esp, 0x002BF4FAu); RECOMP_ABI_CALL(0x002CF280u, sub_002CF280); /* call 0x002CF280 */

loc_002BF4FA: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002BF500
 * Original: 0x002BF500 - 0x002BF547 (71 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BF500(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002BF500: ;
    PUSH32(esp, 0x002BF505u); RECOMP_ABI_CALL(0x002CF270u, sub_002CF270); /* call 0x002CF270 */

loc_002BF505: ;
    ecx = MEM32(esp + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002BF51F; /* jne: not equal / not zero */

loc_002BF50D: ;
    PUSH32(esp, 0x4C4EF8);
    PUSH32(esp, 0x002BF517u); RECOMP_ABI_CALL(0x002CB6E0u, sub_002CB6E0); /* call 0x002CB6E0 */

loc_002BF517: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_002CF280(); return; /* tail jmp 0x002CF280 */

loc_002BF51F: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002BF534; /* jl: less (signed <) */

loc_002BF527: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x18) (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_002BF534; /* jg: greater (signed >) */

loc_002BF52C: ;
    MEM32(ecx + 0x14) = eax;
    g_seh_ebp = ebp; sub_002CF280(); return; /* tail jmp 0x002CF280 */

loc_002BF534: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x4C4ECC);
    PUSH32(esp, 0x002BF53Fu); RECOMP_ABI_CALL(0x002CB6E0u, sub_002CB6E0); /* call 0x002CB6E0 */

loc_002BF53F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_002CF280(); return; /* tail jmp 0x002CF280 */

}

/**
 * sub_002BF550
 * Original: 0x002BF550 - 0x002BF583 (51 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BF550(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002BF550: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002BF556u); RECOMP_ABI_CALL(0x002CF270u, sub_002CF270); /* call 0x002CF270 */

loc_002BF556: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002BF577; /* jne: not equal / not zero */

loc_002BF55E: ;
    PUSH32(esp, 0x4C4F24);
    PUSH32(esp, 0x002BF568u); RECOMP_ABI_CALL(0x002CB6E0u, sub_002CB6E0); /* call 0x002CB6E0 */

loc_002BF568: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = esi | 0xFFFFFFFFu;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0x002BF573u); RECOMP_ABI_CALL(0x002CF280u, sub_002CF280); /* call 0x002CF280 */

loc_002BF573: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_002BF577: ;
    esi = MEM32(eax + 0x14);
    PUSH32(esp, 0x002BF57Fu); RECOMP_ABI_CALL(0x002CF280u, sub_002CF280); /* call 0x002CF280 */

loc_002BF57F: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002BF590
 * Original: 0x002BF590 - 0x002BF5BB (43 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BF590(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002BF590: ;
    PUSH32(esp, 0x002BF595u); RECOMP_ABI_CALL(0x002CF270u, sub_002CF270); /* call 0x002CF270 */

loc_002BF595: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002BF5AF; /* jne: not equal / not zero */

loc_002BF59D: ;
    PUSH32(esp, 0x4C4F50);
    PUSH32(esp, 0x002BF5A7u); RECOMP_ABI_CALL(0x002CB6E0u, sub_002CB6E0); /* call 0x002CB6E0 */

loc_002BF5A7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_002CF280(); return; /* tail jmp 0x002CF280 */

loc_002BF5AF: ;
    SET_LO8(ecx, MEM8(esp + 8));
    MEM8(eax + 3) = LO8(ecx);
    g_seh_ebp = ebp; sub_002CF280(); return; /* tail jmp 0x002CF280 */

}

/**
 * sub_002BF5C0
 * Original: 0x002BF5C0 - 0x002BF5EB (43 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BF5C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002BF5C0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002BF5C6u); RECOMP_ABI_CALL(0x002CF270u, sub_002CF270); /* call 0x002CF270 */

loc_002BF5C6: ;
    eax = MEM32(esp + 0xC);
    esi = MEM32(esp + 8);
    PUSH32(esp, 0xFFFFF);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002BF5DDu); RECOMP_ABI_CALL(0x002BEDF0u, sub_002BEDF0); /* call 0x002BEDF0 */

loc_002BF5DD: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = eax;
    PUSH32(esp, 0x002BF5E7u); RECOMP_ABI_CALL(0x002CF280u, sub_002CF280); /* call 0x002CF280 */

loc_002BF5E7: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002BF5F0
 * Original: 0x002BF5F0 - 0x002BF605 (21 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BF5F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002BF5F0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002BF5F6u); RECOMP_ABI_CALL(0x002CF270u, sub_002CF270); /* call 0x002CF270 */

loc_002BF5F6: ;
    esi = MEM32(esp + 8);
    PUSH32(esp, 0x002BF5FFu); RECOMP_ABI_CALL(0x002BF2E0u, sub_002BF2E0); /* call 0x002BF2E0 */

loc_002BF5FF: ;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_002CF280(); return; /* tail jmp 0x002CF280 */

}

/**
 * sub_002BF610
 * Original: 0x002BF610 - 0x002BF638 (40 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BF610(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002BF610: ;
    PUSH32(esp, esi);
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002BF636; /* je: equal / zero */

loc_002BF617: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x002BF61Du); RECOMP_ABI_CALL(0x002CF270u, sub_002CF270); /* call 0x002CF270 */

loc_002BF61D: ;
    PUSH32(esp, 0x002BF622u); RECOMP_ABI_CALL(0x002BF2E0u, sub_002BF2E0); /* call 0x002BF2E0 */

loc_002BF622: ;
    PUSH32(esp, 0x002BF627u); RECOMP_ABI_CALL(0x002CF280u, sub_002CF280); /* call 0x002CF280 */

loc_002BF627: ;
    ecx = 0x8E;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = esi;
    MEM8(esi) = 0;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    POP32(esp, edi);

loc_002BF636: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002BF640
 * Original: 0x002BF640 - 0x002BF67B (59 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BF640(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002BF640: ;
    PUSH32(esp, esi);
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002BF656; /* jne: not equal / not zero */

loc_002BF647: ;
    PUSH32(esp, 0x4C4FA8);
    PUSH32(esp, 0x002BF651u); RECOMP_ABI_CALL(0x002CB6E0u, sub_002CB6E0); /* call 0x002CB6E0 */

loc_002BF651: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_002BF656: ;
    SET_LO8(eax, MEM8(esi + 1));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002BF66C; /* je: equal / zero */

loc_002BF65D: ;
    PUSH32(esp, 0x002BF662u); RECOMP_ABI_CALL(0x002CF270u, sub_002CF270); /* call 0x002CF270 */

loc_002BF662: ;
    PUSH32(esp, 0x002BF667u); RECOMP_ABI_CALL(0x002BF2E0u, sub_002BF2E0); /* call 0x002BF2E0 */

loc_002BF667: ;
    PUSH32(esp, 0x002BF66Cu); RECOMP_ABI_CALL(0x002CF280u, sub_002CF280); /* call 0x002CF280 */

loc_002BF66C: ;
    edx = MEM32(esi + 0x24);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    SET_LO8(eax, (CMP_G(_fas, _fbs)) ? 1 : 0); /* setg */
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    MEM8(esi + 1) = LO8(eax);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002BF680
 * Original: 0x002BF680 - 0x002BF6B3 (51 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BF680(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002BF680: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002BF686u); RECOMP_ABI_CALL(0x002CF270u, sub_002CF270); /* call 0x002CF270 */

loc_002BF686: ;
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002BF6AD; /* je: equal / zero */

loc_002BF68E: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x002BF694u); RECOMP_ABI_CALL(0x002CF270u, sub_002CF270); /* call 0x002CF270 */

loc_002BF694: ;
    PUSH32(esp, 0x002BF699u); RECOMP_ABI_CALL(0x002BF2E0u, sub_002BF2E0); /* call 0x002BF2E0 */

loc_002BF699: ;
    PUSH32(esp, 0x002BF69Eu); RECOMP_ABI_CALL(0x002CF280u, sub_002CF280); /* call 0x002CF280 */

loc_002BF69E: ;
    ecx = 0x8E;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = esi;
    MEM8(esi) = 0;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    POP32(esp, edi);

loc_002BF6AD: ;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_002CF280(); return; /* tail jmp 0x002CF280 */

}

/**
 * sub_002BF6C0
 * Original: 0x002BF6C0 - 0x002BF70A (74 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BF6C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002BF6C0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002BF6C6u); RECOMP_ABI_CALL(0x002CF270u, sub_002CF270); /* call 0x002CF270 */

loc_002BF6C6: ;
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002BF6E1; /* jne: not equal / not zero */

loc_002BF6CE: ;
    PUSH32(esp, 0x4C4FA8);
    PUSH32(esp, 0x002BF6D8u); RECOMP_ABI_CALL(0x002CB6E0u, sub_002CB6E0); /* call 0x002CB6E0 */

loc_002BF6D8: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_002CF280(); return; /* tail jmp 0x002CF280 */

loc_002BF6E1: ;
    SET_LO8(eax, MEM8(esi + 1));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002BF6F7; /* je: equal / zero */

loc_002BF6E8: ;
    PUSH32(esp, 0x002BF6EDu); RECOMP_ABI_CALL(0x002CF270u, sub_002CF270); /* call 0x002CF270 */

loc_002BF6ED: ;
    PUSH32(esp, 0x002BF6F2u); RECOMP_ABI_CALL(0x002BF2E0u, sub_002BF2E0); /* call 0x002BF2E0 */

loc_002BF6F2: ;
    PUSH32(esp, 0x002BF6F7u); RECOMP_ABI_CALL(0x002CF280u, sub_002CF280); /* call 0x002CF280 */

loc_002BF6F7: ;
    edx = MEM32(esi + 0x24);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    SET_LO8(eax, (CMP_G(_fas, _fbs)) ? 1 : 0); /* setg */
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    MEM8(esi + 1) = LO8(eax);
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_002CF280(); return; /* tail jmp 0x002CF280 */

}

/**
 * sub_002BF710
 * Original: 0x002BF710 - 0x002BF72B (27 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BF710(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002BF710: ;
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x40;
    edi = 0x78B840;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM32(0x735D20) = eax;
    MEM32(0x735D24) = eax;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_002BF730
 * Original: 0x002BF730 - 0x002BF74B (27 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BF730(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002BF730: ;
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x40;
    edi = 0x78B840;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM32(0x735D20) = eax;
    MEM32(0x735D24) = eax;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_002BF750
 * Original: 0x002BF750 - 0x002BF770 (32 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BF750(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002BF750: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    MEM32(0x735D20) = eax;
    MEM32(0x735D24) = ecx;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_002BBE20(); return; /* tail jmp 0x002BBE20 */

}

/**
 * sub_002BF770
 * Original: 0x002BF770 - 0x002BF7AE (62 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BF770(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002BF770: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 0xFF);
    PUSH32(esp, eax);
    PUSH32(esp, 0x78B840);
    PUSH32(esp, 0x002BF784u); RECOMP_ABI_CALL(0x000EBBD0u, sub_000EBBD0); /* call 0x000EBBD0 */

loc_002BF784: ;
    eax = MEM32(0x735D20);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002BF7A1; /* je: equal / zero */

loc_002BF790: ;
    ecx = MEM32(0x735D24);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x78B840);
    PUSH32(esp, ecx);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x002BF79Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002BF79Cu); } /* indirect call */
    }

loc_002BF79E: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002BF7A1: ;
    MEM32(esp + 4) = 0x78B840;
    g_seh_ebp = ebp; sub_002BB2D0(); return; /* tail jmp 0x002BB2D0 */

}

/**
 * sub_002BF7B0
 * Original: 0x002BF7B0 - 0x002BF801 (81 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BF7B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002BF7B0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 0xFF);
    PUSH32(esp, eax);
    PUSH32(esp, 0x78B840);
    PUSH32(esp, 0x002BF7C4u); RECOMP_ABI_CALL(0x000EBBD0u, sub_000EBBD0); /* call 0x000EBBD0 */

loc_002BF7C4: ;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, 0xFF);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x78B840);
    PUSH32(esp, 0x002BF7D8u); RECOMP_ABI_CALL(0x000EE800u, sub_000EE800); /* call 0x000EE800 */

loc_002BF7D8: ;
    eax = MEM32(0x735D20);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002BF7F5; /* je: equal / zero */

loc_002BF7E4: ;
    edx = MEM32(0x735D24);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x78B840);
    PUSH32(esp, edx);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x002BF7F2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002BF7F0u); } /* indirect call */
    }

loc_002BF7F2: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002BF7F5: ;
    PUSH32(esp, 0x78B840);
    PUSH32(esp, 0x002BF7FFu); RECOMP_ABI_CALL(0x002BB2D0u, sub_002BB2D0); /* call 0x002BB2D0 */

loc_002BF7FF: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002BF810
 * Original: 0x002BF810 - 0x002BF877 (103 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BF810(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002BF810: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_002BF820: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edi = 0xA;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)edi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)edi)); }
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM8(ecx + esi) = LO8(edx);
    if (CMP_EQ(_fa, _fb)) goto loc_002BF837; /* je: equal / zero */

loc_002BF82F: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x20 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002BF820; /* jl: less (signed <) */

loc_002BF835: ;
    goto loc_002BF83B;

loc_002BF837: ;
    MEM8(ecx + esi) = 0;

loc_002BF83B: ;
    eax = 0x735D00;
    edx = eax + 1;

loc_002BF843: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002BF843; /* jne: not equal / not zero */

loc_002BF84A: ;
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
    if (CMP_L(_fas, _fbs)) goto loc_002BF859; /* jl: less (signed <) */

loc_002BF857: ;
    ecx = eax;

loc_002BF859: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_002BF870; /* jle: less or equal (signed <=) */

loc_002BF85F: ;
    edi = ecx + 0x735CFF;

loc_002BF865: ;
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
    if (CMP_L(_fas, _fbs)) goto loc_002BF865; /* jl: less (signed <) */

loc_002BF870: ;
    POP32(esp, edi);
    MEM8(eax + esi) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002BF880
 * Original: 0x002BF880 - 0x002BF8F4 (116 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BF880(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002BF880: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002BF896u); RECOMP_ABI_CALL(0x002BF810u, sub_002BF810); /* call 0x002BF810 */

loc_002BF896: ;
    eax = edi;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = eax + 1;
    edi = edi;

loc_002BF8A0: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002BF8A0; /* jne: not equal / not zero */

loc_002BF8A7: ;
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
    PUSH32(esp, 0x002BF8B8u); RECOMP_ABI_CALL(0x000EE800u, sub_000EE800); /* call 0x000EE800 */

loc_002BF8B8: ;
    eax = edi;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = eax + 1;

loc_002BF8C0: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002BF8C0; /* jne: not equal / not zero */

loc_002BF8C7: ;
    ecx = edi;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi = ecx + 1;
    edi = edi;

loc_002BF8D0: ;
    SET_LO8(edx, MEM8(ecx));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002BF8D0; /* jne: not equal / not zero */

loc_002BF8D7: ;
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
    PUSH32(esp, 0x002BF8EEu); RECOMP_ABI_CALL(0x002BF810u, sub_002BF810); /* call 0x002BF810 */

loc_002BF8EE: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002BF900
 * Original: 0x002BF900 - 0x002BF965 (101 bytes, 33 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_002BF900(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_002BF900: ;
    fp_push(MEMD(0x496BA0)); /* fld double */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    fp_push((double)SMEM32(esp + 4)); /* fild */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x49E43C)); /* fmul dword ptr [0x49e43c] */
    fp_top() = RECOMP_FP_PC(fp_top() / (double)SMEM32(esp + 8)); /* fidiv dword ptr [esp + 8] */
    fp_top() = cos(fp_top()); /* fcos */
    fp_top() = RECOMP_FP_PC(fp_st1() - fp_top()); /* fsubr st(1) */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x496454)); /* fsub dword ptr [0x496454] */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + g_fp_stack[(g_fp_top + 3) & 7]); /* fadd st(3) */
    fp_st1() = RECOMP_FP_PC(fp_st1() * fp_top()); fp_pop(); /* fmulp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    fp_top() = RECOMP_FP_PC(g_fp_stack[(g_fp_top + 2) & 7] - fp_top()); /* fsubr st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() / fp_st1()); /* fdiv st(1) */
    { double _t = fp_top(); fp_top() = g_fp_stack[(g_fp_top + 2) & 7]; g_fp_stack[(g_fp_top + 2) & 7] = _t; } /* fxch st(2) */
    fp_st1() = fp_top(); fp_pop(); /* fstp st(1) */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x4C4FD4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    PUSH32(esp, 0x002BF945u); RECOMP_ABI_CALL(0x000EB38Cu, sub_000EB38C); /* call 0x000EB38C */

loc_002BF945: ;
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    ecx = MEM32(esp + 0xC);
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEM16(ecx) = LO16(eax);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x4AB8E0)); /* fmul dword ptr [0x4ab8e0] */
    PUSH32(esp, 0x002BF95Bu); RECOMP_ABI_CALL(0x000EB38Cu, sub_000EB38C); /* call 0x000EB38C */

loc_002BF95B: ;
    fp_pop(); /* fstp st(0) */
    edx = MEM32(esp + 0x10);
    MEM16(edx) = LO16(eax);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_002BF970
 * Original: 0x002BF970 - 0x002BF9AD (61 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_002BF970(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002BF970: ;
    ecx = MEM32(esp + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_002BF98F; /* jle: less or equal (signed <=) */

loc_002BF97B: ;
    edx = MEM32(esp + 4);
    /* nop */

loc_002BF980: ;
    _fa = (uint32_t)(MEM16(eax + edx)) & 0xFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + edx), 0x80 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002BF99C; /* je: equal / zero */

loc_002BF988: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002BF980; /* jl: less (signed <) */

loc_002BF98F: ;
    edx = MEM32(esp + 0xC);
    MEM16(edx) = 0;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 4; return; /* ret */

loc_002BF99C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7FFFFFFF (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002BF98F; /* jge: greater or equal (signed >=) */

loc_002BF9A3: ;
    ecx = MEM32(esp + 0xC);
    MEM16(ecx) = LO16(eax);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_002BF9B0
 * Original: 0x002BF9B0 - 0x002BFA0B (91 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BF9B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002BF9B0: ;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x10 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002BF9F7; /* jl: less (signed <) */

loc_002BF9B9: ;
    eax = MEM32(esp + 4);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_HI8(edx, MEM8(eax));
    SET_LO8(edx, MEM8(eax + 1));
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(0x8000) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), 0x8000 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002BF9F7; /* jne: not equal / not zero */

loc_002BF9CB: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_HI8(edx, MEM8(eax + 2));
    SET_LO8(edx, MEM8(eax + 3));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x8000 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002BF9F7; /* jl: less (signed <) */

loc_002BF9DE: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = edx + eax + -6;
    ecx = 3;
    edi = 0x4C4FD8;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(2);
    while (ecx != 0) {
        _flags = (MEM16(esi) == MEM16(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsw */
    POP32(esp, edi);
    POP32(esp, esi);
    if ((_flags != 0)) goto loc_002BF9FA; /* je: equal / zero */

loc_002BF9F7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_002BF9FA: ;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002BFA05; /* je: equal / zero */

loc_002BFA02: ;
    MEM16(eax) = LO16(edx);

loc_002BFA05: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_002BFA10
 * Original: 0x002BFA10 - 0x002BFADA (202 bytes, 72 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_002BFA10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002BFA10: ;
    _fa = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 8), 0x10 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002BFA1B; /* jge: greater or equal (signed >=) */

loc_002BFA17: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 4; return; /* ret */

loc_002BFA1B: ;
    eax = MEM32(esp + 4);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_HI8(ecx, MEM8(eax));
    SET_LO8(ecx, MEM8(eax + 1));
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(0x8000) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 0x8000 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002BFA33; /* je: equal / zero */

loc_002BFA2D: ;
    eax = 0xFFFFFFFEu;
    esp += 4; return; /* ret */

loc_002BFA33: ;
    SET_LO16(edx, ZX8(MEM8(eax + 3)));
    SET_HI8(edx, MEM8(eax + 2));
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x1C);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x24);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(ecx) = LO16(edx);
    SET_LO8(edx, MEM8(eax + 4));
    ecx = MEM32(esp + 0x18);
    MEM8(ecx) = LO8(edx);
    SET_LO8(edx, MEM8(eax + 5));
    ecx = MEM32(esp + 0x1C);
    MEM8(esi) = LO8(edx);
    SET_LO8(edx, MEM8(eax + 6));
    MEM8(ecx) = LO8(edx);
    SET_LO8(edx, MEM8(eax + 7));
    MEM8(edi) = LO8(edx);
    edx = ZX8(MEM8(eax + 9));
    SET_HI8(edx, MEM8(eax + 8));
    edi = ZX8(MEM8(eax + 0xA));
    edx = edx << 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx | edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edi = ZX8(MEM8(eax + 0xB));
    edx = edx << 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx | edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edi = MEM32(esp + 0x28);
    MEM32(edi) = edx;
    edi = ZX8(MEM8(eax + 0xE));
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_HI8(edx, MEM8(eax + 0xC));
    SET_LO8(edx, MEM8(eax + 0xD));
    eax = ZX8(MEM8(eax + 0xF));
    edx = edx << 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx | edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = edx << 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx | eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = MEM32(esp + 0x2C);
    MEM32(eax) = edx;
    SET_LO8(ecx, MEM8(ecx));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002BFABF; /* jne: not equal / not zero */

loc_002BFAB0: ;
    ecx = MEM32(esp + 0x30);
    POP32(esp, edi);
    MEM32(ecx) = 0;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_002BFABF: ;
    eax = (uint32_t)(int32_t)SMEM8(esi);
    eax = eax * 8 + -16;
    ecx = SX8(LO8(ecx));
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    edx = MEM32(esp + 0x30);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(edx) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_002BFAE0
 * Original: 0x002BFAE0 - 0x002BFB30 (80 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BFAE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002BFAE0: ;
    _fa = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x12) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 8), 0x12 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002BFB18; /* jl: less (signed <) */

loc_002BFAE7: ;
    ecx = MEM32(esp + 4);
    SET_LO16(eax, ZX8(MEM8(ecx + 1)));
    SET_HI8(eax, MEM8(ecx));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x8000) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0x8000 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002BFAFE; /* je: equal / zero */

loc_002BFAF8: ;
    eax = 0xFFFFFFFEu;
    esp += 4; return; /* ret */

loc_002BFAFE: ;
    SET_LO16(eax, MEM16(ecx + 2));
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_HI8(ebx, LO8(eax));
    edx = ZX16(LO16(eax));
    edx = edx >> 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = SX16(LO16(ebx));
    edx = edx | eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xE (32-bit) */
    POP32(esp, ebx);
    if (CMP_GE(_fas, _fbs)) goto loc_002BFB1C; /* jge: greater or equal (signed >=) */

loc_002BFB18: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 4; return; /* ret */

loc_002BFB1C: ;
    SET_LO16(eax, MEM16(ecx + 0x10));
    edx = MEM32(esp + 0xC);
    SET_LO16(ecx, ZX8(HI8(eax)));
    SET_HI8(ecx, LO8(eax));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM16(edx) = LO16(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002BFB30
 * Original: 0x002BFB30 - 0x002BFB81 (81 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_002BFB30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002BFB30: ;
    _fa = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 8), 0x14 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002BFB68; /* jl: less (signed <) */

loc_002BFB37: ;
    ecx = MEM32(esp + 4);
    SET_LO16(eax, ZX8(MEM8(ecx + 1)));
    SET_HI8(eax, MEM8(ecx));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x8000) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0x8000 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002BFB4E; /* je: equal / zero */

loc_002BFB48: ;
    eax = 0xFFFFFFFEu;
    esp += 4; return; /* ret */

loc_002BFB4E: ;
    SET_LO16(eax, MEM16(ecx + 2));
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_HI8(ebx, LO8(eax));
    edx = ZX16(LO16(eax));
    edx = edx >> 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = SX16(LO16(ebx));
    edx = edx | eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x10 (32-bit) */
    POP32(esp, ebx);
    if (CMP_GE(_fas, _fbs)) goto loc_002BFB6C; /* jge: greater or equal (signed >=) */

loc_002BFB68: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 4; return; /* ret */

loc_002BFB6C: ;
    SET_LO8(edx, MEM8(ecx + 0x12));
    eax = MEM32(esp + 0xC);
    MEM8(eax) = LO8(edx);
    SET_LO8(ecx, MEM8(ecx + 0x13));
    edx = MEM32(esp + 0x10);
    MEM8(edx) = LO8(ecx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_002BFB90
 * Original: 0x002BFB90 - 0x002BFC52 (194 bytes, 72 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BFB90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002BFB90: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x14 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002BFBEA; /* jl: less (signed <) */

loc_002BFB9B: ;
    eax = MEM32(esp + 0xC);
    SET_LO16(ecx, ZX8(MEM8(eax + 1)));
    SET_HI8(ecx, MEM8(eax));
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(0x8000) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 0x8000 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002BFBEA; /* jne: not equal / not zero */

loc_002BFBAD: ;
    SET_LO16(ecx, MEM16(eax + 2));
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_HI8(ebx, LO8(ecx));
    edx = ZX16(LO16(ecx));
    edx = edx >> 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = SX16(LO16(ebx));
    edx = edx | ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x10 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002BFBEA; /* jl: less (signed <) */

loc_002BFBC5: ;
    SET_LO8(ecx, MEM8(eax + 0x12));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 4 (8-bit) */
    if (CMP_B(_fa, _fb)) goto loc_002BFC35; /* jb: below (unsigned <) */

loc_002BFBCD: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x20 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002BFBEA; /* jl: less (signed <) */

loc_002BFBD2: ;
    SET_LO16(ecx, MEM16(eax + 2));
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_HI8(ebx, LO8(ecx));
    edx = ZX16(LO16(ecx));
    edx = edx >> 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = SX16(LO16(ebx));
    edx = edx | ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x1C (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002BFBF0; /* jge: greater or equal (signed >=) */

loc_002BFBEA: ;
    POP32(esp, esi);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_002BFBF0: ;
    SET_LO16(ecx, MEM16(eax + 0x18));
    esi = MEM32(esp + 0x14);
    SET_LO16(edx, ZX8(HI8(ecx)));
    SET_HI8(edx, LO8(ecx));
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x1C);
    MEM16(esi) = LO16(edx);
    SET_LO16(ecx, MEM16(eax + 0x1A));
    SET_LO16(edx, ZX8(HI8(ecx)));
    SET_HI8(edx, LO8(ecx));
    MEM16(edi) = LO16(edx);
    SET_LO16(ecx, MEM16(eax + 0x1C));
    SET_LO16(edx, ZX8(HI8(ecx)));
    SET_HI8(edx, LO8(ecx));
    MEM16(esi + 2) = LO16(edx);
    SET_LO16(eax, MEM16(eax + 0x1E));
    SET_LO16(ecx, ZX8(HI8(eax)));
    SET_HI8(ecx, LO8(eax));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM16(edi + 2) = LO16(ecx);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_002BFC35: ;
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x14);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM16(eax + 2) = LO16(edx);
    MEM16(ecx + 2) = LO16(edx);
    MEM16(eax) = LO16(edx);
    POP32(esp, esi);
    MEM16(ecx) = LO16(edx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002BFC60
 * Original: 0x002BFC60 - 0x002BFE17 (439 bytes, 160 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: standard_frame
 */
void sub_002BFC60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002BFC60: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x14 (32-bit) */
    MEM16(ebp) = 0;
    if (CMP_GE(_fas, _fbs)) goto loc_002BFC7D; /* jge: greater or equal (signed >=) */

loc_002BFC76: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_002BFC7D: ;
    esi = MEM32(esp + 0x10);
    SET_LO16(eax, ZX8(MEM8(esi + 1)));
    SET_HI8(eax, MEM8(esi));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x8000) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0x8000 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002BFC97; /* je: equal / zero */

loc_002BFC8E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0xFFFFFFFEu;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_002BFC97: ;
    SET_LO16(eax, MEM16(esi + 2));
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_HI8(edx, LO8(eax));
    ecx = ZX16(LO16(eax));
    ecx = ecx >> 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = SX16(LO16(edx));
    ecx = ecx | eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x10 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002BFC76; /* jl: less (signed <) */

loc_002BFCAF: ;
    SET_LO8(edx, MEM8(esi + 0x12));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 4 (8-bit) */
    ecx = 0x30;
    if (CMP_NE(_fa, _fb)) goto loc_002BFCC1; /* jne: not equal / not zero */

loc_002BFCBC: ;
    ecx = 0x3C;

loc_002BFCC1: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002BFC76; /* jl: less (signed <) */

loc_002BFCC5: ;
    SET_LO16(eax, MEM16(esi + 2));
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_HI8(ebx, LO8(eax));
    edi = ZX16(LO16(eax));
    edi = edi >> 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFFCu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = SX16(LO16(ebx));
    edi = edi | eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002BFCE8; /* jge: greater or equal (signed >=) */

loc_002BFCE0: ;
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_002BFCE8: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 4 (8-bit) */
    eax = 0x14;
    if (CMP_NE(_fa, _fb)) goto loc_002BFCF7; /* jne: not equal / not zero */

loc_002BFCF2: ;
    eax = 0x20;

loc_002BFCF7: ;
    SET_LO16(ecx, MEM16(eax + esi));
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_HI8(ebx, LO8(ecx));
    edx = ZX16(LO16(ecx));
    edx = edx >> 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = SX16(LO16(ebx));
    edx = edx | ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = MEM32(esp + 0x1C);
    MEM32(ecx) = edx;
    SET_LO16(ecx, MEM16(eax + esi));
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(edi, ZX8(HI8(ecx)));
    SET_HI8(edx, LO8(ecx));
    edi = edi | edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(LO16(edi)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edi), 1 (16-bit) */
    MEM16(ebp) = LO16(edi);
    if (CMP_EQ(_fa, _fb)) goto loc_002BFD35; /* je: equal / zero */

loc_002BFD2B: ;
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0xFFFFFFFEu;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_002BFD35: ;
    SET_LO16(ecx, MEM16(eax + esi + 4));
    SET_LO16(edx, ZX8(HI8(ecx)));
    SET_HI8(edx, LO8(ecx));
    ecx = MEM32(esp + 0x24);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(ecx) = LO16(edx);
    ecx = MEM32(eax + esi + -12);
    edx = ecx;
    MEM32(esp + 0x20) = ecx;
    edx = edx << 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx & 0xFF00;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx | ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = MEM32(esp + 0x20);
    edx = edx << 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx >> 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx | ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_HI8(ecx, MEM8(esp + 0x22));
    POP32(esp, ebx);
    POP32(esp, edi);
    edx = edx | ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = MEM32(esp + 0x20);
    MEM32(ecx) = edx;
    ecx = MEM32(eax + esi + -8);
    edx = ecx;
    MEM32(esp + 0x18) = ecx;
    edx = edx << 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx & 0xFF00;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx | ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = MEM32(esp + 0x18);
    edx = edx << 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx >> 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx | ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_HI8(ecx, MEM8(esp + 0x1A));
    edx = edx | ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = MEM32(esp + 0x24);
    MEM32(ecx) = edx;
    ecx = MEM32(eax + esi + -4);
    edx = ecx;
    MEM32(esp + 0x18) = ecx;
    edx = edx << 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx & 0xFF00;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx | ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = MEM32(esp + 0x18);
    edx = edx << 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx >> 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx | ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_HI8(ecx, MEM8(esp + 0x1A));
    edx = edx | ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = MEM32(esp + 0x28);
    MEM32(ecx) = edx;
    eax = MEM32(eax + esi);
    edx = eax;
    MEM32(esp + 0x18) = eax;
    eax = eax & 0xFF00;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx << 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx | eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = MEM32(esp + 0x18);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_HI8(ecx, MEM8(esp + 0x1A));
    eax = eax >> 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx << 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx | eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = MEM32(esp + 0x2C);
    POP32(esp, esi);
    POP32(esp, ebp);
    edx = edx | ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax) = edx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_002BFE20
 * Original: 0x002BFE20 - 0x002BFF8A (362 bytes, 126 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002BFE20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002BFE20: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x14 (32-bit) */
    MEM32(ebp) = 0;
    if (CMP_GE(_fas, _fbs)) goto loc_002BFE3E; /* jge: greater or equal (signed >=) */

loc_002BFE37: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_002BFE3E: ;
    esi = MEM32(esp + 0x10);
    SET_LO16(eax, ZX8(MEM8(esi + 1)));
    SET_HI8(eax, MEM8(esi));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x8000) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0x8000 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002BFE58; /* je: equal / zero */

loc_002BFE4F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0xFFFFFFFEu;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_002BFE58: ;
    SET_LO16(eax, MEM16(esi + 2));
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_HI8(edx, LO8(eax));
    ecx = ZX16(LO16(eax));
    ecx = ecx >> 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = SX16(LO16(edx));
    ecx = ecx | eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x10 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002BFE37; /* jl: less (signed <) */

loc_002BFE70: ;
    SET_LO8(edx, MEM8(esi + 0x12));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 4 (8-bit) */
    ecx = 0x3C;
    if (CMP_NE(_fa, _fb)) goto loc_002BFE82; /* jne: not equal / not zero */

loc_002BFE7D: ;
    ecx = 0x48;

loc_002BFE82: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002BFE37; /* jl: less (signed <) */

loc_002BFE86: ;
    SET_LO16(eax, MEM16(esi + 2));
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_HI8(ebx, LO8(eax));
    edi = ZX16(LO16(eax));
    edi = edi >> 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFFCu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = SX16(LO16(ebx));
    edi = edi | eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    POP32(esp, ebx);
    if (CMP_L(_fas, _fbs)) goto loc_002BFE37; /* jl: less (signed <) */

loc_002BFEA2: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 4 (8-bit) */
    eax = 0x14;
    if (CMP_NE(_fa, _fb)) goto loc_002BFEB1; /* jne: not equal / not zero */

loc_002BFEAC: ;
    eax = 0x20;

loc_002BFEB1: ;
    SET_LO16(ecx, MEM16(eax + esi + 2));
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_HI8(edx, LO8(ecx));
    edi = ZX16(LO16(ecx));
    edi = edi >> 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = SX16(LO16(edx));
    edi = edi | ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002BFED2; /* je: equal / zero */

loc_002BFECF: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002BFED2: ;
    edx = ZX8(MEM8(eax + esi + 2));
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_HI8(ecx, MEM8(eax + esi));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(ecx, MEM8(eax + esi + -3));
    ecx = ecx << 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx | edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = ZX8(MEM8(eax + esi + -1));
    ecx = ecx << 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx | edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x41494E46) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x41494E46 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002BFE4F; /* jne: not equal / not zero */

loc_002BFEFE: ;
    ecx = MEM32(eax + esi);
    edx = ecx;
    edx = edx << 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(esp + 0x18) = ecx;
    ecx = ecx & 0xFF00;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx | ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = MEM32(esp + 0x18);
    edx = edx << 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx >> 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx | ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_HI8(ecx, MEM8(esp + 0x1A));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = edx | ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = MEM32(esp + 0x1C);
    MEM32(ebp) = edx;
    edx = eax + esi;
    edi = MEM32(edx);
    MEM32(ecx) = edi;
    edi = MEM32(edx + 4);
    MEM32(ecx + 4) = edi;
    edi = MEM32(edx + 8);
    MEM32(ecx + 8) = edi;
    edx = MEM32(edx + 0xC);
    MEM32(ecx + 0xC) = edx;
    SET_LO16(ecx, MEM16(eax + esi + 0x10));
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO16(edx, ZX8(HI8(ecx)));
    SET_HI8(edx, LO8(ecx));
    ecx = MEM32(esp + 0x20);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM16(ecx) = LO16(edx);
    SET_LO16(ecx, MEM16(eax + esi + -2));
    SET_LO16(edx, ZX8(HI8(ecx)));
    SET_HI8(edx, LO8(ecx));
    ecx = MEM32(esp + 0x20);
    MEM16(ecx) = LO16(edx);
    SET_LO16(eax, MEM16(eax + esi));
    SET_LO16(edx, ZX8(HI8(eax)));
    SET_HI8(edx, LO8(eax));
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebp);
    MEM16(ecx + 2) = LO16(edx);
    esp += 4; return; /* ret */

}

/**
 * sub_002BFF90
 * Original: 0x002BFF90 - 0x002BFFCA (58 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_002BFF90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002BFF90: ;
    _fa = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 8), 0x10 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002BFF9B; /* jge: greater or equal (signed >=) */

loc_002BFF97: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 4; return; /* ret */

loc_002BFF9B: ;
    eax = MEM32(esp + 4);
    SET_LO16(ecx, ZX8(MEM8(eax + 1)));
    SET_HI8(ecx, MEM8(eax));
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(0x8001) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 0x8001 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002BFFB3; /* je: equal / zero */

loc_002BFFAD: ;
    eax = 0xFFFFFFFEu;
    esp += 4; return; /* ret */

loc_002BFFB3: ;
    SET_LO16(eax, MEM16(eax + 2));
    SET_LO16(edx, ZX8(HI8(eax)));
    SET_HI8(edx, LO8(eax));
    eax = MEM32(esp + 0xC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax) = LO16(edx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_002BFFD0
 * Original: 0x002BFFD0 - 0x002C000E (62 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002BFFD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002BFFD0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    if (CMP_NE(_fa, _fb)) goto loc_002BFFF5; /* jne: not equal / not zero */

loc_002BFFDD: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 0x14);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax + ecx + 0x21;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_002BFFF5: ;
    ecx = MEM32(esp + 0xC);
    edx = ecx + esi;
    ecx = MEM32(esp + 0x14);
    eax = edx + ecx + 0x39;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002C0000
 * Original: 0x002C0000 - 0x002C000E (14 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002C0000(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002C0000: ;
    eax = edx + ecx + 0x39;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002C0010
 * Original: 0x002C0010 - 0x002C00AA (154 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002C0010(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002C0010: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x38);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x38);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x002C0045u); RECOMP_ABI_CALL(0x002BFC60u, sub_002BFC60); /* call 0x002BFC60 */

loc_002C0045: ;
    eax = MEM32(esp + 0x28);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 1 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002C0054; /* je: equal / zero */

loc_002C0052: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002C0054: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0 (16-bit) */
    ecx = MEM32(esp + 0x28);
    MEM16(ecx) = LO16(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_002C0090; /* je: equal / zero */

loc_002C0060: ;
    eax = MEM32(esp + 8);
    eax = eax & 0x800007FFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fas >= 0)) goto loc_002C0072; /* jns: not sign (positive) */

loc_002C006B: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax | 0xFFFFF800u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_002C0072: ;
    edx = MEM32(esp + 0xC);
    ecx = MEM32(esp + 0x2C);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ecx) = edx;
    edx = MEM32(esp + 0x10);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x30);
    MEM32(eax) = edx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_002C0090: ;
    ecx = MEM32(esp + 0x30);
    edx = MEM32(esp + 0x2C);
    MEM32(ecx) = 0;
    MEM32(edx) = 0;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002C00B0
 * Original: 0x002C00B0 - 0x002C01B8 (264 bytes, 109 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002C00B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002C00B0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x20);
    esi = MEM32(edi + 4);
    ebx = MEM32(edi + 0x14);
    PUSH32(esp, esi);
    PUSH32(esp, 0x002C00C7u); RECOMP_ABI_CALL(0x002BCB90u, sub_002BCB90); /* call 0x002BCB90 */

loc_002C00C7: ;
    PUSH32(esp, esi);
    ebp = eax;
    PUSH32(esp, 0x002C00CFu); RECOMP_ABI_CALL(0x002BCBA0u, sub_002BCBA0); /* call 0x002BCBA0 */

loc_002C00CF: ;
    PUSH32(esp, esi);
    MEM32(esp + 0x2C) = eax;
    PUSH32(esp, 0x002C00D9u); RECOMP_ABI_CALL(0x002BCBC0u, sub_002BCBC0); /* call 0x002BCBC0 */

loc_002C00D9: ;
    MEM32(esp + 0x1C) = eax;
    SET_LO8(eax, MEM8(edi + 2));
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 2 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002C00EB; /* je: equal / zero */

loc_002C00E7: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 3 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002C0108; /* jne: not equal / not zero */

loc_002C00EB: ;
    SET_LO8(eax, MEM8(edi + 0x6C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002C0108; /* jne: not equal / not zero */

loc_002C00F2: ;
    eax = MEM32(edi + 4);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002C00FDu); RECOMP_ABI_CALL(0x002BCA90u, sub_002BCA90); /* call 0x002BCA90 */

loc_002C00FD: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_002C0108: ;
    eax = MEM32(edi + 0x50);
    ecx = MEM32(ebx);
    edx = esp + 0x14;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(ecx + 0x18); PUSH32(esp, 0x002C0119u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002C0116u); } /* indirect call */
    }

loc_002C0119: ;
    ecx = MEM32(esp + 0x28);
    eax = MEM32(edi + 0x50);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002C0134; /* jge: greater or equal (signed >=) */

loc_002C0127: ;
    PUSH32(esp, 0x4C4FE0);
    PUSH32(esp, 0x002C0131u); RECOMP_ABI_CALL(0x002BF770u, sub_002BF770); /* call 0x002BF770 */

loc_002C0131: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002C0134: ;
    edx = MEM32(ebx);
    eax = esp + 0x14;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x002C0141u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002C013Eu); } /* indirect call */
    }

loc_002C0141: ;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x002C0149u); RECOMP_ABI_CALL(0x002BCAB0u, sub_002BCAB0); /* call 0x002BCAB0 */

loc_002C0149: ;
    eax = MEM32(esp + 0x24);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    MEM32(edi + 0x90) = eax;
    PUSH32(esp, 0x002C015Cu); RECOMP_ABI_CALL(0x002BCA90u, sub_002BCA90); /* call 0x002BCA90 */

loc_002C015C: ;
    ecx = MEM32(esp + 0x3C);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x002C0167u); RECOMP_ABI_CALL(0x002BCAD0u, sub_002BCAD0); /* call 0x002BCAD0 */

loc_002C0167: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, 0x002C016Eu); RECOMP_ABI_CALL(0x002BC990u, sub_002BC990); /* call 0x002BC990 */

loc_002C016E: ;
    SET_LO8(eax, MEM8(edi + 2));
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 2 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002C01A0; /* jne: not equal / not zero */

loc_002C0178: ;
    edx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x002C017Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002C017Bu); } /* indirect call */
    }

loc_002C017E: ;
    edx = MEM32(esp + 0x24);
    eax = MEM32(ebx);
    ecx = esp + 0x18;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x002C0190u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002C018Du); } /* indirect call */
    }

loc_002C0190: ;
    eax = MEM32(ebx);
    ecx = esp + 0x28;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x002C019Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002C019Au); } /* indirect call */
    }

loc_002C019D: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002C01A0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002C01A6u); RECOMP_ABI_CALL(0x002BCCF0u, sub_002BCCF0); /* call 0x002BCCF0 */

loc_002C01A6: ;
    eax = MEM32(edi + 0x4C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(edi + 0x4C) = eax;
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
 * sub_002C01C0
 * Original: 0x002C01C0 - 0x002C0235 (117 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002C01C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002C01C0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 4);
    PUSH32(esp, edi);
    edi = MEM32(esi + 8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002C0232; /* je: equal / zero */

loc_002C01D0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002C0232; /* je: equal / zero */

loc_002C01D4: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002C01DAu); RECOMP_ABI_CALL(0x002BCBA0u, sub_002BCBA0); /* call 0x002BCBA0 */

loc_002C01DA: ;
    SET_LO8(ecx, MEM8(esi + 0x6C));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002C021C; /* jne: not equal / not zero */

loc_002C01E4: ;
    eax = MEM32(esi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002C01EDu); RECOMP_ABI_CALL(0x002BC960u, sub_002BC960); /* call 0x002BC960 */

loc_002C01ED: ;
    ecx = MEM32(esi + 0xC0);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002C0208; /* jl: less (signed <) */

loc_002C01FA: ;
    ecx = MEM32(esi + 4);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002C0205u); RECOMP_ABI_CALL(0x002BCA90u, sub_002BCA90); /* call 0x002BCA90 */

loc_002C0205: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002C0208: ;
    edx = MEM32(esi + 8);
    PUSH32(esp, 0x7FFFFFFF);
    PUSH32(esp, edx);
    PUSH32(esp, 0x002C0216u); RECOMP_ABI_CALL(0x002BDD10u, sub_002BDD10); /* call 0x002BDD10 */

loc_002C0216: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_002C021C: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 0x7FF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((0xB) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x002C022Fu); RECOMP_ABI_CALL(0x002BDBE0u, sub_002BDBE0); /* call 0x002BDBE0 */

loc_002C022F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002C0232: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002C0240
 * Original: 0x002C0240 - 0x002C0287 (71 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002C0240(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002C0240: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002C024Eu); RECOMP_ABI_CALL(0x002BCB10u, sub_002BCB10); /* call 0x002BCB10 */

loc_002C024E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002C0268; /* jne: not equal / not zero */

loc_002C0256: ;
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x42);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x002C0263u); RECOMP_ABI_CALL(0x002B6620u, sub_002B6620); /* call 0x002B6620 */

loc_002C0263: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_002C0268: ;
    edx = (uint32_t)(int32_t)SMEM16(esi + 0x42);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x002C0275u); RECOMP_ABI_CALL(0x002B6620u, sub_002B6620); /* call 0x002B6620 */

loc_002C0275: ;
    eax = (uint32_t)(int32_t)SMEM16(esi + 0x44);
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x002C0282u); RECOMP_ABI_CALL(0x002B6620u, sub_002B6620); /* call 0x002B6620 */

loc_002C0282: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002C0290
 * Original: 0x002C0290 - 0x002C04B0 (544 bytes, 221 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002C0290(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002C0290: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    eax = MEM32(ebx + 4);
    MEM32(esp + 0x14) = eax;
    SET_LO8(eax, MEM8(ebx + 0x98));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    PUSH32(esp, esi);
    esi = MEM32(ebx + 0x14);
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_002C04A9; /* je: equal / zero */

loc_002C02B7: ;
    ecx = MEM32(esi);
    edx = esp + 0x20;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, 0x7FFFFFFF);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    MEM32(esp + 0x24) = 0;
    { uint32_t _icall_target = MEM32(ecx + 0x18); PUSH32(esp, 0x002C02D1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002C02CEu); } /* indirect call */
    }

loc_002C02D1: ;
    eax = MEM32(esi);
    ecx = esp + 0x38;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x7FFFFFFF);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x002C02E3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002C02E0u); } /* indirect call */
    }

loc_002C02E3: ;
    eax = MEM32(esp + 0x44);
    ecx = MEM32(esp + 0x40);
    edx = esp + 0x30;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002C02F7u); RECOMP_ABI_CALL(0x002BFF90u, sub_002BFF90); /* call 0x002BFF90 */

loc_002C02F7: ;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002C032A; /* je: equal / zero */

loc_002C02FE: ;
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002C0306u); RECOMP_ABI_CALL(0x002B6EF0u, sub_002B6EF0); /* call 0x002B6EF0 */

loc_002C0306: ;
    edx = MEM32(esi);
    eax = esp + 0x30;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x002C0313u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002C0310u); } /* indirect call */
    }

loc_002C0313: ;
    ecx = MEM32(esi);
    edx = esp + 0x34;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(ecx + 0x1C); PUSH32(esp, 0x002C0320u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002C031Du); } /* indirect call */
    }

loc_002C0320: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_002C032A: ;
    edi = (uint32_t)(int32_t)SMEM16(esp + 0x10);
    ecx = MEM32(esp + 0x24);
    edx = MEM32(esp + 0x20);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ecx);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002C0347u); RECOMP_ABI_CALL(0x002BF970u, sub_002BF970); /* call 0x002BF970 */

loc_002C0347: ;
    ecx = eax;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esp + 0x18) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_002C0359; /* jne: not equal / not zero */

loc_002C0354: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_002C0374;

loc_002C0359: ;
    ecx = MEM32(esp + 0x2C);
    edx = MEM32(esp + 0x28);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002C036Du); RECOMP_ABI_CALL(0x002BF970u, sub_002BF970); /* call 0x002BF970 */

loc_002C036D: ;
    ecx = MEM32(esp + 0x24);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002C0374: ;
    edx = (uint32_t)(int32_t)SMEM16(esp + 0x10);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    edx = (uint32_t)(int32_t)SMEM16(esp + 0x14);
    MEM32(esp + 0x18) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_002C03B8; /* je: equal / zero */

loc_002C0388: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002C03F4; /* je: equal / zero */

loc_002C038C: ;
    eax = MEM32(esi);
    ecx = esp + 0x28;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x002C0399u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002C0396u); } /* indirect call */
    }

loc_002C0399: ;
    edx = MEM32(esi);
    eax = esp + 0x2C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x002C03A6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002C03A3u); } /* indirect call */
    }

loc_002C03A6: ;
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002C03AEu); RECOMP_ABI_CALL(0x002B6EF0u, sub_002B6EF0); /* call 0x002B6EF0 */

loc_002C03AE: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_002C03B8: ;
    ecx = MEM32(esi);
    edx = esp + 0x28;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(ecx + 0x1C); PUSH32(esp, 0x002C03C5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002C03C2u); } /* indirect call */
    }

loc_002C03C5: ;
    eax = esp + 0x3C;
    PUSH32(esp, eax);
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    edx = ecx;
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002C03D8u); RECOMP_ABI_CALL(0x002C2860u, sub_002C2860); /* call 0x002C2860 */

loc_002C03D8: ;
    eax = MEM32(esi);
    ecx = esp + 0x3C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x002C03E5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002C03E2u); } /* indirect call */
    }

loc_002C03E5: ;
    edx = MEM32(esi);
    eax = esp + 0x58;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x002C03F2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002C03EFu); } /* indirect call */
    }

loc_002C03F2: ;
    goto loc_002C0432;

loc_002C03F4: ;
    ecx = MEM32(esi);
    edx = esp + 0x20;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(ecx + 0x20); PUSH32(esp, 0x002C0401u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002C03FEu); } /* indirect call */
    }

loc_002C0401: ;
    edx = MEM32(esp + 0x24);
    eax = esp + 0x44;
    PUSH32(esp, eax);
    ecx = esp + 0x38;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    eax = ecx;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002C0418u); RECOMP_ABI_CALL(0x002C2860u, sub_002C2860); /* call 0x002C2860 */

loc_002C0418: ;
    ecx = MEM32(esi);
    edx = esp + 0x44;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(ecx + 0x20); PUSH32(esp, 0x002C0425u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002C0422u); } /* indirect call */
    }

loc_002C0425: ;
    eax = MEM32(esi);
    ecx = esp + 0x60;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x002C0432u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002C042Fu); } /* indirect call */
    }

loc_002C0432: ;
    esi = MEM32(esp + 0x50);
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002C043Fu); RECOMP_ABI_CALL(0x002BC970u, sub_002BC970); /* call 0x002BC970 */

loc_002C043F: ;
    edx = MEM32(ebx + 0xA4);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    MEM32(ebx + 0xA4) = edx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002C0453u); RECOMP_ABI_CALL(0x002BC280u, sub_002BC280); /* call 0x002BC280 */

loc_002C0453: ;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002C0459u); RECOMP_ABI_CALL(0x002BC240u, sub_002BC240); /* call 0x002BC240 */

loc_002C0459: ;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002C045Fu); RECOMP_ABI_CALL(0x002BD110u, sub_002BD110); /* call 0x002BD110 */

loc_002C045F: ;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002C0465u); RECOMP_ABI_CALL(0x002BC190u, sub_002BC190); /* call 0x002BC190 */

loc_002C0465: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002C047F; /* je: equal / zero */

loc_002C046D: ;
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002C0475u); RECOMP_ABI_CALL(0x002B6EF0u, sub_002B6EF0); /* call 0x002B6EF0 */

loc_002C0475: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_002C047F: ;
    edx = MEM32(ebx + 0x48);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002C0489u); RECOMP_ABI_CALL(0x002BC1F0u, sub_002BC1F0); /* call 0x002BC1F0 */

loc_002C0489: ;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002C048Fu); RECOMP_ABI_CALL(0x002BCB50u, sub_002BCB50); /* call 0x002BCB50 */

loc_002C048F: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002C0496u); RECOMP_ABI_CALL(0x002BCA90u, sub_002BCA90); /* call 0x002BCA90 */

loc_002C0496: ;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002C049Eu); RECOMP_ABI_CALL(0x002BCAD0u, sub_002BCAD0); /* call 0x002BCAD0 */

loc_002C049E: ;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002C04A6u); RECOMP_ABI_CALL(0x002BCAB0u, sub_002BCAB0); /* call 0x002BCAB0 */

loc_002C04A6: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002C04A9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_002C04C0
 * Original: 0x002C04C0 - 0x002C05E3 (291 bytes, 107 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002C04C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002C04C0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = MEM32(esi + 4);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0xC);
    PUSH32(esp, edi);
    MEM32(esp + 0x14) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002C04DFu); RECOMP_ABI_CALL(0x002BEB40u, sub_002BEB40); /* call 0x002BEB40 */

loc_002C04DF: ;
    PUSH32(esp, edi);
    ebx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002C04E7u); RECOMP_ABI_CALL(0x002BEB50u, sub_002BEB50); /* call 0x002BEB50 */

loc_002C04E7: ;
    MEM32(esp + 0x1C) = eax;
    eax = MEM32(esi + 0x48);
    eax = eax << 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x4000 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002C04FF; /* jl: less (signed <) */

loc_002C04FA: ;
    eax = 0x4000;

loc_002C04FF: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002C0529; /* jge: greater or equal (signed >=) */

loc_002C0503: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002C050Du); RECOMP_ABI_CALL(0x002BCB30u, sub_002BCB30); /* call 0x002BCB30 */

loc_002C050D: ;
    ecx = MEM32(esp + 0x18);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_002C0529; /* jle: less or equal (signed <=) */

loc_002C0518: ;
    edx = MEM32(esi + 4);
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002C0521u); RECOMP_ABI_CALL(0x002BC190u, sub_002BC190); /* call 0x002BC190 */

loc_002C0521: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002C055F; /* jne: not equal / not zero */

loc_002C0529: ;
    SET_LO8(eax, MEM8(esi + 0x70));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002C055B; /* jne: not equal / not zero */

loc_002C0530: ;
    SET_LO8(eax, MEM8(esi + 0x72));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002C0557; /* jne: not equal / not zero */

loc_002C0537: ;
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002C053Fu); RECOMP_ABI_CALL(0x002BEB20u, sub_002BEB20); /* call 0x002BEB20 */

loc_002C053F: ;
    MEM32(esi + 0x9C) = 0;
    eax = MEM32(0x735984);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0xA0) = eax;

loc_002C0557: ;
    MEM8(esi + 1) = 3;

loc_002C055B: ;
    MEM8(esi + 0x71) = 1;

loc_002C055F: ;
    ecx = MEM32(esi + 4);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002C0568u); RECOMP_ABI_CALL(0x002BC190u, sub_002BC190); /* call 0x002BC190 */

loc_002C0568: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002C05DC; /* jne: not equal / not zero */

loc_002C0570: ;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002C0576u); RECOMP_ABI_CALL(0x002B6530u, sub_002B6530); /* call 0x002B6530 */

loc_002C0576: ;
    ecx = MEM32(esi + 0x48);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)eax);
    ecx = ecx << 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x14) = ecx;
    if (CMP_LE(_fas, _fbs)) goto loc_002C05DC; /* jle: less or equal (signed <=) */

loc_002C0589: ;
    ebx = esi + 0x18;
    MEM32(esp + 0x10) = eax;
    goto loc_002C0596;

loc_002C0592: ;
    ecx = MEM32(esp + 0x14);

loc_002C0596: ;
    esi = MEM32(ebx);
    edx = MEM32(esi);
    eax = esp + 0x18;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x002C05A6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002C05A3u); } /* indirect call */
    }

loc_002C05A6: ;
    ecx = MEM32(esp + 0x2C);
    edi = MEM32(esp + 0x28);
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
    eax = MEM32(esi);
    ecx = esp + 0x28;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x002C05CBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002C05C8u); } /* indirect call */
    }

loc_002C05CB: ;
    eax = MEM32(esp + 0x2C);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x10) = eax;
    if ((_fa != 0)) goto loc_002C0592; /* jne: not equal / not zero */

loc_002C05DC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_002C05F0
 * Original: 0x002C05F0 - 0x002C068B (155 bytes, 62 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002C05F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002C05F0: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    SET_LO8(eax, MEM8(ebp + 0x6C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002C0620; /* jne: not equal / not zero */

loc_002C05FC: ;
    eax = MEM32(ebp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002C0605u); RECOMP_ABI_CALL(0x002BC960u, sub_002BC960); /* call 0x002BC960 */

loc_002C0605: ;
    ecx = MEM32(ebp + 0xC0);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002C0620; /* jl: less (signed <) */

loc_002C0612: ;
    ecx = MEM32(ebp + 4);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002C061Du); RECOMP_ABI_CALL(0x002BCA90u, sub_002BCA90); /* call 0x002BCA90 */

loc_002C061D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002C0620: ;
    edx = MEM32(ebp + 4);
    PUSH32(esp, edx);
    PUSH32(esp, 0x002C0629u); RECOMP_ABI_CALL(0x002BC190u, sub_002BC190); /* call 0x002BC190 */

loc_002C0629: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002C0689; /* jne: not equal / not zero */

loc_002C0631: ;
    eax = MEM32(ebp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002C063Cu); RECOMP_ABI_CALL(0x002BCB10u, sub_002BCB10); /* call 0x002BCB10 */

loc_002C063C: ;
    edi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(0x78B838) = edi;
    if (CMP_LE(_fas, _fbs)) goto loc_002C0671; /* jle: less or equal (signed <=) */

loc_002C064D: ;
    PUSH32(esp, esi);
    esi = ebp + 0x18;

loc_002C0651: ;
    eax = MEM32(esi);
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 0x24); PUSH32(esp, 0x002C065Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002C0658u); } /* indirect call */
    }

loc_002C065B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x40 (32-bit) */
    MEM32(0x78B828) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_002C0670; /* jge: greater or equal (signed >=) */

loc_002C0668: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002C0651; /* jl: less (signed <) */

loc_002C0670: ;
    POP32(esp, esi);

loc_002C0671: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    POP32(esp, edi);
    POP32(esp, ebx);
    if (CMP_NE(_fa, _fb)) goto loc_002C0689; /* jne: not equal / not zero */

loc_002C0677: ;
    edx = MEM32(ebp + 0xC);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x002C0682u); RECOMP_ABI_CALL(0x002BEB10u, sub_002BEB10); /* call 0x002BEB10 */

loc_002C0682: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(ebp + 1) = 4;

loc_002C0689: ;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_002C0690
 * Original: 0x002C0690 - 0x002C06C7 (55 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002C0690(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002C0690: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002C069Eu); RECOMP_ABI_CALL(0x002BEB40u, sub_002BEB40); /* call 0x002BEB40 */

loc_002C069E: ;
    MEM32(0x78B83C) = eax;
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002C06ACu); RECOMP_ABI_CALL(0x002BEB40u, sub_002BEB40); /* call 0x002BEB40 */

loc_002C06AC: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_002C06C5; /* jg: greater (signed >) */

loc_002C06B3: ;
    edx = MEM32(esi + 0xC);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x002C06BEu); RECOMP_ABI_CALL(0x002BEB20u, sub_002BEB20); /* call 0x002BEB20 */

loc_002C06BE: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(esi + 1) = 5;

loc_002C06C5: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002C06D0
 * Original: 0x002C06D0 - 0x002C06D1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002C06D0(void)
{

loc_002C06D0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002C06E0
 * Original: 0x002C06E0 - 0x002C0787 (167 bytes, 64 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002C06E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002C06E0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002C06E6u); RECOMP_ABI_CALL(0x002BEA50u, sub_002BEA50); /* call 0x002BEA50 */

loc_002C06E6: ;
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0xC);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002C06F5u); RECOMP_ABI_CALL(0x002BEB10u, sub_002BEB10); /* call 0x002BEB10 */

loc_002C06F5: ;
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002C0700u); RECOMP_ABI_CALL(0x002BEB20u, sub_002BEB20); /* call 0x002BEB20 */

loc_002C0700: ;
    edx = MEM32(esi + 4);
    PUSH32(esp, edx);
    PUSH32(esp, 0x002C0709u); RECOMP_ABI_CALL(0x002BC280u, sub_002BC280); /* call 0x002BC280 */

loc_002C0709: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x002C0711u); RECOMP_ABI_CALL(0x002BEA60u, sub_002BEA60); /* call 0x002BEA60 */

loc_002C0711: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002C072A; /* je: equal / zero */

loc_002C0718: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002C071Eu); RECOMP_ABI_CALL(0x002BE8A0u, sub_002BE8A0); /* call 0x002BE8A0 */

loc_002C071E: ;
    eax = MEM32(esi + 0x14);
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 0x14); PUSH32(esp, 0x002C0727u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002C0724u); } /* indirect call */
    }

loc_002C0727: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002C072A: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x002C0730u); RECOMP_ABI_CALL(0x002BEA50u, sub_002BEA50); /* call 0x002BEA50 */

loc_002C0730: ;
    SET_LO8(eax, MEM8(esi + 3));
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_002C0758; /* jle: less or equal (signed <=) */

loc_002C0739: ;
    PUSH32(esp, ebx);
    ebx = esi + 0x18;
    /* nop */

loc_002C0740: ;
    eax = MEM32(ebx);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x002C0748u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002C0745u); } /* indirect call */
    }

loc_002C0748: ;
    eax = (uint32_t)(int32_t)SMEM8(esi + 3);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002C0740; /* jl: less (signed <) */

loc_002C0757: ;
    POP32(esp, ebx);

loc_002C0758: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_002C0774; /* je: equal / zero */

loc_002C0760: ;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002C0768u); RECOMP_ABI_CALL(0x002BDBE0u, sub_002BDBE0); /* call 0x002BDBE0 */

loc_002C0768: ;
    ecx = MEM32(esi + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002C0771u); RECOMP_ABI_CALL(0x002BE5E0u, sub_002BE5E0); /* call 0x002BE5E0 */

loc_002C0771: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002C0774: ;
    edx = MEM32(esi + 0x14);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x002C077Eu); RECOMP_ABI_CALL(0x002B4D80u, sub_002B4D80); /* call 0x002B4D80 */

loc_002C077E: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_002BEA60(); return; /* tail jmp 0x002BEA60 */

}

/**
 * sub_002C0790
 * Original: 0x002C0790 - 0x002C08FC (364 bytes, 131 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002C0790(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002C0790: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = (uint32_t)(int32_t)SMEM8(esi + 1);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002C0817; /* jne: not equal / not zero */

loc_002C07A2: ;
    _fa = (uint32_t)(MEM8(esi + 0x72)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x72), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002C0817; /* jne: not equal / not zero */

loc_002C07A7: ;
    eax = MEM32(esi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002C07B0u); RECOMP_ABI_CALL(0x002BC190u, sub_002BC190); /* call 0x002BC190 */

loc_002C07B0: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002C0817; /* je: equal / zero */

loc_002C07B7: ;
    ecx = MEM32(esi + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002C07C0u); RECOMP_ABI_CALL(0x002BC970u, sub_002BC970); /* call 0x002BC970 */

loc_002C07C0: ;
    ecx = MEM32(esi + 0x64);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002C07E7; /* jne: not equal / not zero */

loc_002C07CA: ;
    MEM16(esi + 0x68) = MEM16(esi + 0x68) + 1;
    _fa = (uint32_t)(MEM16(esi + 0x68)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    SET_LO16(edx, MEM16(esi + 0x68));
    ecx = MEM32(esi + 0x38);
    edx = SX16(LO16(edx));
    ecx = ecx + ecx * 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_002C07EB; /* jle: less or equal (signed <=) */

loc_002C07DF: ;
    MEM16(esi + 0x60) = 0xFFFE;
    goto loc_002C07EB;

loc_002C07E7: ;
    MEM16(esi + 0x68) = LO16(ebx);

loc_002C07EB: ;
    _fa = (uint32_t)(MEM16(esi + 0x60)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 0x60), LO16(ebx) (16-bit) */
    MEM32(esi + 0x64) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_002C082D; /* je: equal / zero */

loc_002C07F4: ;
    SET_LO8(eax, MEM8(esi + 0x6D));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002C07FF; /* je: equal / zero */

loc_002C07FB: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 2 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002C0808; /* jne: not equal / not zero */

loc_002C07FF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002C0805u); RECOMP_ABI_CALL(0x002B6290u, sub_002B6290); /* call 0x002B6290 */

loc_002C0805: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002C0808: ;
    _fa = (uint32_t)(MEM8(esi + 0x6D)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x6D), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002C082D; /* je: equal / zero */

loc_002C080D: ;
    MEM16(esi + 0x60) = LO16(ebx);
    MEM16(esi + 0x68) = LO16(ebx);
    goto loc_002C082D;

loc_002C0817: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 1 (32-bit) */
    MEM16(esi + 0x68) = LO16(ebx);
    if (CMP_L(_fas, _fbs)) goto loc_002C08B6; /* jl: less (signed <) */

loc_002C0824: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 3 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_002C08B6; /* jg: greater (signed >) */

loc_002C082D: ;
    _fa = (uint32_t)(MEM8(esi + 0x72)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x72), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002C08B6; /* jne: not equal / not zero */

loc_002C0836: ;
    eax = MEM32(esi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002C083Fu); RECOMP_ABI_CALL(0x002BC190u, sub_002BC190); /* call 0x002BC190 */

loc_002C083F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002C08B6; /* je: equal / zero */

loc_002C0847: ;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002C085E; /* je: equal / zero */

loc_002C084E: ;
    ecx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ecx + 0x24); PUSH32(esp, 0x002C0856u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002C0853u); } /* indirect call */
    }

loc_002C0856: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x40 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002C08B6; /* jge: greater or equal (signed >=) */

loc_002C085E: ;
    MEM16(esi + 0x6A) = MEM16(esi + 0x6A) + 1;
    _fa = (uint32_t)(MEM16(esi + 0x6A)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 3 (32-bit) */
    SET_LO16(eax, MEM16(esi + 0x6A));
    ecx = MEM32(esi + 0x38);
    if (CMP_NE(_fa, _fb)) goto loc_002C0878; /* jne: not equal / not zero */

loc_002C086E: ;
    eax = SX16(LO16(eax));
    edx = ecx + ecx * 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    goto loc_002C0883;

loc_002C0878: ;
    ecx = ecx + ecx * 4;
    edx = SX16(LO16(eax));
    ecx = ecx << 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */

loc_002C0883: ;
    if (CMP_LE(_fas, _fbs)) goto loc_002C088B; /* jle: less or equal (signed <=) */

loc_002C0885: ;
    MEM16(esi + 0x60) = 0xFFFF;

loc_002C088B: ;
    _fa = (uint32_t)(MEM16(esi + 0x60)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 0x60), LO16(ebx) (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002C08BA; /* je: equal / zero */

loc_002C0891: ;
    SET_LO8(eax, MEM8(esi + 0x6D));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002C08A0; /* jne: not equal / not zero */

loc_002C0898: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002C089Eu); RECOMP_ABI_CALL(0x002B6290u, sub_002B6290); /* call 0x002B6290 */

loc_002C089E: ;
    goto loc_002C08AA;

loc_002C08A0: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 2 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002C08AD; /* jne: not equal / not zero */

loc_002C08A4: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002C08AAu); RECOMP_ABI_CALL(0x002C06E0u, sub_002C06E0); /* call 0x002C06E0 */

loc_002C08AA: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002C08AD: ;
    _fa = (uint32_t)(MEM8(esi + 0x6D)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x6D), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002C08BA; /* je: equal / zero */

loc_002C08B2: ;
    MEM16(esi + 0x60) = LO16(ebx);

loc_002C08B6: ;
    MEM16(esi + 0x6A) = LO16(ebx);

loc_002C08BA: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002C08F8; /* je: equal / zero */

loc_002C08C1: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002C08C7u); RECOMP_ABI_CALL(0x002BDBC0u, sub_002BDBC0); /* call 0x002BDBC0 */

loc_002C08C7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002C08F8; /* jne: not equal / not zero */

loc_002C08CF: ;
    SET_LO8(eax, MEM8(esi + 0x6D));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002C08DE; /* jne: not equal / not zero */

loc_002C08D6: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002C08DCu); RECOMP_ABI_CALL(0x002B6290u, sub_002B6290); /* call 0x002B6290 */

loc_002C08DC: ;
    goto loc_002C08E8;

loc_002C08DE: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 2 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002C08EB; /* jne: not equal / not zero */

loc_002C08E2: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002C08E8u); RECOMP_ABI_CALL(0x002C06E0u, sub_002C06E0); /* call 0x002C06E0 */

loc_002C08E8: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002C08EB: ;
    _fa = (uint32_t)(MEM8(esi + 0x6D)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x6D), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002C08F8; /* je: equal / zero */

loc_002C08F0: ;
    MEM16(esi + 0x60) = LO16(ebx);
    MEM16(esi + 0x6A) = LO16(ebx);

loc_002C08F8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002C0900
 * Original: 0x002C0900 - 0x002C0948 (72 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002C0900(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002C0900: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002C0924; /* je: equal / zero */

loc_002C090C: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002C0912u); RECOMP_ABI_CALL(0x002BDBC0u, sub_002BDBC0); /* call 0x002BDBC0 */

loc_002C0912: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002C0924; /* jne: not equal / not zero */

loc_002C091A: ;
    MEM16(esi + 0x60) = 0xFFFF;
    MEM8(esi + 1) = 6;

loc_002C0924: ;
    eax = MEM32(esi + 0x94);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002C0946; /* je: equal / zero */

loc_002C092E: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x002C0934u); RECOMP_ABI_CALL(0x002BF3B0u, sub_002BF3B0); /* call 0x002BF3B0 */

loc_002C0934: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002C0946; /* jne: not equal / not zero */

loc_002C093C: ;
    MEM16(esi + 0x60) = 0xFFFF;
    MEM8(esi + 1) = 6;

loc_002C0946: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}
