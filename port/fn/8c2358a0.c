#include "../decls.h"
undefined4 FUN_8c2358a0_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int a6;
  undefined1 *a7;
  int iVar5;
  int iVar6;
  undefined2 auStack_22c [64];
  undefined1 auStack_1ac [128];
  undefined1 auStack_12c [256];
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  
  iVar3 = 0;
  iVar5 = ar5 + 1 >> 1;
  a6 = 0;
  a7 = auStack_1ac;
  iVar6 = ar5;
  if (0 < iVar5) {
    do {
      iVar6 = iVar6 + -1;
      FUN_8c010794(8,auStack_12c + iVar3 * 8,a6 * 8 + *(int *)ar4);
      auStack_22c[iVar3 * 2] = *(undefined2 *)(*(int *)(ar4 + 8) + a6 * 4);
      iVar2 = a6 * 4;
      iVar4 = iVar3 + 1;
      auStack_22c[iVar3 * 2 + 1] = *(undefined2 *)(*(int *)(ar4 + 8) + a6 * 4 + 2);
      a6 = a6 + 1;
      *(undefined4 *)(a7 + iVar3 * 4) = *(undefined4 *)(iVar2 + *(int *)(ar4 + 4));
      FUN_8c010794(8,auStack_12c + iVar4 * 8,iVar6 * 8 + *(int *)ar4);
      auStack_22c[iVar4 * 2] = *(undefined2 *)(*(int *)(ar4 + 8) + iVar6 * 4);
      iVar3 = iVar4 + 1;
      auStack_22c[iVar4 * 2 + 1] = *(undefined2 *)(*(int *)(ar4 + 8) + iVar6 * 4 + 2);
      *(undefined4 *)(a7 + iVar4 * 4) = *(undefined4 *)(iVar6 * 4 + *(int *)(ar4 + 4));
    } while (a6 < iVar5);
  }
  puStack_2c = auStack_12c;
  puStack_28 = a7;
  puStack_24 = (undefined1 *)auStack_22c;
  uVar1 = FUN_8c2355c4(&puStack_2c,ar5 + -2,a6,a7);
  return uVar1;
}

__asm__(".globl _FUN_8c2358a0\n.set _FUN_8c2358a0, _FUN_8c2358a0_def\n");
