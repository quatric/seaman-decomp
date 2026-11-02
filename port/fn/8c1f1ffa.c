#include "../decls.h"
int FUN_8c1f1ffa_def(char *ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int ar5_00;
  int ar6_00;
  int ar7_00;
  
  if (ar5 == 0) {
    ar5 = *(int *)(DAT_8c2739e0 + 0x10);
  }
  if ((*ar4 == '/') || (*ar4 == '\\')) {
    if (*_DAT_8c470f90 == 1) {
      iVar1 = FUN_8c1f2e3e(DAT_8c2739e0 + 0x80,*(undefined4 *)(DAT_8c2739e0 + 4),
                           *(undefined4 *)(DAT_8c2739e0 + 8),ar4,_DAT_8c470f90 + 4);
    }
    else {
      iVar1 = FUN_8c1f2d3e(DAT_8c2739e0 + 0x80,*(undefined4 *)(DAT_8c2739e0 + 4),
                           *(undefined4 *)(DAT_8c2739e0 + 8),ar4);
    }
    if (iVar1 == 0) {
      return 0xfffffff8;
    }
    ar7_00 = 0x800;
  }
  else {
    iVar1 = FUN_8c1f2cce(ar4,*(undefined4 *)(DAT_8c2739e0 + 0x10),0,ar7);
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
  ar6_00 = ar5;
  iVar2 = FUN_8c1f2bfe(DAT_8c2739e0 + 0x40,iVar1,ar5,ar7_00);
  if (((*_DAT_8c470f90 == 1) && (*(int *)(_DAT_8c470f90 + 2) == iVar1)) &&
     ((iVar1 = 1, iVar2 == 0 || (iVar1 = iVar2, iVar2 == -0xc)))) {
    FUN_8c1f1a52(ar5,ar5_00,ar6_00,ar7_00,iVar1);
  }
  return iVar2;
}

__asm__(".globl _FUN_8c1f1ffa\n.set _FUN_8c1f1ffa, _FUN_8c1f1ffa_def\n");
