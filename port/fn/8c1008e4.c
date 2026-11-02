#include "../decls.h"
undefined4 FUN_8c1008e4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((0.3 < *(float *)(ar4 + 0x140)) ||
     (iVar1 = input_is_mask_set_20_01f22c(*(undefined4 *)(ar4 + 0xcc),ar5,ar6,ar7), iVar1 != 0)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

__asm__(".globl _FUN_8c1008e4\n.set _FUN_8c1008e4, _FUN_8c1008e4_def\n");
