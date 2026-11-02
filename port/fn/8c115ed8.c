#include "../decls.h"
int FUN_8c115ed8_def(int ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  
  iVar4 = *(int *)(uint)ar5[1];
  piVar3 = (int *)(uint)ar5[1];
  piVar2 = ar5;
  while (piVar1 = piVar3, iVar4 < 2) {
    piVar3 = (int *)piVar1[1];
    piVar2 = piVar1;
    iVar4 = *(int *)piVar1[1];
  }
  iVar4 = (int)0x114;
  *piVar1 = *piVar1 + -1;
  piVar2[1] = *(int *)(iVar4 + ar4);
  *(int **)(iVar4 + ar4) = ar5;
  return iVar4;
}

__asm__(".globl _FUN_8c115ed8\n.set _FUN_8c115ed8, _FUN_8c115ed8_def\n");
