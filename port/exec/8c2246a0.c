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
double * FUN_8c2246a0_def(short *ar4,int ar5,uint ar6,double *ar7)

{
  ring[rp++ & 255] = "FUN_8c2246a0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 96; for (int i_ = 0; i_ < 96; i_++) z_[i_] = 0; }
  bool bVar1;
  short *psVar2;
  double *pdVar3;
  double *pdVar4;
  double *pdVar5;
  double *pdVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  short *psVar10;
  int iVar11;
  double *a6;
  float fVar12;
  undefined4 uVar13;
  double in_dr0 = 0;
  float fVar14;
  double dVar15;
  float fVar17;
  double dVar16;
  float fVar18;
  double in_dr4 = 0;
  undefined4 uVar20;
  double dVar19;
  float fVar21;
  undefined4 uVar22;
  double in_dr6 = 0;
  float fVar24;
  double dVar23;
  float fVar25;
  double in_dr8 = 0;
  float fVar27;
  double dVar26;
  double in_dr10 = 0;
  float fVar28;
  undefined4 uVar29;
  float fVar30;
  undefined4 uVar31;
  undefined4 in_fr15 = 0;
  double dVar32;
  double in_xd0 = 0;
  double dVar33;
  double in_xd4 = 0;
  double in_xd6 = 0;
  double in_xd8 = 0;
  double in_xd12 = 0;
  bool bVar34;
  char cVar35;
  char cVar36;
  
  cVar36 = '\0';
  cVar35 = '\0';
  uVar20 = (undefined4)((ulonglong)in_dr4 >> 0x20);
  fVar18 = F32LO(in_dr4);
  fVar24 = F32HI(in_dr6);
  fVar21 = F32LO(in_dr6);
  fVar27 = F32HI(in_dr8);
  fVar25 = F32LO(in_dr8);
  fVar28 = F32HI(in_dr10);
  (*(uint *)(fr0_ - 0x38)) = ar6 & 0x3fff;
  if (((*(undefined4 *)(unsigned)(unsigned)0x8c4aa4f0) & 0x20000) == 0) {
    fVar30 = 0.5;
    dVar32 = CONCAT44D(0x3f000000,in_fr15);
  }
  else {
    fVar30 = (*(undefined4 *)(unsigned)(unsigned)0x8c277af8) + 0.5;
    dVar32 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c277afc) + 0.5,in_fr15);
  }
  iVar8 = 0;
  iVar9 = 0;
  uVar31 = 0x3f800000;
  dVar19 = in_dr4;
  dVar23 = in_dr6;
  dVar26 = in_dr8;
  (*(unsigned *)(fr0_ - 0x5c) = (unsigned)(unsigned long)(ar4));
  if (((*(undefined4 *)(unsigned)(unsigned)0x8c4aa4f0) & 0x80000000) != 0) {
    uVar31 = 0xbf800000;
  }
  do {
    psVar10 = ((short *)(unsigned long)*(unsigned *)(fr0_ - 0x5c)) + 1;
    iVar11 = (int)*((short *)(unsigned long)*(unsigned *)(fr0_ - 0x5c));
    if (cVar36 == '\0') {
      dVar32 = CONCAT44D((int)(D2U(dVar32) >> 0x20),uVar31);
    }
    if (iVar11 < 0) {
      dVar32 = CONCAT44D((int)(D2U(dVar32) >> 0x20),-SUB84(dVar32,0));
      iVar11 = -iVar11;
    }
    iVar9 = iVar9 + iVar11;
    iVar11 = iVar11 + -2;
    psVar2 = ((short *)(unsigned long)*(unsigned *)(fr0_ - 0x5c)) + 4;
    iVar7 = 0;
    (*(unsigned *)(fr0_ - 0x5c) = (unsigned)(unsigned long)(((short *)(unsigned long)*(unsigned *)(fr0_ - 0x5c)) + 7));
    pdVar3 = (double *)(unsigned)(*psVar10 * 0x40 + ar5);
    pdVar4 = (double *)(unsigned)(*psVar2 * 0x40 + ar5);
    dVar16 = in_xd0;
    do {
      uVar22 = SUB84(in_dr10,0);
      a6 = (double *)(unsigned)(*((short *)(unsigned long)*(unsigned *)(fr0_ - 0x5c)) * 0x40 + ar5);
      if (cVar36 == '\0') {
        dVar15 = CONCAT44D(*(undefined4 *)(unsigned)pdVar3,0x3f800000);
      }
      else {
        dVar15 = *pdVar3;
      }
      bVar1 = false;
      fVar12 = F32LO(dVar19);
      if (cVar35 != '\0' || F32HI(dVar15) <= SUB84(dVar15,0)) {
LAB_8c2247b0:
        bVar1 = true;
        dVar19 = CONCAT44D(0x3f800000,fVar12);
        in_xd0 = dVar16;
      }
      else {
        if (cVar36 == '\0') {
          dVar15 = CONCAT44D(*(undefined4 *)(unsigned)pdVar4,SUB84(dVar15,0));
        }
        else {
          dVar15 = *pdVar4;
        }
        if (cVar35 != '\0' || F32HI(dVar15) <= SUB84(dVar15,0))
        goto LAB_8c2247b0;
        if (cVar36 == '\0') {
          fVar17 = *(float *)(unsigned)a6;
        }
        else {
          fVar17 = (float)((ulonglong)*a6 >> 0x20);
        }
        dVar15 = CONCAT44D(fVar17,0x3f800000);
        if (cVar35 != '\0' || fVar17 <= 1.0) goto LAB_8c2247b0;
        if (cVar36 == '\0') {
          fVar12 = *(float *)(unsigned)((int)pdVar4 + 4);
          dVar19 = CONCAT44D((int)(D2U(dVar19) >> 0x20),fVar12);
          dVar15 = CONCAT44D(fVar12,*(undefined4 *)(unsigned)((int)pdVar3 + 4));
        }
        else {
          dVar15 = *(double *)(unsigned)((int)pdVar4 + 4);
          in_xd4 = dVar15;
        }
        if (cVar35 == '\0') {
          dVar15 = CONCAT44D(F32HI(dVar15) - F32LO(dVar15),
                                    SUB84(dVar15,0));
        }
        else {
          dVar15 = dVar15 - dVar15;
        }
        if (cVar36 == '\0') {
          dVar15 = CONCAT44D((int)(D2U(dVar15) >> 0x20),*(undefined4 *)(unsigned)(a6 + 1));
          dVar23 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar4 + 1),SUB84(dVar23,0));
        }
        else {
          dVar23 = pdVar4[1];
        }
        fVar17 = F32HI(dVar23);
        if (cVar35 == '\0') {
          dVar15 = CONCAT44D((int)(D2U(dVar15) >> 0x20),F32LO(dVar15) - fVar17);
        }
        else {
          dVar15 = dVar15 - dVar23;
        }
        in_xd0 = dVar23;
        if (cVar36 == '\0') {
          in_dr0 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),fVar17);
          in_xd0 = dVar16;
        }
        if (cVar35 == '\0') {
          dVar15 = CONCAT44D(F32HI(dVar15) * F32LO(dVar15),
                                    SUB84(dVar15,0));
        }
        else {
          dVar15 = dVar15 * dVar15;
        }
        if (cVar36 == '\0') {
          dVar15 = CONCAT44D((int)(D2U(dVar15) >> 0x20),*(undefined4 *)(unsigned)(pdVar3 + 1));
        }
        if (cVar35 == '\0') {
          dVar16 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),
                                    F32LO(in_dr0) - F32LO(dVar15));
        }
        else {
          dVar16 = in_dr0 - dVar15;
        }
        if (cVar36 == '\0') {
          dVar15 = CONCAT44D((int)(D2U(dVar15) >> 0x20),*(undefined4 *)(unsigned)((int)a6 + 4));
        }
        if (cVar35 == '\0') {
          fVar14 = F32LO(dVar15) - fVar12;
          fVar17 = F32LO(dVar16) * fVar14;
          in_dr0 = CONCAT44D((int)(D2U(dVar16) >> 0x20),fVar17);
          dVar15 = CONCAT44D(F32HI(dVar15) - fVar17,fVar14);
        }
        else {
          in_dr0 = dVar16 * (dVar15 - dVar19);
          dVar15 = (dVar15 - dVar19) - in_dr0;
        }
        dVar19 = dVar15;
        if (cVar36 == '\0') {
          dVar19 = CONCAT44D((int)(D2U(dVar15) >> 0x20),fVar12);
        }
        if (cVar35 == '\0') {
          dVar19 = CONCAT44D(F32HI(dVar19) * F32LO(dVar32),
                                    SUB84(dVar19,0));
        }
        else {
          dVar19 = dVar19 * dVar32;
        }
      }
      if (cVar35 == '\0') {
        bVar34 = F32HI(dVar19) < 0.0;
      }
      else {
        bVar34 = dVar19 < (double)(D2U(dVar15) & 0xffffffff00000000);
      }
      uVar13 = (undefined4)(D2U(dVar32) >> 0x20);
      fVar12 = F32LO(in_dr0);
      if (bVar34) {
        if (iVar7 == 0) {
          if (cVar36 == '\0') {
            dVar19 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar3 + 4),SUB84(dVar26,0));
            pdVar6 = pdVar3 + 1;
            fVar17 = 0.5;
            pdVar5 = pdVar3 + 2;
            dVar23 = CONCAT44D(uVar13,fVar30);
          }
          else {
            dVar19 = *(double *)(unsigned)((int)pdVar3 + 4);
            fVar12 = 0.5;
            fVar17 = -3.689349e+19;
            in_xd6 = *(double *)(unsigned)((int)pdVar3 + 0xc);
            pdVar6 = (double *)(unsigned)((int)pdVar3 + 0x14);
            pdVar5 = (double *)(unsigned)((int)pdVar3 + 0x1c);
            dVar23 = dVar32;
            in_xd4 = in_xd12;
          }
          dVar16 = *pdVar6;
          if (cVar36 == '\0') {
            dVar26 = (double)((ulonglong)*(uint *)(unsigned)(pdVar5 + 3) << 0x20);
            pdVar5 = (double *)(unsigned)((int)pdVar5 + 0x1c);
            fVar12 = *(float *)(unsigned)pdVar5;
          }
          else {
            dVar26 = pdVar5[3];
            pdVar5 = pdVar5 + 4;
            in_xd0 = *pdVar5;
          }
          if (cVar35 == '\0') {
            dVar23 = CONCAT44D(fVar17 * fVar12 + F32HI(dVar23),
                                      fVar17 * F32HI(dVar26) + F32LO(dVar23))
            ;
          }
          if (cVar36 == '\0') {
            *(int *)(unsigned)((int)ar7 + 0x14) = (int)(D2U(dVar23) >> 0x20);
            *(int *)(unsigned)(ar7 + 2) = SUB84(dVar23,0);
            *(int *)(unsigned)((int)ar7 + 0xc) = (int)(D2U(dVar16) >> 0x20);
            *(int *)(unsigned)(ar7 + 1) = SUB84(dVar16,0);
            pdVar6 = (double *)(unsigned)((int)ar7 + 4);
            *(int *)(unsigned)pdVar6 = (int)(D2U(dVar19) >> 0x20);
          }
          else {
            ar7[2] = dVar23;
            ar7[1] = in_xd4;
            *ar7 = dVar16;
            ar7[-1] = in_xd6;
            pdVar6 = ar7 + -2;
            *pdVar6 = dVar19;
          }
          *(undefined4 *)(unsigned)((int)pdVar6 + -4) = 0xe0000000;
          if (cVar36 == '\0') {
            dVar19 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar5 + -0x1c),SUB84(dVar26,0));
            pdVar5 = pdVar5 + -3;
            dVar26 = CONCAT44D(fVar27,uVar20);
          }
          else {
            in_xd8 = CONCAT44D(fVar18,uVar20);
            dVar19 = *(double *)(unsigned)((int)pdVar5 + -0x1c);
            pdVar5 = (double *)(unsigned)((int)pdVar5 + -0x14);
            dVar26 = CONCAT44D(fVar24,fVar27);
          }
          if (cVar35 == '\0') {
            dVar26 = CONCAT44D((int)(D2U(dVar26) >> 0x20),
                                      F32LO(dVar26) * F32HI(dVar19));
          }
          else {
            dVar26 = dVar26 * dVar19;
          }
          if (cVar36 == '\0') {
            dVar19 = CONCAT44D(*(undefined4 *)(unsigned)pdVar5,fVar12);
            pdVar5 = (double *)(unsigned)((int)pdVar5 + 4);
            dVar16 = (double)((ulonglong)in_dr8 & 0xffffffff);
            fVar12 = fVar18;
          }
          else {
            dVar19 = *pdVar5;
            pdVar5 = pdVar5 + 1;
            in_xd6 = CONCAT44D(fVar21,fVar25);
            fVar12 = fVar27;
          }
          if (cVar35 == '\0') {
            dVar26 = CONCAT44D(F32HI(dVar19) * fVar12 +
                                      F32HI(dVar26),SUB84(dVar26,0));
          }
          if (cVar36 == '\0') {
            dVar19 = CONCAT44D(*(undefined4 *)(unsigned)pdVar5,SUB84(dVar19,0));
            pdVar5 = (double *)(unsigned)((int)pdVar5 + 4);
            dVar16 = CONCAT44D(fVar28,SUB84(dVar16,0));
            fVar12 = fVar24;
          }
          else {
            dVar19 = *pdVar5;
            pdVar5 = pdVar5 + 1;
            dVar16 = CONCAT44D(ar5,fVar28);
            fVar12 = fVar25;
          }
          if (cVar35 == '\0') {
            dVar16 = CONCAT44D((int)(D2U(dVar16) >> 0x20),
                                      F32HI(dVar19) * fVar12 + F32LO(dVar16))
            ;
          }
          if (cVar36 == '\0') {
            in_dr0 = CONCAT44D(*(undefined4 *)(unsigned)pdVar5,SUB84(dVar19,0));
            pdVar5 = (double *)(unsigned)((int)pdVar5 + 4);
            fVar12 = fVar21;
          }
          else {
            in_dr0 = *pdVar5;
            pdVar5 = pdVar5 + 1;
            fVar12 = fVar28;
          }
          if (cVar36 == '\0') {
            dVar23 = (double)(ulonglong)*(uint *)(unsigned)((int)pdVar5 + 0x14);
            pdVar5 = pdVar5 + 3;
          }
          else {
            in_xd4 = *(double *)(unsigned)((int)pdVar5 + 0x14);
            pdVar5 = (double *)(unsigned)((int)pdVar5 + 0x1c);
          }
          if (cVar35 == '\0') {
            dVar16 = CONCAT44D(F32HI(in_dr0) * fVar12 +
                                      F32HI(dVar16),SUB84(dVar16,0));
          }
          if (cVar36 == '\0') {
            uVar29 = *(undefined4 *)(unsigned)pdVar5;
            dVar19 = CONCAT44D(uVar29,uVar22);
            *(undefined4 *)(unsigned)(pdVar6 + 7) = *(undefined4 *)(unsigned)((int)pdVar5 + 4);
            *(undefined4 *)(unsigned)((int)pdVar6 + 0x34) = uVar29;
            *(int *)(unsigned)(pdVar6 + 6) = SUB84(dVar23,0);
            *(int *)(unsigned)(pdVar6 + 5) = (int)(D2U(dVar16) >> 0x20);
            *(int *)(unsigned)((int)pdVar6 + 0x24) = SUB84(dVar16,0);
            *(int *)(unsigned)(pdVar6 + 4) = (int)(D2U(dVar26) >> 0x20);
            pdVar6 = (double *)(unsigned)((int)pdVar6 + 0x1c);
            *(int *)(unsigned)pdVar6 = SUB84(dVar26,0);
          }
          else {
            dVar19 = *pdVar5;
            *(double *)(unsigned)((int)pdVar6 + 0x34) = pdVar5[1];
            *(double *)(unsigned)((int)pdVar6 + 0x2c) = dVar19;
            *(double *)(unsigned)((int)pdVar6 + 0x24) = in_xd4;
            pdVar6[3] = dVar16;
            pdVar6[2] = in_xd6;
            pdVar6[1] = dVar26;
            *pdVar6 = in_xd8;
          }
          uVar22 = SUB84(dVar19,0);
          iVar7 = 1;
          ar7 = pdVar6 + 4;
        }
        if (cVar36 == '\0') {
          uVar29 = SUB84(in_dr0,0);
          fVar12 = 0.5;
          dVar23 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar4 + 4),*(undefined4 *)(unsigned)(pdVar4 + 1));
          pdVar5 = pdVar4 + 2;
          dVar16 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar4 + 0xc),fVar30);
          dVar19 = CONCAT44D(uVar13,SUB84(dVar26,0));
        }
        else {
          dVar23 = *(double *)(unsigned)((int)pdVar4 + 4);
          uVar29 = 0x3f000000;
          fVar12 = -3.689349e+19;
          in_xd4 = *(double *)(unsigned)((int)pdVar4 + 0xc);
          dVar16 = *(double *)(unsigned)((int)pdVar4 + 0x14);
          pdVar5 = (double *)(unsigned)((int)pdVar4 + 0x1c);
          in_xd6 = in_xd12;
          dVar19 = dVar32;
        }
        if (cVar36 == '\0') {
          pdVar6 = (double *)(unsigned)((int)pdVar5 + 0x1c);
          pdVar5 = pdVar5 + 3;
        }
        else {
          pdVar6 = pdVar5 + 4;
          pdVar5 = pdVar6;
        }
        dVar26 = *pdVar5;
        fVar17 = F32HI(dVar26);
        if (cVar35 == '\0') {
          dVar16 = CONCAT44D((int)(D2U(dVar16) >> 0x20),
                                    fVar12 * F32LO(dVar26) + F32LO(dVar16));
          dVar19 = CONCAT44D(fVar12 * fVar17 + F32HI(dVar19),
                                    SUB84(dVar19,0));
        }
        uVar13 = (undefined4)(D2U(dVar23) >> 0x20);
        if (cVar36 == '\0') {
          *(int *)(unsigned)((int)ar7 + 0x14) = (int)(D2U(dVar19) >> 0x20);
          *(int *)(unsigned)(ar7 + 2) = SUB84(dVar16,0);
          *(int *)(unsigned)((int)ar7 + 0xc) = (int)(D2U(dVar16) >> 0x20);
          *(int *)(unsigned)(ar7 + 1) = SUB84(dVar23,0);
          pdVar5 = (double *)(unsigned)((int)ar7 + 4);
          *(undefined4 *)(unsigned)pdVar5 = uVar13;
        }
        else {
          ar7[2] = dVar19;
          ar7[1] = in_xd6;
          *ar7 = dVar16;
          ar7[-1] = in_xd4;
          pdVar5 = ar7 + -2;
          *pdVar5 = dVar23;
        }
        *(undefined4 *)(unsigned)((int)pdVar5 + -4) = 0xe0000000;
        if (cVar36 == '\0') {
          dVar23 = CONCAT44D(uVar13,uVar20);
          dVar26 = CONCAT44D(fVar17,*(undefined4 *)(unsigned)((int)pdVar6 + -0x1c));
          pdVar6 = pdVar6 + -3;
          in_dr10 = CONCAT44D(fVar27,uVar22);
        }
        else {
          in_xd4 = CONCAT44D(fVar18,uVar20);
          pdVar6 = (double *)(unsigned)((int)pdVar6 + -0x14);
          in_dr10 = CONCAT44D(fVar24,fVar27);
        }
        if (cVar35 == '\0') {
          fVar12 = F32LO(dVar23) * F32LO(dVar26);
        }
        else {
          fVar12 = SUB84(dVar23 * dVar26,0);
        }
        if (cVar36 == '\0') {
          dVar26 = (double)((ulonglong)in_dr4 & 0xffffffff);
          dVar23 = CONCAT44D(*(undefined4 *)(unsigned)pdVar6,uVar29);
          pdVar6 = (double *)(unsigned)((int)pdVar6 + 4);
          dVar19 = (double)((ulonglong)in_dr8 & 0xffffffff);
        }
        else {
          dVar23 = *pdVar6;
          pdVar6 = pdVar6 + 1;
          in_xd8 = CONCAT44D(fVar21,fVar25);
        }
        fVar17 = F32LO(dVar26);
        if (cVar35 == '\0') {
          in_dr10 = CONCAT44D(F32HI(dVar23) * fVar17 +
                                     F32HI(in_dr10),SUB84(in_dr10,0));
        }
        if (cVar36 == '\0') {
          dVar23 = CONCAT44D(*(undefined4 *)(unsigned)pdVar6,SUB84(dVar23,0));
          pdVar6 = (double *)(unsigned)((int)pdVar6 + 4);
          dVar26 = CONCAT44D(fVar28,SUB84(dVar19,0));
          fVar17 = fVar24;
        }
        else {
          dVar23 = *pdVar6;
          pdVar6 = pdVar6 + 1;
          dVar26 = CONCAT44D(ar5,fVar28);
        }
        if (cVar35 == '\0') {
          dVar26 = CONCAT44D((int)(D2U(dVar26) >> 0x20),
                                    F32HI(dVar23) * fVar17 + F32LO(dVar26));
        }
        if (cVar36 == '\0') {
          in_dr0 = CONCAT44D(*(undefined4 *)(unsigned)pdVar6,SUB84(dVar23,0));
          pdVar6 = (double *)(unsigned)((int)pdVar6 + 4);
          fVar17 = fVar21;
        }
        else {
          in_dr0 = *pdVar6;
          pdVar6 = pdVar6 + 1;
        }
        if (cVar36 == '\0') {
          dVar16 = (double)(ulonglong)*(uint *)(unsigned)((int)pdVar6 + 0x14);
          pdVar6 = pdVar6 + 3;
        }
        else {
          in_xd6 = *(double *)(unsigned)((int)pdVar6 + 0x14);
          pdVar6 = (double *)(unsigned)((int)pdVar6 + 0x1c);
        }
        if (cVar35 == '\0') {
          dVar26 = CONCAT44D(F32HI(in_dr0) * fVar17 +
                                    F32HI(dVar26),SUB84(dVar26,0));
        }
        if (cVar36 == '\0') {
          uVar22 = *(undefined4 *)(unsigned)pdVar6;
          dVar23 = CONCAT44D(uVar22,SUB84(dVar16,0));
          dVar19 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar6 + 4),fVar12);
          *(undefined4 *)(unsigned)(pdVar5 + 7) = *(undefined4 *)(unsigned)((int)pdVar6 + 4);
          *(undefined4 *)(unsigned)((int)pdVar5 + 0x34) = uVar22;
          *(int *)(unsigned)(pdVar5 + 6) = SUB84(dVar16,0);
          *(int *)(unsigned)(pdVar5 + 5) = (int)(D2U(dVar26) >> 0x20);
          *(int *)(unsigned)((int)pdVar5 + 0x24) = SUB84(dVar26,0);
          *(int *)(unsigned)(pdVar5 + 4) = (int)((ulonglong)in_dr10 >> 0x20);
          pdVar5 = (double *)(unsigned)((int)pdVar5 + 0x1c);
          *(float *)(unsigned)pdVar5 = fVar12;
        }
        else {
          dVar23 = *pdVar6;
          dVar19 = pdVar6[1];
          *(double *)(unsigned)((int)pdVar5 + 0x34) = dVar19;
          *(double *)(unsigned)((int)pdVar5 + 0x2c) = dVar23;
          *(double *)(unsigned)((int)pdVar5 + 0x24) = in_xd6;
          pdVar5[3] = dVar26;
          pdVar5[2] = in_xd8;
          pdVar5[1] = in_dr10;
          *pdVar5 = in_xd4;
        }
        ar7 = pdVar5 + 4;
        iVar7 = iVar7 + 1;
      }
      else if (iVar7 != 0) {
        if (cVar36 == '\0') {
          fVar17 = 0.5;
          dVar26 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar4 + 1),SUB84(dVar26,0));
          dVar19 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar4 + 4),uVar13);
          pdVar5 = pdVar4 + 2;
          dVar23 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar4 + 0xc),fVar30);
        }
        else {
          dVar19 = *(double *)(unsigned)((int)pdVar4 + 4);
          fVar12 = 0.5;
          fVar17 = -3.689349e+19;
          dVar26 = *(double *)(unsigned)((int)pdVar4 + 0xc);
          dVar23 = *(double *)(unsigned)((int)pdVar4 + 0x14);
          pdVar5 = (double *)(unsigned)((int)pdVar4 + 0x1c);
          in_xd6 = in_xd12;
          in_xd4 = dVar32;
        }
        if (cVar36 == '\0') {
          dVar16 = (double)((ulonglong)*(uint *)(unsigned)(pdVar5 + 3) << 0x20);
          pdVar5 = (double *)(unsigned)((int)pdVar5 + 0x1c);
          fVar12 = *(float *)(unsigned)pdVar5;
        }
        else {
          dVar16 = pdVar5[3];
          pdVar5 = pdVar5 + 4;
          in_xd0 = *pdVar5;
        }
        if (cVar35 == '\0') {
          dVar23 = CONCAT44D((int)(D2U(dVar23) >> 0x20),
                                    fVar17 * F32HI(dVar16) + F32LO(dVar23));
          dVar19 = CONCAT44D((int)(D2U(dVar19) >> 0x20),
                                    fVar17 * fVar12 + F32LO(dVar19));
        }
        uVar13 = (undefined4)(D2U(dVar19) >> 0x20);
        if (cVar36 == '\0') {
          *(int *)(unsigned)((int)ar7 + 0x14) = SUB84(dVar19,0);
          *(int *)(unsigned)(ar7 + 2) = SUB84(dVar23,0);
          *(int *)(unsigned)((int)ar7 + 0xc) = (int)(D2U(dVar23) >> 0x20);
          *(int *)(unsigned)(ar7 + 1) = (int)(D2U(dVar26) >> 0x20);
          pdVar6 = (double *)(unsigned)((int)ar7 + 4);
          *(undefined4 *)(unsigned)pdVar6 = uVar13;
        }
        else {
          ar7[2] = in_xd4;
          ar7[1] = in_xd6;
          *ar7 = dVar23;
          ar7[-1] = dVar26;
          pdVar6 = ar7 + -2;
          *pdVar6 = dVar19;
        }
        *(undefined4 *)(unsigned)((int)pdVar6 + -4) = 0xf0000000;
        if (cVar36 == '\0') {
          dVar19 = CONCAT44D(uVar13,uVar20);
          dVar16 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar5 + -0x1c),SUB84(dVar16,0));
          pdVar5 = pdVar5 + -3;
          dVar23 = CONCAT44D(fVar27,SUB84(dVar23,0));
        }
        else {
          in_xd4 = CONCAT44D(fVar18,uVar20);
          dVar16 = *(double *)(unsigned)((int)pdVar5 + -0x1c);
          pdVar5 = (double *)(unsigned)((int)pdVar5 + -0x14);
          dVar23 = CONCAT44D(fVar24,fVar27);
        }
        if (cVar35 == '\0') {
          fVar17 = F32LO(dVar19) * F32HI(dVar16);
        }
        else {
          fVar17 = SUB84(dVar19 * dVar16,0);
        }
        if (cVar36 == '\0') {
          dVar19 = CONCAT44D(*(undefined4 *)(unsigned)pdVar5,fVar12);
          pdVar5 = (double *)(unsigned)((int)pdVar5 + 4);
          in_dr10 = CONCAT44D(fVar25,uVar22);
          fVar12 = fVar18;
        }
        else {
          dVar19 = *pdVar5;
          pdVar5 = pdVar5 + 1;
          in_dr10 = CONCAT44D(fVar21,fVar25);
          fVar12 = fVar27;
        }
        if (cVar35 == '\0') {
          dVar23 = CONCAT44D(F32HI(dVar19) * fVar12 +
                                    F32HI(dVar23),SUB84(dVar23,0));
        }
        if (cVar36 == '\0') {
          dVar19 = CONCAT44D(*(undefined4 *)(unsigned)pdVar5,SUB84(dVar19,0));
          pdVar5 = (double *)(unsigned)((int)pdVar5 + 4);
          dVar26 = (double)(ulonglong)(uint)fVar28;
          fVar12 = fVar24;
        }
        else {
          dVar19 = *pdVar5;
          pdVar5 = pdVar5 + 1;
          in_xd8 = CONCAT44D(ar5,fVar28);
          fVar12 = fVar25;
        }
        if (cVar35 == '\0') {
          in_dr10 = CONCAT44D(F32HI(dVar19) * fVar12 +
                                     F32HI(in_dr10),SUB84(in_dr10,0));
        }
        if (cVar36 == '\0') {
          in_dr0 = CONCAT44D(*(undefined4 *)(unsigned)pdVar5,SUB84(dVar19,0));
          pdVar5 = (double *)(unsigned)((int)pdVar5 + 4);
          fVar12 = fVar21;
        }
        else {
          in_dr0 = *pdVar5;
          pdVar5 = pdVar5 + 1;
          fVar12 = fVar28;
        }
        if (cVar36 == '\0') {
          dVar26 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar5 + 0x14),SUB84(dVar26,0));
          pdVar5 = pdVar5 + 3;
        }
        else {
          dVar26 = *(double *)(unsigned)((int)pdVar5 + 0x14);
          pdVar5 = (double *)(unsigned)((int)pdVar5 + 0x1c);
        }
        if (cVar35 == '\0') {
          dVar26 = CONCAT44D((int)(D2U(dVar26) >> 0x20),
                                    F32HI(in_dr0) * fVar12 + F32LO(dVar26));
        }
        if (cVar36 == '\0') {
          uVar13 = (undefined4)(D2U(dVar23) >> 0x20);
          uVar22 = *(undefined4 *)(unsigned)pdVar5;
          dVar23 = CONCAT44D(uVar13,uVar22);
          dVar19 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar5 + 4),fVar17);
          *(undefined4 *)(unsigned)(pdVar6 + 7) = *(undefined4 *)(unsigned)((int)pdVar5 + 4);
          *(undefined4 *)(unsigned)((int)pdVar6 + 0x34) = uVar22;
          *(int *)(unsigned)(pdVar6 + 6) = (int)(D2U(dVar26) >> 0x20);
          *(int *)(unsigned)(pdVar6 + 5) = SUB84(dVar26,0);
          *(int *)(unsigned)((int)pdVar6 + 0x24) = (int)((ulonglong)in_dr10 >> 0x20);
          *(undefined4 *)(unsigned)(pdVar6 + 4) = uVar13;
          pdVar6 = (double *)(unsigned)((int)pdVar6 + 0x1c);
          *(float *)(unsigned)pdVar6 = fVar17;
        }
        else {
          in_xd6 = *pdVar5;
          dVar19 = pdVar5[1];
          *(double *)(unsigned)((int)pdVar6 + 0x34) = dVar19;
          *(double *)(unsigned)((int)pdVar6 + 0x2c) = in_xd6;
          *(double *)(unsigned)((int)pdVar6 + 0x24) = dVar26;
          pdVar6[3] = in_xd8;
          pdVar6[2] = in_dr10;
          pdVar6[1] = dVar23;
          *pdVar6 = in_xd4;
        }
        iVar8 = iVar8 + iVar7 + 1;
        iVar7 = 0;
        ar7 = pdVar6 + 4;
      }
      if (bVar1) {
        if (cVar36 == '\0') {
          fVar12 = *(float *)(unsigned)pdVar3;
        }
        else {
          fVar12 = (float)((ulonglong)*pdVar3 >> 0x20);
        }
        dVar16 = CONCAT44D(fVar12,0x3f800000);
        if (cVar35 == '\0' && fVar12 < 1.0) {
          if (cVar36 == '\0') {
            dVar16 = CONCAT44D(*(undefined4 *)(unsigned)pdVar4,0x3f800000);
          }
          else {
            dVar16 = *pdVar4;
          }
          if (cVar35 == '\0' && F32HI(dVar16) < SUB84(dVar16,0)) {
            if (cVar36 == '\0') {
              fVar12 = *(float *)(unsigned)a6;
            }
            else {
              fVar12 = (float)((ulonglong)*a6 >> 0x20);
            }
            dVar16 = CONCAT44D(fVar12,0x3f800000);
            if (cVar35 == '\0' && fVar12 < 1.0) goto LAB_8c224a0e;
          }
        }
        if (cVar36 == '\0') {
          uVar22 = *(undefined4 *)(unsigned)((int)pdVar4 + 0x24);
          dVar23 = CONCAT44D(uVar22,SUB84(dVar23,0));
          dVar19 = CONCAT44D(*(undefined4 *)(unsigned)pdVar3,*(undefined4 *)(unsigned)pdVar4);
          dVar26 = CONCAT44D((int)(D2U(dVar26) >> 0x20),
                                    *(undefined4 *)(unsigned)((int)pdVar3 + 0x24));
          dVar16 = CONCAT44D((int)(D2U(dVar16) >> 0x20),uVar22);
        }
        else {
          in_xd4 = *pdVar4;
          dVar23 = *(double *)(unsigned)((int)pdVar4 + 0x24);
          dVar19 = *pdVar3;
          in_xd8 = *(double *)(unsigned)((int)pdVar3 + 0x24);
          uVar22 = (undefined4)(D2U(dVar23) >> 0x20);
        }
        fVar12 = F32HI(dVar19);
        if (cVar35 == '\0') {
          fVar17 = F32LO(dVar16) * fVar12;
        }
        else {
          fVar17 = SUB84(dVar16 * dVar19,0);
        }
        dVar16 = in_xd4;
        if (cVar36 == '\0') {
          dVar16 = CONCAT44D(SUB84(dVar19,0),SUB84(in_dr0,0));
        }
        if (cVar35 == '\0') {
          dVar16 = CONCAT44D(F32HI(dVar16) * F32LO(dVar26),
                                    SUB84(dVar16,0));
        }
        else {
          dVar16 = dVar16 * dVar26;
        }
        if (cVar36 == '\0') {
          dVar26 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar4 + 4),SUB84(dVar26,0));
          dVar23 = CONCAT44D(uVar22,*(undefined4 *)(unsigned)(pdVar3 + 4));
          dVar15 = CONCAT44D(SUB84(dVar19,0),fVar17);
        }
        else {
          dVar26 = pdVar4[4];
          in_xd6 = pdVar3[4];
          dVar15 = in_xd4;
        }
        if (cVar35 == '\0') {
          dVar16 = CONCAT44D(F32HI(dVar16) - F32LO(dVar15),
                                    SUB84(dVar16,0));
        }
        else {
          dVar16 = dVar16 - dVar15;
        }
        uVar22 = (undefined4)(D2U(dVar26) >> 0x20);
        if (cVar36 == '\0') {
          dVar15 = CONCAT44D((int)(D2U(dVar15) >> 0x20),uVar22);
        }
        if (cVar35 == '\0') {
          dVar15 = CONCAT44D(F32HI(dVar15) * F32LO(dVar23),
                                    SUB84(dVar15,0));
        }
        else {
          dVar15 = dVar15 * dVar23;
        }
        dVar33 = dVar23;
        if (cVar36 == '\0') {
          dVar16 = CONCAT44D((int)(D2U(dVar16) >> 0x20),
                                    (int)(D2U(dVar23) >> 0x20));
          dVar33 = in_xd0;
        }
        if (cVar35 == '\0') {
          dVar16 = CONCAT44D((int)(D2U(dVar16) >> 0x20),
                                    F32LO(dVar16) * F32LO(dVar23));
          fVar12 = F32LO(dVar15) * fVar12 - F32HI(dVar15);
        }
        else {
          dVar16 = dVar16 * dVar23;
          fVar12 = SUB84(dVar15 * dVar19 - dVar15 * dVar19,0);
        }
        if (cVar36 == '\0') {
          dVar15 = CONCAT44D(*(undefined4 *)(unsigned)((int)a6 + 0x24),fVar12);
        }
        else {
          dVar15 = *(double *)(unsigned)((int)a6 + 0x24);
        }
        if (cVar35 == '\0') {
          dVar15 = CONCAT44D(F32HI(dVar15) * F32LO(dVar15),
                                    SUB84(dVar15,0));
        }
        else {
          dVar15 = dVar15 * dVar15;
        }
        if (cVar36 == '\0') {
          dVar15 = CONCAT44D((int)(D2U(dVar15) >> 0x20),*(undefined4 *)(unsigned)(a6 + 4));
        }
        if (cVar35 == '\0') {
          dVar15 = CONCAT44D(F32HI(dVar16) * F32LO(dVar15) +
                                    F32HI(dVar15),SUB84(dVar15,0));
        }
        if (cVar36 == '\0') {
          dVar15 = CONCAT44D((int)(D2U(dVar15) >> 0x20),uVar22);
        }
        if (cVar35 == '\0') {
          fVar12 = F32LO(dVar15) * F32LO(dVar26);
          dVar15 = CONCAT44D((int)(D2U(dVar15) >> 0x20),fVar12);
          fVar12 = F32LO(dVar16) - fVar12;
        }
        else {
          dVar15 = dVar15 * dVar26;
          fVar12 = SUB84(dVar16 - dVar15,0);
        }
        if (cVar36 == '\0') {
          in_dr0 = CONCAT44D(fVar12,*(undefined4 *)(unsigned)a6);
          in_xd0 = dVar33;
        }
        else {
          in_xd0 = *a6;
          in_dr0 = dVar33;
        }
        if (cVar35 == '\0') {
          fVar12 = (F32HI(in_dr0) * F32LO(in_dr0) +
                   F32HI(dVar15)) * F32LO(dVar32);
        }
        else {
          fVar12 = (float)((ulonglong)(dVar15 * dVar32) >> 0x20);
        }
        if (cVar35 == '\0' && fVar12 < 0.0) {
          if (cVar36 == '\0') {
            in_dr10 = (double)((ulonglong)in_dr10 & 0xffffffff);
            dVar23 = (double)((ulonglong)in_dr6 & 0xffffffff);
            dVar19 = in_dr4;
            dVar26 = in_dr8;
          }
          else {
            in_dr10 = CONCAT44D(ar5,fVar28);
            in_xd8 = CONCAT44D(fVar21,fVar25);
            dVar26 = CONCAT44D(fVar24,fVar27);
            in_xd6 = CONCAT44D(fVar28,fVar21);
            dVar23 = CONCAT44D(fVar25,fVar24);
            in_xd4 = CONCAT44D(fVar27,fVar18);
            dVar19 = CONCAT44D(fVar18,uVar20);
          }
          ar7 = (double *)(unsigned)(vsp = ((unsigned long)(fr0_ - 96)), FUN_8c224b00(pdVar3,pdVar4,a6,ar7));
        }
      }
LAB_8c224a0e:
      (*(unsigned *)(fr0_ - 0x5c) = (unsigned)(unsigned long)(((short *)(unsigned long)*(unsigned *)(fr0_ - 0x5c)) + (ar6 >> 0xe & 3) + 3));
      iVar11 = iVar11 + -1;
      uVar22 = (undefined4)(D2U(dVar32) >> 0x20);
      dVar32 = CONCAT44D(uVar22,-SUB84(dVar32,0));
      pdVar3 = pdVar4;
      pdVar4 = a6;
      dVar16 = in_xd0;
    } while (iVar11 != 0);
    if (iVar7 != 0) {
      pdVar3 = (double *)(unsigned)((int)a6 + 4);
      if (cVar36 == '\0') {
        uVar13 = SUB84(in_dr0,0);
        fVar12 = 0.5;
        pdVar4 = a6 + 2;
        dVar23 = CONCAT44D(*(undefined4 *)(unsigned)((int)a6 + 0xc),fVar30);
        dVar19 = CONCAT44D(uVar22,SUB84(dVar26,0));
      }
      else {
        in_xd4 = *pdVar3;
        pdVar3 = (double *)(unsigned)((int)a6 + 0xc);
        uVar13 = 0x3f000000;
        fVar12 = -3.689349e+19;
        dVar23 = *(double *)(unsigned)((int)a6 + 0x14);
        pdVar4 = (double *)(unsigned)((int)a6 + 0x1c);
        in_xd6 = in_xd12;
        dVar19 = dVar32;
      }
      dVar26 = *pdVar3;
      if (cVar36 == '\0') {
        pdVar3 = (double *)(unsigned)((int)pdVar4 + 0x1c);
        pdVar4 = pdVar4 + 3;
      }
      else {
        pdVar3 = pdVar4 + 4;
        pdVar4 = pdVar3;
      }
      dVar16 = *pdVar4;
      fVar17 = F32HI(dVar16);
      if (cVar35 == '\0') {
        dVar23 = CONCAT44D((int)(D2U(dVar23) >> 0x20),
                                  fVar12 * F32LO(dVar16) + F32LO(dVar23));
        dVar19 = CONCAT44D(fVar12 * fVar17 + F32HI(dVar19),
                                  SUB84(dVar19,0));
      }
      uVar22 = (undefined4)(D2U(dVar26) >> 0x20);
      if (cVar36 == '\0') {
        *(int *)(unsigned)((int)ar7 + 0x14) = (int)(D2U(dVar19) >> 0x20);
        *(int *)(unsigned)(ar7 + 2) = SUB84(dVar23,0);
        *(int *)(unsigned)((int)ar7 + 0xc) = (int)(D2U(dVar23) >> 0x20);
        *(undefined4 *)(unsigned)(ar7 + 1) = uVar22;
        pdVar4 = (double *)(unsigned)((int)ar7 + 4);
        *(int *)(unsigned)pdVar4 = SUB84(dVar26,0);
      }
      else {
        ar7[2] = dVar19;
        ar7[1] = in_xd6;
        *ar7 = dVar23;
        ar7[-1] = dVar26;
        pdVar4 = ar7 + -2;
        *pdVar4 = in_xd4;
      }
      *(undefined4 *)(unsigned)((int)pdVar4 + -4) = 0xf0000000;
      if (cVar36 == '\0') {
        dVar26 = CONCAT44D(uVar22,uVar20);
        dVar16 = CONCAT44D(fVar17,*(undefined4 *)(unsigned)((int)pdVar3 + -0x1c));
        pdVar3 = pdVar3 + -3;
        dVar19 = (double)(ulonglong)(uint)fVar27;
      }
      else {
        in_xd4 = CONCAT44D(fVar18,uVar20);
        pdVar3 = (double *)(unsigned)((int)pdVar3 + -0x14);
        in_xd8 = CONCAT44D(fVar24,fVar27);
      }
      fVar12 = F32LO(dVar16);
      if (cVar35 == '\0') {
        fVar17 = F32LO(dVar26) * fVar12;
      }
      else {
        fVar17 = SUB84(dVar26 * dVar16,0);
      }
      if (cVar36 == '\0') {
        dVar16 = CONCAT44D(*(undefined4 *)(unsigned)pdVar3,uVar13);
        pdVar3 = (double *)(unsigned)((int)pdVar3 + 4);
        dVar26 = CONCAT44D(fVar25,SUB84(dVar19,0));
        fVar12 = fVar18;
      }
      else {
        dVar16 = *pdVar3;
        pdVar3 = pdVar3 + 1;
        dVar26 = CONCAT44D(fVar21,fVar25);
      }
      if (cVar35 == '\0') {
        dVar26 = CONCAT44D((int)(D2U(dVar26) >> 0x20),
                                  F32HI(dVar16) * fVar12 + F32LO(dVar26));
      }
      if (cVar36 == '\0') {
        dVar19 = CONCAT44D(*(undefined4 *)(unsigned)pdVar3,SUB84(dVar16,0));
        pdVar3 = (double *)(unsigned)((int)pdVar3 + 4);
        dVar23 = (double)(ulonglong)(uint)fVar28;
        fVar12 = fVar24;
      }
      else {
        dVar19 = *pdVar3;
        pdVar3 = pdVar3 + 1;
        in_xd6 = CONCAT44D(ar5,fVar28);
      }
      if (cVar35 == '\0') {
        dVar26 = CONCAT44D(F32HI(dVar19) * fVar12 +
                                  F32HI(dVar26),SUB84(dVar26,0));
      }
      if (cVar36 == '\0') {
        in_dr0 = CONCAT44D(*(undefined4 *)(unsigned)pdVar3,SUB84(dVar19,0));
        pdVar3 = (double *)(unsigned)((int)pdVar3 + 4);
        fVar12 = fVar21;
      }
      else {
        in_dr0 = *pdVar3;
        pdVar3 = pdVar3 + 1;
      }
      if (cVar36 == '\0') {
        dVar23 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar3 + 0x14),SUB84(dVar23,0));
        pdVar3 = pdVar3 + 3;
      }
      else {
        dVar23 = *(double *)(unsigned)((int)pdVar3 + 0x14);
        pdVar3 = (double *)(unsigned)((int)pdVar3 + 0x1c);
      }
      if (cVar35 == '\0') {
        dVar23 = CONCAT44D((int)(D2U(dVar23) >> 0x20),
                                  F32HI(in_dr0) * fVar12 + F32LO(dVar23));
      }
      if (cVar36 == '\0') {
        uVar22 = *(undefined4 *)(unsigned)pdVar3;
        in_dr10 = CONCAT44D(uVar22,SUB84(in_dr10,0));
        dVar19 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar3 + 4),fVar17);
        *(undefined4 *)(unsigned)(pdVar4 + 7) = *(undefined4 *)(unsigned)((int)pdVar3 + 4);
        *(undefined4 *)(unsigned)((int)pdVar4 + 0x34) = uVar22;
        *(int *)(unsigned)(pdVar4 + 6) = (int)(D2U(dVar23) >> 0x20);
        *(int *)(unsigned)(pdVar4 + 5) = SUB84(dVar23,0);
        *(int *)(unsigned)((int)pdVar4 + 0x24) = (int)(D2U(dVar26) >> 0x20);
        *(int *)(unsigned)(pdVar4 + 4) = SUB84(dVar26,0);
        pdVar4 = (double *)(unsigned)((int)pdVar4 + 0x1c);
        *(float *)(unsigned)pdVar4 = fVar17;
      }
      else {
        in_dr10 = *pdVar3;
        dVar19 = pdVar3[1];
        *(double *)(unsigned)((int)pdVar4 + 0x34) = dVar19;
        *(double *)(unsigned)((int)pdVar4 + 0x2c) = in_dr10;
        *(double *)(unsigned)((int)pdVar4 + 0x24) = dVar23;
        pdVar4[3] = in_xd6;
        pdVar4[2] = dVar26;
        pdVar4[1] = in_xd8;
        *pdVar4 = in_xd4;
      }
      iVar8 = iVar8 + iVar7 + 1;
      ar7 = pdVar4 + 4;
    }
    (*(uint *)(fr0_ - 0x38)) = (*(uint *)(fr0_ - 0x38)) - 1;
    if ((*(uint *)(fr0_ - 0x38)) == 0) {
      (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) + iVar8;
      (*(undefined4 *)(unsigned)(unsigned)0x8c4aa51c) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa51c) + iVar9;
      return ar7;
    }
  } while( true );
}

__asm__(".globl _FUN_8c2246a0\n.set _FUN_8c2246a0, _FUN_8c2246a0_def\n");
