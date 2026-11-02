#include "../decls.h"
int FUN_8c01a1bc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = 0xbc;
  *(undefined4 *)(0xbc + ar4) = 1;
  return iVar1;
}

__asm__(".globl _FUN_8c01a1bc\n.set _FUN_8c01a1bc, _FUN_8c01a1bc_def\n");
