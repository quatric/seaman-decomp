#include "../decls.h"
undefined4 FUN_8c1ff610_def(int ar4,undefined4 *ar5,int ar6,undefined4 ar7)

{
  bool bVar1;
  int iVar2;
  undefined4 *ar5_00;
  int ar6_00;
  undefined4 *puVar3;
  int iVar4;
  
  iVar4 = ar4 * 0x148;
  *(undefined4 *)(iVar4 + -0x73b87bf0) = 1;
  *(undefined4 *)(iVar4 + -0x73b87bec) =
       *(undefined4 *)(&DAT_8c273ab8 + *(int *)(iVar4 + -0x73b87c1c) * 0x50);
  if ((&DAT_8c4783e2)[iVar4] != '\0') {
    ar5_00 = ar5;
    ar6_00 = ar6;
    iVar2 = FUN_8c1fd510(ar4,ar5,ar6,ar7);
    if (iVar2 == 0) {
      FUN_8c1fdd1a(ar4,ar5_00,ar6_00,ar7);
    }
    else {
      iVar2 = FUN_8c1fd550(ar4,ar5_00,ar6_00,ar7);
      if ((iVar2 != 0) && ((&DAT_8c4783e8)[iVar4] != '\0')) {
        iVar4 = thunk_FUN_8c1ffcc2(ar4,ar5_00,ar6_00,ar7);
        if (iVar4 < 0) {
          return 0xffffff03;
        }
        iVar4 = 0;
        puVar3 = ar5;
        if (0 < ar6) {
          do {
            ar5_00 = (undefined4 *)*puVar3;
            iVar2 = ret_const_0_200aec(ar4,ar5_00,ar6_00,ar7);
            if (iVar2 < 0) {
              return 0xffffff0a;
            }
            iVar4 = iVar4 + 1;
            puVar3 = puVar3 + 1;
          } while (iVar4 < ar6);
        }
        iVar4 = 0;
        bVar1 = false;
        if (0 < ar6) {
          do {
            ar5_00 = (undefined4 *)*ar5;
            iVar2 = FUN_8c1ff478(ar4,ar5_00,ar6_00,ar7);
            iVar4 = iVar4 + 1;
            if (iVar2 < 0) {
              bVar1 = true;
            }
            ar5 = ar5 + 1;
          } while (iVar4 < ar6);
        }
        iVar4 = FUN_8c200346(ar4,ar5_00,ar6_00,ar7);
        if (iVar4 < 0) {
          return iVar4;
        }
        iVar4 = FUN_8c2007f0(ar4,ar5_00,ar6_00,ar7);
        if (iVar4 < 0) {
          return iVar4;
        }
        if (bVar1) {
          return 0xffffff0a;
        }
        return 0;
      }
    }
  }
  return 0xffffff01;
}

__asm__(".globl _FUN_8c1ff610\n.set _FUN_8c1ff610, _FUN_8c1ff610_def\n");
