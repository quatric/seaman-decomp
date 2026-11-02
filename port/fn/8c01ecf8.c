#include "../decls.h"
undefined4 FUN_8c01ecf8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(0xa510 + ar4) == 1) {
    uVar1 = 2;
  }
  else {
    iVar2 = input_mask_test(ar4,0x10000,2,ar7);
    if (iVar2 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  return uVar1;
}

__asm__(".globl _FUN_8c01ecf8\n.set _FUN_8c01ecf8, _FUN_8c01ecf8_def\n");
