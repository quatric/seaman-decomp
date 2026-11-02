#include "../decls.h"
undefined4 FUN_8c2548a8_def(int ar4,int ar5,undefined4 ar6,undefined8 *ar7)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  double in_dr0;
  float fVar4;
  float fVar5;
  float fVar6;
  double dVar7;
  undefined4 in_fr5;
  uint uVar8;
  double in_xd0;
  undefined8 in_xd2;
  undefined8 uVar9;
  undefined8 in_xd4;
  undefined4 in_PR;
  char cVar10;
  char cVar11;
  undefined1 auStack_14 [8];
  undefined4 uStack_c;
  
  fVar6 = (float)((ulonglong)in_xd4 >> 0x20);
  cVar11 = '\0';
  cVar10 = '\0';
  uStack_c = in_PR;
  FUN_8c010794(8,auStack_14,&DAT_8c271d70);
  piVar3 = (int *)(ar5 * 0x10 + ar4);
  iVar1 = libgcc_divide_helper_0106dc(ar5 + 1,ar6);
  piVar2 = (int *)(ar4 + iVar1 * 0x10);
  fVar4 = (float)(*piVar2 - *piVar3);
  dVar7 = (double)(ulonglong)(uint)fVar4;
  uVar9 = in_xd2;
  if (cVar11 == '\0') {
    uVar9 = CONCAT44(fVar4,in_fr5);
  }
  uVar8 = (uint)((ulonglong)uVar9 >> 0x20);
  if (cVar10 != '\0' || 0.0 <= fVar4) {
    if (cVar11 == '\0') {
      dVar7 = (double)(ulonglong)uVar8;
      uVar9 = in_xd2;
    }
  }
  else {
    if (cVar11 == '\0') {
      dVar7 = (double)(ulonglong)uVar8;
      in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),0x4f800000);
      uVar9 = in_xd2;
    }
    else {
      in_xd0 = -1.8629950226301174e-249;
    }
    if (cVar10 == '\0') {
      dVar7 = (double)(ulonglong)(uint)(SUB84(dVar7,0) + SUB84(in_dr0,0));
    }
    else {
      dVar7 = dVar7 + in_dr0;
    }
  }
  if (cVar11 == '\0') {
    stack0xfffffff0 = CONCAT44(uStack_c,SUB84(dVar7,0));
  }
  else {
    stack0xfffffff0 = uVar9;
  }
  iVar1 = *piVar3;
  fVar4 = (float)iVar1;
  dVar7 = (double)CONCAT44((int)((ulonglong)dVar7 >> 0x20),fVar4);
  if (iVar1 < 0) {
    if (cVar10 == '\0') {
      dVar7 = (double)CONCAT44(0x4f800000,fVar4 + 4.2949673e+09);
    }
    else {
      dVar7 = (double)CONCAT44(0x4f800000,fVar4) + (double)CONCAT44(0x4f800000,fVar4);
    }
  }
  if (cVar11 == '\0') {
    in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),_DAT_8c4aad54);
  }
  else {
    in_xd0 = (double)CONCAT44(_DAT_8c4aad58,_DAT_8c4aad54);
  }
  if (cVar10 == '\0') {
    fVar4 = SUB84(in_dr0,0) - SUB84(dVar7,0);
  }
  else {
    fVar4 = SUB84(in_dr0 - dVar7,0);
  }
  iVar1 = (uint)(0 < *piVar2 - iVar1) * 4;
  if (cVar11 == '\0') {
    dVar7 = (double)CONCAT44((int)((ulonglong)dVar7 >> 0x20),*(undefined4 *)(auStack_14 + iVar1));
    in_xd0 = (double)CONCAT44(fVar4,0x3f800000);
  }
  else {
    uVar9 = *(undefined8 *)(auStack_14 + iVar1);
  }
  if (cVar10 == '\0') {
    in_xd0 = (double)CONCAT44((float)((ulonglong)in_xd0 >> 0x20) / SUB84(dVar7,0),SUB84(in_xd0,0));
  }
  else {
    in_xd0 = in_xd0 / dVar7;
  }
  if (cVar11 == '\0') {
    dVar7 = (double)CONCAT44(piVar3[1],piVar2[1]);
  }
  else {
    uVar9 = *(undefined8 *)(piVar2 + 1);
    dVar7 = *(double *)(piVar3 + 1);
  }
  if (cVar10 == '\0') {
    fVar4 = (float)((ulonglong)in_xd0 >> 0x20);
    in_xd0 = (double)CONCAT44(fVar4,SUB84(in_xd0,0) - fVar4);
    dVar7 = (double)CONCAT44((int)((ulonglong)dVar7 >> 0x20),SUB84(dVar7,0) * fVar4);
  }
  else {
    in_xd0 = in_xd0 - in_xd0;
    fVar4 = (float)((ulonglong)in_xd0 >> 0x20);
    dVar7 = dVar7 * in_xd0;
  }
  if (cVar11 == '\0') {
    fVar6 = SUB84(in_xd0,0);
  }
  if (cVar10 == '\0') {
    dVar7 = (double)(ulonglong)(uint)(fVar6 * (float)((ulonglong)dVar7 >> 0x20) + SUB84(dVar7,0));
  }
  if (cVar11 == '\0') {
    *(int *)ar7 = SUB84(dVar7,0);
    dVar7 = (double)CONCAT44(piVar3[2],piVar2[2]);
  }
  else {
    *ar7 = uVar9;
    uVar9 = *(undefined8 *)(piVar2 + 2);
    dVar7 = *(double *)(piVar3 + 2);
  }
  if (cVar10 == '\0') {
    fVar5 = fVar6 * (float)((ulonglong)dVar7 >> 0x20) + SUB84(dVar7,0) * fVar4;
  }
  else {
    fVar5 = SUB84(dVar7 * in_xd0,0);
  }
  if (cVar11 == '\0') {
    *(float *)((int)ar7 + 4) = fVar5;
    dVar7 = (double)CONCAT44(piVar3[3],piVar2[3]);
  }
  else {
    *(undefined8 *)((int)ar7 + 4) = uVar9;
    uVar9 = *(undefined8 *)(piVar2 + 3);
    dVar7 = *(double *)(piVar3 + 3);
  }
  if (cVar10 == '\0') {
    fVar6 = fVar6 * (float)((ulonglong)dVar7 >> 0x20) + SUB84(dVar7,0) * fVar4;
  }
  else {
    fVar6 = SUB84(dVar7 * in_xd0,0);
  }
  if (cVar11 == '\0') {
    *(float *)(ar7 + 1) = fVar6;
  }
  else {
    ar7[1] = uVar9;
  }
  return 8;
}

__asm__(".globl _FUN_8c2548a8\n.set _FUN_8c2548a8, _FUN_8c2548a8_def\n");
