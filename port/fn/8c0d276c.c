#include "../decls.h"
undefined4 FUN_8c0d276c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  undefined4 in_fr1;
  float fVar3;
  double dVar4;
  float fVar6;
  undefined1 *puVar7;
  double dVar5;
  undefined4 in_fr3;
  undefined4 uVar8;
  undefined8 in_dr4;
  undefined8 in_dr6;
  undefined4 in_fr13;
  double dVar9;
  undefined4 uVar11;
  double dVar10;
  double in_xd0;
  double dVar12;
  double in_xd12;
  double in_xd14;
  bool bVar13;
  char cVar14;
  char cVar15;
  float fStack_2c;
  
  cVar15 = '\0';
  cVar14 = '\0';
  uVar11 = (undefined4)((ulonglong)in_dr4 >> 0x20);
  uVar8 = (undefined4)in_dr4;
  dVar9 = (double)CONCAT44((int)((ulonglong)in_dr6 >> 0x20),in_fr13);
  iVar2 = ar4;
  iVar1 = rand(ar4,ar5,ar6,ar7);
  if (cVar15 == '\0') {
    dVar4 = (double)CONCAT44(0x47000000,in_fr1);
  }
  else {
    dVar4 = 0.1250000330619514;
  }
  if (cVar14 == '\0') {
    dVar10 = (double)CONCAT44(uVar11,(float)iVar1 / (float)((ulonglong)dVar4 >> 0x20));
  }
  else {
    dVar10 = (double)CONCAT44(uVar11,(float)iVar1) / dVar4;
  }
  if (cVar15 == '\0') {
    dVar4 = (double)CONCAT44(0x3fc00000,SUB84(dVar4,0));
  }
  else {
    dVar4 = 1.3411048264966308e-08;
  }
  if (cVar14 == '\0') {
    bVar13 = (float)((ulonglong)dVar10 >> 0x20) < (float)((ulonglong)dVar4 >> 0x20);
  }
  else {
    bVar13 = dVar10 < dVar4;
  }
  fVar3 = SUB84(dVar10,0);
  if (bVar13) {
    if (cVar15 == '\0') {
      *(undefined4 *)(ar4 + 0x84) = 0x3f800000;
      dVar4 = (double)CONCAT44(0x41033333,fVar3);
    }
    else {
      *(undefined8 *)(ar4 + 0x84) = CONCAT44(0x3f800000,SUB84(dVar4,0));
      dVar4 = 512.000124001503;
      in_xd0 = in_xd14;
    }
    if (cVar14 == '\0') {
      fVar3 = SUB84(dVar4,0) * (float)((ulonglong)dVar4 >> 0x20);
    }
    else {
      fVar3 = SUB84(dVar4 * dVar4,0);
    }
    if (cVar15 == '\0') {
      dVar4 = (double)CONCAT44(0x40800000,fVar3);
    }
    else {
      dVar4 = 2.80638087878186e-312;
    }
    if (cVar14 == '\0') {
      fVar3 = SUB84(dVar4,0) + (float)((ulonglong)dVar4 >> 0x20);
    }
    else {
      fVar3 = SUB84(dVar4 + dVar4,0);
    }
    if (cVar15 == '\0') {
      *(float *)(ar4 + 0x10) = fVar3;
    }
    else {
      *(double *)(ar4 + 0x10) = in_xd0;
    }
  }
  else {
    if (cVar15 == '\0') {
      dVar9 = (double)CONCAT44((int)((ulonglong)dVar9 >> 0x20),fVar3);
      fVar6 = 0.2;
    }
    else {
      fVar3 = 0.2;
      fVar6 = 0.3;
      in_xd0 = in_xd14;
      in_xd12 = in_xd14;
    }
    if (cVar14 == '\0' && fVar3 < fVar6) {
      if (cVar15 == '\0') {
        dVar9 = (double)CONCAT44((int)((ulonglong)dVar9 >> 0x20),0x3e99999a);
      }
      else {
        in_xd12 = 157286.40556640626;
      }
    }
    if (cVar15 == '\0') {
      dVar4 = (double)CONCAT44(0x41033333,fVar3);
    }
    else {
      dVar4 = 512.000124001503;
    }
    if (cVar14 == '\0') {
      dVar9 = (double)CONCAT44((int)((ulonglong)dVar9 >> 0x20),
                               SUB84(dVar9,0) * (float)((ulonglong)dVar4 >> 0x20));
    }
    else {
      dVar9 = dVar9 * dVar4;
    }
    if (cVar15 == '\0') {
      dVar4 = (double)CONCAT44(0x40800000,SUB84(dVar4,0));
    }
    else {
      dVar4 = 2.80638087878186e-312;
    }
    if (cVar14 == '\0') {
      dVar9 = (double)CONCAT44((int)((ulonglong)dVar9 >> 0x20),
                               SUB84(dVar9,0) + (float)((ulonglong)dVar4 >> 0x20));
    }
    else {
      dVar9 = dVar9 + dVar4;
    }
    if (cVar15 == '\0') {
      *(int *)(ar4 + 0x10) = SUB84(dVar9,0);
      *(undefined4 *)(ar4 + 0x84) = 0x40400000;
    }
    else {
      *(double *)(ar4 + 0x10) = in_xd12;
      *(undefined8 *)(ar4 + 0x84) = 0x40b47ae140400000;
    }
  }
  if (cVar15 == '\0') {
    fVar3 = *(float *)(ar4 + 0x10);
    puVar7 = (undefined1 *)0x40b47ae1;
  }
  else {
    in_xd0 = *(double *)(ar4 + 0x10);
    fVar3 = 5.64;
    puVar7 = &DAT_8c437c60;
  }
  if (cVar14 != '\0' || (float)(uint)puVar7 <= fVar3) {
    *(undefined4 *)(ar4 + 0x14) = 1;
  }
  else {
    *(undefined4 *)(ar4 + 0x14) = 0;
  }
  iVar1 = rand(iVar2,ar5,ar6,ar7);
  if (cVar14 == '\0') {
    dVar4 = (double)CONCAT44((float)iVar1,in_fr3);
  }
  else {
    dVar4 = (double)iVar1;
  }
  if (cVar15 == '\0') {
    dVar5 = (double)CONCAT44(0x47000000,fVar3);
  }
  else {
    dVar5 = 0.1250000330619514;
  }
  fVar3 = (float)((ulonglong)dVar5 >> 0x20);
  if (cVar14 == '\0') {
    dVar4 = (double)CONCAT44((float)((ulonglong)dVar4 >> 0x20) / fVar3,SUB84(dVar4,0));
  }
  else {
    dVar4 = dVar4 / dVar5;
  }
  dVar12 = dVar9;
  if (cVar15 == '\0') {
    dVar5 = (double)CONCAT44(fVar3,(int)((ulonglong)dVar9 >> 0x20));
    dVar12 = in_xd0;
  }
  if (cVar14 == '\0') {
    fVar3 = SUB84(dVar5,0) * (float)((ulonglong)dVar4 >> 0x20);
  }
  else {
    fVar3 = SUB84(dVar5 * dVar4,0);
  }
  if (cVar15 == '\0') {
    dVar4 = (double)CONCAT44(uVar8,fVar3);
  }
  else {
    dVar4 = (double)CONCAT44(fStack_2c,uVar8);
  }
  if (cVar14 == '\0') {
    _DAT_8c437c60 = SUB84(dVar4,0) + (float)((ulonglong)dVar4 >> 0x20);
  }
  else {
    _DAT_8c437c60 = SUB84(dVar4 + dVar4,0);
  }
  if (cVar15 != '\0') {
    _DAT_8c437c60 = SUB84(dVar12,0);
    _DAT_8c437c64 = (undefined4)((ulonglong)dVar12 >> 0x20);
  }
  iVar2 = rand(iVar2,ar5,ar6,ar7);
  if (cVar15 == '\0') {
    dVar4 = (double)CONCAT44(0x47000000,(float)iVar2);
  }
  else {
    dVar4 = 0.1250000330619514;
  }
  if (cVar14 == '\0') {
    fVar3 = SUB84(dVar4,0) / (float)((ulonglong)dVar4 >> 0x20);
    dVar9 = (double)CONCAT44((float)((ulonglong)dVar9 >> 0x20) * fVar3,SUB84(dVar9,0));
  }
  else {
    fVar3 = SUB84(dVar4 / dVar4,0);
    dVar9 = dVar9 * (dVar4 / dVar4);
  }
  if (cVar15 == '\0') {
    dVar4 = (double)CONCAT44(uVar8,fVar3);
  }
  else {
    dVar4 = (double)CONCAT44(fStack_2c,uVar8);
  }
  if (cVar14 == '\0') {
    dVar9 = (double)CONCAT44((float)((ulonglong)dVar9 >> 0x20) + (float)((ulonglong)dVar4 >> 0x20),
                             SUB84(dVar9,0));
  }
  else {
    dVar9 = dVar9 + dVar4;
  }
  uVar11 = (undefined4)((ulonglong)dVar9 >> 0x20);
  if (cVar15 == '\0') {
    dVar9 = (double)CONCAT44(0x3e4ccccd,SUB84(dVar4,0));
    _DAT_8c437c64 = uVar11;
  }
  else {
    _DAT_8c437c64 = SUB84(dVar9,0);
    dVar9 = 3.8146987284548574e-07;
    _DAT_8c437c68 = uVar11;
  }
  if (cVar14 == '\0') {
    bVar13 = SUB84(dVar10,0) < (float)((ulonglong)dVar9 >> 0x20);
  }
  else {
    bVar13 = dVar10 < dVar9;
  }
  if (bVar13) {
    if (cVar15 == '\0') {
      _DAT_8c437c64 = 0;
      _DAT_8c437c60 = 0.0;
    }
    else {
      fStack_2c = SUB84(dVar9,0);
      _DAT_8c437c68 = 0;
      _DAT_8c437c60 = fStack_2c;
      _DAT_8c437c64 = 0;
    }
  }
  if (cVar15 == '\0') {
    dVar9 = (double)CONCAT44(0x41f00000,_DAT_8c437c60);
  }
  else {
    dVar12 = (double)CONCAT44(_DAT_8c437c64,_DAT_8c437c60);
    dVar9 = -7.933197385572896e-251;
  }
  if (cVar14 == '\0') {
    fVar3 = SUB84(dVar9,0) / (float)((ulonglong)dVar9 >> 0x20);
  }
  else {
    fVar3 = SUB84(dVar9 / dVar9,0);
  }
  if (cVar15 == '\0') {
    *(float *)(ar4 + 0x28) = -fVar3;
  }
  else {
    *(double *)(ar4 + 0x28) = dVar12;
  }
  if (cVar15 == '\0') {
    *(undefined4 *)(ar4 + 0x2c) = 0;
    dVar9 = (double)CONCAT44(0x41f00000,_DAT_8c437c64);
  }
  else {
    *(ulonglong *)(ar4 + 0x2c) = (ulonglong)(uint)-fVar3;
    dVar12 = (double)CONCAT44(_DAT_8c437c68,_DAT_8c437c64);
    dVar9 = -7.933197385572896e-251;
  }
  if (cVar14 == '\0') {
    fVar3 = SUB84(dVar9,0) / (float)((ulonglong)dVar9 >> 0x20);
  }
  else {
    fVar3 = SUB84(dVar9 / dVar9,0);
  }
  if (cVar15 == '\0') {
    *(float *)(ar4 + 0x30) = -fVar3;
  }
  else {
    *(double *)(ar4 + 0x30) = dVar12;
  }
  FUN_8c022d04(ar4 + 0x18,ar5,ar6,ar7);
  if (cVar15 == '\0') {
    dVar9 = (double)CONCAT44(0x3ee66666,*(undefined4 *)(ar4 + 0x10));
  }
  else {
    dVar12 = *(double *)(ar4 + 0x10);
    dVar9 = 1.1709360719622307e+17;
  }
  if (cVar14 == '\0') {
    fVar3 = SUB84(dVar9,0) * (float)((ulonglong)dVar9 >> 0x20);
  }
  else {
    fVar3 = SUB84(dVar9 * dVar9,0);
  }
  if (cVar15 == '\0') {
    *(float *)(ar4 + 0x38) = fVar3;
    dVar9 = (double)CONCAT44(0x437a0000,fVar3);
  }
  else {
    *(double *)(ar4 + 0x38) = dVar12;
    dVar9 = 985162559995904.0;
  }
  if (cVar14 == '\0') {
    fVar3 = SUB84(dVar10,0) * (float)((ulonglong)dVar9 >> 0x20);
  }
  else {
    fVar3 = SUB84(dVar10 * dVar9,0);
  }
  if (cVar15 == '\0') {
    *(float *)(ar4 + 0x3c) = fVar3;
    dVar9 = (double)CONCAT44(0x430c0000,*(undefined4 *)(ar4 + 0x10));
  }
  else {
    *(double *)(ar4 + 0x3c) = in_xd14;
    dVar9 = 6.207226637267681e-78;
  }
  if (cVar14 == '\0') {
    dVar9 = (double)CONCAT44((float)((ulonglong)dVar9 >> 0x20) / SUB84(dVar9,0),SUB84(dVar9,0));
  }
  else {
    dVar9 = dVar9 / dVar9;
  }
  if (cVar15 == '\0') {
    *(int *)(ar4 + 0x40) = (int)((ulonglong)dVar9 >> 0x20);
  }
  else {
    *(double *)(ar4 + 0x40) = dVar9;
  }
  *(undefined4 *)(ar4 + 0x7c) = 0;
  return 0x7c;
}

__asm__(".globl _FUN_8c0d276c\n.set _FUN_8c0d276c, _FUN_8c0d276c_def\n");
