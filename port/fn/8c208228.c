#include "../decls.h"
int FUN_8c208228_def(uint ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  if ((ar4 & 0x1000000) != 0) {
    iVar1 = ar5 * 4;
    ar5 = ar5 + 1;
    *(undefined4 *)(0x8c4a9c50 + iVar1) = ar6;
  }
  return ar5;
}

__asm__(".globl _FUN_8c208228\n.set _FUN_8c208228, _FUN_8c208228_def\n");
