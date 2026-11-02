#include "../decls.h"
undefined4 Class_129938_m2_0171f4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar6_00;
  undefined4 ar7_00;
  float fVar1;
  double dVar2;
  int ar7_01;
  int iVar3;
  int ar5_00;
  char cVar4;
  char cVar5;
  int *in_stack_00000000;
  undefined1 auStack_ac [64];
  undefined1 auStack_6c [100];
  
  cVar5 = '\0';
  cVar4 = '\0';
  ar6_00 = ar6;
  ar7_00 = ar7;
  (**(code **)(*in_stack_00000000 + 0x38))(in_stack_00000000,auStack_6c,ar6,ar7);
  Vec3_assign(ar4 + 4,ar5,ar6_00,ar7_00);
  vec3_copy_8c023d8c(ar4 + 0x14,ar6,ar6_00,ar7_00);
  FUN_8c023e04(ar4 + 0x20,ar7,ar6_00,ar7_00);
  FUN_8c25cddc(auStack_ac,ar7,ar6_00,ar7_00,ar5);
  FUN_8c25b5d0(auStack_ac,ar7,ar6_00,ar7_00,ar5);
  if (cVar5 == '\0') {
    dVar2 = (double)CONCAT44(0x47800000,*(undefined4 *)(ar4 + 0x1c));
  }
  else {
    dVar2 = 1.4411521878487204e+18;
  }
  if (cVar4 == '\0') {
    fVar1 = SUB84(dVar2,0) * (float)((ulonglong)dVar2 >> 0x20);
  }
  else {
    fVar1 = SUB84(dVar2 * dVar2,0);
  }
  if (cVar5 == '\0') {
    dVar2 = (double)CONCAT44(0x43b40000,fVar1);
  }
  else {
    dVar2 = -3.739346301775294e-250;
  }
  if (cVar4 == '\0') {
    ar7_01 = (int)(SUB84(dVar2,0) / (float)((ulonglong)dVar2 >> 0x20));
  }
  else {
    ar7_01 = (int)(dVar2 / dVar2);
  }
  if (cVar5 == '\0') {
    dVar2 = (double)CONCAT44(0x47800000,*(undefined4 *)(ar4 + 0x18));
  }
  else {
    dVar2 = 1.4411521878487204e+18;
  }
  if (cVar4 == '\0') {
    fVar1 = SUB84(dVar2,0) * (float)((ulonglong)dVar2 >> 0x20);
  }
  else {
    fVar1 = SUB84(dVar2 * dVar2,0);
  }
  if (cVar5 == '\0') {
    dVar2 = (double)CONCAT44(0x43b40000,fVar1);
  }
  else {
    dVar2 = -3.739346301775294e-250;
  }
  if (cVar4 == '\0') {
    iVar3 = (int)(SUB84(dVar2,0) / (float)((ulonglong)dVar2 >> 0x20));
  }
  else {
    iVar3 = (int)(dVar2 / dVar2);
  }
  if (cVar5 == '\0') {
    dVar2 = (double)CONCAT44(0x47800000,*(undefined4 *)(ar4 + 0x14));
  }
  else {
    dVar2 = 1.4411521878487204e+18;
  }
  if (cVar4 == '\0') {
    fVar1 = SUB84(dVar2,0) * (float)((ulonglong)dVar2 >> 0x20);
  }
  else {
    fVar1 = SUB84(dVar2 * dVar2,0);
  }
  if (cVar5 == '\0') {
    dVar2 = (double)CONCAT44(0x43b40000,fVar1);
  }
  else {
    dVar2 = -3.739346301775294e-250;
  }
  if (cVar4 == '\0') {
    ar5_00 = (int)(SUB84(dVar2,0) / (float)((ulonglong)dVar2 >> 0x20));
  }
  else {
    ar5_00 = (int)(dVar2 / dVar2);
  }
  FUN_8c256b0c(auStack_ac,ar5_00,iVar3,ar7_01,ar5);
  FUN_8c256fec(auStack_ac,ar5_00,iVar3,ar7_01,ar5);
  for (iVar3 = 0; iVar3 < 8; iVar3 = iVar3 + 1) {
    FUN_8c212740(auStack_ac,auStack_6c + iVar3 * 0xc,iVar3 * 0xc + ar4 + 0x30,ar7_01,ar5);
  }
  return 8;
}

__asm__(".globl _Class_129938_m2_0171f4\n.set _Class_129938_m2_0171f4, _Class_129938_m2_0171f4_def\n");
