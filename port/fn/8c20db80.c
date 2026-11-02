#include "../decls.h"
undefined4 FUN_8c20db80_def(int ar4,undefined1 *ar5,int ar6,undefined4 ar7)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *a6;
  undefined1 auStack_30 [6];
  undefined1 auStack_2a [10];
  undefined1 auStack_20 [4];
  
  iVar2 = FUN_8c20d400(ar6,ar6,ar6,ar7);
  if (ar6 != 1) {
    if (ar6 < 5) {
      puVar6 = (undefined1 *)0x10;
      FUN_8c20a9c2(auStack_30,*(int *)(ar4 + 0x1c) + 0x800,0x10,ar7);
      if (ar6 == 2) {
        auStack_30[1] = *ar5;
      }
      else {
        puVar6 = auStack_2a;
        puVar5 = auStack_30 + 2;
        do {
          uVar1 = *ar5;
          ar5 = ar5 + 1;
          *puVar5 = uVar1;
          puVar5 = puVar5 + 1;
        } while (puVar5 < puVar6);
      }
      iVar2 = *(int *)(ar4 + 0x1c) + 0x800;
    }
    else {
      FUN_8c20a9c2(auStack_30,
                   *(int *)(ar4 + 0x1c) + *(int *)(&DAT_8c26d55c + (iVar2 + -1) * 4) + 0x7fa,0x10,
                   ar7);
      a6 = auStack_20;
      puVar6 = auStack_2a;
      puVar5 = ar5;
      do {
        uVar1 = *puVar5;
        puVar5 = puVar5 + 1;
        *puVar6 = uVar1;
        puVar6 = puVar6 + 1;
      } while (puVar6 < a6);
      iVar3 = *(int *)(ar4 + 0x1c);
      iVar4 = *(int *)(&DAT_8c26d55c + (iVar2 + -1) * 4);
      FUN_8c20732e(auStack_30,puVar5,a6,ar7);
      FUN_8c20732e(&stack0xfffffff0,puVar5,a6,ar7);
      FUN_8c20a8e0(iVar3 + iVar4 + 0x7fa,auStack_30,0x10,ar7);
      iVar3 = iVar2 * 4;
      if (*(int *)(&DAT_8c26d530 + iVar3) != 0x10) {
        FUN_8c20a8e0(*(int *)(ar4 + 0x1c) + *(int *)(&DAT_8c26d55c + (iVar2 + -1) * 4) + 0x80a,
                     ar5 + 10,*(int *)(&DAT_8c26d530 + iVar3) + -0x10,ar7);
      }
      FUN_8c20a9c2(auStack_30,*(int *)(ar4 + 0x1c) + *(int *)(&DAT_8c26d55c + iVar3) + 0x7fa,0x10,
                   ar7);
      puVar6 = auStack_2a;
      ar5 = ar5 + *(int *)(&DAT_8c26d530 + iVar3) + -6;
      puVar5 = auStack_30;
      do {
        uVar1 = *ar5;
        ar5 = ar5 + 1;
        *puVar5 = uVar1;
        puVar5 = puVar5 + 1;
      } while (puVar5 < puVar6);
      iVar2 = *(int *)(ar4 + 0x1c) + *(int *)(&DAT_8c26d55c + iVar3) + 0x7fa;
    }
    FUN_8c20732e(auStack_30,ar5,puVar6,ar7);
    FUN_8c20732e(&stack0xfffffff0,ar5,puVar6,ar7);
    FUN_8c20a8e0(iVar2,auStack_30,0x10,ar7);
  }
  return 0;
}

__asm__(".globl _FUN_8c20db80\n.set _FUN_8c20db80, _FUN_8c20db80_def\n");
