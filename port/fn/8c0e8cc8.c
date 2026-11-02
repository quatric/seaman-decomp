#include "../decls.h"
int FUN_8c0e8cc8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = 0x23250;
  *(undefined4 *)(0x23250 + ar4) = ar5;
  return iVar1;
}

__asm__(".globl _FUN_8c0e8cc8\n.set _FUN_8c0e8cc8, _FUN_8c0e8cc8_def\n");
