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
undefined4 * FUN_8c228a5c_def(double *ar4,double *ar5,double *ar6,undefined4 *ar7)

{
  ring[rp++ & 255] = "FUN_8c228a5c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 252; for (int i_ = 0; i_ < 252; i_++) z_[i_] = 0; }
  int iVar1;
  undefined8 *puVar2;
  double *pdVar3;
  uint uVar4;
  undefined8 *puVar5;
  int iVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined4 *puVar10;
  undefined1 *puVar11;
  undefined4 in_fr1 = 0;
  float fVar12;
  double dVar13;
  float fVar14;
  float fVar15;
  double dVar16;
  double dVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined8 in_dr4 = 0;
  double dVar22;
  double dVar23;
  float fVar24;
  double in_dr6 = 0;
  double dVar25;
  float fVar26;
  double in_dr8 = 0;
  undefined4 in_fr11 = 0;
  double dVar27;
  undefined4 uVar28;
  double in_dr12 = 0;
  undefined8 in_dr14 = 0;
  double dVar29;
  double dVar30;
  double in_xd0 = 0;
  double in_xd2 = 0;
  double dVar31;
  double dVar32;
  double in_xd4 = 0;
  double in_xd10 = 0;
  double dVar33;
  double in_xd12 = 0;
  double in_xd14 = 0;
  double dVar34;
  bool bVar35;
  int iVar36;
  int iVar37;
  int iVar38;
  char in_FPSCR_PR = 0;
  char in_FPSCR_SZ = 0;
  
  if (in_FPSCR_SZ == '\0') {
    puVar10 = &(*(undefined4 *)(fr0_ - 0x1c));
    *(ulonglong *)(unsigned)((undefined1 *)(fr0_ - 0x20)) = CONCAT44((int)in_dr14,((undefined1 *)(fr0_ - 0x20)));
  }
  else {
    puVar10 = (undefined4 *)(unsigned)((undefined1 *)(fr0_ - 0x20));
  }
  iVar1 = (int)(int)0xffffff30;
  uVar28 = SUB84(in_dr12,0);
  if (in_FPSCR_SZ == '\0') {
    *(int *)(unsigned)((int)puVar10 + -4) = (int)((ulonglong)in_dr14 >> 0x20);
    puVar11 = (undefined1 *)(unsigned)((int)puVar10 + -8);
    *(undefined4 *)(unsigned)((int)puVar10 + -8) = uVar28;
  }
  else {
    *(undefined8 *)(unsigned)((int)puVar10 + -8) = in_dr14;
    puVar11 = (undefined1 *)(unsigned)((int)puVar10 + -0x10);
    *(double *)(unsigned)((int)puVar10 + -0x10) = in_xd12;
  }
  if ((*(undefined4 *)(unsigned)0x8c4aa4f0 & 0x10000) == 0) {
    puVar9 = (undefined8 *)(unsigned)(puVar11 + iVar1 + 0x7c);
    if (in_FPSCR_SZ == '\0') {
      uVar20 = *(undefined4 *)(unsigned)0x8c4aa4a8;
      in_dr4 = CONCAT44((int)((ulonglong)in_dr4 >> 0x20),uVar20);
      dVar16 = CONCAT44D(*(undefined4 *)(unsigned)0x8c4aa4e0,*(undefined4 *)(unsigned)0x8c4aa4dc);
      in_dr8 = CONCAT44D((int)((ulonglong)in_dr8 >> 0x20),uVar20);
    }
    else {
      in_xd4 = *(undefined4 *)(unsigned)0x8c4aa4a8;
      dVar16 = *(undefined4 *)(unsigned)0x8c4aa4e0;
      in_xd2 = *(undefined4 *)(unsigned)0x8c4aa4dc;
      uVar20 = (undefined4)in_dr4;
    }
    if (in_FPSCR_PR == '\0') {
      fVar26 = F32LO(in_dr8) * F32HI(dVar16);
    }
    else {
      fVar26 = SUB84(in_dr8 * dVar16,0);
    }
    if (in_FPSCR_SZ == '\0') {
      in_dr6 = CONCAT44D((int)((ulonglong)in_dr6 >> 0x20),uVar20);
    }
    if (in_FPSCR_PR == '\0') {
      fVar24 = F32LO(in_dr6) * F32LO(dVar16);
    }
    else {
      fVar24 = SUB84(in_dr6 * dVar16,0);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar16 = CONCAT44D(*(undefined4 *)(unsigned)((unsigned)0x8c4aa4a8 + 0xc),fVar26);
    }
    else {
      dVar16 = *(double *)(unsigned)((unsigned)0x8c4aa4a8 + 0xc);
    }
    uVar20 = (undefined4)((ulonglong)in_dr4 >> 0x20);
    if (in_FPSCR_PR == '\0') {
      dVar22 = CONCAT44D(uVar20,1.0 / F32LO(dVar16));
      dVar25 = CONCAT44D(1.0 / fVar24,fVar24);
    }
    else {
      dVar22 = CONCAT44D(uVar20,0x3f800000) / dVar16;
      dVar25 = CONCAT44D(0x3f800000,fVar24) / CONCAT44D(0x3f800000,fVar24);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar27 = CONCAT44D(*(undefined4 *)(unsigned)(0x8c4aa4a8 + 2),in_fr11);
      *(undefined4 *)(unsigned)puVar9 = *(undefined4 *)(unsigned)((int)ar4 + 4);
      *(undefined4 *)(unsigned)(puVar11 + iVar1 + 0x80) = *(undefined4 *)(unsigned)(ar4 + 1);
      *(undefined4 *)(unsigned)(puVar11 + iVar1 + 0x84) = *(undefined4 *)(unsigned)((int)ar4 + 0xc);
      *(undefined4 *)(unsigned)(puVar11 + iVar1 + 0x90) = *(undefined4 *)(unsigned)ar4;
      dVar17 = CONCAT44D(*(undefined4 *)(unsigned)ar4,*(undefined4 *)(unsigned)((int)ar4 + 4));
    }
    else {
      dVar27 = ((undefined1 *)(unsigned)2)[0x8c4aa4a8];
      *puVar9 = *(undefined8 *)(unsigned)((int)ar4 + 4);
      *(double *)(unsigned)(puVar11 + iVar1 + 0x80) = ar4[1];
      *(undefined8 *)(unsigned)(puVar11 + iVar1 + 0x84) = *(undefined8 *)(unsigned)((int)ar4 + 0xc);
      *(double *)(unsigned)(puVar11 + iVar1 + 0x90) = *ar4;
      in_xd2 = *(double *)(unsigned)((int)ar4 + 4);
      dVar17 = *ar4;
    }
    fVar24 = F32HI(dVar16);
    fVar26 = F32HI(dVar25);
    if (in_FPSCR_PR == '\0') {
      fVar14 = (F32LO(dVar17) - fVar24) * F32HI(dVar17) * fVar26;
    }
    else {
      fVar14 = SUB84((dVar17 - dVar16) * (dVar17 - dVar16) * dVar25,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(unsigned)(puVar11 + iVar1 + 0x88) = fVar14;
      dVar17 = CONCAT44D(*(undefined4 *)(unsigned)ar4,*(undefined4 *)(unsigned)(ar4 + 1));
    }
    else {
      *(double *)(unsigned)(puVar11 + iVar1 + 0x88) = in_xd2;
      in_xd2 = ar4[1];
      dVar17 = *ar4;
    }
    fVar12 = F32HI(dVar27);
    fVar14 = F32LO(dVar22);
    if (in_FPSCR_PR == '\0') {
      fVar15 = (F32LO(dVar17) - fVar12) * F32HI(dVar17) * fVar14;
    }
    else {
      fVar15 = SUB84((dVar17 - dVar27) * (dVar17 - dVar27) * dVar22,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(unsigned)(puVar11 + iVar1 + 0x8c) = fVar15;
      *(undefined4 *)(unsigned)(puVar11 + iVar1 + 0x94) = *(undefined4 *)(unsigned)(ar4 + 2);
      *(undefined4 *)(unsigned)(puVar11 + iVar1 + 0x98) = *(undefined4 *)(unsigned)((int)ar5 + 4);
      *(undefined4 *)(unsigned)(puVar11 + iVar1 + 0x9c) = *(undefined4 *)(unsigned)(ar5 + 1);
      *(undefined4 *)(unsigned)(puVar11 + iVar1 + 0xa0) = *(undefined4 *)(unsigned)((int)ar5 + 0xc);
      *(undefined4 *)(unsigned)(puVar11 + iVar1 + 0xac) = *(undefined4 *)(unsigned)ar5;
      dVar17 = CONCAT44D(*(undefined4 *)(unsigned)ar5,*(undefined4 *)(unsigned)((int)ar5 + 4));
    }
    else {
      *(double *)(unsigned)(puVar11 + iVar1 + 0x8c) = in_xd2;
      *(double *)(unsigned)(puVar11 + iVar1 + 0x94) = ar4[2];
      *(undefined8 *)(unsigned)(puVar11 + iVar1 + 0x98) = *(undefined8 *)(unsigned)((int)ar5 + 4);
      *(double *)(unsigned)(puVar11 + iVar1 + 0x9c) = ar5[1];
      *(undefined8 *)(unsigned)(puVar11 + iVar1 + 0xa0) = *(undefined8 *)(unsigned)((int)ar5 + 0xc);
      *(double *)(unsigned)(puVar11 + iVar1 + 0xac) = *ar5;
      in_xd2 = *(double *)(unsigned)((int)ar5 + 4);
      dVar17 = *ar5;
    }
    if (in_FPSCR_PR == '\0') {
      fVar15 = (F32LO(dVar17) - fVar24) * F32HI(dVar17) * fVar26;
    }
    else {
      fVar15 = SUB84((dVar17 - dVar16) * (dVar17 - dVar16) * dVar25,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(unsigned)(puVar11 + iVar1 + 0xa4) = fVar15;
      dVar17 = CONCAT44D(*(undefined4 *)(unsigned)ar5,*(undefined4 *)(unsigned)(ar5 + 1));
    }
    else {
      *(double *)(unsigned)(puVar11 + iVar1 + 0xa4) = in_xd2;
      in_xd2 = ar5[1];
      dVar17 = *ar5;
    }
    if (in_FPSCR_PR == '\0') {
      fVar15 = (F32LO(dVar17) - fVar12) * F32HI(dVar17) * fVar14;
    }
    else {
      fVar15 = SUB84((dVar17 - dVar27) * (dVar17 - dVar27) * dVar22,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(unsigned)(puVar11 + iVar1 + 0xa8) = fVar15;
      *(undefined4 *)(unsigned)(puVar11 + iVar1 + 0xb0) = *(undefined4 *)(unsigned)(ar5 + 2);
      *(undefined4 *)(unsigned)(puVar11 + iVar1 + 0xb4) = *(undefined4 *)(unsigned)((int)ar6 + 4);
      *(undefined4 *)(unsigned)(puVar11 + iVar1 + 0xb8) = *(undefined4 *)(unsigned)(ar6 + 1);
      *(undefined4 *)(unsigned)(puVar11 + iVar1 + 0xbc) = *(undefined4 *)(unsigned)((int)ar6 + 0xc);
      *(undefined4 *)(unsigned)(puVar11 + iVar1 + 200) = *(undefined4 *)(unsigned)ar6;
      dVar17 = CONCAT44D(*(undefined4 *)(unsigned)ar6,*(undefined4 *)(unsigned)((int)ar6 + 4));
    }
    else {
      *(double *)(unsigned)(puVar11 + iVar1 + 0xa8) = in_xd2;
      *(double *)(unsigned)(puVar11 + iVar1 + 0xb0) = ar5[2];
      *(undefined8 *)(unsigned)(puVar11 + iVar1 + 0xb4) = *(undefined8 *)(unsigned)((int)ar6 + 4);
      *(double *)(unsigned)(puVar11 + iVar1 + 0xb8) = ar6[1];
      *(undefined8 *)(unsigned)(puVar11 + iVar1 + 0xbc) = *(undefined8 *)(unsigned)((int)ar6 + 0xc);
      *(double *)(unsigned)(puVar11 + iVar1 + 200) = *ar6;
      in_xd2 = *(double *)(unsigned)((int)ar6 + 4);
      dVar17 = *ar6;
    }
    if (in_FPSCR_PR == '\0') {
      fVar26 = (F32LO(dVar17) - fVar24) * F32HI(dVar17) * fVar26;
    }
    else {
      fVar26 = SUB84((dVar17 - dVar16) * (dVar17 - dVar16) * dVar25,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(unsigned)(puVar11 + iVar1 + 0xc0) = fVar26;
      dVar17 = CONCAT44D(*(undefined4 *)(unsigned)ar6,*(undefined4 *)(unsigned)(ar6 + 1));
    }
    else {
      *(double *)(unsigned)(puVar11 + iVar1 + 0xc0) = in_xd2;
      in_xd2 = ar6[1];
      dVar17 = *ar6;
    }
    if (in_FPSCR_PR == '\0') {
      fVar26 = F32HI(dVar17);
      dVar17 = CONCAT44D(fVar26,(F32LO(dVar17) - fVar12) * fVar26 * fVar14);
    }
    else {
      dVar17 = (dVar17 - dVar27) * (dVar17 - dVar27) * dVar22;
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)(unsigned)(puVar11 + iVar1 + 0xc4) = SUB84(dVar17,0);
      *(undefined4 *)(unsigned)(puVar11 + iVar1 + 0xcc) = *(undefined4 *)(unsigned)(ar6 + 2);
      uVar20 = *(undefined4 *)(unsigned)(puVar11 + iVar1 + 0xac);
      dVar27 = CONCAT44D(fVar12,*(undefined4 *)(unsigned)(puVar11 + iVar1 + 0x8c));
      uVar28 = *(undefined4 *)(unsigned)(puVar11 + iVar1 + 0xa8);
      in_dr12 = CONCAT44D((int)((ulonglong)in_dr12 >> 0x20),uVar28);
      dVar17 = CONCAT44D((int)(D2U(dVar17) >> 0x20),uVar28);
      dVar29 = CONCAT44D(uVar20,in_fr1);
      dVar30 = CONCAT44D(uVar20,*(undefined4 *)(unsigned)(puVar11 + iVar1 + 0x90));
    }
    else {
      *(double *)(unsigned)(puVar11 + iVar1 + 0xc4) = in_xd2;
      *(double *)(unsigned)(puVar11 + iVar1 + 0xcc) = ar6[2];
      dVar29 = *(double *)(unsigned)(puVar11 + iVar1 + 0xac);
      in_xd10 = *(double *)(unsigned)(puVar11 + iVar1 + 0x8c);
      in_xd2 = *(double *)(unsigned)(puVar11 + iVar1 + 0xa8);
      in_xd14 = *(double *)(unsigned)(puVar11 + iVar1 + 0x90);
      uVar20 = (undefined4)(D2U(dVar29) >> 0x20);
      dVar30 = dVar29;
      in_xd12 = in_xd2;
    }
    if (in_FPSCR_PR == '\0') {
      fVar26 = F32LO(dVar17) * F32LO(dVar30);
      dVar29 = CONCAT44D(F32HI(dVar29) * F32LO(dVar27),SUB84(dVar29,0)
                               );
    }
    else {
      fVar26 = SUB84(dVar17 * dVar30,0);
      dVar29 = dVar29 * dVar27;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar22 = CONCAT44D((int)(D2U(dVar22) >> 0x20),
                                *(undefined4 *)(unsigned)(puVar11 + iVar1 + 0xa4));
      dVar25 = CONCAT44D(*(undefined4 *)(unsigned)(puVar11 + iVar1 + 0x88),SUB84(dVar25,0));
      dVar17 = CONCAT44D(uVar20,fVar26);
    }
    else {
      in_xd4 = *(double *)(unsigned)(puVar11 + iVar1 + 0xa4);
      dVar25 = *(double *)(unsigned)(puVar11 + iVar1 + 0x88);
      dVar17 = dVar30;
    }
    fVar26 = F32HI(dVar25);
    if (in_FPSCR_PR == '\0') {
      dVar17 = CONCAT44D(F32HI(dVar17) * fVar26,SUB84(dVar17,0));
    }
    else {
      dVar17 = dVar17 * dVar25;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar29 = CONCAT44D((int)(D2U(dVar29) >> 0x20),uVar28);
      in_xd12 = in_xd0;
    }
    if (in_FPSCR_PR == '\0') {
      dVar29 = CONCAT44D(F32HI(dVar29) - F32LO(dVar17),SUB84(dVar29,0)
                               );
    }
    else {
      dVar29 = dVar29 - dVar17;
    }
    dVar31 = in_xd4;
    if (in_FPSCR_SZ == '\0') {
      dVar17 = CONCAT44D((int)(D2U(dVar17) >> 0x20),SUB84(dVar22,0));
      dVar31 = in_xd2;
    }
    if (in_FPSCR_PR == '\0') {
      dVar29 = CONCAT44D((int)(D2U(dVar29) >> 0x20),F32LO(dVar29) * fVar26);
      fVar26 = F32LO(dVar17) * F32LO(dVar30) - F32HI(dVar17);
    }
    else {
      dVar29 = dVar29 * dVar25;
      fVar26 = SUB84(dVar17 * dVar30 - dVar17 * dVar30,0);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar17 = CONCAT44D(*(undefined4 *)(unsigned)(puVar11 + iVar1 + 0xc4),fVar26);
    }
    else {
      dVar17 = *(double *)(unsigned)(puVar11 + iVar1 + 0xc4);
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
                                *(undefined4 *)(unsigned)(puVar11 + iVar1 + 0xc0));
    }
    else {
      dVar31 = *(double *)(unsigned)(puVar11 + iVar1 + 0xc0);
    }
    if (in_FPSCR_PR == '\0') {
      dVar17 = CONCAT44D(F32HI(dVar29) * F32LO(dVar17) +
                                F32HI(dVar17),SUB84(dVar17,0));
    }
    dVar23 = in_xd4;
    if (in_FPSCR_SZ == '\0') {
      dVar17 = CONCAT44D((int)(D2U(dVar17) >> 0x20),SUB84(dVar22,0));
      dVar23 = dVar31;
    }
    if (in_FPSCR_PR == '\0') {
      fVar26 = F32LO(dVar17) * F32LO(dVar27);
      dVar17 = CONCAT44D((int)(D2U(dVar17) >> 0x20),fVar26);
      fVar26 = F32LO(dVar29) - fVar26;
    }
    else {
      dVar17 = dVar17 * dVar27;
      fVar26 = SUB84(dVar29 - dVar17,0);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar29 = CONCAT44D(fVar26,*(undefined4 *)(unsigned)(puVar11 + iVar1 + 200));
      dVar31 = in_xd12;
    }
    else {
      dVar31 = *(double *)(unsigned)(puVar11 + iVar1 + 200);
      dVar29 = in_xd12;
    }
    if (in_FPSCR_PR == '\0') {
      fVar26 = (F32HI(dVar29) * F32LO(dVar29) +
               F32HI(dVar17)) * F32HI(dVar22);
    }
    else {
      fVar26 = (float)((ulonglong)(dVar17 * dVar22) >> 0x20);
    }
    if (in_FPSCR_PR == '\0' && fVar26 < 0.0) {
      iVar6 = 0;
      puVar8 = (undefined8 *)(unsigned)(puVar11 + iVar1 + 0xc);
      iVar36 = 2;
      for (iVar7 = 0; iVar7 < 3; iVar7 = iVar7 + 1) {
        if (in_FPSCR_SZ == '\0') {
          uVar18 = CONCAT44(*(undefined4 *)(unsigned)((int)puVar9 + iVar36 * 0x1c + 0x14),0x3f800000);
        }
        else {
          uVar18 = *(undefined8 *)(unsigned)((int)puVar9 + iVar36 * 0x1c + 0x14);
        }
        puVar2 = (undefined8 *)(unsigned)((int)puVar9 + iVar7 * 0x1c + 0x14);
        if (in_FPSCR_SZ == '\0') {
          uVar19 = CONCAT44(*(undefined4 *)(unsigned)puVar2,(float)uVar18);
        }
        else {
          uVar19 = *puVar2;
        }
        fVar26 = (float)uVar19;
        if (((in_FPSCR_PR == '\0' && (float)uVar18 < F32HI(uVar18)) ^ 1) !=
            -((in_FPSCR_PR == '\0' && fVar26 < F32HI(uVar19)) - 1)) {
          if (in_FPSCR_SZ == '\0') {
            fVar26 = *(float *)(unsigned)((int)puVar9 + iVar36 * 0x1c + 0x14);
            dVar29 = CONCAT44D((int)(D2U(dVar29) >> 0x20),
                                      *(undefined4 *)(unsigned)((int)puVar9 + iVar7 * 0x1c + 0x14));
            fVar14 = fVar26;
            dVar22 = CONCAT44D(fVar26,SUB84(dVar22,0));
          }
          else {
            dVar23 = *(double *)(unsigned)((int)puVar9 + iVar36 * 0x1c + 0x14);
            dVar31 = *(double *)(unsigned)((int)puVar9 + iVar7 * 0x1c + 0x14);
            fVar14 = F32HI(dVar23);
            dVar22 = dVar23;
          }
          dVar17 = CONCAT44D(0x3f800000,-fVar26);
          if (in_FPSCR_PR == '\0') {
            dVar17 = CONCAT44D(0x3f800000,-fVar26 + 1.0);
            dVar29 = CONCAT44D((int)(D2U(dVar29) >> 0x20),F32LO(dVar29) - fVar14);
          }
          else {
            dVar17 = dVar17 + dVar17;
            dVar29 = dVar29 - dVar22;
          }
          if (in_FPSCR_SZ == '\0') {
            dVar22 = CONCAT44D(*(undefined4 *)(unsigned)((int)puVar9 + iVar36 * 0x1c + 0xc),
                                      SUB84(dVar22,0));
          }
          else {
            dVar22 = *(double *)(unsigned)((int)puVar9 + iVar36 * 0x1c + 0xc);
          }
          dVar13 = dVar23;
          if (in_FPSCR_SZ == '\0') {
            dVar13 = CONCAT44D(SUB84(dVar17,0),SUB84(dVar25,0));
          }
          if (in_FPSCR_PR == '\0') {
            dVar25 = CONCAT44D(F32HI(dVar13) / F32LO(dVar29),
                                      SUB84(dVar13,0));
          }
          else {
            dVar25 = dVar13 / dVar29;
          }
          fVar26 = F32HI(dVar22);
          if (in_FPSCR_SZ == '\0') {
            dVar17 = CONCAT44D((int)(D2U(dVar17) >> 0x20),
                                      *(undefined4 *)(unsigned)((int)puVar9 + iVar7 * 0x1c + 0xc));
            dVar29 = (double)(ulonglong)(uint)fVar26;
          }
          else {
            dVar23 = *(double *)(unsigned)((int)puVar9 + iVar7 * 0x1c + 0xc);
            dVar31 = dVar22;
          }
          if (in_FPSCR_PR == '\0') {
            dVar17 = CONCAT44D((int)(D2U(dVar17) >> 0x20),F32LO(dVar17) - fVar26);
          }
          else {
            dVar17 = dVar17 - dVar22;
          }
          if (in_FPSCR_SZ == '\0') {
            dVar22 = CONCAT44D(fVar26,*(undefined4 *)(unsigned)((int)puVar9 + iVar36 * 0x1c + 0x10));
          }
          else {
            in_xd4 = *(double *)(unsigned)((int)puVar9 + iVar36 * 0x1c + 0x10);
          }
          pdVar3 = (double *)(unsigned)(iVar6 * 0x1c + (int)puVar8);
          uVar28 = (undefined4)(D2U(dVar25) >> 0x20);
          dVar13 = dVar25;
          if (in_FPSCR_SZ == '\0') {
            dVar13 = CONCAT44D(uVar28,SUB84(dVar29,0));
          }
          if (in_FPSCR_PR == '\0') {
            fVar26 = F32HI(dVar13);
            dVar13 = CONCAT44D(fVar26,fVar26 * F32LO(dVar17) + F32LO(dVar13));
          }
          if (in_FPSCR_SZ == '\0') {
            dVar17 = CONCAT44D((int)(D2U(dVar17) >> 0x20),
                                      *(undefined4 *)(unsigned)((int)puVar9 + iVar7 * 0x1c + 0x10));
          }
          else {
            dVar23 = *(double *)(unsigned)((int)puVar9 + iVar7 * 0x1c + 0x10);
          }
          fVar26 = F32LO(dVar22);
          if (in_FPSCR_PR == '\0') {
            dVar17 = CONCAT44D((int)(D2U(dVar17) >> 0x20),F32LO(dVar17) - fVar26);
          }
          else {
            dVar17 = dVar17 - dVar22;
          }
          dVar22 = in_xd4;
          if (in_FPSCR_SZ == '\0') {
            uVar20 = SUB84(dVar13,0);
            dVar13 = CONCAT44D((int)(D2U(dVar13) >> 0x20),fVar26);
            dVar22 = dVar31;
            dVar31 = CONCAT44D(uVar20,fVar26);
          }
          if (in_FPSCR_PR == '\0') {
            dVar13 = (double)(ulonglong)
                             (uint)(F32HI(dVar13) * F32LO(dVar17) +
                                   SUB84(dVar13,0));
          }
          dVar32 = dVar16;
          dVar29 = dVar31;
          if (in_FPSCR_SZ == '\0') {
            dVar17 = CONCAT44D((int)(D2U(dVar17) >> 0x20),fVar24);
            dVar32 = dVar23;
            dVar29 = CONCAT44D((int)(D2U(dVar31) >> 0x20),SUB84(dVar13,0));
          }
          if (in_FPSCR_PR == '\0') {
            dVar17 = CONCAT44D((int)(D2U(dVar17) >> 0x20),
                                      F32HI(dVar29) * F32LO(dVar25) +
                                      SUB84(dVar17,0));
          }
          uVar20 = (undefined4)(D2U(dVar27) >> 0x20);
          if (in_FPSCR_SZ == '\0') {
            uVar21 = SUB84(dVar29,0);
            *(int *)(unsigned)pdVar3 = SUB84(dVar17,0);
            dVar29 = CONCAT44D(uVar21,uVar20);
            dVar23 = dVar22;
            dVar22 = in_xd4;
          }
          else {
            *pdVar3 = dVar32;
            uVar21 = SUB84(dVar31,0);
            dVar29 = dVar22;
            dVar23 = dVar27;
          }
          if (in_FPSCR_PR == '\0') {
            fVar26 = F32HI(dVar29);
            dVar29 = CONCAT44D(fVar26,fVar26 * F32LO(dVar16) + F32LO(dVar29));
          }
          if (in_FPSCR_SZ == '\0') {
            *(int *)(unsigned)((int)pdVar3 + 4) = SUB84(dVar29,0);
            *(int *)(unsigned)(pdVar3 + 1) = (int)(D2U(dVar17) >> 0x20);
          }
          else {
            *(double *)(unsigned)((int)pdVar3 + 4) = dVar23;
            pdVar3[1] = dVar17;
          }
          uVar4 = *(uint *)(unsigned)((int)puVar9 + iVar36 * 0x1c + 0x18);
          fVar26 = (float)(uVar4 >> 0x18);
          dVar17 = dVar32;
          if (in_FPSCR_SZ == '\0') {
            dVar17 = CONCAT44D(fVar26,uVar21);
          }
          if (in_FPSCR_PR == '\0' && fVar26 < 0.0) {
            fVar14 = (*(undefined1 *)(unsigned)0x8c228d38);
            if (in_FPSCR_SZ != '\0') {
              dVar32 = CONCAT44D((*(uint *)(unsigned)0x8c228d3c),(*(undefined1 *)(unsigned)0x8c228d38));
              fVar14 = fVar26;
            }
            if (in_FPSCR_PR == '\0') {
              dVar17 = CONCAT44D(F32HI(dVar17) + fVar14,SUB84(dVar17,0))
              ;
            }
            else {
              dVar17 = dVar17 + (double)(ulonglong)(uint)fVar14;
            }
          }
          fVar26 = (float)(uVar4 >> 0x10 & 0xff);
          dVar13 = dVar32;
          if (in_FPSCR_SZ == '\0') {
            dVar17 = CONCAT44D((int)(D2U(dVar17) >> 0x20),fVar26);
            dVar13 = dVar22;
          }
          if (in_FPSCR_PR == '\0' && fVar26 < 0.0) {
            fVar14 = (*(undefined1 *)(unsigned)0x8c228d38);
            if (in_FPSCR_SZ != '\0') {
              dVar32 = CONCAT44D((*(uint *)(unsigned)0x8c228d3c),(*(undefined1 *)(unsigned)0x8c228d38));
              fVar14 = fVar26;
            }
            if (in_FPSCR_PR == '\0') {
              dVar17 = CONCAT44D((int)(D2U(dVar17) >> 0x20),F32LO(dVar17) + fVar14);
            }
            else {
              dVar17 = dVar17 + (double)(ulonglong)(uint)fVar14;
            }
          }
          fVar26 = (float)(uVar4 >> 8 & 0xff);
          dVar33 = dVar32;
          if (in_FPSCR_SZ == '\0') {
            dVar27 = CONCAT44D(uVar20,fVar26);
            dVar33 = in_xd10;
          }
          if (in_FPSCR_PR == '\0' && fVar26 < 0.0) {
            fVar14 = (*(undefined1 *)(unsigned)0x8c228d38);
            if (in_FPSCR_SZ != '\0') {
              dVar32 = CONCAT44D((*(uint *)(unsigned)0x8c228d3c),(*(undefined1 *)(unsigned)0x8c228d38));
              fVar14 = fVar26;
            }
            if (in_FPSCR_PR == '\0') {
              dVar27 = CONCAT44D((int)(D2U(dVar27) >> 0x20),F32LO(dVar27) + fVar14);
            }
            else {
              dVar27 = dVar27 + (double)(ulonglong)(uint)fVar14;
            }
          }
          fVar26 = (float)(uVar4 & 0xff);
          dVar34 = dVar32;
          if (in_FPSCR_SZ == '\0') {
            dVar30 = CONCAT44D((int)(D2U(dVar30) >> 0x20),fVar26);
            dVar34 = in_xd14;
          }
          if (in_FPSCR_PR == '\0' && fVar26 < 0.0) {
            fVar14 = (*(undefined1 *)(unsigned)0x8c228d38);
            if (in_FPSCR_SZ != '\0') {
              dVar32 = CONCAT44D((*(uint *)(unsigned)0x8c228d3c),(*(undefined1 *)(unsigned)0x8c228d38));
              fVar14 = fVar26;
            }
            if (in_FPSCR_PR == '\0') {
              dVar30 = (double)(ulonglong)(uint)(F32LO(dVar30) + fVar14);
            }
            else {
              dVar30 = dVar30 + (double)(ulonglong)(uint)fVar14;
            }
          }
          uVar4 = *(uint *)(unsigned)((int)puVar9 + iVar7 * 0x1c + 0x18);
          fVar26 = (float)(uVar4 >> 0x18);
          dVar22 = dVar32;
          if (in_FPSCR_SZ == '\0') {
            dVar22 = CONCAT44D(fVar26,SUB84(dVar30,0));
          }
          if (in_FPSCR_PR == '\0' && fVar26 < 0.0) {
            fVar14 = (*(undefined1 *)(unsigned)0x8c228d38);
            if (in_FPSCR_SZ != '\0') {
              dVar32 = CONCAT44D((*(uint *)(unsigned)0x8c228d3c),(*(undefined1 *)(unsigned)0x8c228d38));
              fVar14 = fVar26;
            }
            if (in_FPSCR_PR == '\0') {
              dVar22 = CONCAT44D(F32HI(dVar22) + fVar14,SUB84(dVar22,0))
              ;
            }
            else {
              dVar22 = dVar22 + (double)(ulonglong)(uint)fVar14;
            }
          }
          fVar26 = (float)(uVar4 >> 0x10 & 0xff);
          if (in_FPSCR_SZ == '\0') {
            in_dr12 = CONCAT44D((int)((ulonglong)in_dr12 >> 0x20),fVar26);
          }
          if (in_FPSCR_PR == '\0' && fVar26 < 0.0) {
            fVar14 = (*(undefined1 *)(unsigned)0x8c228d38);
            if (in_FPSCR_SZ != '\0') {
              dVar32 = CONCAT44D((*(uint *)(unsigned)0x8c228d3c),(*(undefined1 *)(unsigned)0x8c228d38));
              fVar14 = fVar26;
            }
            if (in_FPSCR_PR == '\0') {
              in_dr12 = CONCAT44D((int)((ulonglong)in_dr12 >> 0x20),F32LO(in_dr12) + fVar14
                                        );
            }
            else {
              in_dr12 = in_dr12 + (double)(ulonglong)(uint)fVar14;
            }
          }
          fVar26 = (float)(uVar4 >> 8 & 0xff);
          dVar31 = dVar32;
          if (in_FPSCR_SZ == '\0') {
            dVar29 = CONCAT44D((int)(D2U(dVar29) >> 0x20),fVar26);
            dVar31 = dVar23;
          }
          if (in_FPSCR_PR == '\0' && fVar26 < 0.0) {
            fVar14 = (*(undefined1 *)(unsigned)0x8c228d38);
            if (in_FPSCR_SZ != '\0') {
              dVar32 = CONCAT44D((*(uint *)(unsigned)0x8c228d3c),(*(undefined1 *)(unsigned)0x8c228d38));
              fVar14 = fVar26;
            }
            if (in_FPSCR_PR == '\0') {
              dVar29 = CONCAT44D((int)(D2U(dVar29) >> 0x20),F32LO(dVar29) + fVar14);
            }
            else {
              dVar29 = dVar29 + (double)(ulonglong)(uint)fVar14;
            }
          }
          if (in_FPSCR_PR == '\0') {
            dVar30 = (double)((ulonglong)(uint)(float)(uVar4 & 0xff) << 0x20);
          }
          else {
            dVar30 = (double)(uVar4 & 0xff);
          }
          fVar26 = F32HI(dVar30);
          if (in_FPSCR_SZ == '\0') {
            *(float *)(unsigned)(puVar11 + iVar1) = fVar26;
          }
          else {
            *(double *)(unsigned)(puVar11 + iVar1) = dVar30;
          }
          if (in_FPSCR_PR != '\0' || SUB84(dVar30,0) <= fVar26) {
            if (in_FPSCR_SZ == '\0') {
              dVar30 = CONCAT44D(fVar26,*(undefined4 *)(unsigned)(puVar11 + iVar1));
            }
            else {
              dVar32 = *(double *)(unsigned)(puVar11 + iVar1);
            }
          }
          else {
            if (in_FPSCR_SZ == '\0') {
              dVar30 = CONCAT44D((*(undefined1 *)(unsigned)0x8c228d38),*(undefined4 *)(unsigned)(puVar11 + iVar1));
            }
            else {
              dVar32 = *(double *)(unsigned)(puVar11 + iVar1);
              dVar30 = CONCAT44D((*(uint *)(unsigned)0x8c228d3c),(*(undefined1 *)(unsigned)0x8c228d38));
            }
            if (in_FPSCR_PR == '\0') {
              fVar26 = F32HI(dVar30);
              dVar30 = CONCAT44D(fVar26,F32LO(dVar30) + fVar26);
            }
            else {
              dVar30 = dVar30 + dVar30;
            }
          }
          fVar26 = F32HI(dVar17);
          if (in_FPSCR_PR == '\0') {
            dVar22 = CONCAT44D(F32HI(dVar22) - fVar26,SUB84(dVar22,0));
          }
          else {
            dVar22 = dVar22 - dVar17;
          }
          if (in_FPSCR_SZ == '\0') {
            *(float *)(unsigned)(puVar11 + iVar1 + 4) = SUB84(dVar30,0);
          }
          else {
            *(double *)(unsigned)(puVar11 + iVar1 + 4) = dVar32;
          }
          fVar14 = F32LO(dVar22);
          if (in_FPSCR_PR == '\0') {
            fVar12 = F32LO(dVar29) - F32LO(dVar27);
            fVar15 = F32LO(dVar30) - fVar14;
          }
          else {
            fVar12 = SUB84(dVar29 - dVar27,0);
            fVar15 = SUB84(dVar30 - dVar22,0);
          }
          dVar29 = dVar25;
          if (in_FPSCR_SZ == '\0') {
            dVar29 = CONCAT44D(uVar28,fVar12);
          }
          fVar12 = F32LO(dVar17);
          if (in_FPSCR_PR == '\0') {
            in_dr12 = CONCAT44D((int)((ulonglong)in_dr12 >> 0x20),F32LO(in_dr12) - fVar12);
          }
          else {
            in_dr12 = in_dr12 - dVar17;
          }
          if (in_FPSCR_SZ == '\0') {
            dVar17 = CONCAT44D(fVar26,fVar15);
          }
          fVar26 = F32HI(dVar29);
          if (in_FPSCR_PR == '\0') {
            dVar17 = CONCAT44D(fVar26 * F32HI(dVar22) +
                                      F32HI(dVar17),SUB84(dVar17,0));
          }
          if (in_FPSCR_SZ == '\0') {
            dVar22 = CONCAT44D(fVar14,fVar12);
            dVar30 = CONCAT44D(fVar12,fVar14);
          }
          else {
            fVar14 = F32LO(dVar13);
            dVar22 = dVar34;
            dVar30 = dVar13;
          }
          if (in_FPSCR_PR == '\0') {
            dVar22 = CONCAT44D(fVar26 * F32LO(dVar17) + F32HI(dVar22),
                                      SUB84(dVar22,0));
          }
          in_xd4 = dVar33;
          if (in_FPSCR_SZ == '\0') {
            dVar22 = CONCAT44D((int)(D2U(dVar22) >> 0x20),SUB84(dVar27,0));
            in_xd4 = dVar13;
          }
          if (in_FPSCR_PR == '\0') {
            dVar22 = CONCAT44D((int)(D2U(dVar22) >> 0x20),
                                      fVar26 * F32LO(dVar29) + F32LO(dVar22));
          }
          dVar29 = CONCAT44D(fVar26,0x4f000000);
          dVar23 = dVar17;
          if (in_FPSCR_SZ == '\0') {
            uVar28 = (undefined4)(D2U(dVar17) >> 0x20);
            dVar17 = CONCAT44D(uVar28,uVar28);
            dVar23 = dVar32;
          }
          if (in_FPSCR_PR == '\0') {
            bVar35 = SUB84(dVar17,0) < 0x4f000000;
          }
          else {
            bVar35 = dVar17 < dVar29;
          }
          uVar28 = (undefined4)(D2U(dVar17) >> 0x20);
          if (in_FPSCR_SZ == '\0') {
            *(undefined4 *)(unsigned)(puVar11 + iVar1 + 8) = uVar28;
          }
          else {
            *(double *)(unsigned)(puVar11 + iVar1 + 8) = dVar17;
          }
          if (in_FPSCR_PR == '\0') {
            dVar30 = CONCAT44D(fVar26 * F32LO(in_dr12) + F32HI(dVar30)
                                      ,fVar14);
          }
          if (!bVar35) {
            if (in_FPSCR_PR == '\0') {
              dVar29 = CONCAT44D(fVar26,0x4f000000 + 0x4f000000);
              dVar17 = CONCAT44D(uVar28,F32LO(dVar17) - (0x4f000000 + 0x4f000000));
            }
            else {
              dVar29 = dVar29 + dVar29;
              dVar17 = dVar17 - dVar29;
            }
          }
          if (in_FPSCR_PR == '\0') {
            iVar36 = (int)SUB84(dVar17,0);
          }
          else {
            iVar36 = (int)dVar17;
          }
          uVar28 = (undefined4)(D2U(dVar17) >> 0x20);
          dVar17 = CONCAT44D(uVar28,0x4f000000);
          fVar26 = F32HI(dVar30);
          if (in_FPSCR_PR == '\0') {
            bVar35 = fVar26 < 0x4f000000;
          }
          else {
            bVar35 = dVar30 < dVar17;
          }
          if (!bVar35) {
            if (in_FPSCR_PR == '\0') {
              dVar17 = CONCAT44D(uVar28,0x4f000000 + 0x4f000000);
              dVar30 = CONCAT44D(fVar26 - (0x4f000000 + 0x4f000000),SUB84(dVar30,0));
            }
            else {
              dVar17 = dVar17 + dVar17;
              dVar30 = dVar30 - dVar17;
            }
          }
          if (in_FPSCR_PR == '\0') {
            iVar37 = (int)F32HI(dVar30);
          }
          else {
            iVar37 = (int)dVar30;
          }
          uVar28 = (undefined4)(D2U(dVar17) >> 0x20);
          dVar17 = CONCAT44D(uVar28,0x4f000000);
          if (in_FPSCR_PR == '\0') {
            bVar35 = SUB84(dVar22,0) < 0x4f000000;
          }
          else {
            bVar35 = dVar22 < dVar17;
          }
          if (!bVar35) {
            if (in_FPSCR_PR == '\0') {
              dVar17 = CONCAT44D(uVar28,0x4f000000 + 0x4f000000);
              dVar22 = CONCAT44D((int)(D2U(dVar22) >> 0x20),
                                        F32LO(dVar22) - (0x4f000000 + 0x4f000000));
            }
            else {
              dVar17 = dVar17 + dVar17;
              dVar22 = dVar22 - dVar17;
            }
          }
          if (in_FPSCR_PR == '\0') {
            iVar38 = (int)SUB84(dVar22,0);
          }
          else {
            iVar38 = (int)dVar22;
          }
          dVar17 = CONCAT44D((int)(D2U(dVar17) >> 0x20),0x4f000000);
          fVar26 = F32HI(dVar22);
          if (in_FPSCR_PR == '\0') {
            bVar35 = fVar26 < 0x4f000000;
          }
          else {
            bVar35 = dVar22 < dVar17;
          }
          if (!bVar35) {
            if (in_FPSCR_PR == '\0') {
              dVar22 = CONCAT44D(fVar26 - (0x4f000000 + 0x4f000000),SUB84(dVar22,0));
            }
            else {
              dVar22 = dVar22 - (dVar17 + dVar17);
            }
          }
          if (in_FPSCR_PR == '\0') {
            uVar4 = (uint)F32HI(dVar22);
          }
          else {
            uVar4 = (uint)dVar22;
          }
          iVar6 = iVar6 + 1;
          *(uint *)(unsigned)(pdVar3 + 3) = iVar36 << 0x18 | iVar37 << 0x10 | iVar38 << 8 | uVar4;
          in_xd10 = dVar33;
          in_xd14 = dVar34;
        }
        puVar2 = (undefined8 *)(unsigned)(iVar7 * 0x1c + (int)puVar9);
        if (in_FPSCR_SZ == '\0') {
          uVar18 = CONCAT44(*(undefined4 *)(unsigned)((int)puVar2 + 0x14),0x3f800000);
        }
        else {
          uVar18 = *(undefined8 *)(unsigned)((int)puVar2 + 0x14);
        }
        if (in_FPSCR_PR == '\0' && (float)uVar18 < F32HI(uVar18)) {
          iVar36 = iVar6 * 0x1c;
          if (in_FPSCR_SZ == '\0') {
            uVar18 = CONCAT44(*(undefined4 *)(unsigned)puVar2,(float)uVar18);
          }
          else {
            uVar18 = *puVar2;
          }
          iVar6 = iVar6 + 1;
          puVar5 = (undefined8 *)(unsigned)(iVar36 + (int)puVar8);
          if (in_FPSCR_SZ == '\0') {
            *(int *)(unsigned)puVar5 = (int)((ulonglong)uVar18 >> 0x20);
            dVar29 = CONCAT44D((int)(D2U(dVar29) >> 0x20),
                                      *(undefined4 *)(unsigned)((int)puVar2 + 4));
            *(undefined4 *)(unsigned)((int)puVar5 + 4) = *(undefined4 *)(unsigned)((int)puVar2 + 4);
            *(undefined4 *)(unsigned)(puVar5 + 1) = *(undefined4 *)(unsigned)(puVar2 + 1);
            *(undefined4 *)(unsigned)(puVar5 + 3) = *(undefined4 *)(unsigned)(puVar2 + 3);
          }
          else {
            *puVar5 = uVar18;
            dVar31 = *(double *)(unsigned)((int)puVar2 + 4);
            *(double *)(unsigned)((int)puVar5 + 4) = dVar31;
            puVar5[1] = puVar2[1];
            puVar5[3] = puVar2[3];
          }
        }
        iVar36 = iVar7;
      }
      if (in_FPSCR_SZ == '\0') {
        ar7[6] = *(undefined4 *)(unsigned)(puVar11 + iVar1 + 0x24);
        ar7[3] = *(undefined4 *)(unsigned)(puVar11 + iVar1 + 0x14);
        ar7[2] = *(undefined4 *)(unsigned)(puVar11 + iVar1 + 0x10);
        uVar28 = 0xe0000000;
        puVar9 = (undefined8 *)(unsigned)(ar7 + 1);
        *(undefined4 *)(unsigned)puVar9 = *(undefined4 *)(unsigned)puVar8;
      }
      else {
        *(undefined8 *)(unsigned)(ar7 + 5) = *(undefined8 *)(unsigned)(puVar11 + iVar1 + 0x24);
        *(undefined8 *)(unsigned)(ar7 + 1) = *(undefined8 *)(unsigned)(puVar11 + iVar1 + 0x14);
        *(undefined8 *)(unsigned)(ar7 + -1) = *(undefined8 *)(unsigned)(puVar11 + iVar1 + 0x10);
        uVar28 = 0xe0000000;
        puVar9 = (undefined8 *)(unsigned)(ar7 + -3);
        *puVar9 = *puVar8;
      }
      *(undefined4 *)(unsigned)((int)puVar9 + -4) = uVar28;
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(unsigned)((int)puVar9 + 0x34) = *(undefined4 *)(unsigned)(puVar11 + iVar1 + 0x40);
        *(undefined4 *)(unsigned)(puVar9 + 5) = *(undefined4 *)(unsigned)(puVar11 + iVar1 + 0x30);
        *(undefined4 *)(unsigned)((int)puVar9 + 0x24) = *(undefined4 *)(unsigned)(puVar11 + iVar1 + 0x2c);
        puVar9 = puVar9 + 4;
        *(undefined4 *)(unsigned)puVar9 = *(undefined4 *)(unsigned)(puVar11 + iVar1 + 0x28);
      }
      else {
        puVar9[6] = *(undefined8 *)(unsigned)(puVar11 + iVar1 + 0x40);
        puVar9[4] = *(undefined8 *)(unsigned)(puVar11 + iVar1 + 0x30);
        puVar9[3] = *(undefined8 *)(unsigned)(puVar11 + iVar1 + 0x2c);
        puVar9 = puVar9 + 2;
        *puVar9 = *(undefined8 *)(unsigned)(puVar11 + iVar1 + 0x28);
      }
      *(undefined4 *)(unsigned)((int)puVar9 + -4) = uVar28;
      if (iVar6 != 3) {
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)(unsigned)((int)puVar9 + 0x34) = *(undefined4 *)(unsigned)(puVar11 + iVar1 + 0x78);
          *(undefined4 *)(unsigned)(puVar9 + 5) = *(undefined4 *)(unsigned)(puVar11 + iVar1 + 0x68);
          *(undefined4 *)(unsigned)((int)puVar9 + 0x24) = *(undefined4 *)(unsigned)(puVar11 + iVar1 + 100);
          puVar9 = puVar9 + 4;
          *(undefined4 *)(unsigned)puVar9 = *(undefined4 *)(unsigned)(puVar11 + iVar1 + 0x60);
        }
        else {
          puVar9[6] = *(undefined8 *)(unsigned)(puVar11 + iVar1 + 0x78);
          puVar9[4] = *(undefined8 *)(unsigned)(puVar11 + iVar1 + 0x68);
          puVar9[3] = *(undefined8 *)(unsigned)(puVar11 + iVar1 + 100);
          puVar9 = puVar9 + 2;
          *puVar9 = *(undefined8 *)(unsigned)(puVar11 + iVar1 + 0x60);
        }
        *(undefined4 *)(unsigned)((int)puVar9 + -4) = uVar28;
      }
      uVar28 = 0xf0000000;
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(unsigned)((int)puVar9 + 0x34) = *(undefined4 *)(unsigned)(puVar11 + iVar1 + 0x5c);
        *(undefined4 *)(unsigned)(puVar9 + 5) = *(undefined4 *)(unsigned)(puVar11 + iVar1 + 0x4c);
        *(undefined4 *)(unsigned)((int)puVar9 + 0x24) = *(undefined4 *)(unsigned)(puVar11 + iVar1 + 0x48);
        puVar9 = puVar9 + 4;
        *(undefined4 *)(unsigned)puVar9 = *(undefined4 *)(unsigned)(puVar11 + iVar1 + 0x44);
      }
      else {
        puVar9[6] = *(undefined8 *)(unsigned)(puVar11 + iVar1 + 0x5c);
        puVar9[4] = *(undefined8 *)(unsigned)(puVar11 + iVar1 + 0x4c);
        puVar9[3] = *(undefined8 *)(unsigned)(puVar11 + iVar1 + 0x48);
        puVar9 = puVar9 + 2;
        *puVar9 = *(undefined8 *)(unsigned)(puVar11 + iVar1 + 0x44);
      }
      *(undefined4 *)(unsigned)((int)puVar9 + -4) = uVar28;
      ar7 = (undefined4 *)(unsigned)((int)puVar9 + 0x1c);
      *(undefined4 *)(unsigned)0x8c4aa520 = *(undefined4 *)(unsigned)0x8c4aa520 + iVar6;
    }
  }
  return ar7;
}

__asm__(".globl _FUN_8c228a5c\n.set _FUN_8c228a5c, _FUN_8c228a5c_def\n");
