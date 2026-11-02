#include "../decls.h"
undefined4 FUN_8c26905a_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  code *in_r2;
  
  uVar1 = (*in_r2)();
  *(undefined4 *)(ar4 + 0x50) = uVar1;
  *(int *)(ar4 + 0x54) = *(int *)(ar4 + 0x54) + *(int *)(ar4 + 0x58);
  *(undefined4 *)(ar4 + 0x58) = 0;
  return 0x58;
}

__asm__(".globl _FUN_8c26905a\n.set _FUN_8c26905a, _FUN_8c26905a_def\n");
