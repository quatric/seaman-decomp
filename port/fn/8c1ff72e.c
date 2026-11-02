#include "../decls.h"
undefined4 FUN_8c1ff72e_def(int ar4,undefined4 ar5,undefined1 *ar6,undefined4 ar7)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  undefined1 *ar6_00;
  int iVar5;
  undefined1 auStack_38 [48];
  
  iVar5 = ar4 * 0x148;
  *(undefined4 *)(iVar5 + -0x73b87bf0) = 1;
  *(undefined4 *)(iVar5 + -0x73b87bec) =
       *(undefined4 *)(&DAT_8c273a94 + *(int *)(iVar5 + -0x73b87c1c) * 0x50);
  if ((&DAT_8c4783e2)[iVar5] != '\0') {
    uVar3 = ar5;
    puVar4 = ar6;
    iVar2 = FUN_8c1fd510(ar4,ar5,ar6,ar7);
    if (iVar2 == 0) {
      FUN_8c1fdd1a(ar4,uVar3,puVar4,ar7);
    }
    else {
      iVar2 = FUN_8c1fd550(ar4,uVar3,puVar4,ar7);
      if ((iVar2 != 0) && ((&DAT_8c4783e8)[iVar5] != '\0')) {
        iVar5 = thunk_FUN_8c1ffcc2(ar4,uVar3,puVar4,ar7);
        if (iVar5 < 0) {
          return 0xffffff03;
        }
        iVar5 = ret_const_0_200aec(ar4,ar5,puVar4,ar7);
        if (iVar5 < 0) {
          return 0xffffff0b;
        }
        iVar5 = FUN_8c200566(ar4,ar5,auStack_38,ar7);
        if (iVar5 < 0) {
          return 0xffffff05;
        }
        puVar4 = auStack_38;
        iVar2 = FUN_8c200566(ar4,ar6,puVar4,ar7);
        if (-1 < iVar2) {
          return 0xffffff06;
        }
        iVar2 = FUN_8c200a84(ar4,iVar5,puVar4,ar7);
        ar6_00 = (undefined1 *)(iVar2 + 0x10);
        for (puVar4 = (undefined1 *)(iVar2 + 4); puVar4 < ar6_00; puVar4 = puVar4 + 1) {
          uVar1 = *ar6;
          ar6 = ar6 + 1;
          *puVar4 = uVar1;
        }
        FUN_8c200a9c(ar4,iVar5,ar6_00,ar6);
        uVar3 = FUN_8c200346(ar4,iVar5,ar6_00,ar6);
        return uVar3;
      }
    }
  }
  return 0xffffff01;
}

__asm__(".globl _FUN_8c1ff72e\n.set _FUN_8c1ff72e, _FUN_8c1ff72e_def\n");
