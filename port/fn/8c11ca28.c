#include "../decls.h"
undefined4 FUN_8c11ca28_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 ar5_00;
  int unaff_r14;
  
  if (unaff_r14 == 0) {
    return 6;
  }
  if (*(int *)(0xf0 + unaff_r14) == 0x218df4f5) {
    iVar1 = FUN_8c11c9d2(*(undefined4 *)(0xfc + unaff_r14),ar5,ar6,ar7);
    if (iVar1 != 0) {
      return 1;
    }
    iVar1 = (**(code **)(*(int *)(0xfc + unaff_r14) + 0x1c))
                      (0xf4 + unaff_r14,ar5,ar6,ar7);
    if ((*(int *)(0xe8 + unaff_r14) == iVar1) &&
       (iVar1 = (**(code **)(*(int *)(0xfc + unaff_r14) + 0x20))
                          (0xf4 + unaff_r14,ar5,ar6,ar7),
       *(int *)(0xec + unaff_r14) == iVar1)) {
      return 0;
    }
    ar5_00 = 2;
    uVar2 = *(undefined4 *)(0xfc + unaff_r14);
  }
  else {
    ar5_00 = 0xb;
    uVar2 = *(undefined4 *)(0xfc + unaff_r14);
  }
  uVar2 = FUN_8c11cd02(uVar2,ar5_00,ar6,ar7);
  return uVar2;
}

__asm__(".globl _FUN_8c11ca28\n.set _FUN_8c11ca28, _FUN_8c11ca28_def\n");
