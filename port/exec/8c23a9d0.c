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
undefined4 FUN_8c23a9d0_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c23a9d0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  *(float *)(unsigned)(ar5 + 4) = *(float *)(unsigned)(ar5 + 4) + *(float *)(unsigned)(ar4 + 0xf8);
  *(float *)(unsigned)(ar5 + 8) = *(float *)(unsigned)(ar5 + 8) + *(float *)(unsigned)(ar4 + 0xfc);
  *(float *)(unsigned)(ar5 + 0xc) = *(float *)(unsigned)(ar5 + 0xc) + *(float *)(unsigned)(ar4 + 0x100);
  return 0xc;
}

__asm__(".globl _FUN_8c23a9d0\n.set _FUN_8c23a9d0, _FUN_8c23a9d0_def\n");
