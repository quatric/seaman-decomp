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
undefined4 * FUN_8c22b26c_def(double *ar4,double *ar5,double *ar6,undefined4 *ar7)

{
  ring[rp++ & 255] = "FUN_8c22b26c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 236; for (int i_ = 0; i_ < 236; i_++) z_[i_] = 0; }
  int iVar1;
  double *pdVar2;
  int iVar3;
  int iVar4;
  double *pdVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined4 in_fr1 = 0;
  double dVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  double dVar15;
  double dVar16;
  float fVar19;
  double dVar17;
  undefined8 uVar18;
  double in_dr4 = 0;
  uint uVar20;
  undefined4 in_fr7 = 0;
  float fVar21;
  double dVar22;
  float fVar23;
  undefined4 in_fr9 = 0;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined8 in_dr12 = 0;
  undefined4 in_fr15 = 0;
  double in_xd0 = 0;
  double in_xd2 = 0;
  double dVar27;
  double in_xd4 = 0;
  double in_xd6 = 0;
  double dVar28;
  double in_xd8 = 0;
  double in_xd12 = 0;
  double dVar29;
  double in_xd14 = 0;
  bool bVar30;
  bool bVar31;
  int iVar32;
  char in_FPSCR_PR = 0;
  char in_FPSCR_SZ = 0;
  double dVar26;
  
  if (in_FPSCR_SZ == '\0') {
    puVar8 = ((undefined1 *)(fr0_ - 0x20));
  }
  else {
    puVar8 = ((undefined1 *)(fr0_ - 0x28));
  }
  iVar1 = (int)(int)0xffffff3c;
  uVar25 = (undefined4)in_dr12;
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(unsigned)(puVar8 + -4) = uVar25;
    puVar9 = puVar8 + -8;
    *(int *)(unsigned)(puVar8 + -8) = (int)((ulonglong)in_dr12 >> 0x20);
  }
  else {
    *(double *)(unsigned)(puVar8 + -8) = in_xd12;
    puVar9 = puVar8 + -0x10;
    *(undefined8 *)(unsigned)(puVar8 + -0x10) = in_dr12;
  }
  if ((*(undefined4 *)(unsigned)0x8c4aa4f0 & 0x10000) == 0) {
    if (in_FPSCR_SZ == '\0') {
      in_fr7 = *(undefined4 *)(unsigned)0x8c4aa4a8;
      dVar15 = CONCAT44D(*(undefined4 *)(unsigned)0x8c4aa4e0,*(undefined4 *)(unsigned)0x8c4aa4dc);
      dVar28 = CONCAT44D(in_fr7,in_fr9);
    }
    else {
      dVar28 = *(undefined4 *)(unsigned)0x8c4aa4a8;
      dVar15 = *(undefined4 *)(unsigned)0x8c4aa4e0;
      in_xd2 = *(undefined4 *)(unsigned)0x8c4aa4dc;
      in_xd6 = dVar28;
    }
    if (in_FPSCR_PR == '\0') {
      dVar28 = CONCAT44D(F32HI(dVar28) *
                                F32HI(dVar15),SUB84(dVar28,0));
    }
    else {
      dVar28 = dVar28 * dVar15;
    }
    dVar22 = in_xd6;
    if (in_FPSCR_SZ == '\0') {
      dVar22 = CONCAT44D(in_fr7,in_fr7);
    }
    if (in_FPSCR_PR == '\0') {
      dVar22 = CONCAT44D(F32HI(dVar22) * F32LO(dVar15),SUB84(dVar22,0)
                               );
    }
    else {
      dVar22 = dVar22 * dVar15;
    }
    dVar26 = CONCAT44D(0x3f800000,uVar25);
    dVar15 = dVar26;
    if (in_FPSCR_SZ == '\0') {
      dVar15 = 0.007812501848093234;
    }
    fVar13 = F32HI(dVar28);
    if (in_FPSCR_PR == '\0') {
      dVar15 = CONCAT44D(F32HI(dVar15) / fVar13,SUB84(dVar15,0));
    }
    else {
      dVar15 = dVar15 / dVar28;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar22 = CONCAT44D((int)(D2U(dVar22) >> 0x20),
                                *(undefined4 *)(unsigned)((unsigned)0x8c4aa4a8 + 0xc));
    }
    else {
      in_xd6 = *(double *)(unsigned)((unsigned)0x8c4aa4a8 + 0xc);
    }
    fVar23 = F32HI(dVar22);
    if (in_FPSCR_PR == '\0') {
      dVar15 = CONCAT44D((int)(D2U(dVar15) >> 0x20),F32LO(dVar15) / fVar23);
    }
    else {
      dVar15 = dVar15 / dVar22;
    }
    puVar7 = (undefined8 *)(unsigned)(puVar9 + iVar1 + 0x70);
    if (in_FPSCR_SZ == '\0') {
      dVar28 = CONCAT44D(fVar13,*(undefined4 *)(unsigned)(0x8c4aa4a8 + 2));
      *(undefined4 *)(unsigned)(puVar9 + iVar1 + 0x70) = *(undefined4 *)(unsigned)((int)ar4 + 4);
      *(undefined4 *)(unsigned)(puVar9 + iVar1 + 0x74) = *(undefined4 *)(unsigned)(ar4 + 1);
      *(undefined4 *)(unsigned)(puVar9 + iVar1 + 0x78) = *(undefined4 *)(unsigned)((int)ar4 + 0xc);
      *(undefined4 *)(unsigned)(puVar9 + iVar1 + 0x84) = *(undefined4 *)(unsigned)ar4;
      dVar16 = CONCAT44D(*(undefined4 *)(unsigned)ar4,*(undefined4 *)(unsigned)((int)ar4 + 4));
      puVar7 = (undefined8 *)(unsigned)(puVar9 + iVar1 + 0x70);
    }
    else {
      in_xd8 = ((undefined1 *)(unsigned)2)[0x8c4aa4a8];
      *puVar7 = *(undefined8 *)(unsigned)((int)ar4 + 4);
      *(double *)(unsigned)(puVar9 + iVar1 + 0x74) = ar4[1];
      *(undefined8 *)(unsigned)(puVar9 + iVar1 + 0x78) = *(undefined8 *)(unsigned)((int)ar4 + 0xc);
      *(double *)(unsigned)(puVar9 + iVar1 + 0x84) = *ar4;
      in_xd2 = *(double *)(unsigned)((int)ar4 + 4);
      dVar16 = *ar4;
    }
    fVar21 = F32LO(dVar22);
    fVar13 = F32LO(dVar15);
    if (in_FPSCR_PR == '\0') {
      fVar11 = (F32LO(dVar16) - fVar21) * F32HI(dVar16) * fVar13;
    }
    else {
      fVar11 = SUB84((dVar16 - dVar22) * (dVar16 - dVar22) * dVar15,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(unsigned)(puVar9 + iVar1 + 0x7c) = fVar11;
      dVar16 = CONCAT44D(*(undefined4 *)(unsigned)ar4,*(undefined4 *)(unsigned)(ar4 + 1));
    }
    else {
      *(double *)(unsigned)(puVar9 + iVar1 + 0x7c) = in_xd2;
      in_xd2 = ar4[1];
      dVar16 = *ar4;
    }
    fVar11 = F32LO(dVar28);
    fVar14 = F32HI(dVar15);
    if (in_FPSCR_PR == '\0') {
      fVar19 = F32HI(dVar16);
      dVar16 = CONCAT44D(fVar19,(F32LO(dVar16) - fVar11) * fVar19 * fVar14);
    }
    else {
      dVar16 = (dVar16 - dVar28) * (dVar16 - dVar28) * dVar15;
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)(unsigned)(puVar9 + iVar1 + 0x80) = SUB84(dVar16,0);
      dVar16 = CONCAT44D((int)(D2U(dVar16) >> 0x20),*(undefined4 *)(unsigned)(ar4 + 2));
    }
    else {
      *(double *)(unsigned)(puVar9 + iVar1 + 0x80) = in_xd2;
      in_xd2 = ar4[2];
    }
    fVar19 = F32HI(in_dr4);
    if (in_FPSCR_PR == '\0') {
      fVar12 = F32LO(dVar16) + fVar19;
      bVar30 = fVar12 < fVar19;
    }
    else {
      fVar12 = SUB84(dVar16 + in_dr4,0);
      bVar30 = dVar16 + in_dr4 < in_dr4;
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(unsigned)(puVar9 + iVar1 + 0x88) = fVar12;
    }
    else {
      *(double *)(unsigned)(puVar9 + iVar1 + 0x88) = in_xd2;
    }
    if (bVar30) {
      if (in_FPSCR_SZ == '\0') {
        *(float *)(unsigned)(puVar9 + iVar1 + 0x88) = fVar19;
      }
      else {
        *(double *)(unsigned)(puVar9 + iVar1 + 0x88) = in_dr4;
      }
    }
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(unsigned)(puVar9 + iVar1 + 0x8c) = *(undefined4 *)(unsigned)((int)ar5 + 4);
      *(undefined4 *)(unsigned)(puVar9 + iVar1 + 0x90) = *(undefined4 *)(unsigned)(ar5 + 1);
      *(undefined4 *)(unsigned)(puVar9 + iVar1 + 0x94) = *(undefined4 *)(unsigned)((int)ar5 + 0xc);
      *(undefined4 *)(unsigned)(puVar9 + iVar1 + 0xa0) = *(undefined4 *)(unsigned)ar5;
      dVar16 = CONCAT44D(*(undefined4 *)(unsigned)ar5,*(undefined4 *)(unsigned)((int)ar5 + 4));
    }
    else {
      *(undefined8 *)(unsigned)(puVar9 + iVar1 + 0x8c) = *(undefined8 *)(unsigned)((int)ar5 + 4);
      *(double *)(unsigned)(puVar9 + iVar1 + 0x90) = ar5[1];
      *(undefined8 *)(unsigned)(puVar9 + iVar1 + 0x94) = *(undefined8 *)(unsigned)((int)ar5 + 0xc);
      *(double *)(unsigned)(puVar9 + iVar1 + 0xa0) = *ar5;
      in_xd2 = *(double *)(unsigned)((int)ar5 + 4);
      dVar16 = *ar5;
    }
    if (in_FPSCR_PR == '\0') {
      fVar12 = (F32LO(dVar16) - fVar21) * F32HI(dVar16) * fVar13;
    }
    else {
      fVar12 = SUB84((dVar16 - dVar22) * (dVar16 - dVar22) * dVar15,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(unsigned)(puVar9 + iVar1 + 0x98) = fVar12;
      dVar16 = CONCAT44D(*(undefined4 *)(unsigned)ar5,*(undefined4 *)(unsigned)(ar5 + 1));
    }
    else {
      *(double *)(unsigned)(puVar9 + iVar1 + 0x98) = in_xd2;
      in_xd2 = ar5[1];
      dVar16 = *ar5;
    }
    if (in_FPSCR_PR == '\0') {
      fVar12 = F32HI(dVar16);
      dVar16 = CONCAT44D(fVar12,(F32LO(dVar16) - fVar11) * fVar12 * fVar14);
    }
    else {
      dVar16 = (dVar16 - dVar28) * (dVar16 - dVar28) * dVar15;
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)(unsigned)(puVar9 + iVar1 + 0x9c) = SUB84(dVar16,0);
      dVar16 = CONCAT44D((int)(D2U(dVar16) >> 0x20),*(undefined4 *)(unsigned)(ar5 + 2));
    }
    else {
      *(double *)(unsigned)(puVar9 + iVar1 + 0x9c) = in_xd2;
      in_xd2 = ar5[2];
    }
    if (in_FPSCR_PR == '\0') {
      fVar12 = F32LO(dVar16) + fVar19;
      bVar30 = fVar12 < fVar19;
    }
    else {
      fVar12 = SUB84(dVar16 + in_dr4,0);
      bVar30 = dVar16 + in_dr4 < in_dr4;
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(unsigned)(puVar9 + iVar1 + 0xa4) = fVar12;
    }
    else {
      *(double *)(unsigned)(puVar9 + iVar1 + 0xa4) = in_xd2;
    }
    if (bVar30) {
      if (in_FPSCR_SZ == '\0') {
        *(float *)(unsigned)(puVar9 + iVar1 + 0xa4) = fVar19;
      }
      else {
        *(double *)(unsigned)(puVar9 + iVar1 + 0xa4) = in_dr4;
      }
    }
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(unsigned)(puVar9 + iVar1 + 0xa8) = *(undefined4 *)(unsigned)((int)ar6 + 4);
      *(undefined4 *)(unsigned)(puVar9 + iVar1 + 0xac) = *(undefined4 *)(unsigned)(ar6 + 1);
      *(undefined4 *)(unsigned)(puVar9 + iVar1 + 0xb0) = *(undefined4 *)(unsigned)((int)ar6 + 0xc);
      *(undefined4 *)(unsigned)(puVar9 + iVar1 + 0xbc) = *(undefined4 *)(unsigned)ar6;
      dVar16 = CONCAT44D(*(undefined4 *)(unsigned)ar6,*(undefined4 *)(unsigned)((int)ar6 + 4));
    }
    else {
      *(undefined8 *)(unsigned)(puVar9 + iVar1 + 0xa8) = *(undefined8 *)(unsigned)((int)ar6 + 4);
      *(double *)(unsigned)(puVar9 + iVar1 + 0xac) = ar6[1];
      *(undefined8 *)(unsigned)(puVar9 + iVar1 + 0xb0) = *(undefined8 *)(unsigned)((int)ar6 + 0xc);
      *(double *)(unsigned)(puVar9 + iVar1 + 0xbc) = *ar6;
      in_xd2 = *(double *)(unsigned)((int)ar6 + 4);
      dVar16 = *ar6;
    }
    if (in_FPSCR_PR == '\0') {
      fVar13 = (F32LO(dVar16) - fVar21) * F32HI(dVar16) * fVar13;
    }
    else {
      fVar13 = SUB84((dVar16 - dVar22) * (dVar16 - dVar22) * dVar15,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(unsigned)(puVar9 + iVar1 + 0xb4) = fVar13;
      dVar22 = CONCAT44D(*(undefined4 *)(unsigned)ar6,*(undefined4 *)(unsigned)(ar6 + 1));
    }
    else {
      *(double *)(unsigned)(puVar9 + iVar1 + 0xb4) = in_xd2;
      in_xd2 = ar6[1];
      dVar22 = *ar6;
    }
    if (in_FPSCR_PR == '\0') {
      fVar13 = F32HI(dVar22);
      dVar15 = CONCAT44D(fVar13,(F32LO(dVar22) - fVar11) * fVar13 * fVar14);
    }
    else {
      dVar15 = (dVar22 - dVar28) * (dVar22 - dVar28) * dVar15;
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)(unsigned)(puVar9 + iVar1 + 0xb8) = SUB84(dVar15,0);
      dVar15 = CONCAT44D((int)(D2U(dVar15) >> 0x20),*(undefined4 *)(unsigned)(ar6 + 2));
    }
    else {
      *(double *)(unsigned)(puVar9 + iVar1 + 0xb8) = in_xd2;
      in_xd2 = ar6[2];
    }
    if (in_FPSCR_PR == '\0') {
      fVar13 = F32LO(dVar15) + fVar19;
      dVar15 = CONCAT44D((int)(D2U(dVar15) >> 0x20),fVar13);
      bVar30 = fVar13 < fVar19;
    }
    else {
      dVar15 = dVar15 + in_dr4;
      fVar13 = F32LO(dVar15);
      bVar30 = dVar15 < in_dr4;
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(unsigned)(puVar9 + iVar1 + 0xc0) = fVar13;
    }
    else {
      *(double *)(unsigned)(puVar9 + iVar1 + 0xc0) = in_xd2;
    }
    if (bVar30) {
      if (in_FPSCR_SZ == '\0') {
        *(float *)(unsigned)(puVar9 + iVar1 + 0xc0) = fVar19;
      }
      else {
        *(double *)(unsigned)(puVar9 + iVar1 + 0xc0) = in_dr4;
      }
    }
    if (in_FPSCR_SZ == '\0') {
      uVar25 = *(undefined4 *)(unsigned)(puVar9 + iVar1 + 0xa0);
      dVar26 = CONCAT44D(0x3f800000,uVar25);
      uVar24 = *(undefined4 *)(unsigned)(puVar9 + iVar1 + 0x9c);
      dVar22 = CONCAT44D(*(undefined4 *)(unsigned)(puVar9 + iVar1 + 0x84),in_fr15);
      dVar15 = CONCAT44D((int)(D2U(dVar15) >> 0x20),uVar24);
      dVar29 = CONCAT44D(uVar25,in_fr1);
      dVar16 = CONCAT44D(uVar24,*(undefined4 *)(unsigned)(puVar9 + iVar1 + 0x80));
    }
    else {
      dVar29 = *(double *)(unsigned)(puVar9 + iVar1 + 0xa0);
      in_xd2 = *(double *)(unsigned)(puVar9 + iVar1 + 0x9c);
      dVar22 = *(double *)(unsigned)(puVar9 + iVar1 + 0x84);
      uVar24 = (undefined4)((ulonglong)in_xd2 >> 0x20);
      dVar16 = in_xd2;
      in_xd12 = dVar29;
    }
    fVar13 = F32HI(dVar22);
    if (in_FPSCR_PR == '\0') {
      fVar14 = F32LO(dVar15) * fVar13;
      dVar29 = CONCAT44D(F32HI(dVar29) * F32LO(dVar16),SUB84(dVar29,0)
                               );
    }
    else {
      fVar14 = SUB84(dVar15 * dVar22,0);
      dVar29 = dVar29 * dVar16;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar22 = CONCAT44D(fVar13,*(undefined4 *)(unsigned)(puVar9 + iVar1 + 0x98));
      dVar15 = CONCAT44D(*(undefined4 *)(unsigned)(puVar9 + iVar1 + 0x7c),SUB84(in_dr4,0));
      in_xd12 = CONCAT44D(uVar25,fVar14);
    }
    else {
      in_xd14 = *(double *)(unsigned)(puVar9 + iVar1 + 0x98);
      dVar15 = *(double *)(unsigned)(puVar9 + iVar1 + 0x7c);
    }
    fVar13 = F32HI(dVar15);
    if (in_FPSCR_PR == '\0') {
      dVar17 = CONCAT44D(F32HI(in_xd12) * fVar13,SUB84(in_xd12,0));
    }
    else {
      dVar17 = in_xd12 * dVar15;
    }
    dVar10 = dVar16;
    if (in_FPSCR_SZ == '\0') {
      dVar29 = CONCAT44D((int)(D2U(dVar29) >> 0x20),uVar24);
      dVar10 = in_xd0;
    }
    if (in_FPSCR_PR == '\0') {
      dVar29 = CONCAT44D(F32HI(dVar29) - F32LO(dVar17),SUB84(dVar29,0)
                               );
    }
    else {
      dVar29 = dVar29 - dVar17;
    }
    dVar27 = in_xd14;
    if (in_FPSCR_SZ == '\0') {
      dVar17 = CONCAT44D((int)(D2U(dVar17) >> 0x20),SUB84(dVar22,0));
      dVar27 = in_xd2;
    }
    if (in_FPSCR_PR == '\0') {
      fVar14 = F32LO(dVar17) * F32HI(dVar22) -
               F32HI(dVar17);
    }
    else {
      fVar14 = SUB84(dVar17 * dVar22 - dVar17 * dVar22,0);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar17 = CONCAT44D(*(undefined4 *)(unsigned)(puVar9 + iVar1 + 0xb8),fVar14);
    }
    else {
      dVar17 = *(double *)(unsigned)(puVar9 + iVar1 + 0xb8);
    }
    if (in_FPSCR_PR == '\0') {
      dVar17 = CONCAT44D(F32HI(dVar17) * F32LO(dVar17),SUB84(dVar17,0)
                               );
    }
    else {
      dVar17 = dVar17 * dVar17;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar17 = CONCAT44D((int)(D2U(dVar17) >> 0x20),
                                *(undefined4 *)(unsigned)(puVar9 + iVar1 + 0xb4));
    }
    else {
      dVar27 = *(double *)(unsigned)(puVar9 + iVar1 + 0xb4);
    }
    if (in_FPSCR_PR == '\0') {
      dVar17 = CONCAT44D(F32HI(dVar29) * F32LO(dVar17) +
                                F32HI(dVar17),SUB84(dVar17,0));
    }
    if (in_FPSCR_SZ == '\0') {
      dVar17 = CONCAT44D((int)(D2U(dVar17) >> 0x20),SUB84(dVar22,0));
      in_xd14 = dVar27;
    }
    if (in_FPSCR_PR == '\0') {
      fVar14 = F32LO(dVar17) * F32LO(dVar16);
      dVar17 = CONCAT44D((int)(D2U(dVar17) >> 0x20),fVar14);
      fVar14 = F32LO(dVar29) * fVar13 - fVar14;
    }
    else {
      dVar17 = dVar17 * dVar16;
      fVar14 = SUB84(dVar29 * dVar15 - dVar17,0);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar10 = CONCAT44D(fVar14,*(undefined4 *)(unsigned)(puVar9 + iVar1 + 0xbc));
    }
    if (in_FPSCR_PR == '\0') {
      dVar22 = (double)((ulonglong)
                        (uint)((F32HI(dVar10) * F32LO(dVar10) +
                               F32HI(dVar17)) * F32LO(dVar15)) << 0x20);
    }
    else {
      dVar22 = (double)(D2U(dVar17) & 0xffffffff00000000) * dVar15;
    }
    if (in_FPSCR_PR == '\0' && F32HI(dVar22) < SUB84(dVar22,0)) {
      iVar3 = 0;
      iVar32 = 0;
      iVar6 = 2;
      while (iVar4 = iVar32, iVar4 < 3) {
        if (in_FPSCR_SZ == '\0') {
          dVar22 = CONCAT44D((int)(D2U(dVar22) >> 0x20),
                                    *(undefined4 *)(unsigned)((int)puVar7 + iVar6 * 0x1c + 0x14));
        }
        else {
          in_xd14 = *(double *)(unsigned)((int)puVar7 + iVar6 * 0x1c + 0x14);
        }
        fVar13 = F32HI(dVar26);
        if (in_FPSCR_PR == '\0') {
          bVar30 = fVar13 < SUB84(dVar22,0);
        }
        else {
          bVar30 = dVar26 < dVar22;
        }
        pdVar2 = (double *)(unsigned)((int)puVar7 + iVar4 * 0x1c + 0x14);
        if (in_FPSCR_SZ == '\0') {
          dVar22 = CONCAT44D((int)(D2U(dVar22) >> 0x20),*(undefined4 *)(unsigned)pdVar2);
        }
        else {
          in_xd14 = *pdVar2;
        }
        if (in_FPSCR_PR == '\0') {
          bVar31 = fVar13 < SUB84(dVar22,0);
        }
        else {
          bVar31 = dVar26 < dVar22;
        }
        if ((bVar30 ^ 1) != -(bVar31 - 1)) {
          if (in_FPSCR_SZ == '\0') {
            fVar14 = *(float *)(unsigned)((int)puVar7 + iVar6 * 0x1c + 0x14);
            uVar18 = CONCAT44(*(undefined4 *)(unsigned)((int)puVar7 + iVar4 * 0x1c + 0x14),fVar14);
            dVar22 = CONCAT44D(fVar14,SUB84(dVar15,0));
          }
          else {
            in_xd14 = *(double *)(unsigned)((int)puVar7 + iVar6 * 0x1c + 0x14);
            uVar18 = *(undefined8 *)(unsigned)((int)puVar7 + iVar4 * 0x1c + 0x14);
            fVar14 = F32HI(in_xd14);
            dVar22 = in_xd14;
          }
          fVar19 = F32HI(uVar18);
          if (in_FPSCR_PR == '\0') {
            dVar29 = CONCAT44D(fVar19 - fVar14,-(float)uVar18 + fVar13);
          }
          else {
            dVar29 = (CONCAT44D(fVar19,-(float)uVar18) + dVar26) - dVar22;
          }
          if (in_FPSCR_SZ == '\0') {
            dVar22 = (double)(ulonglong)*(uint *)(unsigned)((int)puVar7 + iVar6 * 0x1c + 0xc);
          }
          else {
            in_xd4 = *(double *)(unsigned)((int)puVar7 + iVar6 * 0x1c + 0xc);
          }
          dVar15 = in_xd14;
          if (in_FPSCR_SZ == '\0') {
            dVar15 = CONCAT44D(SUB84(dVar29,0),SUB84(dVar22,0));
          }
          if (in_FPSCR_PR == '\0') {
            dVar15 = CONCAT44D(F32HI(dVar15) /
                                      F32HI(dVar29),SUB84(dVar15,0));
          }
          else {
            dVar15 = dVar15 / dVar29;
          }
          if (in_FPSCR_SZ == '\0') {
            dVar22 = CONCAT44D(SUB84(dVar15,0),
                                      *(undefined4 *)(unsigned)((int)puVar7 + iVar4 * 0x1c + 0xc));
          }
          else {
            in_xd14 = *(double *)(unsigned)((int)puVar7 + iVar4 * 0x1c + 0xc);
            dVar22 = in_xd4;
          }
          if (in_FPSCR_PR == '\0') {
            dVar22 = CONCAT44D((int)(D2U(dVar22) >> 0x20),
                                      F32LO(dVar22) - F32LO(dVar15));
          }
          else {
            dVar22 = dVar22 - dVar15;
          }
          if (in_FPSCR_SZ == '\0') {
            dVar29 = CONCAT44D(*(undefined4 *)(unsigned)((int)puVar7 + iVar6 * 0x1c + 0x10),
                                      SUB84(dVar16,0));
          }
          else {
            dVar29 = *(double *)(unsigned)((int)puVar7 + iVar6 * 0x1c + 0x10);
          }
          pdVar2 = (double *)(unsigned)(puVar9 + iVar3 * 0x1c + iVar1);
          uVar20 = (uint)(D2U(dVar15) >> 0x20);
          dVar16 = dVar15;
          if (in_FPSCR_SZ == '\0') {
            dVar16 = (double)((ulonglong)uVar20 << 0x20);
          }
          fVar14 = F32HI(dVar16);
          if (in_FPSCR_PR == '\0') {
            dVar22 = CONCAT44D(fVar14 * F32LO(dVar22) + F32HI(dVar22),
                                      SUB84(dVar22,0));
          }
          if (in_FPSCR_SZ == '\0') {
            dVar22 = CONCAT44D((int)(D2U(dVar22) >> 0x20),
                                      *(undefined4 *)(unsigned)((int)puVar7 + iVar4 * 0x1c + 0x10));
          }
          else {
            in_xd14 = *(double *)(unsigned)((int)puVar7 + iVar4 * 0x1c + 0x10);
          }
          fVar19 = F32HI(dVar29);
          if (in_FPSCR_PR == '\0') {
            dVar22 = CONCAT44D((int)(D2U(dVar22) >> 0x20),F32LO(dVar22) - fVar19);
          }
          else {
            dVar22 = dVar22 - dVar29;
          }
          dVar16 = dVar29;
          if (in_FPSCR_SZ == '\0') {
            dVar15 = CONCAT44D(uVar20,(int)(D2U(dVar22) >> 0x20));
            dVar16 = CONCAT44D(fVar19,SUB84(dVar22,0));
            dVar22 = in_xd4;
          }
          in_xd4 = dVar22;
          if (in_FPSCR_PR == '\0') {
            dVar16 = CONCAT44D(fVar14 * F32LO(dVar16) + F32HI(dVar16),
                                      SUB84(dVar16,0));
          }
          dVar17 = in_xd6;
          dVar22 = in_xd4;
          if (in_FPSCR_SZ == '\0') {
            dVar16 = CONCAT44D((int)(D2U(dVar16) >> 0x20),fVar21);
            dVar17 = in_xd14;
            dVar22 = (double)((longlong)dVar15 << 0x20);
          }
          if (in_FPSCR_PR == '\0') {
            dVar16 = CONCAT44D((int)(D2U(dVar16) >> 0x20),
                                      F32HI(dVar22) * fVar23 + F32LO(dVar16))
            ;
          }
          fVar14 = F32HI(dVar16);
          if (in_FPSCR_SZ == '\0') {
            uVar25 = SUB84(dVar16,0);
            *(undefined4 *)(unsigned)pdVar2 = uVar25;
            dVar22 = CONCAT44D(fVar11,uVar25);
            dVar16 = CONCAT44D(fVar14,SUB84(dVar29,0));
          }
          else {
            uVar25 = SUB84(in_xd8,0);
            *pdVar2 = dVar17;
            dVar22 = in_xd8;
          }
          if (in_FPSCR_PR == '\0') {
            dVar22 = CONCAT44D(fVar14 * F32HI(dVar28) +
                                      F32HI(dVar22),uVar25);
          }
          uVar20 = (uint)(D2U(dVar15) >> 0x20);
          uVar25 = (undefined4)(D2U(dVar22) >> 0x20);
          if (in_FPSCR_SZ == '\0') {
            *(undefined4 *)(unsigned)((int)pdVar2 + 4) = uVar25;
            *(float *)(unsigned)(pdVar2 + 1) = fVar13;
            dVar22 = CONCAT44D(uVar25,*(undefined4 *)(unsigned)((int)puVar7 + iVar4 * 0x1c + 0x18));
            dVar15 = CONCAT44D(uVar20,*(undefined4 *)(unsigned)((int)puVar7 + iVar6 * 0x1c + 0x18));
            in_xd14 = dVar17;
            dVar29 = (double)((ulonglong)uVar20 << 0x20);
          }
          else {
            *(double *)(unsigned)((int)pdVar2 + 4) = dVar22;
            pdVar2[1] = dVar26;
            in_xd14 = *(double *)(unsigned)((int)puVar7 + iVar4 * 0x1c + 0x18);
            in_xd4 = *(double *)(unsigned)((int)puVar7 + iVar6 * 0x1c + 0x18);
            dVar29 = dVar15;
          }
          iVar3 = iVar3 + 1;
          if (in_FPSCR_PR == '\0') {
            fVar14 = F32LO(dVar22) - F32LO(dVar15);
          }
          else {
            fVar14 = SUB84(dVar22 - dVar15,0);
          }
          dVar22 = in_xd4;
          if (in_FPSCR_SZ == '\0') {
            dVar22 = CONCAT44D(SUB84(dVar15,0),fVar14);
          }
          if (in_FPSCR_PR == '\0') {
            dVar22 = CONCAT44D(F32HI(dVar29) * F32LO(dVar22) +
                                      F32HI(dVar22),SUB84(dVar22,0));
          }
          if (in_FPSCR_SZ == '\0') {
            *(int *)(unsigned)(pdVar2 + 3) = (int)(D2U(dVar22) >> 0x20);
          }
          else {
            pdVar2[3] = dVar22;
          }
        }
        pdVar2 = (double *)(unsigned)(iVar4 * 0x1c + (int)puVar7);
        if (in_FPSCR_SZ == '\0') {
          dVar22 = CONCAT44D((int)(D2U(dVar22) >> 0x20),
                                    *(undefined4 *)(unsigned)((int)pdVar2 + 0x14));
        }
        else {
          in_xd14 = *(double *)(unsigned)((int)pdVar2 + 0x14);
        }
        if (in_FPSCR_PR == '\0') {
          bVar30 = fVar13 < SUB84(dVar22,0);
        }
        else {
          bVar30 = dVar26 < dVar22;
        }
        if (bVar30) {
          iVar32 = iVar3 * 0x1c;
          if (in_FPSCR_SZ == '\0') {
            dVar22 = (double)(ulonglong)*(uint *)(unsigned)pdVar2;
          }
          else {
            in_xd14 = *pdVar2;
          }
          iVar3 = iVar3 + 1;
          pdVar5 = (double *)(unsigned)(puVar9 + iVar32 + iVar1);
          if (in_FPSCR_SZ == '\0') {
            *(int *)(unsigned)pdVar5 = SUB84(dVar22,0);
            uVar25 = *(undefined4 *)(unsigned)((int)pdVar2 + 4);
            *(undefined4 *)(unsigned)((int)pdVar5 + 4) = uVar25;
            *(undefined4 *)(unsigned)(pdVar5 + 1) = *(undefined4 *)(unsigned)(pdVar2 + 1);
            dVar22 = CONCAT44D(uVar25,*(undefined4 *)(unsigned)(pdVar2 + 3));
            *(undefined4 *)(unsigned)(pdVar5 + 3) = *(undefined4 *)(unsigned)(pdVar2 + 3);
          }
          else {
            *pdVar5 = in_xd14;
            dVar22 = *(double *)(unsigned)((int)pdVar2 + 4);
            *(double *)(unsigned)((int)pdVar5 + 4) = dVar22;
            pdVar5[1] = pdVar2[1];
            in_xd14 = pdVar2[3];
            pdVar5[3] = in_xd14;
          }
        }
        iVar6 = iVar4;
        iVar32 = iVar4 + 1;
      }
      if (in_FPSCR_SZ == '\0') {
        ar7[6] = *(undefined4 *)(unsigned)(puVar9 + iVar1 + 0x18);
        ar7[3] = *(undefined4 *)(unsigned)(puVar9 + iVar1 + 8);
        ar7[2] = *(undefined4 *)(unsigned)(puVar9 + iVar1 + 4);
        uVar25 = 0xe0000000;
        puVar7 = (undefined8 *)(unsigned)(ar7 + 1);
        *(undefined4 *)(unsigned)puVar7 = *(undefined4 *)(unsigned)(puVar9 + iVar1);
      }
      else {
        *(undefined8 *)(unsigned)(ar7 + 5) = *(undefined8 *)(unsigned)(puVar9 + iVar1 + 0x18);
        *(undefined8 *)(unsigned)(ar7 + 1) = *(undefined8 *)(unsigned)(puVar9 + iVar1 + 8);
        *(undefined8 *)(unsigned)(ar7 + -1) = *(undefined8 *)(unsigned)(puVar9 + iVar1 + 4);
        uVar25 = 0xe0000000;
        puVar7 = (undefined8 *)(unsigned)(ar7 + -3);
        *puVar7 = *(undefined8 *)(unsigned)(puVar9 + iVar1);
      }
      *(undefined4 *)(unsigned)((int)puVar7 + -4) = uVar25;
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(unsigned)((int)puVar7 + 0x34) = *(undefined4 *)(unsigned)(puVar9 + iVar1 + 0x34);
        *(undefined4 *)(unsigned)(puVar7 + 5) = *(undefined4 *)(unsigned)(puVar9 + iVar1 + 0x24);
        *(undefined4 *)(unsigned)((int)puVar7 + 0x24) = *(undefined4 *)(unsigned)(puVar9 + iVar1 + 0x20);
        puVar7 = puVar7 + 4;
        *(undefined4 *)(unsigned)puVar7 = *(undefined4 *)(unsigned)(puVar9 + iVar1 + 0x1c);
      }
      else {
        puVar7[6] = *(undefined8 *)(unsigned)(puVar9 + iVar1 + 0x34);
        puVar7[4] = *(undefined8 *)(unsigned)(puVar9 + iVar1 + 0x24);
        puVar7[3] = *(undefined8 *)(unsigned)(puVar9 + iVar1 + 0x20);
        puVar7 = puVar7 + 2;
        *puVar7 = *(undefined8 *)(unsigned)(puVar9 + iVar1 + 0x1c);
      }
      *(undefined4 *)(unsigned)((int)puVar7 + -4) = uVar25;
      if (iVar3 != 3) {
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)(unsigned)((int)puVar7 + 0x34) = *(undefined4 *)(unsigned)(puVar9 + iVar1 + 0x6c);
          *(undefined4 *)(unsigned)(puVar7 + 5) = *(undefined4 *)(unsigned)(puVar9 + iVar1 + 0x5c);
          *(undefined4 *)(unsigned)((int)puVar7 + 0x24) = *(undefined4 *)(unsigned)(puVar9 + iVar1 + 0x58);
          puVar7 = puVar7 + 4;
          *(undefined4 *)(unsigned)puVar7 = *(undefined4 *)(unsigned)(puVar9 + iVar1 + 0x54);
        }
        else {
          puVar7[6] = *(undefined8 *)(unsigned)(puVar9 + iVar1 + 0x6c);
          puVar7[4] = *(undefined8 *)(unsigned)(puVar9 + iVar1 + 0x5c);
          puVar7[3] = *(undefined8 *)(unsigned)(puVar9 + iVar1 + 0x58);
          puVar7 = puVar7 + 2;
          *puVar7 = *(undefined8 *)(unsigned)(puVar9 + iVar1 + 0x54);
        }
        *(undefined4 *)(unsigned)((int)puVar7 + -4) = uVar25;
      }
      uVar25 = 0xf0000000;
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(unsigned)((int)puVar7 + 0x34) = *(undefined4 *)(unsigned)(puVar9 + iVar1 + 0x50);
        *(undefined4 *)(unsigned)(puVar7 + 5) = *(undefined4 *)(unsigned)(puVar9 + iVar1 + 0x40);
        *(undefined4 *)(unsigned)((int)puVar7 + 0x24) = *(undefined4 *)(unsigned)(puVar9 + iVar1 + 0x3c);
        puVar7 = puVar7 + 4;
        *(undefined4 *)(unsigned)puVar7 = *(undefined4 *)(unsigned)(puVar9 + iVar1 + 0x38);
      }
      else {
        puVar7[6] = *(undefined8 *)(unsigned)(puVar9 + iVar1 + 0x50);
        puVar7[4] = *(undefined8 *)(unsigned)(puVar9 + iVar1 + 0x40);
        puVar7[3] = *(undefined8 *)(unsigned)(puVar9 + iVar1 + 0x3c);
        puVar7 = puVar7 + 2;
        *puVar7 = *(undefined8 *)(unsigned)(puVar9 + iVar1 + 0x38);
      }
      *(undefined4 *)(unsigned)((int)puVar7 + -4) = uVar25;
      ar7 = (undefined4 *)(unsigned)((int)puVar7 + 0x1c);
      *(undefined4 *)(unsigned)0x8c4aa520 = *(undefined4 *)(unsigned)0x8c4aa520 + iVar3;
    }
  }
  return ar7;
}

__asm__(".globl _FUN_8c22b26c\n.set _FUN_8c22b26c, _FUN_8c22b26c_def\n");
