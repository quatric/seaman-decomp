/* guest function address -> host function, plus the call-trace ring and the per-call register mirrors the generated units use */
#include "host.h"
#include "../decls.h"
extern "C" {
const char *ring[256]; unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; unsigned long vsp;
unsigned trace_hash;
#ifndef TRACE_WATCH
#define TRACE_WATCH FUN_8c211040   /* a generated function's name: -DTRACE_WATCH=... logs a checkpoint at each call */
#endif
#define TW_STR_(x) #x
#define TW_STR(x) TW_STR_(x)
const char *trace_watch = TW_STR(TRACE_WATCH); unsigned trace_last;
unsigned trace_lo = 0xffffffffu, trace_hi = 0, trace_mask = 0;
static void dump_mem(void)
{
  for (int b = 0; b < 256; b++) { unsigned x = 5381; const le<unsigned> *p = (const le<unsigned> *)(0x8c000000u + b * 0x10000u); for (int i = 0; i < 0x4000; i++) x = x * 33 + (unsigned)p[i]; host_log("MB %d %08x\n", b, x); }
#ifdef TRACE_BLOCK
  for (int c = 0; c < 0x4000; c += 8) { const le<unsigned> *p = (const le<unsigned> *)(0x8c000000u + TRACE_BLOCK * 0x10000u) + c; host_log("WD %05x %x %x %x %x %x %x %x %x\n", TRACE_BLOCK * 0x10000 + c * 4, (unsigned)p[0], (unsigned)p[1], (unsigned)p[2], (unsigned)p[3], (unsigned)p[4], (unsigned)p[5], (unsigned)p[6], (unsigned)p[7]); }
#endif
}
void trace_ckpt(unsigned r, unsigned h)
{
  static int dumped; if (trace_watch && !dumped && !__builtin_strcmp(ring[(r - 1) & 255], trace_watch)) { dumped = 1; dump_mem(); }
  trace_last = *(volatile unsigned *)0x8c4aa014u;
  host_log("[ring %s %s %s]", ring[(r - 4) & 255], ring[(r - 3) & 255], ring[(r - 2) & 255]);
  host_log("CK %u %08x %s t=%x prev-args %x %x %x\n", r, h, ring[(r - 1) & 255], (unsigned)GM(unsigned, 0x8c4aa014u), vr4, vr5, vr6);
}
unsigned long guest_rts(unsigned long a, unsigned long b, unsigned long c, unsigned long d) { return 0; }
unsigned long bios_call(unsigned long, unsigned long, unsigned long, unsigned long);
unsigned long bios_stub(unsigned long a, unsigned long b, unsigned long c, unsigned long d) { return bios_call(a, b, c, d); }
unsigned game_main(unsigned, unsigned, unsigned, unsigned);
struct ent { unsigned a; void *p; const char *n; };
#include "xthunks.inc"
static const ent xtab[] = {
#include "xtab.inc"
};
static const int xn = sizeof xtab / sizeof xtab[0];
extern "C" unsigned long sh4_island_for(unsigned pc);
unsigned long host_audio_override(unsigned long a);
/* the generated function at an exact address, ignoring host overrides */
unsigned long xlat_orig(unsigned long a)
{
  unsigned lo = 0, hi = xn;
  while (lo < hi) { unsigned m = (lo + hi) / 2; if (xtab[m].a < a) lo = m + 1; else hi = m; }
  if (lo < (unsigned)xn && xtab[lo].a == a) return (unsigned long)xtab[lo].p;
  return a >= 0x8c010000UL && a < 0x8d000000UL ? sh4_island_for((unsigned)a) : 0;
}
unsigned long xlat_try(unsigned long a)
{
  unsigned lo = 0, hi = xn;
  if ((a >> 29) == 5 || (a >> 29) == 4 || (a >> 29) == 0) a = 0x80000000UL | (a & 0x1fffffffUL);
  if (a - 0x8c26a000UL < 0x1000UL) { unsigned long h = host_audio_override(a); if (h) return h; }   /* MWSND port slots (wii_audio.cpp) */
  while (lo < hi) { unsigned m = (lo + hi) / 2; if (xtab[m].a < a) lo = m + 1; else hi = m; }
  if (lo < (unsigned)xn && xtab[lo].a == a) return (unsigned long)xtab[lo].p;
  if (a == 0x8c0000f0UL) return (unsigned long)bios_stub;
  if (a >= 0x8c010000UL && a < 0x8d000000UL) {
    unsigned w0 = GM(unsigned short, a), w1 = GM(unsigned short, a + 2);
    if (w0 == 0x000b) return (unsigned long)guest_rts;
    /* jump thunk: mov.l @(disp,pc),rN ; jmp @rN ; nop - follow it to the real target */
    if ((w0 >> 12) == 0xd && (w1 & 0xf0ff) == 0x402b && ((w1 >> 8) & 15) == ((w0 >> 8) & 15))
      return xlat_try(GM(unsigned, ((a & ~3UL) + 4) + (unsigned long)(w0 & 0xff) * 4));
  }
  return 0;
}
/* only exact function starts (and jump thunks): used by the SH-4 interpreter, where a branch to a shared `rts` epilogue is not a call */
unsigned long xlat_exact(unsigned long a)
{
  unsigned lo = 0, hi = xn;
  if ((a >> 29) == 5 || (a >> 29) == 4 || (a >> 29) == 0) a = 0x80000000UL | (a & 0x1fffffffUL);
  if (a - 0x8c26a000UL < 0x1000UL) { unsigned long h = host_audio_override(a); if (h) return h; }
  while (lo < hi) { unsigned m = (lo + hi) / 2; if (xtab[m].a < a) lo = m + 1; else hi = m; }
  if (lo < (unsigned)xn && xtab[lo].a == a) return (unsigned long)xtab[lo].p;
  if (a >= 0x8c010000UL && a < 0x8d000000UL) {
    unsigned w0 = GM(unsigned short, a), w1 = GM(unsigned short, a + 2);
    if ((w0 >> 12) == 0xd && (w1 & 0xf0ff) == 0x402b && ((w1 >> 8) & 15) == ((w0 >> 8) & 15))
      return xlat_exact(GM(unsigned, ((a & ~3UL) + 4) + (unsigned long)(w0 & 0xff) * 4));
  }
  return 0;
}
unsigned long xlat(unsigned long a)
{
  unsigned long h = xlat_try(a);
  if (h) return h;
  unsigned n = (a >> 29) == 5 ? (unsigned)((a & 0x1fffffffUL) | 0x80000000UL) : (unsigned)a;
  if (n >= 0x8c010000u && n < 0x8d000000u && (h = sh4_island_for(n)) != 0) return h;   /* hand-written assembly: run it in the SH-4 interpreter */
  host_log("xlat: unmapped call target %lx (draw mode %d, callback %x, list %x)\n", a, (int)GM(int, 0x8c4aad80), (unsigned)GM(unsigned, 0x8c4aa340), (unsigned)GM(unsigned, 0x8c4aa4bc));
  for (int i = 20; i > 0; i--) host_log("  %s\n", ring[(rp - i) & 255] ? ring[(rp - i) & 255] : "-");
  for (;;) { }
}
const char *hostname(void *p)
{
  const char *b = 0; unsigned long bp = 0;
  for (int i = 0; i < xn; i++) { unsigned long q = (unsigned long)xtab[i].p; if (q <= (unsigned long)p && q > bp) { bp = q; b = xtab[i].n; } }
  return ((unsigned long)p - bp < 0x40000) ? b : 0;
}
}

extern "C" void dbg_arr(unsigned long a, unsigned ar4) { const le<unsigned> *p = (const le<unsigned>*)a, *q = (const le<unsigned>*)(unsigned long)(ar4 + 0x2c); host_log("DA arr %x %x %x %x %x  in %x %x %x %x %x  ar4=%x\n", (unsigned)p[0], (unsigned)p[1], (unsigned)p[2], (unsigned)p[3], (unsigned)p[4], (unsigned)q[0], (unsigned)q[1], (unsigned)q[2], (unsigned)q[3], (unsigned)q[4], ar4); }

extern "C" void dbg_it(unsigned a,unsigned b,unsigned c,unsigned d,unsigned e,unsigned f,unsigned g,unsigned h) { host_log("DI %x %x %x %x %x %x %x %x\n",a,b,c,d,e,f,g,h); }

extern "C" void dbg_tab(unsigned n) { volatile le<unsigned> *t=(volatile le<unsigned>*)0x8c4aa22cu; host_log("DT n=%x flag=%x ef0=%x fcc=%x t: %x %x %x %x %x | %x %x %x %x %x | %x %x\n",n,(unsigned)*(volatile le<unsigned>*)0x8c4aa014u,(unsigned)*(volatile le<unsigned>*)0x8c4a9ef0u,(unsigned)*(volatile le<unsigned>*)0x8c4a9fccu,(unsigned)t[0],(unsigned)t[1],(unsigned)t[2],(unsigned)t[3],(unsigned)t[4],(unsigned)t[5],(unsigned)t[6],(unsigned)t[7],(unsigned)t[8],(unsigned)t[9],(unsigned)t[10],(unsigned)t[11]); }
