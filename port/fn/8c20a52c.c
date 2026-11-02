#include "../decls.h"
undefined4 FUN_8c20a52c_def(int ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  if (*(undefined4 *)0x8c4a9be4 == 1) {
    iVar4 = *(undefined4 *)0x8c4a9e70;
    iVar3 = *(undefined4 *)0x8c4a9be8;
    *(undefined4 *)0x8c4a9dc4 = *(undefined4 *)0x8c4a9dc4 + iVar3 * iVar4 * -8;
    *(undefined4 *)0x8c4a9dc8 = *(undefined4 *)0x8c4a9dc8 + iVar3 * iVar4 * -8;
  }
  if (ar4 == 0) {
    *(undefined4 *)0x8c4a9be8 = 0;
  }
  else if (ar4 == 1) {
    if (((*(undefined4 *)0x8c4a9bcc & 1) == 1) || ((*(undefined4 *)0x8c4a9bcc & 0x20) != 0)) {
      *(undefined4 *)0x8c4a9be8 = 0x10;
    }
    else {
      *(undefined4 *)0x8c4a9be8 = 8;
    }
    iVar3 = *(undefined4 *)0x8c4a9be8 * *(undefined4 *)0x8c4a9e70 * 8;
    *(undefined4 *)0x8c4a9dc4 = *(undefined4 *)0x8c4a9dc4 + iVar3;
    *(undefined4 *)0x8c4a9dc8 = iVar3 + *(undefined4 *)0x8c4a9dc8;
  }
  uVar6 = *(undefined4 *)0x8c4a9e6c & 0xfff003ff;
  piVar2 = 0x8c4a9be8;
  if (*(undefined4 *)0x8c4a9be8 < *(undefined4 *)0x8c4a9c00) {
    piVar2 = 0x8c4a9c00;
  }
  uVar5 = *(undefined4 *)0x8c4a9bf0 - *piVar2;
  if (*(undefined4 *)0x8c4a9bf0 < *(undefined4 *)0x8c4a9c00 + uVar5) {
    uVar5 = *(undefined4 *)0x8c4a9bf0 - *(undefined4 *)0x8c4a9be8;
  }
  if (*(undefined4 *)0x8c4a9bf0 < uVar5) {
    *(undefined4 *)0x8c4a9bf0 = uVar5;
  }
  *(undefined4 *)0x8c4a9e6c = (uVar5 & (int)0x3ff) << 10 | uVar6;
  puVar1 = (&pvr_20a844);
  pvr_20a844(0x44,0,ar6,ar7);
  (*(code *)puVar1)(0x5c,*(undefined4 *)0x8c4a9e6c,ar6,ar7);
  (*(code *)puVar1)(0x44,*(undefined4 *)0x8c4a9e74,ar6,ar7);
  *(undefined4 *)0x8c4a9be4 = ar4;
  if (ar5 != (int *)0x0) {
    *ar5 = *(undefined4 *)0x8c4a9be8;
  }
  return 0;
}

__asm__(".globl _FUN_8c20a52c\n.set _FUN_8c20a52c, _FUN_8c20a52c_def\n");
