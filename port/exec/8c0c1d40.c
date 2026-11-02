#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0c1d40_def(undefined4 ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0c1d40";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  { extern unsigned long host_pmf_call(unsigned long,unsigned long,unsigned long,unsigned long,unsigned long); host_pmf_call((unsigned long)(unsigned)(ar4 + 0x2dda0 + 12 * *(int *)(unsigned)(unsigned)(ar4 + 0x2dd78)),(unsigned long)(unsigned)ar4,(unsigned long)(unsigned)ar5,ar6,ar7); }
  *(undefined4 *)(unsigned)0x8c2b5628 = *(undefined4 *)(unsigned)(0x88 + ar5);
  return 1;
}

__asm__(".globl _FUN_8c0c1d40\n.set _FUN_8c0c1d40, _FUN_8c0c1d40_def\n");
