#include "../decls.h"
int FUN_8c09e2e8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int *piVar1;
  int iVar2;
  undefined4 ar5_00;
  undefined4 uVar3;
  undefined4 uVar4;
  float fVar5;
  double dVar6;
  float fVar7;
  int iVar8;
  int ar6_00;
  int ar5_01;
  char cVar9;
  char cVar10;
  undefined4 in_stack_ffffffb8;
  undefined4 uStack_2c;
  
  cVar10 = '\0';
  cVar9 = '\0';
  _DAT_8c284fb8 = get_field_24c_09e1f8(ar4 + 0xcc4,ar5,ar6,ar7);
  piVar1 = (int *)get_field_4_0253e4(*(int *)(ar4 + 0x328) + 0x78,ar5,ar6,ar7);
  uVar4 = *(undefined4 *)(*piVar1 + 8);
  *(undefined4 *)(*piVar1 + 8) = *(undefined4 *)(_DAT_8c284fb8 * 0xc + *piVar1 + 8);
  *(undefined4 *)(_DAT_8c284fb8 * 0xc + *piVar1 + 8) = uVar4;
  FUN_8c01538c(*(int *)(ar4 + 0x328) + 0x78,ar5,ar6,ar7);
  FUN_8c256328(0,ar5,ar6,ar7,in_stack_ffffffb8);
  FUN_8c25b5d0(0,ar5,ar6,ar7,in_stack_ffffffb8);
  if (cVar10 == '\0') {
    dVar6 = (double)CONCAT44(0x47800000,*(undefined4 *)(ar4 + 0x58));
  }
  else {
    dVar6 = 1.4411521878487204e+18;
  }
  if (cVar9 == '\0') {
    fVar5 = SUB84(dVar6,0) * (float)((ulonglong)dVar6 >> 0x20);
  }
  else {
    fVar5 = SUB84(dVar6 * dVar6,0);
  }
  if (cVar10 == '\0') {
    dVar6 = (double)CONCAT44(0x43b40000,fVar5);
  }
  else {
    dVar6 = -3.739346301775294e-250;
  }
  if (cVar9 == '\0') {
    iVar8 = (int)(SUB84(dVar6,0) / (float)((ulonglong)dVar6 >> 0x20));
  }
  else {
    iVar8 = (int)(dVar6 / dVar6);
  }
  if (cVar10 == '\0') {
    dVar6 = (double)CONCAT44(0x47800000,*(undefined4 *)(ar4 + 0x54));
  }
  else {
    dVar6 = 1.4411521878487204e+18;
  }
  if (cVar9 == '\0') {
    fVar5 = SUB84(dVar6,0) * (float)((ulonglong)dVar6 >> 0x20);
  }
  else {
    fVar5 = SUB84(dVar6 * dVar6,0);
  }
  if (cVar10 == '\0') {
    dVar6 = (double)CONCAT44(0x43b40000,fVar5);
  }
  else {
    dVar6 = -3.739346301775294e-250;
  }
  if (cVar9 == '\0') {
    ar6_00 = (int)(SUB84(dVar6,0) / (float)((ulonglong)dVar6 >> 0x20));
  }
  else {
    ar6_00 = (int)(dVar6 / dVar6);
  }
  if (cVar10 == '\0') {
    dVar6 = (double)CONCAT44(0x47800000,*(undefined4 *)(ar4 + 0x50));
  }
  else {
    dVar6 = 1.4411521878487204e+18;
  }
  if (cVar9 == '\0') {
    fVar5 = SUB84(dVar6,0) * (float)((ulonglong)dVar6 >> 0x20);
  }
  else {
    fVar5 = SUB84(dVar6 * dVar6,0);
  }
  if (cVar10 == '\0') {
    dVar6 = (double)CONCAT44(0x43b40000,fVar5);
  }
  else {
    dVar6 = -3.739346301775294e-250;
  }
  if (cVar9 == '\0') {
    fVar7 = (float)((ulonglong)dVar6 >> 0x20);
    fVar5 = SUB84(dVar6,0) / fVar7;
    dVar6 = (double)CONCAT44(fVar7,fVar5);
    ar5_01 = (int)fVar5;
  }
  else {
    dVar6 = dVar6 / dVar6;
    ar5_01 = (int)dVar6;
  }
  uStack_2c = (undefined4)((ulonglong)dVar6 >> 0x20);
  FUN_8c256b0c(0,ar5_01,ar6_00,iVar8,in_stack_ffffffb8);
  FUN_8c256fec(0,ar5_01,ar6_00,iVar8,in_stack_ffffffb8);
  uVar4 = FUN_8c015bb8(*(int *)(ar4 + 0x328) + 0x70,ar5_01,ar6_00,iVar8);
  iVar2 = FUN_8c026db0(*(undefined4 *)(ar4 + 0x30c),ar5_01,ar6_00,iVar8);
  ar5_00 = deref_u32(*(int *)(*(int *)(ar4 + 0x328) + 0xa0) + iVar2 * 4,ar5_01,ar6_00,iVar8);
  iVar2 = FUN_8c026db0(*(undefined4 *)(ar4 + 0x30c),ar5_01,ar6_00,iVar8);
  uVar3 = FUN_8c026d74(*(int *)(*(int *)(ar4 + 0x328) + 0xa8) + iVar2 * 4,ar5_01,ar6_00,iVar8);
  FUN_8c026d7c(*(undefined4 *)(ar4 + 0x30c),ar5_01,ar6_00,iVar8);
  if (cVar10 == '\0') {
    uStack_2c = uVar3;
  }
  FUN_8c21bbb0(uVar4,ar5_00,uStack_2c,iVar8,in_stack_ffffffb8);
  FUN_8c256210(1,ar5_00,uStack_2c,iVar8);
  uVar4 = *(undefined4 *)(_DAT_8c284fb8 * 0xc + *piVar1 + 8);
  *(undefined4 *)(_DAT_8c284fb8 * 0xc + *piVar1 + 8) = *(undefined4 *)(*piVar1 + 8);
  iVar8 = *piVar1;
  *(undefined4 *)(iVar8 + 8) = uVar4;
  return iVar8;
}

__asm__(".globl _FUN_8c09e2e8\n.set _FUN_8c09e2e8, _FUN_8c09e2e8_def\n");
