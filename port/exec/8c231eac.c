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
undefined8 * FUN_8c231eac_def(double *ar4,double *ar5,double *ar6,undefined8 *ar7)

{
  ring[rp++ & 255] = "FUN_8c231eac";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 316; for (int i_ = 0; i_ < 316; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  double *pdVar3;
  double *pdVar4;
  undefined8 *puVar5;
  int iVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined4 in_fr1 = 0;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  double dVar15;
  double dVar16;
  ulonglong uVar17;
  double dVar18;
  undefined8 uVar19;
  double in_dr4 = 0;
  undefined4 uVar20;
  uint uVar21;
  undefined4 in_fr7 = 0;
  float fVar22;
  double dVar23;
  float fVar24;
  undefined4 in_fr9 = 0;
  double dVar25;
  undefined4 uVar26;
  double dVar27;
  float fVar28;
  double in_dr12 = 0;
  double dVar30;
  double in_xd0 = 0;
  double in_xd2 = 0;
  double dVar31;
  double in_xd4 = 0;
  double in_xd6 = 0;
  double in_xd8 = 0;
  double in_xd10 = 0;
  double dVar32;
  double in_xd12 = 0;
  bool bVar33;
  bool bVar34;
  char in_FPSCR_PR = 0;
  char in_FPSCR_SZ = 0;
  double dVar29;
  
  uVar26 = (undefined4)((ulonglong)in_dr12 >> 0x20);
  if (in_FPSCR_SZ == '\0') {
    puVar8 = ((undefined8 *)(fr0_ - 0x24));
    ((undefined8 *)(fr0_ - 0x24))[0] = CONCAT44(SUB84(in_dr12,0),uVar26);
  }
  else {
    puVar8 = (undefined8 *)(unsigned)((undefined1 *)(fr0_ - 0x34));
  }
  if (((*(undefined4 *)(unsigned)(unsigned)0x8c4aa4f0) & 0x10000) == 0) {
    if (in_FPSCR_SZ == '\0') {
      in_dr12 = CONCAT44D(uVar26,0x3f000000);
    }
    else {
      in_xd12 = 2.78134754523302e-309;
    }
    fVar28 = F32LO(in_dr12);
    if (((*(undefined4 *)(unsigned)(unsigned)0x8c4aa4f0) & 0x20000) == 0) {
      dVar27 = in_xd12;
      dVar32 = in_xd12;
      if (in_FPSCR_SZ == '\0') {
        dVar27 = CONCAT44D(fVar28,fVar28);
        dVar32 = in_xd10;
      }
    }
    else {
      if (in_FPSCR_SZ == '\0') {
        dVar27 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c277af8),(*(undefined4 *)(unsigned)(unsigned)0x8c277afc));
      }
      else {
        dVar27 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c277afc),(*(undefined4 *)(unsigned)(unsigned)0x8c277af8));
        in_xd10 = CONCAT44D((*(uint *)(unsigned)0x8c277b00),(*(undefined4 *)(unsigned)(unsigned)0x8c277afc));
      }
      dVar32 = in_xd10;
      if (in_FPSCR_PR == '\0') {
        dVar27 = CONCAT44D(F32HI(dVar27) + fVar28,
                                  F32LO(dVar27) + fVar28);
      }
      else {
        dVar27 = dVar27 + in_dr12 + in_dr12;
      }
    }
    if (in_FPSCR_SZ == '\0') {
      dVar30 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4aa4e0),(*(undefined4 *)(unsigned)(unsigned)0x8c4aa4dc));
      dVar25 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4aa4a8),in_fr9);
      in_fr7 = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa4a8);
    }
    else {
      dVar25 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4aa4ac),(*(undefined4 *)(unsigned)(unsigned)0x8c4aa4a8));
      dVar30 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4aa4e4),(*(undefined4 *)(unsigned)(unsigned)0x8c4aa4e0));
      in_xd2 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4aa4e0),(*(undefined4 *)(unsigned)(unsigned)0x8c4aa4dc));
      in_xd6 = dVar25;
    }
    if (in_FPSCR_PR == '\0') {
      dVar25 = CONCAT44D(F32HI(dVar25) *
                                F32HI(dVar30),SUB84(dVar25,0));
    }
    else {
      dVar25 = dVar25 * dVar30;
    }
    dVar23 = in_xd6;
    if (in_FPSCR_SZ == '\0') {
      dVar23 = CONCAT44D(in_fr7,in_fr7);
    }
    if (in_FPSCR_PR == '\0') {
      dVar23 = CONCAT44D(F32HI(dVar23) * F32LO(dVar30),SUB84(dVar23,0)
                               );
    }
    else {
      dVar23 = dVar23 * dVar30;
    }
    dVar29 = CONCAT44D(0x3f800000,fVar28);
    dVar30 = dVar29;
    if (in_FPSCR_SZ == '\0') {
      dVar30 = 0.007812501848093234;
    }
    fVar12 = F32HI(dVar25);
    if (in_FPSCR_PR == '\0') {
      dVar30 = CONCAT44D(F32HI(dVar30) / fVar12,SUB84(dVar30,0));
    }
    else {
      dVar30 = dVar30 / dVar25;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar23 = CONCAT44D((int)(D2U(dVar23) >> 0x20),(*(undefined4 *)(unsigned)(unsigned)0x8c4aa4b4));
    }
    else {
      in_xd6 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4aa4b8),(*(undefined4 *)(unsigned)(unsigned)0x8c4aa4b4));
    }
    fVar24 = F32HI(dVar23);
    if (in_FPSCR_PR == '\0') {
      dVar30 = CONCAT44D((int)(D2U(dVar30) >> 0x20),F32LO(dVar30) / fVar24);
    }
    else {
      dVar30 = dVar30 / dVar23;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar25 = CONCAT44D(fVar12,(*(undefined4 *)(unsigned)(unsigned)0x8c4aa4b8));
      *(undefined4 *)(unsigned)((int)puVar8 + -0x78) = *(undefined4 *)(unsigned)((int)ar4 + 4);
      *(undefined4 *)(unsigned)((int)puVar8 + -0x74) = *(undefined4 *)(unsigned)(ar4 + 1);
      *(undefined4 *)(unsigned)((int)puVar8 + -0x70) = *(undefined4 *)(unsigned)((int)ar4 + 0xc);
      *(undefined4 *)(unsigned)((int)puVar8 + -100) = *(undefined4 *)(unsigned)ar4;
      dVar15 = CONCAT44D(*(undefined4 *)(unsigned)ar4,*(undefined4 *)(unsigned)((int)ar4 + 4));
    }
    else {
      in_xd8 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4aa4bc),(*(undefined4 *)(unsigned)(unsigned)0x8c4aa4b8));
      *(undefined8 *)(unsigned)((int)puVar8 + -0x78) = *(undefined8 *)(unsigned)((int)ar4 + 4);
      *(double *)(unsigned)((int)puVar8 + -0x74) = ar4[1];
      *(undefined8 *)(unsigned)((int)puVar8 + -0x70) = *(undefined8 *)(unsigned)((int)ar4 + 0xc);
      *(double *)(unsigned)((int)puVar8 + -100) = *ar4;
      in_xd2 = *(double *)(unsigned)((int)ar4 + 4);
      dVar15 = *ar4;
    }
    fVar22 = F32LO(dVar23);
    fVar12 = F32LO(dVar30);
    if (in_FPSCR_PR == '\0') {
      fVar9 = (F32LO(dVar15) - fVar22) * F32HI(dVar15) * fVar12;
    }
    else {
      fVar9 = SUB84((dVar15 - dVar23) * (dVar15 - dVar23) * dVar30,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(unsigned)((int)puVar8 + -0x6c) = fVar9;
      dVar15 = CONCAT44D(*(undefined4 *)(unsigned)ar4,*(undefined4 *)(unsigned)(ar4 + 1));
    }
    else {
      *(double *)(unsigned)((int)puVar8 + -0x6c) = in_xd2;
      in_xd2 = ar4[1];
      dVar15 = *ar4;
    }
    fVar9 = F32LO(dVar25);
    fVar14 = F32HI(dVar30);
    if (in_FPSCR_PR == '\0') {
      fVar13 = F32HI(dVar15);
      dVar15 = CONCAT44D(fVar13,(F32LO(dVar15) - fVar9) * fVar13 * fVar14);
    }
    else {
      dVar15 = (dVar15 - dVar25) * (dVar15 - dVar25) * dVar30;
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)(unsigned)((int)puVar8 + -0x68) = SUB84(dVar15,0);
      dVar15 = CONCAT44D((int)(D2U(dVar15) >> 0x20),*(undefined4 *)(unsigned)(ar4 + 2));
    }
    else {
      *(double *)(unsigned)((int)puVar8 + -0x68) = in_xd2;
      in_xd2 = ar4[2];
    }
    fVar13 = F32HI(in_dr4);
    if (in_FPSCR_PR == '\0') {
      fVar10 = F32LO(dVar15) + fVar13;
      bVar33 = fVar10 < fVar13;
    }
    else {
      fVar10 = SUB84(dVar15 + in_dr4,0);
      bVar33 = dVar15 + in_dr4 < in_dr4;
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(unsigned)((int)puVar8 + -0x58) = fVar10;
    }
    else {
      *(double *)(unsigned)((int)puVar8 + -0x58) = in_xd2;
    }
    if (bVar33) {
      if (in_FPSCR_SZ == '\0') {
        *(float *)(unsigned)((int)puVar8 + -0x58) = fVar13;
      }
      else {
        *(double *)(unsigned)((int)puVar8 + -0x58) = in_dr4;
      }
    }
    fVar10 = F32HI(dVar27);
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(unsigned)((int)puVar8 + -0x54) = *(undefined4 *)(unsigned)((int)ar4 + 0x14);
      dVar16 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 3),fVar10);
      dVar15 = CONCAT44D(fVar28,in_fr1);
    }
    else {
      *(undefined8 *)(unsigned)((int)puVar8 + -0x54) = *(undefined8 *)(unsigned)((int)ar4 + 0x14);
      dVar16 = ar4[3];
      in_xd2 = dVar27;
      dVar15 = in_xd12;
    }
    fVar11 = F32HI(dVar15);
    if (in_FPSCR_PR == '\0') {
      dVar16 = (double)(ulonglong)
                       (uint)(fVar11 * F32HI(dVar16) + F32LO(dVar16));
    }
    uVar26 = SUB84(dVar27,0);
    if (in_FPSCR_SZ == '\0') {
      *(int *)(unsigned)((int)puVar8 + -0x60) = SUB84(dVar16,0);
      uVar17 = CONCAT44(*(undefined4 *)(unsigned)((int)ar4 + 0x1c),uVar26);
    }
    else {
      *(double *)(unsigned)((int)puVar8 + -0x60) = in_xd2;
      uVar17 = *(ulonglong *)(unsigned)((int)ar4 + 0x1c);
      in_xd2 = dVar32;
    }
    if (in_FPSCR_PR == '\0') {
      uVar17 = (ulonglong)(uint)(fVar11 * (float)(uVar17 >> 0x20) + (float)uVar17);
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)(unsigned)((int)puVar8 + -0x5c) = (int)uVar17;
      *(undefined4 *)(unsigned)((int)puVar8 + -0x50) = *(undefined4 *)(unsigned)((int)ar5 + 4);
      *(undefined4 *)(unsigned)((int)puVar8 + -0x4c) = *(undefined4 *)(unsigned)(ar5 + 1);
      *(undefined4 *)(unsigned)((int)puVar8 + -0x48) = *(undefined4 *)(unsigned)((int)ar5 + 0xc);
      *(undefined4 *)(unsigned)((int)puVar8 + -0x3c) = *(undefined4 *)(unsigned)ar5;
      dVar16 = CONCAT44D(*(undefined4 *)(unsigned)ar5,*(undefined4 *)(unsigned)((int)ar5 + 4));
    }
    else {
      *(double *)(unsigned)((int)puVar8 + -0x5c) = in_xd2;
      *(undefined8 *)(unsigned)((int)puVar8 + -0x50) = *(undefined8 *)(unsigned)((int)ar5 + 4);
      *(double *)(unsigned)((int)puVar8 + -0x4c) = ar5[1];
      *(undefined8 *)(unsigned)((int)puVar8 + -0x48) = *(undefined8 *)(unsigned)((int)ar5 + 0xc);
      *(double *)(unsigned)((int)puVar8 + -0x3c) = *ar5;
      dVar16 = *ar5;
      in_xd2 = *(double *)(unsigned)((int)ar5 + 4);
    }
    if (in_FPSCR_PR == '\0') {
      fVar11 = (F32LO(dVar16) - fVar22) * F32HI(dVar16) * fVar12;
    }
    else {
      fVar11 = SUB84((dVar16 - dVar23) * (dVar16 - dVar23) * dVar30,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(unsigned)((int)puVar8 + -0x44) = fVar11;
      dVar16 = CONCAT44D(*(undefined4 *)(unsigned)ar5,*(undefined4 *)(unsigned)(ar5 + 1));
    }
    else {
      *(double *)(unsigned)((int)puVar8 + -0x44) = in_xd2;
      in_xd2 = ar5[1];
      dVar16 = *ar5;
    }
    if (in_FPSCR_PR == '\0') {
      fVar11 = F32HI(dVar16);
      dVar16 = CONCAT44D(fVar11,(F32LO(dVar16) - fVar9) * fVar11 * fVar14);
    }
    else {
      dVar16 = (dVar16 - dVar25) * (dVar16 - dVar25) * dVar30;
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)(unsigned)((int)puVar8 + -0x40) = SUB84(dVar16,0);
      dVar16 = CONCAT44D((int)(D2U(dVar16) >> 0x20),*(undefined4 *)(unsigned)(ar5 + 2));
    }
    else {
      *(double *)(unsigned)((int)puVar8 + -0x40) = in_xd2;
      in_xd2 = ar5[2];
    }
    if (in_FPSCR_PR == '\0') {
      fVar11 = F32LO(dVar16) + fVar13;
      bVar33 = fVar11 < fVar13;
    }
    else {
      fVar11 = SUB84(dVar16 + in_dr4,0);
      bVar33 = dVar16 + in_dr4 < in_dr4;
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(unsigned)((int)puVar8 + -0x30) = fVar11;
    }
    else {
      *(double *)(unsigned)((int)puVar8 + -0x30) = in_xd2;
    }
    if (bVar33) {
      if (in_FPSCR_SZ == '\0') {
        *(float *)(unsigned)((int)puVar8 + -0x30) = fVar13;
      }
      else {
        *(double *)(unsigned)((int)puVar8 + -0x30) = in_dr4;
      }
    }
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(unsigned)((int)puVar8 + -0x2c) = *(undefined4 *)(unsigned)((int)ar5 + 0x14);
      dVar16 = CONCAT44D(*(undefined4 *)(unsigned)(ar5 + 3),fVar10);
      dVar15 = CONCAT44D(fVar28,SUB84(dVar15,0));
    }
    else {
      *(undefined8 *)(unsigned)((int)puVar8 + -0x2c) = *(undefined8 *)(unsigned)((int)ar5 + 0x14);
      dVar16 = ar5[3];
      in_xd2 = dVar27;
      dVar15 = in_xd12;
    }
    fVar11 = F32HI(dVar15);
    if (in_FPSCR_PR == '\0') {
      dVar16 = (double)(ulonglong)
                       (uint)(fVar11 * F32HI(dVar16) + F32LO(dVar16));
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)(unsigned)((int)puVar8 + -0x38) = SUB84(dVar16,0);
      uVar17 = CONCAT44(*(undefined4 *)(unsigned)((int)ar5 + 0x1c),uVar26);
    }
    else {
      *(double *)(unsigned)((int)puVar8 + -0x38) = in_xd2;
      uVar17 = *(ulonglong *)(unsigned)((int)ar5 + 0x1c);
      in_xd2 = dVar32;
    }
    if (in_FPSCR_PR == '\0') {
      uVar17 = (ulonglong)(uint)(fVar11 * (float)(uVar17 >> 0x20) + (float)uVar17);
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)(unsigned)((int)puVar8 + -0x34) = (int)uVar17;
      *(undefined4 *)(unsigned)((int)puVar8 + -0x28) = *(undefined4 *)(unsigned)((int)ar6 + 4);
      *(undefined4 *)(unsigned)((int)puVar8 + -0x24) = *(undefined4 *)(unsigned)(ar6 + 1);
      *(undefined4 *)(unsigned)((int)puVar8 + -0x20) = *(undefined4 *)(unsigned)((int)ar6 + 0xc);
      *(undefined4 *)(unsigned)((int)puVar8 + -0x14) = *(undefined4 *)(unsigned)ar6;
      dVar16 = CONCAT44D(*(undefined4 *)(unsigned)ar6,*(undefined4 *)(unsigned)((int)ar6 + 4));
    }
    else {
      *(double *)(unsigned)((int)puVar8 + -0x34) = in_xd2;
      *(undefined8 *)(unsigned)((int)puVar8 + -0x28) = *(undefined8 *)(unsigned)((int)ar6 + 4);
      *(double *)(unsigned)((int)puVar8 + -0x24) = ar6[1];
      *(undefined8 *)(unsigned)((int)puVar8 + -0x20) = *(undefined8 *)(unsigned)((int)ar6 + 0xc);
      *(double *)(unsigned)((int)puVar8 + -0x14) = *ar6;
      in_xd2 = *(double *)(unsigned)((int)ar6 + 4);
      dVar16 = *ar6;
    }
    if (in_FPSCR_PR == '\0') {
      fVar12 = (F32LO(dVar16) - fVar22) * F32HI(dVar16) * fVar12;
    }
    else {
      fVar12 = SUB84((dVar16 - dVar23) * (dVar16 - dVar23) * dVar30,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(unsigned)((int)puVar8 + -0x1c) = fVar12;
      dVar16 = CONCAT44D(*(undefined4 *)(unsigned)ar6,*(undefined4 *)(unsigned)(ar6 + 1));
    }
    else {
      *(double *)(unsigned)((int)puVar8 + -0x1c) = in_xd2;
      in_xd2 = ar6[1];
      dVar16 = *ar6;
    }
    if (in_FPSCR_PR == '\0') {
      fVar12 = F32HI(dVar16);
      dVar30 = CONCAT44D(fVar12,(F32LO(dVar16) - fVar9) * fVar12 * fVar14);
    }
    else {
      dVar30 = (dVar16 - dVar25) * (dVar16 - dVar25) * dVar30;
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)(unsigned)((int)puVar8 + -0x18) = SUB84(dVar30,0);
      dVar30 = CONCAT44D((int)(D2U(dVar30) >> 0x20),*(undefined4 *)(unsigned)(ar6 + 2));
    }
    else {
      *(double *)(unsigned)((int)puVar8 + -0x18) = in_xd2;
      in_xd2 = ar6[2];
    }
    if (in_FPSCR_PR == '\0') {
      fVar12 = F32LO(dVar30) + fVar13;
      dVar30 = CONCAT44D((int)(D2U(dVar30) >> 0x20),fVar12);
      bVar33 = fVar12 < fVar13;
    }
    else {
      dVar30 = dVar30 + in_dr4;
      fVar12 = F32LO(dVar30);
      bVar33 = dVar30 < in_dr4;
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(unsigned)((int)puVar8 + -8) = fVar12;
    }
    else {
      *(double *)(unsigned)((int)puVar8 + -8) = in_xd2;
    }
    if (bVar33) {
      if (in_FPSCR_SZ == '\0') {
        *(float *)(unsigned)((int)puVar8 + -8) = fVar13;
      }
      else {
        *(double *)(unsigned)((int)puVar8 + -8) = in_dr4;
      }
    }
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(unsigned)((int)puVar8 + -4) = *(undefined4 *)(unsigned)((int)ar6 + 0x14);
      dVar30 = CONCAT44D((int)(D2U(dVar30) >> 0x20),*(undefined4 *)(unsigned)(ar6 + 3));
      dVar15 = CONCAT44D(fVar28,SUB84(dVar15,0));
    }
    else {
      *(undefined8 *)(unsigned)((int)puVar8 + -4) = *(undefined8 *)(unsigned)((int)ar6 + 0x14);
      in_xd2 = ar6[3];
      dVar15 = in_xd12;
    }
    fVar12 = F32HI(dVar15);
    if (in_FPSCR_PR == '\0') {
      dVar27 = CONCAT44D(fVar12 * F32LO(dVar30) + fVar10,uVar26);
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)(unsigned)((int)puVar8 + -0x10) = (int)(D2U(dVar27) >> 0x20);
      dVar30 = CONCAT44D((int)(D2U(dVar30) >> 0x20),*(undefined4 *)(unsigned)((int)ar6 + 0x1c));
    }
    else {
      *(double *)(unsigned)((int)puVar8 + -0x10) = dVar27;
      in_xd2 = *(double *)(unsigned)((int)ar6 + 0x1c);
    }
    if (in_FPSCR_PR == '\0') {
      dVar27 = (double)(ulonglong)(uint)(fVar12 * F32LO(dVar30) + F32LO(dVar27));
    }
    uVar26 = SUB84(dVar27,0);
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(unsigned)((int)puVar8 + -0xc) = uVar26;
      uVar20 = *(undefined4 *)(unsigned)((int)puVar8 + -0x3c);
      fVar28 = *(float *)(unsigned)((int)puVar8 + -0x40);
      dVar29 = CONCAT44D(0x3f800000,fVar28);
      pdVar3 = (double *)(unsigned)((int)puVar8 + -0x68);
      dVar30 = CONCAT44D((int)(D2U(dVar30) >> 0x20),fVar28);
      dVar15 = CONCAT44D(uVar20,SUB84(dVar15,0));
      dVar27 = CONCAT44D(uVar20,SUB84(in_dr4,0));
    }
    else {
      *(double *)(unsigned)((int)puVar8 + -0xc) = dVar32;
      dVar15 = *(double *)(unsigned)((int)puVar8 + -0x3c);
      in_xd2 = *(double *)(unsigned)((int)puVar8 + -0x40);
      pdVar3 = (double *)(unsigned)((int)puVar8 + -100);
      uVar20 = (undefined4)(D2U(dVar15) >> 0x20);
      in_xd12 = in_xd2;
      dVar27 = dVar15;
    }
    dVar16 = *pdVar3;
    fVar12 = F32HI(dVar16);
    if (in_FPSCR_PR == '\0') {
      dVar30 = CONCAT44D((int)(D2U(dVar30) >> 0x20),F32LO(dVar30) * fVar12);
      dVar15 = CONCAT44D(F32HI(dVar15) * F32LO(dVar16),SUB84(dVar15,0)
                               );
    }
    else {
      dVar30 = dVar30 * dVar16;
      dVar15 = dVar15 * dVar16;
    }
    if (in_FPSCR_SZ == '\0') {
      uVar26 = *(undefined4 *)(unsigned)((int)puVar8 + -0x44);
    }
    else {
      dVar32 = *(double *)(unsigned)((int)puVar8 + -0x44);
    }
    if (in_FPSCR_PR == '\0') {
      dVar15 = CONCAT44D(F32HI(dVar15) - F32LO(dVar30),SUB84(dVar15,0)
                               );
    }
    else {
      dVar15 = dVar15 - dVar30;
    }
    dVar31 = dVar32;
    if (in_FPSCR_SZ == '\0') {
      dVar30 = CONCAT44D((int)(D2U(dVar30) >> 0x20),uVar26);
      dVar31 = in_xd2;
    }
    if (in_FPSCR_PR == '\0') {
      fVar12 = F32LO(dVar30) * fVar12;
    }
    else {
      fVar12 = SUB84(dVar30 * dVar16,0);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar30 = CONCAT44D(*(undefined4 *)(unsigned)((int)puVar8 + -0x6c),uVar26);
      dVar18 = CONCAT44D(uVar20,fVar12);
    }
    else {
      dVar30 = *(double *)(unsigned)((int)puVar8 + -0x6c);
      dVar18 = dVar27;
    }
    fVar12 = F32HI(dVar30);
    if (in_FPSCR_PR == '\0') {
      dVar18 = CONCAT44D(F32HI(dVar18) * fVar12,SUB84(dVar18,0));
    }
    else {
      dVar18 = dVar18 * dVar30;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar15 = CONCAT44D((int)(D2U(dVar15) >> 0x20),fVar28);
      in_xd12 = in_xd0;
    }
    if (in_FPSCR_PR == '\0') {
      dVar15 = CONCAT44D((int)(D2U(dVar15) >> 0x20),F32LO(dVar15) * fVar12);
      fVar28 = F32LO(dVar18) - F32HI(dVar18);
    }
    else {
      dVar15 = dVar15 * dVar30;
      fVar28 = SUB84(dVar18 - dVar18,0);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar18 = CONCAT44D(*(undefined4 *)(unsigned)((int)puVar8 + -0x18),fVar28);
    }
    else {
      dVar18 = *(double *)(unsigned)((int)puVar8 + -0x18);
    }
    if (in_FPSCR_PR == '\0') {
      dVar18 = CONCAT44D(F32HI(dVar18) * F32LO(dVar18),SUB84(dVar18,0)
                               );
    }
    else {
      dVar18 = dVar18 * dVar18;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar18 = CONCAT44D((int)(D2U(dVar18) >> 0x20),
                                *(undefined4 *)(unsigned)((int)puVar8 + -0x1c));
    }
    else {
      dVar31 = *(double *)(unsigned)((int)puVar8 + -0x1c);
    }
    if (in_FPSCR_PR == '\0') {
      dVar18 = CONCAT44D(F32HI(dVar15) * F32LO(dVar18) +
                                F32HI(dVar18),SUB84(dVar18,0));
    }
    if (in_FPSCR_SZ == '\0') {
      dVar18 = CONCAT44D((int)(D2U(dVar18) >> 0x20),SUB84(dVar30,0));
      dVar32 = dVar31;
    }
    if (in_FPSCR_PR == '\0') {
      fVar28 = F32LO(dVar18) * F32LO(dVar16);
      dVar18 = CONCAT44D((int)(D2U(dVar18) >> 0x20),fVar28);
      fVar28 = F32LO(dVar15) - fVar28;
    }
    else {
      dVar18 = dVar18 * dVar16;
      fVar28 = SUB84(dVar15 - dVar18,0);
    }
    if (in_FPSCR_SZ == '\0') {
      in_xd12 = CONCAT44D(fVar28,*(undefined4 *)(unsigned)((int)puVar8 + -0x14));
    }
    if (in_FPSCR_PR == '\0') {
      dVar15 = (double)((ulonglong)
                        (uint)((F32HI(in_xd12) * F32LO(in_xd12) +
                               F32HI(dVar18)) * F32LO(dVar27)) << 0x20);
    }
    else {
      dVar15 = (double)(D2U(dVar18) & 0xffffffff00000000) * dVar27;
    }
    if (in_FPSCR_PR == '\0' && F32HI(dVar15) < SUB84(dVar15,0)) {
      iVar1 = 0;
      iVar6 = 0;
      iVar7 = 2;
      while (iVar2 = iVar6, iVar2 < 3) {
        iVar7 = iVar7 * 0x28;
        if (in_FPSCR_SZ == '\0') {
          dVar15 = CONCAT44D((int)(D2U(dVar15) >> 0x20),
                                    *(undefined4 *)(unsigned)((int)puVar8 + iVar7 + -100));
        }
        else {
          dVar32 = *(double *)(unsigned)((int)puVar8 + iVar7 + -100);
        }
        iVar6 = iVar2 * 0x28;
        fVar28 = F32HI(dVar29);
        if (in_FPSCR_PR == '\0') {
          bVar33 = fVar28 < SUB84(dVar15,0);
        }
        else {
          bVar33 = dVar29 < dVar15;
        }
        if (in_FPSCR_SZ == '\0') {
          dVar15 = CONCAT44D((int)(D2U(dVar15) >> 0x20),
                                    *(undefined4 *)(unsigned)((int)puVar8 + iVar6 + -100));
        }
        else {
          dVar32 = *(double *)(unsigned)((int)puVar8 + iVar6 + -100);
        }
        if (in_FPSCR_PR == '\0') {
          bVar34 = fVar28 < SUB84(dVar15,0);
        }
        else {
          bVar34 = dVar29 < dVar15;
        }
        if ((bVar33 ^ 1) != -(bVar34 - 1)) {
          if (in_FPSCR_SZ == '\0') {
            fVar12 = *(float *)(unsigned)((int)puVar8 + iVar7 + -100);
            uVar19 = CONCAT44(*(undefined4 *)(unsigned)((int)puVar8 + iVar6 + -100),fVar12);
            dVar15 = CONCAT44D(fVar12,SUB84(dVar27,0));
          }
          else {
            dVar32 = *(double *)(unsigned)((int)puVar8 + iVar7 + -100);
            uVar19 = *(undefined8 *)(unsigned)((int)puVar8 + iVar6 + -100);
            fVar12 = F32HI(dVar32);
            dVar15 = dVar32;
          }
          fVar14 = F32HI(uVar19);
          if (in_FPSCR_PR == '\0') {
            dVar15 = CONCAT44D(fVar14 - fVar12,-(float)uVar19 + fVar28);
          }
          else {
            dVar15 = (CONCAT44D(fVar14,-(float)uVar19) + dVar29) - dVar15;
          }
          if (in_FPSCR_SZ == '\0') {
            dVar27 = CONCAT44D(SUB84(dVar15,0),*(undefined4 *)(unsigned)((int)puVar8 + iVar7 + -0x6c));
          }
          else {
            in_xd4 = *(double *)(unsigned)((int)puVar8 + iVar7 + -0x6c);
            dVar27 = dVar32;
          }
          if (in_FPSCR_PR == '\0') {
            dVar27 = CONCAT44D(F32HI(dVar27) /
                                      F32HI(dVar15),SUB84(dVar27,0));
          }
          else {
            dVar27 = dVar27 / dVar15;
          }
          if (in_FPSCR_SZ == '\0') {
            dVar15 = CONCAT44D(SUB84(dVar27,0),*(undefined4 *)(unsigned)((int)puVar8 + iVar6 + -0x6c));
          }
          else {
            dVar32 = *(double *)(unsigned)((int)puVar8 + iVar6 + -0x6c);
            dVar15 = in_xd4;
          }
          if (in_FPSCR_PR == '\0') {
            dVar15 = CONCAT44D((int)(D2U(dVar15) >> 0x20),
                                      F32LO(dVar15) - F32LO(dVar27));
          }
          else {
            dVar15 = dVar15 - dVar27;
          }
          fVar12 = F32HI(dVar27);
          if (in_FPSCR_SZ == '\0') {
            dVar16 = CONCAT44D(*(undefined4 *)(unsigned)((int)puVar8 + iVar7 + -0x68),SUB84(dVar30,0));
            dVar27 = CONCAT44D(fVar12,fVar22);
          }
          else {
            dVar16 = *(double *)(unsigned)((int)puVar8 + iVar7 + -0x68);
            in_xd4 = in_xd6;
          }
          if (in_FPSCR_PR == '\0') {
            dVar15 = CONCAT44D(fVar12 * F32LO(dVar15) + F32HI(dVar15),
                                      SUB84(dVar15,0));
          }
          if (in_FPSCR_SZ == '\0') {
            dVar15 = CONCAT44D((int)(D2U(dVar15) >> 0x20),
                                      *(undefined4 *)(unsigned)((int)puVar8 + iVar6 + -0x68));
            dVar30 = (double)((ulonglong)(uint)fVar24 << 0x20);
          }
          else {
            dVar32 = *(double *)(unsigned)((int)puVar8 + iVar6 + -0x68);
            dVar30 = dVar23;
          }
          fVar14 = F32HI(dVar16);
          if (in_FPSCR_PR == '\0') {
            fVar13 = F32LO(dVar15) - fVar14;
            dVar27 = CONCAT44D(fVar12,F32HI(dVar30) *
                                             F32HI(dVar15) + F32LO(dVar27));
          }
          else {
            fVar13 = SUB84(dVar15 - dVar16,0);
          }
          uVar21 = (uint)(D2U(dVar27) >> 0x20);
          dVar30 = in_xd8;
          dVar15 = dVar27;
          if (in_FPSCR_SZ == '\0') {
            dVar30 = CONCAT44D(fVar9,SUB84(dVar16,0));
            dVar15 = (double)((ulonglong)uVar21 << 0x20);
            dVar16 = CONCAT44D(fVar14,fVar13);
          }
          fVar12 = F32HI(dVar16);
          if (in_FPSCR_PR == '\0') {
            fVar12 = F32HI(dVar15) * F32LO(dVar16) + fVar12;
            dVar16 = CONCAT44D(fVar12,SUB84(dVar16,0));
            dVar30 = CONCAT44D(F32HI(dVar25) * fVar12 +
                                      F32HI(dVar30),SUB84(dVar30,0));
          }
          dVar15 = dVar27;
          if (in_FPSCR_SZ == '\0') {
            dVar15 = (double)((ulonglong)uVar21 << 0x20);
          }
          pdVar3 = (double *)(unsigned)((int)puVar8 + iVar1 * 0x28 + -0x118);
          if (in_FPSCR_SZ == '\0') {
            *(int *)(unsigned)pdVar3 = SUB84(dVar27,0);
            *(int *)(unsigned)((int)pdVar3 + 4) = (int)(D2U(dVar30) >> 0x20);
            *(float *)(unsigned)(pdVar3 + 1) = fVar28;
            dVar16 = CONCAT44D(fVar12,*(undefined4 *)(unsigned)((int)puVar8 + iVar6 + -0x60));
            dVar27 = CONCAT44D(uVar21,*(undefined4 *)(unsigned)((int)puVar8 + iVar7 + -0x60));
          }
          else {
            *pdVar3 = in_xd4;
            *(double *)(unsigned)((int)pdVar3 + 4) = dVar30;
            pdVar3[1] = dVar29;
            dVar32 = *(double *)(unsigned)((int)puVar8 + iVar6 + -0x60);
            in_xd4 = *(double *)(unsigned)((int)puVar8 + iVar7 + -0x60);
          }
          if (in_FPSCR_PR == '\0') {
            fVar12 = F32LO(dVar16) - F32LO(dVar27);
          }
          else {
            fVar12 = SUB84(dVar16 - dVar27,0);
          }
          dVar16 = in_xd4;
          if (in_FPSCR_SZ == '\0') {
            dVar16 = CONCAT44D(SUB84(dVar27,0),fVar12);
          }
          fVar12 = F32HI(dVar15);
          if (in_FPSCR_PR == '\0') {
            dVar16 = CONCAT44D(fVar12 * F32LO(dVar16) + F32HI(dVar16),
                                      SUB84(dVar16,0));
          }
          uVar26 = (undefined4)(D2U(dVar16) >> 0x20);
          if (in_FPSCR_SZ == '\0') {
            *(undefined4 *)(unsigned)(pdVar3 + 3) = uVar26;
            dVar16 = CONCAT44D(uVar26,*(undefined4 *)(unsigned)((int)puVar8 + iVar6 + -0x5c));
            dVar27 = CONCAT44D((int)(D2U(dVar27) >> 0x20),
                                      *(undefined4 *)(unsigned)((int)puVar8 + iVar7 + -0x5c));
          }
          else {
            pdVar3[3] = dVar16;
            dVar32 = *(double *)(unsigned)((int)puVar8 + iVar6 + -0x5c);
            in_xd4 = *(double *)(unsigned)((int)puVar8 + iVar7 + -0x5c);
          }
          if (in_FPSCR_PR == '\0') {
            fVar14 = F32LO(dVar16) - F32LO(dVar27);
          }
          else {
            fVar14 = SUB84(dVar16 - dVar27,0);
          }
          dVar15 = in_xd4;
          if (in_FPSCR_SZ == '\0') {
            dVar15 = CONCAT44D(SUB84(dVar27,0),fVar14);
          }
          if (in_FPSCR_PR == '\0') {
            dVar15 = CONCAT44D(fVar12 * F32LO(dVar15) + F32HI(dVar15),
                                      SUB84(dVar15,0));
          }
          uVar26 = (undefined4)(D2U(dVar15) >> 0x20);
          if (in_FPSCR_SZ == '\0') {
            *(undefined4 *)(unsigned)((int)pdVar3 + 0x1c) = uVar26;
            dVar15 = CONCAT44D(uVar26,*(undefined4 *)(unsigned)((int)puVar8 + iVar6 + -0x58));
            dVar27 = CONCAT44D((int)(D2U(dVar27) >> 0x20),
                                      *(undefined4 *)(unsigned)((int)puVar8 + iVar7 + -0x58));
          }
          else {
            *(double *)(unsigned)((int)pdVar3 + 0x1c) = dVar15;
            dVar32 = *(double *)(unsigned)((int)puVar8 + iVar6 + -0x58);
            in_xd4 = *(double *)(unsigned)((int)puVar8 + iVar7 + -0x58);
          }
          if (in_FPSCR_PR == '\0') {
            fVar14 = F32LO(dVar15) - F32LO(dVar27);
          }
          else {
            fVar14 = SUB84(dVar15 - dVar27,0);
          }
          dVar15 = in_xd4;
          if (in_FPSCR_SZ == '\0') {
            dVar15 = CONCAT44D(SUB84(dVar27,0),fVar14);
          }
          if (in_FPSCR_PR == '\0') {
            dVar15 = CONCAT44D(fVar12 * F32LO(dVar15) + F32HI(dVar15),
                                      SUB84(dVar15,0));
          }
          uVar26 = (undefined4)(D2U(dVar15) >> 0x20);
          if (in_FPSCR_SZ == '\0') {
            *(undefined4 *)(unsigned)(pdVar3 + 4) = uVar26;
            dVar15 = CONCAT44D(uVar26,*(undefined4 *)(unsigned)((int)puVar8 + iVar6 + -0x54));
            dVar27 = CONCAT44D((int)(D2U(dVar27) >> 0x20),
                                      *(undefined4 *)(unsigned)((int)puVar8 + iVar7 + -0x54));
          }
          else {
            pdVar3[4] = dVar15;
            dVar32 = *(double *)(unsigned)((int)puVar8 + iVar6 + -0x54);
            in_xd4 = *(double *)(unsigned)((int)puVar8 + iVar7 + -0x54);
          }
          iVar1 = iVar1 + 1;
          if (in_FPSCR_PR == '\0') {
            fVar14 = F32LO(dVar15) - F32LO(dVar27);
          }
          else {
            fVar14 = SUB84(dVar15 - dVar27,0);
          }
          dVar15 = in_xd4;
          if (in_FPSCR_SZ == '\0') {
            dVar15 = CONCAT44D(SUB84(dVar27,0),fVar14);
          }
          if (in_FPSCR_PR == '\0') {
            dVar15 = CONCAT44D(fVar12 * F32LO(dVar15) + F32HI(dVar15),
                                      SUB84(dVar15,0));
          }
          if (in_FPSCR_SZ == '\0') {
            *(int *)(unsigned)((int)pdVar3 + 0x24) = (int)(D2U(dVar15) >> 0x20);
          }
          else {
            *(double *)(unsigned)((int)pdVar3 + 0x24) = dVar15;
          }
        }
        pdVar3 = (double *)(unsigned)((int)puVar8 + iVar2 * 0x28 + -0x78);
        if (in_FPSCR_SZ == '\0') {
          dVar15 = CONCAT44D((int)(D2U(dVar15) >> 0x20),
                                    *(undefined4 *)(unsigned)((int)pdVar3 + 0x14));
        }
        else {
          dVar32 = *(double *)(unsigned)((int)pdVar3 + 0x14);
        }
        if (in_FPSCR_PR == '\0') {
          bVar33 = fVar28 < SUB84(dVar15,0);
        }
        else {
          bVar33 = dVar29 < dVar15;
        }
        if (bVar33) {
          if (in_FPSCR_SZ == '\0') {
            dVar27 = CONCAT44D(*(undefined4 *)(unsigned)pdVar3,SUB84(dVar27,0));
          }
          else {
            dVar27 = *pdVar3;
          }
          if (in_FPSCR_SZ == '\0') {
            dVar27 = CONCAT44D((int)(D2U(dVar27) >> 0x20),
                                      *(undefined4 *)(unsigned)((int)pdVar3 + 4));
          }
          else {
            in_xd4 = *(double *)(unsigned)((int)pdVar3 + 4);
          }
          pdVar4 = (double *)(unsigned)((int)puVar8 + iVar1 * 0x28 + -0x118);
          iVar1 = iVar1 + 1;
          if (in_FPSCR_SZ == '\0') {
            *(int *)(unsigned)pdVar4 = (int)(D2U(dVar27) >> 0x20);
            *(int *)(unsigned)((int)pdVar4 + 4) = SUB84(dVar27,0);
            *(undefined4 *)(unsigned)(pdVar4 + 1) = *(undefined4 *)(unsigned)(pdVar3 + 1);
            *(undefined4 *)(unsigned)(pdVar4 + 3) = *(undefined4 *)(unsigned)(pdVar3 + 3);
            *(undefined4 *)(unsigned)((int)pdVar4 + 0x1c) = *(undefined4 *)(unsigned)((int)pdVar3 + 0x1c);
            *(undefined4 *)(unsigned)(pdVar4 + 4) = *(undefined4 *)(unsigned)(pdVar3 + 4);
            dVar15 = CONCAT44D((int)(D2U(dVar15) >> 0x20),
                                      *(undefined4 *)(unsigned)((int)pdVar3 + 0x24));
            *(undefined4 *)(unsigned)((int)pdVar4 + 0x24) = *(undefined4 *)(unsigned)((int)pdVar3 + 0x24);
          }
          else {
            *pdVar4 = dVar27;
            *(double *)(unsigned)((int)pdVar4 + 4) = in_xd4;
            pdVar4[1] = pdVar3[1];
            pdVar4[3] = pdVar3[3];
            *(undefined8 *)(unsigned)((int)pdVar4 + 0x1c) = *(undefined8 *)(unsigned)((int)pdVar3 + 0x1c);
            pdVar4[4] = pdVar3[4];
            dVar32 = *(double *)(unsigned)((int)pdVar3 + 0x24);
            *(double *)(unsigned)((int)pdVar4 + 0x24) = dVar32;
          }
        }
        iVar7 = iVar2;
        iVar6 = iVar2 + 1;
      }
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(unsigned)((int)ar7 + 0x1c) = *(undefined4 *)(unsigned)((int)puVar8 + -0xf4);
        *(undefined4 *)(unsigned)(ar7 + 3) = *(undefined4 *)(unsigned)((int)puVar8 + -0xf8);
        *(undefined4 *)(unsigned)((int)ar7 + 0x14) = *(undefined4 *)(unsigned)((int)puVar8 + -0xfc);
        *(undefined4 *)(unsigned)(ar7 + 2) = *(undefined4 *)(unsigned)((int)puVar8 + -0x100);
        *(undefined4 *)(unsigned)((int)ar7 + 0xc) = *(undefined4 *)(unsigned)((int)puVar8 + -0x110);
        *(undefined4 *)(unsigned)(ar7 + 1) = *(undefined4 *)(unsigned)((int)puVar8 + -0x114);
        puVar5 = (undefined8 *)(unsigned)((int)ar7 + 4);
        *(undefined4 *)(unsigned)puVar5 = *(undefined4 *)(unsigned)((int)puVar8 + -0x118);
      }
      else {
        ar7[3] = *(undefined8 *)(unsigned)((int)puVar8 + -0xf4);
        ar7[2] = *(undefined8 *)(unsigned)((int)puVar8 + -0xf8);
        ar7[1] = *(undefined8 *)(unsigned)((int)puVar8 + -0xfc);
        *ar7 = *(undefined8 *)(unsigned)((int)puVar8 + -0x100);
        ar7[-1] = *(undefined8 *)(unsigned)((int)puVar8 + -0x110);
        ar7[-2] = *(undefined8 *)(unsigned)((int)puVar8 + -0x114);
        puVar5 = ar7 + -3;
        *puVar5 = *(undefined8 *)(unsigned)((int)puVar8 + -0x118);
      }
      *(undefined4 *)(unsigned)((int)puVar5 + -4) = 0xe0000000;
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(unsigned)(puVar5 + 7) = *(undefined4 *)(unsigned)((int)puVar8 + -0xcc);
        *(undefined4 *)(unsigned)((int)puVar5 + 0x34) = *(undefined4 *)(unsigned)((int)puVar8 + -0xd0);
        *(undefined4 *)(unsigned)(puVar5 + 6) = *(undefined4 *)(unsigned)((int)puVar8 + -0xd4);
        *(undefined4 *)(unsigned)((int)puVar5 + 0x2c) = *(undefined4 *)(unsigned)((int)puVar8 + -0xd8);
        *(undefined4 *)(unsigned)(puVar5 + 5) = *(undefined4 *)(unsigned)((int)puVar8 + -0xe8);
        *(undefined4 *)(unsigned)((int)puVar5 + 0x24) = *(undefined4 *)(unsigned)((int)puVar8 + -0xec);
        puVar5 = puVar5 + 4;
        *(undefined4 *)(unsigned)puVar5 = *(undefined4 *)(unsigned)((int)puVar8 + -0xf0);
      }
      else {
        *(undefined8 *)(unsigned)((int)puVar5 + 0x34) = *(undefined8 *)(unsigned)((int)puVar8 + -0xcc);
        *(undefined8 *)(unsigned)((int)puVar5 + 0x2c) = *(undefined8 *)(unsigned)((int)puVar8 + -0xd0);
        *(undefined8 *)(unsigned)((int)puVar5 + 0x24) = *(undefined8 *)(unsigned)((int)puVar8 + -0xd4);
        *(undefined8 *)(unsigned)((int)puVar5 + 0x1c) = *(undefined8 *)(unsigned)((int)puVar8 + -0xd8);
        *(undefined8 *)(unsigned)((int)puVar5 + 0x14) = *(undefined8 *)(unsigned)((int)puVar8 + -0xe8);
        *(undefined8 *)(unsigned)((int)puVar5 + 0xc) = *(undefined8 *)(unsigned)((int)puVar8 + -0xec);
        puVar5 = (undefined8 *)(unsigned)((int)puVar5 + 4);
        *puVar5 = *(undefined8 *)(unsigned)((int)puVar8 + -0xf0);
      }
      *(undefined4 *)(unsigned)((int)puVar5 + -4) = 0xe0000000;
      if (iVar1 != 3) {
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)(unsigned)(puVar5 + 7) = *(undefined4 *)(unsigned)((int)puVar8 + -0x7c);
          *(undefined4 *)(unsigned)((int)puVar5 + 0x34) = *(undefined4 *)(unsigned)((int)puVar8 + -0x80);
          *(undefined4 *)(unsigned)(puVar5 + 6) = *(undefined4 *)(unsigned)((int)puVar8 + -0x84);
          *(undefined4 *)(unsigned)((int)puVar5 + 0x2c) = *(undefined4 *)(unsigned)((int)puVar8 + -0x88);
          *(undefined4 *)(unsigned)(puVar5 + 5) = *(undefined4 *)(unsigned)((int)puVar8 + -0x98);
          *(undefined4 *)(unsigned)((int)puVar5 + 0x24) = *(undefined4 *)(unsigned)((int)puVar8 + -0x9c);
          puVar5 = puVar5 + 4;
          *(undefined4 *)(unsigned)puVar5 = *(undefined4 *)(unsigned)((int)puVar8 + -0xa0);
        }
        else {
          *(undefined8 *)(unsigned)((int)puVar5 + 0x34) = *(undefined8 *)(unsigned)((int)puVar8 + -0x7c);
          *(undefined8 *)(unsigned)((int)puVar5 + 0x2c) = *(undefined8 *)(unsigned)((int)puVar8 + -0x80);
          *(undefined8 *)(unsigned)((int)puVar5 + 0x24) = *(undefined8 *)(unsigned)((int)puVar8 + -0x84);
          *(undefined8 *)(unsigned)((int)puVar5 + 0x1c) = *(undefined8 *)(unsigned)((int)puVar8 + -0x88);
          *(undefined8 *)(unsigned)((int)puVar5 + 0x14) = *(undefined8 *)(unsigned)((int)puVar8 + -0x98);
          *(undefined8 *)(unsigned)((int)puVar5 + 0xc) = *(undefined8 *)(unsigned)((int)puVar8 + -0x9c);
          puVar5 = (undefined8 *)(unsigned)((int)puVar5 + 4);
          *puVar5 = *(undefined8 *)(unsigned)((int)puVar8 + -0xa0);
        }
        *(undefined4 *)(unsigned)((int)puVar5 + -4) = 0xe0000000;
      }
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(unsigned)(puVar5 + 7) = *(undefined4 *)(unsigned)((int)puVar8 + -0xa4);
        *(undefined4 *)(unsigned)((int)puVar5 + 0x34) = *(undefined4 *)(unsigned)((int)puVar8 + -0xa8);
        *(undefined4 *)(unsigned)(puVar5 + 6) = *(undefined4 *)(unsigned)((int)puVar8 + -0xac);
        *(undefined4 *)(unsigned)((int)puVar5 + 0x2c) = *(undefined4 *)(unsigned)((int)puVar8 + -0xb0);
        *(undefined4 *)(unsigned)(puVar5 + 5) = *(undefined4 *)(unsigned)((int)puVar8 + -0xc0);
        *(undefined4 *)(unsigned)((int)puVar5 + 0x24) = *(undefined4 *)(unsigned)((int)puVar8 + -0xc4);
        puVar5 = puVar5 + 4;
        *(undefined4 *)(unsigned)puVar5 = *(undefined4 *)(unsigned)((int)puVar8 + -200);
      }
      else {
        *(undefined8 *)(unsigned)((int)puVar5 + 0x34) = *(undefined8 *)(unsigned)((int)puVar8 + -0xa4);
        *(undefined8 *)(unsigned)((int)puVar5 + 0x2c) = *(undefined8 *)(unsigned)((int)puVar8 + -0xa8);
        *(undefined8 *)(unsigned)((int)puVar5 + 0x24) = *(undefined8 *)(unsigned)((int)puVar8 + -0xac);
        *(undefined8 *)(unsigned)((int)puVar5 + 0x1c) = *(undefined8 *)(unsigned)((int)puVar8 + -0xb0);
        *(undefined8 *)(unsigned)((int)puVar5 + 0x14) = *(undefined8 *)(unsigned)((int)puVar8 + -0xc0);
        *(undefined8 *)(unsigned)((int)puVar5 + 0xc) = *(undefined8 *)(unsigned)((int)puVar8 + -0xc4);
        puVar5 = (undefined8 *)(unsigned)((int)puVar5 + 4);
        *puVar5 = *(undefined8 *)(unsigned)((int)puVar8 + -200);
      }
      *(undefined4 *)(unsigned)((int)puVar5 + -4) = 0xf0000000;
      ar7 = (undefined8 *)(unsigned)((int)puVar5 + 0x1c);
      (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) + iVar1;
    }
  }
  return ar7;
}

__asm__(".globl _FUN_8c231eac\n.set _FUN_8c231eac, _FUN_8c231eac_def\n");
