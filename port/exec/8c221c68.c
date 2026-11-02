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
double * FUN_8c221c68_def(short *ar4,int ar5,uint ar6,double *ar7)

{
  ring[rp++ & 255] = "FUN_8c221c68";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 92; for (int i_ = 0; i_ < 92; i_++) z_[i_] = 0; }
  bool bVar1;
  short *psVar2;
  double *pdVar3;
  undefined8 *puVar4;
  double *pdVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  short *psVar9;
  int iVar10;
  double *a6;
  double *a5;
  float fVar11;
  double in_dr0 = 0;
  undefined8 uVar12;
  double dVar13;
  float fVar14;
  float fVar15;
  double in_dr2 = 0;
  double dVar16;
  double dVar17;
  float fVar18;
  float fVar19;
  double in_dr4 = 0;
  undefined4 uVar21;
  double dVar20;
  undefined4 uVar22;
  undefined4 uVar23;
  double in_dr6 = 0;
  float fVar25;
  double dVar24;
  float fVar26;
  undefined8 in_dr8 = 0;
  float fVar27;
  undefined4 uVar28;
  double in_dr10 = 0;
  double dVar29;
  undefined4 in_fr15 = 0;
  double dVar30;
  double in_xd0 = 0;
  double dVar31;
  double in_xd4 = 0;
  double in_xd6 = 0;
  double in_xd8 = 0;
  double in_xd12 = 0;
  bool bVar32;
  char cVar33;
  char cVar34;
  
  cVar34 = '\0';
  cVar33 = '\0';
  uVar21 = (undefined4)((ulonglong)in_dr4 >> 0x20);
  fVar18 = F32LO(in_dr4);
  fVar25 = F32HI(in_dr6);
  uVar22 = SUB84(in_dr6,0);
  fVar27 = F32HI(in_dr8);
  fVar26 = (float)in_dr8;
  (*(uint *)(fr0_ - 0x38)) = ar6 & 0x3fff;
  iVar7 = 0;
  iVar8 = 0;
  dVar29 = CONCAT44D((int)((ulonglong)in_dr10 >> 0x20),0x3f800000);
  dVar30 = CONCAT44D(0x3f800000,in_fr15);
  dVar20 = in_dr4;
  dVar24 = in_dr6;
  (*(unsigned *)(fr0_ - 0x58) = (unsigned)(unsigned long)(ar4));
  if (((*(undefined4 *)(unsigned)(unsigned)0x8c4aa4f0) & 0x80000000) != 0) {
    dVar30 = CONCAT44D(0xbf800000,in_fr15);
  }
  do {
    psVar9 = ((short *)(unsigned long)*(unsigned *)(fr0_ - 0x58)) + 1;
    iVar10 = (int)*((short *)(unsigned long)*(unsigned *)(fr0_ - 0x58));
    psVar2 = ((short *)(unsigned long)*(unsigned *)(fr0_ - 0x58)) + 2;
    if (cVar34 == '\0') {
      uVar23 = (undefined4)(D2U(dVar30) >> 0x20);
      dVar30 = CONCAT44D(uVar23,uVar23);
    }
    if (iVar10 < 0) {
      dVar30 = CONCAT44D((int)(D2U(dVar30) >> 0x20),-SUB84(dVar30,0));
      iVar10 = -iVar10;
    }
    iVar8 = iVar8 + iVar10;
    iVar6 = 0;
    (*(unsigned *)(fr0_ - 0x58) = (unsigned)(unsigned long)(((short *)(unsigned long)*(unsigned *)(fr0_ - 0x58)) + 3));
    iVar10 = iVar10 + -2;
    pdVar5 = (double *)(unsigned)(*psVar9 * 0x40 + ar5);
    a5 = (double *)(unsigned)(*psVar2 * 0x40 + ar5);
    do {
      a6 = (double *)(unsigned)(*((short *)(unsigned long)*(unsigned *)(fr0_ - 0x58)) * 0x40 + ar5);
      if (cVar34 == '\0') {
        in_dr2 = CONCAT44D((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(unsigned)pdVar5);
      }
      fVar15 = F32LO(dVar29);
      if (cVar33 == '\0') {
        bVar32 = fVar15 < SUB84(in_dr2,0);
      }
      else {
        bVar32 = dVar29 < in_dr2;
      }
      bVar1 = false;
      fVar19 = F32LO(dVar20);
      if (bVar32) {
        if (cVar34 == '\0') {
          in_dr2 = CONCAT44D((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(unsigned)a5);
        }
        if (cVar33 == '\0') {
          bVar32 = fVar15 < SUB84(in_dr2,0);
        }
        else {
          bVar32 = dVar29 < in_dr2;
        }
        if (!bVar32) goto LAB_8c221d44;
        if (cVar34 == '\0') {
          in_dr2 = CONCAT44D((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(unsigned)a6);
        }
        if (cVar33 == '\0') {
          bVar32 = fVar15 < SUB84(in_dr2,0);
        }
        else {
          bVar32 = dVar29 < in_dr2;
        }
        if (!bVar32) goto LAB_8c221d44;
        if (cVar34 == '\0') {
          fVar19 = *(float *)(unsigned)((int)a5 + 4);
          dVar20 = CONCAT44D((int)(D2U(dVar20) >> 0x20),fVar19);
          dVar16 = CONCAT44D(fVar19,*(undefined4 *)(unsigned)((int)pdVar5 + 4));
        }
        else {
          dVar16 = *(double *)(unsigned)((int)a5 + 4);
          in_xd4 = dVar16;
        }
        if (cVar33 == '\0') {
          dVar16 = CONCAT44D(F32HI(dVar16) - F32LO(dVar16),
                                    SUB84(dVar16,0));
        }
        else {
          dVar16 = dVar16 - dVar16;
        }
        if (cVar34 == '\0') {
          dVar16 = CONCAT44D((int)(D2U(dVar16) >> 0x20),*(undefined4 *)(unsigned)(a6 + 1));
          dVar24 = CONCAT44D(*(undefined4 *)(unsigned)(a5 + 1),SUB84(dVar24,0));
        }
        else {
          dVar24 = a5[1];
        }
        fVar11 = F32HI(dVar24);
        if (cVar33 == '\0') {
          dVar16 = CONCAT44D((int)(D2U(dVar16) >> 0x20),F32LO(dVar16) - fVar11);
        }
        else {
          dVar16 = dVar16 - dVar24;
        }
        dVar13 = dVar24;
        if (cVar34 == '\0') {
          in_dr0 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),fVar11);
          dVar13 = in_xd0;
        }
        if (cVar33 == '\0') {
          dVar16 = CONCAT44D(F32HI(dVar16) * F32LO(dVar16),
                                    SUB84(dVar16,0));
        }
        else {
          dVar16 = dVar16 * dVar16;
        }
        if (cVar34 == '\0') {
          dVar16 = CONCAT44D((int)(D2U(dVar16) >> 0x20),*(undefined4 *)(unsigned)(pdVar5 + 1));
        }
        if (cVar33 == '\0') {
          dVar17 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),
                                    F32LO(in_dr0) - F32LO(dVar16));
        }
        else {
          dVar17 = in_dr0 - dVar16;
        }
        if (cVar34 == '\0') {
          dVar16 = CONCAT44D((int)(D2U(dVar16) >> 0x20),*(undefined4 *)(unsigned)((int)a6 + 4));
        }
        if (cVar33 == '\0') {
          fVar14 = F32LO(dVar16) - fVar19;
          fVar11 = F32LO(dVar17) * fVar14;
          in_dr0 = CONCAT44D((int)(D2U(dVar17) >> 0x20),fVar11);
          in_dr2 = CONCAT44D(F32HI(dVar16) - fVar11,fVar14);
        }
        else {
          in_dr0 = dVar17 * (dVar16 - dVar20);
          in_dr2 = (dVar16 - dVar20) - in_dr0;
        }
        dVar20 = in_dr2;
        if (cVar34 == '\0') {
          dVar20 = CONCAT44D((int)((ulonglong)in_dr2 >> 0x20),fVar19);
        }
        in_xd0 = dVar13;
        if (cVar33 == '\0') {
          dVar20 = CONCAT44D(F32HI(dVar20) * F32LO(dVar30),
                                    SUB84(dVar20,0));
        }
        else {
          dVar20 = dVar20 * dVar30;
        }
      }
      else {
LAB_8c221d44:
        bVar1 = true;
        dVar20 = in_xd12;
        if (cVar34 == '\0') {
          dVar20 = CONCAT44D(fVar15,fVar19);
        }
      }
      uVar23 = SUB84(dVar24,0);
      in_dr2 = (double)((ulonglong)in_dr2 & 0xffffffff00000000);
      if (cVar33 == '\0') {
        bVar32 = F32HI(dVar20) < 0.0;
      }
      else {
        bVar32 = dVar20 < in_dr2;
      }
      uVar28 = (undefined4)(D2U(dVar29) >> 0x20);
      if (bVar32) {
        if (iVar6 == 0) {
          if (cVar34 == '\0') {
            in_dr10 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar5 + 4),SUB84(in_dr10,0));
            pdVar3 = pdVar5 + 1;
            dVar24 = CONCAT44D(fVar27,uVar21);
            dVar16 = (double)((ulonglong)*(uint *)(unsigned)(pdVar5 + 2) << 0x20);
            puVar4 = (undefined8 *)(unsigned)((int)pdVar5 + 0x14);
            dVar20 = CONCAT44D(uVar28,SUB84(dVar20,0));
          }
          else {
            in_dr10 = *(double *)(unsigned)((int)pdVar5 + 4);
            in_xd6 = CONCAT44D(fVar18,uVar21);
            in_xd8 = *(double *)(unsigned)((int)pdVar5 + 0xc);
            pdVar3 = (double *)(unsigned)((int)pdVar5 + 0x14);
            dVar24 = CONCAT44D(fVar25,fVar27);
            dVar16 = *(double *)(unsigned)((int)pdVar5 + 0x1c);
            puVar4 = (undefined8 *)(unsigned)((int)pdVar5 + 0x24);
            dVar20 = dVar29;
          }
          dVar13 = *pdVar3;
          if (cVar33 == '\0') {
            dVar24 = CONCAT44D((int)(D2U(dVar24) >> 0x20),
                                      F32LO(dVar24) * F32HI(dVar16));
          }
          else {
            dVar24 = dVar24 * dVar16;
          }
          if (cVar34 == '\0') {
            uVar12 = CONCAT44(*(undefined4 *)(unsigned)puVar4,SUB84(in_dr0,0));
            puVar4 = (undefined8 *)(unsigned)((int)puVar4 + 4);
            dVar20 = CONCAT44D((int)(D2U(dVar20) >> 0x20),fVar26);
            fVar19 = F32LO(dVar16);
            fVar11 = fVar18;
          }
          else {
            uVar12 = *puVar4;
            puVar4 = puVar4 + 1;
            in_xd4 = CONCAT44D(uVar22,fVar26);
            fVar19 = fVar18;
            fVar11 = fVar27;
          }
          if (cVar33 == '\0') {
            dVar24 = CONCAT44D(F32HI(uVar12) * fVar11 +
                                      F32HI(dVar24),SUB84(dVar24,0));
          }
          if (cVar34 == '\0') {
            uVar12 = CONCAT44(*(undefined4 *)(unsigned)puVar4,(int)uVar12);
            pdVar3 = (double *)(unsigned)((int)puVar4 + 4);
            fVar11 = fVar25;
          }
          else {
            uVar12 = *puVar4;
            pdVar3 = (double *)(unsigned)(puVar4 + 1);
            fVar19 = fVar25;
            fVar11 = fVar26;
          }
          if (cVar33 == '\0') {
            dVar20 = CONCAT44D((int)(D2U(dVar20) >> 0x20),
                                      F32HI(uVar12) * fVar11 + F32LO(dVar20))
            ;
          }
          if (cVar34 == '\0') {
            in_dr2 = CONCAT44D(*(undefined4 *)(unsigned)pdVar3,fVar19);
            in_dr0 = CONCAT44D(uVar22,(int)uVar12);
          }
          else {
            in_dr2 = *pdVar3;
            in_dr0 = CONCAT44D(ar5,uVar22);
          }
          if (cVar33 == '\0') {
            dVar20 = CONCAT44D(F32HI(in_dr0) *
                                      F32HI(in_dr2) +
                                      F32HI(dVar20),SUB84(dVar20,0));
          }
          if (cVar34 == '\0') {
            *(int *)(unsigned)((int)ar7 + 0x1c) = (int)(D2U(dVar20) >> 0x20);
            *(int *)(unsigned)(ar7 + 3) = SUB84(dVar20,0);
            *(int *)(unsigned)((int)ar7 + 0x14) = (int)(D2U(dVar24) >> 0x20);
            *(int *)(unsigned)(ar7 + 2) = SUB84(dVar24,0);
            *(int *)(unsigned)((int)ar7 + 0xc) = (int)(D2U(dVar13) >> 0x20);
            *(int *)(unsigned)(ar7 + 1) = SUB84(dVar13,0);
            pdVar3 = (double *)(unsigned)((int)ar7 + 4);
            *(int *)(unsigned)pdVar3 = (int)((ulonglong)in_dr10 >> 0x20);
          }
          else {
            ar7[3] = dVar20;
            ar7[2] = in_xd4;
            ar7[1] = dVar24;
            *ar7 = in_xd6;
            ar7[-1] = dVar13;
            ar7[-2] = in_xd8;
            pdVar3 = ar7 + -3;
            *pdVar3 = in_dr10;
          }
          *(undefined4 *)(unsigned)((int)pdVar3 + -4) = 0xe0000000;
          iVar6 = 1;
          ar7 = (double *)(unsigned)((int)pdVar3 + 0x1c);
        }
        if (cVar34 == '\0') {
          dVar16 = CONCAT44D(*(undefined4 *)(unsigned)((int)a5 + 4),*(undefined4 *)(unsigned)(a5 + 1));
          dVar24 = CONCAT44D(uVar21,fVar27);
          in_dr2 = CONCAT44D((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(unsigned)(a5 + 2));
          puVar4 = (undefined8 *)(unsigned)((int)a5 + 0x14);
          dVar20 = CONCAT44D(uVar28,*(undefined4 *)(unsigned)((int)a5 + 0xc));
        }
        else {
          dVar16 = *(double *)(unsigned)((int)a5 + 4);
          dVar24 = CONCAT44D(fVar18,uVar21);
          in_xd8 = *(double *)(unsigned)((int)a5 + 0xc);
          in_xd6 = CONCAT44D(fVar25,fVar27);
          in_xd4 = *(double *)(unsigned)((int)a5 + 0x14);
          puVar4 = (undefined8 *)(unsigned)((int)a5 + 0x24);
          dVar20 = dVar29;
        }
        if (cVar33 == '\0') {
          dVar24 = CONCAT44D(F32HI(dVar24) * F32LO(in_dr2),
                                    SUB84(dVar24,0));
        }
        else {
          dVar24 = dVar24 * in_dr2;
        }
        if (cVar34 == '\0') {
          in_dr2 = CONCAT44D((int)((ulonglong)in_dr2 >> 0x20),fVar18);
          uVar12 = CONCAT44(*(undefined4 *)(unsigned)puVar4,SUB84(in_dr0,0));
          puVar4 = (undefined8 *)(unsigned)((int)puVar4 + 4);
          in_dr10 = CONCAT44D(fVar26,SUB84(in_dr10,0));
        }
        else {
          uVar12 = *puVar4;
          puVar4 = puVar4 + 1;
          in_dr10 = CONCAT44D(uVar22,fVar26);
        }
        if (cVar33 == '\0') {
          dVar24 = CONCAT44D((int)(D2U(dVar24) >> 0x20),
                                    F32HI(uVar12) * F32LO(in_dr2) +
                                    SUB84(dVar24,0));
        }
        if (cVar34 == '\0') {
          in_dr2 = CONCAT44D((int)((ulonglong)in_dr2 >> 0x20),fVar25);
          uVar12 = CONCAT44(*(undefined4 *)(unsigned)puVar4,(int)uVar12);
          puVar4 = (undefined8 *)(unsigned)((int)puVar4 + 4);
        }
        else {
          uVar12 = *puVar4;
          puVar4 = puVar4 + 1;
        }
        if (cVar33 == '\0') {
          in_dr10 = CONCAT44D(F32HI(uVar12) * F32LO(in_dr2) +
                                     F32HI(in_dr10),SUB84(in_dr10,0));
        }
        if (cVar34 == '\0') {
          in_dr2 = CONCAT44D((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(unsigned)puVar4);
          in_dr0 = CONCAT44D(uVar22,(int)uVar12);
        }
        else {
          in_dr0 = CONCAT44D(ar5,uVar22);
        }
        if (cVar33 == '\0') {
          dVar20 = CONCAT44D(F32HI(in_dr0) * F32LO(in_dr2) +
                                    F32HI(dVar20),SUB84(dVar20,0));
        }
        if (cVar34 == '\0') {
          *(int *)(unsigned)((int)ar7 + 0x1c) = (int)(D2U(dVar20) >> 0x20);
          *(int *)(unsigned)(ar7 + 3) = (int)((ulonglong)in_dr10 >> 0x20);
          *(int *)(unsigned)((int)ar7 + 0x14) = SUB84(dVar24,0);
          *(int *)(unsigned)(ar7 + 2) = (int)(D2U(dVar24) >> 0x20);
          *(int *)(unsigned)((int)ar7 + 0xc) = SUB84(dVar20,0);
          *(int *)(unsigned)(ar7 + 1) = SUB84(dVar16,0);
          pdVar3 = (double *)(unsigned)((int)ar7 + 4);
          *(int *)(unsigned)pdVar3 = (int)(D2U(dVar16) >> 0x20);
        }
        else {
          ar7[3] = dVar20;
          ar7[2] = in_dr10;
          ar7[1] = in_xd6;
          *ar7 = dVar24;
          ar7[-1] = in_xd4;
          ar7[-2] = in_xd8;
          pdVar3 = ar7 + -3;
          *pdVar3 = dVar16;
        }
        *(undefined4 *)(unsigned)((int)pdVar3 + -4) = 0xe0000000;
        ar7 = (double *)(unsigned)((int)pdVar3 + 0x1c);
        iVar6 = iVar6 + 1;
      }
      else if (iVar6 != 0) {
        if (cVar34 == '\0') {
          uVar23 = *(undefined4 *)(unsigned)((int)a5 + 4);
          dVar16 = CONCAT44D(uVar21,*(undefined4 *)(unsigned)(a5 + 1));
          in_dr10 = CONCAT44D(fVar27,SUB84(in_dr10,0));
          dVar13 = (double)((ulonglong)*(uint *)(unsigned)(a5 + 2) << 0x20);
          puVar4 = (undefined8 *)(unsigned)((int)a5 + 0x14);
          dVar20 = CONCAT44D(uVar28,*(undefined4 *)(unsigned)((int)a5 + 0xc));
        }
        else {
          in_xd6 = *(double *)(unsigned)((int)a5 + 4);
          dVar16 = CONCAT44D(fVar18,uVar21);
          in_xd8 = *(double *)(unsigned)((int)a5 + 0xc);
          in_dr10 = CONCAT44D(fVar25,fVar27);
          in_xd4 = *(double *)(unsigned)((int)a5 + 0x14);
          dVar13 = *(double *)(unsigned)((int)a5 + 0x1c);
          puVar4 = (undefined8 *)(unsigned)((int)a5 + 0x24);
          dVar20 = dVar29;
        }
        if (cVar33 == '\0') {
          dVar16 = CONCAT44D(F32HI(dVar16) *
                                    F32HI(dVar13),SUB84(dVar16,0));
        }
        else {
          dVar16 = dVar16 * dVar13;
        }
        if (cVar34 == '\0') {
          uVar12 = CONCAT44(*(undefined4 *)(unsigned)puVar4,SUB84(in_dr0,0));
          puVar4 = (undefined8 *)(unsigned)((int)puVar4 + 4);
          dVar24 = CONCAT44D(fVar26,uVar23);
          fVar19 = F32LO(dVar13);
          fVar11 = fVar18;
        }
        else {
          uVar12 = *puVar4;
          puVar4 = puVar4 + 1;
          dVar24 = CONCAT44D(uVar22,fVar26);
          fVar19 = fVar18;
          fVar11 = fVar27;
        }
        if (cVar33 == '\0') {
          in_dr10 = CONCAT44D(F32HI(uVar12) * fVar11 +
                                     F32HI(in_dr10),SUB84(in_dr10,0));
        }
        if (cVar34 == '\0') {
          uVar12 = CONCAT44(*(undefined4 *)(unsigned)puVar4,(int)uVar12);
          pdVar3 = (double *)(unsigned)((int)puVar4 + 4);
          fVar11 = fVar25;
        }
        else {
          uVar12 = *puVar4;
          pdVar3 = (double *)(unsigned)(puVar4 + 1);
          fVar19 = fVar25;
          fVar11 = fVar26;
        }
        if (cVar33 == '\0') {
          dVar24 = CONCAT44D(F32HI(uVar12) * fVar11 +
                                    F32HI(dVar24),SUB84(dVar24,0));
        }
        if (cVar34 == '\0') {
          in_dr2 = CONCAT44D(*(undefined4 *)(unsigned)pdVar3,fVar19);
          in_dr0 = CONCAT44D(uVar22,(int)uVar12);
        }
        else {
          in_dr2 = *pdVar3;
          in_dr0 = CONCAT44D(ar5,uVar22);
        }
        if (cVar33 == '\0') {
          dVar20 = CONCAT44D(F32HI(in_dr0) *
                                    F32HI(in_dr2) +
                                    F32HI(dVar20),SUB84(dVar20,0));
        }
        if (cVar34 == '\0') {
          *(int *)(unsigned)((int)ar7 + 0x1c) = (int)(D2U(dVar20) >> 0x20);
          *(int *)(unsigned)(ar7 + 3) = (int)(D2U(dVar24) >> 0x20);
          *(int *)(unsigned)((int)ar7 + 0x14) = (int)((ulonglong)in_dr10 >> 0x20);
          *(int *)(unsigned)(ar7 + 2) = (int)(D2U(dVar16) >> 0x20);
          *(int *)(unsigned)((int)ar7 + 0xc) = SUB84(dVar20,0);
          *(int *)(unsigned)(ar7 + 1) = SUB84(dVar16,0);
          pdVar3 = (double *)(unsigned)((int)ar7 + 4);
          *(int *)(unsigned)pdVar3 = SUB84(dVar24,0);
        }
        else {
          ar7[3] = dVar20;
          ar7[2] = dVar24;
          ar7[1] = in_dr10;
          *ar7 = dVar16;
          ar7[-1] = in_xd4;
          ar7[-2] = in_xd8;
          pdVar3 = ar7 + -3;
          *pdVar3 = in_xd6;
        }
        *(undefined4 *)(unsigned)((int)pdVar3 + -4) = 0xf0000000;
        iVar7 = iVar7 + iVar6 + 1;
        iVar6 = 0;
        ar7 = (double *)(unsigned)((int)pdVar3 + 0x1c);
      }
      uVar23 = SUB84(dVar24,0);
      if (bVar1) {
        if (cVar34 == '\0') {
          in_dr2 = CONCAT44D((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(unsigned)pdVar5);
        }
        if (cVar33 == '\0') {
          bVar32 = SUB84(in_dr2,0) < fVar15;
        }
        else {
          bVar32 = in_dr2 < dVar29;
        }
        if (bVar32) {
          if (cVar34 == '\0') {
            in_dr2 = CONCAT44D((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(unsigned)a5);
          }
          if (cVar33 == '\0') {
            bVar32 = SUB84(in_dr2,0) < fVar15;
          }
          else {
            bVar32 = in_dr2 < dVar29;
          }
          if (bVar32) {
            if (cVar34 == '\0') {
              in_dr2 = CONCAT44D((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(unsigned)a6);
            }
            if (cVar33 == '\0') {
              bVar32 = SUB84(in_dr2,0) < fVar15;
            }
            else {
              bVar32 = in_dr2 < dVar29;
            }
            if (bVar32) goto LAB_8c221efe;
          }
        }
        if (cVar34 == '\0') {
          uVar23 = *(undefined4 *)(unsigned)a5;
          uVar28 = *(undefined4 *)(unsigned)((int)a5 + 0x24);
          dVar16 = CONCAT44D(uVar28,*(undefined4 *)(unsigned)pdVar5);
          dVar20 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar5 + 0x24),SUB84(dVar20,0));
          in_dr2 = CONCAT44D((int)((ulonglong)in_dr2 >> 0x20),uVar28);
        }
        else {
          in_xd6 = *a5;
          dVar16 = *(double *)(unsigned)((int)a5 + 0x24);
          in_xd8 = *pdVar5;
          dVar20 = *(double *)(unsigned)((int)pdVar5 + 0x24);
          uVar28 = (undefined4)(D2U(dVar16) >> 0x20);
        }
        if (cVar33 == '\0') {
          fVar15 = F32LO(in_dr2) * F32LO(dVar16);
        }
        else {
          fVar15 = SUB84(in_dr2 * dVar16,0);
        }
        dVar13 = in_xd6;
        if (cVar34 == '\0') {
          dVar13 = CONCAT44D(uVar23,SUB84(in_dr0,0));
        }
        fVar19 = F32HI(dVar20);
        if (cVar33 == '\0') {
          dVar13 = CONCAT44D(F32HI(dVar13) * fVar19,SUB84(dVar13,0));
        }
        else {
          dVar13 = dVar13 * dVar20;
        }
        if (cVar34 == '\0') {
          dVar20 = CONCAT44D(fVar19,*(undefined4 *)(unsigned)(a5 + 4));
          dVar24 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar5 + 4),uVar23);
          dVar17 = CONCAT44D(uVar23,fVar15);
        }
        else {
          in_xd4 = a5[4];
          dVar24 = pdVar5[4];
          dVar17 = in_xd6;
        }
        if (cVar33 == '\0') {
          dVar13 = CONCAT44D(F32HI(dVar13) - F32LO(dVar17),
                                    SUB84(dVar13,0));
        }
        else {
          dVar13 = dVar13 - dVar17;
        }
        if (cVar34 == '\0') {
          dVar17 = CONCAT44D((int)(D2U(dVar17) >> 0x20),SUB84(dVar20,0));
        }
        fVar15 = F32HI(dVar24);
        if (cVar33 == '\0') {
          dVar17 = CONCAT44D(F32HI(dVar17) * fVar15,SUB84(dVar17,0));
        }
        else {
          dVar17 = dVar17 * dVar24;
        }
        dVar31 = dVar16;
        if (cVar34 == '\0') {
          dVar13 = CONCAT44D((int)(D2U(dVar13) >> 0x20),uVar28);
          dVar31 = in_xd0;
        }
        if (cVar33 == '\0') {
          dVar13 = CONCAT44D((int)(D2U(dVar13) >> 0x20),F32LO(dVar13) * fVar15);
          fVar15 = F32LO(dVar17) * F32LO(dVar16) - F32HI(dVar17);
        }
        else {
          dVar13 = dVar13 * dVar24;
          fVar15 = SUB84(dVar17 * dVar16 - dVar17 * dVar16,0);
        }
        if (cVar34 == '\0') {
          dVar16 = CONCAT44D(*(undefined4 *)(unsigned)((int)a6 + 0x24),fVar15);
        }
        else {
          dVar16 = *(double *)(unsigned)((int)a6 + 0x24);
        }
        if (cVar33 == '\0') {
          dVar16 = CONCAT44D(F32HI(dVar16) * F32LO(dVar16),
                                    SUB84(dVar16,0));
        }
        else {
          dVar16 = dVar16 * dVar16;
        }
        if (cVar34 == '\0') {
          dVar16 = CONCAT44D((int)(D2U(dVar16) >> 0x20),*(undefined4 *)(unsigned)(a6 + 4));
        }
        if (cVar33 == '\0') {
          dVar16 = CONCAT44D(F32HI(dVar13) * F32LO(dVar16) +
                                    F32HI(dVar16),SUB84(dVar16,0));
        }
        if (cVar34 == '\0') {
          dVar16 = CONCAT44D((int)(D2U(dVar16) >> 0x20),SUB84(dVar20,0));
        }
        if (cVar33 == '\0') {
          fVar15 = F32LO(dVar16) * F32HI(dVar20);
          dVar16 = CONCAT44D((int)(D2U(dVar16) >> 0x20),fVar15);
          fVar15 = F32LO(dVar13) - fVar15;
        }
        else {
          dVar16 = dVar16 * dVar20;
          fVar15 = SUB84(dVar13 - dVar16,0);
        }
        if (cVar34 == '\0') {
          in_dr0 = CONCAT44D(fVar15,*(undefined4 *)(unsigned)a6);
          in_xd0 = dVar31;
        }
        else {
          in_xd0 = *a6;
          in_dr0 = dVar31;
        }
        if (cVar33 == '\0') {
          fVar15 = (F32HI(in_dr0) * F32LO(in_dr0) +
                   F32HI(dVar16)) * F32LO(dVar30);
        }
        else {
          fVar15 = (float)((ulonglong)(dVar16 * dVar30) >> 0x20);
        }
        in_dr2 = (double)((ulonglong)(uint)fVar15 << 0x20);
        if (cVar33 == '\0' && fVar15 < 0.0) {
          if (cVar34 == '\0') {
            dVar24 = (double)((ulonglong)in_dr6 & 0xffffffff);
            in_dr10 = (double)((ulonglong)in_dr10 & 0xffffffff);
            dVar20 = in_dr4;
          }
          else {
            in_xd8 = CONCAT44D(uVar22,fVar26);
            in_xd6 = CONCAT44D(ar5,uVar22);
            dVar24 = CONCAT44D(fVar26,fVar25);
            in_xd4 = CONCAT44D(fVar27,fVar18);
            dVar20 = CONCAT44D(fVar18,uVar21);
            in_dr10 = dVar29;
          }
          ar7 = (double *)(unsigned)(vsp = ((unsigned long)(fr0_ - 92)), FUN_8c2230f0(pdVar5,a5,a6,ar7));
        }
      }
LAB_8c221efe:
      uVar23 = SUB84(dVar24,0);
      (*(unsigned *)(fr0_ - 0x58) = (unsigned)(unsigned long)(((short *)(unsigned long)*(unsigned *)(fr0_ - 0x58)) + (ar6 >> 0xe & 3) + 1));
      iVar10 = iVar10 + -1;
      dVar30 = CONCAT44D((int)(D2U(dVar30) >> 0x20),-SUB84(dVar30,0));
      pdVar5 = a5;
      a5 = a6;
    } while (iVar10 != 0);
    if (iVar6 != 0) {
      if (cVar34 == '\0') {
        uVar23 = *(undefined4 *)(unsigned)(a6 + 1);
        in_dr10 = CONCAT44D(fVar27,SUB84(in_dr10,0));
        dVar16 = CONCAT44D(*(undefined4 *)(unsigned)((int)a6 + 0xc),uVar21);
        in_dr2 = CONCAT44D((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(unsigned)(a6 + 2));
        puVar4 = (undefined8 *)(unsigned)((int)a6 + 0x14);
        dVar20 = CONCAT44D((int)(D2U(dVar29) >> 0x20),*(undefined4 *)(unsigned)((int)a6 + 4));
      }
      else {
        in_xd4 = *(double *)(unsigned)((int)a6 + 4);
        in_xd8 = CONCAT44D(fVar18,uVar21);
        in_xd6 = *(double *)(unsigned)((int)a6 + 0xc);
        in_dr10 = CONCAT44D(fVar25,fVar27);
        dVar16 = *(double *)(unsigned)((int)a6 + 0x14);
        puVar4 = (undefined8 *)(unsigned)((int)a6 + 0x24);
        dVar20 = dVar29;
      }
      if (cVar33 == '\0') {
        dVar16 = CONCAT44D((int)(D2U(dVar16) >> 0x20),F32LO(dVar16) * F32LO(in_dr2)
                                 );
      }
      else {
        dVar16 = dVar16 * in_dr2;
      }
      if (cVar34 == '\0') {
        in_dr2 = CONCAT44D((int)((ulonglong)in_dr2 >> 0x20),fVar18);
        uVar12 = CONCAT44(*(undefined4 *)(unsigned)puVar4,SUB84(in_dr0,0));
        puVar4 = (undefined8 *)(unsigned)((int)puVar4 + 4);
        dVar24 = CONCAT44D(fVar26,uVar23);
      }
      else {
        uVar12 = *puVar4;
        puVar4 = puVar4 + 1;
        dVar24 = CONCAT44D(uVar22,fVar26);
      }
      if (cVar33 == '\0') {
        in_dr10 = CONCAT44D(F32HI(uVar12) * F32LO(in_dr2) +
                                   F32HI(in_dr10),SUB84(in_dr10,0));
      }
      if (cVar34 == '\0') {
        in_dr2 = CONCAT44D((int)((ulonglong)in_dr2 >> 0x20),fVar25);
        uVar12 = CONCAT44(*(undefined4 *)(unsigned)puVar4,(int)uVar12);
        puVar4 = (undefined8 *)(unsigned)((int)puVar4 + 4);
      }
      else {
        uVar12 = *puVar4;
        puVar4 = puVar4 + 1;
      }
      if (cVar33 == '\0') {
        dVar24 = CONCAT44D(F32HI(uVar12) * F32LO(in_dr2) +
                                  F32HI(dVar24),SUB84(dVar24,0));
      }
      if (cVar34 == '\0') {
        in_dr2 = CONCAT44D((int)((ulonglong)in_dr2 >> 0x20),*(undefined4 *)(unsigned)puVar4);
        in_dr0 = CONCAT44D(uVar22,(int)uVar12);
      }
      else {
        in_dr0 = CONCAT44D(ar5,uVar22);
      }
      if (cVar33 == '\0') {
        dVar20 = CONCAT44D(F32HI(in_dr0) * F32LO(in_dr2) +
                                  F32HI(dVar20),SUB84(dVar20,0));
      }
      if (cVar34 == '\0') {
        *(int *)(unsigned)((int)ar7 + 0x1c) = (int)(D2U(dVar20) >> 0x20);
        *(int *)(unsigned)(ar7 + 3) = (int)(D2U(dVar24) >> 0x20);
        *(int *)(unsigned)((int)ar7 + 0x14) = (int)((ulonglong)in_dr10 >> 0x20);
        *(int *)(unsigned)(ar7 + 2) = SUB84(dVar16,0);
        *(int *)(unsigned)((int)ar7 + 0xc) = (int)(D2U(dVar16) >> 0x20);
        *(int *)(unsigned)(ar7 + 1) = SUB84(dVar24,0);
        pdVar5 = (double *)(unsigned)((int)ar7 + 4);
        *(int *)(unsigned)pdVar5 = SUB84(dVar20,0);
      }
      else {
        ar7[3] = dVar20;
        ar7[2] = dVar24;
        ar7[1] = in_dr10;
        *ar7 = in_xd8;
        ar7[-1] = dVar16;
        ar7[-2] = in_xd6;
        pdVar5 = ar7 + -3;
        *pdVar5 = in_xd4;
      }
      *(undefined4 *)(unsigned)((int)pdVar5 + -4) = 0xf0000000;
      iVar7 = iVar7 + iVar6 + 1;
      ar7 = (double *)(unsigned)((int)pdVar5 + 0x1c);
    }
    (*(uint *)(fr0_ - 0x38)) = (*(uint *)(fr0_ - 0x38)) - 1;
    if ((*(uint *)(fr0_ - 0x38)) == 0) {
      (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) + iVar7;
      (*(undefined4 *)(unsigned)(unsigned)0x8c4aa51c) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa51c) + iVar8;
      return ar7;
    }
  } while( true );
}

__asm__(".globl _FUN_8c221c68\n.set _FUN_8c221c68, _FUN_8c221c68_def\n");
