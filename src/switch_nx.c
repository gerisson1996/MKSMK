/**
 * Switch (libnx) platform layer for MK: Shaolin Monks
 *
 * - Log device (stdout/stderr → SD card mksm_log.txt with auto-sync)
 * - Environment file reader (mksm_env.txt)
 * - Boot / shutdown
 */

#ifdef __SWITCH__

#include <switch.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <sys/iosupport.h>
#include <fcntl.h>
#include <unistd.h>

static int s_log_fd = -1;

static ssize_t mksm_log_write_r(struct _reent *r, void *fd, const char *ptr, size_t len)
{
    (void)r; (void)fd;
    if (s_log_fd >= 0 && len > 0) {
        write(s_log_fd, ptr, len);
        fsync(s_log_fd);
        fsdevCommitDevice("sdmc");
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

    fprintf(stderr, "[MKSM-NX] Switch boot complete\n");
    fsdevCommitDevice("sdmc");
}

void switch_shutdown(void)
{
    fprintf(stderr, "[MKSM-NX] Shutting down\n");
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
