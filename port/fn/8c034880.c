#include "../decls.h"
int FUN_8c034880_def(undefined4 ar4,int *ar5,int ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *ar5;
  for (iVar2 = 0; iVar2 < ar6; iVar2 = iVar2 + 1) {
    iVar1 = iVar1 + 0x18;
  }
  iVar1 = *(int *)(iVar1 + 8);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  return iVar1;
}

__asm__(".globl _FUN_8c034880\n.set _FUN_8c034880, _FUN_8c034880_def\n");
