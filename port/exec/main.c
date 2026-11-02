#define _XOPEN_SOURCE 700
#define _DARWIN_C_SOURCE
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <signal.h>
#include <ucontext.h>
#include <sys/mman.h>
extern unsigned long xlat(unsigned long);
extern const char *hostname(void *);
extern long long game_init();
extern long long game_poll_exit(), game_frame(), FUN_8c1f5c9e();
extern const char *ring[256]; extern unsigned rp; extern unsigned long vsp;
static volatile int armed; static unsigned long traps;
static void segv(int sig, siginfo_t *si, void *uc_) {
  ucontext_t *uc = uc_;
  if (armed && (sig == SIGSEGV || sig == SIGBUS) && ((unsigned long)si->si_addr & ~0xfffUL) == 0x8c355000UL) {
    mprotect((void *)0x8c355000UL, 0x1000, PROT_READ | PROT_WRITE); uc->uc_mcontext->__ss.__rflags |= 0x100; return;
  }
  if (armed && sig == SIGTRAP) {
    uc->uc_mcontext->__ss.__rflags &= ~0x100ULL; traps++;
    { static unsigned lastv; static int shown; unsigned v = *(volatile unsigned *)0x8c3556a0;
      if (v != lastv && shown < 12) { shown++; lastv = v; unsigned long rip = uc->uc_mcontext->__ss.__rip; const char *n = hostname((void *)rip); fprintf(stderr, "WATCH 8c3556a0 -> %x after rip=%lx (%s); calls:", v, rip, n ? n : "?"); for (int k = 6; k > 0; k--) fprintf(stderr, " %s", ring[(rp - k) & 255] ? ring[(rp - k) & 255] : "-"); fprintf(stderr, "\n"); } }
    mprotect((void *)0x8c355000UL, 0x1000, PROT_READ); return;
  }
  write(2, "[sig]\n", 6);
  static int fixups;
  if (sig == SIGSEGV && ((unsigned long)si->si_addr >> 32) == 0xffffffffUL && fixups < 100000) {
    /* an SH-4 int used as an address was sign-extended: zero-extend the register that holds it and retry */
    unsigned long long *r = (unsigned long long *)&uc->uc_mcontext->__ss;
    int fixed = 0;
    for (int i = 0; i < 16; i++) {
      unsigned long long v = r[i];
      if ((v >> 32) == 0xffffffffULL && (long long)(v - (unsigned long long)si->si_addr) > -0x100000 && (long long)(v - (unsigned long long)si->si_addr) < 0x100000) { r[i] = v & 0xffffffffULL; fixed++; }
    }
    if (fixed) { fixups++; return; }
  }
  unsigned long rip = uc->uc_mcontext->__ss.__rip;
  { unsigned long long *rg = (unsigned long long *)&uc->uc_mcontext->__ss; static const char *nm[] = {"rax","rbx","rcx","rdx","rdi","rsi","rbp","rsp","r8","r9","r10","r11","r12","r13","r14","r15"};
    for (int i = 0; i < 16; i++) fprintf(stderr, "%s=%llx ", nm[i], rg[i]); fprintf(stderr, "\ncode at rip:"); if (rip > 0x1000 && rip < 0x7f000000) for (int i = 0; i < 16; i++) fprintf(stderr, " %02x", ((unsigned char *)rip)[i]); fprintf(stderr, "\n"); }
  { unsigned long long *rg2 = (unsigned long long *)&uc->uc_mcontext->__ss; unsigned long *sp = (unsigned long *)rg2[7]; for (int i = 0; i < 64; i++) { const char *m = hostname((void *)sp[i]); if (m) fprintf(stderr, "  stack[%d] -> %s\n", i, m); } }
  { unsigned v = *(unsigned *)0x8c277b04; fprintf(stderr, "[tex table var @8c277b04 = %x", v); if (v > 0x8c000000 && v < 0x8d000000) fprintf(stderr, " -> %x", *(unsigned *)v); fprintf(stderr, "]\n"); }
  { extern unsigned long pmf_last[5]; fprintf(stderr, "[last pmf call rec=%lx self=%lx rec words %lx %lx %lx]\n", pmf_last[0], pmf_last[1], pmf_last[2], pmf_last[3], pmf_last[4]); }
  const char *n = hostname((void *)rip);
  fprintf(stderr, "FAULT sig=%d addr=%p rip=%lx (%s)\n", sig, si->si_addr, rip, n ? n : "?");
  unsigned long *fp = (unsigned long *)uc->uc_mcontext->__ss.__rbp;
  for (int i = 0; i < 24 && fp && (unsigned long)fp > 0x100000; i++) {
    const char *m = hostname((void *)fp[1]); fprintf(stderr, "  from %lx (%s)\n", fp[1], m ? m : "?"); fp = (unsigned long *)fp[0];
  }
  { extern unsigned cur_frame; fprintf(stderr, "at frame %u cell=%x\n", cur_frame, *(unsigned *)0x8c4aabdc); }
  fprintf(stderr, "last calls (oldest first):\n"); for (int i = 24; i > 0; i--) fprintf(stderr, "  %s\n", ring[(rp - i) & 255] ? ring[(rp - i) & 255] : "-");
  _exit(2);
}
#include <pthread.h>
/* PVR SPG_STATUS (0xa05f810c): scanline in bits 0-9, vsync bit 13; also raises the vblank-in flag in SB_ISTNRM (0xa05f6900) */
static void *spg(void *a) {
  volatile unsigned *st = (volatile unsigned *)0xa05f810c, *ist = (volatile unsigned *)0xa05f6900;
  unsigned line = 0;
  extern const char *ring[256]; extern unsigned rp; static int reported;
  for (;;) { { unsigned cv = *(volatile unsigned *)0x8c4aabdc; if (cv) reported = 0; else if (!reported && rp > 1000) { reported = 1; unsigned r = rp; fprintf(stderr, "cell zeroed; calls before:"); for (int i = 12; i > 0; i--) fprintf(stderr, " %s", ring[(r - i) & 255] ? ring[(r - i) & 255] : "-"); fprintf(stderr, "\n"); } }
    line = (line + 1) % 525; *st = line | (line < 3 ? 0x2000 : 0); if (line == 480) *ist |= 0x8; usleep(32); }
  return 0;
}
unsigned cur_frame;
static void run(void) {
  armed = 1; mprotect((void *)0x8c355000UL, 0x1000, PROT_READ);   /* watch the message-system active flag */
  /* crt0 runs the library-handle constructor walk over the image header before main */
  fprintf(stderr, "lib ctors returned %d\n", (int)FUN_8c1f5c9e(0x8c010000, 0, 0, 0));
  game_init(); fprintf(stderr, "game_init returned\n");
  /* the guest main loop: while (game_poll_exit(&state) >= 0) game_frame(); */
  unsigned long sp0 = vsp;   /* each guest call leaves vsp at its callee's frame; restore it so the stack does not creep down every frame */
  for (unsigned n = 0;; n++) { cur_frame = n; vsp = sp0;
    /* the game's Maple driver points each port record's +0x30 at its own status buffer, which the bus DMA would fill: report port A's controller as connected */
    { unsigned pp = *(unsigned *)(0x8c4727c4 + 0x30); if (pp > 0x8c000000 && pp < 0x8d000000) { if (n < 3) *(unsigned *)pp &= ~1u; else *(unsigned *)pp |= 1; }   /* start unplugged, then plug in, as the driver expects a connect event */ }
    /* stand-in pad: press the confirm button for 3 frames out of every 300 (record word +0x10, mask 8) so message screens can be dismissed */
    /* battery-backed RTC: seconds since 1950-01-01 split across two 16-bit registers (high at 0xa0710000, low at 0xa0710004) */
    { unsigned secs = (unsigned)time(0) + 631152000u; *(volatile unsigned *)0xa0710000 = secs >> 16; *(volatile unsigned *)0xa0710004 = secs & 0xffff; }
    /* the fake VMU read leaves the loaded save buffer zeroed; give its saved-at timestamp (year, month, day) a valid date so the clock check does not see a save from the future */
    { unsigned short *ts = (unsigned short *)0x8c431a7c; if (ts[0] == 0) { ts[0] = 2000; ((unsigned char *)ts)[2] = 1; ((unsigned char *)ts)[3] = 1; } }
    { /* stand-in pad: on each WARNING state, answer a Yes/No dialog with 'No' (right, mask 0x40) and then press confirm (mask 8); the first frames also confirm */
      static int ps = -1; static unsigned pf = 0; int cs = *(int *)0x8c4367bc; if (cs != ps) { ps = cs; pf = n; }
      unsigned d = n - pf, w = 0; int no = (cs == 9 || cs == 24 || cs == 5 || cs == 26);
      if (n < 3) w = 8; else if (no && d >= 5 && d < 8) w = 0x40; else if (d >= 15 && (d - 15) % 400 < 3) w = 8;   /* then keep pulsing confirm so title/menu screens advance */
      *(unsigned *)(0x8c4727c4 + 0x10) = w; }
    { static int lastw = -1; int w = *(int *)0x8c4367bc; if (w != lastw) { fprintf(stderr, "warn state %d -> %d at frame %u\n", lastw, w, n); lastw = w; } }
    { unsigned r0 = rp; if (n < 4) fprintf(stderr, "before poll %u: state=%d flag=%d\n", n, *(int *)0x8c4367bc, *(char *)0x8c4367c0); if ((int)game_poll_exit(0x8c286ebc, 0, 0, 0) < 0) break; if (n < 4) fprintf(stderr, "after poll %u: state=%d flag=%d\n", n, *(int *)0x8c4367bc, *(char *)0x8c4367c0);
      if (n == 1) { fprintf(stderr, "poll calls (%u):", rp - r0); for (unsigned i = r0; i != rp && i - r0 < 200; i++) fprintf(stderr, " %s", ring[i & 255]); fprintf(stderr, "\n"); } }
    { unsigned r0 = rp; vsp = sp0; game_frame(0x8c286ebc, 0, 0, 0);
      if (n == 1 || n == 1000) { fprintf(stderr, "frame %u calls (%u):", n, rp - r0); for (unsigned i = r0; i != rp && i - r0 < 200; i++) fprintf(stderr, " %s", ring[i & 255]); fprintf(stderr, "\n"); } }
    if (n % 20000 == 0) { unsigned o = 0x8c286ec8; fprintf(stderr, "  msgbox: speech_state=%d +1014=%d +89134=%d input=%d 4365ec=%d\n", *(int *)(0x8c35468c + 0x1054), *(int *)(0x8c35468c + 0x1014), *(int *)(0x8c35468c + 0x89134), *(int *)(0x8c286ebc + 0x2d620), *(int *)0x8c4365ec); fprintf(stderr, "  scene: +30=%d +34=%f +40=%d +14c=%d +154=%x 43660d=%d +44=%d\n", *(int *)(o + 0x30), *(float *)(o + 0x34), *(int *)(o + 0x40), *(int *)(o + 0x14c), *(unsigned *)(o + 0x154), *(char *)0x8c43660d, *(int *)(o + 0x44)); }
    if (n < 5 || n % 20000 == 0) fprintf(stderr, "frame %u sub=%d gframe=%d warn_state=%d poll_state=%d input=%d inobj=%d/%d a518=%d a51c=%d a520=%d\n", n, *(int *)(0x8c286ec8 + 8), *(int *)(0x8c286ebc + 0x2d59c), *(int *)0x8c4367bc, *(int *)(0x8c286ebc + 0x2dd84), *(int *)(0x8c286ebc + 0x2d620), *(int *)(0x8c3dd7dc + 0xa510), *(int *)(0x8c3dd7dc + 0xa514), *(int *)(0x8c3dd7dc + 0xa518), *(int *)(0x8c3dd7dc + 0xa51c), *(int *)(0x8c3dd7dc + 0xa520));
  }
  fprintf(stderr, "main loop exited\n");
}
int main(int argc, char **argv) {
  setvbuf(stderr, 0, _IONBF, 0);
  /* RAM mapped twice: cached 0x8c000000 and uncached 0xac000000 share one backing file */
  char tmpl[] = "/tmp/dcramXXXXXX"; int fd = mkstemp(tmpl); unlink(tmpl); ftruncate(fd, 0x1000000);
  void *p = mmap((void *)0x8c000000u, 0x1000000, PROT_READ|PROT_WRITE, MAP_FIXED|MAP_SHARED, fd, 0);
  void *q = mmap((void *)0xac000000u, 0x1000000, PROT_READ|PROT_WRITE, MAP_FIXED|MAP_SHARED, fd, 0);
  if (p != (void *)0x8c000000u || q != (void *)0xac000000u) { fputs("mmap ram failed\n", stderr); return 1; }
  static const unsigned long hw[][2] = { {0xa05f0000, 0x20000}, {0xa0700000, 0x20000}, {0xa0800000, 0x200000}, {0xff000000, 0x1000000}, {0xa0000000, 0x200000}, {0xa0600000, 0x10000}, {0xf0000000, 0x8000000}, {0xe0000000, 0x4000000}, {0xa4000000, 0x800000}, {0xa5000000, 0x800000}, {0x10000000, 0x800000}, {0x04000000, 0x800000} };
  for (int i = 0; i < 12; i++) if (mmap((void *)hw[i][0], hw[i][1], PROT_READ|PROT_WRITE, MAP_FIXED|MAP_ANON|MAP_PRIVATE, -1, 0) == MAP_FAILED) fprintf(stderr, "hw map %lx failed\n", hw[i][0]);
  *(unsigned *)0xa05f8000 = 0x17fd11db; /* PVR core ID */
  *(unsigned *)0xa05f8004 = 0x11;      /* PVR revision */
  *(unsigned *)0xa05f689c = 0x0b;      /* system bus revision */
  /* BIOS syscall vectors point at one stub that reports success */
  { static const unsigned v[] = {0x8c0000b0, 0x8c0000b4, 0x8c0000b8, 0x8c0000bc, 0x8c0000e0}; for (int i = 0; i < 5; i++) *(unsigned *)v[i] = 0x8c0000f0; }
  FILE *f = fopen(argc > 1 ? argv[1] : "../disc/1ST_READ.BIN", "rb");
  if (!f) { fputs("no image\n", stderr); return 1; }
  fread((char *)0x8c010000, 1, 0xf00000, f); fclose(f);
  /* Maple bus: per-port device records at 0x8c4727c4 (0x34 bytes each) point their +0x30 field at a zeroed status block */
  for (int p = 0; p < 24; p++) *(unsigned *)(0x8c4727c4 + p * 0x34 + 0x30) = 0x8cfa0000;
  *(unsigned *)0x8cfa0000 = 1;   /* status word bit 0: a controller is connected (all buttons released) */
  static char alt[65536];
  stack_t ss = { alt, sizeof alt, 0 }; sigaltstack(&ss, 0);
  struct sigaction sa; memset(&sa, 0, sizeof sa);
  sa.sa_sigaction = segv; sa.sa_flags = SA_SIGINFO | SA_ONSTACK;
  sigaction(SIGALRM, &sa, 0); alarm(argc > 2 ? atoi(argv[2]) : 4); sigaction(SIGSEGV, &sa, 0); sigaction(SIGTRAP, &sa, 0); sigaction(SIGBUS, &sa, 0); sigaction(SIGILL, &sa, 0); sigaction(SIGFPE, &sa, 0);
  /* guest-visible stack in low memory so locals' addresses fit in 32 bits */
  ucontext_t main_uc, game_uc; getcontext(&game_uc);
  mmap((void *)0x8e000000, 0x800000, PROT_READ|PROT_WRITE, MAP_FIXED|MAP_ANON|MAP_PRIVATE, -1, 0);
  game_uc.uc_stack.ss_sp = (void *)0x8e000000; game_uc.uc_stack.ss_size = 0x800000;  /* host C frames; the guest stack is separate (vsp) */ game_uc.uc_link = &main_uc;
  vsp = 0x8ceffe00;  /* guest sp for the first function; the C stack below holds the host frames */
  makecontext(&game_uc, run, 0);
  pthread_t th; pthread_create(&th, 0, spg, 0);
  swapcontext(&main_uc, &game_uc);
  return 0;
}
