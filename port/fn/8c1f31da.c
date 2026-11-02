#include "../decls.h"
int FUN_8c1f31da_def(undefined4 ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 unaff_r11;
  int unaff_r12;
  int iVar5;
  int unaff_r14;
  char in_T;
  
  iVar1 = 0xc350;
  iVar2 = 0;
  iVar4 = (int)0x4e20;
  for (iVar5 = 0; iVar5 < iVar4; iVar5 = iVar5 + 1) {
    ar5 = unaff_r12;
    ar6 = unaff_r11;
    if (in_T == '\0') {
      iVar2 = FUN_8c1f3254(unaff_r14,unaff_r12,unaff_r11,ar7);
    }
    else {
      iVar2 = FUN_8c1f332c(unaff_r14,unaff_r12,unaff_r11,ar7);
    }
    if (((iVar2 != 0) || (unaff_r12 == 0)) ||
       (iVar3 = iVar1, *(int *)(unaff_r14 + 0x10) <= *(int *)(unaff_r14 + 0x14))) break;
    for (; iVar3 != 0; iVar3 = iVar3 + -1) {
    }
    ar5 = 0;
  }
  if (iVar5 == iVar4) {
    iVar2 = -0x15;
  }
  else if (-1 < iVar2) {
    iVar2 = FUN_8c1f2f98(unaff_r14,ar5,ar6,ar7);
  }
  return iVar2;
}

__asm__(".globl _FUN_8c1f31da\n.set _FUN_8c1f31da, _FUN_8c1f31da_def\n");
