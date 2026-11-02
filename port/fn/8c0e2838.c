#include "../decls.h"
int FUN_8c0e2838_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = 0x160;
  *(undefined4 *)(0x160 + ar4) = ar5;
  return iVar1;
}

__asm__(".globl _FUN_8c0e2838\n.set _FUN_8c0e2838, _FUN_8c0e2838_def\n");
