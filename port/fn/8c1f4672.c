#include "../decls.h"
int FUN_8c1f4672_def(uint ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = (int)0x10c4;
  *(uint *)(iVar1 + *(undefined4 *)0x8c4727b4) = ar4 & 1;
  return iVar1;
}

__asm__(".globl _FUN_8c1f4672\n.set _FUN_8c1f4672, _FUN_8c1f4672_def\n");
