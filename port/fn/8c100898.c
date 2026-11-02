#include "../decls.h"
undefined4 FUN_8c100898_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((*(float *)(ar4 + 0x140) < -0.3) ||
     (iVar1 = input_is_mask_set_10_01f2b4(*(undefined4 *)(ar4 + 0xcc),ar5,ar6,ar7), iVar1 != 0)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

__asm__(".globl _FUN_8c100898\n.set _FUN_8c100898, _FUN_8c100898_def\n");
