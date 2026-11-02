#include "../decls.h"
int FUN_8c1febd6_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  uVar5 = ar5;
  iVar3 = FUN_8c1fd510(*(undefined4 *)(ar4 + 0x28),0);
  if (iVar3 == 0) {
    FUN_8c1fdd1a(*(undefined4 *)(ar4 + 0x28),uVar5,ar6,ar7);
  }
  else {
    iVar3 = FUN_8c1fd550(*(undefined4 *)(ar4 + 0x28));
    if ((iVar3 != 0) && (*(char *)(0x8c4783e8 + *(int *)(ar4 + 0x28) * (int)0x148) != '\0')
       ) {
      iVar3 = thunk_FUN_8c1ffcc2(*(undefined4 *)(ar4 + 0x28));
      if (iVar3 < 0) {
        return (int)(int)0xffffff03;
      }
      uVar5 = *(undefined4 *)(ar4 + 0x28);
      iVar3 = FUN_8c2008f4(uVar5);
      puVar1 = (&FUN_8c1fbc44);
      if (-1 < iVar3) {
        iVar4 = FUN_8c1fbc44(uVar5,iVar3,ar5);
        iVar2 = 0xffff;
        if (iVar4 < 0) {
          if (iVar4 == (int)0xffffff01) {
            return iVar4;
          }
          do {
            FUN_8c20099e(uVar5,iVar3,iVar2);
            iVar3 = FUN_8c200890(uVar5,0xfffc);
            if (iVar3 < 0) goto LAB_8c1fec70;
            iVar4 = (*(code *)puVar1)(uVar5,iVar3,ar5);
          } while (iVar4 != 0);
        }
        FUN_8c20099e(uVar5,iVar3,0xfffa);
        if (*(int *)(ar4 + 0x38) == iVar2) {
          *(int *)(ar4 + 0x38) = (int)(short)iVar3;
        }
        else {
          FUN_8c20099e(uVar5,*(undefined4 *)(ar4 + 0x3c),iVar3);
        }
        *(int *)(ar4 + 0x3c) = (int)(short)iVar3;
        *(int *)(ar4 + 0x30) = *(int *)(ar4 + 0x30) + 1;
        return 0;
      }
LAB_8c1fec70:
      return (int)(int)0xffffff04;
    }
  }
  return (int)(int)0xffffff01;
}

__asm__(".globl _FUN_8c1febd6\n.set _FUN_8c1febd6, _FUN_8c1febd6_def\n");
