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
undefined4 FUN_8c121ef0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 *ar7)

{
  ring[rp++ & 255] = "FUN_8c121ef0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  int s0 = *(int *)(vsp + 0);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 *puVar1;
  
  if (s0 != 2) {
    return 1;
  }
  puVar1 = (undefined4 *)(unsigned)(0x24c + ar4);
  *puVar1 = *ar7;
  puVar1[1] = ar7[1];
  puVar1[2] = ar7[2];
  puVar1[3] = ar7[3];
  puVar1[4] = ar7[4];
  puVar1[5] = ar7[5];
  puVar1[6] = ar7[6];
  return 0;
}

__asm__(".globl _FUN_8c121ef0\n.set _FUN_8c121ef0, _FUN_8c121ef0_def\n");
