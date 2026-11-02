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
undefined8 * FUN_8c23231c_def(double *ar4,double *ar5,double *ar6,undefined8 *ar7)

{
  ring[rp++ & 255] = "FUN_8c23231c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 328; for (int i_ = 0; i_ < 328; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  int iVar4;
  int iVar5;
  double *pdVar6;
  double *pdVar7;
  int iVar8;
  undefined8 *puVar9;
  double *pdVar10;
  float *pfVar11;
  undefined1 *puVar12;
  float in_fr1 = 0;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined4 in_fr3 = 0;
  undefined4 uVar16;
  float fVar17;
  float fVar18;
  double dVar19;
  float fVar22;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined4 uVar23;
  double in_dr4 = 0;
  double in_dr6 = 0;
  double dVar24;
  double in_dr8 = 0;
  double dVar25;
  float in_fr11 = 0;
  float in_fr10 = 0;
  double in_dr12 = 0;
  double dVar26;
  float fVar27;
  double in_dr14 = 0;
  double dVar28;
  double in_xd0 = 0;
  double in_xd2 = 0;
  double in_xd4 = 0;
  double in_xd6 = 0;
  double in_xd8 = 0;
  double in_xd12 = 0;
  double in_xd14 = 0;
  bool bVar29;
  char in_FPSCR_PR = 0;
  char in_FPSCR_SZ = 0;
  
  fVar27 = F32LO(in_dr14);
  if (in_FPSCR_SZ == '\0') {
    pfVar11 = &(*(float *)(fr0_ - 0x18));
    *(ulonglong *)(unsigned)((undefined1 *)(fr0_ - 0x1c)) = CONCAT44(fVar27,((undefined1 *)(fr0_ - 0x1c)));
  }
  else {
    pfVar11 = (float *)(unsigned)((undefined1 *)(fr0_ - 0x1c));
  }
  iVar2 = (int)(int)0xfffffee0;
  uVar16 = (undefined4)((ulonglong)in_dr12 >> 0x20);
  if (in_FPSCR_SZ == '\0') {
    *(int *)(unsigned)((int)pfVar11 + -4) = SUB84(in_dr12,0);
    puVar12 = (undefined1 *)(unsigned)((int)pfVar11 + -8);
    *(undefined4 *)(unsigned)((int)pfVar11 + -8) = uVar16;
  }
  else {
    *(double *)(unsigned)((int)pfVar11 + -8) = in_xd12;
    puVar12 = (undefined1 *)(unsigned)((int)pfVar11 + -0x10);
    *(double *)(unsigned)((int)pfVar11 + -0x10) = in_dr12;
  }
  if ((*(undefined4 *)(unsigned)0x8c4aa4f0 & 0x10000) == 0) {
    if (in_FPSCR_SZ == '\0') {
      fVar27 = *(float *)(unsigned)0x8c4aa4a8;
      in_dr14 = CONCAT44D((int)((ulonglong)in_dr14 >> 0x20),fVar27);
      dVar19 = CONCAT44D(*(undefined4 *)(unsigned)0x8c4aa4e0,in_fr3);
      in_dr12 = CONCAT44D(uVar16,fVar27);
    }
    else {
      in_xd12 = *(undefined4 *)(unsigned)0x8c4aa4a8;
      dVar19 = *(undefined4 *)(unsigned)0x8c4aa4e0;
      in_xd14 = in_xd12;
    }
    fVar22 = F32HI(dVar19);
    if (in_FPSCR_PR == '\0') {
      dVar28 = CONCAT44D((int)((ulonglong)in_dr14 >> 0x20),fVar27 * fVar22);
    }
    else {
      dVar28 = in_dr14 * dVar19;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar19 = CONCAT44D(fVar22,*(undefined4 *)(unsigned)0x8c4aa4dc);
    }
    else {
      in_xd2 = *(undefined4 *)(unsigned)0x8c4aa4dc;
    }
    if (in_FPSCR_PR == '\0') {
      dVar26 = CONCAT44D((int)((ulonglong)in_dr12 >> 0x20),F32LO(in_dr12) * F32LO(dVar19)
                               );
    }
    else {
      dVar26 = in_dr12 * dVar19;
    }
    dVar14 = in_xd14;
    if (in_FPSCR_SZ == '\0') {
      dVar14 = in_xd0;
      in_fr1 = SUB84(dVar28,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(unsigned)(puVar12 + iVar2 + 4) = SUB84(dVar28,0);
    }
    else {
      *(double *)(unsigned)(puVar12 + iVar2 + 4) = in_xd14;
    }
    uVar16 = (undefined4)(D2U(dVar28) >> 0x20);
    if (in_FPSCR_PR == '\0') {
      dVar28 = CONCAT44D(uVar16,1.0 / in_fr1);
      dVar13 = CONCAT44D(1.0 / F32LO(dVar26),in_fr1);
    }
    else {
      dVar28 = CONCAT44D(uVar16,0x3f800000) / CONCAT44D(0x3f800000,in_fr1);
      dVar13 = CONCAT44D(0x3f800000,in_fr1) / dVar26;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar26 = CONCAT44D(*(undefined4 *)(unsigned)((unsigned)0x8c4aa4a8 + 0xc),SUB84(dVar26,0));
      dVar19 = (double)(ulonglong)*(uint *)(unsigned)(0x8c4aa4a8 + 2);
    }
    else {
      dVar26 = *(double *)(unsigned)((unsigned)0x8c4aa4a8 + 0xc);
      in_xd2 = ((undefined1 *)(unsigned)2)[0x8c4aa4a8];
    }
    uVar16 = SUB84(dVar19,0);
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(unsigned)(puVar12 + iVar2) = uVar16;
      uVar16 = *(undefined4 *)(unsigned)((int)ar4 + 4);
    }
    else {
      *(double *)(unsigned)(puVar12 + iVar2) = in_xd2;
      in_xd2 = *(double *)(unsigned)((int)ar4 + 4);
    }
    pdVar10 = (double *)(unsigned)(puVar12 + 0xa8 + iVar2);
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(unsigned)pdVar10 = uVar16;
      *(undefined4 *)(unsigned)((int)pdVar10 + 4) = *(undefined4 *)(unsigned)(ar4 + 1);
      *(undefined4 *)(unsigned)(pdVar10 + 1) = *(undefined4 *)(unsigned)((int)ar4 + 0xc);
      *(undefined4 *)(unsigned)((int)pdVar10 + 0x14) = *(undefined4 *)(unsigned)ar4;
      dVar19 = CONCAT44D(*(undefined4 *)(unsigned)ar4,*(undefined4 *)(unsigned)((int)ar4 + 4));
    }
    else {
      *pdVar10 = in_xd2;
      *(double *)(unsigned)((int)pdVar10 + 4) = ar4[1];
      pdVar10[1] = *(double *)(unsigned)((int)ar4 + 0xc);
      *(double *)(unsigned)((int)pdVar10 + 0x14) = *ar4;
      in_xd2 = *(double *)(unsigned)((int)ar4 + 4);
      dVar19 = *ar4;
    }
    fVar22 = F32HI(dVar26);
    fVar27 = F32HI(dVar13);
    if (in_FPSCR_PR == '\0') {
      fVar17 = (F32LO(dVar19) - fVar22) * F32HI(dVar19) * fVar27;
    }
    else {
      fVar17 = SUB84((dVar19 - dVar26) * (dVar19 - dVar26) * dVar13,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(unsigned)((int)pdVar10 + 0xc) = fVar17;
      dVar19 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 1),*(undefined4 *)(unsigned)(puVar12 + iVar2));
    }
    else {
      *(double *)(unsigned)((int)pdVar10 + 0xc) = in_xd2;
      dVar19 = ar4[1];
      in_xd2 = *(double *)(unsigned)(puVar12 + iVar2);
    }
    if (in_FPSCR_PR == '\0') {
      dVar19 = CONCAT44D(F32HI(dVar19) - F32LO(dVar19),SUB84(dVar19,0)
                               );
    }
    else {
      dVar19 = dVar19 - dVar19;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar19 = CONCAT44D((int)(D2U(dVar19) >> 0x20),*(undefined4 *)(unsigned)ar4);
    }
    else {
      in_xd2 = *ar4;
    }
    fVar17 = F32LO(dVar28);
    if (in_FPSCR_PR == '\0') {
      dVar19 = CONCAT44D(F32HI(dVar19) * F32LO(dVar19) * fVar17,
                                SUB84(dVar19,0));
    }
    else {
      dVar19 = dVar19 * dVar19 * dVar28;
    }
    uVar16 = (undefined4)(D2U(dVar19) >> 0x20);
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(unsigned)(pdVar10 + 2) = uVar16;
      dVar19 = CONCAT44D(uVar16,*(undefined4 *)(unsigned)(ar4 + 2));
    }
    else {
      pdVar10[2] = dVar19;
      in_xd2 = ar4[2];
    }
    if (in_FPSCR_PR == '\0') {
      fVar18 = F32LO(dVar19) + in_fr10;
      bVar29 = fVar18 < in_fr10;
    }
    else {
      dVar19 = dVar19 + CONCAT44D(in_fr10,in_fr11);
      fVar18 = F32LO(dVar19);
      bVar29 = dVar19 < CONCAT44D(in_fr10,in_fr11);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(unsigned)(pdVar10 + 4) = fVar18;
    }
    else {
      pdVar10[4] = in_xd2;
    }
    if (bVar29) {
      if (in_FPSCR_SZ == '\0') {
        *(float *)(unsigned)(pdVar10 + 4) = in_fr10;
      }
      else {
        pdVar10[4] = CONCAT44D(in_fr10,in_fr11);
      }
    }
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(unsigned)((int)pdVar10 + 0x24) = *(undefined4 *)(unsigned)((int)ar4 + 0x14);
      *(int *)(unsigned)(pdVar10 + 3) = (int)((ulonglong)in_dr4 >> 0x20);
      *(int *)(unsigned)((int)pdVar10 + 0x1c) = SUB84(in_dr4,0);
      *(undefined4 *)(unsigned)(pdVar10 + 5) = *(undefined4 *)(unsigned)((int)ar5 + 4);
      *(undefined4 *)(unsigned)((int)pdVar10 + 0x2c) = *(undefined4 *)(unsigned)(ar5 + 1);
      *(undefined4 *)(unsigned)(pdVar10 + 6) = *(undefined4 *)(unsigned)((int)ar5 + 0xc);
      *(undefined4 *)(unsigned)((int)pdVar10 + 0x3c) = *(undefined4 *)(unsigned)ar5;
      dVar19 = CONCAT44D(*(undefined4 *)(unsigned)ar5,*(undefined4 *)(unsigned)((int)ar5 + 4));
    }
    else {
      *(undefined8 *)(unsigned)((int)pdVar10 + 0x24) = *(undefined8 *)(unsigned)((int)ar4 + 0x14);
      pdVar10[3] = in_dr4;
      *(double *)(unsigned)((int)pdVar10 + 0x1c) = in_xd4;
      pdVar10[5] = *(double *)(unsigned)((int)ar5 + 4);
      *(double *)(unsigned)((int)pdVar10 + 0x2c) = ar5[1];
      pdVar10[6] = *(double *)(unsigned)((int)ar5 + 0xc);
      *(double *)(unsigned)((int)pdVar10 + 0x3c) = *ar5;
      in_xd2 = *(double *)(unsigned)((int)ar5 + 4);
      dVar19 = *ar5;
    }
    if (in_FPSCR_PR == '\0') {
      fVar18 = (F32LO(dVar19) - fVar22) * F32HI(dVar19) * fVar27;
    }
    else {
      fVar18 = SUB84((dVar19 - dVar26) * (dVar19 - dVar26) * dVar13,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(unsigned)((int)pdVar10 + 0x34) = fVar18;
      dVar19 = CONCAT44D(*(undefined4 *)(unsigned)(ar5 + 1),*(undefined4 *)(unsigned)(puVar12 + iVar2));
    }
    else {
      *(double *)(unsigned)((int)pdVar10 + 0x34) = in_xd2;
      dVar19 = ar5[1];
      in_xd2 = *(double *)(unsigned)(puVar12 + iVar2);
    }
    if (in_FPSCR_PR == '\0') {
      dVar19 = CONCAT44D(F32HI(dVar19) - F32LO(dVar19),SUB84(dVar19,0)
                               );
    }
    else {
      dVar19 = dVar19 - dVar19;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar19 = CONCAT44D((int)(D2U(dVar19) >> 0x20),*(undefined4 *)(unsigned)ar5);
    }
    else {
      in_xd2 = *ar5;
    }
    if (in_FPSCR_PR == '\0') {
      dVar19 = CONCAT44D(F32HI(dVar19) * F32LO(dVar19) * fVar17,
                                SUB84(dVar19,0));
    }
    else {
      dVar19 = dVar19 * dVar19 * dVar28;
    }
    uVar16 = (undefined4)(D2U(dVar19) >> 0x20);
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(unsigned)(pdVar10 + 7) = uVar16;
      dVar19 = CONCAT44D(uVar16,*(undefined4 *)(unsigned)(ar5 + 2));
    }
    else {
      pdVar10[7] = dVar19;
      in_xd2 = ar5[2];
    }
    if (in_FPSCR_PR == '\0') {
      fVar18 = F32LO(dVar19) + in_fr10;
      bVar29 = fVar18 < in_fr10;
    }
    else {
      dVar19 = dVar19 + CONCAT44D(in_fr10,in_fr11);
      fVar18 = F32LO(dVar19);
      bVar29 = dVar19 < CONCAT44D(in_fr10,in_fr11);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(unsigned)(pdVar10 + 9) = fVar18;
    }
    else {
      pdVar10[9] = in_xd2;
    }
    if (bVar29) {
      if (in_FPSCR_SZ == '\0') {
        *(float *)(unsigned)(pdVar10 + 9) = in_fr10;
      }
      else {
        pdVar10[9] = CONCAT44D(in_fr10,in_fr11);
      }
    }
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(unsigned)((int)pdVar10 + 0x4c) = *(undefined4 *)(unsigned)((int)ar5 + 0x14);
      *(int *)(unsigned)(pdVar10 + 8) = (int)((ulonglong)in_dr6 >> 0x20);
      *(int *)(unsigned)((int)pdVar10 + 0x44) = SUB84(in_dr6,0);
      *(undefined4 *)(unsigned)(pdVar10 + 10) = *(undefined4 *)(unsigned)((int)ar6 + 4);
      *(undefined4 *)(unsigned)((int)pdVar10 + 0x54) = *(undefined4 *)(unsigned)(ar6 + 1);
      *(undefined4 *)(unsigned)(pdVar10 + 0xb) = *(undefined4 *)(unsigned)((int)ar6 + 0xc);
      *(undefined4 *)(unsigned)((int)pdVar10 + 100) = *(undefined4 *)(unsigned)ar6;
      dVar19 = CONCAT44D(*(undefined4 *)(unsigned)ar6,*(undefined4 *)(unsigned)((int)ar6 + 4));
    }
    else {
      *(undefined8 *)(unsigned)((int)pdVar10 + 0x4c) = *(undefined8 *)(unsigned)((int)ar5 + 0x14);
      pdVar10[8] = in_dr6;
      *(double *)(unsigned)((int)pdVar10 + 0x44) = in_xd6;
      pdVar10[10] = *(double *)(unsigned)((int)ar6 + 4);
      *(double *)(unsigned)((int)pdVar10 + 0x54) = ar6[1];
      pdVar10[0xb] = *(double *)(unsigned)((int)ar6 + 0xc);
      *(double *)(unsigned)((int)pdVar10 + 100) = *ar6;
      in_xd2 = *(double *)(unsigned)((int)ar6 + 4);
      dVar19 = *ar6;
    }
    if (in_FPSCR_PR == '\0') {
      fVar27 = (F32LO(dVar19) - fVar22) * F32HI(dVar19) * fVar27;
    }
    else {
      fVar27 = SUB84((dVar19 - dVar26) * (dVar19 - dVar26) * dVar13,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(unsigned)((int)pdVar10 + 0x5c) = fVar27;
      dVar19 = CONCAT44D(*(undefined4 *)(unsigned)(ar6 + 1),*(undefined4 *)(unsigned)(puVar12 + iVar2));
    }
    else {
      *(double *)(unsigned)((int)pdVar10 + 0x5c) = in_xd2;
      dVar19 = ar6[1];
      in_xd2 = *(double *)(unsigned)(puVar12 + iVar2);
    }
    if (in_FPSCR_PR == '\0') {
      dVar19 = CONCAT44D(F32HI(dVar19) - F32LO(dVar19),SUB84(dVar19,0)
                               );
    }
    else {
      dVar19 = dVar19 - dVar19;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar19 = CONCAT44D((int)(D2U(dVar19) >> 0x20),*(undefined4 *)(unsigned)ar6);
    }
    else {
      in_xd2 = *ar6;
    }
    if (in_FPSCR_PR == '\0') {
      dVar28 = CONCAT44D(F32HI(dVar19) * F32LO(dVar19) * fVar17,
                                SUB84(dVar19,0));
    }
    else {
      dVar28 = dVar19 * dVar19 * dVar28;
    }
    uVar16 = (undefined4)(D2U(dVar28) >> 0x20);
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(unsigned)(pdVar10 + 0xc) = uVar16;
      dVar28 = CONCAT44D(uVar16,*(undefined4 *)(unsigned)(ar6 + 2));
    }
    else {
      pdVar10[0xc] = dVar28;
      in_xd2 = ar6[2];
    }
    if (in_FPSCR_PR == '\0') {
      fVar27 = F32LO(dVar28) + in_fr10;
      dVar28 = CONCAT44D((int)(D2U(dVar28) >> 0x20),fVar27);
      bVar29 = fVar27 < in_fr10;
    }
    else {
      dVar28 = dVar28 + CONCAT44D(in_fr10,in_fr11);
      fVar27 = F32LO(dVar28);
      bVar29 = dVar28 < CONCAT44D(in_fr10,in_fr11);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(unsigned)(pdVar10 + 0xe) = fVar27;
    }
    else {
      pdVar10[0xe] = in_xd2;
    }
    if (bVar29) {
      if (in_FPSCR_SZ == '\0') {
        *(float *)(unsigned)(pdVar10 + 0xe) = in_fr10;
      }
      else {
        pdVar10[0xe] = CONCAT44D(in_fr10,in_fr11);
      }
    }
    uVar16 = SUB84(in_dr8,0);
    if (in_FPSCR_SZ == '\0') {
      dVar28 = CONCAT44D((int)(D2U(dVar28) >> 0x20),*(undefined4 *)(unsigned)((int)ar6 + 0x14));
      *(undefined4 *)(unsigned)((int)pdVar10 + 0x74) = *(undefined4 *)(unsigned)((int)ar6 + 0x14);
      *(int *)(unsigned)(pdVar10 + 0xd) = (int)((ulonglong)in_dr8 >> 0x20);
      *(undefined4 *)(unsigned)((int)pdVar10 + 0x6c) = uVar16;
      uVar16 = *(undefined4 *)(unsigned)((int)pdVar10 + 0x3c);
      dVar19 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar10 + 2),SUB84(in_dr4,0));
      dVar13 = CONCAT44D(uVar16,SUB84(dVar13,0));
    }
    else {
      in_xd2 = *(double *)(unsigned)((int)ar6 + 0x14);
      *(double *)(unsigned)((int)pdVar10 + 0x74) = in_xd2;
      pdVar10[0xd] = in_dr8;
      *(double *)(unsigned)((int)pdVar10 + 0x6c) = in_xd8;
      dVar13 = *(double *)(unsigned)((int)pdVar10 + 0x3c);
      dVar19 = pdVar10[2];
      in_xd8 = dVar13;
    }
    fVar27 = F32HI(dVar19);
    if (in_FPSCR_PR == '\0') {
      dVar13 = CONCAT44D(F32HI(dVar13) * fVar27,SUB84(dVar13,0));
    }
    else {
      dVar13 = dVar13 * dVar19;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar28 = CONCAT44D((int)(D2U(dVar28) >> 0x20),*(undefined4 *)(unsigned)(pdVar10 + 7));
      dVar25 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar10 + 0x14),uVar16);
      dVar24 = *(double *)(unsigned)((int)pdVar10 + 0x34);
    }
    else {
      dVar24 = pdVar10[7];
      dVar25 = *(double *)(unsigned)((int)pdVar10 + 0x14);
      in_xd6 = *(double *)(unsigned)((int)pdVar10 + 0x34);
      in_xd2 = dVar24;
    }
    fVar17 = F32HI(dVar25);
    if (in_FPSCR_PR == '\0') {
      fVar18 = F32LO(dVar28) * fVar17;
    }
    else {
      fVar18 = SUB84(dVar28 * dVar25,0);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar19 = CONCAT44D(fVar27,*(undefined4 *)(unsigned)((int)pdVar10 + 0xc));
      in_xd8 = CONCAT44D(SUB84(dVar25,0),fVar18);
    }
    else {
      in_xd4 = *(double *)(unsigned)((int)pdVar10 + 0xc);
    }
    if (in_FPSCR_PR == '\0') {
      dVar28 = CONCAT44D(F32HI(in_xd8) * F32LO(dVar19),SUB84(in_xd8,0)
                               );
    }
    else {
      dVar28 = in_xd8 * dVar19;
    }
    dVar15 = dVar24;
    if (in_FPSCR_SZ == '\0') {
      dVar13 = CONCAT44D((int)(D2U(dVar13) >> 0x20),(int)(D2U(dVar24) >> 0x20));
      dVar15 = dVar14;
    }
    if (in_FPSCR_PR == '\0') {
      dVar14 = CONCAT44D(F32HI(dVar13) - F32LO(dVar28),
                                F32LO(dVar13) * F32LO(dVar19));
    }
    else {
      dVar14 = dVar13 * dVar19 - dVar28;
    }
    dVar13 = in_xd6;
    if (in_FPSCR_SZ == '\0') {
      dVar28 = CONCAT44D((int)(D2U(dVar28) >> 0x20),SUB84(dVar24,0));
      dVar13 = in_xd2;
    }
    if (in_FPSCR_PR == '\0') {
      fVar27 = F32LO(dVar28) * fVar17 - F32HI(dVar28);
    }
    else {
      fVar27 = SUB84(dVar28 * dVar25 - dVar28 * dVar25,0);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar28 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar10 + 0xc),fVar27);
    }
    else {
      dVar28 = pdVar10[0xc];
    }
    if (in_FPSCR_PR == '\0') {
      dVar28 = CONCAT44D(F32HI(dVar28) * F32LO(dVar28),SUB84(dVar28,0)
                               );
    }
    else {
      dVar28 = dVar28 * dVar28;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar28 = CONCAT44D((int)(D2U(dVar28) >> 0x20),
                                *(undefined4 *)(unsigned)((int)pdVar10 + 0x5c));
    }
    else {
      dVar13 = *(double *)(unsigned)((int)pdVar10 + 0x5c);
    }
    if (in_FPSCR_PR == '\0') {
      dVar28 = CONCAT44D(F32HI(dVar14) * F32LO(dVar28) +
                                F32HI(dVar28),SUB84(dVar28,0));
    }
    if (in_FPSCR_SZ == '\0') {
      dVar28 = CONCAT44D((int)(D2U(dVar28) >> 0x20),SUB84(dVar24,0));
      in_xd6 = dVar13;
    }
    if (in_FPSCR_PR == '\0') {
      fVar27 = F32LO(dVar28) * F32HI(dVar19);
      dVar28 = CONCAT44D((int)(D2U(dVar28) >> 0x20),fVar27);
      fVar27 = F32LO(dVar14) - fVar27;
    }
    else {
      dVar28 = dVar28 * dVar19;
      fVar27 = SUB84(dVar14 - dVar28,0);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar15 = CONCAT44D(fVar27,*(undefined4 *)(unsigned)((int)pdVar10 + 100));
    }
    if (in_FPSCR_PR == '\0') {
      dVar28 = (double)((ulonglong)
                        (uint)((F32HI(dVar15) * F32LO(dVar15) +
                               F32HI(dVar28)) * in_fr11) << 0x20);
    }
    else {
      dVar28 = (double)(D2U(dVar28) & 0xffffffff00000000) * CONCAT44D(in_fr10,in_fr11);
    }
    if (in_FPSCR_PR == '\0' && F32HI(dVar28) < SUB84(dVar28,0)) {
      iVar4 = 0;
      puVar9 = (undefined8 *)(unsigned)(puVar12 + iVar2 + 8);
      iVar1 = 0;
      iVar8 = 2;
      while (iVar5 = iVar1, iVar5 < 3) {
        if (in_FPSCR_SZ == '\0') {
          uVar20 = CONCAT44(*(undefined4 *)(unsigned)((int)pdVar10 + iVar8 * 0x28 + 0x14),0x3f800000);
        }
        else {
          uVar20 = *(undefined8 *)(unsigned)((int)pdVar10 + iVar8 * 0x28 + 0x14);
        }
        puVar3 = (undefined8 *)(unsigned)((int)pdVar10 + iVar5 * 0x28 + 0x14);
        if (in_FPSCR_SZ == '\0') {
          uVar21 = CONCAT44(*(undefined4 *)(unsigned)puVar3,(float)uVar20);
        }
        else {
          uVar21 = *puVar3;
        }
        fVar27 = (float)uVar21;
        if (((in_FPSCR_PR == '\0' && (float)uVar20 < F32HI(uVar20)) ^ 1) !=
            -((in_FPSCR_PR == '\0' && fVar27 < F32HI(uVar21)) - 1)) {
          if (in_FPSCR_SZ == '\0') {
            fVar27 = *(float *)(unsigned)((int)pdVar10 + iVar8 * 0x28 + 0x14);
            dVar15 = CONCAT44D((int)(D2U(dVar15) >> 0x20),
                                      *(undefined4 *)(unsigned)((int)pdVar10 + iVar5 * 0x28 + 0x14));
            fVar17 = fVar27;
            dVar19 = CONCAT44D(fVar27,SUB84(dVar19,0));
          }
          else {
            in_xd6 = *(double *)(unsigned)((int)pdVar10 + iVar8 * 0x28 + 0x14);
            fVar17 = F32HI(in_xd6);
            dVar19 = in_xd6;
          }
          dVar28 = CONCAT44D(0x3f800000,-fVar27);
          if (in_FPSCR_PR == '\0') {
            dVar28 = CONCAT44D(0x3f800000,-fVar27 + 1.0);
            dVar15 = CONCAT44D((int)(D2U(dVar15) >> 0x20),F32LO(dVar15) - fVar17);
          }
          else {
            dVar28 = dVar28 + dVar28;
            dVar15 = dVar15 - dVar19;
          }
          if (in_FPSCR_SZ == '\0') {
            dVar14 = CONCAT44D(SUB84(dVar28,0),
                                      *(undefined4 *)(unsigned)((int)pdVar10 + iVar8 * 0x28 + 0xc));
          }
          else {
            in_xd4 = *(double *)(unsigned)((int)pdVar10 + iVar8 * 0x28 + 0xc);
            dVar14 = in_xd6;
          }
          if (in_FPSCR_PR == '\0') {
            dVar14 = CONCAT44D(F32HI(dVar14) / F32LO(dVar15),
                                      SUB84(dVar14,0));
          }
          else {
            dVar14 = dVar14 / dVar15;
          }
          if (in_FPSCR_SZ == '\0') {
            dVar28 = CONCAT44D((int)(D2U(dVar28) >> 0x20),
                                      *(undefined4 *)(unsigned)((int)pdVar10 + iVar5 * 0x28 + 0xc));
            dVar15 = (double)(D2U(dVar14) & 0xffffffff);
          }
          else {
            in_xd6 = *(double *)(unsigned)((int)pdVar10 + iVar5 * 0x28 + 0xc);
          }
          if (in_FPSCR_PR == '\0') {
            dVar28 = CONCAT44D((int)(D2U(dVar28) >> 0x20),
                                      F32LO(dVar28) - F32LO(dVar14));
          }
          else {
            dVar28 = dVar28 - dVar14;
          }
          uVar16 = (undefined4)(D2U(dVar14) >> 0x20);
          if (in_FPSCR_SZ == '\0') {
            dVar13 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar10 + iVar8 * 5 + 2),SUB84(dVar24,0));
            dVar14 = CONCAT44D(uVar16,SUB84(dVar15,0));
            dVar19 = CONCAT44D(uVar16,fVar22);
          }
          else {
            dVar13 = pdVar10[iVar8 * 5 + 2];
            dVar19 = dVar14;
            in_xd4 = dVar26;
          }
          if (in_FPSCR_PR == '\0') {
            dVar14 = (double)(ulonglong)
                             (uint)(F32HI(dVar14) * F32LO(dVar28) +
                                   SUB84(dVar14,0));
          }
          if (in_FPSCR_SZ == '\0') {
            dVar28 = CONCAT44D((int)(D2U(dVar28) >> 0x20),
                                      *(undefined4 *)(unsigned)(pdVar10 + iVar5 * 5 + 2));
            dVar14 = CONCAT44D(SUB84(dVar26,0),SUB84(dVar14,0));
          }
          else {
            in_xd6 = pdVar10[iVar5 * 5 + 2];
            dVar14 = in_xd12;
          }
          fVar27 = F32HI(dVar13);
          if (in_FPSCR_PR == '\0') {
            dVar28 = CONCAT44D((int)(D2U(dVar28) >> 0x20),F32LO(dVar28) - fVar27);
            dVar19 = CONCAT44D(uVar16,F32HI(dVar14) * F32LO(dVar14) +
                                             SUB84(dVar19,0));
          }
          else {
            dVar28 = dVar28 - dVar13;
          }
          uVar16 = (undefined4)(D2U(dVar19) >> 0x20);
          if (in_FPSCR_SZ == '\0') {
            dVar24 = CONCAT44D(*(undefined4 *)(unsigned)(puVar12 + iVar2),SUB84(dVar13,0));
            dVar14 = CONCAT44D(uVar16,fVar27);
          }
          else {
            dVar24 = *(double *)(unsigned)(puVar12 + iVar2);
            dVar14 = dVar19;
          }
          if (in_FPSCR_PR == '\0') {
            dVar14 = (double)(ulonglong)
                             (uint)(F32HI(dVar14) * F32LO(dVar28) +
                                   SUB84(dVar14,0));
          }
          if (in_FPSCR_SZ == '\0') {
            uVar20 = CONCAT44(*(undefined4 *)(unsigned)(puVar12 + iVar2 + 4),SUB84(dVar14,0));
          }
          else {
            uVar20 = *(undefined8 *)(unsigned)(puVar12 + iVar2 + 4);
          }
          if (in_FPSCR_PR == '\0') {
            dVar24 = CONCAT44D(F32HI(uVar20) * (float)uVar20 +
                                      F32HI(dVar24),SUB84(dVar24,0));
          }
          dVar15 = dVar19;
          if (in_FPSCR_SZ == '\0') {
            dVar15 = CONCAT44D(uVar16,(float)uVar20);
          }
          pdVar6 = (double *)(unsigned)(puVar9 + iVar4 * 5);
          uVar23 = (undefined4)(D2U(dVar28) >> 0x20);
          if (in_FPSCR_SZ == '\0') {
            *(int *)(unsigned)pdVar6 = SUB84(dVar19,0);
            *(int *)(unsigned)((int)pdVar6 + 4) = (int)(D2U(dVar24) >> 0x20);
            *(undefined4 *)(unsigned)(pdVar6 + 1) = uVar23;
            dVar28 = CONCAT44D(uVar23,*(undefined4 *)(unsigned)(pdVar10 + iVar5 * 5 + 3));
            dVar19 = CONCAT44D(uVar16,*(undefined4 *)(unsigned)(pdVar10 + iVar8 * 5 + 3));
          }
          else {
            *pdVar6 = in_xd4;
            *(double *)(unsigned)((int)pdVar6 + 4) = dVar24;
            pdVar6[1] = dVar28;
            in_xd6 = pdVar10[iVar5 * 5 + 3];
            in_xd4 = pdVar10[iVar8 * 5 + 3];
          }
          if (in_FPSCR_PR == '\0') {
            fVar27 = F32LO(dVar28) - F32LO(dVar19);
          }
          else {
            fVar27 = SUB84(dVar28 - dVar19,0);
          }
          dVar28 = in_xd4;
          if (in_FPSCR_SZ == '\0') {
            dVar28 = CONCAT44D(SUB84(dVar19,0),fVar27);
          }
          fVar27 = F32HI(dVar15);
          if (in_FPSCR_PR == '\0') {
            dVar28 = CONCAT44D(fVar27 * F32LO(dVar28) + F32HI(dVar28),
                                      SUB84(dVar28,0));
          }
          uVar16 = (undefined4)(D2U(dVar28) >> 0x20);
          if (in_FPSCR_SZ == '\0') {
            *(undefined4 *)(unsigned)(pdVar6 + 3) = uVar16;
            dVar28 = CONCAT44D(uVar16,*(undefined4 *)(unsigned)((int)pdVar10 + iVar5 * 0x28 + 0x1c));
            dVar19 = CONCAT44D((int)(D2U(dVar19) >> 0x20),
                                      *(undefined4 *)(unsigned)((int)pdVar10 + iVar8 * 0x28 + 0x1c));
          }
          else {
            pdVar6[3] = dVar28;
            in_xd6 = *(double *)(unsigned)((int)pdVar10 + iVar5 * 0x28 + 0x1c);
            in_xd4 = *(double *)(unsigned)((int)pdVar10 + iVar8 * 0x28 + 0x1c);
          }
          if (in_FPSCR_PR == '\0') {
            fVar17 = F32LO(dVar28) - F32LO(dVar19);
          }
          else {
            fVar17 = SUB84(dVar28 - dVar19,0);
          }
          dVar28 = in_xd4;
          if (in_FPSCR_SZ == '\0') {
            dVar28 = CONCAT44D(SUB84(dVar19,0),fVar17);
          }
          if (in_FPSCR_PR == '\0') {
            dVar28 = CONCAT44D(fVar27 * F32LO(dVar28) + F32HI(dVar28),
                                      SUB84(dVar28,0));
          }
          uVar16 = (undefined4)(D2U(dVar28) >> 0x20);
          if (in_FPSCR_SZ == '\0') {
            *(undefined4 *)(unsigned)((int)pdVar6 + 0x1c) = uVar16;
            dVar28 = CONCAT44D(uVar16,*(undefined4 *)(unsigned)(pdVar10 + iVar5 * 5 + 4));
            dVar19 = CONCAT44D((int)(D2U(dVar19) >> 0x20),
                                      *(undefined4 *)(unsigned)(pdVar10 + iVar8 * 5 + 4));
          }
          else {
            *(double *)(unsigned)((int)pdVar6 + 0x1c) = dVar28;
            in_xd6 = pdVar10[iVar5 * 5 + 4];
            in_xd4 = pdVar10[iVar8 * 5 + 4];
          }
          if (in_FPSCR_PR == '\0') {
            fVar17 = F32LO(dVar28) - F32LO(dVar19);
          }
          else {
            fVar17 = SUB84(dVar28 - dVar19,0);
          }
          dVar28 = in_xd4;
          if (in_FPSCR_SZ == '\0') {
            dVar28 = CONCAT44D(SUB84(dVar19,0),fVar17);
          }
          if (in_FPSCR_PR == '\0') {
            dVar28 = CONCAT44D(fVar27 * F32LO(dVar28) + F32HI(dVar28),
                                      SUB84(dVar28,0));
          }
          uVar16 = (undefined4)(D2U(dVar28) >> 0x20);
          if (in_FPSCR_SZ == '\0') {
            *(undefined4 *)(unsigned)(pdVar6 + 4) = uVar16;
            dVar28 = CONCAT44D(uVar16,*(undefined4 *)(unsigned)((int)pdVar10 + iVar5 * 0x28 + 0x24));
            dVar19 = CONCAT44D((int)(D2U(dVar19) >> 0x20),
                                      *(undefined4 *)(unsigned)((int)pdVar10 + iVar8 * 0x28 + 0x24));
          }
          else {
            pdVar6[4] = dVar28;
            in_xd6 = *(double *)(unsigned)((int)pdVar10 + iVar5 * 0x28 + 0x24);
            in_xd4 = *(double *)(unsigned)((int)pdVar10 + iVar8 * 0x28 + 0x24);
          }
          iVar4 = iVar4 + 1;
          if (in_FPSCR_PR == '\0') {
            fVar17 = F32LO(dVar28) - F32LO(dVar19);
          }
          else {
            fVar17 = SUB84(dVar28 - dVar19,0);
          }
          dVar28 = in_xd4;
          if (in_FPSCR_SZ == '\0') {
            dVar28 = CONCAT44D(SUB84(dVar19,0),fVar17);
          }
          if (in_FPSCR_PR == '\0') {
            dVar28 = CONCAT44D(fVar27 * F32LO(dVar28) + F32HI(dVar28),
                                      SUB84(dVar28,0));
          }
          if (in_FPSCR_SZ == '\0') {
            *(int *)(unsigned)((int)pdVar6 + 0x24) = (int)(D2U(dVar28) >> 0x20);
          }
          else {
            *(double *)(unsigned)((int)pdVar6 + 0x24) = dVar28;
          }
        }
        pdVar6 = pdVar10 + iVar5 * 5;
        if (in_FPSCR_SZ == '\0') {
          uVar20 = CONCAT44(*(undefined4 *)(unsigned)((int)pdVar6 + 0x14),0x3f800000);
        }
        else {
          uVar20 = *(undefined8 *)(unsigned)((int)pdVar6 + 0x14);
        }
        if (in_FPSCR_PR == '\0' && (float)uVar20 < F32HI(uVar20)) {
          if (in_FPSCR_SZ == '\0') {
            dVar19 = CONCAT44D(*(undefined4 *)(unsigned)pdVar6,*(undefined4 *)(unsigned)((int)pdVar6 + 4));
          }
          else {
            dVar19 = *pdVar6;
            in_xd4 = *(double *)(unsigned)((int)pdVar6 + 4);
          }
          pdVar7 = (double *)(unsigned)(puVar9 + iVar4 * 5);
          iVar4 = iVar4 + 1;
          if (in_FPSCR_SZ == '\0') {
            *(int *)(unsigned)pdVar7 = (int)(D2U(dVar19) >> 0x20);
            *(int *)(unsigned)((int)pdVar7 + 4) = SUB84(dVar19,0);
            *(undefined4 *)(unsigned)(pdVar7 + 1) = *(undefined4 *)(unsigned)(pdVar6 + 1);
            *(undefined4 *)(unsigned)(pdVar7 + 3) = *(undefined4 *)(unsigned)(pdVar6 + 3);
            *(undefined4 *)(unsigned)((int)pdVar7 + 0x1c) = *(undefined4 *)(unsigned)((int)pdVar6 + 0x1c);
            *(undefined4 *)(unsigned)(pdVar7 + 4) = *(undefined4 *)(unsigned)(pdVar6 + 4);
            *(undefined4 *)(unsigned)((int)pdVar7 + 0x24) = *(undefined4 *)(unsigned)((int)pdVar6 + 0x24);
          }
          else {
            *pdVar7 = dVar19;
            *(double *)(unsigned)((int)pdVar7 + 4) = in_xd4;
            pdVar7[1] = pdVar6[1];
            pdVar7[3] = pdVar6[3];
            *(undefined8 *)(unsigned)((int)pdVar7 + 0x1c) = *(undefined8 *)(unsigned)((int)pdVar6 + 0x1c);
            pdVar7[4] = pdVar6[4];
            *(undefined8 *)(unsigned)((int)pdVar7 + 0x24) = *(undefined8 *)(unsigned)((int)pdVar6 + 0x24);
          }
        }
        iVar8 = iVar5;
        iVar1 = iVar5 + 1;
      }
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(unsigned)((int)ar7 + 0x1c) = *(undefined4 *)(unsigned)(puVar12 + iVar2 + 0x2c);
        *(undefined4 *)(unsigned)(ar7 + 3) = *(undefined4 *)(unsigned)(puVar12 + iVar2 + 0x28);
        *(undefined4 *)(unsigned)((int)ar7 + 0x14) = *(undefined4 *)(unsigned)(puVar12 + iVar2 + 0x24);
        *(undefined4 *)(unsigned)(ar7 + 2) = *(undefined4 *)(unsigned)(puVar12 + iVar2 + 0x20);
        *(undefined4 *)(unsigned)((int)ar7 + 0xc) = *(undefined4 *)(unsigned)(puVar12 + iVar2 + 0x10);
        *(undefined4 *)(unsigned)(ar7 + 1) = *(undefined4 *)(unsigned)(puVar12 + iVar2 + 0xc);
        uVar16 = 0xe0000000;
        puVar3 = (undefined8 *)(unsigned)((int)ar7 + 4);
        *(undefined4 *)(unsigned)puVar3 = *(undefined4 *)(unsigned)puVar9;
      }
      else {
        ar7[3] = *(undefined8 *)(unsigned)(puVar12 + iVar2 + 0x2c);
        ar7[2] = *(undefined8 *)(unsigned)(puVar12 + iVar2 + 0x28);
        ar7[1] = *(undefined8 *)(unsigned)(puVar12 + iVar2 + 0x24);
        *ar7 = *(undefined8 *)(unsigned)(puVar12 + iVar2 + 0x20);
        ar7[-1] = *(undefined8 *)(unsigned)(puVar12 + iVar2 + 0x10);
        ar7[-2] = *(undefined8 *)(unsigned)(puVar12 + iVar2 + 0xc);
        uVar16 = 0xe0000000;
        puVar3 = ar7 + -3;
        *puVar3 = *puVar9;
      }
      *(undefined4 *)(unsigned)((int)puVar3 + -4) = uVar16;
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(unsigned)(puVar3 + 7) = *(undefined4 *)(unsigned)(puVar12 + iVar2 + 0x54);
        *(undefined4 *)(unsigned)((int)puVar3 + 0x34) = *(undefined4 *)(unsigned)(puVar12 + iVar2 + 0x50);
        *(undefined4 *)(unsigned)(puVar3 + 6) = *(undefined4 *)(unsigned)(puVar12 + iVar2 + 0x4c);
        *(undefined4 *)(unsigned)((int)puVar3 + 0x2c) = *(undefined4 *)(unsigned)(puVar12 + iVar2 + 0x48);
        *(undefined4 *)(unsigned)(puVar3 + 5) = *(undefined4 *)(unsigned)(puVar12 + iVar2 + 0x38);
        *(undefined4 *)(unsigned)((int)puVar3 + 0x24) = *(undefined4 *)(unsigned)(puVar12 + iVar2 + 0x34);
        puVar3 = puVar3 + 4;
        *(undefined4 *)(unsigned)puVar3 = *(undefined4 *)(unsigned)(puVar12 + iVar2 + 0x30);
      }
      else {
        *(undefined8 *)(unsigned)((int)puVar3 + 0x34) = *(undefined8 *)(unsigned)(puVar12 + iVar2 + 0x54);
        *(undefined8 *)(unsigned)((int)puVar3 + 0x2c) = *(undefined8 *)(unsigned)(puVar12 + iVar2 + 0x50);
        *(undefined8 *)(unsigned)((int)puVar3 + 0x24) = *(undefined8 *)(unsigned)(puVar12 + iVar2 + 0x4c);
        *(undefined8 *)(unsigned)((int)puVar3 + 0x1c) = *(undefined8 *)(unsigned)(puVar12 + iVar2 + 0x48);
        *(undefined8 *)(unsigned)((int)puVar3 + 0x14) = *(undefined8 *)(unsigned)(puVar12 + iVar2 + 0x38);
        *(undefined8 *)(unsigned)((int)puVar3 + 0xc) = *(undefined8 *)(unsigned)(puVar12 + iVar2 + 0x34);
        puVar3 = (undefined8 *)(unsigned)((int)puVar3 + 4);
        *puVar3 = *(undefined8 *)(unsigned)(puVar12 + iVar2 + 0x30);
      }
      *(undefined4 *)(unsigned)((int)puVar3 + -4) = uVar16;
      if (iVar4 != 3) {
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)(unsigned)(puVar3 + 7) = *(undefined4 *)(unsigned)(puVar12 + iVar2 + 0xa4);
          *(undefined4 *)(unsigned)((int)puVar3 + 0x34) = *(undefined4 *)(unsigned)(puVar12 + iVar2 + 0xa0);
          *(undefined4 *)(unsigned)(puVar3 + 6) = *(undefined4 *)(unsigned)(puVar12 + iVar2 + 0x9c);
          *(undefined4 *)(unsigned)((int)puVar3 + 0x2c) = *(undefined4 *)(unsigned)(puVar12 + iVar2 + 0x98);
          *(undefined4 *)(unsigned)(puVar3 + 5) = *(undefined4 *)(unsigned)(puVar12 + iVar2 + 0x88);
          *(undefined4 *)(unsigned)((int)puVar3 + 0x24) = *(undefined4 *)(unsigned)(puVar12 + iVar2 + 0x84);
          puVar3 = puVar3 + 4;
          *(undefined4 *)(unsigned)puVar3 = *(undefined4 *)(unsigned)(puVar12 + iVar2 + 0x80);
        }
        else {
          *(undefined8 *)(unsigned)((int)puVar3 + 0x34) = *(undefined8 *)(unsigned)(puVar12 + iVar2 + 0xa4);
          *(undefined8 *)(unsigned)((int)puVar3 + 0x2c) = *(undefined8 *)(unsigned)(puVar12 + iVar2 + 0xa0);
          *(undefined8 *)(unsigned)((int)puVar3 + 0x24) = *(undefined8 *)(unsigned)(puVar12 + iVar2 + 0x9c);
          *(undefined8 *)(unsigned)((int)puVar3 + 0x1c) = *(undefined8 *)(unsigned)(puVar12 + iVar2 + 0x98);
          *(undefined8 *)(unsigned)((int)puVar3 + 0x14) = *(undefined8 *)(unsigned)(puVar12 + iVar2 + 0x88);
          *(undefined8 *)(unsigned)((int)puVar3 + 0xc) = *(undefined8 *)(unsigned)(puVar12 + iVar2 + 0x84);
          puVar3 = (undefined8 *)(unsigned)((int)puVar3 + 4);
          *puVar3 = *(undefined8 *)(unsigned)(puVar12 + iVar2 + 0x80);
        }
        *(undefined4 *)(unsigned)((int)puVar3 + -4) = uVar16;
      }
      uVar16 = 0xf0000000;
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(unsigned)(puVar3 + 7) = *(undefined4 *)(unsigned)(puVar12 + iVar2 + 0x7c);
        *(undefined4 *)(unsigned)((int)puVar3 + 0x34) = *(undefined4 *)(unsigned)(puVar12 + iVar2 + 0x78);
        *(undefined4 *)(unsigned)(puVar3 + 6) = *(undefined4 *)(unsigned)(puVar12 + iVar2 + 0x74);
        *(undefined4 *)(unsigned)((int)puVar3 + 0x2c) = *(undefined4 *)(unsigned)(puVar12 + iVar2 + 0x70);
        *(undefined4 *)(unsigned)(puVar3 + 5) = *(undefined4 *)(unsigned)(puVar12 + iVar2 + 0x60);
        *(undefined4 *)(unsigned)((int)puVar3 + 0x24) = *(undefined4 *)(unsigned)(puVar12 + iVar2 + 0x5c);
        puVar3 = puVar3 + 4;
        *(undefined4 *)(unsigned)puVar3 = *(undefined4 *)(unsigned)(puVar12 + iVar2 + 0x58);
      }
      else {
        *(undefined8 *)(unsigned)((int)puVar3 + 0x34) = *(undefined8 *)(unsigned)(puVar12 + iVar2 + 0x7c);
        *(undefined8 *)(unsigned)((int)puVar3 + 0x2c) = *(undefined8 *)(unsigned)(puVar12 + iVar2 + 0x78);
        *(undefined8 *)(unsigned)((int)puVar3 + 0x24) = *(undefined8 *)(unsigned)(puVar12 + iVar2 + 0x74);
        *(undefined8 *)(unsigned)((int)puVar3 + 0x1c) = *(undefined8 *)(unsigned)(puVar12 + iVar2 + 0x70);
        *(undefined8 *)(unsigned)((int)puVar3 + 0x14) = *(undefined8 *)(unsigned)(puVar12 + iVar2 + 0x60);
        *(undefined8 *)(unsigned)((int)puVar3 + 0xc) = *(undefined8 *)(unsigned)(puVar12 + iVar2 + 0x5c);
        puVar3 = (undefined8 *)(unsigned)((int)puVar3 + 4);
        *puVar3 = *(undefined8 *)(unsigned)(puVar12 + iVar2 + 0x58);
      }
      *(undefined4 *)(unsigned)((int)puVar3 + -4) = uVar16;
      ar7 = (undefined8 *)(unsigned)((int)puVar3 + 0x1c);
      *(undefined4 *)(unsigned)0x8c4aa520 = *(undefined4 *)(unsigned)0x8c4aa520 + iVar4;
    }
  }
  return ar7;
}

__asm__(".globl _FUN_8c23231c\n.set _FUN_8c23231c, _FUN_8c23231c_def\n");
