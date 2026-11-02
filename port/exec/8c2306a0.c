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
double * FUN_8c2306a0_def(short *ar4,int ar5,uint ar6,double *ar7)

{
  ring[rp++ & 255] = "FUN_8c2306a0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 120; for (int i_ = 0; i_ < 120; i_++) z_[i_] = 0; }
  bool bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  short *psVar5;
  int iVar6;
  double *pdVar7;
  int iVar8;
  double *pdVar9;
  int iVar10;
  double *ar4_00;
  double *pdVar11;
  double *pdVar12;
  int iVar13;
  int iVar14;
  uint *puVar15;
  uint *puVar16;
  uint *puVar17;
  double in_dr0 = 0;
  float fVar20;
  double dVar19;
  undefined8 in_dr4 = 0;
  double dVar21;
  float fVar22;
  double in_dr6 = 0;
  double dVar23;
  float fVar24;
  double in_dr10 = 0;
  double dVar25;
  undefined4 uVar26;
  double in_dr12 = 0;
  double dVar27;
  undefined4 uVar28;
  double in_dr14 = 0;
  undefined8 in_xd4 = 0;
  undefined8 in_xd8 = 0;
  undefined8 in_xd10 = 0;
  bool bVar29;
  char cVar30;
  char cVar31;
  double *pdVar18;
  
  cVar31 = '\0';
  cVar30 = '\0';
  (*(undefined4 *)(fr0_ - 0x20)) = (int)((ulonglong)in_dr12 >> 0x20);
  (*(undefined4 *)(fr0_ - 0x24)) = SUB84(in_dr12,0);
  (*(undefined4 *)(fr0_ - 0x28)) = (int)((ulonglong)in_dr14 >> 0x20);
  (*(undefined4 *)(fr0_ - 0x2c)) = SUB84(in_dr14,0);
  puVar15 = ((undefined4 *)(fr0_ - 0x34));
  ((undefined4 *)(fr0_ - 0x34))[0] = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa4f0);
  uVar2 = ar6 & 0x3fff;
  iVar3 = 0;
  iVar4 = 0;
  iVar6 = (ar6 >> 0xe & 3) << 1;
  dVar21 = CONCAT44D((int)((ulonglong)in_dr4 >> 0x20),0x3f000000);
  do {
    iVar8 = (int)*ar4;
    fVar24 = 1.0;
    if ((*puVar15 & 0x80000000) != 0) {
      fVar24 = -1.0;
    }
    pdVar9 = (double *)(unsigned)(ar4[1] * 0x20 + ar5);
    if (iVar8 < 0) {
      iVar8 = -iVar8;
      fVar24 = -fVar24;
    }
    iVar4 = iVar4 + iVar8;
    iVar8 = iVar8 + -2;
    iVar14 = 0;
    pdVar11 = (double *)(unsigned)(ar4[4] * 0x20 + ar5);
    if (cVar31 == '\0') {
      dVar25 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar9 + 3),SUB84(in_dr10,0));
    }
    else {
      dVar25 = pdVar9[3];
    }
    fVar20 = F32LO(dVar21);
    if (cVar30 == '\0') {
      dVar25 = CONCAT44D(F32HI(dVar25) * fVar20 + fVar20,
                                F32LO(dVar25) * fVar20 + fVar20);
    }
    else {
      dVar25 = dVar25 * dVar21 * dVar21 + dVar21 + dVar21;
    }
    ar4 = ar4 + 7;
    if (cVar31 == '\0') {
      dVar27 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar11 + 3),SUB84(in_dr12,0));
    }
    else {
      dVar27 = pdVar11[3];
    }
    if (cVar30 == '\0') {
      dVar27 = CONCAT44D(F32HI(dVar27) * fVar20 + fVar20,
                                F32LO(dVar27) * fVar20 + fVar20);
    }
    else {
      dVar27 = dVar27 * dVar21 * dVar21 + dVar21 + dVar21;
    }
LAB_8c23072e:
    in_dr12 = dVar27;
    in_dr10 = dVar25;
    if (cVar31 == '\0') {
      dVar25 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar9 + 4),SUB84(in_dr0,0));
      dVar27 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar9 + 1),SUB84(in_dr6,0));
      iVar10 = (int)pdVar9 + 0xc;
    }
    else {
      dVar25 = *(double *)(unsigned)((int)pdVar9 + 4);
      dVar27 = *(double *)(unsigned)((int)pdVar9 + 0xc);
      iVar10 = (int)pdVar9 + 0x14;
    }
    if (cVar31 == '\0') {
      dVar25 = CONCAT44D((int)(D2U(dVar25) >> 0x20),*(undefined4 *)(unsigned)((int)pdVar11 + 4));
      pdVar11 = pdVar11 + 1;
    }
    else {
      pdVar11 = (double *)(unsigned)((int)pdVar11 + 0xc);
    }
    iVar13 = *ar4 * 0x20 + ar5;
    if (cVar31 == '\0') {
      dVar27 = CONCAT44D((int)(D2U(dVar27) >> 0x20),*(undefined4 *)(unsigned)pdVar11);
      pdVar12 = (double *)(unsigned)((int)pdVar11 + 4);
    }
    else {
      pdVar12 = pdVar11 + 1;
    }
    ar4_00 = (double *)(unsigned)(iVar10 + -0xc);
    if (cVar30 == '\0') {
      dVar25 = CONCAT44D(F32HI(dVar25) - F32LO(dVar25),SUB84(dVar25,0)
                               );
      in_dr6 = CONCAT44D(F32HI(dVar27) - F32LO(dVar27),SUB84(dVar27,0)
                               );
    }
    else {
      dVar25 = dVar25 - dVar25;
      in_dr6 = dVar27 - dVar27;
    }
    pdVar9 = (double *)(unsigned)((int)pdVar12 + -0xc);
    if (cVar31 == '\0') {
      fVar20 = *(float *)(unsigned)(iVar13 + 4);
      dVar27 = CONCAT44D(*(undefined4 *)(unsigned)(iVar13 + 8),fVar24);
      iVar13 = iVar13 + 0xc;
    }
    else {
      fVar20 = (float)((ulonglong)*(undefined8 *)(unsigned)(iVar13 + 4) >> 0x20);
      dVar27 = *(double *)(unsigned)(iVar13 + 0xc);
      iVar13 = iVar13 + 0x14;
    }
    if (cVar30 == '\0') {
      dVar19 = CONCAT44D(fVar20 - F32LO(dVar25),0x3f800000);
    }
    else {
      dVar19 = CONCAT44D(fVar20,0x3f800000) - dVar25;
    }
    if (cVar31 == '\0') {
      dVar25 = CONCAT44D((int)(D2U(dVar25) >> 0x20),*(undefined4 *)(unsigned)ar4_00);
    }
    if (cVar30 == '\0') {
      dVar27 = CONCAT44D(F32HI(dVar27) - F32LO(in_dr6),SUB84(dVar27,0)
                               );
    }
    else {
      dVar27 = dVar27 - in_dr6;
    }
    if (cVar31 == '\0') {
      in_dr6 = CONCAT44D((int)((ulonglong)in_dr6 >> 0x20),*(undefined4 *)(unsigned)pdVar9);
    }
    if (cVar30 == '\0') {
      dVar27 = CONCAT44D(F32HI(dVar27) *
                                F32HI(dVar25),SUB84(dVar27,0));
    }
    else {
      dVar27 = dVar27 * dVar25;
    }
    if (cVar31 == '\0') {
      in_dr0 = CONCAT44D(*(undefined4 *)(unsigned)(iVar13 + -0xc),SUB84(dVar25,0));
    }
    else {
      in_dr0 = *(double *)(unsigned)(iVar13 + -0xc);
    }
    psVar5 = ar4 + 3;
    fVar24 = F32LO(in_dr0);
    fVar20 = F32LO(dVar19);
    if (cVar30 == '\0') {
      bVar29 = fVar24 < fVar20;
    }
    else {
      bVar29 = in_dr0 < dVar19;
    }
    if (cVar31 == '\0') {
      dVar25 = CONCAT44D(*(undefined4 *)(unsigned)(iVar13 + 0xc),SUB84(in_dr14,0));
    }
    else {
      dVar25 = *(double *)(unsigned)(iVar13 + 0xc);
    }
    pdVar11 = (double *)(unsigned)(iVar13 + -0xc);
    bVar1 = true;
    uVar26 = (undefined4)((ulonglong)in_dr10 >> 0x20);
    fVar22 = F32HI(dVar21);
    uVar28 = (undefined4)((ulonglong)in_dr12 >> 0x20);
    if (bVar29) {
LAB_8c2307e4:
      if (iVar14 != 0) {
        if (cVar31 == '\0') {
          in_dr0 = CONCAT44D(*(undefined4 *)(unsigned)pdVar9,fVar24);
          dVar19 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar12 + -1),SUB84(dVar19,0));
          dVar23 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar12 + -4),SUB84(in_dr6,0));
        }
        else {
          in_dr0 = *pdVar9;
          dVar19 = *(double *)(unsigned)((int)pdVar12 + -4);
          dVar23 = *(double *)(unsigned)((int)pdVar12 + 4);
          pdVar12 = (double *)(unsigned)((int)pdVar12 + 0xc);
        }
        pdVar9 = pdVar12 + -3;
        if (cVar31 == '\0') {
          pdVar12 = (double *)(unsigned)((int)ar7 + 0x14);
          *(undefined4 *)(unsigned)pdVar12 = uVar28;
        }
        else {
          pdVar12 = ar7 + 2;
          *pdVar12 = in_dr12;
        }
        if (cVar30 == '\0') {
          dVar23 = CONCAT44D(F32HI(dVar23) + fVar22,SUB84(dVar23,0));
        }
        else {
          dVar23 = dVar23 + dVar21;
        }
        if (cVar31 == '\0') {
          pdVar12 = (double *)(unsigned)((int)pdVar12 + -4);
          *(int *)(unsigned)pdVar12 = (int)(D2U(dVar19) >> 0x20);
        }
        else {
          pdVar12 = pdVar12 + -1;
          *pdVar12 = dVar19;
        }
        if (cVar30 == '\0') {
          bVar29 = F32HI(dVar23) < fVar22;
        }
        else {
          bVar29 = dVar23 < dVar21;
        }
        if (cVar31 == '\0') {
          pdVar12 = (double *)(unsigned)((int)pdVar12 + -4);
          *(int *)(unsigned)pdVar12 = (int)((ulonglong)in_dr0 >> 0x20);
        }
        else {
          pdVar12 = pdVar12 + -1;
          *pdVar12 = in_dr0;
        }
        in_dr6 = dVar23;
        if ((bVar29) && (in_dr6 = dVar21, cVar31 == '\0')) {
          in_dr6 = CONCAT44D(fVar22,SUB84(dVar23,0));
        }
        iVar3 = iVar3 + iVar14 + 1;
        *(undefined4 *)(unsigned)pdVar12 = 0xf0000000;
        iVar14 = 0;
        if (cVar31 == '\0') {
          *(int *)(unsigned)(pdVar12 + 3) = (int)((ulonglong)in_dr6 >> 0x20);
        }
        else {
          pdVar12[3] = in_dr6;
        }
        ar7 = pdVar12 + 4;
      }
    }
    else {
      if (cVar30 == '\0') {
        bVar29 = SUB84(in_dr6,0) < fVar20;
        in_dr6 = CONCAT44D(F32HI(in_dr6) *
                                  F32HI(dVar19),SUB84(in_dr6,0));
      }
      else {
        bVar29 = in_dr6 < dVar19;
        in_dr6 = in_dr6 * dVar19;
      }
      if (bVar29) goto LAB_8c2307e4;
      dVar19 = (double)(D2U(dVar19) & 0xffffffff);
      if (cVar30 == '\0') {
        bVar29 = F32HI(in_dr0) < fVar20;
        in_dr6 = CONCAT44D((F32HI(in_dr6) -
                                  F32HI(dVar27)) * F32LO(dVar27),
                                  SUB84(in_dr6,0));
      }
      else {
        bVar29 = in_dr0 < dVar19;
        in_dr6 = (in_dr6 - dVar27) * dVar27;
      }
      if (bVar29) goto LAB_8c2307e4;
      if (cVar30 == '\0') {
        bVar29 = F32HI(in_dr6) < 0.0;
      }
      else {
        bVar29 = in_dr6 < dVar19;
      }
      bVar1 = false;
      if (!bVar29) goto LAB_8c2307e4;
      if (iVar14 == 0) {
        if (cVar31 == '\0') {
          in_dr0 = CONCAT44D(*(undefined4 *)(unsigned)ar4_00,fVar24);
          dVar19 = CONCAT44D(*(undefined4 *)(unsigned)(iVar10 + -8),fVar20);
          dVar23 = CONCAT44D(*(undefined4 *)(unsigned)(iVar10 + -4),SUB84(in_dr6,0));
        }
        else {
          in_dr0 = *ar4_00;
          dVar19 = *(double *)(unsigned)(iVar10 + -4);
          dVar23 = *(double *)(unsigned)(iVar10 + 4);
          iVar10 = iVar10 + 0xc;
        }
        iVar14 = 1;
        ar4_00 = (double *)(unsigned)(iVar10 + -0x18);
        if (cVar31 == '\0') {
          pdVar7 = (double *)(unsigned)((int)ar7 + 0x14);
          *(undefined4 *)(unsigned)pdVar7 = uVar26;
        }
        else {
          pdVar7 = ar7 + 2;
          *pdVar7 = in_dr10;
        }
        if (cVar30 == '\0') {
          dVar23 = CONCAT44D(F32HI(dVar23) + fVar22,SUB84(dVar23,0));
        }
        else {
          dVar23 = dVar23 + dVar21;
        }
        if (cVar31 == '\0') {
          pdVar7 = (double *)(unsigned)((int)pdVar7 + -4);
          *(int *)(unsigned)pdVar7 = (int)(D2U(dVar19) >> 0x20);
        }
        else {
          pdVar7 = pdVar7 + -1;
          *pdVar7 = dVar19;
        }
        if (cVar30 == '\0') {
          bVar29 = F32HI(dVar23) < fVar22;
        }
        else {
          bVar29 = dVar23 < dVar21;
        }
        if (cVar31 == '\0') {
          pdVar7 = (double *)(unsigned)((int)pdVar7 + -4);
          *(int *)(unsigned)pdVar7 = (int)((ulonglong)in_dr0 >> 0x20);
        }
        else {
          pdVar7 = pdVar7 + -1;
          *pdVar7 = in_dr0;
        }
        in_dr6 = dVar23;
        if ((bVar29) && (in_dr6 = dVar21, cVar31 == '\0')) {
          in_dr6 = CONCAT44D(fVar22,SUB84(dVar23,0));
        }
        *(undefined4 *)(unsigned)pdVar7 = 0xe0000000;
        if (cVar31 == '\0') {
          *(int *)(unsigned)(pdVar7 + 3) = (int)((ulonglong)in_dr6 >> 0x20);
        }
        else {
          pdVar7[3] = in_dr6;
        }
        ar7 = pdVar7 + 4;
      }
      if (cVar31 == '\0') {
        in_dr0 = CONCAT44D(*(undefined4 *)(unsigned)pdVar9,SUB84(in_dr0,0));
        dVar19 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar12 + -1),SUB84(dVar19,0));
        dVar23 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar12 + -4),SUB84(in_dr6,0));
      }
      else {
        in_dr0 = *pdVar9;
        dVar19 = *(double *)(unsigned)((int)pdVar12 + -4);
        dVar23 = *(double *)(unsigned)((int)pdVar12 + 4);
        pdVar12 = (double *)(unsigned)((int)pdVar12 + 0xc);
      }
      iVar14 = iVar14 + 1;
      pdVar9 = pdVar12 + -3;
      if (cVar31 == '\0') {
        pdVar12 = (double *)(unsigned)((int)ar7 + 0x14);
        *(undefined4 *)(unsigned)pdVar12 = uVar28;
      }
      else {
        pdVar12 = ar7 + 2;
        *pdVar12 = in_dr12;
      }
      if (cVar30 == '\0') {
        dVar23 = CONCAT44D(F32HI(dVar23) + fVar22,SUB84(dVar23,0));
      }
      else {
        dVar23 = dVar23 + dVar21;
      }
      if (cVar31 == '\0') {
        pdVar12 = (double *)(unsigned)((int)pdVar12 + -4);
        *(int *)(unsigned)pdVar12 = (int)(D2U(dVar19) >> 0x20);
      }
      else {
        pdVar12 = pdVar12 + -1;
        *pdVar12 = dVar19;
      }
      if (cVar30 == '\0') {
        bVar29 = F32HI(dVar23) < fVar22;
      }
      else {
        bVar29 = dVar23 < dVar21;
      }
      if (cVar31 == '\0') {
        pdVar12 = (double *)(unsigned)((int)pdVar12 + -4);
        *(int *)(unsigned)pdVar12 = (int)((ulonglong)in_dr0 >> 0x20);
      }
      else {
        pdVar12 = pdVar12 + -1;
        *pdVar12 = in_dr0;
      }
      in_dr6 = dVar23;
      if ((bVar29) && (in_dr6 = dVar21, cVar31 == '\0')) {
        in_dr6 = CONCAT44D(fVar22,SUB84(dVar23,0));
      }
      *(undefined4 *)(unsigned)pdVar12 = 0xe0000000;
      if (cVar31 == '\0') {
        *(int *)(unsigned)(pdVar12 + 3) = (int)((ulonglong)in_dr6 >> 0x20);
      }
      else {
        pdVar12[3] = in_dr6;
      }
      ar7 = pdVar12 + 4;
    }
    if (bVar1) {
      if (cVar31 == '\0') {
        dVar23 = CONCAT44D(*(undefined4 *)(unsigned)ar4_00,SUB84(in_dr0,0));
      }
      else {
        dVar23 = *ar4_00;
      }
      dVar19 = CONCAT44D((int)(D2U(dVar19) >> 0x20),0x3f800000);
      if (cVar30 == '\0') {
        bVar29 = 1.0 < F32HI(dVar23);
      }
      else {
        bVar29 = dVar19 < dVar23;
      }
      if (cVar31 == '\0') {
        in_dr0 = CONCAT44D(*(undefined4 *)(unsigned)pdVar9,SUB84(dVar23,0));
      }
      else {
        in_dr0 = *pdVar9;
      }
      if (!bVar29) {
        if (cVar30 == '\0') {
          bVar29 = 1.0 < F32HI(in_dr0);
        }
        else {
          bVar29 = dVar19 < in_dr0;
        }
        if (cVar31 == '\0') {
          in_dr0 = CONCAT44D(*(undefined4 *)(unsigned)pdVar11,SUB84(in_dr0,0));
        }
        else {
          in_dr0 = *pdVar11;
        }
        if (!bVar29) {
          if (cVar30 == '\0') {
            bVar29 = 1.0 < F32HI(in_dr0);
          }
          else {
            bVar29 = dVar19 < in_dr0;
          }
          if (!bVar29) goto LAB_8c230818;
        }
      }
      *(uint *)(unsigned)((int)puVar15 + -4) = uVar2;
      *(int *)(unsigned)((int)puVar15 + -8) = iVar3;
      *(int *)(unsigned)((int)puVar15 + -0xc) = iVar4;
      *(unsigned *)(unsigned)((int)puVar15 + -0x10) = psVar5;
      *(int *)(unsigned)((int)puVar15 + -0x14) = ar5;
      *(int *)(unsigned)((int)puVar15 + -0x18) = iVar6;
      if (cVar31 == '\0') {
        *(float *)(unsigned)((int)puVar15 + -0x1c) = fVar22;
        *(int *)(unsigned)((int)puVar15 + -0x20) = SUB84(dVar21,0);
        *(float *)(unsigned)((int)puVar15 + -0x24) = SUB84(dVar27,0);
        *(undefined4 *)(unsigned)((int)puVar15 + -0x28) = uVar26;
        puVar16 = (uint *)(unsigned)((int)puVar15 + -0x2c);
        *(int *)(unsigned)((int)puVar15 + -0x2c) = SUB84(in_dr10,0);
      }
      else {
        *(double *)(unsigned)((int)puVar15 + -0x20) = dVar21;
        *(undefined8 *)(unsigned)((int)puVar15 + -0x28) = in_xd4;
        *(undefined8 *)(unsigned)((int)puVar15 + -0x30) = in_xd8;
        *(double *)(unsigned)((int)puVar15 + -0x38) = in_dr10;
        puVar16 = (uint *)(unsigned)((int)puVar15 + -0x40);
        *(undefined8 *)(unsigned)((int)puVar15 + -0x40) = in_xd10;
        in_xd4 = in_xd8;
      }
      ar7 = (double *)(unsigned)(vsp = (puVar15 ? (unsigned long)puVar15 - 64 : (unsigned long)(fr0_ - 120)), FUN_8c231eac(ar4_00,pdVar9,pdVar11,ar7));
      if (cVar31 == '\0') {
        in_dr10 = (double)(ulonglong)*puVar16;
        dVar27 = (double)(ulonglong)puVar16[2];
        pdVar18 = (double *)(unsigned)(puVar16 + 3);
        puVar17 = puVar16 + 5;
      }
      else {
        in_xd10 = *(undefined8 *)(unsigned)puVar16;
        in_dr10 = *(double *)(unsigned)(puVar16 + 2);
        in_xd8 = *(undefined8 *)(unsigned)(puVar16 + 4);
        in_xd4 = *(undefined8 *)(unsigned)(puVar16 + 6);
        pdVar18 = (double *)(unsigned)(puVar16 + 8);
        puVar17 = puVar16 + 10;
      }
      dVar21 = *pdVar18;
      iVar6 = *puVar17;
      ar5 = puVar17[1];
      psVar5 = (short *)(unsigned)puVar17[2];
      iVar4 = puVar17[3];
      iVar3 = puVar17[4];
      uVar2 = puVar17[5];
      puVar15 = puVar17 + 6;
    }
LAB_8c230818:
    fVar24 = -SUB84(dVar27,0);
    fVar20 = F32LO(dVar21);
    if (cVar30 == '\0') {
      dVar25 = CONCAT44D(F32HI(dVar25) * fVar20,SUB84(dVar25,0));
    }
    else {
      dVar25 = dVar25 * dVar21;
    }
    ar4 = (short *)(unsigned)((int)psVar5 + iVar6);
    if (cVar30 == '\0') {
      dVar25 = CONCAT44D((int)(D2U(dVar25) >> 0x20),F32LO(dVar25) * fVar20);
    }
    else {
      dVar25 = dVar25 * dVar21;
    }
    iVar8 = iVar8 + -1;
    if (cVar30 == '\0') {
      in_dr14 = CONCAT44D(F32HI(dVar25) + fVar20,
                                 F32LO(dVar25) + fVar20);
    }
    else {
      in_dr14 = dVar25 + dVar21 + dVar21;
    }
    uVar26 = (undefined4)((ulonglong)in_dr14 >> 0x20);
    if (iVar8 != 0) {
      dVar25 = in_dr12;
      dVar27 = in_dr14;
      if (cVar31 == '\0') {
        dVar25 = CONCAT44D((int)((ulonglong)in_dr12 >> 0x20),SUB84(in_dr10,0));
        dVar27 = CONCAT44D(uVar26,SUB84(in_dr12,0));
      }
      goto LAB_8c23072e;
    }
    if (iVar14 != 0) {
      if (cVar31 == '\0') {
        in_dr0 = CONCAT44D(*(undefined4 *)(unsigned)pdVar11,SUB84(in_dr0,0));
        pdVar9 = (double *)(unsigned)(iVar13 + -8);
      }
      else {
        in_dr0 = *pdVar11;
        pdVar9 = (double *)(unsigned)(iVar13 + -4);
      }
      if (cVar31 == '\0') {
        dVar27 = CONCAT44D(*(undefined4 *)(unsigned)pdVar9,SUB84(dVar19,0));
        dVar25 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar9 + 4),SUB84(in_dr6,0));
        pdVar9 = (double *)(unsigned)((int)ar7 + 0x14);
        *(undefined4 *)(unsigned)pdVar9 = uVar26;
      }
      else {
        dVar27 = *pdVar9;
        dVar25 = pdVar9[1];
        pdVar9 = ar7 + 2;
        *pdVar9 = in_dr14;
      }
      fVar24 = F32HI(dVar21);
      if (cVar30 == '\0') {
        dVar25 = CONCAT44D(F32HI(dVar25) + fVar24,SUB84(dVar25,0));
      }
      else {
        dVar25 = dVar25 + dVar21;
      }
      if (cVar31 == '\0') {
        pdVar9 = (double *)(unsigned)((int)pdVar9 + -4);
        *(int *)(unsigned)pdVar9 = (int)(D2U(dVar27) >> 0x20);
      }
      else {
        pdVar9 = pdVar9 + -1;
        *pdVar9 = dVar27;
      }
      if (cVar30 == '\0') {
        bVar29 = F32HI(dVar25) < fVar24;
      }
      else {
        bVar29 = dVar25 < dVar21;
      }
      if (cVar31 == '\0') {
        pdVar9 = (double *)(unsigned)((int)pdVar9 + -4);
        *(int *)(unsigned)pdVar9 = (int)((ulonglong)in_dr0 >> 0x20);
      }
      else {
        pdVar9 = pdVar9 + -1;
        *pdVar9 = in_dr0;
      }
      in_dr6 = dVar25;
      if ((bVar29) && (in_dr6 = dVar21, cVar31 == '\0')) {
        in_dr6 = CONCAT44D(fVar24,SUB84(dVar25,0));
      }
      iVar3 = iVar3 + iVar14 + 1;
      *(undefined4 *)(unsigned)pdVar9 = 0xf0000000;
      if (cVar31 == '\0') {
        *(int *)(unsigned)(pdVar9 + 3) = (int)((ulonglong)in_dr6 >> 0x20);
      }
      else {
        pdVar9[3] = in_dr6;
      }
      ar7 = pdVar9 + 4;
    }
    uVar2 = uVar2 - 1;
    if (uVar2 == 0) {
      (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) + iVar3;
      (*(undefined4 *)(unsigned)(unsigned)0x8c4aa51c) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa51c) + iVar4;
      return ar7;
    }
  } while( true );
}

__asm__(".globl _FUN_8c2306a0\n.set _FUN_8c2306a0, _FUN_8c2306a0_def\n");
