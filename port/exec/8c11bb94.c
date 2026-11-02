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
undefined4 FUN_8c11bb94_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c11bb94";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 *ar5_00;
  int ar7_00;
  
  ar5_00 = ((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x2c));
  ar7_00 = *(int *)(unsigned)(ar4 + 0x54);
  if (ar5_00 < ar5_00 + ar7_00 + *(int *)(unsigned)(ar4 + 0x54)) {
    do {
      *ar5_00 = 0x3f800000;
      ar5_00 = ar5_00 + 1;
    } while (ar5_00 < (undefined4 *)(unsigned)(*(int *)(unsigned)(ar4 + 0x2c) + ar7_00 * 4 + *(int *)(unsigned)(ar4 + 0x54) * 4));
  }
  *(undefined2 *)(unsigned)(ar4 + 0x2a) = 0;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c11bb54(ar4,ar5_00,ar7_00 * 4,ar7_00));
  return uVar1;
}

__asm__(".globl _FUN_8c11bb94\n.set _FUN_8c11bb94, _FUN_8c11bb94_def\n");
