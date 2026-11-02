#include "../decls.h"
undefined4 FUN_8c20d7a0_def(int ar4,int ar5,undefined4 ar6,uint ar7)

{
  int iVar1;
  undefined4 uVar2;
  uint ar7_00;
  int ar6_00;
  
  ar7_00 = ar7;
  iVar1 = FUN_8c20d400(ar6,ar6,ar6,ar7);
  iVar1 = iVar1 * 4;
  if ((ar7 & 1) == 0) {
    ar6_00 = *(int *)(&DAT_8c26d448 + iVar1);
    iVar1 = *(int *)(&DAT_8c26d530 + iVar1);
  }
  else {
    ar6_00 = *(int *)(&DAT_8c26d464 + iVar1);
    iVar1 = *(int *)(&DAT_8c26d55c + iVar1) + 10;
  }
  FUN_8c20a9c2(ar4,ar5,ar6_00,ar7_00);
  uVar2 = FUN_8c20a9c2(ar4 + ar6_00,ar5 + 0x800,iVar1,ar7_00);
  return uVar2;
}

__asm__(".globl _FUN_8c20d7a0\n.set _FUN_8c20d7a0, _FUN_8c20d7a0_def\n");
