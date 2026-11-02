#include "../decls.h"
int FUN_8c09dec8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  float fVar7;
  double dVar8;
  float fVar9;
  int iVar10;
  int ar5_00;
  char cVar11;
  char cVar12;
  undefined4 in_stack_ffffff8c;
  undefined4 uStack_4c;
  undefined4 uStack_34;
  
  cVar12 = '\0';
  cVar11 = '\0';
  iVar1 = (**(code **)(*(int *)(ar4 + 8) + 0xb4))(ar4,ar5,ar6,ar7);
  if (iVar1 == 0) {
    FUN_8c233dac(ar4 + 0x438,ar5,ar6,ar7);
  }
  _DAT_8c284fb4 = get_field_24c_09e1f8(ar4 + 0xcc4,ar5,ar6,ar7);
  piVar2 = (int *)get_field_4_0253e4(*(int *)(ar4 + 0x328) + 0x78,ar5,ar6,ar7);
  uVar6 = *(undefined4 *)(*piVar2 + 8);
  *(undefined4 *)(*piVar2 + 8) = *(undefined4 *)(_DAT_8c284fb4 * 0xc + *piVar2 + 8);
  *(undefined4 *)(_DAT_8c284fb4 * 0xc + *piVar2 + 8) = uVar6;
  FUN_8c01538c(*(int *)(ar4 + 0x328) + 0x78,ar5,ar6,ar7);
  FUN_8c256328(0,ar5,ar6,ar7,in_stack_ffffff8c);
  FUN_8c25b5d0(0,ar5,ar6,ar7,in_stack_ffffff8c);
  if (cVar12 == '\0') {
    dVar8 = (double)CONCAT44(0x47800000,*(undefined4 *)(ar4 + 0x58));
  }
  else {
    dVar8 = 1.4411521878487204e+18;
  }
  if (cVar11 == '\0') {
    fVar7 = SUB84(dVar8,0) * (float)((ulonglong)dVar8 >> 0x20);
  }
  else {
    fVar7 = SUB84(dVar8 * dVar8,0);
  }
  if (cVar12 == '\0') {
    dVar8 = (double)CONCAT44(0x43b40000,fVar7);
  }
  else {
    dVar8 = -3.739346301775294e-250;
  }
  if (cVar11 == '\0') {
    iVar1 = (int)(SUB84(dVar8,0) / (float)((ulonglong)dVar8 >> 0x20));
  }
  else {
    iVar1 = (int)(dVar8 / dVar8);
  }
  if (cVar12 == '\0') {
    dVar8 = (double)CONCAT44(0x47800000,*(undefined4 *)(ar4 + 0x54));
  }
  else {
    dVar8 = 1.4411521878487204e+18;
  }
  if (cVar11 == '\0') {
    fVar7 = SUB84(dVar8,0) * (float)((ulonglong)dVar8 >> 0x20);
  }
  else {
    fVar7 = SUB84(dVar8 * dVar8,0);
  }
  if (cVar12 == '\0') {
    dVar8 = (double)CONCAT44(0x43b40000,fVar7);
  }
  else {
    dVar8 = -3.739346301775294e-250;
  }
  if (cVar11 == '\0') {
    iVar10 = (int)(SUB84(dVar8,0) / (float)((ulonglong)dVar8 >> 0x20));
  }
  else {
    iVar10 = (int)(dVar8 / dVar8);
  }
  if (cVar12 == '\0') {
    dVar8 = (double)CONCAT44(0x47800000,*(undefined4 *)(ar4 + 0x50));
  }
  else {
    dVar8 = 1.4411521878487204e+18;
  }
  if (cVar11 == '\0') {
    fVar7 = SUB84(dVar8,0) * (float)((ulonglong)dVar8 >> 0x20);
  }
  else {
    fVar7 = SUB84(dVar8 * dVar8,0);
  }
  if (cVar12 == '\0') {
    dVar8 = (double)CONCAT44(0x43b40000,fVar7);
  }
  else {
    dVar8 = -3.739346301775294e-250;
  }
  if (cVar11 == '\0') {
    fVar9 = (float)((ulonglong)dVar8 >> 0x20);
    fVar7 = SUB84(dVar8,0) / fVar9;
    dVar8 = (double)CONCAT44(fVar9,fVar7);
    ar5_00 = (int)fVar7;
  }
  else {
    dVar8 = dVar8 / dVar8;
    ar5_00 = (int)dVar8;
  }
  uStack_4c = (undefined4)((ulonglong)dVar8 >> 0x20);
  FUN_8c256b0c(0,ar5_00,iVar10,iVar1,in_stack_ffffff8c);
  FUN_8c256fec(0,ar5_00,iVar10,iVar1,in_stack_ffffff8c);
  iVar3 = (**(code **)(*(int *)(ar4 + 8) + 0xb4))(ar4,ar5_00,iVar10,iVar1);
  if (iVar3 == 0) {
    uStack_34 = uStack_4c;
    uVar4 = FUN_8c015bb8(*(int *)(ar4 + 0x328) + 0x70,ar5_00,iVar10,iVar1);
    iVar3 = FUN_8c026db0(*(undefined4 *)(ar4 + 0x30c),ar5_00,iVar10,iVar1);
    uVar6 = deref_u32(*(int *)(*(int *)(ar4 + 0x328) + 0xa0) + iVar3 * 4,ar5_00,iVar10,iVar1);
    iVar3 = FUN_8c026db0(*(undefined4 *)(ar4 + 0x30c),ar5_00,iVar10,iVar1);
    uVar5 = FUN_8c026d74(*(int *)(*(int *)(ar4 + 0x328) + 0xa8) + iVar3 * 4,ar5_00,iVar10,iVar1);
    FUN_8c026d7c(*(undefined4 *)(ar4 + 0x30c),ar5_00,iVar10,iVar1);
    if (cVar12 == '\0') {
      uStack_34 = uVar5;
    }
    FUN_8c21bbb0(uVar4,uVar6,uStack_34,iVar1,in_stack_ffffff8c);
  }
  else {
    uVar4 = FUN_8c015bb8(*(int *)(ar4 + 0x328) + 0x70,ar5_00,iVar10,iVar1);
    iVar3 = FUN_8c026db0(*(undefined4 *)(ar4 + 0x30c),ar5_00,iVar10,iVar1);
    uVar6 = deref_u32(*(int *)(*(int *)(ar4 + 0x328) + 0xa0) + iVar3 * 4,ar5_00,iVar10,iVar1);
    iVar3 = FUN_8c026db0(*(undefined4 *)(ar4 + 0x30c),ar5_00,iVar10,iVar1);
    uVar5 = FUN_8c026d74(*(int *)(*(int *)(ar4 + 0x328) + 0xa8) + iVar3 * 4,ar5_00,iVar10,iVar1);
    FUN_8c026d7c(*(undefined4 *)(ar4 + 0x30c),ar5_00,iVar10,iVar1);
    if (cVar12 == '\0') {
      uStack_4c = uVar5;
    }
    FUN_8c21af26(uVar4,uVar6,uStack_4c,iVar1);
    uStack_34 = uStack_4c;
  }
  FUN_8c256210(1,uVar6,uStack_34,iVar1);
  uVar4 = *(undefined4 *)(_DAT_8c284fb4 * 0xc + *piVar2 + 8);
  *(undefined4 *)(_DAT_8c284fb4 * 0xc + *piVar2 + 8) = *(undefined4 *)(*piVar2 + 8);
  *(undefined4 *)(*piVar2 + 8) = uVar4;
  iVar10 = (**(code **)(*(int *)(ar4 + 8) + 0xb4))(ar4,uVar6,uStack_34,iVar1);
  if (iVar10 == 0) {
    iVar10 = FUN_8c233dac(&DAT_8c13aad4,uVar6,uStack_34,iVar1);
  }
  return iVar10;
}

__asm__(".globl _FUN_8c09dec8\n.set _FUN_8c09dec8, _FUN_8c09dec8_def\n");
