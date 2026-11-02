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
undefined4 FUN_8c2563f8_def(double *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c2563f8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 148; for (int i_ = 0; i_ < 148; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  double *pdVar2;
  undefined8 in_dr0 = 0;
  float fVar3;
  undefined8 in_dr2 = 0;
  uint uVar6;
  double dVar4;
  double dVar5;
  undefined4 in_fr5 = 0;
  float fVar7;
  double dVar8;
  undefined4 in_fr7 = 0;
  double dVar10;
  float fVar11;
  undefined4 uVar12;
  double in_dr8 = 0;
  undefined4 uVar13;
  float fVar14;
  undefined4 in_fr11 = 0;
  float fVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  float fVar19;
  double in_dr12 = 0;
  double dVar20;
  undefined8 in_dr14 = 0;
  double in_xd0 = 0;
  double dVar21;
  double in_xd2 = 0;
  double dVar22;
  double in_xd4 = 0;
  double dVar23;
  double in_xd6 = 0;
  double in_xd8 = 0;
  undefined8 in_xd10 = 0;
  double in_xd12 = 0;
  double dVar24;
  double in_xd14 = 0;
  bool bVar25;
  char cVar26;
  char cVar27;
  float fVar9;
  
  uVar6 = (uint)((ulonglong)in_dr2 >> 0x20);
  cVar27 = '\0';
  cVar26 = '\0';
  (*(undefined4 *)(fr0_ - 0x4)) = (undefined4)in_dr14;
  (*(undefined4 *)(fr0_ - 0x8)) = (undefined4)((ulonglong)in_dr14 >> 0x20);
  (*(undefined4 *)(fr0_ - 0xc)) = SUB84(in_dr12,0);
  pdVar2 = ((double *)(fr0_ - 0x50));
  (vsp = ((unsigned long)(fr0_ - 148)), FUN_8c010794(0x40,((double *)(fr0_ - 0x50)),((undefined1 *)(unsigned)0x8c271da8),vr7));
  uVar13 = (undefined4)((ulonglong)in_dr8 >> 0x20);
  if (cVar27 == '\0') {
    dVar16 = CONCAT44D(*(undefined4 *)(unsigned)ar4,in_fr11);
    uVar1 = (int)((ulonglong)in_dr0 >> 0x20);
  }
  else {
    (*(undefined4 *)(fr0_ - 0x90)) = SUB84(in_dr8,0);
    dVar16 = *ar4;
    uVar1 = (*(undefined4 *)(fr0_ - 0x90));
  }
  dVar4 = (double)((ulonglong)uVar6 << 0x20);
  fVar7 = F32HI(dVar16);
  dVar8 = dVar16;
  if (cVar27 == '\0') {
    dVar8 = CONCAT44D(fVar7,in_fr5);
  }
  if (cVar26 == '\0') {
    fVar9 = F32HI(dVar8) * fVar7;
    dVar8 = CONCAT44D(fVar9,SUB84(dVar8,0));
    bVar25 = 0.0 < fVar9;
  }
  else {
    dVar8 = dVar8 * dVar16;
    fVar9 = F32HI(dVar8);
    bVar25 = dVar4 < dVar8;
  }
  dVar16 = 0.0078125;
  dVar23 = dVar16;
  if (bVar25) {
    if (cVar26 == '\0') {
      bVar25 = fVar9 < 1.0;
    }
    else {
      bVar25 = dVar8 < 0.0078125;
    }
    if (bVar25) {
      if (cVar26 == '\0') {
        dVar4 = (double)((ulonglong)(uint)(1.0 - fVar9) << 0x20);
      }
      else {
        dVar4 = 0.0078125 - dVar8;
      }
      if (cVar27 == '\0') {
        dVar8 = CONCAT44D(fVar9,0x3f800000);
        dVar23 = in_xd4;
      }
      if (cVar26 == '\0') {
        dVar4 = CONCAT44D(SQRT(F32HI(dVar4)),SUB84(dVar4,0));
      }
      else {
        dVar4 = SQRT(dVar4);
      }
      dVar22 = dVar4;
      if (cVar27 == '\0') {
        in_dr8 = CONCAT44D(uVar13,(int)(D2U(dVar4) >> 0x20));
        dVar22 = in_xd8;
      }
      if (cVar26 == '\0') {
        dVar8 = CONCAT44D((int)(D2U(dVar8) >> 0x20),F32LO(dVar8) / F32LO(in_dr8));
      }
      else {
        dVar8 = dVar8 / in_dr8;
      }
    }
    else {
      dVar23 = in_xd14;
      dVar22 = in_xd14;
      if (cVar27 == '\0') {
        in_dr8 = 0.0;
        dVar23 = in_xd4;
        dVar22 = in_xd8;
      }
      dVar8 = 0.0078125;
    }
  }
  else {
    dVar22 = dVar16;
    if (cVar27 == '\0') {
      dVar8 = CONCAT44D(fVar9,0x3f800000);
      in_dr8 = CONCAT44D(uVar13,0x3f800000);
      dVar23 = in_xd4;
      dVar22 = in_xd8;
    }
  }
  fVar9 = F32LO(dVar4);
  if (cVar27 == '\0') {
    dVar4 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 1),SUB84(in_dr8,0));
    in_fr7 = *(undefined4 *)(unsigned)((int)ar4 + 4);
  }
  else {
    dVar4 = ar4[1];
    in_xd6 = *(double *)(unsigned)((int)ar4 + 4);
  }
  if (cVar26 == '\0') {
    dVar17 = CONCAT44D(fVar7,0x40000000);
  }
  else {
    dVar17 = CONCAT44D(fVar7,0x3f800000) + CONCAT44D(fVar7,0x3f800000);
  }
  if (cVar27 == '\0') {
    dVar10 = CONCAT44D(*(undefined4 *)(unsigned)((int)ar4 + 0xc),in_fr7);
  }
  else {
    dVar10 = *(double *)(unsigned)((int)ar4 + 0xc);
  }
  fVar7 = F32LO(dVar8);
  if (cVar26 == '\0') {
    dVar4 = CONCAT44D(F32HI(dVar4) * fVar7,SUB84(dVar4,0));
    dVar10 = CONCAT44D(F32HI(dVar10) * fVar7,F32LO(dVar10) * fVar7);
  }
  else {
    dVar4 = dVar4 * dVar8;
    dVar10 = dVar10 * dVar8 * dVar8;
  }
  if (cVar27 == '\0') {
    in_xd10 = CONCAT44(SUB84(dVar17,0),(int)in_dr0);
  }
  if (cVar26 == '\0') {
    dVar17 = CONCAT44D(F32HI(dVar17) * F32LO(dVar4),SUB84(dVar17,0));
  }
  else {
    dVar17 = dVar17 * dVar4;
  }
  fVar7 = -1.0;
  if (cVar26 == '\0') {
    fVar7 = F32HI(in_xd10) * F32HI(dVar8) + -1.0;
  }
  fVar14 = F32LO(dVar10);
  dVar8 = dVar17;
  if (cVar27 == '\0') {
    dVar4 = CONCAT44D((int)(D2U(dVar4) >> 0x20),0x3f800000);
    in_xd6 = CONCAT44D(fVar14,(int)in_xd10);
    dVar8 = CONCAT44D((int)(D2U(dVar17) >> 0x20),fVar7);
    dVar16 = dVar22;
  }
  if (cVar26 == '\0') {
    fVar7 = F32LO(dVar8);
    dVar8 = CONCAT44D(F32HI(dVar8) * F32LO(dVar17),fVar7);
    dVar4 = CONCAT44D((int)(D2U(dVar4) >> 0x20),F32LO(dVar4) - fVar7);
  }
  else {
    dVar8 = dVar8 * dVar17;
    fVar7 = F32LO(dVar8);
    dVar4 = dVar4 - dVar8;
  }
  uVar13 = (undefined4)(D2U(dVar8) >> 0x20);
  dVar21 = dVar8;
  dVar22 = dVar23;
  if (cVar27 == '\0') {
    in_xd6 = CONCAT44D((int)((ulonglong)in_xd6 >> 0x20),uVar13);
    dVar21 = in_xd0;
    dVar22 = in_xd2;
    fVar9 = fVar7;
  }
  fVar11 = F32HI(dVar10);
  if (cVar26 == '\0') {
    in_xd6 = CONCAT44D((int)((ulonglong)in_xd6 >> 0x20),F32LO(in_xd6) * fVar11);
  }
  else {
    in_xd6 = in_xd6 * dVar10;
  }
  uVar12 = SUB84(dVar4,0);
  dVar24 = dVar16;
  if (cVar27 == '\0') {
    in_dr12 = CONCAT44D((int)((ulonglong)in_dr12 >> 0x20),uVar12);
    dVar24 = in_xd12;
  }
  if (cVar26 == '\0') {
    dVar20 = CONCAT44D((int)((ulonglong)in_dr12 >> 0x20),F32LO(in_dr12) * fVar14);
  }
  else {
    dVar20 = in_dr12 * dVar10;
  }
  fVar19 = F32LO(dVar20);
  dVar5 = dVar24;
  if (cVar27 == '\0') {
    dVar5 = CONCAT44D(fVar19,fVar9);
  }
  fVar9 = F32HI(dVar4);
  if (cVar26 == '\0') {
    dVar5 = CONCAT44D(F32HI(dVar5) * fVar9,
                             F32HI(in_xd6) * fVar19 + F32LO(dVar5));
  }
  else {
    dVar5 = dVar5 * dVar4;
  }
  (*(undefined4 *)(fr0_ - 0x90)) = (undefined4)(D2U(dVar5) >> 0x20);
  (*(undefined4 *)(fr0_ - 0x94)) = SUB84(dVar5,0);
  if (cVar27 == '\0') {
    *(undefined4 *)(unsigned)pdVar2 = (*(undefined4 *)(fr0_ - 0x94));
    dVar5 = CONCAT44D((*(undefined4 *)(fr0_ - 0x90)),(*(undefined4 *)(fr0_ - 0x90)));
    (*(undefined4 *)(fr0_ - 0x94)) = (*(undefined4 *)(fr0_ - 0x90));
    (*(undefined4 *)(fr0_ - 0x90)) = uVar1;
  }
  else {
    *pdVar2 = dVar22;
    dVar22 = dVar5;
  }
  if (cVar26 == '\0') {
    dVar5 = CONCAT44D((int)(D2U(dVar5) >> 0x20),F32LO(dVar5) - F32LO(in_xd6));
  }
  else {
    dVar5 = dVar5 - in_xd6;
  }
  dVar18 = dVar24;
  if (cVar27 == '\0') {
    dVar18 = CONCAT44D(fVar19,SUB84(dVar17,0));
  }
  if (cVar26 == '\0') {
    dVar18 = CONCAT44D(F32HI(dVar18) * fVar11,SUB84(dVar18,0));
  }
  else {
    dVar18 = dVar18 * dVar10;
  }
  if (cVar27 == '\0') {
    dVar18 = CONCAT44D((int)(D2U(dVar18) >> 0x20),uVar13);
  }
  if (cVar26 == '\0') {
    dVar18 = CONCAT44D((int)(D2U(dVar18) >> 0x20),F32LO(dVar18) * fVar9);
  }
  else {
    dVar18 = dVar18 * dVar4;
  }
  fVar19 = F32HI(dVar18);
  if (cVar27 == '\0') {
    *(int *)(unsigned)(pdVar2 + 2) = SUB84(dVar5,0);
    dVar5 = CONCAT44D((int)(D2U(dVar5) >> 0x20),fVar19);
    dVar17 = CONCAT44D(fVar9,SUB84(in_xd6,0));
  }
  else {
    pdVar2[2] = dVar22;
    dVar22 = dVar18;
    dVar17 = dVar4;
  }
  fVar15 = F32LO(dVar18);
  if (cVar26 == '\0') {
    dVar5 = CONCAT44D((int)(D2U(dVar5) >> 0x20),F32LO(dVar5) + fVar15);
  }
  else {
    dVar5 = dVar5 + dVar18;
  }
  if (cVar27 == '\0') {
    *(int *)(unsigned)(pdVar2 + 4) = SUB84(dVar5,0);
    *(undefined4 *)(unsigned)(pdVar2 + 6) = 0;
    dVar5 = CONCAT44D((int)(D2U(dVar5) >> 0x20),(*(undefined4 *)(fr0_ - 0x94)));
  }
  else {
    pdVar2[4] = dVar22;
    pdVar2[6] = in_xd14;
    dVar22 = CONCAT44D((*(undefined4 *)(fr0_ - 0x90)),(*(undefined4 *)(fr0_ - 0x94)));
  }
  if (cVar26 == '\0') {
    dVar17 = CONCAT44D((int)(D2U(dVar17) >> 0x20),F32LO(dVar17) + F32LO(dVar5));
  }
  else {
    dVar17 = dVar17 + dVar5;
  }
  if (cVar27 == '\0') {
    dVar5 = CONCAT44D((int)(D2U(dVar5) >> 0x20),fVar7);
    *(int *)(unsigned)((int)pdVar2 + 4) = SUB84(dVar17,0);
    dVar17 = CONCAT44D((int)(D2U(dVar17) >> 0x20),uVar12);
    dVar16 = dVar21;
  }
  else {
    *(double *)(unsigned)((int)pdVar2 + 4) = dVar21;
    dVar22 = dVar23;
  }
  if (cVar26 == '\0') {
    dVar17 = CONCAT44D((int)(D2U(dVar17) >> 0x20),F32LO(dVar17) * fVar9);
  }
  else {
    dVar17 = dVar17 * dVar4;
  }
  dVar4 = dVar8;
  if (cVar27 == '\0') {
    dVar4 = CONCAT44D(uVar13,uVar12);
  }
  if (cVar26 == '\0') {
    dVar4 = CONCAT44D(F32HI(dVar4) * fVar14,SUB84(dVar4,0));
  }
  else {
    dVar4 = dVar4 * dVar10;
  }
  fVar9 = F32LO(dVar17);
  if (cVar27 == '\0') {
    dVar20 = CONCAT44D((int)(D2U(dVar20) >> 0x20),fVar9);
    dVar16 = dVar24;
  }
  if (cVar26 == '\0') {
    dVar5 = CONCAT44D((int)(D2U(dVar5) >> 0x20),
                             F32HI(dVar17) * fVar9 + F32LO(dVar5));
    dVar20 = CONCAT44D((int)(D2U(dVar20) >> 0x20),F32LO(dVar20) * fVar11);
  }
  else {
    dVar20 = dVar20 * dVar10;
  }
  if (cVar27 == '\0') {
    *(int *)(unsigned)((int)pdVar2 + 0x14) = SUB84(dVar5,0);
    dVar5 = CONCAT44D((int)(D2U(dVar5) >> 0x20),SUB84(dVar20,0));
    dVar16 = dVar22;
  }
  else {
    *(double *)(unsigned)((int)pdVar2 + 0x14) = dVar22;
  }
  fVar14 = F32HI(dVar4);
  if (cVar26 == '\0') {
    fVar3 = F32LO(dVar5) - fVar14;
    dVar4 = CONCAT44D(fVar14,F32LO(dVar4) * fVar11);
  }
  else {
    fVar3 = SUB84(dVar5 - dVar4,0);
    dVar4 = dVar4 * dVar10;
  }
  if (cVar27 == '\0') {
    *(float *)(unsigned)((int)pdVar2 + 0x24) = fVar3;
  }
  else {
    *(double *)(unsigned)((int)pdVar2 + 0x24) = dVar16;
  }
  if (cVar26 == '\0') {
    dVar18 = CONCAT44D(fVar19 - fVar15,fVar15);
  }
  else {
    dVar18 = dVar18 - dVar18;
  }
  if (cVar27 == '\0') {
    dVar10 = CONCAT44D(fVar11,fVar9);
    *(undefined4 *)(unsigned)((int)pdVar2 + 0x34) = 0;
  }
  else {
    *(double *)(unsigned)((int)pdVar2 + 0x34) = in_xd14;
  }
  if (cVar26 == '\0') {
    dVar20 = CONCAT44D(F32HI(dVar4) + F32LO(dVar20),SUB84(dVar4,0));
    dVar8 = CONCAT44D(uVar13,F32HI(dVar10) * F32LO(dVar4) + fVar7);
  }
  else {
    dVar20 = dVar4 + dVar20;
  }
  if (cVar27 == '\0') {
    *(int *)(unsigned)(pdVar2 + 1) = (int)(D2U(dVar18) >> 0x20);
    *(int *)(unsigned)(pdVar2 + 3) = (int)(D2U(dVar20) >> 0x20);
    *(int *)(unsigned)(pdVar2 + 5) = SUB84(dVar8,0);
    *(undefined4 *)(unsigned)(pdVar2 + 7) = 0;
    *(undefined4 *)(unsigned)((int)pdVar2 + 0xc) = 0;
    *(undefined4 *)(unsigned)((int)pdVar2 + 0x1c) = 0;
    *(undefined4 *)(unsigned)((int)pdVar2 + 0x2c) = 0;
  }
  else {
    pdVar2[1] = dVar18;
    pdVar2[3] = dVar20;
    pdVar2[5] = dVar23;
    pdVar2[7] = in_xd14;
    *(double *)(unsigned)((int)pdVar2 + 0xc) = in_xd14;
    *(double *)(unsigned)((int)pdVar2 + 0x1c) = in_xd14;
    *(double *)(unsigned)((int)pdVar2 + 0x2c) = in_xd14;
  }
  if (cVar27 == '\0') {
    *(undefined4 *)(unsigned)((int)pdVar2 + 0x3c) = 0x3f800000;
  }
  else {
    *(undefined8 *)(unsigned)((int)pdVar2 + 0x3c) = 0x3f80000000000000;
  }
                    
                    
                    
                    
  return 0x3c;
}

__asm__(".globl _FUN_8c2563f8\n.set _FUN_8c2563f8, _FUN_8c2563f8_def\n");
