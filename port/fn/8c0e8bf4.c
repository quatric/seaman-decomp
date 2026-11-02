#include "../decls.h"
int FUN_8c0e8bf4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = 0x10dc;
  *(undefined4 *)(0x10dc + ar4) = ar5;
  return iVar1;
}

__asm__(".globl _FUN_8c0e8bf4\n.set _FUN_8c0e8bf4, _FUN_8c0e8bf4_def\n");
