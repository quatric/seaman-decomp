#include "../decls.h"
undefined4 FUN_8c0cc524_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 ar4_00;
  undefined4 *ar5_00;
  undefined4 *ar6_00;
  int ar5_01;
  undefined4 in_fr1;
  float fVar3;
  undefined8 uVar4;
  double dVar5;
  int iVar6;
  char cVar7;
  char cVar8;
  undefined4 in_stack_ffffff50;
  undefined8 uStack_b0;
  int iStack_ac;
  undefined4 auStack_a0 [3];
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined1 auStack_88 [72];
  undefined8 uStack_40;
  
  cVar8 = '\0';
  cVar7 = '\0';
  uStack_94 = DAT_8c13ce90;
  uStack_90 = DAT_8c13ce94;
  uStack_8c = DAT_8c13ce98;
  iVar6 = ar5;
  iVar1 = (**(code **)(*(int *)(ar5 + 8) + 0x144))(ar5,ar5,ar6,ar7);
  ar5_01 = iVar1 + 0xb0;
  if (cVar8 == '\0') {
    uVar4 = CONCAT44(*(undefined4 *)(ar4 + 0x2d3b4),in_fr1);
  }
  else {
    auStack_a0[0] = (undefined4)((ulonglong)*(undefined8 *)(ar4 + 0x2d3b0) >> 0x20);
    uVar4 = *(undefined8 *)(ar4 + 0x2d3b4);
  }
  if (DAT_8c43735c == '\0') {
    if (cVar8 == '\0') {
      uVar4 = CONCAT44(0x3e99999a,(int)uVar4);
      _DAT_8c437358 = CONCAT44(_DAT_8c43735c,0x3e99999a);
    }
    else {
      uVar4 = 0x8c4373643e99999a;
      _DAT_8c437358 = 0x8c4373643e99999a;
    }
    _DAT_8c437358 = CONCAT14(1,_DAT_8c437358);
  }
  if (DAT_8c437364 == '\0') {
    if (cVar8 == '\0') {
      uVar4 = CONCAT44(0x3d4ccccd,(int)uVar4);
      _DAT_8c437360 = CONCAT44(_DAT_8c437364,0x3d4ccccd);
    }
    else {
      uVar4 = 0x8c2363e83d4ccccd;
      _DAT_8c437360 = 0x8c2363e83d4ccccd;
    }
    _DAT_8c437360 = CONCAT14(1,_DAT_8c437360);
  }
  FUN_8c2363e8(auStack_88,iVar6,ar6,ar7,in_stack_ffffff50);
  (**(code **)(*(int *)(ar5 + 8) + 0x120))(ar5,iVar6,ar6,ar7);
  uStack_b0 = uVar4;
  if (cVar8 == '\0') {
    uVar2 = (undefined4)((ulonglong)uVar4 >> 0x20);
    uStack_b0 = CONCAT44(iVar1,uVar2);
    uStack_40 = CONCAT44((*(uint*)((uchar*)&uStack_40+4)),uVar2);
    uVar4 = uStack_40;
  }
  uStack_40 = uVar4;
  FUN_8c2572ec(auStack_88,iVar6,ar6,ar7);
  ar6_00 = auStack_a0;
  ar5_00 = &uStack_94;
  uVar2 = 0;
  FUN_8c21279c(0,ar5_00,ar6_00,ar7,in_stack_ffffff50);
  FUN_8c219038(uVar2,ar5_00,ar6_00,ar7);
  FUN_8c21907e(uVar2,ar5_00,ar6_00,ar7);
  FUN_8c219070(uVar2,ar5_00,ar6_00,ar7);
  FUN_8c01538c(0x8c43691c,ar5_00,ar6_00,ar7);
  FUN_8c256328(0,ar5_00,ar6_00,ar7,in_stack_ffffff50);
  FUN_8c25b5d0(0,ar5_00,ar6_00,ar7,in_stack_ffffff50);
  uVar2 = 0;
  if (cVar8 == '\0') {
    dVar5 = (double)CONCAT44(0x47800000,*(undefined4 *)(ar4 + 0x2d3b4));
  }
  else {
    dVar5 = 1.4411521878487204e+18;
  }
  if (cVar7 == '\0') {
    fVar3 = SUB84(dVar5,0) * (float)((ulonglong)dVar5 >> 0x20);
  }
  else {
    fVar3 = SUB84(dVar5 * dVar5,0);
  }
  if (cVar8 == '\0') {
    dVar5 = (double)CONCAT44(0x43b40000,fVar3);
  }
  else {
    dVar5 = -3.739346301775294e-250;
  }
  if (cVar7 == '\0') {
    iVar6 = (int)(SUB84(dVar5,0) / (float)((ulonglong)dVar5 >> 0x20));
  }
  else {
    iVar6 = (int)(dVar5 / dVar5);
  }
  if (cVar8 == '\0') {
    dVar5 = (double)CONCAT44(0x47800000,*(undefined4 *)(ar4 + 0x2d3b0));
  }
  else {
    dVar5 = 1.4411521878487204e+18;
  }
  if (cVar7 == '\0') {
    fVar3 = SUB84(dVar5,0) * (float)((ulonglong)dVar5 >> 0x20);
  }
  else {
    fVar3 = SUB84(dVar5 * dVar5,0);
  }
  if (cVar8 == '\0') {
    dVar5 = (double)CONCAT44(0x43b40000,fVar3);
  }
  else {
    dVar5 = -3.739346301775294e-250;
  }
  if (cVar7 == '\0') {
    iVar1 = (int)(SUB84(dVar5,0) / (float)((ulonglong)dVar5 >> 0x20));
  }
  else {
    iVar1 = (int)(dVar5 / dVar5);
  }
  FUN_8c256b0c(0,iVar1,iVar6,0,in_stack_ffffff50);
  FUN_8c015b54(0x8c43690c,ar5_01,iVar6,uVar2);
  ar4_00 = 1;
  FUN_8c256210(1,ar5_01,iVar6,uVar2);
  FUN_8c219070(ar4_00,ar5_01,iVar6,uVar2);
  FUN_8c0f4b44(ar5,ar5_01,iVar6,uVar2);
  FUN_8c256328(0,ar5_01,iVar6,uVar2,in_stack_ffffff50);
  FUN_8c25b5d0(0,ar5_01,iVar6,uVar2,in_stack_ffffff50);
  FUN_8c078fb8(ar5,ar5_01,iVar6,uVar2);
  (**(code **)(*(int *)(ar5 + 8) + 0x38))(ar5,ar5_01,iVar6,uVar2);
  uVar2 = FUN_8c256210(1,ar5_01,iVar6,uVar2);
  return uVar2;
}

__asm__(".globl _FUN_8c0cc524\n.set _FUN_8c0cc524, _FUN_8c0cc524_def\n");
