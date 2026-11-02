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
uint sh4_tmu_1f8a64_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "sh4_tmu_1f8a64";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  char cVar1;
  
  *(undefined4 *)(unsigned)0xffd80000 = 0;
  cVar1 = *(undefined4 *)(unsigned)0xffd80004;
  *(undefined4 *)(unsigned)0xffd80004 = (char)((int)cVar1 | 4U);
  return (int)cVar1 | 4U;
}

__asm__(".globl _sh4_tmu_1f8a64\n.set _sh4_tmu_1f8a64, _sh4_tmu_1f8a64_def\n");
