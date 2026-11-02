#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0d276c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d276c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 44; for (int i_ = 0; i_ < 44; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  undefined4 in_fr1 = 0;
  float fVar3;
  double dVar4;
  float fVar6;
  undefined1 *puVar7;
  double dVar5;
  undefined4 in_fr3 = 0;
  undefined4 uVar8;
  undefined8 in_dr4 = 0;
  undefined8 in_dr6 = 0;
  undefined4 in_fr13 = 0;
  double dVar9;
  undefined4 uVar11;
  double dVar10;
  double in_xd0 = 0;
  double dVar12;
  double in_xd12 = 0;
  double in_xd14 = 0;
  bool bVar13;
  char cVar14;
  char cVar15;
  
  cVar15 = '\0';
  cVar14 = '\0';
  uVar11 = (undefined4)((ulonglong)in_dr4 >> 0x20);
  uVar8 = (undefined4)in_dr4;
  dVar9 = CONCAT44D((int)((ulonglong)in_dr6 >> 0x20),in_fr13);
  iVar2 = ar4;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 44)), rand(ar4,ar5,ar6,ar7));
  if (cVar15 == '\0') {
    dVar4 = CONCAT44D(0x47000000,in_fr1);
  }
  else {
    dVar4 = 0.1250000330619514;
  }
  if (cVar14 == '\0') {
    dVar10 = CONCAT44D(uVar11,(float)iVar1 / F32HI(dVar4));
  }
  else {
    dVar10 = CONCAT44D(uVar11,(float)iVar1) / dVar4;
  }
  if (cVar15 == '\0') {
    dVar4 = CONCAT44D(0x3fc00000,SUB84(dVar4,0));
  }
  else {
    dVar4 = 1.3411048264966308e-08;
  }
  if (cVar14 == '\0') {
    bVar13 = F32HI(dVar10) < F32HI(dVar4);
  }
  else {
    bVar13 = dVar10 < dVar4;
  }
  fVar3 = F32LO(dVar10);
  if (bVar13) {
    if (cVar15 == '\0') {
      *(undefined4 *)(unsigned)(ar4 + 0x84) = 0x3f800000;
      dVar4 = CONCAT44D(0x41033333,fVar3);
    }
    else {
      *(undefined8 *)(unsigned)(ar4 + 0x84) = CONCAT44(0x3f800000,SUB84(dVar4,0));
      dVar4 = 512.000124001503;
      in_xd0 = in_xd14;
    }
    if (cVar14 == '\0') {
      fVar3 = F32LO(dVar4) * F32HI(dVar4);
    }
    else {
      fVar3 = SUB84(dVar4 * dVar4,0);
    }
    if (cVar15 == '\0') {
      dVar4 = CONCAT44D(0x40800000,fVar3);
    }
    else {
      dVar4 = 2.80638087878186e-312;
    }
    if (cVar14 == '\0') {
      fVar3 = F32LO(dVar4) + F32HI(dVar4);
    }
    else {
      fVar3 = SUB84(dVar4 + dVar4,0);
    }
    if (cVar15 == '\0') {
      *(float *)(unsigned)(ar4 + 0x10) = fVar3;
    }
    else {
      *(double *)(unsigned)(ar4 + 0x10) = in_xd0;
    }
  }
  else {
    if (cVar15 == '\0') {
      dVar9 = CONCAT44D((int)(D2U(dVar9) >> 0x20),fVar3);
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
        dVar9 = CONCAT44D((int)(D2U(dVar9) >> 0x20),0x3e99999a);
      }
      else {
        in_xd12 = 157286.40556640626;
      }
    }
    if (cVar15 == '\0') {
      dVar4 = CONCAT44D(0x41033333,fVar3);
    }
    else {
      dVar4 = 512.000124001503;
    }
    if (cVar14 == '\0') {
      dVar9 = CONCAT44D((int)(D2U(dVar9) >> 0x20),
                               F32LO(dVar9) * F32HI(dVar4));
    }
    else {
      dVar9 = dVar9 * dVar4;
    }
    if (cVar15 == '\0') {
      dVar4 = CONCAT44D(0x40800000,SUB84(dVar4,0));
    }
    else {
      dVar4 = 2.80638087878186e-312;
    }
    if (cVar14 == '\0') {
      dVar9 = CONCAT44D((int)(D2U(dVar9) >> 0x20),
                               F32LO(dVar9) + F32HI(dVar4));
    }
    else {
      dVar9 = dVar9 + dVar4;
    }
    if (cVar15 == '\0') {
      *(int *)(unsigned)(ar4 + 0x10) = SUB84(dVar9,0);
      *(undefined4 *)(unsigned)(ar4 + 0x84) = 0x40400000;
    }
    else {
      *(double *)(unsigned)(ar4 + 0x10) = in_xd12;
      *(undefined8 *)(unsigned)(ar4 + 0x84) = 0x40b47ae140400000;
    }
  }
  if (cVar15 == '\0') {
    fVar3 = *(float *)(unsigned)(ar4 + 0x10);
    puVar7 = (undefined1 *)(unsigned)0x40b47ae1;
  }
  else {
    in_xd0 = *(double *)(unsigned)(ar4 + 0x10);
    fVar3 = 5.64;
    puVar7 = ((undefined1 *)(unsigned)0x8c437c60);
  }
  if (cVar14 != '\0' || (float)(uint)puVar7 <= fVar3) {
    *(undefined4 *)(unsigned)(ar4 + 0x14) = 1;
  }
  else {
    *(undefined4 *)(unsigned)(ar4 + 0x14) = 0;
  }
  iVar1 = (vsp = ((unsigned long)(fr0_ - 44)), rand(iVar2,ar5,ar6,ar7));
  if (cVar14 == '\0') {
    dVar4 = CONCAT44D((float)iVar1,in_fr3);
  }
  else {
    dVar4 = (double)iVar1;
  }
  if (cVar15 == '\0') {
    dVar5 = CONCAT44D(0x47000000,fVar3);
  }
  else {
    dVar5 = 0.1250000330619514;
  }
  fVar3 = F32HI(dVar5);
  if (cVar14 == '\0') {
    dVar4 = CONCAT44D(F32HI(dVar4) / fVar3,SUB84(dVar4,0));
  }
  else {
    dVar4 = dVar4 / dVar5;
  }
  dVar12 = dVar9;
  if (cVar15 == '\0') {
    dVar5 = CONCAT44D(fVar3,(int)(D2U(dVar9) >> 0x20));
    dVar12 = in_xd0;
  }
  if (cVar14 == '\0') {
    fVar3 = F32LO(dVar5) * F32HI(dVar4);
  }
  else {
    fVar3 = SUB84(dVar5 * dVar4,0);
  }
  if (cVar15 == '\0') {
    dVar4 = CONCAT44D(uVar8,fVar3);
  }
  else {
    dVar4 = CONCAT44D((*(float *)(fr0_ - 0x2c)),uVar8);
  }
  if (cVar14 == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c437c60) = F32LO(dVar4) + F32HI(dVar4);
  }
  else {
    (*(undefined4 *)(unsigned)(unsigned)0x8c437c60) = SUB84(dVar4 + dVar4,0);
  }
  if (cVar15 != '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c437c60) = SUB84(dVar12,0);
    (*(undefined4 *)(unsigned)(unsigned)0x8c437c64) = (undefined4)(D2U(dVar12) >> 0x20);
  }
  iVar2 = (vsp = ((unsigned long)(fr0_ - 44)), rand(iVar2,ar5,ar6,ar7));
  if (cVar15 == '\0') {
    dVar4 = CONCAT44D(0x47000000,(float)iVar2);
  }
  else {
    dVar4 = 0.1250000330619514;
  }
  if (cVar14 == '\0') {
    fVar3 = F32LO(dVar4) / F32HI(dVar4);
    dVar9 = CONCAT44D(F32HI(dVar9) * fVar3,SUB84(dVar9,0));
  }
  else {
    fVar3 = SUB84(dVar4 / dVar4,0);
    dVar9 = dVar9 * (dVar4 / dVar4);
  }
  if (cVar15 == '\0') {
    dVar4 = CONCAT44D(uVar8,fVar3);
  }
  else {
    dVar4 = CONCAT44D((*(float *)(fr0_ - 0x2c)),uVar8);
  }
  if (cVar14 == '\0') {
    dVar9 = CONCAT44D(F32HI(dVar9) + F32HI(dVar4),
                             SUB84(dVar9,0));
  }
  else {
    dVar9 = dVar9 + dVar4;
  }
  uVar11 = (undefined4)(D2U(dVar9) >> 0x20);
  if (cVar15 == '\0') {
    dVar9 = CONCAT44D(0x3e4ccccd,SUB84(dVar4,0));
    (*(undefined4 *)(unsigned)(unsigned)0x8c437c64) = uVar11;
  }
  else {
    (*(undefined4 *)(unsigned)(unsigned)0x8c437c64) = SUB84(dVar9,0);
    dVar9 = 3.8146987284548574e-07;
    (*(undefined4 *)(unsigned)(unsigned)0x8c437c68) = uVar11;
  }
  if (cVar14 == '\0') {
    bVar13 = SUB84(dVar10,0) < F32HI(dVar9);
  }
  else {
    bVar13 = dVar10 < dVar9;
  }
  if (bVar13) {
    if (cVar15 == '\0') {
      (*(undefined4 *)(unsigned)(unsigned)0x8c437c64) = 0;
      (*(undefined4 *)(unsigned)(unsigned)0x8c437c60) = 0.0;
    }
    else {
      (*(float *)(fr0_ - 0x2c)) = SUB84(dVar9,0);
      (*(undefined4 *)(unsigned)(unsigned)0x8c437c68) = 0;
      (*(undefined4 *)(unsigned)(unsigned)0x8c437c60) = (*(float *)(fr0_ - 0x2c));
      (*(undefined4 *)(unsigned)(unsigned)0x8c437c64) = 0;
    }
  }
  if (cVar15 == '\0') {
    dVar9 = CONCAT44D(0x41f00000,(*(undefined4 *)(unsigned)(unsigned)0x8c437c60));
  }
  else {
    dVar12 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c437c64),(*(undefined4 *)(unsigned)(unsigned)0x8c437c60));
    dVar9 = -7.933197385572896e-251;
  }
  if (cVar14 == '\0') {
    fVar3 = F32LO(dVar9) / F32HI(dVar9);
  }
  else {
    fVar3 = SUB84(dVar9 / dVar9,0);
  }
  if (cVar15 == '\0') {
    *(float *)(unsigned)(ar4 + 0x28) = -fVar3;
  }
  else {
    *(double *)(unsigned)(ar4 + 0x28) = dVar12;
  }
  if (cVar15 == '\0') {
    *(undefined4 *)(unsigned)(ar4 + 0x2c) = 0;
    dVar9 = CONCAT44D(0x41f00000,(*(undefined4 *)(unsigned)(unsigned)0x8c437c64));
  }
  else {
    *(ulonglong *)(unsigned)(ar4 + 0x2c) = (ulonglong)(uint)-fVar3;
    dVar12 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c437c68),(*(undefined4 *)(unsigned)(unsigned)0x8c437c64));
    dVar9 = -7.933197385572896e-251;
  }
  if (cVar14 == '\0') {
    fVar3 = F32LO(dVar9) / F32HI(dVar9);
  }
  else {
    fVar3 = SUB84(dVar9 / dVar9,0);
  }
  if (cVar15 == '\0') {
    *(float *)(unsigned)(ar4 + 0x30) = -fVar3;
  }
  else {
    *(double *)(unsigned)(ar4 + 0x30) = dVar12;
  }
  (vsp = ((unsigned long)(fr0_ - 44)), FUN_8c022d04(ar4 + 0x18,ar5,ar6,ar7));
  if (cVar15 == '\0') {
    dVar9 = CONCAT44D(0x3ee66666,*(undefined4 *)(unsigned)(ar4 + 0x10));
  }
  else {
    dVar12 = *(double *)(unsigned)(ar4 + 0x10);
    dVar9 = 1.1709360719622307e+17;
  }
  if (cVar14 == '\0') {
    fVar3 = F32LO(dVar9) * F32HI(dVar9);
  }
  else {
    fVar3 = SUB84(dVar9 * dVar9,0);
  }
  if (cVar15 == '\0') {
    *(float *)(unsigned)(ar4 + 0x38) = fVar3;
    dVar9 = CONCAT44D(0x437a0000,fVar3);
  }
  else {
    *(double *)(unsigned)(ar4 + 0x38) = dVar12;
    dVar9 = 985162559995904.0;
  }
  if (cVar14 == '\0') {
    fVar3 = F32LO(dVar10) * F32HI(dVar9);
  }
  else {
    fVar3 = SUB84(dVar10 * dVar9,0);
  }
  if (cVar15 == '\0') {
    *(float *)(unsigned)(ar4 + 0x3c) = fVar3;
    dVar9 = CONCAT44D(0x430c0000,*(undefined4 *)(unsigned)(ar4 + 0x10));
  }
  else {
    *(double *)(unsigned)(ar4 + 0x3c) = in_xd14;
    dVar9 = 6.207226637267681e-78;
  }
  if (cVar14 == '\0') {
    dVar9 = CONCAT44D(F32HI(dVar9) / F32LO(dVar9),SUB84(dVar9,0));
  }
  else {
    dVar9 = dVar9 / dVar9;
  }
  if (cVar15 == '\0') {
    *(int *)(unsigned)(ar4 + 0x40) = (int)(D2U(dVar9) >> 0x20);
  }
  else {
    *(double *)(unsigned)(ar4 + 0x40) = dVar9;
  }
  *(undefined4 *)(unsigned)(ar4 + 0x7c) = 0;
  return 0x7c;
}

__asm__(".globl _FUN_8c0d276c\n.set _FUN_8c0d276c, _FUN_8c0d276c_def\n");
