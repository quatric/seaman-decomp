#include "../decls.h"
int FUN_8c1fecf2_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 ar5_00;
  
  iVar3 = *(int *)(ar4 + 0x28) * (int)0x148 + 0x8c4783e0;
  uVar4 = ar5;
  iVar1 = FUN_8c1fd510(*(int *)(ar4 + 0x28),ar5,ar6,ar7);
  if (iVar1 == 0) {
    FUN_8c1fdd1a(*(undefined4 *)(ar4 + 0x28),uVar4,ar6,ar7);
  }
  else {
    iVar1 = FUN_8c1fd550(*(undefined4 *)(ar4 + 0x28),uVar4,ar6,ar7);
    if ((iVar1 != 0) && (*(char *)(0x8c4783e8 + *(int *)(ar4 + 0x28) * (int)0x148) != '\0')
       ) {
      iVar1 = thunk_FUN_8c1ffcc2(*(undefined4 *)(ar4 + 0x28),uVar4,ar6,ar7);
      if (iVar1 < 0) {
        return (int)(int)0xffffff03;
      }
      ar5_00 = *(undefined4 *)(ar4 + 0x30);
      uVar4 = *(undefined4 *)(ar4 + 0x28);
      uVar2 = FUN_8c2009d0(uVar4,ar5_00,ar6,ar7);
      if (((uVar2 & 0xffff) == 0xfffc) &&
         (*(int *)(ar4 + 0x30) < *(int *)(*(int *)(iVar3 + 0x1c) + 0x38))) {
        iVar1 = FUN_8c1fbc44(uVar4,ar5_00,ar5,ar7);
        if (iVar1 < 0) {
          return iVar1;
        }
        FUN_8c20099e(uVar4,ar5_00,0xfffa,ar7);
        if (*(int *)(ar4 + 0x38) == 0xffff) {
          *(int *)(ar4 + 0x38) = (int)(short)ar5_00;
        }
        else {
          FUN_8c20099e(uVar4,*(undefined4 *)(ar4 + 0x3c),ar5_00,ar7);
        }
        *(int *)(ar4 + 0x3c) = (int)(short)ar5_00;
        *(int *)(ar4 + 0x30) = *(int *)(ar4 + 0x30) + 1;
        return 0;
      }
      return (int)(int)0xffffff04;
    }
  }
  return (int)(int)0xffffff01;
}

__asm__(".globl _FUN_8c1fecf2\n.set _FUN_8c1fecf2, _FUN_8c1fecf2_def\n");
