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
undefined8 * FUN_8c22fa7c_def(double *ar4,double *ar5,double *ar6,undefined8 *ar7)

{
  ring[rp++ & 255] = "FUN_8c22fa7c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 336; for (int i_ = 0; i_ < 336; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  int iVar4;
  int iVar5;
  double *pdVar6;
  double *pdVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined4 *puVar11;
  undefined1 *puVar12;
  float fVar13;
  undefined8 in_dr0 = 0;
  double dVar14;
  float fVar15;
  float fVar16;
  double in_dr2 = 0;
  double dVar17;
  double dVar18;
  undefined4 uVar22;
  double dVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 in_dr4 = 0;
  double dVar23;
  undefined8 in_dr6 = 0;
  double dVar25;
  undefined8 in_dr8 = 0;
  undefined4 uVar26;
  float in_fr11 = 0;
  float in_fr10 = 0;
  double in_dr12 = 0;
  undefined8 in_dr14 = 0;
  double dVar27;
  double in_xd0 = 0;
  double in_xd2 = 0;
  double dVar28;
  double in_xd4 = 0;
  undefined8 in_xd6 = 0;
  undefined8 in_xd8 = 0;
  double in_xd12 = 0;
  double in_xd14 = 0;
  bool bVar29;
  char in_FPSCR_PR = 0;
  char in_FPSCR_SZ = 0;
  undefined4 uVar24;
  
  if (in_FPSCR_SZ == '\0') {
    puVar11 = &(*(undefined4 *)(fr0_ - 0x18));
    *(ulonglong *)(unsigned)((undefined1 *)(fr0_ - 0x1c)) = CONCAT44((int)in_dr14,((undefined1 *)(fr0_ - 0x1c)));
  }
  else {
    puVar11 = (undefined4 *)(unsigned)((undefined1 *)(fr0_ - 0x1c));
  }
  iVar2 = (int)(int)0xfffffed8;
  if (in_FPSCR_SZ == '\0') {
    *(int *)(unsigned)((int)puVar11 + -4) = (int)((ulonglong)in_dr14 >> 0x20);
    puVar12 = (undefined1 *)(unsigned)((int)puVar11 + -8);
    *(int *)(unsigned)((int)puVar11 + -8) = SUB84(in_dr12,0);
  }
  else {
    *(undefined8 *)(unsigned)((int)puVar11 + -8) = in_dr14;
    puVar12 = (undefined1 *)(unsigned)((int)puVar11 + -0x10);
    *(double *)(unsigned)((int)puVar11 + -0x10) = in_xd12;
  }
  if ((*(undefined4 *)(unsigned)0x8c4aa4f0 & 0x10000) == 0) {
    if (in_FPSCR_SZ == '\0') {
      in_dr2 = CONCAT44D((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(unsigned)0x8c4aa4dc);
      dVar27 = CONCAT44D(*(undefined4 *)(unsigned)0x8c4aa4a8,*(undefined4 *)(unsigned)0x8c4aa4a8);
    }
    else {
      dVar27 = *(undefined4 *)(unsigned)0x8c4aa4a8;
      in_xd2 = *(undefined4 *)(unsigned)0x8c4aa4dc;
      in_xd14 = dVar27;
    }
    if (in_FPSCR_PR == '\0') {
      dVar27 = CONCAT44D((int)(D2U(dVar27) >> 0x20),F32LO(dVar27) * F32LO(in_dr2));
    }
    else {
      dVar27 = dVar27 * in_dr2;
    }
    if (in_FPSCR_SZ == '\0') {
      in_dr12 = CONCAT44D((int)((ulonglong)in_dr12 >> 0x20),(int)(D2U(dVar27) >> 0x20))
      ;
      dVar17 = CONCAT44D(*(undefined4 *)(unsigned)0x8c4aa4e0,SUB84(in_dr2,0));
    }
    else {
      dVar17 = *(undefined4 *)(unsigned)0x8c4aa4e0;
      in_xd12 = dVar27;
    }
    if (in_FPSCR_PR == '\0') {
      fVar13 = 1.0 / F32LO(dVar27);
    }
    else {
      fVar13 = SUB84(CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),0x3f800000) / dVar27,0);
    }
    if (in_FPSCR_PR == '\0') {
      dVar17 = CONCAT44D((int)((ulonglong)in_dr12 >> 0x20),
                                F32LO(in_dr12) * F32HI(dVar17));
    }
    else {
      dVar17 = in_dr12 * dVar17;
    }
    puVar9 = (undefined8 *)(unsigned)(puVar12 + 0xb0 + iVar2);
    if (in_FPSCR_PR == '\0') {
      dVar14 = CONCAT44D(1.0 / F32LO(dVar17),fVar13);
    }
    else {
      dVar14 = CONCAT44D(0x3f800000,fVar13) / dVar17;
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)(unsigned)(puVar12 + iVar2 + 4) = SUB84(dVar14,0);
      dVar27 = CONCAT44D(*(undefined4 *)(unsigned)((unsigned)0x8c4aa4a8 + 0xc),SUB84(dVar27,0));
      *(undefined4 *)(unsigned)(puVar12 + iVar2) = *(undefined4 *)(unsigned)(0x8c4aa4a8 + 2);
      *(undefined4 *)(unsigned)puVar9 = *(undefined4 *)(unsigned)((int)ar4 + 4);
      *(undefined4 *)(unsigned)((int)puVar9 + 4) = *(undefined4 *)(unsigned)(ar4 + 1);
      *(undefined4 *)(unsigned)(puVar9 + 1) = *(undefined4 *)(unsigned)((int)ar4 + 0xc);
      *(undefined4 *)(unsigned)((int)puVar9 + 0x14) = *(undefined4 *)(unsigned)ar4;
      dVar18 = CONCAT44D(*(undefined4 *)(unsigned)ar4,*(undefined4 *)(unsigned)((int)ar4 + 4));
    }
    else {
      *(double *)(unsigned)(puVar12 + iVar2 + 4) = in_xd0;
      dVar27 = *(double *)(unsigned)((unsigned)0x8c4aa4a8 + 0xc);
      *(double *)(unsigned)(puVar12 + iVar2) = ((undefined1 *)(unsigned)2)[0x8c4aa4a8];
      *puVar9 = *(undefined8 *)(unsigned)((int)ar4 + 4);
      *(double *)(unsigned)((int)puVar9 + 4) = ar4[1];
      puVar9[1] = *(undefined8 *)(unsigned)((int)ar4 + 0xc);
      *(double *)(unsigned)((int)puVar9 + 0x14) = *ar4;
      in_xd2 = *(double *)(unsigned)((int)ar4 + 4);
      dVar18 = *ar4;
    }
    fVar13 = F32HI(dVar27);
    if (in_FPSCR_PR == '\0') {
      fVar15 = (F32LO(dVar18) - fVar13) * F32HI(dVar18);
    }
    else {
      fVar15 = SUB84((dVar18 - dVar27) * (dVar18 - dVar27),0);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar18 = CONCAT44D(*(undefined4 *)(unsigned)(puVar12 + iVar2 + 4),fVar15);
    }
    else {
      dVar18 = *(double *)(unsigned)(puVar12 + iVar2 + 4);
    }
    if (in_FPSCR_PR == '\0') {
      fVar15 = F32LO(dVar18) * F32HI(dVar18);
    }
    else {
      fVar15 = SUB84(dVar18 * dVar18,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(unsigned)((int)puVar9 + 0xc) = fVar15;
      dVar18 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 1),*(undefined4 *)(unsigned)(puVar12 + iVar2));
    }
    else {
      *(double *)(unsigned)((int)puVar9 + 0xc) = in_xd2;
      dVar18 = ar4[1];
      in_xd2 = *(double *)(unsigned)(puVar12 + iVar2);
    }
    if (in_FPSCR_PR == '\0') {
      dVar18 = CONCAT44D(F32HI(dVar18) - F32LO(dVar18),SUB84(dVar18,0)
                               );
    }
    else {
      dVar18 = dVar18 - dVar18;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar18 = CONCAT44D((int)(D2U(dVar18) >> 0x20),*(undefined4 *)(unsigned)ar4);
    }
    else {
      in_xd2 = *ar4;
    }
    fVar15 = F32HI(dVar14);
    if (in_FPSCR_PR == '\0') {
      dVar18 = CONCAT44D(F32HI(dVar18) * F32LO(dVar18) * fVar15,
                                SUB84(dVar18,0));
    }
    else {
      dVar18 = dVar18 * dVar18 * dVar14;
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)(unsigned)(puVar9 + 2) = (int)(D2U(dVar18) >> 0x20);
      *(int *)(unsigned)(puVar9 + 3) = (int)((ulonglong)in_dr4 >> 0x20);
      *(int *)(unsigned)((int)puVar9 + 0x1c) = (int)in_dr4;
      *(undefined4 *)(unsigned)(puVar9 + 5) = *(undefined4 *)(unsigned)((int)ar5 + 4);
      *(undefined4 *)(unsigned)((int)puVar9 + 0x2c) = *(undefined4 *)(unsigned)(ar5 + 1);
      *(undefined4 *)(unsigned)(puVar9 + 6) = *(undefined4 *)(unsigned)((int)ar5 + 0xc);
      *(undefined4 *)(unsigned)((int)puVar9 + 0x3c) = *(undefined4 *)(unsigned)ar5;
      dVar18 = CONCAT44D(*(undefined4 *)(unsigned)ar5,*(undefined4 *)(unsigned)((int)ar5 + 4));
    }
    else {
      puVar9[2] = dVar18;
      puVar9[3] = in_dr4;
      *(double *)(unsigned)((int)puVar9 + 0x1c) = in_xd4;
      puVar9[5] = *(undefined8 *)(unsigned)((int)ar5 + 4);
      *(double *)(unsigned)((int)puVar9 + 0x2c) = ar5[1];
      puVar9[6] = *(undefined8 *)(unsigned)((int)ar5 + 0xc);
      *(double *)(unsigned)((int)puVar9 + 0x3c) = *ar5;
      in_xd2 = *(double *)(unsigned)((int)ar5 + 4);
      dVar18 = *ar5;
    }
    if (in_FPSCR_PR == '\0') {
      fVar16 = (F32LO(dVar18) - fVar13) * F32HI(dVar18);
    }
    else {
      fVar16 = SUB84((dVar18 - dVar27) * (dVar18 - dVar27),0);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar18 = CONCAT44D(*(undefined4 *)(unsigned)(puVar12 + iVar2 + 4),fVar16);
    }
    else {
      dVar18 = *(double *)(unsigned)(puVar12 + iVar2 + 4);
    }
    if (in_FPSCR_PR == '\0') {
      fVar16 = F32LO(dVar18) * F32HI(dVar18);
    }
    else {
      fVar16 = SUB84(dVar18 * dVar18,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(unsigned)((int)puVar9 + 0x34) = fVar16;
      dVar18 = CONCAT44D(*(undefined4 *)(unsigned)(ar5 + 1),*(undefined4 *)(unsigned)(puVar12 + iVar2));
    }
    else {
      *(double *)(unsigned)((int)puVar9 + 0x34) = in_xd2;
      dVar18 = ar5[1];
      in_xd2 = *(double *)(unsigned)(puVar12 + iVar2);
    }
    if (in_FPSCR_PR == '\0') {
      dVar18 = CONCAT44D(F32HI(dVar18) - F32LO(dVar18),SUB84(dVar18,0)
                               );
    }
    else {
      dVar18 = dVar18 - dVar18;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar18 = CONCAT44D((int)(D2U(dVar18) >> 0x20),*(undefined4 *)(unsigned)ar5);
    }
    else {
      in_xd2 = *ar5;
    }
    if (in_FPSCR_PR == '\0') {
      dVar18 = CONCAT44D(F32HI(dVar18) * F32LO(dVar18) * fVar15,
                                SUB84(dVar18,0));
    }
    else {
      dVar18 = dVar18 * dVar18 * dVar14;
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)(unsigned)(puVar9 + 7) = (int)(D2U(dVar18) >> 0x20);
      *(int *)(unsigned)(puVar9 + 8) = (int)((ulonglong)in_dr6 >> 0x20);
      *(int *)(unsigned)((int)puVar9 + 0x44) = (int)in_dr6;
      *(undefined4 *)(unsigned)(puVar9 + 10) = *(undefined4 *)(unsigned)((int)ar6 + 4);
      *(undefined4 *)(unsigned)((int)puVar9 + 0x54) = *(undefined4 *)(unsigned)(ar6 + 1);
      *(undefined4 *)(unsigned)(puVar9 + 0xb) = *(undefined4 *)(unsigned)((int)ar6 + 0xc);
      *(undefined4 *)(unsigned)((int)puVar9 + 100) = *(undefined4 *)(unsigned)ar6;
      dVar18 = CONCAT44D(*(undefined4 *)(unsigned)ar6,*(undefined4 *)(unsigned)((int)ar6 + 4));
    }
    else {
      puVar9[7] = dVar18;
      puVar9[8] = in_dr6;
      *(undefined8 *)(unsigned)((int)puVar9 + 0x44) = in_xd6;
      puVar9[10] = *(undefined8 *)(unsigned)((int)ar6 + 4);
      *(double *)(unsigned)((int)puVar9 + 0x54) = ar6[1];
      puVar9[0xb] = *(undefined8 *)(unsigned)((int)ar6 + 0xc);
      *(double *)(unsigned)((int)puVar9 + 100) = *ar6;
      in_xd2 = *(double *)(unsigned)((int)ar6 + 4);
      dVar18 = *ar6;
    }
    if (in_FPSCR_PR == '\0') {
      fVar16 = (F32LO(dVar18) - fVar13) * F32HI(dVar18);
    }
    else {
      fVar16 = SUB84((dVar18 - dVar27) * (dVar18 - dVar27),0);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar18 = CONCAT44D(*(undefined4 *)(unsigned)(puVar12 + iVar2 + 4),fVar16);
    }
    else {
      dVar18 = *(double *)(unsigned)(puVar12 + iVar2 + 4);
    }
    if (in_FPSCR_PR == '\0') {
      fVar16 = F32LO(dVar18) * F32HI(dVar18);
    }
    else {
      fVar16 = SUB84(dVar18 * dVar18,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(unsigned)((int)puVar9 + 0x5c) = fVar16;
      dVar18 = CONCAT44D(*(undefined4 *)(unsigned)(ar6 + 1),*(undefined4 *)(unsigned)(puVar12 + iVar2));
    }
    else {
      *(double *)(unsigned)((int)puVar9 + 0x5c) = in_xd2;
      in_xd2 = *(double *)(unsigned)(puVar12 + iVar2);
      dVar18 = ar6[1];
    }
    if (in_FPSCR_PR == '\0') {
      dVar18 = CONCAT44D(F32HI(dVar18) - F32LO(dVar18),SUB84(dVar18,0)
                               );
    }
    else {
      dVar18 = dVar18 - dVar18;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar18 = CONCAT44D((int)(D2U(dVar18) >> 0x20),*(undefined4 *)(unsigned)ar6);
    }
    else {
      in_xd2 = *ar6;
    }
    if (in_FPSCR_PR == '\0') {
      dVar18 = CONCAT44D(F32HI(dVar18) * F32LO(dVar18) * fVar15,
                                SUB84(dVar18,0));
    }
    else {
      dVar18 = dVar18 * dVar18 * dVar14;
    }
    uVar22 = (undefined4)(D2U(dVar18) >> 0x20);
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(unsigned)(puVar9 + 0xc) = uVar22;
      *(int *)(unsigned)(puVar9 + 0xd) = (int)((ulonglong)in_dr8 >> 0x20);
      *(int *)(unsigned)((int)puVar9 + 0x6c) = (int)in_dr8;
      uVar24 = *(undefined4 *)(unsigned)((int)puVar9 + 0x3c);
      uVar26 = *(undefined4 *)(unsigned)(puVar9 + 7);
      dVar25 = CONCAT44D(*(undefined4 *)(unsigned)(puVar9 + 2),*(undefined4 *)(unsigned)((int)puVar9 + 0x14));
      dVar18 = CONCAT44D(uVar22,uVar26);
      dVar23 = CONCAT44D(uVar24,SUB84(dVar14,0));
      dVar14 = CONCAT44D(uVar26,(int)in_dr8);
      dVar28 = CONCAT44D(uVar24,(int)in_dr4);
    }
    else {
      puVar9[0xc] = dVar18;
      puVar9[0xd] = in_dr8;
      *(undefined8 *)(unsigned)((int)puVar9 + 0x6c) = in_xd8;
      dVar23 = *(double *)(unsigned)((int)puVar9 + 0x3c);
      in_xd2 = (double)puVar9[7];
      dVar25 = (double)puVar9[2];
      uVar26 = (undefined4)((ulonglong)in_xd2 >> 0x20);
      uVar24 = (undefined4)(D2U(dVar23) >> 0x20);
      dVar14 = in_xd2;
      dVar28 = dVar23;
    }
    fVar15 = F32HI(dVar25);
    if (in_FPSCR_PR == '\0') {
      fVar16 = F32LO(dVar18) * F32LO(dVar25);
      dVar23 = CONCAT44D(F32HI(dVar23) * fVar15,SUB84(dVar23,0));
    }
    else {
      fVar16 = SUB84(dVar18 * dVar25,0);
      dVar23 = dVar23 * dVar25;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar14 = CONCAT44D(uVar26,*(undefined4 *)(unsigned)((int)puVar9 + 0xc));
      dVar28 = CONCAT44D(uVar24,fVar16);
      dVar18 = CONCAT44D(uVar24,*(undefined4 *)(unsigned)((int)puVar9 + 0x34));
    }
    else {
      in_xd4 = *(double *)(unsigned)((int)puVar9 + 0x34);
      dVar18 = dVar28;
    }
    if (in_FPSCR_PR == '\0') {
      dVar19 = CONCAT44D(F32HI(dVar28) * F32LO(dVar14),SUB84(dVar28,0)
                               );
      dVar23 = CONCAT44D(F32HI(dVar23) - F32LO(dVar28),SUB84(dVar23,0)
                               );
    }
    else {
      dVar19 = dVar28 * dVar14;
      dVar23 = dVar23 - dVar19;
    }
    dVar28 = in_xd4;
    if (in_FPSCR_SZ == '\0') {
      dVar19 = CONCAT44D((int)(D2U(dVar19) >> 0x20),SUB84(dVar18,0));
      dVar28 = in_xd2;
    }
    if (in_FPSCR_PR == '\0') {
      fVar16 = F32LO(dVar19) * F32LO(dVar25) - F32HI(dVar19);
    }
    else {
      fVar16 = SUB84(dVar19 * dVar25 - dVar19 * dVar25,0);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar19 = CONCAT44D(*(undefined4 *)(unsigned)(puVar9 + 0xc),fVar16);
      dVar23 = CONCAT44D((int)(D2U(dVar23) >> 0x20),(int)(D2U(dVar14) >> 0x20));
    }
    else {
      dVar19 = (double)puVar9[0xc];
      in_xd0 = dVar14;
    }
    if (in_FPSCR_PR == '\0') {
      dVar23 = CONCAT44D((int)(D2U(dVar23) >> 0x20),F32LO(dVar23) * F32LO(dVar14));
      dVar19 = CONCAT44D(F32HI(dVar19) * F32LO(dVar19),SUB84(dVar19,0)
                               );
    }
    else {
      dVar23 = dVar23 * dVar14;
      dVar19 = dVar19 * dVar19;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar19 = CONCAT44D((int)(D2U(dVar19) >> 0x20),*(undefined4 *)(unsigned)((int)puVar9 + 0x5c)
                               );
    }
    else {
      dVar28 = *(double *)(unsigned)((int)puVar9 + 0x5c);
    }
    if (in_FPSCR_PR == '\0') {
      dVar19 = CONCAT44D(F32HI(dVar23) * F32LO(dVar19) +
                                F32HI(dVar19),SUB84(dVar19,0));
    }
    dVar14 = in_xd4;
    if (in_FPSCR_SZ == '\0') {
      dVar19 = CONCAT44D((int)(D2U(dVar19) >> 0x20),SUB84(dVar18,0));
      dVar14 = dVar28;
    }
    if (in_FPSCR_PR == '\0') {
      fVar15 = F32LO(dVar19) * fVar15;
      dVar19 = CONCAT44D((int)(D2U(dVar19) >> 0x20),fVar15);
      fVar15 = F32LO(dVar23) - fVar15;
    }
    else {
      dVar19 = dVar19 * dVar25;
      fVar15 = SUB84(dVar23 - dVar19,0);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar23 = CONCAT44D(fVar15,*(undefined4 *)(unsigned)((int)puVar9 + 100));
      dVar28 = in_xd0;
    }
    else {
      dVar28 = *(double *)(unsigned)((int)puVar9 + 100);
      dVar23 = in_xd0;
    }
    fVar15 = F32HI(dVar23);
    if (in_FPSCR_PR == '\0') {
      dVar19 = (double)((ulonglong)
                        (uint)((fVar15 * F32LO(dVar23) + F32HI(dVar19)) *
                              in_fr11) << 0x20);
    }
    else {
      dVar19 = (double)(D2U(dVar19) & 0xffffffff00000000) * CONCAT44D(in_fr10,in_fr11);
    }
    fVar16 = F32LO(dVar19);
    if (in_FPSCR_PR == '\0' && F32HI(dVar19) < fVar16) {
      if (in_FPSCR_SZ == '\0') {
        dVar23 = CONCAT44D(fVar15,in_fr10);
        dVar19 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 2),fVar16);
      }
      else {
        dVar28 = CONCAT44D(in_fr10,in_fr11);
        dVar19 = ar4[2];
      }
      if (in_FPSCR_PR == '\0') {
        dVar23 = CONCAT44D((int)(D2U(dVar23) >> 0x20),
                                  F32LO(dVar23) + F32HI(dVar19));
      }
      else {
        dVar23 = dVar23 + dVar19;
      }
      if (in_FPSCR_SZ == '\0') {
        *(int *)(unsigned)(puVar9 + 4) = SUB84(dVar23,0);
        dVar23 = CONCAT44D((int)(D2U(dVar23) >> 0x20),in_fr10);
      }
      else {
        puVar9[4] = dVar28;
        dVar28 = CONCAT44D(in_fr10,in_fr11);
      }
      *(unsigned *)(unsigned)(puVar12 + iVar2 + 0xc) = puVar9 + 5;
      if (in_FPSCR_SZ == '\0') {
        dVar19 = CONCAT44D(*(undefined4 *)(unsigned)(ar5 + 2),SUB84(dVar19,0));
      }
      else {
        dVar19 = ar5[2];
      }
      if (in_FPSCR_PR == '\0') {
        dVar23 = CONCAT44D((int)(D2U(dVar23) >> 0x20),
                                  F32LO(dVar23) + F32HI(dVar19));
      }
      else {
        dVar23 = dVar23 + dVar19;
      }
      if (in_FPSCR_SZ == '\0') {
        *(int *)(unsigned)(puVar9 + 9) = SUB84(dVar23,0);
        dVar23 = CONCAT44D((int)(D2U(dVar23) >> 0x20),in_fr10);
      }
      else {
        puVar9[9] = dVar28;
        dVar28 = CONCAT44D(in_fr10,in_fr11);
      }
      *(unsigned *)(unsigned)(puVar12 + iVar2 + 8) = puVar9 + 10;
      if (in_FPSCR_SZ == '\0') {
        dVar19 = CONCAT44D(*(undefined4 *)(unsigned)(ar6 + 2),SUB84(dVar19,0));
      }
      else {
        dVar19 = ar6[2];
      }
      if (in_FPSCR_PR == '\0') {
        dVar23 = CONCAT44D((int)(D2U(dVar23) >> 0x20),
                                  F32LO(dVar23) + F32HI(dVar19));
      }
      else {
        dVar23 = dVar23 + dVar19;
      }
      if (in_FPSCR_SZ == '\0') {
        *(int *)(unsigned)(puVar9 + 0xe) = SUB84(dVar23,0);
        *(undefined4 *)(unsigned)((int)puVar9 + 0x24) = *(undefined4 *)(unsigned)((int)ar4 + 0x14);
        uVar20 = CONCAT44(*(undefined4 *)(unsigned)((int)ar5 + 0x14),SUB84(dVar19,0));
      }
      else {
        puVar9[0xe] = dVar28;
        *(undefined8 *)(unsigned)((int)puVar9 + 0x24) = *(undefined8 *)(unsigned)((int)ar4 + 0x14);
        uVar20 = *(undefined8 *)(unsigned)((int)ar5 + 0x14);
      }
      if (in_FPSCR_SZ == '\0') {
        *(int *)(unsigned)(*(int *)(unsigned)(puVar12 + iVar2 + 0xc) + 0x24) = (int)((ulonglong)uVar20 >> 0x20);
        dVar28 = CONCAT44D(*(undefined4 *)(unsigned)((int)ar6 + 0x14),(int)uVar20);
      }
      else {
        *(undefined8 *)(unsigned)(*(int *)(unsigned)(puVar12 + iVar2 + 0xc) + 0x24) = uVar20;
        dVar28 = *(double *)(unsigned)((int)ar6 + 0x14);
      }
      if (in_FPSCR_SZ == '\0') {
        *(int *)(unsigned)(*(int *)(unsigned)(puVar12 + iVar2 + 8) + 0x24) = (int)(D2U(dVar28) >> 0x20);
      }
      else {
        *(double *)(unsigned)(*(int *)(unsigned)(puVar12 + iVar2 + 8) + 0x24) = dVar28;
      }
    }
    else {
      if (in_FPSCR_SZ == '\0') {
        dVar23 = CONCAT44D(fVar15,in_fr10);
        dVar19 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 2),fVar16);
      }
      else {
        dVar28 = CONCAT44D(in_fr10,in_fr11);
        dVar19 = ar4[2];
      }
      if (in_FPSCR_PR == '\0') {
        dVar23 = CONCAT44D((int)(D2U(dVar23) >> 0x20),
                                  F32LO(dVar23) - F32HI(dVar19));
      }
      else {
        dVar23 = dVar23 - dVar19;
      }
      if (in_FPSCR_SZ == '\0') {
        *(int *)(unsigned)(puVar9 + 4) = SUB84(dVar23,0);
        dVar23 = CONCAT44D((int)(D2U(dVar23) >> 0x20),in_fr10);
      }
      else {
        puVar9[4] = dVar28;
        dVar28 = CONCAT44D(in_fr10,in_fr11);
      }
      *(unsigned *)(unsigned)(puVar12 + iVar2 + 0xc) = puVar9 + 5;
      if (in_FPSCR_SZ == '\0') {
        dVar19 = CONCAT44D(*(undefined4 *)(unsigned)(ar5 + 2),SUB84(dVar19,0));
      }
      else {
        dVar19 = ar5[2];
      }
      if (in_FPSCR_PR == '\0') {
        dVar23 = CONCAT44D((int)(D2U(dVar23) >> 0x20),
                                  F32LO(dVar23) - F32HI(dVar19));
      }
      else {
        dVar23 = dVar23 - dVar19;
      }
      if (in_FPSCR_SZ == '\0') {
        *(int *)(unsigned)(puVar9 + 9) = SUB84(dVar23,0);
        dVar23 = CONCAT44D((int)(D2U(dVar23) >> 0x20),in_fr10);
      }
      else {
        puVar9[9] = dVar28;
        dVar28 = CONCAT44D(in_fr10,in_fr11);
      }
      *(unsigned *)(unsigned)(puVar12 + iVar2 + 8) = puVar9 + 10;
      if (in_FPSCR_SZ == '\0') {
        dVar19 = CONCAT44D(*(undefined4 *)(unsigned)(ar6 + 2),SUB84(dVar19,0));
      }
      else {
        dVar19 = ar6[2];
      }
      if (in_FPSCR_PR == '\0') {
        dVar23 = CONCAT44D((int)(D2U(dVar23) >> 0x20),
                                  F32LO(dVar23) - F32HI(dVar19));
      }
      else {
        dVar23 = dVar23 - dVar19;
      }
      if (in_FPSCR_SZ == '\0') {
        *(int *)(unsigned)(puVar9 + 0xe) = SUB84(dVar23,0);
        dVar28 = CONCAT44D(*(undefined4 *)(unsigned)((int)ar4 + 0x14),SUB84(dVar19,0));
      }
      else {
        puVar9[0xe] = dVar28;
        dVar28 = *(double *)(unsigned)((int)ar4 + 0x14);
      }
      if (in_FPSCR_PR == '\0') {
        dVar28 = CONCAT44D(-F32HI(dVar28),SUB84(dVar28,0));
      }
      else {
        dVar28 = -dVar28;
      }
      if (in_FPSCR_SZ == '\0') {
        *(int *)(unsigned)((int)puVar9 + 0x24) = (int)(D2U(dVar28) >> 0x20);
        dVar28 = CONCAT44D(*(undefined4 *)(unsigned)((int)ar5 + 0x14),SUB84(dVar28,0));
      }
      else {
        *(double *)(unsigned)((int)puVar9 + 0x24) = dVar28;
        dVar28 = *(double *)(unsigned)((int)ar5 + 0x14);
      }
      if (in_FPSCR_PR == '\0') {
        dVar28 = CONCAT44D(-F32HI(dVar28),SUB84(dVar28,0));
      }
      else {
        dVar28 = -dVar28;
      }
      if (in_FPSCR_SZ == '\0') {
        *(int *)(unsigned)(*(int *)(unsigned)(puVar12 + iVar2 + 0xc) + 0x24) = (int)(D2U(dVar28) >> 0x20);
        dVar28 = CONCAT44D(*(undefined4 *)(unsigned)((int)ar6 + 0x14),SUB84(dVar28,0));
      }
      else {
        *(double *)(unsigned)(*(int *)(unsigned)(puVar12 + iVar2 + 0xc) + 0x24) = dVar28;
        dVar28 = *(double *)(unsigned)((int)ar6 + 0x14);
      }
      if (in_FPSCR_PR == '\0') {
        dVar28 = CONCAT44D(-F32HI(dVar28),SUB84(dVar28,0));
      }
      else {
        dVar28 = -dVar28;
      }
      if (in_FPSCR_SZ == '\0') {
        *(int *)(unsigned)(*(int *)(unsigned)(puVar12 + iVar2 + 8) + 0x24) = (int)(D2U(dVar28) >> 0x20);
      }
      else {
        *(double *)(unsigned)(*(int *)(unsigned)(puVar12 + iVar2 + 8) + 0x24) = dVar28;
      }
    }
    if (in_FPSCR_SZ == '\0') {
      dVar28 = CONCAT44D((int)(D2U(dVar28) >> 0x20),*(undefined4 *)(unsigned)(puVar9 + 4));
    }
    else {
      dVar14 = (double)puVar9[4];
    }
    if (in_FPSCR_PR == '\0') {
      bVar29 = SUB84(dVar28,0) < in_fr10;
    }
    else {
      bVar29 = dVar28 < CONCAT44D(in_fr10,in_fr11);
    }
    if (bVar29) {
      if (in_FPSCR_SZ == '\0') {
        *(float *)(unsigned)(puVar9 + 4) = in_fr10;
      }
      else {
        puVar9[4] = CONCAT44(in_fr10,in_fr11);
      }
    }
    if (in_FPSCR_SZ == '\0') {
      dVar28 = CONCAT44D((int)(D2U(dVar28) >> 0x20),*(undefined4 *)(unsigned)(puVar9 + 9));
    }
    else {
      dVar14 = (double)puVar9[9];
    }
    if (in_FPSCR_PR == '\0') {
      bVar29 = SUB84(dVar28,0) < in_fr10;
    }
    else {
      bVar29 = dVar28 < CONCAT44D(in_fr10,in_fr11);
    }
    if (bVar29) {
      if (in_FPSCR_SZ == '\0') {
        *(float *)(unsigned)(puVar9 + 9) = in_fr10;
      }
      else {
        puVar9[9] = CONCAT44(in_fr10,in_fr11);
      }
    }
    if (in_FPSCR_SZ == '\0') {
      dVar28 = CONCAT44D((int)(D2U(dVar28) >> 0x20),*(undefined4 *)(unsigned)(puVar9 + 0xe));
    }
    else {
      dVar14 = (double)puVar9[0xe];
    }
    if (in_FPSCR_PR == '\0') {
      bVar29 = SUB84(dVar28,0) < in_fr10;
    }
    else {
      bVar29 = dVar28 < CONCAT44D(in_fr10,in_fr11);
    }
    if (bVar29) {
      if (in_FPSCR_SZ == '\0') {
        *(float *)(unsigned)(puVar9 + 0xe) = in_fr10;
      }
      else {
        puVar9[0xe] = CONCAT44(in_fr10,in_fr11);
      }
    }
    iVar4 = 0;
    puVar10 = (undefined8 *)(unsigned)(puVar12 + iVar2 + 0x10);
    iVar1 = 0;
    iVar8 = 2;
    while (iVar5 = iVar1, iVar5 < 3) {
      if (in_FPSCR_SZ == '\0') {
        uVar20 = CONCAT44(*(undefined4 *)(unsigned)((int)puVar9 + iVar8 * 0x28 + 0x14),0x3f800000);
      }
      else {
        uVar20 = *(undefined8 *)(unsigned)((int)puVar9 + iVar8 * 0x28 + 0x14);
      }
      puVar3 = (undefined8 *)(unsigned)((int)puVar9 + iVar5 * 0x28 + 0x14);
      if (in_FPSCR_SZ == '\0') {
        uVar21 = CONCAT44(*(undefined4 *)(unsigned)puVar3,(float)uVar20);
      }
      else {
        uVar21 = *puVar3;
      }
      fVar15 = (float)uVar21;
      if (((in_FPSCR_PR == '\0' && (float)uVar20 < F32HI(uVar20)) ^ 1) !=
          -((in_FPSCR_PR == '\0' && fVar15 < F32HI(uVar21)) - 1)) {
        if (in_FPSCR_SZ == '\0') {
          fVar15 = *(float *)(unsigned)((int)puVar9 + iVar8 * 0x28 + 0x14);
          dVar23 = CONCAT44D((int)(D2U(dVar23) >> 0x20),
                                    *(undefined4 *)(unsigned)((int)puVar9 + iVar5 * 0x28 + 0x14));
          fVar16 = fVar15;
          dVar18 = CONCAT44D(fVar15,SUB84(dVar18,0));
        }
        else {
          dVar14 = *(double *)(unsigned)((int)puVar9 + iVar8 * 0x28 + 0x14);
          fVar16 = F32HI(dVar14);
          dVar18 = dVar14;
        }
        dVar28 = CONCAT44D(0x3f800000,-fVar15);
        if (in_FPSCR_PR == '\0') {
          dVar28 = CONCAT44D(0x3f800000,-fVar15 + 1.0);
          dVar23 = CONCAT44D((int)(D2U(dVar23) >> 0x20),F32LO(dVar23) - fVar16);
        }
        else {
          dVar28 = dVar28 + dVar28;
          dVar23 = dVar23 - dVar18;
        }
        if (in_FPSCR_SZ == '\0') {
          dVar19 = CONCAT44D(SUB84(dVar28,0),
                                    *(undefined4 *)(unsigned)((int)puVar9 + iVar8 * 0x28 + 0xc));
        }
        else {
          in_xd4 = *(double *)(unsigned)((int)puVar9 + iVar8 * 0x28 + 0xc);
          dVar19 = dVar14;
        }
        if (in_FPSCR_PR == '\0') {
          dVar19 = CONCAT44D(F32HI(dVar19) / F32LO(dVar23),
                                    SUB84(dVar19,0));
        }
        else {
          dVar19 = dVar19 / dVar23;
        }
        if (in_FPSCR_SZ == '\0') {
          dVar28 = CONCAT44D((int)(D2U(dVar28) >> 0x20),
                                    *(undefined4 *)(unsigned)((int)puVar9 + iVar5 * 0x28 + 0xc));
          dVar23 = (double)(D2U(dVar19) & 0xffffffff);
        }
        else {
          dVar14 = *(double *)(unsigned)((int)puVar9 + iVar5 * 0x28 + 0xc);
        }
        if (in_FPSCR_PR == '\0') {
          dVar28 = CONCAT44D((int)(D2U(dVar28) >> 0x20),
                                    F32LO(dVar28) - F32LO(dVar19));
        }
        else {
          dVar28 = dVar28 - dVar19;
        }
        uVar22 = (undefined4)(D2U(dVar19) >> 0x20);
        if (in_FPSCR_SZ == '\0') {
          dVar25 = CONCAT44D(*(undefined4 *)(unsigned)(puVar9 + iVar8 * 5 + 2),SUB84(dVar25,0));
          dVar19 = CONCAT44D(uVar22,SUB84(dVar23,0));
          dVar18 = CONCAT44D(uVar22,fVar13);
        }
        else {
          dVar25 = (double)puVar9[iVar8 * 5 + 2];
          dVar18 = dVar19;
          in_xd4 = dVar27;
        }
        if (in_FPSCR_PR == '\0') {
          dVar19 = (double)(ulonglong)
                           (uint)(F32HI(dVar19) * F32LO(dVar28) +
                                 SUB84(dVar19,0));
        }
        if (in_FPSCR_SZ == '\0') {
          dVar28 = CONCAT44D((int)(D2U(dVar28) >> 0x20),
                                    *(undefined4 *)(unsigned)(puVar9 + iVar5 * 5 + 2));
          dVar23 = CONCAT44D(SUB84(dVar27,0),SUB84(dVar19,0));
        }
        else {
          dVar14 = (double)puVar9[iVar5 * 5 + 2];
          dVar23 = in_xd14;
        }
        fVar15 = F32HI(dVar25);
        if (in_FPSCR_PR == '\0') {
          dVar28 = CONCAT44D((int)(D2U(dVar28) >> 0x20),F32LO(dVar28) - fVar15);
          dVar18 = CONCAT44D(uVar22,F32HI(dVar23) * F32LO(dVar23) +
                                           SUB84(dVar18,0));
        }
        else {
          dVar28 = dVar28 - dVar25;
        }
        uVar22 = (undefined4)(D2U(dVar18) >> 0x20);
        if (in_FPSCR_SZ == '\0') {
          dVar25 = CONCAT44D(*(undefined4 *)(unsigned)(puVar12 + iVar2),SUB84(dVar25,0));
          dVar23 = CONCAT44D(uVar22,fVar15);
        }
        else {
          dVar25 = *(double *)(unsigned)(puVar12 + iVar2);
          dVar23 = dVar18;
        }
        if (in_FPSCR_PR == '\0') {
          dVar23 = (double)(ulonglong)
                           (uint)(F32HI(dVar23) * F32LO(dVar28) +
                                 SUB84(dVar23,0));
        }
        dVar19 = in_xd12;
        if (in_FPSCR_SZ == '\0') {
          dVar19 = CONCAT44D(SUB84(dVar17,0),SUB84(dVar23,0));
        }
        if (in_FPSCR_PR == '\0') {
          dVar25 = CONCAT44D(F32HI(dVar19) * F32LO(dVar19) +
                                    F32HI(dVar25),SUB84(dVar25,0));
        }
        dVar23 = dVar18;
        if (in_FPSCR_SZ == '\0') {
          dVar23 = CONCAT44D(uVar22,SUB84(dVar19,0));
        }
        pdVar6 = (double *)(unsigned)(puVar10 + iVar4 * 5);
        uVar24 = (undefined4)(D2U(dVar28) >> 0x20);
        if (in_FPSCR_SZ == '\0') {
          *(int *)(unsigned)pdVar6 = SUB84(dVar18,0);
          *(int *)(unsigned)((int)pdVar6 + 4) = (int)(D2U(dVar25) >> 0x20);
          *(undefined4 *)(unsigned)(pdVar6 + 1) = uVar24;
          dVar28 = CONCAT44D(uVar24,*(undefined4 *)(unsigned)(puVar9 + iVar5 * 5 + 3));
          dVar18 = CONCAT44D(uVar22,*(undefined4 *)(unsigned)(puVar9 + iVar8 * 5 + 3));
        }
        else {
          *pdVar6 = in_xd4;
          *(double *)(unsigned)((int)pdVar6 + 4) = dVar25;
          pdVar6[1] = dVar28;
          dVar14 = (double)puVar9[iVar5 * 5 + 3];
          in_xd4 = (double)puVar9[iVar8 * 5 + 3];
        }
        if (in_FPSCR_PR == '\0') {
          fVar15 = F32LO(dVar28) - F32LO(dVar18);
        }
        else {
          fVar15 = SUB84(dVar28 - dVar18,0);
        }
        dVar28 = in_xd4;
        if (in_FPSCR_SZ == '\0') {
          dVar28 = CONCAT44D(SUB84(dVar18,0),fVar15);
        }
        fVar15 = F32HI(dVar23);
        if (in_FPSCR_PR == '\0') {
          dVar28 = CONCAT44D(fVar15 * F32LO(dVar28) + F32HI(dVar28),
                                    SUB84(dVar28,0));
        }
        uVar22 = (undefined4)(D2U(dVar28) >> 0x20);
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)(unsigned)(pdVar6 + 3) = uVar22;
          dVar28 = CONCAT44D(uVar22,*(undefined4 *)(unsigned)((int)puVar9 + iVar5 * 0x28 + 0x1c));
          dVar18 = CONCAT44D((int)(D2U(dVar18) >> 0x20),
                                    *(undefined4 *)(unsigned)((int)puVar9 + iVar8 * 0x28 + 0x1c));
        }
        else {
          pdVar6[3] = dVar28;
          dVar14 = *(double *)(unsigned)((int)puVar9 + iVar5 * 0x28 + 0x1c);
          in_xd4 = *(double *)(unsigned)((int)puVar9 + iVar8 * 0x28 + 0x1c);
        }
        if (in_FPSCR_PR == '\0') {
          fVar16 = F32LO(dVar28) - F32LO(dVar18);
        }
        else {
          fVar16 = SUB84(dVar28 - dVar18,0);
        }
        dVar28 = in_xd4;
        if (in_FPSCR_SZ == '\0') {
          dVar28 = CONCAT44D(SUB84(dVar18,0),fVar16);
        }
        if (in_FPSCR_PR == '\0') {
          dVar28 = CONCAT44D(fVar15 * F32LO(dVar28) + F32HI(dVar28),
                                    SUB84(dVar28,0));
        }
        uVar22 = (undefined4)(D2U(dVar28) >> 0x20);
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)(unsigned)((int)pdVar6 + 0x1c) = uVar22;
          dVar28 = CONCAT44D(uVar22,*(undefined4 *)(unsigned)(puVar9 + iVar5 * 5 + 4));
          dVar18 = CONCAT44D((int)(D2U(dVar18) >> 0x20),
                                    *(undefined4 *)(unsigned)(puVar9 + iVar8 * 5 + 4));
        }
        else {
          *(double *)(unsigned)((int)pdVar6 + 0x1c) = dVar28;
          dVar14 = (double)puVar9[iVar5 * 5 + 4];
          in_xd4 = (double)puVar9[iVar8 * 5 + 4];
        }
        if (in_FPSCR_PR == '\0') {
          fVar16 = F32LO(dVar28) - F32LO(dVar18);
        }
        else {
          fVar16 = SUB84(dVar28 - dVar18,0);
        }
        dVar28 = in_xd4;
        if (in_FPSCR_SZ == '\0') {
          dVar28 = CONCAT44D(SUB84(dVar18,0),fVar16);
        }
        if (in_FPSCR_PR == '\0') {
          dVar28 = CONCAT44D(fVar15 * F32LO(dVar28) + F32HI(dVar28),
                                    SUB84(dVar28,0));
        }
        uVar22 = (undefined4)(D2U(dVar28) >> 0x20);
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)(unsigned)(pdVar6 + 4) = uVar22;
          dVar28 = CONCAT44D(uVar22,*(undefined4 *)(unsigned)((int)puVar9 + iVar5 * 0x28 + 0x24));
          dVar18 = CONCAT44D((int)(D2U(dVar18) >> 0x20),
                                    *(undefined4 *)(unsigned)((int)puVar9 + iVar8 * 0x28 + 0x24));
        }
        else {
          pdVar6[4] = dVar28;
          dVar14 = *(double *)(unsigned)((int)puVar9 + iVar5 * 0x28 + 0x24);
          in_xd4 = *(double *)(unsigned)((int)puVar9 + iVar8 * 0x28 + 0x24);
        }
        iVar4 = iVar4 + 1;
        if (in_FPSCR_PR == '\0') {
          fVar16 = F32LO(dVar28) - F32LO(dVar18);
        }
        else {
          fVar16 = SUB84(dVar28 - dVar18,0);
        }
        dVar28 = in_xd4;
        if (in_FPSCR_SZ == '\0') {
          dVar28 = CONCAT44D(SUB84(dVar18,0),fVar16);
        }
        if (in_FPSCR_PR == '\0') {
          dVar28 = CONCAT44D(fVar15 * F32LO(dVar28) + F32HI(dVar28),
                                    SUB84(dVar28,0));
        }
        if (in_FPSCR_SZ == '\0') {
          *(int *)(unsigned)((int)pdVar6 + 0x24) = (int)(D2U(dVar28) >> 0x20);
        }
        else {
          *(double *)(unsigned)((int)pdVar6 + 0x24) = dVar28;
        }
      }
      pdVar6 = (double *)(unsigned)(puVar9 + iVar5 * 5);
      if (in_FPSCR_SZ == '\0') {
        uVar20 = CONCAT44(*(undefined4 *)(unsigned)((int)pdVar6 + 0x14),0x3f800000);
      }
      else {
        uVar20 = *(undefined8 *)(unsigned)((int)pdVar6 + 0x14);
      }
      if (in_FPSCR_PR == '\0' && (float)uVar20 < F32HI(uVar20)) {
        if (in_FPSCR_SZ == '\0') {
          dVar18 = CONCAT44D(*(undefined4 *)(unsigned)pdVar6,*(undefined4 *)(unsigned)((int)pdVar6 + 4));
        }
        else {
          dVar18 = *pdVar6;
          in_xd4 = *(double *)(unsigned)((int)pdVar6 + 4);
        }
        pdVar7 = (double *)(unsigned)(puVar10 + iVar4 * 5);
        iVar4 = iVar4 + 1;
        if (in_FPSCR_SZ == '\0') {
          *(int *)(unsigned)pdVar7 = (int)(D2U(dVar18) >> 0x20);
          *(int *)(unsigned)((int)pdVar7 + 4) = SUB84(dVar18,0);
          *(undefined4 *)(unsigned)(pdVar7 + 1) = *(undefined4 *)(unsigned)(pdVar6 + 1);
          *(undefined4 *)(unsigned)(pdVar7 + 3) = *(undefined4 *)(unsigned)(pdVar6 + 3);
          *(undefined4 *)(unsigned)((int)pdVar7 + 0x1c) = *(undefined4 *)(unsigned)((int)pdVar6 + 0x1c);
          *(undefined4 *)(unsigned)(pdVar7 + 4) = *(undefined4 *)(unsigned)(pdVar6 + 4);
          *(undefined4 *)(unsigned)((int)pdVar7 + 0x24) = *(undefined4 *)(unsigned)((int)pdVar6 + 0x24);
        }
        else {
          *pdVar7 = dVar18;
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
      *(undefined4 *)(unsigned)((int)ar7 + 0x1c) = *(undefined4 *)(unsigned)(puVar12 + iVar2 + 0x34);
      *(undefined4 *)(unsigned)(ar7 + 3) = *(undefined4 *)(unsigned)(puVar12 + iVar2 + 0x30);
      *(undefined4 *)(unsigned)((int)ar7 + 0x14) = *(undefined4 *)(unsigned)(puVar12 + iVar2 + 0x2c);
      *(undefined4 *)(unsigned)(ar7 + 2) = *(undefined4 *)(unsigned)(puVar12 + iVar2 + 0x28);
      *(undefined4 *)(unsigned)((int)ar7 + 0xc) = *(undefined4 *)(unsigned)(puVar12 + iVar2 + 0x18);
      *(undefined4 *)(unsigned)(ar7 + 1) = *(undefined4 *)(unsigned)(puVar12 + iVar2 + 0x14);
      uVar22 = 0xe0000000;
      puVar9 = (undefined8 *)(unsigned)((int)ar7 + 4);
      *(undefined4 *)(unsigned)puVar9 = *(undefined4 *)(unsigned)puVar10;
    }
    else {
      ar7[3] = *(undefined8 *)(unsigned)(puVar12 + iVar2 + 0x34);
      ar7[2] = *(undefined8 *)(unsigned)(puVar12 + iVar2 + 0x30);
      ar7[1] = *(undefined8 *)(unsigned)(puVar12 + iVar2 + 0x2c);
      *ar7 = *(undefined8 *)(unsigned)(puVar12 + iVar2 + 0x28);
      ar7[-1] = *(undefined8 *)(unsigned)(puVar12 + iVar2 + 0x18);
      ar7[-2] = *(undefined8 *)(unsigned)(puVar12 + iVar2 + 0x14);
      uVar22 = 0xe0000000;
      puVar9 = ar7 + -3;
      *puVar9 = *puVar10;
    }
    *(undefined4 *)(unsigned)((int)puVar9 + -4) = uVar22;
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(unsigned)(puVar9 + 7) = *(undefined4 *)(unsigned)(puVar12 + iVar2 + 0x5c);
      *(undefined4 *)(unsigned)((int)puVar9 + 0x34) = *(undefined4 *)(unsigned)(puVar12 + iVar2 + 0x58);
      *(undefined4 *)(unsigned)(puVar9 + 6) = *(undefined4 *)(unsigned)(puVar12 + iVar2 + 0x54);
      *(undefined4 *)(unsigned)((int)puVar9 + 0x2c) = *(undefined4 *)(unsigned)(puVar12 + iVar2 + 0x50);
      *(undefined4 *)(unsigned)(puVar9 + 5) = *(undefined4 *)(unsigned)(puVar12 + iVar2 + 0x40);
      *(undefined4 *)(unsigned)((int)puVar9 + 0x24) = *(undefined4 *)(unsigned)(puVar12 + iVar2 + 0x3c);
      puVar9 = puVar9 + 4;
      *(undefined4 *)(unsigned)puVar9 = *(undefined4 *)(unsigned)(puVar12 + iVar2 + 0x38);
    }
    else {
      *(undefined8 *)(unsigned)((int)puVar9 + 0x34) = *(undefined8 *)(unsigned)(puVar12 + iVar2 + 0x5c);
      *(undefined8 *)(unsigned)((int)puVar9 + 0x2c) = *(undefined8 *)(unsigned)(puVar12 + iVar2 + 0x58);
      *(undefined8 *)(unsigned)((int)puVar9 + 0x24) = *(undefined8 *)(unsigned)(puVar12 + iVar2 + 0x54);
      *(undefined8 *)(unsigned)((int)puVar9 + 0x1c) = *(undefined8 *)(unsigned)(puVar12 + iVar2 + 0x50);
      *(undefined8 *)(unsigned)((int)puVar9 + 0x14) = *(undefined8 *)(unsigned)(puVar12 + iVar2 + 0x40);
      *(undefined8 *)(unsigned)((int)puVar9 + 0xc) = *(undefined8 *)(unsigned)(puVar12 + iVar2 + 0x3c);
      puVar9 = (undefined8 *)(unsigned)((int)puVar9 + 4);
      *puVar9 = *(undefined8 *)(unsigned)(puVar12 + iVar2 + 0x38);
    }
    *(undefined4 *)(unsigned)((int)puVar9 + -4) = uVar22;
    if (iVar4 != 3) {
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(unsigned)(puVar9 + 7) = *(undefined4 *)(unsigned)(puVar12 + iVar2 + 0xac);
        *(undefined4 *)(unsigned)((int)puVar9 + 0x34) = *(undefined4 *)(unsigned)(puVar12 + iVar2 + 0xa8);
        *(undefined4 *)(unsigned)(puVar9 + 6) = *(undefined4 *)(unsigned)(puVar12 + iVar2 + 0xa4);
        *(undefined4 *)(unsigned)((int)puVar9 + 0x2c) = *(undefined4 *)(unsigned)(puVar12 + iVar2 + 0xa0);
        *(undefined4 *)(unsigned)(puVar9 + 5) = *(undefined4 *)(unsigned)(puVar12 + iVar2 + 0x90);
        *(undefined4 *)(unsigned)((int)puVar9 + 0x24) = *(undefined4 *)(unsigned)(puVar12 + iVar2 + 0x8c);
        puVar9 = puVar9 + 4;
        *(undefined4 *)(unsigned)puVar9 = *(undefined4 *)(unsigned)(puVar12 + iVar2 + 0x88);
      }
      else {
        *(undefined8 *)(unsigned)((int)puVar9 + 0x34) = *(undefined8 *)(unsigned)(puVar12 + iVar2 + 0xac);
        *(undefined8 *)(unsigned)((int)puVar9 + 0x2c) = *(undefined8 *)(unsigned)(puVar12 + iVar2 + 0xa8);
        *(undefined8 *)(unsigned)((int)puVar9 + 0x24) = *(undefined8 *)(unsigned)(puVar12 + iVar2 + 0xa4);
        *(undefined8 *)(unsigned)((int)puVar9 + 0x1c) = *(undefined8 *)(unsigned)(puVar12 + iVar2 + 0xa0);
        *(undefined8 *)(unsigned)((int)puVar9 + 0x14) = *(undefined8 *)(unsigned)(puVar12 + iVar2 + 0x90);
        *(undefined8 *)(unsigned)((int)puVar9 + 0xc) = *(undefined8 *)(unsigned)(puVar12 + iVar2 + 0x8c);
        puVar9 = (undefined8 *)(unsigned)((int)puVar9 + 4);
        *puVar9 = *(undefined8 *)(unsigned)(puVar12 + iVar2 + 0x88);
      }
      *(undefined4 *)(unsigned)((int)puVar9 + -4) = uVar22;
    }
    uVar22 = 0xf0000000;
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(unsigned)(puVar9 + 7) = *(undefined4 *)(unsigned)(puVar12 + iVar2 + 0x84);
      *(undefined4 *)(unsigned)((int)puVar9 + 0x34) = *(undefined4 *)(unsigned)(puVar12 + iVar2 + 0x80);
      *(undefined4 *)(unsigned)(puVar9 + 6) = *(undefined4 *)(unsigned)(puVar12 + iVar2 + 0x7c);
      *(undefined4 *)(unsigned)((int)puVar9 + 0x2c) = *(undefined4 *)(unsigned)(puVar12 + iVar2 + 0x78);
      *(undefined4 *)(unsigned)(puVar9 + 5) = *(undefined4 *)(unsigned)(puVar12 + iVar2 + 0x68);
      *(undefined4 *)(unsigned)((int)puVar9 + 0x24) = *(undefined4 *)(unsigned)(puVar12 + iVar2 + 100);
      puVar9 = puVar9 + 4;
      *(undefined4 *)(unsigned)puVar9 = *(undefined4 *)(unsigned)(puVar12 + iVar2 + 0x60);
    }
    else {
      *(undefined8 *)(unsigned)((int)puVar9 + 0x34) = *(undefined8 *)(unsigned)(puVar12 + iVar2 + 0x84);
      *(undefined8 *)(unsigned)((int)puVar9 + 0x2c) = *(undefined8 *)(unsigned)(puVar12 + iVar2 + 0x80);
      *(undefined8 *)(unsigned)((int)puVar9 + 0x24) = *(undefined8 *)(unsigned)(puVar12 + iVar2 + 0x7c);
      *(undefined8 *)(unsigned)((int)puVar9 + 0x1c) = *(undefined8 *)(unsigned)(puVar12 + iVar2 + 0x78);
      *(undefined8 *)(unsigned)((int)puVar9 + 0x14) = *(undefined8 *)(unsigned)(puVar12 + iVar2 + 0x68);
      *(undefined8 *)(unsigned)((int)puVar9 + 0xc) = *(undefined8 *)(unsigned)(puVar12 + iVar2 + 100);
      puVar9 = (undefined8 *)(unsigned)((int)puVar9 + 4);
      *puVar9 = *(undefined8 *)(unsigned)(puVar12 + iVar2 + 0x60);
    }
    *(undefined4 *)(unsigned)((int)puVar9 + -4) = uVar22;
    ar7 = (undefined8 *)(unsigned)((int)puVar9 + 0x1c);
    *(undefined4 *)(unsigned)0x8c4aa520 = *(undefined4 *)(unsigned)0x8c4aa520 + iVar4;
  }
  return ar7;
}

__asm__(".globl _FUN_8c22fa7c\n.set _FUN_8c22fa7c, _FUN_8c22fa7c_def\n");
