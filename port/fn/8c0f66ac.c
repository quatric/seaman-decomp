#include "../decls.h"
undefined4 * FUN_8c0f66ac_def(int ar4,double *ar5,int ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 in_fr1;
  undefined4 uVar4;
  double dVar5;
  double in_dr12;
  double in_dr14;
  int iVar6;
  int iVar7;
  char cVar8;
  char cVar9;
  
  cVar9 = '\0';
  cVar8 = '\0';
  if (ar6 == 0) {
    in_dr14 = 8.854438670043751e+20;
    in_dr12 = 5.879900608187177e+19;
  }
  else if (ar6 == 1) {
    in_dr14 = 5.879900592671609e+19;
    in_dr12 = 1.1709360855239885e+17;
  }
  else if (ar6 == 2) {
    in_dr14 = 1.9172811027428727e+24;
    in_dr12 = 1924145626640.0;
  }
  if (ar6 == 3) {
    *(undefined4 *)ar5 = 0;
    puVar3 = (undefined4 *)((int)ar5 + 4);
    *puVar3 = 0;
    *(undefined4 *)(ar5 + 1) = 0;
  }
  else {
    uVar1 = rand(ar4,ar5,ar6,ar7);
    if (cVar8 == '\0') {
      iVar6 = (int)SUB84(in_dr12,0);
    }
    else {
      iVar6 = (int)in_dr12;
    }
    iVar2 = libgcc_divide_helper_01031c(uVar1,iVar6,ar6,ar7);
    if (cVar8 == '\0') {
      iVar7 = (int)SUB84(in_dr14,0);
    }
    else {
      iVar7 = (int)in_dr14;
    }
    if (cVar8 == '\0') {
      dVar5 = (double)CONCAT44((float)(iVar7 + iVar2),in_fr1);
    }
    else {
      dVar5 = (double)(iVar7 + iVar2);
    }
    if (cVar9 == '\0') {
      *(int *)ar5 = (int)((ulonglong)dVar5 >> 0x20);
    }
    else {
      *ar5 = dVar5;
    }
    uVar1 = rand(uVar1,iVar6,ar6,ar7);
    uVar4 = SUB84(dVar5,0);
    if (cVar8 == '\0') {
      iVar6 = (int)(float)((ulonglong)in_dr12 >> 0x20);
    }
    else {
      iVar6 = (int)in_dr12;
    }
    iVar6 = libgcc_divide_helper_01031c(uVar1,iVar6,ar6,ar7);
    if (cVar8 == '\0') {
      iVar2 = (int)(float)((ulonglong)in_dr14 >> 0x20);
    }
    else {
      iVar2 = (int)in_dr14;
    }
    if (cVar8 == '\0') {
      dVar5 = (double)CONCAT44((float)(iVar2 + iVar6),uVar4);
    }
    else {
      dVar5 = (double)(iVar2 + iVar6);
    }
    if (cVar9 == '\0') {
      *(int *)(ar5 + 1) = (int)((ulonglong)dVar5 >> 0x20);
      *(undefined4 *)((int)ar5 + 4) = *(undefined4 *)(ar4 + 0x34);
    }
    else {
      ar5[1] = dVar5;
      *(undefined8 *)((int)ar5 + 4) = *(undefined8 *)(ar4 + 0x34);
    }
    puVar3 = (undefined4 *)(ar4 + 0x34);
  }
  return puVar3;
}

__asm__(".globl _FUN_8c0f66ac\n.set _FUN_8c0f66ac, _FUN_8c0f66ac_def\n");
