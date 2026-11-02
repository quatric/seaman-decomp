#include "../decls.h"
int FUN_8c12356c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = (int)0x4d4;
  *(undefined2 *)(iVar1 + ar4) = 0;
  *(undefined2 *)(iVar1 + 2 + ar4) = 0;
  *(undefined2 *)(iVar1 + -0x14 + ar4) = 0;
  return iVar1 + -0x14;
}

__asm__(".globl _FUN_8c12356c\n.set _FUN_8c12356c, _FUN_8c12356c_def\n");
