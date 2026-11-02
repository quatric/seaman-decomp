#include "../decls.h"
int FUN_8c0ba3b8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 s0)

{
  int iVar1;
  
  *(undefined4 *)(0x154 + ar4) = ar5;
  *(undefined4 *)(0x158 + ar4) = ar6;
  *(undefined4 *)(0x15c + ar4) = ar7;
  iVar1 = 0x160;
  *(undefined4 *)(0x160 + ar4) = s0;
  return iVar1;
}

__asm__(".globl _FUN_8c0ba3b8\n.set _FUN_8c0ba3b8, _FUN_8c0ba3b8_def\n");
