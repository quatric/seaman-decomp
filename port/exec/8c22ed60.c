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
undefined8 * FUN_8c22ed60_def(double *ar4,double *ar5,double *ar6,undefined8 *ar7)

{
  ring[rp++ & 255] = "FUN_8c22ed60";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 332; for (int i_ = 0; i_ < 332; i_++) z_[i_] = 0; }
  int iVar1;
  undefined8 *puVar2;
  double *pdVar3;
  uint uVar4;
  double *pdVar5;
  int iVar6;
  int iVar7;
  double *pdVar8;
  undefined8 *puVar9;
  undefined4 *puVar10;
  undefined1 *puVar11;
  undefined8 in_dr0 = 0;
  double dVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  double dVar17;
  double dVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined4 uVar21;
  double in_dr4 = 0;
  double dVar22;
  double dVar23;
  double in_dr6 = 0;
  float fVar25;
  double in_dr8 = 0;
  double dVar26;
  double dVar27;
  undefined4 uVar28;
  undefined8 in_dr10 = 0;
  double dVar29;
  double dVar30;
  float fVar31;
  undefined8 in_dr12 = 0;
  float fVar32;
  undefined8 in_dr14 = 0;
  double dVar33;
  float fVar34;
  double in_xd0 = 0;
  double in_xd2 = 0;
  double dVar35;
  double dVar36;
  double in_xd4 = 0;
  double dVar37;
  double dVar38;
  double in_xd6 = 0;
  double in_xd8 = 0;
  double in_xd10 = 0;
  double dVar39;
  double in_xd12 = 0;
  bool bVar40;
  int iVar41;
  int iVar42;
  int iVar43;
  int iVar44;
  char in_FPSCR_PR = 0;
  char in_FPSCR_SZ = 0;
  undefined4 uVar24;
  
  if (in_FPSCR_SZ == '\0') {
    puVar10 = &(*(undefined4 *)(fr0_ - 0x18));
    *(ulonglong *)(unsigned)((undefined1 *)(fr0_ - 0x1c)) = CONCAT44((int)((ulonglong)in_dr14 >> 0x20),((undefined1 *)(fr0_ - 0x1c)));
  }
  else {
    puVar10 = (undefined4 *)(unsigned)((undefined1 *)(fr0_ - 0x1c));
  }
  iVar1 = (int)(int)0xfffffedc;
  if (in_FPSCR_SZ == '\0') {
    *(int *)(unsigned)((int)puVar10 + -4) = (int)in_dr12;
    puVar11 = (undefined1 *)(unsigned)((int)puVar10 + -8);
    *(int *)(unsigned)((int)puVar10 + -8) = (int)((ulonglong)in_dr12 >> 0x20);
  }
  else {
    *(double *)(unsigned)((int)puVar10 + -8) = in_xd12;
    puVar11 = (undefined1 *)(unsigned)((int)puVar10 + -0x10);
    *(undefined8 *)(unsigned)((int)puVar10 + -0x10) = in_dr12;
  }
  if ((*(undefined4 *)(unsigned)0x8c4aa4f0 & 0x10000) == 0) {
    if (in_FPSCR_SZ == '\0') {
      uVar28 = *(undefined4 *)(unsigned)0x8c4aa4a8;
      in_dr10 = CONCAT44((int)((ulonglong)in_dr10 >> 0x20),uVar28);
      dVar17 = CONCAT44D(*(undefined4 *)(unsigned)0x8c4aa4e0,*(undefined4 *)(unsigned)0x8c4aa4dc);
      dVar39 = CONCAT44D(uVar28,(int)in_dr12);
    }
    else {
      dVar39 = *(undefined4 *)(unsigned)0x8c4aa4a8;
      dVar17 = *(undefined4 *)(unsigned)0x8c4aa4e0;
      in_xd2 = *(undefined4 *)(unsigned)0x8c4aa4dc;
      uVar28 = (undefined4)in_dr10;
      in_xd10 = dVar39;
    }
    if (in_FPSCR_PR == '\0') {
      dVar39 = CONCAT44D(F32HI(dVar39) *
                                F32HI(dVar17),SUB84(dVar39,0));
    }
    else {
      dVar39 = dVar39 * dVar17;
    }
    if (in_FPSCR_SZ == '\0') {
      in_xd10 = CONCAT44D(uVar28,(int)in_dr14);
    }
    if (in_FPSCR_PR == '\0') {
      dVar33 = CONCAT44D(F32HI(in_xd10) * F32LO(dVar17),
                                SUB84(in_xd10,0));
    }
    else {
      dVar33 = in_xd10 * dVar17;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar39 = CONCAT44D((int)(D2U(dVar39) >> 0x20),
                                *(undefined4 *)(unsigned)((unsigned)0x8c4aa4a8 + 0xc));
    }
    else {
      in_xd12 = *(double *)(unsigned)((unsigned)0x8c4aa4a8 + 0xc);
    }
    uVar28 = (undefined4)((ulonglong)in_dr0 >> 0x20);
    uVar24 = (undefined4)((ulonglong)in_dr10 >> 0x20);
    fVar32 = F32HI(dVar39);
    fVar34 = F32HI(dVar33);
    if (in_FPSCR_PR == '\0') {
      dVar12 = CONCAT44D(uVar28,1.0 / fVar32);
      dVar29 = CONCAT44D(uVar24,1.0 / fVar34);
    }
    else {
      dVar12 = CONCAT44D(uVar28,0x3f800000) / dVar39;
      dVar29 = CONCAT44D(uVar24,0x3f800000) / dVar33;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar17 = (double)(ulonglong)*(uint *)(unsigned)(0x8c4aa4a8 + 2);
    }
    else {
      in_xd2 = ((undefined1 *)(unsigned)2)[0x8c4aa4a8];
    }
    uVar28 = SUB84(dVar17,0);
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(unsigned)(puVar11 + iVar1) = uVar28;
      uVar28 = *(undefined4 *)(unsigned)((int)ar4 + 4);
    }
    else {
      *(double *)(unsigned)(puVar11 + iVar1) = in_xd2;
      in_xd2 = *(double *)(unsigned)((int)ar4 + 4);
    }
    pdVar8 = (double *)(unsigned)(puVar11 + 0xac + iVar1);
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(unsigned)pdVar8 = uVar28;
      *(undefined4 *)(unsigned)((int)pdVar8 + 4) = *(undefined4 *)(unsigned)(ar4 + 1);
      *(undefined4 *)(unsigned)(pdVar8 + 1) = *(undefined4 *)(unsigned)((int)ar4 + 0xc);
      *(undefined4 *)(unsigned)((int)pdVar8 + 0x14) = *(undefined4 *)(unsigned)ar4;
      dVar17 = CONCAT44D(*(undefined4 *)(unsigned)ar4,*(undefined4 *)(unsigned)((int)ar4 + 4));
    }
    else {
      *pdVar8 = in_xd2;
      *(double *)(unsigned)((int)pdVar8 + 4) = ar4[1];
      pdVar8[1] = *(double *)(unsigned)((int)ar4 + 0xc);
      *(double *)(unsigned)((int)pdVar8 + 0x14) = *ar4;
      in_xd2 = *(double *)(unsigned)((int)ar4 + 4);
      dVar17 = *ar4;
    }
    fVar31 = F32LO(dVar39);
    fVar15 = F32LO(dVar29);
    if (in_FPSCR_PR == '\0') {
      fVar13 = (F32LO(dVar17) - fVar31) * F32HI(dVar17) * fVar15;
    }
    else {
      fVar13 = SUB84((dVar17 - dVar39) * (dVar17 - dVar39) * dVar29,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(unsigned)((int)pdVar8 + 0xc) = fVar13;
      dVar17 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 1),*(undefined4 *)(unsigned)(puVar11 + iVar1));
    }
    else {
      *(double *)(unsigned)((int)pdVar8 + 0xc) = in_xd2;
      dVar17 = ar4[1];
      in_xd2 = *(double *)(unsigned)(puVar11 + iVar1);
    }
    if (in_FPSCR_PR == '\0') {
      dVar17 = CONCAT44D(F32HI(dVar17) - F32LO(dVar17),SUB84(dVar17,0)
                               );
    }
    else {
      dVar17 = dVar17 - dVar17;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar17 = CONCAT44D((int)(D2U(dVar17) >> 0x20),*(undefined4 *)(unsigned)ar4);
    }
    else {
      in_xd2 = *ar4;
    }
    fVar13 = F32LO(dVar12);
    if (in_FPSCR_PR == '\0') {
      dVar17 = CONCAT44D(F32HI(dVar17) * F32LO(dVar17) * fVar13,
                                SUB84(dVar17,0));
    }
    else {
      dVar17 = dVar17 * dVar17 * dVar12;
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)(unsigned)(pdVar8 + 2) = (int)(D2U(dVar17) >> 0x20);
      *(undefined4 *)(unsigned)(pdVar8 + 4) = *(undefined4 *)(unsigned)(ar4 + 2);
      *(undefined4 *)(unsigned)((int)pdVar8 + 0x24) = *(undefined4 *)(unsigned)((int)ar4 + 0x14);
      *(int *)(unsigned)(pdVar8 + 3) = (int)((ulonglong)in_dr4 >> 0x20);
      *(int *)(unsigned)((int)pdVar8 + 0x1c) = SUB84(in_dr4,0);
      *(undefined4 *)(unsigned)(pdVar8 + 5) = *(undefined4 *)(unsigned)((int)ar5 + 4);
      *(undefined4 *)(unsigned)((int)pdVar8 + 0x2c) = *(undefined4 *)(unsigned)(ar5 + 1);
      *(undefined4 *)(unsigned)(pdVar8 + 6) = *(undefined4 *)(unsigned)((int)ar5 + 0xc);
      *(undefined4 *)(unsigned)((int)pdVar8 + 0x3c) = *(undefined4 *)(unsigned)ar5;
      dVar17 = CONCAT44D(*(undefined4 *)(unsigned)ar5,*(undefined4 *)(unsigned)((int)ar5 + 4));
    }
    else {
      pdVar8[2] = dVar17;
      pdVar8[4] = ar4[2];
      *(undefined8 *)(unsigned)((int)pdVar8 + 0x24) = *(undefined8 *)(unsigned)((int)ar4 + 0x14);
      pdVar8[3] = in_dr4;
      *(double *)(unsigned)((int)pdVar8 + 0x1c) = in_xd4;
      pdVar8[5] = *(double *)(unsigned)((int)ar5 + 4);
      *(double *)(unsigned)((int)pdVar8 + 0x2c) = ar5[1];
      pdVar8[6] = *(double *)(unsigned)((int)ar5 + 0xc);
      *(double *)(unsigned)((int)pdVar8 + 0x3c) = *ar5;
      in_xd2 = *(double *)(unsigned)((int)ar5 + 4);
      dVar17 = *ar5;
    }
    if (in_FPSCR_PR == '\0') {
      fVar14 = (F32LO(dVar17) - fVar31) * F32HI(dVar17) * fVar15;
    }
    else {
      fVar14 = SUB84((dVar17 - dVar39) * (dVar17 - dVar39) * dVar29,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(unsigned)((int)pdVar8 + 0x34) = fVar14;
      dVar17 = CONCAT44D(*(undefined4 *)(unsigned)(ar5 + 1),*(undefined4 *)(unsigned)(puVar11 + iVar1));
    }
    else {
      *(double *)(unsigned)((int)pdVar8 + 0x34) = in_xd2;
      dVar17 = ar5[1];
      in_xd2 = *(double *)(unsigned)(puVar11 + iVar1);
    }
    if (in_FPSCR_PR == '\0') {
      dVar17 = CONCAT44D(F32HI(dVar17) - F32LO(dVar17),SUB84(dVar17,0)
                               );
    }
    else {
      dVar17 = dVar17 - dVar17;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar17 = CONCAT44D((int)(D2U(dVar17) >> 0x20),*(undefined4 *)(unsigned)ar5);
    }
    else {
      in_xd2 = *ar5;
    }
    if (in_FPSCR_PR == '\0') {
      dVar17 = CONCAT44D(F32HI(dVar17) * F32LO(dVar17) * fVar13,
                                SUB84(dVar17,0));
    }
    else {
      dVar17 = dVar17 * dVar17 * dVar12;
    }
    uVar28 = (undefined4)((ulonglong)in_dr6 >> 0x20);
    if (in_FPSCR_SZ == '\0') {
      *(int *)(unsigned)(pdVar8 + 7) = (int)(D2U(dVar17) >> 0x20);
      *(undefined4 *)(unsigned)(pdVar8 + 9) = *(undefined4 *)(unsigned)(ar5 + 2);
      *(undefined4 *)(unsigned)((int)pdVar8 + 0x4c) = *(undefined4 *)(unsigned)((int)ar5 + 0x14);
      *(undefined4 *)(unsigned)(pdVar8 + 8) = uVar28;
      *(int *)(unsigned)((int)pdVar8 + 0x44) = SUB84(in_dr6,0);
      *(undefined4 *)(unsigned)(pdVar8 + 10) = *(undefined4 *)(unsigned)((int)ar6 + 4);
      *(undefined4 *)(unsigned)((int)pdVar8 + 0x54) = *(undefined4 *)(unsigned)(ar6 + 1);
      *(undefined4 *)(unsigned)(pdVar8 + 0xb) = *(undefined4 *)(unsigned)((int)ar6 + 0xc);
      *(undefined4 *)(unsigned)((int)pdVar8 + 100) = *(undefined4 *)(unsigned)ar6;
      dVar17 = CONCAT44D(*(undefined4 *)(unsigned)ar6,*(undefined4 *)(unsigned)((int)ar6 + 4));
    }
    else {
      pdVar8[7] = dVar17;
      pdVar8[9] = ar5[2];
      *(undefined8 *)(unsigned)((int)pdVar8 + 0x4c) = *(undefined8 *)(unsigned)((int)ar5 + 0x14);
      pdVar8[8] = in_dr6;
      *(double *)(unsigned)((int)pdVar8 + 0x44) = in_xd6;
      pdVar8[10] = *(double *)(unsigned)((int)ar6 + 4);
      *(double *)(unsigned)((int)pdVar8 + 0x54) = ar6[1];
      pdVar8[0xb] = *(double *)(unsigned)((int)ar6 + 0xc);
      *(double *)(unsigned)((int)pdVar8 + 100) = *ar6;
      in_xd2 = *(double *)(unsigned)((int)ar6 + 4);
      dVar17 = *ar6;
    }
    if (in_FPSCR_PR == '\0') {
      fVar15 = (F32LO(dVar17) - fVar31) * F32HI(dVar17) * fVar15;
    }
    else {
      fVar15 = SUB84((dVar17 - dVar39) * (dVar17 - dVar39) * dVar29,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(unsigned)((int)pdVar8 + 0x5c) = fVar15;
      dVar17 = CONCAT44D(*(undefined4 *)(unsigned)(ar6 + 1),*(undefined4 *)(unsigned)(puVar11 + iVar1));
    }
    else {
      *(double *)(unsigned)((int)pdVar8 + 0x5c) = in_xd2;
      dVar17 = ar6[1];
      in_xd2 = *(double *)(unsigned)(puVar11 + iVar1);
    }
    if (in_FPSCR_PR == '\0') {
      dVar17 = CONCAT44D(F32HI(dVar17) - F32LO(dVar17),SUB84(dVar17,0)
                               );
    }
    else {
      dVar17 = dVar17 - dVar17;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar17 = CONCAT44D((int)(D2U(dVar17) >> 0x20),*(undefined4 *)(unsigned)ar6);
    }
    else {
      in_xd2 = *ar6;
    }
    if (in_FPSCR_PR == '\0') {
      dVar12 = CONCAT44D(F32HI(dVar17) * F32LO(dVar17) * fVar13,
                                SUB84(dVar17,0));
    }
    else {
      dVar12 = dVar17 * dVar17 * dVar12;
    }
    uVar24 = (undefined4)(D2U(dVar12) >> 0x20);
    uVar21 = (undefined4)((ulonglong)in_dr8 >> 0x20);
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(unsigned)(pdVar8 + 0xc) = uVar24;
      *(undefined4 *)(unsigned)(pdVar8 + 0xe) = *(undefined4 *)(unsigned)(ar6 + 2);
      dVar12 = CONCAT44D(uVar24,*(undefined4 *)(unsigned)((int)ar6 + 0x14));
      *(undefined4 *)(unsigned)((int)pdVar8 + 0x74) = *(undefined4 *)(unsigned)((int)ar6 + 0x14);
      *(undefined4 *)(unsigned)(pdVar8 + 0xd) = uVar21;
      *(int *)(unsigned)((int)pdVar8 + 0x6c) = SUB84(in_dr8,0);
      uVar24 = *(undefined4 *)(unsigned)((int)pdVar8 + 0x3c);
      in_dr8 = CONCAT44D(uVar21,*(undefined4 *)(unsigned)(pdVar8 + 2));
      dVar22 = CONCAT44D(uVar24,fVar13);
      dVar17 = CONCAT44D(uVar24,SUB84(in_dr4,0));
    }
    else {
      pdVar8[0xc] = dVar12;
      pdVar8[0xe] = ar6[2];
      in_xd2 = *(double *)(unsigned)((int)ar6 + 0x14);
      *(double *)(unsigned)((int)pdVar8 + 0x74) = in_xd2;
      pdVar8[0xd] = in_dr8;
      *(double *)(unsigned)((int)pdVar8 + 0x6c) = in_xd8;
      dVar22 = *(double *)(unsigned)((int)pdVar8 + 0x3c);
      in_xd8 = pdVar8[2];
      uVar24 = (undefined4)(D2U(dVar22) >> 0x20);
      dVar17 = dVar22;
    }
    if (in_FPSCR_PR == '\0') {
      dVar22 = CONCAT44D(F32HI(dVar22) * F32LO(in_dr8),SUB84(dVar22,0)
                               );
    }
    else {
      dVar22 = dVar22 * in_dr8;
    }
    if (in_FPSCR_SZ == '\0') {
      uVar21 = *(undefined4 *)(unsigned)(pdVar8 + 7);
      dVar17 = CONCAT44D(uVar24,uVar21);
      in_dr6 = CONCAT44D(uVar28,*(undefined4 *)(unsigned)((int)pdVar8 + 0x14));
      dVar12 = CONCAT44D((int)(D2U(dVar12) >> 0x20),uVar21);
    }
    else {
      in_xd2 = pdVar8[7];
      in_xd6 = *(double *)(unsigned)((int)pdVar8 + 0x14);
      uVar21 = SUB84(dVar17,0);
      in_xd4 = in_xd2;
    }
    if (in_FPSCR_PR == '\0') {
      fVar15 = F32LO(dVar12) * F32LO(in_dr6);
    }
    else {
      fVar15 = SUB84(dVar12 * in_dr6,0);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar26 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar8 + 0x34),SUB84(in_dr8,0));
      dVar12 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar8 + 0xc),SUB84(in_dr6,0));
      dVar18 = CONCAT44D((int)(D2U(dVar17) >> 0x20),fVar15);
    }
    else {
      dVar26 = *(double *)(unsigned)((int)pdVar8 + 0x34);
      dVar12 = *(double *)(unsigned)((int)pdVar8 + 0xc);
      dVar18 = dVar17;
    }
    fVar15 = F32HI(dVar12);
    if (in_FPSCR_PR == '\0') {
      dVar18 = CONCAT44D(F32HI(dVar18) * fVar15,SUB84(dVar18,0));
    }
    else {
      dVar18 = dVar18 * dVar12;
    }
    dVar37 = in_xd4;
    if (in_FPSCR_SZ == '\0') {
      dVar22 = CONCAT44D((int)(D2U(dVar22) >> 0x20),uVar21);
      dVar37 = in_xd0;
    }
    if (in_FPSCR_PR == '\0') {
      dVar22 = CONCAT44D(F32HI(dVar22) - F32LO(dVar18),SUB84(dVar22,0)
                               );
    }
    else {
      dVar22 = dVar22 - dVar18;
    }
    uVar28 = (undefined4)(D2U(dVar26) >> 0x20);
    dVar35 = dVar26;
    if (in_FPSCR_SZ == '\0') {
      dVar18 = CONCAT44D((int)(D2U(dVar18) >> 0x20),uVar28);
      dVar35 = in_xd2;
    }
    if (in_FPSCR_PR == '\0') {
      dVar22 = CONCAT44D((int)(D2U(dVar22) >> 0x20),F32LO(dVar22) * fVar15);
      fVar15 = F32LO(dVar18) * F32LO(dVar12) - F32HI(dVar18);
    }
    else {
      dVar22 = dVar22 * dVar12;
      fVar15 = SUB84(dVar18 * dVar12 - dVar18 * dVar12,0);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar18 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar8 + 0xc),fVar15);
    }
    else {
      dVar18 = pdVar8[0xc];
    }
    if (in_FPSCR_PR == '\0') {
      dVar18 = CONCAT44D(F32HI(dVar18) * F32LO(dVar18),SUB84(dVar18,0)
                               );
    }
    else {
      dVar18 = dVar18 * dVar18;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar18 = CONCAT44D((int)(D2U(dVar18) >> 0x20),*(undefined4 *)(unsigned)((int)pdVar8 + 0x5c)
                               );
    }
    else {
      dVar35 = *(double *)(unsigned)((int)pdVar8 + 0x5c);
    }
    if (in_FPSCR_PR == '\0') {
      dVar18 = CONCAT44D(F32HI(dVar22) * F32LO(dVar18) +
                                F32HI(dVar18),SUB84(dVar18,0));
    }
    dVar23 = dVar26;
    if (in_FPSCR_SZ == '\0') {
      dVar18 = CONCAT44D((int)(D2U(dVar18) >> 0x20),uVar28);
      dVar23 = dVar35;
    }
    if (in_FPSCR_PR == '\0') {
      fVar15 = F32LO(dVar18) * F32LO(dVar26);
      dVar18 = CONCAT44D((int)(D2U(dVar18) >> 0x20),fVar15);
      fVar15 = F32LO(dVar22) - fVar15;
    }
    else {
      dVar18 = dVar18 * dVar26;
      fVar15 = SUB84(dVar22 - dVar18,0);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar22 = CONCAT44D(fVar15,*(undefined4 *)(unsigned)((int)pdVar8 + 100));
      dVar35 = dVar37;
    }
    else {
      dVar35 = *(double *)(unsigned)((int)pdVar8 + 100);
      dVar22 = dVar37;
    }
    if (in_FPSCR_PR == '\0') {
      dVar18 = (double)((ulonglong)
                        (uint)((F32HI(dVar22) * F32LO(dVar22) +
                               F32HI(dVar18)) *
                              F32HI(dVar29)) << 0x20);
    }
    else {
      dVar18 = (double)(D2U(dVar18) & 0xffffffff00000000) * dVar29;
    }
    if (in_FPSCR_PR == '\0' && F32HI(dVar18) < SUB84(dVar18,0)) {
      iVar6 = 0;
      puVar9 = (undefined8 *)(unsigned)(puVar11 + iVar1 + 0xc);
      iVar44 = 2;
      for (iVar7 = 0; iVar7 < 3; iVar7 = iVar7 + 1) {
        if (in_FPSCR_SZ == '\0') {
          uVar19 = CONCAT44(*(undefined4 *)(unsigned)((int)pdVar8 + iVar44 * 0x28 + 0x14),0x3f800000);
        }
        else {
          uVar19 = *(undefined8 *)(unsigned)((int)pdVar8 + iVar44 * 0x28 + 0x14);
        }
        puVar2 = (undefined8 *)(unsigned)((int)pdVar8 + iVar7 * 0x28 + 0x14);
        if (in_FPSCR_SZ == '\0') {
          uVar20 = CONCAT44(*(undefined4 *)(unsigned)puVar2,(float)uVar19);
        }
        else {
          uVar20 = *puVar2;
        }
        fVar15 = (float)uVar20;
        if (((in_FPSCR_PR == '\0' && (float)uVar19 < F32HI(uVar19)) ^ 1) !=
            -((in_FPSCR_PR == '\0' && fVar15 < F32HI(uVar20)) - 1)) {
          if (in_FPSCR_SZ == '\0') {
            fVar15 = *(float *)(unsigned)((int)pdVar8 + iVar44 * 0x28 + 0x14);
            dVar22 = CONCAT44D((int)(D2U(dVar22) >> 0x20),
                                      *(undefined4 *)(unsigned)((int)pdVar8 + iVar7 * 0x28 + 0x14));
            fVar13 = fVar15;
            dVar17 = CONCAT44D(fVar15,SUB84(dVar17,0));
          }
          else {
            dVar23 = *(double *)(unsigned)((int)pdVar8 + iVar44 * 0x28 + 0x14);
            dVar35 = *(double *)(unsigned)((int)pdVar8 + iVar7 * 0x28 + 0x14);
            fVar13 = F32HI(dVar23);
            dVar17 = dVar23;
          }
          dVar18 = CONCAT44D(0x3f800000,-fVar15);
          if (in_FPSCR_PR == '\0') {
            dVar18 = CONCAT44D(0x3f800000,-fVar15 + 1.0);
            dVar22 = CONCAT44D((int)(D2U(dVar22) >> 0x20),F32LO(dVar22) - fVar13);
          }
          else {
            dVar18 = dVar18 + dVar18;
            dVar22 = dVar22 - dVar17;
          }
          if (in_FPSCR_SZ == '\0') {
            dVar17 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar8 + iVar44 * 0x28 + 0xc),
                                      SUB84(dVar17,0));
            dVar12 = CONCAT44D(SUB84(dVar18,0),SUB84(dVar12,0));
          }
          else {
            dVar17 = *(double *)(unsigned)((int)pdVar8 + iVar44 * 0x28 + 0xc);
            dVar12 = dVar23;
          }
          if (in_FPSCR_PR == '\0') {
            dVar12 = CONCAT44D(F32HI(dVar12) / F32LO(dVar22),
                                      SUB84(dVar12,0));
          }
          else {
            dVar12 = dVar12 / dVar22;
          }
          fVar15 = F32HI(dVar17);
          if (in_FPSCR_SZ == '\0') {
            dVar18 = CONCAT44D((int)(D2U(dVar18) >> 0x20),
                                      *(undefined4 *)(unsigned)((int)pdVar8 + iVar7 * 0x28 + 0xc));
            dVar22 = (double)(ulonglong)(uint)fVar15;
          }
          else {
            dVar23 = *(double *)(unsigned)((int)pdVar8 + iVar7 * 0x28 + 0xc);
            dVar35 = dVar17;
          }
          if (in_FPSCR_PR == '\0') {
            dVar18 = CONCAT44D((int)(D2U(dVar18) >> 0x20),F32LO(dVar18) - fVar15);
          }
          else {
            dVar18 = dVar18 - dVar17;
          }
          uVar28 = (undefined4)(D2U(dVar12) >> 0x20);
          if (in_FPSCR_SZ == '\0') {
            dVar22 = CONCAT44D(uVar28,SUB84(dVar22,0));
            dVar17 = CONCAT44D(fVar31,*(undefined4 *)(unsigned)(pdVar8 + iVar44 * 5 + 2));
          }
          else {
            in_xd4 = pdVar8[iVar44 * 5 + 2];
            dVar22 = dVar12;
            dVar17 = in_xd12;
          }
          if (in_FPSCR_PR == '\0') {
            dVar22 = (double)(ulonglong)
                             (uint)(F32HI(dVar22) * F32LO(dVar18) +
                                   SUB84(dVar22,0));
          }
          if (in_FPSCR_SZ == '\0') {
            dVar18 = CONCAT44D((int)(D2U(dVar18) >> 0x20),
                                      *(undefined4 *)(unsigned)(pdVar8 + iVar7 * 5 + 2));
            dVar22 = CONCAT44D(fVar34,SUB84(dVar22,0));
          }
          else {
            dVar23 = pdVar8[iVar7 * 5 + 2];
            dVar22 = dVar33;
          }
          if (in_FPSCR_PR == '\0') {
            dVar18 = CONCAT44D((int)(D2U(dVar18) >> 0x20),
                                      F32LO(dVar18) - F32LO(dVar17));
            dVar17 = CONCAT44D(F32HI(dVar22) * F32LO(dVar22) +
                                      F32HI(dVar17),SUB84(dVar17,0));
          }
          else {
            dVar18 = dVar18 - dVar17;
          }
          if (in_FPSCR_SZ == '\0') {
            uVar24 = SUB84(dVar17,0);
            dVar17 = CONCAT44D((int)(D2U(dVar17) >> 0x20),
                                      *(undefined4 *)(unsigned)(puVar11 + iVar1));
            dVar37 = in_xd4;
            dVar22 = CONCAT44D(uVar28,uVar24);
            in_xd4 = dVar35;
          }
          else {
            dVar37 = *(double *)(unsigned)(puVar11 + iVar1);
            dVar22 = dVar12;
          }
          if (in_FPSCR_PR == '\0') {
            dVar22 = (double)(ulonglong)
                             (uint)(F32HI(dVar22) * F32LO(dVar18) +
                                   SUB84(dVar22,0));
          }
          dVar35 = dVar39;
          if (in_FPSCR_SZ == '\0') {
            dVar35 = CONCAT44D(fVar32,SUB84(dVar22,0));
          }
          if (in_FPSCR_PR == '\0') {
            dVar17 = CONCAT44D((int)(D2U(dVar17) >> 0x20),
                                      F32HI(dVar35) * F32LO(dVar35) +
                                      SUB84(dVar17,0));
          }
          dVar22 = dVar12;
          if (in_FPSCR_SZ == '\0') {
            dVar22 = CONCAT44D(uVar28,SUB84(dVar35,0));
          }
          pdVar3 = (double *)(unsigned)(puVar9 + iVar6 * 5);
          uVar24 = (undefined4)(D2U(dVar18) >> 0x20);
          if (in_FPSCR_SZ == '\0') {
            *(int *)(unsigned)pdVar3 = (int)(D2U(dVar17) >> 0x20);
            *(int *)(unsigned)((int)pdVar3 + 4) = SUB84(dVar17,0);
            *(undefined4 *)(unsigned)(pdVar3 + 1) = uVar24;
            dVar18 = CONCAT44D(uVar24,*(undefined4 *)(unsigned)(pdVar8 + iVar7 * 5 + 3));
            dVar17 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar8 + iVar44 * 5 + 3),SUB84(dVar17,0));
          }
          else {
            *pdVar3 = dVar17;
            *(double *)(unsigned)((int)pdVar3 + 4) = dVar37;
            pdVar3[1] = dVar18;
            dVar23 = pdVar8[iVar7 * 5 + 3];
            dVar17 = pdVar8[iVar44 * 5 + 3];
          }
          fVar15 = F32HI(dVar17);
          if (in_FPSCR_PR == '\0') {
            fVar13 = F32LO(dVar18) - fVar15;
          }
          else {
            fVar13 = SUB84(dVar18 - dVar17,0);
          }
          dVar18 = dVar17;
          if (in_FPSCR_SZ == '\0') {
            dVar18 = CONCAT44D(fVar15,fVar13);
          }
          fVar15 = F32HI(dVar22);
          if (in_FPSCR_PR == '\0') {
            dVar18 = CONCAT44D(fVar15 * F32LO(dVar18) + F32HI(dVar18),
                                      SUB84(dVar18,0));
          }
          uVar24 = (undefined4)(D2U(dVar18) >> 0x20);
          if (in_FPSCR_SZ == '\0') {
            *(undefined4 *)(unsigned)(pdVar3 + 3) = uVar24;
            dVar18 = CONCAT44D(uVar24,*(undefined4 *)(unsigned)((int)pdVar8 + iVar7 * 0x28 + 0x1c));
            dVar17 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar8 + iVar44 * 0x28 + 0x1c),
                                      SUB84(dVar17,0));
          }
          else {
            pdVar3[3] = dVar18;
            dVar23 = *(double *)(unsigned)((int)pdVar8 + iVar7 * 0x28 + 0x1c);
            dVar17 = *(double *)(unsigned)((int)pdVar8 + iVar44 * 0x28 + 0x1c);
          }
          fVar13 = F32HI(dVar17);
          if (in_FPSCR_PR == '\0') {
            fVar14 = F32LO(dVar18) - fVar13;
          }
          else {
            fVar14 = SUB84(dVar18 - dVar17,0);
          }
          dVar18 = dVar17;
          if (in_FPSCR_SZ == '\0') {
            dVar18 = CONCAT44D(fVar13,fVar14);
          }
          if (in_FPSCR_PR == '\0') {
            dVar18 = CONCAT44D(fVar15 * F32LO(dVar18) + F32HI(dVar18),
                                      SUB84(dVar18,0));
          }
          if (in_FPSCR_SZ == '\0') {
            *(int *)(unsigned)((int)pdVar3 + 0x1c) = (int)(D2U(dVar18) >> 0x20);
          }
          else {
            *(double *)(unsigned)((int)pdVar3 + 0x1c) = dVar18;
          }
          uVar4 = *(uint *)(unsigned)(pdVar8 + iVar44 * 5 + 4);
          fVar15 = (float)(uVar4 >> 0x18);
          dVar18 = dVar23;
          if (in_FPSCR_SZ == '\0') {
            dVar18 = CONCAT44D(fVar15,SUB84(dVar17,0));
          }
          if (in_FPSCR_PR == '\0' && fVar15 < 0.0) {
            fVar13 = (*(undefined1 *)(unsigned)0x8c22f0b8);
            if (in_FPSCR_SZ != '\0') {
              dVar23 = CONCAT44D((*(uint *)(unsigned)0x8c22f0bc),(*(undefined1 *)(unsigned)0x8c22f0b8));
              fVar13 = fVar15;
            }
            if (in_FPSCR_PR == '\0') {
              dVar18 = CONCAT44D(F32HI(dVar18) + fVar13,SUB84(dVar18,0))
              ;
            }
            else {
              dVar18 = dVar18 + (double)(ulonglong)(uint)fVar13;
            }
          }
          fVar15 = (float)(uVar4 >> 0x10 & 0xff);
          dVar17 = dVar23;
          if (in_FPSCR_SZ == '\0') {
            dVar18 = CONCAT44D((int)(D2U(dVar18) >> 0x20),fVar15);
            dVar17 = dVar37;
          }
          if (in_FPSCR_PR == '\0' && fVar15 < 0.0) {
            fVar13 = (*(undefined1 *)(unsigned)0x8c22f0b8);
            if (in_FPSCR_SZ != '\0') {
              dVar23 = CONCAT44D((*(uint *)(unsigned)0x8c22f0bc),(*(undefined1 *)(unsigned)0x8c22f0b8));
              fVar13 = fVar15;
            }
            if (in_FPSCR_PR == '\0') {
              dVar18 = CONCAT44D((int)(D2U(dVar18) >> 0x20),F32LO(dVar18) + fVar13);
            }
            else {
              dVar18 = dVar18 + (double)(ulonglong)(uint)fVar13;
            }
          }
          fVar15 = (float)(uVar4 >> 8 & 0xff);
          dVar37 = dVar23;
          if (in_FPSCR_SZ == '\0') {
            dVar12 = CONCAT44D(uVar28,fVar15);
            dVar37 = in_xd6;
          }
          if (in_FPSCR_PR != '\0' || 0.0 <= fVar15) {
            dVar27 = dVar37;
            if (in_FPSCR_SZ == '\0') {
              dVar27 = CONCAT44D(SUB84(dVar12,0),SUB84(dVar26,0));
            }
          }
          else {
            if (in_FPSCR_SZ == '\0') {
              dVar27 = CONCAT44D(SUB84(dVar12,0),SUB84(dVar26,0));
              fVar15 = (*(undefined1 *)(unsigned)0x8c22f0b8);
            }
            else {
              dVar23 = CONCAT44D((*(uint *)(unsigned)0x8c22f0bc),(*(undefined1 *)(unsigned)0x8c22f0b8));
              dVar27 = dVar37;
            }
            if (in_FPSCR_PR == '\0') {
              dVar27 = CONCAT44D(F32HI(dVar27) + fVar15,SUB84(dVar27,0))
              ;
            }
            else {
              dVar27 = dVar27 + (double)(ulonglong)(uint)fVar15;
            }
          }
          fVar15 = (float)(uVar4 & 0xff);
          dVar26 = dVar23;
          if (in_FPSCR_SZ == '\0') {
            dVar12 = CONCAT44D((int)(D2U(dVar12) >> 0x20),fVar15);
            dVar26 = dVar37;
          }
          uVar28 = (undefined4)(D2U(dVar27) >> 0x20);
          dVar37 = dVar26;
          if (in_FPSCR_PR != '\0' || 0.0 <= fVar15) {
            if (in_FPSCR_SZ == '\0') {
              dVar27 = CONCAT44D(uVar28,SUB84(dVar12,0));
              dVar37 = in_xd8;
            }
          }
          else {
            if (in_FPSCR_SZ == '\0') {
              dVar27 = CONCAT44D(uVar28,SUB84(dVar12,0));
              dVar37 = in_xd8;
              fVar15 = (*(undefined1 *)(unsigned)0x8c22f0b8);
            }
            else {
              dVar23 = CONCAT44D((*(uint *)(unsigned)0x8c22f0bc),(*(undefined1 *)(unsigned)0x8c22f0b8));
            }
            if (in_FPSCR_PR == '\0') {
              dVar27 = CONCAT44D((int)(D2U(dVar27) >> 0x20),F32LO(dVar27) + fVar15);
            }
            else {
              dVar27 = dVar27 + (double)(ulonglong)(uint)fVar15;
            }
          }
          uVar4 = *(uint *)(unsigned)(pdVar8 + iVar7 * 5 + 4);
          fVar15 = (float)(uVar4 >> 0x18);
          dVar35 = dVar23;
          if (in_FPSCR_SZ == '\0') {
            dVar12 = CONCAT44D((int)(D2U(dVar12) >> 0x20),fVar15);
            dVar35 = dVar26;
          }
          if (in_FPSCR_PR == '\0' && fVar15 < 0.0) {
            fVar13 = (*(undefined1 *)(unsigned)0x8c22f0b8);
            if (in_FPSCR_SZ != '\0') {
              dVar23 = CONCAT44D((*(uint *)(unsigned)0x8c22f0bc),(*(undefined1 *)(unsigned)0x8c22f0b8));
              fVar13 = fVar15;
            }
            if (in_FPSCR_PR == '\0') {
              dVar12 = CONCAT44D((int)(D2U(dVar12) >> 0x20),F32LO(dVar12) + fVar13);
            }
            else {
              dVar12 = dVar12 + (double)(ulonglong)(uint)fVar13;
            }
          }
          fVar15 = (float)(uVar4 >> 0x10 & 0xff);
          dVar30 = dVar23;
          if (in_FPSCR_SZ == '\0') {
            dVar30 = CONCAT44D(fVar15,SUB84(dVar29,0));
          }
          if (in_FPSCR_PR == '\0' && fVar15 < 0.0) {
            fVar13 = (*(undefined1 *)(unsigned)0x8c22f0b8);
            if (in_FPSCR_SZ != '\0') {
              dVar23 = CONCAT44D((*(uint *)(unsigned)0x8c22f0bc),(*(undefined1 *)(unsigned)0x8c22f0b8));
              fVar13 = fVar15;
            }
            if (in_FPSCR_PR == '\0') {
              dVar30 = CONCAT44D(F32HI(dVar30) + fVar13,SUB84(dVar30,0))
              ;
            }
            else {
              dVar30 = dVar30 + (double)(ulonglong)(uint)fVar13;
            }
          }
          fVar15 = (float)(uVar4 >> 8 & 0xff);
          if (in_FPSCR_SZ == '\0') {
            dVar30 = CONCAT44D((int)(D2U(dVar30) >> 0x20),fVar15);
          }
          if (in_FPSCR_PR == '\0' && fVar15 < 0.0) {
            fVar13 = (*(undefined1 *)(unsigned)0x8c22f0b8);
            if (in_FPSCR_SZ != '\0') {
              dVar23 = CONCAT44D((*(uint *)(unsigned)0x8c22f0bc),(*(undefined1 *)(unsigned)0x8c22f0b8));
              fVar13 = fVar15;
            }
            if (in_FPSCR_PR == '\0') {
              dVar30 = CONCAT44D((int)(D2U(dVar30) >> 0x20),F32LO(dVar30) + fVar13);
            }
            else {
              dVar30 = dVar30 + (double)(ulonglong)(uint)fVar13;
            }
          }
          if (in_FPSCR_PR == '\0') {
            dVar29 = (double)((ulonglong)(uint)(float)(uVar4 & 0xff) << 0x20);
          }
          else {
            dVar29 = (double)(uVar4 & 0xff);
          }
          fVar15 = F32HI(dVar29);
          dVar26 = dVar29;
          if (in_FPSCR_SZ == '\0') {
            dVar22 = (double)(ulonglong)(uint)fVar15;
            dVar26 = in_xd4;
          }
          fVar13 = F32LO(dVar22);
          dVar22 = dVar26;
          if (in_FPSCR_PR != '\0' || SUB84(dVar29,0) <= fVar15) {
            if (in_FPSCR_SZ == '\0') {
              dVar29 = CONCAT44D(fVar15,fVar13);
              dVar22 = dVar23;
            }
          }
          else {
            if (in_FPSCR_SZ == '\0') {
              dVar29 = CONCAT44D((*(undefined1 *)(unsigned)0x8c22f0b8),fVar13);
              dVar22 = dVar23;
            }
            else {
              dVar29 = CONCAT44D((*(uint *)(unsigned)0x8c22f0bc),(*(undefined1 *)(unsigned)0x8c22f0b8));
            }
            if (in_FPSCR_PR == '\0') {
              fVar15 = F32HI(dVar29);
              dVar29 = CONCAT44D(fVar15,F32LO(dVar29) + fVar15);
            }
            else {
              dVar29 = dVar29 + dVar29;
            }
          }
          fVar15 = F32HI(dVar18);
          if (in_FPSCR_PR == '\0') {
            dVar12 = CONCAT44D((int)(D2U(dVar12) >> 0x20),F32LO(dVar12) - fVar15);
          }
          else {
            dVar12 = dVar12 - dVar18;
          }
          if (in_FPSCR_SZ == '\0') {
            *(float *)(unsigned)(puVar11 + iVar1 + 8) = SUB84(dVar29,0);
          }
          else {
            *(double *)(unsigned)(puVar11 + iVar1 + 8) = dVar22;
          }
          fVar25 = F32LO(dVar27);
          fVar14 = F32LO(dVar18);
          if (in_FPSCR_PR == '\0') {
            fVar16 = F32LO(dVar29) - fVar25;
            dVar30 = CONCAT44D(F32HI(dVar30) - fVar14,SUB84(dVar30,0));
          }
          else {
            fVar16 = SUB84(dVar29 - dVar27,0);
            dVar30 = dVar30 - dVar18;
          }
          if (in_FPSCR_SZ == '\0') {
            dVar18 = dVar26;
            fVar13 = fVar15;
          }
          fVar15 = F32HI(dVar27);
          if (in_FPSCR_PR == '\0') {
            dVar30 = CONCAT44D((int)(D2U(dVar30) >> 0x20),F32LO(dVar30) - fVar15);
          }
          else {
            dVar30 = dVar30 - dVar27;
          }
          uVar28 = (undefined4)(D2U(dVar12) >> 0x20);
          dVar23 = dVar12;
          if (in_FPSCR_SZ == '\0') {
            dVar23 = CONCAT44D(uVar28,fVar13);
          }
          if (in_FPSCR_PR == '\0') {
            fVar13 = F32HI(dVar23);
            dVar23 = CONCAT44D(fVar13,fVar13 * F32LO(dVar12) + F32LO(dVar23));
          }
          dVar29 = dVar37;
          if (in_FPSCR_SZ == '\0') {
            dVar29 = CONCAT44D(fVar25,fVar14);
          }
          fVar13 = F32HI(dVar23);
          if (in_FPSCR_PR == '\0') {
            dVar29 = CONCAT44D(fVar13 * fVar16 + F32HI(dVar29),
                                      SUB84(dVar29,0));
          }
          dVar26 = dVar17;
          if (in_FPSCR_SZ == '\0') {
            dVar12 = CONCAT44D(uVar28,SUB84(dVar29,0));
            dVar26 = dVar35;
          }
          if (in_FPSCR_PR == '\0') {
            dVar12 = CONCAT44D((int)(D2U(dVar12) >> 0x20),
                                      fVar13 * F32HI(dVar30) + F32LO(dVar12))
            ;
          }
          dVar36 = dVar18;
          if (in_FPSCR_SZ == '\0') {
            fVar16 = F32LO(dVar23);
            dVar36 = dVar22;
          }
          dVar22 = CONCAT44D(0x4f000000,fVar16);
          if (in_FPSCR_SZ == '\0') {
            dVar29 = CONCAT44D((int)(D2U(dVar29) >> 0x20),fVar15);
            dVar27 = dVar17;
          }
          if (in_FPSCR_PR == '\0') {
            dVar29 = CONCAT44D((int)(D2U(dVar29) >> 0x20),
                                      fVar13 * F32LO(dVar30) + F32LO(dVar29));
          }
          if (in_FPSCR_PR != '\0' || 0x4f000000 <= fVar16) {
            if (in_FPSCR_PR == '\0') {
              dVar22 = CONCAT44D(0x4f000000 + 0x4f000000,
                                        fVar16 - (0x4f000000 + 0x4f000000));
            }
            else {
              dVar22 = (dVar22 + dVar22) - (dVar22 + dVar22);
            }
          }
          if (in_FPSCR_PR == '\0') {
            iVar41 = (int)SUB84(dVar22,0);
          }
          else {
            iVar41 = (int)dVar22;
          }
          uVar28 = (undefined4)(D2U(dVar22) >> 0x20);
          dVar17 = CONCAT44D(uVar28,0x4f000000);
          if (in_FPSCR_PR == '\0') {
            bVar40 = SUB84(dVar12,0) < 0x4f000000;
          }
          else {
            bVar40 = dVar12 < dVar17;
          }
          if (!bVar40) {
            if (in_FPSCR_PR == '\0') {
              dVar17 = CONCAT44D(uVar28,0x4f000000 + 0x4f000000);
              dVar12 = CONCAT44D((int)(D2U(dVar12) >> 0x20),
                                        F32LO(dVar12) - (0x4f000000 + 0x4f000000));
            }
            else {
              dVar17 = dVar17 + dVar17;
              dVar12 = dVar12 - dVar17;
            }
          }
          if (in_FPSCR_PR == '\0') {
            iVar42 = (int)SUB84(dVar12,0);
          }
          else {
            iVar42 = (int)dVar12;
          }
          uVar28 = (undefined4)(D2U(dVar17) >> 0x20);
          dVar17 = CONCAT44D(uVar28,0x4f000000);
          if (in_FPSCR_PR == '\0') {
            bVar40 = SUB84(dVar29,0) < 0x4f000000;
          }
          else {
            bVar40 = dVar29 < dVar17;
          }
          if (!bVar40) {
            if (in_FPSCR_PR == '\0') {
              dVar17 = CONCAT44D(uVar28,0x4f000000 + 0x4f000000);
              dVar29 = CONCAT44D((int)(D2U(dVar29) >> 0x20),
                                        F32LO(dVar29) - (0x4f000000 + 0x4f000000));
            }
            else {
              dVar17 = dVar17 + dVar17;
              dVar29 = dVar29 - dVar17;
            }
          }
          if (in_FPSCR_PR == '\0') {
            iVar43 = (int)SUB84(dVar29,0);
          }
          else {
            iVar43 = (int)dVar29;
          }
          dVar17 = CONCAT44D((int)(D2U(dVar17) >> 0x20),0x4f000000);
          fVar15 = F32HI(dVar29);
          if (in_FPSCR_PR == '\0') {
            bVar40 = fVar15 < 0x4f000000;
          }
          else {
            bVar40 = dVar29 < dVar17;
          }
          if (!bVar40) {
            if (in_FPSCR_PR == '\0') {
              dVar29 = CONCAT44D(fVar15 - (0x4f000000 + 0x4f000000),SUB84(dVar29,0));
            }
            else {
              dVar29 = dVar29 - (dVar17 + dVar17);
            }
          }
          if (in_FPSCR_PR == '\0') {
            uVar4 = (uint)F32HI(dVar29);
          }
          else {
            uVar4 = (uint)dVar29;
          }
          *(uint *)(unsigned)(pdVar3 + 4) = iVar41 << 0x18 | iVar42 << 0x10 | iVar43 << 8 | uVar4;
          uVar4 = *(uint *)(unsigned)((int)pdVar8 + iVar44 * 0x28 + 0x24);
          fVar15 = (float)(uVar4 >> 0x18);
          dVar35 = dVar36;
          if (in_FPSCR_SZ == '\0') {
            dVar35 = CONCAT44D(fVar15,SUB84(dVar29,0));
          }
          if (in_FPSCR_PR == '\0' && fVar15 < 0.0) {
            fVar13 = (*(undefined1 *)(unsigned)0x8c22f208);
            if (in_FPSCR_SZ != '\0') {
              dVar36 = CONCAT44D((*(uint *)(unsigned)0x8c22f20c),(*(undefined1 *)(unsigned)0x8c22f208));
              fVar13 = fVar15;
            }
            if (in_FPSCR_PR == '\0') {
              dVar35 = CONCAT44D(F32HI(dVar35) + fVar13,SUB84(dVar35,0))
              ;
            }
            else {
              dVar35 = dVar35 + (double)(ulonglong)(uint)fVar13;
            }
          }
          fVar15 = (float)(uVar4 >> 0x10 & 0xff);
          dVar38 = dVar36;
          if (in_FPSCR_SZ == '\0') {
            dVar35 = CONCAT44D((int)(D2U(dVar35) >> 0x20),fVar15);
            dVar38 = dVar27;
          }
          if (in_FPSCR_PR == '\0' && fVar15 < 0.0) {
            fVar13 = (*(undefined1 *)(unsigned)0x8c22f208);
            if (in_FPSCR_SZ != '\0') {
              dVar36 = CONCAT44D((*(uint *)(unsigned)0x8c22f20c),(*(undefined1 *)(unsigned)0x8c22f208));
              fVar13 = fVar15;
            }
            if (in_FPSCR_PR == '\0') {
              dVar35 = CONCAT44D((int)(D2U(dVar35) >> 0x20),F32LO(dVar35) + fVar13);
            }
            else {
              dVar35 = dVar35 + (double)(ulonglong)(uint)fVar13;
            }
          }
          fVar15 = (float)(uVar4 >> 8 & 0xff);
          in_xd6 = dVar36;
          if (in_FPSCR_SZ == '\0') {
            dVar12 = CONCAT44D((int)(D2U(dVar12) >> 0x20),fVar15);
            in_xd6 = dVar26;
          }
          if (in_FPSCR_PR == '\0' && fVar15 < 0.0) {
            fVar13 = (*(undefined1 *)(unsigned)0x8c22f208);
            if (in_FPSCR_SZ != '\0') {
              dVar36 = CONCAT44D((*(uint *)(unsigned)0x8c22f20c),(*(undefined1 *)(unsigned)0x8c22f208));
              fVar13 = fVar15;
            }
            if (in_FPSCR_PR == '\0') {
              dVar12 = CONCAT44D((int)(D2U(dVar12) >> 0x20),F32LO(dVar12) + fVar13);
            }
            else {
              dVar12 = dVar12 + (double)(ulonglong)(uint)fVar13;
            }
          }
          fVar15 = (float)(uVar4 & 0xff);
          dVar26 = dVar36;
          if (in_FPSCR_SZ == '\0') {
            dVar26 = CONCAT44D(fVar15,fVar25);
          }
          if (in_FPSCR_PR == '\0' && fVar15 < 0.0) {
            fVar13 = (*(undefined1 *)(unsigned)0x8c22f208);
            if (in_FPSCR_SZ != '\0') {
              dVar36 = CONCAT44D((*(uint *)(unsigned)0x8c22f20c),(*(undefined1 *)(unsigned)0x8c22f208));
              fVar13 = fVar15;
            }
            if (in_FPSCR_PR == '\0') {
              dVar26 = CONCAT44D(F32HI(dVar26) + fVar13,SUB84(dVar26,0))
              ;
            }
            else {
              dVar26 = dVar26 + (double)(ulonglong)(uint)fVar13;
            }
          }
          uVar4 = *(uint *)(unsigned)((int)pdVar8 + iVar7 * 0x28 + 0x24);
          fVar15 = (float)(uVar4 >> 0x18);
          dVar27 = dVar36;
          if (in_FPSCR_SZ == '\0') {
            dVar26 = CONCAT44D((int)(D2U(dVar26) >> 0x20),fVar15);
            dVar27 = dVar37;
          }
          if (in_FPSCR_PR == '\0' && fVar15 < 0.0) {
            fVar13 = (*(undefined1 *)(unsigned)0x8c22f208);
            if (in_FPSCR_SZ != '\0') {
              dVar36 = CONCAT44D((*(uint *)(unsigned)0x8c22f20c),(*(undefined1 *)(unsigned)0x8c22f208));
              fVar13 = fVar15;
            }
            if (in_FPSCR_PR == '\0') {
              dVar26 = CONCAT44D((int)(D2U(dVar26) >> 0x20),F32LO(dVar26) + fVar13);
            }
            else {
              dVar26 = dVar26 + (double)(ulonglong)(uint)fVar13;
            }
          }
          fVar15 = (float)(uVar4 >> 0x10 & 0xff);
          dVar29 = dVar36;
          if (in_FPSCR_SZ == '\0') {
            dVar29 = CONCAT44D(fVar15,SUB84(dVar30,0));
          }
          if (in_FPSCR_PR == '\0' && fVar15 < 0.0) {
            fVar13 = (*(undefined1 *)(unsigned)0x8c22f208);
            if (in_FPSCR_SZ != '\0') {
              dVar36 = CONCAT44D((*(uint *)(unsigned)0x8c22f20c),(*(undefined1 *)(unsigned)0x8c22f208));
              fVar13 = fVar15;
            }
            if (in_FPSCR_PR == '\0') {
              dVar29 = CONCAT44D(F32HI(dVar29) + fVar13,SUB84(dVar29,0))
              ;
            }
            else {
              dVar29 = dVar29 + (double)(ulonglong)(uint)fVar13;
            }
          }
          fVar15 = (float)(uVar4 >> 8 & 0xff);
          if (in_FPSCR_SZ == '\0') {
            dVar29 = CONCAT44D((int)(D2U(dVar29) >> 0x20),fVar15);
          }
          if (in_FPSCR_PR == '\0' && fVar15 < 0.0) {
            fVar13 = (*(undefined1 *)(unsigned)0x8c22f208);
            if (in_FPSCR_SZ != '\0') {
              dVar36 = CONCAT44D((*(uint *)(unsigned)0x8c22f20c),(*(undefined1 *)(unsigned)0x8c22f208));
              fVar13 = fVar15;
            }
            if (in_FPSCR_PR == '\0') {
              dVar29 = CONCAT44D((int)(D2U(dVar29) >> 0x20),F32LO(dVar29) + fVar13);
            }
            else {
              dVar29 = dVar29 + (double)(ulonglong)(uint)fVar13;
            }
          }
          if (in_FPSCR_PR == '\0') {
            dVar17 = (double)((ulonglong)(uint)(float)(uVar4 & 0xff) << 0x20);
          }
          else {
            dVar17 = (double)(uVar4 & 0xff);
          }
          fVar15 = F32HI(dVar17);
          dVar22 = dVar17;
          if (in_FPSCR_SZ == '\0') {
            dVar23 = (double)(ulonglong)(uint)fVar15;
            dVar22 = dVar18;
          }
          fVar13 = F32LO(dVar23);
          dVar18 = dVar22;
          if (in_FPSCR_PR != '\0' || SUB84(dVar17,0) <= fVar15) {
            if (in_FPSCR_SZ == '\0') {
              dVar17 = CONCAT44D(fVar15,fVar13);
              dVar18 = dVar36;
            }
          }
          else {
            if (in_FPSCR_SZ == '\0') {
              dVar17 = CONCAT44D((*(undefined1 *)(unsigned)0x8c22f208),fVar13);
              dVar18 = dVar36;
            }
            else {
              dVar17 = CONCAT44D((*(uint *)(unsigned)0x8c22f20c),(*(undefined1 *)(unsigned)0x8c22f208));
            }
            if (in_FPSCR_PR == '\0') {
              fVar15 = F32HI(dVar17);
              dVar17 = CONCAT44D(fVar15,F32LO(dVar17) + fVar15);
            }
            else {
              dVar17 = dVar17 + dVar17;
            }
          }
          fVar15 = F32HI(dVar35);
          if (in_FPSCR_PR == '\0') {
            dVar26 = CONCAT44D((int)(D2U(dVar26) >> 0x20),F32LO(dVar26) - fVar15);
          }
          else {
            dVar26 = dVar26 - dVar35;
          }
          if (in_FPSCR_SZ == '\0') {
            *(float *)(unsigned)(puVar11 + iVar1 + 4) = SUB84(dVar17,0);
          }
          else {
            *(double *)(unsigned)(puVar11 + iVar1 + 4) = dVar18;
          }
          fVar25 = F32HI(dVar26);
          fVar14 = F32LO(dVar35);
          if (in_FPSCR_PR == '\0') {
            fVar16 = F32LO(dVar17) - fVar25;
            dVar29 = CONCAT44D(F32HI(dVar29) - fVar14,SUB84(dVar29,0));
          }
          else {
            fVar16 = SUB84(dVar17 - dVar26,0);
            dVar29 = dVar29 - dVar35;
          }
          if (in_FPSCR_SZ == '\0') {
            dVar35 = dVar22;
            fVar13 = fVar15;
          }
          if (in_FPSCR_PR == '\0') {
            dVar29 = CONCAT44D((int)(D2U(dVar29) >> 0x20),
                                      F32LO(dVar29) - F32LO(dVar12));
          }
          else {
            dVar29 = dVar29 - dVar12;
          }
          dVar22 = dVar12;
          if (in_FPSCR_SZ == '\0') {
            dVar22 = CONCAT44D((int)(D2U(dVar12) >> 0x20),fVar13);
          }
          if (in_FPSCR_PR == '\0') {
            fVar15 = F32HI(dVar22);
            dVar22 = CONCAT44D(fVar15,fVar15 * F32LO(dVar26) + F32LO(dVar22));
          }
          dVar17 = dVar26;
          if (in_FPSCR_SZ == '\0') {
            dVar17 = CONCAT44D(fVar25,fVar14);
          }
          fVar15 = F32HI(dVar22);
          if (in_FPSCR_PR == '\0') {
            dVar17 = CONCAT44D(fVar15 * fVar16 + F32HI(dVar17),
                                      SUB84(dVar17,0));
          }
          in_xd8 = dVar38;
          if (in_FPSCR_SZ == '\0') {
            dVar26 = CONCAT44D(fVar25,SUB84(dVar17,0));
            in_xd8 = dVar27;
          }
          if (in_FPSCR_PR == '\0') {
            dVar26 = CONCAT44D((int)(D2U(dVar26) >> 0x20),
                                      fVar15 * F32HI(dVar29) + F32LO(dVar26))
            ;
          }
          dVar23 = dVar35;
          if (in_FPSCR_SZ == '\0') {
            fVar16 = F32LO(dVar22);
            dVar23 = dVar18;
          }
          dVar18 = CONCAT44D(0x4f000000,fVar16);
          in_xd4 = in_xd6;
          if (in_FPSCR_SZ == '\0') {
            dVar17 = CONCAT44D((int)(D2U(dVar17) >> 0x20),SUB84(dVar12,0));
            in_xd4 = dVar38;
          }
          if (in_FPSCR_PR == '\0') {
            dVar17 = CONCAT44D((int)(D2U(dVar17) >> 0x20),
                                      fVar15 * F32LO(dVar29) + F32LO(dVar17));
          }
          if (in_FPSCR_PR != '\0' || 0x4f000000 <= fVar16) {
            if (in_FPSCR_PR == '\0') {
              dVar18 = CONCAT44D(0x4f000000 + 0x4f000000,
                                        fVar16 - (0x4f000000 + 0x4f000000));
            }
            else {
              dVar18 = (dVar18 + dVar18) - (dVar18 + dVar18);
            }
          }
          if (in_FPSCR_PR == '\0') {
            iVar44 = (int)SUB84(dVar18,0);
          }
          else {
            iVar44 = (int)dVar18;
          }
          uVar28 = (undefined4)(D2U(dVar18) >> 0x20);
          dVar18 = CONCAT44D(uVar28,0x4f000000);
          if (in_FPSCR_PR == '\0') {
            bVar40 = SUB84(dVar26,0) < 0x4f000000;
          }
          else {
            bVar40 = dVar26 < dVar18;
          }
          if (!bVar40) {
            if (in_FPSCR_PR == '\0') {
              dVar18 = CONCAT44D(uVar28,0x4f000000 + 0x4f000000);
              dVar26 = CONCAT44D((int)(D2U(dVar26) >> 0x20),
                                        F32LO(dVar26) - (0x4f000000 + 0x4f000000));
            }
            else {
              dVar18 = dVar18 + dVar18;
              dVar26 = dVar26 - dVar18;
            }
          }
          if (in_FPSCR_PR == '\0') {
            iVar41 = (int)SUB84(dVar26,0);
          }
          else {
            iVar41 = (int)dVar26;
          }
          uVar28 = (undefined4)(D2U(dVar18) >> 0x20);
          dVar18 = CONCAT44D(uVar28,0x4f000000);
          if (in_FPSCR_PR == '\0') {
            bVar40 = SUB84(dVar17,0) < 0x4f000000;
          }
          else {
            bVar40 = dVar17 < dVar18;
          }
          if (!bVar40) {
            if (in_FPSCR_PR == '\0') {
              dVar18 = CONCAT44D(uVar28,0x4f000000 + 0x4f000000);
              dVar17 = CONCAT44D((int)(D2U(dVar17) >> 0x20),
                                        F32LO(dVar17) - (0x4f000000 + 0x4f000000));
            }
            else {
              dVar18 = dVar18 + dVar18;
              dVar17 = dVar17 - dVar18;
            }
          }
          if (in_FPSCR_PR == '\0') {
            iVar42 = (int)SUB84(dVar17,0);
          }
          else {
            iVar42 = (int)dVar17;
          }
          dVar18 = CONCAT44D((int)(D2U(dVar18) >> 0x20),0x4f000000);
          fVar15 = F32HI(dVar17);
          if (in_FPSCR_PR == '\0') {
            bVar40 = fVar15 < 0x4f000000;
          }
          else {
            bVar40 = dVar17 < dVar18;
          }
          if (!bVar40) {
            if (in_FPSCR_PR == '\0') {
              dVar17 = CONCAT44D(fVar15 - (0x4f000000 + 0x4f000000),SUB84(dVar17,0));
            }
            else {
              dVar17 = dVar17 - (dVar18 + dVar18);
            }
          }
          if (in_FPSCR_PR == '\0') {
            uVar4 = (uint)F32HI(dVar17);
          }
          else {
            uVar4 = (uint)dVar17;
          }
          iVar6 = iVar6 + 1;
          *(uint *)(unsigned)((int)pdVar3 + 0x24) = iVar44 << 0x18 | iVar41 << 0x10 | iVar42 << 8 | uVar4;
        }
        pdVar3 = pdVar8 + iVar7 * 5;
        if (in_FPSCR_SZ == '\0') {
          uVar19 = CONCAT44(*(undefined4 *)(unsigned)((int)pdVar3 + 0x14),0x3f800000);
        }
        else {
          uVar19 = *(undefined8 *)(unsigned)((int)pdVar3 + 0x14);
        }
        if (in_FPSCR_PR == '\0' && (float)uVar19 < F32HI(uVar19)) {
          if (in_FPSCR_SZ == '\0') {
            dVar17 = CONCAT44D(*(undefined4 *)(unsigned)pdVar3,*(undefined4 *)(unsigned)((int)pdVar3 + 4));
          }
          else {
            dVar17 = *pdVar3;
            in_xd4 = *(double *)(unsigned)((int)pdVar3 + 4);
          }
          pdVar5 = (double *)(unsigned)(puVar9 + iVar6 * 5);
          iVar6 = iVar6 + 1;
          if (in_FPSCR_SZ == '\0') {
            *(int *)(unsigned)pdVar5 = (int)(D2U(dVar17) >> 0x20);
            *(int *)(unsigned)((int)pdVar5 + 4) = SUB84(dVar17,0);
            *(undefined4 *)(unsigned)(pdVar5 + 1) = *(undefined4 *)(unsigned)(pdVar3 + 1);
            *(undefined4 *)(unsigned)(pdVar5 + 3) = *(undefined4 *)(unsigned)(pdVar3 + 3);
            *(undefined4 *)(unsigned)((int)pdVar5 + 0x1c) = *(undefined4 *)(unsigned)((int)pdVar3 + 0x1c);
            *(undefined4 *)(unsigned)(pdVar5 + 4) = *(undefined4 *)(unsigned)(pdVar3 + 4);
            *(undefined4 *)(unsigned)((int)pdVar5 + 0x24) = *(undefined4 *)(unsigned)((int)pdVar3 + 0x24);
          }
          else {
            *pdVar5 = dVar17;
            *(double *)(unsigned)((int)pdVar5 + 4) = in_xd4;
            pdVar5[1] = pdVar3[1];
            pdVar5[3] = pdVar3[3];
            *(undefined8 *)(unsigned)((int)pdVar5 + 0x1c) = *(undefined8 *)(unsigned)((int)pdVar3 + 0x1c);
            pdVar5[4] = pdVar3[4];
            *(undefined8 *)(unsigned)((int)pdVar5 + 0x24) = *(undefined8 *)(unsigned)((int)pdVar3 + 0x24);
          }
        }
        iVar44 = iVar7;
      }
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(unsigned)((int)ar7 + 0x1c) = *(undefined4 *)(unsigned)(puVar11 + iVar1 + 0x30);
        *(undefined4 *)(unsigned)(ar7 + 3) = *(undefined4 *)(unsigned)(puVar11 + iVar1 + 0x2c);
        *(undefined4 *)(unsigned)((int)ar7 + 0x14) = *(undefined4 *)(unsigned)(puVar11 + iVar1 + 0x28);
        *(undefined4 *)(unsigned)(ar7 + 2) = *(undefined4 *)(unsigned)(puVar11 + iVar1 + 0x24);
        *(undefined4 *)(unsigned)((int)ar7 + 0xc) = *(undefined4 *)(unsigned)(puVar11 + iVar1 + 0x14);
        *(undefined4 *)(unsigned)(ar7 + 1) = *(undefined4 *)(unsigned)(puVar11 + iVar1 + 0x10);
        uVar28 = 0xe0000000;
        puVar2 = (undefined8 *)(unsigned)((int)ar7 + 4);
        *(undefined4 *)(unsigned)puVar2 = *(undefined4 *)(unsigned)puVar9;
      }
      else {
        ar7[3] = *(undefined8 *)(unsigned)(puVar11 + iVar1 + 0x30);
        ar7[2] = *(undefined8 *)(unsigned)(puVar11 + iVar1 + 0x2c);
        ar7[1] = *(undefined8 *)(unsigned)(puVar11 + iVar1 + 0x28);
        *ar7 = *(undefined8 *)(unsigned)(puVar11 + iVar1 + 0x24);
        ar7[-1] = *(undefined8 *)(unsigned)(puVar11 + iVar1 + 0x14);
        ar7[-2] = *(undefined8 *)(unsigned)(puVar11 + iVar1 + 0x10);
        uVar28 = 0xe0000000;
        puVar2 = ar7 + -3;
        *puVar2 = *puVar9;
      }
      *(undefined4 *)(unsigned)((int)puVar2 + -4) = uVar28;
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(unsigned)(puVar2 + 7) = *(undefined4 *)(unsigned)(puVar11 + iVar1 + 0x58);
        *(undefined4 *)(unsigned)((int)puVar2 + 0x34) = *(undefined4 *)(unsigned)(puVar11 + iVar1 + 0x54);
        *(undefined4 *)(unsigned)(puVar2 + 6) = *(undefined4 *)(unsigned)(puVar11 + iVar1 + 0x50);
        *(undefined4 *)(unsigned)((int)puVar2 + 0x2c) = *(undefined4 *)(unsigned)(puVar11 + iVar1 + 0x4c);
        *(undefined4 *)(unsigned)(puVar2 + 5) = *(undefined4 *)(unsigned)(puVar11 + iVar1 + 0x3c);
        *(undefined4 *)(unsigned)((int)puVar2 + 0x24) = *(undefined4 *)(unsigned)(puVar11 + iVar1 + 0x38);
        puVar2 = puVar2 + 4;
        *(undefined4 *)(unsigned)puVar2 = *(undefined4 *)(unsigned)(puVar11 + iVar1 + 0x34);
      }
      else {
        *(undefined8 *)(unsigned)((int)puVar2 + 0x34) = *(undefined8 *)(unsigned)(puVar11 + iVar1 + 0x58);
        *(undefined8 *)(unsigned)((int)puVar2 + 0x2c) = *(undefined8 *)(unsigned)(puVar11 + iVar1 + 0x54);
        *(undefined8 *)(unsigned)((int)puVar2 + 0x24) = *(undefined8 *)(unsigned)(puVar11 + iVar1 + 0x50);
        *(undefined8 *)(unsigned)((int)puVar2 + 0x1c) = *(undefined8 *)(unsigned)(puVar11 + iVar1 + 0x4c);
        *(undefined8 *)(unsigned)((int)puVar2 + 0x14) = *(undefined8 *)(unsigned)(puVar11 + iVar1 + 0x3c);
        *(undefined8 *)(unsigned)((int)puVar2 + 0xc) = *(undefined8 *)(unsigned)(puVar11 + iVar1 + 0x38);
        puVar2 = (undefined8 *)(unsigned)((int)puVar2 + 4);
        *puVar2 = *(undefined8 *)(unsigned)(puVar11 + iVar1 + 0x34);
      }
      *(undefined4 *)(unsigned)((int)puVar2 + -4) = uVar28;
      if (iVar6 != 3) {
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)(unsigned)(puVar2 + 7) = *(undefined4 *)(unsigned)(puVar11 + iVar1 + 0xa8);
          *(undefined4 *)(unsigned)((int)puVar2 + 0x34) = *(undefined4 *)(unsigned)(puVar11 + iVar1 + 0xa4);
          *(undefined4 *)(unsigned)(puVar2 + 6) = *(undefined4 *)(unsigned)(puVar11 + iVar1 + 0xa0);
          *(undefined4 *)(unsigned)((int)puVar2 + 0x2c) = *(undefined4 *)(unsigned)(puVar11 + iVar1 + 0x9c);
          *(undefined4 *)(unsigned)(puVar2 + 5) = *(undefined4 *)(unsigned)(puVar11 + iVar1 + 0x8c);
          *(undefined4 *)(unsigned)((int)puVar2 + 0x24) = *(undefined4 *)(unsigned)(puVar11 + iVar1 + 0x88);
          puVar2 = puVar2 + 4;
          *(undefined4 *)(unsigned)puVar2 = *(undefined4 *)(unsigned)(puVar11 + iVar1 + 0x84);
        }
        else {
          *(undefined8 *)(unsigned)((int)puVar2 + 0x34) = *(undefined8 *)(unsigned)(puVar11 + iVar1 + 0xa8);
          *(undefined8 *)(unsigned)((int)puVar2 + 0x2c) = *(undefined8 *)(unsigned)(puVar11 + iVar1 + 0xa4);
          *(undefined8 *)(unsigned)((int)puVar2 + 0x24) = *(undefined8 *)(unsigned)(puVar11 + iVar1 + 0xa0);
          *(undefined8 *)(unsigned)((int)puVar2 + 0x1c) = *(undefined8 *)(unsigned)(puVar11 + iVar1 + 0x9c);
          *(undefined8 *)(unsigned)((int)puVar2 + 0x14) = *(undefined8 *)(unsigned)(puVar11 + iVar1 + 0x8c);
          *(undefined8 *)(unsigned)((int)puVar2 + 0xc) = *(undefined8 *)(unsigned)(puVar11 + iVar1 + 0x88);
          puVar2 = (undefined8 *)(unsigned)((int)puVar2 + 4);
          *puVar2 = *(undefined8 *)(unsigned)(puVar11 + iVar1 + 0x84);
        }
        *(undefined4 *)(unsigned)((int)puVar2 + -4) = uVar28;
      }
      uVar28 = 0xf0000000;
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(unsigned)(puVar2 + 7) = *(undefined4 *)(unsigned)(puVar11 + iVar1 + 0x80);
        *(undefined4 *)(unsigned)((int)puVar2 + 0x34) = *(undefined4 *)(unsigned)(puVar11 + iVar1 + 0x7c);
        *(undefined4 *)(unsigned)(puVar2 + 6) = *(undefined4 *)(unsigned)(puVar11 + iVar1 + 0x78);
        *(undefined4 *)(unsigned)((int)puVar2 + 0x2c) = *(undefined4 *)(unsigned)(puVar11 + iVar1 + 0x74);
        *(undefined4 *)(unsigned)(puVar2 + 5) = *(undefined4 *)(unsigned)(puVar11 + iVar1 + 100);
        *(undefined4 *)(unsigned)((int)puVar2 + 0x24) = *(undefined4 *)(unsigned)(puVar11 + iVar1 + 0x60);
        puVar2 = puVar2 + 4;
        *(undefined4 *)(unsigned)puVar2 = *(undefined4 *)(unsigned)(puVar11 + iVar1 + 0x5c);
      }
      else {
        *(undefined8 *)(unsigned)((int)puVar2 + 0x34) = *(undefined8 *)(unsigned)(puVar11 + iVar1 + 0x80);
        *(undefined8 *)(unsigned)((int)puVar2 + 0x2c) = *(undefined8 *)(unsigned)(puVar11 + iVar1 + 0x7c);
        *(undefined8 *)(unsigned)((int)puVar2 + 0x24) = *(undefined8 *)(unsigned)(puVar11 + iVar1 + 0x78);
        *(undefined8 *)(unsigned)((int)puVar2 + 0x1c) = *(undefined8 *)(unsigned)(puVar11 + iVar1 + 0x74);
        *(undefined8 *)(unsigned)((int)puVar2 + 0x14) = *(undefined8 *)(unsigned)(puVar11 + iVar1 + 100);
        *(undefined8 *)(unsigned)((int)puVar2 + 0xc) = *(undefined8 *)(unsigned)(puVar11 + iVar1 + 0x60);
        puVar2 = (undefined8 *)(unsigned)((int)puVar2 + 4);
        *puVar2 = *(undefined8 *)(unsigned)(puVar11 + iVar1 + 0x5c);
      }
      *(undefined4 *)(unsigned)((int)puVar2 + -4) = uVar28;
      ar7 = (undefined8 *)(unsigned)((int)puVar2 + 0x1c);
      *(undefined4 *)(unsigned)0x8c4aa520 = *(undefined4 *)(unsigned)0x8c4aa520 + iVar6;
    }
  }
  return ar7;
}

__asm__(".globl _FUN_8c22ed60\n.set _FUN_8c22ed60, _FUN_8c22ed60_def\n");
