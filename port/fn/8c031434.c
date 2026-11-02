#include "../decls.h"
int FUN_8c031434_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = 0x128;
  *(undefined4 *)(0x128 + ar4) = ar5;
  return iVar1;
}

__asm__(".globl _FUN_8c031434\n.set _FUN_8c031434, _FUN_8c031434_def\n");
