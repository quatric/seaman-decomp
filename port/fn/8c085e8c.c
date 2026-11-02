#include "../decls.h"
int FUN_8c085e8c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = 0x2a8;
  *(undefined4 *)(0x2a8 + ar4) = 1;
  return iVar1;
}

__asm__(".globl _FUN_8c085e8c\n.set _FUN_8c085e8c, _FUN_8c085e8c_def\n");
