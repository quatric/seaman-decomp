/* Wii entry point: map guest memory, load the Dreamcast executable, run the guest main loop (port of exec/main.c). */
#include "host.h"
#include <gccore.h>
#include <fat.h>
#include <unistd.h>
#include <malloc.h>
#include <ogc/lwp.h>
#include <ogc/mutex.h>
#include <ogc/lwp_watchdog.h>
#include <time.h>
extern "C" unsigned long game_init(unsigned, unsigned, unsigned, unsigned);
#include <ogc/system.h>
#include <ogc/machine/processor.h>

extern "C" {
void gx_init(void);
void host_pad_init(void);
void host_audio_init(void);
int host_pad_frame(unsigned scripted, int *quit);
unsigned long game_poll_exit(unsigned, unsigned, unsigned, unsigned);
unsigned long game_frame(unsigned, unsigned, unsigned, unsigned);
extern "C" void pvr_end_frame(unsigned);
unsigned long FUN_8c1f5c9e(unsigned, unsigned, unsigned, unsigned);
unsigned long FUN_8c264010(unsigned, unsigned, unsigned, unsigned);
unsigned long FUN_8c1f231a(unsigned, unsigned, unsigned, unsigned);
unsigned long xlat(unsigned long);
}
asm(".section .rodata\n.balign 32\n.globl g_image\ng_image:\n.incbin \"" IMG_PATH "\"\n.globl g_image_end\ng_image_end:\n.text\n");
extern "C" const unsigned char g_image[], g_image_end[];

static FILE *logf; static mutex_t logmtx = LWP_MUTEX_NULL;
extern "C" void host_log(const char *fmt, ...)
{
  static char line[512];
  if (logmtx == LWP_MUTEX_NULL) LWP_MutexInit(&logmtx, true);
  LWP_MutexLock(logmtx);
  va_list ap; va_start(ap, fmt); int n = vsnprintf(line, sizeof line, fmt, ap); va_end(ap);
  if (n <= 0) { LWP_MutexUnlock(logmtx); return; }
  SYS_Report("%s", line);   /* Dolphin shows this as OSREPORT */
  if (logf) { fputs(line, logf); fflush(logf); fsync(fileno(logf)); }
  LWP_MutexUnlock(logmtx);
}

#define MAX_FRAMES 60000u
#ifndef MAX_SECONDS
#define MAX_SECONDS 100
#endif
static unsigned cur_frame;
static int pad_live;
extern "C" { unsigned wii_cur_frame; }
static void run(void)
{
  unsigned long sp0;
  host_log("lib ctors returned %d\n", (int)FUN_8c1f5c9e(0x8c010000, 0, 0, 0));
  game_init(0, 0, 0, 0); host_log("game_init returned\n");
  sp0 = vsp;
  u64 t0 = gettime();
  for (unsigned n = 0;; n++) {
    cur_frame = n; wii_cur_frame = n; vsp = sp0;
    /* Maple port A record +0x30 points at a status block: start unplugged, then plug in, as the driver expects a connect event */
    { unsigned pp = GM(unsigned, 0x8c4727c4 + 0x30); if (pp > 0x8c000000 && pp < 0x8d000000) { if (n < 3) GM(unsigned, pp) = GM(unsigned, pp) & ~1u; else GM(unsigned, pp) = GM(unsigned, pp) | 1; } }
    /* battery-backed RTC (seconds since 1950-01-01 split across two 16-bit registers) */
    { unsigned secs = (unsigned)time(0) + 631152000u; hw_poke32(0xa0710000, secs >> 16); hw_poke32(0xa0710004, secs & 0xffff); }
    /* the fake VMU read leaves the save buffer zeroed; give its timestamp a valid date */
    { if (GM(unsigned short, 0x8c431a7c) == 0) { GM(unsigned short, 0x8c431a7c) = 2000; GM(unsigned char, 0x8c431a7e) = 1; GM(unsigned char, 0x8c431a7f) = 1; } }
    { /* scripted pad until a real controller is used: answer Yes/No dialogs with 'No' (mask 0x40) then confirm (mask 8) */
      static int ps = -1; static unsigned pf = 0; int cs = GM(int, 0x8c4367bc); if (cs != ps) { ps = cs; pf = n; }
      unsigned d = n - pf, w = 0; int no = (cs == 9 || cs == 24 || cs == 5 || cs == 26);
      if (n < 3) w = 8; else if (no && d >= 5 && d < 8) w = 0x40; else if (d >= 15 && (d - 15) % 400 < 3) w = 8;
#ifdef PAD_SE_SCRIPT
      /* test runs: from frame PAD_SE_SCRIPT on, play in the aquarium instead: sweep the hand cursor with the stick and press A (knock on
         the glass), then B, X, Y in turn, every 90 frames, to make the game request its own sound effects */
      { extern int pad_script_x, pad_script_y; pad_script_x = pad_script_y = 0;
        if (n >= PAD_SE_SCRIPT && !no) {
          unsigned t = (n - PAD_SE_SCRIPT) % 90, k = (n - PAD_SE_SCRIPT) / 90;
          static const signed char dir[8][2] = { {0, -100}, {100, 0}, {0, 100}, {-100, 0}, {70, -70}, {-70, 70}, {70, 70}, {-70, -70} };
          w = 0;
          if (t < 25) { pad_script_x = dir[k & 7][0]; pad_script_y = dir[k & 7][1]; }
          else if (t >= 40 && t < 44) { static const unsigned btn[4] = { 4, 4, 2, 0x400 }; w = btn[k & 3]; }
          if (k % 6 == 5 && t >= 60 && t < 63) w = 0x200; } }
#endif
      int quit = 0; pad_live = host_pad_frame(w, &quit);
      if (quit) { host_log("exit requested at frame %u\n", n); break; } }
    { static int lastw = -1; int w = GM(int, 0x8c4367bc); if (w != lastw) { host_log("warn state %d -> %d at frame %u\n", lastw, w, n); lastw = w; } }
    { static int l44 = -99, nt44; int c = GM(int, 0x8c286ec8 + 0x44); if (c != l44 && nt44 < 60) { host_log("t44 %d -> %d at frame %u (14c=%d) msg: st1054=%d 1014=%d 89134=%d 4362f0=%d 1044=%d 1048=%d\n", l44, c, n, (int)GM(int, 0x8c286ec8 + 0x14c), (int)GM(int, 0x8c35468c + 0x1054), (int)GM(int, 0x8c35468c + 0x1014), (int)GM(int, 0x8c35468c + 0x89134), (int)GM(int, 0x8c4362f0), (int)GM(int, 0x8c35468c + 0x1044), (int)GM(int, 0x8c35468c + 0x1048)); l44 = c; nt44++; } }
    unsigned p0 = rp; if ((int)game_poll_exit(0x8c286ebc, 0, 0, 0) < 0) break;
    { static int ls = -1, nl; int st = GM(int, 0x8c35468c + 0x1054); unsigned c = GM(unsigned, 0x8c35468c + 0x1054 + 0x88); if (st != ls && nl < 80) { nl++; host_log("speech state %d -> %d at frame %u type=%d cmd='%s' 4362f0=%d\n", ls, st, n, (c > 0x8c000000 && c < 0x8d000000) ? (int)GM(int, c + 0x20) : -1, (char *)(unsigned long)0x8c4362a0, (int)GM(int, 0x8c4362f0)); ls = st; } }
    if (n == 301) { unsigned b = 0x8c35468c + 0x1054; unsigned c = GM(unsigned, b + 0x88), t = GM(unsigned, b + 0x38); host_log("speech ar4[0x22]=%x ar4[0xe]=%x ar4[0x21]=%x ar4[0xd]=%d 0xf=%x\n", c, t, (unsigned)GM(unsigned, b + 0x84), (int)GM(int, b + 0x34), (unsigned)GM(unsigned, b + 0x3c));
      for (int q = 0; q < 2; q++) { unsigned a = q ? t : c; if (a < 0x8c000000 || a > 0x8d000000) continue; for (int r = 0; r < 0xa0; r += 16) host_log("  [%x+%02x] %08x %08x %08x %08x\n", a, r, (unsigned)GM(unsigned, a + r), (unsigned)GM(unsigned, a + r + 4), (unsigned)GM(unsigned, a + r + 8), (unsigned)GM(unsigned, a + r + 12)); } }
    if (n == 2 || n == 220) { unsigned f = GM(unsigned, 0x8c475f04), p = f; host_log("heap f=%x:", f); for (int q = 0; q < 12 && p >= 0x8c000000 && p < 0x8d000000; q++) { host_log(" [%x +%x next %x]", p, (unsigned)GM(unsigned, p + 4) * 32, (unsigned)GM(unsigned, p)); p = GM(unsigned, p); if (p == f) break; } host_log("\n"); }
    if (n >= 685 && n < 760 && n % 5 == 0) host_log("tick frame %u t=%llu ms\n", n, (unsigned long long)ticks_to_millisecs(gettime()));
    if (n % 2000 == 100) { unsigned m = 0x8c35468c, c = GM(unsigned, m + 0x1054 + 0x88); host_log("speech: state=%d type=%d 1044=%d 1048=%d 2c=%d 2e=%d 2f=%d cmd='%s' f0=%d\n", (int)GM(int, m + 0x1054), (c > 0x8c000000 && c < 0x8d000000) ? (int)GM(int, c + 0x20) : -1, (int)GM(int, m + 0x1044), (int)GM(int, m + 0x1048), (int)GM(int, m + 0x1054 + 0xb0), (int)GM(int, m + 0x1054 + 0xb8), (int)GM(int, m + 0x1054 + 0xbc), (char *)(unsigned long)(0x8c4362a0), (int)GM(int, 0x8c4362f0)); }
    if (n == 5000) { host_log("poll calls: %u\n", rp - p0); for (unsigned i = p0; i != rp && i - p0 < 256; i++) host_log("  P %s\n", ring[i & 255]); }
    unsigned r0 = rp; vsp = sp0; game_frame(0x8c286ebc, 0, 0, 0);
    if (n == 5000) { host_log("frame calls: %u\n", rp - r0); for (unsigned i = r0; i != rp && i - r0 < 256; i++) host_log("  %s\n", ring[i & 255]); }
    /* the ADX library's file/stream server (what its blocking waits run in a loop, FUN_8c01f810): on the Dreamcast it is the V-blank
       handler, and each run decodes about one V-blank of audio. There is no V-blank interrupt here, so run it once per 1/60 s of real
       time since the last frame (at least 4 times, to keep non-blocking reads moving); fewer runs than that starves ADXT and it pauses */
    { static u64 vb_t; static unsigned vb_carry; u64 now = gettime(); if (!vb_t) vb_t = now;
      unsigned us = (unsigned)ticks_to_microsecs(now - vb_t) + vb_carry, k = us / 16683; vb_carry = us % 16683; vb_t = now;
      if (k < 4) k = 4; if (k > 30) k = 30;
      while (k--) { vsp = sp0; FUN_8c264010(0, 0, 0, 0); vsp = sp0; FUN_8c1f231a(0, 0, 0, 0); }
      /* the Manatee sd server (sdSysServer: flushes queued host commands to the driver) is a V-blank job as well, once per V-blank */
      if (GM(unsigned, 0x8c2784c0)) { vsp = sp0; ((unsigned long (*)(unsigned, unsigned, unsigned, unsigned))xlat(0x8c2688e0))(0, 0, 0, 0); } }
    /* the Manatee sd library sends its host commands to sound RAM by G2 DMA and waits for the DMA end interrupt to finish them; the
       copy is already done (wii_dsi.cpp), so run the syG2 end handler (0x8c1f8cbc) on its channel handle here, as the interrupt would */
    { unsigned sd = GM(unsigned, 0x8c2784c0), h = sd ? GM(unsigned, sd + 0x1ac) : 0, regs = GM(unsigned, 0x8c273a28) ? GM(unsigned, GM(unsigned, 0x8c273a28)) : 0;   /* syG2 control block -> its register base */
      if (sd && h && regs && GM(unsigned, sd + 0x190) && !(GM(unsigned, regs + GM(unsigned, h) * 0x20 + 0x18) & 1)) {
        vsp = sp0; ((unsigned long (*)(unsigned, unsigned, unsigned, unsigned))xlat(0x8c1f8cbc))(h, 0, 0, 0); } }
#ifdef AICA_SE_TEST
    /* debug: once the sd library is up, play game sound effects through the game's own wrappers (open a port on the SE manager
       (AICA_SE_TEST, 0x8c2b59d0 in 0x8c0d0178) the way that function does, then request numbers 0..) to check the Manatee driver and the AICA channels */
    { static unsigned req, port; unsigned sd = GM(unsigned, 0x8c2784c0), mgr = AICA_SE_TEST;
      if (sd && GM(unsigned, 0x8c2784c4) == 1 && n > 300 && n % 60 == 0 && req < 24) {
        typedef unsigned long (*fn)(unsigned, unsigned, unsigned, unsigned);
        vsp = sp0; if (!req) port = (unsigned)((fn)xlat(0x8c02190c))(mgr, 0, 0, 0);
        vsp = sp0; unsigned long r = ((fn)xlat(0x8c021994))(mgr, port, req, 0);
        host_log("se test: mgr %x port %d request %u -> %lu at frame %u\n", mgr, (int)port, req, r, n); req++; } }
#endif
    pvr_end_frame(n);
    if (n < 5 || n % 500 == 0) host_log("frame %u sub=%d gframe=%d warn_state=%d poll_state=%d input=%d inobj=%d/%d a518=%d a51c=%d a520=%d pages=%u scene44=%d 14c=%d 30=%d msg1014=%d msg89134=%d msg1054=%d\n", n, (int)GM(int, 0x8c286ec8 + 8), (int)GM(int, 0x8c286ebc + 0x2d59c), (int)GM(int, 0x8c4367bc), (int)GM(int, 0x8c286ebc + 0x2dd84), (int)GM(int, 0x8c286ebc + 0x2d620), (int)GM(int, 0x8c3dd7dc + 0xa510), (int)GM(int, 0x8c3dd7dc + 0xa514), (int)GM(int, 0x8c3dd7dc + 0xa518), (int)GM(int, 0x8c3dd7dc + 0xa51c), (int)GM(int, 0x8c3dd7dc + 0xa520), hw_pages_used(), (int)GM(int, 0x8c286ec8 + 0x44), (int)GM(int, 0x8c286ec8 + 0x14c), (int)GM(int, 0x8c286ec8 + 0x30), (int)GM(int, 0x8c35468c + 0x1014), (int)GM(int, 0x8c35468c + 0x89134), (int)GM(int, 0x8c35468c + 0x1054));
    if (!pad_live && (n >= MAX_FRAMES || ticks_to_secs(gettime() - t0) >= MAX_SECONDS)) {   /* test-run cap; off once someone plays */ host_log("stopping after %u frames\n", n); break; }
  }
  host_log("main loop exited\n");
}
static void *run_thread(void *) { run(); return 0; }
/* watchdog: every 2 s report the guest call trace, so a hang shows where it spins */
static void *watch_thread(void *)
{
  unsigned last = 0;
  for (;;) {
    usleep(2000000);
    unsigned r = rp; host_log("wdog tick rp=%u\n", r);
    extern unsigned sh4_pc, sz_cur_entry;
    host_log("[watch] rp=%u (%s) frame=%u pages=%u sh4 run %08x pc %08x:", r, r == last ? "STUCK" : "moving", cur_frame, hw_pages_used(), sz_cur_entry, sh4_pc);
    for (int i = 10; i > 0; i--) host_log(" %s", ring[(r - i) & 255] ? ring[(r - i) & 255] : "-");
    host_log("\n");
    extern unsigned hw_trace[16][4], hw_trace_n, hw_count;
    host_log("[hw] %u accesses; last:", hw_count);
    for (int i = 8; i > 0; i--) { unsigned *t = hw_trace[(hw_trace_n - i) & 15]; host_log(" %c%08x@%08x=%x", t[2] ? 'W' : 'R', t[1], t[0], t[3]); }
    host_log("\n");
    last = r;
  }
  return 0;
}

extern const char *ring[256]; extern unsigned rp;
#include <tuxedo/ppc/exception.h>
static void exc_cb(unsigned exid, PPCContext *c)
{
  SYS_Report("EXC id=%u pc=%08x msr=%08x dar=%08x dsisr=%08x lr=%08x r1=%08x\n", exid, c->pc, c->msr, mfspr(19), mfspr(18), c->lr, c->gpr[1]);
  for (int i = 12; i > 0; i--) SYS_Report("  call %s\n", ring[(rp - i) & 255] ? ring[(rp - i) & 255] : "-");
  for (;;) ;
}
static syswd_t alarm_;
static void alarm_cb(syswd_t, void *)
{
  static unsigned last; unsigned r = rp;
  SYS_Report("alarm rp=%u %s:", r, r == last ? "STUCK" : "moving"); last = r;
  for (int i = 8; i > 0; i--) SYS_Report(" %s", ring[(r - i) & 255] ? ring[(r - i) & 255] : "-");
  SYS_Report("\n");
}
int main(int argc, char **argv)
{
  PPCExcptCurPanicFn = exc_cb;
  SYS_CreateAlarm(&alarm_); { struct timespec tp = {2, 0}, ti = {1, 0}; SYS_SetPeriodicAlarm(alarm_, &tp, &ti, alarm_cb, 0); }
  gx_init();
  host_pad_init();
  host_audio_init();
  fatInitDefault();
  logf = fopen("sd:/seaman/log.txt", "w");
  host_log("seaman wii host: image %u bytes\n", (unsigned)(g_image_end - g_image));
  wii_setup_memory();
  host_log("memory mapped\n");
  { /* hardware-window self test: the DSI emulation must behave like plain little-endian memory */
    volatile le<unsigned> *w = (volatile le<unsigned> *)0xa05f9000; volatile le<unsigned short> *h = (volatile le<unsigned short> *)0xa05f9010;
    volatile unsigned char *b = (volatile unsigned char *)0xa05f9020; volatile le<float> *f = (volatile le<float> *)0xa05f9030; volatile le<double> *d = (volatile le<double> *)0xa05f9040;
    w[0] = 0x11223344; h[0] = 0xbeef; b[0] = 0x5a; b[1] = 0xa5; f[0] = 1.5f; d[0] = -2.25;
    unsigned w0 = w[0]; unsigned short h0 = h[0]; unsigned bb = b[0] | (b[1] << 8); float f0 = f[0]; double d0 = d[0];
    host_log("selftest w=%08x (11223344) h=%04x (beef) b=%04x (a55a) f=%g (1.5) d=%g (-2.25) peek=%08x\n", w0, h0, bb, f0, d0, hw_peek32(0xa05f9000));
    w[1] = w[0] + 1; host_log("selftest rmw %08x (11223345)\n", (unsigned)w[1]);
  }
  memcpy((void *)0x8c010000, g_image, g_image_end - g_image);   /* little-endian bytes, as on the disc */
  { static const unsigned v[] = { 0x8c0000b0, 0x8c0000b4, 0x8c0000b8, 0x8c0000bc, 0x8c0000e0 }; for (int i = 0; i < 5; i++) GM(unsigned, v[i]) = 0x8c0000f0; }
  for (int p = 0; p < 24; p++) GM(unsigned, 0x8c4727c4 + p * 0x34 + 0x30) = 0x8cfa0000;
  GM(unsigned, 0x8cfa0000) = 1;   /* status word bit 0: a controller is connected */
  vsp = 0x8cfffe00;
  size_t ssz = 1024 * 1024; void *stk = memalign(32, ssz);
  lwp_t th; LWP_CreateThread(&th, run_thread, 0, stk, ssz, 64);
  lwp_t wt; static char wstk[16384] __attribute__((aligned(32))); LWP_CreateThread(&wt, watch_thread, 0, wstk, sizeof wstk, 100);
  void *ret; LWP_JoinThread(th, &ret);
  host_log("done\n");
  if (logf) fclose(logf);
  return 0;
}
