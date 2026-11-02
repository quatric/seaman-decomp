#include "../decls.h"
int FUN_8c1fe9ae_def(int ar4,int ar5,undefined1 *ar6,undefined4 ar7)

{
  int iVar1;
  undefined1 *a4;
  undefined1 uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  int iVar6;
  int iVar7;
  
  if (ar4 == 0) {
    return 0xffffff00;
  }
  iVar6 = 0;
  iVar7 = ar5;
  if ((((&DAT_8c4783e2)[*(int *)(ar4 + 0x28) * 0x148] != '\0') &&
      (iVar1 = FUN_8c1fd550(*(undefined4 *)(ar4 + 0x28),ar5,ar6,ar7), iVar1 != 0)) &&
     ((&DAT_8c4783e8)[*(int *)(ar4 + 0x28) * 0x148] != '\0')) {
    iVar1 = FUN_8c1fd510(*(undefined4 *)(ar4 + 0x28),iVar7,ar6,ar7);
    if (iVar1 == 0) {
      FUN_8c1fdd1a(*(undefined4 *)(ar4 + 0x28),iVar7,ar6,ar7);
    }
    else {
      iVar1 = thunk_FUN_8c1ffcc2(*(undefined4 *)(ar4 + 0x28),iVar7,ar6,ar7);
      if (-1 < iVar1) {
        iVar1 = *(int *)(ar4 + 0x28);
        if (*(int *)(ar4 + 4) != 0) {
          if (ar5 != 0) {
            iVar7 = iVar1 * 0x148;
            *(undefined4 *)(iVar7 + -0x73b87bf0) = 1;
            *(undefined4 *)(iVar7 + -0x73b87bec) =
                 *(undefined4 *)(&DAT_8c273a84 + *(int *)(iVar7 + -0x73b87c1c) * 0x50);
          }
          a4 = (undefined1 *)FUN_8c200a84(iVar1,*(undefined4 *)(ar4 + 0x2c),ar6,ar7);
          if (*(int *)(ar4 + 8) == 1) {
            uVar2 = 0xcc;
          }
          else {
            uVar2 = 0x33;
          }
          *a4 = uVar2;
          a4[1] = *(undefined1 *)(ar4 + 1);
          (**(code **)(_DAT_8c4783dc + 0x10))(a4,2,*(undefined4 *)(ar4 + 0x38),ar7);
          (**(code **)(_DAT_8c4783dc + 0x10))(a4,0x18,*(undefined4 *)(ar4 + 0x30),ar7);
          (**(code **)(_DAT_8c4783dc + 0x10))(a4,0x1a,(int)*(short *)(ar4 + 2),ar7);
          puVar4 = (undefined1 *)(ar4 + 0x10);
          puVar5 = a4 + 0x10;
          for (puVar3 = a4 + 4; puVar3 < puVar5; puVar3 = puVar3 + 1) {
            uVar2 = *puVar4;
            puVar4 = puVar4 + 1;
            *puVar3 = uVar2;
          }
          puVar3 = (undefined1 *)(ar4 + 0x20);
          ar6 = a4 + 0x18;
          for (; puVar5 < ar6; puVar5 = puVar5 + 1) {
            uVar2 = *puVar3;
            puVar3 = puVar3 + 1;
            *puVar5 = uVar2;
          }
          iVar7 = *(int *)(ar4 + 0x2c);
          FUN_8c200a9c(iVar1,iVar7,ar6,ar7);
          iVar6 = FUN_8c200346(iVar1,iVar7,ar6,ar7);
          if (iVar6 < 0) goto LAB_8c1feafe;
          FUN_8c2007f0(iVar1,iVar7,ar6,ar7);
        }
        iVar6 = 0;
      }
    }
  }
LAB_8c1feafe:
  FUN_8c200ae4(ar4,iVar7,ar6,ar7);
  return iVar6;
}

__asm__(".globl _FUN_8c1fe9ae\n.set _FUN_8c1fe9ae, _FUN_8c1fe9ae_def\n");
