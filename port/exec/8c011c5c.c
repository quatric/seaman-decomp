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
undefined4 * FUN_8c011c5c_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c011c5c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 * ain0 = (undefined4 *)(unsigned long)vin0;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 20; for (int i_ = 0; i_ < 20; i_++) z_[i_] = 0; }
  uint uVar1;
  float fVar2;
  ulonglong in_dr4 = 0;
  float fVar3;
  
  fVar3 = (float)(in_dr4 >> 0x20);
  fVar2 = (float)in_dr4;
  if ((((uint)fVar3 & 0x7f800000) == 0x7f800000) ||
     (((((uint)fVar2 & 0x7f800000) == 0x7f800000 && ((in_dr4 & 0x7fffff) != 0)) ||
      (ain0 = (undefined4 *)(unsigned)0x14, fVar2 == 0.0)))) {
    *ar4 = 0;
  }
  else if (((uint)fVar2 & 0x7f800000) == 0x7f800000) {
    *ar4 = 0;
  }
  else {
    (*(float *)(fr0_ - 0x14)) = ABS(fVar3) / ABS(fVar2);
    uVar1 = (uint)(*(float *)(fr0_ - 0x14)) & 0x80000000;
    if (((uint)(*(float *)(fr0_ - 0x14)) & 0x7f800000) < 0x4b000000) {
      (*(float *)(fr0_ - 0x14)) = (float)(int)(*(float *)(fr0_ - 0x14));
    }
    (*(float *)(fr0_ - 0x14)) = (float)((uint)(*(float *)(fr0_ - 0x14)) | uVar1);
    ain0 = ((undefined4 *)(unsigned)0x8c011d48);
    if (2.1474836e+09 < (*(float *)(fr0_ - 0x14))) {
      ain0 = ((undefined4 *)(unsigned)0x8c011d4c);
      (*(float *)(fr0_ - 0x14)) = (*(float *)(fr0_ - 0x14)) + -4.2949673e+09;
    }
    *ar4 = (int)(*(float *)(fr0_ - 0x14));
  }
  return ain0;
}

__asm__(".globl _FUN_8c011c5c\n.set _FUN_8c011c5c, _FUN_8c011c5c_def\n");
