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
undefined8 * FUN_8c225098_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined8 *ar7)

{
  ring[rp++ & 255] = "FUN_8c225098";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 52; for (int i_ = 0; i_ < 52; i_++) z_[i_] = 0; }
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  double *pdVar4;
  int *piVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined4 *puVar8;
  int *piVar9;
  undefined8 *puVar10;
  int iVar11;
  undefined1 *puVar12;
  double in_dr0 = 0;
  double dVar13;
  longlong lVar14;
  undefined8 uVar15;
  float fVar16;
  undefined4 uVar17;
  float fVar18;
  double dVar19;
  ulonglong uVar20;
  double dVar21;
  float fVar22;
  double in_dr4 = 0;
  float fVar23;
  undefined4 uVar24;
  undefined8 in_dr6 = 0;
  double dVar25;
  undefined8 uVar26;
  undefined8 in_dr8 = 0;
  undefined8 uVar28;
  undefined4 uVar30;
  double in_dr10 = 0;
  undefined4 uVar31;
  float in_fr13 = 0;
  undefined4 in_fr15 = 0;
  double dVar32;
  double in_xd0 = 0;
  double in_xd2 = 0;
  double in_xd4 = 0;
  double in_xd6 = 0;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 in_xd8 = 0;
  longlong in_xd10 = 0;
  undefined8 uVar35;
  double in_xd12 = 0;
  bool bVar36;
  bool bVar37;
  char in_FPSCR_PR = 0;
  char in_FPSCR_SZ = 0;
  undefined4 uVar27;
  undefined4 uVar29;
  
  if (in_FPSCR_SZ == '\0') {
    puVar12 = ((undefined1 *)(fr0_ - 0x28));
  }
  else {
    puVar12 = ((undefined1 *)(fr0_ - 0x34));
  }
  if (((*(undefined4 *)(unsigned)(unsigned)0x8c4aa4f0) & 0x10000) == 0) {
    if (in_FPSCR_SZ == '\0') {
      in_dr0 = (double)(ulonglong)(*(undefined4 *)(unsigned)(unsigned)0x8c4aa4b8);
      dVar32 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4aa4a8),in_fr15);
      dVar21 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4aa4e0),(*(undefined4 *)(unsigned)(unsigned)0x8c4aa4dc));
      in_fr13 = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa4b4);
    }
    else {
      in_xd12 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4aa4b8),(*(undefined4 *)(unsigned)(unsigned)0x8c4aa4b4));
      in_xd0 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4aa4bc),(*(undefined4 *)(unsigned)(unsigned)0x8c4aa4b8));
      dVar32 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4aa4ac),(*(undefined4 *)(unsigned)(unsigned)0x8c4aa4a8));
      in_xd2 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4aa4e0),(*(undefined4 *)(unsigned)(unsigned)0x8c4aa4dc));
      dVar21 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4aa4e4),(*(undefined4 *)(unsigned)(unsigned)0x8c4aa4e0));
    }
    puVar1 = (undefined4 *)(unsigned)(puVar12 + -0x24);
    *puVar1 = ar4;
    if (in_FPSCR_SZ == '\0') {
      *(int *)(unsigned)(puVar12 + -0x20) = (int)((ulonglong)in_dr4 >> 0x20);
      *(int *)(unsigned)(puVar12 + -0x1c) = SUB84(in_dr4,0);
      uVar17 = (undefined4)(D2U(dVar32) >> 0x20);
      dVar32 = CONCAT44D(uVar17,uVar17);
    }
    else {
      *(double *)(unsigned)(puVar12 + -0x20) = in_dr4;
      *(double *)(unsigned)(puVar12 + -0x1c) = in_xd4;
    }
    if (in_FPSCR_PR == '\0') {
      dVar32 = CONCAT44D((int)(D2U(dVar32) >> 0x20),F32LO(dVar32) * F32LO(dVar21));
    }
    else {
      dVar32 = dVar32 * dVar21;
    }
    *(undefined4 *)(unsigned)(puVar12 + -0x18) = ar5;
    uVar17 = (undefined4)((ulonglong)in_dr6 >> 0x20);
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(unsigned)(puVar12 + -0x14) = uVar17;
      *(int *)(unsigned)(puVar12 + -0x10) = (int)in_dr6;
    }
    else {
      *(undefined8 *)(unsigned)(puVar12 + -0x14) = in_dr6;
      *(double *)(unsigned)(puVar12 + -0x10) = in_xd6;
    }
    if (in_FPSCR_PR == '\0') {
      dVar32 = CONCAT44D(F32HI(dVar32) *
                                F32HI(dVar21),SUB84(dVar32,0));
    }
    else {
      dVar32 = dVar32 * dVar21;
    }
    *(undefined4 *)(unsigned)(puVar12 + -0xc) = ar6;
    if (in_FPSCR_SZ == '\0') {
      *(int *)(unsigned)(puVar12 + -8) = (int)((ulonglong)in_dr8 >> 0x20);
      *(int *)(unsigned)(puVar12 + -4) = (int)in_dr8;
    }
    else {
      *(undefined8 *)(unsigned)(puVar12 + -8) = in_dr8;
      *(undefined8 *)(unsigned)(puVar12 + -4) = in_xd8;
    }
    iVar11 = 0;
    dVar19 = CONCAT44D(uVar17,0x3f800000);
    iVar2 = 0;
    iVar6 = 2;
    while( true ) {
      iVar3 = iVar2;
      uVar17 = (undefined4)(D2U(dVar21) >> 0x20);
      fVar18 = F32HI(in_dr10);
      if (2 < iVar3) break;
      puVar8 = puVar1 + iVar6 * 3;
      if (in_FPSCR_SZ == '\0') {
        dVar21 = CONCAT44D(uVar17,*(undefined4 *)(unsigned)*puVar8);
      }
      else {
        in_xd2 = *(double *)(unsigned)*puVar8;
      }
      piVar5 = puVar1 + iVar3 * 3;
      fVar22 = F32LO(dVar19);
      if (in_FPSCR_PR == '\0') {
        bVar36 = fVar22 < SUB84(dVar21,0);
      }
      else {
        bVar36 = dVar19 < dVar21;
      }
      if (in_FPSCR_SZ == '\0') {
        dVar21 = CONCAT44D((int)(D2U(dVar21) >> 0x20),*(undefined4 *)(unsigned)*piVar5);
      }
      else {
        in_xd2 = *(double *)(unsigned)*piVar5;
      }
      if (in_FPSCR_PR == '\0') {
        bVar37 = fVar22 < SUB84(dVar21,0);
      }
      else {
        bVar37 = dVar19 < dVar21;
      }
      if ((bVar36 ^ 1) != -(bVar37 - 1)) {
        pdVar4 = (double *)(unsigned)*puVar8;
        puVar10 = (undefined8 *)(unsigned)*piVar5;
        if (in_FPSCR_SZ == '\0') {
          fVar23 = *(float *)(unsigned)pdVar4;
          uVar15 = CONCAT44(*(undefined4 *)(unsigned)puVar10,fVar23);
          dVar21 = CONCAT44D(fVar23,SUB84(in_dr4,0));
        }
        else {
          in_xd2 = *pdVar4;
          uVar15 = *puVar10;
          fVar23 = F32HI(in_xd2);
          dVar21 = in_xd2;
        }
        fVar16 = F32HI(uVar15);
        if (in_FPSCR_PR == '\0') {
          dVar21 = CONCAT44D(fVar16 - fVar23,-(float)uVar15 + fVar22);
        }
        else {
          dVar21 = (CONCAT44D(fVar16,-(float)uVar15) + dVar19) - dVar21;
        }
        if (in_FPSCR_SZ == '\0') {
          dVar19 = CONCAT44D(SUB84(dVar21,0),*(float *)(unsigned)(pdVar4 + 4));
        }
        else {
          in_xd4 = pdVar4[4];
          dVar19 = in_xd2;
        }
        if (in_FPSCR_PR == '\0') {
          in_dr4 = CONCAT44D(F32HI(dVar19) /
                                    F32HI(dVar21),SUB84(dVar19,0));
        }
        else {
          in_dr4 = dVar19 / dVar21;
        }
        if (in_FPSCR_SZ == '\0') {
          dVar21 = CONCAT44D(SUB84(in_dr4,0),*(undefined4 *)(unsigned)(puVar10 + 4));
        }
        else {
          in_xd2 = (double)puVar10[4];
          dVar21 = in_xd4;
        }
        if (in_FPSCR_PR == '\0') {
          dVar21 = CONCAT44D((int)(D2U(dVar21) >> 0x20),
                                    F32LO(dVar21) - F32LO(in_dr4));
        }
        else {
          dVar21 = dVar21 - in_dr4;
        }
        if (in_FPSCR_SZ == '\0') {
          dVar25 = CONCAT44D(*(float *)(unsigned)((int)pdVar4 + 0x24),fVar22);
        }
        else {
          dVar25 = *(double *)(unsigned)((int)pdVar4 + 0x24);
        }
        uVar17 = (undefined4)((ulonglong)in_dr4 >> 0x20);
        dVar13 = in_dr4;
        if (in_FPSCR_SZ == '\0') {
          dVar13 = CONCAT44D(uVar17,SUB84(in_dr0,0));
        }
        fVar22 = F32HI(dVar13);
        if (in_FPSCR_PR == '\0') {
          dVar21 = CONCAT44D(fVar22 * F32LO(dVar21) + F32HI(dVar21),
                                    SUB84(dVar21,0));
        }
        if (in_FPSCR_SZ == '\0') {
          dVar21 = CONCAT44D((int)(D2U(dVar21) >> 0x20),
                                    *(undefined4 *)(unsigned)((int)puVar10 + 0x24));
        }
        else {
          in_xd2 = *(double *)(unsigned)((int)puVar10 + 0x24);
        }
        fVar23 = F32HI(dVar25);
        if (in_FPSCR_PR == '\0') {
          dVar21 = CONCAT44D((int)(D2U(dVar21) >> 0x20),F32LO(dVar21) - fVar23);
        }
        else {
          dVar21 = dVar21 - dVar25;
        }
        dVar19 = dVar25;
        if (in_FPSCR_SZ == '\0') {
          in_dr4 = CONCAT44D(uVar17,(int)(D2U(dVar21) >> 0x20));
          dVar19 = CONCAT44D(fVar23,SUB84(dVar21,0));
          dVar21 = in_xd4;
        }
        if (in_FPSCR_PR == '\0') {
          dVar19 = CONCAT44D(fVar22 * F32LO(dVar19) + F32HI(dVar19),
                                    SUB84(dVar19,0));
        }
        fVar22 = F32LO(in_dr4);
        if (in_FPSCR_SZ == '\0') {
          dVar19 = CONCAT44D((int)(D2U(dVar19) >> 0x20),SUB84(dVar25,0));
          dVar25 = CONCAT44D(fVar22,SUB84(dVar13,0));
          fVar23 = in_fr13;
        }
        else {
          fVar23 = F32LO(dVar19);
          dVar25 = dVar21;
          in_xd2 = in_xd12;
        }
        if (in_FPSCR_PR == '\0') {
          fVar23 = F32HI(dVar25) * F32LO(dVar32) + fVar23;
        }
        pdVar4 = (double *)(unsigned)(puVar12 + iVar11 * 0x30 + -0xe4);
        if (in_FPSCR_SZ == '\0') {
          fVar16 = F32LO(dVar25);
          *(float *)(unsigned)pdVar4 = fVar23;
          fVar23 = fVar16;
          dVar25 = CONCAT44D((int)(D2U(dVar19) >> 0x20),fVar16);
        }
        else {
          *pdVar4 = in_xd2;
          in_xd2 = in_xd0;
          fVar16 = F32LO(dVar19);
          dVar25 = dVar19;
        }
        if (in_FPSCR_PR == '\0') {
          fVar23 = F32HI(dVar25) * F32HI(dVar32) + fVar23;
        }
        uVar17 = (undefined4)((ulonglong)in_dr4 >> 0x20);
        if (in_FPSCR_SZ == '\0') {
          *(float *)(unsigned)((int)pdVar4 + 4) = fVar23;
          *(float *)(unsigned)(pdVar4 + 1) = SUB84(dVar19,0);
          fVar22 = (float)(uint)puVar8[1];
          in_dr4 = CONCAT44D(uVar17,fVar22);
          dVar25 = CONCAT44D(fVar22,piVar5[1]);
          in_xd4 = dVar21;
          in_dr0 = CONCAT44D(uVar17,fVar16);
        }
        else {
          *(double *)(unsigned)((int)pdVar4 + 4) = in_xd2;
          pdVar4[1] = in_xd6;
          dVar25 = *(double *)(unsigned)(puVar8 + 1);
          in_xd2 = *(double *)(unsigned)(piVar5 + 1);
          in_xd4 = dVar25;
          in_dr0 = in_dr4;
        }
        fVar23 = F32HI(in_dr0);
        if (in_FPSCR_PR == '\0') {
          fVar22 = F32LO(dVar25) - fVar22;
          dVar25 = CONCAT44D(fVar23 * fVar22 + F32HI(dVar25),fVar22);
        }
        else {
          dVar25 = dVar25 - in_dr4;
        }
        uVar17 = (undefined4)(D2U(dVar25) >> 0x20);
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)(unsigned)((int)pdVar4 + 0xc) = uVar17;
          dVar25 = CONCAT44D(uVar17,piVar5[2]);
          in_dr4 = CONCAT44D((int)((ulonglong)in_dr4 >> 0x20),puVar8[2]);
        }
        else {
          *(double *)(unsigned)((int)pdVar4 + 0xc) = dVar25;
          in_xd2 = *(double *)(unsigned)(piVar5 + 2);
          in_xd4 = *(double *)(unsigned)(puVar8 + 2);
        }
        fVar22 = F32LO(in_dr4);
        if (in_FPSCR_PR == '\0') {
          fVar16 = F32LO(dVar25) - fVar22;
        }
        else {
          fVar16 = SUB84(dVar25 - in_dr4,0);
        }
        dVar21 = in_xd4;
        if (in_FPSCR_SZ == '\0') {
          dVar21 = CONCAT44D(fVar22,fVar16);
        }
        if (in_FPSCR_PR == '\0') {
          dVar21 = CONCAT44D(fVar23 * F32LO(dVar21) + F32HI(dVar21),
                                    SUB84(dVar21,0));
        }
        if (in_FPSCR_SZ == '\0') {
          *(int *)(unsigned)(pdVar4 + 2) = (int)(D2U(dVar21) >> 0x20);
        }
        else {
          pdVar4[2] = dVar21;
        }
        if ((*(undefined4 *)(unsigned)(unsigned)0x8c277acc) == 0) {
          piVar5 = puVar1 + iVar6 * 3;
          uVar17 = (undefined4)((ulonglong)in_dr4 >> 0x20);
          dVar25 = in_dr4;
          if (in_FPSCR_SZ == '\0') {
            dVar25 = CONCAT44D(uVar17,SUB84(in_dr0,0));
          }
          iVar2 = *piVar5;
          *(int *)(unsigned)(puVar12 + -0xe8) = iVar2;
          if (in_FPSCR_SZ == '\0') {
            fVar22 = *(float *)(unsigned)(iVar2 + 0x10);
            in_dr4 = CONCAT44D(uVar17,fVar22);
            dVar21 = CONCAT44D(fVar22,SUB84(dVar21,0));
          }
          else {
            dVar21 = *(double *)(unsigned)(iVar2 + 0x10);
            in_xd4 = dVar21;
          }
          piVar9 = puVar1 + iVar3 * 3;
          if (in_FPSCR_SZ == '\0') {
            dVar21 = CONCAT44D((int)(D2U(dVar21) >> 0x20),
                                      *(undefined4 *)(unsigned)(*piVar9 + 0x10));
          }
          else {
            in_xd2 = *(double *)(unsigned)(*piVar9 + 0x10);
          }
          fVar23 = F32HI(dVar25);
          if (in_FPSCR_PR == '\0') {
            fVar22 = F32LO(dVar21) - fVar22;
            dVar21 = CONCAT44D((fVar23 * fVar22 + F32HI(dVar21)) *
                                      fVar18,fVar22);
          }
          else {
            dVar21 = (dVar21 - in_dr4) * in_dr10;
          }
          uVar17 = (undefined4)(D2U(dVar21) >> 0x20);
          if (in_FPSCR_SZ == '\0') {
            *(undefined4 *)(unsigned)((int)pdVar4 + 0x14) = uVar17;
          }
          else {
            *(double *)(unsigned)((int)pdVar4 + 0x14) = dVar21;
          }
          iVar2 = *piVar5;
          *(int *)(unsigned)(puVar12 + -0xec) = iVar2;
          if (in_FPSCR_SZ == '\0') {
            in_dr4 = CONCAT44D((int)((ulonglong)in_dr4 >> 0x20),*(undefined4 *)(unsigned)(iVar2 + 0x14)
                                     );
          }
          else {
            in_xd4 = *(double *)(unsigned)(iVar2 + 0x14);
          }
          if (in_FPSCR_SZ == '\0') {
            dVar21 = CONCAT44D(uVar17,*(undefined4 *)(unsigned)(*piVar9 + 0x14));
          }
          else {
            in_xd2 = *(double *)(unsigned)(*piVar9 + 0x14);
          }
          if (in_FPSCR_PR == '\0') {
            fVar22 = F32LO(dVar21) - F32LO(in_dr4);
          }
          else {
            fVar22 = SUB84(dVar21 - in_dr4,0);
          }
          dVar21 = in_xd4;
          if (in_FPSCR_SZ == '\0') {
            dVar21 = CONCAT44D(SUB84(in_dr4,0),fVar22);
          }
          if (in_FPSCR_PR == '\0') {
            dVar21 = CONCAT44D(fVar23 * F32LO(dVar21) + F32HI(dVar21),
                                      SUB84(dVar21,0));
          }
          if (in_FPSCR_SZ == '\0') {
            dVar21 = CONCAT44D((int)(D2U(dVar21) >> 0x20),
                                      *(undefined4 *)(unsigned)(puVar12 + 0x30));
            lVar14 = CONCAT44(SUB84(in_dr10,0),SUB84(dVar25,0));
          }
          else {
            in_xd2 = *(double *)(unsigned)(puVar12 + 0x30);
            lVar14 = in_xd10;
          }
          if (in_FPSCR_PR == '\0') {
            dVar21 = (double)(ulonglong)
                             (uint)(F32HI(lVar14) *
                                    F32HI(dVar21) + F32LO(dVar21));
          }
          uVar17 = (undefined4)((ulonglong)in_dr4 >> 0x20);
          if (in_FPSCR_SZ == '\0') {
            *(int *)(unsigned)(pdVar4 + 3) = SUB84(dVar21,0);
            dVar21 = CONCAT44D(uVar17,(int)lVar14);
          }
          else {
            pdVar4[3] = in_xd2;
            dVar21 = in_dr4;
          }
          iVar2 = *piVar5;
          *(int *)(unsigned)(puVar12 + -0xf0) = iVar2;
          if (in_FPSCR_SZ == '\0') {
            in_dr4 = CONCAT44D(uVar17,*(undefined4 *)(unsigned)(iVar2 + 0x18));
          }
          else {
            in_xd4 = *(double *)(unsigned)(iVar2 + 0x18);
          }
          if (in_FPSCR_SZ == '\0') {
            dVar25 = CONCAT44D(SUB84(in_dr4,0),*(undefined4 *)(unsigned)(*piVar9 + 0x18));
          }
          else {
            in_xd2 = *(double *)(unsigned)(*piVar9 + 0x18);
            dVar25 = in_xd4;
          }
          if (in_FPSCR_PR == '\0') {
            fVar22 = F32LO(dVar25) - F32LO(in_dr4);
            dVar25 = CONCAT44D(F32HI(dVar21) * fVar22 +
                                      F32HI(dVar25),fVar22);
          }
          else {
            dVar25 = dVar25 - in_dr4;
          }
          if (in_FPSCR_SZ == '\0') {
            dVar25 = CONCAT44D((int)(D2U(dVar25) >> 0x20),
                                      *(undefined4 *)(unsigned)(puVar12 + 0x34));
            uVar15 = CONCAT44(*(undefined4 *)(unsigned)(puVar12 + 0x28),SUB84(dVar21,0));
          }
          else {
            in_xd2 = *(double *)(unsigned)(puVar12 + 0x34);
            uVar15 = *(undefined8 *)(unsigned)(puVar12 + 0x28);
          }
          if (in_FPSCR_PR == '\0') {
            fVar22 = F32HI(dVar25);
            dVar25 = CONCAT44D(fVar22,F32HI(uVar15) * fVar22 +
                                             SUB84(dVar25,0));
          }
          if (in_FPSCR_SZ == '\0') {
            *(int *)(unsigned)((int)pdVar4 + 0x1c) = SUB84(dVar25,0);
          }
          else {
            *(double *)(unsigned)((int)pdVar4 + 0x1c) = in_xd2;
          }
          iVar2 = *piVar5;
          *(int *)(unsigned)(puVar12 + -0xf4) = iVar2;
          if (in_FPSCR_SZ == '\0') {
            in_dr4 = CONCAT44D((int)((ulonglong)in_dr4 >> 0x20),*(undefined4 *)(unsigned)(iVar2 + 0x1c)
                                     );
          }
          else {
            in_xd4 = *(double *)(unsigned)(iVar2 + 0x1c);
          }
          if (in_FPSCR_SZ == '\0') {
            dVar25 = CONCAT44D((int)(D2U(dVar25) >> 0x20),
                                      *(undefined4 *)(unsigned)(*piVar9 + 0x1c));
          }
          else {
            in_xd2 = *(double *)(unsigned)(*piVar9 + 0x1c);
          }
          if (in_FPSCR_PR == '\0') {
            fVar22 = F32LO(dVar25) - F32LO(in_dr4);
          }
          else {
            fVar22 = SUB84(dVar25 - in_dr4,0);
          }
          uVar17 = (undefined4)((ulonglong)in_dr4 >> 0x20);
          dVar25 = in_dr4;
          dVar21 = in_xd4;
          if (in_FPSCR_SZ == '\0') {
            dVar25 = CONCAT44D(uVar17,(int)uVar15);
            dVar21 = CONCAT44D(SUB84(in_dr4,0),fVar22);
          }
          if (in_FPSCR_PR == '\0') {
            dVar21 = CONCAT44D(F32HI(dVar25) * F32LO(dVar21) +
                                      F32HI(dVar21),SUB84(dVar21,0));
          }
          if (in_FPSCR_SZ == '\0') {
            dVar21 = CONCAT44D((int)(D2U(dVar21) >> 0x20),
                                      *(undefined4 *)(unsigned)(puVar12 + 0x38));
            uVar15 = CONCAT44(*(undefined4 *)(unsigned)(puVar12 + 0x2c),SUB84(dVar25,0));
          }
          else {
            in_xd2 = *(double *)(unsigned)(puVar12 + 0x38);
            uVar15 = *(undefined8 *)(unsigned)(puVar12 + 0x2c);
          }
          if (in_FPSCR_PR == '\0') {
            dVar21 = (double)(ulonglong)
                             (uint)(F32HI(uVar15) *
                                    F32HI(dVar21) + F32LO(dVar21));
          }
          if (in_FPSCR_SZ == '\0') {
            *(int *)(unsigned)(pdVar4 + 4) = SUB84(dVar21,0);
            in_dr0 = CONCAT44D(uVar17,(int)uVar15);
          }
          else {
            pdVar4[4] = in_xd2;
            in_dr0 = in_dr4;
          }
          iVar2 = *piVar5;
          *(int *)(unsigned)(puVar12 + -0xf8) = iVar2;
          if (in_FPSCR_SZ == '\0') {
            in_dr4 = CONCAT44D(uVar17,*(undefined4 *)(unsigned)(iVar2 + 0x34));
          }
          else {
            in_xd4 = *(double *)(unsigned)(iVar2 + 0x34);
          }
          if (in_FPSCR_SZ == '\0') {
            dVar21 = CONCAT44D(SUB84(in_dr4,0),*(undefined4 *)(unsigned)(*piVar9 + 0x34));
          }
          else {
            in_xd2 = *(double *)(unsigned)(*piVar9 + 0x34);
            dVar21 = in_xd4;
          }
          fVar22 = F32HI(in_dr0);
          if (in_FPSCR_PR == '\0') {
            fVar23 = F32LO(dVar21) - F32LO(in_dr4);
            dVar21 = CONCAT44D(fVar22 * fVar23 + F32HI(dVar21),fVar23);
          }
          else {
            dVar21 = dVar21 - in_dr4;
          }
          if (in_FPSCR_SZ == '\0') {
            *(int *)(unsigned)((int)pdVar4 + 0x24) = (int)(D2U(dVar21) >> 0x20);
          }
          else {
            *(double *)(unsigned)((int)pdVar4 + 0x24) = dVar21;
          }
          iVar2 = *piVar5;
          *(int *)(unsigned)(puVar12 + -0xfc) = iVar2;
          if (in_FPSCR_SZ == '\0') {
            in_dr4 = CONCAT44D((int)((ulonglong)in_dr4 >> 0x20),*(undefined4 *)(unsigned)(iVar2 + 0x38)
                                     );
          }
          else {
            in_xd4 = *(double *)(unsigned)(iVar2 + 0x38);
          }
          fVar23 = F32LO(in_dr4);
          if (in_FPSCR_SZ == '\0') {
            dVar21 = CONCAT44D(fVar23,*(undefined4 *)(unsigned)(*piVar9 + 0x38));
          }
          else {
            in_xd2 = *(double *)(unsigned)(*piVar9 + 0x38);
            dVar21 = in_xd4;
          }
          if (in_FPSCR_PR == '\0') {
            fVar16 = F32LO(dVar21) - fVar23;
            dVar21 = CONCAT44D(fVar22 * fVar16 + F32HI(dVar21),fVar16);
          }
          else {
            dVar21 = dVar21 - in_dr4;
          }
          if (in_FPSCR_SZ == '\0') {
            *(int *)(unsigned)(pdVar4 + 5) = (int)(D2U(dVar21) >> 0x20);
          }
          else {
            pdVar4[5] = dVar21;
          }
          iVar2 = *piVar5;
          *(int *)(unsigned)(puVar12 + -0x100) = iVar2;
          if (in_FPSCR_SZ == '\0') {
            fVar23 = *(float *)(unsigned)(iVar2 + 0x3c);
            in_dr4 = CONCAT44D((int)((ulonglong)in_dr4 >> 0x20),fVar23);
            dVar21 = CONCAT44D(fVar23,*(undefined4 *)(unsigned)(*piVar9 + 0x3c));
          }
          else {
            dVar21 = *(double *)(unsigned)(iVar2 + 0x3c);
            in_xd2 = *(double *)(unsigned)(*piVar9 + 0x3c);
            in_xd4 = dVar21;
          }
          if (in_FPSCR_PR == '\0') {
            fVar23 = F32LO(dVar21) - fVar23;
            dVar21 = CONCAT44D(fVar22 * fVar23 + F32HI(dVar21),fVar23);
          }
          else {
            dVar21 = dVar21 - in_dr4;
          }
          if (in_FPSCR_SZ == '\0') {
            *(int *)(unsigned)((int)pdVar4 + 0x2c) = (int)(D2U(dVar21) >> 0x20);
          }
          else {
            *(double *)(unsigned)((int)pdVar4 + 0x2c) = dVar21;
          }
        }
        iVar11 = iVar11 + 1;
      }
      piVar5 = puVar1 + iVar3 * 3;
      if (in_FPSCR_SZ == '\0') {
        dVar21 = CONCAT44D((int)(D2U(dVar21) >> 0x20),*(undefined4 *)(unsigned)*piVar5);
      }
      else {
        in_xd2 = *(double *)(unsigned)*piVar5;
      }
      if (in_FPSCR_PR == '\0') {
        bVar36 = SUB84(dVar19,0) < SUB84(dVar21,0);
      }
      else {
        bVar36 = dVar19 < dVar21;
      }
      if (bVar36) {
        if (in_FPSCR_SZ == '\0') {
          dVar21 = CONCAT44D((int)(D2U(dVar21) >> 0x20),*(undefined4 *)(unsigned)(*piVar5 + 4));
        }
        else {
          in_xd2 = *(double *)(unsigned)(*piVar5 + 4);
        }
        pdVar4 = (double *)(unsigned)(puVar12 + iVar11 * 0x30 + -0xe4);
        if (in_FPSCR_SZ == '\0') {
          *(int *)(unsigned)pdVar4 = SUB84(dVar21,0);
        }
        else {
          *pdVar4 = in_xd2;
        }
        if (in_FPSCR_SZ == '\0') {
          uVar17 = *(undefined4 *)(unsigned)(*piVar5 + 8);
          dVar21 = CONCAT44D((int)(D2U(dVar21) >> 0x20),uVar17);
          *(undefined4 *)(unsigned)((int)pdVar4 + 4) = uVar17;
        }
        else {
          in_xd2 = *(double *)(unsigned)(*piVar5 + 8);
          *(double *)(unsigned)((int)pdVar4 + 4) = in_xd2;
        }
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)(unsigned)(pdVar4 + 1) = *(undefined4 *)(unsigned)(*piVar5 + 0xc);
          *(int *)(unsigned)((int)pdVar4 + 0xc) = piVar5[1];
          dVar21 = CONCAT44D((int)(D2U(dVar21) >> 0x20),piVar5[2]);
          *(int *)(unsigned)(pdVar4 + 2) = piVar5[2];
        }
        else {
          pdVar4[1] = *(double *)(unsigned)(*piVar5 + 0xc);
          *(undefined8 *)(unsigned)((int)pdVar4 + 0xc) = *(undefined8 *)(unsigned)(piVar5 + 1);
          in_xd2 = *(double *)(unsigned)(piVar5 + 2);
          pdVar4[2] = in_xd2;
        }
        if ((*(undefined4 *)(unsigned)(unsigned)0x8c277acc) == 0) {
          lVar14 = in_xd10;
          if (in_FPSCR_SZ == '\0') {
            lVar14 = CONCAT44(SUB84(in_dr10,0),SUB84(in_dr0,0));
          }
          piVar5 = puVar1 + iVar3 * 3;
          if (in_FPSCR_SZ == '\0') {
            dVar21 = CONCAT44D((int)(D2U(dVar21) >> 0x20),
                                      *(undefined4 *)(unsigned)(*piVar5 + 0x10));
          }
          else {
            in_xd2 = *(double *)(unsigned)(*piVar5 + 0x10);
          }
          if (in_FPSCR_PR == '\0') {
            fVar18 = F32LO(dVar21) * fVar18;
          }
          else {
            fVar18 = SUB84(dVar21 * in_dr10,0);
          }
          if (in_FPSCR_SZ == '\0') {
            *(float *)(unsigned)((int)pdVar4 + 0x14) = fVar18;
          }
          else {
            *(double *)(unsigned)((int)pdVar4 + 0x14) = in_xd2;
          }
          if (in_FPSCR_SZ == '\0') {
            uVar20 = CONCAT44(*(undefined4 *)(unsigned)(*piVar5 + 0x14),*(undefined4 *)(unsigned)(puVar12 + 0x30));
          }
          else {
            in_xd2 = *(double *)(unsigned)(puVar12 + 0x30);
            uVar20 = *(ulonglong *)(unsigned)(*piVar5 + 0x14);
          }
          if (in_FPSCR_PR == '\0') {
            uVar20 = (ulonglong)
                     (uint)(F32HI(lVar14) * (float)(uVar20 >> 0x20) +
                           (float)uVar20);
          }
          uVar17 = (undefined4)uVar20;
          if (in_FPSCR_SZ == '\0') {
            *(undefined4 *)(unsigned)(pdVar4 + 3) = uVar17;
            uVar17 = *(undefined4 *)(unsigned)(puVar12 + 0x34);
          }
          else {
            pdVar4[3] = in_xd2;
            in_xd2 = *(double *)(unsigned)(puVar12 + 0x34);
          }
          if (in_FPSCR_SZ == '\0') {
            uVar15 = CONCAT44(*(undefined4 *)(unsigned)(puVar12 + 0x28),(int)lVar14);
            uVar20 = CONCAT44(*(undefined4 *)(unsigned)(*piVar5 + 0x18),uVar17);
          }
          else {
            uVar15 = *(undefined8 *)(unsigned)(puVar12 + 0x28);
            uVar20 = *(ulonglong *)(unsigned)(*piVar5 + 0x18);
          }
          if (in_FPSCR_PR == '\0') {
            uVar20 = (ulonglong)
                     (uint)(F32HI(uVar15) * (float)(uVar20 >> 0x20) +
                           (float)uVar20);
          }
          if (in_FPSCR_SZ == '\0') {
            *(int *)(unsigned)((int)pdVar4 + 0x1c) = (int)uVar20;
          }
          else {
            *(double *)(unsigned)((int)pdVar4 + 0x1c) = in_xd2;
          }
          if (in_FPSCR_SZ == '\0') {
            in_dr0 = CONCAT44D(*(undefined4 *)(unsigned)(puVar12 + 0x2c),(int)uVar15);
            dVar21 = CONCAT44D(*(undefined4 *)(unsigned)(*piVar5 + 0x1c),
                                      *(undefined4 *)(unsigned)(puVar12 + 0x38));
          }
          else {
            in_xd2 = *(double *)(unsigned)(puVar12 + 0x38);
            in_dr0 = *(double *)(unsigned)(puVar12 + 0x2c);
            dVar21 = *(double *)(unsigned)(*piVar5 + 0x1c);
          }
          if (in_FPSCR_PR == '\0') {
            fVar18 = F32HI(dVar21);
            dVar21 = CONCAT44D(fVar18,F32HI(in_dr0) * fVar18 +
                                             SUB84(dVar21,0));
          }
          if (in_FPSCR_SZ == '\0') {
            *(int *)(unsigned)(pdVar4 + 4) = SUB84(dVar21,0);
          }
          else {
            pdVar4[4] = in_xd2;
          }
          if (in_FPSCR_SZ == '\0') {
            uVar17 = *(undefined4 *)(unsigned)(*piVar5 + 0x34);
            dVar21 = CONCAT44D((int)(D2U(dVar21) >> 0x20),uVar17);
            *(undefined4 *)(unsigned)((int)pdVar4 + 0x24) = uVar17;
          }
          else {
            in_xd2 = *(double *)(unsigned)(*piVar5 + 0x34);
            *(double *)(unsigned)((int)pdVar4 + 0x24) = in_xd2;
          }
          if (in_FPSCR_SZ == '\0') {
            uVar17 = *(undefined4 *)(unsigned)(*piVar5 + 0x38);
            dVar21 = CONCAT44D((int)(D2U(dVar21) >> 0x20),uVar17);
            *(undefined4 *)(unsigned)(pdVar4 + 5) = uVar17;
          }
          else {
            in_xd2 = *(double *)(unsigned)(*piVar5 + 0x38);
            pdVar4[5] = in_xd2;
          }
          if (in_FPSCR_SZ == '\0') {
            uVar17 = *(undefined4 *)(unsigned)(*piVar5 + 0x3c);
            dVar21 = CONCAT44D((int)(D2U(dVar21) >> 0x20),uVar17);
            *(undefined4 *)(unsigned)((int)pdVar4 + 0x2c) = uVar17;
          }
          else {
            in_xd2 = *(double *)(unsigned)(*piVar5 + 0x3c);
            *(double *)(unsigned)((int)pdVar4 + 0x2c) = in_xd2;
          }
        }
        iVar11 = iVar11 + 1;
      }
      iVar2 = iVar3 + 1;
      iVar6 = iVar3;
    }
    if ((*(undefined4 *)(unsigned)(unsigned)0x8c277acc) != 0) {
      piVar5 = (int *)(unsigned)(puVar12 + -0xc);
      if (in_FPSCR_SZ == '\0') {
        dVar21 = CONCAT44D(uVar17,*(undefined4 *)(unsigned)(*piVar5 + 0x10));
      }
      else {
        in_xd2 = *(double *)(unsigned)(*piVar5 + 0x10);
      }
      if (in_FPSCR_PR == '\0') {
        fVar22 = F32LO(dVar21) * fVar18;
      }
      else {
        fVar22 = SUB84(dVar21 * in_dr10,0);
      }
      if (in_FPSCR_SZ == '\0') {
        *(float *)(unsigned)(puVar12 + -0x70) = fVar22;
        fVar22 = *(float *)(unsigned)(puVar12 + 0x30);
        lVar14 = (longlong)in_dr10 << 0x20;
      }
      else {
        *(double *)(unsigned)(puVar12 + -0x70) = in_xd2;
        in_xd2 = *(double *)(unsigned)(puVar12 + 0x30);
        lVar14 = in_xd10;
      }
      if (in_FPSCR_SZ == '\0') {
        uVar20 = CONCAT44(*(undefined4 *)(unsigned)(*piVar5 + 0x14),fVar22);
      }
      else {
        uVar20 = *(ulonglong *)(unsigned)(*piVar5 + 0x14);
      }
      if (in_FPSCR_PR == '\0') {
        uVar20 = (ulonglong)
                 (uint)(F32HI(lVar14) * (float)(uVar20 >> 0x20) + (float)uVar20
                       );
      }
      uVar17 = (undefined4)uVar20;
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(unsigned)(puVar12 + -0x6c) = uVar17;
        uVar17 = *(undefined4 *)(unsigned)(puVar12 + 0x38);
      }
      else {
        *(double *)(unsigned)(puVar12 + -0x6c) = in_xd2;
        in_xd2 = *(double *)(unsigned)(puVar12 + 0x38);
      }
      if (in_FPSCR_SZ == '\0') {
        fVar22 = *(float *)(unsigned)(puVar12 + 0x28);
        uVar20 = CONCAT44(*(undefined4 *)(unsigned)(*piVar5 + 0x18),uVar17);
      }
      else {
        fVar22 = (float)((ulonglong)*(undefined8 *)(unsigned)(puVar12 + 0x28) >> 0x20);
        uVar20 = *(ulonglong *)(unsigned)(*piVar5 + 0x18);
      }
      if (in_FPSCR_PR == '\0') {
        uVar20 = (ulonglong)(uint)(fVar22 * (float)(uVar20 >> 0x20) + (float)uVar20);
      }
      if (in_FPSCR_SZ == '\0') {
        *(int *)(unsigned)(puVar12 + -0x68) = (int)uVar20;
      }
      else {
        *(double *)(unsigned)(puVar12 + -0x68) = in_xd2;
      }
      if (in_FPSCR_SZ == '\0') {
        fVar22 = *(float *)(unsigned)(puVar12 + 0x2c);
        dVar32 = CONCAT44D(*(undefined4 *)(unsigned)(*piVar5 + 0x1c),*(undefined4 *)(unsigned)(puVar12 + 0x38));
      }
      else {
        in_xd2 = *(double *)(unsigned)(puVar12 + 0x38);
        fVar22 = (float)((ulonglong)*(undefined8 *)(unsigned)(puVar12 + 0x2c) >> 0x20);
        dVar32 = *(double *)(unsigned)(*piVar5 + 0x1c);
      }
      if (in_FPSCR_PR == '\0') {
        fVar23 = F32HI(dVar32);
        dVar32 = CONCAT44D(fVar23,fVar22 * fVar23 + F32LO(dVar32));
      }
      if (in_FPSCR_SZ == '\0') {
        *(int *)(unsigned)(puVar12 + -100) = SUB84(dVar32,0);
      }
      else {
        *(double *)(unsigned)(puVar12 + -100) = in_xd2;
      }
      if (in_FPSCR_SZ == '\0') {
        uVar17 = *(undefined4 *)(unsigned)(*piVar5 + 0x34);
        dVar32 = CONCAT44D((int)(D2U(dVar32) >> 0x20),uVar17);
        *(undefined4 *)(unsigned)(puVar12 + -0x60) = uVar17;
      }
      else {
        in_xd2 = *(double *)(unsigned)(*piVar5 + 0x34);
        *(double *)(unsigned)(puVar12 + -0x60) = in_xd2;
      }
      if (in_FPSCR_SZ == '\0') {
        uVar17 = *(undefined4 *)(unsigned)(*piVar5 + 0x38);
        dVar32 = CONCAT44D((int)(D2U(dVar32) >> 0x20),uVar17);
        *(undefined4 *)(unsigned)(puVar12 + -0x5c) = uVar17;
      }
      else {
        in_xd2 = *(double *)(unsigned)(*piVar5 + 0x38);
        *(double *)(unsigned)(puVar12 + -0x5c) = in_xd2;
      }
      if (in_FPSCR_SZ == '\0') {
        dVar32 = CONCAT44D((int)(D2U(dVar32) >> 0x20),*(undefined4 *)(unsigned)(*piVar5 + 0x3c));
      }
      else {
        in_xd2 = *(double *)(unsigned)(*piVar5 + 0x3c);
      }
      if (in_FPSCR_SZ == '\0') {
        *(int *)(unsigned)(puVar12 + -0x58) = SUB84(dVar32,0);
      }
      else {
        *(double *)(unsigned)(puVar12 + -0x58) = in_xd2;
      }
      if (iVar11 != 3) {
        piVar5 = (int *)(unsigned)(puVar12 + -0xc);
        if (in_FPSCR_SZ == '\0') {
          dVar32 = CONCAT44D((int)(D2U(dVar32) >> 0x20),*(undefined4 *)(unsigned)(*piVar5 + 0x10)
                                   );
        }
        else {
          in_xd2 = *(double *)(unsigned)(*piVar5 + 0x10);
        }
        if (in_FPSCR_PR == '\0') {
          fVar18 = F32LO(dVar32) * fVar18;
        }
        else {
          fVar18 = SUB84(dVar32 * in_dr10,0);
        }
        if (in_FPSCR_SZ == '\0') {
          in_xd10 = (longlong)in_dr10 << 0x20;
          *(float *)(unsigned)(puVar12 + -0x40) = fVar18;
          fVar18 = *(float *)(unsigned)(puVar12 + 0x30);
        }
        else {
          *(double *)(unsigned)(puVar12 + -0x40) = in_xd2;
          in_xd2 = *(double *)(unsigned)(puVar12 + 0x30);
        }
        if (in_FPSCR_SZ == '\0') {
          uVar20 = CONCAT44(*(undefined4 *)(unsigned)(*piVar5 + 0x14),fVar18);
        }
        else {
          uVar20 = *(ulonglong *)(unsigned)(*piVar5 + 0x14);
        }
        if (in_FPSCR_PR == '\0') {
          uVar20 = (ulonglong)
                   (uint)(F32HI(in_xd10) * (float)(uVar20 >> 0x20) +
                         (float)uVar20);
        }
        uVar17 = (undefined4)uVar20;
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)(unsigned)(puVar12 + -0x3c) = uVar17;
          uVar17 = *(undefined4 *)(unsigned)(puVar12 + 0x34);
        }
        else {
          *(double *)(unsigned)(puVar12 + -0x3c) = in_xd2;
          in_xd2 = *(double *)(unsigned)(puVar12 + 0x34);
        }
        if (in_FPSCR_SZ == '\0') {
          fVar18 = *(float *)(unsigned)(puVar12 + 0x28);
          uVar20 = CONCAT44(*(undefined4 *)(unsigned)(*piVar5 + 0x18),uVar17);
        }
        else {
          fVar18 = (float)((ulonglong)*(undefined8 *)(unsigned)(puVar12 + 0x28) >> 0x20);
          uVar20 = *(ulonglong *)(unsigned)(*piVar5 + 0x18);
        }
        if (in_FPSCR_PR == '\0') {
          uVar20 = (ulonglong)(uint)(fVar18 * (float)(uVar20 >> 0x20) + (float)uVar20);
        }
        if (in_FPSCR_SZ == '\0') {
          *(int *)(unsigned)(puVar12 + -0x38) = (int)uVar20;
        }
        else {
          *(double *)(unsigned)(puVar12 + -0x38) = in_xd2;
        }
        if (in_FPSCR_SZ == '\0') {
          fVar18 = *(float *)(unsigned)(puVar12 + 0x2c);
          uVar20 = CONCAT44(*(undefined4 *)(unsigned)(*piVar5 + 0x1c),*(undefined4 *)(unsigned)(puVar12 + 0x38));
        }
        else {
          in_xd2 = *(double *)(unsigned)(puVar12 + 0x38);
          fVar18 = (float)((ulonglong)*(undefined8 *)(unsigned)(puVar12 + 0x2c) >> 0x20);
          uVar20 = *(ulonglong *)(unsigned)(*piVar5 + 0x1c);
        }
        if (in_FPSCR_PR == '\0') {
          uVar20 = (ulonglong)(uint)(fVar18 * (float)(uVar20 >> 0x20) + (float)uVar20);
        }
        if (in_FPSCR_SZ == '\0') {
          *(int *)(unsigned)(puVar12 + -0x34) = (int)uVar20;
        }
        else {
          *(double *)(unsigned)(puVar12 + -0x34) = in_xd2;
        }
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)(unsigned)(puVar12 + -0x30) = *(undefined4 *)(unsigned)(*piVar5 + 0x34);
        }
        else {
          *(undefined8 *)(unsigned)(puVar12 + -0x30) = *(undefined8 *)(unsigned)(*piVar5 + 0x34);
        }
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)(unsigned)(puVar12 + -0x2c) = *(undefined4 *)(unsigned)(*piVar5 + 0x38);
        }
        else {
          *(undefined8 *)(unsigned)(puVar12 + -0x2c) = *(undefined8 *)(unsigned)(*piVar5 + 0x38);
        }
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)(unsigned)(puVar12 + -0x28) = *(undefined4 *)(unsigned)(*piVar5 + 0x3c);
        }
        else {
          *(undefined8 *)(unsigned)(puVar12 + -0x28) = *(undefined8 *)(unsigned)(*piVar5 + 0x3c);
        }
      }
    }
    if (in_FPSCR_SZ == '\0') {
      uVar29 = *(undefined4 *)(unsigned)(puVar12 + -0xe4);
      uVar17 = *(undefined4 *)(unsigned)(puVar12 + -0xe0);
      uVar24 = *(undefined4 *)(unsigned)(puVar12 + -0xdc);
      uVar27 = *(undefined4 *)(unsigned)(puVar12 + -0xd8);
      puVar10 = (undefined8 *)(unsigned)(puVar12 + -0xd0);
      *(undefined4 *)(unsigned)((int)ar7 + 0x14) = *(undefined4 *)(unsigned)(puVar12 + -0xd4);
      *(undefined4 *)(unsigned)(ar7 + 2) = uVar27;
      *(undefined4 *)(unsigned)((int)ar7 + 0xc) = uVar24;
      *(undefined4 *)(unsigned)(ar7 + 1) = uVar17;
      puVar7 = (undefined8 *)(unsigned)((int)ar7 + 4);
      *(undefined4 *)(unsigned)puVar7 = uVar29;
    }
    else {
      uVar28 = *(undefined8 *)(unsigned)(puVar12 + -0xe4);
      uVar15 = *(undefined8 *)(unsigned)(puVar12 + -0xdc);
      uVar33 = *(undefined8 *)(unsigned)(puVar12 + -0xd4);
      uVar26 = *(undefined8 *)(unsigned)(puVar12 + -0xcc);
      puVar10 = (undefined8 *)(unsigned)(puVar12 + -0xbc);
      ar7[2] = *(undefined8 *)(unsigned)(puVar12 + -0xc4);
      ar7[1] = uVar26;
      *ar7 = uVar33;
      ar7[-1] = uVar15;
      puVar7 = ar7 + -2;
      *puVar7 = uVar28;
    }
    *(undefined4 *)(unsigned)((int)puVar7 + -4) = 0xe0000000;
    if (in_FPSCR_SZ == '\0') {
      uVar31 = *(undefined4 *)(unsigned)puVar10;
      uVar30 = *(undefined4 *)(unsigned)((int)puVar10 + 4);
      uVar24 = *(undefined4 *)(unsigned)(puVar10 + 1);
      uVar29 = *(undefined4 *)(unsigned)((int)puVar10 + 0xc);
      uVar17 = *(undefined4 *)(unsigned)(puVar10 + 2);
      uVar27 = *(undefined4 *)(unsigned)((int)puVar10 + 0x14);
      *(undefined4 *)(unsigned)(puVar7 + 7) = *(undefined4 *)(unsigned)(puVar10 + 3);
      *(undefined4 *)(unsigned)((int)puVar7 + 0x34) = uVar27;
      *(undefined4 *)(unsigned)(puVar7 + 6) = uVar17;
      *(undefined4 *)(unsigned)(puVar7 + 5) = uVar29;
      *(undefined4 *)(unsigned)((int)puVar7 + 0x24) = uVar24;
      *(undefined4 *)(unsigned)(puVar7 + 4) = uVar30;
      *(undefined4 *)(unsigned)((int)puVar7 + 0x1c) = uVar31;
      uVar17 = *(undefined4 *)(unsigned)(puVar12 + -0xb4);
      uVar27 = *(undefined4 *)(unsigned)(puVar12 + -0xb0);
      uVar29 = *(undefined4 *)(unsigned)(puVar12 + -0xac);
      uVar24 = *(undefined4 *)(unsigned)(puVar12 + -0xa8);
      puVar10 = (undefined8 *)(unsigned)(puVar12 + -0xa0);
      *(undefined4 *)(unsigned)(puVar7 + 10) = *(undefined4 *)(unsigned)(puVar12 + -0xa4);
      *(undefined4 *)(unsigned)((int)puVar7 + 0x4c) = uVar24;
      *(undefined4 *)(unsigned)(puVar7 + 9) = uVar29;
      *(undefined4 *)(unsigned)((int)puVar7 + 0x44) = uVar27;
      puVar7 = puVar7 + 8;
      *(undefined4 *)(unsigned)puVar7 = uVar17;
    }
    else {
      uVar28 = *puVar10;
      uVar35 = puVar10[1];
      uVar34 = puVar10[2];
      uVar26 = puVar10[3];
      uVar33 = puVar10[4];
      uVar15 = puVar10[5];
      *(undefined8 *)(unsigned)((int)puVar7 + 0x34) = puVar10[6];
      *(undefined8 *)(unsigned)((int)puVar7 + 0x2c) = uVar15;
      *(undefined8 *)(unsigned)((int)puVar7 + 0x24) = uVar33;
      puVar7[3] = uVar26;
      puVar7[2] = uVar34;
      puVar7[1] = uVar35;
      *puVar7 = uVar28;
      uVar15 = *(undefined8 *)(unsigned)(puVar12 + -0xb4);
      uVar26 = *(undefined8 *)(unsigned)(puVar12 + -0xac);
      uVar28 = *(undefined8 *)(unsigned)(puVar12 + -0xa4);
      uVar33 = *(undefined8 *)(unsigned)(puVar12 + -0x9c);
      puVar10 = (undefined8 *)(unsigned)(puVar12 + -0x8c);
      puVar7[6] = *(undefined8 *)(unsigned)(puVar12 + -0x94);
      puVar7[5] = uVar33;
      puVar7[4] = uVar28;
      puVar7[3] = uVar26;
      puVar7 = puVar7 + 2;
      *puVar7 = uVar15;
    }
    *(undefined4 *)(unsigned)((int)puVar7 + -4) = 0xe0000000;
    if (in_FPSCR_SZ == '\0') {
      uVar31 = *(undefined4 *)(unsigned)puVar10;
      uVar30 = *(undefined4 *)(unsigned)((int)puVar10 + 4);
      uVar24 = *(undefined4 *)(unsigned)(puVar10 + 1);
      uVar29 = *(undefined4 *)(unsigned)((int)puVar10 + 0xc);
      uVar17 = *(undefined4 *)(unsigned)(puVar10 + 2);
      uVar27 = *(undefined4 *)(unsigned)((int)puVar10 + 0x14);
      *(undefined4 *)(unsigned)(puVar7 + 7) = *(undefined4 *)(unsigned)(puVar10 + 3);
      *(undefined4 *)(unsigned)((int)puVar7 + 0x34) = uVar27;
      *(undefined4 *)(unsigned)(puVar7 + 6) = uVar17;
      *(undefined4 *)(unsigned)(puVar7 + 5) = uVar29;
      *(undefined4 *)(unsigned)((int)puVar7 + 0x24) = uVar24;
      *(undefined4 *)(unsigned)(puVar7 + 4) = uVar30;
      puVar7 = (undefined8 *)(unsigned)((int)puVar7 + 0x1c);
      *(undefined4 *)(unsigned)puVar7 = uVar31;
    }
    else {
      uVar28 = *puVar10;
      uVar35 = puVar10[1];
      uVar34 = puVar10[2];
      uVar26 = puVar10[3];
      uVar33 = puVar10[4];
      uVar15 = puVar10[5];
      *(undefined8 *)(unsigned)((int)puVar7 + 0x34) = puVar10[6];
      *(undefined8 *)(unsigned)((int)puVar7 + 0x2c) = uVar15;
      *(undefined8 *)(unsigned)((int)puVar7 + 0x24) = uVar33;
      puVar7[3] = uVar26;
      puVar7[2] = uVar34;
      puVar7[1] = uVar35;
      *puVar7 = uVar28;
    }
    if (iVar11 != 3) {
      if (in_FPSCR_SZ == '\0') {
        uVar27 = *(undefined4 *)(unsigned)(puVar12 + -0x54);
        uVar24 = *(undefined4 *)(unsigned)(puVar12 + -0x50);
        uVar29 = *(undefined4 *)(unsigned)(puVar12 + -0x4c);
        uVar17 = *(undefined4 *)(unsigned)(puVar12 + -0x48);
        puVar10 = (undefined8 *)(unsigned)(puVar12 + -0x40);
        *(undefined4 *)(unsigned)((int)puVar7 + 0x34) = *(undefined4 *)(unsigned)(puVar12 + -0x44);
        *(undefined4 *)(unsigned)(puVar7 + 6) = uVar17;
        *(undefined4 *)(unsigned)((int)puVar7 + 0x2c) = uVar29;
        *(undefined4 *)(unsigned)(puVar7 + 5) = uVar24;
        puVar7 = (undefined8 *)(unsigned)((int)puVar7 + 0x24);
        *(undefined4 *)(unsigned)puVar7 = uVar27;
      }
      else {
        uVar15 = *(undefined8 *)(unsigned)(puVar12 + -0x54);
        uVar33 = *(undefined8 *)(unsigned)(puVar12 + -0x4c);
        uVar26 = *(undefined8 *)(unsigned)(puVar12 + -0x44);
        uVar28 = *(undefined8 *)(unsigned)(puVar12 + -0x3c);
        puVar10 = (undefined8 *)(unsigned)(puVar12 + -0x2c);
        puVar7[6] = *(undefined8 *)(unsigned)(puVar12 + -0x34);
        puVar7[5] = uVar28;
        puVar7[4] = uVar26;
        puVar7[3] = uVar33;
        puVar7 = puVar7 + 2;
        *puVar7 = uVar15;
      }
      *(undefined4 *)(unsigned)((int)puVar7 + -4) = 0xe0000000;
      if (in_FPSCR_SZ == '\0') {
        uVar31 = *(undefined4 *)(unsigned)puVar10;
        uVar30 = *(undefined4 *)(unsigned)((int)puVar10 + 4);
        uVar24 = *(undefined4 *)(unsigned)(puVar10 + 1);
        uVar29 = *(undefined4 *)(unsigned)((int)puVar10 + 0xc);
        uVar27 = *(undefined4 *)(unsigned)(puVar10 + 2);
        uVar17 = *(undefined4 *)(unsigned)((int)puVar10 + 0x14);
        *(undefined4 *)(unsigned)(puVar7 + 7) = *(undefined4 *)(unsigned)(puVar10 + 3);
        *(undefined4 *)(unsigned)((int)puVar7 + 0x34) = uVar17;
        *(undefined4 *)(unsigned)(puVar7 + 6) = uVar27;
        *(undefined4 *)(unsigned)(puVar7 + 5) = uVar29;
        *(undefined4 *)(unsigned)((int)puVar7 + 0x24) = uVar24;
        *(undefined4 *)(unsigned)(puVar7 + 4) = uVar30;
        puVar7 = (undefined8 *)(unsigned)((int)puVar7 + 0x1c);
        *(undefined4 *)(unsigned)puVar7 = uVar31;
      }
      else {
        uVar28 = *puVar10;
        uVar35 = puVar10[1];
        uVar34 = puVar10[2];
        uVar26 = puVar10[3];
        uVar15 = puVar10[4];
        uVar33 = puVar10[5];
        *(undefined8 *)(unsigned)((int)puVar7 + 0x34) = puVar10[6];
        *(undefined8 *)(unsigned)((int)puVar7 + 0x2c) = uVar33;
        *(undefined8 *)(unsigned)((int)puVar7 + 0x24) = uVar15;
        puVar7[3] = uVar26;
        puVar7[2] = uVar34;
        puVar7[1] = uVar35;
        *puVar7 = uVar28;
      }
    }
    if (in_FPSCR_SZ == '\0') {
      uVar17 = *(undefined4 *)(unsigned)(puVar12 + -0x84);
      uVar27 = *(undefined4 *)(unsigned)(puVar12 + -0x80);
      uVar24 = *(undefined4 *)(unsigned)(puVar12 + -0x7c);
      uVar29 = *(undefined4 *)(unsigned)(puVar12 + -0x78);
      puVar10 = (undefined8 *)(unsigned)(puVar12 + -0x70);
      *(undefined4 *)(unsigned)((int)puVar7 + 0x34) = *(undefined4 *)(unsigned)(puVar12 + -0x74);
      *(undefined4 *)(unsigned)(puVar7 + 6) = uVar29;
      *(undefined4 *)(unsigned)((int)puVar7 + 0x2c) = uVar24;
      *(undefined4 *)(unsigned)(puVar7 + 5) = uVar27;
      puVar7 = (undefined8 *)(unsigned)((int)puVar7 + 0x24);
      *(undefined4 *)(unsigned)puVar7 = uVar17;
    }
    else {
      uVar33 = *(undefined8 *)(unsigned)(puVar12 + -0x84);
      uVar26 = *(undefined8 *)(unsigned)(puVar12 + -0x7c);
      uVar15 = *(undefined8 *)(unsigned)(puVar12 + -0x74);
      uVar28 = *(undefined8 *)(unsigned)(puVar12 + -0x6c);
      puVar10 = (undefined8 *)(unsigned)(puVar12 + -0x5c);
      puVar7[6] = *(undefined8 *)(unsigned)(puVar12 + -100);
      puVar7[5] = uVar28;
      puVar7[4] = uVar15;
      puVar7[3] = uVar26;
      puVar7 = puVar7 + 2;
      *puVar7 = uVar33;
    }
    *(undefined4 *)(unsigned)((int)puVar7 + -4) = 0xf0000000;
    if (in_FPSCR_SZ == '\0') {
      uVar31 = *(undefined4 *)(unsigned)puVar10;
      uVar30 = *(undefined4 *)(unsigned)((int)puVar10 + 4);
      uVar29 = *(undefined4 *)(unsigned)(puVar10 + 1);
      uVar24 = *(undefined4 *)(unsigned)((int)puVar10 + 0xc);
      uVar17 = *(undefined4 *)(unsigned)(puVar10 + 2);
      uVar27 = *(undefined4 *)(unsigned)((int)puVar10 + 0x14);
      *(undefined4 *)(unsigned)(puVar7 + 7) = *(undefined4 *)(unsigned)(puVar10 + 3);
      *(undefined4 *)(unsigned)((int)puVar7 + 0x34) = uVar27;
      *(undefined4 *)(unsigned)(puVar7 + 6) = uVar17;
      *(undefined4 *)(unsigned)(puVar7 + 5) = uVar24;
      *(undefined4 *)(unsigned)((int)puVar7 + 0x24) = uVar29;
      *(undefined4 *)(unsigned)(puVar7 + 4) = uVar30;
      puVar7 = (undefined8 *)(unsigned)((int)puVar7 + 0x1c);
      *(undefined4 *)(unsigned)puVar7 = uVar31;
    }
    else {
      uVar28 = *puVar10;
      uVar35 = puVar10[1];
      uVar26 = puVar10[2];
      uVar34 = puVar10[3];
      uVar33 = puVar10[4];
      uVar15 = puVar10[5];
      *(undefined8 *)(unsigned)((int)puVar7 + 0x34) = puVar10[6];
      *(undefined8 *)(unsigned)((int)puVar7 + 0x2c) = uVar15;
      *(undefined8 *)(unsigned)((int)puVar7 + 0x24) = uVar33;
      puVar7[3] = uVar34;
      puVar7[2] = uVar26;
      puVar7[1] = uVar35;
      *puVar7 = uVar28;
    }
    ar7 = puVar7 + 4;
    (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) + iVar11;
  }
  return ar7;
}

__asm__(".globl _FUN_8c225098\n.set _FUN_8c225098, _FUN_8c225098_def\n");
