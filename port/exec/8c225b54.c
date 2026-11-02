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
double * FUN_8c225b54_def(short *ar4,int ar5,uint ar6,double *ar7)

{
  ring[rp++ & 255] = "FUN_8c225b54";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 84; for (int i_ = 0; i_ < 84; i_++) z_[i_] = 0; }
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
  double *pdVar12;
  double in_dr0 = 0;
  float fVar13;
  double dVar14;
  float fVar17;
  double dVar15;
  double dVar16;
  undefined4 uVar18;
  float fVar19;
  undefined4 uVar20;
  double in_dr4 = 0;
  undefined4 uVar21;
  undefined4 uVar22;
  double in_dr6 = 0;
  undefined4 uVar24;
  double dVar23;
  undefined4 uVar25;
  double in_dr8 = 0;
  double dVar26;
  undefined4 uVar27;
  double in_dr10 = 0;
  undefined8 uVar28;
  undefined4 uVar30;
  float fVar31;
  undefined4 uVar32;
  undefined4 in_fr15 = 0;
  double dVar33;
  double in_xd0 = 0;
  double in_xd4 = 0;
  double in_xd6 = 0;
  double in_xd8 = 0;
  double in_xd12 = 0;
  bool bVar34;
  char cVar35;
  char cVar36;
  undefined4 uVar29;
  
  cVar36 = '\0';
  cVar35 = '\0';
  uVar21 = (undefined4)((ulonglong)in_dr4 >> 0x20);
  uVar18 = SUB84(in_dr4,0);
  uVar24 = (undefined4)((ulonglong)in_dr6 >> 0x20);
  uVar22 = SUB84(in_dr6,0);
  (*(uint *)(fr0_ - 0x38)) = ar6 & 0x3fff;
  if (((*(undefined4 *)(unsigned)(unsigned)0x8c4aa4f0) & 0x20000) == 0) {
    fVar31 = 0.5;
    dVar33 = CONCAT44D(0x3f000000,in_fr15);
  }
  else {
    fVar31 = (*(undefined4 *)(unsigned)(unsigned)0x8c277af8) + 0.5;
    dVar33 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c277afc) + 0.5,in_fr15);
  }
  iVar8 = 0;
  iVar9 = 0;
  uVar32 = 0x3f800000;
  dVar26 = in_dr4;
  dVar16 = in_dr6;
  (*(unsigned *)(fr0_ - 0x50) = (unsigned)(unsigned long)(ar4));
  if (((*(undefined4 *)(unsigned)(unsigned)0x8c4aa4f0) & 0x80000000) != 0) {
    uVar32 = 0xbf800000;
  }
  do {
    psVar10 = ((short *)(unsigned long)*(unsigned *)(fr0_ - 0x50)) + 1;
    iVar11 = (int)*((short *)(unsigned long)*(unsigned *)(fr0_ - 0x50));
    if (cVar36 == '\0') {
      dVar33 = CONCAT44D((int)(D2U(dVar33) >> 0x20),uVar32);
    }
    if (iVar11 < 0) {
      dVar33 = CONCAT44D((int)(D2U(dVar33) >> 0x20),-SUB84(dVar33,0));
      iVar11 = -iVar11;
    }
    iVar9 = iVar9 + iVar11;
    iVar11 = iVar11 + -2;
    psVar2 = ((short *)(unsigned long)*(unsigned *)(fr0_ - 0x50)) + 4;
    iVar7 = 0;
    (*(unsigned *)(fr0_ - 0x50) = (unsigned)(unsigned long)(((short *)(unsigned long)*(unsigned *)(fr0_ - 0x50)) + 7));
    pdVar3 = (double *)(unsigned)(*psVar10 * 0x40 + ar5);
    pdVar6 = (double *)(unsigned)(*psVar2 * 0x40 + ar5);
    dVar15 = in_xd0;
    do {
      uVar20 = SUB84(in_dr10,0);
      uVar25 = SUB84(in_dr8,0);
      pdVar12 = (double *)(unsigned)(*((short *)(unsigned long)*(unsigned *)(fr0_ - 0x50)) * 0x40 + ar5);
      if (cVar36 == '\0') {
        dVar14 = CONCAT44D(*(undefined4 *)(unsigned)pdVar3,0x3f800000);
      }
      else {
        dVar14 = *pdVar3;
      }
      bVar1 = false;
      fVar19 = F32LO(dVar26);
      if (cVar35 != '\0' || F32HI(dVar14) <= SUB84(dVar14,0)) {
LAB_8c225c58:
        bVar1 = true;
        dVar26 = CONCAT44D(0x3f800000,fVar19);
        in_xd0 = dVar15;
      }
      else {
        if (cVar36 == '\0') {
          dVar14 = CONCAT44D(*(undefined4 *)(unsigned)pdVar6,SUB84(dVar14,0));
        }
        else {
          dVar14 = *pdVar6;
        }
        if (cVar35 != '\0' || F32HI(dVar14) <= SUB84(dVar14,0))
        goto LAB_8c225c58;
        if (cVar36 == '\0') {
          fVar17 = *(float *)(unsigned)pdVar12;
        }
        else {
          fVar17 = (float)((ulonglong)*pdVar12 >> 0x20);
        }
        dVar14 = CONCAT44D(fVar17,0x3f800000);
        if (cVar35 != '\0' || fVar17 <= 1.0) goto LAB_8c225c58;
        if (cVar36 == '\0') {
          fVar19 = *(float *)(unsigned)((int)pdVar6 + 4);
          dVar26 = CONCAT44D((int)(D2U(dVar26) >> 0x20),fVar19);
          dVar14 = CONCAT44D(fVar19,*(undefined4 *)(unsigned)((int)pdVar3 + 4));
        }
        else {
          dVar14 = *(double *)(unsigned)((int)pdVar6 + 4);
          in_xd4 = dVar14;
        }
        if (cVar35 == '\0') {
          dVar14 = CONCAT44D(F32HI(dVar14) - F32LO(dVar14),
                                    SUB84(dVar14,0));
        }
        else {
          dVar14 = dVar14 - dVar14;
        }
        if (cVar36 == '\0') {
          dVar14 = CONCAT44D((int)(D2U(dVar14) >> 0x20),*(undefined4 *)(unsigned)(pdVar12 + 1));
          dVar16 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar6 + 1),SUB84(dVar16,0));
        }
        else {
          dVar16 = pdVar6[1];
        }
        fVar17 = F32HI(dVar16);
        if (cVar35 == '\0') {
          dVar14 = CONCAT44D((int)(D2U(dVar14) >> 0x20),F32LO(dVar14) - fVar17);
        }
        else {
          dVar14 = dVar14 - dVar16;
        }
        in_xd0 = dVar16;
        if (cVar36 == '\0') {
          in_dr0 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),fVar17);
          in_xd0 = dVar15;
        }
        if (cVar35 == '\0') {
          dVar14 = CONCAT44D(F32HI(dVar14) * F32LO(dVar14),
                                    SUB84(dVar14,0));
        }
        else {
          dVar14 = dVar14 * dVar14;
        }
        if (cVar36 == '\0') {
          dVar14 = CONCAT44D((int)(D2U(dVar14) >> 0x20),*(undefined4 *)(unsigned)(pdVar3 + 1));
        }
        if (cVar35 == '\0') {
          dVar15 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),
                                    F32LO(in_dr0) - F32LO(dVar14));
        }
        else {
          dVar15 = in_dr0 - dVar14;
        }
        if (cVar36 == '\0') {
          dVar14 = CONCAT44D((int)(D2U(dVar14) >> 0x20),
                                    *(undefined4 *)(unsigned)((int)pdVar12 + 4));
        }
        if (cVar35 == '\0') {
          fVar13 = F32LO(dVar14) - fVar19;
          fVar17 = F32LO(dVar15) * fVar13;
          in_dr0 = CONCAT44D((int)(D2U(dVar15) >> 0x20),fVar17);
          dVar14 = CONCAT44D(F32HI(dVar14) - fVar17,fVar13);
        }
        else {
          in_dr0 = dVar15 * (dVar14 - dVar26);
          dVar14 = (dVar14 - dVar26) - in_dr0;
        }
        dVar26 = dVar14;
        if (cVar36 == '\0') {
          dVar26 = CONCAT44D((int)(D2U(dVar14) >> 0x20),fVar19);
        }
        if (cVar35 == '\0') {
          dVar26 = CONCAT44D(F32HI(dVar26) * F32LO(dVar33),
                                    SUB84(dVar26,0));
        }
        else {
          dVar26 = dVar26 * dVar33;
        }
      }
      if (cVar35 == '\0') {
        bVar34 = F32HI(dVar26) < 0.0;
      }
      else {
        bVar34 = dVar26 < (double)(D2U(dVar14) & 0xffffffff00000000);
      }
      uVar30 = (undefined4)(D2U(dVar33) >> 0x20);
      if (bVar34) {
        if (iVar7 == 0) {
          if (cVar36 == '\0') {
            dVar26 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar3 + 4),uVar25);
            pdVar4 = pdVar3 + 1;
            in_dr0 = CONCAT44D(0x3f000000,SUB84(in_dr0,0));
            pdVar5 = pdVar3 + 2;
            dVar16 = CONCAT44D(uVar30,fVar31);
          }
          else {
            dVar26 = *(double *)(unsigned)((int)pdVar3 + 4);
            in_dr0 = -2.681562215333027e+154;
            in_xd6 = *(double *)(unsigned)((int)pdVar3 + 0xc);
            pdVar4 = (double *)(unsigned)((int)pdVar3 + 0x14);
            pdVar5 = (double *)(unsigned)((int)pdVar3 + 0x1c);
            dVar16 = dVar33;
            in_xd4 = in_xd12;
          }
          dVar15 = *pdVar4;
          if (cVar36 == '\0') {
            dVar14 = (double)((ulonglong)*(uint *)(unsigned)(pdVar5 + 3) << 0x20);
            pdVar5 = (double *)(unsigned)((int)pdVar5 + 0x1c);
            in_dr0 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),*(undefined4 *)(unsigned)pdVar5);
          }
          else {
            dVar14 = pdVar5[3];
            pdVar5 = pdVar5 + 4;
            in_xd0 = *pdVar5;
          }
          fVar19 = F32HI(in_dr0);
          if (cVar35 == '\0') {
            dVar16 = CONCAT44D(fVar19 * F32LO(in_dr0) + F32HI(dVar16),
                                      fVar19 * F32HI(dVar14) + F32LO(dVar16))
            ;
          }
          uVar25 = (undefined4)(D2U(dVar16) >> 0x20);
          if (cVar36 == '\0') {
            *(undefined4 *)(unsigned)((int)ar7 + 0x14) = uVar25;
            *(int *)(unsigned)(ar7 + 2) = SUB84(dVar16,0);
            *(int *)(unsigned)((int)ar7 + 0xc) = (int)(D2U(dVar15) >> 0x20);
            *(int *)(unsigned)(ar7 + 1) = SUB84(dVar15,0);
            pdVar4 = (double *)(unsigned)((int)ar7 + 4);
            *(int *)(unsigned)pdVar4 = (int)(D2U(dVar26) >> 0x20);
          }
          else {
            ar7[2] = dVar16;
            ar7[1] = in_xd4;
            *ar7 = dVar15;
            ar7[-1] = in_xd6;
            pdVar4 = ar7 + -2;
            *pdVar4 = dVar26;
          }
          *(undefined4 *)(unsigned)((int)pdVar4 + -4) = 0xe0000000;
          if (cVar36 == '\0') {
            dVar23 = CONCAT44D(uVar21,SUB84(dVar15,0));
            dVar15 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar5 + -0x1c),SUB84(dVar14,0));
            pdVar5 = pdVar5 + -3;
            dVar16 = CONCAT44D(uVar25,uVar18);
          }
          else {
            dVar23 = CONCAT44D(uVar18,uVar21);
            dVar15 = *(double *)(unsigned)((int)pdVar5 + -0x1c);
            pdVar5 = (double *)(unsigned)((int)pdVar5 + -0x14);
            in_xd4 = CONCAT44D(uVar24,uVar18);
          }
          if (cVar35 == '\0') {
            dVar23 = CONCAT44D(F32HI(dVar23) *
                                      F32HI(dVar15),SUB84(dVar23,0));
          }
          else {
            dVar23 = dVar23 * dVar15;
          }
          if (cVar36 == '\0') {
            dVar15 = CONCAT44D(*(undefined4 *)(unsigned)pdVar5,SUB84(dVar15,0));
            pdVar5 = (double *)(unsigned)((int)pdVar5 + 4);
            dVar23 = CONCAT44D((int)(D2U(dVar23) >> 0x20),uVar24);
          }
          else {
            dVar15 = *pdVar5;
            pdVar5 = pdVar5 + 1;
            in_xd6 = CONCAT44D(uVar22,uVar24);
          }
          if (cVar35 == '\0') {
            fVar19 = F32LO(dVar16) + F32HI(dVar15);
          }
          else {
            fVar19 = SUB84(dVar16 + dVar15,0);
          }
          if (cVar36 == '\0') {
            dVar16 = CONCAT44D(*(undefined4 *)(unsigned)pdVar5,SUB84(dVar15,0));
            pdVar5 = (double *)(unsigned)((int)pdVar5 + 4);
            dVar26 = CONCAT44D(uVar22,SUB84(dVar26,0));
          }
          else {
            dVar16 = *pdVar5;
            pdVar5 = pdVar5 + 1;
            dVar26 = CONCAT44D(ar5,uVar22);
          }
          if (cVar35 == '\0') {
            dVar23 = CONCAT44D((int)(D2U(dVar23) >> 0x20),
                                      F32LO(dVar23) + F32HI(dVar16));
          }
          else {
            dVar23 = dVar23 + dVar16;
          }
          if (cVar36 == '\0') {
            dVar16 = CONCAT44D(*(undefined4 *)(unsigned)pdVar5,SUB84(dVar16,0));
            pdVar5 = (double *)(unsigned)((int)pdVar5 + 4);
          }
          else {
            dVar16 = *pdVar5;
            pdVar5 = pdVar5 + 1;
          }
          if (cVar35 == '\0') {
            dVar26 = CONCAT44D(F32HI(dVar26) +
                                      F32HI(dVar16),SUB84(dVar26,0));
          }
          else {
            dVar26 = dVar26 + dVar16;
          }
          if (cVar36 == '\0') {
            uVar27 = (undefined4)(D2U(dVar26) >> 0x20);
            uVar25 = *(undefined4 *)(unsigned)((int)pdVar5 + 0x14);
            dVar26 = CONCAT44D(uVar27,uVar25);
            uVar29 = *(undefined4 *)(unsigned)(pdVar5 + 3);
            uVar28 = CONCAT44(uVar29,uVar20);
            *(undefined4 *)(unsigned)(pdVar4 + 7) = *(undefined4 *)(unsigned)((int)pdVar5 + 0x1c);
            *(undefined4 *)(unsigned)((int)pdVar4 + 0x34) = uVar29;
            *(undefined4 *)(unsigned)(pdVar4 + 6) = uVar25;
            *(undefined4 *)(unsigned)(pdVar4 + 5) = uVar27;
            *(int *)(unsigned)((int)pdVar4 + 0x24) = SUB84(dVar23,0);
            *(float *)(unsigned)(pdVar4 + 4) = fVar19;
            pdVar4 = (double *)(unsigned)((int)pdVar4 + 0x1c);
            *(int *)(unsigned)pdVar4 = (int)(D2U(dVar23) >> 0x20);
          }
          else {
            in_xd8 = *(double *)(unsigned)((int)pdVar5 + 0x14);
            uVar28 = *(undefined8 *)(unsigned)((int)pdVar5 + 0x1c);
            *(undefined8 *)(unsigned)((int)pdVar4 + 0x34) = *(undefined8 *)(unsigned)((int)pdVar5 + 0x24);
            *(undefined8 *)(unsigned)((int)pdVar4 + 0x2c) = uVar28;
            *(double *)(unsigned)((int)pdVar4 + 0x24) = in_xd8;
            pdVar4[3] = dVar26;
            pdVar4[2] = in_xd6;
            pdVar4[1] = in_xd4;
            *pdVar4 = dVar23;
          }
          uVar20 = (undefined4)uVar28;
          uVar25 = SUB84(dVar26,0);
          iVar7 = 1;
          ar7 = pdVar4 + 4;
        }
        if (cVar36 == '\0') {
          in_dr0 = CONCAT44D(0x3f000000,SUB84(in_dr0,0));
          dVar26 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar6 + 0xc),uVar25);
          pdVar5 = pdVar6 + 2;
          dVar15 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar6 + 4),fVar31);
          dVar16 = CONCAT44D(uVar30,*(undefined4 *)(unsigned)(pdVar6 + 1));
        }
        else {
          dVar15 = *(double *)(unsigned)((int)pdVar6 + 4);
          in_dr0 = -2.681562215333027e+154;
          in_xd4 = *(double *)(unsigned)((int)pdVar6 + 0xc);
          dVar26 = *(double *)(unsigned)((int)pdVar6 + 0x14);
          pdVar5 = (double *)(unsigned)((int)pdVar6 + 0x1c);
          in_xd6 = in_xd12;
          dVar16 = dVar33;
        }
        if (cVar36 == '\0') {
          pdVar4 = (double *)(unsigned)((int)pdVar5 + 0x1c);
          pdVar5 = pdVar5 + 3;
        }
        else {
          pdVar4 = pdVar5 + 4;
          pdVar5 = pdVar4;
        }
        dVar14 = *pdVar5;
        fVar19 = F32HI(in_dr0);
        fVar17 = F32HI(dVar14);
        if (cVar35 == '\0') {
          dVar15 = CONCAT44D((int)(D2U(dVar15) >> 0x20),
                                    fVar19 * F32LO(dVar14) + F32LO(dVar15));
          dVar16 = CONCAT44D(fVar19 * fVar17 + F32HI(dVar16),
                                    SUB84(dVar16,0));
        }
        uVar25 = (undefined4)(D2U(dVar15) >> 0x20);
        if (cVar36 == '\0') {
          *(int *)(unsigned)((int)ar7 + 0x14) = (int)(D2U(dVar16) >> 0x20);
          *(int *)(unsigned)(ar7 + 2) = SUB84(dVar15,0);
          *(int *)(unsigned)((int)ar7 + 0xc) = (int)(D2U(dVar26) >> 0x20);
          *(int *)(unsigned)(ar7 + 1) = SUB84(dVar16,0);
          pdVar5 = (double *)(unsigned)((int)ar7 + 4);
          *(undefined4 *)(unsigned)pdVar5 = uVar25;
        }
        else {
          ar7[2] = dVar16;
          ar7[1] = in_xd6;
          *ar7 = dVar26;
          ar7[-1] = in_xd4;
          pdVar5 = ar7 + -2;
          *pdVar5 = dVar15;
        }
        *(undefined4 *)(unsigned)((int)pdVar5 + -4) = 0xe0000000;
        if (cVar36 == '\0') {
          dVar16 = CONCAT44D(uVar21,uVar20);
          dVar14 = CONCAT44D(fVar17,*(undefined4 *)(unsigned)((int)pdVar4 + -0x1c));
          pdVar4 = pdVar4 + -3;
          dVar26 = (double)((ulonglong)in_dr4 & 0xffffffff);
        }
        else {
          dVar16 = CONCAT44D(uVar18,uVar21);
          pdVar4 = (double *)(unsigned)((int)pdVar4 + -0x14);
          in_xd8 = CONCAT44D(uVar24,uVar18);
        }
        if (cVar35 == '\0') {
          in_dr10 = CONCAT44D(F32HI(dVar16) * F32LO(dVar14),
                                     SUB84(dVar16,0));
        }
        else {
          in_dr10 = dVar16 * dVar14;
        }
        if (cVar36 == '\0') {
          dVar14 = CONCAT44D((int)(D2U(dVar14) >> 0x20),*(undefined4 *)(unsigned)pdVar4);
          pdVar4 = (double *)(unsigned)((int)pdVar4 + 4);
          dVar26 = CONCAT44D(uVar24,SUB84(dVar26,0));
        }
        else {
          pdVar4 = pdVar4 + 1;
          dVar26 = CONCAT44D(uVar22,uVar24);
        }
        if (cVar35 == '\0') {
          dVar26 = CONCAT44D((int)(D2U(dVar26) >> 0x20),
                                    F32LO(dVar26) + F32LO(dVar14));
        }
        else {
          dVar26 = dVar26 + dVar14;
        }
        if (cVar36 == '\0') {
          dVar14 = CONCAT44D((int)(D2U(dVar14) >> 0x20),*(undefined4 *)(unsigned)pdVar4);
          pdVar4 = (double *)(unsigned)((int)pdVar4 + 4);
          dVar15 = CONCAT44D(uVar25,uVar22);
        }
        else {
          pdVar4 = pdVar4 + 1;
          in_xd6 = CONCAT44D(ar5,uVar22);
        }
        if (cVar35 == '\0') {
          in_dr8 = CONCAT44D(F32HI(dVar26) + F32LO(dVar14),
                                    SUB84(dVar26,0));
        }
        else {
          in_dr8 = dVar26 + dVar14;
        }
        if (cVar36 == '\0') {
          dVar14 = CONCAT44D((int)(D2U(dVar14) >> 0x20),*(undefined4 *)(unsigned)pdVar4);
          pdVar4 = (double *)(unsigned)((int)pdVar4 + 4);
        }
        else {
          pdVar4 = pdVar4 + 1;
        }
        if (cVar35 == '\0') {
          fVar19 = F32LO(dVar15) + F32LO(dVar14);
        }
        else {
          fVar19 = SUB84(dVar15 + dVar14,0);
        }
        if (cVar36 == '\0') {
          uVar25 = *(undefined4 *)(unsigned)((int)pdVar4 + 0x14);
          dVar16 = CONCAT44D(uVar25,fVar19);
          uVar20 = *(undefined4 *)(unsigned)(pdVar4 + 3);
          dVar26 = pdVar4[3];
          *(undefined4 *)(unsigned)(pdVar5 + 7) = *(undefined4 *)(unsigned)((int)pdVar4 + 0x1c);
          *(undefined4 *)(unsigned)((int)pdVar5 + 0x34) = uVar20;
          *(undefined4 *)(unsigned)(pdVar5 + 6) = uVar25;
          *(float *)(unsigned)(pdVar5 + 5) = fVar19;
          *(int *)(unsigned)((int)pdVar5 + 0x24) = (int)((ulonglong)in_dr8 >> 0x20);
          *(int *)(unsigned)(pdVar5 + 4) = SUB84(in_dr8,0);
          pdVar5 = (double *)(unsigned)((int)pdVar5 + 0x1c);
          *(int *)(unsigned)pdVar5 = (int)((ulonglong)in_dr10 >> 0x20);
        }
        else {
          dVar16 = *(double *)(unsigned)((int)pdVar4 + 0x14);
          in_xd4 = *(double *)(unsigned)((int)pdVar4 + 0x1c);
          dVar26 = *(double *)(unsigned)((int)pdVar4 + 0x24);
          *(double *)(unsigned)((int)pdVar5 + 0x34) = dVar26;
          *(double *)(unsigned)((int)pdVar5 + 0x2c) = in_xd4;
          *(double *)(unsigned)((int)pdVar5 + 0x24) = dVar16;
          pdVar5[3] = in_xd6;
          pdVar5[2] = in_dr8;
          pdVar5[1] = in_xd8;
          *pdVar5 = in_dr10;
        }
        ar7 = pdVar5 + 4;
        iVar7 = iVar7 + 1;
      }
      else if (iVar7 != 0) {
        if (cVar36 == '\0') {
          dVar26 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar6 + 4),uVar25);
          pdVar4 = pdVar6 + 1;
          in_dr0 = CONCAT44D(0x3f000000,SUB84(in_dr0,0));
          pdVar5 = pdVar6 + 2;
          dVar16 = CONCAT44D(fVar31,uVar30);
        }
        else {
          dVar26 = *(double *)(unsigned)((int)pdVar6 + 4);
          in_dr0 = -2.681562215333027e+154;
          in_xd6 = *(double *)(unsigned)((int)pdVar6 + 0xc);
          pdVar4 = (double *)(unsigned)((int)pdVar6 + 0x14);
          pdVar5 = (double *)(unsigned)((int)pdVar6 + 0x1c);
          dVar16 = in_xd12;
          in_xd4 = dVar33;
        }
        dVar15 = *pdVar4;
        if (cVar36 == '\0') {
          dVar14 = (double)((ulonglong)*(uint *)(unsigned)(pdVar5 + 3) << 0x20);
          pdVar5 = (double *)(unsigned)((int)pdVar5 + 0x1c);
          in_dr0 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),*(undefined4 *)(unsigned)pdVar5);
        }
        else {
          dVar14 = pdVar5[3];
          pdVar5 = pdVar5 + 4;
          in_xd0 = *pdVar5;
        }
        fVar19 = F32HI(in_dr0);
        if (cVar35 == '\0') {
          dVar16 = CONCAT44D(fVar19 * F32HI(dVar14) +
                                    F32HI(dVar16),
                                    fVar19 * F32LO(in_dr0) + F32LO(dVar16));
        }
        uVar25 = (undefined4)(D2U(dVar16) >> 0x20);
        uVar30 = (undefined4)(D2U(dVar15) >> 0x20);
        if (cVar36 == '\0') {
          *(int *)(unsigned)((int)ar7 + 0x14) = SUB84(dVar16,0);
          *(undefined4 *)(unsigned)(ar7 + 2) = uVar25;
          *(undefined4 *)(unsigned)((int)ar7 + 0xc) = uVar30;
          *(int *)(unsigned)(ar7 + 1) = SUB84(dVar15,0);
          pdVar4 = (double *)(unsigned)((int)ar7 + 4);
          *(int *)(unsigned)pdVar4 = (int)(D2U(dVar26) >> 0x20);
        }
        else {
          ar7[2] = in_xd4;
          ar7[1] = dVar16;
          *ar7 = dVar15;
          ar7[-1] = in_xd6;
          pdVar4 = ar7 + -2;
          *pdVar4 = dVar26;
        }
        *(undefined4 *)(unsigned)((int)pdVar4 + -4) = 0xf0000000;
        if (cVar36 == '\0') {
          dVar23 = CONCAT44D(uVar21,SUB84(dVar26,0));
          dVar26 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar5 + -0x1c),SUB84(dVar14,0));
          pdVar5 = pdVar5 + -3;
          dVar15 = CONCAT44D(uVar30,uVar18);
        }
        else {
          dVar23 = CONCAT44D(uVar18,uVar21);
          dVar26 = *(double *)(unsigned)((int)pdVar5 + -0x1c);
          pdVar5 = (double *)(unsigned)((int)pdVar5 + -0x14);
          in_xd6 = CONCAT44D(uVar24,uVar18);
        }
        if (cVar35 == '\0') {
          dVar23 = CONCAT44D(F32HI(dVar23) *
                                    F32HI(dVar26),SUB84(dVar23,0));
        }
        else {
          dVar23 = dVar23 * dVar26;
        }
        if (cVar36 == '\0') {
          dVar26 = CONCAT44D(*(undefined4 *)(unsigned)pdVar5,SUB84(dVar26,0));
          pdVar5 = (double *)(unsigned)((int)pdVar5 + 4);
          dVar16 = CONCAT44D(uVar25,uVar24);
        }
        else {
          dVar26 = *pdVar5;
          pdVar5 = pdVar5 + 1;
          in_xd4 = CONCAT44D(uVar22,uVar24);
        }
        if (cVar35 == '\0') {
          fVar19 = F32LO(dVar15) + F32HI(dVar26);
        }
        else {
          fVar19 = SUB84(dVar15 + dVar26,0);
        }
        if (cVar36 == '\0') {
          dVar26 = CONCAT44D(*(undefined4 *)(unsigned)pdVar5,SUB84(dVar26,0));
          pdVar5 = (double *)(unsigned)((int)pdVar5 + 4);
          dVar23 = CONCAT44D((int)(D2U(dVar23) >> 0x20),uVar22);
        }
        else {
          dVar26 = *pdVar5;
          pdVar5 = pdVar5 + 1;
          in_xd8 = CONCAT44D(ar5,uVar22);
        }
        if (cVar35 == '\0') {
          fVar17 = F32LO(dVar16) + F32HI(dVar26);
        }
        else {
          fVar17 = SUB84(dVar16 + dVar26,0);
        }
        if (cVar36 == '\0') {
          dVar26 = CONCAT44D(*(undefined4 *)(unsigned)pdVar5,SUB84(dVar26,0));
          pdVar5 = (double *)(unsigned)((int)pdVar5 + 4);
        }
        else {
          dVar26 = *pdVar5;
          pdVar5 = pdVar5 + 1;
        }
        if (cVar35 == '\0') {
          in_dr8 = CONCAT44D((int)(D2U(dVar23) >> 0x20),
                                    F32LO(dVar23) + F32HI(dVar26));
        }
        else {
          in_dr8 = dVar23 + dVar26;
        }
        if (cVar36 == '\0') {
          uVar25 = *(undefined4 *)(unsigned)((int)pdVar5 + 0x14);
          in_dr10 = CONCAT44D(uVar25,uVar20);
          uVar20 = *(undefined4 *)(unsigned)(pdVar5 + 3);
          dVar16 = CONCAT44D(uVar20,fVar19);
          dVar26 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar5 + 0x1c),fVar17);
          *(undefined4 *)(unsigned)(pdVar4 + 7) = *(undefined4 *)(unsigned)((int)pdVar5 + 0x1c);
          *(undefined4 *)(unsigned)((int)pdVar4 + 0x34) = uVar20;
          *(undefined4 *)(unsigned)(pdVar4 + 6) = uVar25;
          *(int *)(unsigned)(pdVar4 + 5) = SUB84(in_dr8,0);
          *(float *)(unsigned)((int)pdVar4 + 0x24) = fVar17;
          *(float *)(unsigned)(pdVar4 + 4) = fVar19;
          pdVar4 = (double *)(unsigned)((int)pdVar4 + 0x1c);
          *(int *)(unsigned)pdVar4 = (int)((ulonglong)in_dr8 >> 0x20);
        }
        else {
          in_dr10 = *(double *)(unsigned)((int)pdVar5 + 0x14);
          dVar16 = *(double *)(unsigned)((int)pdVar5 + 0x1c);
          dVar26 = *(double *)(unsigned)((int)pdVar5 + 0x24);
          *(double *)(unsigned)((int)pdVar4 + 0x34) = dVar26;
          *(double *)(unsigned)((int)pdVar4 + 0x2c) = dVar16;
          *(double *)(unsigned)((int)pdVar4 + 0x24) = in_dr10;
          pdVar4[3] = in_xd8;
          pdVar4[2] = in_xd4;
          pdVar4[1] = in_xd6;
          *pdVar4 = in_dr8;
        }
        iVar8 = iVar8 + iVar7 + 1;
        iVar7 = 0;
        ar7 = pdVar4 + 4;
      }
      if (bVar1) {
        if (cVar36 == '\0') {
          fVar19 = *(float *)(unsigned)pdVar3;
        }
        else {
          fVar19 = (float)((ulonglong)*pdVar3 >> 0x20);
        }
        dVar15 = CONCAT44D(fVar19,0x3f800000);
        if (cVar35 == '\0' && fVar19 < 1.0) {
          if (cVar36 == '\0') {
            dVar15 = CONCAT44D(*(undefined4 *)(unsigned)pdVar6,0x3f800000);
          }
          else {
            dVar15 = *pdVar6;
          }
          if (cVar35 == '\0' && F32HI(dVar15) < SUB84(dVar15,0)) {
            if (cVar36 == '\0') {
              fVar19 = *(float *)(unsigned)pdVar12;
            }
            else {
              fVar19 = (float)((ulonglong)*pdVar12 >> 0x20);
            }
            dVar15 = CONCAT44D(fVar19,0x3f800000);
            if (cVar35 == '\0' && fVar19 < 1.0) goto LAB_8c225e82;
          }
        }
        if (cVar36 == '\0') {
          uVar20 = *(undefined4 *)(unsigned)((int)pdVar6 + 0x24);
          in_dr8 = CONCAT44D(uVar20,*(undefined4 *)(unsigned)pdVar6);
          dVar26 = CONCAT44D(*(undefined4 *)(unsigned)pdVar3,SUB84(dVar26,0));
          dVar16 = CONCAT44D((int)(D2U(dVar16) >> 0x20),
                                    *(undefined4 *)(unsigned)((int)pdVar3 + 0x24));
          dVar15 = CONCAT44D((int)(D2U(dVar15) >> 0x20),uVar20);
        }
        else {
          in_xd8 = *pdVar6;
          in_dr8 = *(double *)(unsigned)((int)pdVar6 + 0x24);
          dVar26 = *pdVar3;
          in_xd6 = *(double *)(unsigned)((int)pdVar3 + 0x24);
          uVar20 = (undefined4)((ulonglong)in_dr8 >> 0x20);
        }
        fVar19 = F32HI(dVar26);
        if (cVar35 == '\0') {
          fVar17 = F32LO(dVar15) * fVar19;
        }
        else {
          fVar17 = SUB84(dVar15 * dVar26,0);
        }
        dVar15 = in_xd8;
        if (cVar36 == '\0') {
          dVar15 = CONCAT44D(SUB84(in_dr8,0),SUB84(in_dr0,0));
        }
        if (cVar35 == '\0') {
          dVar15 = CONCAT44D(F32HI(dVar15) * F32LO(dVar16),
                                    SUB84(dVar15,0));
        }
        else {
          dVar15 = dVar15 * dVar16;
        }
        if (cVar36 == '\0') {
          dVar16 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar6 + 4),SUB84(dVar16,0));
          dVar26 = CONCAT44D(fVar19,*(undefined4 *)(unsigned)(pdVar3 + 4));
          dVar14 = CONCAT44D(SUB84(in_dr8,0),fVar17);
        }
        else {
          dVar16 = pdVar6[4];
          in_xd4 = pdVar3[4];
          dVar14 = in_xd8;
        }
        if (cVar35 == '\0') {
          dVar15 = CONCAT44D(F32HI(dVar15) - F32LO(dVar14),
                                    SUB84(dVar15,0));
        }
        else {
          dVar15 = dVar15 - dVar14;
        }
        uVar25 = (undefined4)(D2U(dVar16) >> 0x20);
        if (cVar36 == '\0') {
          dVar14 = CONCAT44D((int)(D2U(dVar14) >> 0x20),uVar25);
        }
        if (cVar35 == '\0') {
          dVar14 = CONCAT44D(F32HI(dVar14) * F32LO(dVar26),
                                    SUB84(dVar14,0));
        }
        else {
          dVar14 = dVar14 * dVar26;
        }
        dVar23 = in_dr8;
        if (cVar36 == '\0') {
          dVar15 = CONCAT44D((int)(D2U(dVar15) >> 0x20),uVar20);
          dVar23 = in_xd0;
        }
        if (cVar35 == '\0') {
          dVar15 = CONCAT44D((int)(D2U(dVar15) >> 0x20),
                                    F32LO(dVar15) * F32LO(dVar26));
          fVar19 = F32LO(dVar14) * F32HI(dVar26) -
                   F32HI(dVar14);
        }
        else {
          dVar15 = dVar15 * dVar26;
          fVar19 = SUB84(dVar14 * dVar26 - dVar14 * dVar26,0);
        }
        if (cVar36 == '\0') {
          dVar14 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar12 + 0x24),fVar19);
        }
        else {
          dVar14 = *(double *)(unsigned)((int)pdVar12 + 0x24);
        }
        if (cVar35 == '\0') {
          dVar14 = CONCAT44D(F32HI(dVar14) * F32LO(dVar14),
                                    SUB84(dVar14,0));
        }
        else {
          dVar14 = dVar14 * dVar14;
        }
        if (cVar36 == '\0') {
          dVar14 = CONCAT44D((int)(D2U(dVar14) >> 0x20),*(undefined4 *)(unsigned)(pdVar12 + 4));
        }
        if (cVar35 == '\0') {
          dVar14 = CONCAT44D(F32HI(dVar15) * F32LO(dVar14) +
                                    F32HI(dVar14),SUB84(dVar14,0));
        }
        if (cVar36 == '\0') {
          dVar14 = CONCAT44D((int)(D2U(dVar14) >> 0x20),uVar25);
        }
        if (cVar35 == '\0') {
          fVar19 = F32LO(dVar14) * F32LO(dVar16);
          dVar14 = CONCAT44D((int)(D2U(dVar14) >> 0x20),fVar19);
          fVar19 = F32LO(dVar15) - fVar19;
        }
        else {
          dVar14 = dVar14 * dVar16;
          fVar19 = SUB84(dVar15 - dVar14,0);
        }
        if (cVar36 == '\0') {
          in_dr0 = CONCAT44D(fVar19,*(undefined4 *)(unsigned)pdVar12);
          in_xd0 = dVar23;
        }
        else {
          in_xd0 = *pdVar12;
          in_dr0 = dVar23;
        }
        if (cVar35 == '\0') {
          fVar19 = (F32HI(in_dr0) * F32LO(in_dr0) +
                   F32HI(dVar14)) * F32LO(dVar33);
        }
        else {
          fVar19 = (float)((ulonglong)(dVar14 * dVar33) >> 0x20);
        }
        if (cVar35 == '\0' && fVar19 < 0.0) {
          dVar26 = in_dr4;
          dVar16 = in_dr6;
          if (cVar36 != '\0') {
            in_xd6 = CONCAT44D(ar5,uVar22);
            in_xd4 = CONCAT44D(uVar24,uVar18);
            dVar26 = CONCAT44D(uVar18,uVar21);
            dVar16 = CONCAT44D(uVar22,uVar24);
          }
          ar7 = (double *)(unsigned)(vsp = ((unsigned long)(fr0_ - 84)), FUN_8c225f68(pdVar3,pdVar6,pdVar12,ar7));
        }
      }
LAB_8c225e82:
      (*(unsigned *)(fr0_ - 0x50) = (unsigned)(unsigned long)(((short *)(unsigned long)*(unsigned *)(fr0_ - 0x50)) + (ar6 >> 0xe & 3) + 3));
      iVar11 = iVar11 + -1;
      uVar20 = (undefined4)(D2U(dVar33) >> 0x20);
      dVar33 = CONCAT44D(uVar20,-SUB84(dVar33,0));
      pdVar3 = pdVar6;
      pdVar6 = pdVar12;
      dVar15 = in_xd0;
    } while (iVar11 != 0);
    if (iVar7 != 0) {
      if (cVar36 == '\0') {
        in_dr0 = CONCAT44D(0x3f000000,SUB84(in_dr0,0));
        dVar15 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar12 + 4),uVar20);
        dVar26 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar12 + 1),*(undefined4 *)(unsigned)((int)pdVar12 + 0xc));
        pdVar12 = pdVar12 + 2;
        dVar16 = CONCAT44D(fVar31,SUB84(in_dr8,0));
      }
      else {
        dVar15 = *(double *)(unsigned)((int)pdVar12 + 4);
        in_dr0 = -2.681562215333027e+154;
        dVar26 = *(double *)(unsigned)((int)pdVar12 + 0xc);
        in_xd6 = *(double *)(unsigned)((int)pdVar12 + 0x14);
        pdVar12 = (double *)(unsigned)((int)pdVar12 + 0x1c);
        dVar16 = in_xd12;
        in_xd4 = dVar33;
      }
      if (cVar36 == '\0') {
        pdVar3 = (double *)(unsigned)((int)pdVar12 + 0x1c);
        pdVar6 = pdVar12 + 3;
      }
      else {
        pdVar3 = pdVar12 + 4;
        pdVar6 = pdVar3;
      }
      dVar14 = *pdVar6;
      fVar19 = F32HI(in_dr0);
      fVar17 = F32HI(dVar14);
      if (cVar35 == '\0') {
        dVar16 = CONCAT44D(fVar19 * F32LO(dVar14) + F32HI(dVar16),
                                  SUB84(dVar16,0));
        dVar15 = CONCAT44D((int)(D2U(dVar15) >> 0x20),fVar19 * fVar17 + F32LO(dVar15)
                                 );
      }
      uVar20 = (undefined4)(D2U(dVar15) >> 0x20);
      if (cVar36 == '\0') {
        *(int *)(unsigned)((int)ar7 + 0x14) = SUB84(dVar15,0);
        *(int *)(unsigned)(ar7 + 2) = (int)(D2U(dVar16) >> 0x20);
        *(int *)(unsigned)((int)ar7 + 0xc) = SUB84(dVar26,0);
        *(int *)(unsigned)(ar7 + 1) = (int)(D2U(dVar26) >> 0x20);
        pdVar6 = (double *)(unsigned)((int)ar7 + 4);
        *(undefined4 *)(unsigned)pdVar6 = uVar20;
      }
      else {
        ar7[2] = in_xd4;
        ar7[1] = dVar16;
        *ar7 = in_xd6;
        ar7[-1] = dVar26;
        pdVar6 = ar7 + -2;
        *pdVar6 = dVar15;
      }
      *(undefined4 *)(unsigned)((int)pdVar6 + -4) = 0xf0000000;
      if (cVar36 == '\0') {
        dVar16 = CONCAT44D(uVar21,SUB84(dVar16,0));
        dVar14 = CONCAT44D(fVar17,*(undefined4 *)(unsigned)((int)pdVar3 + -0x1c));
        pdVar3 = pdVar3 + -3;
        dVar26 = (double)((ulonglong)in_dr4 & 0xffffffff);
      }
      else {
        dVar16 = CONCAT44D(uVar18,uVar21);
        pdVar3 = (double *)(unsigned)((int)pdVar3 + -0x14);
        in_xd6 = CONCAT44D(uVar24,uVar18);
      }
      if (cVar35 == '\0') {
        in_dr8 = CONCAT44D(F32HI(dVar16) * F32LO(dVar14),
                                  SUB84(dVar16,0));
      }
      else {
        in_dr8 = dVar16 * dVar14;
      }
      if (cVar36 == '\0') {
        dVar14 = CONCAT44D((int)(D2U(dVar14) >> 0x20),*(undefined4 *)(unsigned)pdVar3);
        pdVar3 = (double *)(unsigned)((int)pdVar3 + 4);
        dVar16 = CONCAT44D(uVar24,SUB84(dVar26,0));
      }
      else {
        pdVar3 = pdVar3 + 1;
        dVar16 = CONCAT44D(uVar22,uVar24);
      }
      if (cVar35 == '\0') {
        dVar16 = CONCAT44D((int)(D2U(dVar16) >> 0x20),F32LO(dVar16) + F32LO(dVar14)
                                 );
      }
      else {
        dVar16 = dVar16 + dVar14;
      }
      if (cVar36 == '\0') {
        dVar14 = CONCAT44D((int)(D2U(dVar14) >> 0x20),*(undefined4 *)(unsigned)pdVar3);
        pdVar3 = (double *)(unsigned)((int)pdVar3 + 4);
        dVar15 = CONCAT44D(uVar20,uVar22);
      }
      else {
        pdVar3 = pdVar3 + 1;
        in_xd4 = CONCAT44D(ar5,uVar22);
      }
      if (cVar35 == '\0') {
        dVar16 = CONCAT44D(F32HI(dVar16) + F32LO(dVar14),
                                  SUB84(dVar16,0));
      }
      else {
        dVar16 = dVar16 + dVar14;
      }
      if (cVar36 == '\0') {
        dVar14 = CONCAT44D((int)(D2U(dVar14) >> 0x20),*(undefined4 *)(unsigned)pdVar3);
        pdVar3 = (double *)(unsigned)((int)pdVar3 + 4);
      }
      else {
        pdVar3 = pdVar3 + 1;
      }
      if (cVar35 == '\0') {
        fVar19 = F32LO(dVar15) + F32LO(dVar14);
      }
      else {
        fVar19 = SUB84(dVar15 + dVar14,0);
      }
      if (cVar36 == '\0') {
        uVar25 = (undefined4)((ulonglong)in_dr8 >> 0x20);
        uVar20 = *(undefined4 *)(unsigned)((int)pdVar3 + 0x14);
        in_dr8 = CONCAT44D(uVar25,uVar20);
        uVar30 = *(undefined4 *)(unsigned)(pdVar3 + 3);
        in_dr10 = CONCAT44D(uVar30,SUB84(in_dr10,0));
        dVar26 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar3 + 0x1c),fVar19);
        *(undefined4 *)(unsigned)(pdVar6 + 7) = *(undefined4 *)(unsigned)((int)pdVar3 + 0x1c);
        *(undefined4 *)(unsigned)((int)pdVar6 + 0x34) = uVar30;
        *(undefined4 *)(unsigned)(pdVar6 + 6) = uVar20;
        *(float *)(unsigned)(pdVar6 + 5) = fVar19;
        *(int *)(unsigned)((int)pdVar6 + 0x24) = (int)(D2U(dVar16) >> 0x20);
        *(int *)(unsigned)(pdVar6 + 4) = SUB84(dVar16,0);
        pdVar6 = (double *)(unsigned)((int)pdVar6 + 0x1c);
        *(undefined4 *)(unsigned)pdVar6 = uVar25;
      }
      else {
        in_xd8 = *(double *)(unsigned)((int)pdVar3 + 0x14);
        in_dr10 = *(double *)(unsigned)((int)pdVar3 + 0x1c);
        dVar26 = *(double *)(unsigned)((int)pdVar3 + 0x24);
        *(double *)(unsigned)((int)pdVar6 + 0x34) = dVar26;
        *(double *)(unsigned)((int)pdVar6 + 0x2c) = in_dr10;
        *(double *)(unsigned)((int)pdVar6 + 0x24) = in_xd8;
        pdVar6[3] = in_xd4;
        pdVar6[2] = dVar16;
        pdVar6[1] = in_xd6;
        *pdVar6 = in_dr8;
      }
      iVar8 = iVar8 + iVar7 + 1;
      ar7 = pdVar6 + 4;
    }
    (*(uint *)(fr0_ - 0x38)) = (*(uint *)(fr0_ - 0x38)) - 1;
    if ((*(uint *)(fr0_ - 0x38)) == 0) {
      (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) + iVar8;
      (*(undefined4 *)(unsigned)(unsigned)0x8c4aa51c) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa51c) + iVar9;
      return ar7;
    }
  } while( true );
}

__asm__(".globl _FUN_8c225b54\n.set _FUN_8c225b54, _FUN_8c225b54_def\n");
