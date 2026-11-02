#include "../decls.h"
undefined4 FUN_8c21a854_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  double *pdVar2;
  double *pdVar3;
  undefined4 uVar4;
  double dVar5;
  double in_xd2;
  char in_FPSCR_PR = 0;
  char in_FPSCR_SZ = 0;
  
  pdVar3 = 0x8c4aa4e0;
  pdVar2 = 0x8c4aa4a8;
  iVar1 = 0x8c4aa2f8;
  if (in_FPSCR_SZ == '\0') {
    dVar5 = (double)CONCAT44(*(undefined4 *)0x8c4aa4a8,*(undefined4 *)0x8c4aa4dc);
  }
  else {
    in_xd2 = *(undefined4 *)0x8c4aa4dc;
    dVar5 = *(undefined4 *)0x8c4aa4a8;
  }
  if (in_FPSCR_PR == '\0') {
    dVar5 = (double)CONCAT44((float)((ulonglong)dVar5 >> 0x20) * SUB84(dVar5,0),SUB84(dVar5,0));
  }
  else {
    dVar5 = dVar5 * dVar5;
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)(0x8c4aa2f8 + 0x10) = (int)((ulonglong)dVar5 >> 0x20);
    dVar5 = (double)CONCAT44(*(undefined4 *)pdVar2,*(undefined4 *)pdVar3);
  }
  else {
    *(double *)(0x8c4aa2f8 + 0x10) = dVar5;
    dVar5 = *pdVar2;
    in_xd2 = *pdVar3;
  }
  if (in_FPSCR_PR == '\0') {
    dVar5 = (double)CONCAT44((float)((ulonglong)dVar5 >> 0x20) * SUB84(dVar5,0),SUB84(dVar5,0));
  }
  else {
    dVar5 = dVar5 * dVar5;
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)(iVar1 + 0x14) = (int)((ulonglong)dVar5 >> 0x20);
    *(undefined4 *)(iVar1 + 0x18) = *(undefined4 *)((int)pdVar2 + 0xc);
    uVar4 = *(undefined4 *)(pdVar2 + 2);
  }
  else {
    *(double *)(iVar1 + 0x14) = dVar5;
    uVar4 = SUB84(dVar5,0);
    *(undefined8 *)(iVar1 + 0x18) = *(undefined8 *)((int)pdVar2 + 0xc);
    in_xd2 = pdVar2[2];
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(iVar1 + 0x1c) = uVar4;
  }
  else {
    *(double *)(iVar1 + 0x1c) = in_xd2;
  }
  return 0x1c;
}

__asm__(".globl _FUN_8c21a854\n.set _FUN_8c21a854, _FUN_8c21a854_def\n");
