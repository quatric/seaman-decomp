#include "../decls.h"
undefined4 FUN_8c20d9ce_def(int ar4,undefined1 *ar5,int ar6,undefined4 ar7,undefined4 s0,undefined4 s4)

{
  undefined1 uVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 *ar5_00;
  undefined1 *ar6_00;
  undefined4 ar6_01;
  undefined1 auStack_1c [3];
  undefined1 uStack_19;
  undefined1 auStack_18 [4];
  undefined1 auStack_14 [4];
  
  iVar2 = FUN_8c20d400(ar6,ar6,ar6,ar7);
  if (ar6 < 3) {
    ar6_00 = (undefined1 *)0x8;
    ar5_00 = *(undefined1 **)(ar4 + 0x1c);
    FUN_8c20a9c2(auStack_1c,ar5_00,8,ar7);
    if (ar6 == 1) {
      uStack_19 = *ar5;
    }
    else {
      ar6_00 = auStack_14;
      puVar3 = auStack_18;
      ar5_00 = ar5;
      do {
        uVar1 = *ar5_00;
        ar5_00 = ar5_00 + 1;
        *puVar3 = uVar1;
        puVar3 = puVar3 + 1;
      } while (puVar3 < ar6_00);
    }
    iVar2 = *(int *)(ar4 + 0x1c);
    FUN_8c20732e(auStack_1c,ar5_00,ar6_00,ar7,iVar2);
    FUN_8c20732e(&s4,ar5_00,ar6_00,ar7,iVar2);
    ar6_01 = 8;
    ar5 = auStack_1c;
  }
  else {
    ar6_01 = *(undefined4 *)(&DAT_8c26d5b4 + iVar2 * 4);
    iVar2 = *(int *)(&DAT_8c26d588 + iVar2 * 4) + *(int *)(ar4 + 0x1c);
  }
  FUN_8c20a8e0(iVar2,ar5,ar6_01,ar7);
  return 0;
}

__asm__(".globl _FUN_8c20d9ce\n.set _FUN_8c20d9ce, _FUN_8c20d9ce_def\n");
