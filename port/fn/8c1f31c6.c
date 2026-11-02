#include "../decls.h"
int FUN_8c1f31c6_def(int ar4,int ar5,uint ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  int ar5_00;
  int iVar3;
  uint ar6_00;
  int iVar4;
  int iVar5;
  
  iVar1 = 0xc350;
  iVar2 = 0;
  iVar4 = (int)0x4e20;
  ar5_00 = ar5;
  ar6_00 = ar6;
  for (iVar5 = 0; iVar5 < iVar4; iVar5 = iVar5 + 1) {
    if ((ar6 & 0x1f) == 0) {
      ar5_00 = ar5;
      ar6_00 = ar6;
      iVar2 = FUN_8c1f332c(ar4,ar5,ar6,ar7);
    }
    else {
      ar5_00 = ar5;
      ar6_00 = ar6;
      iVar2 = FUN_8c1f3254(ar4,ar5,ar6,ar7);
    }
    if (((iVar2 != 0) || (ar5 == 0)) ||
       (iVar3 = iVar1, *(int *)(ar4 + 0x10) <= *(int *)(ar4 + 0x14))) break;
    for (; iVar3 != 0; iVar3 = iVar3 + -1) {
    }
    ar5_00 = 0;
  }
  if (iVar5 == iVar4) {
    iVar2 = -0x15;
  }
  else if (-1 < iVar2) {
    iVar2 = FUN_8c1f2f98(ar4,ar5_00,ar6_00,ar7);
  }
  return iVar2;
}

__asm__(".globl _FUN_8c1f31c6\n.set _FUN_8c1f31c6, _FUN_8c1f31c6_def\n");
