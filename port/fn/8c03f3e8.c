#include "../decls.h"
int FUN_8c03f3e8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = 0x88;
  *(undefined4 *)(0x88 + ar4) = 1;
  return iVar1;
}

__asm__(".globl _FUN_8c03f3e8\n.set _FUN_8c03f3e8, _FUN_8c03f3e8_def\n");
