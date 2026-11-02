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
double * FUN_8c229c68_def(short *ar4,int ar5,uint ar6,double *ar7)

{
  ring[rp++ & 255] = "FUN_8c229c68";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 120; for (int i_ = 0; i_ < 120; i_++) z_[i_] = 0; }
  uint uVar1;
  short *psVar2;
  double *pdVar3;
  double *pdVar4;
  double *pdVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  double *pdVar9;
  int iVar10;
  int iVar11;
  short *psVar12;
  int iVar13;
  int iVar14;
  double *pdVar15;
  uint *puVar16;
  uint *puVar17;
  uint *puVar18;
  double in_dr0 = 0;
  float fVar20;
  float fVar22;
  double dVar21;
  float fVar23;
  double in_dr4 = 0;
  uint uVar26;
  double dVar25;
  double in_dr6 = 0;
  double dVar27;
  double in_dr8 = 0;
  double in_dr10 = 0;
  double dVar28;
  double in_dr12 = 0;
  double in_dr14 = 0;
  undefined4 uVar29;
  undefined4 uVar30;
  double in_xd4 = 0;
  double in_xd6 = 0;
  double in_xd8 = 0;
  undefined8 in_xd10 = 0;
  double in_xd12 = 0;
  double in_xd14 = 0;
  bool bVar31;
  bool bVar32;
  char cVar33;
  char cVar34;
  double *pdVar19;
  double dVar24;
  
  cVar34 = '\0';
  cVar33 = '\0';
  (*(undefined4 *)(fr0_ - 0x20)) = SUB84(in_dr14,0);
  uVar29 = (undefined4)((ulonglong)in_dr14 >> 0x20);
  (*(undefined4 *)(fr0_ - 0x28)) = SUB84(in_dr12,0);
  uVar30 = (undefined4)((ulonglong)in_dr12 >> 0x20);
  uVar26 = (uint)((ulonglong)in_dr4 >> 0x20);
  if (((*(undefined4 *)(unsigned)(unsigned)0x8c4aa4f0) & 0x20000) == 0) {
    (*(undefined4 *)(fr0_ - 0x24)) = (*(undefined4 *)(fr0_ - 0x28));
    (*(undefined4 *)(fr0_ - 0x28)) = uVar29;
    (*(undefined4 *)(fr0_ - 0x2c)) = (*(undefined4 *)(fr0_ - 0x20));
    puVar16 = ((uint *)(fr0_ - 0x34));
    ((uint *)(fr0_ - 0x34))[0] = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa4f0);
    uVar1 = ar6 & 0x3fff;
    iVar8 = 0;
    iVar10 = 0;
    iVar13 = (ar6 >> 0xe & 3) << 1;
    dVar25 = CONCAT44D(uVar26,0x3f000000);
    (*(undefined4 *)(fr0_ - 0x20)) = uVar30;
    do {
      iVar6 = (int)*ar4;
      psVar2 = ar4 + 2;
      fVar22 = 1.0;
      if ((*puVar16 & 0x80000000) != 0) {
        fVar22 = -1.0;
      }
      pdVar5 = (double *)(unsigned)(ar4[1] * 0x20 + ar5);
      if (iVar6 < 0) {
        iVar6 = -iVar6;
        fVar22 = -fVar22;
      }
      iVar10 = iVar10 + iVar6;
      iVar6 = iVar6 + -2;
      iVar14 = 0;
      ar4 = ar4 + 3;
      pdVar9 = (double *)(unsigned)(*psVar2 * 0x20 + ar5);
      if (cVar34 == '\0') {
        dVar28 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar5 + 3),SUB84(in_dr10,0));
      }
      else {
        dVar28 = pdVar5[3];
      }
      fVar23 = F32LO(dVar25);
      if (cVar33 == '\0') {
        dVar28 = CONCAT44D(F32HI(dVar28) * fVar23 + fVar23,
                                  F32LO(dVar28) * fVar23 + fVar23);
      }
      else {
        dVar28 = dVar28 * dVar25 * dVar25 + dVar25 + dVar25;
      }
      if (cVar34 == '\0') {
        dVar21 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar9 + 3),SUB84(in_dr12,0));
      }
      else {
        dVar21 = pdVar9[3];
      }
      if (cVar33 == '\0') {
        dVar21 = CONCAT44D(F32HI(dVar21) * fVar23 + fVar23,
                                  F32LO(dVar21) * fVar23 + fVar23);
      }
      else {
        dVar21 = dVar21 * dVar25 * dVar25 + dVar25 + dVar25;
      }
LAB_8c229ffe:
      in_dr12 = dVar21;
      in_dr10 = dVar28;
      if (cVar34 == '\0') {
        dVar28 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar5 + 4),SUB84(in_dr0,0));
        dVar21 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar5 + 1),SUB84(in_dr6,0));
        iVar7 = (int)pdVar5 + 0xc;
      }
      else {
        dVar28 = *(double *)(unsigned)((int)pdVar5 + 4);
        dVar21 = *(double *)(unsigned)((int)pdVar5 + 0xc);
        iVar7 = (int)pdVar5 + 0x14;
      }
      if (cVar34 == '\0') {
        dVar28 = CONCAT44D((int)(D2U(dVar28) >> 0x20),*(undefined4 *)(unsigned)((int)pdVar9 + 4))
        ;
        pdVar9 = pdVar9 + 1;
      }
      else {
        pdVar9 = (double *)(unsigned)((int)pdVar9 + 0xc);
      }
      iVar11 = *ar4 * 0x20 + ar5;
      if (cVar34 == '\0') {
        dVar21 = CONCAT44D((int)(D2U(dVar21) >> 0x20),*(undefined4 *)(unsigned)pdVar9);
        pdVar15 = (double *)(unsigned)((int)pdVar9 + 4);
      }
      else {
        pdVar15 = pdVar9 + 1;
      }
      pdVar3 = (double *)(unsigned)(iVar7 + -0xc);
      if (cVar33 == '\0') {
        dVar28 = CONCAT44D(F32HI(dVar28) - F32LO(dVar28),
                                  SUB84(dVar28,0));
        in_dr6 = CONCAT44D(F32HI(dVar21) - F32LO(dVar21),
                                  SUB84(dVar21,0));
      }
      else {
        dVar28 = dVar28 - dVar28;
        in_dr6 = dVar21 - dVar21;
      }
      pdVar5 = (double *)(unsigned)((int)pdVar15 + -0xc);
      if (cVar34 == '\0') {
        fVar23 = *(float *)(unsigned)(iVar11 + 4);
        dVar21 = CONCAT44D(*(undefined4 *)(unsigned)(iVar11 + 8),fVar22);
        iVar11 = iVar11 + 0xc;
      }
      else {
        fVar23 = (float)((ulonglong)*(undefined8 *)(unsigned)(iVar11 + 4) >> 0x20);
        dVar21 = *(double *)(unsigned)(iVar11 + 0xc);
        iVar11 = iVar11 + 0x14;
      }
      if (cVar33 == '\0') {
        dVar24 = CONCAT44D(fVar23 - F32LO(dVar28),0x3f800000);
      }
      else {
        dVar24 = CONCAT44D(fVar23,0x3f800000) - dVar28;
      }
      if (cVar34 == '\0') {
        dVar28 = CONCAT44D((int)(D2U(dVar28) >> 0x20),*(undefined4 *)(unsigned)pdVar3);
      }
      if (cVar33 == '\0') {
        dVar21 = CONCAT44D(F32HI(dVar21) - F32LO(in_dr6),
                                  SUB84(dVar21,0));
      }
      else {
        dVar21 = dVar21 - in_dr6;
      }
      if (cVar34 == '\0') {
        in_dr6 = CONCAT44D((int)((ulonglong)in_dr6 >> 0x20),*(undefined4 *)(unsigned)pdVar5);
      }
      if (cVar33 == '\0') {
        dVar21 = CONCAT44D(F32HI(dVar21) *
                                  F32HI(dVar28),SUB84(dVar21,0));
      }
      else {
        dVar21 = dVar21 * dVar28;
      }
      if (cVar34 == '\0') {
        in_dr0 = CONCAT44D(*(undefined4 *)(unsigned)(iVar11 + -0xc),SUB84(dVar28,0));
      }
      else {
        in_dr0 = *(double *)(unsigned)(iVar11 + -0xc);
      }
      psVar2 = ar4 + 1;
      fVar22 = F32LO(in_dr0);
      fVar23 = F32LO(dVar24);
      if (cVar33 == '\0') {
        bVar32 = fVar22 < fVar23;
      }
      else {
        bVar32 = in_dr0 < dVar24;
      }
      if (cVar34 == '\0') {
        dVar28 = CONCAT44D(*(undefined4 *)(unsigned)(iVar11 + 0xc),SUB84(in_dr14,0));
      }
      else {
        dVar28 = *(double *)(unsigned)(iVar11 + 0xc);
      }
      pdVar9 = (double *)(unsigned)(iVar11 + -0xc);
      bVar31 = true;
      uVar30 = (undefined4)((ulonglong)in_dr10 >> 0x20);
      fVar20 = F32HI(dVar25);
      uVar29 = (undefined4)((ulonglong)in_dr12 >> 0x20);
      if (bVar32) {
LAB_8c22a0b4:
        if (iVar14 != 0) {
          if (cVar34 == '\0') {
            in_dr0 = CONCAT44D(*(undefined4 *)(unsigned)pdVar5,fVar22);
            dVar24 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar15 + -1),SUB84(dVar24,0));
            dVar27 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar15 + -4),SUB84(in_dr6,0));
          }
          else {
            in_dr0 = *pdVar5;
            dVar24 = *(double *)(unsigned)((int)pdVar15 + -4);
            dVar27 = *(double *)(unsigned)((int)pdVar15 + 4);
            pdVar15 = (double *)(unsigned)((int)pdVar15 + 0xc);
          }
          pdVar5 = pdVar15 + -3;
          if (cVar34 == '\0') {
            pdVar15 = (double *)(unsigned)((int)ar7 + 0x14);
            *(undefined4 *)(unsigned)pdVar15 = uVar29;
          }
          else {
            pdVar15 = ar7 + 2;
            *pdVar15 = in_dr12;
          }
          if (cVar33 == '\0') {
            dVar27 = CONCAT44D(F32HI(dVar27) + fVar20,SUB84(dVar27,0));
          }
          else {
            dVar27 = dVar27 + dVar25;
          }
          if (cVar34 == '\0') {
            pdVar15 = (double *)(unsigned)((int)pdVar15 + -4);
            *(int *)(unsigned)pdVar15 = (int)(D2U(dVar24) >> 0x20);
          }
          else {
            pdVar15 = pdVar15 + -1;
            *pdVar15 = dVar24;
          }
          if (cVar33 == '\0') {
            bVar32 = F32HI(dVar27) < fVar20;
          }
          else {
            bVar32 = dVar27 < dVar25;
          }
          if (cVar34 == '\0') {
            pdVar15 = (double *)(unsigned)((int)pdVar15 + -4);
            *(int *)(unsigned)pdVar15 = (int)((ulonglong)in_dr0 >> 0x20);
          }
          else {
            pdVar15 = pdVar15 + -1;
            *pdVar15 = in_dr0;
          }
          in_dr6 = dVar27;
          if ((bVar32) && (in_dr6 = dVar25, cVar34 == '\0')) {
            in_dr6 = CONCAT44D(fVar20,SUB84(dVar27,0));
          }
          iVar8 = iVar8 + iVar14 + 1;
          *(undefined4 *)(unsigned)pdVar15 = 0xf0000000;
          iVar14 = 0;
          if (cVar34 == '\0') {
            *(int *)(unsigned)(pdVar15 + 3) = (int)((ulonglong)in_dr6 >> 0x20);
          }
          else {
            pdVar15[3] = in_dr6;
          }
          ar7 = pdVar15 + 4;
        }
      }
      else {
        if (cVar33 == '\0') {
          bVar32 = SUB84(in_dr6,0) < fVar23;
          in_dr6 = CONCAT44D(F32HI(in_dr6) *
                                    F32HI(dVar24),SUB84(in_dr6,0));
        }
        else {
          bVar32 = in_dr6 < dVar24;
          in_dr6 = in_dr6 * dVar24;
        }
        if (bVar32) goto LAB_8c22a0b4;
        dVar24 = (double)(D2U(dVar24) & 0xffffffff);
        if (cVar33 == '\0') {
          bVar32 = F32HI(in_dr0) < fVar23;
          in_dr6 = CONCAT44D((F32HI(in_dr6) -
                                    F32HI(dVar21)) * F32LO(dVar21),
                                    SUB84(in_dr6,0));
        }
        else {
          bVar32 = in_dr0 < dVar24;
          in_dr6 = (in_dr6 - dVar21) * dVar21;
        }
        if (bVar32) goto LAB_8c22a0b4;
        if (cVar33 == '\0') {
          bVar32 = F32HI(in_dr6) < 0.0;
        }
        else {
          bVar32 = in_dr6 < dVar24;
        }
        bVar31 = false;
        if (!bVar32) goto LAB_8c22a0b4;
        if (iVar14 == 0) {
          if (cVar34 == '\0') {
            in_dr0 = CONCAT44D(*(undefined4 *)(unsigned)pdVar3,fVar22);
            dVar24 = CONCAT44D(*(undefined4 *)(unsigned)(iVar7 + -8),fVar23);
            dVar27 = CONCAT44D(*(undefined4 *)(unsigned)(iVar7 + -4),SUB84(in_dr6,0));
          }
          else {
            in_dr0 = *pdVar3;
            dVar24 = *(double *)(unsigned)(iVar7 + -4);
            dVar27 = *(double *)(unsigned)(iVar7 + 4);
            iVar7 = iVar7 + 0xc;
          }
          iVar14 = 1;
          pdVar3 = (double *)(unsigned)(iVar7 + -0x18);
          if (cVar34 == '\0') {
            pdVar4 = (double *)(unsigned)((int)ar7 + 0x14);
            *(undefined4 *)(unsigned)pdVar4 = uVar30;
          }
          else {
            pdVar4 = ar7 + 2;
            *pdVar4 = in_dr10;
          }
          if (cVar33 == '\0') {
            dVar27 = CONCAT44D(F32HI(dVar27) + fVar20,SUB84(dVar27,0));
          }
          else {
            dVar27 = dVar27 + dVar25;
          }
          if (cVar34 == '\0') {
            pdVar4 = (double *)(unsigned)((int)pdVar4 + -4);
            *(int *)(unsigned)pdVar4 = (int)(D2U(dVar24) >> 0x20);
          }
          else {
            pdVar4 = pdVar4 + -1;
            *pdVar4 = dVar24;
          }
          if (cVar33 == '\0') {
            bVar32 = F32HI(dVar27) < fVar20;
          }
          else {
            bVar32 = dVar27 < dVar25;
          }
          if (cVar34 == '\0') {
            pdVar4 = (double *)(unsigned)((int)pdVar4 + -4);
            *(int *)(unsigned)pdVar4 = (int)((ulonglong)in_dr0 >> 0x20);
          }
          else {
            pdVar4 = pdVar4 + -1;
            *pdVar4 = in_dr0;
          }
          in_dr6 = dVar27;
          if ((bVar32) && (in_dr6 = dVar25, cVar34 == '\0')) {
            in_dr6 = CONCAT44D(fVar20,SUB84(dVar27,0));
          }
          *(undefined4 *)(unsigned)pdVar4 = 0xe0000000;
          if (cVar34 == '\0') {
            *(int *)(unsigned)(pdVar4 + 3) = (int)((ulonglong)in_dr6 >> 0x20);
          }
          else {
            pdVar4[3] = in_dr6;
          }
          ar7 = pdVar4 + 4;
        }
        if (cVar34 == '\0') {
          in_dr0 = CONCAT44D(*(undefined4 *)(unsigned)pdVar5,SUB84(in_dr0,0));
          dVar24 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar15 + -1),SUB84(dVar24,0));
          dVar27 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar15 + -4),SUB84(in_dr6,0));
        }
        else {
          in_dr0 = *pdVar5;
          dVar24 = *(double *)(unsigned)((int)pdVar15 + -4);
          dVar27 = *(double *)(unsigned)((int)pdVar15 + 4);
          pdVar15 = (double *)(unsigned)((int)pdVar15 + 0xc);
        }
        iVar14 = iVar14 + 1;
        pdVar5 = pdVar15 + -3;
        if (cVar34 == '\0') {
          pdVar15 = (double *)(unsigned)((int)ar7 + 0x14);
          *(undefined4 *)(unsigned)pdVar15 = uVar29;
        }
        else {
          pdVar15 = ar7 + 2;
          *pdVar15 = in_dr12;
        }
        if (cVar33 == '\0') {
          dVar27 = CONCAT44D(F32HI(dVar27) + fVar20,SUB84(dVar27,0));
        }
        else {
          dVar27 = dVar27 + dVar25;
        }
        if (cVar34 == '\0') {
          pdVar15 = (double *)(unsigned)((int)pdVar15 + -4);
          *(int *)(unsigned)pdVar15 = (int)(D2U(dVar24) >> 0x20);
        }
        else {
          pdVar15 = pdVar15 + -1;
          *pdVar15 = dVar24;
        }
        if (cVar33 == '\0') {
          bVar32 = F32HI(dVar27) < fVar20;
        }
        else {
          bVar32 = dVar27 < dVar25;
        }
        if (cVar34 == '\0') {
          pdVar15 = (double *)(unsigned)((int)pdVar15 + -4);
          *(int *)(unsigned)pdVar15 = (int)((ulonglong)in_dr0 >> 0x20);
        }
        else {
          pdVar15 = pdVar15 + -1;
          *pdVar15 = in_dr0;
        }
        in_dr6 = dVar27;
        if ((bVar32) && (in_dr6 = dVar25, cVar34 == '\0')) {
          in_dr6 = CONCAT44D(fVar20,SUB84(dVar27,0));
        }
        *(undefined4 *)(unsigned)pdVar15 = 0xe0000000;
        if (cVar34 == '\0') {
          *(int *)(unsigned)(pdVar15 + 3) = (int)((ulonglong)in_dr6 >> 0x20);
        }
        else {
          pdVar15[3] = in_dr6;
        }
        ar7 = pdVar15 + 4;
      }
      if (bVar31) {
        if (cVar34 == '\0') {
          dVar27 = CONCAT44D(*(undefined4 *)(unsigned)pdVar3,SUB84(in_dr0,0));
        }
        else {
          dVar27 = *pdVar3;
        }
        dVar24 = CONCAT44D((int)(D2U(dVar24) >> 0x20),0x3f800000);
        if (cVar33 == '\0') {
          bVar32 = 1.0 < F32HI(dVar27);
        }
        else {
          bVar32 = dVar24 < dVar27;
        }
        if (cVar34 == '\0') {
          in_dr0 = CONCAT44D(*(undefined4 *)(unsigned)pdVar5,SUB84(dVar27,0));
        }
        else {
          in_dr0 = *pdVar5;
        }
        if (!bVar32) {
          if (cVar33 == '\0') {
            bVar32 = 1.0 < F32HI(in_dr0);
          }
          else {
            bVar32 = dVar24 < in_dr0;
          }
          if (cVar34 == '\0') {
            in_dr0 = CONCAT44D(*(undefined4 *)(unsigned)pdVar9,SUB84(in_dr0,0));
          }
          else {
            in_dr0 = *pdVar9;
          }
          if (!bVar32) {
            if (cVar33 == '\0') {
              bVar32 = 1.0 < F32HI(in_dr0);
            }
            else {
              bVar32 = dVar24 < in_dr0;
            }
            if (!bVar32) goto LAB_8c22a0e8;
          }
        }
        *(uint *)(unsigned)((int)puVar16 + -4) = uVar1;
        *(int *)(unsigned)((int)puVar16 + -8) = iVar8;
        *(int *)(unsigned)((int)puVar16 + -0xc) = iVar10;
        *(unsigned *)(unsigned)((int)puVar16 + -0x10) = psVar2;
        *(int *)(unsigned)((int)puVar16 + -0x14) = ar5;
        *(int *)(unsigned)((int)puVar16 + -0x18) = iVar13;
        if (cVar34 == '\0') {
          *(float *)(unsigned)((int)puVar16 + -0x1c) = fVar20;
          *(int *)(unsigned)((int)puVar16 + -0x20) = SUB84(dVar25,0);
          *(float *)(unsigned)((int)puVar16 + -0x24) = SUB84(dVar21,0);
          *(undefined4 *)(unsigned)((int)puVar16 + -0x28) = uVar30;
          puVar17 = (uint *)(unsigned)((int)puVar16 + -0x2c);
          *(int *)(unsigned)((int)puVar16 + -0x2c) = SUB84(in_dr10,0);
        }
        else {
          *(double *)(unsigned)((int)puVar16 + -0x20) = dVar25;
          *(double *)(unsigned)((int)puVar16 + -0x28) = in_xd4;
          *(double *)(unsigned)((int)puVar16 + -0x30) = in_xd8;
          *(double *)(unsigned)((int)puVar16 + -0x38) = in_dr10;
          puVar17 = (uint *)(unsigned)((int)puVar16 + -0x40);
          *(undefined8 *)(unsigned)((int)puVar16 + -0x40) = in_xd10;
          in_xd4 = in_xd8;
        }
        ar7 = (double *)(unsigned)(vsp = (puVar16 ? (unsigned long)puVar16 - 64 : (unsigned long)(fr0_ - 120)), FUN_8c231eac(pdVar3,pdVar5,pdVar9,ar7));
        if (cVar34 == '\0') {
          in_dr10 = (double)(ulonglong)*puVar17;
          dVar21 = (double)(ulonglong)puVar17[2];
          pdVar19 = (double *)(unsigned)(puVar17 + 3);
          puVar18 = puVar17 + 5;
        }
        else {
          in_xd10 = *(undefined8 *)(unsigned)puVar17;
          in_dr10 = *(double *)(unsigned)(puVar17 + 2);
          in_xd8 = *(double *)(unsigned)(puVar17 + 4);
          in_xd4 = *(double *)(unsigned)(puVar17 + 6);
          pdVar19 = (double *)(unsigned)(puVar17 + 8);
          puVar18 = puVar17 + 10;
        }
        dVar25 = *pdVar19;
        iVar13 = *puVar18;
        ar5 = puVar18[1];
        psVar2 = (short *)(unsigned)puVar18[2];
        iVar10 = puVar18[3];
        iVar8 = puVar18[4];
        uVar1 = puVar18[5];
        puVar16 = puVar18 + 6;
      }
LAB_8c22a0e8:
      fVar22 = -SUB84(dVar21,0);
      fVar23 = F32LO(dVar25);
      if (cVar33 == '\0') {
        dVar28 = CONCAT44D(F32HI(dVar28) * fVar23,SUB84(dVar28,0));
      }
      else {
        dVar28 = dVar28 * dVar25;
      }
      ar4 = (short *)(unsigned)((int)psVar2 + iVar13);
      if (cVar33 == '\0') {
        dVar28 = CONCAT44D((int)(D2U(dVar28) >> 0x20),F32LO(dVar28) * fVar23);
      }
      else {
        dVar28 = dVar28 * dVar25;
      }
      iVar6 = iVar6 + -1;
      if (cVar33 == '\0') {
        in_dr14 = CONCAT44D(F32HI(dVar28) + fVar23,
                                   F32LO(dVar28) + fVar23);
      }
      else {
        in_dr14 = dVar28 + dVar25 + dVar25;
      }
      uVar30 = (undefined4)((ulonglong)in_dr14 >> 0x20);
      if (iVar6 != 0) {
        dVar28 = in_dr12;
        dVar21 = in_dr14;
        if (cVar34 == '\0') {
          dVar28 = CONCAT44D((int)((ulonglong)in_dr12 >> 0x20),SUB84(in_dr10,0));
          dVar21 = CONCAT44D(uVar30,SUB84(in_dr12,0));
        }
        goto LAB_8c229ffe;
      }
      if (iVar14 != 0) {
        if (cVar34 == '\0') {
          in_dr0 = CONCAT44D(*(undefined4 *)(unsigned)pdVar9,SUB84(in_dr0,0));
          pdVar5 = (double *)(unsigned)(iVar11 + -8);
        }
        else {
          in_dr0 = *pdVar9;
          pdVar5 = (double *)(unsigned)(iVar11 + -4);
        }
        if (cVar34 == '\0') {
          dVar21 = CONCAT44D(*(undefined4 *)(unsigned)pdVar5,SUB84(dVar24,0));
          dVar28 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar5 + 4),SUB84(in_dr6,0));
          pdVar5 = (double *)(unsigned)((int)ar7 + 0x14);
          *(undefined4 *)(unsigned)pdVar5 = uVar30;
        }
        else {
          dVar21 = *pdVar5;
          dVar28 = pdVar5[1];
          pdVar5 = ar7 + 2;
          *pdVar5 = in_dr14;
        }
        fVar22 = F32HI(dVar25);
        if (cVar33 == '\0') {
          dVar28 = CONCAT44D(F32HI(dVar28) + fVar22,SUB84(dVar28,0));
        }
        else {
          dVar28 = dVar28 + dVar25;
        }
        if (cVar34 == '\0') {
          pdVar5 = (double *)(unsigned)((int)pdVar5 + -4);
          *(int *)(unsigned)pdVar5 = (int)(D2U(dVar21) >> 0x20);
        }
        else {
          pdVar5 = pdVar5 + -1;
          *pdVar5 = dVar21;
        }
        if (cVar33 == '\0') {
          bVar32 = F32HI(dVar28) < fVar22;
        }
        else {
          bVar32 = dVar28 < dVar25;
        }
        if (cVar34 == '\0') {
          pdVar5 = (double *)(unsigned)((int)pdVar5 + -4);
          *(int *)(unsigned)pdVar5 = (int)((ulonglong)in_dr0 >> 0x20);
        }
        else {
          pdVar5 = pdVar5 + -1;
          *pdVar5 = in_dr0;
        }
        in_dr6 = dVar28;
        if ((bVar32) && (in_dr6 = dVar25, cVar34 == '\0')) {
          in_dr6 = CONCAT44D(fVar22,SUB84(dVar28,0));
        }
        iVar8 = iVar8 + iVar14 + 1;
        *(undefined4 *)(unsigned)pdVar5 = 0xf0000000;
        if (cVar34 == '\0') {
          *(int *)(unsigned)(pdVar5 + 3) = (int)((ulonglong)in_dr6 >> 0x20);
        }
        else {
          pdVar5[3] = in_dr6;
        }
        ar7 = pdVar5 + 4;
      }
      uVar1 = uVar1 - 1;
      if (uVar1 == 0) {
        (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) + iVar8;
        (*(undefined4 *)(unsigned)(unsigned)0x8c4aa51c) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa51c) + iVar10;
        return ar7;
      }
    } while( true );
  }
  dVar28 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c277afc) + 0.5,(*(undefined4 *)(fr0_ - 0x20)));
  iVar8 = 0;
  (*(uint *)(fr0_ - 0x38)) = ar6 & 0x3fff;
  iVar10 = 0;
  dVar25 = CONCAT44D(0x3f800000,(*(undefined4 *)(unsigned)(unsigned)0x8c277af8) + 0.5);
  if (((*(undefined4 *)(unsigned)(unsigned)0x8c4aa4f0) & 0x80000000) != 0) {
    dVar25 = CONCAT44D(0xbf800000,(*(undefined4 *)(unsigned)(unsigned)0x8c277af8) + 0.5);
  }
  ((uint *)(fr0_ - 0x34))[0] = (ar6 >> 0xe & 3) << 1;
  (*(unsigned *)(fr0_ - 0x40) = (unsigned)(unsigned long)(ar4));
  (*(undefined4 *)(fr0_ - 0x2c)) = uVar30;
  (*(undefined4 *)(fr0_ - 0x24)) = uVar29;
  do {
    psVar12 = ((short *)(unsigned long)*(unsigned *)(fr0_ - 0x40)) + 1;
    iVar13 = (int)*((short *)(unsigned long)*(unsigned *)(fr0_ - 0x40));
    psVar2 = ((short *)(unsigned long)*(unsigned *)(fr0_ - 0x40)) + 2;
    dVar21 = dVar25;
    if (cVar34 == '\0') {
      dVar28 = CONCAT44D((int)(D2U(dVar28) >> 0x20),(int)(D2U(dVar25) >> 0x20));
      dVar21 = in_xd14;
    }
    in_xd14 = dVar21;
    if (iVar13 < 0) {
      dVar28 = CONCAT44D((int)(D2U(dVar28) >> 0x20),-SUB84(dVar28,0));
      iVar13 = -iVar13;
    }
    iVar10 = iVar10 + iVar13;
    iVar6 = 0;
    (*(unsigned *)(fr0_ - 0x40) = (unsigned)(unsigned long)(((short *)(unsigned long)*(unsigned *)(fr0_ - 0x40)) + 3));
    iVar13 = iVar13 + -2;
    pdVar5 = (double *)(unsigned)(*psVar12 * 0x20 + ar5);
    pdVar9 = (double *)(unsigned)(*psVar2 * 0x20 + ar5);
    do {
      psVar2 = ((short *)(unsigned long)*(unsigned *)(fr0_ - 0x40)) + 1;
      pdVar15 = (double *)(unsigned)(*((short *)(unsigned long)*(unsigned *)(fr0_ - 0x40)) * 0x20 + ar5);
      if (cVar34 == '\0') {
        fVar22 = *(float *)(unsigned)pdVar5;
      }
      else {
        fVar22 = (float)((ulonglong)*pdVar5 >> 0x20);
      }
      dVar21 = CONCAT44D(fVar22,0x3f800000);
      bVar32 = false;
      fVar23 = F32LO(in_dr4);
      if (cVar33 != '\0' || fVar22 <= 1.0) {
LAB_8c229d6e:
        bVar32 = true;
        in_dr4 = CONCAT44D(0x3f800000,fVar23);
      }
      else {
        if (cVar34 == '\0') {
          dVar21 = CONCAT44D(*(undefined4 *)(unsigned)pdVar9,0x3f800000);
        }
        else {
          dVar21 = *pdVar9;
        }
        if (cVar33 != '\0' || F32HI(dVar21) <= SUB84(dVar21,0))
        goto LAB_8c229d6e;
        if (cVar34 == '\0') {
          fVar22 = *(float *)(unsigned)pdVar15;
        }
        else {
          fVar22 = (float)((ulonglong)*pdVar15 >> 0x20);
        }
        dVar21 = CONCAT44D(fVar22,0x3f800000);
        if (cVar33 != '\0' || fVar22 <= 1.0) goto LAB_8c229d6e;
        if (cVar34 == '\0') {
          fVar23 = *(float *)(unsigned)((int)pdVar9 + 4);
          in_dr4 = CONCAT44D((int)((ulonglong)in_dr4 >> 0x20),fVar23);
          dVar21 = CONCAT44D(fVar23,*(undefined4 *)(unsigned)((int)pdVar5 + 4));
        }
        else {
          dVar21 = *(double *)(unsigned)((int)pdVar9 + 4);
          in_xd4 = dVar21;
        }
        if (cVar33 == '\0') {
          dVar21 = CONCAT44D(F32HI(dVar21) - F32LO(dVar21),
                                    SUB84(dVar21,0));
        }
        else {
          dVar21 = dVar21 - dVar21;
        }
        if (cVar34 == '\0') {
          dVar21 = CONCAT44D((int)(D2U(dVar21) >> 0x20),*(undefined4 *)(unsigned)(pdVar15 + 1));
          in_dr6 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar9 + 1),SUB84(in_dr6,0));
        }
        else {
          in_dr6 = pdVar9[1];
        }
        fVar22 = F32HI(in_dr6);
        if (cVar33 == '\0') {
          dVar21 = CONCAT44D((int)(D2U(dVar21) >> 0x20),F32LO(dVar21) - fVar22);
        }
        else {
          dVar21 = dVar21 - in_dr6;
        }
        if (cVar34 == '\0') {
          in_dr0 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),fVar22);
        }
        if (cVar33 == '\0') {
          dVar21 = CONCAT44D(F32HI(dVar21) * F32LO(dVar21),
                                    SUB84(dVar21,0));
        }
        else {
          dVar21 = dVar21 * dVar21;
        }
        if (cVar34 == '\0') {
          dVar21 = CONCAT44D((int)(D2U(dVar21) >> 0x20),*(undefined4 *)(unsigned)(pdVar5 + 1));
        }
        if (cVar33 == '\0') {
          dVar24 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),
                                    F32LO(in_dr0) - F32LO(dVar21));
        }
        else {
          dVar24 = in_dr0 - dVar21;
        }
        if (cVar34 == '\0') {
          dVar21 = CONCAT44D((int)(D2U(dVar21) >> 0x20),
                                    *(undefined4 *)(unsigned)((int)pdVar15 + 4));
        }
        if (cVar33 == '\0') {
          fVar20 = F32LO(dVar21) - fVar23;
          fVar22 = F32LO(dVar24) * fVar20;
          in_dr0 = CONCAT44D((int)(D2U(dVar24) >> 0x20),fVar22);
          dVar21 = CONCAT44D(F32HI(dVar21) - fVar22,fVar20);
        }
        else {
          in_dr0 = dVar24 * (dVar21 - in_dr4);
          dVar21 = (dVar21 - in_dr4) - in_dr0;
        }
        dVar24 = dVar21;
        if (cVar34 == '\0') {
          dVar24 = CONCAT44D((int)(D2U(dVar21) >> 0x20),fVar23);
        }
        if (cVar33 == '\0') {
          in_dr4 = CONCAT44D(F32HI(dVar24) * F32LO(dVar28),
                                    SUB84(dVar24,0));
        }
        else {
          in_dr4 = dVar24 * dVar28;
        }
      }
      dVar21 = (double)(D2U(dVar21) & 0xffffffff00000000);
      fVar22 = F32HI(in_dr4);
      if (cVar33 == '\0') {
        bVar31 = fVar22 < 0.0;
      }
      else {
        bVar31 = in_dr4 < dVar21;
      }
      uVar29 = (undefined4)(D2U(dVar28) >> 0x20);
      uVar30 = SUB84(dVar25,0);
      if (bVar31) {
        if (iVar6 == 0) {
          if (cVar34 == '\0') {
            in_dr10 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar5 + 4),SUB84(in_dr10,0));
            pdVar3 = pdVar5 + 1;
            dVar21 = (double)((ulonglong)uVar26 << 0x20);
            in_dr4 = CONCAT44D(fVar22,*(undefined4 *)(unsigned)(pdVar5 + 2));
            pdVar4 = (double *)(unsigned)((int)pdVar5 + 0x14);
          }
          else {
            in_dr10 = *(double *)(unsigned)((int)pdVar5 + 4);
            dVar21 = CONCAT44D(psVar2,uVar26);
            in_xd8 = *(double *)(unsigned)((int)pdVar5 + 0xc);
            pdVar3 = (double *)(unsigned)((int)pdVar5 + 0x14);
            in_xd4 = *(double *)(unsigned)((int)pdVar5 + 0x1c);
            pdVar4 = (double *)(unsigned)((int)pdVar5 + 0x24);
          }
          in_dr8 = *pdVar3;
          fVar22 = F32HI(dVar21);
          if (cVar33 == '\0') {
            fVar23 = F32LO(in_dr4) + fVar22;
            dVar24 = (double)(ulonglong)(uint)fVar23;
            bVar31 = fVar23 < fVar22;
          }
          else {
            dVar24 = in_dr4 + dVar21;
            bVar31 = dVar24 < dVar21;
          }
          if (cVar34 == '\0') {
            in_dr6 = CONCAT44D(*(undefined4 *)(unsigned)pdVar4,SUB84(in_dr6,0));
            pdVar4 = (double *)(unsigned)((int)pdVar4 + 4);
          }
          else {
            in_dr6 = *pdVar4;
            pdVar4 = pdVar4 + 1;
          }
          uVar1 = SUB84(dVar24,0);
          if ((bVar31) && (uVar1 = uVar26, cVar34 != '\0')) {
            in_xd4 = CONCAT44D(psVar2,uVar26);
            uVar1 = SUB84(dVar24,0);
          }
          if (cVar34 == '\0') {
            in_dr0 = CONCAT44D(0x3f000000,SUB84(in_dr0,0));
            in_dr6 = CONCAT44D((int)((ulonglong)in_dr6 >> 0x20),uVar30);
            in_dr4 = CONCAT44D(uVar29,uVar1);
          }
          else {
            pdVar4 = pdVar4 + 1;
            in_dr0 = -2.681562215333027e+154;
            in_xd6 = in_xd12;
            in_dr4 = dVar28;
          }
          dVar21 = *pdVar4;
          fVar22 = F32HI(in_dr0);
          if (cVar33 == '\0') {
            in_dr4 = CONCAT44D(fVar22 * F32HI(dVar21) +
                                      F32HI(in_dr4),SUB84(in_dr4,0));
            in_dr6 = CONCAT44D((int)((ulonglong)in_dr6 >> 0x20),
                                      fVar22 * F32LO(dVar21) + F32LO(in_dr6));
          }
          if (cVar34 == '\0') {
            *(int *)(unsigned)((int)ar7 + 0x1c) = (int)((ulonglong)in_dr6 >> 0x20);
            *(int *)(unsigned)(ar7 + 3) = SUB84(in_dr4,0);
            *(int *)(unsigned)((int)ar7 + 0x14) = (int)((ulonglong)in_dr4 >> 0x20);
            *(int *)(unsigned)(ar7 + 2) = SUB84(in_dr6,0);
            *(int *)(unsigned)((int)ar7 + 0xc) = (int)((ulonglong)in_dr8 >> 0x20);
            *(int *)(unsigned)(ar7 + 1) = SUB84(in_dr8,0);
            pdVar3 = (double *)(unsigned)((int)ar7 + 4);
            *(int *)(unsigned)pdVar3 = (int)((ulonglong)in_dr10 >> 0x20);
          }
          else {
            ar7[3] = in_dr6;
            ar7[2] = in_xd4;
            ar7[1] = in_dr4;
            *ar7 = in_xd6;
            ar7[-1] = in_dr8;
            ar7[-2] = in_xd8;
            pdVar3 = ar7 + -3;
            *pdVar3 = in_dr10;
          }
          *(undefined4 *)(unsigned)((int)pdVar3 + -4) = 0xe0000000;
          iVar6 = 1;
          ar7 = (double *)(unsigned)((int)pdVar3 + 0x1c);
        }
        if (cVar34 == '\0') {
          in_dr6 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar9 + 4),SUB84(in_dr6,0));
          dVar21 = CONCAT44D((int)(D2U(dVar21) >> 0x20),uVar26);
          in_dr8 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar9 + 1),SUB84(in_dr8,0));
          in_dr10 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar9 + 0xc),SUB84(in_dr10,0));
          in_dr4 = CONCAT44D((int)((ulonglong)in_dr4 >> 0x20),*(undefined4 *)(unsigned)(pdVar9 + 2));
          pdVar3 = (double *)(unsigned)((int)pdVar9 + 0x14);
        }
        else {
          in_dr6 = *(double *)(unsigned)((int)pdVar9 + 4);
          in_dr8 = *(double *)(unsigned)((int)pdVar9 + 0xc);
          in_dr10 = *(double *)(unsigned)((int)pdVar9 + 0x14);
          in_xd4 = *(double *)(unsigned)((int)pdVar9 + 0x1c);
          pdVar3 = (double *)(unsigned)((int)pdVar9 + 0x24);
        }
        if (cVar33 == '\0') {
          fVar22 = F32LO(in_dr4) + F32LO(dVar21);
          dVar24 = (double)(ulonglong)(uint)fVar22;
          bVar31 = fVar22 < SUB84(dVar21,0);
        }
        else {
          dVar24 = in_dr4 + dVar21;
          bVar31 = dVar24 < dVar21;
        }
        if (cVar34 == '\0') {
          in_dr6 = CONCAT44D((int)((ulonglong)in_dr6 >> 0x20),*(undefined4 *)(unsigned)pdVar3);
          pdVar3 = (double *)(unsigned)((int)pdVar3 + 4);
        }
        else {
          in_xd6 = *pdVar3;
          pdVar3 = pdVar3 + 1;
        }
        uVar1 = SUB84(dVar24,0);
        if ((bVar31) && (uVar1 = uVar26, cVar34 != '\0')) {
          in_xd4 = CONCAT44D(psVar2,uVar26);
          uVar1 = SUB84(dVar24,0);
        }
        if (cVar34 == '\0') {
          in_dr0 = CONCAT44D(0x3f000000,SUB84(in_dr0,0));
          in_dr8 = CONCAT44D((int)((ulonglong)in_dr8 >> 0x20),uVar30);
          in_dr4 = CONCAT44D(uVar29,uVar1);
        }
        else {
          pdVar3 = pdVar3 + 1;
          in_dr0 = -2.681562215333027e+154;
          in_xd8 = in_xd12;
          in_dr4 = dVar28;
        }
        dVar21 = *pdVar3;
        fVar22 = F32HI(in_dr0);
        if (cVar33 == '\0') {
          in_dr4 = CONCAT44D(fVar22 * F32HI(dVar21) +
                                    F32HI(in_dr4),SUB84(in_dr4,0));
          in_dr8 = CONCAT44D((int)((ulonglong)in_dr8 >> 0x20),
                                    fVar22 * F32LO(dVar21) + F32LO(in_dr8));
        }
        if (cVar34 == '\0') {
          *(int *)(unsigned)((int)ar7 + 0x1c) = SUB84(in_dr6,0);
          *(int *)(unsigned)(ar7 + 3) = SUB84(in_dr4,0);
          *(int *)(unsigned)((int)ar7 + 0x14) = (int)((ulonglong)in_dr4 >> 0x20);
          *(int *)(unsigned)(ar7 + 2) = SUB84(in_dr8,0);
          *(int *)(unsigned)((int)ar7 + 0xc) = (int)((ulonglong)in_dr10 >> 0x20);
          *(int *)(unsigned)(ar7 + 1) = (int)((ulonglong)in_dr8 >> 0x20);
          pdVar3 = (double *)(unsigned)((int)ar7 + 4);
          *(int *)(unsigned)pdVar3 = (int)((ulonglong)in_dr6 >> 0x20);
        }
        else {
          ar7[3] = in_xd6;
          ar7[2] = in_xd4;
          ar7[1] = in_dr4;
          *ar7 = in_xd8;
          ar7[-1] = in_dr10;
          ar7[-2] = in_dr8;
          pdVar3 = ar7 + -3;
          *pdVar3 = in_dr6;
        }
        *(undefined4 *)(unsigned)((int)pdVar3 + -4) = 0xe0000000;
        ar7 = (double *)(unsigned)((int)pdVar3 + 0x1c);
        iVar6 = iVar6 + 1;
      }
      else if (iVar6 != 0) {
        if (cVar34 == '\0') {
          in_dr8 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar9 + 4),SUB84(in_dr8,0));
          pdVar3 = pdVar9 + 1;
          dVar21 = (double)((ulonglong)uVar26 << 0x20);
          in_dr4 = CONCAT44D(fVar22,*(undefined4 *)(unsigned)(pdVar9 + 2));
          pdVar4 = (double *)(unsigned)((int)pdVar9 + 0x14);
        }
        else {
          in_dr8 = *(double *)(unsigned)((int)pdVar9 + 4);
          dVar21 = CONCAT44D(psVar2,uVar26);
          in_xd6 = *(double *)(unsigned)((int)pdVar9 + 0xc);
          pdVar3 = (double *)(unsigned)((int)pdVar9 + 0x14);
          in_xd4 = *(double *)(unsigned)((int)pdVar9 + 0x1c);
          pdVar4 = (double *)(unsigned)((int)pdVar9 + 0x24);
        }
        in_dr6 = *pdVar3;
        fVar22 = F32HI(dVar21);
        if (cVar33 == '\0') {
          fVar23 = F32LO(in_dr4) + fVar22;
          dVar24 = (double)(ulonglong)(uint)fVar23;
          bVar31 = fVar23 < fVar22;
        }
        else {
          dVar24 = in_dr4 + dVar21;
          bVar31 = dVar24 < dVar21;
        }
        if (cVar34 == '\0') {
          in_dr8 = CONCAT44D((int)((ulonglong)in_dr8 >> 0x20),*(undefined4 *)(unsigned)pdVar4);
          pdVar4 = (double *)(unsigned)((int)pdVar4 + 4);
        }
        else {
          in_xd8 = *pdVar4;
          pdVar4 = pdVar4 + 1;
        }
        uVar1 = SUB84(dVar24,0);
        if ((bVar31) && (uVar1 = uVar26, cVar34 != '\0')) {
          in_xd4 = CONCAT44D(psVar2,uVar26);
          uVar1 = SUB84(dVar24,0);
        }
        if (cVar34 == '\0') {
          in_dr0 = CONCAT44D(0x3f000000,SUB84(in_dr0,0));
          in_dr10 = CONCAT44D(uVar30,SUB84(in_dr10,0));
          in_dr4 = CONCAT44D(uVar29,uVar1);
        }
        else {
          pdVar4 = pdVar4 + 1;
          in_dr0 = -2.681562215333027e+154;
          in_dr10 = in_xd12;
          in_dr4 = dVar28;
        }
        dVar21 = *pdVar4;
        fVar22 = F32HI(in_dr0);
        if (cVar33 == '\0') {
          in_dr4 = CONCAT44D(fVar22 * F32HI(dVar21) +
                                    F32HI(in_dr4),SUB84(in_dr4,0));
          in_dr10 = CONCAT44D(fVar22 * F32LO(dVar21) + F32HI(in_dr10),
                                     SUB84(in_dr10,0));
        }
        if (cVar34 == '\0') {
          *(int *)(unsigned)((int)ar7 + 0x1c) = SUB84(in_dr8,0);
          *(int *)(unsigned)(ar7 + 3) = SUB84(in_dr4,0);
          *(int *)(unsigned)((int)ar7 + 0x14) = (int)((ulonglong)in_dr4 >> 0x20);
          *(int *)(unsigned)(ar7 + 2) = (int)((ulonglong)in_dr10 >> 0x20);
          *(int *)(unsigned)((int)ar7 + 0xc) = (int)((ulonglong)in_dr6 >> 0x20);
          *(int *)(unsigned)(ar7 + 1) = SUB84(in_dr6,0);
          pdVar3 = (double *)(unsigned)((int)ar7 + 4);
          *(int *)(unsigned)pdVar3 = (int)((ulonglong)in_dr8 >> 0x20);
        }
        else {
          ar7[3] = in_xd8;
          ar7[2] = in_xd4;
          ar7[1] = in_dr4;
          *ar7 = in_dr10;
          ar7[-1] = in_dr6;
          ar7[-2] = in_xd6;
          pdVar3 = ar7 + -3;
          *pdVar3 = in_dr8;
        }
        *(undefined4 *)(unsigned)((int)pdVar3 + -4) = 0xf0000000;
        iVar8 = iVar8 + iVar6 + 1;
        iVar6 = 0;
        ar7 = (double *)(unsigned)((int)pdVar3 + 0x1c);
      }
      if (bVar32) {
        if (cVar34 == '\0') {
          fVar22 = *(float *)(unsigned)pdVar5;
        }
        else {
          fVar22 = (float)((ulonglong)*pdVar5 >> 0x20);
        }
        dVar21 = CONCAT44D(fVar22,0x3f800000);
        if (cVar33 != '\0' || fVar22 <= 1.0) {
          if (cVar34 == '\0') {
            dVar21 = CONCAT44D(*(undefined4 *)(unsigned)pdVar9,0x3f800000);
          }
          else {
            dVar21 = *pdVar9;
          }
          if (cVar33 != '\0' || F32HI(dVar21) <= SUB84(dVar21,0)) {
            if (cVar34 == '\0') {
              fVar22 = *(float *)(unsigned)pdVar15;
            }
            else {
              fVar22 = (float)((ulonglong)*pdVar15 >> 0x20);
            }
            dVar21 = CONCAT44D(fVar22,0x3f800000);
            if (cVar33 != '\0' || fVar22 <= 1.0) goto LAB_8c229ebc;
          }
        }
        if (cVar34 == '\0') {
          in_dr4 = CONCAT44D(uVar26,SUB84(dVar28,0));
        }
        else {
          in_dr4 = CONCAT44D(psVar2,uVar26);
          in_xd4 = in_xd14;
        }
        ar7 = (double *)(unsigned)(vsp = (puVar16 ? (unsigned long)puVar16 - 64 : (unsigned long)(fr0_ - 120)), FUN_8c231eac(pdVar5,pdVar9,pdVar15,ar7));
      }
LAB_8c229ebc:
      (*(unsigned *)(fr0_ - 0x40) = (unsigned)(unsigned long)((short *)(unsigned)((int)psVar2 + ((uint *)(fr0_ - 0x34))[0])));
      iVar13 = iVar13 + -1;
      uVar30 = (undefined4)(D2U(dVar28) >> 0x20);
      dVar28 = CONCAT44D(uVar30,-SUB84(dVar28,0));
      pdVar5 = pdVar9;
      pdVar9 = pdVar15;
    } while (iVar13 != 0);
    if (iVar6 != 0) {
      if (cVar34 == '\0') {
        in_dr8 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar15 + 4),SUB84(in_dr8,0));
        dVar21 = CONCAT44D((int)(D2U(dVar21) >> 0x20),uVar26);
        in_dr6 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar15 + 1),*(undefined4 *)(unsigned)((int)pdVar15 + 0xc));
        in_dr4 = CONCAT44D((int)((ulonglong)in_dr4 >> 0x20),*(undefined4 *)(unsigned)(pdVar15 + 2));
        pdVar15 = (double *)(unsigned)((int)pdVar15 + 0x14);
      }
      else {
        in_dr8 = *(double *)(unsigned)((int)pdVar15 + 4);
        in_dr6 = *(double *)(unsigned)((int)pdVar15 + 0xc);
        in_xd6 = *(double *)(unsigned)((int)pdVar15 + 0x14);
        in_xd4 = *(double *)(unsigned)((int)pdVar15 + 0x1c);
        pdVar15 = (double *)(unsigned)((int)pdVar15 + 0x24);
      }
      if (cVar33 == '\0') {
        fVar22 = F32LO(in_dr4) + F32LO(dVar21);
        dVar24 = (double)(ulonglong)(uint)fVar22;
        bVar32 = fVar22 < SUB84(dVar21,0);
      }
      else {
        dVar24 = in_dr4 + dVar21;
        bVar32 = dVar24 < dVar21;
      }
      if (cVar34 == '\0') {
        in_dr8 = CONCAT44D((int)((ulonglong)in_dr8 >> 0x20),*(undefined4 *)(unsigned)pdVar15);
        pdVar15 = (double *)(unsigned)((int)pdVar15 + 4);
      }
      else {
        in_xd8 = *pdVar15;
        pdVar15 = pdVar15 + 1;
      }
      uVar1 = SUB84(dVar24,0);
      if ((bVar32) && (uVar1 = uVar26, cVar34 != '\0')) {
        in_xd4 = CONCAT44D(((short *)(unsigned long)*(unsigned *)(fr0_ - 0x40)),uVar26);
        uVar1 = SUB84(dVar24,0);
      }
      if (cVar34 == '\0') {
        in_dr0 = CONCAT44D(0x3f000000,SUB84(in_dr0,0));
        in_dr10 = CONCAT44D(SUB84(dVar25,0),SUB84(in_dr10,0));
        in_dr4 = CONCAT44D(uVar30,uVar1);
      }
      else {
        pdVar15 = pdVar15 + 1;
        in_dr0 = -2.681562215333027e+154;
        in_dr10 = in_xd12;
        in_dr4 = dVar28;
      }
      fVar22 = F32HI(in_dr0);
      if (cVar33 == '\0') {
        in_dr4 = CONCAT44D(fVar22 * (float)((ulonglong)*pdVar15 >> 0x20) +
                                  F32HI(in_dr4),SUB84(in_dr4,0));
        in_dr10 = CONCAT44D(fVar22 * SUB84(*pdVar15,0) + F32HI(in_dr10),
                                   SUB84(in_dr10,0));
      }
      if (cVar34 == '\0') {
        *(int *)(unsigned)((int)ar7 + 0x1c) = SUB84(in_dr8,0);
        *(int *)(unsigned)(ar7 + 3) = SUB84(in_dr4,0);
        *(int *)(unsigned)((int)ar7 + 0x14) = (int)((ulonglong)in_dr4 >> 0x20);
        *(int *)(unsigned)(ar7 + 2) = (int)((ulonglong)in_dr10 >> 0x20);
        *(int *)(unsigned)((int)ar7 + 0xc) = SUB84(in_dr6,0);
        *(int *)(unsigned)(ar7 + 1) = (int)((ulonglong)in_dr6 >> 0x20);
        pdVar5 = (double *)(unsigned)((int)ar7 + 4);
        *(int *)(unsigned)pdVar5 = (int)((ulonglong)in_dr8 >> 0x20);
      }
      else {
        ar7[3] = in_xd8;
        ar7[2] = in_xd4;
        ar7[1] = in_dr4;
        *ar7 = in_dr10;
        ar7[-1] = in_xd6;
        ar7[-2] = in_dr6;
        pdVar5 = ar7 + -3;
        *pdVar5 = in_dr8;
      }
      *(undefined4 *)(unsigned)((int)pdVar5 + -4) = 0xf0000000;
      iVar8 = iVar8 + iVar6 + 1;
      ar7 = (double *)(unsigned)((int)pdVar5 + 0x1c);
    }
    (*(uint *)(fr0_ - 0x38)) = (*(uint *)(fr0_ - 0x38)) - 1;
    if ((*(uint *)(fr0_ - 0x38)) == 0) {
      (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) + iVar8;
      (*(undefined4 *)(unsigned)(unsigned)0x8c4aa51c) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa51c) + iVar10;
      return ar7;
    }
  } while( true );
}

__asm__(".globl _FUN_8c229c68\n.set _FUN_8c229c68, _FUN_8c229c68_def\n");
