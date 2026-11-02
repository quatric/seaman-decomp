#include "../decls.h"
int FUN_8c02fed0_def(int ar4,undefined1 *ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  *(undefined1 *)(0x98 + ar4) = *ar5;
  iVar1 = 0x99;
  *(undefined1 *)(0x99 + ar4) = ar5[1];
  return iVar1;
}

__asm__(".globl _FUN_8c02fed0\n.set _FUN_8c02fed0, _FUN_8c02fed0_def\n");
