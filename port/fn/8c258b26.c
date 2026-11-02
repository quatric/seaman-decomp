#include "../decls.h"
undefined4 FUN_8c258b26_def(int ar4,int ar5,int ar6,int ar7)

{
  uint uVar1;
  undefined4 ar5_00;
  undefined4 *ar6_00;
  int iVar2;
  float fVar3;
  float fVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined4 in_fr5;
  undefined4 uVar9;
  double dVar8;
  float fVar10;
  float fVar11;
  double in_dr6;
  undefined4 in_fr9;
  double in_dr14;
  undefined4 uVar12;
  double in_xd2;
  double in_xd4;
  double in_xd6;
  byte in_IMASK;
  byte in_S;
  byte extraout_S;
  byte extraout_T;
  byte bVar13;
  char cVar14;
  char cVar15;
  int in_stack_00000000;
  
  cVar15 = '\0';
  cVar14 = '\0';
  ar6_00 = &DAT_8c277c6c;
  ar5_00 = 0x100010;
  DAT_8c277c6c = 0;
  if (ar4 < 0) {
    ar4 = 100;
    _DAT_8c4aad18 = 0x20;
    DAT_8c277c6c = 1;
LAB_8c258b82:
    _DAT_8c4aacc0 = 0x100010;
  }
  else {
    if (ar6 < 0) {
      _DAT_8c4aad18 = 0x22;
      ar6 = 100;
LAB_8c258b80:
      DAT_8c277c6c = 2;
      goto LAB_8c258b82;
    }
    if (in_stack_00000000 < 0) {
      in_stack_00000000 = 100;
      _DAT_8c4aad18 = 0x24;
      goto LAB_8c258b80;
    }
    _DAT_8c4aacc0 = 0x100000;
    _DAT_8c4aad18 = 0;
  }
  DAT_8c277b2c = ar5 + ar4 + ar6 + ar7 + in_stack_00000000;
  iVar2 = ar7;
  DAT_8c277ad0 = ar4;
  DAT_8c277ad4 = ar5;
  DAT_8c277ad8 = ar6;
  DAT_8c277adc = ar7;
  DAT_8c277ae0 = in_stack_00000000;
  if (DAT_8c277b30 == 0) {
    if (_DAT_8c4aace0 != 0) {
      FUN_8c1fb57c(_DAT_8c4aace0 & 0x8fffffff,0x100010,&DAT_8c277c6c,ar7);
    }
    fVar3 = (float)DAT_8c277b2c;
    dVar5 = (double)(ulonglong)(uint)fVar3;
    dVar8 = in_xd2;
    if (cVar15 == '\0') {
      dVar8 = (double)CONCAT44(fVar3,in_fr5);
    }
    uVar9 = (undefined4)((ulonglong)dVar8 >> 0x20);
    uVar12 = (undefined4)((ulonglong)in_dr14 >> 0x20);
    if (cVar14 != '\0' || 0.0 <= fVar3) {
      if (cVar15 == '\0') {
        in_dr14 = (double)CONCAT44(uVar12,uVar9);
      }
    }
    else {
      if (cVar15 == '\0') {
        in_dr14 = (double)CONCAT44(uVar12,uVar9);
        dVar5 = 6.58979161647419e-315;
      }
      else {
        in_xd2 = -2.7677198172564077e-250;
      }
      if (cVar14 == '\0') {
        in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),
                                   SUB84(in_dr14,0) + SUB84(dVar5,0));
      }
      else {
        in_dr14 = in_dr14 + dVar5;
      }
    }
    uVar9 = 0;
    uVar1 = DAT_8c277b2c * 4 + 0x160;
    _DAT_8c4aace0 = malloc_thunk(uVar1,ar5_00,ar6_00,iVar2);
    in_fr5 = SUB84(dVar8,0);
    _DAT_8c4aace0 = _DAT_8c4aace0 | 0x20000000;
    in_S = extraout_S;
    bVar13 = extraout_T;
  }
  else {
    uVar9 = (undefined4)((ulonglong)in_dr14 >> 0x20);
    uVar1 = DAT_8c277b30;
    if (DAT_8c277b34 < DAT_8c277b2c * 4 + 0x160U) {
      fVar3 = (float)DAT_8c277b2c;
      bVar13 = fVar3 < 0.0;
      if ((bool)bVar13) {
        fVar3 = fVar3 + 4.2949673e+09;
      }
      in_dr14 = (double)CONCAT44(uVar9,fVar3);
      uVar9 = 0;
      _DAT_8c4aace0 = 0;
      _DAT_8c4aace4 = 0;
      goto LAB_8c258cae;
    }
    fVar3 = (float)DAT_8c277b2c;
    bVar13 = fVar3 < 0.0;
    if ((bool)bVar13) {
      fVar3 = fVar3 + 4.2949673e+09;
    }
    in_dr14 = (double)CONCAT44(uVar9,fVar3);
    uVar9 = 0;
    _DAT_8c4aace0 = DAT_8c277b30;
  }
  _DAT_8c4aace4 = DAT_8c277b2c + 0x58;
LAB_8c258cae:
  if (cVar15 == '\0') {
    dVar8 = (double)CONCAT44(0x42c80000,in_fr5);
  }
  else {
    dVar8 = -1.862832998689489e-249;
  }
  fVar3 = (float)((ulonglong)dVar8 >> 0x20);
  if (cVar14 == '\0') {
    dVar5 = (double)CONCAT44(uVar9,(float)ar4 * fVar3);
  }
  else {
    dVar5 = (double)CONCAT44(uVar9,(float)ar4) * dVar8;
  }
  dVar7 = in_xd2;
  if (cVar15 == '\0') {
    dVar8 = (double)CONCAT44(fVar3,SUB84(dVar5,0));
    dVar7 = in_xd4;
  }
  fVar3 = SUB84(in_dr14,0);
  if (cVar14 == '\0') {
    fVar10 = (float)((ulonglong)dVar8 >> 0x20);
    dVar8 = (double)CONCAT44(fVar10,SUB84(dVar8,0) / fVar3);
    fVar4 = (float)ar5 * fVar10;
  }
  else {
    dVar8 = dVar8 / in_dr14;
    fVar10 = (float)((ulonglong)dVar8 >> 0x20);
    fVar4 = SUB84((double)CONCAT44((int)((ulonglong)dVar5 >> 0x20),(float)ar5) * dVar8,0);
  }
  dVar5 = in_xd2;
  if (cVar15 == '\0') {
    dVar5 = (double)CONCAT44(fVar4,in_fr9);
  }
  if (cVar14 == '\0') {
    dVar5 = (double)CONCAT44((float)((ulonglong)dVar5 >> 0x20) / fVar3,SUB84(dVar5,0));
    dVar6 = (double)CONCAT44((float)ar7,(float)ar6 * fVar10);
  }
  else {
    dVar5 = dVar5 / in_dr14;
    dVar6 = (double)ar7 * dVar8;
  }
  if (cVar15 == '\0') {
    in_dr6 = (double)CONCAT44((int)((ulonglong)in_dr6 >> 0x20),SUB84(dVar6,0));
    _DAT_8c4aace8 = SUB84(dVar8,0);
  }
  else {
    _DAT_8c4aace8 = SUB84(dVar7,0);
    in_xd6 = in_xd2;
  }
  fVar4 = (float)((ulonglong)dVar6 >> 0x20);
  if (cVar14 == '\0') {
    fVar11 = SUB84(in_dr6,0) / fVar3;
    dVar7 = (double)CONCAT44(fVar4 * fVar10,(float)in_stack_00000000 * fVar10);
  }
  else {
    fVar11 = SUB84(in_dr6 / in_dr14,0);
    dVar7 = (double)CONCAT44(fVar4,(float)in_stack_00000000) * dVar8 * dVar8;
  }
  dVar6 = dVar7;
  if (cVar15 == '\0') {
    dVar6 = (double)CONCAT44((int)((ulonglong)dVar7 >> 0x20),fVar11);
  }
  if (cVar14 == '\0') {
    dVar6 = (double)CONCAT44((float)((ulonglong)dVar6 >> 0x20) / fVar3,SUB84(dVar6,0));
  }
  else {
    dVar6 = dVar6 / in_dr14;
  }
  if (cVar15 == '\0') {
    _DAT_8c4aacec = (undefined4)((ulonglong)dVar5 >> 0x20);
    in_xd2 = (double)CONCAT44(SUB84(dVar7,0),SUB84(dVar8,0));
  }
  else {
    _DAT_8c4aacec = SUB84(dVar5,0);
  }
  if (cVar14 == '\0') {
    dVar8 = (double)CONCAT44((float)((ulonglong)in_xd2 >> 0x20) / fVar3,SUB84(in_xd2,0));
  }
  else {
    dVar8 = in_xd2 / in_dr14;
  }
  _DAT_8c4aacf4 = SUB84(dVar6,0);
  uVar9 = (undefined4)((ulonglong)dVar8 >> 0x20);
  if (cVar15 == '\0') {
    _DAT_8c4aacf0 = _DAT_8c4aacf4;
    _DAT_8c4aacf4 = (int)((ulonglong)dVar6 >> 0x20);
    _DAT_8c4aacf8 = uVar9;
  }
  else {
    _DAT_8c4aacf0 = SUB84(in_xd6,0);
    _DAT_8c4aacf8 = SUB84(dVar8,0);
    (*(uint *)0x8c4aacfc) = uVar9;
  }
  pvr_2580e4(uVar1,ar5_00,ar6_00,iVar2,
             (((uint)bVar13 | (uint)in_S << 1 | (uint)in_IMASK << 4) & 0xf0) >> 4);
  s_HARDWARE_211130(&DAT_8c4aacbc,ar5_00,ar6_00,iVar2);
  _DAT_8c4aa6a8 = FUN_8c25b49e(0,ar5_00,ar6_00,iVar2);
  return _DAT_8c4aa6a8;
}

__asm__(".globl _FUN_8c258b26\n.set _FUN_8c258b26, _FUN_8c258b26_def\n");
