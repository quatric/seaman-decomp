#include "../decls.h"
int FUN_8c05ee84_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = 0xc0;
  *(undefined4 *)(0xc0 + ar4) = ar5;
  return iVar1;
}

__asm__(".globl _FUN_8c05ee84\n.set _FUN_8c05ee84, _FUN_8c05ee84_def\n");
