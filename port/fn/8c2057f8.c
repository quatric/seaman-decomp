#include "../decls.h"
int FUN_8c2057f8_def(int *ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *ar4;
  iVar2 = 0;
  while (iVar1 = iVar3, iVar1 != 0) {
    if (*(int *)(iVar1 + 4) == ar5) {
      iVar3 = 0;
      iVar2 = iVar1;
    }
    else {
      iVar3 = *(int *)(iVar1 + 4);
    }
  }
  if (*ar4 == ar5) {
    *ar4 = *(int *)(ar5 + 4);
  }
  else {
    *(undefined4 *)(iVar2 + 4) = *(undefined4 *)(ar5 + 4);
  }
  return iVar2;
}

__asm__(".globl _FUN_8c2057f8\n.set _FUN_8c2057f8, _FUN_8c2057f8_def\n");
