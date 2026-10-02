/**
 * Mortal Kombat: Shaolin Monks (Xbox) - recompiled game entry point
 *
 * Boot order (same on every host):
 *   load default.xbe -> xbox_MemoryLayoutInit -> xbox_kernel_init ->
 *   xbox_path_init -> xbox_kernel_bridge_init -> g_esp = XBOX_STACK_TOP ->
 *   recomp_dispatch_init -> xbe_entry_point()
 */

#ifdef _WIN32
#  include <windows.h>
#  include <dbghelp.h>
#elif !defined(__SWITCH__)
#  include <signal.h>
#  include <unistd.h>
#endif

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#include <xbox/xboxrecomp.h>

#ifdef __SWITCH__
/* libnx lives in switch_nx.c: <switch.h> and the Win32 vocabulary collide. */
void switch_boot(void);
void switch_shutdown(void);
#endif

extern RECOMP_TLS uint32_t g_eax, g_ecx, g_edx, g_esp;
extern RECOMP_TLS uint32_t g_ebx, g_esi, g_edi;
extern ptrdiff_t g_xbox_mem_offset;
extern volatile uint32_t g_icall_trace[16];
extern volatile uint32_t g_icall_trace_idx;

typedef struct MCPXAPUState MCPXAPUState;
extern MCPXAPUState *mcpx_apu_init_standalone(uint8_t *ram_ptr);
extern MCPXAPUState *g_apu_state;

#define MKSM_ENTRY_POINT  0x000F40CAu   /* MK:SM Xbox retail entry point */


extern void xbe_entry_point(void);
extern int recomp_dispatch_init(void);
extern void xbox_path_init(const char *game_dir, const char *save_dir);

#if defined(__SWITCH__)
#  define MKSM_DEFAULT_GAME_DIR "sdmc:/switch/mksm/game"
#  define MKSM_DEFAULT_SAVE_DIR "sdmc:/switch/mksm/save"
#else
#  define MKSM_DEFAULT_GAME_DIR "game"
#  define MKSM_DEFAULT_SAVE_DIR NULL
#endif

/* ------------------------------------------------------------------ */
/* Crash reporting                                                     */
/* ------------------------------------------------------------------ */

void print_guest_state(void)
{
    fprintf(stderr, "  guest: eax=%08X ecx=%08X edx=%08X ebx=%08X\n",
            g_eax, g_ecx, g_edx, g_ebx);
    fprintf(stderr, "         esi=%08X edi=%08X esp=%08X\n",
            g_esi, g_edi, g_esp);

    if (g_xbox_mem_offset && g_esp >= XBOX_STACK_BASE
            && g_esp < XBOX_STACK_BASE + XBOX_STACK_SIZE) {
        const uint32_t *sp =
            (const uint32_t *)((uintptr_t)g_xbox_mem_offset + g_esp);
        int shown = 0, i;
        fprintf(stderr, "  guest stack (return addresses, innermost first):\n");
        for (i = 0; i < 512 && shown < 24; i++) {
            uint32_t v = sp[i];
            if (g_esp + (uint32_t)i * 4u >= XBOX_STACK_BASE + XBOX_STACK_SIZE)
                break;
            if (v > g_xbox_code_lo && v < g_xbox_code_hi) {
                fprintf(stderr, "    [esp+%-4d] 0x%08X\n", i * 4, v);
                shown++;
            }
        }
    }
    {
        unsigned k;
        fprintf(stderr, "  recent ICALL targets:");
        for (k = 0; k < 16; k++)
            fprintf(stderr, " %08X", g_icall_trace[(g_icall_trace_idx + k) & 15]);
        fprintf(stderr, "\n");
    }
    fflush(stderr);
}

#ifdef _WIN32
static LONG CALLBACK veh_handler(PEXCEPTION_POINTERS ep)
{
    if (ep->ExceptionRecord->ExceptionCode == EXCEPTION_ACCESS_VIOLATION) {
        uintptr_t fault = ep->ExceptionRecord->ExceptionInformation[1];

        if (fault >= 0xFD000000 && fault < 0xFE000000)
            return EXCEPTION_CONTINUE_SEARCH;

        fprintf(stderr, "[CRASH] access violation at RIP=0x%llX, %s 0x%llX "
                        "(guest VA 0x%08X)\n",
                (unsigned long long)ep->ContextRecord->Rip,
                ep->ExceptionRecord->ExceptionInformation[0] ? "write" : "read",
                (unsigned long long)fault,
                (uint32_t)(fault - (uintptr_t)g_xbox_mem_offset));
        print_guest_state();
        fflush(stderr);
    }
    return EXCEPTION_CONTINUE_SEARCH;
}
#elif !defined(__SWITCH__)
static void sig_handler(int sig, siginfo_t *si, void *ctx)
{
    fprintf(stderr, "[CRASH] signal %d at address %p\n", sig, si->si_addr);
    print_guest_state();
    fflush(stderr);
    _exit(128 + sig);
}
#endif

/* Helper to read file into memory */
static void *read_entire_file(const char *path, size_t *out_size)
{
    FILE *f = fopen(path, "rb");
    if (!f) return NULL;
    fseek(f, 0, SEEK_END);
    long sz = ftell(f);
    fseek(f, 0, SEEK_SET);
    if (sz <= 0) { fclose(f); return NULL; }
    void *buf = malloc((size_t)sz);
    if (!buf) { fclose(f); return NULL; }
    if (fread(buf, 1, (size_t)sz, f) != (size_t)sz) {
        free(buf);
        fclose(f);
        return NULL;
    }
    fclose(f);
    *out_size = (size_t)sz;
    return buf;
}

/* ------------------------------------------------------------------ */
/* main                                                                */
/* ------------------------------------------------------------------ */

int main(int argc, char **argv)
{
    const char *game_dir, *save_dir;
    char xbe_path[512];

#ifdef _WIN32
    SymInitialize(GetCurrentProcess(), NULL, TRUE);
    AddVectoredExceptionHandler(1, veh_handler);
#elif !defined(__SWITCH__)
    {
        struct sigaction sa = {0};
        sa.sa_sigaction = sig_handler;
        sa.sa_flags = SA_SIGINFO;
        sigaction(SIGSEGV, &sa, NULL);
        sigaction(SIGBUS, &sa, NULL);
        sigaction(SIGABRT, &sa, NULL);
    }
#endif

#ifdef __SWITCH__
    switch_boot();

    /* Automatically find default.xbe on SD card */
    FILE *test_xbe = fopen("sdmc:/switch/mksm/default.xbe", "rb");
    if (test_xbe) {
        fclose(test_xbe);
        game_dir = "sdmc:/switch/mksm";
    } else {
        test_xbe = fopen("sdmc:/switch/mksm/game/default.xbe", "rb");
        if (test_xbe) {
            fclose(test_xbe);
            game_dir = "sdmc:/switch/mksm/game";
        } else {
            game_dir = "sdmc:/switch/mksm";
        }
    }
    save_dir = "sdmc:/switch/mksm/save";
#else
    game_dir = getenv("MKSM_GAME_DIR");
    if (!game_dir) game_dir = MKSM_DEFAULT_GAME_DIR;
    save_dir = getenv("MKSM_SAVE_DIR");
    if (!save_dir) save_dir = MKSM_DEFAULT_SAVE_DIR;
#endif

    fprintf(stderr, "[MKSM] game dir: %s\n", game_dir);
    fprintf(stderr, "[MKSM] save dir: %s\n", save_dir ? save_dir : "(same as game)");

    snprintf(xbe_path, sizeof(xbe_path), "%s/default.xbe", game_dir);
    size_t xbe_size = 0;
    void *xbe_data = read_entire_file(xbe_path, &xbe_size);
    if (!xbe_data) {
        fprintf(stderr, "[MKSM] Warning: could not load %s, attempting memory init without file...\n", xbe_path);
    } else {
        fprintf(stderr, "[MKSM] Successfully loaded %s (%zu bytes)\n", xbe_path, xbe_size);
    }
    fflush(stderr);

    if (!xbox_MemoryLayoutInit(xbe_data, xbe_size)) {
        fprintf(stderr, "[MKSM] FATAL: xbox_MemoryLayoutInit failed!\n");
        fflush(stderr);
#ifdef __SWITCH__
        switch_shutdown();
#endif
        return 1;
    }
    fprintf(stderr, "[MKSM] Memory layout initialized successfully.\n");
    fflush(stderr);

    xbox_kernel_init();
    xbox_path_init(game_dir, save_dir);
    xbox_kernel_bridge_init();

#if !defined(_WIN32)
#  if defined(MKSM_VULKAN)
    extern void nv2a_vk_install(void);
    nv2a_vk_install();
    fprintf(stderr, "[MKSM] GPU Hardware Renderer: Vulkan backend installed.\n");
#  else
    extern void nv2a_gl_install(void);
    nv2a_gl_install();
    fprintf(stderr, "[MKSM] GPU Hardware Renderer: OpenGL / EGL backend installed.\n");
#  endif
#endif

    /* APU (audio) */
    if (xbox_GetMemoryBase()) {
        g_apu_state = mcpx_apu_init_standalone((uint8_t *)xbox_GetMemoryBase());
        if (g_apu_state) {
            fprintf(stderr, "[MKSM] Emulated APU initialized.\n");
        }
    }

    g_esp = XBOX_STACK_TOP;

    recomp_dispatch_init();
    fprintf(stderr, "[MKSM] Dispatch table ready.\n");
    fprintf(stderr, "[MKSM] Launching MK: Shaolin Monks (entry 0x%08X)...\n",
            MKSM_ENTRY_POINT);
    fflush(stderr);

    xbe_entry_point();

    fprintf(stderr, "[MKSM] Game returned.\n");

    if (xbe_data) free(xbe_data);

#ifdef __SWITCH__
    switch_shutdown();
#endif
    return 0;
}
