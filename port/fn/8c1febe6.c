#include "../decls.h"
int FUN_8c1febe6_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  int ar6_00;
  int iVar2;
  int iVar3;
  undefined4 unaff_r9;
  undefined4 ar4_00;
  int unaff_r13;
  
  iVar2 = FUN_8c1fd510(*(undefined4 *)(unaff_r13 + 0x28),ar5,ar6,ar7);
  if (iVar2 == 0) {
    FUN_8c1fdd1a(*(undefined4 *)(unaff_r13 + 0x28),ar5,ar6,ar7);
  }
  else {
    iVar2 = FUN_8c1fd550(*(undefined4 *)(unaff_r13 + 0x28),ar5,ar6,ar7);
    if ((iVar2 != 0) &&
       (*(char *)(0x8c4783e8 + *(int *)(unaff_r13 + 0x28) * (int)0x148) != '\0')) {
      iVar2 = (*(code *)(&thunk_FUN_8c1ffcc2))
                        (*(undefined4 *)(unaff_r13 + 0x28),ar5,ar6,ar7);
      if (iVar2 < 0) {
        return (int)(int)0xffffff03;
      }
      ar4_00 = *(undefined4 *)(unaff_r13 + 0x28);
      iVar2 = FUN_8c2008f4(ar4_00,ar5,ar6,ar7);
      puVar1 = (&FUN_8c1fbc44);
      if (-1 < iVar2) {
        iVar3 = FUN_8c1fbc44(ar4_00,iVar2,unaff_r9,ar7);
        ar6_00 = 0xffff;
        if (iVar3 < 0) {
          if (iVar3 == (int)0xffffff01) {
            return iVar3;
          }
          do {
            iVar3 = ar6_00;
            FUN_8c20099e(ar4_00,iVar2,ar6_00,ar7);
            iVar2 = FUN_8c200890(ar4_00,0xfffc,iVar3,ar7);
            if (iVar2 < 0) goto LAB_8c1fec70;
            iVar3 = (*(code *)puVar1)(ar4_00,iVar2,unaff_r9,ar7);
          } while (iVar3 != 0);
        }
        FUN_8c20099e(ar4_00,iVar2,0xfffa,ar7);
        if (*(int *)(unaff_r13 + 0x38) == ar6_00) {
          *(int *)(unaff_r13 + 0x38) = (int)(short)iVar2;
        }
        else {
          FUN_8c20099e(ar4_00,*(undefined4 *)(unaff_r13 + 0x3c),iVar2,ar7);
        }
        *(int *)(unaff_r13 + 0x3c) = (int)(short)iVar2;
        *(int *)(unaff_r13 + 0x30) = *(int *)(unaff_r13 + 0x30) + 1;
        return 0;
      }
LAB_8c1fec70:
      return (int)(int)0xffffff04;
    }
  }
  return (int)(int)0xffffff01;
}

__asm__(".globl _FUN_8c1febe6\n.set _FUN_8c1febe6, _FUN_8c1febe6_def\n");
