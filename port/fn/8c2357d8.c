#include "../decls.h"
undefined4 FUN_8c2357d8_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int a6;
  undefined1 *puVar4;
  int iVar5;
  int iVar6;
  undefined1 auStack_1a4 [128];
  undefined1 auStack_124 [256];
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  
  puVar4 = auStack_1a4;
  iVar2 = 0;
  a6 = 0;
  iVar5 = ar5 + 1 >> 1;
  puStack_20 = auStack_1a4;
  iVar6 = ar5;
  if (0 < iVar5) {
    do {
      iVar6 = iVar6 + -1;
      FUN_8c010794(8,auStack_124 + iVar2 * 8,a6 * 8 + *(int *)ar4);
      *(undefined4 *)(puVar4 + iVar2 * 4) = *(undefined4 *)(a6 * 4 + *(int *)(ar4 + 4));
      iVar3 = iVar2 + 1;
      a6 = a6 + 1;
      FUN_8c010794(8,auStack_124 + iVar3 * 8,iVar6 * 8 + *(int *)ar4);
      iVar2 = iVar3 + 1;
      *(undefined4 *)(puVar4 + iVar3 * 4) = *(undefined4 *)(iVar6 * 4 + *(int *)(ar4 + 4));
      puStack_20 = puVar4;
    } while (a6 < iVar5);
  }
  puStack_24 = auStack_124;
  uVar1 = FUN_8c235704(&puStack_24,ar5 + -2,a6,puStack_20);
  return uVar1;
}

__asm__(".globl _FUN_8c2357d8\n.set _FUN_8c2357d8, _FUN_8c2357d8_def\n");
