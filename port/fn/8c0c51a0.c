#include "../decls.h"
int FUN_8c0c51a0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  *(undefined2 *)(0x18c + ar4) = 0x78;
  iVar1 = 0x188;
  *(undefined4 *)(0x188 + ar4) = ar5;
  return iVar1;
}

__asm__(".globl _FUN_8c0c51a0\n.set _FUN_8c0c51a0, _FUN_8c0c51a0_def\n");
