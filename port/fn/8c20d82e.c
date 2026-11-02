#include "../decls.h"
undefined4 FUN_8c20d82e_def(int ar4,undefined1 *ar5,int ar6,undefined4 ar7)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  int iVar8;
  undefined1 auStack_30 [12];
  undefined1 auStack_24 [4];
  undefined1 auStack_20 [4];
  
  iVar2 = FUN_8c20d400(ar6,ar6,ar6,ar7);
  if (ar6 < 5) {
    puVar7 = (undefined1 *)0x10;
    FUN_8c20a9c2(auStack_30,*(undefined4 *)(ar4 + 0x1c),0x10,ar7);
    if (ar6 == 1) {
      auStack_30[1] = *ar5;
    }
    else {
      puVar6 = auStack_30 + 4;
      if (ar6 == 2) {
        puVar5 = auStack_30 + 2;
        do {
          uVar1 = *ar5;
          ar5 = ar5 + 1;
          *puVar5 = uVar1;
          puVar5 = puVar5 + 1;
        } while (puVar5 < puVar6);
      }
      else {
        puVar7 = auStack_24;
        do {
          uVar1 = *ar5;
          ar5 = ar5 + 1;
          *puVar6 = uVar1;
          puVar6 = puVar6 + 1;
        } while (puVar6 < puVar7);
      }
    }
    iVar2 = *(int *)(ar4 + 0x1c);
    FUN_8c20732e(auStack_30,ar5,puVar7,ar7);
    FUN_8c20732e(&stack0xfffffff0,ar5,puVar7,ar7);
  }
  else {
    iVar8 = iVar2 * 4;
    FUN_8c20a9c2(auStack_30,*(int *)(ar4 + 0x1c) + *(int *)(&DAT_8c26d5e0 + iVar8) + -0xc,0x10,ar7);
    puVar5 = auStack_20;
    puVar6 = auStack_24;
    puVar7 = ar5;
    do {
      uVar1 = *puVar7;
      puVar7 = puVar7 + 1;
      *puVar6 = uVar1;
      puVar6 = puVar6 + 1;
    } while (puVar6 < puVar5);
    iVar3 = *(int *)(ar4 + 0x1c);
    iVar4 = *(int *)(&DAT_8c26d5e0 + iVar8);
    FUN_8c20732e(auStack_30,puVar5,puVar7,ar7);
    FUN_8c20732e(&stack0xfffffff0,puVar5,puVar7,ar7);
    FUN_8c20a8e0(iVar3 + iVar4 + -0xc,auStack_30,0x10,ar7);
    if (*(int *)(&DAT_8c26d60c + iVar8) != 0x10) {
      FUN_8c20a8e0(*(int *)(ar4 + 0x1c) + *(int *)(&DAT_8c26d5e0 + iVar8) + 4,ar5 + 4,
                   *(int *)(&DAT_8c26d60c + iVar8) + -0x10,ar7);
    }
    FUN_8c20a9c2(auStack_30,*(int *)(ar4 + 0x1c) + *(int *)(&DAT_8c26d5e0 + (iVar2 + 1) * 4) + -0xc,
                 0x10,ar7);
    puVar5 = auStack_24;
    puVar6 = ar5 + *(int *)(&DAT_8c26d60c + iVar8) + -0xc;
    puVar7 = auStack_30;
    do {
      uVar1 = *puVar6;
      puVar6 = puVar6 + 1;
      *puVar7 = uVar1;
      puVar7 = puVar7 + 1;
    } while (puVar7 < puVar5);
    iVar2 = *(int *)(ar4 + 0x1c) + *(int *)(&DAT_8c26d5e0 + (iVar2 + 1) * 4) + -0xc;
    FUN_8c20732e(auStack_30,puVar6,puVar5,ar7);
    FUN_8c20732e(&stack0xfffffff0,puVar6,puVar5,ar7);
  }
  FUN_8c20a8e0(iVar2,auStack_30,0x10,ar7);
  return 0;
}

__asm__(".globl _FUN_8c20d82e\n.set _FUN_8c20d82e, _FUN_8c20d82e_def\n");
