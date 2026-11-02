#include "../decls.h"
int FUN_8c021d90_def(int *ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 ar6_00;
  undefined4 uVar2;
  
  iVar1 = *ar4;
  if (((iVar1 != 0) && (-1 < ar5)) && (iVar1 = 3, ar5 < 3)) {
    uVar2 = ar6;
    ar6_00 = FUN_8c021ec8(ar4,ar7,ar6,ar7);
    uVar2 = FUN_8c021e10(ar4,ar6,uVar2,ar7);
    FUN_8c022b68(ar4 + 1,ar5,uVar2,ar7);
    iVar1 = FUN_8c022bb0(ar4 + 1,ar5,ar6_00,ar7);
  }
  return iVar1;
}

__asm__(".globl _FUN_8c021d90\n.set _FUN_8c021d90, _FUN_8c021d90_def\n");
