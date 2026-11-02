#include "../decls.h"
int FUN_8c0274b0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = 0x87;
  *(undefined1 *)(0x87 + ar4) = (undefined1)ar5;
  return iVar1;
}

__asm__(".globl _FUN_8c0274b0\n.set _FUN_8c0274b0, _FUN_8c0274b0_def\n");
