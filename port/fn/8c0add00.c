#include "../decls.h"
undefined4 FUN_8c0add00_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 ar5_00;
  undefined4 uVar3;
  int iVar4;
  float fVar5;
  double dVar6;
  float fVar7;
  int ar7_00;
  int ar6_00;
  int ar5_01;
  char cVar8;
  char cVar9;
  undefined4 in_stack_ffffffd4;
  undefined4 uStack_20;
  
  cVar9 = '\0';
  cVar8 = '\0';
  iVar4 = *(int *)(ar4 + 0x328);
  FUN_8c01538c(iVar4 + 0x78,ar5,ar6,ar7);
  FUN_8c256328(0,ar5,ar6,ar7,in_stack_ffffffd4);
  if (cVar9 == '\0') {
    dVar6 = (double)CONCAT44(0x47800000,*(undefined4 *)(ar4 + 0x58));
  }
  else {
    dVar6 = 1.4411521878487204e+18;
  }
  if (cVar8 == '\0') {
    fVar5 = SUB84(dVar6,0) * (float)((ulonglong)dVar6 >> 0x20);
  }
  else {
    fVar5 = SUB84(dVar6 * dVar6,0);
  }
  if (cVar9 == '\0') {
    dVar6 = (double)CONCAT44(0x43b40000,fVar5);
  }
  else {
    dVar6 = 21990236992512.0;
  }
  if (cVar8 == '\0') {
    ar7_00 = (int)(SUB84(dVar6,0) / (float)((ulonglong)dVar6 >> 0x20));
  }
  else {
    ar7_00 = (int)(dVar6 / dVar6);
  }
  if (cVar9 == '\0') {
    dVar6 = (double)CONCAT44(0x47800000,*(undefined4 *)(ar4 + 0x54));
  }
  else {
    dVar6 = 1.4411521878487204e+18;
  }
  if (cVar8 == '\0') {
    fVar5 = SUB84(dVar6,0) * (float)((ulonglong)dVar6 >> 0x20);
  }
  else {
    fVar5 = SUB84(dVar6 * dVar6,0);
  }
  if (cVar9 == '\0') {
    dVar6 = (double)CONCAT44(0x43b40000,fVar5);
  }
  else {
    dVar6 = 21990236992512.0;
  }
  if (cVar8 == '\0') {
    ar6_00 = (int)(SUB84(dVar6,0) / (float)((ulonglong)dVar6 >> 0x20));
  }
  else {
    ar6_00 = (int)(dVar6 / dVar6);
  }
  if (cVar9 == '\0') {
    dVar6 = (double)CONCAT44(0x42b40000,*(undefined4 *)(ar4 + 0x50));
  }
  else {
    dVar6 = -3.739346291369057e-250;
  }
  if (cVar8 == '\0') {
    fVar5 = SUB84(dVar6,0) + (float)((ulonglong)dVar6 >> 0x20);
  }
  else {
    fVar5 = SUB84(dVar6 + dVar6,0);
  }
  if (cVar9 == '\0') {
    dVar6 = (double)CONCAT44(0x47800000,fVar5);
  }
  else {
    dVar6 = 1.4411521878487204e+18;
  }
  if (cVar8 == '\0') {
    fVar5 = SUB84(dVar6,0) * (float)((ulonglong)dVar6 >> 0x20);
  }
  else {
    fVar5 = SUB84(dVar6 * dVar6,0);
  }
  if (cVar9 == '\0') {
    dVar6 = (double)CONCAT44(0x43b40000,fVar5);
  }
  else {
    dVar6 = 21990236992512.0;
  }
  if (cVar8 == '\0') {
    fVar7 = (float)((ulonglong)dVar6 >> 0x20);
    fVar5 = SUB84(dVar6,0) / fVar7;
    dVar6 = (double)CONCAT44(fVar7,fVar5);
    ar5_01 = (int)fVar5;
  }
  else {
    dVar6 = dVar6 / dVar6;
    ar5_01 = (int)dVar6;
  }
  uStack_20 = (undefined4)((ulonglong)dVar6 >> 0x20);
  FUN_8c256b0c(0,ar5_01,ar6_00,ar7_00,in_stack_ffffffd4);
  uVar1 = FUN_8c015bb8(iVar4 + 0x70,ar5_01,ar6_00,ar7_00);
  iVar2 = FUN_8c026db0(*(undefined4 *)(ar4 + 0x30c),ar5_01,ar6_00,ar7_00);
  ar5_00 = deref_u32(*(int *)(iVar4 + 0xa0) + iVar2 * 4,ar5_01,ar6_00,ar7_00);
  iVar2 = FUN_8c026db0(*(undefined4 *)(ar4 + 0x30c),ar5_01,ar6_00,ar7_00);
  uVar3 = FUN_8c026d74(*(int *)(iVar4 + 0xa8) + iVar2 * 4,ar5_01,ar6_00,ar7_00);
  FUN_8c026d7c(*(undefined4 *)(ar4 + 0x30c),ar5_01,ar6_00,ar7_00);
  if (cVar9 == '\0') {
    uStack_20 = uVar3;
  }
  FUN_8c21bbb0(uVar1,ar5_00,uStack_20,ar7_00,iVar2);
  if ((*(int *)(ar4 + 0x88c) != 0) && (*(int *)(ar4 + 0x890) != 0)) {
    FUN_8c25b3ec(*(undefined4 *)(ar4 + 0x890),ar5_00,uStack_20,ar7_00);
    FUN_8c25b5d0(0,ar5_00,uStack_20,ar7_00,iVar2);
    FUN_8c219a9a(*(undefined4 *)(ar4 + 0x88c),ar5_00,uStack_20,ar7_00);
  }
  uVar1 = FUN_8c256210(1,ar5_00,uStack_20,ar7_00);
  return uVar1;
}

__asm__(".globl _FUN_8c0add00\n.set _FUN_8c0add00, _FUN_8c0add00_def\n");
