#include "../decls.h"
int FUN_8c062054_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = 0xa4;
  *(undefined4 *)(0xa4 + ar4 + ar5 * 4) = ar6;
  return iVar1;
}

__asm__(".globl _FUN_8c062054\n.set _FUN_8c062054, _FUN_8c062054_def\n");
