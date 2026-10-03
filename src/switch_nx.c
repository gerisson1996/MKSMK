/*
 * switch_nx.c -- Nintendo Switch boot, display, audio and platform glue for MKSM.
 *
 * - SD Card buffered log device (sdmc:/switch/mksm/mksm_log.txt)
 * - Environment settings loader (sdmc:/switch/mksm/mksm_env.txt)
 * - Immediate SDL2 OpenGL loading screen & logo display (nv2a_gl_adopt_window)
 * - Screen size query for dynamic handheld/docked resolution (nv2a_gl_screen_size)
 * - Native libnx audout driver (48kHz stereo 16-bit PCM)
 * - libnx CPU exception crash reporter
 */
#ifdef __SWITCH__
#include <switch.h>

#include <fcntl.h>
#include <pthread.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <sys/iosupport.h>
#include <sys/stat.h>
#include <unistd.h>

#include <SDL.h>
#include <EGL/egl.h>
#include "mksm_logo.h"

#define MKSM_SWITCH_DIR "sdmc:/switch/mksm"

extern ptrdiff_t g_xbox_mem_offset;
void print_guest_state(void);

static int s_nxlink = -1;
static u64 s_t0;

uint8_t *g_switch_ram = NULL;
uint8_t *g_switch_contig = NULL;
uint8_t *g_switch_nv2a = NULL;
uint8_t *g_switch_mcpx = NULL;
uint8_t *g_switch_flash = NULL;

int __real_SDL_SYS_SetThreadPriority(int prio);
int __wrap_SDL_SYS_SetThreadPriority(int prio)
{
    const char *e = getenv("RECOMP_NX_AUDIO_PRIO");
    if (prio == 3 && !(e && *e == '0')) {
        Result rc = svcSetThreadPriority(CUR_THREAD_HANDLE, 0x2B);
        if (R_SUCCEEDED(rc)) return 0;
    }
    return __real_SDL_SYS_SetThreadPriority(prio);
}

static AudioDriverWaveBuf *s_aout_prev = NULL;
bool __real_audrvVoiceAddWaveBuf(AudioDriver *d, int id, AudioDriverWaveBuf *wb);
bool __wrap_audrvVoiceAddWaveBuf(AudioDriver *d, int id, AudioDriverWaveBuf *wb)
{
    if (s_aout_prev && s_aout_prev != wb) {
        audrvUpdate(d);
    }
    s_aout_prev = wb;
    return __real_audrvVoiceAddWaveBuf(d, id, wb);
}

static double since_boot(void)
{
    return (double)armTicksToNs(armGetSystemTick() - s_t0) / 1e9;
}

/* ================================================================
 * Log Device (buffered async writes to SD card)
 * ================================================================ */
#define LOG_CAP (512u * 1024u)

static Mutex  s_log_lock;
static char  *s_log_buf;
static size_t s_log_len;
static int    s_log_fd = -1;
static int    s_log_bol = 1;
static int    s_log_sync = 0;
static volatile int s_log_off = 0;

static void log_drain_locked(void)
{
    size_t off = 0;
    while (off < s_log_len) {
        ssize_t w = write(s_log_fd, s_log_buf + off, s_log_len - off);
        if (w <= 0) break;
        off += (size_t)w;
    }
    s_log_len = 0;
}

static void log_put_locked(const char *p, size_t n)
{
    if (s_log_len + n > LOG_CAP)
        log_drain_locked();
    if (n > LOG_CAP) {
        (void)!write(s_log_fd, p, n);
        return;
    }
    memcpy(s_log_buf + s_log_len, p, n);
    s_log_len += n;
}

static ssize_t log_write_r(struct _reent *r, void *fd, const char *ptr, size_t len)
{
    size_t i = 0;
    (void)r; (void)fd;
    if (s_log_off) return (ssize_t)len;
    mutexLock(&s_log_lock);
    while (i < len) {
        const char *nl;
        size_t n;
        if (s_log_bol) {
            char ts[24];
            u64 ms = armTicksToNs(armGetSystemTick() - s_t0) / 1000000ull;
            int k = snprintf(ts, sizeof ts, "[%4llu.%03llu] ",
                             (unsigned long long)(ms / 1000),
                             (unsigned long long)(ms % 1000));
            if (k > 0) log_put_locked(ts, (size_t)k);
            s_log_bol = 0;
        }
        nl = memchr(ptr + i, '\n', len - i);
        n = nl ? (size_t)(nl - (ptr + i)) + 1 : len - i;
        log_put_locked(ptr + i, n);
        i += n;
        if (nl) s_log_bol = 1;
    }
    if (s_log_sync) {
        log_drain_locked();
        fsync(s_log_fd);
    }
    mutexUnlock(&s_log_lock);
    return (ssize_t)len;
}

static int log_open_r(struct _reent *r, void *fs, const char *path, int flags, int mode) { (void)r; (void)fs; (void)path; (void)flags; (void)mode; return 0; }
static int log_close_r(struct _reent *r, void *fd) { (void)r; (void)fd; return 0; }
static int log_fstat_r(struct _reent *r, void *fd, struct stat *st) { (void)r; (void)fd; memset(st, 0, sizeof *st); st->st_mode = S_IFCHR; return 0; }

static const devoptab_t s_log_dev = {
    .name       = "log",
    .structSize = sizeof(int),
    .open_r     = log_open_r,
    .close_r    = log_close_r,
    .write_r    = log_write_r,
    .fstat_r    = log_fstat_r,
};

static void log_flush(int locked_ok)
{
    fflush(stdout);
    fflush(stderr);
    if (s_log_fd < 0) return;
    if (locked_ok) {
        mutexLock(&s_log_lock);
        log_drain_locked();
        mutexUnlock(&s_log_lock);
    } else {
        int got = mutexTryLock(&s_log_lock);
        log_drain_locked();
        if (got) mutexUnlock(&s_log_lock);
    }
}

static void *log_flusher(void *arg)
{
    (void)arg;
    for (;;) {
        svcSleepThread(500000000ull);
        if (s_log_off) break;
        log_flush(1);
    }
    return NULL;
}

static int log_open(void)
{
    s_log_buf = (char *)malloc(LOG_CAP);
    s_log_fd = open(MKSM_SWITCH_DIR "/mksm_log.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
    if (!s_log_buf || s_log_fd < 0 || AddDevice(&s_log_dev) < 0)
        return 0;
    if (!freopen("log:", "w", stdout))
        return 0;
    dup2(fileno(stdout), fileno(stderr));
    setvbuf(stdout, NULL, _IOLBF, 0);
    setvbuf(stderr, NULL, _IOLBF, 0);
    {
        pthread_t t;
        if (pthread_create(&t, NULL, log_flusher, NULL) == 0)
            pthread_detach(t);
    }
    return 1;
}

static void load_env(void)
{
    FILE *f = fopen(MKSM_SWITCH_DIR "/mksm_env.txt", "r");
    char line[1024];

    if (!f) return;
    while (fgets(line, sizeof line, f)) {
        char *eq, *end = line + strlen(line);
        while (end > line && (end[-1] == '\n' || end[-1] == '\r' || end[-1] == ' '))
            *--end = 0;
        if (!line[0] || line[0] == '#' || !(eq = strchr(line, '=')) || eq == line)
            continue;
        *eq = 0;
        setenv(line, eq + 1, 1);
        printf("[switch] env %s=%s\n", line, eq + 1);
    }
    fclose(f);
}

/* ================================================================
 * Loading Screen & Presentation Layer (SDL2 / OpenGL Core)
 * ================================================================ */
#define LW 1280
#define LH 720
#define GL_COLOR_BUFFER_BIT_   0x00004000
#define GL_SCISSOR_TEST_       0x0C11
#define GL_TEXTURE_2D_         0x0DE1
#define GL_RGBA_               0x1908
#define GL_RGBA8_              0x8058
#define GL_UNSIGNED_BYTE_      0x1401
#define GL_LINEAR_             0x2601
#define GL_TEXTURE_MIN_FILTER_ 0x2801
#define GL_TEXTURE_MAG_FILTER_ 0x2800
#define GL_UNPACK_ALIGNMENT_   0x0CF5
#define GL_DRAW_FRAMEBUFFER_   0x8CA9
#define GL_ARRAY_BUFFER_       0x8892
#define GL_STATIC_DRAW_        0x88E4
#define GL_FLOAT_              0x1406
#define GL_TRIANGLE_STRIP_     0x0005
#define GL_VERTEX_SHADER_      0x8B31
#define GL_FRAGMENT_SHADER_    0x8B30
#define GL_LINK_STATUS_        0x8B82
#define GL_TEXTURE0_           0x84C0
#define GL_BLEND_              0x0BE2
#define GL_DEPTH_TEST_         0x0B71
#define GL_CULL_FACE_          0x0B44
#define GL_STENCIL_TEST_       0x0B90
#define GL_CURRENT_PROGRAM_    0x8B8D
#define GL_VERTEX_ARRAY_BINDING_ 0x85B5
#define GL_ARRAY_BUFFER_BINDING_ 0x8894
#define GL_TEXTURE_BINDING_2D_ 0x8069
#define GL_ACTIVE_TEXTURE_     0x84E0

static struct {
    void (*ClearColor)(float, float, float, float);
    void (*Clear)(unsigned);
    void (*Scissor)(int, int, int, int);
    void (*Enable)(unsigned);
    void (*Disable)(unsigned);
    void (*Viewport)(int, int, int, int);
    void (*GenTextures)(int, unsigned *);
    void (*BindTexture)(unsigned, unsigned);
    void (*TexImage2D)(unsigned, int, int, int, int, int, unsigned, unsigned, const void *);
    void (*TexParameteri)(unsigned, unsigned, int);
    void (*PixelStorei)(unsigned, int);
    void (*BindFramebuffer)(unsigned, unsigned);
    void (*ActiveTexture)(unsigned);
    void (*GetIntegerv)(unsigned, int *);
    unsigned (*CreateShader)(unsigned);
    void (*ShaderSource)(unsigned, int, const char *const *, const int *);
    void (*CompileShader)(unsigned);
    unsigned (*CreateProgram)(void);
    void (*AttachShader)(unsigned, unsigned);
    void (*BindAttribLocation)(unsigned, unsigned, const char *);
    void (*LinkProgram)(unsigned);
    void (*GetProgramiv)(unsigned, unsigned, int *);
    void (*UseProgram)(unsigned);
    int (*GetUniformLocation)(unsigned, const char *);
    void (*Uniform4f)(int, float, float, float, float);
    void (*Uniform1i)(int, int);
    void (*GenVertexArrays)(int, unsigned *);
    void (*BindVertexArray)(unsigned);
    void (*GenBuffers)(int, unsigned *);
    void (*BindBuffer)(unsigned, unsigned);
    void (*BufferData)(unsigned, ptrdiff_t, const void *, unsigned);
    void (*EnableVertexAttribArray)(unsigned);
    void (*VertexAttribPointer)(unsigned, int, unsigned, unsigned char, int, const void *);
    void (*DrawArrays)(unsigned, int, int);
    void (*ReadPixels)(int, int, int, int, unsigned, unsigned, void *);
} gl;

static SDL_Window    *s_win = NULL;
static SDL_GLContext  s_ctx = NULL;
static unsigned       s_logo_tex = 0, s_logo_prog = 0, s_logo_vao = 0, s_logo_vbo = 0;
static int            s_logo_rect = 0;
static volatile int   s_loader_stop = 0;
static pthread_t      s_loader_thread;
static int            s_loader_running = 0;
static volatile int   s_loader_ready = 0;

#define BG_R (MKSM_LOGO_BG_R / 255.0f)
#define BG_G (MKSM_LOGO_BG_G / 255.0f)
#define BG_B (MKSM_LOGO_BG_B / 255.0f)

static int s_vw = LW, s_vh = LH;

static void rect(int x, int y, int w, int h, float r, float g, float b)
{
    if (w <= 0 || h <= 0) return;
    gl.Scissor(x, s_vh - y - h, w, h);
    gl.ClearColor(r, g, b, 1.0f);
    gl.Clear(GL_COLOR_BUFFER_BIT_);
}

static void logo_upload(void)
{
    unsigned char *rgba = (unsigned char *)malloc((size_t)MKSM_LOGO_W * MKSM_LOGO_H * 4);
    size_t i, o = 0, end = (size_t)MKSM_LOGO_W * MKSM_LOGO_H * 4;
    unsigned tex;

    if (!rgba) return;
    for (i = 0; i + 3 < sizeof k_mksm_logo_rle && o < end; i += 4) {
        for (unsigned n = k_mksm_logo_rle[i]; n && o < end; n--, o += 4) {
            size_t row = o / (MKSM_LOGO_W * 4), col = o % (MKSM_LOGO_W * 4);
            unsigned char *d = rgba + (MKSM_LOGO_H - 1 - row) * MKSM_LOGO_W * 4 + col;
            d[0] = k_mksm_logo_rle[i + 1];
            d[1] = k_mksm_logo_rle[i + 2];
            d[2] = k_mksm_logo_rle[i + 3];
            d[3] = 0xFF;
        }
    }
    gl.GenTextures(1, &tex);
    gl.BindTexture(GL_TEXTURE_2D_, tex);
    gl.PixelStorei(GL_UNPACK_ALIGNMENT_, 4);
    gl.TexImage2D(GL_TEXTURE_2D_, 0, GL_RGBA8_, MKSM_LOGO_W, MKSM_LOGO_H, 0,
                  GL_RGBA_, GL_UNSIGNED_BYTE_, rgba);
    gl.TexParameteri(GL_TEXTURE_2D_, GL_TEXTURE_MIN_FILTER_, GL_LINEAR_);
    gl.TexParameteri(GL_TEXTURE_2D_, GL_TEXTURE_MAG_FILTER_, GL_LINEAR_);
    s_logo_tex = tex;

    static const char *vs =
        "#version 330 core\n"
        "layout(location = 0) in vec2 p;\n"
        "uniform vec4 r;\n"
        "out vec2 uv;\n"
        "void main() { uv = p; gl_Position = vec4(mix(r.xy, r.zw, p), 0.0, 1.0); }\n";
    static const char *fs =
        "#version 330 core\n"
        "in vec2 uv;\n"
        "uniform sampler2D t;\n"
        "out vec4 c;\n"
        "void main() { c = texture(t, uv); }\n";
    static const float quad[8] = { 0, 0, 1, 0, 0, 1, 1, 1 };
    unsigned v = gl.CreateShader(GL_VERTEX_SHADER_), f = gl.CreateShader(GL_FRAGMENT_SHADER_);
    int ok = 0;
    gl.ShaderSource(v, 1, &vs, NULL);
    gl.CompileShader(v);
    gl.ShaderSource(f, 1, &fs, NULL);
    gl.CompileShader(f);
    s_logo_prog = gl.CreateProgram();
    gl.AttachShader(s_logo_prog, v);
    gl.AttachShader(s_logo_prog, f);
    gl.BindAttribLocation(s_logo_prog, 0, "p");
    gl.LinkProgram(s_logo_prog);
    gl.GetProgramiv(s_logo_prog, GL_LINK_STATUS_, &ok);
    if (!ok) {
        fprintf(stderr, "[switch] loading screen: logo shader did not link\n");
        s_logo_prog = 0;
    } else {
        gl.UseProgram(s_logo_prog);
        s_logo_rect = gl.GetUniformLocation(s_logo_prog, "r");
        gl.Uniform1i(gl.GetUniformLocation(s_logo_prog, "t"), 0);
        gl.UseProgram(0);
    }
    gl.GenVertexArrays(1, &s_logo_vao);
    gl.BindVertexArray(s_logo_vao);
    gl.GenBuffers(1, &s_logo_vbo);
    gl.BindBuffer(GL_ARRAY_BUFFER_, s_logo_vbo);
    gl.BufferData(GL_ARRAY_BUFFER_, sizeof quad, quad, GL_STATIC_DRAW_);
    gl.EnableVertexAttribArray(0);
    gl.VertexAttribPointer(0, 2, GL_FLOAT_, 0, 0, NULL);
    gl.BindVertexArray(0);
    free(rgba);
}

static int loader_gl_up(void)
{
    if (SDL_InitSubSystem(SDL_INIT_VIDEO) != 0)
        return 0;
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_PROFILE_MASK, SDL_GL_CONTEXT_PROFILE_CORE);
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_MAJOR_VERSION, 3);
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_MINOR_VERSION, 3);
    SDL_GL_SetAttribute(SDL_GL_DOUBLEBUFFER, 1);
    s_win = SDL_CreateWindow("MKSM", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED,
                             LW, LH, SDL_WINDOW_OPENGL | SDL_WINDOW_RESIZABLE);
    if (!s_win) return 0;
    s_ctx = SDL_GL_CreateContext(s_win);
    if (!s_ctx) {
        SDL_DestroyWindow(s_win);
        s_win = NULL;
        return 0;
    }
#define GLP(name) (*(void **)&gl.name = SDL_GL_GetProcAddress("gl" #name))
    if (!GLP(ClearColor) || !GLP(Clear) || !GLP(Scissor) || !GLP(Enable)
            || !GLP(Disable) || !GLP(Viewport) || !GLP(GenTextures)
            || !GLP(BindTexture) || !GLP(TexImage2D) || !GLP(TexParameteri)
            || !GLP(PixelStorei) || !GLP(BindFramebuffer) || !GLP(ActiveTexture)
            || !GLP(GetIntegerv) || !GLP(CreateShader) || !GLP(ShaderSource)
            || !GLP(CompileShader) || !GLP(CreateProgram) || !GLP(AttachShader)
            || !GLP(BindAttribLocation) || !GLP(LinkProgram) || !GLP(GetProgramiv)
            || !GLP(UseProgram) || !GLP(GetUniformLocation) || !GLP(Uniform4f)
            || !GLP(Uniform1i) || !GLP(GenVertexArrays) || !GLP(BindVertexArray)
            || !GLP(GenBuffers) || !GLP(BindBuffer) || !GLP(BufferData)
            || !GLP(EnableVertexAttribArray) || !GLP(VertexAttribPointer)
            || !GLP(DrawArrays) || !GLP(ReadPixels)) {
        gl.Clear = NULL;
        return 0;
    }
#undef GLP
    logo_upload();
    SDL_GL_SetSwapInterval(1);
    return 1;
}

static void screen_size(int *w, int *h)
{
    EGLDisplay d = eglGetCurrentDisplay();
    EGLSurface s = eglGetCurrentSurface(EGL_DRAW);
    EGLint ew = 0, eh = 0;

    *w = LW; *h = LH;
    if (d != EGL_NO_DISPLAY && s != EGL_NO_SURFACE
            && eglQuerySurface(d, s, EGL_WIDTH, &ew) && eglQuerySurface(d, s, EGL_HEIGHT, &eh)
            && ew > 0 && eh > 0) {
        *w = ew; *h = eh;
        return;
    }
    SDL_GL_GetDrawableSize(s_win, w, h);
    if (*w <= 0 || *h <= 0) { *w = LW; *h = LH; }
}

int nv2a_gl_screen_size(int *w, int *h)
{
    screen_size(w, h);
    return 1;
}

static void loader_draw(unsigned frame)
{
    int W = LW, H = LH, lw, lh, lx, ly, bar_w, bar_x, bar_y, bar_h, seg, pos, x0, x1;

    screen_size(&W, &H);
    s_vw = W; s_vh = H;
    lw = H * 3 / 5;
    lh = lw * MKSM_LOGO_H / MKSM_LOGO_W;
    lx = (W - lw) / 2;
    ly = (H - lh) / 2 - H / 24;
    bar_w = W * 9 / 32; bar_h = H / 180 > 2 ? H / 180 : 2;
    bar_x = (W - bar_w) / 2; bar_y = ly + lh + H / 20;
    seg = bar_w / 5;
    pos = (int)(frame * (unsigned)(W / 213 > 1 ? W / 213 : 1) % (unsigned)(bar_w + seg)) - seg;
    x0 = bar_x + (pos < 0 ? 0 : pos);
    x1 = bar_x + pos + seg;
    if (x1 > bar_x + bar_w) x1 = bar_x + bar_w;

    gl.Viewport(0, 0, W, H);
    gl.Disable(GL_SCISSOR_TEST_);
    gl.BindFramebuffer(GL_DRAW_FRAMEBUFFER_, 0);
    gl.ClearColor(BG_R, BG_G, BG_B, 1.0f);
    gl.Clear(GL_COLOR_BUFFER_BIT_);
    if (s_logo_prog) {
        int prog, vao, buf, tex, unit;
        gl.GetIntegerv(GL_CURRENT_PROGRAM_, &prog);
        gl.GetIntegerv(GL_VERTEX_ARRAY_BINDING_, &vao);
        gl.GetIntegerv(GL_ARRAY_BUFFER_BINDING_, &buf);
        gl.GetIntegerv(GL_ACTIVE_TEXTURE_, &unit);
        gl.ActiveTexture(GL_TEXTURE0_);
        gl.GetIntegerv(GL_TEXTURE_BINDING_2D_, &tex);
        gl.Disable(GL_BLEND_);
        gl.Disable(GL_DEPTH_TEST_);
        gl.Disable(GL_CULL_FACE_);
        gl.Disable(GL_STENCIL_TEST_);
        gl.UseProgram(s_logo_prog);
        gl.Uniform4f(s_logo_rect,
                     2.0f * lx / W - 1.0f, 1.0f - 2.0f * (ly + lh) / H,
                     2.0f * (lx + lw) / W - 1.0f, 1.0f - 2.0f * ly / H);
        gl.BindTexture(GL_TEXTURE_2D_, s_logo_tex);
        gl.BindVertexArray(s_logo_vao);
        gl.DrawArrays(GL_TRIANGLE_STRIP_, 0, 4);
        gl.BindVertexArray((unsigned)vao);
        gl.BindBuffer(GL_ARRAY_BUFFER_, (unsigned)buf);
        gl.BindTexture(GL_TEXTURE_2D_, (unsigned)tex);
        gl.ActiveTexture((unsigned)unit);
        gl.UseProgram((unsigned)prog);
    }
    gl.Enable(GL_SCISSOR_TEST_);
    rect(bar_x, bar_y, bar_w, bar_h, 0.20f, 0.10f, 0.05f);
    rect(x0, bar_y, x1 - x0, bar_h, 0.90f, 0.45f, 0.10f);
    gl.Disable(GL_SCISSOR_TEST_);
}

int nv2a_gl_draw_placeholder(void)
{
    if (!gl.Clear) return 0;
    loader_draw((unsigned)(since_boot() * 60.0));
    return 1;
}

static void *loader_main(void *arg)
{
    unsigned frame = 0;
    (void)arg;
    if (!loader_gl_up()) {
        fprintf(stderr, "[switch] loading screen: no GL window (%s)\n", SDL_GetError());
        s_loader_ready = -1;
        return NULL;
    }
    s_loader_ready = 1;
    while (!s_loader_stop) {
        loader_draw(frame++);
        SDL_GL_SwapWindow(s_win);
        {
            SDL_Event e;
            while (SDL_PollEvent(&e)) { }
        }
        svcSleepThread(16000000ull);
    }
    SDL_GL_MakeCurrent(s_win, NULL);
    return NULL;
}

static void loader_start(void)
{
    s_loader_running = pthread_create(&s_loader_thread, NULL, loader_main, NULL) == 0;
}

int nv2a_gl_adopt_window(void **win, void **ctx)
{
    if (!s_loader_running) return 0;
    while (!s_loader_ready)
        svcSleepThread(1000000ull);
    s_loader_stop = 1;
    pthread_join(s_loader_thread, NULL);
    s_loader_running = 0;
    if (s_loader_ready < 0 || !s_win || !s_ctx)
        return 0;
    printf("[switch] loading screen handed over after %.1f s\n", since_boot());
    *win = s_win;
    *ctx = s_ctx;
    return 1;
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
        return false;
    }
    rc = audoutStartAudioOut();
    if (R_FAILED(rc)) {
        fprintf(stderr, "[MKSM-AUDIO] audoutStartAudioOut failed: 0x%x\n", rc);
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
 * Framebuffer Blitter (Software fallback if needed)
 * ================================================================ */
void xbox_FramebufferWindowSet(uint32_t fb_va, uint32_t pitch) { (void)fb_va; (void)pitch; }
void xbox_FramebufferWindowPresent(uint32_t fb_va, uint32_t pitch) { (void)fb_va; (void)pitch; }
void xbox_FramebufferWindowSetTitle(const uint16_t *n, int m) { (void)n; (void)m; }
void xbox_FramebufferWindowFrameStats(uint32_t draws) { (void)draws; }
int xbox_FramebufferKeyDown(int vk) { (void)vk; return 0; }
void xbox_FramebufferWindowStart(void) { }

/* ================================================================
 * Switch Boot & Exception Handler
 * ================================================================ */
void switch_boot(void)
{
    s_t0 = armGetSystemTick();
    socketInitializeDefault();
    s_nxlink = nxlinkStdio();
    if (s_nxlink < 0 && !log_open())
        fprintf(stderr, "[switch] log device unavailable\n");
    load_env();
    switch_audio_init();
    loader_start();
}

void switch_shutdown(void)
{
    switch_audio_shutdown();
    log_flush(1);
    socketExit();
}

alignas(16) u8 __nx_exception_stack[0x4000];
u64 __nx_exception_stack_size = sizeof(__nx_exception_stack);

void __libnx_exception_handler(ThreadExceptionDump *ctx)
{
    fprintf(stderr, "[CRASH] exception %u at PC=0x%lx far=0x%lx (guest VA 0x%08X)\n",
            ctx->error_desc, (unsigned long)ctx->pc.x, (unsigned long)ctx->far.x,
            (uint32_t)(ctx->far.x - (uintptr_t)g_xbox_mem_offset));
    fprintf(stderr, "  lr=0x%lx sp=0x%lx\n", (unsigned long)ctx->lr.x, (unsigned long)ctx->sp.x);
    print_guest_state();
    log_flush(0);
    svcExitProcess();
}

#endif
