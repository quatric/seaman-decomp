#include "../decls.h"
int FUN_8c065ca4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = 0xc8;
  *(undefined4 *)(0xc8 + ar4) = ar5;
  return iVar1;
}

__asm__(".globl _FUN_8c065ca4\n.set _FUN_8c065ca4, _FUN_8c065ca4_def\n");
