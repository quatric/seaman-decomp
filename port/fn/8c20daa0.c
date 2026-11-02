#include "../decls.h"
undefined4 FUN_8c20daa0_def(int ar4,undefined1 *ar5,int ar6,undefined4 ar7)

{
  undefined1 uVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *ar6_00;
  undefined4 ar6_01;
  undefined1 auStack_24 [6];
  undefined1 auStack_1e [2];
  undefined1 auStack_1c [8];
  undefined1 auStack_14 [4];
  
  iVar2 = FUN_8c20d400(ar6,ar6,ar6,ar7);
  if (ar6 < 3) {
    ar6_00 = (undefined1 *)0x10;
    FUN_8c20a9c2(auStack_24,*(undefined4 *)(ar4 + 0x1c),0x10,ar7);
    puVar4 = auStack_1c;
    if (ar6 == 1) {
      puVar3 = auStack_1e;
      do {
        uVar1 = *ar5;
        ar5 = ar5 + 1;
        *puVar3 = uVar1;
        puVar3 = puVar3 + 1;
      } while (puVar3 < puVar4);
    }
    else {
      ar6_00 = auStack_14;
      do {
        uVar1 = *ar5;
        ar5 = ar5 + 1;
        *puVar4 = uVar1;
        puVar4 = puVar4 + 1;
      } while (puVar4 < ar6_00);
    }
    iVar2 = *(int *)(ar4 + 0x1c);
    FUN_8c20732e(auStack_24,ar5,ar6_00,ar7,iVar2);
    FUN_8c20732e(&stack0xfffffffc,ar5,ar6_00,ar7,iVar2);
    ar6_01 = 0x10;
    ar5 = auStack_24;
  }
  else {
    ar6_01 = *(undefined4 *)(&DAT_8c26d4ac + iVar2 * 4);
    iVar2 = *(int *)(&DAT_8c26d480 + iVar2 * 4) + *(int *)(ar4 + 0x1c);
  }
  FUN_8c20a8e0(iVar2,ar5,ar6_01,ar7);
  return 0;
}

__asm__(".globl _FUN_8c20daa0\n.set _FUN_8c20daa0, _FUN_8c20daa0_def\n");
