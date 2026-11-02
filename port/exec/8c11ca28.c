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
undefined4 FUN_8c11ca28_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c11ca28";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  undefined4 ar5_00;
  int unaff_r14 = 0;
  
  if (unaff_r14 == 0) {
    return 6;
  }
  if (*(int *)(unsigned)(0xf0 + unaff_r14) == 0x218df4f5) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c11c9d2(*(undefined4 *)(unsigned)(0xfc + unaff_r14),ar5,ar6,ar7));
    if (iVar1 != 0) {
      return 1;
    }
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(0xfc + unaff_r14) + 0x1c))))
                      (0xf4 + unaff_r14,ar5,ar6,ar7));
    if ((*(int *)(unsigned)(0xe8 + unaff_r14) == iVar1) &&
       (iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(0xfc + unaff_r14) + 0x20))))
                          (0xf4 + unaff_r14,ar5,ar6,ar7)),
       *(int *)(unsigned)(0xec + unaff_r14) == iVar1)) {
      return 0;
    }
    ar5_00 = 2;
    uVar2 = *(undefined4 *)(unsigned)(0xfc + unaff_r14);
  }
  else {
    ar5_00 = 0xb;
    uVar2 = *(undefined4 *)(unsigned)(0xfc + unaff_r14);
  }
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c11cd02(uVar2,ar5_00,ar6,ar7));
  return uVar2;
}

__asm__(".globl _FUN_8c11ca28\n.set _FUN_8c11ca28, _FUN_8c11ca28_def\n");
