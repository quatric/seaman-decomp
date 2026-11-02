#include "../decls.h"
int FUN_8c1f2008_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int ar5_00;
  undefined4 ar6_00;
  int ar7_00;
  char *unaff_r12;
  undefined4 unaff_r13;
  char in_T;
  undefined4 in_PR;
  
  if (in_T != '\0') {
    unaff_r13 = *(undefined4 *)(DAT_8c2739e0 + 0x10);
  }
  if ((*unaff_r12 == '/') || (*unaff_r12 == '\\')) {
    if (*_DAT_8c470f90 == 1) {
      iVar1 = FUN_8c1f2e3e(DAT_8c2739e0 + 0x80,*(undefined4 *)(DAT_8c2739e0 + 4),
                           *(undefined4 *)(DAT_8c2739e0 + 8),unaff_r12,_DAT_8c470f90 + 4);
    }
    else {
      iVar1 = FUN_8c1f2d3e(DAT_8c2739e0 + 0x80,*(undefined4 *)(DAT_8c2739e0 + 4),
                           *(undefined4 *)(DAT_8c2739e0 + 8),unaff_r12);
    }
    if (iVar1 == 0) {
      return 0xfffffff8;
    }
    ar7_00 = 0x800;
  }
  else {
    iVar1 = FUN_8c1f2cce(unaff_r12,*(undefined4 *)(DAT_8c2739e0 + 0x10),0,ar7);
    if (iVar1 == 0) {
      return 0xfffffff8;
    }
    piVar3 = (int *)(*(int *)(DAT_8c2739e0 + 0x10) + 0x10 + (iVar1 + -1) * 0x2c);
    if ((*(byte *)(piVar3 + 2) & 2) == 0) {
      return 0xfffffff5;
    }
    iVar1 = *piVar3;
    ar7_00 = piVar3[1];
  }
  iVar1 = iVar1 + 0x96;
  ar5_00 = iVar1;
  ar6_00 = unaff_r13;
  iVar2 = FUN_8c1f2bfe(DAT_8c2739e0 + 0x40,iVar1,unaff_r13,ar7_00);
  if (((*_DAT_8c470f90 == 1) && (*(int *)(_DAT_8c470f90 + 2) == iVar1)) &&
     ((iVar2 == 0 || (iVar2 == -0xc)))) {
    FUN_8c1f1a52(unaff_r13,ar5_00,ar6_00,ar7_00,in_PR);
  }
  return iVar2;
}

__asm__(".globl _FUN_8c1f2008\n.set _FUN_8c1f2008, _FUN_8c1f2008_def\n");
