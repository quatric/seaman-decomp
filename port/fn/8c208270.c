#include "../decls.h"
int FUN_8c208270_def(uint ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0x8c4a9c50;
  if ((ar4 & 0x2000000) != 0) {
    iVar2 = ar5 + 1;
    *(undefined4 *)(0x8c4a9c50 + ar5 * 4) = ar6;
    ar5 = ar5 + 2;
    *(undefined4 *)(iVar1 + iVar2 * 4) = ar7;
  }
  return ar5;
}

__asm__(".globl _FUN_8c208270\n.set _FUN_8c208270, _FUN_8c208270_def\n");
