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
double * FUN_8c22c3f4_def(short *ar4,int ar5,uint ar6,double *ar7)

{
  ring[rp++ & 255] = "FUN_8c22c3f4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 120; for (int i_ = 0; i_ < 120; i_++) z_[i_] = 0; }
  bool bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  short *psVar5;
  short *psVar6;
  int iVar7;
  int iVar8;
  double *pdVar9;
  double *pdVar10;
  double *ar4_00;
  double *pdVar11;
  double *pdVar12;
  int iVar13;
  int iVar14;
  uint *puVar15;
  uint *puVar16;
  uint *puVar17;
  double in_dr0 = 0;
  double dVar19;
  double dVar20;
  float fVar21;
  double in_dr4 = 0;
  float fVar22;
  double in_dr6 = 0;
  double dVar23;
  float fVar24;
  float fVar26;
  double dVar25;
  undefined4 uVar27;
  undefined8 in_dr12 = 0;
  undefined4 uVar29;
  double dVar28;
  undefined8 in_dr14 = 0;
  double dVar30;
  undefined8 in_xd4 = 0;
  undefined8 in_xd8 = 0;
  undefined8 in_xd10 = 0;
  undefined8 uVar31;
  undefined8 in_xd14 = 0;
  bool bVar32;
  char cVar33;
  char cVar34;
  double *pdVar18;
  
  cVar34 = '\0';
  cVar33 = '\0';
  (*(undefined4 *)(fr0_ - 0x20)) = (int)((ulonglong)in_dr12 >> 0x20);
  (*(undefined4 *)(fr0_ - 0x24)) = (int)in_dr12;
  (*(undefined4 *)(fr0_ - 0x28)) = (int)((ulonglong)in_dr14 >> 0x20);
  (*(undefined4 *)(fr0_ - 0x2c)) = (int)in_dr14;
  puVar15 = ((undefined4 *)(fr0_ - 0x34));
  ((undefined4 *)(fr0_ - 0x34))[0] = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa4f0);
  uVar2 = ar6 & 0x3fff;
  iVar3 = 0;
  iVar4 = 0;
  iVar7 = (ar6 >> 0xe & 3) << 1;
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
    if (cVar33 == '\0') {
      fVar26 = (float)(int)ar4[2];
    }
    else {
      fVar26 = (float)((ulonglong)(double)(int)ar4[2] >> 0x20);
    }
    psVar6 = ar4 + 5;
    fVar21 = F32LO(in_dr4);
    if (cVar33 == '\0') {
      dVar25 = CONCAT44D(fVar26 * fVar21,(float)(int)ar4[3]);
    }
    else {
      dVar25 = CONCAT44D(fVar26,(float)(int)ar4[3]) * in_dr4;
    }
    pdVar11 = (double *)(unsigned)(ar4[4] * 0x20 + ar5);
    if (cVar33 == '\0') {
      dVar25 = CONCAT44D((int)(D2U(dVar25) >> 0x20),F32LO(dVar25) * fVar21);
    }
    else {
      dVar25 = dVar25 * in_dr4;
    }
    psVar5 = ar4 + 6;
    ar4 = ar4 + 7;
    if (cVar33 == '\0') {
      fVar26 = (float)(int)*psVar6;
    }
    else {
      fVar26 = (float)((ulonglong)(double)(int)*psVar6 >> 0x20);
    }
    if (cVar33 == '\0') {
      dVar30 = CONCAT44D(fVar26 * fVar21,(float)(int)*psVar5 * fVar21);
    }
    else {
      dVar30 = CONCAT44D(fVar26,(float)(int)*psVar5) * in_dr4 * in_dr4;
    }
LAB_8c22c484:
    dVar28 = dVar30;
    dVar20 = dVar25;
    if (cVar33 == '\0') {
      fVar26 = (float)(int)ar4[1];
    }
    else {
      fVar26 = (float)((ulonglong)(double)(int)ar4[1] >> 0x20);
    }
    if (cVar34 == '\0') {
      dVar25 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar9 + 4),SUB84(in_dr0,0));
      pdVar9 = pdVar9 + 1;
    }
    else {
      dVar25 = *(double *)(unsigned)((int)pdVar9 + 4);
      pdVar9 = (double *)(unsigned)((int)pdVar9 + 0xc);
    }
    if (cVar34 == '\0') {
      dVar23 = CONCAT44D(*(undefined4 *)(unsigned)pdVar9,SUB84(in_dr6,0));
      pdVar10 = (double *)(unsigned)((int)pdVar9 + 4);
    }
    else {
      dVar23 = *pdVar9;
      pdVar10 = pdVar9 + 1;
    }
    if (cVar34 == '\0') {
      dVar25 = CONCAT44D((int)(D2U(dVar25) >> 0x20),*(undefined4 *)(unsigned)((int)pdVar11 + 4));
      pdVar11 = pdVar11 + 1;
    }
    else {
      pdVar11 = (double *)(unsigned)((int)pdVar11 + 0xc);
    }
    iVar13 = *ar4 * 0x20 + ar5;
    if (cVar34 == '\0') {
      dVar23 = CONCAT44D((int)(D2U(dVar23) >> 0x20),*(undefined4 *)(unsigned)pdVar11);
      pdVar12 = (double *)(unsigned)((int)pdVar11 + 4);
    }
    else {
      pdVar12 = pdVar11 + 1;
    }
    fVar21 = F32LO(in_dr4);
    if (cVar33 == '\0') {
      dVar30 = CONCAT44D(fVar26 * fVar21,(float)(int)ar4[2] * fVar21);
      dVar25 = CONCAT44D(F32HI(dVar25) - F32LO(dVar25),SUB84(dVar25,0)
                               );
      in_dr6 = CONCAT44D(F32HI(dVar23) - F32LO(dVar23),SUB84(dVar23,0)
                               );
    }
    else {
      dVar30 = CONCAT44D(fVar26,(float)(int)ar4[2]) * in_dr4 * in_dr4;
      dVar25 = dVar25 - dVar25;
      in_dr6 = dVar23 - dVar23;
    }
    ar4_00 = (double *)(unsigned)((int)pdVar10 + -0xc);
    pdVar9 = (double *)(unsigned)((int)pdVar12 + -0xc);
    if (cVar34 == '\0') {
      fVar26 = *(float *)(unsigned)(iVar13 + 4);
      dVar23 = CONCAT44D(*(undefined4 *)(unsigned)(iVar13 + 8),fVar24);
      iVar13 = iVar13 + 0xc;
    }
    else {
      fVar26 = (float)((ulonglong)*(undefined8 *)(unsigned)(iVar13 + 4) >> 0x20);
      dVar23 = *(double *)(unsigned)(iVar13 + 0xc);
      iVar13 = iVar13 + 0x14;
    }
    pdVar11 = (double *)(unsigned)(iVar13 + -0xc);
    if (cVar33 == '\0') {
      dVar19 = CONCAT44D(fVar26 - F32LO(dVar25),0x3f800000);
    }
    else {
      dVar19 = CONCAT44D(fVar26,0x3f800000) - dVar25;
    }
    if (cVar34 == '\0') {
      dVar25 = CONCAT44D((int)(D2U(dVar25) >> 0x20),*(undefined4 *)(unsigned)ar4_00);
    }
    if (cVar33 == '\0') {
      dVar23 = CONCAT44D(F32HI(dVar23) - F32LO(in_dr6),SUB84(dVar23,0)
                               );
    }
    else {
      dVar23 = dVar23 - in_dr6;
    }
    if (cVar34 == '\0') {
      in_dr6 = CONCAT44D((int)((ulonglong)in_dr6 >> 0x20),*(undefined4 *)(unsigned)pdVar9);
    }
    if (cVar33 == '\0') {
      dVar23 = CONCAT44D(F32HI(dVar23) *
                                F32HI(dVar25),SUB84(dVar23,0));
    }
    else {
      dVar23 = dVar23 * dVar25;
    }
    if (cVar34 == '\0') {
      in_dr0 = CONCAT44D(*(undefined4 *)(unsigned)pdVar11,SUB84(dVar25,0));
    }
    else {
      in_dr0 = *pdVar11;
    }
    psVar6 = ar4 + 3;
    fVar24 = F32LO(in_dr0);
    fVar26 = F32LO(dVar19);
    if (cVar33 == '\0') {
      bVar32 = fVar24 < fVar26;
    }
    else {
      bVar32 = in_dr0 < dVar19;
    }
    bVar1 = true;
    fVar22 = F32HI(in_dr4);
    uVar27 = (undefined4)(D2U(dVar20) >> 0x20);
    uVar29 = (undefined4)(D2U(dVar28) >> 0x20);
    if (bVar32) {
LAB_8c22c544:
      if (iVar14 != 0) {
        if (cVar34 == '\0') {
          in_dr0 = CONCAT44D(*(undefined4 *)(unsigned)pdVar9,fVar24);
          dVar19 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar12 + -1),SUB84(dVar19,0));
          dVar25 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar12 + -4),SUB84(in_dr6,0));
        }
        else {
          in_dr0 = *pdVar9;
          dVar19 = *(double *)(unsigned)((int)pdVar12 + -4);
          dVar25 = *(double *)(unsigned)((int)pdVar12 + 4);
          pdVar12 = (double *)(unsigned)((int)pdVar12 + 0xc);
        }
        pdVar9 = pdVar12 + -3;
        if (cVar34 == '\0') {
          pdVar10 = (double *)(unsigned)((int)ar7 + 0x14);
          *(undefined4 *)(unsigned)pdVar10 = uVar29;
        }
        else {
          pdVar10 = ar7 + 2;
          *pdVar10 = dVar28;
        }
        if (cVar33 == '\0') {
          dVar25 = CONCAT44D(F32HI(dVar25) + fVar22,SUB84(dVar25,0));
        }
        else {
          dVar25 = dVar25 + in_dr4;
        }
        if (cVar34 == '\0') {
          pdVar10 = (double *)(unsigned)((int)pdVar10 + -4);
          *(int *)(unsigned)pdVar10 = (int)(D2U(dVar19) >> 0x20);
        }
        else {
          pdVar10 = pdVar10 + -1;
          *pdVar10 = dVar19;
        }
        if (cVar33 == '\0') {
          bVar32 = F32HI(dVar25) < fVar22;
        }
        else {
          bVar32 = dVar25 < in_dr4;
        }
        if (cVar34 == '\0') {
          pdVar10 = (double *)(unsigned)((int)pdVar10 + -4);
          *(int *)(unsigned)pdVar10 = (int)((ulonglong)in_dr0 >> 0x20);
        }
        else {
          pdVar10 = pdVar10 + -1;
          *pdVar10 = in_dr0;
        }
        in_dr6 = dVar25;
        if ((bVar32) && (in_dr6 = in_dr4, cVar34 == '\0')) {
          in_dr6 = CONCAT44D(fVar22,SUB84(dVar25,0));
        }
        iVar3 = iVar3 + iVar14 + 1;
        *(undefined4 *)(unsigned)pdVar10 = 0xf0000000;
        iVar14 = 0;
        if (cVar34 == '\0') {
          *(int *)(unsigned)(pdVar10 + 3) = (int)((ulonglong)in_dr6 >> 0x20);
        }
        else {
          pdVar10[3] = in_dr6;
        }
        ar7 = pdVar10 + 4;
      }
    }
    else {
      if (cVar33 == '\0') {
        bVar32 = SUB84(in_dr6,0) < fVar26;
        in_dr6 = CONCAT44D(F32HI(in_dr6) *
                                  F32HI(dVar19),SUB84(in_dr6,0));
      }
      else {
        bVar32 = in_dr6 < dVar19;
        in_dr6 = in_dr6 * dVar19;
      }
      if (bVar32) goto LAB_8c22c544;
      dVar19 = (double)(D2U(dVar19) & 0xffffffff);
      if (cVar33 == '\0') {
        bVar32 = F32HI(in_dr0) < fVar26;
        in_dr6 = CONCAT44D((F32HI(in_dr6) -
                                  F32HI(dVar23)) * F32LO(dVar23),
                                  SUB84(in_dr6,0));
      }
      else {
        bVar32 = in_dr0 < dVar19;
        in_dr6 = (in_dr6 - dVar23) * dVar23;
      }
      if (bVar32) goto LAB_8c22c544;
      if (cVar33 == '\0') {
        bVar32 = F32HI(in_dr6) < 0.0;
      }
      else {
        bVar32 = in_dr6 < dVar19;
      }
      bVar1 = false;
      if (!bVar32) goto LAB_8c22c544;
      if (iVar14 == 0) {
        if (cVar34 == '\0') {
          in_dr0 = CONCAT44D(*(undefined4 *)(unsigned)ar4_00,fVar24);
          dVar19 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar10 + -1),fVar26);
          dVar25 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar10 + -4),SUB84(in_dr6,0));
        }
        else {
          in_dr0 = *ar4_00;
          dVar19 = *(double *)(unsigned)((int)pdVar10 + -4);
          dVar25 = *(double *)(unsigned)((int)pdVar10 + 4);
          pdVar10 = (double *)(unsigned)((int)pdVar10 + 0xc);
        }
        iVar14 = 1;
        ar4_00 = pdVar10 + -3;
        if (cVar34 == '\0') {
          pdVar10 = (double *)(unsigned)((int)ar7 + 0x14);
          *(undefined4 *)(unsigned)pdVar10 = uVar27;
        }
        else {
          pdVar10 = ar7 + 2;
          *pdVar10 = dVar20;
        }
        if (cVar33 == '\0') {
          dVar25 = CONCAT44D(F32HI(dVar25) + fVar22,SUB84(dVar25,0));
        }
        else {
          dVar25 = dVar25 + in_dr4;
        }
        if (cVar34 == '\0') {
          pdVar10 = (double *)(unsigned)((int)pdVar10 + -4);
          *(int *)(unsigned)pdVar10 = (int)(D2U(dVar19) >> 0x20);
        }
        else {
          pdVar10 = pdVar10 + -1;
          *pdVar10 = dVar19;
        }
        if (cVar33 == '\0') {
          bVar32 = F32HI(dVar25) < fVar22;
        }
        else {
          bVar32 = dVar25 < in_dr4;
        }
        if (cVar34 == '\0') {
          pdVar10 = (double *)(unsigned)((int)pdVar10 + -4);
          *(int *)(unsigned)pdVar10 = (int)((ulonglong)in_dr0 >> 0x20);
        }
        else {
          pdVar10 = pdVar10 + -1;
          *pdVar10 = in_dr0;
        }
        in_dr6 = dVar25;
        if ((bVar32) && (in_dr6 = in_dr4, cVar34 == '\0')) {
          in_dr6 = CONCAT44D(fVar22,SUB84(dVar25,0));
        }
        *(undefined4 *)(unsigned)pdVar10 = 0xe0000000;
        if (cVar34 == '\0') {
          *(int *)(unsigned)(pdVar10 + 3) = (int)((ulonglong)in_dr6 >> 0x20);
        }
        else {
          pdVar10[3] = in_dr6;
        }
        ar7 = pdVar10 + 4;
      }
      if (cVar34 == '\0') {
        in_dr0 = CONCAT44D(*(undefined4 *)(unsigned)pdVar9,SUB84(in_dr0,0));
        dVar19 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar12 + -1),SUB84(dVar19,0));
        dVar25 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar12 + -4),SUB84(in_dr6,0));
      }
      else {
        in_dr0 = *pdVar9;
        dVar19 = *(double *)(unsigned)((int)pdVar12 + -4);
        dVar25 = *(double *)(unsigned)((int)pdVar12 + 4);
        pdVar12 = (double *)(unsigned)((int)pdVar12 + 0xc);
      }
      iVar14 = iVar14 + 1;
      pdVar9 = pdVar12 + -3;
      if (cVar34 == '\0') {
        pdVar10 = (double *)(unsigned)((int)ar7 + 0x14);
        *(undefined4 *)(unsigned)pdVar10 = uVar29;
      }
      else {
        pdVar10 = ar7 + 2;
        *pdVar10 = dVar28;
      }
      if (cVar33 == '\0') {
        dVar25 = CONCAT44D(F32HI(dVar25) + fVar22,SUB84(dVar25,0));
      }
      else {
        dVar25 = dVar25 + in_dr4;
      }
      if (cVar34 == '\0') {
        pdVar10 = (double *)(unsigned)((int)pdVar10 + -4);
        *(int *)(unsigned)pdVar10 = (int)(D2U(dVar19) >> 0x20);
      }
      else {
        pdVar10 = pdVar10 + -1;
        *pdVar10 = dVar19;
      }
      if (cVar33 == '\0') {
        bVar32 = F32HI(dVar25) < fVar22;
      }
      else {
        bVar32 = dVar25 < in_dr4;
      }
      if (cVar34 == '\0') {
        pdVar10 = (double *)(unsigned)((int)pdVar10 + -4);
        *(int *)(unsigned)pdVar10 = (int)((ulonglong)in_dr0 >> 0x20);
      }
      else {
        pdVar10 = pdVar10 + -1;
        *pdVar10 = in_dr0;
      }
      in_dr6 = dVar25;
      if ((bVar32) && (in_dr6 = in_dr4, cVar34 == '\0')) {
        in_dr6 = CONCAT44D(fVar22,SUB84(dVar25,0));
      }
      *(undefined4 *)(unsigned)pdVar10 = 0xe0000000;
      if (cVar34 == '\0') {
        *(int *)(unsigned)(pdVar10 + 3) = (int)((ulonglong)in_dr6 >> 0x20);
      }
      else {
        pdVar10[3] = in_dr6;
      }
      ar7 = pdVar10 + 4;
    }
    if (bVar1) {
      if (cVar34 == '\0') {
        dVar25 = CONCAT44D(*(undefined4 *)(unsigned)ar4_00,SUB84(in_dr0,0));
      }
      else {
        dVar25 = *ar4_00;
      }
      dVar19 = CONCAT44D((int)(D2U(dVar19) >> 0x20),0x3f800000);
      if (cVar33 == '\0') {
        bVar32 = 1.0 < F32HI(dVar25);
      }
      else {
        bVar32 = dVar19 < dVar25;
      }
      if (cVar34 == '\0') {
        dVar25 = CONCAT44D(*(undefined4 *)(unsigned)pdVar9,SUB84(dVar25,0));
      }
      else {
        dVar25 = *pdVar9;
      }
      if (!bVar32) {
        if (cVar33 == '\0') {
          bVar32 = 1.0 < F32HI(dVar25);
        }
        else {
          bVar32 = dVar19 < dVar25;
        }
        if (cVar34 == '\0') {
          in_dr0 = CONCAT44D(*(undefined4 *)(unsigned)pdVar11,SUB84(dVar25,0));
        }
        else {
          in_dr0 = *pdVar11;
        }
        if (!bVar32) {
          if (cVar33 == '\0') {
            bVar32 = 1.0 < F32HI(in_dr0);
          }
          else {
            bVar32 = dVar19 < in_dr0;
          }
          if (!bVar32) goto LAB_8c22c578;
        }
      }
      *(uint *)(unsigned)((int)puVar15 + -4) = uVar2;
      *(int *)(unsigned)((int)puVar15 + -8) = iVar3;
      *(int *)(unsigned)((int)puVar15 + -0xc) = iVar4;
      *(unsigned *)(unsigned)((int)puVar15 + -0x10) = psVar6;
      *(int *)(unsigned)((int)puVar15 + -0x14) = ar5;
      *(int *)(unsigned)((int)puVar15 + -0x18) = iVar7;
      if (cVar34 == '\0') {
        *(float *)(unsigned)((int)puVar15 + -0x1c) = fVar22;
        *(float *)(unsigned)((int)puVar15 + -0x20) = fVar21;
        *(float *)(unsigned)((int)puVar15 + -0x24) = SUB84(dVar23,0);
        *(undefined4 *)(unsigned)((int)puVar15 + -0x28) = uVar27;
        puVar16 = (uint *)(unsigned)((int)puVar15 + -0x2c);
        *(int *)(unsigned)((int)puVar15 + -0x2c) = SUB84(dVar20,0);
        in_dr0 = (double)(D2U(dVar23) & 0xffffffff);
        uVar31 = in_xd10;
        dVar23 = (double)(D2U(dVar30) & 0xffffffff);
        in_dr6 = (double)(D2U(dVar28) & 0xffffffff);
        in_xd10 = in_xd4;
      }
      else {
        *(double *)(unsigned)((int)puVar15 + -0x20) = in_dr4;
        *(undefined8 *)(unsigned)((int)puVar15 + -0x28) = in_xd4;
        *(undefined8 *)(unsigned)((int)puVar15 + -0x30) = in_xd8;
        *(double *)(unsigned)((int)puVar15 + -0x38) = dVar20;
        puVar16 = (uint *)(unsigned)((int)puVar15 + -0x40);
        *(undefined8 *)(unsigned)((int)puVar15 + -0x40) = in_xd10;
        uVar31 = in_xd8;
        dVar23 = dVar30;
        in_xd8 = in_xd14;
        in_dr6 = dVar28;
        in_dr0 = in_dr4;
      }
      ar7 = (double *)(unsigned)(vsp = (puVar15 ? (unsigned long)puVar15 - 64 : (unsigned long)(fr0_ - 120)), FUN_8c23231c(ar4_00,pdVar9,pdVar11,ar7));
      if (cVar34 == '\0') {
        dVar20 = (double)(ulonglong)*puVar16;
        dVar23 = (double)(ulonglong)puVar16[2];
        pdVar18 = (double *)(unsigned)(puVar16 + 3);
        puVar17 = puVar16 + 5;
        in_xd4 = in_xd10;
        in_xd10 = uVar31;
      }
      else {
        in_xd10 = *(undefined8 *)(unsigned)puVar16;
        dVar20 = *(double *)(unsigned)(puVar16 + 2);
        in_xd8 = *(undefined8 *)(unsigned)(puVar16 + 4);
        in_xd4 = *(undefined8 *)(unsigned)(puVar16 + 6);
        pdVar18 = (double *)(unsigned)(puVar16 + 8);
        puVar17 = puVar16 + 10;
      }
      in_dr4 = *pdVar18;
      iVar7 = *puVar17;
      ar5 = puVar17[1];
      psVar6 = (short *)(unsigned)puVar17[2];
      iVar4 = puVar17[3];
      iVar3 = puVar17[4];
      uVar2 = puVar17[5];
      puVar15 = puVar17 + 6;
    }
LAB_8c22c578:
    fVar24 = -SUB84(dVar23,0);
    ar4 = (short *)(unsigned)((int)psVar6 + iVar7);
    iVar8 = iVar8 + -1;
    uVar27 = (undefined4)(D2U(dVar30) >> 0x20);
    if (iVar8 != 0) {
      dVar25 = dVar28;
      if (cVar34 == '\0') {
        dVar25 = CONCAT44D((int)(D2U(dVar28) >> 0x20),SUB84(dVar20,0));
        dVar30 = CONCAT44D(uVar27,SUB84(dVar28,0));
      }
      goto LAB_8c22c484;
    }
    if (iVar14 != 0) {
      if (cVar34 == '\0') {
        in_dr0 = CONCAT44D(*(undefined4 *)(unsigned)pdVar11,SUB84(in_dr0,0));
        pdVar9 = (double *)(unsigned)(iVar13 + -8);
      }
      else {
        in_dr0 = *pdVar11;
        pdVar9 = (double *)(unsigned)(iVar13 + -4);
      }
      if (cVar34 == '\0') {
        dVar20 = CONCAT44D(*(undefined4 *)(unsigned)pdVar9,SUB84(dVar19,0));
        dVar25 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar9 + 4),SUB84(in_dr6,0));
        pdVar9 = (double *)(unsigned)((int)ar7 + 0x14);
        *(undefined4 *)(unsigned)pdVar9 = uVar27;
      }
      else {
        dVar20 = *pdVar9;
        dVar25 = pdVar9[1];
        pdVar9 = ar7 + 2;
        *pdVar9 = dVar30;
      }
      fVar24 = F32HI(in_dr4);
      if (cVar33 == '\0') {
        dVar25 = CONCAT44D(F32HI(dVar25) + fVar24,SUB84(dVar25,0));
      }
      else {
        dVar25 = dVar25 + in_dr4;
      }
      if (cVar34 == '\0') {
        pdVar9 = (double *)(unsigned)((int)pdVar9 + -4);
        *(int *)(unsigned)pdVar9 = (int)(D2U(dVar20) >> 0x20);
      }
      else {
        pdVar9 = pdVar9 + -1;
        *pdVar9 = dVar20;
      }
      if (cVar33 == '\0') {
        bVar32 = F32HI(dVar25) < fVar24;
      }
      else {
        bVar32 = dVar25 < in_dr4;
      }
      if (cVar34 == '\0') {
        pdVar9 = (double *)(unsigned)((int)pdVar9 + -4);
        *(int *)(unsigned)pdVar9 = (int)((ulonglong)in_dr0 >> 0x20);
      }
      else {
        pdVar9 = pdVar9 + -1;
        *pdVar9 = in_dr0;
      }
      in_dr6 = dVar25;
      if ((bVar32) && (in_dr6 = in_dr4, cVar34 == '\0')) {
        in_dr6 = CONCAT44D(fVar24,SUB84(dVar25,0));
      }
      iVar3 = iVar3 + iVar14 + 1;
      *(undefined4 *)(unsigned)pdVar9 = 0xf0000000;
      if (cVar34 == '\0') {
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

__asm__(".globl _FUN_8c22c3f4\n.set _FUN_8c22c3f4, _FUN_8c22c3f4_def\n");
