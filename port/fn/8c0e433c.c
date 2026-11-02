#include "../decls.h"
int FUN_8c0e433c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = 0xd4;
  *(undefined4 *)(0xd4 + ar4) = ar5;
  return iVar1;
}

__asm__(".globl _FUN_8c0e433c\n.set _FUN_8c0e433c, _FUN_8c0e433c_def\n");
