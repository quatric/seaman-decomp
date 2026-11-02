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
undefined8 * FUN_8c2230f0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined8 *ar7)

{
  ring[rp++ & 255] = "FUN_8c2230f0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 216; for (int i_ = 0; i_ < 216; i_++) z_[i_] = 0; }
  int iVar1;
  double *pdVar2;
  undefined8 *puVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int *piVar9;
  int iVar10;
  undefined8 *puVar11;
  float fVar12;
  double in_dr0 = 0;
  double dVar13;
  longlong lVar14;
  float fVar15;
  undefined4 uVar16;
  float fVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  double dVar20;
  double dVar21;
  undefined4 uVar24;
  double dVar22;
  ulonglong uVar23;
  undefined4 uVar25;
  double in_dr4 = 0;
  longlong in_dr6 = 0;
  uint uVar26;
  undefined4 uVar27;
  double in_dr8 = 0;
  float fVar29;
  undefined8 uVar28;
  double in_dr10 = 0;
  double dVar31;
  float fVar33;
  undefined8 uVar32;
  double in_dr12 = 0;
  double dVar35;
  undefined4 in_fr15 = 0;
  double dVar36;
  double in_xd2 = 0;
  longlong in_xd4 = 0;
  undefined8 uVar37;
  double in_xd6 = 0;
  double in_xd8 = 0;
  undefined8 uVar38;
  double in_xd12 = 0;
  char in_FPSCR_PR = 0;
  char in_FPSCR_SZ = 0;
  undefined4 uVar30;
  undefined4 uVar34;
  
  if (in_FPSCR_SZ == '\0') {
    puVar11 = ((undefined8 *)(fr0_ - 0x2c));
    ((undefined8 *)(fr0_ - 0x2c))[0] = CONCAT44(SUB84(in_dr12,0),(int)((ulonglong)in_dr12 >> 0x20));
  }
  else {
    puVar11 = (undefined8 *)(unsigned)((undefined1 *)(fr0_ - 0x3c));
  }
  if (((*(undefined4 *)(unsigned)(unsigned)0x8c4aa4f0) & 0x10000) == 0) {
    if (in_FPSCR_SZ == '\0') {
      dVar22 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4aa4e0),(*(undefined4 *)(unsigned)(unsigned)0x8c4aa4dc));
      in_dr10 = CONCAT44D((int)((ulonglong)in_dr10 >> 0x20),(*(undefined4 *)(unsigned)(unsigned)0x8c4aa4a8));
      in_fr15 = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa4a8);
    }
    else {
      in_xd2 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4aa4e0),(*(undefined4 *)(unsigned)(unsigned)0x8c4aa4dc));
      dVar22 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4aa4e4),(*(undefined4 *)(unsigned)(unsigned)0x8c4aa4e0));
    }
    if (in_FPSCR_PR == '\0') {
      dVar31 = CONCAT44D((int)((ulonglong)in_dr10 >> 0x20),F32LO(in_dr10) * F32LO(dVar22)
                               );
    }
    else {
      dVar31 = in_dr10 * dVar22;
    }
    puVar8 = (undefined4 *)(unsigned)((int)puVar11 + -0xc);
    if (in_FPSCR_SZ == '\0') {
      dVar36 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4aa4b4),in_fr15);
    }
    else {
      dVar36 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4aa4b8),(*(undefined4 *)(unsigned)(unsigned)0x8c4aa4b4));
    }
    if (in_FPSCR_PR == '\0') {
      dVar36 = CONCAT44D((int)(D2U(dVar36) >> 0x20),
                                F32LO(dVar36) * F32HI(dVar22));
    }
    else {
      dVar36 = dVar36 * dVar22;
    }
    if (in_FPSCR_SZ == '\0') {
      in_dr12 = (double)(ulonglong)(*(undefined4 *)(unsigned)(unsigned)0x8c4aa4b8);
    }
    else {
      in_xd12 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4aa4bc),(*(undefined4 *)(unsigned)(unsigned)0x8c4aa4b8));
    }
    *puVar8 = ar4;
    *(undefined4 *)(unsigned)(puVar11 + -1) = ar5;
    *(undefined4 *)(unsigned)((int)puVar11 + -4) = ar6;
    iVar10 = 0;
    iVar1 = 0;
    iVar5 = 2;
    while( true ) {
      iVar4 = iVar1;
      uVar26 = (uint)((ulonglong)in_dr6 >> 0x20);
      fVar33 = F32HI(dVar31);
      fVar17 = F32HI(in_dr4);
      uVar25 = SUB84(in_dr8,0);
      fVar29 = F32HI(in_dr8);
      if (2 < iVar4) break;
      puVar3 = (undefined8 *)(unsigned)puVar8[iVar5];
      if (in_FPSCR_SZ == '\0') {
        uVar18 = CONCAT44(*(undefined4 *)(unsigned)puVar3,0x3f800000);
      }
      else {
        uVar18 = *puVar3;
      }
      puVar3 = (undefined8 *)(unsigned)puVar8[iVar4];
      if (in_FPSCR_SZ == '\0') {
        uVar19 = CONCAT44(*(undefined4 *)(unsigned)puVar3,(float)uVar18);
      }
      else {
        uVar19 = *puVar3;
      }
      fVar15 = (float)uVar19;
      if (((in_FPSCR_PR == '\0' && (float)uVar18 < F32HI(uVar18)) ^ 1) !=
          -((in_FPSCR_PR == '\0' && fVar15 < F32HI(uVar19)) - 1)) {
        pdVar2 = (double *)(unsigned)puVar8[iVar5];
        *(unsigned *)(unsigned)(puVar11 + -0x16) = pdVar2;
        if (in_FPSCR_SZ == '\0') {
          dVar22 = CONCAT44D(*(undefined4 *)(unsigned)pdVar2,SUB84(in_dr12,0));
        }
        else {
          dVar22 = *pdVar2;
        }
        puVar7 = (undefined4 *)(unsigned)puVar8[iVar4];
        fVar12 = F32HI(dVar22);
        dVar21 = dVar22;
        if (in_FPSCR_SZ == '\0') {
          in_dr0 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),*puVar7);
          dVar21 = in_xd2;
          fVar15 = fVar12;
        }
        dVar20 = CONCAT44D(0x3f800000,-fVar15);
        if (in_FPSCR_PR == '\0') {
          dVar20 = CONCAT44D(0x3f800000,-fVar15 + 1.0);
          dVar13 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),F32LO(in_dr0) - fVar12);
        }
        else {
          dVar20 = dVar20 + dVar20;
          dVar13 = in_dr0 - dVar22;
        }
        fVar15 = F32LO(dVar20);
        dVar35 = dVar21;
        if (in_FPSCR_SZ == '\0') {
          dVar35 = CONCAT44D(fVar15,SUB84(dVar22,0));
        }
        if (in_FPSCR_PR == '\0') {
          in_dr12 = CONCAT44D(F32HI(dVar35) / F32LO(dVar13),
                                     SUB84(dVar35,0));
        }
        else {
          in_dr12 = dVar35 / dVar13;
        }
        if (in_FPSCR_SZ == '\0') {
          fVar15 = *(float *)(unsigned)(pdVar2 + 4);
          dVar20 = CONCAT44D((int)(D2U(dVar20) >> 0x20),fVar15);
          *(float *)(unsigned)(puVar11 + -0x11) = fVar15;
          dVar22 = CONCAT44D(fVar15,puVar7[8]);
        }
        else {
          dVar22 = pdVar2[4];
          puVar11[-0x11] = dVar22;
          dVar21 = dVar22;
        }
        if (in_FPSCR_PR == '\0') {
          fVar12 = F32LO(dVar22) - F32HI(dVar22);
        }
        else {
          fVar12 = SUB84(dVar22 - dVar22,0);
        }
        uVar24 = (undefined4)((ulonglong)in_dr12 >> 0x20);
        dVar22 = in_dr12;
        if (in_FPSCR_SZ == '\0') {
          dVar22 = CONCAT44D(uVar24,fVar12);
        }
        if (in_FPSCR_PR == '\0') {
          dVar20 = CONCAT44D((int)(D2U(dVar20) >> 0x20),
                                    F32HI(dVar22) * F32LO(dVar22) + fVar15);
        }
        fVar15 = F32LO(dVar20);
        if (in_FPSCR_SZ == '\0') {
          *(float *)(unsigned)(puVar11 + -0x10) = fVar15;
        }
        else {
          puVar11[-0x10] = dVar21;
        }
        if (in_FPSCR_SZ == '\0') {
          fVar15 = *(float *)(unsigned)(*(int *)(unsigned)(puVar11 + -0x16) + 0x24);
          dVar20 = CONCAT44D((int)(D2U(dVar20) >> 0x20),fVar15);
          *(float *)(unsigned)(puVar11 + -0x13) = fVar15;
          dVar22 = CONCAT44D(fVar15,puVar7[9]);
        }
        else {
          dVar22 = *(double *)(unsigned)(*(int *)(unsigned)(puVar11 + -0x16) + 0x24);
          puVar11[-0x13] = dVar22;
          dVar21 = dVar22;
        }
        if (in_FPSCR_PR == '\0') {
          fVar12 = F32LO(dVar22) - F32HI(dVar22);
        }
        else {
          fVar12 = SUB84(dVar22 - dVar22,0);
        }
        dVar22 = in_dr12;
        if (in_FPSCR_SZ == '\0') {
          dVar22 = CONCAT44D(uVar24,fVar12);
        }
        if (in_FPSCR_PR == '\0') {
          dVar20 = CONCAT44D((int)(D2U(dVar20) >> 0x20),
                                    F32HI(dVar22) * F32LO(dVar22) + fVar15);
        }
        pdVar2 = (double *)(unsigned)((int)puVar11 + iVar10 * 0x1c + -0x7c);
        if (in_FPSCR_SZ == '\0') {
          *(int *)(unsigned)((int)puVar11 + -0x84) = SUB84(dVar20,0);
          uVar18 = CONCAT44(*(undefined4 *)(unsigned)(puVar11 + -0x10),SUB84(dVar22,0));
          dVar20 = CONCAT44D((int)(D2U(dVar20) >> 0x20),
                                    (int)(D2U(dVar36) >> 0x20));
        }
        else {
          *(double *)(unsigned)((int)puVar11 + -0x84) = dVar21;
          uVar18 = puVar11[-0x10];
          dVar21 = dVar36;
        }
        if (in_FPSCR_PR == '\0') {
          dVar20 = CONCAT44D((int)(D2U(dVar20) >> 0x20),
                                    F32HI(uVar18) * F32LO(dVar31) +
                                    SUB84(dVar20,0));
        }
        if (in_FPSCR_SZ == '\0') {
          *(int *)(unsigned)pdVar2 = SUB84(dVar20,0);
          in_dr0 = CONCAT44D(*(undefined4 *)(unsigned)((int)puVar11 + -0x84),(int)uVar18);
          dVar20 = CONCAT44D((int)(D2U(dVar20) >> 0x20),SUB84(in_dr12,0));
          in_xd2 = dVar21;
        }
        else {
          *pdVar2 = dVar21;
          in_dr0 = *(double *)(unsigned)((int)puVar11 + -0x84);
          in_xd2 = in_xd12;
        }
        if (in_FPSCR_PR == '\0') {
          dVar20 = CONCAT44D((int)(D2U(dVar20) >> 0x20),
                                    F32HI(in_dr0) * F32LO(dVar36) +
                                    SUB84(dVar20,0));
        }
        uVar16 = SUB84(dVar20,0);
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)(unsigned)((int)pdVar2 + 4) = uVar16;
          *(int *)(unsigned)(pdVar2 + 1) = (int)(D2U(dVar20) >> 0x20);
        }
        else {
          *(double *)(unsigned)((int)pdVar2 + 4) = in_xd2;
          pdVar2[1] = dVar20;
        }
        if ((*(undefined4 *)(unsigned)(unsigned)0x8c277acc) == 0) {
          piVar9 = puVar8 + iVar5;
          iVar1 = *piVar9;
          piVar6 = puVar8 + iVar4;
          *(int *)(unsigned)(puVar11 + -0x14) = iVar1;
          if (in_FPSCR_SZ == '\0') {
            uVar16 = *(undefined4 *)(unsigned)(iVar1 + 0x14);
            *(undefined4 *)(unsigned)((int)puVar11 + -0x9c) = uVar16;
          }
          else {
            in_xd2 = *(double *)(unsigned)(iVar1 + 0x14);
            *(double *)(unsigned)((int)puVar11 + -0x9c) = in_xd2;
          }
          if (in_FPSCR_SZ == '\0') {
            dVar21 = CONCAT44D(*(undefined4 *)(unsigned)(*piVar6 + 0x14),uVar16);
            dVar22 = CONCAT44D(uVar16,SUB84(in_dr0,0));
          }
          else {
            dVar21 = *(double *)(unsigned)(*piVar6 + 0x14);
            dVar22 = in_xd2;
          }
          if (in_FPSCR_PR == '\0') {
            dVar21 = CONCAT44D(F32HI(dVar21) -
                                      F32HI(dVar22),SUB84(dVar21,0));
          }
          else {
            dVar21 = dVar21 - dVar22;
          }
          dVar20 = in_dr12;
          if (in_FPSCR_SZ == '\0') {
            dVar20 = CONCAT44D(uVar24,SUB84(dVar22,0));
          }
          if (in_FPSCR_PR == '\0') {
            dVar21 = (double)(ulonglong)
                             (uint)(F32HI(dVar20) *
                                    F32HI(dVar21) + F32LO(dVar21));
          }
          dVar22 = in_dr8;
          lVar14 = in_xd4;
          if (in_FPSCR_SZ == '\0') {
            dVar22 = CONCAT44D(fVar29,SUB84(dVar21,0));
            lVar14 = CONCAT44(SUB84(in_dr4,0),SUB84(dVar20,0));
          }
          if (in_FPSCR_PR == '\0') {
            dVar22 = CONCAT44D(F32HI(lVar14) * F32LO(dVar22) +
                                      F32HI(dVar22),SUB84(dVar22,0));
          }
          if (in_FPSCR_SZ == '\0') {
            *(int *)(unsigned)((int)pdVar2 + 0xc) = (int)(D2U(dVar22) >> 0x20);
          }
          else {
            *(double *)(unsigned)((int)pdVar2 + 0xc) = dVar22;
          }
          iVar1 = *piVar9;
          *(int *)(unsigned)((int)puVar11 + -0xa4) = iVar1;
          if (in_FPSCR_SZ == '\0') {
            uVar16 = *(undefined4 *)(unsigned)(iVar1 + 0x18);
            dVar21 = CONCAT44D(uVar16,(int)lVar14);
            *(undefined4 *)(unsigned)((int)puVar11 + -0x94) = uVar16;
          }
          else {
            dVar21 = *(double *)(unsigned)(iVar1 + 0x18);
            uVar16 = SUB84(dVar22,0);
            *(double *)(unsigned)((int)puVar11 + -0x94) = dVar21;
            in_xd2 = dVar21;
          }
          if (in_FPSCR_SZ == '\0') {
            dVar22 = CONCAT44D(*(undefined4 *)(unsigned)(*piVar6 + 0x18),uVar16);
          }
          else {
            dVar22 = *(double *)(unsigned)(*piVar6 + 0x18);
          }
          if (in_FPSCR_PR == '\0') {
            dVar22 = CONCAT44D(F32HI(dVar22) -
                                      F32HI(dVar21),SUB84(dVar22,0));
          }
          else {
            dVar22 = dVar22 - dVar21;
          }
          dVar20 = in_dr12;
          if (in_FPSCR_SZ == '\0') {
            dVar20 = CONCAT44D(uVar24,SUB84(dVar21,0));
          }
          if (in_FPSCR_PR == '\0') {
            dVar22 = (double)(ulonglong)
                             (uint)(F32HI(dVar20) *
                                    F32HI(dVar22) + F32LO(dVar22));
          }
          dVar21 = in_xd8;
          lVar14 = in_dr6;
          if (in_FPSCR_SZ == '\0') {
            dVar21 = CONCAT44D(uVar25,SUB84(dVar22,0));
            lVar14 = CONCAT44(uVar26,SUB84(dVar20,0));
          }
          if (in_FPSCR_PR == '\0') {
            dVar21 = CONCAT44D(F32HI(lVar14) * F32LO(dVar21) +
                                      F32HI(dVar21),SUB84(dVar21,0));
          }
          if (in_FPSCR_SZ == '\0') {
            *(int *)(unsigned)(pdVar2 + 2) = (int)(D2U(dVar21) >> 0x20);
          }
          else {
            pdVar2[2] = dVar21;
          }
          iVar1 = *piVar9;
          *(int *)(unsigned)(puVar11 + -0x15) = iVar1;
          if (in_FPSCR_SZ == '\0') {
            uVar16 = *(undefined4 *)(unsigned)(iVar1 + 0x1c);
            *(undefined4 *)(unsigned)(puVar11 + -0x12) = uVar16;
          }
          else {
            in_xd2 = *(double *)(unsigned)(iVar1 + 0x1c);
            uVar16 = SUB84(dVar21,0);
            puVar11[-0x12] = in_xd2;
          }
          if (in_FPSCR_SZ == '\0') {
            dVar21 = CONCAT44D(*(undefined4 *)(unsigned)(*piVar6 + 0x1c),uVar16);
            dVar22 = CONCAT44D(uVar16,(int)lVar14);
          }
          else {
            dVar21 = *(double *)(unsigned)(*piVar6 + 0x1c);
            dVar22 = in_xd2;
          }
          if (in_FPSCR_PR == '\0') {
            dVar21 = CONCAT44D(F32HI(dVar21) -
                                      F32HI(dVar22),SUB84(dVar21,0));
          }
          else {
            dVar21 = dVar21 - dVar22;
          }
          dVar20 = in_dr12;
          if (in_FPSCR_SZ == '\0') {
            dVar20 = CONCAT44D(uVar24,SUB84(dVar22,0));
          }
          if (in_FPSCR_PR == '\0') {
            dVar21 = (double)(ulonglong)
                             (uint)(F32HI(dVar20) *
                                    F32HI(dVar21) + F32LO(dVar21));
          }
          dVar13 = dVar31;
          dVar22 = in_xd6;
          if (in_FPSCR_SZ == '\0') {
            dVar13 = CONCAT44D(fVar33,SUB84(dVar21,0));
            dVar22 = CONCAT44D((int)in_dr6,SUB84(dVar20,0));
          }
          if (in_FPSCR_PR == '\0') {
            dVar13 = CONCAT44D(F32HI(dVar22) * F32LO(dVar13) +
                                      F32HI(dVar13),SUB84(dVar13,0));
          }
          if (in_FPSCR_SZ == '\0') {
            *(int *)(unsigned)((int)pdVar2 + 0x14) = (int)(D2U(dVar13) >> 0x20);
          }
          else {
            *(double *)(unsigned)((int)pdVar2 + 0x14) = dVar13;
          }
          iVar1 = *piVar9;
          *(int *)(unsigned)((int)puVar11 + -0xac) = iVar1;
          if (in_FPSCR_SZ == '\0') {
            uVar16 = *(undefined4 *)(unsigned)(iVar1 + 0x10);
            dVar22 = CONCAT44D(uVar16,SUB84(dVar22,0));
            *(undefined4 *)(unsigned)((int)puVar11 + -0x8c) = uVar16;
          }
          else {
            dVar22 = *(double *)(unsigned)(iVar1 + 0x10);
            uVar16 = SUB84(dVar13,0);
            *(double *)(unsigned)((int)puVar11 + -0x8c) = dVar22;
            in_xd2 = dVar22;
          }
          if (in_FPSCR_SZ == '\0') {
            dVar21 = CONCAT44D(*(undefined4 *)(unsigned)(*piVar6 + 0x10),uVar16);
          }
          else {
            dVar21 = *(double *)(unsigned)(*piVar6 + 0x10);
          }
          if (in_FPSCR_PR == '\0') {
            dVar21 = CONCAT44D(F32HI(dVar21) -
                                      F32HI(dVar22),SUB84(dVar21,0));
          }
          else {
            dVar21 = dVar21 - dVar22;
          }
          in_dr0 = in_dr12;
          if (in_FPSCR_SZ == '\0') {
            in_dr0 = CONCAT44D(uVar24,SUB84(dVar22,0));
          }
          if (in_FPSCR_PR == '\0') {
            fVar15 = (F32HI(in_dr0) * F32HI(dVar21) +
                     SUB84(dVar21,0)) * fVar17;
          }
          else {
            fVar15 = SUB84(dVar21 * in_dr4,0);
          }
          if (in_FPSCR_SZ == '\0') {
            *(float *)(unsigned)(pdVar2 + 3) = fVar15;
          }
          else {
            pdVar2[3] = in_xd2;
          }
        }
        iVar10 = iVar10 + 1;
      }
      piVar6 = puVar8 + iVar4;
      if (in_FPSCR_SZ == '\0') {
        uVar18 = CONCAT44(*(undefined4 *)(unsigned)*piVar6,0x3f800000);
      }
      else {
        uVar18 = *(undefined8 *)(unsigned)*piVar6;
      }
      if (in_FPSCR_PR == '\0' && (float)uVar18 < F32HI(uVar18)) {
        if (in_FPSCR_SZ == '\0') {
          uVar18 = CONCAT44(*(undefined4 *)(unsigned)(*piVar6 + 4),(float)uVar18);
        }
        else {
          uVar18 = *(undefined8 *)(unsigned)(*piVar6 + 4);
        }
        puVar3 = (undefined8 *)(unsigned)((int)puVar11 + iVar10 * 0x1c + -0x7c);
        if (in_FPSCR_SZ == '\0') {
          *(int *)(unsigned)puVar3 = (int)((ulonglong)uVar18 >> 0x20);
        }
        else {
          *puVar3 = uVar18;
        }
        if (in_FPSCR_SZ == '\0') {
          uVar24 = *(undefined4 *)(unsigned)(*piVar6 + 8);
          uVar18 = CONCAT44(uVar24,(int)uVar18);
          *(undefined4 *)(unsigned)((int)puVar3 + 4) = uVar24;
        }
        else {
          uVar18 = *(undefined8 *)(unsigned)(*piVar6 + 8);
          *(undefined8 *)(unsigned)((int)puVar3 + 4) = uVar18;
        }
        if (in_FPSCR_SZ == '\0') {
          uVar24 = *(undefined4 *)(unsigned)(*piVar6 + 0xc);
          uVar18 = CONCAT44(uVar24,(int)uVar18);
          *(undefined4 *)(unsigned)(puVar3 + 1) = uVar24;
        }
        else {
          uVar18 = *(undefined8 *)(unsigned)(*piVar6 + 0xc);
          puVar3[1] = uVar18;
        }
        if ((*(undefined4 *)(unsigned)(unsigned)0x8c277acc) == 0) {
          piVar6 = puVar8 + iVar4;
          dVar22 = in_dr8;
          if (in_FPSCR_SZ == '\0') {
            dVar22 = CONCAT44D(fVar29,(int)uVar18);
          }
          lVar14 = in_xd4;
          if (in_FPSCR_SZ == '\0') {
            lVar14 = CONCAT44(SUB84(in_dr4,0),*(undefined4 *)(unsigned)(*piVar6 + 0x14));
          }
          if (in_FPSCR_PR == '\0') {
            dVar22 = CONCAT44D(F32HI(lVar14) * (float)lVar14 +
                                      F32HI(dVar22),SUB84(dVar22,0));
          }
          if (in_FPSCR_SZ == '\0') {
            *(int *)(unsigned)((int)puVar3 + 0xc) = (int)(D2U(dVar22) >> 0x20);
            lVar14 = CONCAT44(uVar26,(float)lVar14);
          }
          else {
            *(double *)(unsigned)((int)puVar3 + 0xc) = dVar22;
            lVar14 = in_dr6;
          }
          dVar21 = in_xd8;
          if (in_FPSCR_SZ == '\0') {
            lVar14 = CONCAT44((int)((ulonglong)lVar14 >> 0x20),*(undefined4 *)(unsigned)(*piVar6 + 0x18));
            dVar21 = CONCAT44D(uVar25,SUB84(dVar22,0));
          }
          if (in_FPSCR_PR == '\0') {
            dVar21 = CONCAT44D(F32HI(lVar14) * (float)lVar14 +
                                      F32HI(dVar21),SUB84(dVar21,0));
          }
          if (in_FPSCR_SZ == '\0') {
            *(int *)(unsigned)(puVar3 + 2) = (int)(D2U(dVar21) >> 0x20);
            in_dr0 = CONCAT44D((int)in_dr6,(float)lVar14);
          }
          else {
            puVar3[2] = dVar21;
            in_dr0 = in_xd6;
          }
          dVar22 = dVar31;
          if (in_FPSCR_SZ == '\0') {
            in_dr0 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),
                                      *(undefined4 *)(unsigned)(*piVar6 + 0x1c));
            dVar22 = CONCAT44D(fVar33,SUB84(dVar21,0));
          }
          if (in_FPSCR_PR == '\0') {
            dVar22 = CONCAT44D(F32HI(in_dr0) * F32LO(in_dr0) +
                                      F32HI(dVar22),SUB84(dVar22,0));
          }
          if (in_FPSCR_SZ == '\0') {
            *(int *)(unsigned)((int)puVar3 + 0x14) = (int)(D2U(dVar22) >> 0x20);
          }
          else {
            *(double *)(unsigned)((int)puVar3 + 0x14) = dVar22;
          }
          if (in_FPSCR_SZ == '\0') {
            dVar22 = CONCAT44D(*(undefined4 *)(unsigned)(*piVar6 + 0x10),SUB84(dVar22,0));
          }
          else {
            dVar22 = *(double *)(unsigned)(*piVar6 + 0x10);
          }
          if (in_FPSCR_PR == '\0') {
            dVar22 = CONCAT44D(F32HI(dVar22) * fVar17,SUB84(dVar22,0));
          }
          else {
            dVar22 = dVar22 * in_dr4;
          }
          if (in_FPSCR_SZ == '\0') {
            *(int *)(unsigned)(puVar3 + 3) = (int)(D2U(dVar22) >> 0x20);
          }
          else {
            puVar3[3] = dVar22;
          }
        }
        iVar10 = iVar10 + 1;
      }
      iVar1 = iVar4 + 1;
      iVar5 = iVar4;
    }
    if ((*(undefined4 *)(unsigned)(unsigned)0x8c277acc) != 0) {
      piVar6 = (int *)(unsigned)((int)puVar11 + -4);
      if (in_FPSCR_SZ == '\0') {
        uVar23 = CONCAT44(*(undefined4 *)(unsigned)(*piVar6 + 0x14),fVar29);
        lVar14 = (longlong)in_dr4 << 0x20;
      }
      else {
        uVar23 = *(ulonglong *)(unsigned)(*piVar6 + 0x14);
        in_xd2 = in_dr8;
        lVar14 = in_xd4;
      }
      if (in_FPSCR_PR == '\0') {
        uVar23 = (ulonglong)
                 (uint)(F32HI(lVar14) * (float)(uVar23 >> 0x20) + (float)uVar23
                       );
      }
      if (in_FPSCR_SZ == '\0') {
        *(int *)(unsigned)(puVar11 + -7) = (int)uVar23;
        lVar14 = (ulonglong)uVar26 << 0x20;
      }
      else {
        puVar11[-7] = in_xd2;
        lVar14 = in_dr6;
      }
      if (in_FPSCR_SZ == '\0') {
        uVar23 = CONCAT44(*(undefined4 *)(unsigned)(*piVar6 + 0x18),uVar25);
      }
      else {
        uVar23 = *(ulonglong *)(unsigned)(*piVar6 + 0x18);
        in_xd2 = in_xd8;
      }
      if (in_FPSCR_PR == '\0') {
        uVar23 = (ulonglong)
                 (uint)(F32HI(lVar14) * (float)(uVar23 >> 0x20) + (float)uVar23
                       );
      }
      if (in_FPSCR_SZ == '\0') {
        *(int *)(unsigned)((int)puVar11 + -0x34) = (int)uVar23;
        dVar22 = (double)(in_dr6 << 0x20);
      }
      else {
        *(double *)(unsigned)((int)puVar11 + -0x34) = in_xd2;
        dVar22 = in_xd6;
      }
      if (in_FPSCR_SZ == '\0') {
        dVar36 = CONCAT44D(*(undefined4 *)(unsigned)(*piVar6 + 0x1c),fVar33);
      }
      else {
        dVar36 = *(double *)(unsigned)(*piVar6 + 0x1c);
        in_xd2 = dVar31;
      }
      if (in_FPSCR_PR == '\0') {
        fVar15 = F32HI(dVar36);
        dVar36 = CONCAT44D(fVar15,F32HI(dVar22) * fVar15 +
                                         SUB84(dVar36,0));
      }
      if (in_FPSCR_SZ == '\0') {
        *(int *)(unsigned)(puVar11 + -6) = SUB84(dVar36,0);
      }
      else {
        puVar11[-6] = in_xd2;
      }
      if (in_FPSCR_SZ == '\0') {
        dVar36 = CONCAT44D((int)(D2U(dVar36) >> 0x20),*(undefined4 *)(unsigned)(*piVar6 + 0x10));
      }
      else {
        in_xd2 = *(double *)(unsigned)(*piVar6 + 0x10);
      }
      if (in_FPSCR_PR == '\0') {
        dVar36 = CONCAT44D((int)(D2U(dVar36) >> 0x20),F32LO(dVar36) * fVar17);
      }
      else {
        dVar36 = dVar36 * in_dr4;
      }
      if (in_FPSCR_SZ == '\0') {
        *(int *)(unsigned)((int)puVar11 + -0x2c) = SUB84(dVar36,0);
      }
      else {
        *(double *)(unsigned)((int)puVar11 + -0x2c) = in_xd2;
      }
      if (iVar10 != 3) {
        piVar6 = (int *)(unsigned)((int)puVar11 + -4);
        if (in_FPSCR_SZ == '\0') {
          in_xd4 = (longlong)in_dr4 << 0x20;
          dVar36 = CONCAT44D((int)(D2U(dVar36) >> 0x20),*(undefined4 *)(unsigned)(*piVar6 + 0x14)
                                   );
        }
        else {
          in_xd2 = *(double *)(unsigned)(*piVar6 + 0x14);
        }
        if (in_FPSCR_PR == '\0') {
          in_dr8 = CONCAT44D(F32HI(in_xd4) * F32LO(dVar36) + fVar29,
                                    uVar25);
        }
        if (in_FPSCR_SZ == '\0') {
          *(int *)(unsigned)((int)puVar11 + -0x1c) = (int)((ulonglong)in_dr8 >> 0x20);
          lVar14 = (ulonglong)uVar26 << 0x20;
        }
        else {
          *(double *)(unsigned)((int)puVar11 + -0x1c) = in_dr8;
          lVar14 = in_dr6;
        }
        if (in_FPSCR_SZ == '\0') {
          dVar36 = CONCAT44D((int)(D2U(dVar36) >> 0x20),*(undefined4 *)(unsigned)(*piVar6 + 0x18)
                                   );
        }
        else {
          in_xd2 = *(double *)(unsigned)(*piVar6 + 0x18);
        }
        if (in_FPSCR_PR == '\0') {
          in_dr8 = (double)(ulonglong)
                           (uint)(F32HI(lVar14) * F32LO(dVar36) +
                                 SUB84(in_dr8,0));
        }
        if (in_FPSCR_SZ == '\0') {
          in_xd6 = (double)(in_dr6 << 0x20);
          *(int *)(unsigned)(puVar11 + -3) = SUB84(in_dr8,0);
        }
        else {
          puVar11[-3] = in_xd8;
        }
        if (in_FPSCR_SZ == '\0') {
          dVar36 = CONCAT44D((int)(D2U(dVar36) >> 0x20),*(undefined4 *)(unsigned)(*piVar6 + 0x1c)
                                   );
        }
        else {
          in_xd2 = *(double *)(unsigned)(*piVar6 + 0x1c);
        }
        if (in_FPSCR_PR == '\0') {
          dVar31 = CONCAT44D(F32HI(in_xd6) * F32LO(dVar36) + fVar33,
                                    SUB84(dVar31,0));
        }
        if (in_FPSCR_SZ == '\0') {
          *(int *)(unsigned)((int)puVar11 + -0x14) = (int)(D2U(dVar31) >> 0x20);
        }
        else {
          *(double *)(unsigned)((int)puVar11 + -0x14) = dVar31;
        }
        if (in_FPSCR_SZ == '\0') {
          dVar36 = CONCAT44D((int)(D2U(dVar36) >> 0x20),*(undefined4 *)(unsigned)(*piVar6 + 0x10)
                                   );
        }
        else {
          in_xd2 = *(double *)(unsigned)(*piVar6 + 0x10);
        }
        if (in_FPSCR_PR == '\0') {
          fVar17 = F32LO(dVar36) * fVar17;
        }
        else {
          fVar17 = SUB84(dVar36 * in_dr4,0);
        }
        if (in_FPSCR_SZ == '\0') {
          *(float *)(unsigned)(puVar11 + -2) = fVar17;
        }
        else {
          puVar11[-2] = in_xd2;
        }
      }
    }
    if (in_FPSCR_SZ == '\0') {
      uVar34 = *(undefined4 *)(unsigned)((int)puVar11 + -0x7c);
      uVar27 = *(undefined4 *)(unsigned)(puVar11 + -0xf);
      uVar30 = *(undefined4 *)(unsigned)((int)puVar11 + -0x74);
      uVar25 = *(undefined4 *)(unsigned)(puVar11 + -0xe);
      uVar16 = *(undefined4 *)(unsigned)((int)puVar11 + -0x6c);
      uVar24 = *(undefined4 *)(unsigned)((int)puVar11 + -100);
      *(undefined4 *)(unsigned)((int)ar7 + 0x1c) = *(undefined4 *)(unsigned)(puVar11 + -0xd);
      *(undefined4 *)(unsigned)(ar7 + 3) = uVar16;
      *(undefined4 *)(unsigned)((int)ar7 + 0x14) = uVar25;
      *(undefined4 *)(unsigned)(ar7 + 2) = uVar24;
      *(undefined4 *)(unsigned)((int)ar7 + 0xc) = uVar30;
      *(undefined4 *)(unsigned)(ar7 + 1) = uVar27;
      puVar3 = (undefined8 *)(unsigned)((int)ar7 + 4);
      *(undefined4 *)(unsigned)puVar3 = uVar34;
    }
    else {
      uVar32 = *(undefined8 *)(unsigned)((int)puVar11 + -0x7c);
      uVar38 = *(undefined8 *)(unsigned)((int)puVar11 + -0x74);
      uVar28 = *(undefined8 *)(unsigned)((int)puVar11 + -0x6c);
      uVar37 = *(undefined8 *)(unsigned)((int)puVar11 + -100);
      uVar19 = *(undefined8 *)(unsigned)((int)puVar11 + -0x5c);
      uVar18 = *(undefined8 *)(unsigned)((int)puVar11 + -0x4c);
      ar7[3] = *(undefined8 *)(unsigned)((int)puVar11 + -0x54);
      ar7[2] = uVar19;
      ar7[1] = uVar37;
      *ar7 = uVar18;
      ar7[-1] = uVar28;
      ar7[-2] = uVar38;
      puVar3 = ar7 + -3;
      *puVar3 = uVar32;
    }
    *(undefined4 *)(unsigned)((int)puVar3 + -4) = 0xe0000000;
    if (in_FPSCR_SZ == '\0') {
      uVar30 = *(undefined4 *)(unsigned)(puVar11 + -0xc);
      uVar27 = *(undefined4 *)(unsigned)((int)puVar11 + -0x5c);
      uVar34 = *(undefined4 *)(unsigned)(puVar11 + -0xb);
      uVar25 = *(undefined4 *)(unsigned)((int)puVar11 + -0x54);
      uVar16 = *(undefined4 *)(unsigned)(puVar11 + -10);
      uVar24 = *(undefined4 *)(unsigned)(puVar11 + -9);
      *(undefined4 *)(unsigned)(puVar3 + 7) = *(undefined4 *)(unsigned)((int)puVar11 + -0x4c);
      *(undefined4 *)(unsigned)((int)puVar3 + 0x34) = uVar16;
      *(undefined4 *)(unsigned)(puVar3 + 6) = uVar25;
      *(undefined4 *)(unsigned)((int)puVar3 + 0x2c) = uVar24;
      *(undefined4 *)(unsigned)(puVar3 + 5) = uVar34;
      *(undefined4 *)(unsigned)((int)puVar3 + 0x24) = uVar27;
      puVar3 = puVar3 + 4;
      *(undefined4 *)(unsigned)puVar3 = uVar30;
    }
    else {
      uVar28 = puVar11[-0xc];
      uVar38 = puVar11[-0xb];
      uVar32 = puVar11[-10];
      uVar37 = puVar11[-9];
      uVar19 = puVar11[-8];
      uVar18 = puVar11[-6];
      *(undefined8 *)(unsigned)((int)puVar3 + 0x34) = puVar11[-7];
      *(undefined8 *)(unsigned)((int)puVar3 + 0x2c) = uVar19;
      *(undefined8 *)(unsigned)((int)puVar3 + 0x24) = uVar37;
      *(undefined8 *)(unsigned)((int)puVar3 + 0x1c) = uVar18;
      *(undefined8 *)(unsigned)((int)puVar3 + 0x14) = uVar32;
      *(undefined8 *)(unsigned)((int)puVar3 + 0xc) = uVar38;
      puVar3 = (undefined8 *)(unsigned)((int)puVar3 + 4);
      *puVar3 = uVar28;
    }
    *(undefined4 *)(unsigned)((int)puVar3 + -4) = 0xe0000000;
    if (iVar10 != 3) {
      if (in_FPSCR_SZ == '\0') {
        uVar34 = *(undefined4 *)(unsigned)(puVar11 + -5);
        uVar30 = *(undefined4 *)(unsigned)((int)puVar11 + -0x24);
        uVar27 = *(undefined4 *)(unsigned)(puVar11 + -4);
        uVar25 = *(undefined4 *)(unsigned)((int)puVar11 + -0x1c);
        uVar16 = *(undefined4 *)(unsigned)(puVar11 + -3);
        uVar24 = *(undefined4 *)(unsigned)(puVar11 + -2);
        *(undefined4 *)(unsigned)(puVar3 + 7) = *(undefined4 *)(unsigned)((int)puVar11 + -0x14);
        *(undefined4 *)(unsigned)((int)puVar3 + 0x34) = uVar16;
        *(undefined4 *)(unsigned)(puVar3 + 6) = uVar25;
        *(undefined4 *)(unsigned)((int)puVar3 + 0x2c) = uVar24;
        *(undefined4 *)(unsigned)(puVar3 + 5) = uVar27;
        *(undefined4 *)(unsigned)((int)puVar3 + 0x24) = uVar30;
        puVar3 = puVar3 + 4;
        *(undefined4 *)(unsigned)puVar3 = uVar34;
      }
      else {
        uVar32 = puVar11[-5];
        uVar28 = puVar11[-4];
        uVar38 = puVar11[-3];
        uVar37 = puVar11[-2];
        uVar19 = puVar11[-1];
        uVar18 = puVar11[1];
        *(undefined8 *)(unsigned)((int)puVar3 + 0x34) = *puVar11;
        *(undefined8 *)(unsigned)((int)puVar3 + 0x2c) = uVar19;
        *(undefined8 *)(unsigned)((int)puVar3 + 0x24) = uVar37;
        *(undefined8 *)(unsigned)((int)puVar3 + 0x1c) = uVar18;
        *(undefined8 *)(unsigned)((int)puVar3 + 0x14) = uVar38;
        *(undefined8 *)(unsigned)((int)puVar3 + 0xc) = uVar28;
        puVar3 = (undefined8 *)(unsigned)((int)puVar3 + 4);
        *puVar3 = uVar32;
      }
      *(undefined4 *)(unsigned)((int)puVar3 + -4) = 0xe0000000;
    }
    if (in_FPSCR_SZ == '\0') {
      uVar30 = *(undefined4 *)(unsigned)((int)puVar11 + -0x44);
      uVar34 = *(undefined4 *)(unsigned)(puVar11 + -8);
      uVar27 = *(undefined4 *)(unsigned)((int)puVar11 + -0x3c);
      uVar25 = *(undefined4 *)(unsigned)(puVar11 + -7);
      uVar16 = *(undefined4 *)(unsigned)((int)puVar11 + -0x34);
      uVar24 = *(undefined4 *)(unsigned)((int)puVar11 + -0x2c);
      *(undefined4 *)(unsigned)(puVar3 + 7) = *(undefined4 *)(unsigned)(puVar11 + -6);
      *(undefined4 *)(unsigned)((int)puVar3 + 0x34) = uVar16;
      *(undefined4 *)(unsigned)(puVar3 + 6) = uVar25;
      *(undefined4 *)(unsigned)((int)puVar3 + 0x2c) = uVar24;
      *(undefined4 *)(unsigned)(puVar3 + 5) = uVar27;
      *(undefined4 *)(unsigned)((int)puVar3 + 0x24) = uVar34;
      puVar3 = puVar3 + 4;
      *(undefined4 *)(unsigned)puVar3 = uVar30;
    }
    else {
      uVar28 = *(undefined8 *)(unsigned)((int)puVar11 + -0x44);
      uVar32 = *(undefined8 *)(unsigned)((int)puVar11 + -0x3c);
      uVar38 = *(undefined8 *)(unsigned)((int)puVar11 + -0x34);
      uVar37 = *(undefined8 *)(unsigned)((int)puVar11 + -0x2c);
      uVar19 = *(undefined8 *)(unsigned)((int)puVar11 + -0x24);
      uVar18 = *(undefined8 *)(unsigned)((int)puVar11 + -0x14);
      *(undefined8 *)(unsigned)((int)puVar3 + 0x34) = *(undefined8 *)(unsigned)((int)puVar11 + -0x1c);
      *(undefined8 *)(unsigned)((int)puVar3 + 0x2c) = uVar19;
      *(undefined8 *)(unsigned)((int)puVar3 + 0x24) = uVar37;
      *(undefined8 *)(unsigned)((int)puVar3 + 0x1c) = uVar18;
      *(undefined8 *)(unsigned)((int)puVar3 + 0x14) = uVar38;
      *(undefined8 *)(unsigned)((int)puVar3 + 0xc) = uVar32;
      puVar3 = (undefined8 *)(unsigned)((int)puVar3 + 4);
      *puVar3 = uVar28;
    }
    *(undefined4 *)(unsigned)((int)puVar3 + -4) = 0xf0000000;
    ar7 = (undefined8 *)(unsigned)((int)puVar3 + 0x1c);
    (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) + iVar10;
  }
  return ar7;
}

__asm__(".globl _FUN_8c2230f0\n.set _FUN_8c2230f0, _FUN_8c2230f0_def\n");
