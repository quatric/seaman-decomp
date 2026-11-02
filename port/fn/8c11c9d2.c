#include "../decls.h"
undefined4 FUN_8c11c9d2_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  if (ar4 == 0) {
    return 6;
  }
  if (*(int *)(ar4 + 0x38) != 0x1b9813f5) {
    return 0x12;
  }
  iVar1 = (**(code **)(ar4 + 0x1c))(ar4 + 8);
  if (*(int *)(ar4 + 4) != iVar1) {
    uVar2 = FUN_8c11cd02(ar4,2,ar6,ar7);
    return uVar2;
  }
  return 0;
}

__asm__(".globl _FUN_8c11c9d2\n.set _FUN_8c11c9d2, _FUN_8c11c9d2_def\n");
