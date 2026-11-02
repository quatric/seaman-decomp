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
undefined4 FUN_8c1f90a4_def(uint ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c1f90a4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  (*(undefined4 *)(unsigned)(unsigned)0xa05f78bc) = ((ar4 & 0x7f00000) >> 0x14) << 8 | (ar5 & 0x7f00000) >> 0x14 | 0x46590000;
  (*(undefined4 *)(unsigned)(unsigned)0x8c273a20) = (*(undefined4 *)(unsigned)(unsigned)0xa05f78bc);
  return 0;
}

__asm__(".globl _FUN_8c1f90a4\n.set _FUN_8c1f90a4, _FUN_8c1f90a4_def\n");
