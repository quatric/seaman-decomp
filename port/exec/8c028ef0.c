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
undefined4 FUN_8c028ef0_def(int ar4,float *ar5,float *ar6,float *ar7)

{
  ring[rp++ & 255] = "FUN_8c028ef0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  *ar5 = *(float *)(unsigned)(ar4 + 0x30) + *(float *)(unsigned)(ar4 + 0x3c8);
  *ar6 = *(float *)(unsigned)(ar4 + 0x34) + *(float *)(unsigned)(ar4 + 0x3cc);
  *ar7 = *(float *)(unsigned)(ar4 + 0x38) + *(float *)(unsigned)(ar4 + 0x3d0);
  return 0x3d0;
}

__asm__(".globl _FUN_8c028ef0\n.set _FUN_8c028ef0, _FUN_8c028ef0_def\n");
