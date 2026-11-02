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
undefined4 FUN_8c013d78_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c013d78";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 ain0 = (undefined4)(unsigned long)vin0;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  float in_fr4 = 0;
  
  if (in_fr4 == 0.0) {
    *ar4 = 0;
  }
  else {
    if (((uint)in_fr4 & 0x7f800000) != 0x7f800000) {
      *ar4 = ((int)((uint)in_fr4 & 0x7f800000) >> 0x17) + -0x7e;
      return ain0;
    }
    if (((uint)in_fr4 & 0x7fffff) == 0) {
      ain0 = 0x44c;
      (*(undefined4 *)(unsigned)(unsigned)0x8c2787a8) = 0x44c;
    }
    else {
      (*(undefined4 *)(unsigned)(unsigned)0x8c2787a8) = 0x44d;
    }
  }
  return ain0;
}

__asm__(".globl _FUN_8c013d78\n.set _FUN_8c013d78, _FUN_8c013d78_def\n");
