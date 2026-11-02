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
undefined8 * FUN_8c22dff8_def(double *ar4,double *ar5,double *ar6,undefined8 *ar7)

{
  ring[rp++ & 255] = "FUN_8c22dff8";
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
  double dVar11;
  double dVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  double dVar18;
  ulonglong uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined4 uVar24;
  double dVar22;
  undefined4 uVar25;
  double dVar23;
  double dVar26;
  double dVar27;
  undefined4 in_fr7 = 0;
  double dVar28;
  undefined4 in_fr9 = 0;
  double dVar29;
  float fVar30;
  undefined4 in_fr11 = 0;
  float fVar31;
  double dVar32;
  float fVar33;
  double in_dr12 = 0;
  double dVar34;
  double in_dr14 = 0;
  double dVar35;
  double in_xd2 = 0;
  double in_xd4 = 0;
  double dVar36;
  double in_xd6 = 0;
  double dVar37;
  double in_xd8 = 0;
  double in_xd10 = 0;
  double in_xd14 = 0;
  bool bVar38;
  int iVar39;
  int iVar40;
  int iVar41;
  char in_FPSCR_PR = 0;
  char in_FPSCR_SZ = 0;
  
  if (in_FPSCR_SZ == '\0') {
    puVar10 = ((undefined4 *)(fr0_ - 0x20));
    (*(undefined4 *)(fr0_ + (int)0xffffffdc)) = CONCAT44((int)((ulonglong)in_dr12 >> 0x20),(*(uint*)((uchar*)((undefined1 *)(fr0_ - 0x2c))+8)));
  }
  else {
    puVar10 = (undefined4 *)(unsigned)((undefined1 *)(fr0_ - 0x2c));
  }
  if (((*(undefined4 *)(unsigned)(unsigned)0x8c4aa4f0) & 0x10000) == 0) {
    if (in_FPSCR_SZ == '\0') {
      in_dr14 = CONCAT44D((int)((ulonglong)in_dr14 >> 0x20),0x3f000000);
    }
    else {
      in_xd14 = 2.78134754523302e-309;
    }
    fVar16 = F32LO(in_dr14);
    if (((*(undefined4 *)(unsigned)(unsigned)0x8c4aa4f0) & 0x20000) == 0) {
      dVar26 = in_xd14;
      dVar36 = in_xd14;
      if (in_FPSCR_SZ == '\0') {
        dVar26 = CONCAT44D(fVar16,fVar16);
        dVar36 = in_xd4;
      }
    }
    else {
      if (in_FPSCR_SZ == '\0') {
        dVar26 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c277af8),(*(undefined4 *)(unsigned)(unsigned)0x8c277afc));
      }
      else {
        dVar26 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c277afc),(*(undefined4 *)(unsigned)(unsigned)0x8c277af8));
        in_xd4 = CONCAT44D((*(uint *)(unsigned)0x8c277b00),(*(undefined4 *)(unsigned)(unsigned)0x8c277afc));
      }
      dVar36 = in_xd4;
      if (in_FPSCR_PR == '\0') {
        dVar26 = CONCAT44D(F32HI(dVar26) + fVar16,
                                  F32LO(dVar26) + fVar16);
      }
      else {
        dVar26 = dVar26 + in_dr14 + in_dr14;
      }
    }
    if (in_FPSCR_SZ == '\0') {
      dVar28 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4aa4e0),(*(undefined4 *)(unsigned)(unsigned)0x8c4aa4dc));
      dVar32 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4aa4a8),in_fr11);
      uVar25 = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa4a8);
      dVar29 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4aa4a8),in_fr7);
    }
    else {
      dVar32 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4aa4ac),(*(undefined4 *)(unsigned)(unsigned)0x8c4aa4a8));
      dVar28 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4aa4e4),(*(undefined4 *)(unsigned)(unsigned)0x8c4aa4e0));
      in_xd2 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4aa4e0),(*(undefined4 *)(unsigned)(unsigned)0x8c4aa4dc));
      uVar25 = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa4ac);
      dVar29 = dVar32;
    }
    if (in_FPSCR_PR == '\0') {
      dVar32 = CONCAT44D(F32HI(dVar32) *
                                F32HI(dVar28),SUB84(dVar32,0));
    }
    else {
      dVar32 = dVar32 * dVar28;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar29 = CONCAT44D(uVar25,in_fr9);
    }
    if (in_FPSCR_PR == '\0') {
      dVar29 = CONCAT44D(F32HI(dVar29) * F32LO(dVar28),SUB84(dVar29,0)
                               );
    }
    else {
      dVar29 = dVar29 * dVar28;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar29 = CONCAT44D((int)(D2U(dVar29) >> 0x20),(*(undefined4 *)(unsigned)(unsigned)0x8c4aa4b4));
    }
    else {
      in_xd8 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4aa4b8),(*(undefined4 *)(unsigned)(unsigned)0x8c4aa4b4));
    }
    fVar33 = F32HI(dVar32);
    fVar30 = F32HI(dVar29);
    if (in_FPSCR_PR == '\0') {
      dVar28 = CONCAT44D(1.0 / fVar33,1.0 / fVar30);
    }
    else {
      dVar28 = (0.007812501848093234 / dVar32) / dVar29;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar32 = CONCAT44D(fVar33,(*(undefined4 *)(unsigned)(unsigned)0x8c4aa4b8));
      *(undefined4 *)(unsigned)((int)puVar10 + -0x78) = *(undefined4 *)(unsigned)((int)ar4 + 4);
      *(undefined4 *)(unsigned)((int)puVar10 + -0x74) = *(undefined4 *)(unsigned)(ar4 + 1);
      *(undefined4 *)(unsigned)((int)puVar10 + -0x70) = *(undefined4 *)(unsigned)((int)ar4 + 0xc);
      *(undefined4 *)(unsigned)((int)puVar10 + -100) = *(undefined4 *)(unsigned)ar4;
      dVar18 = CONCAT44D(*(undefined4 *)(unsigned)ar4,*(undefined4 *)(unsigned)((int)ar4 + 4));
      dVar11 = CONCAT44D(fVar16,in_fr1);
    }
    else {
      in_xd10 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4aa4bc),(*(undefined4 *)(unsigned)(unsigned)0x8c4aa4b8));
      *(undefined8 *)(unsigned)((int)puVar10 + -0x78) = *(undefined8 *)(unsigned)((int)ar4 + 4);
      *(double *)(unsigned)((int)puVar10 + -0x74) = ar4[1];
      *(undefined8 *)(unsigned)((int)puVar10 + -0x70) = *(undefined8 *)(unsigned)((int)ar4 + 0xc);
      *(double *)(unsigned)((int)puVar10 + -100) = *ar4;
      in_xd2 = *(double *)(unsigned)((int)ar4 + 4);
      dVar18 = *ar4;
      dVar11 = in_xd14;
    }
    fVar33 = F32LO(dVar29);
    fVar16 = F32LO(dVar28);
    if (in_FPSCR_PR == '\0') {
      fVar13 = (F32LO(dVar18) - fVar33) * F32HI(dVar18) * fVar16;
    }
    else {
      fVar13 = SUB84((dVar18 - dVar29) * (dVar18 - dVar29) * dVar28,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(unsigned)((int)puVar10 + -0x6c) = fVar13;
      dVar18 = CONCAT44D(*(undefined4 *)(unsigned)ar4,*(undefined4 *)(unsigned)(ar4 + 1));
    }
    else {
      *(double *)(unsigned)((int)puVar10 + -0x6c) = in_xd2;
      in_xd2 = ar4[1];
      dVar18 = *ar4;
    }
    fVar31 = F32LO(dVar32);
    fVar13 = F32HI(dVar28);
    if (in_FPSCR_PR == '\0') {
      fVar14 = (F32LO(dVar18) - fVar31) * F32HI(dVar18) * fVar13;
    }
    else {
      fVar14 = SUB84((dVar18 - dVar32) * (dVar18 - dVar32) * dVar28,0);
    }
    fVar17 = F32HI(dVar26);
    if (in_FPSCR_SZ == '\0') {
      *(float *)(unsigned)((int)puVar10 + -0x68) = fVar14;
      *(undefined4 *)(unsigned)((int)puVar10 + -0x58) = *(undefined4 *)(unsigned)(ar4 + 2);
      *(undefined4 *)(unsigned)((int)puVar10 + -0x54) = *(undefined4 *)(unsigned)((int)ar4 + 0x14);
      dVar18 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 3),fVar17);
    }
    else {
      *(double *)(unsigned)((int)puVar10 + -0x68) = in_xd2;
      *(double *)(unsigned)((int)puVar10 + -0x58) = ar4[2];
      *(undefined8 *)(unsigned)((int)puVar10 + -0x54) = *(undefined8 *)(unsigned)((int)ar4 + 0x14);
      dVar18 = ar4[3];
      in_xd2 = dVar26;
    }
    fVar14 = F32HI(dVar11);
    if (in_FPSCR_PR == '\0') {
      dVar18 = (double)(ulonglong)
                       (uint)(fVar14 * F32HI(dVar18) + F32LO(dVar18));
    }
    uVar25 = SUB84(dVar26,0);
    if (in_FPSCR_SZ == '\0') {
      *(int *)(unsigned)((int)puVar10 + -0x60) = SUB84(dVar18,0);
      uVar19 = CONCAT44(*(undefined4 *)(unsigned)((int)ar4 + 0x1c),uVar25);
    }
    else {
      *(double *)(unsigned)((int)puVar10 + -0x60) = in_xd2;
      uVar19 = *(ulonglong *)(unsigned)((int)ar4 + 0x1c);
      in_xd2 = dVar36;
    }
    if (in_FPSCR_PR == '\0') {
      uVar19 = (ulonglong)(uint)(fVar14 * (float)(uVar19 >> 0x20) + (float)uVar19);
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)(unsigned)((int)puVar10 + -0x5c) = (int)uVar19;
      *(undefined4 *)(unsigned)((int)puVar10 + -0x50) = *(undefined4 *)(unsigned)((int)ar5 + 4);
      *(undefined4 *)(unsigned)((int)puVar10 + -0x4c) = *(undefined4 *)(unsigned)(ar5 + 1);
      *(undefined4 *)(unsigned)((int)puVar10 + -0x48) = *(undefined4 *)(unsigned)((int)ar5 + 0xc);
      *(undefined4 *)(unsigned)((int)puVar10 + -0x3c) = *(undefined4 *)(unsigned)ar5;
      dVar18 = CONCAT44D(*(undefined4 *)(unsigned)ar5,*(undefined4 *)(unsigned)((int)ar5 + 4));
    }
    else {
      *(double *)(unsigned)((int)puVar10 + -0x5c) = in_xd2;
      *(undefined8 *)(unsigned)((int)puVar10 + -0x50) = *(undefined8 *)(unsigned)((int)ar5 + 4);
      *(double *)(unsigned)((int)puVar10 + -0x4c) = ar5[1];
      *(undefined8 *)(unsigned)((int)puVar10 + -0x48) = *(undefined8 *)(unsigned)((int)ar5 + 0xc);
      *(double *)(unsigned)((int)puVar10 + -0x3c) = *ar5;
      in_xd2 = *(double *)(unsigned)((int)ar5 + 4);
      dVar18 = *ar5;
    }
    if (in_FPSCR_PR == '\0') {
      fVar15 = F32HI(dVar18);
      dVar18 = CONCAT44D(fVar15,(F32LO(dVar18) - fVar33) * fVar15 * fVar16);
    }
    else {
      dVar18 = (dVar18 - dVar29) * (dVar18 - dVar29) * dVar28;
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)(unsigned)((int)puVar10 + -0x44) = SUB84(dVar18,0);
      dVar18 = CONCAT44D((int)(D2U(dVar18) >> 0x20),*(undefined4 *)(unsigned)(ar5 + 1));
    }
    else {
      *(double *)(unsigned)((int)puVar10 + -0x44) = in_xd2;
      in_xd2 = ar5[1];
    }
    if (in_FPSCR_PR == '\0') {
      fVar15 = F32LO(dVar18) - fVar31;
    }
    else {
      fVar15 = SUB84(dVar18 - dVar32,0);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar18 = CONCAT44D(*(undefined4 *)(unsigned)ar5,fVar15);
    }
    else {
      dVar18 = *ar5;
    }
    if (in_FPSCR_PR == '\0') {
      fVar15 = F32LO(dVar18) * F32HI(dVar18) * fVar13;
    }
    else {
      fVar15 = SUB84(dVar18 * dVar18 * dVar28,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(unsigned)((int)puVar10 + -0x40) = fVar15;
      *(undefined4 *)(unsigned)((int)puVar10 + -0x30) = *(undefined4 *)(unsigned)(ar5 + 2);
      *(undefined4 *)(unsigned)((int)puVar10 + -0x2c) = *(undefined4 *)(unsigned)((int)ar5 + 0x14);
      dVar18 = CONCAT44D(*(undefined4 *)(unsigned)(ar5 + 3),fVar17);
    }
    else {
      *(double *)(unsigned)((int)puVar10 + -0x40) = in_xd2;
      *(double *)(unsigned)((int)puVar10 + -0x30) = ar5[2];
      *(undefined8 *)(unsigned)((int)puVar10 + -0x2c) = *(undefined8 *)(unsigned)((int)ar5 + 0x14);
      dVar18 = ar5[3];
      in_xd2 = dVar26;
    }
    if (in_FPSCR_PR == '\0') {
      dVar18 = (double)(ulonglong)
                       (uint)(fVar14 * F32HI(dVar18) + F32LO(dVar18));
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)(unsigned)((int)puVar10 + -0x38) = SUB84(dVar18,0);
      uVar19 = CONCAT44(*(undefined4 *)(unsigned)((int)ar5 + 0x1c),uVar25);
    }
    else {
      *(double *)(unsigned)((int)puVar10 + -0x38) = in_xd2;
      uVar19 = *(ulonglong *)(unsigned)((int)ar5 + 0x1c);
      in_xd2 = dVar36;
    }
    if (in_FPSCR_PR == '\0') {
      uVar19 = (ulonglong)(uint)(fVar14 * (float)(uVar19 >> 0x20) + (float)uVar19);
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)(unsigned)((int)puVar10 + -0x34) = (int)uVar19;
      *(undefined4 *)(unsigned)((int)puVar10 + -0x28) = *(undefined4 *)(unsigned)((int)ar6 + 4);
      *(undefined4 *)(unsigned)((int)puVar10 + -0x24) = *(undefined4 *)(unsigned)(ar6 + 1);
      *(undefined4 *)(unsigned)((int)puVar10 + -0x20) = *(undefined4 *)(unsigned)((int)ar6 + 0xc);
      *(undefined4 *)(unsigned)((int)puVar10 + -0x14) = *(undefined4 *)(unsigned)ar6;
      dVar18 = CONCAT44D(*(undefined4 *)(unsigned)ar6,*(undefined4 *)(unsigned)((int)ar6 + 4));
    }
    else {
      *(double *)(unsigned)((int)puVar10 + -0x34) = in_xd2;
      *(undefined8 *)(unsigned)((int)puVar10 + -0x28) = *(undefined8 *)(unsigned)((int)ar6 + 4);
      *(double *)(unsigned)((int)puVar10 + -0x24) = ar6[1];
      *(undefined8 *)(unsigned)((int)puVar10 + -0x20) = *(undefined8 *)(unsigned)((int)ar6 + 0xc);
      *(double *)(unsigned)((int)puVar10 + -0x14) = *ar6;
      in_xd2 = *(double *)(unsigned)((int)ar6 + 4);
      dVar18 = *ar6;
    }
    if (in_FPSCR_PR == '\0') {
      fVar16 = (F32LO(dVar18) - fVar33) * F32HI(dVar18) * fVar16;
    }
    else {
      fVar16 = SUB84((dVar18 - dVar29) * (dVar18 - dVar29) * dVar28,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(unsigned)((int)puVar10 + -0x1c) = fVar16;
      dVar18 = CONCAT44D(*(undefined4 *)(unsigned)ar6,*(undefined4 *)(unsigned)(ar6 + 1));
    }
    else {
      *(double *)(unsigned)((int)puVar10 + -0x1c) = in_xd2;
      in_xd2 = ar6[1];
      dVar18 = *ar6;
    }
    if (in_FPSCR_PR == '\0') {
      fVar13 = (F32LO(dVar18) - fVar31) * F32HI(dVar18) * fVar13;
    }
    else {
      fVar13 = SUB84((dVar18 - dVar32) * (dVar18 - dVar32) * dVar28,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(unsigned)((int)puVar10 + -0x18) = fVar13;
      *(undefined4 *)(unsigned)((int)puVar10 + -8) = *(undefined4 *)(unsigned)(ar6 + 2);
      *(undefined4 *)(unsigned)((int)puVar10 + -4) = *(undefined4 *)(unsigned)((int)ar6 + 0x14);
      fVar13 = *(float *)(unsigned)(ar6 + 3);
    }
    else {
      *(double *)(unsigned)((int)puVar10 + -0x18) = in_xd2;
      *(double *)(unsigned)((int)puVar10 + -8) = ar6[2];
      *(undefined8 *)(unsigned)((int)puVar10 + -4) = *(undefined8 *)(unsigned)((int)ar6 + 0x14);
      in_xd2 = ar6[3];
    }
    if (in_FPSCR_PR == '\0') {
      dVar26 = CONCAT44D(fVar14 * fVar13 + fVar17,uVar25);
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)(unsigned)((int)puVar10 + -0x10) = (int)(D2U(dVar26) >> 0x20);
      fVar13 = *(float *)(unsigned)((int)ar6 + 0x1c);
    }
    else {
      *(double *)(unsigned)((int)puVar10 + -0x10) = dVar26;
      in_xd2 = *(double *)(unsigned)((int)ar6 + 0x1c);
    }
    iVar3 = 0;
    if (in_FPSCR_PR == '\0') {
      dVar26 = (double)(ulonglong)(uint)(fVar14 * fVar13 + F32LO(dVar26));
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)(unsigned)((int)puVar10 + -0xc) = SUB84(dVar26,0);
    }
    else {
      *(double *)(unsigned)((int)puVar10 + -0xc) = dVar36;
    }
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
      fVar16 = (float)uVar21;
      if (((in_FPSCR_PR == '\0' && (float)uVar20 < F32HI(uVar20)) ^ 1) !=
          -((in_FPSCR_PR == '\0' && fVar16 < F32HI(uVar21)) - 1)) {
        if (in_FPSCR_SZ == '\0') {
          fVar16 = *(float *)(unsigned)((int)puVar10 + iVar6 + -100);
          dVar11 = CONCAT44D((int)(D2U(dVar11) >> 0x20),
                                    *(undefined4 *)(unsigned)((int)puVar10 + iVar7 + -100));
          fVar13 = fVar16;
          dVar26 = CONCAT44D(fVar16,SUB84(dVar26,0));
        }
        else {
          in_xd2 = *(double *)(unsigned)((int)puVar10 + iVar6 + -100);
          fVar13 = F32HI(in_xd2);
          dVar26 = in_xd2;
        }
        dVar18 = CONCAT44D(0x3f800000,-fVar16);
        if (in_FPSCR_PR == '\0') {
          dVar18 = CONCAT44D(0x3f800000,-fVar16 + 1.0);
          dVar11 = CONCAT44D((int)(D2U(dVar11) >> 0x20),F32LO(dVar11) - fVar13);
        }
        else {
          dVar18 = dVar18 + dVar18;
          dVar11 = dVar11 - dVar26;
        }
        if (in_FPSCR_SZ == '\0') {
          dVar26 = CONCAT44D(*(undefined4 *)(unsigned)((int)puVar10 + iVar6 + -0x6c),SUB84(dVar26,0));
          dVar28 = CONCAT44D(SUB84(dVar18,0),SUB84(dVar28,0));
        }
        else {
          dVar26 = *(double *)(unsigned)((int)puVar10 + iVar6 + -0x6c);
          dVar28 = in_xd2;
        }
        if (in_FPSCR_PR == '\0') {
          dVar28 = CONCAT44D(F32HI(dVar28) / F32LO(dVar11),
                                    SUB84(dVar28,0));
        }
        else {
          dVar28 = dVar28 / dVar11;
        }
        fVar16 = F32HI(dVar26);
        if (in_FPSCR_SZ == '\0') {
          dVar18 = CONCAT44D((int)(D2U(dVar18) >> 0x20),
                                    *(undefined4 *)(unsigned)((int)puVar10 + iVar7 + -0x6c));
          dVar11 = (double)(ulonglong)(uint)fVar16;
        }
        else {
          in_xd2 = *(double *)(unsigned)((int)puVar10 + iVar7 + -0x6c);
        }
        if (in_FPSCR_PR == '\0') {
          dVar18 = CONCAT44D((int)(D2U(dVar18) >> 0x20),F32LO(dVar18) - fVar16);
        }
        else {
          dVar18 = dVar18 - dVar26;
        }
        uVar25 = (undefined4)(D2U(dVar28) >> 0x20);
        if (in_FPSCR_SZ == '\0') {
          dVar11 = CONCAT44D(uVar25,SUB84(dVar11,0));
          dVar26 = CONCAT44D(fVar33,*(undefined4 *)(unsigned)((int)puVar10 + iVar6 + -0x68));
        }
        else {
          dVar36 = *(double *)(unsigned)((int)puVar10 + iVar6 + -0x68);
          dVar11 = dVar28;
          dVar26 = in_xd8;
        }
        if (in_FPSCR_PR == '\0') {
          dVar11 = (double)(ulonglong)
                           (uint)(F32HI(dVar11) * F32LO(dVar18) +
                                 SUB84(dVar11,0));
        }
        if (in_FPSCR_SZ == '\0') {
          dVar18 = CONCAT44D((int)(D2U(dVar18) >> 0x20),
                                    *(undefined4 *)(unsigned)((int)puVar10 + iVar7 + -0x68));
          dVar11 = CONCAT44D(fVar30,SUB84(dVar11,0));
        }
        else {
          in_xd2 = *(double *)(unsigned)((int)puVar10 + iVar7 + -0x68);
          dVar11 = dVar29;
        }
        if (in_FPSCR_PR == '\0') {
          dVar18 = CONCAT44D((int)(D2U(dVar18) >> 0x20),
                                    F32LO(dVar18) - F32LO(dVar26));
          dVar26 = CONCAT44D(F32HI(dVar11) * F32LO(dVar11) +
                                    F32HI(dVar26),SUB84(dVar26,0));
        }
        else {
          dVar18 = dVar18 - dVar26;
        }
        dVar34 = in_xd10;
        dVar11 = dVar28;
        if (in_FPSCR_SZ == '\0') {
          uVar24 = SUB84(dVar26,0);
          dVar26 = CONCAT44D((int)(D2U(dVar26) >> 0x20),fVar31);
          dVar34 = dVar36;
          dVar11 = CONCAT44D(uVar25,uVar24);
        }
        if (in_FPSCR_PR == '\0') {
          dVar11 = (double)(ulonglong)
                           (uint)(F32HI(dVar11) * F32LO(dVar18) +
                                 SUB84(dVar11,0));
        }
        dVar36 = dVar32;
        if (in_FPSCR_SZ == '\0') {
          dVar36 = CONCAT44D((int)(D2U(dVar32) >> 0x20),SUB84(dVar11,0));
        }
        if (in_FPSCR_PR == '\0') {
          dVar26 = CONCAT44D((int)(D2U(dVar26) >> 0x20),
                                    F32HI(dVar36) * F32LO(dVar36) +
                                    SUB84(dVar26,0));
        }
        dVar11 = dVar28;
        if (in_FPSCR_SZ == '\0') {
          dVar11 = CONCAT44D(uVar25,SUB84(dVar36,0));
        }
        pdVar8 = (double *)(unsigned)(puVar9 + iVar3 * 5);
        uVar24 = (undefined4)(D2U(dVar18) >> 0x20);
        if (in_FPSCR_SZ == '\0') {
          *(int *)(unsigned)pdVar8 = (int)(D2U(dVar26) >> 0x20);
          *(int *)(unsigned)((int)pdVar8 + 4) = SUB84(dVar26,0);
          *(undefined4 *)(unsigned)(pdVar8 + 1) = uVar24;
          dVar18 = CONCAT44D(uVar24,*(undefined4 *)(unsigned)((int)puVar10 + iVar7 + -0x60));
          dVar36 = CONCAT44D(*(undefined4 *)(unsigned)((int)puVar10 + iVar6 + -0x60),SUB84(dVar26,0));
        }
        else {
          *pdVar8 = dVar26;
          *(double *)(unsigned)((int)pdVar8 + 4) = dVar34;
          pdVar8[1] = dVar18;
          in_xd2 = *(double *)(unsigned)((int)puVar10 + iVar7 + -0x60);
          dVar36 = *(double *)(unsigned)((int)puVar10 + iVar6 + -0x60);
        }
        fVar16 = F32HI(dVar36);
        if (in_FPSCR_PR == '\0') {
          fVar13 = F32LO(dVar18) - fVar16;
        }
        else {
          fVar13 = SUB84(dVar18 - dVar36,0);
        }
        dVar26 = dVar36;
        if (in_FPSCR_SZ == '\0') {
          dVar26 = CONCAT44D(fVar16,fVar13);
        }
        fVar16 = F32HI(dVar11);
        if (in_FPSCR_PR == '\0') {
          dVar26 = CONCAT44D(fVar16 * F32LO(dVar26) + F32HI(dVar26),
                                    SUB84(dVar26,0));
        }
        uVar24 = (undefined4)(D2U(dVar26) >> 0x20);
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)(unsigned)(pdVar8 + 3) = uVar24;
          dVar26 = CONCAT44D(uVar24,*(undefined4 *)(unsigned)((int)puVar10 + iVar7 + -0x5c));
          dVar36 = CONCAT44D(*(undefined4 *)(unsigned)((int)puVar10 + iVar6 + -0x5c),SUB84(dVar36,0));
        }
        else {
          pdVar8[3] = dVar26;
          in_xd2 = *(double *)(unsigned)((int)puVar10 + iVar7 + -0x5c);
          dVar36 = *(double *)(unsigned)((int)puVar10 + iVar6 + -0x5c);
        }
        fVar13 = F32HI(dVar36);
        if (in_FPSCR_PR == '\0') {
          fVar14 = F32LO(dVar26) - fVar13;
        }
        else {
          fVar14 = SUB84(dVar26 - dVar36,0);
        }
        dVar26 = dVar36;
        if (in_FPSCR_SZ == '\0') {
          dVar26 = CONCAT44D(fVar13,fVar14);
        }
        if (in_FPSCR_PR == '\0') {
          dVar26 = CONCAT44D(fVar16 * F32LO(dVar26) + F32HI(dVar26),
                                    SUB84(dVar26,0));
        }
        if (in_FPSCR_SZ == '\0') {
          *(int *)(unsigned)((int)pdVar8 + 0x1c) = (int)(D2U(dVar26) >> 0x20);
        }
        else {
          *(double *)(unsigned)((int)pdVar8 + 0x1c) = dVar26;
        }
        uVar1 = *(uint *)(unsigned)((int)puVar10 + iVar6 + -0x58);
        fVar13 = (float)(uVar1 >> 0x18);
        dVar26 = in_xd2;
        if (in_FPSCR_SZ == '\0') {
          dVar26 = CONCAT44D(fVar13,SUB84(dVar36,0));
        }
        if (in_FPSCR_PR == '\0' && fVar13 < 0.0) {
          if (in_FPSCR_SZ == '\0') {
            fVar13 = 4.2949673e+09;
          }
          else {
            in_xd2 = -4.09448006764075e+250;
          }
          if (in_FPSCR_PR == '\0') {
            dVar26 = CONCAT44D(F32HI(dVar26) + fVar13,SUB84(dVar26,0));
          }
          else {
            dVar26 = dVar26 + (double)(ulonglong)(uint)fVar13;
          }
        }
        fVar13 = (float)(uVar1 >> 0x10 & 0xff);
        dVar36 = (double)(ulonglong)(uint)fVar13;
        dVar18 = in_xd2;
        if (in_FPSCR_SZ == '\0') {
          dVar26 = CONCAT44D((int)(D2U(dVar26) >> 0x20),fVar13);
          dVar18 = dVar34;
        }
        if (in_FPSCR_PR == '\0' && fVar13 < 0.0) {
          if (in_FPSCR_SZ == '\0') {
            dVar36 = 6.58979161647419e-315;
          }
          else {
            in_xd2 = -4.09448006764075e+250;
          }
          if (in_FPSCR_PR == '\0') {
            dVar26 = CONCAT44D((int)(D2U(dVar26) >> 0x20),
                                      F32LO(dVar26) + F32LO(dVar36));
          }
          else {
            dVar26 = dVar26 + dVar36;
          }
        }
        fVar13 = (float)(uVar1 >> 8 & 0xff);
        dVar34 = (double)(ulonglong)(uint)fVar13;
        dVar36 = in_xd2;
        if (in_FPSCR_SZ == '\0') {
          dVar28 = CONCAT44D(uVar25,fVar13);
          dVar36 = in_xd6;
        }
        dVar23 = dVar36;
        if (in_FPSCR_PR != '\0' || 0.0 <= fVar13) {
          if (in_FPSCR_SZ == '\0') {
            in_dr14 = (double)(D2U(dVar28) & 0xffffffff);
            dVar23 = in_xd14;
          }
        }
        else {
          if (in_FPSCR_SZ == '\0') {
            in_dr14 = CONCAT44D((int)((ulonglong)in_dr14 >> 0x20),SUB84(dVar28,0));
            dVar34 = 6.58979161647419e-315;
            dVar23 = in_xd14;
          }
          else {
            in_xd2 = -4.09448006764075e+250;
          }
          if (in_FPSCR_PR == '\0') {
            in_dr14 = (double)(ulonglong)(uint)(F32LO(in_dr14) + F32LO(dVar34));
          }
          else {
            in_dr14 = in_dr14 + dVar34;
          }
        }
        fVar13 = (float)(uVar1 & 0xff);
        dVar22 = (double)(ulonglong)(uint)fVar13;
        dVar34 = in_xd2;
        if (in_FPSCR_SZ == '\0') {
          dVar28 = CONCAT44D((int)(D2U(dVar28) >> 0x20),fVar13);
          dVar34 = dVar36;
        }
        if (in_FPSCR_PR != '\0' || 0.0 <= fVar13) {
          dVar35 = dVar34;
          if (in_FPSCR_SZ == '\0') {
            dVar35 = CONCAT44D(SUB84(dVar28,0),SUB84(in_dr14,0));
          }
        }
        else {
          if (in_FPSCR_SZ == '\0') {
            dVar22 = 6.58979161647419e-315;
            dVar35 = CONCAT44D(SUB84(dVar28,0),SUB84(in_dr14,0));
          }
          else {
            in_xd2 = -4.09448006764075e+250;
            dVar35 = dVar34;
          }
          if (in_FPSCR_PR == '\0') {
            dVar35 = CONCAT44D(F32HI(dVar35) + F32LO(dVar22),
                                      SUB84(dVar35,0));
          }
          else {
            dVar35 = dVar35 + dVar22;
          }
        }
        uVar1 = *(uint *)(unsigned)((int)puVar10 + iVar7 + -0x58);
        fVar13 = (float)(uVar1 >> 0x18);
        dVar22 = (double)(ulonglong)(uint)fVar13;
        dVar36 = in_xd2;
        if (in_FPSCR_SZ == '\0') {
          dVar28 = CONCAT44D((int)(D2U(dVar28) >> 0x20),fVar13);
          dVar36 = dVar34;
        }
        if (in_FPSCR_PR == '\0' && fVar13 < 0.0) {
          if (in_FPSCR_SZ == '\0') {
            dVar22 = 6.58979161647419e-315;
          }
          else {
            in_xd2 = -4.09448006764075e+250;
          }
          if (in_FPSCR_PR == '\0') {
            dVar28 = CONCAT44D((int)(D2U(dVar28) >> 0x20),
                                      F32LO(dVar28) + F32LO(dVar22));
          }
          else {
            dVar28 = dVar28 + dVar22;
          }
        }
        fVar13 = (float)(uVar1 >> 0x10 & 0xff);
        dVar34 = (double)(ulonglong)(uint)fVar13;
        if (in_FPSCR_SZ == '\0') {
          dVar11 = CONCAT44D(fVar16,fVar13);
        }
        if (in_FPSCR_PR == '\0' && fVar13 < 0.0) {
          if (in_FPSCR_SZ == '\0') {
            dVar34 = 6.58979161647419e-315;
          }
          else {
            in_xd2 = -4.09448006764075e+250;
          }
          if (in_FPSCR_PR == '\0') {
            dVar11 = CONCAT44D((int)(D2U(dVar11) >> 0x20),
                                      F32LO(dVar11) + F32LO(dVar34));
          }
          else {
            dVar11 = dVar11 + dVar34;
          }
        }
        fVar16 = (float)(uVar1 >> 8 & 0xff);
        dVar22 = (double)(ulonglong)(uint)fVar16;
        dVar34 = in_xd2;
        if (in_FPSCR_SZ == '\0') {
          dVar34 = CONCAT44D(fVar16,SUB84(in_dr12,0));
        }
        if (in_FPSCR_PR == '\0' && fVar16 < 0.0) {
          if (in_FPSCR_SZ == '\0') {
            dVar22 = 6.58979161647419e-315;
          }
          else {
            in_xd2 = -4.09448006764075e+250;
          }
          if (in_FPSCR_PR == '\0') {
            dVar34 = CONCAT44D(F32HI(dVar34) + F32LO(dVar22),
                                      SUB84(dVar34,0));
          }
          else {
            dVar34 = dVar34 + dVar22;
          }
        }
        if (in_FPSCR_PR == '\0') {
          dVar22 = (double)((ulonglong)(uint)(float)(uVar1 & 0xff) << 0x20);
        }
        else {
          dVar22 = (double)(uVar1 & 0xff);
        }
        fVar16 = F32HI(dVar22);
        if (in_FPSCR_SZ == '\0') {
          *(float *)(unsigned)((int)puVar10 + -300) = fVar16;
        }
        else {
          *(double *)(unsigned)((int)puVar10 + -300) = dVar22;
        }
        if (in_FPSCR_PR != '\0' || SUB84(dVar22,0) <= fVar16) {
          if (in_FPSCR_SZ == '\0') {
            dVar22 = CONCAT44D(fVar16,*(undefined4 *)(unsigned)((int)puVar10 + -300));
          }
          else {
            in_xd2 = *(double *)(unsigned)((int)puVar10 + -300);
          }
        }
        else {
          if (in_FPSCR_SZ == '\0') {
            dVar22 = CONCAT44D(0x4f800000,*(undefined4 *)(unsigned)((int)puVar10 + -300));
          }
          else {
            dVar22 = -4.09448006764075e+250;
            in_xd2 = *(double *)(unsigned)((int)puVar10 + -300);
          }
          if (in_FPSCR_PR == '\0') {
            fVar16 = F32HI(dVar22);
            dVar22 = CONCAT44D(fVar16,F32LO(dVar22) + fVar16);
          }
          else {
            dVar22 = dVar22 + dVar22;
          }
        }
        fVar16 = F32HI(dVar26);
        if (in_FPSCR_PR == '\0') {
          dVar28 = CONCAT44D((int)(D2U(dVar28) >> 0x20),F32LO(dVar28) - fVar16);
        }
        else {
          dVar28 = dVar28 - dVar26;
        }
        if (in_FPSCR_SZ == '\0') {
          *(float *)(unsigned)((int)puVar10 + -0x120) = SUB84(dVar22,0);
        }
        else {
          *(double *)(unsigned)((int)puVar10 + -0x120) = in_xd2;
        }
        fVar14 = F32HI(dVar35);
        fVar13 = F32LO(dVar26);
        if (in_FPSCR_PR == '\0') {
          fVar17 = F32LO(dVar22) - fVar14;
          fVar15 = F32LO(dVar11) - fVar13;
        }
        else {
          fVar17 = SUB84(dVar22 - dVar35,0);
          fVar15 = SUB84(dVar11 - dVar26,0);
        }
        if (in_FPSCR_SZ == '\0') {
          dVar26 = CONCAT44D(fVar16,fVar17);
        }
        if (in_FPSCR_PR == '\0') {
          dVar34 = CONCAT44D(F32HI(dVar34) - F32LO(dVar35),
                                    SUB84(dVar34,0));
        }
        else {
          dVar34 = dVar34 - dVar35;
        }
        uVar25 = (undefined4)(D2U(dVar28) >> 0x20);
        dVar11 = dVar28;
        if (in_FPSCR_SZ == '\0') {
          dVar11 = CONCAT44D(uVar25,fVar15);
        }
        fVar16 = F32HI(dVar11);
        if (in_FPSCR_PR == '\0') {
          dVar26 = CONCAT44D(fVar16 * F32LO(dVar28) + F32HI(dVar26),
                                    SUB84(dVar26,0));
        }
        dVar22 = dVar35;
        if (in_FPSCR_SZ == '\0') {
          dVar22 = CONCAT44D(fVar14,fVar13);
        }
        if (in_FPSCR_PR == '\0') {
          dVar22 = CONCAT44D(fVar16 * F32LO(dVar26) + F32HI(dVar22),
                                    SUB84(dVar22,0));
        }
        dVar37 = dVar18;
        if (in_FPSCR_SZ == '\0') {
          dVar28 = CONCAT44D(uVar25,SUB84(dVar22,0));
          dVar37 = dVar36;
        }
        if (in_FPSCR_PR == '\0') {
          dVar28 = CONCAT44D((int)(D2U(dVar28) >> 0x20),
                                    fVar16 * F32LO(dVar11) + F32LO(dVar28));
        }
        dVar11 = dVar26;
        if (in_FPSCR_SZ == '\0') {
          uVar25 = (undefined4)(D2U(dVar26) >> 0x20);
          dVar26 = CONCAT44D(uVar25,uVar25);
          dVar11 = in_xd2;
        }
        dVar12 = CONCAT44D(fVar16,0x4f000000);
        if (in_FPSCR_PR == '\0') {
          bVar38 = SUB84(dVar26,0) < 2.1474836e+09;
        }
        else {
          bVar38 = dVar26 < dVar12;
        }
        uVar25 = (undefined4)(D2U(dVar26) >> 0x20);
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)(unsigned)((int)puVar10 + -0x11c) = uVar25;
          dVar22 = CONCAT44D((int)(D2U(dVar22) >> 0x20),SUB84(dVar35,0));
        }
        else {
          *(double *)(unsigned)((int)puVar10 + -0x11c) = dVar26;
          dVar18 = dVar23;
        }
        if (in_FPSCR_PR == '\0') {
          dVar22 = CONCAT44D((int)(D2U(dVar22) >> 0x20),
                                    fVar16 * F32HI(dVar34) + F32LO(dVar22));
        }
        if (!bVar38) {
          if (in_FPSCR_PR == '\0') {
            dVar12 = CONCAT44D(fVar16,0x4f800000);
            dVar26 = CONCAT44D(uVar25,F32LO(dVar26) - 4.2949673e+09);
          }
          else {
            dVar12 = dVar12 + dVar12;
            dVar26 = dVar26 - dVar12;
          }
        }
        if (in_FPSCR_PR == '\0') {
          iVar39 = (int)SUB84(dVar26,0);
        }
        else {
          iVar39 = (int)dVar26;
        }
        uVar25 = (undefined4)(D2U(dVar26) >> 0x20);
        dVar36 = CONCAT44D(uVar25,0x4f000000);
        if (in_FPSCR_PR == '\0') {
          bVar38 = SUB84(dVar28,0) < 2.1474836e+09;
        }
        else {
          bVar38 = dVar28 < dVar36;
        }
        if (!bVar38) {
          if (in_FPSCR_PR == '\0') {
            dVar36 = CONCAT44D(uVar25,0x4f800000);
            dVar28 = CONCAT44D((int)(D2U(dVar28) >> 0x20),
                                      F32LO(dVar28) - 4.2949673e+09);
          }
          else {
            dVar36 = dVar36 + dVar36;
            dVar28 = dVar28 - dVar36;
          }
        }
        if (in_FPSCR_PR == '\0') {
          iVar40 = (int)SUB84(dVar28,0);
        }
        else {
          iVar40 = (int)dVar28;
        }
        uVar25 = (undefined4)(D2U(dVar36) >> 0x20);
        dVar36 = CONCAT44D(uVar25,0x4f000000);
        if (in_FPSCR_PR == '\0') {
          bVar38 = SUB84(dVar22,0) < 2.1474836e+09;
        }
        else {
          bVar38 = dVar22 < dVar36;
        }
        if (!bVar38) {
          if (in_FPSCR_PR == '\0') {
            dVar36 = CONCAT44D(uVar25,0x4f800000);
            dVar22 = CONCAT44D((int)(D2U(dVar22) >> 0x20),
                                      F32LO(dVar22) - 4.2949673e+09);
          }
          else {
            dVar36 = dVar36 + dVar36;
            dVar22 = dVar22 - dVar36;
          }
        }
        if (in_FPSCR_PR == '\0') {
          iVar41 = (int)SUB84(dVar22,0);
        }
        else {
          iVar41 = (int)dVar22;
        }
        dVar36 = CONCAT44D((int)(D2U(dVar36) >> 0x20),0x4f000000);
        fVar16 = F32HI(dVar22);
        if (in_FPSCR_PR == '\0') {
          bVar38 = fVar16 < 2.1474836e+09;
        }
        else {
          bVar38 = dVar22 < dVar36;
        }
        if (!bVar38) {
          if (in_FPSCR_PR == '\0') {
            dVar22 = CONCAT44D(fVar16 - 4.2949673e+09,SUB84(dVar22,0));
          }
          else {
            dVar22 = dVar22 - (dVar36 + dVar36);
          }
        }
        if (in_FPSCR_PR == '\0') {
          uVar1 = (uint)F32HI(dVar22);
        }
        else {
          uVar1 = (uint)dVar22;
        }
        *(uint *)(unsigned)(pdVar8 + 4) = iVar39 << 0x18 | iVar40 << 0x10 | iVar41 << 8 | uVar1;
        uVar1 = *(uint *)(unsigned)((int)puVar10 + iVar6 + -0x54);
        fVar16 = (float)(uVar1 >> 0x18);
        dVar36 = (double)(ulonglong)(uint)fVar16;
        dVar27 = dVar11;
        if (in_FPSCR_SZ == '\0') {
          dVar27 = CONCAT44D(fVar16,SUB84(dVar22,0));
        }
        if (in_FPSCR_PR == '\0' && fVar16 < 0.0) {
          if (in_FPSCR_SZ == '\0') {
            dVar36 = 6.58979161647419e-315;
          }
          else {
            dVar11 = -1.502875175110795e+300;
          }
          if (in_FPSCR_PR == '\0') {
            dVar27 = CONCAT44D(F32HI(dVar27) + F32LO(dVar36),
                                      SUB84(dVar27,0));
          }
          else {
            dVar27 = dVar27 + dVar36;
          }
        }
        fVar16 = (float)(uVar1 >> 0x10 & 0xff);
        dVar26 = (double)(ulonglong)(uint)fVar16;
        dVar36 = dVar11;
        if (in_FPSCR_SZ == '\0') {
          dVar27 = CONCAT44D((int)(D2U(dVar27) >> 0x20),fVar16);
          dVar36 = dVar18;
        }
        if (in_FPSCR_PR == '\0' && fVar16 < 0.0) {
          if (in_FPSCR_SZ == '\0') {
            dVar26 = 6.58979161647419e-315;
          }
          else {
            dVar11 = -1.502875175110795e+300;
          }
          if (in_FPSCR_PR == '\0') {
            dVar27 = CONCAT44D((int)(D2U(dVar27) >> 0x20),
                                      F32LO(dVar27) + F32LO(dVar26));
          }
          else {
            dVar27 = dVar27 + dVar26;
          }
        }
        fVar16 = (float)(uVar1 >> 8 & 0xff);
        dVar26 = (double)(ulonglong)(uint)fVar16;
        in_xd6 = dVar11;
        if (in_FPSCR_SZ == '\0') {
          dVar28 = CONCAT44D((int)(D2U(dVar28) >> 0x20),fVar16);
          in_xd6 = dVar37;
        }
        if (in_FPSCR_PR == '\0' && fVar16 < 0.0) {
          if (in_FPSCR_SZ == '\0') {
            dVar26 = 6.58979161647419e-315;
          }
          else {
            dVar11 = -1.502875175110795e+300;
          }
          if (in_FPSCR_PR == '\0') {
            dVar28 = CONCAT44D((int)(D2U(dVar28) >> 0x20),
                                      F32LO(dVar28) + F32LO(dVar26));
          }
          else {
            dVar28 = dVar28 + dVar26;
          }
        }
        fVar16 = (float)(uVar1 & 0xff);
        dVar26 = (double)(ulonglong)(uint)fVar16;
        in_xd14 = dVar11;
        if (in_FPSCR_SZ == '\0') {
          dVar35 = CONCAT44D(fVar14,fVar16);
          in_xd14 = dVar23;
        }
        if (in_FPSCR_PR == '\0' && fVar16 < 0.0) {
          if (in_FPSCR_SZ == '\0') {
            dVar26 = 6.58979161647419e-315;
          }
          else {
            dVar11 = -1.502875175110795e+300;
          }
          if (in_FPSCR_PR == '\0') {
            dVar35 = (double)(ulonglong)(uint)(F32LO(dVar35) + F32LO(dVar26));
          }
          else {
            dVar35 = dVar35 + dVar26;
          }
        }
        uVar1 = *(uint *)(unsigned)((int)puVar10 + iVar7 + -0x54);
        fVar16 = (float)(uVar1 >> 0x18);
        dVar18 = (double)(ulonglong)(uint)fVar16;
        dVar26 = dVar11;
        if (in_FPSCR_SZ == '\0') {
          dVar26 = CONCAT44D(fVar16,SUB84(dVar35,0));
        }
        if (in_FPSCR_PR == '\0' && fVar16 < 0.0) {
          if (in_FPSCR_SZ == '\0') {
            dVar18 = 6.58979161647419e-315;
          }
          else {
            dVar11 = -1.502875175110795e+300;
          }
          if (in_FPSCR_PR == '\0') {
            dVar26 = CONCAT44D(F32HI(dVar26) + F32LO(dVar18),
                                      SUB84(dVar26,0));
          }
          else {
            dVar26 = dVar26 + dVar18;
          }
        }
        fVar16 = (float)(uVar1 >> 0x10 & 0xff);
        dVar18 = (double)(ulonglong)(uint)fVar16;
        if (in_FPSCR_SZ == '\0') {
          dVar12 = CONCAT44D((int)(D2U(dVar12) >> 0x20),fVar16);
        }
        if (in_FPSCR_PR == '\0' && fVar16 < 0.0) {
          if (in_FPSCR_SZ == '\0') {
            dVar18 = 6.58979161647419e-315;
          }
          else {
            dVar11 = -1.502875175110795e+300;
          }
          if (in_FPSCR_PR == '\0') {
            dVar12 = CONCAT44D((int)(D2U(dVar12) >> 0x20),
                                      F32LO(dVar12) + F32LO(dVar18));
          }
          else {
            dVar12 = dVar12 + dVar18;
          }
        }
        fVar16 = (float)(uVar1 >> 8 & 0xff);
        dVar23 = (double)(ulonglong)(uint)fVar16;
        dVar18 = dVar11;
        if (in_FPSCR_SZ == '\0') {
          dVar18 = CONCAT44D(fVar16,SUB84(dVar34,0));
        }
        if (in_FPSCR_PR == '\0' && fVar16 < 0.0) {
          if (in_FPSCR_SZ == '\0') {
            dVar23 = 6.58979161647419e-315;
          }
          else {
            dVar11 = -1.502875175110795e+300;
          }
          if (in_FPSCR_PR == '\0') {
            dVar18 = CONCAT44D(F32HI(dVar18) + F32LO(dVar23),
                                      SUB84(dVar18,0));
          }
          else {
            dVar18 = dVar18 + dVar23;
          }
        }
        if (in_FPSCR_PR == '\0') {
          dVar34 = (double)((ulonglong)(uint)(float)(uVar1 & 0xff) << 0x20);
        }
        else {
          dVar34 = (double)(uVar1 & 0xff);
        }
        fVar16 = F32HI(dVar34);
        if (in_FPSCR_SZ == '\0') {
          *(float *)(unsigned)((int)puVar10 + -0x130) = fVar16;
        }
        else {
          *(double *)(unsigned)((int)puVar10 + -0x130) = dVar34;
        }
        if (in_FPSCR_PR != '\0' || SUB84(dVar34,0) <= fVar16) {
          if (in_FPSCR_SZ == '\0') {
            dVar34 = CONCAT44D(fVar16,*(undefined4 *)(unsigned)((int)puVar10 + -0x130));
          }
          else {
            dVar11 = *(double *)(unsigned)((int)puVar10 + -0x130);
          }
        }
        else {
          if (in_FPSCR_SZ == '\0') {
            dVar34 = CONCAT44D(0x4f800000,*(undefined4 *)(unsigned)((int)puVar10 + -0x130));
          }
          else {
            dVar11 = *(double *)(unsigned)((int)puVar10 + -0x130);
            dVar34 = -1.502875175110795e+300;
          }
          if (in_FPSCR_PR == '\0') {
            fVar16 = F32HI(dVar34);
            dVar34 = CONCAT44D(fVar16,F32LO(dVar34) + fVar16);
          }
          else {
            dVar34 = dVar34 + dVar34;
          }
        }
        fVar16 = F32HI(dVar27);
        if (in_FPSCR_PR == '\0') {
          dVar26 = CONCAT44D(F32HI(dVar26) - fVar16,SUB84(dVar26,0));
        }
        else {
          dVar26 = dVar26 - dVar27;
        }
        if (in_FPSCR_SZ == '\0') {
          *(float *)(unsigned)((int)puVar10 + -0x128) = SUB84(dVar34,0);
        }
        else {
          *(double *)(unsigned)((int)puVar10 + -0x128) = dVar11;
        }
        fVar14 = F32LO(dVar26);
        fVar13 = F32LO(dVar27);
        if (in_FPSCR_PR == '\0') {
          fVar17 = F32LO(dVar34) - fVar14;
          fVar15 = F32LO(dVar12) - fVar13;
        }
        else {
          fVar17 = SUB84(dVar34 - dVar26,0);
          fVar15 = SUB84(dVar12 - dVar27,0);
        }
        if (in_FPSCR_SZ == '\0') {
          dVar27 = CONCAT44D(fVar16,fVar17);
        }
        if (in_FPSCR_PR == '\0') {
          in_dr12 = CONCAT44D(F32HI(dVar18) - F32LO(dVar28),
                                     SUB84(dVar18,0));
        }
        else {
          in_dr12 = dVar18 - dVar28;
        }
        dVar18 = dVar28;
        if (in_FPSCR_SZ == '\0') {
          dVar18 = CONCAT44D((int)(D2U(dVar28) >> 0x20),fVar15);
        }
        fVar16 = F32HI(dVar18);
        if (in_FPSCR_PR == '\0') {
          dVar27 = CONCAT44D(fVar16 * F32HI(dVar26) +
                                    F32HI(dVar27),SUB84(dVar27,0));
        }
        dVar26 = in_xd14;
        if (in_FPSCR_SZ == '\0') {
          dVar26 = CONCAT44D(fVar14,fVar13);
        }
        if (in_FPSCR_PR == '\0') {
          dVar26 = CONCAT44D(fVar16 * F32LO(dVar27) + F32HI(dVar26),
                                    SUB84(dVar26,0));
        }
        in_dr14 = dVar36;
        if (in_FPSCR_SZ == '\0') {
          in_dr14 = CONCAT44D(SUB84(dVar26,0),fVar14);
        }
        if (in_FPSCR_PR == '\0') {
          in_dr14 = CONCAT44D(fVar16 * F32LO(dVar18) + F32HI(in_dr14),
                                     SUB84(in_dr14,0));
        }
        in_xd2 = dVar27;
        if (in_FPSCR_SZ == '\0') {
          uVar25 = (undefined4)(D2U(dVar27) >> 0x20);
          dVar27 = CONCAT44D(uVar25,uVar25);
          in_xd2 = dVar11;
        }
        dVar11 = CONCAT44D(fVar16,0x4f000000);
        if (in_FPSCR_PR == '\0') {
          bVar38 = SUB84(dVar27,0) < 2.1474836e+09;
        }
        else {
          bVar38 = dVar27 < dVar11;
        }
        uVar25 = (undefined4)(D2U(dVar27) >> 0x20);
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)(unsigned)((int)puVar10 + -0x124) = uVar25;
          dVar26 = CONCAT44D((int)(D2U(dVar26) >> 0x20),SUB84(dVar28,0));
        }
        else {
          *(double *)(unsigned)((int)puVar10 + -0x124) = dVar27;
          dVar36 = in_xd6;
        }
        if (in_FPSCR_PR == '\0') {
          dVar26 = CONCAT44D((int)(D2U(dVar26) >> 0x20),
                                    fVar16 * F32HI(in_dr12) + F32LO(dVar26));
        }
        if (!bVar38) {
          if (in_FPSCR_PR == '\0') {
            dVar11 = CONCAT44D(fVar16,0x4f800000);
            dVar27 = CONCAT44D(uVar25,F32LO(dVar27) - 4.2949673e+09);
          }
          else {
            dVar11 = dVar11 + dVar11;
            dVar27 = dVar27 - dVar11;
          }
        }
        if (in_FPSCR_PR == '\0') {
          iVar6 = (int)SUB84(dVar27,0);
        }
        else {
          iVar6 = (int)dVar27;
        }
        uVar25 = (undefined4)(D2U(dVar27) >> 0x20);
        dVar18 = CONCAT44D(uVar25,0x4f000000);
        fVar16 = F32HI(in_dr14);
        if (in_FPSCR_PR == '\0') {
          bVar38 = fVar16 < 2.1474836e+09;
        }
        else {
          bVar38 = in_dr14 < dVar18;
        }
        if (!bVar38) {
          if (in_FPSCR_PR == '\0') {
            dVar18 = CONCAT44D(uVar25,0x4f800000);
            in_dr14 = CONCAT44D(fVar16 - 4.2949673e+09,SUB84(in_dr14,0));
          }
          else {
            dVar18 = dVar18 + dVar18;
            in_dr14 = in_dr14 - dVar18;
          }
        }
        if (in_FPSCR_PR == '\0') {
          iVar7 = (int)F32HI(in_dr14);
        }
        else {
          iVar7 = (int)in_dr14;
        }
        uVar25 = (undefined4)(D2U(dVar18) >> 0x20);
        dVar18 = CONCAT44D(uVar25,0x4f000000);
        if (in_FPSCR_PR == '\0') {
          bVar38 = SUB84(dVar26,0) < 2.1474836e+09;
        }
        else {
          bVar38 = dVar26 < dVar18;
        }
        if (!bVar38) {
          if (in_FPSCR_PR == '\0') {
            dVar18 = CONCAT44D(uVar25,0x4f800000);
            dVar26 = CONCAT44D((int)(D2U(dVar26) >> 0x20),
                                      F32LO(dVar26) - 4.2949673e+09);
          }
          else {
            dVar18 = dVar18 + dVar18;
            dVar26 = dVar26 - dVar18;
          }
        }
        if (in_FPSCR_PR == '\0') {
          iVar39 = (int)SUB84(dVar26,0);
        }
        else {
          iVar39 = (int)dVar26;
        }
        dVar18 = CONCAT44D((int)(D2U(dVar18) >> 0x20),0x4f000000);
        fVar16 = F32HI(dVar26);
        if (in_FPSCR_PR == '\0') {
          bVar38 = fVar16 < 2.1474836e+09;
        }
        else {
          bVar38 = dVar26 < dVar18;
        }
        if (!bVar38) {
          if (in_FPSCR_PR == '\0') {
            dVar26 = CONCAT44D(fVar16 - 4.2949673e+09,SUB84(dVar26,0));
          }
          else {
            dVar26 = dVar26 - (dVar18 + dVar18);
          }
        }
        if (in_FPSCR_PR == '\0') {
          uVar1 = (uint)F32HI(dVar26);
        }
        else {
          uVar1 = (uint)dVar26;
        }
        iVar3 = iVar3 + 1;
        *(uint *)(unsigned)((int)pdVar8 + 0x24) = iVar6 << 0x18 | iVar7 << 0x10 | iVar39 << 8 | uVar1;
      }
      pdVar8 = (double *)(unsigned)((int)puVar10 + iVar4 * 0x28 + -0x78);
      if (in_FPSCR_SZ == '\0') {
        uVar20 = CONCAT44(*(undefined4 *)(unsigned)((int)pdVar8 + 0x14),0x3f800000);
      }
      else {
        uVar20 = *(undefined8 *)(unsigned)((int)pdVar8 + 0x14);
      }
      if (in_FPSCR_PR == '\0' && (float)uVar20 < F32HI(uVar20)) {
        if (in_FPSCR_SZ == '\0') {
          dVar26 = CONCAT44D(*(undefined4 *)(unsigned)pdVar8,*(undefined4 *)(unsigned)((int)pdVar8 + 4));
        }
        else {
          dVar26 = *pdVar8;
          dVar36 = *(double *)(unsigned)((int)pdVar8 + 4);
        }
        pdVar2 = (double *)(unsigned)(puVar9 + iVar3 * 5);
        iVar3 = iVar3 + 1;
        if (in_FPSCR_SZ == '\0') {
          *(int *)(unsigned)pdVar2 = (int)(D2U(dVar26) >> 0x20);
          *(int *)(unsigned)((int)pdVar2 + 4) = SUB84(dVar26,0);
          *(undefined4 *)(unsigned)(pdVar2 + 1) = *(undefined4 *)(unsigned)(pdVar8 + 1);
          *(undefined4 *)(unsigned)(pdVar2 + 3) = *(undefined4 *)(unsigned)(pdVar8 + 3);
          *(undefined4 *)(unsigned)((int)pdVar2 + 0x1c) = *(undefined4 *)(unsigned)((int)pdVar8 + 0x1c);
          *(undefined4 *)(unsigned)(pdVar2 + 4) = *(undefined4 *)(unsigned)(pdVar8 + 4);
          *(undefined4 *)(unsigned)((int)pdVar2 + 0x24) = *(undefined4 *)(unsigned)((int)pdVar8 + 0x24);
        }
        else {
          *pdVar2 = dVar26;
          *(double *)(unsigned)((int)pdVar2 + 4) = dVar36;
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
  return ar7;
}

__asm__(".globl _FUN_8c22dff8\n.set _FUN_8c22dff8, _FUN_8c22dff8_def\n");
