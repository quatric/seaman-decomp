#include "../decls.h"
int FUN_8c0366e4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = 0x83;
  *(undefined1 *)(0x83 + ar4) = (undefined1)ar5;
  return iVar1;
}

__asm__(".globl _FUN_8c0366e4\n.set _FUN_8c0366e4, _FUN_8c0366e4_def\n");
