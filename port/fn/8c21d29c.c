#include "../decls.h"
int FUN_8c21d29c_def(int ar4,int ar5,undefined4 ar6,int *ar7)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  double in_dr0;
  float fVar9;
  float fVar10;
  double dVar11;
  undefined4 in_fr5;
  undefined8 uVar12;
  double in_xd0;
  undefined8 in_xd2;
  undefined8 uVar13;
  undefined8 in_xd4;
  undefined4 in_PR;
  char cVar14;
  char cVar15;
  undefined4 uStack_1c;
  undefined8 uStack_18;
  
  fVar9 = (float)((ulonglong)in_xd4 >> 0x20);
  cVar15 = '\0';
  cVar14 = '\0';
  (*(uint*)((uchar*)&uStack_18+4)) = in_PR;
  FUN_8c010794(8,&uStack_1c,&DAT_8c26d7a8);
  piVar8 = (int *)(ar5 * 0x10 + ar4);
  iVar1 = libgcc_divide_helper_0106dc(ar5 + 1,ar6);
  piVar6 = (int *)(iVar1 * 0x10 + ar4);
  fVar10 = (float)(*piVar6 - *piVar8);
  dVar11 = (double)(ulonglong)(uint)fVar10;
  uVar12 = in_xd2;
  if (cVar15 == '\0') {
    uVar12 = CONCAT44(fVar10,in_fr5);
  }
  uVar2 = (uint)((ulonglong)uVar12 >> 0x20);
  uVar13 = uVar12;
  if (cVar14 != '\0' || 0.0 <= fVar10) {
    if (cVar15 == '\0') {
      dVar11 = (double)(ulonglong)uVar2;
      uVar13 = in_xd2;
    }
  }
  else {
    if (cVar15 == '\0') {
      dVar11 = (double)(ulonglong)uVar2;
      in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),0x4f800000);
      uVar13 = in_xd2;
    }
    else {
      in_xd0 = -1.8629950226301174e-249;
    }
    if (cVar14 == '\0') {
      dVar11 = (double)(ulonglong)(uint)(SUB84(dVar11,0) + SUB84(in_dr0,0));
    }
    else {
      dVar11 = dVar11 + in_dr0;
    }
  }
  if (cVar15 == '\0') {
    uStack_18 = CONCAT44((*(uint*)((uchar*)&uStack_18+4)),SUB84(dVar11,0));
  }
  else {
    uStack_18 = uVar13;
  }
  iVar1 = *piVar8;
  fVar10 = (float)iVar1;
  dVar11 = (double)CONCAT44((int)((ulonglong)dVar11 >> 0x20),fVar10);
  if (iVar1 < 0) {
    if (cVar14 == '\0') {
      dVar11 = (double)CONCAT44(0x4f800000,fVar10 + 4.2949673e+09);
    }
    else {
      dVar11 = (double)CONCAT44(0x4f800000,fVar10) + (double)CONCAT44(0x4f800000,fVar10);
    }
  }
  if (cVar15 == '\0') {
    in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),_DAT_8c4aad54);
  }
  else {
    in_xd0 = (double)CONCAT44(_DAT_8c4aad58,_DAT_8c4aad54);
  }
  if (cVar14 == '\0') {
    fVar10 = SUB84(in_dr0,0) - SUB84(dVar11,0);
  }
  else {
    fVar10 = SUB84(in_dr0 - dVar11,0);
  }
  uVar2 = (uint)(0 < *piVar6 - iVar1);
  if (cVar15 == '\0') {
    dVar11 = (double)CONCAT44((int)((ulonglong)dVar11 >> 0x20),(&uStack_1c)[uVar2]);
  }
  iVar1 = piVar6[1] - piVar8[1];
  if (cVar15 == '\0') {
    in_xd0 = (double)CONCAT44(fVar10,(int)uVar12);
  }
  if (cVar14 == '\0') {
    fVar10 = (float)((ulonglong)in_xd0 >> 0x20) / SUB84(dVar11,0);
  }
  else {
    fVar10 = (float)((ulonglong)(in_xd0 / dVar11) >> 0x20);
  }
  if (cVar14 == '\0') {
    dVar11 = (double)CONCAT44(fVar10,1.0 - fVar10);
  }
  else {
    dVar11 = (double)CONCAT44(fVar10,0x3f800000) - (double)CONCAT44(fVar10,0x3f800000);
  }
  if (iVar1 < 0x8001) {
    if (iVar1 < -0x8000) {
      iVar1 = iVar1 + 0x10000;
    }
  }
  else {
    iVar1 = iVar1 + -0x10000;
  }
  iVar5 = piVar6[2] - piVar8[2];
  if (iVar5 < 0x8001) {
    if (iVar5 < -0x8000) {
      iVar5 = iVar5 + 0x10000;
    }
  }
  else {
    iVar5 = iVar5 + -0x10000;
  }
  iVar3 = piVar8[2];
  iVar7 = piVar6[3] - piVar8[3];
  if (iVar7 < 0x8001) {
    if (iVar7 < -0x8000) {
      iVar7 = iVar7 + 0x10000;
    }
  }
  else {
    iVar7 = iVar7 + -0x10000;
  }
  if (cVar15 == '\0') {
    fVar9 = SUB84(dVar11,0);
  }
  iVar4 = piVar8[3];
  fVar10 = (float)((ulonglong)dVar11 >> 0x20);
  if (cVar14 == '\0') {
    iVar1 = (int)(fVar9 * (float)(uint)piVar8[1] + (float)(iVar1 + piVar8[1]) * fVar10);
  }
  else {
    iVar1 = (int)((double)(iVar1 + piVar8[1]) * dVar11);
  }
  *ar7 = iVar1;
  if (cVar14 == '\0') {
    iVar1 = (int)(fVar9 * (float)(uint)piVar8[2] + (float)(iVar5 + iVar3) * fVar10);
  }
  else {
    iVar1 = (int)((double)(iVar5 + iVar3) * dVar11);
  }
  ar7[1] = iVar1;
  if (cVar14 == '\0') {
    iVar1 = (int)(fVar9 * (float)(uint)piVar8[3] + (float)(iVar7 + iVar4) * fVar10);
  }
  else {
    iVar1 = (int)((double)(iVar7 + iVar4) * dVar11);
  }
  ar7[2] = iVar1;
  return uVar2 * 4;
}

__asm__(".globl _FUN_8c21d29c\n.set _FUN_8c21d29c, _FUN_8c21d29c_def\n");
