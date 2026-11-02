#include "../decls.h"
undefined4 FUN_8c023668_def(undefined8 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 s0)

{
  undefined4 uVar1;
  undefined4 *ar6_00;
  float fVar2;
  double dVar3;
  undefined4 in_fr5;
  undefined4 in_fr4;
  undefined4 in_fr6;
  int ar7_00;
  int ar6_01;
  int ar5_00;
  char cVar4;
  char cVar5;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 auStack_48 [68];
  
  cVar5 = '\0';
  cVar4 = '\0';
  uStack_54 = *(undefined4 *)ar4;
  uStack_50 = *(undefined4 *)((int)ar4 + 4);
  uStack_4c = *(undefined4 *)(ar4 + 1);
  FUN_8c25cddc(auStack_48,ar5,ar6,ar7,in_fr4);
  if (cVar5 == '\0') {
    dVar3 = (double)CONCAT44(0x47800000,in_fr6);
  }
  else {
    dVar3 = 1.4411521878487204e+18;
  }
  if (cVar4 == '\0') {
    fVar2 = SUB84(dVar3,0) * (float)((ulonglong)dVar3 >> 0x20);
  }
  else {
    fVar2 = SUB84(dVar3 * dVar3,0);
  }
  if (cVar5 == '\0') {
    dVar3 = (double)CONCAT44(0x43b40000,fVar2);
  }
  else {
    dVar3 = -3.739346301775294e-250;
  }
  if (cVar4 == '\0') {
    ar7_00 = (int)(SUB84(dVar3,0) / (float)((ulonglong)dVar3 >> 0x20));
  }
  else {
    ar7_00 = (int)(dVar3 / dVar3);
  }
  if (cVar5 == '\0') {
    dVar3 = (double)CONCAT44(0x47800000,in_fr5);
  }
  else {
    dVar3 = 1.4411521878487204e+18;
  }
  if (cVar4 == '\0') {
    fVar2 = SUB84(dVar3,0) * (float)((ulonglong)dVar3 >> 0x20);
  }
  else {
    fVar2 = SUB84(dVar3 * dVar3,0);
  }
  if (cVar5 == '\0') {
    dVar3 = (double)CONCAT44(0x43b40000,fVar2);
  }
  else {
    dVar3 = -3.739346301775294e-250;
  }
  if (cVar4 == '\0') {
    ar6_01 = (int)(SUB84(dVar3,0) / (float)((ulonglong)dVar3 >> 0x20));
  }
  else {
    ar6_01 = (int)(dVar3 / dVar3);
  }
  if (cVar5 == '\0') {
    dVar3 = (double)CONCAT44(0x47800000,in_fr4);
  }
  else {
    dVar3 = 1.4411521878487204e+18;
  }
  if (cVar4 == '\0') {
    fVar2 = SUB84(dVar3,0) * (float)((ulonglong)dVar3 >> 0x20);
  }
  else {
    fVar2 = SUB84(dVar3 * dVar3,0);
  }
  if (cVar5 == '\0') {
    dVar3 = (double)CONCAT44(0x43b40000,fVar2);
  }
  else {
    dVar3 = -3.739346301775294e-250;
  }
  if (cVar4 == '\0') {
    ar5_00 = (int)(SUB84(dVar3,0) / (float)((ulonglong)dVar3 >> 0x20));
  }
  else {
    ar5_00 = (int)(dVar3 / dVar3);
  }
  FUN_8c256b0c(auStack_48,ar5_00,ar6_01,ar7_00,in_fr4);
  ar6_00 = &uStack_60;
  FUN_8c21279c(auStack_48,&uStack_54,ar6_00,ar7_00,in_fr4);
  if (cVar5 == '\0') {
    *(undefined4 *)ar4 = uStack_60;
    *(undefined4 *)((int)ar4 + 4) = uStack_5c;
    *(undefined4 *)(ar4 + 1) = uStack_58;
  }
  else {
    *ar4 = CONCAT44(uStack_5c,uStack_60);
    *(ulonglong *)((int)ar4 + 4) = CONCAT44(uStack_58,uStack_5c);
    ar4[1] = CONCAT44(uStack_54,uStack_58);
  }
  uVar1 = Vec3_ctor_copy(s0,ar4,ar6_00,ar7_00);
  return uVar1;
}

__asm__(".globl _FUN_8c023668\n.set _FUN_8c023668, _FUN_8c023668_def\n");
