#include "../decls.h"
undefined4 FUN_8c0df8d0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_PR;
  
  if (*(int *)(ar4 + 0x9d4) == 0) {
    uVar1 = 0;
  }
  else {
    if ((*(int *)(ar4 + 0x22810) == 0) && (*(int *)(ar4 + 0x22814) == 0)) {
      uVar1 = 1;
      FUN_8c22195c(1,ar5,ar6,ar7,in_PR);
      FUN_8c219070(uVar1,ar5,ar6,ar7);
      FUN_8c0f4b44(*(undefined4 *)(ar4 + 0x9d4),ar5,ar6,ar7);
      (**(code **)(*(int *)(*(int *)(ar4 + 0x9d4) + 8) + 0x34))(*(int *)(ar4 + 0x9d4),ar5,ar6,ar7);
      uVar1 = 1;
      FUN_8c22195c(1,ar5,ar6,ar7,in_PR);
      FUN_8c219070(uVar1,ar5,ar6,ar7);
    }
    else {
      FUN_8c0da88c(ar4,ar5,ar6,ar7);
    }
    uVar1 = 1;
  }
  return uVar1;
}

__asm__(".globl _FUN_8c0df8d0\n.set _FUN_8c0df8d0, _FUN_8c0df8d0_def\n");
