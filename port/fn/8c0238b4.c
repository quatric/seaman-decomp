#include "../decls.h"
undefined4 FUN_8c0238b4_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 *ar5_00;
  undefined1 *ar6_00;
  float fVar1;
  undefined8 in_dr0;
  undefined4 uVar3;
  undefined4 uVar4;
  double dVar2;
  undefined4 in_fr4;
  int ar7_00;
  int ar6_01;
  int iVar5;
  char cVar6;
  char cVar7;
  undefined4 in_stack_00000000;
  undefined4 auStack_7c [3];
  undefined4 uStack_70;
  undefined1 auStack_6c [12];
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 auStack_54 [16];
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  cVar7 = '\0';
  cVar6 = '\0';
  Vec3_set_zero(&uStack_14,ar5,ar6,ar7);
  FUN_8c0231c8(ar4,ar5,ar6,ar7);
  uStack_14 = (undefined4)in_dr0;
  uVar3 = (undefined4)((ulonglong)in_dr0 >> 0x20);
  uVar4 = uVar3;
  if (cVar7 == '\0') {
    uVar4 = auStack_7c[0];
    uStack_14 = uVar3;
    uVar3 = uStack_10;
  }
  uStack_10 = uVar3;
  auStack_7c[0] = uVar4;
  FUN_8c02327c(ar4,ar5,ar6,ar7);
  uVar4 = (undefined4)((ulonglong)in_dr0 >> 0x20);
  uStack_10 = (undefined4)in_dr0;
  if (cVar7 == '\0') {
    uStack_60 = 0;
    uStack_58 = 0x3f800000;
    uStack_10 = uVar4;
  }
  else {
    auStack_54[0] = 0x3f800000;
    uStack_58 = uStack_10;
    uStack_60 = uStack_10;
    uStack_c = uVar4;
  }
  uStack_5c = uStack_60;
  FUN_8c25cddc(auStack_54,ar5,ar6,ar7,in_fr4);
  if (cVar7 == '\0') {
    dVar2 = (double)CONCAT44(0x47800000,uStack_c);
  }
  else {
    dVar2 = 1.4411521878487204e+18;
  }
  if (cVar6 == '\0') {
    fVar1 = SUB84(dVar2,0) * (float)((ulonglong)dVar2 >> 0x20);
  }
  else {
    fVar1 = SUB84(dVar2 * dVar2,0);
  }
  if (cVar7 == '\0') {
    dVar2 = (double)CONCAT44(0x43b40000,fVar1);
  }
  else {
    dVar2 = -3.739346301775294e-250;
  }
  if (cVar6 == '\0') {
    ar7_00 = (int)(SUB84(dVar2,0) / (float)((ulonglong)dVar2 >> 0x20));
  }
  else {
    ar7_00 = (int)(dVar2 / dVar2);
  }
  if (cVar7 == '\0') {
    dVar2 = (double)CONCAT44(0x47800000,uStack_10);
  }
  else {
    dVar2 = 1.4411521878487204e+18;
  }
  if (cVar6 == '\0') {
    fVar1 = SUB84(dVar2,0) * (float)((ulonglong)dVar2 >> 0x20);
  }
  else {
    fVar1 = SUB84(dVar2 * dVar2,0);
  }
  if (cVar7 == '\0') {
    dVar2 = (double)CONCAT44(0x43b40000,fVar1);
  }
  else {
    dVar2 = -3.739346301775294e-250;
  }
  if (cVar6 == '\0') {
    ar6_01 = (int)(SUB84(dVar2,0) / (float)((ulonglong)dVar2 >> 0x20));
  }
  else {
    ar6_01 = (int)(dVar2 / dVar2);
  }
  if (cVar7 == '\0') {
    dVar2 = (double)CONCAT44(0x47800000,uStack_14);
  }
  else {
    dVar2 = 1.4411521878487204e+18;
  }
  if (cVar6 == '\0') {
    fVar1 = SUB84(dVar2,0) * (float)((ulonglong)dVar2 >> 0x20);
  }
  else {
    fVar1 = SUB84(dVar2 * dVar2,0);
  }
  if (cVar7 == '\0') {
    dVar2 = (double)CONCAT44(0x43b40000,fVar1);
  }
  else {
    dVar2 = -3.739346301775294e-250;
  }
  if (cVar6 == '\0') {
    iVar5 = (int)(SUB84(dVar2,0) / (float)((ulonglong)dVar2 >> 0x20));
  }
  else {
    iVar5 = (int)(dVar2 / dVar2);
  }
  FUN_8c256b0c(auStack_54,iVar5,ar6_01,ar7_00,in_fr4);
  if (cVar7 == '\0') {
    dVar2 = (double)CONCAT44(0x47800000,in_fr4);
  }
  else {
    dVar2 = 1.4411521878487204e+18;
  }
  if (cVar6 == '\0') {
    fVar1 = SUB84(dVar2,0) * (float)((ulonglong)dVar2 >> 0x20);
  }
  else {
    fVar1 = SUB84(dVar2 * dVar2,0);
  }
  if (cVar7 == '\0') {
    dVar2 = (double)CONCAT44(0x43b40000,fVar1);
  }
  else {
    dVar2 = -3.739346301775294e-250;
  }
  if (cVar6 == '\0') {
    iVar5 = (int)(SUB84(dVar2,0) / (float)((ulonglong)dVar2 >> 0x20));
  }
  else {
    iVar5 = (int)(dVar2 / dVar2);
  }
  FUN_8c256ce0(auStack_54,iVar5,ar6_01,ar7_00,in_fr4);
  ar6_00 = auStack_6c;
  ar5_00 = &uStack_60;
  FUN_8c21279c(auStack_54,ar5_00,ar6_00,ar7_00,in_fr4);
  Vec3_ctor_zero(auStack_7c,ar5_00,ar6_00,ar7_00);
  if (cVar7 != '\0') {
    uStack_70 = uStack_60;
  }
  Vec3_ctor_copy(in_stack_00000000,auStack_7c,ar6_00,ar7_00);
  Vec3_dtor(auStack_7c,0xffffffff,ar6_00,ar7_00);
  object_dtor_delete(&uStack_14,0xffffffff,ar6_00,ar7_00);
  return 0;
}

__asm__(".globl _FUN_8c0238b4\n.set _FUN_8c0238b4, _FUN_8c0238b4_def\n");
