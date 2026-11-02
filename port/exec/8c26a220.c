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
uint FUN_8c26a220_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c26a220";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = 0x8c4beb88;
  for (uVar1 = 0x8c4beb88;
      (uVar3 = 0, uVar1 < 0x8c4beb88 + (int)0x2a0 &&
      (uVar3 = uVar2, *(int *)(unsigned)(uVar1 + 4) != 0)); uVar1 = uVar1 + 0x54) {
    uVar2 = uVar2 + 0x54;
  }
  return uVar3;
}

__asm__(".globl _FUN_8c26a220\n.set _FUN_8c26a220, _FUN_8c26a220_def\n");
