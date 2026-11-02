#include "../decls.h"
undefined4 FUN_8c100abc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((*(float *)(ar4 + 0x140) <= 0.4) ||
      (iVar1 = FUN_8c01ee54(*(undefined4 *)(ar4 + 0xcc),ar5,ar6,ar7), iVar1 == 0)) ||
     (iVar1 = FUN_8c01ef68(*(undefined4 *)(ar4 + 0xcc),ar5,ar6,ar7), iVar1 == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

__asm__(".globl _FUN_8c100abc\n.set _FUN_8c100abc, _FUN_8c100abc_def\n");
