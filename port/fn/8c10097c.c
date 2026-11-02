#include "../decls.h"
undefined4 FUN_8c10097c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((*(float *)(ar4 + 0x13c) < -0.3) ||
     (iVar1 = input_is_mask_set_40_01f160(*(undefined4 *)(ar4 + 0xcc),ar5,ar6,ar7), iVar1 != 0)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

__asm__(".globl _FUN_8c10097c\n.set _FUN_8c10097c, _FUN_8c10097c_def\n");
