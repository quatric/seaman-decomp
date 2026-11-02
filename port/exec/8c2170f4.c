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
undefined8 * FUN_8c2170f4_def(double *ar4,double *ar5,double *ar6,undefined8 *ar7)

{
  ring[rp++ & 255] = "FUN_8c2170f4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 312; for (int i_ = 0; i_ < 312; i_++) z_[i_] = 0; }
  undefined8 *puVar1;
  undefined8 *puVar2;
  double *pdVar3;
  uint uVar4;
  int iVar5;
  double *pdVar6;
  double *pdVar7;
  undefined8 *puVar8;
  int iVar9;
  undefined8 *puVar10;
  double in_dr0 = 0;
  float fVar11;
  float fVar12;
  float fVar13;
  double dVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double in_dr4 = 0;
  double dVar20;
  undefined4 uVar21;
  double in_dr6 = 0;
  double dVar22;
  float fVar23;
  double in_dr8 = 0;
  double dVar24;
  double dVar25;
  undefined4 in_fr11 = 0;
  double dVar26;
  undefined8 in_dr12 = 0;
  double dVar27;
  float fVar28;
  double dVar29;
  float fVar30;
  double in_xd0 = 0;
  double in_xd2 = 0;
  double in_xd4 = 0;
  double in_xd6 = 0;
  double in_xd8 = 0;
  double dVar31;
  undefined8 in_xd12 = 0;
  undefined8 uVar32;
  undefined8 in_xd14 = 0;
  bool bVar33;
  int iVar34;
  int iVar35;
  int iVar36;
  char in_FPSCR_PR = 0;
  char in_FPSCR_SZ = 0;
  
  if (in_FPSCR_SZ == '\0') {
    puVar10 = ((undefined8 *)(fr0_ - 0x2c));
    ((undefined8 *)(fr0_ - 0x2c))[0] = CONCAT44((int)in_dr12,(int)((ulonglong)in_dr12 >> 0x20));
  }
  else {
    puVar10 = (undefined8 *)(unsigned)((undefined1 *)(fr0_ - 0x3c));
  }
  if (((*(undefined4 *)(unsigned)(unsigned)0x8c4aa4f0) & 0x10000) == 0) {
    if (in_FPSCR_SZ == '\0') {
      dVar27 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4aa4b8),(int)in_dr12);
      dVar14 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4aa4e0),(*(undefined4 *)(unsigned)(unsigned)0x8c4aa4dc));
      dVar29 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4aa4b4),(*(undefined4 *)(unsigned)(unsigned)0x8c4aa4a8));
      uVar21 = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa4a8);
      uVar32 = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c4aa4a8),in_fr11);
    }
    else {
      in_xd14 = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c4aa4ac),(*(undefined4 *)(unsigned)(unsigned)0x8c4aa4a8));
      dVar29 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4aa4b8),(*(undefined4 *)(unsigned)(unsigned)0x8c4aa4b4));
      in_xd2 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4aa4e0),(*(undefined4 *)(unsigned)(unsigned)0x8c4aa4dc));
      dVar27 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4aa4bc),(*(undefined4 *)(unsigned)(unsigned)0x8c4aa4b8));
      dVar14 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4aa4e4),(*(undefined4 *)(unsigned)(unsigned)0x8c4aa4e0));
      uVar21 = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa4ac);
      uVar32 = in_xd14;
    }
    if (in_FPSCR_PR == '\0') {
      dVar29 = CONCAT44D((int)(D2U(dVar29) >> 0x20),F32LO(dVar29) * F32LO(dVar14));
    }
    else {
      dVar29 = dVar29 * dVar14;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar27 = CONCAT44D((int)(D2U(dVar27) >> 0x20),uVar21);
      uVar32 = in_xd12;
    }
    if (in_FPSCR_PR == '\0') {
      dVar27 = CONCAT44D((int)(D2U(dVar27) >> 0x20),
                                F32LO(dVar27) * F32HI(dVar14));
    }
    else {
      dVar27 = dVar27 * dVar14;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar14 = (double)(ulonglong)*(uint *)(unsigned)(ar4 + 1);
    }
    else {
      in_xd2 = ar4[1];
    }
    fVar13 = F32LO(dVar14);
    if (in_FPSCR_PR == '\0') {
      dVar14 = CONCAT44D(1.0 / fVar13,fVar13);
      dVar26 = CONCAT44D(1.0 / F32LO(dVar29),1.0 / F32LO(dVar27));
    }
    else {
      dVar14 = CONCAT44D(0x3f800000,fVar13) / CONCAT44D(0x3f800000,fVar13);
      dVar26 = (0.007812501848093234 / dVar29) / dVar27;
    }
    puVar8 = (undefined8 *)(unsigned)((int)puVar10 + -0x6c);
    if (in_FPSCR_SZ == '\0') {
      *(int *)(unsigned)((int)puVar10 + -0x4c) = (int)(D2U(dVar14) >> 0x20);
      *(undefined4 *)(unsigned)puVar8 = *(undefined4 *)(unsigned)((int)ar4 + 0xc);
      *(int *)(unsigned)((int)puVar10 + -100) = (int)((ulonglong)in_dr4 >> 0x20);
      *(int *)(unsigned)((int)puVar10 + -0x68) = SUB84(in_dr4,0);
      *(undefined4 *)(unsigned)((int)puVar10 + -0x58) = *(undefined4 *)(unsigned)ar4;
      *(undefined4 *)(unsigned)((int)puVar10 + -0x5c) = *(undefined4 *)(unsigned)((int)ar4 + 4);
      *(undefined4 *)(unsigned)((int)puVar10 + -0x60) = *(undefined4 *)(unsigned)(ar4 + 1);
      dVar14 = CONCAT44D(*(undefined4 *)(unsigned)((int)puVar10 + -0x4c),*(undefined4 *)(unsigned)ar4);
    }
    else {
      *(double *)(unsigned)((int)puVar10 + -0x4c) = dVar14;
      *puVar8 = *(undefined8 *)(unsigned)((int)ar4 + 0xc);
      *(double *)(unsigned)((int)puVar10 + -100) = in_dr4;
      *(double *)(unsigned)((int)puVar10 + -0x68) = in_xd4;
      *(double *)(unsigned)((int)puVar10 + -0x58) = *ar4;
      *(undefined8 *)(unsigned)((int)puVar10 + -0x5c) = *(undefined8 *)(unsigned)((int)ar4 + 4);
      *(double *)(unsigned)((int)puVar10 + -0x60) = ar4[1];
      in_xd2 = *ar4;
      dVar14 = *(double *)(unsigned)((int)puVar10 + -0x4c);
    }
    fVar30 = F32HI(dVar29);
    fVar13 = F32HI(dVar26);
    if (in_FPSCR_PR == '\0') {
      fVar11 = (F32LO(dVar14) - fVar30) * F32HI(dVar14) * fVar13;
    }
    else {
      fVar11 = SUB84((dVar14 - dVar29) * (dVar14 - dVar29) * dVar26,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(unsigned)((int)puVar10 + -0x54) = fVar11;
      dVar14 = CONCAT44D(*(undefined4 *)(unsigned)((int)puVar10 + -0x4c),*(undefined4 *)(unsigned)((int)ar4 + 4))
      ;
    }
    else {
      *(double *)(unsigned)((int)puVar10 + -0x54) = in_xd2;
      in_xd2 = *(double *)(unsigned)((int)ar4 + 4);
      dVar14 = *(double *)(unsigned)((int)puVar10 + -0x4c);
    }
    fVar28 = F32HI(dVar27);
    fVar11 = F32LO(dVar26);
    if (in_FPSCR_PR == '\0') {
      fVar12 = (F32LO(dVar14) - fVar28) * F32HI(dVar14) * fVar11;
    }
    else {
      fVar12 = SUB84((dVar14 - dVar27) * (dVar14 - dVar27) * dVar26,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(unsigned)((int)puVar10 + -0x50) = fVar12;
      fVar12 = *(float *)(unsigned)(ar5 + 1);
    }
    else {
      *(double *)(unsigned)((int)puVar10 + -0x50) = in_xd2;
      in_xd2 = ar5[1];
    }
    if (in_FPSCR_PR == '\0') {
      dVar14 = CONCAT44D(1.0 / fVar12,fVar12);
    }
    else {
      dVar14 = CONCAT44D(0x3f800000,fVar12) / CONCAT44D(0x3f800000,fVar12);
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)(unsigned)((int)puVar10 + -0x28) = (int)(D2U(dVar14) >> 0x20);
      *(undefined4 *)(unsigned)((int)puVar10 + -0x48) = *(undefined4 *)(unsigned)((int)ar5 + 0xc);
      *(int *)(unsigned)((int)puVar10 + -0x40) = (int)((ulonglong)in_dr6 >> 0x20);
      *(int *)(unsigned)((int)puVar10 + -0x44) = SUB84(in_dr6,0);
      *(undefined4 *)(unsigned)((int)puVar10 + -0x34) = *(undefined4 *)(unsigned)ar5;
      *(undefined4 *)(unsigned)((int)puVar10 + -0x38) = *(undefined4 *)(unsigned)((int)ar5 + 4);
      *(undefined4 *)(unsigned)((int)puVar10 + -0x3c) = *(undefined4 *)(unsigned)(ar5 + 1);
      dVar14 = CONCAT44D(*(undefined4 *)(unsigned)((int)puVar10 + -0x28),*(undefined4 *)(unsigned)ar5);
    }
    else {
      *(double *)(unsigned)((int)puVar10 + -0x28) = dVar14;
      *(undefined8 *)(unsigned)((int)puVar10 + -0x48) = *(undefined8 *)(unsigned)((int)ar5 + 0xc);
      *(double *)(unsigned)((int)puVar10 + -0x40) = in_dr6;
      *(double *)(unsigned)((int)puVar10 + -0x44) = in_xd6;
      *(double *)(unsigned)((int)puVar10 + -0x34) = *ar5;
      *(undefined8 *)(unsigned)((int)puVar10 + -0x38) = *(undefined8 *)(unsigned)((int)ar5 + 4);
      *(double *)(unsigned)((int)puVar10 + -0x3c) = ar5[1];
      in_xd2 = *ar5;
      dVar14 = *(double *)(unsigned)((int)puVar10 + -0x28);
    }
    if (in_FPSCR_PR == '\0') {
      fVar12 = (F32LO(dVar14) - fVar30) * F32HI(dVar14) * fVar13;
    }
    else {
      fVar12 = SUB84((dVar14 - dVar29) * (dVar14 - dVar29) * dVar26,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(unsigned)((int)puVar10 + -0x30) = fVar12;
      dVar14 = CONCAT44D(*(undefined4 *)(unsigned)((int)puVar10 + -0x28),*(undefined4 *)(unsigned)((int)ar5 + 4))
      ;
    }
    else {
      *(double *)(unsigned)((int)puVar10 + -0x30) = in_xd2;
      in_xd2 = *(double *)(unsigned)((int)ar5 + 4);
      dVar14 = *(double *)(unsigned)((int)puVar10 + -0x28);
    }
    if (in_FPSCR_PR == '\0') {
      fVar12 = (F32LO(dVar14) - fVar28) * F32HI(dVar14);
    }
    else {
      fVar12 = SUB84((dVar14 - dVar27) * (dVar14 - dVar27),0);
    }
    if (in_FPSCR_PR == '\0') {
      dVar14 = CONCAT44D(0x3f800000,fVar12 * fVar11);
    }
    else {
      dVar14 = CONCAT44D(0x3f800000,fVar12) * dVar26;
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)(unsigned)((int)puVar10 + -0x2c) = SUB84(dVar14,0);
      dVar14 = CONCAT44D((int)(D2U(dVar14) >> 0x20),*(undefined4 *)(unsigned)(ar6 + 1));
    }
    else {
      *(double *)(unsigned)((int)puVar10 + -0x2c) = in_xd2;
      in_xd2 = ar6[1];
    }
    if (in_FPSCR_PR == '\0') {
      dVar14 = CONCAT44D(F32HI(dVar14) / F32LO(dVar14),SUB84(dVar14,0)
                               );
    }
    else {
      dVar14 = dVar14 / dVar14;
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)(unsigned)((int)puVar10 + -4) = (int)(D2U(dVar14) >> 0x20);
      *(undefined4 *)(unsigned)((int)puVar10 + -0x24) = *(undefined4 *)(unsigned)((int)ar6 + 0xc);
      *(int *)(unsigned)((int)puVar10 + -0x1c) = (int)((ulonglong)in_dr8 >> 0x20);
      *(int *)(unsigned)((int)puVar10 + -0x20) = SUB84(in_dr8,0);
      *(undefined4 *)(unsigned)((int)puVar10 + -0x10) = *(undefined4 *)(unsigned)ar6;
      *(undefined4 *)(unsigned)((int)puVar10 + -0x14) = *(undefined4 *)(unsigned)((int)ar6 + 4);
      *(undefined4 *)(unsigned)((int)puVar10 + -0x18) = *(undefined4 *)(unsigned)(ar6 + 1);
      dVar14 = CONCAT44D(*(undefined4 *)(unsigned)((int)puVar10 + -4),*(undefined4 *)(unsigned)ar6);
    }
    else {
      *(double *)(unsigned)((int)puVar10 + -4) = dVar14;
      *(undefined8 *)(unsigned)((int)puVar10 + -0x24) = *(undefined8 *)(unsigned)((int)ar6 + 0xc);
      *(double *)(unsigned)((int)puVar10 + -0x1c) = in_dr8;
      *(double *)(unsigned)((int)puVar10 + -0x20) = in_xd8;
      *(double *)(unsigned)((int)puVar10 + -0x10) = *ar6;
      *(undefined8 *)(unsigned)((int)puVar10 + -0x14) = *(undefined8 *)(unsigned)((int)ar6 + 4);
      *(double *)(unsigned)((int)puVar10 + -0x18) = ar6[1];
      in_xd2 = *ar6;
      dVar14 = *(double *)(unsigned)((int)puVar10 + -4);
    }
    puVar1 = (undefined8 *)(unsigned)((int)puVar10 + -0xfc);
    if (in_FPSCR_PR == '\0') {
      fVar13 = (F32LO(dVar14) - fVar30) * F32HI(dVar14) * fVar13;
    }
    else {
      fVar13 = SUB84((dVar14 - dVar29) * (dVar14 - dVar29) * dVar26,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(unsigned)((int)puVar10 + -0xc) = fVar13;
      dVar14 = CONCAT44D(*(undefined4 *)(unsigned)((int)puVar10 + -4),*(undefined4 *)(unsigned)((int)ar6 + 4));
    }
    else {
      *(double *)(unsigned)((int)puVar10 + -0xc) = in_xd2;
      in_xd2 = *(double *)(unsigned)((int)ar6 + 4);
      dVar14 = *(double *)(unsigned)((int)puVar10 + -4);
    }
    if (in_FPSCR_PR == '\0') {
      dVar14 = CONCAT44D((int)(D2U(dVar14) >> 0x20),F32LO(dVar14) - fVar28);
    }
    else {
      dVar14 = dVar14 - dVar27;
    }
    iVar9 = 0;
    if (in_FPSCR_PR == '\0') {
      fVar13 = F32HI(dVar14);
      dVar14 = CONCAT44D(fVar13,F32LO(dVar14) * fVar13 * fVar11);
    }
    else {
      dVar14 = dVar14 * dVar14 * dVar26;
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)(unsigned)((int)puVar10 + -8) = SUB84(dVar14,0);
    }
    else {
      *(double *)(unsigned)((int)puVar10 + -8) = in_xd2;
    }
    iVar34 = 2;
    for (iVar5 = 0; iVar5 < 3; iVar5 = iVar5 + 1) {
      if (in_FPSCR_SZ == '\0') {
        uVar15 = CONCAT44(*(undefined4 *)(unsigned)((int)puVar8 + iVar34 * 0x24 + 0x20),0x3f800000);
      }
      else {
        uVar15 = *(undefined8 *)(unsigned)((int)puVar8 + iVar34 * 0x24 + 0x20);
      }
      puVar2 = (undefined8 *)(unsigned)((int)puVar8 + iVar5 * 0x24 + 0x20);
      if (in_FPSCR_SZ == '\0') {
        uVar16 = CONCAT44(*(undefined4 *)(unsigned)puVar2,(float)uVar15);
      }
      else {
        uVar16 = *puVar2;
      }
      fVar13 = (float)uVar16;
      if (((in_FPSCR_PR == '\0' && (float)uVar15 < F32HI(uVar15)) ^ 1) !=
          -((in_FPSCR_PR == '\0' && fVar13 < F32HI(uVar16)) - 1)) {
        if (in_FPSCR_SZ == '\0') {
          fVar13 = *(float *)(unsigned)((int)puVar8 + iVar34 * 0x24 + 0x20);
          in_dr0 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),
                                    *(undefined4 *)(unsigned)((int)puVar8 + iVar5 * 0x24 + 0x20));
          fVar11 = fVar13;
          dVar14 = CONCAT44D(fVar13,SUB84(in_dr4,0));
        }
        else {
          in_xd2 = *(double *)(unsigned)((int)puVar8 + iVar34 * 0x24 + 0x20);
          in_xd0 = *(double *)(unsigned)((int)puVar8 + iVar5 * 0x24 + 0x20);
          fVar11 = F32HI(in_xd2);
          dVar14 = in_xd2;
        }
        dVar17 = CONCAT44D(0x3f800000,-fVar13);
        if (in_FPSCR_PR == '\0') {
          dVar17 = CONCAT44D(0x3f800000,-fVar13 + 1.0);
          dVar14 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),F32LO(in_dr0) - fVar11);
        }
        else {
          dVar17 = dVar17 + dVar17;
          dVar14 = in_dr0 - dVar14;
        }
        if (in_FPSCR_SZ == '\0') {
          dVar20 = CONCAT44D(SUB84(dVar17,0),
                                    *(undefined4 *)(unsigned)((int)puVar8 + iVar34 * 0x24 + 0x18));
        }
        else {
          in_xd4 = *(double *)(unsigned)((int)puVar8 + iVar34 * 0x24 + 0x18);
          dVar20 = in_xd2;
        }
        if (in_FPSCR_PR == '\0') {
          dVar20 = CONCAT44D(F32HI(dVar20) / F32LO(dVar14),
                                    SUB84(dVar20,0));
        }
        else {
          dVar20 = dVar20 / dVar14;
        }
        if (in_FPSCR_SZ == '\0') {
          dVar17 = CONCAT44D((int)(D2U(dVar17) >> 0x20),
                                    *(undefined4 *)(unsigned)((int)puVar8 + iVar5 * 0x24 + 0x18));
          dVar14 = (double)(D2U(dVar20) & 0xffffffff);
          dVar22 = in_xd0;
        }
        else {
          in_xd2 = *(double *)(unsigned)((int)puVar8 + iVar5 * 0x24 + 0x18);
          dVar22 = in_xd4;
        }
        if (in_FPSCR_PR == '\0') {
          dVar17 = CONCAT44D((int)(D2U(dVar17) >> 0x20),
                                    F32LO(dVar17) - F32LO(dVar20));
        }
        else {
          dVar17 = dVar17 - dVar20;
        }
        uVar21 = (undefined4)(D2U(dVar20) >> 0x20);
        if (in_FPSCR_SZ == '\0') {
          in_xd0 = CONCAT44D(*(undefined4 *)(unsigned)((int)puVar8 + iVar34 * 0x24 + 0x1c),
                                    SUB84(in_dr6,0));
          dVar20 = CONCAT44D(uVar21,SUB84(dVar14,0));
          dVar14 = CONCAT44D(uVar21,fVar30);
        }
        else {
          in_xd0 = *(double *)(unsigned)((int)puVar8 + iVar34 * 0x24 + 0x1c);
          dVar14 = dVar20;
          in_xd4 = dVar29;
        }
        if (in_FPSCR_PR == '\0') {
          dVar20 = (double)(ulonglong)
                           (uint)(F32HI(dVar20) * F32LO(dVar17) +
                                 SUB84(dVar20,0));
        }
        if (in_FPSCR_SZ == '\0') {
          dVar17 = CONCAT44D((int)(D2U(dVar17) >> 0x20),
                                    *(undefined4 *)(unsigned)((int)puVar8 + iVar5 * 0x24 + 0x1c));
          uVar15 = CONCAT44(SUB84(dVar29,0),SUB84(dVar20,0));
        }
        else {
          in_xd2 = *(double *)(unsigned)((int)puVar8 + iVar5 * 0x24 + 0x1c);
          uVar15 = in_xd14;
        }
        fVar13 = F32HI(in_xd0);
        if (in_FPSCR_PR == '\0') {
          dVar17 = CONCAT44D((int)(D2U(dVar17) >> 0x20),F32LO(dVar17) - fVar13);
          dVar14 = CONCAT44D(uVar21,F32HI(uVar15) * (float)uVar15 +
                                           SUB84(dVar14,0));
        }
        else {
          dVar17 = dVar17 - in_xd0;
        }
        uVar21 = (undefined4)(D2U(dVar14) >> 0x20);
        in_dr6 = dVar27;
        dVar20 = dVar14;
        if (in_FPSCR_SZ == '\0') {
          in_dr6 = CONCAT44D(fVar28,SUB84(in_xd0,0));
          dVar20 = CONCAT44D(uVar21,fVar13);
          in_xd0 = dVar22;
        }
        if (in_FPSCR_PR == '\0') {
          dVar20 = (double)(ulonglong)
                           (uint)(F32HI(dVar20) * F32LO(dVar17) +
                                 SUB84(dVar20,0));
        }
        uVar15 = uVar32;
        if (in_FPSCR_SZ == '\0') {
          uVar15 = CONCAT44(SUB84(dVar27,0),SUB84(dVar20,0));
        }
        if (in_FPSCR_PR == '\0') {
          in_dr6 = CONCAT44D(F32HI(uVar15) * (float)uVar15 +
                                    F32HI(in_dr6),SUB84(in_dr6,0));
        }
        dVar20 = dVar14;
        if (in_FPSCR_SZ == '\0') {
          dVar20 = CONCAT44D(uVar21,(float)uVar15);
        }
        pdVar6 = (double *)(unsigned)(iVar9 * 0x24 + (int)puVar1);
        fVar13 = F32LO(dVar14);
        if (in_FPSCR_SZ == '\0') {
          *(float *)(unsigned)((int)pdVar6 + 0x14) = fVar13;
          *(int *)(unsigned)(pdVar6 + 2) = (int)((ulonglong)in_dr6 >> 0x20);
          pdVar6 = (double *)(unsigned)((int)pdVar6 + 0xc);
          *(int *)(unsigned)pdVar6 = (int)(D2U(dVar17) >> 0x20);
          fVar13 = *(float *)(unsigned)((int)puVar8 + iVar34 * 0x24 + 8);
          dVar14 = CONCAT44D(uVar21,fVar13);
          dVar17 = CONCAT44D(fVar13,*(undefined4 *)(unsigned)((int)puVar8 + iVar5 * 0x24 + 8));
        }
        else {
          pdVar6[2] = in_xd4;
          pdVar6[1] = in_dr6;
          *pdVar6 = dVar17;
          dVar17 = *(double *)(unsigned)((int)puVar8 + iVar34 * 0x24 + 8);
          in_xd2 = *(double *)(unsigned)((int)puVar8 + iVar5 * 0x24 + 8);
          in_xd4 = dVar17;
        }
        fVar11 = F32HI(dVar20);
        if (in_FPSCR_PR == '\0') {
          fVar13 = F32LO(dVar17) - fVar13;
          dVar17 = CONCAT44D(fVar11 * fVar13 + F32HI(dVar17),fVar13);
        }
        else {
          dVar17 = dVar17 - dVar14;
        }
        uVar21 = (undefined4)(D2U(dVar17) >> 0x20);
        if (in_FPSCR_SZ == '\0') {
          pdVar6 = (double *)(unsigned)((int)pdVar6 + -4);
          *(undefined4 *)(unsigned)pdVar6 = uVar21;
          dVar17 = CONCAT44D(uVar21,*(undefined4 *)(unsigned)((int)puVar8 + iVar5 * 0x24 + 4));
          dVar14 = CONCAT44D((int)(D2U(dVar14) >> 0x20),
                                    *(undefined4 *)(unsigned)((int)puVar8 + iVar34 * 0x24 + 4));
        }
        else {
          pdVar6 = pdVar6 + -1;
          *pdVar6 = dVar17;
          in_xd2 = *(double *)(unsigned)((int)puVar8 + iVar5 * 0x24 + 4);
          in_xd4 = *(double *)(unsigned)((int)puVar8 + iVar34 * 0x24 + 4);
        }
        fVar13 = F32LO(dVar14);
        if (in_FPSCR_PR == '\0') {
          fVar12 = F32LO(dVar17) - fVar13;
        }
        else {
          fVar12 = SUB84(dVar17 - dVar14,0);
        }
        dVar17 = in_xd4;
        if (in_FPSCR_SZ == '\0') {
          dVar17 = CONCAT44D(fVar13,fVar12);
        }
        if (in_FPSCR_PR == '\0') {
          dVar17 = CONCAT44D(fVar11 * F32LO(dVar17) + F32HI(dVar17),
                                    SUB84(dVar17,0));
        }
        if (in_FPSCR_SZ == '\0') {
          pdVar6 = (double *)(unsigned)((int)pdVar6 + -4);
          *(int *)(unsigned)pdVar6 = (int)(D2U(dVar17) >> 0x20);
        }
        else {
          pdVar6 = pdVar6 + -1;
          *pdVar6 = dVar17;
        }
        pdVar7 = (double *)(unsigned)(iVar34 * 0x24 + (int)puVar8);
        uVar21 = (undefined4)(D2U(dVar14) >> 0x20);
        if ((*(undefined4 *)(unsigned)(unsigned)0x8c4ab1d8) == 0x23) {
          uVar4 = *(uint *)(unsigned)pdVar7;
          fVar13 = (float)(uVar4 >> 0x18);
          dVar22 = (double)(ulonglong)(uint)fVar13;
          dVar17 = in_xd2;
          if (in_FPSCR_SZ == '\0') {
            dVar14 = CONCAT44D(uVar21,fVar13);
            dVar17 = in_xd4;
          }
          if (in_FPSCR_PR == '\0' && fVar13 < 0.0) {
            if (in_FPSCR_SZ == '\0') {
              dVar22 = 6.58979161647419e-315;
            }
            else {
              in_xd2 = -3.793790307430683e+271;
            }
            if (in_FPSCR_PR == '\0') {
              dVar14 = CONCAT44D((int)(D2U(dVar14) >> 0x20),
                                        F32LO(dVar14) + F32LO(dVar22));
            }
            else {
              dVar14 = dVar14 + dVar22;
            }
          }
          fVar13 = (float)(uVar4 >> 0x10 & 0xff);
          dVar18 = (double)(ulonglong)(uint)fVar13;
          dVar22 = in_xd2;
          if (in_FPSCR_SZ == '\0') {
            dVar22 = CONCAT44D(fVar13,SUB84(in_dr6,0));
          }
          if (in_FPSCR_PR == '\0' && fVar13 < 0.0) {
            if (in_FPSCR_SZ == '\0') {
              dVar18 = 6.58979161647419e-315;
            }
            else {
              in_xd2 = -3.793790307430683e+271;
            }
            if (in_FPSCR_PR == '\0') {
              dVar22 = CONCAT44D(F32HI(dVar22) + F32LO(dVar18),
                                        SUB84(dVar22,0));
            }
            else {
              dVar22 = dVar22 + dVar18;
            }
          }
          fVar13 = (float)(uVar4 >> 8 & 0xff);
          dVar24 = (double)(ulonglong)(uint)fVar13;
          dVar18 = in_xd2;
          if (in_FPSCR_SZ == '\0') {
            dVar22 = CONCAT44D((int)(D2U(dVar22) >> 0x20),fVar13);
            dVar18 = in_xd6;
          }
          if (in_FPSCR_PR == '\0' && fVar13 < 0.0) {
            if (in_FPSCR_SZ == '\0') {
              dVar24 = 6.58979161647419e-315;
            }
            else {
              in_xd2 = -3.793790307430683e+271;
            }
            if (in_FPSCR_PR == '\0') {
              dVar22 = CONCAT44D((int)(D2U(dVar22) >> 0x20),
                                        F32LO(dVar22) + F32LO(dVar24));
            }
            else {
              dVar22 = dVar22 + dVar24;
            }
          }
          fVar13 = (float)(uVar4 & 0xff);
          dVar25 = (double)(ulonglong)(uint)fVar13;
          dVar24 = in_xd2;
          if (in_FPSCR_SZ == '\0') {
            dVar24 = CONCAT44D(fVar13,SUB84(in_dr8,0));
          }
          uVar4 = (uint)(D2U(dVar24) >> 0x20);
          dVar31 = dVar24;
          if (in_FPSCR_PR != '\0' || 0.0 <= fVar13) {
            if (in_FPSCR_SZ == '\0') {
              dVar24 = (double)(ulonglong)uVar4;
              dVar31 = in_xd8;
            }
          }
          else {
            if (in_FPSCR_SZ == '\0') {
              dVar24 = CONCAT44D(uVar4,uVar4);
              dVar25 = 6.58979161647419e-315;
              dVar31 = in_xd8;
            }
            else {
              in_xd2 = -3.793790307430683e+271;
            }
            if (in_FPSCR_PR == '\0') {
              dVar24 = (double)(ulonglong)(uint)(F32LO(dVar24) + F32LO(dVar25));
            }
            else {
              dVar24 = dVar24 + dVar25;
            }
          }
          uVar4 = *(uint *)(unsigned)(iVar5 * 0x24 + (int)puVar8);
          fVar13 = (float)(uVar4 >> 0x18);
          dVar19 = (double)(ulonglong)(uint)fVar13;
          dVar25 = in_xd2;
          if (in_FPSCR_SZ == '\0') {
            dVar25 = CONCAT44D(fVar13,SUB84(dVar24,0));
          }
          if (in_FPSCR_PR == '\0' && fVar13 < 0.0) {
            if (in_FPSCR_SZ == '\0') {
              dVar19 = 6.58979161647419e-315;
            }
            else {
              in_xd2 = -3.793790307430683e+271;
            }
            if (in_FPSCR_PR == '\0') {
              dVar25 = CONCAT44D(F32HI(dVar25) + F32LO(dVar19),
                                        SUB84(dVar25,0));
            }
            else {
              dVar25 = dVar25 + dVar19;
            }
          }
          fVar13 = (float)(uVar4 >> 0x10 & 0xff);
          dVar19 = (double)(ulonglong)(uint)fVar13;
          dVar24 = in_xd2;
          if (in_FPSCR_SZ == '\0') {
            dVar24 = CONCAT44D(fVar13,SUB84(dVar26,0));
          }
          if (in_FPSCR_PR == '\0' && fVar13 < 0.0) {
            if (in_FPSCR_SZ == '\0') {
              dVar19 = 6.58979161647419e-315;
            }
            else {
              in_xd2 = -3.793790307430683e+271;
            }
            if (in_FPSCR_PR == '\0') {
              dVar24 = CONCAT44D(F32HI(dVar24) + F32LO(dVar19),
                                        SUB84(dVar24,0));
            }
            else {
              dVar24 = dVar24 + dVar19;
            }
          }
          fVar13 = (float)(uVar4 >> 8 & 0xff);
          dVar26 = (double)(ulonglong)(uint)fVar13;
          if (in_FPSCR_SZ == '\0') {
            dVar24 = CONCAT44D((int)(D2U(dVar24) >> 0x20),fVar13);
          }
          if (in_FPSCR_PR == '\0' && fVar13 < 0.0) {
            if (in_FPSCR_SZ == '\0') {
              dVar26 = 6.58979161647419e-315;
            }
            else {
              in_xd2 = -3.793790307430683e+271;
            }
            if (in_FPSCR_PR == '\0') {
              dVar24 = CONCAT44D((int)(D2U(dVar24) >> 0x20),
                                        F32LO(dVar24) + F32LO(dVar26));
            }
            else {
              dVar24 = dVar24 + dVar26;
            }
          }
          if (in_FPSCR_PR == '\0') {
            dVar26 = (double)((ulonglong)(uint)(float)(uVar4 & 0xff) << 0x20);
          }
          else {
            dVar26 = (double)(uVar4 & 0xff);
          }
          fVar13 = F32HI(dVar26);
          if (in_FPSCR_SZ == '\0') {
            *(float *)(unsigned)((int)puVar10 + -0x108) = fVar13;
          }
          else {
            *(double *)(unsigned)((int)puVar10 + -0x108) = dVar26;
          }
          if (in_FPSCR_PR != '\0' || SUB84(dVar26,0) <= fVar13) {
            if (in_FPSCR_SZ == '\0') {
              dVar26 = (double)(ulonglong)*(uint *)(unsigned)((int)puVar10 + -0x108);
            }
            else {
              in_xd2 = *(double *)(unsigned)((int)puVar10 + -0x108);
            }
          }
          else {
            if (in_FPSCR_SZ == '\0') {
              dVar26 = CONCAT44D(0x4f800000,*(undefined4 *)(unsigned)((int)puVar10 + -0x108));
            }
            else {
              in_xd2 = *(double *)(unsigned)((int)puVar10 + -0x108);
              dVar26 = -3.793790307430683e+271;
            }
            if (in_FPSCR_PR == '\0') {
              dVar26 = (double)(ulonglong)
                               (uint)(F32LO(dVar26) + F32HI(dVar26));
            }
            else {
              dVar26 = dVar26 + dVar26;
            }
          }
          if (in_FPSCR_PR == '\0') {
            dVar25 = CONCAT44D(F32HI(dVar25) - F32LO(dVar14),
                                      SUB84(dVar25,0));
          }
          else {
            dVar25 = dVar25 - dVar14;
          }
          if (in_FPSCR_SZ == '\0') {
            fVar13 = F32LO(dVar26);
            *(float *)(unsigned)((int)puVar10 + -0x100) = fVar13;
            in_dr0 = CONCAT44D((int)(D2U(dVar14) >> 0x20),SUB84(dVar20,0));
            dVar26 = CONCAT44D(SUB84(dVar14,0),fVar13);
          }
          else {
            fVar13 = F32LO(dVar17);
            *(double *)(unsigned)((int)puVar10 + -0x100) = in_xd2;
            in_dr0 = dVar14;
            dVar26 = dVar17;
          }
          fVar23 = F32LO(dVar25);
          fVar12 = F32HI(dVar22);
          fVar11 = F32HI(in_dr0);
          if (in_FPSCR_PR == '\0') {
            dVar24 = CONCAT44D(F32HI(dVar24) - fVar12,SUB84(dVar24,0));
            in_dr8 = CONCAT44D(fVar11 * F32HI(dVar25) +
                                      F32HI(dVar26),fVar13 - fVar23);
          }
          else {
            in_dr8 = dVar26 - dVar25;
            dVar24 = dVar24 - dVar22;
          }
          dVar20 = dVar22;
          if (in_FPSCR_SZ == '\0') {
            in_dr0 = CONCAT44D(fVar11,fVar12);
            dVar20 = in_xd0;
          }
          if (in_FPSCR_PR == '\0') {
            dVar26 = CONCAT44D((int)(D2U(dVar24) >> 0x20),
                                      F32LO(dVar24) - F32LO(dVar22));
          }
          else {
            dVar26 = dVar24 - dVar22;
          }
          in_xd4 = dVar18;
          if (in_FPSCR_SZ == '\0') {
            dVar14 = (double)(D2U(dVar22) & 0xffffffff);
            in_xd4 = dVar17;
          }
          if (in_FPSCR_PR == '\0') {
            fVar13 = F32HI(in_dr0);
            in_dr0 = CONCAT44D(fVar13,fVar13 * F32HI(dVar26) +
                                             SUB84(in_dr0,0));
          }
          in_dr4 = dVar31;
          if (in_FPSCR_SZ == '\0') {
            in_dr4 = CONCAT44D(fVar23,SUB84(in_dr8,0));
            in_dr8 = CONCAT44D((int)((ulonglong)in_dr8 >> 0x20),fVar23);
          }
          fVar13 = F32HI(in_dr0);
          if (in_FPSCR_PR == '\0') {
            in_dr4 = CONCAT44D(fVar13 * F32LO(in_dr4) + F32HI(in_dr4),
                                      SUB84(in_dr4,0));
          }
          in_dr6 = dVar20;
          dVar17 = in_dr4;
          dVar24 = in_dr8;
          if (in_FPSCR_SZ == '\0') {
            uVar21 = (undefined4)((ulonglong)in_dr4 >> 0x20);
            in_dr4 = CONCAT44D(uVar21,SUB84(dVar14,0));
            in_dr6 = CONCAT44D(SUB84(in_dr0,0),SUB84(dVar22,0));
            dVar17 = CONCAT44D(uVar21,(int)((ulonglong)in_dr8 >> 0x20));
            dVar24 = in_xd2;
          }
          in_xd2 = dVar24;
          fVar11 = F32LO(dVar17);
          dVar14 = CONCAT44D(0x4f000000,fVar11);
          if (in_FPSCR_PR == '\0') {
            in_dr4 = CONCAT44D((int)((ulonglong)in_dr4 >> 0x20),
                                      fVar13 * F32LO(dVar26) + F32LO(in_dr4));
          }
          if (in_FPSCR_PR != '\0' || 2.1474836e+09 <= fVar11) {
            if (in_FPSCR_PR == '\0') {
              dVar14 = CONCAT44D(0x4f800000,fVar11 - 4.2949673e+09);
            }
            else {
              dVar14 = (dVar14 + dVar14) - (dVar14 + dVar14);
            }
          }
          if (in_FPSCR_PR == '\0') {
            iVar34 = (int)SUB84(dVar14,0);
          }
          else {
            iVar34 = (int)dVar14;
          }
          uVar21 = (undefined4)(D2U(dVar14) >> 0x20);
          dVar14 = CONCAT44D(uVar21,0x4f000000);
          fVar13 = F32HI(in_dr6);
          if (in_FPSCR_PR == '\0') {
            bVar33 = fVar13 < 2.1474836e+09;
          }
          else {
            bVar33 = in_dr6 < dVar14;
          }
          if (!bVar33) {
            if (in_FPSCR_PR == '\0') {
              dVar14 = CONCAT44D(uVar21,0x4f800000);
              in_dr6 = CONCAT44D(fVar13 - 4.2949673e+09,SUB84(in_dr6,0));
            }
            else {
              dVar14 = dVar14 + dVar14;
              in_dr6 = in_dr6 - dVar14;
            }
          }
          if (in_FPSCR_PR == '\0') {
            iVar35 = (int)F32HI(in_dr6);
          }
          else {
            iVar35 = (int)in_dr6;
          }
          uVar21 = (undefined4)(D2U(dVar14) >> 0x20);
          dVar14 = CONCAT44D(uVar21,0x4f000000);
          if (in_FPSCR_PR == '\0') {
            bVar33 = SUB84(in_dr4,0) < 2.1474836e+09;
          }
          else {
            bVar33 = in_dr4 < dVar14;
          }
          if (!bVar33) {
            if (in_FPSCR_PR == '\0') {
              dVar14 = CONCAT44D(uVar21,0x4f800000);
              in_dr4 = CONCAT44D((int)((ulonglong)in_dr4 >> 0x20),
                                        F32LO(in_dr4) - 4.2949673e+09);
            }
            else {
              dVar14 = dVar14 + dVar14;
              in_dr4 = in_dr4 - dVar14;
            }
          }
          if (in_FPSCR_PR == '\0') {
            iVar36 = (int)SUB84(in_dr4,0);
          }
          else {
            iVar36 = (int)in_dr4;
          }
          dVar14 = CONCAT44D((int)(D2U(dVar14) >> 0x20),0x4f000000);
          fVar13 = F32HI(in_dr4);
          if (in_FPSCR_PR == '\0') {
            bVar33 = fVar13 < 2.1474836e+09;
          }
          else {
            bVar33 = in_dr4 < dVar14;
          }
          if (!bVar33) {
            if (in_FPSCR_PR == '\0') {
              in_dr4 = CONCAT44D(fVar13 - 4.2949673e+09,SUB84(in_dr4,0));
            }
            else {
              in_dr4 = in_dr4 - (dVar14 + dVar14);
            }
          }
          if (in_FPSCR_PR == '\0') {
            uVar4 = (uint)F32HI(in_dr4);
          }
          else {
            uVar4 = (uint)in_dr4;
          }
          *(uint *)(unsigned)((int)pdVar6 + -4) = iVar34 << 0x18 | iVar35 << 0x10 | iVar36 << 8 | uVar4;
          in_xd0 = dVar20;
          in_xd6 = dVar18;
          in_xd8 = dVar31;
        }
        else {
          in_dr0 = dVar14;
          if (in_FPSCR_SZ == '\0') {
            in_dr0 = CONCAT44D(uVar21,SUB84(dVar20,0));
          }
          *(unsigned *)(unsigned)((int)puVar10 + -0x104) = pdVar7;
          pdVar3 = (double *)(unsigned)(iVar5 * 0x24 + (int)puVar8);
          if (in_FPSCR_SZ == '\0') {
            fVar13 = *(float *)(unsigned)pdVar7;
            dVar17 = CONCAT44D(fVar13,*(undefined4 *)(unsigned)pdVar3);
            in_dr4 = CONCAT44D(uVar21,fVar13);
          }
          else {
            dVar17 = *pdVar7;
            in_xd2 = *pdVar3;
            in_dr4 = dVar14;
            in_xd4 = dVar17;
          }
          if (in_FPSCR_PR == '\0') {
            fVar13 = F32LO(dVar17) - fVar13;
            dVar17 = CONCAT44D(F32HI(in_dr0) * fVar13 +
                                      F32HI(dVar17),fVar13);
          }
          else {
            dVar17 = dVar17 - in_dr4;
          }
          if (in_FPSCR_SZ == '\0') {
            *(int *)(unsigned)((int)pdVar6 + -4) = (int)(D2U(dVar17) >> 0x20);
          }
          else {
            pdVar6[-1] = dVar17;
          }
        }
        iVar9 = iVar9 + 1;
      }
      pdVar6 = (double *)(unsigned)(iVar5 * 0x24 + (int)puVar8);
      if (in_FPSCR_SZ == '\0') {
        dVar14 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar6 + 4),0x3f800000);
      }
      else {
        dVar14 = pdVar6[4];
      }
      if (in_FPSCR_PR == '\0' && SUB84(dVar14,0) < F32HI(dVar14)) {
        if (in_FPSCR_SZ == '\0') {
          uVar15 = CONCAT44(*(undefined4 *)(unsigned)((int)pdVar6 + 0x14),SUB84(dVar14,0));
        }
        else {
          uVar15 = *(undefined8 *)(unsigned)((int)pdVar6 + 0x14);
        }
        puVar2 = (undefined8 *)(unsigned)(iVar9 * 0x24 + (int)puVar1);
        iVar34 = iVar9 + 1;
        iVar9 = iVar9 + 1;
        if (in_FPSCR_SZ == '\0') {
          *(int *)(unsigned)((int)puVar2 + 0x14) = (int)((ulonglong)uVar15 >> 0x20);
          *(undefined4 *)(unsigned)(puVar2 + 2) = *(undefined4 *)(unsigned)(pdVar6 + 2);
          *(undefined4 *)(unsigned)((int)puVar2 + 0xc) = *(undefined4 *)(unsigned)((int)pdVar6 + 0xc);
          *(undefined4 *)(unsigned)(puVar2 + 1) = *(undefined4 *)(unsigned)(pdVar6 + 1);
          dVar14 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar6 + 4),(int)uVar15);
          *(undefined4 *)(unsigned)((int)puVar2 + 4) = *(undefined4 *)(unsigned)((int)pdVar6 + 4);
          in_dr0 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),*(undefined4 *)(unsigned)pdVar6);
          *(undefined4 *)(unsigned)puVar2 = *(undefined4 *)(unsigned)pdVar6;
          iVar9 = iVar34;
        }
        else {
          puVar2[2] = uVar15;
          puVar2[1] = pdVar6[2];
          *puVar2 = *(undefined8 *)(unsigned)((int)pdVar6 + 0xc);
          puVar2[-1] = pdVar6[1];
          dVar14 = *(double *)(unsigned)((int)pdVar6 + 4);
          puVar2[-2] = dVar14;
          in_xd0 = *pdVar6;
          puVar2[-3] = in_xd0;
        }
      }
      iVar34 = iVar5;
    }
    if ((*(undefined4 *)(unsigned)(unsigned)0x8c277acc) != 0) {
      pdVar6 = (double *)(unsigned)((int)puVar10 + -0x24);
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(unsigned)((int)puVar10 + -0xb4) = *(undefined4 *)(unsigned)pdVar6;
        dVar14 = CONCAT44D((int)(D2U(dVar14) >> 0x20),*(undefined4 *)(unsigned)pdVar6);
        *(undefined4 *)(unsigned)((int)puVar10 + -0x90) = *(undefined4 *)(unsigned)pdVar6;
      }
      else {
        *(double *)(unsigned)((int)puVar10 + -0xb4) = *pdVar6;
        in_xd2 = *pdVar6;
        *(double *)(unsigned)((int)puVar10 + -0x90) = in_xd2;
      }
    }
    if (in_FPSCR_SZ == '\0') {
      uVar21 = *(undefined4 *)(unsigned)puVar1;
      puVar8 = (undefined8 *)(unsigned)((int)puVar10 + -0xf8);
    }
    else {
      uVar21 = (undefined4)((ulonglong)*puVar1 >> 0x20);
      puVar8 = (undefined8 *)(unsigned)((int)puVar10 + -0xf4);
    }
    dVar27 = CONCAT44D(uVar21,0x3f800000);
    if (in_FPSCR_SZ == '\0') {
      dVar14 = CONCAT44D((int)(D2U(dVar14) >> 0x20),uVar21);
      dVar27 = in_xd2;
    }
    if (in_FPSCR_PR == '\0') {
      dVar14 = CONCAT44D((int)(D2U(dVar14) >> 0x20),F32LO(dVar14) + -1.0);
    }
    else {
      dVar14 = dVar14 + CONCAT44D(uVar21,0xbf800000);
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)(unsigned)((int)ar7 + 0x1c) = SUB84(dVar14,0);
      *(undefined4 *)(unsigned)(ar7 + 3) = uVar21;
      *(undefined4 *)(unsigned)((int)ar7 + 0x14) = *(undefined4 *)(unsigned)puVar8;
      *(undefined4 *)(unsigned)(ar7 + 2) = *(undefined4 *)(unsigned)((int)puVar8 + 4);
      *(undefined4 *)(unsigned)((int)ar7 + 0xc) = *(undefined4 *)(unsigned)(puVar8 + 1);
      *(undefined4 *)(unsigned)(ar7 + 1) = *(undefined4 *)(unsigned)((int)puVar8 + 0xc);
      dVar14 = CONCAT44D((int)(D2U(dVar14) >> 0x20),*(undefined4 *)(unsigned)(puVar8 + 2));
      pdVar6 = (double *)(unsigned)((int)ar7 + 4);
      *(undefined4 *)(unsigned)pdVar6 = *(undefined4 *)(unsigned)(puVar8 + 2);
    }
    else {
      ar7[3] = dVar27;
      ar7[2] = CONCAT44(uVar21,0xbf800000);
      ar7[1] = *puVar8;
      *ar7 = puVar8[1];
      ar7[-1] = puVar8[2];
      ar7[-2] = puVar8[3];
      dVar27 = (double)puVar8[4];
      pdVar6 = (double *)(unsigned)(ar7 + -3);
      *pdVar6 = dVar27;
    }
    *(undefined4 *)(unsigned)((int)pdVar6 + -4) = 0xe0000000;
    if (in_FPSCR_SZ == '\0') {
      uVar21 = *(undefined4 *)(unsigned)((int)puVar10 + -0xd8);
      puVar8 = (undefined8 *)(unsigned)((int)puVar10 + -0xd4);
      dVar14 = CONCAT44D((int)(D2U(dVar14) >> 0x20),uVar21);
      dVar29 = CONCAT44D(uVar21,0xbf800000);
    }
    else {
      dVar27 = *(double *)(unsigned)((int)puVar10 + -0xd8);
      puVar8 = (undefined8 *)(unsigned)((int)puVar10 + -0xd0);
      uVar21 = (undefined4)(D2U(dVar27) >> 0x20);
      dVar29 = dVar27;
    }
    if (in_FPSCR_PR == '\0') {
      dVar14 = CONCAT44D((int)(D2U(dVar14) >> 0x20),F32LO(dVar14) + F32LO(dVar29));
    }
    else {
      dVar14 = dVar14 + dVar29;
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)(unsigned)(pdVar6 + 7) = SUB84(dVar14,0);
      *(undefined4 *)(unsigned)((int)pdVar6 + 0x34) = uVar21;
      *(undefined4 *)(unsigned)(pdVar6 + 6) = *(undefined4 *)(unsigned)puVar8;
      *(undefined4 *)(unsigned)((int)pdVar6 + 0x2c) = *(undefined4 *)(unsigned)((int)puVar8 + 4);
      *(undefined4 *)(unsigned)(pdVar6 + 5) = *(undefined4 *)(unsigned)(puVar8 + 1);
      *(undefined4 *)(unsigned)((int)pdVar6 + 0x24) = *(undefined4 *)(unsigned)((int)puVar8 + 0xc);
      dVar14 = CONCAT44D((int)(D2U(dVar14) >> 0x20),*(undefined4 *)(unsigned)(puVar8 + 2));
      pdVar6 = pdVar6 + 4;
      *(undefined4 *)(unsigned)pdVar6 = *(undefined4 *)(unsigned)(puVar8 + 2);
    }
    else {
      *(double *)(unsigned)((int)pdVar6 + 0x34) = dVar27;
      *(double *)(unsigned)((int)pdVar6 + 0x2c) = dVar29;
      *(undefined8 *)(unsigned)((int)pdVar6 + 0x24) = *puVar8;
      *(undefined8 *)(unsigned)((int)pdVar6 + 0x1c) = puVar8[1];
      *(undefined8 *)(unsigned)((int)pdVar6 + 0x14) = puVar8[2];
      *(undefined8 *)(unsigned)((int)pdVar6 + 0xc) = puVar8[3];
      dVar27 = (double)puVar8[4];
      pdVar6 = (double *)(unsigned)((int)pdVar6 + 4);
      *pdVar6 = dVar27;
    }
    *(undefined4 *)(unsigned)((int)pdVar6 + -4) = 0xe0000000;
    if (iVar9 != 3) {
      if (in_FPSCR_SZ == '\0') {
        uVar21 = *(undefined4 *)(unsigned)((int)puVar10 + -0x90);
        puVar8 = (undefined8 *)(unsigned)((int)puVar10 + -0x8c);
        dVar14 = CONCAT44D((int)(D2U(dVar14) >> 0x20),uVar21);
        dVar29 = CONCAT44D(uVar21,SUB84(dVar29,0));
      }
      else {
        dVar27 = *(double *)(unsigned)((int)puVar10 + -0x90);
        puVar8 = (undefined8 *)(unsigned)((int)puVar10 + -0x88);
        uVar21 = (undefined4)(D2U(dVar27) >> 0x20);
        dVar29 = dVar27;
      }
      if (in_FPSCR_PR == '\0') {
        dVar14 = CONCAT44D((int)(D2U(dVar14) >> 0x20),F32LO(dVar14) + F32LO(dVar29)
                                 );
      }
      else {
        dVar14 = dVar14 + dVar29;
      }
      if (in_FPSCR_SZ == '\0') {
        *(int *)(unsigned)(pdVar6 + 7) = SUB84(dVar14,0);
        *(undefined4 *)(unsigned)((int)pdVar6 + 0x34) = uVar21;
        *(undefined4 *)(unsigned)(pdVar6 + 6) = *(undefined4 *)(unsigned)puVar8;
        *(undefined4 *)(unsigned)((int)pdVar6 + 0x2c) = *(undefined4 *)(unsigned)((int)puVar8 + 4);
        *(undefined4 *)(unsigned)(pdVar6 + 5) = *(undefined4 *)(unsigned)(puVar8 + 1);
        *(undefined4 *)(unsigned)((int)pdVar6 + 0x24) = *(undefined4 *)(unsigned)((int)puVar8 + 0xc);
        dVar14 = CONCAT44D((int)(D2U(dVar14) >> 0x20),*(undefined4 *)(unsigned)(puVar8 + 2));
        pdVar6 = pdVar6 + 4;
        *(undefined4 *)(unsigned)pdVar6 = *(undefined4 *)(unsigned)(puVar8 + 2);
      }
      else {
        *(double *)(unsigned)((int)pdVar6 + 0x34) = dVar27;
        *(double *)(unsigned)((int)pdVar6 + 0x2c) = dVar29;
        *(undefined8 *)(unsigned)((int)pdVar6 + 0x24) = *puVar8;
        *(undefined8 *)(unsigned)((int)pdVar6 + 0x1c) = puVar8[1];
        *(undefined8 *)(unsigned)((int)pdVar6 + 0x14) = puVar8[2];
        *(undefined8 *)(unsigned)((int)pdVar6 + 0xc) = puVar8[3];
        dVar27 = (double)puVar8[4];
        pdVar6 = (double *)(unsigned)((int)pdVar6 + 4);
        *pdVar6 = dVar27;
      }
      *(undefined4 *)(unsigned)((int)pdVar6 + -4) = 0xe0000000;
    }
    if (in_FPSCR_SZ == '\0') {
      uVar21 = *(undefined4 *)(unsigned)((int)puVar10 + -0xb4);
      puVar8 = (undefined8 *)(unsigned)((int)puVar10 + -0xb0);
      dVar14 = CONCAT44D((int)(D2U(dVar14) >> 0x20),uVar21);
      dVar29 = CONCAT44D(uVar21,SUB84(dVar29,0));
    }
    else {
      dVar27 = *(double *)(unsigned)((int)puVar10 + -0xb4);
      puVar8 = (undefined8 *)(unsigned)((int)puVar10 + -0xac);
      uVar21 = (undefined4)(D2U(dVar27) >> 0x20);
      dVar29 = dVar27;
    }
    if (in_FPSCR_PR == '\0') {
      fVar13 = F32LO(dVar14) + F32LO(dVar29);
    }
    else {
      fVar13 = SUB84(dVar14 + dVar29,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(unsigned)(pdVar6 + 7) = fVar13;
      *(undefined4 *)(unsigned)((int)pdVar6 + 0x34) = uVar21;
      *(undefined4 *)(unsigned)(pdVar6 + 6) = *(undefined4 *)(unsigned)puVar8;
      *(undefined4 *)(unsigned)((int)pdVar6 + 0x2c) = *(undefined4 *)(unsigned)((int)puVar8 + 4);
      *(undefined4 *)(unsigned)(pdVar6 + 5) = *(undefined4 *)(unsigned)(puVar8 + 1);
      *(undefined4 *)(unsigned)((int)pdVar6 + 0x24) = *(undefined4 *)(unsigned)((int)puVar8 + 0xc);
      pdVar6 = pdVar6 + 4;
      *(undefined4 *)(unsigned)pdVar6 = *(undefined4 *)(unsigned)(puVar8 + 2);
    }
    else {
      *(double *)(unsigned)((int)pdVar6 + 0x34) = dVar27;
      *(double *)(unsigned)((int)pdVar6 + 0x2c) = dVar29;
      *(undefined8 *)(unsigned)((int)pdVar6 + 0x24) = *puVar8;
      *(undefined8 *)(unsigned)((int)pdVar6 + 0x1c) = puVar8[1];
      *(undefined8 *)(unsigned)((int)pdVar6 + 0x14) = puVar8[2];
      *(undefined8 *)(unsigned)((int)pdVar6 + 0xc) = puVar8[3];
      pdVar6 = (double *)(unsigned)((int)pdVar6 + 4);
      *pdVar6 = (double)puVar8[4];
    }
    *(undefined4 *)(unsigned)((int)pdVar6 + -4) = 0xf0000000;
    ar7 = (undefined8 *)(unsigned)((int)pdVar6 + 0x1c);
    (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) + iVar9;
  }
  return ar7;
}

__asm__(".globl _FUN_8c2170f4\n.set _FUN_8c2170f4, _FUN_8c2170f4_def\n");
