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
int FUN_8c238eba_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c238eba";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  if (ar5 == 1) {
    *(undefined4 *)(unsigned)0x8c4ab274 = *(undefined4 *)(unsigned)0x8c4ab274 + ar4;
  }
  else if (ar5 == 0) {
    *(undefined4 *)(unsigned)0x8c4ab274 = ar4 + *(undefined4 *)(unsigned)0x8c4ab270;
  }
  return ar5;
}

__asm__(".globl _FUN_8c238eba\n.set _FUN_8c238eba, _FUN_8c238eba_def\n");
