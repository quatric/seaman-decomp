#include "../decls.h"
undefined4 FUN_8c09aad0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 ar5_00;
  undefined4 ar6_00;
  float fVar2;
  double dVar3;
  int ar7_00;
  int ar6_01;
  int ar5_01;
  char cVar4;
  char cVar5;
  undefined4 in_stack_ffffffec;
  
  cVar5 = '\0';
  cVar4 = '\0';
  FUN_8c01538c(*(int *)(ar4 + 0x328) + 0x78,ar5,ar6,ar7);
  FUN_8c256328(0,ar5,ar6,ar7,in_stack_ffffffec);
  FUN_8c25b5d0(0,ar5,ar6,ar7,in_stack_ffffffec);
  if (cVar5 == '\0') {
    dVar3 = (double)CONCAT44(0x47800000,*(undefined4 *)(ar4 + 0x58));
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
    dVar3 = (double)CONCAT44(0x47800000,*(undefined4 *)(ar4 + 0x54));
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
    dVar3 = (double)CONCAT44(0x47800000,*(undefined4 *)(ar4 + 0x50));
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
    ar5_01 = (int)(SUB84(dVar3,0) / (float)((ulonglong)dVar3 >> 0x20));
  }
  else {
    ar5_01 = (int)(dVar3 / dVar3);
  }
  FUN_8c256b0c(0,ar5_01,ar6_01,ar7_00,in_stack_ffffffec);
  FUN_8c256fec(0,ar5_01,ar6_01,ar7_00,in_stack_ffffffec);
  uVar1 = FUN_8c015bb8(*(int *)(ar4 + 0x328) + 0x70,ar5_01,ar6_01,ar7_00);
  ar5_00 = deref_u32(*(undefined4 *)(*(int *)(ar4 + 0x328) + 0xa0),ar5_01,ar6_01,ar7_00);
  ar6_00 = FUN_8c026d74(*(undefined4 *)(*(int *)(ar4 + 0x328) + 0xa8),ar5_01,ar6_01,ar7_00);
  FUN_8c21bbb0(uVar1,ar5_00,ar6_00,ar7_00,ar6_00);
  uVar1 = FUN_8c256210(1,ar5_00,ar6_00,ar7_00);
  return uVar1;
}

__asm__(".globl _FUN_8c09aad0\n.set _FUN_8c09aad0, _FUN_8c09aad0_def\n");
