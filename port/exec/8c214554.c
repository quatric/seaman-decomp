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
undefined8 * FUN_8c214554_def(double *ar4,double *ar5,double *ar6,undefined8 *ar7)

{
  ring[rp++ & 255] = "FUN_8c214554";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 228; for (int i_ = 0; i_ < 228; i_++) z_[i_] = 0; }
  int iVar1;
  double *pdVar2;
  undefined8 *puVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  undefined8 *puVar9;
  float fVar10;
  double in_dr0 = 0;
  longlong lVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  double in_dr2 = 0;
  double dVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined4 uVar19;
  ulonglong uVar18;
  float fVar20;
  undefined4 uVar21;
  double in_dr4 = 0;
  longlong in_dr6 = 0;
  uint uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  double in_dr8 = 0;
  undefined8 uVar25;
  undefined8 in_dr10 = 0;
  undefined8 uVar27;
  float fVar29;
  undefined8 in_dr12 = 0;
  double dVar30;
  undefined4 in_fr15 = 0;
  double dVar31;
  double dVar32;
  double in_xd0 = 0;
  double in_xd2 = 0;
  double dVar33;
  double dVar34;
  longlong in_xd4 = 0;
  undefined8 uVar35;
  double in_xd6 = 0;
  double in_xd8 = 0;
  undefined8 uVar36;
  double in_xd10 = 0;
  double in_xd12 = 0;
  double in_xd14 = 0;
  char in_FPSCR_PR = 0;
  char in_FPSCR_SZ = 0;
  undefined4 uVar26;
  undefined4 uVar28;
  
  if (in_FPSCR_SZ == '\0') {
    puVar9 = ((undefined8 *)(fr0_ - 0x2c));
    ((undefined8 *)(fr0_ - 0x2c))[0] = CONCAT44((int)in_dr12,(int)((ulonglong)in_dr12 >> 0x20));
  }
  else {
    puVar9 = (undefined8 *)(unsigned)((undefined1 *)(fr0_ - 0x3c));
  }
  if (((*(undefined4 *)(unsigned)(unsigned)0x8c4aa4f0) & 0x10000) == 0) {
    if (in_FPSCR_SZ == '\0') {
      in_dr10 = CONCAT44((int)((ulonglong)in_dr10 >> 0x20),(*(undefined4 *)(unsigned)(unsigned)0x8c4aa4a8));
      in_dr2 = CONCAT44D((int)((ulonglong)in_dr2 >> 0x20),(*(undefined4 *)(unsigned)(unsigned)0x8c4aa4dc));
      dVar31 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4aa4a8),in_fr15);
      uVar21 = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa4a8);
    }
    else {
      dVar31 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4aa4ac),(*(undefined4 *)(unsigned)(unsigned)0x8c4aa4a8));
      in_xd2 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4aa4e0),(*(undefined4 *)(unsigned)(unsigned)0x8c4aa4dc));
      uVar21 = (undefined4)in_dr10;
      in_xd10 = dVar31;
    }
    if (in_FPSCR_PR == '\0') {
      dVar31 = CONCAT44D(F32HI(dVar31) * F32LO(in_dr2),SUB84(dVar31,0)
                               );
    }
    else {
      dVar31 = dVar31 * in_dr2;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar30 = CONCAT44D(uVar21,(*(undefined4 *)(unsigned)(unsigned)0x8c4aa4b4));
    }
    else {
      in_xd12 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4aa4b8),(*(undefined4 *)(unsigned)(unsigned)0x8c4aa4b4));
      dVar30 = in_xd10;
    }
    uVar21 = (undefined4)((ulonglong)in_dr10 >> 0x20);
    if (in_FPSCR_SZ == '\0') {
      in_dr2 = (double)(ulonglong)(*(undefined4 *)(unsigned)(unsigned)0x8c4aa4b8);
    }
    else {
      in_xd2 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4aa4bc),(*(undefined4 *)(unsigned)(unsigned)0x8c4aa4b8));
    }
    fVar14 = F32HI(dVar31);
    if (in_FPSCR_PR == '\0') {
      dVar31 = CONCAT44D(uVar21,1.0 / fVar14);
    }
    else {
      dVar31 = CONCAT44D(uVar21,0x3f800000) / dVar31;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar32 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4aa4e0),SUB84(in_dr2,0));
      *(int *)(unsigned)((int)puVar9 + -0xb4) = SUB84(in_dr2,0);
    }
    else {
      dVar32 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4aa4e4),(*(undefined4 *)(unsigned)(unsigned)0x8c4aa4e0));
      *(double *)(unsigned)((int)puVar9 + -0xb4) = in_xd2;
    }
    if (in_FPSCR_PR == '\0') {
      dVar30 = CONCAT44D(F32HI(dVar30) *
                                F32HI(dVar32),SUB84(dVar30,0));
    }
    else {
      dVar30 = dVar30 * dVar32;
    }
    piVar7 = (int *)(unsigned)((int)puVar9 + -0x24);
    fVar20 = F32HI(dVar30);
    if (in_FPSCR_PR == '\0') {
      dVar32 = CONCAT44D(fVar14,1.0 / fVar20);
    }
    else {
      dVar32 = CONCAT44D(fVar14,0x3f800000) / dVar30;
    }
    *piVar7 = (int)ar4;
    if (in_FPSCR_SZ == '\0') {
      dVar15 = CONCAT44D(*(undefined4 *)(unsigned)ar4,*(undefined4 *)(unsigned)((int)ar4 + 4));
    }
    else {
      in_xd2 = *(double *)(unsigned)((int)ar4 + 4);
      dVar15 = *ar4;
    }
    fVar29 = F32LO(dVar30);
    fVar14 = F32LO(dVar31);
    if (in_FPSCR_PR == '\0') {
      fVar12 = (F32LO(dVar15) - fVar29) * F32HI(dVar15) * fVar14;
    }
    else {
      fVar12 = SUB84((dVar15 - dVar30) * (dVar15 - dVar30) * dVar31,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(unsigned)((int)puVar9 + -0x20) = fVar12;
      dVar15 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 1),*(undefined4 *)(unsigned)((int)puVar9 + -0xb4));
    }
    else {
      *(double *)(unsigned)((int)puVar9 + -0x20) = in_xd2;
      in_xd2 = *(double *)(unsigned)((int)puVar9 + -0xb4);
      dVar15 = ar4[1];
    }
    if (in_FPSCR_PR == '\0') {
      dVar15 = CONCAT44D(F32HI(dVar15) - F32LO(dVar15),SUB84(dVar15,0)
                               );
    }
    else {
      dVar15 = dVar15 - dVar15;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar15 = CONCAT44D((int)(D2U(dVar15) >> 0x20),*(undefined4 *)(unsigned)ar4);
    }
    else {
      in_xd2 = *ar4;
    }
    fVar12 = F32LO(dVar32);
    if (in_FPSCR_PR == '\0') {
      dVar15 = CONCAT44D(F32HI(dVar15) * F32LO(dVar15) * fVar12,
                                SUB84(dVar15,0));
    }
    else {
      dVar15 = dVar15 * dVar15 * dVar32;
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)(unsigned)((int)puVar9 + -0x1c) = (int)(D2U(dVar15) >> 0x20);
    }
    else {
      *(double *)(unsigned)((int)puVar9 + -0x1c) = dVar15;
    }
    *(unsigned *)(unsigned)((int)puVar9 + -0x18) = ar5;
    if (in_FPSCR_SZ == '\0') {
      dVar15 = CONCAT44D(*(undefined4 *)(unsigned)ar5,*(undefined4 *)(unsigned)((int)ar5 + 4));
    }
    else {
      in_xd2 = *(double *)(unsigned)((int)ar5 + 4);
      dVar15 = *ar5;
    }
    if (in_FPSCR_PR == '\0') {
      fVar13 = (F32LO(dVar15) - fVar29) * F32HI(dVar15) * fVar14;
    }
    else {
      fVar13 = SUB84((dVar15 - dVar30) * (dVar15 - dVar30) * dVar31,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(unsigned)((int)puVar9 + -0x14) = fVar13;
      dVar15 = CONCAT44D(*(undefined4 *)(unsigned)(ar5 + 1),*(undefined4 *)(unsigned)((int)puVar9 + -0xb4));
    }
    else {
      *(double *)(unsigned)((int)puVar9 + -0x14) = in_xd2;
      dVar15 = ar5[1];
      in_xd2 = *(double *)(unsigned)((int)puVar9 + -0xb4);
    }
    if (in_FPSCR_PR == '\0') {
      dVar15 = CONCAT44D(F32HI(dVar15) - F32LO(dVar15),SUB84(dVar15,0)
                               );
    }
    else {
      dVar15 = dVar15 - dVar15;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar15 = CONCAT44D((int)(D2U(dVar15) >> 0x20),*(undefined4 *)(unsigned)ar5);
    }
    else {
      in_xd2 = *ar5;
    }
    if (in_FPSCR_PR == '\0') {
      dVar15 = CONCAT44D(F32HI(dVar15) * F32LO(dVar15) * fVar12,
                                SUB84(dVar15,0));
    }
    else {
      dVar15 = dVar15 * dVar15 * dVar32;
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)(unsigned)((int)puVar9 + -0x10) = (int)(D2U(dVar15) >> 0x20);
    }
    else {
      *(double *)(unsigned)((int)puVar9 + -0x10) = dVar15;
    }
    *(unsigned *)(unsigned)((int)puVar9 + -0xc) = ar6;
    if (in_FPSCR_SZ == '\0') {
      dVar15 = CONCAT44D(*(undefined4 *)(unsigned)ar6,*(undefined4 *)(unsigned)((int)ar6 + 4));
    }
    else {
      in_xd2 = *(double *)(unsigned)((int)ar6 + 4);
      dVar15 = *ar6;
    }
    if (in_FPSCR_PR == '\0') {
      fVar14 = (F32LO(dVar15) - fVar29) * F32HI(dVar15) * fVar14;
    }
    else {
      fVar14 = SUB84((dVar15 - dVar30) * (dVar15 - dVar30) * dVar31,0);
    }
    if (in_FPSCR_SZ == '\0') {
      *(float *)(unsigned)((int)puVar9 + -8) = fVar14;
      dVar30 = CONCAT44D(*(undefined4 *)(unsigned)(ar6 + 1),*(undefined4 *)(unsigned)((int)puVar9 + -0xb4));
    }
    else {
      *(double *)(unsigned)((int)puVar9 + -8) = in_xd2;
      dVar30 = ar6[1];
      in_xd2 = *(double *)(unsigned)((int)puVar9 + -0xb4);
    }
    if (in_FPSCR_PR == '\0') {
      dVar30 = CONCAT44D(F32HI(dVar30) - F32LO(dVar30),SUB84(dVar30,0)
                               );
    }
    else {
      dVar30 = dVar30 - dVar30;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar30 = CONCAT44D((int)(D2U(dVar30) >> 0x20),*(undefined4 *)(unsigned)ar6);
    }
    else {
      in_xd2 = *ar6;
    }
    iVar8 = 0;
    if (in_FPSCR_PR == '\0') {
      dVar30 = CONCAT44D(F32HI(dVar30) * F32LO(dVar30) * fVar12,
                                SUB84(dVar30,0));
    }
    else {
      dVar30 = dVar30 * dVar30 * dVar32;
    }
    if (in_FPSCR_SZ == '\0') {
      *(int *)(unsigned)((int)puVar9 + -4) = (int)(D2U(dVar30) >> 0x20);
    }
    else {
      *(double *)(unsigned)((int)puVar9 + -4) = dVar30;
    }
    iVar1 = 2;
    iVar4 = 0;
    while( true ) {
      uVar22 = (uint)((ulonglong)in_dr6 >> 0x20);
      fVar14 = F32HI(in_dr4);
      uVar21 = SUB84(in_dr8,0);
      fVar12 = F32HI(in_dr8);
      fVar13 = F32HI(dVar31);
      if (2 < iVar4) break;
      piVar5 = piVar7 + iVar1 * 3;
      if (in_FPSCR_SZ == '\0') {
        uVar16 = CONCAT44(*(undefined4 *)(unsigned)*piVar5,0x3f800000);
      }
      else {
        uVar16 = *(undefined8 *)(unsigned)*piVar5;
      }
      piVar6 = piVar7 + iVar4 * 3;
      if (in_FPSCR_SZ == '\0') {
        uVar17 = CONCAT44(*(undefined4 *)(unsigned)*piVar6,(float)uVar16);
      }
      else {
        uVar17 = *(undefined8 *)(unsigned)*piVar6;
      }
      fVar10 = (float)uVar17;
      if (((in_FPSCR_PR == '\0' && (float)uVar16 < F32HI(uVar16)) ^ 1) !=
          -((in_FPSCR_PR == '\0' && fVar10 < F32HI(uVar17)) - 1)) {
        pdVar2 = (double *)(unsigned)*piVar5;
        *(unsigned *)(unsigned)((int)puVar9 + -0xa0) = pdVar2;
        if (in_FPSCR_SZ == '\0') {
          dVar31 = CONCAT44D(fVar13,*(undefined4 *)(unsigned)pdVar2);
        }
        else {
          in_xd10 = *pdVar2;
        }
        if (in_FPSCR_SZ == '\0') {
          in_dr0 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),*(undefined4 *)(unsigned)*piVar6);
          fVar10 = F32LO(dVar31);
        }
        else {
          in_xd0 = *(double *)(unsigned)*piVar6;
          in_xd2 = in_xd10;
        }
        dVar30 = CONCAT44D(0x3f800000,-fVar10);
        if (in_FPSCR_PR == '\0') {
          dVar30 = CONCAT44D(0x3f800000,-fVar10 + 1.0);
          dVar15 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),
                                    F32LO(in_dr0) - F32LO(dVar31));
        }
        else {
          dVar30 = dVar30 + dVar30;
          dVar15 = in_dr0 - dVar31;
        }
        if (in_FPSCR_SZ == '\0') {
          dVar32 = CONCAT44D((int)(D2U(dVar32) >> 0x20),piVar5[1]);
          dVar31 = CONCAT44D((int)(D2U(dVar31) >> 0x20),SUB84(dVar30,0));
        }
        else {
          in_xd14 = *(double *)(unsigned)(piVar5 + 1);
          in_xd10 = in_xd2;
        }
        if (in_FPSCR_PR == '\0') {
          dVar31 = CONCAT44D((int)(D2U(dVar31) >> 0x20),
                                    F32LO(dVar31) / F32LO(dVar15));
        }
        else {
          dVar31 = dVar31 / dVar15;
        }
        if (in_FPSCR_SZ == '\0') {
          dVar30 = CONCAT44D((int)(D2U(dVar30) >> 0x20),piVar6[1]);
          dVar15 = (double)(D2U(dVar32) & 0xffffffff);
          dVar34 = in_xd0;
        }
        else {
          in_xd2 = *(double *)(unsigned)(piVar6 + 1);
          dVar34 = in_xd14;
        }
        if (in_FPSCR_PR == '\0') {
          dVar30 = CONCAT44D((int)(D2U(dVar30) >> 0x20),
                                    F32LO(dVar30) - F32LO(dVar32));
        }
        else {
          dVar30 = dVar30 - dVar32;
        }
        uVar19 = SUB84(dVar31,0);
        dVar33 = in_xd10;
        if (in_FPSCR_SZ == '\0') {
          dVar33 = CONCAT44D(uVar19,SUB84(dVar15,0));
        }
        fVar13 = F32LO(dVar30);
        if (in_FPSCR_PR == '\0') {
          dVar33 = (double)(ulonglong)
                           (uint)(F32HI(dVar33) * fVar13 + F32LO(dVar33));
        }
        if (in_FPSCR_SZ == '\0') {
          fVar13 = (float)(uint)piVar5[2];
          dVar30 = CONCAT44D((int)(D2U(dVar30) >> 0x20),fVar13);
          *(float *)(unsigned)((int)puVar9 + -0x9c) = fVar13;
          dVar32 = CONCAT44D((int)(D2U(dVar32) >> 0x20),SUB84(dVar33,0));
          dVar33 = CONCAT44D(fVar13,piVar6[2]);
          in_xd0 = dVar34;
          dVar15 = in_xd2;
        }
        else {
          dVar33 = *(double *)(unsigned)(piVar5 + 2);
          *(double *)(unsigned)((int)puVar9 + -0x9c) = dVar33;
          in_xd0 = *(double *)(unsigned)(piVar6 + 2);
          in_xd14 = dVar34;
          dVar15 = dVar33;
        }
        if (in_FPSCR_PR == '\0') {
          fVar10 = F32LO(dVar33) - F32HI(dVar33);
        }
        else {
          fVar10 = SUB84(dVar33 - dVar33,0);
        }
        dVar34 = in_xd10;
        if (in_FPSCR_SZ == '\0') {
          dVar34 = CONCAT44D(uVar19,fVar10);
        }
        if (in_FPSCR_PR == '\0') {
          dVar30 = CONCAT44D((int)(D2U(dVar30) >> 0x20),
                                    F32HI(dVar34) * F32LO(dVar34) + fVar13);
        }
        if (in_FPSCR_SZ == '\0') {
          *(int *)(unsigned)((int)puVar9 + -0x98) = SUB84(dVar30,0);
        }
        else {
          *(double *)(unsigned)((int)puVar9 + -0x98) = dVar15;
        }
        fVar13 = F32LO(dVar32);
        dVar33 = in_xd14;
        in_xd2 = in_xd12;
        if (in_FPSCR_SZ == '\0') {
          dVar30 = CONCAT44D((int)(D2U(dVar30) >> 0x20),fVar29);
          dVar33 = CONCAT44D(fVar13,SUB84(dVar34,0));
          in_xd2 = dVar15;
        }
        fVar10 = F32HI(dVar32);
        if (in_FPSCR_PR == '\0') {
          dVar30 = CONCAT44D((int)(D2U(dVar30) >> 0x20),
                                    F32HI(dVar33) * fVar10 + F32LO(dVar30));
        }
        pdVar2 = (double *)(unsigned)((int)puVar9 + iVar8 * 0x1c + -0x94);
        if (in_FPSCR_SZ == '\0') {
          *(int *)(unsigned)pdVar2 = SUB84(dVar30,0);
          in_dr0 = CONCAT44D(*(undefined4 *)(unsigned)((int)puVar9 + -0x98),SUB84(dVar33,0));
          dVar30 = CONCAT44D((int)(D2U(dVar30) >> 0x20),
                                    *(undefined4 *)(unsigned)((int)puVar9 + -0xb4));
        }
        else {
          *pdVar2 = in_xd2;
          in_dr0 = *(double *)(unsigned)((int)puVar9 + -0x98);
          in_xd2 = *(double *)(unsigned)((int)puVar9 + -0xb4);
        }
        if (in_FPSCR_PR == '\0') {
          dVar30 = CONCAT44D((int)(D2U(dVar30) >> 0x20),
                                    F32HI(in_dr0) * fVar20 + F32LO(dVar30));
        }
        if (in_FPSCR_SZ == '\0') {
          *(int *)(unsigned)((int)pdVar2 + 4) = SUB84(dVar30,0);
          *(int *)(unsigned)(pdVar2 + 1) = (int)(D2U(dVar30) >> 0x20);
        }
        else {
          *(double *)(unsigned)((int)pdVar2 + 4) = in_xd2;
          pdVar2[1] = dVar30;
        }
        if ((*(undefined4 *)(unsigned)(unsigned)0x8c277acc) == 0) {
          piVar5 = piVar7 + iVar1 * 3;
          dVar15 = in_xd10;
          if (in_FPSCR_SZ == '\0') {
            dVar15 = CONCAT44D(uVar19,SUB84(in_dr0,0));
          }
          iVar1 = *piVar5;
          *(int *)(unsigned)((int)puVar9 + -0xa4) = iVar1;
          if (in_FPSCR_SZ == '\0') {
            fVar13 = *(float *)(unsigned)(iVar1 + 0x14);
            dVar32 = CONCAT44D(fVar10,fVar13);
            dVar30 = CONCAT44D(fVar13,SUB84(dVar30,0));
          }
          else {
            dVar30 = *(double *)(unsigned)(iVar1 + 0x14);
            in_xd14 = dVar30;
          }
          piVar6 = piVar7 + iVar4 * 3;
          if (in_FPSCR_SZ == '\0') {
            dVar30 = CONCAT44D((int)(D2U(dVar30) >> 0x20),
                                      *(undefined4 *)(unsigned)(*piVar6 + 0x14));
          }
          else {
            in_xd2 = *(double *)(unsigned)(*piVar6 + 0x14);
          }
          if (in_FPSCR_PR == '\0') {
            fVar13 = F32LO(dVar30) - fVar13;
            dVar30 = CONCAT44D(F32HI(dVar15) * fVar13 +
                                      F32HI(dVar30),fVar13);
          }
          else {
            dVar30 = dVar30 - dVar32;
          }
          dVar34 = in_dr8;
          lVar11 = in_xd4;
          if (in_FPSCR_SZ == '\0') {
            dVar30 = CONCAT44D((int)(D2U(dVar30) >> 0x20),fVar12);
            dVar34 = in_xd2;
            lVar11 = CONCAT44(SUB84(in_dr4,0),SUB84(dVar15,0));
          }
          if (in_FPSCR_PR == '\0') {
            dVar30 = (double)(ulonglong)
                             (uint)(F32HI(lVar11) *
                                    F32HI(dVar30) + F32LO(dVar30));
          }
          if (in_FPSCR_SZ == '\0') {
            *(int *)(unsigned)((int)pdVar2 + 0xc) = SUB84(dVar30,0);
          }
          else {
            *(double *)(unsigned)((int)pdVar2 + 0xc) = dVar34;
          }
          iVar1 = *piVar5;
          *(int *)(unsigned)((int)puVar9 + -0xa8) = iVar1;
          if (in_FPSCR_SZ == '\0') {
            dVar32 = CONCAT44D((int)(D2U(dVar32) >> 0x20),*(undefined4 *)(unsigned)(iVar1 + 0x18)
                                     );
          }
          else {
            in_xd14 = *(double *)(unsigned)(iVar1 + 0x18);
          }
          if (in_FPSCR_SZ == '\0') {
            dVar15 = CONCAT44D(uVar19,(int)lVar11);
            dVar30 = CONCAT44D(SUB84(dVar32,0),*(undefined4 *)(unsigned)(*piVar6 + 0x18));
          }
          else {
            dVar34 = *(double *)(unsigned)(*piVar6 + 0x18);
            dVar15 = in_xd10;
            dVar30 = in_xd14;
          }
          if (in_FPSCR_PR == '\0') {
            fVar13 = F32LO(dVar30) - F32LO(dVar32);
            dVar30 = CONCAT44D(F32HI(dVar15) * fVar13 +
                                      F32HI(dVar30),fVar13);
          }
          else {
            dVar30 = dVar30 - dVar32;
          }
          dVar33 = in_xd8;
          lVar11 = in_dr6;
          if (in_FPSCR_SZ == '\0') {
            dVar30 = CONCAT44D((int)(D2U(dVar30) >> 0x20),uVar21);
            dVar33 = dVar34;
            lVar11 = CONCAT44(uVar22,SUB84(dVar15,0));
          }
          if (in_FPSCR_PR == '\0') {
            dVar30 = (double)(ulonglong)
                             (uint)(F32HI(lVar11) *
                                    F32HI(dVar30) + F32LO(dVar30));
          }
          if (in_FPSCR_SZ == '\0') {
            *(int *)(unsigned)(pdVar2 + 2) = SUB84(dVar30,0);
            dVar30 = CONCAT44D(uVar19,(int)lVar11);
          }
          else {
            pdVar2[2] = dVar33;
            dVar30 = in_xd10;
          }
          iVar1 = *piVar5;
          *(int *)(unsigned)((int)puVar9 + -0xac) = iVar1;
          if (in_FPSCR_SZ == '\0') {
            dVar32 = CONCAT44D((int)(D2U(dVar32) >> 0x20),*(undefined4 *)(unsigned)(iVar1 + 0x1c)
                                     );
          }
          else {
            in_xd14 = *(double *)(unsigned)(iVar1 + 0x1c);
          }
          if (in_FPSCR_SZ == '\0') {
            dVar15 = CONCAT44D(SUB84(dVar32,0),*(undefined4 *)(unsigned)(*piVar6 + 0x1c));
          }
          else {
            dVar33 = *(double *)(unsigned)(*piVar6 + 0x1c);
            dVar15 = in_xd14;
          }
          if (in_FPSCR_PR == '\0') {
            fVar13 = F32LO(dVar15) - F32LO(dVar32);
            dVar15 = CONCAT44D(F32HI(dVar30) * fVar13 +
                                      F32HI(dVar15),fVar13);
          }
          else {
            dVar15 = dVar15 - dVar32;
          }
          in_xd2 = dVar31;
          dVar34 = in_xd6;
          if (in_FPSCR_SZ == '\0') {
            dVar15 = CONCAT44D((int)(D2U(dVar15) >> 0x20),
                                      (int)(D2U(dVar31) >> 0x20));
            in_xd2 = dVar33;
            dVar34 = CONCAT44D((int)in_dr6,SUB84(dVar30,0));
          }
          if (in_FPSCR_PR == '\0') {
            fVar13 = F32HI(dVar15);
            dVar15 = CONCAT44D(fVar13,F32HI(dVar34) * fVar13 +
                                             SUB84(dVar15,0));
          }
          if (in_FPSCR_SZ == '\0') {
            *(int *)(unsigned)((int)pdVar2 + 0x14) = SUB84(dVar15,0);
          }
          else {
            *(double *)(unsigned)((int)pdVar2 + 0x14) = in_xd2;
          }
          iVar1 = *piVar5;
          *(int *)(unsigned)((int)puVar9 + -0xb0) = iVar1;
          if (in_FPSCR_SZ == '\0') {
            dVar32 = CONCAT44D((int)(D2U(dVar32) >> 0x20),*(undefined4 *)(unsigned)(iVar1 + 0x10)
                                     );
            dVar15 = CONCAT44D((int)(D2U(dVar15) >> 0x20),
                                      *(undefined4 *)(unsigned)(*piVar6 + 0x10));
          }
          else {
            in_xd14 = *(double *)(unsigned)(iVar1 + 0x10);
            in_xd2 = *(double *)(unsigned)(*piVar6 + 0x10);
          }
          if (in_FPSCR_PR == '\0') {
            fVar13 = F32LO(dVar15) - F32LO(dVar32);
          }
          else {
            fVar13 = SUB84(dVar15 - dVar32,0);
          }
          in_dr0 = in_xd10;
          dVar30 = in_xd14;
          if (in_FPSCR_SZ == '\0') {
            in_dr0 = CONCAT44D(uVar19,SUB84(dVar34,0));
            dVar30 = CONCAT44D(SUB84(dVar32,0),fVar13);
          }
          if (in_FPSCR_PR == '\0') {
            dVar30 = CONCAT44D((F32HI(in_dr0) * F32LO(dVar30) +
                                      F32HI(dVar30)) * fVar14,SUB84(dVar30,0));
          }
          else {
            dVar30 = dVar30 * in_dr4;
          }
          if (in_FPSCR_SZ == '\0') {
            *(int *)(unsigned)(pdVar2 + 3) = (int)(D2U(dVar30) >> 0x20);
          }
          else {
            pdVar2[3] = dVar30;
          }
        }
        iVar8 = iVar8 + 1;
      }
      piVar5 = piVar7 + iVar4 * 3;
      if (in_FPSCR_SZ == '\0') {
        uVar16 = CONCAT44(*(undefined4 *)(unsigned)*piVar5,0x3f800000);
      }
      else {
        uVar16 = *(undefined8 *)(unsigned)*piVar5;
      }
      if (in_FPSCR_PR == '\0' && (float)uVar16 < F32HI(uVar16)) {
        if (in_FPSCR_SZ == '\0') {
          uVar16 = CONCAT44(*(undefined4 *)(unsigned)(*piVar5 + 4),(float)uVar16);
        }
        else {
          uVar16 = *(undefined8 *)(unsigned)(*piVar5 + 4);
        }
        puVar3 = (undefined8 *)(unsigned)((int)puVar9 + iVar8 * 0x1c + -0x94);
        if (in_FPSCR_SZ == '\0') {
          *(int *)(unsigned)puVar3 = (int)((ulonglong)uVar16 >> 0x20);
        }
        else {
          *puVar3 = uVar16;
        }
        if (in_FPSCR_SZ == '\0') {
          uVar19 = *(undefined4 *)(unsigned)(*piVar5 + 8);
          uVar16 = CONCAT44(uVar19,(int)uVar16);
          *(undefined4 *)(unsigned)((int)puVar3 + 4) = uVar19;
        }
        else {
          uVar16 = *(undefined8 *)(unsigned)(*piVar5 + 8);
          *(undefined8 *)(unsigned)((int)puVar3 + 4) = uVar16;
        }
        if (in_FPSCR_SZ == '\0') {
          uVar19 = *(undefined4 *)(unsigned)(*piVar5 + 0xc);
          uVar16 = CONCAT44(uVar19,(int)uVar16);
          *(undefined4 *)(unsigned)(puVar3 + 1) = uVar19;
        }
        else {
          uVar16 = *(undefined8 *)(unsigned)(*piVar5 + 0xc);
          puVar3[1] = uVar16;
        }
        if ((*(undefined4 *)(unsigned)(unsigned)0x8c277acc) == 0) {
          dVar30 = in_dr8;
          if (in_FPSCR_SZ == '\0') {
            dVar30 = CONCAT44D(fVar12,(int)uVar16);
          }
          piVar5 = piVar7 + iVar4 * 3;
          lVar11 = in_xd4;
          if (in_FPSCR_SZ == '\0') {
            lVar11 = CONCAT44(SUB84(in_dr4,0),SUB84(in_dr0,0));
          }
          if (in_FPSCR_SZ == '\0') {
            lVar11 = CONCAT44((int)((ulonglong)lVar11 >> 0x20),*(undefined4 *)(unsigned)(*piVar5 + 0x14));
          }
          else {
            in_xd0 = *(double *)(unsigned)(*piVar5 + 0x14);
          }
          if (in_FPSCR_PR == '\0') {
            dVar30 = CONCAT44D(F32HI(lVar11) * (float)lVar11 +
                                      F32HI(dVar30),SUB84(dVar30,0));
          }
          if (in_FPSCR_SZ == '\0') {
            *(int *)(unsigned)((int)puVar3 + 0xc) = (int)(D2U(dVar30) >> 0x20);
            lVar11 = CONCAT44(uVar22,(float)lVar11);
          }
          else {
            *(double *)(unsigned)((int)puVar3 + 0xc) = dVar30;
            lVar11 = in_dr6;
          }
          if (in_FPSCR_SZ == '\0') {
            lVar11 = CONCAT44((int)((ulonglong)lVar11 >> 0x20),*(undefined4 *)(unsigned)(*piVar5 + 0x18));
            dVar30 = CONCAT44D(uVar21,SUB84(dVar30,0));
          }
          else {
            in_xd0 = *(double *)(unsigned)(*piVar5 + 0x18);
            dVar30 = in_xd8;
          }
          if (in_FPSCR_PR == '\0') {
            dVar30 = CONCAT44D(F32HI(lVar11) * (float)lVar11 +
                                      F32HI(dVar30),SUB84(dVar30,0));
          }
          if (in_FPSCR_SZ == '\0') {
            *(int *)(unsigned)(puVar3 + 2) = (int)(D2U(dVar30) >> 0x20);
            in_dr0 = CONCAT44D((int)in_dr6,(float)lVar11);
          }
          else {
            puVar3[2] = dVar30;
            in_dr0 = in_xd6;
          }
          if (in_FPSCR_SZ == '\0') {
            in_dr0 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),
                                      *(undefined4 *)(unsigned)(*piVar5 + 0x1c));
            dVar30 = CONCAT44D((int)(D2U(dVar31) >> 0x20),SUB84(dVar30,0));
          }
          else {
            in_xd0 = *(double *)(unsigned)(*piVar5 + 0x1c);
            dVar30 = dVar31;
          }
          if (in_FPSCR_PR == '\0') {
            dVar30 = CONCAT44D(F32HI(in_dr0) * F32LO(in_dr0) +
                                      F32HI(dVar30),SUB84(dVar30,0));
          }
          if (in_FPSCR_SZ == '\0') {
            *(int *)(unsigned)((int)puVar3 + 0x14) = (int)(D2U(dVar30) >> 0x20);
          }
          else {
            *(double *)(unsigned)((int)puVar3 + 0x14) = dVar30;
          }
          if (in_FPSCR_SZ == '\0') {
            dVar30 = CONCAT44D(*(undefined4 *)(unsigned)(*piVar5 + 0x10),SUB84(dVar30,0));
          }
          else {
            dVar30 = *(double *)(unsigned)(*piVar5 + 0x10);
          }
          if (in_FPSCR_PR == '\0') {
            dVar30 = CONCAT44D(F32HI(dVar30) * fVar14,SUB84(dVar30,0));
          }
          else {
            dVar30 = dVar30 * in_dr4;
          }
          if (in_FPSCR_SZ == '\0') {
            *(int *)(unsigned)(puVar3 + 3) = (int)(D2U(dVar30) >> 0x20);
          }
          else {
            puVar3[3] = dVar30;
          }
        }
        iVar8 = iVar8 + 1;
      }
      iVar1 = iVar4;
      iVar4 = iVar4 + 1;
    }
    if ((*(undefined4 *)(unsigned)(unsigned)0x8c277acc) != 0) {
      piVar7 = (int *)(unsigned)((int)puVar9 + -0xc);
      if (in_FPSCR_SZ == '\0') {
        uVar18 = CONCAT44(*(undefined4 *)(unsigned)(*piVar7 + 0x14),fVar12);
        lVar11 = (longlong)in_dr4 << 0x20;
      }
      else {
        uVar18 = *(ulonglong *)(unsigned)(*piVar7 + 0x14);
        in_xd2 = in_dr8;
        lVar11 = in_xd4;
      }
      if (in_FPSCR_PR == '\0') {
        uVar18 = (ulonglong)
                 (uint)(F32HI(lVar11) * (float)(uVar18 >> 0x20) + (float)uVar18
                       );
      }
      if (in_FPSCR_SZ == '\0') {
        *(int *)(unsigned)((int)puVar9 + -0x50) = (int)uVar18;
        lVar11 = (ulonglong)uVar22 << 0x20;
      }
      else {
        *(double *)(unsigned)((int)puVar9 + -0x50) = in_xd2;
        lVar11 = in_dr6;
      }
      if (in_FPSCR_SZ == '\0') {
        uVar18 = CONCAT44(*(undefined4 *)(unsigned)(*piVar7 + 0x18),uVar21);
      }
      else {
        uVar18 = *(ulonglong *)(unsigned)(*piVar7 + 0x18);
        in_xd2 = in_xd8;
      }
      if (in_FPSCR_PR == '\0') {
        uVar18 = (ulonglong)
                 (uint)(F32HI(lVar11) * (float)(uVar18 >> 0x20) + (float)uVar18
                       );
      }
      if (in_FPSCR_SZ == '\0') {
        *(int *)(unsigned)((int)puVar9 + -0x4c) = (int)uVar18;
        dVar30 = (double)(in_dr6 << 0x20);
      }
      else {
        *(double *)(unsigned)((int)puVar9 + -0x4c) = in_xd2;
        dVar30 = in_xd6;
      }
      if (in_FPSCR_SZ == '\0') {
        dVar32 = CONCAT44D(*(undefined4 *)(unsigned)(*piVar7 + 0x1c),fVar13);
      }
      else {
        dVar32 = *(double *)(unsigned)(*piVar7 + 0x1c);
        in_xd2 = dVar31;
      }
      if (in_FPSCR_PR == '\0') {
        fVar20 = F32HI(dVar32);
        dVar32 = CONCAT44D(fVar20,F32HI(dVar30) * fVar20 +
                                         SUB84(dVar32,0));
      }
      if (in_FPSCR_SZ == '\0') {
        *(int *)(unsigned)((int)puVar9 + -0x48) = SUB84(dVar32,0);
      }
      else {
        *(double *)(unsigned)((int)puVar9 + -0x48) = in_xd2;
      }
      if (in_FPSCR_SZ == '\0') {
        dVar32 = CONCAT44D((int)(D2U(dVar32) >> 0x20),*(undefined4 *)(unsigned)(*piVar7 + 0x10));
      }
      else {
        in_xd2 = *(double *)(unsigned)(*piVar7 + 0x10);
      }
      if (in_FPSCR_PR == '\0') {
        dVar32 = CONCAT44D((int)(D2U(dVar32) >> 0x20),F32LO(dVar32) * fVar14);
      }
      else {
        dVar32 = dVar32 * in_dr4;
      }
      if (in_FPSCR_SZ == '\0') {
        *(int *)(unsigned)((int)puVar9 + -0x44) = SUB84(dVar32,0);
      }
      else {
        *(double *)(unsigned)((int)puVar9 + -0x44) = in_xd2;
      }
      if (iVar8 != 3) {
        piVar7 = (int *)(unsigned)((int)puVar9 + -0xc);
        if (in_FPSCR_SZ == '\0') {
          in_xd4 = (longlong)in_dr4 << 0x20;
          dVar32 = CONCAT44D((int)(D2U(dVar32) >> 0x20),*(undefined4 *)(unsigned)(*piVar7 + 0x14)
                                   );
        }
        else {
          in_xd2 = *(double *)(unsigned)(*piVar7 + 0x14);
        }
        if (in_FPSCR_PR == '\0') {
          in_dr8 = CONCAT44D(F32HI(in_xd4) * F32LO(dVar32) + fVar12,
                                    uVar21);
        }
        if (in_FPSCR_SZ == '\0') {
          *(int *)(unsigned)((int)puVar9 + -0x34) = (int)((ulonglong)in_dr8 >> 0x20);
          lVar11 = (ulonglong)uVar22 << 0x20;
        }
        else {
          *(double *)(unsigned)((int)puVar9 + -0x34) = in_dr8;
          lVar11 = in_dr6;
        }
        if (in_FPSCR_SZ == '\0') {
          dVar32 = CONCAT44D((int)(D2U(dVar32) >> 0x20),*(undefined4 *)(unsigned)(*piVar7 + 0x18)
                                   );
        }
        else {
          in_xd2 = *(double *)(unsigned)(*piVar7 + 0x18);
        }
        if (in_FPSCR_PR == '\0') {
          in_dr8 = (double)(ulonglong)
                           (uint)(F32HI(lVar11) * F32LO(dVar32) +
                                 SUB84(in_dr8,0));
        }
        if (in_FPSCR_SZ == '\0') {
          in_xd6 = (double)(in_dr6 << 0x20);
          *(int *)(unsigned)((int)puVar9 + -0x30) = SUB84(in_dr8,0);
        }
        else {
          *(double *)(unsigned)((int)puVar9 + -0x30) = in_xd8;
        }
        if (in_FPSCR_SZ == '\0') {
          dVar32 = CONCAT44D((int)(D2U(dVar32) >> 0x20),*(undefined4 *)(unsigned)(*piVar7 + 0x1c)
                                   );
        }
        else {
          in_xd2 = *(double *)(unsigned)(*piVar7 + 0x1c);
        }
        if (in_FPSCR_PR == '\0') {
          dVar31 = CONCAT44D(F32HI(in_xd6) * F32LO(dVar32) + fVar13,
                                    SUB84(dVar31,0));
        }
        if (in_FPSCR_SZ == '\0') {
          *(int *)(unsigned)((int)puVar9 + -0x2c) = (int)(D2U(dVar31) >> 0x20);
        }
        else {
          *(double *)(unsigned)((int)puVar9 + -0x2c) = dVar31;
        }
        if (in_FPSCR_SZ == '\0') {
          dVar32 = CONCAT44D((int)(D2U(dVar32) >> 0x20),*(undefined4 *)(unsigned)(*piVar7 + 0x10)
                                   );
        }
        else {
          in_xd2 = *(double *)(unsigned)(*piVar7 + 0x10);
        }
        if (in_FPSCR_PR == '\0') {
          fVar14 = F32LO(dVar32) * fVar14;
        }
        else {
          fVar14 = SUB84(dVar32 * in_dr4,0);
        }
        if (in_FPSCR_SZ == '\0') {
          *(float *)(unsigned)((int)puVar9 + -0x28) = fVar14;
        }
        else {
          *(double *)(unsigned)((int)puVar9 + -0x28) = in_xd2;
        }
      }
    }
    if (in_FPSCR_SZ == '\0') {
      uVar26 = *(undefined4 *)(unsigned)((int)puVar9 + -0x94);
      uVar24 = *(undefined4 *)(unsigned)((int)puVar9 + -0x90);
      uVar28 = *(undefined4 *)(unsigned)((int)puVar9 + -0x8c);
      uVar21 = *(undefined4 *)(unsigned)((int)puVar9 + -0x88);
      uVar23 = *(undefined4 *)(unsigned)((int)puVar9 + -0x84);
      uVar19 = *(undefined4 *)(unsigned)((int)puVar9 + -0x7c);
      *(undefined4 *)(unsigned)((int)ar7 + 0x1c) = *(undefined4 *)(unsigned)((int)puVar9 + -0x80);
      *(undefined4 *)(unsigned)(ar7 + 3) = uVar23;
      *(undefined4 *)(unsigned)((int)ar7 + 0x14) = uVar21;
      *(undefined4 *)(unsigned)(ar7 + 2) = uVar19;
      *(undefined4 *)(unsigned)((int)ar7 + 0xc) = uVar28;
      *(undefined4 *)(unsigned)(ar7 + 1) = uVar24;
      puVar3 = (undefined8 *)(unsigned)((int)ar7 + 4);
      *(undefined4 *)(unsigned)puVar3 = uVar26;
    }
    else {
      uVar25 = *(undefined8 *)(unsigned)((int)puVar9 + -0x94);
      uVar36 = *(undefined8 *)(unsigned)((int)puVar9 + -0x8c);
      uVar27 = *(undefined8 *)(unsigned)((int)puVar9 + -0x84);
      uVar35 = *(undefined8 *)(unsigned)((int)puVar9 + -0x7c);
      uVar17 = *(undefined8 *)(unsigned)((int)puVar9 + -0x74);
      uVar16 = *(undefined8 *)(unsigned)((int)puVar9 + -100);
      ar7[3] = *(undefined8 *)(unsigned)((int)puVar9 + -0x6c);
      ar7[2] = uVar17;
      ar7[1] = uVar35;
      *ar7 = uVar16;
      ar7[-1] = uVar27;
      ar7[-2] = uVar36;
      puVar3 = ar7 + -3;
      *puVar3 = uVar25;
    }
    *(undefined4 *)(unsigned)((int)puVar3 + -4) = 0xe0000000;
    if (in_FPSCR_SZ == '\0') {
      uVar24 = *(undefined4 *)(unsigned)((int)puVar9 + -0x78);
      uVar26 = *(undefined4 *)(unsigned)((int)puVar9 + -0x74);
      uVar28 = *(undefined4 *)(unsigned)((int)puVar9 + -0x70);
      uVar21 = *(undefined4 *)(unsigned)((int)puVar9 + -0x6c);
      uVar23 = *(undefined4 *)(unsigned)((int)puVar9 + -0x68);
      uVar19 = *(undefined4 *)(unsigned)((int)puVar9 + -0x60);
      *(undefined4 *)(unsigned)(puVar3 + 7) = *(undefined4 *)(unsigned)((int)puVar9 + -100);
      *(undefined4 *)(unsigned)((int)puVar3 + 0x34) = uVar23;
      *(undefined4 *)(unsigned)(puVar3 + 6) = uVar21;
      *(undefined4 *)(unsigned)((int)puVar3 + 0x2c) = uVar19;
      *(undefined4 *)(unsigned)(puVar3 + 5) = uVar28;
      *(undefined4 *)(unsigned)((int)puVar3 + 0x24) = uVar26;
      puVar3 = puVar3 + 4;
      *(undefined4 *)(unsigned)puVar3 = uVar24;
    }
    else {
      uVar36 = *(undefined8 *)(unsigned)((int)puVar9 + -0x78);
      uVar25 = *(undefined8 *)(unsigned)((int)puVar9 + -0x70);
      uVar27 = *(undefined8 *)(unsigned)((int)puVar9 + -0x68);
      uVar35 = *(undefined8 *)(unsigned)((int)puVar9 + -0x60);
      uVar17 = *(undefined8 *)(unsigned)((int)puVar9 + -0x58);
      uVar16 = *(undefined8 *)(unsigned)((int)puVar9 + -0x48);
      *(undefined8 *)(unsigned)((int)puVar3 + 0x34) = *(undefined8 *)(unsigned)((int)puVar9 + -0x50);
      *(undefined8 *)(unsigned)((int)puVar3 + 0x2c) = uVar17;
      *(undefined8 *)(unsigned)((int)puVar3 + 0x24) = uVar35;
      *(undefined8 *)(unsigned)((int)puVar3 + 0x1c) = uVar16;
      *(undefined8 *)(unsigned)((int)puVar3 + 0x14) = uVar27;
      *(undefined8 *)(unsigned)((int)puVar3 + 0xc) = uVar25;
      puVar3 = (undefined8 *)(unsigned)((int)puVar3 + 4);
      *puVar3 = uVar36;
    }
    *(undefined4 *)(unsigned)((int)puVar3 + -4) = 0xe0000000;
    if (iVar8 != 3) {
      if (in_FPSCR_SZ == '\0') {
        uVar28 = *(undefined4 *)(unsigned)((int)puVar9 + -0x40);
        uVar26 = *(undefined4 *)(unsigned)((int)puVar9 + -0x3c);
        uVar24 = *(undefined4 *)(unsigned)((int)puVar9 + -0x38);
        uVar21 = *(undefined4 *)(unsigned)((int)puVar9 + -0x34);
        uVar23 = *(undefined4 *)(unsigned)((int)puVar9 + -0x30);
        uVar19 = *(undefined4 *)(unsigned)((int)puVar9 + -0x28);
        *(undefined4 *)(unsigned)(puVar3 + 7) = *(undefined4 *)(unsigned)((int)puVar9 + -0x2c);
        *(undefined4 *)(unsigned)((int)puVar3 + 0x34) = uVar23;
        *(undefined4 *)(unsigned)(puVar3 + 6) = uVar21;
        *(undefined4 *)(unsigned)((int)puVar3 + 0x2c) = uVar19;
        *(undefined4 *)(unsigned)(puVar3 + 5) = uVar24;
        *(undefined4 *)(unsigned)((int)puVar3 + 0x24) = uVar26;
        puVar3 = puVar3 + 4;
        *(undefined4 *)(unsigned)puVar3 = uVar28;
      }
      else {
        uVar27 = *(undefined8 *)(unsigned)((int)puVar9 + -0x40);
        uVar25 = *(undefined8 *)(unsigned)((int)puVar9 + -0x38);
        uVar36 = *(undefined8 *)(unsigned)((int)puVar9 + -0x30);
        uVar35 = *(undefined8 *)(unsigned)((int)puVar9 + -0x28);
        uVar17 = *(undefined8 *)(unsigned)((int)puVar9 + -0x20);
        uVar16 = *(undefined8 *)(unsigned)((int)puVar9 + -0x10);
        *(undefined8 *)(unsigned)((int)puVar3 + 0x34) = *(undefined8 *)(unsigned)((int)puVar9 + -0x18);
        *(undefined8 *)(unsigned)((int)puVar3 + 0x2c) = uVar17;
        *(undefined8 *)(unsigned)((int)puVar3 + 0x24) = uVar35;
        *(undefined8 *)(unsigned)((int)puVar3 + 0x1c) = uVar16;
        *(undefined8 *)(unsigned)((int)puVar3 + 0x14) = uVar36;
        *(undefined8 *)(unsigned)((int)puVar3 + 0xc) = uVar25;
        puVar3 = (undefined8 *)(unsigned)((int)puVar3 + 4);
        *puVar3 = uVar27;
      }
      *(undefined4 *)(unsigned)((int)puVar3 + -4) = 0xe0000000;
    }
    if (in_FPSCR_SZ == '\0') {
      uVar28 = *(undefined4 *)(unsigned)((int)puVar9 + -0x5c);
      uVar24 = *(undefined4 *)(unsigned)((int)puVar9 + -0x58);
      uVar26 = *(undefined4 *)(unsigned)((int)puVar9 + -0x54);
      uVar21 = *(undefined4 *)(unsigned)((int)puVar9 + -0x50);
      uVar23 = *(undefined4 *)(unsigned)((int)puVar9 + -0x4c);
      uVar19 = *(undefined4 *)(unsigned)((int)puVar9 + -0x44);
      *(undefined4 *)(unsigned)(puVar3 + 7) = *(undefined4 *)(unsigned)((int)puVar9 + -0x48);
      *(undefined4 *)(unsigned)((int)puVar3 + 0x34) = uVar23;
      *(undefined4 *)(unsigned)(puVar3 + 6) = uVar21;
      *(undefined4 *)(unsigned)((int)puVar3 + 0x2c) = uVar19;
      *(undefined4 *)(unsigned)(puVar3 + 5) = uVar26;
      *(undefined4 *)(unsigned)((int)puVar3 + 0x24) = uVar24;
      puVar3 = puVar3 + 4;
      *(undefined4 *)(unsigned)puVar3 = uVar28;
    }
    else {
      uVar27 = *(undefined8 *)(unsigned)((int)puVar9 + -0x5c);
      uVar36 = *(undefined8 *)(unsigned)((int)puVar9 + -0x54);
      uVar25 = *(undefined8 *)(unsigned)((int)puVar9 + -0x4c);
      uVar35 = *(undefined8 *)(unsigned)((int)puVar9 + -0x44);
      uVar17 = *(undefined8 *)(unsigned)((int)puVar9 + -0x3c);
      uVar16 = *(undefined8 *)(unsigned)((int)puVar9 + -0x2c);
      *(undefined8 *)(unsigned)((int)puVar3 + 0x34) = *(undefined8 *)(unsigned)((int)puVar9 + -0x34);
      *(undefined8 *)(unsigned)((int)puVar3 + 0x2c) = uVar17;
      *(undefined8 *)(unsigned)((int)puVar3 + 0x24) = uVar35;
      *(undefined8 *)(unsigned)((int)puVar3 + 0x1c) = uVar16;
      *(undefined8 *)(unsigned)((int)puVar3 + 0x14) = uVar25;
      *(undefined8 *)(unsigned)((int)puVar3 + 0xc) = uVar36;
      puVar3 = (undefined8 *)(unsigned)((int)puVar3 + 4);
      *puVar3 = uVar27;
    }
    *(undefined4 *)(unsigned)((int)puVar3 + -4) = 0xf0000000;
    ar7 = (undefined8 *)(unsigned)((int)puVar3 + 0x1c);
    (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) + iVar8;
  }
  return ar7;
}

__asm__(".globl _FUN_8c214554\n.set _FUN_8c214554, _FUN_8c214554_def\n");
