#include "../decls.h"
int FUN_8c0164c8_def(int ar4,undefined2 *ar5,int ar6,undefined4 ar7)

{
  short sVar1;
  undefined2 *puVar2;
  int iVar3;
  
  if (ar6 == 1) {
    puVar2 = *(undefined2 **)(ar4 + 8);
    *puVar2 = *ar5;
    sVar1 = ar5[1];
    puVar2[1] = sVar1;
    return (int)sVar1;
  }
  if (ar6 == 2) {
    puVar2 = *(undefined2 **)(ar4 + 8);
    *puVar2 = *ar5;
    puVar2[1] = ar5[1];
    iVar3 = *(int *)(ar4 + 8);
    *(undefined2 *)(iVar3 + 4) = ar5[2];
    sVar1 = ar5[3];
    *(short *)(iVar3 + 6) = sVar1;
    return (int)sVar1;
  }
  *(undefined2 **)(ar4 + 8) = ar5;
  return ar6;
}

__asm__(".globl _FUN_8c0164c8\n.set _FUN_8c0164c8, _FUN_8c0164c8_def\n");
