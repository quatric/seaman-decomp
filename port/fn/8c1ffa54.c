#include "../decls.h"
undefined4 FUN_8c1ffa54_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined1 uVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 *a6;
  int iVar5;
  undefined1 auStack_3c [48];
  
  iVar5 = ar4 * 0x148;
  sVar2 = (short)ar6;
  uVar1 = (undefined1)ar7;
  *(undefined4 *)(iVar5 + -0x73b87bf0) = 1;
  *(undefined4 *)(iVar5 + -0x73b87bec) =
       *(undefined4 *)(&DAT_8c273a9c + *(int *)(iVar5 + -0x73b87c1c) * 0x50);
  if ((&DAT_8c4783e2)[iVar5] != '\0') {
    uVar4 = ar5;
    iVar3 = FUN_8c1fd510(ar4,ar5,ar6,ar7);
    if (iVar3 == 0) {
      FUN_8c1fdd1a(ar4,uVar4,ar6,ar7);
    }
    else {
      iVar3 = FUN_8c1fd550(ar4,uVar4,ar6,ar7);
      if ((iVar3 != 0) && ((&DAT_8c4783e8)[iVar5] != '\0')) {
        iVar5 = thunk_FUN_8c1ffcc2(ar4,uVar4,ar6,ar7);
        if (iVar5 < 0) {
          return 0xffffff03;
        }
        iVar5 = ret_const_0_200aec(ar4,ar5,ar6,ar7);
        if (iVar5 < 0) {
          return 0xffffff0b;
        }
        a6 = auStack_3c;
        iVar5 = FUN_8c200566(ar4,ar5,a6,ar7);
        if (iVar5 < 0) {
          return 0xffffff05;
        }
        iVar3 = FUN_8c200a84(ar4,iVar5,a6,ar7);
        if (DAT_8c26d20c != 0) {
          a6 = (undefined1 *)(int)sVar2;
          (**(code **)(_DAT_8c4783dc + 0x10))(iVar3,0x1a,a6,ar7);
        }
        *(undefined1 *)(iVar3 + 1) = uVar1;
        FUN_8c200a9c(ar4,iVar5,a6,ar7);
        uVar4 = FUN_8c200346(ar4,iVar5,a6,ar7);
        return uVar4;
      }
    }
  }
  return 0xffffff01;
}

__asm__(".globl _FUN_8c1ffa54\n.set _FUN_8c1ffa54, _FUN_8c1ffa54_def\n");
