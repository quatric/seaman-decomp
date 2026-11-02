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
undefined8 * FUN_8c22e684_def(double *ar4,double *ar5,double *ar6,undefined8 *ar7)

{
  ring[rp++ & 255] = "FUN_8c22e684";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 372; for (int i_ = 0; i_ < 372; i_++) z_[i_] = 0; }
  uint uVar1;
  double *pdVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  int iVar6;
  int iVar7;
  double *pdVar8;
  undefined8 *puVar9;
  undefined4 *puVar10;
  undefined4 in_fr1 = 0;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  double dVar16;
  double dVar17;
  ulonglong uVar18;
  double dVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined4 uVar23;
  double dVar22;
  float fVar24;
  double in_dr4 = 0;
  double dVar25;
  double dVar26;
  undefined4 in_fr7 = 0;
  double dVar27;
  float fVar28;
  double in_dr8 = 0;
  double dVar29;
  float fVar30;
  double in_dr10 = 0;
  undefined4 uVar31;
  double in_dr12 = 0;
  undefined4 in_fr15 = 0;
  undefined4 uVar32;
  double dVar33;
  undefined4 uVar35;
  double dVar34;
  double in_xd0 = 0;
  double in_xd2 = 0;
  double dVar36;
  double dVar37;
  double in_xd4 = 0;
  double dVar38;
  double in_xd6 = 0;
  double in_xd8 = 0;
  double dVar39;
  double in_xd10 = 0;
  double in_xd12 = 0;
  double in_xd14 = 0;
  bool bVar40;
  int iVar41;
  int iVar42;
  int iVar43;
  char in_FPSCR_PR = 0;
  char in_FPSCR_SZ = 0;
  
  uVar31 = SUB84(in_dr12,0);
  if (in_FPSCR_SZ == '\0') {
    puVar10 = ((undefined4 *)(fr0_ - 0x20));
    (*(undefined4 *)(fr0_ + (int)0xffffffdc)) = CONCAT44(uVar31,(*(uint*)((uchar*)((undefined1 *)(fr0_ - 0x2c))+8)));
  }
  else {
    puVar10 = (undefined4 *)(unsigned)((undefined1 *)(fr0_ - 0x2c));
  }
  if (((*(undefined4 *)(unsigned)(unsigned)0x8c4aa4f0) & 0x10000) == 0) {
    if (in_FPSCR_SZ == '\0') {
      dVar33 = CONCAT44D(0x3f000000,in_fr15);
    }
    else {
      dVar33 = 2.78134754523302e-309;
    }
    uVar35 = (undefined4)((ulonglong)in_dr4 >> 0x20);
    fVar13 = F32HI(dVar33);
    if (((*(undefined4 *)(unsigned)(unsigned)0x8c4aa4f0) & 0x20000) == 0) {
      dVar27 = dVar33;
      dVar38 = dVar33;
      if (in_FPSCR_SZ == '\0') {
        in_dr4 = CONCAT44D(uVar35,fVar13);
        dVar27 = CONCAT44D(fVar13,in_fr7);
        dVar38 = in_xd4;
      }
    }
    else {
      if (in_FPSCR_SZ == '\0') {
        dVar27 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c277af8),in_fr7);
        in_dr4 = CONCAT44D(uVar35,(*(undefined4 *)(unsigned)(unsigned)0x8c277afc));
      }
      else {
        dVar27 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c277afc),(*(undefined4 *)(unsigned)(unsigned)0x8c277af8));
        in_xd4 = CONCAT44D((*(uint *)(unsigned)0x8c277b00),(*(undefined4 *)(unsigned)(unsigned)0x8c277afc));
      }
      dVar38 = in_xd4;
      if (in_FPSCR_PR == '\0') {
        dVar27 = CONCAT44D(F32HI(dVar27) + fVar13,SUB84(dVar27,0));
        in_dr4 = CONCAT44D((int)((ulonglong)in_dr4 >> 0x20),F32LO(in_dr4) + fVar13);
      }
      else {
        dVar27 = dVar27 + dVar33;
        in_dr4 = in_dr4 + dVar33;
      }
    }
    if (in_FPSCR_SZ == '\0') {
      dVar27 = CONCAT44D((int)(D2U(dVar27) >> 0x20),(*(undefined4 *)(unsigned)(unsigned)0x8c4aa4a8));
      dVar16 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4aa4e0),(*(undefined4 *)(unsigned)(unsigned)0x8c4aa4dc));
      in_dr10 = CONCAT44D((int)((ulonglong)in_dr10 >> 0x20),(*(undefined4 *)(unsigned)(unsigned)0x8c4aa4a8));
      uVar35 = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa4a8);
    }
    else {
      in_xd10 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4aa4ac),(*(undefined4 *)(unsigned)(unsigned)0x8c4aa4a8));
      dVar16 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4aa4e4),(*(undefined4 *)(unsigned)(unsigned)0x8c4aa4e0));
      in_xd2 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4aa4e0),(*(undefined4 *)(unsigned)(unsigned)0x8c4aa4dc));
      uVar35 = SUB84(dVar27,0);
      in_xd6 = in_xd10;
    }
    if (in_FPSCR_PR == '\0') {
      fVar30 = F32LO(in_dr10) * F32HI(dVar16);
    }
    else {
      fVar30 = SUB84(in_dr10 * dVar16,0);
    }
    dVar39 = in_xd6;
    if (in_FPSCR_SZ == '\0') {
      in_dr8 = CONCAT44D((int)((ulonglong)in_dr8 >> 0x20),uVar35);
      dVar39 = in_xd8;
    }
    if (in_FPSCR_PR == '\0') {
      fVar28 = F32LO(in_dr8) * F32LO(dVar16);
    }
    else {
      fVar28 = SUB84(in_dr8 * dVar16,0);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar16 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4aa4b4),fVar30);
    }
    else {
      dVar16 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4aa4b8),(*(undefined4 *)(unsigned)(unsigned)0x8c4aa4b4));
    }
    uVar35 = (undefined4)(D2U(dVar27) >> 0x20);
    if (in_FPSCR_PR == '\0') {
      dVar27 = CONCAT44D(uVar35,1.0 / F32LO(dVar16));
      dVar29 = CONCAT44D(1.0 / fVar28,fVar28);
    }
    else {
      dVar27 = CONCAT44D(uVar35,0x3f800000) / dVar16;
      dVar29 = CONCAT44D(0x3f800000,fVar28) / CONCAT44D(0x3f800000,fVar28);
    }
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(unsigned)((int)puVar10 + -0x78) = *(undefined4 *)(unsigned)((int)ar4 + 4);
      *(undefined4 *)(unsigned)((int)puVar10 + -0x74) = *(undefined4 *)(unsigned)(ar4 + 1);
      *(undefined4 *)(unsigned)((int)puVar10 + -0x70) = *(undefined4 *)(unsigned)((int)ar4 + 0xc);
      dVar33 = CONCAT44D(fVar13,in_fr1);
      *(undefined4 *)(unsigned)((int)puVar10 + -100) = *(undefined4 *)(unsigned)ar4;
      dVar17 = CONCAT44D(*(undefined4 *)(unsigned)ar4,*(undefined4 *)(unsigned)((int)ar4 + 4));
      dVar19 = CONCAT44D(fVar13,(*(undefined4 *)(unsigned)(unsigned)0x8c4aa4b8));
    }
    else {
      in_xd14 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4aa4bc),(*(undefined4 *)(unsigned)(unsigned)0x8c4aa4b8));
      *(undefined8 *)(unsigned)((int)puVar10 + -0x78) = *(undefined8 *)(unsigned)((int)ar4 + 4);
      *(double *)(unsigned)((int)puVar10 + -0x74) = ar4[1];
      *(undefined8 *)(unsigned)((int)puVar10 + -0x70) = *(undefined8 *)(unsigned)((int)ar4 + 0xc);
      *(double *)(unsigned)((int)puVar10 + -100) = *ar4;
      in_xd2 = *(double *)(unsigned)((int)ar4 + 4);
      dVar17 = *ar4;
      dVar19 = dVar33;
    }
    fVar30 = F32HI(dVar16);
    fVar13 = F32HI(dVar29);
    if (in_FPSCR_PR == '\0') {
      fVar28 = (F32LO(dVar17) - fVar30) * F32HI(dVar17) * fVar13;
    }
    else {
      fVar28 = SUB84((dVar17 - dVar16) * (dVar17 - dVar16) * dVar29,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(unsigned)((int)puVar10 + -0x6c) = fVar28;
      dVar17 = CONCAT44D(*(undefined4 *)(unsigned)ar4,*(undefined4 *)(unsigned)(ar4 + 1));
    }
    else {
      *(double *)(unsigned)((int)puVar10 + -0x6c) = in_xd2;
      in_xd2 = ar4[1];
      dVar17 = *ar4;
    }
    fVar14 = F32LO(dVar19);
    fVar28 = F32LO(dVar27);
    if (in_FPSCR_PR == '\0') {
      fVar11 = (F32LO(dVar17) - fVar14) * F32HI(dVar17) * fVar28;
    }
    else {
      fVar11 = SUB84((dVar17 - dVar19) * (dVar17 - dVar19) * dVar27,0);
    }
    fVar15 = F32HI(dVar27);
    if (in_FPSCR_SZ == '\0') {
      *(float *)(unsigned)((int)puVar10 + -0x68) = fVar11;
      *(undefined4 *)(unsigned)((int)puVar10 + -0x58) = *(undefined4 *)(unsigned)(ar4 + 2);
      *(undefined4 *)(unsigned)((int)puVar10 + -0x54) = *(undefined4 *)(unsigned)((int)ar4 + 0x14);
      dVar17 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 3),fVar15);
    }
    else {
      *(double *)(unsigned)((int)puVar10 + -0x68) = in_xd2;
      *(double *)(unsigned)((int)puVar10 + -0x58) = ar4[2];
      *(undefined8 *)(unsigned)((int)puVar10 + -0x54) = *(undefined8 *)(unsigned)((int)ar4 + 0x14);
      dVar17 = ar4[3];
      in_xd2 = dVar27;
    }
    fVar11 = F32HI(dVar33);
    if (in_FPSCR_PR == '\0') {
      dVar17 = (double)(ulonglong)
                       (uint)(fVar11 * F32HI(dVar17) + F32LO(dVar17));
    }
    fVar24 = F32LO(in_dr4);
    if (in_FPSCR_SZ == '\0') {
      *(int *)(unsigned)((int)puVar10 + -0x60) = SUB84(dVar17,0);
      uVar18 = CONCAT44(*(undefined4 *)(unsigned)((int)ar4 + 0x1c),fVar24);
    }
    else {
      *(double *)(unsigned)((int)puVar10 + -0x60) = in_xd2;
      uVar18 = *(ulonglong *)(unsigned)((int)ar4 + 0x1c);
      in_xd2 = dVar38;
    }
    if (in_FPSCR_PR == '\0') {
      uVar18 = (ulonglong)(uint)(fVar11 * (float)(uVar18 >> 0x20) + (float)uVar18);
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)(unsigned)((int)puVar10 + -0x5c) = (int)uVar18;
      *(undefined4 *)(unsigned)((int)puVar10 + -0x50) = *(undefined4 *)(unsigned)((int)ar5 + 4);
      *(undefined4 *)(unsigned)((int)puVar10 + -0x4c) = *(undefined4 *)(unsigned)(ar5 + 1);
      *(undefined4 *)(unsigned)((int)puVar10 + -0x48) = *(undefined4 *)(unsigned)((int)ar5 + 0xc);
      *(undefined4 *)(unsigned)((int)puVar10 + -0x3c) = *(undefined4 *)(unsigned)ar5;
      dVar17 = CONCAT44D(*(undefined4 *)(unsigned)ar5,*(undefined4 *)(unsigned)((int)ar5 + 4));
    }
    else {
      *(double *)(unsigned)((int)puVar10 + -0x5c) = in_xd2;
      *(undefined8 *)(unsigned)((int)puVar10 + -0x50) = *(undefined8 *)(unsigned)((int)ar5 + 4);
      *(double *)(unsigned)((int)puVar10 + -0x4c) = ar5[1];
      *(undefined8 *)(unsigned)((int)puVar10 + -0x48) = *(undefined8 *)(unsigned)((int)ar5 + 0xc);
      *(double *)(unsigned)((int)puVar10 + -0x3c) = *ar5;
      in_xd2 = *(double *)(unsigned)((int)ar5 + 4);
      dVar17 = *ar5;
    }
    if (in_FPSCR_PR == '\0') {
      fVar12 = F32HI(dVar17);
      dVar17 = CONCAT44D(fVar12,(F32LO(dVar17) - fVar30) * fVar12 * fVar13);
    }
    else {
      dVar17 = (dVar17 - dVar16) * (dVar17 - dVar16) * dVar29;
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)(unsigned)((int)puVar10 + -0x44) = SUB84(dVar17,0);
      dVar17 = CONCAT44D((int)(D2U(dVar17) >> 0x20),*(undefined4 *)(unsigned)(ar5 + 1));
    }
    else {
      *(double *)(unsigned)((int)puVar10 + -0x44) = in_xd2;
      in_xd2 = ar5[1];
    }
    if (in_FPSCR_PR == '\0') {
      fVar12 = F32LO(dVar17) - fVar14;
    }
    else {
      fVar12 = SUB84(dVar17 - dVar19,0);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar17 = CONCAT44D(*(undefined4 *)(unsigned)ar5,fVar12);
    }
    else {
      dVar17 = *ar5;
    }
    if (in_FPSCR_PR == '\0') {
      fVar12 = F32LO(dVar17) * F32HI(dVar17) * fVar28;
    }
    else {
      fVar12 = SUB84(dVar17 * dVar17 * dVar27,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(unsigned)((int)puVar10 + -0x40) = fVar12;
      *(undefined4 *)(unsigned)((int)puVar10 + -0x30) = *(undefined4 *)(unsigned)(ar5 + 2);
      *(undefined4 *)(unsigned)((int)puVar10 + -0x2c) = *(undefined4 *)(unsigned)((int)ar5 + 0x14);
      dVar17 = CONCAT44D(*(undefined4 *)(unsigned)(ar5 + 3),fVar15);
    }
    else {
      *(double *)(unsigned)((int)puVar10 + -0x40) = in_xd2;
      *(double *)(unsigned)((int)puVar10 + -0x30) = ar5[2];
      *(undefined8 *)(unsigned)((int)puVar10 + -0x2c) = *(undefined8 *)(unsigned)((int)ar5 + 0x14);
      dVar17 = ar5[3];
      in_xd2 = dVar27;
    }
    if (in_FPSCR_PR == '\0') {
      dVar17 = (double)(ulonglong)
                       (uint)(fVar11 * F32HI(dVar17) + F32LO(dVar17));
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)(unsigned)((int)puVar10 + -0x38) = SUB84(dVar17,0);
      uVar18 = CONCAT44(*(undefined4 *)(unsigned)((int)ar5 + 0x1c),fVar24);
    }
    else {
      *(double *)(unsigned)((int)puVar10 + -0x38) = in_xd2;
      uVar18 = *(ulonglong *)(unsigned)((int)ar5 + 0x1c);
      in_xd2 = dVar38;
    }
    if (in_FPSCR_PR == '\0') {
      uVar18 = (ulonglong)(uint)(fVar11 * (float)(uVar18 >> 0x20) + (float)uVar18);
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)(unsigned)((int)puVar10 + -0x34) = (int)uVar18;
      *(undefined4 *)(unsigned)((int)puVar10 + -0x28) = *(undefined4 *)(unsigned)((int)ar6 + 4);
      *(undefined4 *)(unsigned)((int)puVar10 + -0x24) = *(undefined4 *)(unsigned)(ar6 + 1);
      *(undefined4 *)(unsigned)((int)puVar10 + -0x20) = *(undefined4 *)(unsigned)((int)ar6 + 0xc);
      *(undefined4 *)(unsigned)((int)puVar10 + -0x14) = *(undefined4 *)(unsigned)ar6;
      dVar17 = CONCAT44D(*(undefined4 *)(unsigned)ar6,*(undefined4 *)(unsigned)((int)ar6 + 4));
    }
    else {
      *(double *)(unsigned)((int)puVar10 + -0x34) = in_xd2;
      *(undefined8 *)(unsigned)((int)puVar10 + -0x28) = *(undefined8 *)(unsigned)((int)ar6 + 4);
      *(double *)(unsigned)((int)puVar10 + -0x24) = ar6[1];
      *(undefined8 *)(unsigned)((int)puVar10 + -0x20) = *(undefined8 *)(unsigned)((int)ar6 + 0xc);
      *(double *)(unsigned)((int)puVar10 + -0x14) = *ar6;
      in_xd2 = *(double *)(unsigned)((int)ar6 + 4);
      dVar17 = *ar6;
    }
    if (in_FPSCR_PR == '\0') {
      fVar13 = (F32LO(dVar17) - fVar30) * F32HI(dVar17) * fVar13;
    }
    else {
      fVar13 = SUB84((dVar17 - dVar16) * (dVar17 - dVar16) * dVar29,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(unsigned)((int)puVar10 + -0x1c) = fVar13;
      dVar17 = CONCAT44D(*(undefined4 *)(unsigned)ar6,*(undefined4 *)(unsigned)(ar6 + 1));
    }
    else {
      *(double *)(unsigned)((int)puVar10 + -0x1c) = in_xd2;
      in_xd2 = ar6[1];
      dVar17 = *ar6;
    }
    if (in_FPSCR_PR == '\0') {
      fVar13 = F32HI(dVar17);
      dVar19 = CONCAT44D(fVar13,(F32LO(dVar17) - fVar14) * fVar13 * fVar28);
    }
    else {
      dVar19 = (dVar17 - dVar19) * (dVar17 - dVar19) * dVar27;
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)(unsigned)((int)puVar10 + -0x18) = SUB84(dVar19,0);
      *(undefined4 *)(unsigned)((int)puVar10 + -8) = *(undefined4 *)(unsigned)(ar6 + 2);
      *(undefined4 *)(unsigned)((int)puVar10 + -4) = *(undefined4 *)(unsigned)((int)ar6 + 0x14);
      dVar19 = CONCAT44D((int)(D2U(dVar19) >> 0x20),*(undefined4 *)(unsigned)(ar6 + 3));
    }
    else {
      *(double *)(unsigned)((int)puVar10 + -0x18) = in_xd2;
      *(double *)(unsigned)((int)puVar10 + -8) = ar6[2];
      *(undefined8 *)(unsigned)((int)puVar10 + -4) = *(undefined8 *)(unsigned)((int)ar6 + 0x14);
      in_xd2 = ar6[3];
    }
    if (in_FPSCR_PR == '\0') {
      dVar27 = CONCAT44D(fVar11 * F32LO(dVar19) + fVar15,fVar28);
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)(unsigned)((int)puVar10 + -0x10) = (int)(D2U(dVar27) >> 0x20);
      dVar19 = CONCAT44D((int)(D2U(dVar19) >> 0x20),*(undefined4 *)(unsigned)((int)ar6 + 0x1c));
    }
    else {
      *(double *)(unsigned)((int)puVar10 + -0x10) = dVar27;
      in_xd2 = *(double *)(unsigned)((int)ar6 + 0x1c);
    }
    if (in_FPSCR_PR == '\0') {
      in_dr4 = CONCAT44D((int)((ulonglong)in_dr4 >> 0x20),fVar11 * F32LO(dVar19) + fVar24);
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)(unsigned)((int)puVar10 + -0xc) = SUB84(in_dr4,0);
      uVar35 = *(undefined4 *)(unsigned)((int)puVar10 + -0x3c);
      uVar31 = *(undefined4 *)(unsigned)((int)puVar10 + -0x40);
      in_dr12 = CONCAT44D((int)((ulonglong)in_dr12 >> 0x20),uVar31);
      dVar17 = CONCAT44D(*(undefined4 *)(unsigned)((int)puVar10 + -0x68),SUB84(dVar27,0));
      dVar27 = CONCAT44D(*(undefined4 *)(unsigned)((int)puVar10 + -100),SUB84(dVar29,0));
      dVar19 = CONCAT44D((int)(D2U(dVar19) >> 0x20),uVar31);
      dVar29 = CONCAT44D(uVar35,SUB84(dVar33,0));
      dVar33 = CONCAT44D(uVar35,fVar14);
    }
    else {
      *(double *)(unsigned)((int)puVar10 + -0xc) = dVar38;
      dVar29 = *(double *)(unsigned)((int)puVar10 + -0x3c);
      in_xd2 = *(double *)(unsigned)((int)puVar10 + -0x40);
      dVar17 = *(double *)(unsigned)((int)puVar10 + -0x68);
      dVar27 = *(double *)(unsigned)((int)puVar10 + -100);
      uVar35 = (undefined4)(D2U(dVar29) >> 0x20);
      in_xd12 = in_xd2;
      dVar33 = dVar29;
    }
    fVar28 = F32HI(dVar27);
    fVar13 = F32HI(dVar17);
    if (in_FPSCR_PR == '\0') {
      fVar14 = F32LO(dVar19) * fVar28;
      dVar29 = CONCAT44D(F32HI(dVar29) * fVar13,SUB84(dVar29,0));
    }
    else {
      fVar14 = SUB84(dVar19 * dVar27,0);
      dVar29 = dVar29 * dVar17;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar17 = CONCAT44D(fVar13,*(undefined4 *)(unsigned)((int)puVar10 + -0x44));
      in_dr4 = CONCAT44D((int)((ulonglong)in_dr4 >> 0x20),
                                *(undefined4 *)(unsigned)((int)puVar10 + -0x6c));
      dVar19 = CONCAT44D(uVar35,fVar14);
    }
    else {
      in_xd6 = *(double *)(unsigned)((int)puVar10 + -0x44);
      dVar38 = *(double *)(unsigned)((int)puVar10 + -0x6c);
      dVar19 = dVar33;
    }
    if (in_FPSCR_PR == '\0') {
      dVar19 = CONCAT44D(F32HI(dVar19) * F32LO(in_dr4),SUB84(dVar19,0)
                               );
    }
    else {
      dVar19 = dVar19 * in_dr4;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar29 = CONCAT44D((int)(D2U(dVar29) >> 0x20),uVar31);
      in_xd12 = in_xd0;
    }
    if (in_FPSCR_PR == '\0') {
      dVar29 = CONCAT44D(F32HI(dVar29) - F32LO(dVar19),SUB84(dVar29,0)
                               );
    }
    else {
      dVar29 = dVar29 - dVar19;
    }
    dVar36 = in_xd6;
    if (in_FPSCR_SZ == '\0') {
      dVar19 = CONCAT44D((int)(D2U(dVar19) >> 0x20),SUB84(dVar17,0));
      dVar36 = in_xd2;
    }
    if (in_FPSCR_PR == '\0') {
      fVar13 = F32LO(dVar19) * fVar28 - F32HI(dVar19);
    }
    else {
      fVar13 = SUB84(dVar19 * dVar27 - dVar19 * dVar27,0);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar19 = CONCAT44D(*(undefined4 *)(unsigned)((int)puVar10 + -0x18),fVar13);
    }
    else {
      dVar19 = *(double *)(unsigned)((int)puVar10 + -0x18);
    }
    if (in_FPSCR_PR == '\0') {
      dVar19 = CONCAT44D(F32HI(dVar19) * F32LO(dVar19),SUB84(dVar19,0)
                               );
    }
    else {
      dVar19 = dVar19 * dVar19;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar19 = CONCAT44D((int)(D2U(dVar19) >> 0x20),
                                *(undefined4 *)(unsigned)((int)puVar10 + -0x1c));
    }
    else {
      dVar36 = *(double *)(unsigned)((int)puVar10 + -0x1c);
    }
    if (in_FPSCR_PR == '\0') {
      dVar19 = CONCAT44D(F32HI(dVar29) * F32LO(dVar19) +
                                F32HI(dVar19),SUB84(dVar19,0));
    }
    dVar25 = in_xd6;
    if (in_FPSCR_SZ == '\0') {
      dVar19 = CONCAT44D((int)(D2U(dVar19) >> 0x20),SUB84(dVar17,0));
      dVar25 = dVar36;
    }
    if (in_FPSCR_PR == '\0') {
      fVar13 = F32LO(dVar19) * F32HI(dVar17);
      dVar19 = CONCAT44D((int)(D2U(dVar19) >> 0x20),fVar13);
      fVar13 = F32LO(dVar29) * F32LO(in_dr4) - fVar13;
    }
    else {
      dVar19 = dVar19 * dVar17;
      fVar13 = SUB84(dVar29 * in_dr4 - dVar19,0);
    }
    if (in_FPSCR_SZ == '\0') {
      in_xd12 = CONCAT44D(fVar13,*(undefined4 *)(unsigned)((int)puVar10 + -0x14));
    }
    if (in_FPSCR_PR == '\0') {
      dVar29 = (double)((ulonglong)
                        (uint)((F32HI(in_xd12) * F32LO(in_xd12) +
                               F32HI(dVar19)) *
                              F32HI(in_dr4)) << 0x20);
    }
    else {
      dVar29 = (double)(D2U(dVar19) & 0xffffffff00000000) * in_dr4;
    }
    if (in_FPSCR_PR == '\0' && F32HI(dVar29) < SUB84(dVar29,0)) {
      iVar3 = 0;
      puVar9 = (undefined8 *)(unsigned)((int)puVar10 + -0x118);
      iVar6 = 2;
      for (iVar4 = 0; iVar4 < 3; iVar4 = iVar4 + 1) {
        iVar6 = iVar6 * 0x28;
        if (in_FPSCR_SZ == '\0') {
          uVar20 = CONCAT44(*(undefined4 *)(unsigned)((int)puVar10 + iVar6 + -100),0x3f800000);
        }
        else {
          uVar20 = *(undefined8 *)(unsigned)((int)puVar10 + iVar6 + -100);
        }
        iVar7 = iVar4 * 0x28;
        if (in_FPSCR_SZ == '\0') {
          uVar21 = CONCAT44(*(undefined4 *)(unsigned)((int)puVar10 + iVar7 + -100),(float)uVar20);
        }
        else {
          uVar21 = *(undefined8 *)(unsigned)((int)puVar10 + iVar7 + -100);
        }
        fVar13 = (float)uVar21;
        if (((in_FPSCR_PR == '\0' && (float)uVar20 < F32HI(uVar20)) ^ 1) !=
            -((in_FPSCR_PR == '\0' && fVar13 < F32HI(uVar21)) - 1)) {
          if (in_FPSCR_SZ == '\0') {
            fVar13 = *(float *)(unsigned)((int)puVar10 + iVar6 + -100);
            in_xd12 = CONCAT44D((int)((ulonglong)in_xd12 >> 0x20),
                                       *(undefined4 *)(unsigned)((int)puVar10 + iVar7 + -100));
            fVar28 = fVar13;
            dVar29 = CONCAT44D(fVar13,SUB84(in_dr4,0));
          }
          else {
            dVar25 = *(double *)(unsigned)((int)puVar10 + iVar6 + -100);
            fVar28 = F32HI(dVar25);
            dVar29 = dVar25;
          }
          dVar19 = CONCAT44D(0x3f800000,-fVar13);
          if (in_FPSCR_PR == '\0') {
            dVar19 = CONCAT44D(0x3f800000,-fVar13 + 1.0);
            dVar36 = CONCAT44D((int)((ulonglong)in_xd12 >> 0x20),F32LO(in_xd12) - fVar28);
          }
          else {
            dVar19 = dVar19 + dVar19;
            dVar36 = in_xd12 - dVar29;
          }
          if (in_FPSCR_SZ == '\0') {
            dVar29 = CONCAT44D(*(undefined4 *)(unsigned)((int)puVar10 + iVar6 + -0x6c),SUB84(dVar29,0))
            ;
            dVar17 = CONCAT44D(SUB84(dVar19,0),SUB84(dVar17,0));
          }
          else {
            dVar29 = *(double *)(unsigned)((int)puVar10 + iVar6 + -0x6c);
            dVar17 = dVar25;
          }
          if (in_FPSCR_PR == '\0') {
            dVar17 = CONCAT44D(F32HI(dVar17) / F32LO(dVar36),
                                      SUB84(dVar17,0));
          }
          else {
            dVar17 = dVar17 / dVar36;
          }
          fVar13 = F32HI(dVar29);
          if (in_FPSCR_SZ == '\0') {
            dVar19 = CONCAT44D((int)(D2U(dVar19) >> 0x20),
                                      *(undefined4 *)(unsigned)((int)puVar10 + iVar7 + -0x6c));
            dVar36 = (double)(ulonglong)(uint)fVar13;
          }
          else {
            dVar25 = *(double *)(unsigned)((int)puVar10 + iVar7 + -0x6c);
          }
          if (in_FPSCR_PR == '\0') {
            dVar19 = CONCAT44D((int)(D2U(dVar19) >> 0x20),F32LO(dVar19) - fVar13);
          }
          else {
            dVar19 = dVar19 - dVar29;
          }
          uVar31 = (undefined4)(D2U(dVar17) >> 0x20);
          if (in_FPSCR_SZ == '\0') {
            dVar36 = CONCAT44D(uVar31,SUB84(dVar36,0));
            dVar29 = CONCAT44D(fVar30,*(undefined4 *)(unsigned)((int)puVar10 + iVar6 + -0x68));
          }
          else {
            dVar38 = *(double *)(unsigned)((int)puVar10 + iVar6 + -0x68);
            dVar36 = dVar17;
            dVar29 = dVar16;
          }
          if (in_FPSCR_PR == '\0') {
            dVar36 = (double)(ulonglong)
                             (uint)(F32HI(dVar36) * F32LO(dVar19) +
                                   SUB84(dVar36,0));
          }
          uVar35 = SUB84(dVar27,0);
          if (in_FPSCR_SZ == '\0') {
            dVar19 = CONCAT44D((int)(D2U(dVar19) >> 0x20),
                                      *(undefined4 *)(unsigned)((int)puVar10 + iVar7 + -0x68));
            dVar27 = CONCAT44D(uVar35,SUB84(dVar36,0));
          }
          else {
            dVar25 = *(double *)(unsigned)((int)puVar10 + iVar7 + -0x68);
            dVar27 = dVar39;
          }
          if (in_FPSCR_PR == '\0') {
            dVar19 = CONCAT44D((int)(D2U(dVar19) >> 0x20),
                                      F32LO(dVar19) - F32LO(dVar29));
            dVar29 = CONCAT44D(F32HI(dVar27) * F32LO(dVar27) +
                                      F32HI(dVar29),SUB84(dVar29,0));
          }
          else {
            dVar19 = dVar19 - dVar29;
          }
          uVar32 = SUB84(dVar33,0);
          dVar27 = in_xd14;
          dVar33 = dVar17;
          if (in_FPSCR_SZ == '\0') {
            uVar23 = SUB84(dVar29,0);
            dVar29 = CONCAT44D((int)(D2U(dVar29) >> 0x20),uVar32);
            dVar27 = dVar38;
            dVar33 = CONCAT44D(uVar31,uVar23);
          }
          if (in_FPSCR_PR == '\0') {
            dVar33 = (double)(ulonglong)
                             (uint)(F32HI(dVar33) * F32LO(dVar19) +
                                   SUB84(dVar33,0));
          }
          dVar38 = in_xd10;
          if (in_FPSCR_SZ == '\0') {
            dVar38 = CONCAT44D(SUB84(dVar16,0),SUB84(dVar33,0));
          }
          if (in_FPSCR_PR == '\0') {
            dVar29 = CONCAT44D((int)(D2U(dVar29) >> 0x20),
                                      F32HI(dVar38) * F32LO(dVar38) +
                                      SUB84(dVar29,0));
          }
          dVar33 = dVar17;
          if (in_FPSCR_SZ == '\0') {
            dVar33 = CONCAT44D(uVar31,SUB84(dVar38,0));
          }
          pdVar8 = (double *)(unsigned)(puVar9 + iVar3 * 5);
          uVar23 = (undefined4)(D2U(dVar19) >> 0x20);
          if (in_FPSCR_SZ == '\0') {
            *(int *)(unsigned)pdVar8 = (int)(D2U(dVar29) >> 0x20);
            *(int *)(unsigned)((int)pdVar8 + 4) = SUB84(dVar29,0);
            *(undefined4 *)(unsigned)(pdVar8 + 1) = uVar23;
            dVar19 = CONCAT44D(uVar23,*(undefined4 *)(unsigned)((int)puVar10 + iVar7 + -0x60));
            dVar38 = CONCAT44D(*(undefined4 *)(unsigned)((int)puVar10 + iVar6 + -0x60),SUB84(dVar29,0))
            ;
          }
          else {
            *pdVar8 = dVar29;
            *(double *)(unsigned)((int)pdVar8 + 4) = dVar27;
            pdVar8[1] = dVar19;
            dVar25 = *(double *)(unsigned)((int)puVar10 + iVar7 + -0x60);
            dVar38 = *(double *)(unsigned)((int)puVar10 + iVar6 + -0x60);
          }
          fVar13 = F32HI(dVar38);
          if (in_FPSCR_PR == '\0') {
            fVar28 = F32LO(dVar19) - fVar13;
          }
          else {
            fVar28 = SUB84(dVar19 - dVar38,0);
          }
          dVar29 = dVar38;
          if (in_FPSCR_SZ == '\0') {
            dVar29 = CONCAT44D(fVar13,fVar28);
          }
          fVar13 = F32HI(dVar33);
          if (in_FPSCR_PR == '\0') {
            dVar29 = CONCAT44D(fVar13 * F32LO(dVar29) + F32HI(dVar29),
                                      SUB84(dVar29,0));
          }
          uVar23 = (undefined4)(D2U(dVar29) >> 0x20);
          if (in_FPSCR_SZ == '\0') {
            *(undefined4 *)(unsigned)(pdVar8 + 3) = uVar23;
            dVar29 = CONCAT44D(uVar23,*(undefined4 *)(unsigned)((int)puVar10 + iVar7 + -0x5c));
            dVar38 = CONCAT44D(*(undefined4 *)(unsigned)((int)puVar10 + iVar6 + -0x5c),SUB84(dVar38,0))
            ;
          }
          else {
            pdVar8[3] = dVar29;
            dVar25 = *(double *)(unsigned)((int)puVar10 + iVar7 + -0x5c);
            dVar38 = *(double *)(unsigned)((int)puVar10 + iVar6 + -0x5c);
          }
          fVar28 = F32HI(dVar38);
          if (in_FPSCR_PR == '\0') {
            fVar14 = F32LO(dVar29) - fVar28;
          }
          else {
            fVar14 = SUB84(dVar29 - dVar38,0);
          }
          dVar29 = dVar38;
          if (in_FPSCR_SZ == '\0') {
            dVar29 = CONCAT44D(fVar28,fVar14);
          }
          if (in_FPSCR_PR == '\0') {
            dVar29 = CONCAT44D(fVar13 * F32LO(dVar29) + F32HI(dVar29),
                                      SUB84(dVar29,0));
          }
          if (in_FPSCR_SZ == '\0') {
            *(int *)(unsigned)((int)pdVar8 + 0x1c) = (int)(D2U(dVar29) >> 0x20);
          }
          else {
            *(double *)(unsigned)((int)pdVar8 + 0x1c) = dVar29;
          }
          uVar1 = *(uint *)(unsigned)((int)puVar10 + iVar6 + -0x58);
          fVar28 = (float)(uVar1 >> 0x18);
          dVar29 = dVar25;
          if (in_FPSCR_SZ == '\0') {
            dVar29 = CONCAT44D(fVar28,SUB84(dVar38,0));
          }
          if (in_FPSCR_PR == '\0' && fVar28 < 0.0) {
            if (in_FPSCR_SZ == '\0') {
              fVar28 = 4.2949673e+09;
            }
            else {
              dVar25 = -4.09448006764075e+250;
            }
            if (in_FPSCR_PR == '\0') {
              dVar29 = CONCAT44D(F32HI(dVar29) + fVar28,SUB84(dVar29,0))
              ;
            }
            else {
              dVar29 = dVar29 + (double)(ulonglong)(uint)fVar28;
            }
          }
          fVar28 = (float)(uVar1 >> 0x10 & 0xff);
          dVar19 = (double)(ulonglong)(uint)fVar28;
          dVar38 = dVar25;
          if (in_FPSCR_SZ == '\0') {
            dVar29 = CONCAT44D((int)(D2U(dVar29) >> 0x20),fVar28);
            dVar38 = dVar27;
          }
          if (in_FPSCR_PR == '\0' && fVar28 < 0.0) {
            if (in_FPSCR_SZ == '\0') {
              dVar19 = 6.58979161647419e-315;
            }
            else {
              dVar25 = -4.09448006764075e+250;
            }
            if (in_FPSCR_PR == '\0') {
              dVar29 = CONCAT44D((int)(D2U(dVar29) >> 0x20),
                                        F32LO(dVar29) + F32LO(dVar19));
            }
            else {
              dVar29 = dVar29 + dVar19;
            }
          }
          fVar28 = (float)(uVar1 >> 8 & 0xff);
          dVar19 = (double)(ulonglong)(uint)fVar28;
          dVar27 = dVar25;
          if (in_FPSCR_SZ == '\0') {
            dVar17 = CONCAT44D(uVar31,fVar28);
            dVar27 = in_xd6;
          }
          if (in_FPSCR_PR != '\0' || 0.0 <= fVar28) {
            dVar36 = dVar27;
            if (in_FPSCR_SZ == '\0') {
              dVar36 = CONCAT44D(SUB84(dVar17,0),uVar35);
            }
          }
          else {
            if (in_FPSCR_SZ == '\0') {
              dVar19 = 6.58979161647419e-315;
              dVar36 = CONCAT44D(SUB84(dVar17,0),uVar35);
            }
            else {
              dVar25 = -4.09448006764075e+250;
              dVar36 = dVar27;
            }
            if (in_FPSCR_PR == '\0') {
              dVar36 = CONCAT44D(F32HI(dVar36) + F32LO(dVar19),
                                        SUB84(dVar36,0));
            }
            else {
              dVar36 = dVar36 + dVar19;
            }
          }
          fVar28 = (float)(uVar1 & 0xff);
          dVar22 = (double)(ulonglong)(uint)fVar28;
          dVar19 = dVar25;
          if (in_FPSCR_SZ == '\0') {
            dVar17 = CONCAT44D((int)(D2U(dVar17) >> 0x20),fVar28);
            dVar19 = dVar27;
          }
          if (in_FPSCR_PR != '\0' || 0.0 <= fVar28) {
            dVar34 = dVar19;
            if (in_FPSCR_SZ == '\0') {
              dVar34 = CONCAT44D(SUB84(dVar17,0),uVar32);
            }
          }
          else {
            if (in_FPSCR_SZ == '\0') {
              dVar22 = 6.58979161647419e-315;
              dVar34 = CONCAT44D(SUB84(dVar17,0),uVar32);
            }
            else {
              dVar25 = -4.09448006764075e+250;
              dVar34 = dVar19;
            }
            if (in_FPSCR_PR == '\0') {
              dVar34 = CONCAT44D(F32HI(dVar34) + F32LO(dVar22),
                                        SUB84(dVar34,0));
            }
            else {
              dVar34 = dVar34 + dVar22;
            }
          }
          uVar1 = *(uint *)(unsigned)((int)puVar10 + iVar7 + -0x58);
          fVar28 = (float)(uVar1 >> 0x18);
          dVar22 = (double)(ulonglong)(uint)fVar28;
          dVar27 = dVar25;
          if (in_FPSCR_SZ == '\0') {
            dVar17 = CONCAT44D((int)(D2U(dVar17) >> 0x20),fVar28);
            dVar27 = dVar19;
          }
          if (in_FPSCR_PR == '\0' && fVar28 < 0.0) {
            if (in_FPSCR_SZ == '\0') {
              dVar22 = 6.58979161647419e-315;
            }
            else {
              dVar25 = -4.09448006764075e+250;
            }
            if (in_FPSCR_PR == '\0') {
              dVar17 = CONCAT44D((int)(D2U(dVar17) >> 0x20),
                                        F32LO(dVar17) + F32LO(dVar22));
            }
            else {
              dVar17 = dVar17 + dVar22;
            }
          }
          fVar28 = (float)(uVar1 >> 0x10 & 0xff);
          dVar19 = (double)(ulonglong)(uint)fVar28;
          if (in_FPSCR_SZ == '\0') {
            in_dr12 = CONCAT44D((int)((ulonglong)in_dr12 >> 0x20),fVar28);
          }
          if (in_FPSCR_PR == '\0' && fVar28 < 0.0) {
            if (in_FPSCR_SZ == '\0') {
              dVar19 = 6.58979161647419e-315;
            }
            else {
              dVar25 = -4.09448006764075e+250;
            }
            if (in_FPSCR_PR == '\0') {
              in_dr12 = CONCAT44D((int)((ulonglong)in_dr12 >> 0x20),
                                         F32LO(in_dr12) + F32LO(dVar19));
            }
            else {
              in_dr12 = in_dr12 + dVar19;
            }
          }
          fVar28 = (float)(uVar1 >> 8 & 0xff);
          dVar19 = (double)(ulonglong)(uint)fVar28;
          if (in_FPSCR_SZ == '\0') {
            dVar33 = CONCAT44D(fVar13,fVar28);
          }
          if (in_FPSCR_PR == '\0' && fVar28 < 0.0) {
            if (in_FPSCR_SZ == '\0') {
              dVar19 = 6.58979161647419e-315;
            }
            else {
              dVar25 = -4.09448006764075e+250;
            }
            if (in_FPSCR_PR == '\0') {
              dVar33 = CONCAT44D((int)(D2U(dVar33) >> 0x20),
                                        F32LO(dVar33) + F32LO(dVar19));
            }
            else {
              dVar33 = dVar33 + dVar19;
            }
          }
          if (in_FPSCR_PR == '\0') {
            dVar19 = (double)((ulonglong)(uint)(float)(uVar1 & 0xff) << 0x20);
          }
          else {
            dVar19 = (double)(uVar1 & 0xff);
          }
          fVar13 = F32HI(dVar19);
          if (in_FPSCR_SZ == '\0') {
            *(float *)(unsigned)((int)puVar10 + -300) = fVar13;
          }
          else {
            *(double *)(unsigned)((int)puVar10 + -300) = dVar19;
          }
          if (in_FPSCR_PR != '\0' || SUB84(dVar19,0) <= fVar13) {
            if (in_FPSCR_SZ == '\0') {
              dVar19 = CONCAT44D(fVar13,*(undefined4 *)(unsigned)((int)puVar10 + -300));
            }
            else {
              dVar25 = *(double *)(unsigned)((int)puVar10 + -300);
            }
          }
          else {
            if (in_FPSCR_SZ == '\0') {
              dVar19 = CONCAT44D(0x4f800000,*(undefined4 *)(unsigned)((int)puVar10 + -300));
            }
            else {
              dVar19 = -4.09448006764075e+250;
              dVar25 = *(double *)(unsigned)((int)puVar10 + -300);
            }
            if (in_FPSCR_PR == '\0') {
              fVar13 = F32HI(dVar19);
              dVar19 = CONCAT44D(fVar13,F32LO(dVar19) + fVar13);
            }
            else {
              dVar19 = dVar19 + dVar19;
            }
          }
          fVar13 = F32HI(dVar29);
          if (in_FPSCR_PR == '\0') {
            dVar17 = CONCAT44D((int)(D2U(dVar17) >> 0x20),F32LO(dVar17) - fVar13);
          }
          else {
            dVar17 = dVar17 - dVar29;
          }
          if (in_FPSCR_SZ == '\0') {
            *(float *)(unsigned)((int)puVar10 + -0x120) = SUB84(dVar19,0);
          }
          else {
            *(double *)(unsigned)((int)puVar10 + -0x120) = dVar25;
          }
          fVar28 = F32HI(dVar36);
          fVar14 = F32HI(dVar34);
          if (in_FPSCR_PR == '\0') {
            fVar11 = F32LO(dVar33) - fVar28;
            fVar15 = F32LO(dVar19) - fVar14;
          }
          else {
            fVar11 = SUB84(dVar33 - dVar36,0);
            fVar15 = SUB84(dVar19 - dVar34,0);
          }
          uVar31 = (undefined4)(D2U(dVar17) >> 0x20);
          dVar33 = dVar17;
          if (in_FPSCR_SZ == '\0') {
            dVar33 = CONCAT44D(uVar31,fVar11);
          }
          fVar11 = F32LO(dVar29);
          if (in_FPSCR_PR == '\0') {
            dVar19 = CONCAT44D((int)((ulonglong)in_dr12 >> 0x20),F32LO(in_dr12) - fVar11);
          }
          else {
            dVar19 = in_dr12 - dVar29;
          }
          if (in_FPSCR_SZ == '\0') {
            dVar29 = CONCAT44D(fVar13,fVar15);
          }
          fVar13 = F32HI(dVar33);
          if (in_FPSCR_PR == '\0') {
            dVar29 = CONCAT44D(fVar13 * F32LO(dVar17) + F32HI(dVar29),
                                      SUB84(dVar29,0));
          }
          dVar26 = dVar34;
          dVar22 = dVar38;
          if (in_FPSCR_SZ == '\0') {
            dVar17 = CONCAT44D(uVar31,fVar11);
            dVar26 = CONCAT44D(fVar14,fVar11);
            dVar22 = dVar27;
          }
          if (in_FPSCR_PR == '\0') {
            dVar26 = CONCAT44D(fVar13 * F32LO(dVar29) + F32HI(dVar26),
                                      SUB84(dVar26,0));
          }
          dVar27 = dVar36;
          if (in_FPSCR_SZ == '\0') {
            dVar26 = CONCAT44D((int)(D2U(dVar26) >> 0x20),fVar28);
            dVar27 = dVar38;
          }
          if (in_FPSCR_PR == '\0') {
            dVar26 = CONCAT44D((int)(D2U(dVar26) >> 0x20),
                                      fVar13 * F32LO(dVar33) + F32LO(dVar26));
          }
          dVar33 = CONCAT44D(fVar13,0x4f000000);
          dVar37 = dVar29;
          if (in_FPSCR_SZ == '\0') {
            uVar31 = (undefined4)(D2U(dVar29) >> 0x20);
            dVar29 = CONCAT44D(uVar31,uVar31);
            dVar37 = dVar25;
          }
          if (in_FPSCR_PR == '\0') {
            bVar40 = SUB84(dVar29,0) < 2.1474836e+09;
          }
          else {
            bVar40 = dVar29 < dVar33;
          }
          uVar31 = (undefined4)(D2U(dVar29) >> 0x20);
          if (in_FPSCR_SZ == '\0') {
            *(undefined4 *)(unsigned)((int)puVar10 + -0x11c) = uVar31;
          }
          else {
            *(double *)(unsigned)((int)puVar10 + -0x11c) = dVar29;
          }
          if (in_FPSCR_PR == '\0') {
            dVar17 = CONCAT44D((int)(D2U(dVar17) >> 0x20),
                                      fVar13 * F32LO(dVar19) + F32LO(dVar17));
          }
          if (!bVar40) {
            if (in_FPSCR_PR == '\0') {
              dVar33 = CONCAT44D(fVar13,0x4f800000);
              dVar29 = CONCAT44D(uVar31,F32LO(dVar29) - 4.2949673e+09);
            }
            else {
              dVar33 = dVar33 + dVar33;
              dVar29 = dVar29 - dVar33;
            }
          }
          if (in_FPSCR_PR == '\0') {
            iVar41 = (int)SUB84(dVar29,0);
          }
          else {
            iVar41 = (int)dVar29;
          }
          uVar31 = (undefined4)(D2U(dVar29) >> 0x20);
          dVar38 = CONCAT44D(uVar31,0x4f000000);
          if (in_FPSCR_PR == '\0') {
            bVar40 = SUB84(dVar17,0) < 2.1474836e+09;
          }
          else {
            bVar40 = dVar17 < dVar38;
          }
          if (!bVar40) {
            if (in_FPSCR_PR == '\0') {
              dVar38 = CONCAT44D(uVar31,0x4f800000);
              dVar17 = CONCAT44D((int)(D2U(dVar17) >> 0x20),
                                        F32LO(dVar17) - 4.2949673e+09);
            }
            else {
              dVar38 = dVar38 + dVar38;
              dVar17 = dVar17 - dVar38;
            }
          }
          if (in_FPSCR_PR == '\0') {
            iVar42 = (int)SUB84(dVar17,0);
          }
          else {
            iVar42 = (int)dVar17;
          }
          uVar31 = (undefined4)(D2U(dVar38) >> 0x20);
          dVar38 = CONCAT44D(uVar31,0x4f000000);
          if (in_FPSCR_PR == '\0') {
            bVar40 = SUB84(dVar26,0) < 2.1474836e+09;
          }
          else {
            bVar40 = dVar26 < dVar38;
          }
          if (!bVar40) {
            if (in_FPSCR_PR == '\0') {
              dVar38 = CONCAT44D(uVar31,0x4f800000);
              dVar26 = CONCAT44D((int)(D2U(dVar26) >> 0x20),
                                        F32LO(dVar26) - 4.2949673e+09);
            }
            else {
              dVar38 = dVar38 + dVar38;
              dVar26 = dVar26 - dVar38;
            }
          }
          if (in_FPSCR_PR == '\0') {
            iVar43 = (int)SUB84(dVar26,0);
          }
          else {
            iVar43 = (int)dVar26;
          }
          dVar38 = CONCAT44D((int)(D2U(dVar38) >> 0x20),0x4f000000);
          fVar13 = F32HI(dVar26);
          if (in_FPSCR_PR == '\0') {
            bVar40 = fVar13 < 2.1474836e+09;
          }
          else {
            bVar40 = dVar26 < dVar38;
          }
          if (!bVar40) {
            if (in_FPSCR_PR == '\0') {
              dVar26 = CONCAT44D(fVar13 - 4.2949673e+09,SUB84(dVar26,0));
            }
            else {
              dVar26 = dVar26 - (dVar38 + dVar38);
            }
          }
          if (in_FPSCR_PR == '\0') {
            uVar1 = (uint)F32HI(dVar26);
          }
          else {
            uVar1 = (uint)dVar26;
          }
          *(uint *)(unsigned)(pdVar8 + 4) = iVar41 << 0x18 | iVar42 << 0x10 | iVar43 << 8 | uVar1;
          uVar1 = *(uint *)(unsigned)((int)puVar10 + iVar6 + -0x54);
          fVar13 = (float)(uVar1 >> 0x18);
          dVar38 = (double)(ulonglong)(uint)fVar13;
          dVar29 = dVar37;
          if (in_FPSCR_SZ == '\0') {
            dVar29 = CONCAT44D(fVar13,SUB84(dVar26,0));
          }
          if (in_FPSCR_PR == '\0' && fVar13 < 0.0) {
            if (in_FPSCR_SZ == '\0') {
              dVar38 = 6.58979161647419e-315;
            }
            else {
              dVar37 = -1.502875175110795e+300;
            }
            if (in_FPSCR_PR == '\0') {
              dVar29 = CONCAT44D(F32HI(dVar29) + F32LO(dVar38),
                                        SUB84(dVar29,0));
            }
            else {
              dVar29 = dVar29 + dVar38;
            }
          }
          fVar13 = (float)(uVar1 >> 0x10 & 0xff);
          dVar38 = (double)(ulonglong)(uint)fVar13;
          dVar25 = dVar37;
          if (in_FPSCR_SZ == '\0') {
            dVar29 = CONCAT44D((int)(D2U(dVar29) >> 0x20),fVar13);
            dVar25 = dVar27;
          }
          if (in_FPSCR_PR == '\0' && fVar13 < 0.0) {
            if (in_FPSCR_SZ == '\0') {
              dVar38 = 6.58979161647419e-315;
            }
            else {
              dVar37 = -1.502875175110795e+300;
            }
            if (in_FPSCR_PR == '\0') {
              dVar29 = CONCAT44D((int)(D2U(dVar29) >> 0x20),
                                        F32LO(dVar29) + F32LO(dVar38));
            }
            else {
              dVar29 = dVar29 + dVar38;
            }
          }
          fVar13 = (float)(uVar1 >> 8 & 0xff);
          dVar27 = (double)(ulonglong)(uint)fVar13;
          in_xd6 = dVar37;
          if (in_FPSCR_SZ == '\0') {
            dVar17 = CONCAT44D((int)(D2U(dVar17) >> 0x20),fVar13);
            in_xd6 = dVar22;
          }
          if (in_FPSCR_PR == '\0' && fVar13 < 0.0) {
            if (in_FPSCR_SZ == '\0') {
              dVar27 = 6.58979161647419e-315;
            }
            else {
              dVar37 = -1.502875175110795e+300;
            }
            if (in_FPSCR_PR == '\0') {
              dVar17 = CONCAT44D((int)(D2U(dVar17) >> 0x20),
                                        F32LO(dVar17) + F32LO(dVar27));
            }
            else {
              dVar17 = dVar17 + dVar27;
            }
          }
          fVar13 = (float)(uVar1 & 0xff);
          dVar38 = (double)(ulonglong)(uint)fVar13;
          dVar27 = dVar37;
          if (in_FPSCR_SZ == '\0') {
            dVar27 = CONCAT44D(fVar13,SUB84(dVar36,0));
          }
          if (in_FPSCR_PR == '\0' && fVar13 < 0.0) {
            if (in_FPSCR_SZ == '\0') {
              dVar38 = 6.58979161647419e-315;
            }
            else {
              dVar37 = -1.502875175110795e+300;
            }
            if (in_FPSCR_PR == '\0') {
              dVar27 = CONCAT44D(F32HI(dVar27) + F32LO(dVar38),
                                        SUB84(dVar27,0));
            }
            else {
              dVar27 = dVar27 + dVar38;
            }
          }
          uVar1 = *(uint *)(unsigned)((int)puVar10 + iVar7 + -0x54);
          fVar13 = (float)(uVar1 >> 0x18);
          dVar36 = (double)(ulonglong)(uint)fVar13;
          dVar38 = dVar37;
          if (in_FPSCR_SZ == '\0') {
            dVar38 = CONCAT44D(fVar13,SUB84(dVar34,0));
          }
          if (in_FPSCR_PR == '\0' && fVar13 < 0.0) {
            if (in_FPSCR_SZ == '\0') {
              dVar36 = 6.58979161647419e-315;
            }
            else {
              dVar37 = -1.502875175110795e+300;
            }
            if (in_FPSCR_PR == '\0') {
              dVar38 = CONCAT44D(F32HI(dVar38) + F32LO(dVar36),
                                        SUB84(dVar38,0));
            }
            else {
              dVar38 = dVar38 + dVar36;
            }
          }
          fVar13 = (float)(uVar1 >> 0x10 & 0xff);
          dVar36 = (double)(ulonglong)(uint)fVar13;
          if (in_FPSCR_SZ == '\0') {
            dVar19 = CONCAT44D((int)(D2U(dVar19) >> 0x20),fVar13);
          }
          if (in_FPSCR_PR == '\0' && fVar13 < 0.0) {
            if (in_FPSCR_SZ == '\0') {
              dVar36 = 6.58979161647419e-315;
            }
            else {
              dVar37 = -1.502875175110795e+300;
            }
            if (in_FPSCR_PR == '\0') {
              dVar19 = CONCAT44D((int)(D2U(dVar19) >> 0x20),
                                        F32LO(dVar19) + F32LO(dVar36));
            }
            else {
              dVar19 = dVar19 + dVar36;
            }
          }
          fVar13 = (float)(uVar1 >> 8 & 0xff);
          dVar36 = (double)(ulonglong)(uint)fVar13;
          if (in_FPSCR_SZ == '\0') {
            dVar33 = CONCAT44D((int)(D2U(dVar33) >> 0x20),fVar13);
          }
          if (in_FPSCR_PR == '\0' && fVar13 < 0.0) {
            if (in_FPSCR_SZ == '\0') {
              dVar36 = 6.58979161647419e-315;
            }
            else {
              dVar37 = -1.502875175110795e+300;
            }
            if (in_FPSCR_PR == '\0') {
              dVar33 = CONCAT44D((int)(D2U(dVar33) >> 0x20),
                                        F32LO(dVar33) + F32LO(dVar36));
            }
            else {
              dVar33 = dVar33 + dVar36;
            }
          }
          if (in_FPSCR_PR == '\0') {
            dVar36 = (double)((ulonglong)(uint)(float)(uVar1 & 0xff) << 0x20);
          }
          else {
            dVar36 = (double)(uVar1 & 0xff);
          }
          fVar13 = F32HI(dVar36);
          if (in_FPSCR_SZ == '\0') {
            *(float *)(unsigned)((int)puVar10 + -0x130) = fVar13;
          }
          else {
            *(double *)(unsigned)((int)puVar10 + -0x130) = dVar36;
          }
          if (in_FPSCR_PR != '\0' || SUB84(dVar36,0) <= fVar13) {
            if (in_FPSCR_SZ == '\0') {
              dVar36 = CONCAT44D(fVar13,*(undefined4 *)(unsigned)((int)puVar10 + -0x130));
            }
            else {
              dVar37 = *(double *)(unsigned)((int)puVar10 + -0x130);
            }
          }
          else {
            if (in_FPSCR_SZ == '\0') {
              dVar36 = CONCAT44D(0x4f800000,*(undefined4 *)(unsigned)((int)puVar10 + -0x130));
            }
            else {
              dVar37 = *(double *)(unsigned)((int)puVar10 + -0x130);
              dVar36 = -1.502875175110795e+300;
            }
            if (in_FPSCR_PR == '\0') {
              fVar13 = F32HI(dVar36);
              dVar36 = CONCAT44D(fVar13,F32LO(dVar36) + fVar13);
            }
            else {
              dVar36 = dVar36 + dVar36;
            }
          }
          fVar13 = F32HI(dVar29);
          if (in_FPSCR_PR == '\0') {
            dVar38 = CONCAT44D(F32HI(dVar38) - fVar13,SUB84(dVar38,0));
          }
          else {
            dVar38 = dVar38 - dVar29;
          }
          if (in_FPSCR_SZ == '\0') {
            *(float *)(unsigned)((int)puVar10 + -0x128) = SUB84(dVar36,0);
          }
          else {
            *(double *)(unsigned)((int)puVar10 + -0x128) = dVar37;
          }
          fVar28 = F32HI(dVar27);
          if (in_FPSCR_PR == '\0') {
            fVar14 = F32LO(dVar33) - F32LO(dVar17);
            fVar11 = F32LO(dVar36) - fVar28;
          }
          else {
            fVar14 = SUB84(dVar33 - dVar17,0);
            fVar11 = SUB84(dVar36 - dVar27,0);
          }
          dVar36 = dVar17;
          if (in_FPSCR_SZ == '\0') {
            dVar36 = CONCAT44D((int)(D2U(dVar17) >> 0x20),fVar14);
          }
          fVar14 = F32LO(dVar29);
          if (in_FPSCR_PR == '\0') {
            in_dr12 = CONCAT44D((int)(D2U(dVar19) >> 0x20),F32LO(dVar19) - fVar14);
          }
          else {
            in_dr12 = dVar19 - dVar29;
          }
          if (in_FPSCR_SZ == '\0') {
            dVar29 = CONCAT44D(fVar13,fVar11);
          }
          fVar13 = F32HI(dVar36);
          if (in_FPSCR_PR == '\0') {
            dVar29 = CONCAT44D(fVar13 * F32HI(dVar38) +
                                      F32HI(dVar29),SUB84(dVar29,0));
          }
          in_dr4 = dVar27;
          dVar33 = dVar25;
          if (in_FPSCR_SZ == '\0') {
            in_dr4 = CONCAT44D(fVar28,fVar14);
            dVar33 = CONCAT44D(fVar14,SUB84(dVar38,0));
          }
          if (in_FPSCR_PR == '\0') {
            in_dr4 = CONCAT44D(fVar13 * F32LO(dVar29) + F32HI(in_dr4),
                                      SUB84(in_dr4,0));
          }
          dVar38 = in_xd6;
          if (in_FPSCR_SZ == '\0') {
            in_dr4 = CONCAT44D((int)((ulonglong)in_dr4 >> 0x20),SUB84(dVar17,0));
            dVar38 = dVar25;
          }
          if (in_FPSCR_PR == '\0') {
            in_dr4 = CONCAT44D((int)((ulonglong)in_dr4 >> 0x20),
                                      fVar13 * F32LO(dVar36) + F32LO(in_dr4));
          }
          in_xd12 = CONCAT44D(fVar13,0x4f000000);
          dVar25 = dVar29;
          if (in_FPSCR_SZ == '\0') {
            uVar31 = (undefined4)(D2U(dVar29) >> 0x20);
            dVar29 = CONCAT44D(uVar31,uVar31);
            dVar25 = dVar37;
          }
          if (in_FPSCR_PR == '\0') {
            bVar40 = SUB84(dVar29,0) < 2.1474836e+09;
          }
          else {
            bVar40 = dVar29 < in_xd12;
          }
          uVar31 = (undefined4)(D2U(dVar29) >> 0x20);
          if (in_FPSCR_SZ == '\0') {
            *(undefined4 *)(unsigned)((int)puVar10 + -0x124) = uVar31;
          }
          else {
            *(double *)(unsigned)((int)puVar10 + -0x124) = dVar29;
          }
          if (in_FPSCR_PR == '\0') {
            dVar33 = CONCAT44D(fVar13 * F32LO(in_dr12) + F32HI(dVar33)
                                      ,SUB84(dVar33,0));
          }
          if (!bVar40) {
            if (in_FPSCR_PR == '\0') {
              in_xd12 = CONCAT44D(fVar13,0x4f800000);
              dVar29 = CONCAT44D(uVar31,F32LO(dVar29) - 4.2949673e+09);
            }
            else {
              in_xd12 = in_xd12 + in_xd12;
              dVar29 = dVar29 - in_xd12;
            }
          }
          if (in_FPSCR_PR == '\0') {
            iVar6 = (int)SUB84(dVar29,0);
          }
          else {
            iVar6 = (int)dVar29;
          }
          uVar31 = (undefined4)(D2U(dVar29) >> 0x20);
          dVar29 = CONCAT44D(uVar31,0x4f000000);
          fVar13 = F32HI(dVar33);
          if (in_FPSCR_PR == '\0') {
            bVar40 = fVar13 < 2.1474836e+09;
          }
          else {
            bVar40 = dVar33 < dVar29;
          }
          if (!bVar40) {
            if (in_FPSCR_PR == '\0') {
              dVar29 = CONCAT44D(uVar31,0x4f800000);
              dVar33 = CONCAT44D(fVar13 - 4.2949673e+09,SUB84(dVar33,0));
            }
            else {
              dVar29 = dVar29 + dVar29;
              dVar33 = dVar33 - dVar29;
            }
          }
          if (in_FPSCR_PR == '\0') {
            iVar7 = (int)F32HI(dVar33);
          }
          else {
            iVar7 = (int)dVar33;
          }
          uVar31 = (undefined4)(D2U(dVar29) >> 0x20);
          dVar29 = CONCAT44D(uVar31,0x4f000000);
          if (in_FPSCR_PR == '\0') {
            bVar40 = SUB84(in_dr4,0) < 2.1474836e+09;
          }
          else {
            bVar40 = in_dr4 < dVar29;
          }
          if (!bVar40) {
            if (in_FPSCR_PR == '\0') {
              dVar29 = CONCAT44D(uVar31,0x4f800000);
              in_dr4 = CONCAT44D((int)((ulonglong)in_dr4 >> 0x20),
                                        F32LO(in_dr4) - 4.2949673e+09);
            }
            else {
              dVar29 = dVar29 + dVar29;
              in_dr4 = in_dr4 - dVar29;
            }
          }
          if (in_FPSCR_PR == '\0') {
            iVar41 = (int)SUB84(in_dr4,0);
          }
          else {
            iVar41 = (int)in_dr4;
          }
          dVar29 = CONCAT44D((int)(D2U(dVar29) >> 0x20),0x4f000000);
          fVar13 = F32HI(in_dr4);
          if (in_FPSCR_PR == '\0') {
            bVar40 = fVar13 < 2.1474836e+09;
          }
          else {
            bVar40 = in_dr4 < dVar29;
          }
          if (!bVar40) {
            if (in_FPSCR_PR == '\0') {
              in_dr4 = CONCAT44D(fVar13 - 4.2949673e+09,SUB84(in_dr4,0));
            }
            else {
              in_dr4 = in_dr4 - (dVar29 + dVar29);
            }
          }
          if (in_FPSCR_PR == '\0') {
            uVar1 = (uint)F32HI(in_dr4);
          }
          else {
            uVar1 = (uint)in_dr4;
          }
          iVar3 = iVar3 + 1;
          *(uint *)(unsigned)((int)pdVar8 + 0x24) = iVar6 << 0x18 | iVar7 << 0x10 | iVar41 << 8 | uVar1;
        }
        pdVar8 = (double *)(unsigned)((int)puVar10 + iVar4 * 0x28 + -0x78);
        if (in_FPSCR_SZ == '\0') {
          uVar20 = CONCAT44(*(undefined4 *)(unsigned)((int)pdVar8 + 0x14),0x3f800000);
        }
        else {
          uVar20 = *(undefined8 *)(unsigned)((int)pdVar8 + 0x14);
        }
        if (in_FPSCR_PR == '\0' && (float)uVar20 < F32HI(uVar20)) {
          pdVar2 = pdVar8;
          if (in_FPSCR_SZ != '\0') {
            dVar38 = *pdVar8;
            pdVar2 = (double *)(unsigned)((int)pdVar8 + 4);
          }
          in_dr4 = *pdVar2;
          pdVar2 = (double *)(unsigned)(puVar9 + iVar3 * 5);
          iVar3 = iVar3 + 1;
          if (in_FPSCR_SZ == '\0') {
            *(int *)(unsigned)pdVar2 = SUB84(in_dr4,0);
            *(int *)(unsigned)((int)pdVar2 + 4) = (int)((ulonglong)in_dr4 >> 0x20);
            *(undefined4 *)(unsigned)(pdVar2 + 1) = *(undefined4 *)(unsigned)(pdVar8 + 1);
            *(undefined4 *)(unsigned)(pdVar2 + 3) = *(undefined4 *)(unsigned)(pdVar8 + 3);
            *(undefined4 *)(unsigned)((int)pdVar2 + 0x1c) = *(undefined4 *)(unsigned)((int)pdVar8 + 0x1c);
            *(undefined4 *)(unsigned)(pdVar2 + 4) = *(undefined4 *)(unsigned)(pdVar8 + 4);
            *(undefined4 *)(unsigned)((int)pdVar2 + 0x24) = *(undefined4 *)(unsigned)((int)pdVar8 + 0x24);
          }
          else {
            *pdVar2 = dVar38;
            *(double *)(unsigned)((int)pdVar2 + 4) = in_dr4;
            pdVar2[1] = pdVar8[1];
            pdVar2[3] = pdVar8[3];
            *(undefined8 *)(unsigned)((int)pdVar2 + 0x1c) = *(undefined8 *)(unsigned)((int)pdVar8 + 0x1c);
            pdVar2[4] = pdVar8[4];
            *(undefined8 *)(unsigned)((int)pdVar2 + 0x24) = *(undefined8 *)(unsigned)((int)pdVar8 + 0x24);
          }
        }
        iVar6 = iVar4;
      }
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(unsigned)((int)ar7 + 0x1c) = *(undefined4 *)(unsigned)((int)puVar10 + -0xf4);
        *(undefined4 *)(unsigned)(ar7 + 3) = *(undefined4 *)(unsigned)((int)puVar10 + -0xf8);
        *(undefined4 *)(unsigned)((int)ar7 + 0x14) = *(undefined4 *)(unsigned)((int)puVar10 + -0xfc);
        *(undefined4 *)(unsigned)(ar7 + 2) = *(undefined4 *)(unsigned)((int)puVar10 + -0x100);
        *(undefined4 *)(unsigned)((int)ar7 + 0xc) = *(undefined4 *)(unsigned)((int)puVar10 + -0x110);
        *(undefined4 *)(unsigned)(ar7 + 1) = *(undefined4 *)(unsigned)((int)puVar10 + -0x114);
        puVar5 = (undefined8 *)(unsigned)((int)ar7 + 4);
        *(undefined4 *)(unsigned)puVar5 = *(undefined4 *)(unsigned)puVar9;
      }
      else {
        ar7[3] = *(undefined8 *)(unsigned)((int)puVar10 + -0xf4);
        ar7[2] = *(undefined8 *)(unsigned)((int)puVar10 + -0xf8);
        ar7[1] = *(undefined8 *)(unsigned)((int)puVar10 + -0xfc);
        *ar7 = *(undefined8 *)(unsigned)((int)puVar10 + -0x100);
        ar7[-1] = *(undefined8 *)(unsigned)((int)puVar10 + -0x110);
        ar7[-2] = *(undefined8 *)(unsigned)((int)puVar10 + -0x114);
        puVar5 = ar7 + -3;
        *puVar5 = *puVar9;
      }
      *(undefined4 *)(unsigned)((int)puVar5 + -4) = 0xe0000000;
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(unsigned)(puVar5 + 7) = *(undefined4 *)(unsigned)((int)puVar10 + -0xcc);
        *(undefined4 *)(unsigned)((int)puVar5 + 0x34) = *(undefined4 *)(unsigned)((int)puVar10 + -0xd0);
        *(undefined4 *)(unsigned)(puVar5 + 6) = *(undefined4 *)(unsigned)((int)puVar10 + -0xd4);
        *(undefined4 *)(unsigned)((int)puVar5 + 0x2c) = *(undefined4 *)(unsigned)((int)puVar10 + -0xd8);
        *(undefined4 *)(unsigned)(puVar5 + 5) = *(undefined4 *)(unsigned)((int)puVar10 + -0xe8);
        *(undefined4 *)(unsigned)((int)puVar5 + 0x24) = *(undefined4 *)(unsigned)((int)puVar10 + -0xec);
        puVar5 = puVar5 + 4;
        *(undefined4 *)(unsigned)puVar5 = *(undefined4 *)(unsigned)((int)puVar10 + -0xf0);
      }
      else {
        *(undefined8 *)(unsigned)((int)puVar5 + 0x34) = *(undefined8 *)(unsigned)((int)puVar10 + -0xcc);
        *(undefined8 *)(unsigned)((int)puVar5 + 0x2c) = *(undefined8 *)(unsigned)((int)puVar10 + -0xd0);
        *(undefined8 *)(unsigned)((int)puVar5 + 0x24) = *(undefined8 *)(unsigned)((int)puVar10 + -0xd4);
        *(undefined8 *)(unsigned)((int)puVar5 + 0x1c) = *(undefined8 *)(unsigned)((int)puVar10 + -0xd8);
        *(undefined8 *)(unsigned)((int)puVar5 + 0x14) = *(undefined8 *)(unsigned)((int)puVar10 + -0xe8);
        *(undefined8 *)(unsigned)((int)puVar5 + 0xc) = *(undefined8 *)(unsigned)((int)puVar10 + -0xec);
        puVar5 = (undefined8 *)(unsigned)((int)puVar5 + 4);
        *puVar5 = *(undefined8 *)(unsigned)((int)puVar10 + -0xf0);
      }
      *(undefined4 *)(unsigned)((int)puVar5 + -4) = 0xe0000000;
      if (iVar3 != 3) {
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)(unsigned)(puVar5 + 7) = *(undefined4 *)(unsigned)((int)puVar10 + -0x7c);
          *(undefined4 *)(unsigned)((int)puVar5 + 0x34) = *(undefined4 *)(unsigned)((int)puVar10 + -0x80);
          *(undefined4 *)(unsigned)(puVar5 + 6) = *(undefined4 *)(unsigned)((int)puVar10 + -0x84);
          *(undefined4 *)(unsigned)((int)puVar5 + 0x2c) = *(undefined4 *)(unsigned)((int)puVar10 + -0x88);
          *(undefined4 *)(unsigned)(puVar5 + 5) = *(undefined4 *)(unsigned)((int)puVar10 + -0x98);
          *(undefined4 *)(unsigned)((int)puVar5 + 0x24) = *(undefined4 *)(unsigned)((int)puVar10 + -0x9c);
          puVar5 = puVar5 + 4;
          *(undefined4 *)(unsigned)puVar5 = *(undefined4 *)(unsigned)((int)puVar10 + -0xa0);
        }
        else {
          *(undefined8 *)(unsigned)((int)puVar5 + 0x34) = *(undefined8 *)(unsigned)((int)puVar10 + -0x7c);
          *(undefined8 *)(unsigned)((int)puVar5 + 0x2c) = *(undefined8 *)(unsigned)((int)puVar10 + -0x80);
          *(undefined8 *)(unsigned)((int)puVar5 + 0x24) = *(undefined8 *)(unsigned)((int)puVar10 + -0x84);
          *(undefined8 *)(unsigned)((int)puVar5 + 0x1c) = *(undefined8 *)(unsigned)((int)puVar10 + -0x88);
          *(undefined8 *)(unsigned)((int)puVar5 + 0x14) = *(undefined8 *)(unsigned)((int)puVar10 + -0x98);
          *(undefined8 *)(unsigned)((int)puVar5 + 0xc) = *(undefined8 *)(unsigned)((int)puVar10 + -0x9c);
          puVar5 = (undefined8 *)(unsigned)((int)puVar5 + 4);
          *puVar5 = *(undefined8 *)(unsigned)((int)puVar10 + -0xa0);
        }
        *(undefined4 *)(unsigned)((int)puVar5 + -4) = 0xe0000000;
      }
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(unsigned)(puVar5 + 7) = *(undefined4 *)(unsigned)((int)puVar10 + -0xa4);
        *(undefined4 *)(unsigned)((int)puVar5 + 0x34) = *(undefined4 *)(unsigned)((int)puVar10 + -0xa8);
        *(undefined4 *)(unsigned)(puVar5 + 6) = *(undefined4 *)(unsigned)((int)puVar10 + -0xac);
        *(undefined4 *)(unsigned)((int)puVar5 + 0x2c) = *(undefined4 *)(unsigned)((int)puVar10 + -0xb0);
        *(undefined4 *)(unsigned)(puVar5 + 5) = *(undefined4 *)(unsigned)((int)puVar10 + -0xc0);
        *(undefined4 *)(unsigned)((int)puVar5 + 0x24) = *(undefined4 *)(unsigned)((int)puVar10 + -0xc4);
        puVar5 = puVar5 + 4;
        *(undefined4 *)(unsigned)puVar5 = *(undefined4 *)(unsigned)((int)puVar10 + -200);
      }
      else {
        *(undefined8 *)(unsigned)((int)puVar5 + 0x34) = *(undefined8 *)(unsigned)((int)puVar10 + -0xa4);
        *(undefined8 *)(unsigned)((int)puVar5 + 0x2c) = *(undefined8 *)(unsigned)((int)puVar10 + -0xa8);
        *(undefined8 *)(unsigned)((int)puVar5 + 0x24) = *(undefined8 *)(unsigned)((int)puVar10 + -0xac);
        *(undefined8 *)(unsigned)((int)puVar5 + 0x1c) = *(undefined8 *)(unsigned)((int)puVar10 + -0xb0);
        *(undefined8 *)(unsigned)((int)puVar5 + 0x14) = *(undefined8 *)(unsigned)((int)puVar10 + -0xc0);
        *(undefined8 *)(unsigned)((int)puVar5 + 0xc) = *(undefined8 *)(unsigned)((int)puVar10 + -0xc4);
        puVar5 = (undefined8 *)(unsigned)((int)puVar5 + 4);
        *puVar5 = *(undefined8 *)(unsigned)((int)puVar10 + -200);
      }
      *(undefined4 *)(unsigned)((int)puVar5 + -4) = 0xf0000000;
      ar7 = (undefined8 *)(unsigned)((int)puVar5 + 0x1c);
      (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) + iVar3;
    }
  }
  return ar7;
}

__asm__(".globl _FUN_8c22e684\n.set _FUN_8c22e684, _FUN_8c22e684_def\n");
