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
undefined4 FUN_8c11c9d6_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c11c9d6";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  int unaff_r14 = 0;
  
  if (unaff_r14 == 0) {
    return 6;
  }
  if (*(int *)(unsigned)(unaff_r14 + 0x38) != 0x1b9813f5) {
    return 0x12;
  }
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((unaff_r14 + 0x1c))))(unaff_r14 + 8,ar5,ar6,ar7));
  if (*(int *)(unsigned)(unaff_r14 + 4) != iVar1) {
    uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c11cd02(unaff_r14,2,ar6,ar7));
    return uVar2;
  }
  return 0;
}

__asm__(".globl _FUN_8c11c9d6\n.set _FUN_8c11c9d6, _FUN_8c11c9d6_def\n");
