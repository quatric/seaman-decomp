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
undefined8 * FUN_8c22c058_def(double *ar4,double *ar5,double *ar6,undefined8 *ar7)

{
  ring[rp++ & 255] = "FUN_8c22c058";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 324; for (int i_ = 0; i_ < 324; i_++) z_[i_] = 0; }
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  double *pdVar7;
  double *pdVar8;
  int iVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  double *pdVar12;
  undefined4 *puVar13;
  undefined1 *puVar14;
  undefined4 in_fr1 = 0;
  double dVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  double dVar19;
  undefined4 uVar23;
  double dVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  double in_dr4 = 0;
  double dVar24;
  double dVar25;
  double in_dr6 = 0;
  undefined4 uVar26;
  double in_dr8 = 0;
  undefined4 uVar27;
  undefined4 in_fr11 = 0;
  double dVar28;
  double dVar29;
  float fVar31;
  undefined8 in_dr12 = 0;
  float fVar32;
  undefined8 in_dr14 = 0;
  double dVar33;
  float fVar34;
  double in_xd0 = 0;
  double in_xd2 = 0;
  double dVar35;
  double in_xd4 = 0;
  undefined8 in_xd6 = 0;
  double in_xd8 = 0;
  double dVar36;
  double in_xd12 = 0;
  char in_FPSCR_PR = 0;
  char in_FPSCR_SZ = 0;
  undefined4 uVar30;
  
  puVar2 = 0x8c4aa38c;
  puVar1 = 0x8c4aa388;
  if (in_FPSCR_SZ == '\0') {
    puVar13 = &(*(undefined4 *)(fr0_ - 0x18));
    *(ulonglong *)(unsigned)((undefined1 *)(fr0_ - 0x1c)) = CONCAT44((int)((ulonglong)in_dr14 >> 0x20),((undefined1 *)(fr0_ - 0x1c)));
  }
  else {
    puVar13 = (undefined4 *)(unsigned)((undefined1 *)(fr0_ - 0x1c));
  }
  iVar4 = (int)(int)0xfffffee4;
  if (in_FPSCR_SZ == '\0') {
    *(int *)(unsigned)((int)puVar13 + -4) = (int)in_dr12;
    puVar14 = (undefined1 *)(unsigned)((int)puVar13 + -8);
    *(int *)(unsigned)((int)puVar13 + -8) = (int)((ulonglong)in_dr12 >> 0x20);
  }
  else {
    *(double *)(unsigned)((int)puVar13 + -8) = in_xd12;
    puVar14 = (undefined1 *)(unsigned)((int)puVar13 + -0x10);
    *(undefined8 *)(unsigned)((int)puVar13 + -0x10) = in_dr12;
  }
  if ((*(undefined4 *)(unsigned)0x8c4aa4f0 & 0x10000) == 0) {
    if (in_FPSCR_SZ == '\0') {
      uVar30 = *(undefined4 *)(unsigned)0x8c4aa4a8;
      dVar19 = CONCAT44D(*(undefined4 *)(unsigned)0x8c4aa4e0,*(undefined4 *)(unsigned)0x8c4aa4dc);
      dVar28 = CONCAT44D(uVar30,(int)in_dr12);
      dVar29 = CONCAT44D(uVar30,in_fr11);
    }
    else {
      dVar28 = *(undefined4 *)(unsigned)0x8c4aa4a8;
      dVar19 = *(undefined4 *)(unsigned)0x8c4aa4e0;
      in_xd2 = *(undefined4 *)(unsigned)0x8c4aa4dc;
      uVar30 = (undefined4)(D2U(dVar28) >> 0x20);
      dVar29 = dVar28;
    }
    if (in_FPSCR_PR == '\0') {
      dVar28 = CONCAT44D(F32HI(dVar28) *
                                F32HI(dVar19),SUB84(dVar28,0));
    }
    else {
      dVar28 = dVar28 * dVar19;
    }
    dVar33 = dVar29;
    if (in_FPSCR_SZ == '\0') {
      dVar33 = CONCAT44D(uVar30,(int)in_dr14);
    }
    if (in_FPSCR_PR == '\0') {
      dVar33 = CONCAT44D(F32HI(dVar33) * F32LO(dVar19),SUB84(dVar33,0)
                               );
    }
    else {
      dVar33 = dVar33 * dVar19;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar28 = CONCAT44D((int)(D2U(dVar28) >> 0x20),
                                *(undefined4 *)(unsigned)((unsigned)0x8c4aa4a8 + 0xc));
    }
    else {
      in_xd12 = *(double *)(unsigned)((unsigned)0x8c4aa4a8 + 0xc);
    }
    fVar32 = F32HI(dVar28);
    fVar34 = F32HI(dVar33);
    if (in_FPSCR_PR == '\0') {
      dVar29 = CONCAT44D(1.0 / fVar32,SUB84(dVar29,0));
      dVar15 = CONCAT44D(1.0 / fVar34,in_fr1);
    }
    else {
      dVar29 = CONCAT44D(0x3f800000,SUB84(dVar29,0)) / dVar28;
      dVar15 = CONCAT44D(0x3f800000,in_fr1) / dVar33;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar19 = (double)(ulonglong)*(uint *)(unsigned)(0x8c4aa4a8 + 2);
    }
    else {
      in_xd2 = ((undefined1 *)(unsigned)2)[0x8c4aa4a8];
    }
    uVar30 = SUB84(dVar19,0);
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(unsigned)(puVar14 + iVar4) = uVar30;
      uVar30 = *(undefined4 *)(unsigned)((int)ar4 + 4);
    }
    else {
      *(double *)(unsigned)(puVar14 + iVar4) = in_xd2;
      in_xd2 = *(double *)(unsigned)((int)ar4 + 4);
    }
    pdVar12 = (double *)(unsigned)(puVar14 + 0xa4 + iVar4);
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(unsigned)pdVar12 = uVar30;
      *(undefined4 *)(unsigned)((int)pdVar12 + 4) = *(undefined4 *)(unsigned)(ar4 + 1);
      *(undefined4 *)(unsigned)(pdVar12 + 1) = *(undefined4 *)(unsigned)((int)ar4 + 0xc);
      *(undefined4 *)(unsigned)((int)pdVar12 + 0x14) = *(undefined4 *)(unsigned)ar4;
      dVar19 = CONCAT44D(*(undefined4 *)(unsigned)ar4,*(undefined4 *)(unsigned)((int)ar4 + 4));
    }
    else {
      *pdVar12 = in_xd2;
      *(double *)(unsigned)((int)pdVar12 + 4) = ar4[1];
      pdVar12[1] = *(double *)(unsigned)((int)ar4 + 0xc);
      *(double *)(unsigned)((int)pdVar12 + 0x14) = *ar4;
      in_xd2 = *(double *)(unsigned)((int)ar4 + 4);
      dVar19 = *ar4;
    }
    fVar31 = F32LO(dVar28);
    fVar18 = F32HI(dVar15);
    if (in_FPSCR_PR == '\0') {
      fVar16 = (F32LO(dVar19) - fVar31) * F32HI(dVar19) * fVar18;
    }
    else {
      fVar16 = SUB84((dVar19 - dVar28) * (dVar19 - dVar28) * dVar15,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(unsigned)((int)pdVar12 + 0xc) = fVar16;
      dVar19 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 1),*(undefined4 *)(unsigned)(puVar14 + iVar4));
    }
    else {
      *(double *)(unsigned)((int)pdVar12 + 0xc) = in_xd2;
      dVar19 = ar4[1];
      in_xd2 = *(double *)(unsigned)(puVar14 + iVar4);
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
    fVar16 = F32HI(dVar29);
    if (in_FPSCR_PR == '\0') {
      dVar19 = CONCAT44D(F32HI(dVar19) * F32LO(dVar19) * fVar16,
                                SUB84(dVar19,0));
    }
    else {
      dVar19 = dVar19 * dVar19 * dVar29;
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)(unsigned)(pdVar12 + 2) = (int)(D2U(dVar19) >> 0x20);
      *(int *)(unsigned)(pdVar12 + 3) = (int)((ulonglong)in_dr4 >> 0x20);
      *(int *)(unsigned)((int)pdVar12 + 0x1c) = SUB84(in_dr4,0);
      *(undefined4 *)(unsigned)(pdVar12 + 5) = *(undefined4 *)(unsigned)((int)ar5 + 4);
      *(undefined4 *)(unsigned)((int)pdVar12 + 0x2c) = *(undefined4 *)(unsigned)(ar5 + 1);
      *(undefined4 *)(unsigned)(pdVar12 + 6) = *(undefined4 *)(unsigned)((int)ar5 + 0xc);
      *(undefined4 *)(unsigned)((int)pdVar12 + 0x3c) = *(undefined4 *)(unsigned)ar5;
      dVar19 = CONCAT44D(*(undefined4 *)(unsigned)ar5,*(undefined4 *)(unsigned)((int)ar5 + 4));
    }
    else {
      pdVar12[2] = dVar19;
      pdVar12[3] = in_dr4;
      *(double *)(unsigned)((int)pdVar12 + 0x1c) = in_xd4;
      pdVar12[5] = *(double *)(unsigned)((int)ar5 + 4);
      *(double *)(unsigned)((int)pdVar12 + 0x2c) = ar5[1];
      pdVar12[6] = *(double *)(unsigned)((int)ar5 + 0xc);
      *(double *)(unsigned)((int)pdVar12 + 0x3c) = *ar5;
      in_xd2 = *(double *)(unsigned)((int)ar5 + 4);
      dVar19 = *ar5;
    }
    if (in_FPSCR_PR == '\0') {
      fVar17 = (F32LO(dVar19) - fVar31) * F32HI(dVar19) * fVar18;
    }
    else {
      fVar17 = SUB84((dVar19 - dVar28) * (dVar19 - dVar28) * dVar15,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(unsigned)((int)pdVar12 + 0x34) = fVar17;
      dVar19 = CONCAT44D(*(undefined4 *)(unsigned)(ar5 + 1),*(undefined4 *)(unsigned)(puVar14 + iVar4));
    }
    else {
      *(double *)(unsigned)((int)pdVar12 + 0x34) = in_xd2;
      dVar19 = ar5[1];
      in_xd2 = *(double *)(unsigned)(puVar14 + iVar4);
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
      dVar19 = CONCAT44D(F32HI(dVar19) * F32LO(dVar19) * fVar16,
                                SUB84(dVar19,0));
    }
    else {
      dVar19 = dVar19 * dVar19 * dVar29;
    }
    uVar30 = (undefined4)((ulonglong)in_dr6 >> 0x20);
    if (in_FPSCR_SZ == '\0') {
      *(int *)(unsigned)(pdVar12 + 7) = (int)(D2U(dVar19) >> 0x20);
      *(undefined4 *)(unsigned)(pdVar12 + 8) = uVar30;
      *(int *)(unsigned)((int)pdVar12 + 0x44) = SUB84(in_dr6,0);
      *(undefined4 *)(unsigned)(pdVar12 + 10) = *(undefined4 *)(unsigned)((int)ar6 + 4);
      *(undefined4 *)(unsigned)((int)pdVar12 + 0x54) = *(undefined4 *)(unsigned)(ar6 + 1);
      *(undefined4 *)(unsigned)(pdVar12 + 0xb) = *(undefined4 *)(unsigned)((int)ar6 + 0xc);
      *(undefined4 *)(unsigned)((int)pdVar12 + 100) = *(undefined4 *)(unsigned)ar6;
      dVar19 = CONCAT44D(*(undefined4 *)(unsigned)ar6,*(undefined4 *)(unsigned)((int)ar6 + 4));
    }
    else {
      pdVar12[7] = dVar19;
      pdVar12[8] = in_dr6;
      *(undefined8 *)(unsigned)((int)pdVar12 + 0x44) = in_xd6;
      pdVar12[10] = *(double *)(unsigned)((int)ar6 + 4);
      *(double *)(unsigned)((int)pdVar12 + 0x54) = ar6[1];
      pdVar12[0xb] = *(double *)(unsigned)((int)ar6 + 0xc);
      *(double *)(unsigned)((int)pdVar12 + 100) = *ar6;
      in_xd2 = *(double *)(unsigned)((int)ar6 + 4);
      dVar19 = *ar6;
    }
    if (in_FPSCR_PR == '\0') {
      fVar18 = (F32LO(dVar19) - fVar31) * F32HI(dVar19) * fVar18;
    }
    else {
      fVar18 = SUB84((dVar19 - dVar28) * (dVar19 - dVar28) * dVar15,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(unsigned)((int)pdVar12 + 0x5c) = fVar18;
      dVar19 = CONCAT44D(*(undefined4 *)(unsigned)(ar6 + 1),*(undefined4 *)(unsigned)(puVar14 + iVar4));
    }
    else {
      *(double *)(unsigned)((int)pdVar12 + 0x5c) = in_xd2;
      dVar19 = ar6[1];
      in_xd2 = *(double *)(unsigned)(puVar14 + iVar4);
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
      dVar19 = CONCAT44D(F32HI(dVar19) * F32LO(dVar19) * fVar16,
                                SUB84(dVar19,0));
    }
    else {
      dVar19 = dVar19 * dVar19 * dVar29;
    }
    uVar23 = (undefined4)(D2U(dVar19) >> 0x20);
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(unsigned)(pdVar12 + 0xc) = uVar23;
      *(int *)(unsigned)(pdVar12 + 0xd) = (int)((ulonglong)in_dr8 >> 0x20);
      *(int *)(unsigned)((int)pdVar12 + 0x6c) = SUB84(in_dr8,0);
      uVar26 = *(undefined4 *)(unsigned)((int)pdVar12 + 0x3c);
      uVar27 = *(undefined4 *)(unsigned)(pdVar12 + 7);
      dVar24 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar12 + 2),SUB84(in_dr4,0));
      in_dr6 = CONCAT44D(uVar30,*(undefined4 *)(unsigned)((int)pdVar12 + 0x14));
      dVar19 = CONCAT44D(uVar23,uVar27);
      dVar36 = CONCAT44D(uVar26,SUB84(dVar15,0));
      dVar15 = CONCAT44D(uVar27,uVar26);
    }
    else {
      pdVar12[0xc] = dVar19;
      pdVar12[0xd] = in_dr8;
      *(double *)(unsigned)((int)pdVar12 + 0x6c) = in_xd8;
      dVar36 = *(double *)(unsigned)((int)pdVar12 + 0x3c);
      in_xd2 = pdVar12[7];
      dVar24 = pdVar12[2];
      uVar27 = (undefined4)((ulonglong)in_xd2 >> 0x20);
      uVar26 = SUB84(in_xd2,0);
      dVar15 = in_xd2;
      in_xd8 = dVar36;
    }
    fVar18 = F32HI(dVar24);
    if (in_FPSCR_PR == '\0') {
      fVar16 = F32LO(dVar19) * F32LO(in_dr6);
      dVar36 = CONCAT44D(F32HI(dVar36) * fVar18,SUB84(dVar36,0));
    }
    else {
      fVar16 = SUB84(dVar19 * in_dr6,0);
      dVar36 = dVar36 * dVar24;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar24 = CONCAT44D(fVar18,*(undefined4 *)(unsigned)((int)pdVar12 + 0x34));
      dVar19 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar12 + 0xc),SUB84(in_dr6,0));
      in_xd8 = CONCAT44D(uVar26,fVar16);
    }
    else {
      in_xd4 = *(double *)(unsigned)((int)pdVar12 + 0x34);
      dVar19 = *(double *)(unsigned)((int)pdVar12 + 0xc);
    }
    fVar18 = F32HI(dVar19);
    if (in_FPSCR_PR == '\0') {
      dVar20 = CONCAT44D(F32HI(in_xd8) * fVar18,SUB84(in_xd8,0));
    }
    else {
      dVar20 = in_xd8 * dVar19;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar36 = CONCAT44D((int)(D2U(dVar36) >> 0x20),uVar27);
      dVar15 = in_xd0;
    }
    if (in_FPSCR_PR == '\0') {
      dVar36 = CONCAT44D(F32HI(dVar36) - F32LO(dVar20),SUB84(dVar36,0)
                               );
    }
    else {
      dVar36 = dVar36 - dVar20;
    }
    dVar35 = in_xd4;
    if (in_FPSCR_SZ == '\0') {
      dVar20 = CONCAT44D((int)(D2U(dVar20) >> 0x20),SUB84(dVar24,0));
      dVar35 = in_xd2;
    }
    if (in_FPSCR_PR == '\0') {
      dVar36 = CONCAT44D((int)(D2U(dVar36) >> 0x20),F32LO(dVar36) * fVar18);
      fVar18 = F32LO(dVar20) * F32LO(dVar19) - F32HI(dVar20);
    }
    else {
      dVar36 = dVar36 * dVar19;
      fVar18 = SUB84(dVar20 * dVar19 - dVar20 * dVar19,0);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar20 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar12 + 0xc),fVar18);
    }
    else {
      dVar20 = pdVar12[0xc];
    }
    if (in_FPSCR_PR == '\0') {
      dVar20 = CONCAT44D(F32HI(dVar20) * F32LO(dVar20),SUB84(dVar20,0)
                               );
    }
    else {
      dVar20 = dVar20 * dVar20;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar20 = CONCAT44D((int)(D2U(dVar20) >> 0x20),
                                *(undefined4 *)(unsigned)((int)pdVar12 + 0x5c));
    }
    else {
      dVar35 = *(double *)(unsigned)((int)pdVar12 + 0x5c);
    }
    if (in_FPSCR_PR == '\0') {
      dVar20 = CONCAT44D(F32HI(dVar36) * F32LO(dVar20) +
                                F32HI(dVar20),SUB84(dVar20,0));
    }
    dVar25 = in_xd4;
    if (in_FPSCR_SZ == '\0') {
      dVar20 = CONCAT44D((int)(D2U(dVar20) >> 0x20),SUB84(dVar24,0));
      dVar25 = dVar35;
    }
    if (in_FPSCR_PR == '\0') {
      fVar18 = F32LO(dVar20) * F32HI(dVar24);
      dVar20 = CONCAT44D((int)(D2U(dVar20) >> 0x20),fVar18);
      fVar18 = F32LO(dVar36) - fVar18;
    }
    else {
      dVar20 = dVar20 * dVar24;
      fVar18 = SUB84(dVar36 - dVar20,0);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar15 = CONCAT44D(fVar18,*(undefined4 *)(unsigned)((int)pdVar12 + 100));
    }
    if (in_FPSCR_PR == '\0') {
      dVar29 = (double)((ulonglong)
                        (uint)((F32HI(dVar15) * F32LO(dVar15) +
                               F32HI(dVar20)) * F32LO(dVar29)) << 0x20);
    }
    else {
      dVar29 = (double)(D2U(dVar20) & 0xffffffff00000000) * dVar29;
    }
    if (in_FPSCR_PR == '\0' && F32HI(dVar29) < SUB84(dVar29,0)) {
      iVar5 = 0;
      puVar11 = (undefined8 *)(unsigned)(puVar14 + iVar4 + 4);
      iVar3 = 0;
      iVar9 = 2;
      while (iVar6 = iVar3, iVar6 < 3) {
        if (in_FPSCR_SZ == '\0') {
          uVar21 = CONCAT44(*(undefined4 *)(unsigned)((int)pdVar12 + iVar9 * 0x28 + 0x14),0x3f800000);
        }
        else {
          uVar21 = *(undefined8 *)(unsigned)((int)pdVar12 + iVar9 * 0x28 + 0x14);
        }
        puVar10 = (undefined8 *)(unsigned)((int)pdVar12 + iVar6 * 0x28 + 0x14);
        if (in_FPSCR_SZ == '\0') {
          uVar22 = CONCAT44(*(undefined4 *)(unsigned)puVar10,(float)uVar21);
        }
        else {
          uVar22 = *puVar10;
        }
        fVar18 = (float)uVar22;
        if (((in_FPSCR_PR == '\0' && (float)uVar21 < F32HI(uVar21)) ^ 1) !=
            -((in_FPSCR_PR == '\0' && fVar18 < F32HI(uVar22)) - 1)) {
          if (in_FPSCR_SZ == '\0') {
            fVar18 = *(float *)(unsigned)((int)pdVar12 + iVar9 * 0x28 + 0x14);
            dVar15 = CONCAT44D((int)(D2U(dVar15) >> 0x20),
                                      *(undefined4 *)(unsigned)((int)pdVar12 + iVar6 * 0x28 + 0x14));
            fVar16 = fVar18;
            dVar29 = CONCAT44D(fVar18,SUB84(dVar24,0));
          }
          else {
            dVar25 = *(double *)(unsigned)((int)pdVar12 + iVar9 * 0x28 + 0x14);
            fVar16 = F32HI(dVar25);
            dVar29 = dVar25;
          }
          dVar36 = CONCAT44D(0x3f800000,-fVar18);
          if (in_FPSCR_PR == '\0') {
            dVar36 = CONCAT44D(0x3f800000,-fVar18 + 1.0);
            dVar15 = CONCAT44D((int)(D2U(dVar15) >> 0x20),F32LO(dVar15) - fVar16);
          }
          else {
            dVar36 = dVar36 + dVar36;
            dVar15 = dVar15 - dVar29;
          }
          if (in_FPSCR_SZ == '\0') {
            dVar29 = CONCAT44D(SUB84(dVar36,0),
                                      *(undefined4 *)(unsigned)((int)pdVar12 + iVar9 * 0x28 + 0xc));
          }
          else {
            in_xd4 = *(double *)(unsigned)((int)pdVar12 + iVar9 * 0x28 + 0xc);
            dVar29 = dVar25;
          }
          if (in_FPSCR_PR == '\0') {
            dVar29 = CONCAT44D(F32HI(dVar29) / F32LO(dVar15),
                                      SUB84(dVar29,0));
          }
          else {
            dVar29 = dVar29 / dVar15;
          }
          if (in_FPSCR_SZ == '\0') {
            dVar36 = CONCAT44D((int)(D2U(dVar36) >> 0x20),
                                      *(undefined4 *)(unsigned)((int)pdVar12 + iVar6 * 0x28 + 0xc));
            dVar15 = (double)(D2U(dVar29) & 0xffffffff);
          }
          else {
            dVar25 = *(double *)(unsigned)((int)pdVar12 + iVar6 * 0x28 + 0xc);
          }
          if (in_FPSCR_PR == '\0') {
            dVar36 = CONCAT44D((int)(D2U(dVar36) >> 0x20),
                                      F32LO(dVar36) - F32LO(dVar29));
          }
          else {
            dVar36 = dVar36 - dVar29;
          }
          uVar30 = (undefined4)(D2U(dVar29) >> 0x20);
          if (in_FPSCR_SZ == '\0') {
            dVar19 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar12 + iVar9 * 5 + 2),SUB84(dVar19,0));
            dVar29 = CONCAT44D(uVar30,SUB84(dVar15,0));
            dVar24 = CONCAT44D(uVar30,fVar31);
          }
          else {
            dVar19 = pdVar12[iVar9 * 5 + 2];
            dVar24 = dVar29;
            in_xd4 = in_xd12;
          }
          if (in_FPSCR_PR == '\0') {
            dVar29 = (double)(ulonglong)
                             (uint)(F32HI(dVar29) * F32LO(dVar36) +
                                   SUB84(dVar29,0));
          }
          if (in_FPSCR_SZ == '\0') {
            dVar36 = CONCAT44D((int)(D2U(dVar36) >> 0x20),
                                      *(undefined4 *)(unsigned)(pdVar12 + iVar6 * 5 + 2));
            dVar29 = CONCAT44D(fVar34,SUB84(dVar29,0));
          }
          else {
            dVar25 = pdVar12[iVar6 * 5 + 2];
            dVar29 = dVar33;
          }
          fVar18 = F32HI(dVar19);
          if (in_FPSCR_PR == '\0') {
            dVar36 = CONCAT44D((int)(D2U(dVar36) >> 0x20),F32LO(dVar36) - fVar18);
            dVar24 = CONCAT44D(uVar30,F32HI(dVar29) * F32LO(dVar29) +
                                             SUB84(dVar24,0));
          }
          else {
            dVar36 = dVar36 - dVar19;
          }
          uVar30 = (undefined4)(D2U(dVar24) >> 0x20);
          if (in_FPSCR_SZ == '\0') {
            dVar19 = CONCAT44D(*(undefined4 *)(unsigned)(puVar14 + iVar4),SUB84(dVar19,0));
            dVar29 = CONCAT44D(uVar30,fVar18);
          }
          else {
            dVar19 = *(double *)(unsigned)(puVar14 + iVar4);
            dVar29 = dVar24;
          }
          if (in_FPSCR_PR == '\0') {
            dVar29 = (double)(ulonglong)
                             (uint)(F32HI(dVar29) * F32LO(dVar36) +
                                   SUB84(dVar29,0));
          }
          dVar20 = dVar28;
          if (in_FPSCR_SZ == '\0') {
            dVar20 = CONCAT44D(fVar32,SUB84(dVar29,0));
          }
          if (in_FPSCR_PR == '\0') {
            dVar19 = CONCAT44D(F32HI(dVar20) * F32LO(dVar20) +
                                      F32HI(dVar19),SUB84(dVar19,0));
          }
          dVar15 = dVar24;
          if (in_FPSCR_SZ == '\0') {
            dVar15 = CONCAT44D(uVar30,SUB84(dVar20,0));
          }
          pdVar7 = (double *)(unsigned)(puVar11 + iVar5 * 5);
          uVar23 = (undefined4)(D2U(dVar36) >> 0x20);
          if (in_FPSCR_SZ == '\0') {
            *(int *)(unsigned)pdVar7 = SUB84(dVar24,0);
            *(int *)(unsigned)((int)pdVar7 + 4) = (int)(D2U(dVar19) >> 0x20);
            *(undefined4 *)(unsigned)(pdVar7 + 1) = uVar23;
            dVar36 = CONCAT44D(uVar23,*(undefined4 *)(unsigned)(pdVar12 + iVar6 * 5 + 3));
            dVar24 = CONCAT44D(uVar30,*(undefined4 *)(unsigned)(pdVar12 + iVar9 * 5 + 3));
          }
          else {
            *pdVar7 = in_xd4;
            *(double *)(unsigned)((int)pdVar7 + 4) = dVar19;
            pdVar7[1] = dVar36;
            dVar25 = pdVar12[iVar6 * 5 + 3];
            in_xd4 = pdVar12[iVar9 * 5 + 3];
          }
          iVar5 = iVar5 + 1;
          if (in_FPSCR_PR == '\0') {
            fVar18 = F32LO(dVar36) - F32LO(dVar24);
          }
          else {
            fVar18 = SUB84(dVar36 - dVar24,0);
          }
          dVar29 = in_xd4;
          if (in_FPSCR_SZ == '\0') {
            dVar29 = CONCAT44D(SUB84(dVar24,0),fVar18);
          }
          fVar18 = F32HI(dVar15);
          if (in_FPSCR_PR == '\0') {
            dVar29 = CONCAT44D(fVar18 * F32LO(dVar29) + F32HI(dVar29),
                                      SUB84(dVar29,0));
          }
          uVar30 = (undefined4)(D2U(dVar29) >> 0x20);
          if (in_FPSCR_SZ == '\0') {
            *(undefined4 *)(unsigned)(pdVar7 + 3) = uVar30;
            dVar29 = CONCAT44D(uVar30,*(undefined4 *)(unsigned)((int)pdVar12 + iVar6 * 0x28 + 0x1c));
            dVar24 = CONCAT44D((int)(D2U(dVar24) >> 0x20),
                                      *(undefined4 *)(unsigned)((int)pdVar12 + iVar9 * 0x28 + 0x1c));
          }
          else {
            pdVar7[3] = dVar29;
            dVar25 = *(double *)(unsigned)((int)pdVar12 + iVar6 * 0x28 + 0x1c);
            in_xd4 = *(double *)(unsigned)((int)pdVar12 + iVar9 * 0x28 + 0x1c);
          }
          if (in_FPSCR_PR == '\0') {
            fVar16 = F32LO(dVar29) - F32LO(dVar24);
          }
          else {
            fVar16 = SUB84(dVar29 - dVar24,0);
          }
          dVar29 = in_xd4;
          if (in_FPSCR_SZ == '\0') {
            dVar29 = CONCAT44D(SUB84(dVar24,0),fVar16);
          }
          if (in_FPSCR_PR == '\0') {
            dVar29 = CONCAT44D(fVar18 * F32LO(dVar29) + F32HI(dVar29),
                                      SUB84(dVar29,0));
          }
          if (in_FPSCR_SZ == '\0') {
            *(int *)(unsigned)((int)pdVar7 + 0x1c) = (int)(D2U(dVar29) >> 0x20);
          }
          else {
            *(double *)(unsigned)((int)pdVar7 + 0x1c) = dVar29;
          }
        }
        pdVar7 = pdVar12 + iVar6 * 5;
        if (in_FPSCR_SZ == '\0') {
          uVar21 = CONCAT44(*(undefined4 *)(unsigned)((int)pdVar7 + 0x14),0x3f800000);
        }
        else {
          uVar21 = *(undefined8 *)(unsigned)((int)pdVar7 + 0x14);
        }
        if (in_FPSCR_PR == '\0' && (float)uVar21 < F32HI(uVar21)) {
          if (in_FPSCR_SZ == '\0') {
            dVar24 = CONCAT44D(*(undefined4 *)(unsigned)pdVar7,*(undefined4 *)(unsigned)((int)pdVar7 + 4));
          }
          else {
            dVar24 = *pdVar7;
            in_xd4 = *(double *)(unsigned)((int)pdVar7 + 4);
          }
          pdVar8 = (double *)(unsigned)(puVar11 + iVar5 * 5);
          iVar5 = iVar5 + 1;
          if (in_FPSCR_SZ == '\0') {
            *(int *)(unsigned)pdVar8 = (int)(D2U(dVar24) >> 0x20);
            *(int *)(unsigned)((int)pdVar8 + 4) = SUB84(dVar24,0);
            *(undefined4 *)(unsigned)(pdVar8 + 1) = *(undefined4 *)(unsigned)(pdVar7 + 1);
            *(undefined4 *)(unsigned)(pdVar8 + 3) = *(undefined4 *)(unsigned)(pdVar7 + 3);
            *(undefined4 *)(unsigned)((int)pdVar8 + 0x1c) = *(undefined4 *)(unsigned)((int)pdVar7 + 0x1c);
          }
          else {
            *pdVar8 = dVar24;
            *(double *)(unsigned)((int)pdVar8 + 4) = in_xd4;
            pdVar8[1] = pdVar7[1];
            pdVar8[3] = pdVar7[3];
            *(undefined8 *)(unsigned)((int)pdVar8 + 0x1c) = *(undefined8 *)(unsigned)((int)pdVar7 + 0x1c);
          }
        }
        iVar9 = iVar6;
        iVar3 = iVar6 + 1;
      }
      *(undefined4 *)(unsigned)((int)ar7 + 0x1c) = *(undefined4 *)(unsigned)0x8c4aa388;
      *(undefined4 *)(unsigned)(ar7 + 3) = *puVar2;
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(unsigned)((int)ar7 + 0x14) = *(undefined4 *)(unsigned)(puVar14 + iVar4 + 0x20);
        *(undefined4 *)(unsigned)(ar7 + 2) = *(undefined4 *)(unsigned)(puVar14 + iVar4 + 0x1c);
        *(undefined4 *)(unsigned)((int)ar7 + 0xc) = *(undefined4 *)(unsigned)(puVar14 + iVar4 + 0xc);
        *(undefined4 *)(unsigned)(ar7 + 1) = *(undefined4 *)(unsigned)(puVar14 + iVar4 + 8);
        uVar30 = 0xe0000000;
        puVar10 = (undefined8 *)(unsigned)((int)ar7 + 4);
        *(undefined4 *)(unsigned)puVar10 = *(undefined4 *)(unsigned)puVar11;
      }
      else {
        ar7[2] = *(undefined8 *)(unsigned)(puVar14 + iVar4 + 0x20);
        ar7[1] = *(undefined8 *)(unsigned)(puVar14 + iVar4 + 0x1c);
        *ar7 = *(undefined8 *)(unsigned)(puVar14 + iVar4 + 0xc);
        ar7[-1] = *(undefined8 *)(unsigned)(puVar14 + iVar4 + 8);
        uVar30 = 0xe0000000;
        puVar10 = ar7 + -2;
        *puVar10 = *puVar11;
      }
      *(undefined4 *)(unsigned)((int)puVar10 + -4) = uVar30;
      *(undefined4 *)(unsigned)(puVar10 + 7) = *puVar1;
      *(undefined4 *)(unsigned)((int)puVar10 + 0x34) = *puVar2;
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(unsigned)(puVar10 + 6) = *(undefined4 *)(unsigned)(puVar14 + iVar4 + 0x48);
        *(undefined4 *)(unsigned)((int)puVar10 + 0x2c) = *(undefined4 *)(unsigned)(puVar14 + iVar4 + 0x44);
        *(undefined4 *)(unsigned)(puVar10 + 5) = *(undefined4 *)(unsigned)(puVar14 + iVar4 + 0x34);
        *(undefined4 *)(unsigned)((int)puVar10 + 0x24) = *(undefined4 *)(unsigned)(puVar14 + iVar4 + 0x30);
        puVar10 = puVar10 + 4;
        *(undefined4 *)(unsigned)puVar10 = *(undefined4 *)(unsigned)(puVar14 + iVar4 + 0x2c);
      }
      else {
        *(undefined8 *)(unsigned)((int)puVar10 + 0x2c) = *(undefined8 *)(unsigned)(puVar14 + iVar4 + 0x48);
        *(undefined8 *)(unsigned)((int)puVar10 + 0x24) = *(undefined8 *)(unsigned)(puVar14 + iVar4 + 0x44);
        *(undefined8 *)(unsigned)((int)puVar10 + 0x1c) = *(undefined8 *)(unsigned)(puVar14 + iVar4 + 0x34);
        *(undefined8 *)(unsigned)((int)puVar10 + 0x14) = *(undefined8 *)(unsigned)(puVar14 + iVar4 + 0x30);
        puVar10 = (undefined8 *)(unsigned)((int)puVar10 + 0xc);
        *puVar10 = *(undefined8 *)(unsigned)(puVar14 + iVar4 + 0x2c);
      }
      *(undefined4 *)(unsigned)((int)puVar10 + -4) = uVar30;
      if (iVar5 != 3) {
        *(undefined4 *)(unsigned)(puVar10 + 7) = *puVar1;
        *(undefined4 *)(unsigned)((int)puVar10 + 0x34) = *puVar2;
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)(unsigned)(puVar10 + 6) = *(undefined4 *)(unsigned)(puVar14 + iVar4 + 0x98);
          *(undefined4 *)(unsigned)((int)puVar10 + 0x2c) = *(undefined4 *)(unsigned)(puVar14 + iVar4 + 0x94);
          *(undefined4 *)(unsigned)(puVar10 + 5) = *(undefined4 *)(unsigned)(puVar14 + iVar4 + 0x84);
          *(undefined4 *)(unsigned)((int)puVar10 + 0x24) = *(undefined4 *)(unsigned)(puVar14 + iVar4 + 0x80);
          puVar10 = puVar10 + 4;
          *(undefined4 *)(unsigned)puVar10 = *(undefined4 *)(unsigned)(puVar14 + iVar4 + 0x7c);
        }
        else {
          *(undefined8 *)(unsigned)((int)puVar10 + 0x2c) = *(undefined8 *)(unsigned)(puVar14 + iVar4 + 0x98);
          *(undefined8 *)(unsigned)((int)puVar10 + 0x24) = *(undefined8 *)(unsigned)(puVar14 + iVar4 + 0x94);
          *(undefined8 *)(unsigned)((int)puVar10 + 0x1c) = *(undefined8 *)(unsigned)(puVar14 + iVar4 + 0x84);
          *(undefined8 *)(unsigned)((int)puVar10 + 0x14) = *(undefined8 *)(unsigned)(puVar14 + iVar4 + 0x80);
          puVar10 = (undefined8 *)(unsigned)((int)puVar10 + 0xc);
          *puVar10 = *(undefined8 *)(unsigned)(puVar14 + iVar4 + 0x7c);
        }
        *(undefined4 *)(unsigned)((int)puVar10 + -4) = uVar30;
      }
      *(undefined4 *)(unsigned)(puVar10 + 7) = *puVar1;
      *(undefined4 *)(unsigned)((int)puVar10 + 0x34) = *puVar2;
      uVar30 = 0xf0000000;
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(unsigned)(puVar10 + 6) = *(undefined4 *)(unsigned)(puVar14 + iVar4 + 0x70);
        *(undefined4 *)(unsigned)((int)puVar10 + 0x2c) = *(undefined4 *)(unsigned)(puVar14 + iVar4 + 0x6c);
        *(undefined4 *)(unsigned)(puVar10 + 5) = *(undefined4 *)(unsigned)(puVar14 + iVar4 + 0x5c);
        *(undefined4 *)(unsigned)((int)puVar10 + 0x24) = *(undefined4 *)(unsigned)(puVar14 + iVar4 + 0x58);
        puVar10 = puVar10 + 4;
        *(undefined4 *)(unsigned)puVar10 = *(undefined4 *)(unsigned)(puVar14 + iVar4 + 0x54);
      }
      else {
        *(undefined8 *)(unsigned)((int)puVar10 + 0x2c) = *(undefined8 *)(unsigned)(puVar14 + iVar4 + 0x70);
        *(undefined8 *)(unsigned)((int)puVar10 + 0x24) = *(undefined8 *)(unsigned)(puVar14 + iVar4 + 0x6c);
        *(undefined8 *)(unsigned)((int)puVar10 + 0x1c) = *(undefined8 *)(unsigned)(puVar14 + iVar4 + 0x5c);
        *(undefined8 *)(unsigned)((int)puVar10 + 0x14) = *(undefined8 *)(unsigned)(puVar14 + iVar4 + 0x58);
        puVar10 = (undefined8 *)(unsigned)((int)puVar10 + 0xc);
        *puVar10 = *(undefined8 *)(unsigned)(puVar14 + iVar4 + 0x54);
      }
      *(undefined4 *)(unsigned)((int)puVar10 + -4) = uVar30;
      ar7 = (undefined8 *)(unsigned)((int)puVar10 + 0x1c);
      *(undefined4 *)(unsigned)0x8c4aa520 = *(undefined4 *)(unsigned)0x8c4aa520 + iVar5;
    }
  }
  return ar7;
}

__asm__(".globl _FUN_8c22c058\n.set _FUN_8c22c058, _FUN_8c22c058_def\n");
