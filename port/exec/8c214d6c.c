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
double * FUN_8c214d6c_def(double *ar4,double *ar5,double *ar6,double *ar7)

{
  ring[rp++ & 255] = "FUN_8c214d6c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 108; for (int i_ = 0; i_ < 108; i_++) z_[i_] = 0; }
  undefined4 *puVar1;
  int iVar2;
  double *pdVar3;
  int iVar4;
  double *pdVar5;
  undefined8 *puVar6;
  int iVar7;
  int *piVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  int *piVar11;
  int iVar12;
  undefined1 *puVar13;
  float fVar14;
  double in_dr0 = 0;
  double dVar15;
  undefined4 in_fr3 = 0;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  double dVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  double dVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  double in_dr4 = 0;
  undefined4 uVar27;
  undefined4 uVar28;
  double in_dr6 = 0;
  double dVar29;
  undefined4 uVar30;
  undefined8 in_dr8 = 0;
  double in_dr10 = 0;
  float in_fr13 = 0;
  double dVar31;
  double in_xd0 = 0;
  double in_xd2 = 0;
  double dVar32;
  double in_xd4 = 0;
  undefined8 in_xd6 = 0;
  undefined8 uVar33;
  undefined8 in_xd8 = 0;
  double in_xd10 = 0;
  char in_FPSCR_PR = 0;
  char in_FPSCR_SZ = 0;
  
  if (in_FPSCR_SZ == '\0') {
    puVar13 = ((undefined1 *)(fr0_ - 0x24));
  }
  else {
    puVar13 = ((undefined1 *)(fr0_ - 0x2c));
  }
  if (((*(undefined4 *)(unsigned)(unsigned)0x8c4aa4f0) & 0x10000) == 0) {
    if (in_FPSCR_SZ == '\0') {
      in_dr0 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),(*(undefined4 *)(unsigned)(unsigned)0x8c4aa4a8));
      dVar15 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4aa4e0),in_fr3);
      fVar14 = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa4a8);
      in_fr13 = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa4a8);
    }
    else {
      in_xd0 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4aa4ac),(*(undefined4 *)(unsigned)(unsigned)0x8c4aa4a8));
      dVar15 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4aa4e4),(*(undefined4 *)(unsigned)(unsigned)0x8c4aa4e0));
      fVar14 = F32LO(in_dr0);
    }
    fVar20 = F32HI(dVar15);
    if (in_FPSCR_PR == '\0') {
      fVar14 = fVar14 * fVar20;
    }
    else {
      fVar14 = SUB84(in_dr0 * dVar15,0);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar15 = CONCAT44D(fVar20,(*(undefined4 *)(unsigned)(unsigned)0x8c4aa4dc));
      *(float *)(unsigned)(puVar13 + -0xe4) = fVar14;
      dVar31 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4aa4b4),in_fr13);
    }
    else {
      in_xd2 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4aa4e0),(*(undefined4 *)(unsigned)(unsigned)0x8c4aa4dc));
      *(double *)(unsigned)(puVar13 + -0xe4) = in_xd0;
      dVar31 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4aa4b8),(*(undefined4 *)(unsigned)(unsigned)0x8c4aa4b4));
    }
    if (in_FPSCR_PR == '\0') {
      dVar31 = CONCAT44D((int)(D2U(dVar31) >> 0x20),F32LO(dVar31) * F32LO(dVar15));
    }
    else {
      dVar31 = dVar31 * dVar15;
    }
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(unsigned)(puVar13 + -0xe8) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa4b8);
      dVar15 = CONCAT44D((int)(D2U(dVar15) >> 0x20),*(undefined4 *)(unsigned)(puVar13 + -0xe4));
    }
    else {
      *(ulonglong *)(unsigned)(puVar13 + -0xe8) = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c4aa4bc),(*(undefined4 *)(unsigned)(unsigned)0x8c4aa4b8));
      in_xd2 = *(double *)(unsigned)(puVar13 + -0xe4);
    }
    puVar1 = (undefined4 *)(unsigned)(puVar13 + -0x3c);
    if (in_FPSCR_PR == '\0') {
      dVar15 = CONCAT44D(1.0 / F32LO(dVar15),1.0 / F32LO(dVar31));
    }
    else {
      dVar15 = (0.007812501848093234 / dVar31) / dVar15;
    }
    *puVar1 = ar4;
    if (in_FPSCR_SZ == '\0') {
      dVar21 = CONCAT44D(*(undefined4 *)(unsigned)ar4,*(undefined4 *)(unsigned)((int)ar4 + 4));
    }
    else {
      in_xd2 = *(double *)(unsigned)((int)ar4 + 4);
      dVar21 = *ar4;
    }
    fVar20 = F32HI(dVar31);
    fVar14 = F32LO(dVar15);
    if (in_FPSCR_PR == '\0') {
      fVar16 = (F32LO(dVar21) - fVar20) * F32HI(dVar21) * fVar14;
    }
    else {
      fVar16 = SUB84((dVar21 - dVar31) * (dVar21 - dVar31) * dVar15,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(unsigned)(puVar13 + -0x38) = fVar16;
      dVar21 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 1),*(undefined4 *)(unsigned)(puVar13 + -0xe8));
    }
    else {
      *(double *)(unsigned)(puVar13 + -0x38) = in_xd2;
      dVar21 = ar4[1];
      in_xd2 = *(double *)(unsigned)(puVar13 + -0xe8);
    }
    if (in_FPSCR_PR == '\0') {
      dVar21 = CONCAT44D(F32HI(dVar21) - F32LO(dVar21),SUB84(dVar21,0)
                               );
    }
    else {
      dVar21 = dVar21 - dVar21;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar21 = CONCAT44D((int)(D2U(dVar21) >> 0x20),*(undefined4 *)(unsigned)ar4);
    }
    else {
      in_xd2 = *ar4;
    }
    fVar16 = F32HI(dVar15);
    if (in_FPSCR_PR == '\0') {
      dVar21 = CONCAT44D(F32HI(dVar21) * F32LO(dVar21) * fVar16,
                                SUB84(dVar21,0));
    }
    else {
      dVar21 = dVar21 * dVar21 * dVar15;
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)(unsigned)(puVar13 + -0x34) = (int)(D2U(dVar21) >> 0x20);
      *(int *)(unsigned)(puVar13 + -0x30) = (int)((ulonglong)in_dr4 >> 0x20);
      *(int *)(unsigned)(puVar13 + -0x2c) = SUB84(in_dr4,0);
    }
    else {
      *(double *)(unsigned)(puVar13 + -0x34) = dVar21;
      *(double *)(unsigned)(puVar13 + -0x30) = in_dr4;
      *(double *)(unsigned)(puVar13 + -0x2c) = in_xd4;
    }
    *(unsigned *)(unsigned)(puVar13 + -0x28) = ar5;
    if (in_FPSCR_SZ == '\0') {
      dVar21 = CONCAT44D(*(undefined4 *)(unsigned)ar5,*(undefined4 *)(unsigned)((int)ar5 + 4));
    }
    else {
      in_xd2 = *(double *)(unsigned)((int)ar5 + 4);
      dVar21 = *ar5;
    }
    if (in_FPSCR_PR == '\0') {
      fVar17 = (F32LO(dVar21) - fVar20) * F32HI(dVar21) * fVar14;
    }
    else {
      fVar17 = SUB84((dVar21 - dVar31) * (dVar21 - dVar31) * dVar15,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(unsigned)(puVar13 + -0x24) = fVar17;
      dVar21 = CONCAT44D(*(undefined4 *)(unsigned)(ar5 + 1),*(undefined4 *)(unsigned)(puVar13 + -0xe8));
    }
    else {
      *(double *)(unsigned)(puVar13 + -0x24) = in_xd2;
      dVar21 = ar5[1];
      in_xd2 = *(double *)(unsigned)(puVar13 + -0xe8);
    }
    if (in_FPSCR_PR == '\0') {
      dVar21 = CONCAT44D(F32HI(dVar21) - F32LO(dVar21),SUB84(dVar21,0)
                               );
    }
    else {
      dVar21 = dVar21 - dVar21;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar21 = CONCAT44D((int)(D2U(dVar21) >> 0x20),*(undefined4 *)(unsigned)ar5);
    }
    else {
      in_xd2 = *ar5;
    }
    if (in_FPSCR_PR == '\0') {
      dVar21 = CONCAT44D(F32HI(dVar21) * F32LO(dVar21) * fVar16,
                                SUB84(dVar21,0));
    }
    else {
      dVar21 = dVar21 * dVar21 * dVar15;
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)(unsigned)(puVar13 + -0x20) = (int)(D2U(dVar21) >> 0x20);
      *(int *)(unsigned)(puVar13 + -0x1c) = (int)((ulonglong)in_dr6 >> 0x20);
      *(int *)(unsigned)(puVar13 + -0x18) = SUB84(in_dr6,0);
    }
    else {
      *(double *)(unsigned)(puVar13 + -0x20) = dVar21;
      *(double *)(unsigned)(puVar13 + -0x1c) = in_dr6;
      *(undefined8 *)(unsigned)(puVar13 + -0x18) = in_xd6;
    }
    *(unsigned *)(unsigned)(puVar13 + -0x14) = ar6;
    if (in_FPSCR_SZ == '\0') {
      dVar21 = CONCAT44D(*(undefined4 *)(unsigned)ar6,*(undefined4 *)(unsigned)((int)ar6 + 4));
    }
    else {
      in_xd2 = *(double *)(unsigned)((int)ar6 + 4);
      dVar21 = *ar6;
    }
    pdVar5 = (double *)(unsigned)(puVar13 + -0xcc);
    if (in_FPSCR_PR == '\0') {
      fVar14 = (F32LO(dVar21) - fVar20) * F32HI(dVar21) * fVar14;
    }
    else {
      fVar14 = SUB84((dVar21 - dVar31) * (dVar21 - dVar31) * dVar15,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(unsigned)(puVar13 + -0x10) = fVar14;
      dVar21 = CONCAT44D(*(undefined4 *)(unsigned)(ar6 + 1),*(undefined4 *)(unsigned)(puVar13 + -0xe8));
    }
    else {
      *(double *)(unsigned)(puVar13 + -0x10) = in_xd2;
      dVar21 = ar6[1];
      in_xd2 = *(double *)(unsigned)(puVar13 + -0xe8);
    }
    if (in_FPSCR_PR == '\0') {
      dVar21 = CONCAT44D(F32HI(dVar21) - F32LO(dVar21),SUB84(dVar21,0)
                               );
    }
    else {
      dVar21 = dVar21 - dVar21;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar21 = CONCAT44D((int)(D2U(dVar21) >> 0x20),*(undefined4 *)(unsigned)ar6);
    }
    else {
      in_xd2 = *ar6;
    }
    iVar12 = 0;
    if (in_FPSCR_PR == '\0') {
      dVar21 = CONCAT44D(F32HI(dVar21) * F32LO(dVar21) * fVar16,
                                SUB84(dVar21,0));
    }
    else {
      dVar21 = dVar21 * dVar21 * dVar15;
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)(unsigned)(puVar13 + -0xc) = (int)(D2U(dVar21) >> 0x20);
      *(int *)(unsigned)(puVar13 + -8) = (int)((ulonglong)in_dr8 >> 0x20);
      *(int *)(unsigned)(puVar13 + -4) = (int)in_dr8;
    }
    else {
      *(double *)(unsigned)(puVar13 + -0xc) = dVar21;
      *(undefined8 *)(unsigned)(puVar13 + -8) = in_dr8;
      *(undefined8 *)(unsigned)(puVar13 + -4) = in_xd8;
    }
    iVar2 = 0;
    iVar7 = 2;
    while( true ) {
      iVar4 = iVar2;
      fVar14 = F32LO(in_dr10);
      fVar16 = F32HI(in_dr10);
      if (2 < iVar4) break;
      puVar10 = puVar1 + iVar7 * 5;
      if (in_FPSCR_SZ == '\0') {
        uVar22 = CONCAT44(*(undefined4 *)(unsigned)*puVar10,0x3f800000);
      }
      else {
        uVar22 = *(undefined8 *)(unsigned)*puVar10;
      }
      puVar9 = puVar1 + iVar4 * 5;
      if (in_FPSCR_SZ == '\0') {
        uVar23 = CONCAT44(*(undefined4 *)(unsigned)*puVar9,(float)uVar22);
      }
      else {
        uVar23 = *(undefined8 *)(unsigned)*puVar9;
      }
      fVar17 = (float)uVar23;
      if (((in_FPSCR_PR == '\0' && (float)uVar22 < F32HI(uVar22)) ^ 1) !=
          -((in_FPSCR_PR == '\0' && fVar17 < F32HI(uVar23)) - 1)) {
        pdVar3 = (double *)(unsigned)*puVar10;
        *(unsigned *)(unsigned)(puVar13 + -0xd0) = pdVar3;
        if (in_FPSCR_SZ == '\0') {
          dVar21 = CONCAT44D(*(undefined4 *)(unsigned)pdVar3,SUB84(in_dr4,0));
        }
        else {
          dVar21 = *pdVar3;
        }
        fVar18 = F32HI(dVar21);
        if (in_FPSCR_SZ == '\0') {
          dVar15 = CONCAT44D((int)(D2U(dVar15) >> 0x20),*(undefined4 *)(unsigned)*puVar9);
          dVar32 = in_xd2;
          fVar17 = fVar18;
        }
        else {
          in_xd0 = *(double *)(unsigned)*puVar9;
          dVar32 = dVar21;
        }
        dVar24 = CONCAT44D(0x3f800000,-fVar17);
        if (in_FPSCR_PR == '\0') {
          dVar24 = CONCAT44D(0x3f800000,-fVar17 + 1.0);
          dVar15 = CONCAT44D((int)(D2U(dVar15) >> 0x20),F32LO(dVar15) - fVar18);
        }
        else {
          dVar24 = dVar24 + dVar24;
          dVar15 = dVar15 - dVar21;
        }
        if (in_FPSCR_SZ == '\0') {
          dVar21 = CONCAT44D(SUB84(dVar24,0),puVar10[1]);
        }
        else {
          in_xd4 = *(double *)(unsigned)(puVar10 + 1);
          dVar21 = dVar32;
        }
        if (in_FPSCR_PR == '\0') {
          in_dr4 = CONCAT44D(F32HI(dVar21) / F32LO(dVar15),
                                    SUB84(dVar21,0));
        }
        else {
          in_dr4 = dVar21 / dVar15;
        }
        if (in_FPSCR_SZ == '\0') {
          dVar24 = CONCAT44D((int)(D2U(dVar24) >> 0x20),puVar9[1]);
          dVar15 = (double)((ulonglong)in_dr4 & 0xffffffff);
          dVar21 = in_xd0;
        }
        else {
          dVar32 = *(double *)(unsigned)(puVar9 + 1);
          dVar21 = in_xd4;
        }
        if (in_FPSCR_PR == '\0') {
          dVar24 = CONCAT44D((int)(D2U(dVar24) >> 0x20),
                                    F32LO(dVar24) - F32LO(in_dr4));
        }
        else {
          dVar24 = dVar24 - in_dr4;
        }
        uVar25 = (undefined4)((ulonglong)in_dr4 >> 0x20);
        if (in_FPSCR_SZ == '\0') {
          dVar29 = CONCAT44D(puVar10[2],SUB84(in_dr6,0));
          dVar15 = CONCAT44D(uVar25,SUB84(dVar15,0));
        }
        else {
          dVar29 = *(double *)(unsigned)(puVar10 + 2);
          dVar15 = in_dr4;
        }
        if (in_FPSCR_PR == '\0') {
          fVar17 = F32HI(dVar15);
          dVar15 = CONCAT44D(fVar17,fVar17 * F32LO(dVar24) + F32LO(dVar15));
        }
        if (in_FPSCR_SZ == '\0') {
          dVar24 = CONCAT44D((int)(D2U(dVar24) >> 0x20),puVar9[2]);
        }
        else {
          dVar32 = *(double *)(unsigned)(puVar9 + 2);
        }
        fVar17 = F32HI(dVar29);
        if (in_FPSCR_PR == '\0') {
          dVar24 = CONCAT44D((int)(D2U(dVar24) >> 0x20),F32LO(dVar24) - fVar17);
        }
        else {
          dVar24 = dVar24 - dVar29;
        }
        in_xd0 = dVar29;
        if (in_FPSCR_SZ == '\0') {
          in_dr4 = CONCAT44D(uVar25,SUB84(dVar15,0));
          dVar15 = CONCAT44D((int)(D2U(dVar15) >> 0x20),fVar17);
          in_xd0 = dVar21;
          dVar21 = in_xd4;
        }
        if (in_FPSCR_PR == '\0') {
          dVar15 = (double)(ulonglong)
                           (uint)(F32HI(dVar15) * F32LO(dVar24) +
                                 SUB84(dVar15,0));
        }
        in_xd2 = dVar31;
        in_dr6 = in_xd0;
        if (in_FPSCR_SZ == '\0') {
          dVar24 = CONCAT44D((int)(D2U(dVar24) >> 0x20),fVar20);
          in_xd2 = dVar32;
          in_dr6 = CONCAT44D(SUB84(dVar15,0),SUB84(dVar29,0));
        }
        fVar17 = F32LO(in_dr4);
        dVar32 = dVar21;
        if (in_FPSCR_SZ == '\0') {
          dVar32 = CONCAT44D(fVar17,SUB84(dVar15,0));
        }
        if (in_FPSCR_PR == '\0') {
          dVar24 = CONCAT44D((int)(D2U(dVar24) >> 0x20),
                                    F32HI(dVar32) * F32LO(dVar31) +
                                    SUB84(dVar24,0));
        }
        pdVar3 = (double *)(unsigned)(iVar12 * 0x24 + (int)pdVar5);
        if (in_FPSCR_SZ == '\0') {
          *(int *)(unsigned)pdVar3 = SUB84(dVar24,0);
          dVar24 = CONCAT44D((int)(D2U(dVar24) >> 0x20),
                                    *(undefined4 *)(unsigned)(puVar13 + -0xe8));
          dVar15 = CONCAT44D((int)((ulonglong)in_dr6 >> 0x20),
                                    *(undefined4 *)(unsigned)(puVar13 + -0xe4));
        }
        else {
          *pdVar3 = in_xd2;
          in_xd2 = *(double *)(unsigned)(puVar13 + -0xe8);
          in_xd0 = *(double *)(unsigned)(puVar13 + -0xe4);
          dVar15 = in_dr6;
        }
        if (in_FPSCR_PR == '\0') {
          dVar24 = CONCAT44D((int)(D2U(dVar24) >> 0x20),
                                    F32HI(dVar15) * F32LO(dVar15) +
                                    SUB84(dVar24,0));
        }
        uVar25 = (undefined4)((ulonglong)in_dr4 >> 0x20);
        if (in_FPSCR_SZ == '\0') {
          *(int *)(unsigned)((int)pdVar3 + 4) = SUB84(dVar24,0);
          *(int *)(unsigned)(pdVar3 + 1) = (int)(D2U(dVar24) >> 0x20);
          fVar17 = (float)(uint)puVar10[3];
          in_dr4 = CONCAT44D(uVar25,fVar17);
          dVar24 = CONCAT44D(fVar17,puVar9[3]);
          dVar32 = CONCAT44D(uVar25,SUB84(dVar15,0));
        }
        else {
          *(double *)(unsigned)((int)pdVar3 + 4) = in_xd2;
          pdVar3[1] = dVar24;
          dVar24 = *(double *)(unsigned)(puVar10 + 3);
          in_xd2 = *(double *)(unsigned)(puVar9 + 3);
          dVar21 = dVar24;
          dVar32 = in_dr4;
        }
        fVar18 = F32HI(dVar32);
        if (in_FPSCR_PR == '\0') {
          fVar17 = F32LO(dVar24) - fVar17;
          dVar24 = CONCAT44D(fVar18 * fVar17 + F32HI(dVar24),fVar17);
        }
        else {
          dVar24 = dVar24 - in_dr4;
        }
        if (in_FPSCR_SZ == '\0') {
          *(int *)(unsigned)((int)pdVar3 + 0xc) = (int)(D2U(dVar24) >> 0x20);
          fVar17 = (float)(uint)puVar10[4];
          in_dr4 = CONCAT44D((int)((ulonglong)in_dr4 >> 0x20),fVar17);
          dVar15 = CONCAT44D(fVar17,puVar9[4]);
          in_xd4 = dVar21;
        }
        else {
          *(double *)(unsigned)((int)pdVar3 + 0xc) = dVar24;
          dVar15 = *(double *)(unsigned)(puVar10 + 4);
          in_xd2 = *(double *)(unsigned)(puVar9 + 4);
          fVar17 = F32LO(in_dr4);
          in_xd4 = dVar15;
        }
        if (in_FPSCR_PR == '\0') {
          fVar17 = F32LO(dVar15) - fVar17;
          dVar15 = CONCAT44D(fVar18 * fVar17 + F32HI(dVar15),fVar17);
        }
        else {
          dVar15 = dVar15 - in_dr4;
        }
        if (in_FPSCR_SZ == '\0') {
          *(int *)(unsigned)(pdVar3 + 2) = (int)(D2U(dVar15) >> 0x20);
        }
        else {
          pdVar3[2] = dVar15;
        }
        dVar15 = dVar32;
        if ((*(undefined4 *)(unsigned)(unsigned)0x8c277acc) == 0) {
          piVar8 = puVar1 + iVar7 * 5;
          uVar25 = (undefined4)((ulonglong)in_dr4 >> 0x20);
          dVar15 = in_dr4;
          if (in_FPSCR_SZ == '\0') {
            dVar15 = CONCAT44D(uVar25,SUB84(dVar32,0));
          }
          iVar2 = *piVar8;
          *(int *)(unsigned)(puVar13 + -0xd4) = iVar2;
          piVar11 = puVar1 + iVar4 * 5;
          if (in_FPSCR_SZ == '\0') {
            in_dr4 = CONCAT44D(uVar25,*(undefined4 *)(unsigned)(iVar2 + 0x14));
          }
          else {
            in_xd4 = *(double *)(unsigned)(iVar2 + 0x14);
          }
          if (in_FPSCR_SZ == '\0') {
            dVar21 = CONCAT44D(SUB84(in_dr4,0),*(undefined4 *)(unsigned)(*piVar11 + 0x14));
          }
          else {
            in_xd2 = *(double *)(unsigned)(*piVar11 + 0x14);
            dVar21 = in_xd4;
          }
          fVar17 = F32HI(dVar15);
          if (in_FPSCR_PR == '\0') {
            fVar18 = F32LO(dVar21) - F32LO(in_dr4);
            dVar21 = CONCAT44D(fVar17 * fVar18 + F32HI(dVar21) + fVar14,
                                      fVar18);
          }
          else {
            dVar21 = (dVar21 - in_dr4) + in_dr10;
          }
          uVar25 = (undefined4)(D2U(dVar21) >> 0x20);
          if (in_FPSCR_SZ == '\0') {
            *(undefined4 *)(unsigned)((int)pdVar3 + 0x14) = uVar25;
          }
          else {
            *(double *)(unsigned)((int)pdVar3 + 0x14) = dVar21;
          }
          iVar2 = *piVar8;
          *(int *)(unsigned)(puVar13 + -0xd8) = iVar2;
          if (in_FPSCR_SZ == '\0') {
            in_dr4 = CONCAT44D((int)((ulonglong)in_dr4 >> 0x20),*(undefined4 *)(unsigned)(iVar2 + 0x18)
                                     );
            dVar21 = CONCAT44D(uVar25,*(undefined4 *)(unsigned)(*piVar11 + 0x18));
          }
          else {
            in_xd4 = *(double *)(unsigned)(iVar2 + 0x18);
            in_xd2 = *(double *)(unsigned)(*piVar11 + 0x18);
          }
          fVar18 = F32LO(in_dr4);
          if (in_FPSCR_PR == '\0') {
            fVar19 = F32LO(dVar21) - fVar18;
          }
          else {
            fVar19 = SUB84(dVar21 - in_dr4,0);
          }
          dVar21 = in_xd4;
          if (in_FPSCR_SZ == '\0') {
            dVar21 = CONCAT44D(fVar18,fVar19);
          }
          if (in_FPSCR_PR == '\0') {
            dVar21 = CONCAT44D(fVar17 * F32LO(dVar21) + F32HI(dVar21),
                                      SUB84(dVar21,0));
          }
          if (in_FPSCR_SZ == '\0') {
            dVar21 = CONCAT44D((int)(D2U(dVar21) >> 0x20),
                                      *(undefined4 *)(unsigned)(puVar13 + 0x24));
          }
          else {
            in_xd2 = *(double *)(unsigned)(puVar13 + 0x24);
          }
          if (in_FPSCR_PR == '\0') {
            dVar21 = CONCAT44D(F32HI(dVar21) + F32LO(dVar21),
                                      SUB84(dVar21,0));
          }
          else {
            dVar21 = dVar21 + dVar21;
          }
          if (in_FPSCR_SZ == '\0') {
            *(int *)(unsigned)(pdVar3 + 3) = (int)(D2U(dVar21) >> 0x20);
          }
          else {
            pdVar3[3] = dVar21;
          }
          iVar2 = *piVar8;
          *(int *)(unsigned)(puVar13 + -0xdc) = iVar2;
          if (in_FPSCR_SZ == '\0') {
            fVar18 = *(float *)(unsigned)(iVar2 + 0x1c);
            in_dr4 = CONCAT44D((int)((ulonglong)in_dr4 >> 0x20),fVar18);
            dVar21 = CONCAT44D(fVar18,*(undefined4 *)(unsigned)(*piVar11 + 0x1c));
          }
          else {
            dVar21 = *(double *)(unsigned)(iVar2 + 0x1c);
            in_xd2 = *(double *)(unsigned)(*piVar11 + 0x1c);
            in_xd4 = dVar21;
          }
          if (in_FPSCR_PR == '\0') {
            fVar18 = F32LO(dVar21) - fVar18;
            dVar21 = CONCAT44D(fVar17 * fVar18 + F32HI(dVar21),fVar18);
          }
          else {
            dVar21 = dVar21 - in_dr4;
          }
          if (in_FPSCR_SZ == '\0') {
            dVar21 = CONCAT44D((int)(D2U(dVar21) >> 0x20),
                                      *(undefined4 *)(unsigned)(puVar13 + 0x28));
          }
          else {
            in_xd2 = *(double *)(unsigned)(puVar13 + 0x28);
          }
          if (in_FPSCR_PR == '\0') {
            dVar21 = CONCAT44D(F32HI(dVar21) + F32LO(dVar21),
                                      SUB84(dVar21,0));
          }
          else {
            dVar21 = dVar21 + dVar21;
          }
          if (in_FPSCR_SZ == '\0') {
            *(int *)(unsigned)((int)pdVar3 + 0x1c) = (int)(D2U(dVar21) >> 0x20);
          }
          else {
            *(double *)(unsigned)((int)pdVar3 + 0x1c) = dVar21;
          }
          iVar2 = *piVar8;
          *(int *)(unsigned)(puVar13 + -0xe0) = iVar2;
          if (in_FPSCR_SZ == '\0') {
            fVar18 = *(float *)(unsigned)(iVar2 + 0x10);
            in_dr4 = CONCAT44D((int)((ulonglong)in_dr4 >> 0x20),fVar18);
            dVar21 = CONCAT44D(fVar18,*(undefined4 *)(unsigned)(*piVar11 + 0x10));
          }
          else {
            dVar21 = *(double *)(unsigned)(iVar2 + 0x10);
            in_xd2 = *(double *)(unsigned)(*piVar11 + 0x10);
            fVar18 = F32LO(in_dr4);
            in_xd4 = dVar21;
          }
          if (in_FPSCR_PR == '\0') {
            fVar18 = F32LO(dVar21) - fVar18;
            dVar21 = CONCAT44D((fVar17 * fVar18 + F32HI(dVar21)) *
                                      fVar16,fVar18);
          }
          else {
            dVar21 = (dVar21 - in_dr4) * in_dr10;
          }
          if (in_FPSCR_SZ == '\0') {
            *(int *)(unsigned)(pdVar3 + 4) = (int)(D2U(dVar21) >> 0x20);
          }
          else {
            pdVar3[4] = dVar21;
          }
        }
        iVar12 = iVar12 + 1;
      }
      piVar8 = puVar1 + iVar4 * 5;
      if (in_FPSCR_SZ == '\0') {
        dVar21 = CONCAT44D(*(undefined4 *)(unsigned)*piVar8,0x3f800000);
      }
      else {
        dVar21 = *(double *)(unsigned)*piVar8;
      }
      if (in_FPSCR_PR == '\0' && SUB84(dVar21,0) < F32HI(dVar21)) {
        if (in_FPSCR_SZ == '\0') {
          uVar22 = CONCAT44(*(undefined4 *)(unsigned)(*piVar8 + 4),SUB84(dVar21,0));
        }
        else {
          uVar22 = *(undefined8 *)(unsigned)(*piVar8 + 4);
        }
        puVar6 = (undefined8 *)(unsigned)(iVar12 * 0x24 + (int)pdVar5);
        if (in_FPSCR_SZ == '\0') {
          *(int *)(unsigned)puVar6 = (int)((ulonglong)uVar22 >> 0x20);
        }
        else {
          *puVar6 = uVar22;
        }
        if (in_FPSCR_SZ == '\0') {
          uVar25 = *(undefined4 *)(unsigned)(*piVar8 + 8);
          uVar22 = CONCAT44(uVar25,(int)uVar22);
          *(undefined4 *)(unsigned)((int)puVar6 + 4) = uVar25;
        }
        else {
          uVar22 = *(undefined8 *)(unsigned)(*piVar8 + 8);
          *(undefined8 *)(unsigned)((int)puVar6 + 4) = uVar22;
        }
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)(unsigned)(puVar6 + 1) = *(undefined4 *)(unsigned)(*piVar8 + 0xc);
          *(int *)(unsigned)((int)puVar6 + 0xc) = piVar8[3];
          dVar21 = CONCAT44D(piVar8[4],(int)uVar22);
          *(int *)(unsigned)(puVar6 + 2) = piVar8[4];
        }
        else {
          puVar6[1] = *(undefined8 *)(unsigned)(*piVar8 + 0xc);
          *(undefined8 *)(unsigned)((int)puVar6 + 0xc) = *(undefined8 *)(unsigned)(piVar8 + 3);
          dVar21 = *(double *)(unsigned)(piVar8 + 4);
          puVar6[2] = dVar21;
        }
        if ((*(undefined4 *)(unsigned)(unsigned)0x8c277acc) == 0) {
          piVar8 = puVar1 + iVar4 * 5;
          if (in_FPSCR_SZ == '\0') {
            dVar21 = CONCAT44D(*(undefined4 *)(unsigned)(*piVar8 + 0x14),SUB84(dVar21,0));
          }
          else {
            dVar21 = *(double *)(unsigned)(*piVar8 + 0x14);
          }
          if (in_FPSCR_PR == '\0') {
            dVar21 = CONCAT44D(F32HI(dVar21) + fVar14,SUB84(dVar21,0));
          }
          else {
            dVar21 = dVar21 + in_dr10;
          }
          if (in_FPSCR_SZ == '\0') {
            *(int *)(unsigned)((int)puVar6 + 0x14) = (int)(D2U(dVar21) >> 0x20);
            dVar21 = CONCAT44D(*(undefined4 *)(unsigned)(puVar13 + 0x24),SUB84(dVar21,0));
          }
          else {
            *(double *)(unsigned)((int)puVar6 + 0x14) = dVar21;
            dVar21 = *(double *)(unsigned)(puVar13 + 0x24);
          }
          if (in_FPSCR_SZ == '\0') {
            dVar15 = CONCAT44D((int)(D2U(dVar15) >> 0x20),
                                      *(undefined4 *)(unsigned)(*piVar8 + 0x18));
          }
          else {
            in_xd0 = *(double *)(unsigned)(*piVar8 + 0x18);
          }
          if (in_FPSCR_PR == '\0') {
            dVar15 = CONCAT44D((int)(D2U(dVar15) >> 0x20),
                                      F32LO(dVar15) + F32HI(dVar21));
          }
          else {
            dVar15 = dVar15 + dVar21;
          }
          if (in_FPSCR_SZ == '\0') {
            *(int *)(unsigned)(puVar6 + 3) = SUB84(dVar15,0);
          }
          else {
            puVar6[3] = in_xd0;
          }
          if (in_FPSCR_SZ == '\0') {
            dVar21 = CONCAT44D(*(undefined4 *)(unsigned)(puVar13 + 0x28),SUB84(dVar21,0));
            dVar15 = CONCAT44D((int)(D2U(dVar15) >> 0x20),
                                      *(undefined4 *)(unsigned)(*piVar8 + 0x1c));
          }
          else {
            dVar21 = *(double *)(unsigned)(puVar13 + 0x28);
            in_xd0 = *(double *)(unsigned)(*piVar8 + 0x1c);
          }
          if (in_FPSCR_PR == '\0') {
            dVar15 = CONCAT44D((int)(D2U(dVar15) >> 0x20),
                                      F32LO(dVar15) + F32HI(dVar21));
          }
          else {
            dVar15 = dVar15 + dVar21;
          }
          if (in_FPSCR_SZ == '\0') {
            *(int *)(unsigned)((int)puVar6 + 0x1c) = SUB84(dVar15,0);
          }
          else {
            *(double *)(unsigned)((int)puVar6 + 0x1c) = in_xd0;
          }
          if (in_FPSCR_SZ == '\0') {
            dVar21 = CONCAT44D(*(undefined4 *)(unsigned)(*piVar8 + 0x10),SUB84(dVar21,0));
          }
          else {
            dVar21 = *(double *)(unsigned)(*piVar8 + 0x10);
          }
          if (in_FPSCR_PR == '\0') {
            dVar21 = CONCAT44D(F32HI(dVar21) * fVar16,SUB84(dVar21,0));
          }
          else {
            dVar21 = dVar21 * in_dr10;
          }
          if (in_FPSCR_SZ == '\0') {
            *(int *)(unsigned)(puVar6 + 4) = (int)(D2U(dVar21) >> 0x20);
          }
          else {
            puVar6[4] = dVar21;
          }
        }
        iVar12 = iVar12 + 1;
      }
      iVar2 = iVar4 + 1;
      iVar7 = iVar4;
    }
    if ((*(undefined4 *)(unsigned)(unsigned)0x8c277acc) != 0) {
      piVar8 = (int *)(unsigned)(puVar13 + -0x14);
      if (in_FPSCR_SZ == '\0') {
        dVar21 = CONCAT44D((int)(D2U(dVar21) >> 0x20),*(undefined4 *)(unsigned)(*piVar8 + 0x14));
      }
      else {
        in_xd2 = *(double *)(unsigned)(*piVar8 + 0x14);
      }
      if (in_FPSCR_PR == '\0') {
        fVar20 = F32LO(dVar21) + fVar14;
      }
      else {
        fVar20 = SUB84(dVar21 + in_dr10,0);
      }
      if (in_FPSCR_SZ == '\0') {
        *(float *)(unsigned)(puVar13 + -0x70) = fVar20;
        fVar20 = *(float *)(unsigned)(puVar13 + 0x24);
      }
      else {
        *(double *)(unsigned)(puVar13 + -0x70) = in_xd2;
        in_xd2 = *(double *)(unsigned)(puVar13 + 0x24);
      }
      if (in_FPSCR_SZ == '\0') {
        dVar15 = CONCAT44D(*(undefined4 *)(unsigned)(*piVar8 + 0x18),fVar20);
      }
      else {
        dVar15 = *(double *)(unsigned)(*piVar8 + 0x18);
      }
      if (in_FPSCR_PR == '\0') {
        dVar15 = CONCAT44D(F32HI(dVar15) + F32LO(dVar15),
                                  SUB84(dVar15,0));
      }
      else {
        dVar15 = dVar15 + dVar15;
      }
      if (in_FPSCR_SZ == '\0') {
        *(int *)(unsigned)(puVar13 + -0x6c) = (int)(D2U(dVar15) >> 0x20);
        dVar15 = (double)(ulonglong)*(uint *)(unsigned)(puVar13 + 0x28);
      }
      else {
        *(double *)(unsigned)(puVar13 + -0x6c) = dVar15;
        in_xd2 = *(double *)(unsigned)(puVar13 + 0x28);
      }
      if (in_FPSCR_SZ == '\0') {
        dVar21 = CONCAT44D(*(undefined4 *)(unsigned)(*piVar8 + 0x1c),SUB84(dVar15,0));
      }
      else {
        dVar21 = *(double *)(unsigned)(*piVar8 + 0x1c);
      }
      if (in_FPSCR_PR == '\0') {
        dVar21 = CONCAT44D(F32HI(dVar21) + F32LO(dVar21),
                                  SUB84(dVar21,0));
      }
      else {
        dVar21 = dVar21 + dVar21;
      }
      uVar25 = (undefined4)(D2U(dVar21) >> 0x20);
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(unsigned)(puVar13 + -0x68) = uVar25;
      }
      else {
        *(double *)(unsigned)(puVar13 + -0x68) = dVar21;
      }
      if (in_FPSCR_SZ == '\0') {
        dVar21 = CONCAT44D(uVar25,*(undefined4 *)(unsigned)(*piVar8 + 0x10));
      }
      else {
        in_xd2 = *(double *)(unsigned)(*piVar8 + 0x10);
      }
      if (in_FPSCR_PR == '\0') {
        dVar21 = CONCAT44D((int)(D2U(dVar21) >> 0x20),F32LO(dVar21) * fVar16);
      }
      else {
        dVar21 = dVar21 * in_dr10;
      }
      if (in_FPSCR_SZ == '\0') {
        *(int *)(unsigned)(puVar13 + -100) = SUB84(dVar21,0);
      }
      else {
        *(double *)(unsigned)(puVar13 + -100) = in_xd2;
      }
      if (iVar12 != 3) {
        piVar8 = (int *)(unsigned)(puVar13 + -0x14);
        if (in_FPSCR_SZ == '\0') {
          dVar21 = CONCAT44D((int)(D2U(dVar21) >> 0x20),*(undefined4 *)(unsigned)(*piVar8 + 0x14)
                                   );
        }
        else {
          in_xd2 = *(double *)(unsigned)(*piVar8 + 0x14);
        }
        if (in_FPSCR_PR == '\0') {
          fVar14 = F32LO(dVar21) + fVar14;
        }
        else {
          fVar14 = SUB84(dVar21 + in_dr10,0);
        }
        if (in_FPSCR_SZ == '\0') {
          *(float *)(unsigned)(puVar13 + -0x4c) = fVar14;
          fVar14 = *(float *)(unsigned)(puVar13 + 0x24);
        }
        else {
          *(double *)(unsigned)(puVar13 + -0x4c) = in_xd2;
          in_xd2 = *(double *)(unsigned)(puVar13 + 0x24);
        }
        if (in_FPSCR_SZ == '\0') {
          dVar15 = CONCAT44D(*(undefined4 *)(unsigned)(*piVar8 + 0x18),fVar14);
        }
        else {
          dVar15 = *(double *)(unsigned)(*piVar8 + 0x18);
        }
        if (in_FPSCR_PR == '\0') {
          dVar15 = CONCAT44D(F32HI(dVar15) + F32LO(dVar15),
                                    SUB84(dVar15,0));
        }
        else {
          dVar15 = dVar15 + dVar15;
        }
        if (in_FPSCR_SZ == '\0') {
          *(int *)(unsigned)(puVar13 + -0x48) = (int)(D2U(dVar15) >> 0x20);
        }
        else {
          *(double *)(unsigned)(puVar13 + -0x48) = dVar15;
        }
        if (in_FPSCR_SZ == '\0') {
          dVar21 = CONCAT44D(*(undefined4 *)(unsigned)(*piVar8 + 0x1c),*(undefined4 *)(unsigned)(puVar13 + 0x28))
          ;
        }
        else {
          in_xd2 = *(double *)(unsigned)(puVar13 + 0x28);
          dVar21 = *(double *)(unsigned)(*piVar8 + 0x1c);
        }
        if (in_FPSCR_PR == '\0') {
          dVar21 = CONCAT44D(F32HI(dVar21) + F32LO(dVar21),
                                    SUB84(dVar21,0));
        }
        else {
          dVar21 = dVar21 + dVar21;
        }
        uVar25 = (undefined4)(D2U(dVar21) >> 0x20);
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)(unsigned)(puVar13 + -0x44) = uVar25;
        }
        else {
          *(double *)(unsigned)(puVar13 + -0x44) = dVar21;
        }
        if (in_FPSCR_SZ == '\0') {
          dVar21 = CONCAT44D(uVar25,*(undefined4 *)(unsigned)(*piVar8 + 0x10));
        }
        else {
          in_xd2 = *(double *)(unsigned)(*piVar8 + 0x10);
        }
        if (in_FPSCR_PR == '\0') {
          dVar21 = CONCAT44D((int)(D2U(dVar21) >> 0x20),F32LO(dVar21) * fVar16);
        }
        else {
          dVar21 = dVar21 * in_dr10;
        }
        if (in_FPSCR_SZ == '\0') {
          *(int *)(unsigned)(puVar13 + -0x40) = SUB84(dVar21,0);
        }
        else {
          *(double *)(unsigned)(puVar13 + -0x40) = in_xd2;
        }
      }
    }
    if (in_FPSCR_SZ == '\0') {
      uVar27 = *(undefined4 *)(unsigned)pdVar5;
      uVar26 = *(undefined4 *)(unsigned)(puVar13 + -200);
      dVar15 = CONCAT44D(uVar27,uVar26);
      uVar30 = *(undefined4 *)(unsigned)(puVar13 + -0xc4);
      uVar28 = *(undefined4 *)(unsigned)(puVar13 + -0xc0);
      uVar25 = *(undefined4 *)(unsigned)(puVar13 + -0xbc);
      pdVar5 = (double *)(unsigned)(puVar13 + -0xb8);
      *(undefined4 *)(unsigned)((int)ar7 + 0x14) = uVar25;
      *(undefined4 *)(unsigned)(ar7 + 2) = uVar28;
      *(undefined4 *)(unsigned)((int)ar7 + 0xc) = uVar30;
      *(undefined4 *)(unsigned)(ar7 + 1) = uVar26;
      pdVar3 = (double *)(unsigned)((int)ar7 + 4);
      *(undefined4 *)(unsigned)pdVar3 = uVar27;
    }
    else {
      dVar15 = *pdVar5;
      in_xd4 = *(double *)(unsigned)(puVar13 + -0xc4);
      dVar31 = *(double *)(unsigned)(puVar13 + -0xbc);
      dVar32 = *(double *)(unsigned)(puVar13 + -0xb4);
      pdVar5 = (double *)(unsigned)(puVar13 + -0xa4);
      uVar25 = (undefined4)((ulonglong)*(double *)(unsigned)(puVar13 + -0xac) >> 0x20);
      ar7[2] = *(double *)(unsigned)(puVar13 + -0xac);
      ar7[1] = dVar32;
      *ar7 = dVar31;
      ar7[-1] = in_xd4;
      pdVar3 = ar7 + -2;
      *pdVar3 = dVar15;
    }
    uVar26 = SUB84(dVar15,0);
    *(undefined4 *)(unsigned)((int)pdVar3 + -4) = 0xe0000000;
    if (in_FPSCR_SZ == '\0') {
      in_dr10 = (double)(ulonglong)*(uint *)(unsigned)pdVar5;
      uVar26 = *(undefined4 *)(unsigned)((int)pdVar5 + 4);
      pdVar5 = pdVar5 + 1;
    }
    else {
      in_xd10 = *pdVar5;
      in_xd4 = pdVar5[1];
      pdVar5 = pdVar5 + 2;
    }
    dVar15 = CONCAT44D(uVar25,0xbf800000);
    if (in_FPSCR_SZ == '\0') {
      uVar25 = *(undefined4 *)(unsigned)pdVar5;
      pdVar5 = (double *)(unsigned)((int)pdVar5 + 4);
      dVar21 = CONCAT44D((int)(D2U(dVar21) >> 0x20),uVar25);
      dVar31 = CONCAT44D(uVar25,uVar26);
    }
    else {
      in_xd2 = *pdVar5;
      pdVar5 = pdVar5 + 1;
      uVar25 = (undefined4)((ulonglong)in_xd2 >> 0x20);
      dVar31 = in_xd2;
    }
    if (in_FPSCR_PR == '\0') {
      dVar21 = CONCAT44D((int)(D2U(dVar21) >> 0x20),F32LO(dVar21) + -1.0);
    }
    else {
      dVar21 = dVar21 + dVar15;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar32 = CONCAT44D(*(undefined4 *)(unsigned)pdVar5,SUB84(in_dr10,0));
      pdVar3 = pdVar3 + 7;
      *(int *)(unsigned)pdVar3 = SUB84(dVar21,0);
      dVar21 = CONCAT44D((int)(D2U(dVar21) >> 0x20),SUB84(dVar31,0));
    }
    else {
      dVar32 = *pdVar5;
      pdVar3 = (double *)(unsigned)((int)pdVar3 + 0x34);
      *pdVar3 = in_xd2;
      in_xd2 = in_xd4;
    }
    if (in_FPSCR_PR == '\0') {
      dVar21 = CONCAT44D((int)(D2U(dVar21) >> 0x20),F32LO(dVar21) + -1.0);
    }
    else {
      dVar21 = dVar21 + dVar15;
    }
    if (in_FPSCR_SZ == '\0') {
      pdVar3 = (double *)(unsigned)((int)pdVar3 + -4);
      *(int *)(unsigned)pdVar3 = SUB84(dVar21,0);
      dVar21 = CONCAT44D((int)(D2U(dVar21) >> 0x20),SUB84(dVar32,0));
    }
    else {
      pdVar3 = pdVar3 + -1;
      *pdVar3 = in_xd2;
      in_xd2 = in_xd10;
    }
    if (in_FPSCR_PR == '\0') {
      dVar21 = CONCAT44D((int)(D2U(dVar21) >> 0x20),F32LO(dVar21) + -1.0);
    }
    else {
      dVar21 = dVar21 + dVar15;
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)(unsigned)((int)pdVar3 + -4) = SUB84(dVar21,0);
      *(undefined4 *)(unsigned)((int)pdVar3 + -0xc) = uVar25;
      *(int *)(unsigned)(pdVar3 + -2) = SUB84(dVar31,0);
      *(int *)(unsigned)((int)pdVar3 + -0x14) = SUB84(dVar32,0);
      *(int *)(unsigned)(pdVar3 + -3) = (int)(D2U(dVar32) >> 0x20);
      uVar26 = *(undefined4 *)(unsigned)(puVar13 + -0xa8);
      uVar25 = *(undefined4 *)(unsigned)(puVar13 + -0xa4);
      uVar28 = *(undefined4 *)(unsigned)(puVar13 + -0xa0);
      uVar27 = *(undefined4 *)(unsigned)(puVar13 + -0x9c);
      dVar15 = CONCAT44D(*(undefined4 *)(unsigned)(puVar13 + -0x98),0xbf800000);
      pdVar5 = (double *)(unsigned)(puVar13 + -0x94);
      *(undefined4 *)(unsigned)((int)pdVar3 + 0x1c) = *(undefined4 *)(unsigned)(puVar13 + -0x98);
      *(undefined4 *)(unsigned)(pdVar3 + 3) = uVar27;
      *(undefined4 *)(unsigned)((int)pdVar3 + 0x14) = uVar28;
      *(undefined4 *)(unsigned)(pdVar3 + 2) = uVar25;
      puVar6 = (undefined8 *)(unsigned)((int)pdVar3 + 0xc);
      *(undefined4 *)(unsigned)puVar6 = uVar26;
    }
    else {
      pdVar3[-1] = in_xd2;
      *(double *)(unsigned)((int)pdVar3 + -0x14) = dVar31;
      *(double *)(unsigned)((int)pdVar3 + -0x1c) = in_xd4;
      *(double *)(unsigned)((int)pdVar3 + -0x24) = in_xd10;
      *(double *)(unsigned)((int)pdVar3 + -0x2c) = dVar32;
      uVar22 = *(undefined8 *)(unsigned)(puVar13 + -0xa8);
      in_xd4 = *(double *)(unsigned)(puVar13 + -0xa0);
      uVar23 = *(undefined8 *)(unsigned)(puVar13 + -0x98);
      uVar33 = *(undefined8 *)(unsigned)(puVar13 + -0x90);
      dVar15 = *(double *)(unsigned)(puVar13 + -0x88);
      pdVar5 = (double *)(unsigned)(puVar13 + -0x80);
      *(double *)(unsigned)((int)pdVar3 + 4) = dVar15;
      *(undefined8 *)(unsigned)((int)pdVar3 + -4) = uVar33;
      *(undefined8 *)(unsigned)((int)pdVar3 + -0xc) = uVar23;
      *(double *)(unsigned)((int)pdVar3 + -0x14) = in_xd4;
      puVar6 = (undefined8 *)(unsigned)((int)pdVar3 + -0x1c);
      *puVar6 = uVar22;
    }
    *(undefined4 *)(unsigned)((int)puVar6 + -4) = 0xe0000000;
    if (in_FPSCR_SZ == '\0') {
      dVar32 = (double)(ulonglong)*(uint *)(unsigned)pdVar5;
      uVar25 = *(undefined4 *)(unsigned)(pdVar5 + 1);
      dVar31 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar5 + 4),uVar25);
      pdVar5 = (double *)(unsigned)((int)pdVar5 + 0xc);
      dVar21 = CONCAT44D((int)(D2U(dVar21) >> 0x20),uVar25);
    }
    else {
      in_xd10 = *pdVar5;
      dVar31 = pdVar5[1];
      in_xd2 = pdVar5[2];
      pdVar5 = pdVar5 + 3;
      uVar25 = SUB84(dVar31,0);
      in_xd4 = in_xd2;
    }
    fVar14 = F32LO(dVar15);
    if (in_FPSCR_PR == '\0') {
      dVar21 = CONCAT44D((int)(D2U(dVar21) >> 0x20),F32LO(dVar21) + fVar14);
    }
    else {
      dVar21 = dVar21 + dVar15;
    }
    uVar26 = (undefined4)(D2U(dVar31) >> 0x20);
    if (in_FPSCR_SZ == '\0') {
      dVar32 = CONCAT44D(*(undefined4 *)(unsigned)pdVar5,SUB84(dVar32,0));
      pdVar5 = (double *)(unsigned)(puVar6 + 7);
      *(int *)(unsigned)pdVar5 = SUB84(dVar21,0);
      dVar21 = CONCAT44D((int)(D2U(dVar21) >> 0x20),uVar26);
    }
    else {
      dVar32 = *pdVar5;
      pdVar5 = (double *)(unsigned)((int)puVar6 + 0x34);
      *pdVar5 = in_xd2;
      in_xd2 = dVar31;
    }
    if (in_FPSCR_PR == '\0') {
      dVar21 = CONCAT44D((int)(D2U(dVar21) >> 0x20),F32LO(dVar21) + fVar14);
    }
    else {
      dVar21 = dVar21 + dVar15;
    }
    if (in_FPSCR_SZ == '\0') {
      pdVar5 = (double *)(unsigned)((int)pdVar5 + -4);
      *(int *)(unsigned)pdVar5 = SUB84(dVar21,0);
      dVar21 = CONCAT44D((int)(D2U(dVar21) >> 0x20),SUB84(dVar32,0));
    }
    else {
      pdVar5 = pdVar5 + -1;
      *pdVar5 = in_xd2;
      in_xd2 = in_xd10;
    }
    if (in_FPSCR_PR == '\0') {
      dVar21 = CONCAT44D((int)(D2U(dVar21) >> 0x20),F32LO(dVar21) + fVar14);
    }
    else {
      dVar21 = dVar21 + dVar15;
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)(unsigned)((int)pdVar5 + -4) = SUB84(dVar21,0);
      *(undefined4 *)(unsigned)((int)pdVar5 + -0xc) = uVar25;
      *(undefined4 *)(unsigned)(pdVar5 + -2) = uVar26;
      *(int *)(unsigned)((int)pdVar5 + -0x14) = SUB84(dVar32,0);
      pdVar5 = pdVar5 + -3;
      *(int *)(unsigned)pdVar5 = (int)(D2U(dVar32) >> 0x20);
    }
    else {
      pdVar5[-1] = in_xd2;
      *(double *)(unsigned)((int)pdVar5 + -0x14) = in_xd4;
      *(double *)(unsigned)((int)pdVar5 + -0x1c) = dVar31;
      *(double *)(unsigned)((int)pdVar5 + -0x24) = in_xd10;
      pdVar5 = (double *)(unsigned)((int)pdVar5 + -0x2c);
      *pdVar5 = dVar32;
    }
    if (iVar12 != 3) {
      if (in_FPSCR_SZ == '\0') {
        uVar25 = *(undefined4 *)(unsigned)(puVar13 + -0x60);
        uVar27 = *(undefined4 *)(unsigned)(puVar13 + -0x5c);
        uVar26 = *(undefined4 *)(unsigned)(puVar13 + -0x58);
        uVar28 = *(undefined4 *)(unsigned)(puVar13 + -0x54);
        dVar15 = CONCAT44D(uVar28,fVar14);
        pdVar3 = (double *)(unsigned)(puVar13 + -0x4c);
        *(undefined4 *)(unsigned)((int)pdVar5 + 0x34) = *(undefined4 *)(unsigned)(puVar13 + -0x50);
        *(undefined4 *)(unsigned)(pdVar5 + 6) = uVar28;
        *(undefined4 *)(unsigned)((int)pdVar5 + 0x2c) = uVar26;
        *(undefined4 *)(unsigned)(pdVar5 + 5) = uVar27;
        pdVar5 = (double *)(unsigned)((int)pdVar5 + 0x24);
        *(undefined4 *)(unsigned)pdVar5 = uVar25;
      }
      else {
        dVar31 = *(double *)(unsigned)(puVar13 + -0x60);
        dVar24 = *(double *)(unsigned)(puVar13 + -0x58);
        dVar29 = *(double *)(unsigned)(puVar13 + -0x50);
        dVar15 = *(double *)(unsigned)(puVar13 + -0x48);
        in_xd4 = *(double *)(unsigned)(puVar13 + -0x40);
        pdVar3 = (double *)(unsigned)(puVar13 + -0x38);
        pdVar5[6] = in_xd4;
        pdVar5[5] = dVar15;
        pdVar5[4] = dVar29;
        pdVar5[3] = dVar24;
        pdVar5 = pdVar5 + 2;
        *pdVar5 = dVar31;
      }
      *(undefined4 *)(unsigned)((int)pdVar5 + -4) = 0xe0000000;
      if (in_FPSCR_SZ == '\0') {
        dVar32 = (double)(ulonglong)*(uint *)(unsigned)pdVar3;
        uVar25 = *(undefined4 *)(unsigned)(pdVar3 + 1);
        dVar31 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar3 + 4),uVar25);
        pdVar3 = (double *)(unsigned)((int)pdVar3 + 0xc);
        dVar21 = CONCAT44D((int)(D2U(dVar21) >> 0x20),uVar25);
      }
      else {
        in_xd10 = *pdVar3;
        dVar31 = pdVar3[1];
        in_xd2 = pdVar3[2];
        pdVar3 = pdVar3 + 3;
        uVar25 = SUB84(dVar31,0);
        in_xd4 = in_xd2;
      }
      fVar14 = F32LO(dVar15);
      if (in_FPSCR_PR == '\0') {
        dVar21 = CONCAT44D((int)(D2U(dVar21) >> 0x20),F32LO(dVar21) + fVar14);
      }
      else {
        dVar21 = dVar21 + dVar15;
      }
      uVar26 = (undefined4)(D2U(dVar31) >> 0x20);
      if (in_FPSCR_SZ == '\0') {
        dVar32 = CONCAT44D(*(undefined4 *)(unsigned)pdVar3,SUB84(dVar32,0));
        pdVar5 = pdVar5 + 7;
        *(int *)(unsigned)pdVar5 = SUB84(dVar21,0);
        dVar21 = CONCAT44D((int)(D2U(dVar21) >> 0x20),uVar26);
      }
      else {
        dVar32 = *pdVar3;
        pdVar5 = (double *)(unsigned)((int)pdVar5 + 0x34);
        *pdVar5 = in_xd2;
        in_xd2 = dVar31;
      }
      if (in_FPSCR_PR == '\0') {
        dVar21 = CONCAT44D((int)(D2U(dVar21) >> 0x20),F32LO(dVar21) + fVar14);
      }
      else {
        dVar21 = dVar21 + dVar15;
      }
      if (in_FPSCR_SZ == '\0') {
        pdVar5 = (double *)(unsigned)((int)pdVar5 + -4);
        *(int *)(unsigned)pdVar5 = SUB84(dVar21,0);
        dVar21 = CONCAT44D((int)(D2U(dVar21) >> 0x20),SUB84(dVar32,0));
      }
      else {
        pdVar5 = pdVar5 + -1;
        *pdVar5 = in_xd2;
        in_xd2 = in_xd10;
      }
      if (in_FPSCR_PR == '\0') {
        dVar21 = CONCAT44D((int)(D2U(dVar21) >> 0x20),F32LO(dVar21) + fVar14);
      }
      else {
        dVar21 = dVar21 + dVar15;
      }
      if (in_FPSCR_SZ == '\0') {
        *(int *)(unsigned)((int)pdVar5 + -4) = SUB84(dVar21,0);
        *(undefined4 *)(unsigned)((int)pdVar5 + -0xc) = uVar25;
        *(undefined4 *)(unsigned)(pdVar5 + -2) = uVar26;
        *(int *)(unsigned)((int)pdVar5 + -0x14) = SUB84(dVar32,0);
        pdVar5 = pdVar5 + -3;
        *(int *)(unsigned)pdVar5 = (int)(D2U(dVar32) >> 0x20);
      }
      else {
        pdVar5[-1] = in_xd2;
        *(double *)(unsigned)((int)pdVar5 + -0x14) = in_xd4;
        *(double *)(unsigned)((int)pdVar5 + -0x1c) = dVar31;
        *(double *)(unsigned)((int)pdVar5 + -0x24) = in_xd10;
        pdVar5 = (double *)(unsigned)((int)pdVar5 + -0x2c);
        *pdVar5 = dVar32;
      }
    }
    uVar25 = SUB84(dVar32,0);
    if (in_FPSCR_SZ == '\0') {
      uVar30 = *(undefined4 *)(unsigned)(puVar13 + -0x84);
      dVar15 = CONCAT44D(uVar30,SUB84(dVar15,0));
      uVar27 = *(undefined4 *)(unsigned)(puVar13 + -0x80);
      uVar26 = *(undefined4 *)(unsigned)(puVar13 + -0x7c);
      uVar28 = *(undefined4 *)(unsigned)(puVar13 + -0x78);
      pdVar3 = (double *)(unsigned)(puVar13 + -0x70);
      *(undefined4 *)(unsigned)((int)pdVar5 + 0x34) = *(undefined4 *)(unsigned)(puVar13 + -0x74);
      *(undefined4 *)(unsigned)(pdVar5 + 6) = uVar28;
      *(undefined4 *)(unsigned)((int)pdVar5 + 0x2c) = uVar26;
      *(undefined4 *)(unsigned)(pdVar5 + 5) = uVar27;
      pdVar5 = (double *)(unsigned)((int)pdVar5 + 0x24);
      *(undefined4 *)(unsigned)pdVar5 = uVar30;
    }
    else {
      dVar15 = *(double *)(unsigned)(puVar13 + -0x84);
      dVar31 = *(double *)(unsigned)(puVar13 + -0x7c);
      in_xd4 = *(double *)(unsigned)(puVar13 + -0x74);
      dVar32 = *(double *)(unsigned)(puVar13 + -0x6c);
      pdVar3 = (double *)(unsigned)(puVar13 + -0x5c);
      pdVar5[6] = *(double *)(unsigned)(puVar13 + -100);
      pdVar5[5] = dVar32;
      pdVar5[4] = in_xd4;
      pdVar5[3] = dVar31;
      pdVar5 = pdVar5 + 2;
      *pdVar5 = dVar15;
    }
    *(undefined4 *)(unsigned)((int)pdVar5 + -4) = 0xf0000000;
    if (in_FPSCR_SZ == '\0') {
      uVar25 = *(undefined4 *)(unsigned)pdVar3;
      uVar26 = *(undefined4 *)(unsigned)(pdVar3 + 1);
      dVar31 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar3 + 4),uVar26);
      pdVar3 = (double *)(unsigned)((int)pdVar3 + 0xc);
      dVar21 = CONCAT44D((int)(D2U(dVar21) >> 0x20),uVar26);
    }
    else {
      in_xd10 = *pdVar3;
      dVar31 = pdVar3[1];
      in_xd2 = pdVar3[2];
      pdVar3 = pdVar3 + 3;
      uVar26 = SUB84(dVar31,0);
      in_xd4 = in_xd2;
    }
    fVar14 = F32LO(dVar15);
    if (in_FPSCR_PR == '\0') {
      dVar21 = CONCAT44D((int)(D2U(dVar21) >> 0x20),F32LO(dVar21) + fVar14);
    }
    else {
      dVar21 = dVar21 + dVar15;
    }
    uVar27 = (undefined4)(D2U(dVar31) >> 0x20);
    if (in_FPSCR_SZ == '\0') {
      dVar32 = CONCAT44D(*(undefined4 *)(unsigned)pdVar3,uVar25);
      pdVar5 = pdVar5 + 7;
      *(int *)(unsigned)pdVar5 = SUB84(dVar21,0);
      dVar21 = CONCAT44D((int)(D2U(dVar21) >> 0x20),uVar27);
    }
    else {
      dVar32 = *pdVar3;
      pdVar5 = (double *)(unsigned)((int)pdVar5 + 0x34);
      *pdVar5 = in_xd2;
      in_xd2 = dVar31;
    }
    if (in_FPSCR_PR == '\0') {
      dVar21 = CONCAT44D((int)(D2U(dVar21) >> 0x20),F32LO(dVar21) + fVar14);
    }
    else {
      dVar21 = dVar21 + dVar15;
    }
    if (in_FPSCR_SZ == '\0') {
      pdVar5 = (double *)(unsigned)((int)pdVar5 + -4);
      *(int *)(unsigned)pdVar5 = SUB84(dVar21,0);
      dVar21 = CONCAT44D((int)(D2U(dVar21) >> 0x20),SUB84(dVar32,0));
    }
    else {
      pdVar5 = pdVar5 + -1;
      *pdVar5 = in_xd2;
      in_xd2 = in_xd10;
    }
    if (in_FPSCR_PR == '\0') {
      fVar14 = F32LO(dVar21) + fVar14;
    }
    else {
      fVar14 = SUB84(dVar21 + dVar15,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(unsigned)((int)pdVar5 + -4) = fVar14;
      *(undefined4 *)(unsigned)((int)pdVar5 + -0xc) = uVar26;
      *(undefined4 *)(unsigned)(pdVar5 + -2) = uVar27;
      *(int *)(unsigned)((int)pdVar5 + -0x14) = SUB84(dVar32,0);
      pdVar5 = pdVar5 + -3;
      *(int *)(unsigned)pdVar5 = (int)(D2U(dVar32) >> 0x20);
    }
    else {
      pdVar5[-1] = in_xd2;
      *(double *)(unsigned)((int)pdVar5 + -0x14) = in_xd4;
      *(double *)(unsigned)((int)pdVar5 + -0x1c) = dVar31;
      *(double *)(unsigned)((int)pdVar5 + -0x24) = in_xd10;
      pdVar5 = (double *)(unsigned)((int)pdVar5 + -0x2c);
      *pdVar5 = dVar32;
    }
    ar7 = pdVar5 + 4;
    (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) + iVar12;
  }
  return ar7;
}

__asm__(".globl _FUN_8c214d6c\n.set _FUN_8c214d6c, _FUN_8c214d6c_def\n");
