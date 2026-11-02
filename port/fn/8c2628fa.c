#include "../decls.h"
undefined4 FUN_8c2628fa_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 ain0)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 in_PR;
  
  iVar2 = *ar4;
  *ar4 = iVar2 + -1;
  if (iVar2 + -1 == 0) {
    FUN_8c260ca0(ar4,ar5,ar6,ar7,in_PR);
    iVar2 = DAT_8c278470;
    if (DAT_8c278470 != 0) {
      FUN_8c1fa54c(DAT_8c278470,ar5,ar6,ar7);
      DAT_8c278470 = 0;
    }
    FUN_8c260cc8(iVar2,ar5,ar6,ar7,in_PR);
    thunk_FUN_8c268a24(iVar2,ar5,ar6,ar7);
    FUN_8c260ca0(iVar2,ar5,ar6,ar7,in_PR);
    FUN_8c2619ee(iVar2,ar5,ar6,ar7);
    FUN_8c262ad8(iVar2,ar5,ar6,ar7);
    noop_26325a(iVar2,ar5,ar6,ar7,in_PR);
    FUN_8c25ecc2(iVar2,ar5,ar6,ar7);
    FUN_8c26b234(iVar2,ar5,ar6,ar7,in_PR);
    FUN_8c26b548(iVar2,ar5,ar6,ar7,in_PR);
    uVar1 = FUN_8c26b9b4(iVar2,ar5,ar6,ar7,in_PR);
    uVar1 = FUN_8c260cc8(iVar2,ar5,ar6,ar7,uVar1);
    return uVar1;
  }
  return ain0;
}

__asm__(".globl _FUN_8c2628fa\n.set _FUN_8c2628fa, _FUN_8c2628fa_def\n");
