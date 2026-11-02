#include "../decls.h"
int FUN_8c0f4e1c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = 0x108;
  *(undefined4 *)(0x108 + ar4) = ar5;
  return iVar1;
}

__asm__(".globl _FUN_8c0f4e1c\n.set _FUN_8c0f4e1c, _FUN_8c0f4e1c_def\n");
