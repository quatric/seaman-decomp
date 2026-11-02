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
undefined8 * FUN_8c216b84_def(double *ar4,double *ar5,double *ar6,undefined8 *ar7)

{
  ring[rp++ & 255] = "FUN_8c216b84";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 288; for (int i_ = 0; i_ < 288; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  double *pdVar7;
  undefined8 *puVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined8 *puVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  double in_dr0 = 0;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  double dVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  double in_dr4 = 0;
  double dVar22;
  double in_dr6 = 0;
  double dVar23;
  undefined4 in_fr9 = 0;
  undefined4 in_fr8 = 0;
  undefined4 in_fr11 = 0;
  undefined4 uVar25;
  double dVar24;
  undefined8 in_dr12 = 0;
  double dVar26;
  double dVar27;
  float fVar28;
  double in_xd2 = 0;
  double in_xd4 = 0;
  undefined8 in_xd6 = 0;
  undefined8 in_xd8 = 0;
  undefined8 in_xd12 = 0;
  undefined8 uVar29;
  undefined8 in_xd14 = 0;
  char in_FPSCR_PR = 0;
  char in_FPSCR_SZ = 0;
  
  uVar5 = 0xe0000000;
  puVar4 = 0x8c4aa2a4;
  puVar3 = 0x8c4aa2a0;
  if (in_FPSCR_SZ == '\0') {
    puVar13 = ((undefined1 *)(fr0_ - 0x1c));
  }
  else {
    puVar13 = ((undefined1 *)(fr0_ - 0x24));
  }
  iVar6 = (int)(int)0xffffff04;
  if (in_FPSCR_SZ == '\0') {
    *(int *)(unsigned)(puVar13 + -4) = (int)in_dr12;
    puVar14 = puVar13 + -8;
    *(int *)(unsigned)(puVar13 + -8) = (int)((ulonglong)in_dr12 >> 0x20);
  }
  else {
    *(undefined8 *)(unsigned)(puVar13 + -8) = in_xd12;
    puVar14 = puVar13 + -0x10;
    *(undefined8 *)(unsigned)(puVar13 + -0x10) = in_dr12;
  }
  if ((*(undefined4 *)(unsigned)0x8c4aa4f0 & 0x10000) == 0) {
    if (in_FPSCR_SZ == '\0') {
      uVar25 = *(undefined4 *)(unsigned)0x8c4aa4a8;
      dVar26 = CONCAT44D(*(undefined4 *)(unsigned)(0x8c4aa4a8 + 2),(int)in_dr12);
      dVar19 = CONCAT44D(*(undefined4 *)(unsigned)0x8c4aa4e0,*(undefined4 *)(unsigned)0x8c4aa4dc);
      dVar27 = CONCAT44D(*(undefined4 *)(unsigned)((unsigned)0x8c4aa4a8 + 0xc),uVar25);
      uVar29 = CONCAT44(uVar25,in_fr11);
    }
    else {
      in_xd14 = *(undefined4 *)(unsigned)0x8c4aa4a8;
      dVar27 = *(double *)(unsigned)((unsigned)0x8c4aa4a8 + 0xc);
      in_xd2 = *(undefined4 *)(unsigned)0x8c4aa4dc;
      dVar26 = (double)((undefined1 *)(unsigned)2)[0x8c4aa4a8];
      dVar19 = *(undefined4 *)(unsigned)0x8c4aa4e0;
      uVar25 = (undefined4)((ulonglong)in_xd14 >> 0x20);
      uVar29 = in_xd14;
    }
    if (in_FPSCR_PR == '\0') {
      dVar27 = CONCAT44D((int)(D2U(dVar27) >> 0x20),F32LO(dVar27) * F32LO(dVar19));
    }
    else {
      dVar27 = dVar27 * dVar19;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar26 = CONCAT44D((int)(D2U(dVar26) >> 0x20),uVar25);
      uVar29 = in_xd12;
    }
    if (in_FPSCR_PR == '\0') {
      dVar26 = CONCAT44D((int)(D2U(dVar26) >> 0x20),
                                F32LO(dVar26) * F32HI(dVar19));
    }
    else {
      dVar26 = dVar26 * dVar19;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar19 = (double)(ulonglong)*(uint *)(unsigned)(ar4 + 1);
    }
    else {
      in_xd2 = ar4[1];
    }
    fVar17 = F32LO(dVar19);
    if (in_FPSCR_PR == '\0') {
      dVar19 = CONCAT44D(1.0 / fVar17,fVar17);
      dVar24 = CONCAT44D(1.0 / F32LO(dVar27),1.0 / F32LO(dVar26));
    }
    else {
      dVar19 = CONCAT44D(0x3f800000,fVar17) / CONCAT44D(0x3f800000,fVar17);
      dVar24 = (0.007812501848093234 / dVar27) / dVar26;
    }
    iVar1 = 0x90 + iVar6;
    if (in_FPSCR_SZ == '\0') {
      *(int *)(unsigned)(puVar14 + iVar1 + 0x20) = (int)(D2U(dVar19) >> 0x20);
      *(int *)(unsigned)(puVar14 + iVar1 + 8) = (int)((ulonglong)in_dr4 >> 0x20);
      *(int *)(unsigned)(puVar14 + iVar1 + 4) = SUB84(in_dr4,0);
      *(undefined4 *)(unsigned)(puVar14 + iVar1 + 0x14) = *(undefined4 *)(unsigned)ar4;
      *(undefined4 *)(unsigned)(puVar14 + iVar1 + 0x10) = *(undefined4 *)(unsigned)((int)ar4 + 4);
      *(undefined4 *)(unsigned)(puVar14 + iVar1 + 0xc) = *(undefined4 *)(unsigned)(ar4 + 1);
      dVar19 = CONCAT44D(*(undefined4 *)(unsigned)(puVar14 + iVar1 + 0x20),*(undefined4 *)(unsigned)ar4);
    }
    else {
      *(double *)(unsigned)(puVar14 + iVar1 + 0x20) = dVar19;
      *(double *)(unsigned)(puVar14 + iVar1 + 8) = in_dr4;
      *(double *)(unsigned)(puVar14 + iVar1 + 4) = in_xd4;
      *(double *)(unsigned)(puVar14 + iVar1 + 0x14) = *ar4;
      *(undefined8 *)(unsigned)(puVar14 + iVar1 + 0x10) = *(undefined8 *)(unsigned)((int)ar4 + 4);
      *(double *)(unsigned)(puVar14 + iVar1 + 0xc) = ar4[1];
      in_xd2 = *ar4;
      dVar19 = *(double *)(unsigned)(puVar14 + iVar1 + 0x20);
    }
    fVar28 = F32HI(dVar27);
    fVar17 = F32HI(dVar24);
    if (in_FPSCR_PR == '\0') {
      fVar15 = (F32LO(dVar19) - fVar28) * F32HI(dVar19) * fVar17;
    }
    else {
      fVar15 = SUB84((dVar19 - dVar27) * (dVar19 - dVar27) * dVar24,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(unsigned)(puVar14 + iVar1 + 0x18) = fVar15;
      dVar19 = CONCAT44D(*(undefined4 *)(unsigned)(puVar14 + iVar1 + 0x20),
                                *(undefined4 *)(unsigned)((int)ar4 + 4));
    }
    else {
      *(double *)(unsigned)(puVar14 + iVar1 + 0x18) = in_xd2;
      in_xd2 = *(double *)(unsigned)((int)ar4 + 4);
      dVar19 = *(double *)(unsigned)(puVar14 + iVar1 + 0x20);
    }
    fVar15 = F32HI(dVar26);
    if (in_FPSCR_PR == '\0') {
      fVar16 = (F32LO(dVar19) - fVar15) * F32HI(dVar19);
    }
    else {
      fVar16 = SUB84((dVar19 - dVar26) * (dVar19 - dVar26),0);
    }
    fVar18 = F32LO(dVar24);
    if (in_FPSCR_PR == '\0') {
      dVar19 = CONCAT44D(0x3f800000,fVar16 * fVar18);
    }
    else {
      dVar19 = CONCAT44D(0x3f800000,fVar16) * dVar24;
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)(unsigned)(puVar14 + iVar1 + 0x1c) = SUB84(dVar19,0);
      dVar19 = CONCAT44D((int)(D2U(dVar19) >> 0x20),*(undefined4 *)(unsigned)(ar5 + 1));
    }
    else {
      *(double *)(unsigned)(puVar14 + iVar1 + 0x1c) = in_xd2;
      in_xd2 = ar5[1];
    }
    if (in_FPSCR_PR == '\0') {
      dVar19 = CONCAT44D(F32HI(dVar19) / F32LO(dVar19),SUB84(dVar19,0)
                               );
    }
    else {
      dVar19 = dVar19 / dVar19;
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)(unsigned)(puVar14 + iVar1 + 0x44) = (int)(D2U(dVar19) >> 0x20);
      *(int *)(unsigned)(puVar14 + iVar1 + 0x2c) = (int)((ulonglong)in_dr6 >> 0x20);
      *(int *)(unsigned)(puVar14 + iVar1 + 0x28) = SUB84(in_dr6,0);
      *(undefined4 *)(unsigned)(puVar14 + iVar1 + 0x38) = *(undefined4 *)(unsigned)ar5;
      *(undefined4 *)(unsigned)(puVar14 + iVar1 + 0x34) = *(undefined4 *)(unsigned)((int)ar5 + 4);
      *(undefined4 *)(unsigned)(puVar14 + iVar1 + 0x30) = *(undefined4 *)(unsigned)(ar5 + 1);
      dVar19 = CONCAT44D(*(undefined4 *)(unsigned)(puVar14 + iVar1 + 0x44),*(undefined4 *)(unsigned)ar5);
    }
    else {
      *(double *)(unsigned)(puVar14 + iVar1 + 0x44) = dVar19;
      *(double *)(unsigned)(puVar14 + iVar1 + 0x2c) = in_dr6;
      *(undefined8 *)(unsigned)(puVar14 + iVar1 + 0x28) = in_xd6;
      *(double *)(unsigned)(puVar14 + iVar1 + 0x38) = *ar5;
      *(undefined8 *)(unsigned)(puVar14 + iVar1 + 0x34) = *(undefined8 *)(unsigned)((int)ar5 + 4);
      *(double *)(unsigned)(puVar14 + iVar1 + 0x30) = ar5[1];
      in_xd2 = *ar5;
      dVar19 = *(double *)(unsigned)(puVar14 + iVar1 + 0x44);
    }
    if (in_FPSCR_PR == '\0') {
      fVar16 = (F32LO(dVar19) - fVar28) * F32HI(dVar19) * fVar17;
    }
    else {
      fVar16 = SUB84((dVar19 - dVar27) * (dVar19 - dVar27) * dVar24,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(unsigned)(puVar14 + iVar1 + 0x3c) = fVar16;
      dVar19 = CONCAT44D(*(undefined4 *)(unsigned)(puVar14 + iVar1 + 0x44),
                                *(undefined4 *)(unsigned)((int)ar5 + 4));
    }
    else {
      *(double *)(unsigned)(puVar14 + iVar1 + 0x3c) = in_xd2;
      in_xd2 = *(double *)(unsigned)((int)ar5 + 4);
      dVar19 = *(double *)(unsigned)(puVar14 + iVar1 + 0x44);
    }
    if (in_FPSCR_PR == '\0') {
      fVar16 = (F32LO(dVar19) - fVar15) * F32HI(dVar19) * fVar18;
    }
    else {
      fVar16 = SUB84((dVar19 - dVar26) * (dVar19 - dVar26) * dVar24,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(unsigned)(puVar14 + iVar1 + 0x40) = fVar16;
      fVar16 = *(float *)(unsigned)(ar6 + 1);
    }
    else {
      *(double *)(unsigned)(puVar14 + iVar1 + 0x40) = in_xd2;
      in_xd2 = ar6[1];
    }
    if (in_FPSCR_PR == '\0') {
      dVar19 = CONCAT44D(1.0 / fVar16,fVar16);
    }
    else {
      dVar19 = CONCAT44D(0x3f800000,fVar16) / CONCAT44D(0x3f800000,fVar16);
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)(unsigned)(puVar14 + iVar1 + 0x68) = (int)(D2U(dVar19) >> 0x20);
      *(undefined4 *)(unsigned)(puVar14 + iVar1 + 0x50) = in_fr8;
      *(undefined4 *)(unsigned)(puVar14 + iVar1 + 0x4c) = in_fr9;
      *(undefined4 *)(unsigned)(puVar14 + iVar1 + 0x5c) = *(undefined4 *)(unsigned)ar6;
      *(undefined4 *)(unsigned)(puVar14 + iVar1 + 0x58) = *(undefined4 *)(unsigned)((int)ar6 + 4);
      *(undefined4 *)(unsigned)(puVar14 + iVar1 + 0x54) = *(undefined4 *)(unsigned)(ar6 + 1);
      dVar19 = CONCAT44D(*(undefined4 *)(unsigned)(puVar14 + iVar1 + 0x68),*(undefined4 *)(unsigned)ar6);
    }
    else {
      *(double *)(unsigned)(puVar14 + iVar1 + 0x68) = dVar19;
      *(ulonglong *)(unsigned)(puVar14 + iVar1 + 0x50) = CONCAT44(in_fr8,in_fr9);
      *(undefined8 *)(unsigned)(puVar14 + iVar1 + 0x4c) = in_xd8;
      *(double *)(unsigned)(puVar14 + iVar1 + 0x5c) = *ar6;
      *(undefined8 *)(unsigned)(puVar14 + iVar1 + 0x58) = *(undefined8 *)(unsigned)((int)ar6 + 4);
      *(double *)(unsigned)(puVar14 + iVar1 + 0x54) = ar6[1];
      in_xd2 = *ar6;
      dVar19 = *(double *)(unsigned)(puVar14 + iVar1 + 0x68);
    }
    if (in_FPSCR_PR == '\0') {
      fVar17 = (F32LO(dVar19) - fVar28) * F32HI(dVar19) * fVar17;
    }
    else {
      fVar17 = SUB84((dVar19 - dVar27) * (dVar19 - dVar27) * dVar24,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(unsigned)(puVar14 + iVar1 + 0x60) = fVar17;
      dVar19 = CONCAT44D(*(undefined4 *)(unsigned)(puVar14 + iVar1 + 0x68),
                                *(undefined4 *)(unsigned)((int)ar6 + 4));
    }
    else {
      *(double *)(unsigned)(puVar14 + iVar1 + 0x60) = in_xd2;
      in_xd2 = *(double *)(unsigned)((int)ar6 + 4);
      dVar19 = *(double *)(unsigned)(puVar14 + iVar1 + 0x68);
    }
    if (in_FPSCR_PR == '\0') {
      dVar19 = CONCAT44D((int)(D2U(dVar19) >> 0x20),F32LO(dVar19) - fVar15);
    }
    else {
      dVar19 = dVar19 - dVar26;
    }
    iVar11 = 0;
    if (in_FPSCR_PR == '\0') {
      fVar18 = F32LO(dVar19) * F32HI(dVar19) * fVar18;
    }
    else {
      fVar18 = SUB84(dVar19 * dVar19 * dVar24,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(unsigned)(puVar14 + iVar1 + 100) = fVar18;
    }
    else {
      *(double *)(unsigned)(puVar14 + iVar1 + 100) = in_xd2;
    }
    iVar9 = 2;
    for (iVar10 = 0; iVar10 < 3; iVar10 = iVar10 + 1) {
      iVar9 = iVar9 * 0x24 + iVar1;
      if (in_FPSCR_SZ == '\0') {
        uVar20 = CONCAT44(*(undefined4 *)(unsigned)(puVar14 + iVar9 + 0x20),0x3f800000);
      }
      else {
        uVar20 = *(undefined8 *)(unsigned)(puVar14 + iVar9 + 0x20);
      }
      iVar2 = iVar10 * 0x24 + iVar1;
      if (in_FPSCR_SZ == '\0') {
        uVar21 = CONCAT44(*(undefined4 *)(unsigned)(puVar14 + iVar2 + 0x20),(float)uVar20);
      }
      else {
        uVar21 = *(undefined8 *)(unsigned)(puVar14 + iVar2 + 0x20);
      }
      fVar17 = (float)uVar21;
      if (((in_FPSCR_PR == '\0' && (float)uVar20 < F32HI(uVar20)) ^ 1) !=
          -((in_FPSCR_PR == '\0' && fVar17 < F32HI(uVar21)) - 1)) {
        if (in_FPSCR_SZ == '\0') {
          fVar17 = *(float *)(unsigned)(puVar14 + iVar9 + 0x20);
          in_dr0 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),
                                    *(undefined4 *)(unsigned)(puVar14 + iVar2 + 0x20));
          fVar16 = fVar17;
          dVar19 = CONCAT44D(fVar17,SUB84(in_dr4,0));
        }
        else {
          in_xd2 = *(double *)(unsigned)(puVar14 + iVar9 + 0x20);
          fVar16 = F32HI(in_xd2);
          dVar19 = in_xd2;
        }
        dVar24 = CONCAT44D(0x3f800000,-fVar17);
        if (in_FPSCR_PR == '\0') {
          dVar24 = CONCAT44D(0x3f800000,-fVar17 + 1.0);
          dVar19 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),F32LO(in_dr0) - fVar16);
        }
        else {
          dVar24 = dVar24 + dVar24;
          dVar19 = in_dr0 - dVar19;
        }
        if (in_FPSCR_SZ == '\0') {
          dVar22 = CONCAT44D(SUB84(dVar24,0),*(undefined4 *)(unsigned)(puVar14 + iVar9 + 0x18));
        }
        else {
          in_xd4 = *(double *)(unsigned)(puVar14 + iVar9 + 0x18);
          dVar22 = in_xd2;
        }
        if (in_FPSCR_PR == '\0') {
          dVar22 = CONCAT44D(F32HI(dVar22) / F32LO(dVar19),
                                    SUB84(dVar22,0));
        }
        else {
          dVar22 = dVar22 / dVar19;
        }
        if (in_FPSCR_SZ == '\0') {
          dVar24 = CONCAT44D((int)(D2U(dVar24) >> 0x20),
                                    *(undefined4 *)(unsigned)(puVar14 + iVar2 + 0x18));
          dVar19 = (double)(D2U(dVar22) & 0xffffffff);
        }
        else {
          in_xd2 = *(double *)(unsigned)(puVar14 + iVar2 + 0x18);
        }
        if (in_FPSCR_PR == '\0') {
          dVar24 = CONCAT44D((int)(D2U(dVar24) >> 0x20),
                                    F32LO(dVar24) - F32LO(dVar22));
        }
        else {
          dVar24 = dVar24 - dVar22;
        }
        uVar25 = (undefined4)(D2U(dVar22) >> 0x20);
        if (in_FPSCR_SZ == '\0') {
          dVar23 = CONCAT44D(*(undefined4 *)(unsigned)(puVar14 + iVar9 + 0x1c),SUB84(in_dr6,0));
          dVar22 = CONCAT44D(uVar25,SUB84(dVar19,0));
          in_dr4 = CONCAT44D(uVar25,fVar28);
        }
        else {
          dVar23 = *(double *)(unsigned)(puVar14 + iVar9 + 0x1c);
          in_dr4 = dVar22;
          in_xd4 = dVar27;
        }
        if (in_FPSCR_PR == '\0') {
          dVar22 = (double)(ulonglong)
                           (uint)(F32HI(dVar22) * F32LO(dVar24) +
                                 SUB84(dVar22,0));
        }
        if (in_FPSCR_SZ == '\0') {
          dVar24 = CONCAT44D((int)(D2U(dVar24) >> 0x20),
                                    *(undefined4 *)(unsigned)(puVar14 + iVar2 + 0x1c));
          uVar20 = CONCAT44(SUB84(dVar27,0),SUB84(dVar22,0));
        }
        else {
          in_xd2 = *(double *)(unsigned)(puVar14 + iVar2 + 0x1c);
          uVar20 = in_xd14;
        }
        fVar17 = F32HI(dVar23);
        if (in_FPSCR_PR == '\0') {
          dVar24 = CONCAT44D((int)(D2U(dVar24) >> 0x20),F32LO(dVar24) - fVar17);
          in_dr4 = CONCAT44D(uVar25,F32HI(uVar20) * (float)uVar20 +
                                           SUB84(in_dr4,0));
        }
        else {
          dVar24 = dVar24 - dVar23;
        }
        uVar25 = (undefined4)((ulonglong)in_dr4 >> 0x20);
        in_dr6 = dVar26;
        dVar19 = in_dr4;
        if (in_FPSCR_SZ == '\0') {
          in_dr6 = CONCAT44D(fVar15,SUB84(dVar23,0));
          dVar19 = CONCAT44D(uVar25,fVar17);
        }
        if (in_FPSCR_PR == '\0') {
          dVar19 = (double)(ulonglong)
                           (uint)(F32HI(dVar19) * F32LO(dVar24) +
                                 SUB84(dVar19,0));
        }
        uVar20 = uVar29;
        if (in_FPSCR_SZ == '\0') {
          uVar20 = CONCAT44(SUB84(dVar26,0),SUB84(dVar19,0));
        }
        if (in_FPSCR_PR == '\0') {
          in_dr6 = CONCAT44D(F32HI(uVar20) * (float)uVar20 +
                                    F32HI(in_dr6),SUB84(in_dr6,0));
        }
        in_dr0 = in_dr4;
        if (in_FPSCR_SZ == '\0') {
          in_dr0 = CONCAT44D(uVar25,(float)uVar20);
        }
        pdVar7 = (double *)(unsigned)(puVar14 + iVar11 * 0x24 + iVar6);
        fVar17 = F32LO(in_dr4);
        if (in_FPSCR_SZ == '\0') {
          *(float *)(unsigned)((int)pdVar7 + 0x14) = fVar17;
          *(int *)(unsigned)(pdVar7 + 2) = (int)((ulonglong)in_dr6 >> 0x20);
          pdVar7 = (double *)(unsigned)((int)pdVar7 + 0xc);
          *(int *)(unsigned)pdVar7 = (int)(D2U(dVar24) >> 0x20);
          fVar17 = *(float *)(unsigned)(puVar14 + iVar9 + 8);
          in_dr4 = CONCAT44D(uVar25,fVar17);
          dVar19 = CONCAT44D(fVar17,*(undefined4 *)(unsigned)(puVar14 + iVar2 + 8));
        }
        else {
          pdVar7[2] = in_xd4;
          pdVar7[1] = in_dr6;
          *pdVar7 = dVar24;
          dVar19 = *(double *)(unsigned)(puVar14 + iVar9 + 8);
          in_xd2 = *(double *)(unsigned)(puVar14 + iVar2 + 8);
          in_xd4 = dVar19;
        }
        iVar11 = iVar11 + 1;
        fVar16 = F32HI(in_dr0);
        if (in_FPSCR_PR == '\0') {
          fVar17 = F32LO(dVar19) - fVar17;
          dVar19 = CONCAT44D(fVar16 * fVar17 + F32HI(dVar19),fVar17);
        }
        else {
          dVar19 = dVar19 - in_dr4;
        }
        uVar25 = (undefined4)(D2U(dVar19) >> 0x20);
        if (in_FPSCR_SZ == '\0') {
          pdVar7 = (double *)(unsigned)((int)pdVar7 + -4);
          *(undefined4 *)(unsigned)pdVar7 = uVar25;
          dVar19 = CONCAT44D(uVar25,*(undefined4 *)(unsigned)(puVar14 + iVar2 + 4));
          in_dr4 = CONCAT44D((int)((ulonglong)in_dr4 >> 0x20),
                                    *(undefined4 *)(unsigned)(puVar14 + iVar9 + 4));
        }
        else {
          pdVar7 = pdVar7 + -1;
          *pdVar7 = dVar19;
          in_xd2 = *(double *)(unsigned)(puVar14 + iVar2 + 4);
          in_xd4 = *(double *)(unsigned)(puVar14 + iVar9 + 4);
        }
        if (in_FPSCR_PR == '\0') {
          fVar17 = F32LO(dVar19) - F32LO(in_dr4);
        }
        else {
          fVar17 = SUB84(dVar19 - in_dr4,0);
        }
        dVar19 = in_xd4;
        if (in_FPSCR_SZ == '\0') {
          dVar19 = CONCAT44D(SUB84(in_dr4,0),fVar17);
        }
        if (in_FPSCR_PR == '\0') {
          dVar19 = CONCAT44D(fVar16 * F32LO(dVar19) + F32HI(dVar19),
                                    SUB84(dVar19,0));
        }
        if (in_FPSCR_SZ == '\0') {
          *(int *)(unsigned)((int)pdVar7 + -4) = (int)(D2U(dVar19) >> 0x20);
        }
        else {
          pdVar7[-1] = dVar19;
        }
      }
      puVar12 = (undefined8 *)(unsigned)(puVar14 + iVar10 * 0x24 + iVar1);
      if (in_FPSCR_SZ == '\0') {
        uVar20 = CONCAT44(*(undefined4 *)(unsigned)(puVar12 + 4),0x3f800000);
      }
      else {
        uVar20 = puVar12[4];
      }
      if (in_FPSCR_PR == '\0' && (float)uVar20 < F32HI(uVar20)) {
        if (in_FPSCR_SZ == '\0') {
          uVar20 = CONCAT44(*(undefined4 *)(unsigned)((int)puVar12 + 0x14),(float)uVar20);
        }
        else {
          uVar20 = *(undefined8 *)(unsigned)((int)puVar12 + 0x14);
        }
        puVar8 = (undefined8 *)(unsigned)(puVar14 + iVar11 * 0x24 + iVar6);
        iVar9 = iVar11 + 1;
        iVar11 = iVar11 + 1;
        if (in_FPSCR_SZ == '\0') {
          *(int *)(unsigned)((int)puVar8 + 0x14) = (int)((ulonglong)uVar20 >> 0x20);
          *(undefined4 *)(unsigned)(puVar8 + 2) = *(undefined4 *)(unsigned)(puVar12 + 2);
          *(undefined4 *)(unsigned)((int)puVar8 + 0xc) = *(undefined4 *)(unsigned)((int)puVar12 + 0xc);
          *(undefined4 *)(unsigned)(puVar8 + 1) = *(undefined4 *)(unsigned)(puVar12 + 1);
          *(undefined4 *)(unsigned)((int)puVar8 + 4) = *(undefined4 *)(unsigned)((int)puVar12 + 4);
          in_dr0 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),*(undefined4 *)(unsigned)puVar12);
          *(undefined4 *)(unsigned)puVar8 = *(undefined4 *)(unsigned)puVar12;
          iVar11 = iVar9;
        }
        else {
          puVar8[2] = uVar20;
          puVar8[1] = puVar12[2];
          *puVar8 = *(undefined8 *)(unsigned)((int)puVar12 + 0xc);
          puVar8[-1] = puVar12[1];
          puVar8[-2] = *(undefined8 *)(unsigned)((int)puVar12 + 4);
          puVar8[-3] = *puVar12;
        }
      }
      iVar9 = iVar10;
    }
    *(undefined4 *)(unsigned)((int)ar7 + 0x1c) = *(undefined4 *)(unsigned)0x8c4aa2a0;
    *(undefined4 *)(unsigned)(ar7 + 3) = *puVar4;
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(unsigned)((int)ar7 + 0x14) = *(undefined4 *)(unsigned)(puVar14 + iVar6 + 4);
      *(undefined4 *)(unsigned)(ar7 + 2) = *(undefined4 *)(unsigned)(puVar14 + iVar6 + 8);
      *(undefined4 *)(unsigned)((int)ar7 + 0xc) = *(undefined4 *)(unsigned)(puVar14 + iVar6 + 0xc);
      *(undefined4 *)(unsigned)(ar7 + 1) = *(undefined4 *)(unsigned)(puVar14 + iVar6 + 0x10);
      puVar12 = (undefined8 *)(unsigned)((int)ar7 + 4);
      *(undefined4 *)(unsigned)puVar12 = *(undefined4 *)(unsigned)(puVar14 + iVar6 + 0x14);
    }
    else {
      ar7[2] = *(undefined8 *)(unsigned)(puVar14 + iVar6 + 4);
      ar7[1] = *(undefined8 *)(unsigned)(puVar14 + iVar6 + 0xc);
      *ar7 = *(undefined8 *)(unsigned)(puVar14 + iVar6 + 0x14);
      ar7[-1] = *(undefined8 *)(unsigned)(puVar14 + iVar6 + 0x1c);
      puVar12 = ar7 + -2;
      *puVar12 = *(undefined8 *)(unsigned)(puVar14 + iVar6 + 0x24);
    }
    *(undefined4 *)(unsigned)((int)puVar12 + -4) = uVar5;
    *(undefined4 *)(unsigned)(puVar12 + 7) = *puVar3;
    *(undefined4 *)(unsigned)((int)puVar12 + 0x34) = *puVar4;
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(unsigned)(puVar12 + 6) = *(undefined4 *)(unsigned)(puVar14 + iVar6 + 0x28);
      *(undefined4 *)(unsigned)((int)puVar12 + 0x2c) = *(undefined4 *)(unsigned)(puVar14 + iVar6 + 0x2c);
      *(undefined4 *)(unsigned)(puVar12 + 5) = *(undefined4 *)(unsigned)(puVar14 + iVar6 + 0x30);
      *(undefined4 *)(unsigned)((int)puVar12 + 0x24) = *(undefined4 *)(unsigned)(puVar14 + iVar6 + 0x34);
      puVar12 = puVar12 + 4;
      *(undefined4 *)(unsigned)puVar12 = *(undefined4 *)(unsigned)(puVar14 + iVar6 + 0x38);
    }
    else {
      *(undefined8 *)(unsigned)((int)puVar12 + 0x2c) = *(undefined8 *)(unsigned)(puVar14 + iVar6 + 0x28);
      *(undefined8 *)(unsigned)((int)puVar12 + 0x24) = *(undefined8 *)(unsigned)(puVar14 + iVar6 + 0x30);
      *(undefined8 *)(unsigned)((int)puVar12 + 0x1c) = *(undefined8 *)(unsigned)(puVar14 + iVar6 + 0x38);
      *(undefined8 *)(unsigned)((int)puVar12 + 0x14) = *(undefined8 *)(unsigned)(puVar14 + iVar6 + 0x40);
      puVar12 = (undefined8 *)(unsigned)((int)puVar12 + 0xc);
      *puVar12 = *(undefined8 *)(unsigned)(puVar14 + iVar6 + 0x48);
    }
    *(undefined4 *)(unsigned)((int)puVar12 + -4) = uVar5;
    if (iVar11 != 3) {
      *(undefined4 *)(unsigned)(puVar12 + 7) = *puVar3;
      *(undefined4 *)(unsigned)((int)puVar12 + 0x34) = *puVar4;
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(unsigned)(puVar12 + 6) = *(undefined4 *)(unsigned)(puVar14 + iVar6 + 0x70);
        *(undefined4 *)(unsigned)((int)puVar12 + 0x2c) = *(undefined4 *)(unsigned)(puVar14 + iVar6 + 0x74);
        *(undefined4 *)(unsigned)(puVar12 + 5) = *(undefined4 *)(unsigned)(puVar14 + iVar6 + 0x78);
        *(undefined4 *)(unsigned)((int)puVar12 + 0x24) = *(undefined4 *)(unsigned)(puVar14 + iVar6 + 0x7c);
        puVar12 = puVar12 + 4;
        *(undefined4 *)(unsigned)puVar12 = *(undefined4 *)(unsigned)(puVar14 + iVar6 + 0x80);
      }
      else {
        *(undefined8 *)(unsigned)((int)puVar12 + 0x2c) = *(undefined8 *)(unsigned)(puVar14 + iVar6 + 0x70);
        *(undefined8 *)(unsigned)((int)puVar12 + 0x24) = *(undefined8 *)(unsigned)(puVar14 + iVar6 + 0x78);
        *(undefined8 *)(unsigned)((int)puVar12 + 0x1c) = *(undefined8 *)(unsigned)(puVar14 + iVar6 + 0x80);
        *(undefined8 *)(unsigned)((int)puVar12 + 0x14) = *(undefined8 *)(unsigned)(puVar14 + iVar6 + 0x88);
        puVar12 = (undefined8 *)(unsigned)((int)puVar12 + 0xc);
        *puVar12 = *(undefined8 *)(unsigned)(puVar14 + iVar6 + 0x90);
      }
      *(undefined4 *)(unsigned)((int)puVar12 + -4) = uVar5;
    }
    *(undefined4 *)(unsigned)(puVar12 + 7) = *puVar3;
    *(undefined4 *)(unsigned)((int)puVar12 + 0x34) = *puVar4;
    uVar5 = 0xf0000000;
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(unsigned)(puVar12 + 6) = *(undefined4 *)(unsigned)(puVar14 + iVar6 + 0x4c);
      *(undefined4 *)(unsigned)((int)puVar12 + 0x2c) = *(undefined4 *)(unsigned)(puVar14 + iVar6 + 0x50);
      *(undefined4 *)(unsigned)(puVar12 + 5) = *(undefined4 *)(unsigned)(puVar14 + iVar6 + 0x54);
      *(undefined4 *)(unsigned)((int)puVar12 + 0x24) = *(undefined4 *)(unsigned)(puVar14 + iVar6 + 0x58);
      puVar12 = puVar12 + 4;
      *(undefined4 *)(unsigned)puVar12 = *(undefined4 *)(unsigned)(puVar14 + iVar6 + 0x5c);
    }
    else {
      *(undefined8 *)(unsigned)((int)puVar12 + 0x2c) = *(undefined8 *)(unsigned)(puVar14 + iVar6 + 0x4c);
      *(undefined8 *)(unsigned)((int)puVar12 + 0x24) = *(undefined8 *)(unsigned)(puVar14 + iVar6 + 0x54);
      *(undefined8 *)(unsigned)((int)puVar12 + 0x1c) = *(undefined8 *)(unsigned)(puVar14 + iVar6 + 0x5c);
      *(undefined8 *)(unsigned)((int)puVar12 + 0x14) = *(undefined8 *)(unsigned)(puVar14 + iVar6 + 100);
      puVar12 = (undefined8 *)(unsigned)((int)puVar12 + 0xc);
      *puVar12 = *(undefined8 *)(unsigned)(puVar14 + iVar6 + 0x6c);
    }
    *(undefined4 *)(unsigned)((int)puVar12 + -4) = uVar5;
    ar7 = (undefined8 *)(unsigned)((int)puVar12 + 0x1c);
    *(undefined4 *)(unsigned)0x8c4aa520 = *(undefined4 *)(unsigned)0x8c4aa520 + iVar11;
  }
  return ar7;
}

__asm__(".globl _FUN_8c216b84\n.set _FUN_8c216b84, _FUN_8c216b84_def\n");
