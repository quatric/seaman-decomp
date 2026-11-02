#include "../decls.h"
int FUN_8c254956_def(int ar4,int ar5,undefined4 ar6,int *ar7)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int *piVar4;
  double in_dr0;
  float fVar5;
  float fVar6;
  double dVar7;
  double dVar8;
  undefined4 in_fr5;
  undefined8 uVar9;
  double in_xd0;
  undefined8 in_xd2;
  undefined8 uVar10;
  undefined8 in_xd4;
  undefined4 in_PR;
  char cVar11;
  char cVar12;
  undefined4 uStack_14;
  undefined8 uStack_10;
  
  fVar5 = (float)((ulonglong)in_xd4 >> 0x20);
  cVar12 = '\0';
  cVar11 = '\0';
  (*(uint*)((uchar*)&uStack_10+4)) = in_PR;
  FUN_8c010794(8,&uStack_14,&DAT_8c271d78);
  piVar4 = (int *)(ar5 * 0x10 + ar4);
  iVar1 = libgcc_divide_helper_0106dc(ar5 + 1,ar6);
  piVar3 = (int *)(ar4 + iVar1 * 0x10);
  fVar6 = (float)(*piVar3 - *piVar4);
  dVar7 = (double)(ulonglong)(uint)fVar6;
  uVar9 = in_xd2;
  if (cVar12 == '\0') {
    uVar9 = CONCAT44(fVar6,in_fr5);
  }
  uVar2 = (uint)((ulonglong)uVar9 >> 0x20);
  uVar10 = uVar9;
  if (cVar11 != '\0' || 0.0 <= fVar6) {
    if (cVar12 == '\0') {
      dVar7 = (double)(ulonglong)uVar2;
      uVar10 = in_xd2;
    }
  }
  else {
    if (cVar12 == '\0') {
      dVar7 = (double)(ulonglong)uVar2;
      in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),0x4f800000);
      uVar10 = in_xd2;
    }
    else {
      in_xd0 = -1.8629950226301174e-249;
    }
    if (cVar11 == '\0') {
      dVar7 = (double)(ulonglong)(uint)(SUB84(dVar7,0) + SUB84(in_dr0,0));
    }
    else {
      dVar7 = dVar7 + in_dr0;
    }
  }
  if (cVar12 == '\0') {
    uStack_10 = CONCAT44((*(uint*)((uchar*)&uStack_10+4)),SUB84(dVar7,0));
  }
  else {
    uStack_10 = uVar10;
  }
  iVar1 = *piVar4;
  fVar6 = (float)iVar1;
  dVar7 = (double)CONCAT44((int)((ulonglong)dVar7 >> 0x20),fVar6);
  if (iVar1 < 0) {
    if (cVar11 == '\0') {
      dVar7 = (double)CONCAT44(0x4f800000,fVar6 + 4.2949673e+09);
    }
    else {
      dVar7 = (double)CONCAT44(0x4f800000,fVar6) + (double)CONCAT44(0x4f800000,fVar6);
    }
  }
  if (cVar12 == '\0') {
    in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),_DAT_8c4aad54);
  }
  else {
    in_xd0 = (double)CONCAT44(_DAT_8c4aad58,_DAT_8c4aad54);
  }
  if (cVar11 == '\0') {
    fVar6 = SUB84(in_dr0,0) - SUB84(dVar7,0);
  }
  else {
    fVar6 = SUB84(in_dr0 - dVar7,0);
  }
  uVar2 = (uint)(0 < *piVar3 - iVar1);
  if (cVar12 == '\0') {
    dVar7 = (double)CONCAT44((int)((ulonglong)dVar7 >> 0x20),(&uStack_14)[uVar2]);
    in_xd0 = (double)CONCAT44(fVar6,(int)uVar9);
  }
  if (cVar11 == '\0') {
    fVar6 = (float)((ulonglong)in_xd0 >> 0x20) / SUB84(dVar7,0);
  }
  else {
    fVar6 = (float)((ulonglong)(in_xd0 / dVar7) >> 0x20);
  }
  if (cVar11 == '\0') {
    dVar7 = (double)CONCAT44(fVar6,1.0 - fVar6);
    dVar8 = (double)CONCAT44((float)(uint)piVar3[1] * fVar6,(float)(uint)piVar4[1]);
  }
  else {
    dVar7 = (double)CONCAT44(fVar6,0x3f800000) - (double)CONCAT44(fVar6,0x3f800000);
    fVar6 = (float)((ulonglong)dVar7 >> 0x20);
    dVar8 = (double)piVar3[1] * dVar7;
  }
  if (cVar12 == '\0') {
    fVar5 = SUB84(dVar7,0);
  }
  if (cVar11 == '\0') {
    iVar1 = (int)(fVar5 * SUB84(dVar8,0) + (float)((ulonglong)dVar8 >> 0x20));
  }
  else {
    iVar1 = (int)dVar8;
  }
  *ar7 = iVar1;
  if (cVar11 == '\0') {
    iVar1 = (int)(fVar5 * (float)(uint)piVar4[2] + (float)(uint)piVar3[2] * fVar6);
  }
  else {
    iVar1 = (int)((double)piVar3[2] * dVar7);
  }
  ar7[1] = iVar1;
  if (cVar11 == '\0') {
    iVar1 = (int)(fVar5 * (float)(uint)piVar4[3] + (float)(uint)piVar3[3] * fVar6);
  }
  else {
    iVar1 = (int)((double)piVar3[3] * dVar7);
  }
  ar7[2] = iVar1;
  return uVar2 * 4;
}

__asm__(".globl _FUN_8c254956\n.set _FUN_8c254956, _FUN_8c254956_def\n");
