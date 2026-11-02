#include "../decls.h"
undefined4 FUN_8c023570_def(undefined8 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 s0)

{
  undefined1 *ar6_00;
  float fVar1;
  double dVar2;
  undefined4 in_fr5;
  undefined4 in_fr4;
  undefined4 in_fr6;
  int ar7_00;
  int ar6_01;
  int ar5_00;
  char cVar3;
  char cVar4;
  undefined1 auStack_70 [12];
  undefined4 uStack_64;
  undefined1 auStack_60 [12];
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 auStack_48 [17];
  
  cVar4 = '\0';
  cVar3 = '\0';
  Vec3_ctor_zero(auStack_70,ar5,ar6,ar7);
  if (cVar4 == '\0') {
    uStack_54 = *(undefined4 *)ar4;
    uStack_50 = *(undefined4 *)((int)ar4 + 4);
    uStack_4c = *(undefined4 *)(ar4 + 1);
  }
  else {
    uStack_54 = (undefined4)*ar4;
    uStack_50 = (undefined4)*(undefined8 *)((int)ar4 + 4);
    uStack_4c = (undefined4)ar4[1];
    auStack_48[0] = (undefined4)((ulonglong)ar4[1] >> 0x20);
  }
  FUN_8c25cddc(auStack_48,ar5,ar6,ar7,in_fr4);
  if (cVar4 == '\0') {
    dVar2 = (double)CONCAT44(0x47800000,in_fr6);
  }
  else {
    dVar2 = 1.4411521878487204e+18;
  }
  if (cVar3 == '\0') {
    fVar1 = SUB84(dVar2,0) * (float)((ulonglong)dVar2 >> 0x20);
  }
  else {
    fVar1 = SUB84(dVar2 * dVar2,0);
  }
  if (cVar4 == '\0') {
    dVar2 = (double)CONCAT44(0x43b40000,fVar1);
  }
  else {
    dVar2 = -3.739346301775294e-250;
  }
  if (cVar3 == '\0') {
    ar7_00 = (int)(SUB84(dVar2,0) / (float)((ulonglong)dVar2 >> 0x20));
  }
  else {
    ar7_00 = (int)(dVar2 / dVar2);
  }
  if (cVar4 == '\0') {
    dVar2 = (double)CONCAT44(0x47800000,in_fr5);
  }
  else {
    dVar2 = 1.4411521878487204e+18;
  }
  if (cVar3 == '\0') {
    fVar1 = SUB84(dVar2,0) * (float)((ulonglong)dVar2 >> 0x20);
  }
  else {
    fVar1 = SUB84(dVar2 * dVar2,0);
  }
  if (cVar4 == '\0') {
    dVar2 = (double)CONCAT44(0x43b40000,fVar1);
  }
  else {
    dVar2 = -3.739346301775294e-250;
  }
  if (cVar3 == '\0') {
    ar6_01 = (int)(SUB84(dVar2,0) / (float)((ulonglong)dVar2 >> 0x20));
  }
  else {
    ar6_01 = (int)(dVar2 / dVar2);
  }
  if (cVar4 == '\0') {
    dVar2 = (double)CONCAT44(0x47800000,in_fr4);
  }
  else {
    dVar2 = 1.4411521878487204e+18;
  }
  if (cVar3 == '\0') {
    fVar1 = SUB84(dVar2,0) * (float)((ulonglong)dVar2 >> 0x20);
  }
  else {
    fVar1 = SUB84(dVar2 * dVar2,0);
  }
  if (cVar4 == '\0') {
    dVar2 = (double)CONCAT44(0x43b40000,fVar1);
  }
  else {
    dVar2 = -3.739346301775294e-250;
  }
  if (cVar3 == '\0') {
    ar5_00 = (int)(SUB84(dVar2,0) / (float)((ulonglong)dVar2 >> 0x20));
  }
  else {
    ar5_00 = (int)(dVar2 / dVar2);
  }
  FUN_8c256b0c(auStack_48,ar5_00,ar6_01,ar7_00,in_fr4);
  ar6_00 = auStack_60;
  FUN_8c21279c(auStack_48,&uStack_54,ar6_00,ar7_00,in_fr4);
  if (cVar4 != '\0') {
    uStack_64 = uStack_54;
  }
  Vec3_ctor_copy(s0,auStack_70,ar6_00,ar7_00);
  Vec3_dtor(auStack_70,0xffffffff,ar6_00,ar7_00);
  return 0;
}

__asm__(".globl _FUN_8c023570\n.set _FUN_8c023570, _FUN_8c023570_def\n");
