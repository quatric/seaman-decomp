#include "../decls.h"
int FUN_8c0c4d70_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = 0x380;
  *(undefined2 *)(0x380 + ar4) = (undefined2)ar5;
  return iVar1;
}

__asm__(".globl _FUN_8c0c4d70\n.set _FUN_8c0c4d70, _FUN_8c0c4d70_def\n");
