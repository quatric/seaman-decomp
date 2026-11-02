#include "../decls.h"
int FUN_8c204cc0_def(int ar4,short *ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (ar4 < DAT_8c2753f8) {
    *ar5 = 0;
  }
  else {
    *ar5 = 1;
  }
  iVar3 = (&DAT_8c275400)[*ar5 * 5];
  iVar2 = 0;
  while (iVar1 = iVar3, iVar1 != 0) {
    if (*(int *)(iVar1 + 0xc) == ar4) {
      iVar3 = 0;
      iVar2 = iVar1;
    }
    else {
      iVar3 = *(int *)(iVar1 + 8);
    }
  }
  return iVar2;
}

__asm__(".globl _FUN_8c204cc0\n.set _FUN_8c204cc0, _FUN_8c204cc0_def\n");
