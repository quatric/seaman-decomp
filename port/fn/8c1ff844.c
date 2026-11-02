#include "../decls.h"
undefined4 FUN_8c1ff844_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined4 ar6_00;
  undefined1 *ar6_01;
  int iVar6;
  undefined1 auStack_44 [44];
  undefined1 auStack_18 [12];
  
  iVar6 = ar4 * 0x148;
  *(undefined4 *)(iVar6 + -0x73b87bf0) = 1;
  *(undefined4 *)(iVar6 + -0x73b87bec) =
       *(undefined4 *)(&DAT_8c273a9c + *(int *)(iVar6 + -0x73b87c1c) * 0x50);
  if ((&DAT_8c4783e2)[iVar6] != '\0') {
    uVar3 = ar5;
    ar6_00 = ar6;
    iVar2 = FUN_8c1fd510(ar4,ar5,ar6,ar7);
    if (iVar2 == 0) {
      FUN_8c1fdd1a(ar4,uVar3,ar6_00,ar7);
    }
    else {
      iVar2 = FUN_8c1fd550(ar4,uVar3,ar6_00,ar7);
      if ((iVar2 != 0) && ((&DAT_8c4783e8)[iVar6] != '\0')) {
        iVar6 = thunk_FUN_8c1ffcc2(ar4,uVar3,ar6_00,ar7);
        if (iVar6 < 0) {
          return 0xffffff03;
        }
        iVar6 = ret_const_0_200aec(ar4,ar5,ar6_00,ar7);
        if (iVar6 < 0) {
          return 0xffffff0b;
        }
        puVar4 = auStack_44;
        iVar6 = FUN_8c200566(ar4,ar5,puVar4,ar7);
        if (iVar6 < 0) {
          return 0xffffff05;
        }
        iVar2 = FUN_8c200a84(ar4,iVar6,puVar4,ar7);
        FUN_8c200bfc(auStack_18,ar6,puVar4,ar7);
        puVar5 = auStack_18;
        ar6_01 = (undefined1 *)(iVar2 + 0x18);
        for (puVar4 = (undefined1 *)(iVar2 + 0x10); puVar4 < ar6_01; puVar4 = puVar4 + 1) {
          uVar1 = *puVar5;
          puVar5 = puVar5 + 1;
          *puVar4 = uVar1;
        }
        FUN_8c200a9c(ar4,iVar6,ar6_01,ar7);
        uVar3 = FUN_8c200346(ar4,iVar6,ar6_01,ar7);
        return uVar3;
      }
    }
  }
  return 0xffffff01;
}

__asm__(".globl _FUN_8c1ff844\n.set _FUN_8c1ff844, _FUN_8c1ff844_def\n");
