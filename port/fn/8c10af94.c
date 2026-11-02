#include "../decls.h"
int FUN_8c10af94_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = (int)0xa4;
  return (*(int *)(iVar1 + ar4) * 2 + ar4 + (int)0xb4 + 3U & 0xfffffffc) +
         (*(int *)(iVar1 + -0x1c + ar4) + 1) * 4 + (*(int *)(iVar1 + -0x14 + ar4) + 1) * 4;
}

__asm__(".globl _FUN_8c10af94\n.set _FUN_8c10af94, _FUN_8c10af94_def\n");
