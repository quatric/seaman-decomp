#include "../decls.h"
int FUN_8c200a9c_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = ar4 * 0x148 + 0x8c4783e0 + 0x48;
  *(undefined1 *)((ar5 >> 4) + iVar1) = 1;
  return iVar1;
}

__asm__(".globl _FUN_8c200a9c\n.set _FUN_8c200a9c, _FUN_8c200a9c_def\n");
