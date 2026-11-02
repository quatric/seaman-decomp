#include "../decls.h"
undefined4 FUN_8c08b020_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  double dVar9;
  float fVar10;
  int ar7_00;
  int ar5_00;
  char cVar11;
  char cVar12;
  undefined4 in_stack_ffffff80;
  undefined2 uVar13;
  int iStack_4c;
  int iStack_34;
  
  uVar13 = (undefined2)((uint)in_stack_ffffff80 >> 0x10);
  cVar12 = '\0';
  cVar11 = '\0';
  iVar2 = get_field_124_027930(ar4 + 0x538,ar5,ar6,ar7);
  uVar3 = FUN_8c02bef8(ar4 + 0x174,ar5,ar6,ar7);
  sVar1 = (short)uVar3;
  uVar3 = CONCAT22(uVar13,sVar1);
  iVar7 = *(int *)(ar4 + 0x328) + sVar1 * 0x124;
  FUN_8c233dac(ar4 + 0x438,ar5,ar6,ar7);
  FUN_8c01538c(*(undefined4 *)(ar4 + 0x42c),ar5,ar6,ar7);
  FUN_8c256328(0,ar5,ar6,ar7,uVar3);
  FUN_8c25b5d0(0,ar5,ar6,ar7,uVar3);
  if (cVar12 == '\0') {
    dVar9 = (double)CONCAT44(0x47800000,*(undefined4 *)(ar4 + 0x58));
  }
  else {
    dVar9 = 1.4411521878487204e+18;
  }
  if (cVar11 == '\0') {
    fVar8 = SUB84(dVar9,0) * (float)((ulonglong)dVar9 >> 0x20);
  }
  else {
    fVar8 = SUB84(dVar9 * dVar9,0);
  }
  if (cVar12 == '\0') {
    dVar9 = (double)CONCAT44(0x43b40000,fVar8);
  }
  else {
    dVar9 = -3.739346301775294e-250;
  }
  if (cVar11 == '\0') {
    ar7_00 = (int)(SUB84(dVar9,0) / (float)((ulonglong)dVar9 >> 0x20));
  }
  else {
    ar7_00 = (int)(dVar9 / dVar9);
  }
  if (cVar12 == '\0') {
    dVar9 = (double)CONCAT44(0x47800000,*(undefined4 *)(ar4 + 0x54));
  }
  else {
    dVar9 = 1.4411521878487204e+18;
  }
  if (cVar11 == '\0') {
    fVar8 = SUB84(dVar9,0) * (float)((ulonglong)dVar9 >> 0x20);
  }
  else {
    fVar8 = SUB84(dVar9 * dVar9,0);
  }
  if (cVar12 == '\0') {
    dVar9 = (double)CONCAT44(0x43b40000,fVar8);
  }
  else {
    dVar9 = -3.739346301775294e-250;
  }
  if (cVar11 == '\0') {
    iStack_34 = (int)(SUB84(dVar9,0) / (float)((ulonglong)dVar9 >> 0x20));
  }
  else {
    iStack_34 = (int)(dVar9 / dVar9);
  }
  if (cVar12 == '\0') {
    dVar9 = (double)CONCAT44(0x47800000,*(undefined4 *)(ar4 + 0x50));
  }
  else {
    dVar9 = 1.4411521878487204e+18;
  }
  if (cVar11 == '\0') {
    fVar8 = SUB84(dVar9,0) * (float)((ulonglong)dVar9 >> 0x20);
  }
  else {
    fVar8 = SUB84(dVar9 * dVar9,0);
  }
  if (cVar12 == '\0') {
    dVar9 = (double)CONCAT44(0x43b40000,fVar8);
  }
  else {
    dVar9 = -3.739346301775294e-250;
  }
  if (cVar11 == '\0') {
    fVar10 = (float)((ulonglong)dVar9 >> 0x20);
    fVar8 = SUB84(dVar9,0) / fVar10;
    dVar9 = (double)CONCAT44(fVar10,fVar8);
    ar5_00 = (int)fVar8;
  }
  else {
    dVar9 = dVar9 / dVar9;
    ar5_00 = (int)dVar9;
  }
  iStack_4c = (int)((ulonglong)dVar9 >> 0x20);
  FUN_8c256b0c(0,ar5_00,iStack_34,ar7_00,uVar3);
  FUN_8c256fec(0,ar5_00,iStack_34,ar7_00,uVar3);
  if (sVar1 == 3) {
    uVar4 = FUN_8c015bb8(iVar7 + 0x70,ar5_00,iStack_34,ar7_00);
    iVar5 = FUN_8c026db0(*(undefined4 *)(ar4 + 0x30c),ar5_00,iStack_34,ar7_00);
    iVar5 = deref_u32(*(int *)(iVar7 + 0xa0) + iVar5 * 4,ar5_00,iStack_34,ar7_00);
    iVar6 = FUN_8c026db0(*(undefined4 *)(ar4 + 0x30c),ar5_00,iStack_34,ar7_00);
    iVar7 = FUN_8c026d74(*(int *)(iVar7 + 0xa8) + iVar6 * 4,ar5_00,iStack_34,ar7_00);
    FUN_8c026d7c(*(undefined4 *)(ar4 + 0x30c),ar5_00,iStack_34,ar7_00);
    iStack_34 = iStack_4c;
    if (cVar12 == '\0') {
      iStack_34 = iVar7;
    }
    FUN_8c21bbb0(uVar4,iVar5,iStack_34,ar7_00,uVar3);
    ar5_00 = iVar5;
  }
  else if (*(int *)(ar4 + 0x6c) < 0x32) {
    FUN_8c219a9a(*(undefined4 *)(ar4 + 0x848),ar5_00,iStack_34,ar7_00);
  }
  else {
    uVar4 = FUN_8c015bb8(iVar7 + 0x70,ar5_00,iStack_34,ar7_00);
    iVar5 = FUN_8c026db0(*(undefined4 *)(ar4 + 0x30c),ar5_00,iStack_34,ar7_00);
    iVar5 = deref_u32(*(int *)(iVar7 + 0xa0) + iVar5 * 4,ar5_00,iStack_34,ar7_00);
    iVar6 = FUN_8c026db0(*(undefined4 *)(ar4 + 0x30c),ar5_00,iStack_34,ar7_00);
    iVar7 = FUN_8c026d74(*(int *)(iVar7 + 0xa8) + iVar6 * 4,ar5_00,iStack_34,ar7_00);
    FUN_8c026d7c(*(undefined4 *)(ar4 + 0x30c),ar5_00,iStack_34,ar7_00);
    if (cVar12 == '\0') {
      iStack_4c = iVar7;
    }
    FUN_8c21bbb0(uVar4,iVar5,iStack_4c,ar7_00,uVar3);
    ar5_00 = iVar5;
    iStack_34 = iStack_4c;
  }
  FUN_8c256210(1,ar5_00,iStack_34,ar7_00);
  if (sVar1 == 2) {
    if (iVar2 == 3) {
      FUN_8c233dac(&DAT_8c139e5c,ar5_00,iStack_34,ar7_00);
    }
    FUN_8c08a6e8(ar4 + 0x538,ar5_00,iStack_34,ar7_00);
    FUN_8c25b3ec(*(undefined4 *)(ar4 + 0x844),ar5_00,iStack_34,ar7_00);
    FUN_8c256328(0,ar5_00,iStack_34,ar7_00,uVar3);
    FUN_8c25b5d0(0,ar5_00,iStack_34,ar7_00,uVar3);
    if (cVar12 == '\0') {
      dVar9 = (double)CONCAT44(0x47800000,*(undefined4 *)(ar4 + 0x58));
    }
    else {
      dVar9 = 1.4411521878487204e+18;
    }
    if (cVar11 == '\0') {
      fVar8 = SUB84(dVar9,0) * (float)((ulonglong)dVar9 >> 0x20);
    }
    else {
      fVar8 = SUB84(dVar9 * dVar9,0);
    }
    if (cVar12 == '\0') {
      dVar9 = (double)CONCAT44(0x43b40000,fVar8);
    }
    else {
      dVar9 = -3.739346301775294e-250;
    }
    if (cVar11 == '\0') {
      ar7_00 = (int)(SUB84(dVar9,0) / (float)((ulonglong)dVar9 >> 0x20));
    }
    else {
      ar7_00 = (int)(dVar9 / dVar9);
    }
    if (cVar12 == '\0') {
      dVar9 = (double)CONCAT44(0x47800000,*(undefined4 *)(ar4 + 0x54));
    }
    else {
      dVar9 = 1.4411521878487204e+18;
    }
    if (cVar11 == '\0') {
      fVar8 = SUB84(dVar9,0) * (float)((ulonglong)dVar9 >> 0x20);
    }
    else {
      fVar8 = SUB84(dVar9 * dVar9,0);
    }
    if (cVar12 == '\0') {
      dVar9 = (double)CONCAT44(0x43b40000,fVar8);
    }
    else {
      dVar9 = -3.739346301775294e-250;
    }
    if (cVar11 == '\0') {
      iVar2 = (int)(SUB84(dVar9,0) / (float)((ulonglong)dVar9 >> 0x20));
    }
    else {
      iVar2 = (int)(dVar9 / dVar9);
    }
    if (cVar12 == '\0') {
      dVar9 = (double)CONCAT44(0x47800000,*(undefined4 *)(ar4 + 0x50));
    }
    else {
      dVar9 = 1.4411521878487204e+18;
    }
    if (cVar11 == '\0') {
      fVar8 = SUB84(dVar9,0) * (float)((ulonglong)dVar9 >> 0x20);
    }
    else {
      fVar8 = SUB84(dVar9 * dVar9,0);
    }
    if (cVar12 == '\0') {
      dVar9 = (double)CONCAT44(0x43b40000,fVar8);
    }
    else {
      dVar9 = -3.739346301775294e-250;
    }
    if (cVar11 == '\0') {
      iVar7 = (int)(SUB84(dVar9,0) / (float)((ulonglong)dVar9 >> 0x20));
    }
    else {
      iVar7 = (int)(dVar9 / dVar9);
    }
    FUN_8c256b0c(0,iVar7,iVar2,ar7_00,uVar3);
    FUN_8c256fec(0,iVar7,iVar2,ar7_00,uVar3);
    ar5_00 = deref_u32(ar4 + 0x850,iVar7,iVar2,ar7_00);
    iStack_34 = FUN_8c026d74(ar4 + 0x854,iVar7,iVar2,ar7_00);
    FUN_8c21bbb0(*(undefined4 *)(ar4 + 0x840),ar5_00,iStack_34,ar7_00,uVar3);
    FUN_8c256210(1,ar5_00,iStack_34,ar7_00);
  }
  else if ((sVar1 == 3) && (*(int *)(ar4 + 0x8fc) != 0)) {
    FUN_8c08a6e8(ar4 + 0x538,ar5_00,iStack_34,ar7_00);
    FUN_8c25b3ec(*(undefined4 *)(ar4 + 0x844),ar5_00,iStack_34,ar7_00);
    FUN_8c256328(0,ar5_00,iStack_34,ar7_00,uVar3);
    FUN_8c25b5d0(0,ar5_00,iStack_34,ar7_00,uVar3);
    if (cVar12 == '\0') {
      dVar9 = (double)CONCAT44(0x47800000,*(undefined4 *)(ar4 + 0x918));
    }
    else {
      dVar9 = 1.4411521878487204e+18;
    }
    if (cVar11 == '\0') {
      fVar8 = SUB84(dVar9,0) * (float)((ulonglong)dVar9 >> 0x20);
    }
    else {
      fVar8 = SUB84(dVar9 * dVar9,0);
    }
    if (cVar12 == '\0') {
      dVar9 = (double)CONCAT44(0x43b40000,fVar8);
    }
    else {
      dVar9 = 4.93207941252472e-311;
    }
    if (cVar11 == '\0') {
      ar7_00 = (int)(SUB84(dVar9,0) / (float)((ulonglong)dVar9 >> 0x20));
    }
    else {
      ar7_00 = (int)(dVar9 / dVar9);
    }
    if (cVar12 == '\0') {
      dVar9 = (double)CONCAT44(0x47800000,*(undefined4 *)(ar4 + 0x914));
    }
    else {
      dVar9 = 1.4411521878487204e+18;
    }
    if (cVar11 == '\0') {
      fVar8 = SUB84(dVar9,0) * (float)((ulonglong)dVar9 >> 0x20);
    }
    else {
      fVar8 = SUB84(dVar9 * dVar9,0);
    }
    if (cVar12 == '\0') {
      dVar9 = (double)CONCAT44(0x43b40000,fVar8);
    }
    else {
      dVar9 = 4.93207941252472e-311;
    }
    if (cVar11 == '\0') {
      iVar2 = (int)(SUB84(dVar9,0) / (float)((ulonglong)dVar9 >> 0x20));
    }
    else {
      iVar2 = (int)(dVar9 / dVar9);
    }
    if (cVar12 == '\0') {
      dVar9 = (double)CONCAT44(0x47800000,*(undefined4 *)(ar4 + 0x910));
    }
    else {
      dVar9 = 1.4411521878487204e+18;
    }
    if (cVar11 == '\0') {
      fVar8 = SUB84(dVar9,0) * (float)((ulonglong)dVar9 >> 0x20);
    }
    else {
      fVar8 = SUB84(dVar9 * dVar9,0);
    }
    if (cVar12 == '\0') {
      dVar9 = (double)CONCAT44(0x43b40000,fVar8);
    }
    else {
      dVar9 = 4.93207941252472e-311;
    }
    if (cVar11 == '\0') {
      iVar7 = (int)(SUB84(dVar9,0) / (float)((ulonglong)dVar9 >> 0x20));
    }
    else {
      iVar7 = (int)(dVar9 / dVar9);
    }
    FUN_8c256b0c(0,iVar7,iVar2,ar7_00,uVar3);
    FUN_8c256fec(0,iVar7,iVar2,ar7_00,uVar3);
    ar5_00 = deref_u32(ar4 + 0x850,iVar7,iVar2,ar7_00);
    iStack_34 = FUN_8c026d74(ar4 + 0x854,iVar7,iVar2,ar7_00);
    FUN_8c21bbb0(*(undefined4 *)(ar4 + 0x840),ar5_00,iStack_34,ar7_00,uVar3);
    FUN_8c256210(1,ar5_00,iStack_34,ar7_00);
  }
  uVar3 = FUN_8c233dac(&DAT_8c139e5c,ar5_00,iStack_34,ar7_00);
  return uVar3;
}

__asm__(".globl _FUN_8c08b020\n.set _FUN_8c08b020, _FUN_8c08b020_def\n");
