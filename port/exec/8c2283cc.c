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
int FUN_8c2283cc_def(short *ar4,int ar5,uint ar6,int ar7)

{
  ring[rp++ & 255] = "FUN_8c2283cc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 64; for (int i_ = 0; i_ < 64; i_++) z_[i_] = 0; }
  bool bVar1;
  double dVar2;
  short *psVar3;
  double *pdVar4;
  double *pdVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  short *psVar9;
  int iVar10;
  double *ar6_00;
  double *ar5_00;
  float fVar11;
  double in_dr0 = 0;
  double dVar12;
  float fVar13;
  double in_dr4 = 0;
  double in_dr6 = 0;
  double dVar14;
  double in_dr10 = 0;
  float fVar15;
  double dVar16;
  undefined4 in_fr15 = 0;
  double dVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  double in_xd4 = 0;
  double in_xd6 = 0;
  double in_xd8 = 0;
  double in_xd12 = 0;
  double in_xd14 = 0;
  bool bVar20;
  char cVar21;
  char cVar22;
  
  cVar22 = '\0';
  cVar21 = '\0';
  (*(uint *)(fr0_ - 0x38)) = ar6 & 0x3fff;
  if (((*(undefined4 *)(unsigned)(unsigned)0x8c4aa4f0) & 0x20000) == 0) {
    dVar17 = CONCAT44D(0x3f000000,in_fr15);
    fVar15 = 0.5;
  }
  else {
    dVar17 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c277af8) + 0.5,in_fr15);
    fVar15 = (*(undefined4 *)(unsigned)(unsigned)0x8c277afc) + 0.5;
  }
  iVar7 = 0;
  iVar8 = 0;
  dVar16 = CONCAT44D(0x3f800000,fVar15);
  (*(unsigned *)(fr0_ - 0x40) = (unsigned)(unsigned long)(ar4));
  if (((*(undefined4 *)(unsigned)(unsigned)0x8c4aa4f0) & 0x80000000) != 0) {
    dVar16 = CONCAT44D(0xbf800000,fVar15);
  }
  do {
    psVar9 = ((short *)(unsigned long)*(unsigned *)(fr0_ - 0x40)) + 1;
    iVar10 = (int)*((short *)(unsigned long)*(unsigned *)(fr0_ - 0x40));
    psVar3 = ((short *)(unsigned long)*(unsigned *)(fr0_ - 0x40)) + 2;
    dVar12 = dVar16;
    if (cVar22 == '\0') {
      dVar17 = CONCAT44D((int)(D2U(dVar17) >> 0x20),(int)(D2U(dVar16) >> 0x20));
      dVar12 = in_xd14;
    }
    in_xd14 = dVar12;
    if (iVar10 < 0) {
      dVar17 = CONCAT44D((int)(D2U(dVar17) >> 0x20),-SUB84(dVar17,0));
      iVar10 = -iVar10;
    }
    iVar8 = iVar8 + iVar10;
    iVar6 = 0;
    (*(unsigned *)(fr0_ - 0x40) = (unsigned)(unsigned long)(((short *)(unsigned long)*(unsigned *)(fr0_ - 0x40)) + 3));
    iVar10 = iVar10 + -2;
    pdVar4 = (double *)(unsigned)(*psVar9 * 0x20 + ar5);
    ar5_00 = (double *)(unsigned)(*psVar3 * 0x20 + ar5);
    do {
      ar6_00 = (double *)(unsigned)(*((short *)(unsigned long)*(unsigned *)(fr0_ - 0x40)) * 0x20 + ar5);
      if (cVar22 == '\0') {
        fVar15 = *(float *)(unsigned)pdVar4;
      }
      else {
        fVar15 = (float)((ulonglong)*pdVar4 >> 0x20);
      }
      dVar12 = CONCAT44D(fVar15,0x3f800000);
      bVar1 = false;
      if (cVar21 != '\0' || fVar15 <= 1.0) {
LAB_8c2284b0:
        bVar1 = true;
        in_dr4 = CONCAT44D(0x3f800000,SUB84(in_dr4,0));
      }
      else {
        if (cVar22 == '\0') {
          dVar12 = CONCAT44D(*(undefined4 *)(unsigned)ar5_00,0x3f800000);
        }
        else {
          dVar12 = *ar5_00;
        }
        if (cVar21 != '\0' || F32HI(dVar12) <= SUB84(dVar12,0))
        goto LAB_8c2284b0;
        if (cVar22 == '\0') {
          fVar15 = *(float *)(unsigned)ar6_00;
        }
        else {
          fVar15 = (float)((ulonglong)*ar6_00 >> 0x20);
        }
        dVar12 = CONCAT44D(fVar15,0x3f800000);
        if (cVar21 != '\0' || fVar15 <= 1.0) goto LAB_8c2284b0;
        if (cVar22 == '\0') {
          fVar15 = *(float *)(unsigned)((int)ar5_00 + 4);
          dVar12 = CONCAT44D(fVar15,*(undefined4 *)(unsigned)((int)pdVar4 + 4));
          in_dr6 = CONCAT44D(fVar15,SUB84(in_dr6,0));
        }
        else {
          dVar12 = *(double *)(unsigned)((int)ar5_00 + 4);
          fVar15 = F32HI(dVar12);
          in_dr6 = dVar12;
        }
        if (cVar21 == '\0') {
          dVar12 = CONCAT44D(F32HI(dVar12) - F32LO(dVar12),
                                    SUB84(dVar12,0));
        }
        else {
          dVar12 = dVar12 - dVar12;
        }
        if (cVar22 == '\0') {
          dVar12 = CONCAT44D((int)(D2U(dVar12) >> 0x20),*(undefined4 *)(unsigned)(ar6_00 + 1));
          in_dr4 = CONCAT44D((int)((ulonglong)in_dr4 >> 0x20),*(undefined4 *)(unsigned)(ar5_00 + 1));
        }
        else {
          in_xd4 = ar5_00[1];
        }
        fVar13 = F32LO(in_dr4);
        if (cVar21 == '\0') {
          dVar12 = CONCAT44D((int)(D2U(dVar12) >> 0x20),F32LO(dVar12) - fVar13);
        }
        else {
          dVar12 = dVar12 - in_dr4;
        }
        if (cVar22 == '\0') {
          in_dr0 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),fVar13);
        }
        if (cVar21 == '\0') {
          dVar12 = CONCAT44D(F32HI(dVar12) * F32LO(dVar12),
                                    SUB84(dVar12,0));
        }
        else {
          dVar12 = dVar12 * dVar12;
        }
        if (cVar22 == '\0') {
          dVar12 = CONCAT44D((int)(D2U(dVar12) >> 0x20),*(undefined4 *)(unsigned)(pdVar4 + 1));
        }
        if (cVar21 == '\0') {
          dVar14 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),
                                    F32LO(in_dr0) - F32LO(dVar12));
        }
        else {
          dVar14 = in_dr0 - dVar12;
        }
        if (cVar22 == '\0') {
          dVar12 = CONCAT44D((int)(D2U(dVar12) >> 0x20),
                                    *(undefined4 *)(unsigned)((int)ar6_00 + 4));
        }
        if (cVar21 == '\0') {
          fVar15 = F32LO(dVar12) - fVar15;
          fVar11 = F32LO(dVar14) * fVar15;
          in_dr0 = CONCAT44D((int)(D2U(dVar14) >> 0x20),fVar11);
          dVar12 = CONCAT44D(F32HI(dVar12) - fVar11,fVar15);
        }
        else {
          in_dr0 = dVar14 * (dVar12 - in_dr6);
          dVar12 = (dVar12 - in_dr6) - in_dr0;
        }
        dVar14 = dVar12;
        if (cVar22 == '\0') {
          dVar14 = CONCAT44D((int)(D2U(dVar12) >> 0x20),fVar13);
        }
        if (cVar21 == '\0') {
          in_dr4 = CONCAT44D(F32HI(dVar14) * F32LO(dVar17),
                                    SUB84(dVar14,0));
        }
        else {
          in_dr4 = dVar14 * dVar17;
        }
      }
      if (cVar21 == '\0') {
        bVar20 = F32HI(in_dr4) < 0.0;
      }
      else {
        bVar20 = in_dr4 < (double)(D2U(dVar12) & 0xffffffff00000000);
      }
      uVar18 = (undefined4)(D2U(dVar17) >> 0x20);
      uVar19 = SUB84(dVar16,0);
      if (bVar20) {
        if (iVar6 == 0) {
          if (cVar22 == '\0') {
            in_dr10 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar4 + 4),SUB84(in_dr10,0));
            pdVar5 = pdVar4 + 1;
            dVar14 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar4 + 2),uVar18);
            fVar15 = *(float *)(unsigned)(pdVar4 + 3);
            in_dr0 = CONCAT44D(0x3f000000,*(undefined4 *)(unsigned)((int)pdVar4 + 0x1c));
            dVar12 = CONCAT44D(uVar19,*(undefined4 *)(unsigned)((int)pdVar4 + 0x14));
          }
          else {
            in_dr10 = *(double *)(unsigned)((int)pdVar4 + 4);
            in_dr0 = -2.681562215333027e+154;
            in_xd8 = *(double *)(unsigned)((int)pdVar4 + 0xc);
            pdVar5 = (double *)(unsigned)((int)pdVar4 + 0x14);
            dVar14 = *(double *)(unsigned)((int)pdVar4 + 0x1c);
            in_xd4 = *(double *)(unsigned)((int)pdVar4 + 0x24);
            fVar15 = (float)((ulonglong)*(undefined8 *)(unsigned)((int)pdVar4 + 0x2c) >> 0x20);
            dVar12 = in_xd12;
            in_xd6 = dVar17;
          }
          dVar2 = *pdVar5;
          fVar13 = F32HI(in_dr0);
          if (cVar21 == '\0') {
            dVar14 = CONCAT44D((int)(D2U(dVar14) >> 0x20),
                                      fVar13 * fVar15 + F32LO(dVar14));
          }
          if (cVar22 == '\0') {
            pdVar5 = (double *)(unsigned)(ar7 + 0x1c);
            *(int *)(unsigned)pdVar5 = SUB84(dVar12,0);
          }
          else {
            pdVar5 = (double *)(unsigned)(ar7 + 0x18);
            *pdVar5 = in_xd4;
          }
          if (cVar21 == '\0') {
            dVar12 = CONCAT44D(fVar13 * F32LO(in_dr0) + F32HI(dVar12),
                                      SUB84(dVar12,0));
          }
          if (cVar22 == '\0') {
            *(int *)(unsigned)((int)pdVar5 + -4) = (int)(D2U(dVar14) >> 0x20);
            *(int *)(unsigned)(pdVar5 + -1) = (int)(D2U(dVar12) >> 0x20);
            *(int *)(unsigned)((int)pdVar5 + -0xc) = SUB84(dVar14,0);
            *(int *)(unsigned)(pdVar5 + -2) = (int)(D2U(dVar2) >> 0x20);
            *(int *)(unsigned)((int)pdVar5 + -0x14) = SUB84(dVar2,0);
            pdVar5 = pdVar5 + -3;
            *(int *)(unsigned)pdVar5 = (int)((ulonglong)in_dr10 >> 0x20);
          }
          else {
            pdVar5[-1] = dVar14;
            pdVar5[-2] = dVar12;
            pdVar5[-3] = in_xd6;
            pdVar5[-4] = dVar2;
            pdVar5[-5] = in_xd8;
            pdVar5 = pdVar5 + -6;
            *pdVar5 = in_dr10;
          }
          *(undefined4 *)(unsigned)((int)pdVar5 + -4) = 0xe0000000;
          iVar6 = 1;
          ar7 = (int)pdVar5 + 0x1c;
        }
        if (cVar22 == '\0') {
          in_dr0 = CONCAT44D(0x3f000000,SUB84(in_dr0,0));
          in_dr10 = CONCAT44D(*(undefined4 *)(unsigned)(ar5_00 + 1),SUB84(in_dr10,0));
          in_dr6 = CONCAT44D(*(undefined4 *)(unsigned)(ar5_00 + 2),*(undefined4 *)(unsigned)((int)ar5_00 + 4));
          pdVar5 = ar5_00 + 3;
          in_dr4 = CONCAT44D(uVar19,*(undefined4 *)(unsigned)((int)ar5_00 + 0x14));
          dVar12 = CONCAT44D(uVar18,*(undefined4 *)(unsigned)((int)ar5_00 + 0xc));
        }
        else {
          in_xd6 = *(double *)(unsigned)((int)ar5_00 + 4);
          in_dr0 = -2.681562215333027e+154;
          in_dr10 = *(double *)(unsigned)((int)ar5_00 + 0xc);
          in_xd8 = *(double *)(unsigned)((int)ar5_00 + 0x14);
          in_dr6 = *(double *)(unsigned)((int)ar5_00 + 0x1c);
          in_xd4 = *(double *)(unsigned)((int)ar5_00 + 0x24);
          pdVar5 = (double *)(unsigned)((int)ar5_00 + 0x34);
          in_dr4 = in_xd12;
          dVar12 = dVar17;
        }
        dVar14 = *pdVar5;
        fVar15 = F32HI(in_dr0);
        if (cVar21 == '\0') {
          dVar12 = CONCAT44D(fVar15 * F32LO(dVar14) + F32HI(dVar12),
                                    SUB84(dVar12,0));
        }
        if (cVar22 == '\0') {
          pdVar5 = (double *)(unsigned)(ar7 + 0x1c);
          *(int *)(unsigned)pdVar5 = SUB84(in_dr4,0);
        }
        else {
          pdVar5 = (double *)(unsigned)(ar7 + 0x18);
          *pdVar5 = in_xd4;
        }
        if (cVar21 == '\0') {
          in_dr4 = CONCAT44D(fVar15 * F32HI(dVar14) +
                                    F32HI(in_dr4),SUB84(in_dr4,0));
        }
        if (cVar22 == '\0') {
          *(int *)(unsigned)((int)pdVar5 + -4) = (int)((ulonglong)in_dr6 >> 0x20);
          *(int *)(unsigned)(pdVar5 + -1) = (int)((ulonglong)in_dr4 >> 0x20);
          *(int *)(unsigned)((int)pdVar5 + -0xc) = (int)(D2U(dVar12) >> 0x20);
          *(int *)(unsigned)(pdVar5 + -2) = SUB84(dVar12,0);
          *(int *)(unsigned)((int)pdVar5 + -0x14) = (int)((ulonglong)in_dr10 >> 0x20);
          pdVar5 = pdVar5 + -3;
          *(int *)(unsigned)pdVar5 = SUB84(in_dr6,0);
        }
        else {
          pdVar5[-1] = in_dr6;
          pdVar5[-2] = in_dr4;
          pdVar5[-3] = dVar12;
          pdVar5[-4] = in_xd8;
          pdVar5[-5] = in_dr10;
          pdVar5 = pdVar5 + -6;
          *pdVar5 = in_xd6;
        }
        *(undefined4 *)(unsigned)((int)pdVar5 + -4) = 0xe0000000;
        ar7 = (int)pdVar5 + 0x1c;
        iVar6 = iVar6 + 1;
      }
      else if (iVar6 != 0) {
        if (cVar22 == '\0') {
          in_dr10 = CONCAT44D(*(undefined4 *)(unsigned)((int)ar5_00 + 4),SUB84(in_dr10,0));
          dVar12 = CONCAT44D(*(undefined4 *)(unsigned)(ar5_00 + 2),*(undefined4 *)(unsigned)(ar5_00 + 1));
          fVar15 = *(float *)(unsigned)(ar5_00 + 3);
          in_dr0 = CONCAT44D(0x3f000000,*(undefined4 *)(unsigned)((int)ar5_00 + 0x1c));
          in_dr4 = CONCAT44D(uVar19,*(undefined4 *)(unsigned)((int)ar5_00 + 0x14));
          in_dr6 = CONCAT44D(uVar18,*(undefined4 *)(unsigned)((int)ar5_00 + 0xc));
        }
        else {
          in_dr10 = *(double *)(unsigned)((int)ar5_00 + 4);
          in_dr0 = -2.681562215333027e+154;
          in_xd8 = *(double *)(unsigned)((int)ar5_00 + 0xc);
          in_xd6 = *(double *)(unsigned)((int)ar5_00 + 0x14);
          dVar12 = *(double *)(unsigned)((int)ar5_00 + 0x1c);
          in_xd4 = *(double *)(unsigned)((int)ar5_00 + 0x24);
          fVar15 = (float)((ulonglong)*(undefined8 *)(unsigned)((int)ar5_00 + 0x2c) >> 0x20);
          in_dr4 = in_xd12;
          in_dr6 = dVar17;
        }
        fVar13 = F32HI(in_dr0);
        if (cVar21 == '\0') {
          in_dr6 = CONCAT44D(fVar13 * fVar15 + F32HI(in_dr6),
                                    SUB84(in_dr6,0));
        }
        if (cVar22 == '\0') {
          pdVar5 = (double *)(unsigned)(ar7 + 0x1c);
          *(int *)(unsigned)pdVar5 = SUB84(in_dr4,0);
        }
        else {
          pdVar5 = (double *)(unsigned)(ar7 + 0x18);
          *pdVar5 = in_xd4;
        }
        if (cVar21 == '\0') {
          in_dr4 = CONCAT44D(fVar13 * F32LO(in_dr0) + F32HI(in_dr4),
                                    SUB84(in_dr4,0));
        }
        if (cVar22 == '\0') {
          *(int *)(unsigned)((int)pdVar5 + -4) = (int)(D2U(dVar12) >> 0x20);
          *(int *)(unsigned)(pdVar5 + -1) = (int)((ulonglong)in_dr4 >> 0x20);
          *(int *)(unsigned)((int)pdVar5 + -0xc) = (int)((ulonglong)in_dr6 >> 0x20);
          *(int *)(unsigned)(pdVar5 + -2) = SUB84(in_dr6,0);
          *(int *)(unsigned)((int)pdVar5 + -0x14) = SUB84(dVar12,0);
          pdVar5 = pdVar5 + -3;
          *(int *)(unsigned)pdVar5 = (int)((ulonglong)in_dr10 >> 0x20);
        }
        else {
          pdVar5[-1] = dVar12;
          pdVar5[-2] = in_dr4;
          pdVar5[-3] = in_dr6;
          pdVar5[-4] = in_xd6;
          pdVar5[-5] = in_xd8;
          pdVar5 = pdVar5 + -6;
          *pdVar5 = in_dr10;
        }
        *(undefined4 *)(unsigned)((int)pdVar5 + -4) = 0xf0000000;
        iVar7 = iVar7 + iVar6 + 1;
        iVar6 = 0;
        ar7 = (int)pdVar5 + 0x1c;
      }
      if (bVar1) {
        if (cVar22 == '\0') {
          fVar15 = *(float *)(unsigned)pdVar4;
        }
        else {
          fVar15 = (float)((ulonglong)*pdVar4 >> 0x20);
        }
        if (cVar21 != '\0' || fVar15 <= 1.0) {
          if (cVar22 == '\0') {
            dVar12 = CONCAT44D(*(undefined4 *)(unsigned)ar5_00,0x3f800000);
          }
          else {
            dVar12 = *ar5_00;
          }
          if (cVar21 != '\0' || F32HI(dVar12) <= SUB84(dVar12,0)) {
            if (cVar22 == '\0') {
              fVar15 = *(float *)(unsigned)ar6_00;
            }
            else {
              fVar15 = (float)((ulonglong)*ar6_00 >> 0x20);
            }
            if (cVar21 != '\0' || fVar15 <= 1.0) goto LAB_8c2285dc;
          }
        }
        dVar12 = in_xd14;
        if (cVar22 == '\0') {
          dVar12 = CONCAT44D(SUB84(dVar17,0),SUB84(in_dr4,0));
        }
        in_dr4 = dVar12;
        ar7 = (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c22e684(pdVar4,ar5_00,ar6_00,ar7));
      }
LAB_8c2285dc:
      (*(unsigned *)(fr0_ - 0x40) = (unsigned)(unsigned long)(((short *)(unsigned long)*(unsigned *)(fr0_ - 0x40)) + (ar6 >> 0xe & 3) + 1));
      iVar10 = iVar10 + -1;
      uVar19 = (undefined4)(D2U(dVar17) >> 0x20);
      dVar17 = CONCAT44D(uVar19,-SUB84(dVar17,0));
      pdVar4 = ar5_00;
      ar5_00 = ar6_00;
    } while (iVar10 != 0);
    if (iVar6 != 0) {
      if (cVar22 == '\0') {
        in_dr0 = CONCAT44D(0x3f000000,SUB84(in_dr0,0));
        in_dr6 = CONCAT44D(*(undefined4 *)(unsigned)((int)ar6_00 + 4),
                                  *(undefined4 *)(unsigned)((int)ar6_00 + 0xc));
        in_dr10 = CONCAT44D(*(undefined4 *)(unsigned)((int)ar6_00 + 0x14),SUB84(in_dr10,0));
        pdVar4 = ar6_00 + 3;
        dVar12 = CONCAT44D(uVar19,*(undefined4 *)(unsigned)(ar6_00 + 2));
        in_dr4 = CONCAT44D(SUB84(dVar16,0),*(undefined4 *)(unsigned)(ar6_00 + 1));
      }
      else {
        in_dr6 = *(double *)(unsigned)((int)ar6_00 + 4);
        in_dr0 = -2.681562215333027e+154;
        in_xd4 = *(double *)(unsigned)((int)ar6_00 + 0xc);
        in_xd6 = *(double *)(unsigned)((int)ar6_00 + 0x14);
        in_xd8 = *(double *)(unsigned)((int)ar6_00 + 0x1c);
        in_dr10 = *(double *)(unsigned)((int)ar6_00 + 0x24);
        pdVar4 = (double *)(unsigned)((int)ar6_00 + 0x34);
        dVar12 = dVar17;
        in_dr4 = in_xd12;
      }
      dVar14 = *pdVar4;
      fVar15 = F32HI(in_dr0);
      if (cVar21 == '\0') {
        dVar12 = CONCAT44D(fVar15 * F32LO(dVar14) + F32HI(dVar12),
                                  SUB84(dVar12,0));
      }
      if (cVar22 == '\0') {
        pdVar4 = (double *)(unsigned)(ar7 + 0x1c);
        *(int *)(unsigned)pdVar4 = (int)((ulonglong)in_dr10 >> 0x20);
      }
      else {
        pdVar4 = (double *)(unsigned)(ar7 + 0x18);
        *pdVar4 = in_dr10;
      }
      if (cVar21 == '\0') {
        in_dr4 = CONCAT44D(fVar15 * F32HI(dVar14) +
                                  F32HI(in_dr4),SUB84(in_dr4,0));
      }
      if (cVar22 == '\0') {
        *(int *)(unsigned)((int)pdVar4 + -4) = SUB84(dVar12,0);
        *(int *)(unsigned)(pdVar4 + -1) = (int)((ulonglong)in_dr4 >> 0x20);
        *(int *)(unsigned)((int)pdVar4 + -0xc) = (int)(D2U(dVar12) >> 0x20);
        *(int *)(unsigned)(pdVar4 + -2) = SUB84(in_dr6,0);
        *(int *)(unsigned)((int)pdVar4 + -0x14) = SUB84(in_dr4,0);
        pdVar4 = pdVar4 + -3;
        *(int *)(unsigned)pdVar4 = (int)((ulonglong)in_dr6 >> 0x20);
      }
      else {
        pdVar4[-1] = in_xd8;
        pdVar4[-2] = in_dr4;
        pdVar4[-3] = dVar12;
        pdVar4[-4] = in_xd6;
        pdVar4[-5] = in_xd4;
        pdVar4 = pdVar4 + -6;
        *pdVar4 = in_dr6;
      }
      *(undefined4 *)(unsigned)((int)pdVar4 + -4) = 0xf0000000;
      iVar7 = iVar7 + iVar6 + 1;
      ar7 = (int)pdVar4 + 0x1c;
    }
    (*(uint *)(fr0_ - 0x38)) = (*(uint *)(fr0_ - 0x38)) - 1;
    if ((*(uint *)(fr0_ - 0x38)) == 0) {
      (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) + iVar7;
      (*(undefined4 *)(unsigned)(unsigned)0x8c4aa51c) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa51c) + iVar8;
      return ar7;
    }
  } while( true );
}

__asm__(".globl _FUN_8c2283cc\n.set _FUN_8c2283cc, _FUN_8c2283cc_def\n");
