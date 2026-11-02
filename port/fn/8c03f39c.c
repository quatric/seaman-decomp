#include "../decls.h"
int FUN_8c03f39c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = 0x8c;
  *(undefined4 *)(0x8c + ar4) = 1;
  return iVar1;
}

__asm__(".globl _FUN_8c03f39c\n.set _FUN_8c03f39c, _FUN_8c03f39c_def\n");
