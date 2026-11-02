#include "../decls.h"
int FUN_8c25a8c0_def(undefined4 ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int ar4_00;
  int *ar5_00;
  int ar6_00;
  undefined4 in_stack_ffffffe0;
  
  ar5_00 = ar5;
  iVar1 = FUN_8c25a962(ar5,ar5,ar6,ar7);
  if (-1 < iVar1) {
    iVar1 = ar5[6];
    ar4_00 = FUN_8c236278(iVar1,ar5_00,ar6,ar7);
    if (ar4_00 == 0) {
      _DAT_8c4aa6b4 = 7;
      iVar1 = -7;
    }
    else {
      ar6_00 = iVar1;
      FUN_8c23c814(ar4_00,*ar5,iVar1,ar7);
      FUN_8c1f9e32(ar4_00,iVar1,ar6_00,ar7,in_stack_ffffffe0);
      iVar1 = 1;
      *ar5 = ar4_00;
    }
  }
  return iVar1;
}

__asm__(".globl _FUN_8c25a8c0\n.set _FUN_8c25a8c0, _FUN_8c25a8c0_def\n");
