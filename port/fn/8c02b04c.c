#include "../decls.h"
int FUN_8c02b04c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = 0x478;
  *(undefined4 *)(0x478 + ar4) = ar5;
  return iVar1;
}

__asm__(".globl _FUN_8c02b04c\n.set _FUN_8c02b04c, _FUN_8c02b04c_def\n");
