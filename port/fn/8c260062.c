#include "../decls.h"
undefined4 FUN_8c260062_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int ar5_00;
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int n;
  
  iVar4 = ar4 + 0x50;
  ar5_00 = libgcc_divide_helper_010468(*(undefined4 *)(ar4 + 0x54),*(undefined4 *)(ar4 + 0x58));
  iVar8 = *(int *)(iVar4 + 0x28);
  iVar5 = *(int *)(iVar4 + 0x10);
  iVar9 = *(int *)(iVar4 + 0x20);
  iVar3 = iVar8 + iVar5 + -1;
  n = *(int *)(iVar4 + 0x24);
  iVar6 = *(int *)(iVar4 + 0x18);
  iVar1 = libgcc_divide_helper_010468(iVar3,iVar5);
  iVar3 = libgcc_divide_helper_010614(iVar3,iVar5);
  iVar7 = (iVar5 - iVar3) + -1;
  iVar3 = libgcc_divide_helper_010468((iVar6 - iVar9) + iVar5 + -1,iVar5);
  if ((iVar1 < iVar3) && ((iVar3 * iVar5 - iVar7) + iVar9 < *(int *)(iVar4 + 0x18))) {
    iVar3 = iVar3 + 1;
  }
  if (iVar8 < n) {
    n = n + iVar7;
  }
  iVar5 = libgcc_divide_helper_010468(n,iVar5);
  if (iVar5 < ar5_00) {
    ar5_00 = iVar5;
  }
  if (iVar1 < ar5_00) {
    ar5_00 = iVar1;
  }
  if (iVar3 < ar5_00) {
    ar5_00 = iVar3;
  }
  if (*(int *)(iVar4 + 8) == 2) {
    uVar2 = FUN_8c26002c(ar4,ar5_00,iVar5,iVar3);
    return uVar2;
  }
  uVar2 = FUN_8c260000(ar4,ar5_00,iVar5,iVar3);
  return uVar2;
}

__asm__(".globl _FUN_8c260062\n.set _FUN_8c260062, _FUN_8c260062_def\n");
