#include "../decls.h"
undefined4 FUN_8c09e204_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  float fVar3;
  double dVar4;
  int ar6_00;
  int ar5_00;
  char cVar5;
  char cVar6;
  undefined4 in_stack_ffffffec;
  
  cVar6 = '\0';
  cVar5 = '\0';
  iVar2 = ar4 + 0x5c;
  FUN_8c023e24(&stack0xffffffec,iVar2,ar6,ar7);
  FUN_8c08a9b8(ar4 + 0x5c,iVar2,ar6,ar7);
  FUN_8c256328(0,iVar2,ar6,ar7,in_stack_ffffffec);
  if (cVar6 == '\0') {
    dVar4 = (double)CONCAT44(0x47800000,*(undefined4 *)(ar4 + 0x58));
  }
  else {
    dVar4 = 1.4411521878487204e+18;
  }
  if (cVar5 == '\0') {
    fVar3 = SUB84(dVar4,0) * (float)((ulonglong)dVar4 >> 0x20);
  }
  else {
    fVar3 = SUB84(dVar4 * dVar4,0);
  }
  if (cVar6 == '\0') {
    dVar4 = (double)CONCAT44(0x43b40000,fVar3);
  }
  else {
    dVar4 = -3.739346301775294e-250;
  }
  if (cVar5 == '\0') {
    iVar2 = (int)(SUB84(dVar4,0) / (float)((ulonglong)dVar4 >> 0x20));
  }
  else {
    iVar2 = (int)(dVar4 / dVar4);
  }
  if (cVar6 == '\0') {
    dVar4 = (double)CONCAT44(0x47800000,*(undefined4 *)(ar4 + 0x54));
  }
  else {
    dVar4 = 1.4411521878487204e+18;
  }
  if (cVar5 == '\0') {
    fVar3 = SUB84(dVar4,0) * (float)((ulonglong)dVar4 >> 0x20);
  }
  else {
    fVar3 = SUB84(dVar4 * dVar4,0);
  }
  if (cVar6 == '\0') {
    dVar4 = (double)CONCAT44(0x43b40000,fVar3);
  }
  else {
    dVar4 = -3.739346301775294e-250;
  }
  if (cVar5 == '\0') {
    ar6_00 = (int)(SUB84(dVar4,0) / (float)((ulonglong)dVar4 >> 0x20));
  }
  else {
    ar6_00 = (int)(dVar4 / dVar4);
  }
  if (cVar6 == '\0') {
    dVar4 = (double)CONCAT44(0x47800000,*(undefined4 *)(ar4 + 0x50));
  }
  else {
    dVar4 = 1.4411521878487204e+18;
  }
  if (cVar5 == '\0') {
    fVar3 = SUB84(dVar4,0) * (float)((ulonglong)dVar4 >> 0x20);
  }
  else {
    fVar3 = SUB84(dVar4 * dVar4,0);
  }
  if (cVar6 == '\0') {
    dVar4 = (double)CONCAT44(0x43b40000,fVar3);
  }
  else {
    dVar4 = -3.739346301775294e-250;
  }
  if (cVar5 == '\0') {
    ar5_00 = (int)(SUB84(dVar4,0) / (float)((ulonglong)dVar4 >> 0x20));
  }
  else {
    ar5_00 = (int)(dVar4 / dVar4);
  }
  FUN_8c256b0c(0,ar5_00,ar6_00,iVar2,in_stack_ffffffec);
  FUN_8c256fec(0,ar5_00,ar6_00,iVar2,in_stack_ffffffec);
  (**(code **)(*(int *)(ar4 + 8) + 0x3c))(ar4,ar5_00,ar6_00,iVar2);
  FUN_8c256210(1,ar5_00,ar6_00,iVar2);
  FUN_8c023e04(ar4 + 0x5c,&stack0xffffffec,ar6_00,iVar2);
  uVar1 = free_if_nonnull_wrap_016ac4(&stack0xffffffec,0xffffffff,ar6_00,iVar2);
  return uVar1;
}

__asm__(".globl _FUN_8c09e204\n.set _FUN_8c09e204, _FUN_8c09e204_def\n");
