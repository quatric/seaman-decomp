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
undefined4 FUN_8c101784_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c101784";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  bool bVar1;
  undefined4 uVar2;
  byte bVar3;
  
  *(undefined4 *)(unsigned)(ar4 + 0x2c) = 0;
  for (bVar3 = 0; bVar3 < 4; bVar3 = bVar3 + 1) {
    *(undefined4 *)(unsigned)(ar4 + (uint)bVar3 * 0x10 + 0x38) = 0xffffffff;
  }
  bVar1 = false;
  while (!bVar1) {
    *(undefined4 *)(unsigned)(0x88 + ar4) = 0xffffffff;
    bVar1 = true;
  }
  uVar2 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c101c64(ar4,ar5,ar6,ar7));
  return uVar2;
}

__asm__(".globl _FUN_8c101784\n.set _FUN_8c101784, _FUN_8c101784_def\n");
