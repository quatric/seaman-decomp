/* SH-4 CPU state and memory access shared by the interpreter (wii_sh4.cpp) and the statically translated functions
   (port/wii/sh4x, tools/sh4_translate.py), so both run guest code on the same registers, FPU file and memory helpers. */
#pragma once
#include "host.h"
#include <math.h>
extern "C" {
struct Sh4Fpu { float fr[16], xf[16]; unsigned fpul, fpscr; };
extern Sh4Fpu sh4_fpu;
extern unsigned sh4_pc, sz_on_pc, sz_cur_entry;
void sq_direct(unsigned ea, unsigned v, int size);
void sq_pref(unsigned ea);
unsigned long xlat_exact(unsigned long);
}
namespace sh4 {
struct Cpu {
  unsigned r[16], pr, mach, macl, gbr;
  int t, s, q, m;
};
static Sh4Fpu &F = sh4_fpu;
enum { SZ = 1 << 20, PRB = 1 << 19, FRB = 1 << 21 };
/* the U0, P1 and P2 forms of guest RAM (0x0c..., 0x8c..., 0xac...) are all mapped by BATs (wii_dsi.cpp), so guest addresses are used as they are */
inline unsigned norm(unsigned a) { return a; }
inline bool is_sq(unsigned a) { return (a >> 26) == 0x38; }
inline unsigned rd32(unsigned a) { return GM(unsigned, norm(a)); }
inline unsigned rd16(unsigned a) { return GM(unsigned short, norm(a)); }
inline unsigned rd8(unsigned a) { return GM(unsigned char, norm(a)); }
inline void wr32(unsigned a, unsigned v) { if (is_sq(a)) sq_direct(a, v, 4); else GM(unsigned, norm(a)) = v; }
inline void wr16(unsigned a, unsigned v) { if (is_sq(a)) sq_direct(a, v, 2); else GM(unsigned short, norm(a)) = (unsigned short)v; }
inline void wr8(unsigned a, unsigned v) { if (is_sq(a)) sq_direct(a, v, 1); else GM(unsigned char, norm(a)) = (unsigned char)v; }
inline float u2f(unsigned v) { union { unsigned u; float f; } x; x.u = v; return x.f; }
inline unsigned f2u(float f) { union { unsigned u; float f; } x; x.f = f; return x.u; }
inline int sx8(unsigned v) { return (signed char)v; }
inline int sx16(unsigned v) { return (short)v; }
/* DRn = FRn (upper word) : FRn+1 */
inline double getd(const float *b, unsigned n) { union { unsigned long long u; double d; } x; x.u = ((unsigned long long)f2u(b[n]) << 32) | f2u(b[n + 1]); return x.d; }
inline void setd(float *b, unsigned n, double d) { union { unsigned long long u; double d; } x; x.d = d; b[n] = u2f((unsigned)(x.u >> 32)); b[n + 1] = u2f((unsigned)x.u); }
/* the same on two float locals (translated code keeps the FPU registers in locals) */
inline double getd2(float hi, float lo) { union { unsigned long long u; double d; } x; x.u = ((unsigned long long)f2u(hi) << 32) | f2u(lo); return x.d; }
inline void setd2(float &hi, float &lo, double d) { union { unsigned long long u; double d; } x; x.d = d; hi = u2f((unsigned)(x.u >> 32)); lo = u2f((unsigned)x.u); }
inline void set_fpscr(unsigned v) { if ((v ^ F.fpscr) & (SZ | PRB)) { static int ns; if (ns++ < 20) host_log("sh4: lds fpscr %x -> %x at %08x\n", F.fpscr, v, sh4_pc); } if (0) { static int nl; if (nl++ < 12) host_log("sh4: fpscr %x -> %x at %08x\n", F.fpscr, v, sh4_pc); } if ((v ^ F.fpscr) & FRB) for (int i = 0; i < 16; i++) { float t = F.fr[i]; F.fr[i] = F.xf[i]; F.xf[i] = t; } F.fpscr = v; }

#ifdef SH4_PROF
/* profile builds: the translated function running (0 in the interpreter), for the sampler in wii_main.cpp */
extern "C" unsigned sh4x_cur;
struct XProf { unsigned s; XProf(unsigned e) : s(sh4x_cur) { sh4x_cur = e; } ~XProf() { sh4x_cur = s; } };
#define XPROF(e) XProf xp_(e)
/* a translated function met another FPU mode than it was translated for and continued in the interpreter */
extern "C" void sh4x_guard(unsigned pc);
#define XGUARD(pc) sh4x_guard(pc)
#else
#define XPROF(e)
#define XGUARD(pc)
#endif
[[noreturn]] void bad(const char *why, unsigned pc, unsigned op);
typedef unsigned long (*hfn)(unsigned long, unsigned long, unsigned long, unsigned long);
typedef void (*xfn)(Cpu &);
/* for translated code: run guest code from pc in the interpreter until control reaches `stop`; call the native (C) version of the
   function at t if it has one (true); the translated function at a, or 0; call a native function through its pointer */
void exec(Cpu &C, unsigned pc, unsigned stop);
bool native_call(Cpu &C, unsigned t);
xfn xfind(unsigned a);
void call_ptr(Cpu &C, hfn h);
}
