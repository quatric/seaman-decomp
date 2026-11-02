#include "../decls.h"
int FUN_8c026968_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  int iVar7;
  float fVar8;
  double dVar9;
  float fVar10;
  int iVar11;
  int iVar12;
  char cVar13;
  char cVar14;
  undefined4 in_stack_ffffff24;
  undefined2 uVar15;
  undefined4 uStack_b0;
  undefined4 uStack_94;
  undefined1 auStack_8c [64];
  undefined1 auStack_4c [68];
  
  uVar15 = (undefined2)((uint)in_stack_ffffff24 >> 0x10);
  cVar14 = '\0';
  cVar13 = '\0';
  FUN_8c233dac(ar4 + 0x438,ar5,ar6,ar7);
  uVar1 = FUN_8c02bef8(ar4 + 0x174,ar5,ar6,ar7);
  uVar6 = CONCAT22(uVar15,(short)uVar1);
  iVar7 = *(int *)(ar4 + 0x328) + (short)uVar1 * 0x124;
  FUN_8c25cddc(auStack_4c,ar5,ar6,ar7,uVar6);
  FUN_8c25cddc(auStack_8c,ar5,ar6,ar7,uVar6);
  FUN_8c01538c(*(undefined4 *)(ar4 + 0x42c),ar5,ar6,ar7);
  uVar1 = 0x40;
  iVar4 = _DAT_8c27d1ec * 0x40 + -0x73d83e14;
  FUN_8c013fb4((_DAT_8c27d1ec + 1) * 0x40 + -0x73d83e14,iVar4,0x40,ar7);
  _DAT_8c27d1ec = _DAT_8c27d1ec + 1;
  FUN_8c25b5d0(auStack_8c,iVar4,uVar1,ar7,uVar6);
  puVar5 = auStack_8c;
  FUN_8c255d6c(auStack_4c,puVar5,uVar1,ar7,uVar6);
  FUN_8c25cddc(auStack_8c,puVar5,uVar1,ar7,uVar6);
  if (cVar14 == '\0') {
    dVar9 = (double)CONCAT44(0x47800000,*(undefined4 *)(ar4 + 0x58));
  }
  else {
    dVar9 = 1.4411521878487204e+18;
  }
  if (cVar13 == '\0') {
    fVar8 = SUB84(dVar9,0) * (float)((ulonglong)dVar9 >> 0x20);
  }
  else {
    fVar8 = SUB84(dVar9 * dVar9,0);
  }
  if (cVar14 == '\0') {
    dVar9 = (double)CONCAT44(0x43b40000,fVar8);
  }
  else {
    dVar9 = -3.739346301775294e-250;
  }
  if (cVar13 == '\0') {
    iVar4 = (int)(SUB84(dVar9,0) / (float)((ulonglong)dVar9 >> 0x20));
  }
  else {
    iVar4 = (int)(dVar9 / dVar9);
  }
  if (cVar14 == '\0') {
    dVar9 = (double)CONCAT44(0x47800000,*(undefined4 *)(ar4 + 0x54));
  }
  else {
    dVar9 = 1.4411521878487204e+18;
  }
  if (cVar13 == '\0') {
    fVar8 = SUB84(dVar9,0) * (float)((ulonglong)dVar9 >> 0x20);
  }
  else {
    fVar8 = SUB84(dVar9 * dVar9,0);
  }
  if (cVar14 == '\0') {
    dVar9 = (double)CONCAT44(0x43b40000,fVar8);
  }
  else {
    dVar9 = -3.739346301775294e-250;
  }
  if (cVar13 == '\0') {
    iVar11 = (int)(SUB84(dVar9,0) / (float)((ulonglong)dVar9 >> 0x20));
  }
  else {
    iVar11 = (int)(dVar9 / dVar9);
  }
  if (cVar14 == '\0') {
    dVar9 = (double)CONCAT44(0x47800000,*(undefined4 *)(ar4 + 0x50));
  }
  else {
    dVar9 = 1.4411521878487204e+18;
  }
  if (cVar13 == '\0') {
    fVar8 = SUB84(dVar9,0) * (float)((ulonglong)dVar9 >> 0x20);
  }
  else {
    fVar8 = SUB84(dVar9 * dVar9,0);
  }
  if (cVar14 == '\0') {
    dVar9 = (double)CONCAT44(0x43b40000,fVar8);
  }
  else {
    dVar9 = -3.739346301775294e-250;
  }
  if (cVar13 == '\0') {
    iVar12 = (int)(SUB84(dVar9,0) / (float)((ulonglong)dVar9 >> 0x20));
  }
  else {
    iVar12 = (int)(dVar9 / dVar9);
  }
  FUN_8c256b0c(auStack_8c,iVar12,iVar11,iVar4,uVar6);
  puVar5 = auStack_8c;
  FUN_8c255d6c(auStack_4c,puVar5,iVar11,iVar4,uVar6);
  FUN_8c25cddc(auStack_8c,puVar5,iVar11,iVar4,uVar6);
  FUN_8c256fec(auStack_8c,puVar5,iVar11,iVar4,uVar6);
  puVar5 = auStack_8c;
  FUN_8c255d6c(auStack_4c,puVar5,iVar11,iVar4,uVar6);
  FUN_8c25cddc(auStack_8c,puVar5,iVar11,iVar4,uVar6);
  FUN_8c256fec(auStack_8c,puVar5,iVar11,iVar4,uVar6);
  puVar5 = auStack_8c;
  FUN_8c255d6c(auStack_4c,puVar5,iVar11,iVar4,uVar6);
  FUN_8c024378(auStack_4c,puVar5,iVar11,iVar4);
  FUN_8c256328(0,puVar5,iVar11,iVar4,uVar6);
  FUN_8c25b5d0(0,puVar5,iVar11,iVar4,uVar6);
  if (cVar14 == '\0') {
    dVar9 = (double)CONCAT44(0x47800000,*(undefined4 *)(ar4 + 0x58));
  }
  else {
    dVar9 = 1.4411521878487204e+18;
  }
  if (cVar13 == '\0') {
    fVar8 = SUB84(dVar9,0) * (float)((ulonglong)dVar9 >> 0x20);
  }
  else {
    fVar8 = SUB84(dVar9 * dVar9,0);
  }
  if (cVar14 == '\0') {
    dVar9 = (double)CONCAT44(0x43b40000,fVar8);
  }
  else {
    dVar9 = -3.739346301775294e-250;
  }
  if (cVar13 == '\0') {
    iVar4 = (int)(SUB84(dVar9,0) / (float)((ulonglong)dVar9 >> 0x20));
  }
  else {
    iVar4 = (int)(dVar9 / dVar9);
  }
  if (cVar14 == '\0') {
    dVar9 = (double)CONCAT44(0x47800000,*(undefined4 *)(ar4 + 0x54));
  }
  else {
    dVar9 = 1.4411521878487204e+18;
  }
  if (cVar13 == '\0') {
    fVar8 = SUB84(dVar9,0) * (float)((ulonglong)dVar9 >> 0x20);
  }
  else {
    fVar8 = SUB84(dVar9 * dVar9,0);
  }
  if (cVar14 == '\0') {
    dVar9 = (double)CONCAT44(0x43b40000,fVar8);
  }
  else {
    dVar9 = -3.739346301775294e-250;
  }
  if (cVar13 == '\0') {
    iVar11 = (int)(SUB84(dVar9,0) / (float)((ulonglong)dVar9 >> 0x20));
  }
  else {
    iVar11 = (int)(dVar9 / dVar9);
  }
  if (cVar14 == '\0') {
    dVar9 = (double)CONCAT44(0x47800000,*(undefined4 *)(ar4 + 0x50));
  }
  else {
    dVar9 = 1.4411521878487204e+18;
  }
  if (cVar13 == '\0') {
    fVar8 = SUB84(dVar9,0) * (float)((ulonglong)dVar9 >> 0x20);
  }
  else {
    fVar8 = SUB84(dVar9 * dVar9,0);
  }
  if (cVar14 == '\0') {
    dVar9 = (double)CONCAT44(0x43b40000,fVar8);
  }
  else {
    dVar9 = -3.739346301775294e-250;
  }
  if (cVar13 == '\0') {
    fVar10 = (float)((ulonglong)dVar9 >> 0x20);
    fVar8 = SUB84(dVar9,0) / fVar10;
    dVar9 = (double)CONCAT44(fVar10,fVar8);
    iVar12 = (int)fVar8;
  }
  else {
    dVar9 = dVar9 / dVar9;
    iVar12 = (int)dVar9;
  }
  uStack_b0 = (undefined4)((ulonglong)dVar9 >> 0x20);
  FUN_8c256b0c(0,iVar12,iVar11,iVar4,uVar6);
  FUN_8c256fec(0,iVar12,iVar11,iVar4,uVar6);
  iVar2 = FUN_8c026db0(*(undefined4 *)(ar4 + 0x30c),iVar12,iVar11,iVar4);
  uVar1 = deref_u32(*(int *)(iVar7 + 0xa0) + iVar2 * 4,iVar12,iVar11,iVar4);
  FUN_8c026d7c(*(undefined4 *)(ar4 + 0x30c),iVar12,iVar11,iVar4);
  uStack_94 = uStack_b0;
  if (cVar14 == '\0') {
    uStack_94 = uVar1;
  }
  FUN_8c2540a0(uStack_94,iVar12,iVar11,iVar4,uVar6);
  iVar2 = FUN_8c026db0(*(undefined4 *)(ar4 + 0x30c),iVar12,iVar11,iVar4);
  puVar3 = (undefined4 *)deref_u32(*(int *)(iVar7 + 0xa0) + iVar2 * 4,iVar12,iVar11,iVar4);
  *(undefined4 *)(ar4 + 0x434) = *puVar3;
  iVar2 = FUN_8c026db0(*(undefined4 *)(ar4 + 0x30c),iVar12,iVar11,iVar4);
  iVar2 = FUN_8c026d74(*(int *)(iVar7 + 0xa8) + iVar2 * 4,iVar12,iVar11,iVar4);
  if (iVar2 == 0) {
    uVar1 = FUN_8c015bb8(iVar7 + 0x70,iVar12,iVar11,iVar4);
    uVar6 = 0;
    FUN_8c029510(ar4,uVar1,0,iVar4);
  }
  else {
    iVar2 = FUN_8c026db0(*(undefined4 *)(ar4 + 0x30c),iVar12,iVar11,iVar4);
    uVar1 = FUN_8c026d74(*(int *)(iVar7 + 0xa8) + iVar2 * 4,iVar12,iVar11,iVar4);
    FUN_8c026d7c(*(undefined4 *)(ar4 + 0x30c),iVar12,iVar11,iVar4);
    if (cVar14 == '\0') {
      uStack_b0 = uVar1;
    }
    uVar1 = 0x29;
    FUN_8c21f200(uStack_b0,0x29,iVar11,iVar4,uVar6);
    uVar1 = FUN_8c015bb8(iVar7 + 0x70,uVar1,iVar11,iVar4);
    uVar6 = 0;
    FUN_8c0297b8(ar4,uVar1,0,iVar4);
  }
  FUN_8c256210(1,uVar1,uVar6,iVar4);
  _DAT_8c27d1ec = _DAT_8c27d1ec + -1;
  FUN_8c233dac(&DAT_8c12fd7c,uVar1,uVar6,iVar4);
  iVar7 = *(int *)(ar4 + 0x474);
  if (iVar7 == 1) {
    iVar7 = FUN_8c02b058(ar4,uVar1,uVar6,iVar4);
  }
  return iVar7;
}

__asm__(".globl _FUN_8c026968\n.set _FUN_8c026968, _FUN_8c026968_def\n");
