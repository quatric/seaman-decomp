#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
uint FUN_8c01f810_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c01f810");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  { extern void dbg_log(unsigned long,unsigned long,unsigned long,unsigned long); static unsigned lastg = 0x12345; unsigned g = *(le<unsigned>* )(unsigned)0x8c2739e0; if (g != lastg) { dbg_log(0x39e0, g, lastg, 0); lastg = g; } } (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c264010(0,0,0,0)); (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1f231a(0,0,0,0)); { extern void dbg_log(unsigned long,unsigned long,unsigned long,unsigned long); static int dn; if (++dn % 20000 == 1) { unsigned h = *(le<unsigned>* )(unsigned)(unsigned long)(unsigned)ar4; unsigned st = h ? *(le<unsigned>* )(unsigned)(h + 4) : 0; dbg_log(h, h ? *(unsigned char *)(unsigned)(h + 1) : 99, st, st ? *(unsigned char *)(unsigned)(st + 1) : 99); if (dn == 1) { extern void dbg_dump(unsigned long,int); unsigned t = *(le<unsigned>* )(unsigned)0x8c2739f0; dbg_dump(0x8c2739f0, 1); if (t) dbg_dump(t, 30); } if (st) { extern void dbg_dump(unsigned long,int); dbg_dump(st, 20); dbg_dump(*(le<unsigned>* )(unsigned)(st + 4), 12); } } } iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01f794(ar4,ar5,ar6,ar7));
  return (uint)(iVar1 == 0);
}

__asm__(".globl FUN_8c01f810\n.set FUN_8c01f810, FUN_8c01f810_def\n");

}
