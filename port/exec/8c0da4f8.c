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
undefined4 FUN_8c0da4f8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0da4f8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  if ((*(int *)(unsigned)(ar4 + 0x104) != 0) || (*(int *)(unsigned)(ar4 + 0x108) != 0)) {
    return 1;
  }
  if ((*(int *)(unsigned)(ar4 + 0x124) == 0) && (*(int *)(unsigned)(ar4 + 0x128) == 0)) {
    if ((*(float *)(unsigned)(ar4 + 300) == 0.0) &&
       ((*(float *)(unsigned)(ar4 + 0x130) == 0.0 && (*(float *)(unsigned)(ar4 + 0x134) == 0.0)))) {
      if (*(int *)(unsigned)(ar4 + 0x13c) == -1) {
        return 0;
      }
      return 1;
    }
    return 1;
  }
  return 1;
}

__asm__(".globl _FUN_8c0da4f8\n.set _FUN_8c0da4f8, _FUN_8c0da4f8_def\n");
