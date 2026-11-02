#include "../decls.h"
int FUN_8c0273f8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = 0x81;
  *(undefined1 *)(0x81 + ar4) = (undefined1)ar5;
  return iVar1;
}

__asm__(".globl _FUN_8c0273f8\n.set _FUN_8c0273f8, _FUN_8c0273f8_def\n");
