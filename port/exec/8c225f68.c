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
undefined8 * FUN_8c225f68_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined8 *ar7)

{
  ring[rp++ & 255] = "FUN_8c225f68";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 292; for (int i_ = 0; i_ < 292; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  double *pdVar3;
  undefined8 *puVar4;
  int *piVar5;
  int iVar6;
  undefined8 *puVar7;
  int *piVar8;
  double *pdVar9;
  undefined4 *puVar10;
  int iVar11;
  undefined8 *puVar12;
  double in_dr0 = 0;
  double dVar13;
  double dVar14;
  float fVar15;
  double in_dr2 = 0;
  undefined8 uVar16;
  undefined8 uVar17;
  double dVar18;
  double dVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  float fVar22;
  double in_dr4 = 0;
  float fVar23;
  undefined4 uVar24;
  double in_dr6 = 0;
  float fVar25;
  float fVar26;
  undefined4 uVar27;
  double in_dr8 = 0;
  double dVar28;
  undefined4 uVar29;
  double dVar30;
  undefined4 uVar31;
  float fVar32;
  double in_dr12 = 0;
  double dVar33;
  undefined4 in_fr15 = 0;
  double dVar34;
  double in_xd0 = 0;
  double in_xd2 = 0;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  double in_xd8 = 0;
  undefined8 uVar38;
  double in_xd12 = 0;
  double in_xd14 = 0;
  char in_FPSCR_PR = 0;
  char in_FPSCR_SZ = 0;
  
  if (in_FPSCR_SZ == '\0') {
    puVar12 = ((undefined8 *)(fr0_ - 0x2c));
    ((undefined8 *)(fr0_ - 0x2c))[0] = CONCAT44(SUB84(in_dr12,0),(int)((ulonglong)in_dr12 >> 0x20));
  }
  else {
    puVar12 = (undefined8 *)(unsigned)((undefined1 *)(fr0_ - 0x3c));
  }
  if (((*(undefined4 *)(unsigned)(unsigned)0x8c4aa4f0) & 0x10000) == 0) {
    if (((*(undefined4 *)(unsigned)(unsigned)0x8c4aa4f0) & 0x20000) == 0) {
      if (in_FPSCR_SZ == '\0') {
        dVar28 = 3.0517585287270776e-05;
      }
      else {
        dVar28 = -4.0993800778166205e-250;
        in_xd8 = dVar28;
      }
    }
    else {
      if (in_FPSCR_SZ == '\0') {
        in_dr2 = CONCAT44D((int)((ulonglong)in_dr2 >> 0x20),0x3f000000);
        in_dr8 = CONCAT44D((int)((ulonglong)in_dr8 >> 0x20),(*(undefined4 *)(unsigned)(unsigned)0x8c277af8));
      }
      else {
        in_xd2 = -4.0993800778166205e-250;
        in_xd8 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c277afc),(*(undefined4 *)(unsigned)(unsigned)0x8c277af8));
      }
      if (in_FPSCR_PR == '\0') {
        fVar26 = F32LO(in_dr8) + F32LO(in_dr2);
      }
      else {
        fVar26 = SUB84(in_dr8 + in_dr2,0);
      }
      if (in_FPSCR_SZ == '\0') {
        dVar28 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c277afc),fVar26);
      }
      else {
        dVar28 = CONCAT44D((*(uint *)(unsigned)0x8c277b00),(*(undefined4 *)(unsigned)(unsigned)0x8c277afc));
      }
      if (in_FPSCR_PR == '\0') {
        dVar28 = CONCAT44D(F32HI(dVar28) + F32LO(in_dr2),
                                  SUB84(dVar28,0));
      }
      else {
        dVar28 = dVar28 + in_dr2;
      }
    }
    if (in_FPSCR_SZ == '\0') {
      dVar19 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4aa4e0),(*(undefined4 *)(unsigned)(unsigned)0x8c4aa4dc));
      fVar26 = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa4a8);
    }
    else {
      in_xd2 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4aa4e0),(*(undefined4 *)(unsigned)(unsigned)0x8c4aa4dc));
      dVar19 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4aa4e4),(*(undefined4 *)(unsigned)(unsigned)0x8c4aa4e0));
      fVar26 = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa4ac);
    }
    if (in_FPSCR_PR == '\0') {
      dVar30 = CONCAT44D(fVar26 * F32LO(dVar19),(*(undefined4 *)(unsigned)(unsigned)0x8c4aa4a8));
    }
    else {
      dVar30 = CONCAT44D(fVar26,(*(undefined4 *)(unsigned)(unsigned)0x8c4aa4a8)) * dVar19;
    }
    puVar10 = (undefined4 *)(unsigned)((int)puVar12 + -0xc);
    uVar21 = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa4b4);
    if (in_FPSCR_SZ != '\0') {
      in_xd14 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4aa4b8),(*(undefined4 *)(unsigned)(unsigned)0x8c4aa4b4));
      uVar21 = in_fr15;
    }
    if (in_FPSCR_PR == '\0') {
      dVar30 = CONCAT44D((int)(D2U(dVar30) >> 0x20),
                                F32LO(dVar30) * F32HI(dVar19));
    }
    else {
      dVar30 = dVar30 * dVar19;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar34 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4aa4b8),uVar21);
    }
    else {
      dVar34 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4aa4bc),(*(undefined4 *)(unsigned)(unsigned)0x8c4aa4b8));
    }
    *puVar10 = ar4;
    *(undefined4 *)(unsigned)((int)puVar12 + -8) = ar5;
    *(undefined4 *)(unsigned)((int)puVar12 + -4) = ar6;
    iVar11 = 0;
    iVar1 = 0;
    iVar6 = 2;
    while( true ) {
      iVar2 = iVar1;
      fVar22 = F32LO(in_dr4);
      fVar23 = F32HI(in_dr4);
      fVar26 = F32LO(in_dr6);
      fVar25 = F32HI(in_dr6);
      if (2 < iVar2) break;
      piVar8 = puVar10 + iVar6;
      piVar5 = puVar10 + iVar2;
      if (in_FPSCR_SZ == '\0') {
        uVar16 = CONCAT44(*(undefined4 *)(unsigned)*piVar8,0x3f800000);
      }
      else {
        uVar16 = *(undefined8 *)(unsigned)*piVar8;
      }
      if (in_FPSCR_SZ == '\0') {
        uVar17 = CONCAT44(*(undefined4 *)(unsigned)*piVar5,(float)uVar16);
      }
      else {
        uVar17 = *(undefined8 *)(unsigned)*piVar5;
      }
      fVar15 = F32HI(uVar17);
      uVar21 = (undefined4)(D2U(dVar28) >> 0x20);
      if (((in_FPSCR_PR == '\0' && (float)uVar16 < F32HI(uVar16)) ^ 1) !=
          -((in_FPSCR_PR == '\0' && (float)uVar17 < fVar15) - 1)) {
        pdVar9 = (double *)(unsigned)*piVar8;
        pdVar3 = (double *)(unsigned)*piVar5;
        if (in_FPSCR_SZ == '\0') {
          fVar32 = *(float *)(unsigned)pdVar9;
          in_dr12 = CONCAT44D((int)((ulonglong)in_dr12 >> 0x20),fVar32);
          in_dr0 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),*(undefined4 *)(unsigned)pdVar3);
          uVar17 = CONCAT44(fVar15,fVar32);
        }
        else {
          in_xd2 = *pdVar9;
          in_xd0 = *pdVar3;
          fVar32 = F32LO(in_dr12);
          in_xd12 = in_xd2;
        }
        if (in_FPSCR_PR == '\0') {
          dVar19 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),F32LO(in_dr0) - fVar32);
        }
        else {
          dVar19 = in_dr0 - in_dr12;
        }
        dVar18 = CONCAT44D(0x3f800000,-(float)uVar17);
        if (in_FPSCR_PR == '\0') {
          dVar18 = CONCAT44D(0x3f800000,-(float)uVar17 + 1.0);
        }
        else {
          dVar18 = dVar18 + dVar18;
        }
        if (in_FPSCR_SZ == '\0') {
          dVar33 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar9 + 4),SUB84(dVar18,0));
        }
        else {
          dVar33 = pdVar9[4];
          in_xd12 = in_xd2;
        }
        if (in_FPSCR_PR == '\0') {
          dVar33 = CONCAT44D((int)(D2U(dVar33) >> 0x20),
                                    F32LO(dVar33) / F32LO(dVar19));
        }
        else {
          dVar33 = dVar33 / dVar19;
        }
        fVar15 = F32HI(dVar33);
        if (in_FPSCR_SZ == '\0') {
          dVar18 = CONCAT44D((int)(D2U(dVar18) >> 0x20),*(undefined4 *)(unsigned)(pdVar3 + 4));
          dVar19 = (double)(ulonglong)(uint)fVar15;
          dVar14 = in_xd0;
        }
        else {
          in_xd2 = pdVar3[4];
          dVar14 = dVar33;
        }
        if (in_FPSCR_PR == '\0') {
          dVar18 = CONCAT44D((int)(D2U(dVar18) >> 0x20),F32LO(dVar18) - fVar15);
        }
        else {
          dVar18 = dVar18 - dVar33;
        }
        dVar13 = in_xd12;
        if (in_FPSCR_SZ == '\0') {
          dVar13 = CONCAT44D(SUB84(dVar33,0),SUB84(dVar19,0));
        }
        fVar15 = F32LO(dVar18);
        if (in_FPSCR_PR == '\0') {
          dVar13 = (double)(ulonglong)
                           (uint)(F32HI(dVar13) * fVar15 + F32LO(dVar13));
        }
        if (in_FPSCR_SZ == '\0') {
          fVar15 = *(float *)(unsigned)((int)pdVar9 + 0x24);
          dVar18 = CONCAT44D((int)(D2U(dVar18) >> 0x20),fVar15);
          *(float *)(unsigned)((int)puVar12 + -0xd4) = fVar15;
          dVar19 = CONCAT44D(fVar15,*(undefined4 *)(unsigned)((int)pdVar3 + 0x24));
          in_xd0 = dVar14;
          dVar14 = CONCAT44D(SUB84(dVar13,0),SUB84(dVar33,0));
        }
        else {
          dVar19 = *(double *)(unsigned)((int)pdVar9 + 0x24);
          *(double *)(unsigned)((int)puVar12 + -0xd4) = dVar19;
          in_xd0 = *(double *)(unsigned)((int)pdVar3 + 0x24);
          in_xd2 = dVar19;
        }
        if (in_FPSCR_PR == '\0') {
          fVar32 = F32LO(dVar19) - F32HI(dVar19);
        }
        else {
          fVar32 = SUB84(dVar19 - dVar19,0);
        }
        uVar20 = SUB84(dVar14,0);
        dVar19 = in_xd12;
        if (in_FPSCR_SZ == '\0') {
          dVar19 = CONCAT44D(uVar20,fVar32);
        }
        if (in_FPSCR_PR == '\0') {
          dVar18 = CONCAT44D((int)(D2U(dVar18) >> 0x20),
                                    F32HI(dVar19) * F32LO(dVar19) + fVar15);
        }
        if (in_FPSCR_SZ == '\0') {
          *(int *)(unsigned)((int)puVar12 + -0xd0) = SUB84(dVar18,0);
          dVar14 = CONCAT44D((int)(D2U(dVar14) >> 0x20),SUB84(dVar19,0));
          dVar18 = CONCAT44D((int)(D2U(dVar18) >> 0x20),SUB84(dVar34,0));
        }
        else {
          *(double *)(unsigned)((int)puVar12 + -0xd0) = in_xd2;
          in_xd2 = in_xd14;
        }
        if (in_FPSCR_PR == '\0') {
          dVar18 = CONCAT44D((int)(D2U(dVar18) >> 0x20),
                                    F32HI(dVar14) *
                                    F32HI(dVar30) + F32LO(dVar18));
        }
        pdVar3 = (double *)(unsigned)((int)puVar12 + iVar11 * 0x30 + -0xcc);
        if (in_FPSCR_SZ == '\0') {
          *(int *)(unsigned)pdVar3 = SUB84(dVar18,0);
          uVar16 = CONCAT44(*(undefined4 *)(unsigned)((int)puVar12 + -0xd0),SUB84(dVar14,0));
          dVar18 = CONCAT44D((int)(D2U(dVar18) >> 0x20),
                                    (int)(D2U(dVar34) >> 0x20));
        }
        else {
          *pdVar3 = in_xd2;
          uVar16 = *(undefined8 *)(unsigned)((int)puVar12 + -0xd0);
          in_xd2 = dVar34;
        }
        if (in_FPSCR_PR == '\0') {
          dVar18 = CONCAT44D((int)(D2U(dVar18) >> 0x20),
                                    F32HI(uVar16) * F32LO(dVar30) +
                                    SUB84(dVar18,0));
        }
        if (in_FPSCR_SZ == '\0') {
          *(int *)(unsigned)((int)pdVar3 + 4) = SUB84(dVar18,0);
          *(int *)(unsigned)(pdVar3 + 1) = (int)(D2U(dVar18) >> 0x20);
          dVar19 = CONCAT44D(uVar20,(int)uVar16);
        }
        else {
          *(double *)(unsigned)((int)pdVar3 + 4) = in_xd2;
          pdVar3[1] = dVar18;
          dVar19 = in_xd12;
        }
        iVar1 = *piVar8;
        *(int *)(unsigned)((int)puVar12 + -0xd8) = iVar1;
        if (in_FPSCR_SZ == '\0') {
          dVar18 = CONCAT44D(*(undefined4 *)(unsigned)(iVar1 + 0x28),uVar20);
        }
        else {
          dVar18 = *(double *)(unsigned)(iVar1 + 0x28);
        }
        fVar15 = F32HI(dVar18);
        if (in_FPSCR_SZ == '\0') {
          dVar33 = CONCAT44D(fVar15,*(undefined4 *)(unsigned)(*piVar5 + 0x28));
        }
        else {
          in_xd2 = *(double *)(unsigned)(*piVar5 + 0x28);
          dVar33 = dVar18;
        }
        if (in_FPSCR_PR == '\0') {
          fVar15 = F32LO(dVar33) - fVar15;
          dVar33 = CONCAT44D(F32HI(dVar19) * fVar15 +
                                    F32HI(dVar33),fVar15);
        }
        else {
          dVar33 = dVar33 - dVar18;
        }
        if (in_FPSCR_SZ == '\0') {
          dVar33 = CONCAT44D((int)(D2U(dVar33) >> 0x20),SUB84(dVar28,0));
          uVar20 = SUB84(dVar19,0);
          fVar15 = 0.5;
        }
        else {
          uVar20 = 0x3f000000;
          fVar15 = -3.3989655e-25;
          in_xd2 = in_xd8;
        }
        if (in_FPSCR_PR == '\0') {
          dVar33 = (double)(ulonglong)
                           (uint)(fVar15 * F32HI(dVar33) + F32LO(dVar33));
        }
        if (in_FPSCR_SZ == '\0') {
          *(int *)(unsigned)((int)pdVar3 + 0xc) = SUB84(dVar33,0);
          dVar19 = CONCAT44D(SUB84(dVar18,0),uVar20);
        }
        else {
          *(double *)(unsigned)((int)pdVar3 + 0xc) = in_xd2;
          dVar19 = in_xd12;
        }
        iVar1 = *piVar8;
        *(int *)(unsigned)((int)puVar12 + -0xdc) = iVar1;
        if (in_FPSCR_SZ == '\0') {
          in_dr12 = CONCAT44D(*(undefined4 *)(unsigned)(iVar1 + 0x2c),SUB84(dVar18,0));
        }
        else {
          in_dr12 = *(double *)(unsigned)(iVar1 + 0x2c);
        }
        fVar15 = F32HI(in_dr12);
        if (in_FPSCR_SZ == '\0') {
          dVar18 = CONCAT44D(fVar15,*(undefined4 *)(unsigned)(*piVar5 + 0x2c));
        }
        else {
          in_xd2 = *(double *)(unsigned)(*piVar5 + 0x2c);
          dVar18 = in_dr12;
        }
        if (in_FPSCR_PR == '\0') {
          fVar15 = F32LO(dVar18) - fVar15;
          dVar18 = CONCAT44D(F32HI(dVar19) * fVar15 +
                                    F32HI(dVar18),fVar15);
        }
        else {
          dVar18 = dVar18 - in_dr12;
        }
        if (in_FPSCR_SZ == '\0') {
          dVar19 = CONCAT44D(0x3f000000,SUB84(dVar19,0));
          dVar18 = CONCAT44D((int)(D2U(dVar18) >> 0x20),uVar21);
        }
        else {
          dVar19 = -9.6078197322323e-199;
          in_xd2 = dVar28;
        }
        if (in_FPSCR_PR == '\0') {
          dVar18 = (double)(ulonglong)
                           (uint)(F32HI(dVar19) *
                                  F32HI(dVar18) + F32LO(dVar18));
        }
        if (in_FPSCR_SZ == '\0') {
          *(int *)(unsigned)(pdVar3 + 2) = SUB84(dVar18,0);
        }
        else {
          pdVar3[2] = in_xd2;
        }
        in_dr0 = dVar19;
        if ((*(undefined4 *)(unsigned)(unsigned)0x8c277acc) == 0) {
          piVar5 = puVar10 + iVar6;
          iVar1 = *piVar5;
          in_dr0 = in_xd12;
          if (in_FPSCR_SZ == '\0') {
            in_dr0 = CONCAT44D(SUB84(in_dr12,0),SUB84(dVar19,0));
          }
          piVar8 = puVar10 + iVar2;
          *(int *)(unsigned)((int)puVar12 + -0xe0) = iVar1;
          if (in_FPSCR_SZ == '\0') {
            dVar19 = CONCAT44D(*(undefined4 *)(unsigned)(iVar1 + 0x10),SUB84(in_dr12,0));
          }
          else {
            dVar19 = *(double *)(unsigned)(iVar1 + 0x10);
          }
          fVar15 = F32HI(dVar19);
          if (in_FPSCR_SZ == '\0') {
            dVar18 = CONCAT44D(fVar15,*(undefined4 *)(unsigned)(*piVar8 + 0x10));
          }
          else {
            in_xd2 = *(double *)(unsigned)(*piVar8 + 0x10);
            dVar18 = dVar19;
          }
          fVar32 = F32HI(in_dr0);
          if (in_FPSCR_PR == '\0') {
            fVar15 = F32LO(dVar18) - fVar15;
            dVar18 = CONCAT44D((fVar32 * fVar15 + F32HI(dVar18)) *
                                      fVar23,fVar15);
          }
          else {
            dVar18 = (dVar18 - dVar19) * in_dr4;
          }
          if (in_FPSCR_SZ == '\0') {
            *(int *)(unsigned)((int)pdVar3 + 0x14) = (int)(D2U(dVar18) >> 0x20);
          }
          else {
            *(double *)(unsigned)((int)pdVar3 + 0x14) = dVar18;
          }
          iVar1 = *piVar5;
          *(int *)(unsigned)((int)puVar12 + -0xe4) = iVar1;
          if (in_FPSCR_SZ == '\0') {
            dVar19 = CONCAT44D(*(undefined4 *)(unsigned)(iVar1 + 0x14),SUB84(dVar19,0));
          }
          else {
            dVar19 = *(double *)(unsigned)(iVar1 + 0x14);
          }
          fVar15 = F32HI(dVar19);
          if (in_FPSCR_SZ == '\0') {
            dVar18 = CONCAT44D(fVar15,*(undefined4 *)(unsigned)(*piVar8 + 0x14));
          }
          else {
            in_xd2 = *(double *)(unsigned)(*piVar8 + 0x14);
            dVar18 = dVar19;
          }
          if (in_FPSCR_PR == '\0') {
            fVar15 = F32LO(dVar18) - fVar15;
            dVar18 = CONCAT44D(fVar32 * fVar15 + F32HI(dVar18) + fVar22,
                                      fVar15);
          }
          else {
            dVar18 = (dVar18 - dVar19) + in_dr4;
          }
          if (in_FPSCR_SZ == '\0') {
            *(int *)(unsigned)(pdVar3 + 3) = (int)(D2U(dVar18) >> 0x20);
          }
          else {
            pdVar3[3] = dVar18;
          }
          iVar1 = *piVar5;
          *(int *)(unsigned)((int)puVar12 + -0xe8) = iVar1;
          if (in_FPSCR_SZ == '\0') {
            dVar19 = CONCAT44D(*(undefined4 *)(unsigned)(iVar1 + 0x18),SUB84(dVar19,0));
          }
          else {
            dVar19 = *(double *)(unsigned)(iVar1 + 0x18);
          }
          fVar15 = F32HI(dVar19);
          if (in_FPSCR_SZ == '\0') {
            dVar18 = CONCAT44D(fVar15,*(undefined4 *)(unsigned)(*piVar8 + 0x18));
          }
          else {
            in_xd2 = *(double *)(unsigned)(*piVar8 + 0x18);
            dVar18 = dVar19;
          }
          if (in_FPSCR_PR == '\0') {
            fVar15 = F32LO(dVar18) - fVar15;
            dVar18 = CONCAT44D(fVar32 * fVar15 + F32HI(dVar18) + fVar25,
                                      fVar15);
          }
          else {
            dVar18 = (dVar18 - dVar19) + in_dr6;
          }
          if (in_FPSCR_SZ == '\0') {
            *(int *)(unsigned)((int)pdVar3 + 0x1c) = (int)(D2U(dVar18) >> 0x20);
          }
          else {
            *(double *)(unsigned)((int)pdVar3 + 0x1c) = dVar18;
          }
          iVar1 = *piVar5;
          *(int *)(unsigned)((int)puVar12 + -0xec) = iVar1;
          if (in_FPSCR_SZ == '\0') {
            dVar19 = CONCAT44D(*(undefined4 *)(unsigned)(iVar1 + 0x1c),SUB84(dVar19,0));
          }
          else {
            dVar19 = *(double *)(unsigned)(iVar1 + 0x1c);
          }
          fVar15 = F32HI(dVar19);
          if (in_FPSCR_SZ == '\0') {
            dVar18 = CONCAT44D(fVar15,*(undefined4 *)(unsigned)(*piVar8 + 0x1c));
          }
          else {
            in_xd2 = *(double *)(unsigned)(*piVar8 + 0x1c);
            dVar18 = dVar19;
          }
          if (in_FPSCR_PR == '\0') {
            fVar15 = F32LO(dVar18) - fVar15;
            dVar18 = CONCAT44D(fVar32 * fVar15 + F32HI(dVar18) + fVar26,
                                      fVar15);
          }
          else {
            dVar18 = (dVar18 - dVar19) + in_dr6;
          }
          if (in_FPSCR_SZ == '\0') {
            *(int *)(unsigned)(pdVar3 + 4) = (int)(D2U(dVar18) >> 0x20);
          }
          else {
            pdVar3[4] = dVar18;
          }
          iVar1 = *piVar5;
          *(int *)(unsigned)((int)puVar12 + -0xf0) = iVar1;
          if (in_FPSCR_SZ == '\0') {
            dVar19 = CONCAT44D(*(undefined4 *)(unsigned)(iVar1 + 0x34),SUB84(dVar19,0));
          }
          else {
            dVar19 = *(double *)(unsigned)(iVar1 + 0x34);
          }
          fVar15 = F32HI(dVar19);
          if (in_FPSCR_SZ == '\0') {
            dVar18 = CONCAT44D(fVar15,*(undefined4 *)(unsigned)(*piVar8 + 0x34));
          }
          else {
            in_xd2 = *(double *)(unsigned)(*piVar8 + 0x34);
            dVar18 = dVar19;
          }
          if (in_FPSCR_PR == '\0') {
            fVar15 = F32LO(dVar18) - fVar15;
            dVar18 = CONCAT44D(fVar32 * fVar15 + F32HI(dVar18),fVar15);
          }
          else {
            dVar18 = dVar18 - dVar19;
          }
          if (in_FPSCR_SZ == '\0') {
            *(int *)(unsigned)((int)pdVar3 + 0x24) = (int)(D2U(dVar18) >> 0x20);
          }
          else {
            *(double *)(unsigned)((int)pdVar3 + 0x24) = dVar18;
          }
          iVar1 = *piVar5;
          *(int *)(unsigned)((int)puVar12 + -0xf4) = iVar1;
          if (in_FPSCR_SZ == '\0') {
            dVar19 = CONCAT44D(*(undefined4 *)(unsigned)(iVar1 + 0x38),SUB84(dVar19,0));
          }
          else {
            dVar19 = *(double *)(unsigned)(iVar1 + 0x38);
          }
          fVar15 = F32HI(dVar19);
          if (in_FPSCR_SZ == '\0') {
            dVar18 = CONCAT44D(fVar15,*(undefined4 *)(unsigned)(*piVar8 + 0x38));
          }
          else {
            in_xd2 = *(double *)(unsigned)(*piVar8 + 0x38);
            dVar18 = dVar19;
          }
          if (in_FPSCR_PR == '\0') {
            fVar15 = F32LO(dVar18) - fVar15;
            dVar18 = CONCAT44D(fVar32 * fVar15 + F32HI(dVar18),fVar15);
          }
          else {
            dVar18 = dVar18 - dVar19;
          }
          if (in_FPSCR_SZ == '\0') {
            *(int *)(unsigned)(pdVar3 + 5) = (int)(D2U(dVar18) >> 0x20);
          }
          else {
            pdVar3[5] = dVar18;
          }
          iVar1 = *piVar5;
          *(int *)(unsigned)((int)puVar12 + -0xf8) = iVar1;
          if (in_FPSCR_SZ == '\0') {
            fVar15 = *(float *)(unsigned)(iVar1 + 0x3c);
            dVar18 = CONCAT44D(fVar15,*(undefined4 *)(unsigned)(*piVar8 + 0x3c));
            in_dr12 = CONCAT44D(fVar15,SUB84(dVar19,0));
          }
          else {
            dVar18 = *(double *)(unsigned)(iVar1 + 0x3c);
            in_xd2 = *(double *)(unsigned)(*piVar8 + 0x3c);
            fVar15 = F32HI(dVar18);
            in_dr12 = dVar18;
          }
          if (in_FPSCR_PR == '\0') {
            fVar15 = F32LO(dVar18) - fVar15;
            dVar18 = CONCAT44D(fVar32 * fVar15 + F32HI(dVar18),fVar15);
          }
          else {
            dVar18 = dVar18 - in_dr12;
          }
          if (in_FPSCR_SZ == '\0') {
            *(int *)(unsigned)((int)pdVar3 + 0x2c) = (int)(D2U(dVar18) >> 0x20);
          }
          else {
            *(double *)(unsigned)((int)pdVar3 + 0x2c) = dVar18;
          }
        }
        iVar11 = iVar11 + 1;
      }
      piVar5 = puVar10 + iVar2;
      if (in_FPSCR_SZ == '\0') {
        dVar19 = CONCAT44D(*(undefined4 *)(unsigned)*piVar5,0x3f800000);
      }
      else {
        dVar19 = *(double *)(unsigned)*piVar5;
      }
      if (in_FPSCR_PR == '\0' && SUB84(dVar19,0) < F32HI(dVar19)) {
        if (in_FPSCR_SZ == '\0') {
          uVar16 = CONCAT44(*(undefined4 *)(unsigned)(*piVar5 + 4),SUB84(dVar19,0));
        }
        else {
          uVar16 = *(undefined8 *)(unsigned)(*piVar5 + 4);
        }
        puVar4 = (undefined8 *)(unsigned)((int)puVar12 + iVar11 * 0x30 + -0xcc);
        if (in_FPSCR_SZ == '\0') {
          *(int *)(unsigned)puVar4 = (int)((ulonglong)uVar16 >> 0x20);
        }
        else {
          *puVar4 = uVar16;
        }
        if (in_FPSCR_SZ == '\0') {
          uVar20 = *(undefined4 *)(unsigned)(*piVar5 + 8);
          uVar16 = CONCAT44(uVar20,(int)uVar16);
          *(undefined4 *)(unsigned)((int)puVar4 + 4) = uVar20;
        }
        else {
          uVar16 = *(undefined8 *)(unsigned)(*piVar5 + 8);
          *(undefined8 *)(unsigned)((int)puVar4 + 4) = uVar16;
        }
        if (in_FPSCR_SZ == '\0') {
          uVar20 = *(undefined4 *)(unsigned)(*piVar5 + 0xc);
          uVar16 = CONCAT44(uVar20,(int)uVar16);
          *(undefined4 *)(unsigned)(puVar4 + 1) = uVar20;
        }
        else {
          uVar16 = *(undefined8 *)(unsigned)(*piVar5 + 0xc);
          puVar4[1] = uVar16;
        }
        if (in_FPSCR_SZ == '\0') {
          in_dr0 = CONCAT44D(0x3f000000,*(undefined4 *)(unsigned)(*piVar5 + 0x28));
          dVar19 = CONCAT44D(SUB84(dVar28,0),(int)uVar16);
        }
        else {
          in_dr0 = -9.6078197322323e-199;
          in_xd0 = *(double *)(unsigned)(*piVar5 + 0x28);
          dVar19 = in_xd8;
        }
        fVar15 = F32HI(in_dr0);
        if (in_FPSCR_PR == '\0') {
          dVar19 = CONCAT44D(fVar15 * F32LO(in_dr0) + F32HI(dVar19),
                                    SUB84(dVar19,0));
        }
        if (in_FPSCR_SZ == '\0') {
          *(int *)(unsigned)((int)puVar4 + 0xc) = (int)(D2U(dVar19) >> 0x20);
        }
        else {
          *(double *)(unsigned)((int)puVar4 + 0xc) = dVar19;
        }
        if (in_FPSCR_SZ == '\0') {
          in_dr0 = CONCAT44D(fVar15,*(undefined4 *)(unsigned)(*piVar5 + 0x2c));
          dVar19 = CONCAT44D(uVar21,SUB84(dVar19,0));
        }
        else {
          in_xd0 = *(double *)(unsigned)(*piVar5 + 0x2c);
          dVar19 = dVar28;
        }
        if (in_FPSCR_PR == '\0') {
          dVar19 = CONCAT44D(F32HI(in_dr0) * F32LO(in_dr0) +
                                    F32HI(dVar19),SUB84(dVar19,0));
        }
        if (in_FPSCR_SZ == '\0') {
          *(int *)(unsigned)(puVar4 + 2) = (int)(D2U(dVar19) >> 0x20);
        }
        else {
          puVar4[2] = dVar19;
        }
        if ((*(undefined4 *)(unsigned)(unsigned)0x8c277acc) == 0) {
          piVar5 = puVar10 + iVar2;
          if (in_FPSCR_SZ == '\0') {
            dVar19 = CONCAT44D(*(undefined4 *)(unsigned)(*piVar5 + 0x10),SUB84(dVar19,0));
          }
          else {
            dVar19 = *(double *)(unsigned)(*piVar5 + 0x10);
          }
          if (in_FPSCR_PR == '\0') {
            dVar19 = CONCAT44D(F32HI(dVar19) * fVar23,SUB84(dVar19,0));
          }
          else {
            dVar19 = dVar19 * in_dr4;
          }
          if (in_FPSCR_SZ == '\0') {
            *(int *)(unsigned)((int)puVar4 + 0x14) = (int)(D2U(dVar19) >> 0x20);
          }
          else {
            *(double *)(unsigned)((int)puVar4 + 0x14) = dVar19;
          }
          if (in_FPSCR_SZ == '\0') {
            dVar19 = CONCAT44D(*(undefined4 *)(unsigned)(*piVar5 + 0x14),SUB84(dVar19,0));
          }
          else {
            dVar19 = *(double *)(unsigned)(*piVar5 + 0x14);
          }
          if (in_FPSCR_PR == '\0') {
            dVar19 = CONCAT44D(F32HI(dVar19) + fVar22,SUB84(dVar19,0));
          }
          else {
            dVar19 = dVar19 + in_dr4;
          }
          if (in_FPSCR_SZ == '\0') {
            *(int *)(unsigned)(puVar4 + 3) = (int)(D2U(dVar19) >> 0x20);
          }
          else {
            puVar4[3] = dVar19;
          }
          if (in_FPSCR_SZ == '\0') {
            dVar19 = CONCAT44D(*(undefined4 *)(unsigned)(*piVar5 + 0x18),SUB84(dVar19,0));
          }
          else {
            dVar19 = *(double *)(unsigned)(*piVar5 + 0x18);
          }
          if (in_FPSCR_PR == '\0') {
            dVar19 = CONCAT44D(F32HI(dVar19) + fVar25,SUB84(dVar19,0));
          }
          else {
            dVar19 = dVar19 + in_dr6;
          }
          if (in_FPSCR_SZ == '\0') {
            *(int *)(unsigned)((int)puVar4 + 0x1c) = (int)(D2U(dVar19) >> 0x20);
          }
          else {
            *(double *)(unsigned)((int)puVar4 + 0x1c) = dVar19;
          }
          if (in_FPSCR_SZ == '\0') {
            dVar19 = CONCAT44D(*(undefined4 *)(unsigned)(*piVar5 + 0x1c),SUB84(dVar19,0));
          }
          else {
            dVar19 = *(double *)(unsigned)(*piVar5 + 0x1c);
          }
          if (in_FPSCR_PR == '\0') {
            dVar19 = CONCAT44D(F32HI(dVar19) + fVar26,SUB84(dVar19,0));
          }
          else {
            dVar19 = dVar19 + in_dr6;
          }
          if (in_FPSCR_SZ == '\0') {
            *(int *)(unsigned)(puVar4 + 4) = (int)(D2U(dVar19) >> 0x20);
          }
          else {
            puVar4[4] = dVar19;
          }
          if (in_FPSCR_SZ == '\0') {
            uVar21 = *(undefined4 *)(unsigned)(*piVar5 + 0x34);
            uVar16 = CONCAT44(uVar21,SUB84(dVar19,0));
            *(undefined4 *)(unsigned)((int)puVar4 + 0x24) = uVar21;
          }
          else {
            uVar16 = *(undefined8 *)(unsigned)(*piVar5 + 0x34);
            *(undefined8 *)(unsigned)((int)puVar4 + 0x24) = uVar16;
          }
          if (in_FPSCR_SZ == '\0') {
            uVar21 = *(undefined4 *)(unsigned)(*piVar5 + 0x38);
            uVar16 = CONCAT44(uVar21,(int)uVar16);
            *(undefined4 *)(unsigned)(puVar4 + 5) = uVar21;
          }
          else {
            uVar16 = *(undefined8 *)(unsigned)(*piVar5 + 0x38);
            puVar4[5] = uVar16;
          }
          if (in_FPSCR_SZ == '\0') {
            uVar21 = *(undefined4 *)(unsigned)(*piVar5 + 0x3c);
            dVar19 = CONCAT44D(uVar21,(int)uVar16);
            *(undefined4 *)(unsigned)((int)puVar4 + 0x2c) = uVar21;
          }
          else {
            dVar19 = *(double *)(unsigned)(*piVar5 + 0x3c);
            *(double *)(unsigned)((int)puVar4 + 0x2c) = dVar19;
          }
        }
        iVar11 = iVar11 + 1;
      }
      iVar1 = iVar2 + 1;
      iVar6 = iVar2;
    }
    if ((*(undefined4 *)(unsigned)(unsigned)0x8c277acc) != 0) {
      piVar5 = (int *)(unsigned)((int)puVar12 + -4);
      if (in_FPSCR_SZ == '\0') {
        dVar19 = CONCAT44D((int)(D2U(dVar19) >> 0x20),*(undefined4 *)(unsigned)(*piVar5 + 0x10));
      }
      else {
        in_xd2 = *(double *)(unsigned)(*piVar5 + 0x10);
      }
      if (in_FPSCR_PR == '\0') {
        dVar19 = CONCAT44D((int)(D2U(dVar19) >> 0x20),F32LO(dVar19) * fVar23);
      }
      else {
        dVar19 = dVar19 * in_dr4;
      }
      if (in_FPSCR_SZ == '\0') {
        *(int *)(unsigned)((int)puVar12 + -0x58) = SUB84(dVar19,0);
      }
      else {
        *(double *)(unsigned)((int)puVar12 + -0x58) = in_xd2;
      }
      if (in_FPSCR_SZ == '\0') {
        dVar19 = CONCAT44D((int)(D2U(dVar19) >> 0x20),*(undefined4 *)(unsigned)(*piVar5 + 0x14));
      }
      else {
        in_xd2 = *(double *)(unsigned)(*piVar5 + 0x14);
      }
      if (in_FPSCR_PR == '\0') {
        dVar19 = CONCAT44D((int)(D2U(dVar19) >> 0x20),F32LO(dVar19) + fVar22);
      }
      else {
        dVar19 = dVar19 + in_dr4;
      }
      if (in_FPSCR_SZ == '\0') {
        *(int *)(unsigned)((int)puVar12 + -0x54) = SUB84(dVar19,0);
      }
      else {
        *(double *)(unsigned)((int)puVar12 + -0x54) = in_xd2;
      }
      if (in_FPSCR_SZ == '\0') {
        dVar19 = CONCAT44D((int)(D2U(dVar19) >> 0x20),*(undefined4 *)(unsigned)(*piVar5 + 0x18));
      }
      else {
        in_xd2 = *(double *)(unsigned)(*piVar5 + 0x18);
      }
      if (in_FPSCR_PR == '\0') {
        dVar19 = CONCAT44D((int)(D2U(dVar19) >> 0x20),F32LO(dVar19) + fVar25);
      }
      else {
        dVar19 = dVar19 + in_dr6;
      }
      if (in_FPSCR_SZ == '\0') {
        *(int *)(unsigned)((int)puVar12 + -0x50) = SUB84(dVar19,0);
      }
      else {
        *(double *)(unsigned)((int)puVar12 + -0x50) = in_xd2;
      }
      if (in_FPSCR_SZ == '\0') {
        dVar19 = CONCAT44D((int)(D2U(dVar19) >> 0x20),*(undefined4 *)(unsigned)(*piVar5 + 0x1c));
      }
      else {
        in_xd2 = *(double *)(unsigned)(*piVar5 + 0x1c);
      }
      if (in_FPSCR_PR == '\0') {
        dVar19 = CONCAT44D((int)(D2U(dVar19) >> 0x20),F32LO(dVar19) + fVar26);
      }
      else {
        dVar19 = dVar19 + in_dr6;
      }
      if (in_FPSCR_SZ == '\0') {
        *(int *)(unsigned)((int)puVar12 + -0x4c) = SUB84(dVar19,0);
      }
      else {
        *(double *)(unsigned)((int)puVar12 + -0x4c) = in_xd2;
      }
      if (in_FPSCR_SZ == '\0') {
        uVar21 = *(undefined4 *)(unsigned)(*piVar5 + 0x34);
        dVar19 = CONCAT44D((int)(D2U(dVar19) >> 0x20),uVar21);
        *(undefined4 *)(unsigned)((int)puVar12 + -0x48) = uVar21;
      }
      else {
        in_xd2 = *(double *)(unsigned)(*piVar5 + 0x34);
        *(double *)(unsigned)((int)puVar12 + -0x48) = in_xd2;
      }
      if (in_FPSCR_SZ == '\0') {
        uVar21 = *(undefined4 *)(unsigned)(*piVar5 + 0x38);
        dVar19 = CONCAT44D((int)(D2U(dVar19) >> 0x20),uVar21);
        *(undefined4 *)(unsigned)((int)puVar12 + -0x44) = uVar21;
      }
      else {
        in_xd2 = *(double *)(unsigned)(*piVar5 + 0x38);
        *(double *)(unsigned)((int)puVar12 + -0x44) = in_xd2;
      }
      if (in_FPSCR_SZ == '\0') {
        dVar19 = CONCAT44D((int)(D2U(dVar19) >> 0x20),*(undefined4 *)(unsigned)(*piVar5 + 0x3c));
      }
      else {
        in_xd2 = *(double *)(unsigned)(*piVar5 + 0x3c);
      }
      if (in_FPSCR_SZ == '\0') {
        *(int *)(unsigned)((int)puVar12 + -0x40) = SUB84(dVar19,0);
      }
      else {
        *(double *)(unsigned)((int)puVar12 + -0x40) = in_xd2;
      }
      if (iVar11 != 3) {
        piVar5 = (int *)(unsigned)((int)puVar12 + -4);
        if (in_FPSCR_SZ == '\0') {
          dVar19 = CONCAT44D((int)(D2U(dVar19) >> 0x20),*(undefined4 *)(unsigned)(*piVar5 + 0x10)
                                   );
        }
        else {
          in_xd2 = *(double *)(unsigned)(*piVar5 + 0x10);
        }
        if (in_FPSCR_PR == '\0') {
          dVar19 = CONCAT44D((int)(D2U(dVar19) >> 0x20),F32LO(dVar19) * fVar23);
        }
        else {
          dVar19 = dVar19 * in_dr4;
        }
        if (in_FPSCR_SZ == '\0') {
          *(int *)(unsigned)((int)puVar12 + -0x28) = SUB84(dVar19,0);
        }
        else {
          *(double *)(unsigned)((int)puVar12 + -0x28) = in_xd2;
        }
        if (in_FPSCR_SZ == '\0') {
          dVar19 = CONCAT44D((int)(D2U(dVar19) >> 0x20),*(undefined4 *)(unsigned)(*piVar5 + 0x14)
                                   );
        }
        else {
          in_xd2 = *(double *)(unsigned)(*piVar5 + 0x14);
        }
        if (in_FPSCR_PR == '\0') {
          dVar19 = CONCAT44D((int)(D2U(dVar19) >> 0x20),F32LO(dVar19) + fVar22);
        }
        else {
          dVar19 = dVar19 + in_dr4;
        }
        if (in_FPSCR_SZ == '\0') {
          *(int *)(unsigned)((int)puVar12 + -0x24) = SUB84(dVar19,0);
        }
        else {
          *(double *)(unsigned)((int)puVar12 + -0x24) = in_xd2;
        }
        if (in_FPSCR_SZ == '\0') {
          dVar19 = CONCAT44D((int)(D2U(dVar19) >> 0x20),*(undefined4 *)(unsigned)(*piVar5 + 0x18)
                                   );
        }
        else {
          in_xd2 = *(double *)(unsigned)(*piVar5 + 0x18);
        }
        if (in_FPSCR_PR == '\0') {
          dVar19 = CONCAT44D((int)(D2U(dVar19) >> 0x20),F32LO(dVar19) + fVar25);
        }
        else {
          dVar19 = dVar19 + in_dr6;
        }
        if (in_FPSCR_SZ == '\0') {
          *(int *)(unsigned)((int)puVar12 + -0x20) = SUB84(dVar19,0);
        }
        else {
          *(double *)(unsigned)((int)puVar12 + -0x20) = in_xd2;
        }
        if (in_FPSCR_SZ == '\0') {
          dVar19 = CONCAT44D((int)(D2U(dVar19) >> 0x20),*(undefined4 *)(unsigned)(*piVar5 + 0x1c)
                                   );
        }
        else {
          in_xd2 = *(double *)(unsigned)(*piVar5 + 0x1c);
        }
        if (in_FPSCR_PR == '\0') {
          fVar26 = F32LO(dVar19) + fVar26;
        }
        else {
          fVar26 = SUB84(dVar19 + in_dr6,0);
        }
        if (in_FPSCR_SZ == '\0') {
          *(float *)(unsigned)((int)puVar12 + -0x1c) = fVar26;
        }
        else {
          *(double *)(unsigned)((int)puVar12 + -0x1c) = in_xd2;
        }
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)(unsigned)((int)puVar12 + -0x18) = *(undefined4 *)(unsigned)(*piVar5 + 0x34);
        }
        else {
          *(undefined8 *)(unsigned)((int)puVar12 + -0x18) = *(undefined8 *)(unsigned)(*piVar5 + 0x34);
        }
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)(unsigned)((int)puVar12 + -0x14) = *(undefined4 *)(unsigned)(*piVar5 + 0x38);
        }
        else {
          *(undefined8 *)(unsigned)((int)puVar12 + -0x14) = *(undefined8 *)(unsigned)(*piVar5 + 0x38);
        }
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)(unsigned)((int)puVar12 + -0x10) = *(undefined4 *)(unsigned)(*piVar5 + 0x3c);
        }
        else {
          *(undefined8 *)(unsigned)((int)puVar12 + -0x10) = *(undefined8 *)(unsigned)(*piVar5 + 0x3c);
        }
      }
    }
    if (in_FPSCR_SZ == '\0') {
      uVar29 = *(undefined4 *)(unsigned)((int)puVar12 + -0xcc);
      uVar20 = *(undefined4 *)(unsigned)((int)puVar12 + -200);
      uVar24 = *(undefined4 *)(unsigned)((int)puVar12 + -0xc4);
      uVar21 = *(undefined4 *)(unsigned)((int)puVar12 + -0xc0);
      puVar4 = (undefined8 *)(unsigned)((int)puVar12 + -0xb8);
      *(undefined4 *)(unsigned)((int)ar7 + 0x14) = *(undefined4 *)(unsigned)((int)puVar12 + -0xbc);
      *(undefined4 *)(unsigned)(ar7 + 2) = uVar21;
      *(undefined4 *)(unsigned)((int)ar7 + 0xc) = uVar24;
      *(undefined4 *)(unsigned)(ar7 + 1) = uVar20;
      puVar7 = (undefined8 *)(unsigned)((int)ar7 + 4);
      *(undefined4 *)(unsigned)puVar7 = uVar29;
    }
    else {
      uVar17 = *(undefined8 *)(unsigned)((int)puVar12 + -0xcc);
      uVar16 = *(undefined8 *)(unsigned)((int)puVar12 + -0xc4);
      uVar36 = *(undefined8 *)(unsigned)((int)puVar12 + -0xbc);
      uVar35 = *(undefined8 *)(unsigned)((int)puVar12 + -0xb4);
      puVar4 = (undefined8 *)(unsigned)((int)puVar12 + -0xa4);
      ar7[2] = *(undefined8 *)(unsigned)((int)puVar12 + -0xac);
      ar7[1] = uVar35;
      *ar7 = uVar36;
      ar7[-1] = uVar16;
      puVar7 = ar7 + -2;
      *puVar7 = uVar17;
    }
    *(undefined4 *)(unsigned)((int)puVar7 + -4) = 0xe0000000;
    if (in_FPSCR_SZ == '\0') {
      uVar20 = *(undefined4 *)(unsigned)puVar4;
      uVar21 = *(undefined4 *)(unsigned)((int)puVar4 + 4);
      uVar29 = *(undefined4 *)(unsigned)(puVar4 + 1);
      uVar24 = *(undefined4 *)(unsigned)((int)puVar4 + 0xc);
      uVar27 = *(undefined4 *)(unsigned)(puVar4 + 2);
      uVar31 = *(undefined4 *)(unsigned)((int)puVar4 + 0x14);
      *(undefined4 *)(unsigned)(puVar7 + 7) = *(undefined4 *)(unsigned)(puVar4 + 3);
      *(undefined4 *)(unsigned)((int)puVar7 + 0x34) = uVar31;
      *(undefined4 *)(unsigned)(puVar7 + 6) = uVar27;
      *(undefined4 *)(unsigned)(puVar7 + 5) = uVar24;
      *(undefined4 *)(unsigned)((int)puVar7 + 0x24) = uVar29;
      *(undefined4 *)(unsigned)(puVar7 + 4) = uVar21;
      *(undefined4 *)(unsigned)((int)puVar7 + 0x1c) = uVar20;
      uVar20 = *(undefined4 *)(unsigned)((int)puVar12 + -0x9c);
      uVar21 = *(undefined4 *)(unsigned)((int)puVar12 + -0x98);
      uVar29 = *(undefined4 *)(unsigned)((int)puVar12 + -0x94);
      uVar24 = *(undefined4 *)(unsigned)((int)puVar12 + -0x90);
      puVar4 = (undefined8 *)(unsigned)((int)puVar12 + -0x88);
      *(undefined4 *)(unsigned)(puVar7 + 10) = *(undefined4 *)(unsigned)((int)puVar12 + -0x8c);
      *(undefined4 *)(unsigned)((int)puVar7 + 0x4c) = uVar24;
      *(undefined4 *)(unsigned)(puVar7 + 9) = uVar29;
      *(undefined4 *)(unsigned)((int)puVar7 + 0x44) = uVar21;
      puVar7 = puVar7 + 8;
      *(undefined4 *)(unsigned)puVar7 = uVar20;
    }
    else {
      uVar16 = *puVar4;
      uVar36 = puVar4[1];
      uVar17 = puVar4[2];
      uVar37 = puVar4[3];
      uVar38 = puVar4[4];
      uVar35 = puVar4[5];
      *(undefined8 *)(unsigned)((int)puVar7 + 0x34) = puVar4[6];
      *(undefined8 *)(unsigned)((int)puVar7 + 0x2c) = uVar35;
      *(undefined8 *)(unsigned)((int)puVar7 + 0x24) = uVar38;
      puVar7[3] = uVar37;
      puVar7[2] = uVar17;
      puVar7[1] = uVar36;
      *puVar7 = uVar16;
      uVar16 = *(undefined8 *)(unsigned)((int)puVar12 + -0x9c);
      uVar35 = *(undefined8 *)(unsigned)((int)puVar12 + -0x94);
      uVar17 = *(undefined8 *)(unsigned)((int)puVar12 + -0x8c);
      uVar36 = *(undefined8 *)(unsigned)((int)puVar12 + -0x84);
      puVar4 = (undefined8 *)(unsigned)((int)puVar12 + -0x74);
      puVar7[6] = *(undefined8 *)(unsigned)((int)puVar12 + -0x7c);
      puVar7[5] = uVar36;
      puVar7[4] = uVar17;
      puVar7[3] = uVar35;
      puVar7 = puVar7 + 2;
      *puVar7 = uVar16;
    }
    *(undefined4 *)(unsigned)((int)puVar7 + -4) = 0xe0000000;
    if (in_FPSCR_SZ == '\0') {
      uVar20 = *(undefined4 *)(unsigned)puVar4;
      uVar21 = *(undefined4 *)(unsigned)((int)puVar4 + 4);
      uVar29 = *(undefined4 *)(unsigned)(puVar4 + 1);
      uVar24 = *(undefined4 *)(unsigned)((int)puVar4 + 0xc);
      uVar27 = *(undefined4 *)(unsigned)(puVar4 + 2);
      uVar31 = *(undefined4 *)(unsigned)((int)puVar4 + 0x14);
      *(undefined4 *)(unsigned)(puVar7 + 7) = *(undefined4 *)(unsigned)(puVar4 + 3);
      *(undefined4 *)(unsigned)((int)puVar7 + 0x34) = uVar31;
      *(undefined4 *)(unsigned)(puVar7 + 6) = uVar27;
      *(undefined4 *)(unsigned)(puVar7 + 5) = uVar24;
      *(undefined4 *)(unsigned)((int)puVar7 + 0x24) = uVar29;
      *(undefined4 *)(unsigned)(puVar7 + 4) = uVar21;
      puVar7 = (undefined8 *)(unsigned)((int)puVar7 + 0x1c);
      *(undefined4 *)(unsigned)puVar7 = uVar20;
    }
    else {
      uVar16 = *puVar4;
      uVar36 = puVar4[1];
      uVar17 = puVar4[2];
      uVar37 = puVar4[3];
      uVar38 = puVar4[4];
      uVar35 = puVar4[5];
      *(undefined8 *)(unsigned)((int)puVar7 + 0x34) = puVar4[6];
      *(undefined8 *)(unsigned)((int)puVar7 + 0x2c) = uVar35;
      *(undefined8 *)(unsigned)((int)puVar7 + 0x24) = uVar38;
      puVar7[3] = uVar37;
      puVar7[2] = uVar17;
      puVar7[1] = uVar36;
      *puVar7 = uVar16;
    }
    if (iVar11 != 3) {
      if (in_FPSCR_SZ == '\0') {
        uVar29 = *(undefined4 *)(unsigned)((int)puVar12 + -0x3c);
        uVar20 = *(undefined4 *)(unsigned)((int)puVar12 + -0x38);
        uVar24 = *(undefined4 *)(unsigned)((int)puVar12 + -0x34);
        uVar21 = *(undefined4 *)(unsigned)((int)puVar12 + -0x30);
        puVar4 = (undefined8 *)(unsigned)((int)puVar12 + -0x28);
        *(undefined4 *)(unsigned)((int)puVar7 + 0x34) = *(undefined4 *)(unsigned)((int)puVar12 + -0x2c);
        *(undefined4 *)(unsigned)(puVar7 + 6) = uVar21;
        *(undefined4 *)(unsigned)((int)puVar7 + 0x2c) = uVar24;
        *(undefined4 *)(unsigned)(puVar7 + 5) = uVar20;
        puVar7 = (undefined8 *)(unsigned)((int)puVar7 + 0x24);
        *(undefined4 *)(unsigned)puVar7 = uVar29;
      }
      else {
        uVar17 = *(undefined8 *)(unsigned)((int)puVar12 + -0x3c);
        uVar36 = *(undefined8 *)(unsigned)((int)puVar12 + -0x34);
        uVar16 = *(undefined8 *)(unsigned)((int)puVar12 + -0x2c);
        uVar35 = *(undefined8 *)(unsigned)((int)puVar12 + -0x24);
        puVar4 = (undefined8 *)(unsigned)((int)puVar12 + -0x14);
        puVar7[6] = *(undefined8 *)(unsigned)((int)puVar12 + -0x1c);
        puVar7[5] = uVar35;
        puVar7[4] = uVar16;
        puVar7[3] = uVar36;
        puVar7 = puVar7 + 2;
        *puVar7 = uVar17;
      }
      *(undefined4 *)(unsigned)((int)puVar7 + -4) = 0xe0000000;
      if (in_FPSCR_SZ == '\0') {
        uVar20 = *(undefined4 *)(unsigned)puVar4;
        uVar21 = *(undefined4 *)(unsigned)((int)puVar4 + 4);
        uVar29 = *(undefined4 *)(unsigned)(puVar4 + 1);
        uVar24 = *(undefined4 *)(unsigned)((int)puVar4 + 0xc);
        uVar31 = *(undefined4 *)(unsigned)(puVar4 + 2);
        uVar27 = *(undefined4 *)(unsigned)((int)puVar4 + 0x14);
        *(undefined4 *)(unsigned)(puVar7 + 7) = *(undefined4 *)(unsigned)(puVar4 + 3);
        *(undefined4 *)(unsigned)((int)puVar7 + 0x34) = uVar27;
        *(undefined4 *)(unsigned)(puVar7 + 6) = uVar31;
        *(undefined4 *)(unsigned)(puVar7 + 5) = uVar24;
        *(undefined4 *)(unsigned)((int)puVar7 + 0x24) = uVar29;
        *(undefined4 *)(unsigned)(puVar7 + 4) = uVar21;
        puVar7 = (undefined8 *)(unsigned)((int)puVar7 + 0x1c);
        *(undefined4 *)(unsigned)puVar7 = uVar20;
      }
      else {
        uVar16 = *puVar4;
        uVar36 = puVar4[1];
        uVar17 = puVar4[2];
        uVar37 = puVar4[3];
        uVar35 = puVar4[4];
        uVar38 = puVar4[5];
        *(undefined8 *)(unsigned)((int)puVar7 + 0x34) = puVar4[6];
        *(undefined8 *)(unsigned)((int)puVar7 + 0x2c) = uVar38;
        *(undefined8 *)(unsigned)((int)puVar7 + 0x24) = uVar35;
        puVar7[3] = uVar37;
        puVar7[2] = uVar17;
        puVar7[1] = uVar36;
        *puVar7 = uVar16;
      }
    }
    if (in_FPSCR_SZ == '\0') {
      uVar29 = *(undefined4 *)(unsigned)((int)puVar12 + -0x6c);
      uVar24 = *(undefined4 *)(unsigned)((int)puVar12 + -0x68);
      uVar21 = *(undefined4 *)(unsigned)((int)puVar12 + -100);
      uVar20 = *(undefined4 *)(unsigned)((int)puVar12 + -0x60);
      puVar4 = (undefined8 *)(unsigned)((int)puVar12 + -0x58);
      *(undefined4 *)(unsigned)((int)puVar7 + 0x34) = *(undefined4 *)(unsigned)((int)puVar12 + -0x5c);
      *(undefined4 *)(unsigned)(puVar7 + 6) = uVar20;
      *(undefined4 *)(unsigned)((int)puVar7 + 0x2c) = uVar21;
      *(undefined4 *)(unsigned)(puVar7 + 5) = uVar24;
      puVar7 = (undefined8 *)(unsigned)((int)puVar7 + 0x24);
      *(undefined4 *)(unsigned)puVar7 = uVar29;
    }
    else {
      uVar17 = *(undefined8 *)(unsigned)((int)puVar12 + -0x6c);
      uVar16 = *(undefined8 *)(unsigned)((int)puVar12 + -100);
      uVar35 = *(undefined8 *)(unsigned)((int)puVar12 + -0x5c);
      uVar36 = *(undefined8 *)(unsigned)((int)puVar12 + -0x54);
      puVar4 = (undefined8 *)(unsigned)((int)puVar12 + -0x44);
      puVar7[6] = *(undefined8 *)(unsigned)((int)puVar12 + -0x4c);
      puVar7[5] = uVar36;
      puVar7[4] = uVar35;
      puVar7[3] = uVar16;
      puVar7 = puVar7 + 2;
      *puVar7 = uVar17;
    }
    *(undefined4 *)(unsigned)((int)puVar7 + -4) = 0xf0000000;
    if (in_FPSCR_SZ == '\0') {
      uVar20 = *(undefined4 *)(unsigned)puVar4;
      uVar21 = *(undefined4 *)(unsigned)((int)puVar4 + 4);
      uVar29 = *(undefined4 *)(unsigned)(puVar4 + 1);
      uVar24 = *(undefined4 *)(unsigned)((int)puVar4 + 0xc);
      uVar27 = *(undefined4 *)(unsigned)(puVar4 + 2);
      uVar31 = *(undefined4 *)(unsigned)((int)puVar4 + 0x14);
      *(undefined4 *)(unsigned)(puVar7 + 7) = *(undefined4 *)(unsigned)(puVar4 + 3);
      *(undefined4 *)(unsigned)((int)puVar7 + 0x34) = uVar31;
      *(undefined4 *)(unsigned)(puVar7 + 6) = uVar27;
      *(undefined4 *)(unsigned)(puVar7 + 5) = uVar24;
      *(undefined4 *)(unsigned)((int)puVar7 + 0x24) = uVar29;
      *(undefined4 *)(unsigned)(puVar7 + 4) = uVar21;
      puVar7 = (undefined8 *)(unsigned)((int)puVar7 + 0x1c);
      *(undefined4 *)(unsigned)puVar7 = uVar20;
    }
    else {
      uVar16 = *puVar4;
      uVar36 = puVar4[1];
      uVar17 = puVar4[2];
      uVar37 = puVar4[3];
      uVar38 = puVar4[4];
      uVar35 = puVar4[5];
      *(undefined8 *)(unsigned)((int)puVar7 + 0x34) = puVar4[6];
      *(undefined8 *)(unsigned)((int)puVar7 + 0x2c) = uVar35;
      *(undefined8 *)(unsigned)((int)puVar7 + 0x24) = uVar38;
      puVar7[3] = uVar37;
      puVar7[2] = uVar17;
      puVar7[1] = uVar36;
      *puVar7 = uVar16;
    }
    ar7 = puVar7 + 4;
    (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) + iVar11;
  }
  return ar7;
}

__asm__(".globl _FUN_8c225f68\n.set _FUN_8c225f68, _FUN_8c225f68_def\n");
