/**
 * Switch (libnx) platform layer for MK: Shaolin Monks
 *
 * - Log device (stdout/stderr → SD card mksm_log.txt with buffered sync)
 * - Environment file reader (mksm_env.txt)
 * - Video display / Framebuffer presenter (60Hz blit & aspect scale to 1280x720)
 * - Audio output driver (libnx audout - 48kHz stereo 16-bit PCM)
 * - Boot / shutdown
 */

#ifdef __SWITCH__

#include <switch.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <sys/stat.h>
#include <sys/iosupport.h>
#include <fcntl.h>
#include <unistd.h>

static int s_log_fd = -1;

uint8_t *g_switch_ram = NULL;
uint8_t *g_switch_contig = NULL;
uint8_t *g_switch_nv2a = NULL;
uint8_t *g_switch_mcpx = NULL;
uint8_t *g_switch_flash = NULL;

/* ================================================================
 * Video Display & Presentation Layer (libnx Native Framebuffer)
 * ================================================================ */
static Framebuffer s_switch_fb;
static Thread s_present_thread;
static volatile bool s_present_running = false;
static volatile bool s_present_ready = false;
static volatile uint32_t s_xbox_fb_va = 0;
static volatile uint32_t s_xbox_fb_pitch = 2560;

static inline uintptr_t switch_translate_xbox_ptr(uint32_t a)
{
    if (__builtin_expect(a < 0x08000000u, 1)) {
        return (uintptr_t)g_switch_ram + (a & 0x03FFFFFFu);
    }
    if (a >= 0x80000000u && a < 0x84000000u) {
        return (uintptr_t)g_switch_contig + ((a - 0x80000000u) & 0x03FFFFFFu);
    }
    if (a >= 0xFD000000u && a < 0xFE000000u) {
        return (uintptr_t)g_switch_nv2a + (a - 0xFD000000u);
    }
    if (a >= 0xFE800000u && a < 0xFF000000u) {
        return (uintptr_t)g_switch_mcpx + (a - 0xFE800000u);
    }
    if (a >= 0xFF000000u) {
        return (uintptr_t)g_switch_flash + (a & 0x000FFFFFu);
    }
    return (uintptr_t)g_switch_ram + (a & 0x03FFFFFFu);
}

static void switch_blit_frame(uint32_t *dst, u32 dst_stride_bytes, uint32_t fb_va, uint32_t pitch)
{
    if (!dst || !fb_va || !g_switch_contig) return;

    const uint8_t *src_base = (const uint8_t *)switch_translate_xbox_ptr(fb_va);
    u32 dst_stride_px = dst_stride_bytes / sizeof(uint32_t);

    /* Xbox: 640x480. Switch screen: 1280x720.
     * 4:3 Aspect ratio on 16:9 screen -> 960x720 centered with 160px pillarboxes on sides. */
    for (u32 y = 0; y < 720; y++) {
        u32 src_y = (y * 480) / 720;
        const uint32_t *src_row = (const uint32_t *)(src_base + src_y * pitch);
        uint32_t *dst_row = dst + y * dst_stride_px;

        /* Left pillarbox (black) */
        for (u32 x = 0; x < 160; x++) {
            dst_row[x] = 0xFF000000u;
        }

        /* 4:3 Active game video area (960 pixels wide) */
        for (u32 x = 160; x < 1120; x++) {
            u32 src_x = ((x - 160) * 640) / 960;
            uint32_t px = src_row[src_x];
            /* Xbox Little-Endian XRGB (0xAARRGGBB) -> Switch RGBA_8888 (0xAABBGGRR) */
            uint32_t b = px & 0xFF;
            uint32_t g = (px >> 8) & 0xFF;
            uint32_t r = (px >> 16) & 0xFF;
            dst_row[x] = 0xFF000000u | (b << 16) | (g << 8) | r;
        }

        /* Right pillarbox (black) */
        for (u32 x = 1120; x < 1280; x++) {
            dst_row[x] = 0xFF000000u;
        }
    }
}

static void switch_present_thread_func(void *arg)
{
    (void)arg;
    fprintf(stderr, "[MKSM-VIDEO] Switch 60Hz presentation thread active!\n");
    fflush(stderr);

    while (s_present_running && appletMainLoop()) {
        u32 stride = 0;
        uint32_t *dst = (uint32_t *)framebufferBegin(&s_switch_fb, &stride);
        if (dst) {
            uint32_t fb_va = s_xbox_fb_va;
            uint32_t pitch = s_xbox_fb_pitch;

            if (fb_va != 0 && g_switch_contig != NULL) {
                switch_blit_frame(dst, stride, fb_va, pitch);
            } else {
                /* Background splash screen while loading resources */
                u32 dst_stride_px = stride / sizeof(uint32_t);
                for (u32 y = 0; y < 720; y++) {
                    uint32_t *dst_row = dst + y * dst_stride_px;
                    for (u32 x = 0; x < 1280; x++) {
                        dst_row[x] = 0xFF140802u; /* Dark MK dragon theme */
                    }
                }
            }
            framebufferEnd(&s_switch_fb);
        }
        svcSleepThread(16000000ULL); /* ~60 FPS (16ms) */
    }
}

void xbox_FramebufferWindowSet(uint32_t fb_va, uint32_t pitch)
{
    s_xbox_fb_va = fb_va;
    if (pitch) s_xbox_fb_pitch = pitch;
}

void xbox_FramebufferWindowPresent(uint32_t fb_va, uint32_t pitch)
{
    s_xbox_fb_va = fb_va;
    if (pitch) s_xbox_fb_pitch = pitch;
}

void xbox_FramebufferWindowSetTitle(const uint16_t *n, int m)
{
    (void)n; (void)m;
}

void xbox_FramebufferWindowFrameStats(uint32_t draws)
{
    (void)draws;
}

int xbox_FramebufferKeyDown(int vk)
{
    (void)vk;
    return 0;
}

void xbox_FramebufferWindowStart(void)
{
    if (s_present_running) return;
    s_present_running = true;

    Result rc = framebufferCreate(&s_switch_fb, nwindowGetDefault(), 1280, 720, PIXEL_FORMAT_RGBA_8888, 2);
    if (R_FAILED(rc)) {
        fprintf(stderr, "[MKSM-VIDEO] framebufferCreate failed: 0x%x\n", rc);
        fflush(stderr);
        s_present_running = false;
        return;
    }
    framebufferMakeLinear(&s_switch_fb);
    s_present_ready = true;
    fprintf(stderr, "[MKSM-VIDEO] Native Switch Framebuffer (1280x720) initialized successfully!\n");
    fflush(stderr);

    rc = threadCreate(&s_present_thread, switch_present_thread_func, NULL, NULL, 0x10000, 0x2B, -2);
    if (R_SUCCEEDED(rc)) {
        threadStart(&s_present_thread);
    } else {
        fprintf(stderr, "[MKSM-VIDEO] Failed to create presentation thread: 0x%x\n", rc);
        fflush(stderr);
    }
}

/* ================================================================
 * Audio Output Driver (libnx audout - 48kHz Stereo 16-bit PCM)
 * ================================================================ */
#define SWITCH_AUDIO_SAMPLES 2048
#define SWITCH_AUDIO_BUFFERS 4

static AudioOutBuffer s_nx_audio_bufs[SWITCH_AUDIO_BUFFERS];
static int16_t s_nx_audio_pcm[SWITCH_AUDIO_BUFFERS][SWITCH_AUDIO_SAMPLES * 2] __attribute__((aligned(0x1000)));
static int s_nx_audio_buf_idx = 0;
static bool s_nx_audio_ready = false;

bool switch_audio_init(void)
{
    Result rc = audoutInitialize();
    if (R_FAILED(rc)) {
        fprintf(stderr, "[MKSM-AUDIO] audoutInitialize failed: 0x%x\n", rc);
        fflush(stderr);
        return false;
    }
    rc = audoutStartAudioOut();
    if (R_FAILED(rc)) {
        fprintf(stderr, "[MKSM-AUDIO] audoutStartAudioOut failed: 0x%x\n", rc);
        fflush(stderr);
        audoutExit();
        return false;
    }

    for (int i = 0; i < SWITCH_AUDIO_BUFFERS; i++) {
        memset(&s_nx_audio_bufs[i], 0, sizeof(AudioOutBuffer));
        s_nx_audio_bufs[i].buffer = s_nx_audio_pcm[i];
        s_nx_audio_bufs[i].buffer_size = sizeof(s_nx_audio_pcm[i]);
        s_nx_audio_bufs[i].data_size = sizeof(s_nx_audio_pcm[i]);
    }
    s_nx_audio_buf_idx = 0;
    s_nx_audio_ready = true;
    fprintf(stderr, "[MKSM-AUDIO] Nintendo Switch native audout initialized (48kHz stereo 16-bit)!\n");
    fflush(stderr);
    return true;
}

void switch_audio_play_samples(const int16_t *samples, int num_samples)
{
    if (!s_nx_audio_ready || !samples || num_samples <= 0) return;

    AudioOutBuffer *released = NULL;
    u32 released_count = 0;
    audoutGetReleasedAudioOutBuffer(&released, &released_count);

    int idx = s_nx_audio_buf_idx;
    int copy_samples = (num_samples > SWITCH_AUDIO_SAMPLES) ? SWITCH_AUDIO_SAMPLES : num_samples;
    memcpy(s_nx_audio_pcm[idx], samples, copy_samples * 2 * sizeof(int16_t));
    s_nx_audio_bufs[idx].data_size = copy_samples * 2 * sizeof(int16_t);

    audoutAppendAudioOutBuffer(&s_nx_audio_bufs[idx]);
    s_nx_audio_buf_idx = (s_nx_audio_buf_idx + 1) % SWITCH_AUDIO_BUFFERS;
}

void switch_audio_shutdown(void)
{
    if (s_nx_audio_ready) {
        s_nx_audio_ready = false;
        audoutStopAudioOut();
        audoutExit();
    }
}

/* ================================================================
 * Logging & Boot System
 * ================================================================ */
static ssize_t mksm_log_write_r(struct _reent *r, void *fd, const char *ptr, size_t len)
{
    (void)r; (void)fd;
    if (s_log_fd >= 0 && len > 0) {
        write(s_log_fd, ptr, len);
        static unsigned s_write_count = 0;
        if ((++s_write_count % 128) == 0) {
            fsync(s_log_fd);
            fsdevCommitDevice("sdmc");
        }
    }
    return len;
}

static const devoptab_t s_log_devoptab = {
    .name = "mksmlog",
    .structSize = sizeof(void *),
    .open_r = NULL,
    .close_r = NULL,
    .write_r = mksm_log_write_r,
    .read_r = NULL,
    .seek_r = NULL,
    .fstat_r = NULL,
    .stat_r = NULL,
    .link_r = NULL,
    .unlink_r = NULL,
    .chdir_r = NULL,
    .rename_r = NULL,
    .mkdir_r = NULL,
    .dirreset_r = NULL,
    .dirnext_r = NULL,
    .dirclose_r = NULL,
    .statvfs_r = NULL,
    .ftruncate_r = NULL,
    .fsync_r = NULL,
    .deviceData = NULL,
    .chmod_r = NULL,
    .fchmod_r = NULL,
    .rmdir_r = NULL,
};

void switch_boot(void)
{
    /* Initialize libnx services */
    romfsInit();
    fsdevMountSdmc();

    /* Ensure directory structure exists */
    mkdir("sdmc:/switch", 0777);
    mkdir("sdmc:/switch/mksm", 0777);
    mkdir("sdmc:/switch/mksm/save", 0777);

    /* Open log file */
    s_log_fd = open("sdmc:/switch/mksm/mksm_log.txt", O_WRONLY | O_CREAT | O_TRUNC, 0666);

    /* Register log devoptab and redirect stdout/stderr */
    devoptab_list[STD_OUT] = &s_log_devoptab;
    devoptab_list[STD_ERR] = &s_log_devoptab;
    setvbuf(stdout, NULL, _IONBF, 0);
    setvbuf(stderr, NULL, _IONBF, 0);

    fprintf(stderr, "=== MK: Shaolin Monks Nintendo Switch Port Log ===\n");
    fprintf(stderr, "[MKSM-NX] Booting libnx environment...\n");
    fsdevCommitDevice("sdmc");

    /* Enable GPU pushbuffer execution and scanning by default */
    setenv("RECOMP_PB_EXEC", "1", 0);
    setenv("RECOMP_PB_SCAN", "1", 0);

    /* Read environment overrides from SD card if present */
    FILE *f = fopen("sdmc:/switch/mksm/mksm_env.txt", "r");
    if (f) {
        char line[256];
        while (fgets(line, sizeof(line), f)) {
            char *eq = strchr(line, '=');
            if (!eq) continue;
            *eq = '\0';
            char *val = eq + 1;
            char *nl = strchr(val, '\n');
            if (nl) *nl = '\0';
            nl = strchr(val, '\r');
            if (nl) *nl = '\0';
            setenv(line, val, 1);
        }
        fclose(f);
    }

    /* Start the Switch native video presentation subsystem */
    xbox_FramebufferWindowStart();

    fprintf(stderr, "[MKSM-NX] Switch boot complete\n");
    fsdevCommitDevice("sdmc");
}

void switch_shutdown(void)
{
    fprintf(stderr, "[MKSM-NX] Shutting down\n");
    if (s_present_running) {
        s_present_running = false;
        threadWaitForExit(&s_present_thread);
        threadClose(&s_present_thread);
    }
    if (s_present_ready) {
        framebufferClose(&s_switch_fb);
        s_present_ready = false;
    }
    switch_audio_shutdown();
    if (s_log_fd >= 0) {
        fsync(s_log_fd);
        fsdevCommitDevice("sdmc");
        close(s_log_fd);
        s_log_fd = -1;
    }
    fsdevUnmountAll();
    romfsExit();
}

#endif /* __SWITCH__ */
