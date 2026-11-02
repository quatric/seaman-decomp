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
undefined8 * FUN_8c226474_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined8 *ar7)

{
  ring[rp++ & 255] = "FUN_8c226474";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 340; for (int i_ = 0; i_ < 340; i_++) z_[i_] = 0; }
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
  undefined4 *puVar12;
  double in_dr0 = 0;
  float fVar13;
  undefined4 uVar14;
  float fVar15;
  undefined4 uVar16;
  undefined8 uVar17;
  double dVar18;
  double dVar19;
  float fVar20;
  double in_dr4 = 0;
  float fVar21;
  undefined8 in_dr6 = 0;
  double dVar22;
  undefined8 uVar23;
  undefined8 in_dr8 = 0;
  undefined8 uVar25;
  undefined4 uVar27;
  double in_dr10 = 0;
  float fVar28;
  undefined4 uVar29;
  float fVar30;
  double in_dr12 = 0;
  double dVar31;
  double in_xd0 = 0;
  double in_xd2 = 0;
  double in_xd4 = 0;
  double dVar32;
  double in_xd6 = 0;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 in_xd8 = 0;
  undefined8 uVar35;
  bool bVar36;
  bool bVar37;
  char in_FPSCR_PR = 0;
  char in_FPSCR_SZ = 0;
  undefined4 uVar24;
  undefined4 uVar26;
  
  if (in_FPSCR_SZ == '\0') {
    puVar12 = ((undefined4 *)(fr0_ - 0x28));
    (*(undefined4 *)(fr0_ + (int)0xffffffd4)) = CONCAT44(SUB84(in_dr12,0),(*(uint*)((uchar*)((undefined1 *)(fr0_ - 0x34))+8)));
  }
  else {
    puVar12 = (undefined4 *)(unsigned)((undefined1 *)(fr0_ - 0x34));
  }
  if (((*(undefined4 *)(unsigned)(unsigned)0x8c4aa4f0) & 0x10000) == 0) {
    if (in_FPSCR_SZ == '\0') {
      in_dr12 = CONCAT44D((int)((ulonglong)in_dr12 >> 0x20),(*(undefined4 *)(unsigned)(unsigned)0x8c4aa4a8));
      dVar31 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4aa4b4),(*(undefined4 *)(unsigned)(unsigned)0x8c4aa4a8));
      in_dr0 = (double)(ulonglong)(*(undefined4 *)(unsigned)(unsigned)0x8c4aa4b8);
      dVar19 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4aa4e0),(*(undefined4 *)(unsigned)(unsigned)0x8c4aa4dc));
    }
    else {
      dVar31 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4aa4b8),(*(undefined4 *)(unsigned)(unsigned)0x8c4aa4b4));
      in_xd0 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4aa4bc),(*(undefined4 *)(unsigned)(unsigned)0x8c4aa4b8));
      dVar19 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4aa4e4),(*(undefined4 *)(unsigned)(unsigned)0x8c4aa4e0));
      in_xd2 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4aa4e0),(*(undefined4 *)(unsigned)(unsigned)0x8c4aa4dc));
    }
    puVar1 = (undefined4 *)(unsigned)((int)puVar12 + -0x24);
    *puVar1 = ar4;
    if (in_FPSCR_SZ == '\0') {
      *(int *)(unsigned)((int)puVar12 + -0x20) = (int)((ulonglong)in_dr4 >> 0x20);
      *(int *)(unsigned)((int)puVar12 + -0x1c) = SUB84(in_dr4,0);
    }
    else {
      *(double *)(unsigned)((int)puVar12 + -0x20) = in_dr4;
      *(double *)(unsigned)((int)puVar12 + -0x1c) = in_xd4;
    }
    if (in_FPSCR_PR == '\0') {
      dVar31 = CONCAT44D((int)(D2U(dVar31) >> 0x20),F32LO(dVar31) * F32LO(dVar19));
    }
    else {
      dVar31 = dVar31 * dVar19;
    }
    *(undefined4 *)(unsigned)((int)puVar12 + -0x18) = ar5;
    if (in_FPSCR_PR == '\0') {
      fVar30 = F32LO(in_dr12) * F32HI(dVar19);
    }
    else {
      fVar30 = SUB84(in_dr12 * dVar19,0);
    }
    uVar14 = (undefined4)((ulonglong)in_dr6 >> 0x20);
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(unsigned)((int)puVar12 + -0x14) = uVar14;
      *(int *)(unsigned)((int)puVar12 + -0x10) = (int)in_dr6;
    }
    else {
      *(undefined8 *)(unsigned)((int)puVar12 + -0x14) = in_dr6;
      *(double *)(unsigned)((int)puVar12 + -0x10) = in_xd6;
    }
    *(undefined4 *)(unsigned)((int)puVar12 + -0xc) = ar6;
    if (in_FPSCR_SZ == '\0') {
      *(int *)(unsigned)((int)puVar12 + -8) = (int)((ulonglong)in_dr8 >> 0x20);
      *(int *)(unsigned)((int)puVar12 + -4) = (int)in_dr8;
    }
    else {
      *(undefined8 *)(unsigned)((int)puVar12 + -8) = in_dr8;
      *(undefined8 *)(unsigned)((int)puVar12 + -4) = in_xd8;
    }
    iVar11 = 0;
    dVar18 = CONCAT44D(uVar14,0x3f800000);
    iVar2 = 0;
    iVar6 = 2;
    while( true ) {
      iVar3 = iVar2;
      uVar14 = (undefined4)(D2U(dVar19) >> 0x20);
      fVar15 = F32LO(in_dr10);
      fVar28 = F32HI(in_dr10);
      if (2 < iVar3) break;
      puVar8 = puVar1 + iVar6 * 3;
      if (in_FPSCR_SZ == '\0') {
        dVar19 = CONCAT44D(uVar14,*(undefined4 *)(unsigned)*puVar8);
      }
      else {
        in_xd2 = *(double *)(unsigned)*puVar8;
      }
      piVar5 = puVar1 + iVar3 * 3;
      fVar20 = F32LO(dVar18);
      if (in_FPSCR_PR == '\0') {
        bVar36 = fVar20 < SUB84(dVar19,0);
      }
      else {
        bVar36 = dVar18 < dVar19;
      }
      if (in_FPSCR_SZ == '\0') {
        dVar19 = CONCAT44D((int)(D2U(dVar19) >> 0x20),*(undefined4 *)(unsigned)*piVar5);
      }
      else {
        in_xd2 = *(double *)(unsigned)*piVar5;
      }
      if (in_FPSCR_PR == '\0') {
        bVar37 = fVar20 < SUB84(dVar19,0);
      }
      else {
        bVar37 = dVar18 < dVar19;
      }
      if ((bVar36 ^ 1) != -(bVar37 - 1)) {
        pdVar4 = (double *)(unsigned)*puVar8;
        puVar10 = (undefined8 *)(unsigned)*piVar5;
        if (in_FPSCR_SZ == '\0') {
          fVar21 = *(float *)(unsigned)pdVar4;
          uVar17 = CONCAT44(*(undefined4 *)(unsigned)puVar10,fVar21);
          dVar19 = CONCAT44D(fVar21,SUB84(in_dr4,0));
        }
        else {
          in_xd2 = *pdVar4;
          uVar17 = *puVar10;
          fVar21 = F32HI(in_xd2);
          dVar19 = in_xd2;
        }
        fVar13 = F32HI(uVar17);
        if (in_FPSCR_PR == '\0') {
          dVar19 = CONCAT44D(fVar13 - fVar21,-(float)uVar17 + fVar20);
        }
        else {
          dVar19 = (CONCAT44D(fVar13,-(float)uVar17) + dVar18) - dVar19;
        }
        if (in_FPSCR_SZ == '\0') {
          dVar18 = CONCAT44D(SUB84(dVar19,0),*(float *)(unsigned)(pdVar4 + 4));
        }
        else {
          in_xd4 = pdVar4[4];
          dVar18 = in_xd2;
        }
        if (in_FPSCR_PR == '\0') {
          in_dr4 = CONCAT44D(F32HI(dVar18) /
                                    F32HI(dVar19),SUB84(dVar18,0));
        }
        else {
          in_dr4 = dVar18 / dVar19;
        }
        if (in_FPSCR_SZ == '\0') {
          dVar19 = CONCAT44D(SUB84(in_dr4,0),*(undefined4 *)(unsigned)(puVar10 + 4));
        }
        else {
          in_xd2 = (double)puVar10[4];
          dVar19 = in_xd4;
        }
        if (in_FPSCR_PR == '\0') {
          dVar19 = CONCAT44D((int)(D2U(dVar19) >> 0x20),
                                    F32LO(dVar19) - F32LO(in_dr4));
        }
        else {
          dVar19 = dVar19 - in_dr4;
        }
        if (in_FPSCR_SZ == '\0') {
          dVar22 = CONCAT44D(*(float *)(unsigned)((int)pdVar4 + 0x24),fVar20);
        }
        else {
          dVar22 = *(double *)(unsigned)((int)pdVar4 + 0x24);
        }
        uVar14 = (undefined4)((ulonglong)in_dr4 >> 0x20);
        dVar32 = in_dr4;
        if (in_FPSCR_SZ == '\0') {
          dVar32 = CONCAT44D(uVar14,SUB84(in_dr0,0));
        }
        fVar20 = F32HI(dVar32);
        if (in_FPSCR_PR == '\0') {
          dVar19 = CONCAT44D(fVar20 * F32LO(dVar19) + F32HI(dVar19),
                                    SUB84(dVar19,0));
        }
        if (in_FPSCR_SZ == '\0') {
          dVar19 = CONCAT44D((int)(D2U(dVar19) >> 0x20),
                                    *(undefined4 *)(unsigned)((int)puVar10 + 0x24));
        }
        else {
          in_xd2 = *(double *)(unsigned)((int)puVar10 + 0x24);
        }
        fVar21 = F32HI(dVar22);
        if (in_FPSCR_PR == '\0') {
          dVar19 = CONCAT44D((int)(D2U(dVar19) >> 0x20),F32LO(dVar19) - fVar21);
        }
        else {
          dVar19 = dVar19 - dVar22;
        }
        dVar18 = dVar22;
        if (in_FPSCR_SZ == '\0') {
          in_dr4 = CONCAT44D(uVar14,(int)(D2U(dVar19) >> 0x20));
          dVar18 = CONCAT44D(fVar21,SUB84(dVar19,0));
          dVar19 = in_xd4;
        }
        if (in_FPSCR_PR == '\0') {
          dVar18 = CONCAT44D(fVar20 * F32LO(dVar18) + F32HI(dVar18),
                                    SUB84(dVar18,0));
        }
        fVar20 = F32LO(in_dr4);
        if (in_FPSCR_SZ == '\0') {
          dVar18 = CONCAT44D((int)(D2U(dVar18) >> 0x20),SUB84(dVar22,0));
          fVar21 = F32HI(dVar31);
          dVar22 = CONCAT44D(fVar20,SUB84(dVar32,0));
        }
        else {
          fVar21 = F32LO(dVar18);
          dVar22 = dVar19;
          in_xd2 = dVar31;
        }
        if (in_FPSCR_PR == '\0') {
          fVar21 = F32HI(dVar22) * F32LO(dVar31) + fVar21;
        }
        pdVar4 = (double *)(unsigned)((int)puVar12 + iVar11 * 0x30 + -0xe4);
        if (in_FPSCR_SZ == '\0') {
          fVar13 = F32LO(dVar22);
          *(float *)(unsigned)pdVar4 = fVar21;
          fVar21 = fVar13;
          dVar22 = CONCAT44D((int)(D2U(dVar18) >> 0x20),fVar13);
        }
        else {
          *pdVar4 = in_xd2;
          in_xd2 = in_xd0;
          fVar13 = F32LO(dVar18);
          dVar22 = dVar18;
        }
        if (in_FPSCR_PR == '\0') {
          fVar21 = F32HI(dVar22) * fVar30 + fVar21;
        }
        uVar14 = (undefined4)((ulonglong)in_dr4 >> 0x20);
        if (in_FPSCR_SZ == '\0') {
          *(float *)(unsigned)((int)pdVar4 + 4) = fVar21;
          *(float *)(unsigned)(pdVar4 + 1) = SUB84(dVar18,0);
          fVar20 = (float)(uint)puVar8[1];
          in_dr4 = CONCAT44D(uVar14,fVar20);
          dVar32 = CONCAT44D(fVar20,piVar5[1]);
          in_xd4 = dVar19;
          dVar22 = CONCAT44D(uVar14,fVar13);
        }
        else {
          *(double *)(unsigned)((int)pdVar4 + 4) = in_xd2;
          pdVar4[1] = in_xd6;
          dVar32 = *(double *)(unsigned)(puVar8 + 1);
          in_xd2 = *(double *)(unsigned)(piVar5 + 1);
          in_xd4 = dVar32;
          dVar22 = in_dr4;
        }
        fVar21 = F32HI(dVar22);
        if (in_FPSCR_PR == '\0') {
          fVar20 = F32LO(dVar32) - fVar20;
          dVar32 = CONCAT44D(fVar21 * fVar20 + F32HI(dVar32),fVar20);
        }
        else {
          dVar32 = dVar32 - in_dr4;
        }
        uVar14 = (undefined4)(D2U(dVar32) >> 0x20);
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)(unsigned)((int)pdVar4 + 0xc) = uVar14;
          dVar32 = CONCAT44D(uVar14,piVar5[2]);
          in_dr4 = CONCAT44D((int)((ulonglong)in_dr4 >> 0x20),puVar8[2]);
        }
        else {
          *(double *)(unsigned)((int)pdVar4 + 0xc) = dVar32;
          in_xd2 = *(double *)(unsigned)(piVar5 + 2);
          in_xd4 = *(double *)(unsigned)(puVar8 + 2);
        }
        fVar20 = F32LO(in_dr4);
        if (in_FPSCR_PR == '\0') {
          fVar13 = F32LO(dVar32) - fVar20;
        }
        else {
          fVar13 = SUB84(dVar32 - in_dr4,0);
        }
        dVar19 = in_xd4;
        if (in_FPSCR_SZ == '\0') {
          dVar19 = CONCAT44D(fVar20,fVar13);
        }
        if (in_FPSCR_PR == '\0') {
          dVar19 = CONCAT44D(fVar21 * F32LO(dVar19) + F32HI(dVar19),
                                    SUB84(dVar19,0));
        }
        if (in_FPSCR_SZ == '\0') {
          *(int *)(unsigned)(pdVar4 + 2) = (int)(D2U(dVar19) >> 0x20);
        }
        else {
          pdVar4[2] = dVar19;
        }
        in_dr0 = dVar22;
        if ((*(undefined4 *)(unsigned)(unsigned)0x8c277acc) == 0) {
          piVar5 = puVar1 + iVar6 * 3;
          uVar14 = (undefined4)((ulonglong)in_dr4 >> 0x20);
          in_dr0 = in_dr4;
          if (in_FPSCR_SZ == '\0') {
            in_dr0 = CONCAT44D(uVar14,SUB84(dVar22,0));
          }
          iVar2 = *piVar5;
          *(int *)(unsigned)((int)puVar12 + -0xe8) = iVar2;
          if (in_FPSCR_SZ == '\0') {
            fVar20 = *(float *)(unsigned)(iVar2 + 0x10);
            in_dr4 = CONCAT44D(uVar14,fVar20);
            dVar19 = CONCAT44D(fVar20,SUB84(dVar19,0));
          }
          else {
            dVar19 = *(double *)(unsigned)(iVar2 + 0x10);
            in_xd4 = dVar19;
          }
          piVar9 = puVar1 + iVar3 * 3;
          if (in_FPSCR_SZ == '\0') {
            dVar19 = CONCAT44D((int)(D2U(dVar19) >> 0x20),
                                      *(undefined4 *)(unsigned)(*piVar9 + 0x10));
          }
          else {
            in_xd2 = *(double *)(unsigned)(*piVar9 + 0x10);
          }
          fVar21 = F32HI(in_dr0);
          if (in_FPSCR_PR == '\0') {
            fVar20 = F32LO(dVar19) - fVar20;
            dVar19 = CONCAT44D((fVar21 * fVar20 + F32HI(dVar19)) *
                                      fVar28,fVar20);
          }
          else {
            dVar19 = (dVar19 - in_dr4) * in_dr10;
          }
          uVar14 = (undefined4)(D2U(dVar19) >> 0x20);
          if (in_FPSCR_SZ == '\0') {
            *(undefined4 *)(unsigned)((int)pdVar4 + 0x14) = uVar14;
          }
          else {
            *(double *)(unsigned)((int)pdVar4 + 0x14) = dVar19;
          }
          iVar2 = *piVar5;
          *(int *)(unsigned)((int)puVar12 + -0xec) = iVar2;
          if (in_FPSCR_SZ == '\0') {
            in_dr4 = CONCAT44D((int)((ulonglong)in_dr4 >> 0x20),*(undefined4 *)(unsigned)(iVar2 + 0x14)
                                     );
          }
          else {
            in_xd4 = *(double *)(unsigned)(iVar2 + 0x14);
          }
          if (in_FPSCR_SZ == '\0') {
            dVar19 = CONCAT44D(uVar14,*(undefined4 *)(unsigned)(*piVar9 + 0x14));
          }
          else {
            in_xd2 = *(double *)(unsigned)(*piVar9 + 0x14);
          }
          if (in_FPSCR_PR == '\0') {
            fVar20 = F32LO(dVar19) - F32LO(in_dr4);
          }
          else {
            fVar20 = SUB84(dVar19 - in_dr4,0);
          }
          dVar19 = in_xd4;
          if (in_FPSCR_SZ == '\0') {
            dVar19 = CONCAT44D(SUB84(in_dr4,0),fVar20);
          }
          if (in_FPSCR_PR == '\0') {
            dVar19 = CONCAT44D(fVar21 * F32LO(dVar19) + F32HI(dVar19)
                                      + fVar15,SUB84(dVar19,0));
          }
          else {
            dVar19 = dVar19 + in_dr10;
          }
          if (in_FPSCR_SZ == '\0') {
            *(int *)(unsigned)(pdVar4 + 3) = (int)(D2U(dVar19) >> 0x20);
          }
          else {
            pdVar4[3] = dVar19;
          }
          iVar2 = *piVar5;
          *(int *)(unsigned)((int)puVar12 + -0xf0) = iVar2;
          if (in_FPSCR_SZ == '\0') {
            in_dr4 = CONCAT44D((int)((ulonglong)in_dr4 >> 0x20),*(undefined4 *)(unsigned)(iVar2 + 0x18)
                                     );
          }
          else {
            in_xd4 = *(double *)(unsigned)(iVar2 + 0x18);
          }
          if (in_FPSCR_SZ == '\0') {
            dVar19 = CONCAT44D(SUB84(in_dr4,0),*(undefined4 *)(unsigned)(*piVar9 + 0x18));
          }
          else {
            in_xd2 = *(double *)(unsigned)(*piVar9 + 0x18);
            dVar19 = in_xd4;
          }
          if (in_FPSCR_PR == '\0') {
            fVar20 = F32LO(dVar19) - F32LO(in_dr4);
            dVar19 = CONCAT44D(fVar21 * fVar20 + F32HI(dVar19),fVar20);
          }
          else {
            dVar19 = dVar19 - in_dr4;
          }
          if (in_FPSCR_SZ == '\0') {
            dVar19 = CONCAT44D((int)(D2U(dVar19) >> 0x20),
                                      *(undefined4 *)(unsigned)((int)puVar12 + 0x28));
          }
          else {
            in_xd2 = *(double *)(unsigned)((int)puVar12 + 0x28);
          }
          if (in_FPSCR_PR == '\0') {
            dVar19 = CONCAT44D(F32HI(dVar19) + F32LO(dVar19),
                                      SUB84(dVar19,0));
          }
          else {
            dVar19 = dVar19 + dVar19;
          }
          if (in_FPSCR_SZ == '\0') {
            *(int *)(unsigned)((int)pdVar4 + 0x1c) = (int)(D2U(dVar19) >> 0x20);
          }
          else {
            *(double *)(unsigned)((int)pdVar4 + 0x1c) = dVar19;
          }
          iVar2 = *piVar5;
          *(int *)(unsigned)((int)puVar12 + -0xf4) = iVar2;
          if (in_FPSCR_SZ == '\0') {
            in_dr4 = CONCAT44D((int)((ulonglong)in_dr4 >> 0x20),*(undefined4 *)(unsigned)(iVar2 + 0x1c)
                                     );
          }
          else {
            in_xd4 = *(double *)(unsigned)(iVar2 + 0x1c);
          }
          if (in_FPSCR_SZ == '\0') {
            dVar19 = CONCAT44D(SUB84(in_dr4,0),*(undefined4 *)(unsigned)(*piVar9 + 0x1c));
          }
          else {
            in_xd2 = *(double *)(unsigned)(*piVar9 + 0x1c);
            dVar19 = in_xd4;
          }
          if (in_FPSCR_PR == '\0') {
            fVar20 = F32LO(dVar19) - F32LO(in_dr4);
            dVar19 = CONCAT44D(fVar21 * fVar20 + F32HI(dVar19),fVar20);
          }
          else {
            dVar19 = dVar19 - in_dr4;
          }
          if (in_FPSCR_SZ == '\0') {
            dVar19 = CONCAT44D((int)(D2U(dVar19) >> 0x20),
                                      *(undefined4 *)(unsigned)((int)puVar12 + 0x2c));
          }
          else {
            in_xd2 = *(double *)(unsigned)((int)puVar12 + 0x2c);
          }
          if (in_FPSCR_PR == '\0') {
            dVar19 = CONCAT44D(F32HI(dVar19) + F32LO(dVar19),
                                      SUB84(dVar19,0));
          }
          else {
            dVar19 = dVar19 + dVar19;
          }
          if (in_FPSCR_SZ == '\0') {
            *(int *)(unsigned)(pdVar4 + 4) = (int)(D2U(dVar19) >> 0x20);
          }
          else {
            pdVar4[4] = dVar19;
          }
          iVar2 = *piVar5;
          *(int *)(unsigned)((int)puVar12 + -0xf8) = iVar2;
          if (in_FPSCR_SZ == '\0') {
            in_dr4 = CONCAT44D((int)((ulonglong)in_dr4 >> 0x20),*(undefined4 *)(unsigned)(iVar2 + 0x34)
                                     );
          }
          else {
            in_xd4 = *(double *)(unsigned)(iVar2 + 0x34);
          }
          if (in_FPSCR_SZ == '\0') {
            dVar19 = CONCAT44D(SUB84(in_dr4,0),*(undefined4 *)(unsigned)(*piVar9 + 0x34));
          }
          else {
            in_xd2 = *(double *)(unsigned)(*piVar9 + 0x34);
            dVar19 = in_xd4;
          }
          if (in_FPSCR_PR == '\0') {
            fVar20 = F32LO(dVar19) - F32LO(in_dr4);
            dVar19 = CONCAT44D(fVar21 * fVar20 + F32HI(dVar19),fVar20);
          }
          else {
            dVar19 = dVar19 - in_dr4;
          }
          if (in_FPSCR_SZ == '\0') {
            *(int *)(unsigned)((int)pdVar4 + 0x24) = (int)(D2U(dVar19) >> 0x20);
          }
          else {
            *(double *)(unsigned)((int)pdVar4 + 0x24) = dVar19;
          }
          iVar2 = *piVar5;
          *(int *)(unsigned)((int)puVar12 + -0xfc) = iVar2;
          if (in_FPSCR_SZ == '\0') {
            in_dr4 = CONCAT44D((int)((ulonglong)in_dr4 >> 0x20),*(undefined4 *)(unsigned)(iVar2 + 0x38)
                                     );
          }
          else {
            in_xd4 = *(double *)(unsigned)(iVar2 + 0x38);
          }
          fVar20 = F32LO(in_dr4);
          if (in_FPSCR_SZ == '\0') {
            dVar19 = CONCAT44D(fVar20,*(undefined4 *)(unsigned)(*piVar9 + 0x38));
          }
          else {
            in_xd2 = *(double *)(unsigned)(*piVar9 + 0x38);
            dVar19 = in_xd4;
          }
          if (in_FPSCR_PR == '\0') {
            fVar13 = F32LO(dVar19) - fVar20;
            dVar19 = CONCAT44D(fVar21 * fVar13 + F32HI(dVar19),fVar13);
          }
          else {
            dVar19 = dVar19 - in_dr4;
          }
          if (in_FPSCR_SZ == '\0') {
            *(int *)(unsigned)(pdVar4 + 5) = (int)(D2U(dVar19) >> 0x20);
          }
          else {
            pdVar4[5] = dVar19;
          }
          iVar2 = *piVar5;
          *(int *)(unsigned)((int)puVar12 + -0x100) = iVar2;
          if (in_FPSCR_SZ == '\0') {
            fVar20 = *(float *)(unsigned)(iVar2 + 0x3c);
            in_dr4 = CONCAT44D((int)((ulonglong)in_dr4 >> 0x20),fVar20);
            dVar19 = CONCAT44D(fVar20,*(undefined4 *)(unsigned)(*piVar9 + 0x3c));
          }
          else {
            dVar19 = *(double *)(unsigned)(iVar2 + 0x3c);
            in_xd2 = *(double *)(unsigned)(*piVar9 + 0x3c);
            in_xd4 = dVar19;
          }
          if (in_FPSCR_PR == '\0') {
            fVar20 = F32LO(dVar19) - fVar20;
            dVar19 = CONCAT44D(fVar21 * fVar20 + F32HI(dVar19),fVar20);
          }
          else {
            dVar19 = dVar19 - in_dr4;
          }
          if (in_FPSCR_SZ == '\0') {
            *(int *)(unsigned)((int)pdVar4 + 0x2c) = (int)(D2U(dVar19) >> 0x20);
          }
          else {
            *(double *)(unsigned)((int)pdVar4 + 0x2c) = dVar19;
          }
        }
        iVar11 = iVar11 + 1;
      }
      piVar5 = puVar1 + iVar3 * 3;
      if (in_FPSCR_SZ == '\0') {
        dVar19 = CONCAT44D((int)(D2U(dVar19) >> 0x20),*(undefined4 *)(unsigned)*piVar5);
      }
      else {
        in_xd2 = *(double *)(unsigned)*piVar5;
      }
      if (in_FPSCR_PR == '\0') {
        bVar36 = SUB84(dVar18,0) < SUB84(dVar19,0);
      }
      else {
        bVar36 = dVar18 < dVar19;
      }
      if (bVar36) {
        pdVar4 = (double *)(unsigned)((int)puVar12 + iVar11 * 0x30 + -0xe4);
        if (in_FPSCR_SZ == '\0') {
          uVar14 = *(undefined4 *)(unsigned)(*piVar5 + 4);
          dVar19 = CONCAT44D((int)(D2U(dVar19) >> 0x20),uVar14);
          *(undefined4 *)(unsigned)pdVar4 = uVar14;
        }
        else {
          in_xd2 = *(double *)(unsigned)(*piVar5 + 4);
          *pdVar4 = in_xd2;
        }
        if (in_FPSCR_SZ == '\0') {
          uVar14 = *(undefined4 *)(unsigned)(*piVar5 + 8);
          dVar19 = CONCAT44D((int)(D2U(dVar19) >> 0x20),uVar14);
          *(undefined4 *)(unsigned)((int)pdVar4 + 4) = uVar14;
        }
        else {
          in_xd2 = *(double *)(unsigned)(*piVar5 + 8);
          *(double *)(unsigned)((int)pdVar4 + 4) = in_xd2;
        }
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)(unsigned)(pdVar4 + 1) = *(undefined4 *)(unsigned)(*piVar5 + 0xc);
          *(int *)(unsigned)((int)pdVar4 + 0xc) = piVar5[1];
          dVar19 = CONCAT44D((int)(D2U(dVar19) >> 0x20),piVar5[2]);
          *(int *)(unsigned)(pdVar4 + 2) = piVar5[2];
        }
        else {
          pdVar4[1] = *(double *)(unsigned)(*piVar5 + 0xc);
          *(undefined8 *)(unsigned)((int)pdVar4 + 0xc) = *(undefined8 *)(unsigned)(piVar5 + 1);
          in_xd2 = *(double *)(unsigned)(piVar5 + 2);
          pdVar4[2] = in_xd2;
        }
        if ((*(undefined4 *)(unsigned)(unsigned)0x8c277acc) == 0) {
          piVar5 = puVar1 + iVar3 * 3;
          if (in_FPSCR_SZ == '\0') {
            dVar19 = CONCAT44D((int)(D2U(dVar19) >> 0x20),
                                      *(undefined4 *)(unsigned)(*piVar5 + 0x10));
          }
          else {
            in_xd2 = *(double *)(unsigned)(*piVar5 + 0x10);
          }
          if (in_FPSCR_PR == '\0') {
            dVar19 = CONCAT44D((int)(D2U(dVar19) >> 0x20),F32LO(dVar19) * fVar28);
          }
          else {
            dVar19 = dVar19 * in_dr10;
          }
          if (in_FPSCR_SZ == '\0') {
            *(int *)(unsigned)((int)pdVar4 + 0x14) = SUB84(dVar19,0);
          }
          else {
            *(double *)(unsigned)((int)pdVar4 + 0x14) = in_xd2;
          }
          if (in_FPSCR_SZ == '\0') {
            dVar19 = CONCAT44D((int)(D2U(dVar19) >> 0x20),
                                      *(undefined4 *)(unsigned)(*piVar5 + 0x14));
          }
          else {
            in_xd2 = *(double *)(unsigned)(*piVar5 + 0x14);
          }
          if (in_FPSCR_PR == '\0') {
            fVar15 = F32LO(dVar19) + fVar15;
          }
          else {
            fVar15 = SUB84(dVar19 + in_dr10,0);
          }
          if (in_FPSCR_SZ == '\0') {
            *(float *)(unsigned)(pdVar4 + 3) = fVar15;
            fVar15 = *(float *)(unsigned)((int)puVar12 + 0x28);
          }
          else {
            pdVar4[3] = in_xd2;
            in_xd2 = *(double *)(unsigned)((int)puVar12 + 0x28);
          }
          if (in_FPSCR_SZ == '\0') {
            dVar19 = CONCAT44D(*(undefined4 *)(unsigned)(*piVar5 + 0x18),fVar15);
          }
          else {
            dVar19 = *(double *)(unsigned)(*piVar5 + 0x18);
          }
          if (in_FPSCR_PR == '\0') {
            dVar19 = CONCAT44D(F32HI(dVar19) + F32LO(dVar19),
                                      SUB84(dVar19,0));
          }
          else {
            dVar19 = dVar19 + dVar19;
          }
          if (in_FPSCR_SZ == '\0') {
            *(int *)(unsigned)((int)pdVar4 + 0x1c) = (int)(D2U(dVar19) >> 0x20);
            dVar19 = (double)(ulonglong)*(uint *)(unsigned)((int)puVar12 + 0x2c);
          }
          else {
            *(double *)(unsigned)((int)pdVar4 + 0x1c) = dVar19;
            in_xd2 = *(double *)(unsigned)((int)puVar12 + 0x2c);
          }
          if (in_FPSCR_SZ == '\0') {
            dVar19 = CONCAT44D(*(undefined4 *)(unsigned)(*piVar5 + 0x1c),SUB84(dVar19,0));
          }
          else {
            dVar19 = *(double *)(unsigned)(*piVar5 + 0x1c);
          }
          if (in_FPSCR_PR == '\0') {
            dVar19 = CONCAT44D(F32HI(dVar19) + F32LO(dVar19),
                                      SUB84(dVar19,0));
          }
          else {
            dVar19 = dVar19 + dVar19;
          }
          uVar14 = (undefined4)(D2U(dVar19) >> 0x20);
          if (in_FPSCR_SZ == '\0') {
            *(undefined4 *)(unsigned)(pdVar4 + 4) = uVar14;
          }
          else {
            pdVar4[4] = dVar19;
          }
          if (in_FPSCR_SZ == '\0') {
            uVar16 = *(undefined4 *)(unsigned)(*piVar5 + 0x34);
            dVar19 = CONCAT44D(uVar14,uVar16);
            *(undefined4 *)(unsigned)((int)pdVar4 + 0x24) = uVar16;
          }
          else {
            in_xd2 = *(double *)(unsigned)(*piVar5 + 0x34);
            *(double *)(unsigned)((int)pdVar4 + 0x24) = in_xd2;
          }
          if (in_FPSCR_SZ == '\0') {
            uVar14 = *(undefined4 *)(unsigned)(*piVar5 + 0x38);
            dVar19 = CONCAT44D((int)(D2U(dVar19) >> 0x20),uVar14);
            *(undefined4 *)(unsigned)(pdVar4 + 5) = uVar14;
          }
          else {
            in_xd2 = *(double *)(unsigned)(*piVar5 + 0x38);
            pdVar4[5] = in_xd2;
          }
          if (in_FPSCR_SZ == '\0') {
            uVar14 = *(undefined4 *)(unsigned)(*piVar5 + 0x3c);
            dVar19 = CONCAT44D((int)(D2U(dVar19) >> 0x20),uVar14);
            *(undefined4 *)(unsigned)((int)pdVar4 + 0x2c) = uVar14;
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
      piVar5 = (int *)(unsigned)((int)puVar12 + -0xc);
      if (in_FPSCR_SZ == '\0') {
        dVar19 = CONCAT44D(uVar14,*(undefined4 *)(unsigned)(*piVar5 + 0x10));
      }
      else {
        in_xd2 = *(double *)(unsigned)(*piVar5 + 0x10);
      }
      if (in_FPSCR_PR == '\0') {
        dVar19 = CONCAT44D((int)(D2U(dVar19) >> 0x20),F32LO(dVar19) * fVar28);
      }
      else {
        dVar19 = dVar19 * in_dr10;
      }
      if (in_FPSCR_SZ == '\0') {
        *(int *)(unsigned)((int)puVar12 + -0x70) = SUB84(dVar19,0);
      }
      else {
        *(double *)(unsigned)((int)puVar12 + -0x70) = in_xd2;
      }
      if (in_FPSCR_SZ == '\0') {
        dVar19 = CONCAT44D((int)(D2U(dVar19) >> 0x20),*(undefined4 *)(unsigned)(*piVar5 + 0x14));
      }
      else {
        in_xd2 = *(double *)(unsigned)(*piVar5 + 0x14);
      }
      if (in_FPSCR_PR == '\0') {
        fVar30 = F32LO(dVar19) + fVar15;
      }
      else {
        fVar30 = SUB84(dVar19 + in_dr10,0);
      }
      if (in_FPSCR_SZ == '\0') {
        *(float *)(unsigned)((int)puVar12 + -0x6c) = fVar30;
        fVar30 = *(float *)(unsigned)((int)puVar12 + 0x28);
      }
      else {
        *(double *)(unsigned)((int)puVar12 + -0x6c) = in_xd2;
        in_xd2 = *(double *)(unsigned)((int)puVar12 + 0x28);
      }
      if (in_FPSCR_SZ == '\0') {
        dVar31 = CONCAT44D(*(undefined4 *)(unsigned)(*piVar5 + 0x18),fVar30);
      }
      else {
        dVar31 = *(double *)(unsigned)(*piVar5 + 0x18);
      }
      if (in_FPSCR_PR == '\0') {
        dVar31 = CONCAT44D(F32HI(dVar31) + F32LO(dVar31),
                                  SUB84(dVar31,0));
      }
      else {
        dVar31 = dVar31 + dVar31;
      }
      if (in_FPSCR_SZ == '\0') {
        *(int *)(unsigned)((int)puVar12 + -0x68) = (int)(D2U(dVar31) >> 0x20);
      }
      else {
        *(double *)(unsigned)((int)puVar12 + -0x68) = dVar31;
      }
      if (in_FPSCR_SZ == '\0') {
        dVar31 = CONCAT44D(*(undefined4 *)(unsigned)(*piVar5 + 0x1c),
                                  *(undefined4 *)(unsigned)((int)puVar12 + 0x2c));
      }
      else {
        in_xd2 = *(double *)(unsigned)((int)puVar12 + 0x2c);
        dVar31 = *(double *)(unsigned)(*piVar5 + 0x1c);
      }
      if (in_FPSCR_PR == '\0') {
        dVar31 = CONCAT44D(F32HI(dVar31) + F32LO(dVar31),
                                  SUB84(dVar31,0));
      }
      else {
        dVar31 = dVar31 + dVar31;
      }
      uVar14 = (undefined4)(D2U(dVar31) >> 0x20);
      if (in_FPSCR_SZ == '\0') {
        *(undefined4 *)(unsigned)((int)puVar12 + -100) = uVar14;
      }
      else {
        *(double *)(unsigned)((int)puVar12 + -100) = dVar31;
      }
      if (in_FPSCR_SZ == '\0') {
        uVar16 = *(undefined4 *)(unsigned)(*piVar5 + 0x34);
        dVar31 = CONCAT44D(uVar14,uVar16);
        *(undefined4 *)(unsigned)((int)puVar12 + -0x60) = uVar16;
      }
      else {
        in_xd2 = *(double *)(unsigned)(*piVar5 + 0x34);
        *(double *)(unsigned)((int)puVar12 + -0x60) = in_xd2;
      }
      if (in_FPSCR_SZ == '\0') {
        uVar14 = *(undefined4 *)(unsigned)(*piVar5 + 0x38);
        dVar31 = CONCAT44D((int)(D2U(dVar31) >> 0x20),uVar14);
        *(undefined4 *)(unsigned)((int)puVar12 + -0x5c) = uVar14;
      }
      else {
        in_xd2 = *(double *)(unsigned)(*piVar5 + 0x38);
        *(double *)(unsigned)((int)puVar12 + -0x5c) = in_xd2;
      }
      if (in_FPSCR_SZ == '\0') {
        dVar31 = CONCAT44D((int)(D2U(dVar31) >> 0x20),*(undefined4 *)(unsigned)(*piVar5 + 0x3c));
      }
      else {
        in_xd2 = *(double *)(unsigned)(*piVar5 + 0x3c);
      }
      if (in_FPSCR_SZ == '\0') {
        *(int *)(unsigned)((int)puVar12 + -0x58) = SUB84(dVar31,0);
      }
      else {
        *(double *)(unsigned)((int)puVar12 + -0x58) = in_xd2;
      }
      if (iVar11 != 3) {
        piVar5 = (int *)(unsigned)((int)puVar12 + -0xc);
        if (in_FPSCR_SZ == '\0') {
          dVar31 = CONCAT44D((int)(D2U(dVar31) >> 0x20),*(undefined4 *)(unsigned)(*piVar5 + 0x10)
                                   );
        }
        else {
          in_xd2 = *(double *)(unsigned)(*piVar5 + 0x10);
        }
        if (in_FPSCR_PR == '\0') {
          dVar31 = CONCAT44D((int)(D2U(dVar31) >> 0x20),F32LO(dVar31) * fVar28);
        }
        else {
          dVar31 = dVar31 * in_dr10;
        }
        if (in_FPSCR_SZ == '\0') {
          *(int *)(unsigned)((int)puVar12 + -0x40) = SUB84(dVar31,0);
        }
        else {
          *(double *)(unsigned)((int)puVar12 + -0x40) = in_xd2;
        }
        if (in_FPSCR_SZ == '\0') {
          dVar31 = CONCAT44D((int)(D2U(dVar31) >> 0x20),*(undefined4 *)(unsigned)(*piVar5 + 0x14)
                                   );
        }
        else {
          in_xd2 = *(double *)(unsigned)(*piVar5 + 0x14);
        }
        if (in_FPSCR_PR == '\0') {
          fVar15 = F32LO(dVar31) + fVar15;
        }
        else {
          fVar15 = SUB84(dVar31 + in_dr10,0);
        }
        if (in_FPSCR_SZ == '\0') {
          *(float *)(unsigned)((int)puVar12 + -0x3c) = fVar15;
          fVar15 = *(float *)(unsigned)((int)puVar12 + 0x28);
        }
        else {
          *(double *)(unsigned)((int)puVar12 + -0x3c) = in_xd2;
        }
        if (in_FPSCR_SZ == '\0') {
          dVar31 = CONCAT44D(*(undefined4 *)(unsigned)(*piVar5 + 0x18),fVar15);
        }
        else {
          dVar31 = *(double *)(unsigned)(*piVar5 + 0x18);
        }
        if (in_FPSCR_PR == '\0') {
          dVar31 = CONCAT44D(F32HI(dVar31) + F32LO(dVar31),
                                    SUB84(dVar31,0));
        }
        else {
          dVar31 = dVar31 + dVar31;
        }
        if (in_FPSCR_SZ == '\0') {
          *(int *)(unsigned)((int)puVar12 + -0x38) = (int)(D2U(dVar31) >> 0x20);
          dVar31 = (double)(ulonglong)*(uint *)(unsigned)((int)puVar12 + 0x2c);
        }
        else {
          *(double *)(unsigned)((int)puVar12 + -0x38) = dVar31;
        }
        if (in_FPSCR_SZ == '\0') {
          dVar31 = CONCAT44D(*(undefined4 *)(unsigned)(*piVar5 + 0x1c),SUB84(dVar31,0));
        }
        else {
          dVar31 = *(double *)(unsigned)(*piVar5 + 0x1c);
        }
        if (in_FPSCR_PR == '\0') {
          dVar31 = CONCAT44D(F32HI(dVar31) + F32LO(dVar31),
                                    SUB84(dVar31,0));
        }
        else {
          dVar31 = dVar31 + dVar31;
        }
        if (in_FPSCR_SZ == '\0') {
          *(int *)(unsigned)((int)puVar12 + -0x34) = (int)(D2U(dVar31) >> 0x20);
        }
        else {
          *(double *)(unsigned)((int)puVar12 + -0x34) = dVar31;
        }
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)(unsigned)((int)puVar12 + -0x30) = *(undefined4 *)(unsigned)(*piVar5 + 0x34);
        }
        else {
          *(undefined8 *)(unsigned)((int)puVar12 + -0x30) = *(undefined8 *)(unsigned)(*piVar5 + 0x34);
        }
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)(unsigned)((int)puVar12 + -0x2c) = *(undefined4 *)(unsigned)(*piVar5 + 0x38);
        }
        else {
          *(undefined8 *)(unsigned)((int)puVar12 + -0x2c) = *(undefined8 *)(unsigned)(*piVar5 + 0x38);
        }
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)(unsigned)((int)puVar12 + -0x28) = *(undefined4 *)(unsigned)(*piVar5 + 0x3c);
        }
        else {
          *(undefined8 *)(unsigned)((int)puVar12 + -0x28) = *(undefined8 *)(unsigned)(*piVar5 + 0x3c);
        }
      }
    }
    if (in_FPSCR_SZ == '\0') {
      uVar26 = *(undefined4 *)(unsigned)((int)puVar12 + -0xe4);
      uVar14 = *(undefined4 *)(unsigned)((int)puVar12 + -0xe0);
      uVar16 = *(undefined4 *)(unsigned)((int)puVar12 + -0xdc);
      uVar24 = *(undefined4 *)(unsigned)((int)puVar12 + -0xd8);
      puVar10 = (undefined8 *)(unsigned)((int)puVar12 + -0xd0);
      *(undefined4 *)(unsigned)((int)ar7 + 0x14) = *(undefined4 *)(unsigned)((int)puVar12 + -0xd4);
      *(undefined4 *)(unsigned)(ar7 + 2) = uVar24;
      *(undefined4 *)(unsigned)((int)ar7 + 0xc) = uVar16;
      *(undefined4 *)(unsigned)(ar7 + 1) = uVar14;
      puVar7 = (undefined8 *)(unsigned)((int)ar7 + 4);
      *(undefined4 *)(unsigned)puVar7 = uVar26;
    }
    else {
      uVar25 = *(undefined8 *)(unsigned)((int)puVar12 + -0xe4);
      uVar17 = *(undefined8 *)(unsigned)((int)puVar12 + -0xdc);
      uVar33 = *(undefined8 *)(unsigned)((int)puVar12 + -0xd4);
      uVar23 = *(undefined8 *)(unsigned)((int)puVar12 + -0xcc);
      puVar10 = (undefined8 *)(unsigned)((int)puVar12 + -0xbc);
      ar7[2] = *(undefined8 *)(unsigned)((int)puVar12 + -0xc4);
      ar7[1] = uVar23;
      *ar7 = uVar33;
      ar7[-1] = uVar17;
      puVar7 = ar7 + -2;
      *puVar7 = uVar25;
    }
    *(undefined4 *)(unsigned)((int)puVar7 + -4) = 0xe0000000;
    if (in_FPSCR_SZ == '\0') {
      uVar29 = *(undefined4 *)(unsigned)puVar10;
      uVar27 = *(undefined4 *)(unsigned)((int)puVar10 + 4);
      uVar26 = *(undefined4 *)(unsigned)(puVar10 + 1);
      uVar16 = *(undefined4 *)(unsigned)((int)puVar10 + 0xc);
      uVar24 = *(undefined4 *)(unsigned)(puVar10 + 2);
      uVar14 = *(undefined4 *)(unsigned)((int)puVar10 + 0x14);
      *(undefined4 *)(unsigned)(puVar7 + 7) = *(undefined4 *)(unsigned)(puVar10 + 3);
      *(undefined4 *)(unsigned)((int)puVar7 + 0x34) = uVar14;
      *(undefined4 *)(unsigned)(puVar7 + 6) = uVar24;
      *(undefined4 *)(unsigned)(puVar7 + 5) = uVar16;
      *(undefined4 *)(unsigned)((int)puVar7 + 0x24) = uVar26;
      *(undefined4 *)(unsigned)(puVar7 + 4) = uVar27;
      *(undefined4 *)(unsigned)((int)puVar7 + 0x1c) = uVar29;
      uVar14 = *(undefined4 *)(unsigned)((int)puVar12 + -0xb4);
      uVar26 = *(undefined4 *)(unsigned)((int)puVar12 + -0xb0);
      uVar16 = *(undefined4 *)(unsigned)((int)puVar12 + -0xac);
      uVar24 = *(undefined4 *)(unsigned)((int)puVar12 + -0xa8);
      puVar10 = (undefined8 *)(unsigned)((int)puVar12 + -0xa0);
      *(undefined4 *)(unsigned)(puVar7 + 10) = *(undefined4 *)(unsigned)((int)puVar12 + -0xa4);
      *(undefined4 *)(unsigned)((int)puVar7 + 0x4c) = uVar24;
      *(undefined4 *)(unsigned)(puVar7 + 9) = uVar16;
      *(undefined4 *)(unsigned)((int)puVar7 + 0x44) = uVar26;
      puVar7 = puVar7 + 8;
      *(undefined4 *)(unsigned)puVar7 = uVar14;
    }
    else {
      uVar25 = *puVar10;
      uVar35 = puVar10[1];
      uVar23 = puVar10[2];
      uVar34 = puVar10[3];
      uVar17 = puVar10[4];
      uVar33 = puVar10[5];
      *(undefined8 *)(unsigned)((int)puVar7 + 0x34) = puVar10[6];
      *(undefined8 *)(unsigned)((int)puVar7 + 0x2c) = uVar33;
      *(undefined8 *)(unsigned)((int)puVar7 + 0x24) = uVar17;
      puVar7[3] = uVar34;
      puVar7[2] = uVar23;
      puVar7[1] = uVar35;
      *puVar7 = uVar25;
      uVar17 = *(undefined8 *)(unsigned)((int)puVar12 + -0xb4);
      uVar25 = *(undefined8 *)(unsigned)((int)puVar12 + -0xac);
      uVar33 = *(undefined8 *)(unsigned)((int)puVar12 + -0xa4);
      uVar23 = *(undefined8 *)(unsigned)((int)puVar12 + -0x9c);
      puVar10 = (undefined8 *)(unsigned)((int)puVar12 + -0x8c);
      puVar7[6] = *(undefined8 *)(unsigned)((int)puVar12 + -0x94);
      puVar7[5] = uVar23;
      puVar7[4] = uVar33;
      puVar7[3] = uVar25;
      puVar7 = puVar7 + 2;
      *puVar7 = uVar17;
    }
    *(undefined4 *)(unsigned)((int)puVar7 + -4) = 0xe0000000;
    if (in_FPSCR_SZ == '\0') {
      uVar29 = *(undefined4 *)(unsigned)puVar10;
      uVar27 = *(undefined4 *)(unsigned)((int)puVar10 + 4);
      uVar16 = *(undefined4 *)(unsigned)(puVar10 + 1);
      uVar26 = *(undefined4 *)(unsigned)((int)puVar10 + 0xc);
      uVar14 = *(undefined4 *)(unsigned)(puVar10 + 2);
      uVar24 = *(undefined4 *)(unsigned)((int)puVar10 + 0x14);
      *(undefined4 *)(unsigned)(puVar7 + 7) = *(undefined4 *)(unsigned)(puVar10 + 3);
      *(undefined4 *)(unsigned)((int)puVar7 + 0x34) = uVar24;
      *(undefined4 *)(unsigned)(puVar7 + 6) = uVar14;
      *(undefined4 *)(unsigned)(puVar7 + 5) = uVar26;
      *(undefined4 *)(unsigned)((int)puVar7 + 0x24) = uVar16;
      *(undefined4 *)(unsigned)(puVar7 + 4) = uVar27;
      puVar7 = (undefined8 *)(unsigned)((int)puVar7 + 0x1c);
      *(undefined4 *)(unsigned)puVar7 = uVar29;
    }
    else {
      uVar25 = *puVar10;
      uVar35 = puVar10[1];
      uVar34 = puVar10[2];
      uVar23 = puVar10[3];
      uVar33 = puVar10[4];
      uVar17 = puVar10[5];
      *(undefined8 *)(unsigned)((int)puVar7 + 0x34) = puVar10[6];
      *(undefined8 *)(unsigned)((int)puVar7 + 0x2c) = uVar17;
      *(undefined8 *)(unsigned)((int)puVar7 + 0x24) = uVar33;
      puVar7[3] = uVar23;
      puVar7[2] = uVar34;
      puVar7[1] = uVar35;
      *puVar7 = uVar25;
    }
    if (iVar11 != 3) {
      if (in_FPSCR_SZ == '\0') {
        uVar24 = *(undefined4 *)(unsigned)((int)puVar12 + -0x54);
        uVar26 = *(undefined4 *)(unsigned)((int)puVar12 + -0x50);
        uVar14 = *(undefined4 *)(unsigned)((int)puVar12 + -0x4c);
        uVar16 = *(undefined4 *)(unsigned)((int)puVar12 + -0x48);
        puVar10 = (undefined8 *)(unsigned)((int)puVar12 + -0x40);
        *(undefined4 *)(unsigned)((int)puVar7 + 0x34) = *(undefined4 *)(unsigned)((int)puVar12 + -0x44);
        *(undefined4 *)(unsigned)(puVar7 + 6) = uVar16;
        *(undefined4 *)(unsigned)((int)puVar7 + 0x2c) = uVar14;
        *(undefined4 *)(unsigned)(puVar7 + 5) = uVar26;
        puVar7 = (undefined8 *)(unsigned)((int)puVar7 + 0x24);
        *(undefined4 *)(unsigned)puVar7 = uVar24;
      }
      else {
        uVar33 = *(undefined8 *)(unsigned)((int)puVar12 + -0x54);
        uVar23 = *(undefined8 *)(unsigned)((int)puVar12 + -0x4c);
        uVar25 = *(undefined8 *)(unsigned)((int)puVar12 + -0x44);
        uVar17 = *(undefined8 *)(unsigned)((int)puVar12 + -0x3c);
        puVar10 = (undefined8 *)(unsigned)((int)puVar12 + -0x2c);
        puVar7[6] = *(undefined8 *)(unsigned)((int)puVar12 + -0x34);
        puVar7[5] = uVar17;
        puVar7[4] = uVar25;
        puVar7[3] = uVar23;
        puVar7 = puVar7 + 2;
        *puVar7 = uVar33;
      }
      *(undefined4 *)(unsigned)((int)puVar7 + -4) = 0xe0000000;
      if (in_FPSCR_SZ == '\0') {
        uVar29 = *(undefined4 *)(unsigned)puVar10;
        uVar27 = *(undefined4 *)(unsigned)((int)puVar10 + 4);
        uVar26 = *(undefined4 *)(unsigned)(puVar10 + 1);
        uVar16 = *(undefined4 *)(unsigned)((int)puVar10 + 0xc);
        uVar24 = *(undefined4 *)(unsigned)(puVar10 + 2);
        uVar14 = *(undefined4 *)(unsigned)((int)puVar10 + 0x14);
        *(undefined4 *)(unsigned)(puVar7 + 7) = *(undefined4 *)(unsigned)(puVar10 + 3);
        *(undefined4 *)(unsigned)((int)puVar7 + 0x34) = uVar14;
        *(undefined4 *)(unsigned)(puVar7 + 6) = uVar24;
        *(undefined4 *)(unsigned)(puVar7 + 5) = uVar16;
        *(undefined4 *)(unsigned)((int)puVar7 + 0x24) = uVar26;
        *(undefined4 *)(unsigned)(puVar7 + 4) = uVar27;
        puVar7 = (undefined8 *)(unsigned)((int)puVar7 + 0x1c);
        *(undefined4 *)(unsigned)puVar7 = uVar29;
      }
      else {
        uVar25 = *puVar10;
        uVar35 = puVar10[1];
        uVar23 = puVar10[2];
        uVar34 = puVar10[3];
        uVar17 = puVar10[4];
        uVar33 = puVar10[5];
        *(undefined8 *)(unsigned)((int)puVar7 + 0x34) = puVar10[6];
        *(undefined8 *)(unsigned)((int)puVar7 + 0x2c) = uVar33;
        *(undefined8 *)(unsigned)((int)puVar7 + 0x24) = uVar17;
        puVar7[3] = uVar34;
        puVar7[2] = uVar23;
        puVar7[1] = uVar35;
        *puVar7 = uVar25;
      }
    }
    if (in_FPSCR_SZ == '\0') {
      uVar26 = *(undefined4 *)(unsigned)((int)puVar12 + -0x84);
      uVar14 = *(undefined4 *)(unsigned)((int)puVar12 + -0x80);
      uVar24 = *(undefined4 *)(unsigned)((int)puVar12 + -0x7c);
      uVar16 = *(undefined4 *)(unsigned)((int)puVar12 + -0x78);
      puVar10 = (undefined8 *)(unsigned)((int)puVar12 + -0x70);
      *(undefined4 *)(unsigned)((int)puVar7 + 0x34) = *(undefined4 *)(unsigned)((int)puVar12 + -0x74);
      *(undefined4 *)(unsigned)(puVar7 + 6) = uVar16;
      *(undefined4 *)(unsigned)((int)puVar7 + 0x2c) = uVar24;
      *(undefined4 *)(unsigned)(puVar7 + 5) = uVar14;
      puVar7 = (undefined8 *)(unsigned)((int)puVar7 + 0x24);
      *(undefined4 *)(unsigned)puVar7 = uVar26;
    }
    else {
      uVar23 = *(undefined8 *)(unsigned)((int)puVar12 + -0x84);
      uVar25 = *(undefined8 *)(unsigned)((int)puVar12 + -0x7c);
      uVar17 = *(undefined8 *)(unsigned)((int)puVar12 + -0x74);
      uVar33 = *(undefined8 *)(unsigned)((int)puVar12 + -0x6c);
      puVar10 = (undefined8 *)(unsigned)((int)puVar12 + -0x5c);
      puVar7[6] = *(undefined8 *)(unsigned)((int)puVar12 + -100);
      puVar7[5] = uVar33;
      puVar7[4] = uVar17;
      puVar7[3] = uVar25;
      puVar7 = puVar7 + 2;
      *puVar7 = uVar23;
    }
    *(undefined4 *)(unsigned)((int)puVar7 + -4) = 0xf0000000;
    if (in_FPSCR_SZ == '\0') {
      uVar29 = *(undefined4 *)(unsigned)puVar10;
      uVar27 = *(undefined4 *)(unsigned)((int)puVar10 + 4);
      uVar26 = *(undefined4 *)(unsigned)(puVar10 + 1);
      uVar16 = *(undefined4 *)(unsigned)((int)puVar10 + 0xc);
      uVar14 = *(undefined4 *)(unsigned)(puVar10 + 2);
      uVar24 = *(undefined4 *)(unsigned)((int)puVar10 + 0x14);
      *(undefined4 *)(unsigned)(puVar7 + 7) = *(undefined4 *)(unsigned)(puVar10 + 3);
      *(undefined4 *)(unsigned)((int)puVar7 + 0x34) = uVar24;
      *(undefined4 *)(unsigned)(puVar7 + 6) = uVar14;
      *(undefined4 *)(unsigned)(puVar7 + 5) = uVar16;
      *(undefined4 *)(unsigned)((int)puVar7 + 0x24) = uVar26;
      *(undefined4 *)(unsigned)(puVar7 + 4) = uVar27;
      puVar7 = (undefined8 *)(unsigned)((int)puVar7 + 0x1c);
      *(undefined4 *)(unsigned)puVar7 = uVar29;
    }
    else {
      uVar25 = *puVar10;
      uVar35 = puVar10[1];
      uVar23 = puVar10[2];
      uVar34 = puVar10[3];
      uVar33 = puVar10[4];
      uVar17 = puVar10[5];
      *(undefined8 *)(unsigned)((int)puVar7 + 0x34) = puVar10[6];
      *(undefined8 *)(unsigned)((int)puVar7 + 0x2c) = uVar17;
      *(undefined8 *)(unsigned)((int)puVar7 + 0x24) = uVar33;
      puVar7[3] = uVar34;
      puVar7[2] = uVar23;
      puVar7[1] = uVar35;
      *puVar7 = uVar25;
    }
    ar7 = puVar7 + 4;
    (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) + iVar11;
  }
  return ar7;
}

__asm__(".globl _FUN_8c226474\n.set _FUN_8c226474, _FUN_8c226474_def\n");
