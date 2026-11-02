#include "../decls.h"
undefined4 FUN_8c11c9d6_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  int unaff_r14;
  
  if (unaff_r14 == 0) {
    return 6;
  }
  if (*(int *)(unaff_r14 + 0x38) != 0x1b9813f5) {
    return 0x12;
  }
  iVar1 = (**(code **)(unaff_r14 + 0x1c))(unaff_r14 + 8,ar5,ar6,ar7);
  if (*(int *)(unaff_r14 + 4) != iVar1) {
    uVar2 = FUN_8c11cd02(unaff_r14,2,ar6,ar7);
    return uVar2;
  }
  return 0;
}

__asm__(".globl _FUN_8c11c9d6\n.set _FUN_8c11c9d6, _FUN_8c11c9d6_def\n");
