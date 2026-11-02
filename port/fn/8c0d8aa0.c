#include "../decls.h"
int FUN_8c0d8aa0_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 in_fr1;
  ulonglong uVar2;
  double dVar3;
  float fVar4;
  float fVar5;
  undefined8 in_dr14;
  undefined4 uVar7;
  double dVar6;
  undefined8 in_xd14;
  bool bVar8;
  int ar7_00;
  int ar6_00;
  int ar5_00;
  char cVar9;
  char cVar10;
  undefined4 in_stack_ffffff8c;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 auStack_58 [17];
  
  uVar7 = (undefined4)((ulonglong)in_dr14 >> 0x20);
  cVar10 = '\0';
  cVar9 = '\0';
  FUN_8c25cddc(auStack_58,ar5,ar6,ar7,in_stack_ffffff8c);
  if (cVar10 == '\0') {
    uStack_64 = *(undefined4 *)(ar4 + 8);
    uStack_60 = *(undefined4 *)(ar4 + 0xc);
    uStack_5c = *(undefined4 *)(ar4 + 0x10);
    uVar2 = CONCAT44(uStack_5c,in_fr1);
  }
  else {
    uStack_64 = (undefined4)*(undefined8 *)(ar4 + 8);
    uStack_60 = (undefined4)*(undefined8 *)(ar4 + 0xc);
    uVar2 = *(ulonglong *)(ar4 + 0x10);
    uStack_5c = (undefined4)uVar2;
    auStack_58[0] = (undefined4)(uVar2 >> 0x20);
  }
  iVar1 = libgcc_divide_helper_0103d0(ar5,36000,ar6,ar7);
  fVar5 = (float)iVar1;
  dVar6 = (double)CONCAT44(uVar7,fVar5);
  dVar3 = (double)(uVar2 & 0xffffffff);
  if (cVar9 == '\0') {
    bVar8 = fVar5 < 0.0;
  }
  else {
    bVar8 = dVar6 < dVar3;
  }
  if (bVar8) {
    if (cVar10 == '\0') {
      dVar3 = (double)CONCAT44(0x4f800000,(int)uVar2);
    }
    else {
      dVar3 = 1.8578690272452215e+34;
    }
    if (cVar9 == '\0') {
      dVar6 = (double)(ulonglong)(uint)(fVar5 + (float)((ulonglong)dVar3 >> 0x20));
    }
    else {
      dVar6 = dVar6 + dVar3;
    }
  }
  if (cVar10 == '\0') {
    uVar2 = CONCAT44(0x470ca000,SUB84(dVar3,0));
  }
  else {
    uVar2 = 0x478ca000470ca000;
  }
  if (cVar9 == '\0') {
    dVar3 = (double)CONCAT44((float)ar5,SUB84(dVar6,0) / (float)(uVar2 >> 0x20));
  }
  else {
    dVar3 = (double)ar5;
  }
  dVar6 = (double)(uVar2 & 0xffffffff);
  fVar5 = (float)((ulonglong)dVar3 >> 0x20);
  if (cVar9 == '\0') {
    bVar8 = fVar5 < 0.0;
  }
  else {
    bVar8 = dVar3 < dVar6;
  }
  if (bVar8) {
    if (cVar10 == '\0') {
      dVar6 = (double)CONCAT44(0x4f800000,(int)uVar2);
    }
    else {
      dVar6 = 1.8578690272452215e+34;
    }
    if (cVar9 == '\0') {
      dVar3 = (double)CONCAT44(fVar5 + (float)((ulonglong)dVar6 >> 0x20),SUB84(dVar3,0));
    }
    else {
      dVar3 = dVar3 + dVar6;
    }
  }
  if (cVar10 == '\0') {
    dVar6 = (double)CONCAT44(0x478ca000,SUB84(dVar6,0));
  }
  else {
    dVar6 = 5629500734611456.0;
  }
  if (cVar9 == '\0') {
    dVar3 = (double)CONCAT44((float)((ulonglong)dVar3 >> 0x20) / (float)((ulonglong)dVar6 >> 0x20),
                             SUB84(dVar3,0));
  }
  else {
    dVar3 = dVar3 / dVar6;
  }
  if (cVar10 == '\0') {
    dVar6 = (double)CONCAT44(0x43340000,SUB84(dVar6,0));
  }
  else {
    dVar6 = 2.6584566571173454e+36;
  }
  if (cVar9 == '\0') {
    dVar3 = (double)CONCAT44((int)((ulonglong)dVar3 >> 0x20),
                             SUB84(dVar3,0) * (float)((ulonglong)dVar6 >> 0x20));
  }
  else {
    dVar3 = dVar3 * dVar6;
  }
  dVar6 = (double)CONCAT44((int)((ulonglong)dVar3 >> 0x20),-SUB84(dVar3,0));
  if (cVar10 == '\0') {
    *(float *)(ar4 + 0x30) = -SUB84(dVar3,0);
    dVar3 = (double)CONCAT44(0x47800000,*(undefined4 *)(ar4 + 0x30));
  }
  else {
    *(undefined8 *)(ar4 + 0x30) = in_xd14;
    dVar3 = 1.4411521878487204e+18;
  }
  if (cVar9 == '\0') {
    fVar5 = SUB84(dVar3,0) * (float)((ulonglong)dVar3 >> 0x20);
  }
  else {
    fVar5 = SUB84(dVar3 * dVar3,0);
  }
  if (cVar10 == '\0') {
    dVar3 = (double)CONCAT44(0x43b40000,fVar5);
  }
  else {
    dVar3 = -3.739346301775294e-250;
  }
  if (cVar9 == '\0') {
    ar7_00 = (int)(SUB84(dVar3,0) / (float)((ulonglong)dVar3 >> 0x20));
  }
  else {
    ar7_00 = (int)(dVar3 / dVar3);
  }
  if (cVar10 == '\0') {
    dVar3 = (double)CONCAT44(0x47800000,*(undefined4 *)(ar4 + 0x2c));
  }
  else {
    dVar3 = 1.4411521878487204e+18;
  }
  if (cVar9 == '\0') {
    fVar5 = SUB84(dVar3,0) * (float)((ulonglong)dVar3 >> 0x20);
  }
  else {
    fVar5 = SUB84(dVar3 * dVar3,0);
  }
  if (cVar10 == '\0') {
    dVar3 = (double)CONCAT44(0x43b40000,fVar5);
  }
  else {
    dVar3 = -3.739346301775294e-250;
  }
  if (cVar9 == '\0') {
    ar6_00 = (int)(SUB84(dVar3,0) / (float)((ulonglong)dVar3 >> 0x20));
  }
  else {
    ar6_00 = (int)(dVar3 / dVar3);
  }
  if (cVar10 == '\0') {
    dVar3 = (double)CONCAT44(0x47800000,*(undefined4 *)(ar4 + 0x28));
  }
  else {
    dVar3 = 1.4411521878487204e+18;
  }
  if (cVar9 == '\0') {
    fVar5 = SUB84(dVar3,0) * (float)((ulonglong)dVar3 >> 0x20);
  }
  else {
    fVar5 = SUB84(dVar3 * dVar3,0);
  }
  if (cVar10 == '\0') {
    dVar3 = (double)CONCAT44(0x43b40000,fVar5);
  }
  else {
    dVar3 = -3.739346301775294e-250;
  }
  if (cVar9 == '\0') {
    fVar4 = (float)((ulonglong)dVar3 >> 0x20);
    fVar5 = SUB84(dVar3,0) / fVar4;
    dVar3 = (double)CONCAT44(fVar4,fVar5);
    ar5_00 = (int)fVar5;
  }
  else {
    dVar3 = dVar3 / dVar3;
    ar5_00 = (int)dVar3;
  }
  uVar7 = SUB84(dVar3,0);
  FUN_8c256b0c(auStack_58,ar5_00,ar6_00,ar7_00,iVar1);
  FUN_8c21279c(auStack_58,&uStack_64,&uStack_70,ar7_00,iVar1);
  if (cVar10 == '\0') {
    *(undefined4 *)(ar4 + 0x18) = uStack_70;
    *(undefined4 *)(ar4 + 0x1c) = uStack_6c;
    *(undefined4 *)(ar4 + 0x20) = uStack_68;
    dVar3 = (double)CONCAT44(0x43b38000,uVar7);
  }
  else {
    *(undefined8 *)(ar4 + 0x18) = CONCAT44(uStack_6c,uStack_70);
    *(ulonglong *)(ar4 + 0x1c) = CONCAT44(uStack_68,uStack_6c);
    *(ulonglong *)(ar4 + 0x20) = CONCAT44(uStack_64,uStack_68);
    dVar3 = 1.606691858090454e+73;
  }
  if (cVar9 == '\0') {
    iVar1 = (int)((float)((ulonglong)dVar6 >> 0x20) * (float)((ulonglong)dVar3 >> 0x20));
  }
  else {
    iVar1 = (int)(dVar6 * dVar3);
  }
  return iVar1;
}

__asm__(".globl _FUN_8c0d8aa0\n.set _FUN_8c0d8aa0, _FUN_8c0d8aa0_def\n");
