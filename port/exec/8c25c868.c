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
double * FUN_8c25c868_def(double *ar4,int ar5,double *ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c25c868";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 60; for (int i_ = 0; i_ < 60; i_++) z_[i_] = 0; }
  ulonglong uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  double *pdVar4;
  double *pdVar5;
  uint *puVar6;
  float fVar7;
  undefined8 in_dr2 = 0;
  double dVar9;
  float fVar11;
  double dVar10;
  double dVar12;
  float fVar14;
  double dVar13;
  double dVar15;
  double dVar16;
  float fVar17;
  undefined4 uVar19;
  double dVar18;
  undefined4 in_fr13 = 0;
  float fVar20;
  double dVar21;
  float fVar22;
  float fVar23;
  double in_dr14 = 0;
  float fVar24;
  double in_xd2 = 0;
  double dVar25;
  double in_xd4 = 0;
  double in_xd6 = 0;
  double dVar26;
  double in_xd8 = 0;
  double in_xd12 = 0;
  double in_xd14 = 0;
  bool bVar27;
  undefined4 in_PR = 0;
  char cVar28;
  char cVar29;
  double dVar8;
  
  cVar29 = '\0';
  cVar28 = '\0';
  dVar9 = CONCAT44D((int)((ulonglong)in_dr2 >> 0x20),(*(undefined4 *)(unsigned)(unsigned)0x8c4aa4d4));
  pdVar5 = ar4 + (ar5 + -1) * 3;
  dVar21 = CONCAT44D(1.0 / (*(undefined4 *)(unsigned)(unsigned)0x8c4aa4d4),in_fr13);
  uVar19 = *(undefined4 *)(unsigned)((int)pdVar5 + 4);
  dVar16 = (double)(ulonglong)*(uint *)(unsigned)(pdVar5 + 1);
  dVar10 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar5 + 0xc),*(undefined4 *)(unsigned)(pdVar5 + 2));
  dVar13 = (double)(ulonglong)*(uint *)(unsigned)((int)pdVar5 + 0x14);
  uVar2 = *(undefined4 *)(unsigned)pdVar5;
  (*(undefined4 *)(fr0_ - 0x30)) = in_PR;
  do {
    uVar3 = *(undefined4 *)(unsigned)ar4;
    if (cVar29 == '\0') {
      (*(undefined4 *)(fr0_ - 0x38)) = *(undefined4 *)(unsigned)((int)ar4 + 4);
      (*(uint *)(fr0_ - 0x3c)) = *(uint *)(unsigned)(ar4 + 1);
      dVar9 = CONCAT44D((int)(D2U(dVar9) >> 0x20),(*(uint *)(fr0_ - 0x3c)));
      in_dr14 = CONCAT44D((int)((ulonglong)in_dr14 >> 0x20),*(undefined4 *)(unsigned)((int)ar4 + 0xc));
      pdVar4 = ar4 + 2;
    }
    else {
      (*(undefined4 *)(fr0_ - 0x34)) = (undefined4)((ulonglong)*(undefined8 *)(unsigned)((int)ar4 + 4) >> 0x20);
      in_xd2 = *(double *)(unsigned)((int)ar4 + 0xc);
      (*(uint *)(fr0_ - 0x3c)) = SUB84(in_xd2,0);
      (*(undefined4 *)(fr0_ - 0x38)) = (undefined4)((ulonglong)in_xd2 >> 0x20);
      in_xd14 = *(double *)(unsigned)((int)ar4 + 0x14);
      pdVar4 = (double *)(unsigned)((int)ar4 + 0x1c);
    }
    uVar1 = D2U(dVar9) >> 0x20;
    dVar8 = (double)(uVar1 << 0x20);
    if (cVar28 == '\0') {
      bVar27 = 0.0 < SUB84(in_dr14,0);
    }
    else {
      bVar27 = dVar8 < in_dr14;
    }
    if (cVar29 == '\0') {
      dVar21 = CONCAT44D((int)(D2U(dVar21) >> 0x20),*(undefined4 *)(unsigned)pdVar4);
      in_dr14 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar4 + 4),SUB84(in_dr14,0));
      pdVar4 = pdVar4 + 1;
    }
    else {
      in_xd12 = *pdVar4;
      in_dr14 = pdVar4[1];
      pdVar4 = pdVar4 + 2;
    }
    fVar23 = F32LO(in_dr14);
    fVar22 = F32HI(dVar21);
    fVar11 = F32HI(dVar10);
    dVar26 = in_xd6;
    if (bVar27) {
      if (cVar28 == '\0') {
        bVar27 = fVar23 < fVar22;
      }
      else {
        bVar27 = in_dr14 < dVar21;
      }
      if (!bVar27) goto LAB_8c25c8d6;
      if (cVar28 == '\0') {
        bVar27 = 0.0 < fVar11;
      }
      else {
        bVar27 = dVar8 < dVar10;
      }
      if (!bVar27) goto LAB_8c25c8d6;
      if (cVar28 == '\0') {
        bVar27 = fVar11 < fVar22;
      }
      else {
        bVar27 = dVar10 < dVar21;
      }
      if (!bVar27) goto LAB_8c25c8d6;
      fVar22 = F32LO(dVar10);
      dVar12 = in_xd4;
      if (cVar29 == '\0') {
        dVar12 = CONCAT44D(fVar22,SUB84(dVar13,0));
      }
      fVar20 = F32LO(dVar21);
      if (cVar28 == '\0') {
        dVar12 = CONCAT44D(F32HI(dVar12) - fVar20,SUB84(dVar12,0));
      }
      else {
        dVar12 = dVar12 - dVar21;
      }
      dVar15 = in_xd6;
      if (cVar29 == '\0') {
        dVar15 = CONCAT44D(SUB84(dVar12,0),SUB84(dVar16,0));
      }
      fVar24 = F32HI(in_dr14);
      if (cVar28 == '\0') {
        dVar15 = CONCAT44D(F32HI(dVar15) - fVar24,SUB84(dVar15,0));
      }
      else {
        dVar15 = dVar15 - in_dr14;
      }
      fVar14 = F32HI(dVar12);
      dVar25 = dVar12;
      if (cVar29 == '\0') {
        dVar8 = CONCAT44D((int)(D2U(dVar9) >> 0x20),fVar14);
        dVar25 = in_xd2;
      }
      fVar17 = F32HI(dVar15);
      if (cVar28 == '\0') {
        fVar7 = SQRT(fVar17 * fVar17 + F32LO(dVar8) * fVar14);
        dVar8 = CONCAT44D((int)(D2U(dVar8) >> 0x20),fVar7);
        dVar18 = CONCAT44D(uVar19,1.0 / fVar7);
      }
      else {
        dVar8 = SQRT(dVar8 * dVar12);
        dVar18 = CONCAT44D(uVar19,0x3f800000) / dVar8;
      }
      if (cVar29 == '\0') {
        dVar8 = CONCAT44D((int)(D2U(dVar8) >> 0x20),0x3f066666);
      }
      else {
        dVar25 = -3.1050369136217506e+231;
      }
      if (cVar28 == '\0') {
        dVar13 = CONCAT44D(fVar14 * F32LO(dVar18) * F32LO(dVar8),SUB84(dVar12,0));
        dVar16 = CONCAT44D(fVar17 * F32LO(dVar18) * F32LO(dVar8),SUB84(dVar15,0));
      }
      else {
        dVar13 = dVar12 * dVar18 * dVar8;
        dVar16 = dVar15 * dVar18 * dVar8;
      }
      fVar14 = F32HI(dVar13);
      in_xd2 = dVar13;
      if (cVar29 == '\0') {
        dVar8 = CONCAT44D((int)(D2U(dVar8) >> 0x20),fVar14);
        in_xd2 = dVar25;
      }
      if (cVar28 == '\0') {
        dVar8 = CONCAT44D((int)(D2U(dVar8) >> 0x20),F32LO(dVar8) + fVar14);
        dVar16 = CONCAT44D(-F32HI(dVar16),SUB84(dVar16,0));
      }
      else {
        dVar8 = dVar8 + dVar13;
        dVar16 = -dVar16;
      }
      fVar17 = F32HI(dVar16);
      if (cVar29 == '\0') {
        dVar18 = CONCAT44D((int)(D2U(dVar18) >> 0x20),fVar17);
      }
      if (cVar28 == '\0') {
        dVar18 = CONCAT44D((int)(D2U(dVar18) >> 0x20),F32LO(dVar18) + fVar17);
      }
      else {
        dVar18 = dVar18 + dVar16;
      }
      if (cVar29 == '\0') {
        (*(undefined4 *)(fr0_ - 0x34)) = SUB84(dVar8,0);
        dVar8 = CONCAT44D((int)(D2U(dVar8) >> 0x20),fVar22);
      }
      else {
        (*(undefined4 *)(fr0_ - 0x34)) = SUB84(in_xd2,0);
        (*(undefined4 *)(fr0_ - 0x30)) = (undefined4)((ulonglong)in_xd2 >> 0x20);
        in_xd2 = in_xd4;
      }
      if (cVar28 == '\0') {
        dVar8 = CONCAT44D((int)(D2U(dVar8) >> 0x20),F32LO(dVar8) - fVar17);
      }
      else {
        dVar8 = dVar8 - dVar16;
      }
      *(undefined4 *)(unsigned)(ar6 + 3) = uVar2;
      uVar19 = (undefined4)(D2U(dVar18) >> 0x20);
      if (cVar29 == '\0') {
        *(undefined4 *)(unsigned)((int)ar6 + 0x14) = uVar19;
        *(int *)(unsigned)(ar6 + 2) = SUB84(dVar16,0);
        *(float *)(unsigned)((int)ar6 + 0xc) = fVar11;
        pdVar5 = ar6 + 1;
        *(int *)(unsigned)pdVar5 = SUB84(dVar8,0);
        dVar8 = CONCAT44D((int)(D2U(dVar8) >> 0x20),SUB84(dVar13,0));
      }
      else {
        ar6[2] = dVar18;
        ar6[1] = in_xd8;
        *ar6 = dVar10;
        pdVar5 = ar6 + -1;
        *pdVar5 = in_xd2;
        in_xd2 = in_xd6;
      }
      if (cVar28 == '\0') {
        dVar8 = CONCAT44D((int)(D2U(dVar8) >> 0x20),F32LO(dVar8) - fVar14);
      }
      else {
        dVar8 = dVar8 - dVar13;
      }
      if (cVar29 == '\0') {
        pdVar5 = (double *)(unsigned)((int)pdVar5 + -4);
        *(int *)(unsigned)pdVar5 = SUB84(dVar8,0);
      }
      else {
        pdVar5 = pdVar5 + -1;
        *pdVar5 = in_xd2;
      }
      *(undefined4 *)(unsigned)((int)pdVar5 + -4) = 0xe0000000;
      *(undefined4 *)(unsigned)((int)pdVar5 + 0x34) = uVar3;
      if (cVar29 == '\0') {
        *(undefined4 *)(unsigned)(pdVar5 + 6) = (*(undefined4 *)(fr0_ - 0x38));
        puVar6 = (uint *)(unsigned)((int)pdVar5 + 0x2c);
        *puVar6 = (*(uint *)(fr0_ - 0x3c));
        dVar8 = CONCAT44D((int)(D2U(dVar8) >> 0x20),fVar20);
      }
      else {
        *(ulonglong *)(unsigned)((int)pdVar5 + 0x2c) = CONCAT44((*(undefined4 *)(fr0_ - 0x34)),(*(undefined4 *)(fr0_ - 0x38)));
        puVar6 = (uint *)(unsigned)((int)pdVar5 + 0x24);
        *(ulonglong *)(unsigned)puVar6 = CONCAT44((*(undefined4 *)(fr0_ - 0x38)),(*(uint *)(fr0_ - 0x3c)));
        in_xd2 = in_xd12;
      }
      if (cVar28 == '\0') {
        dVar8 = CONCAT44D((int)(D2U(dVar8) >> 0x20),F32LO(dVar8) - fVar17);
      }
      else {
        dVar8 = dVar8 - dVar16;
      }
      if (cVar29 == '\0') {
        puVar6[-1] = (uint)fVar23;
        pdVar5 = (double *)(unsigned)(puVar6 + -2);
        *(int *)(unsigned)pdVar5 = SUB84(dVar8,0);
        dVar8 = CONCAT44D((int)(D2U(dVar8) >> 0x20),fVar24);
      }
      else {
        *(double *)(unsigned)(puVar6 + -2) = in_xd14;
        pdVar5 = (double *)(unsigned)(puVar6 + -4);
        *pdVar5 = in_xd2;
        in_xd2 = in_dr14;
      }
      if (cVar28 == '\0') {
        dVar8 = CONCAT44D((int)(D2U(dVar8) >> 0x20),F32LO(dVar8) - fVar14);
      }
      else {
        dVar8 = dVar8 - dVar13;
      }
      if (cVar29 == '\0') {
        pdVar5 = (double *)(unsigned)((int)pdVar5 + -4);
        *(int *)(unsigned)pdVar5 = SUB84(dVar8,0);
      }
      else {
        pdVar5 = pdVar5 + -1;
        *pdVar5 = in_xd2;
      }
      *(undefined4 *)(unsigned)((int)pdVar5 + -4) = 0xe0000000;
      if (cVar28 == '\0') {
        dVar10 = CONCAT44D(fVar11,fVar22 + F32LO(dVar18));
      }
      else {
        dVar10 = dVar10 + dVar18;
      }
      *(undefined4 *)(unsigned)((int)pdVar5 + 0x34) = uVar2;
      if (cVar29 == '\0') {
        *(undefined4 *)(unsigned)(pdVar5 + 6) = uVar19;
        *(int *)(unsigned)((int)pdVar5 + 0x2c) = SUB84(dVar16,0);
        *(int *)(unsigned)(pdVar5 + 5) = (int)(D2U(dVar10) >> 0x20);
        pdVar5 = (double *)(unsigned)((int)pdVar5 + 0x24);
        *(int *)(unsigned)pdVar5 = SUB84(dVar10,0);
        dVar8 = CONCAT44D((int)(D2U(dVar8) >> 0x20),(*(undefined4 *)(fr0_ - 0x34)));
      }
      else {
        *(double *)(unsigned)((int)pdVar5 + 0x2c) = dVar18;
        *(double *)(unsigned)((int)pdVar5 + 0x24) = in_xd8;
        *(double *)(unsigned)((int)pdVar5 + 0x1c) = dVar10;
        pdVar5 = (double *)(unsigned)((int)pdVar5 + 0x14);
        *pdVar5 = in_xd4;
        in_xd2 = CONCAT44D((*(undefined4 *)(fr0_ - 0x30)),(*(undefined4 *)(fr0_ - 0x34)));
      }
      if (cVar28 == '\0') {
        dVar13 = (double)(ulonglong)(uint)(F32LO(dVar13) + F32LO(dVar8));
      }
      else {
        dVar13 = dVar13 + dVar8;
      }
      if (cVar29 == '\0') {
        pdVar5 = (double *)(unsigned)((int)pdVar5 + -4);
        *(int *)(unsigned)pdVar5 = SUB84(dVar13,0);
      }
      else {
        pdVar5 = pdVar5 + -1;
        *pdVar5 = in_xd6;
      }
      *(undefined4 *)(unsigned)((int)pdVar5 + -4) = 0xe0000000;
      dVar9 = in_dr14;
      if (cVar29 == '\0') {
        dVar9 = CONCAT44D(fVar24,SUB84(dVar8,0));
      }
      *(undefined4 *)(unsigned)((int)pdVar5 + 0x34) = uVar3;
      if (cVar29 == '\0') {
        *(undefined4 *)(unsigned)(pdVar5 + 6) = (*(undefined4 *)(fr0_ - 0x38));
        puVar6 = (uint *)(unsigned)((int)pdVar5 + 0x2c);
        *puVar6 = (*(uint *)(fr0_ - 0x3c));
        dVar9 = CONCAT44D((int)(D2U(dVar9) >> 0x20),fVar20);
      }
      else {
        *(ulonglong *)(unsigned)((int)pdVar5 + 0x2c) = CONCAT44((*(undefined4 *)(fr0_ - 0x34)),(*(undefined4 *)(fr0_ - 0x38)));
        puVar6 = (uint *)(unsigned)((int)pdVar5 + 0x24);
        *(ulonglong *)(unsigned)puVar6 = CONCAT44((*(undefined4 *)(fr0_ - 0x38)),(*(uint *)(fr0_ - 0x3c)));
        in_xd2 = in_xd12;
      }
      if (cVar28 == '\0') {
        dVar9 = CONCAT44D((int)(D2U(dVar9) >> 0x20),F32LO(dVar9) + F32LO(dVar18));
      }
      else {
        dVar9 = dVar9 + dVar18;
      }
      if (cVar29 == '\0') {
        puVar6[-1] = (uint)fVar23;
        pdVar5 = (double *)(unsigned)(puVar6 + -2);
        *(int *)(unsigned)pdVar5 = SUB84(dVar9,0);
        dVar9 = CONCAT44D((int)(D2U(dVar9) >> 0x20),(*(undefined4 *)(fr0_ - 0x34)));
      }
      else {
        *(double *)(unsigned)(puVar6 + -2) = in_xd14;
        pdVar5 = (double *)(unsigned)(puVar6 + -4);
        *pdVar5 = in_xd2;
        in_xd2 = CONCAT44D((*(undefined4 *)(fr0_ - 0x30)),(*(undefined4 *)(fr0_ - 0x34)));
      }
      if (cVar28 == '\0') {
        dVar9 = CONCAT44D(F32HI(dVar9) + F32LO(dVar9),SUB84(dVar9,0));
      }
      else {
        dVar9 = dVar9 + dVar9;
      }
      if (cVar29 == '\0') {
        pdVar5 = (double *)(unsigned)((int)pdVar5 + -4);
        *(int *)(unsigned)pdVar5 = (int)(D2U(dVar9) >> 0x20);
      }
      else {
        pdVar5 = pdVar5 + -1;
        *pdVar5 = dVar9;
      }
      *(undefined4 *)(unsigned)((int)pdVar5 + -4) = 0xf0000000;
      ar6 = (double *)(unsigned)((int)pdVar5 + 0x1c);
    }
    else {
LAB_8c25c8d6:
      if (cVar28 == '\0') {
        bVar27 = 0.0 < fVar11;
      }
      else {
        bVar27 = (double)(uVar1 << 0x20) < dVar10;
      }
      if (bVar27) {
        if (cVar28 == '\0') {
          bVar27 = fVar11 < fVar22;
        }
        else {
          bVar27 = dVar10 < dVar21;
        }
        if (!bVar27) goto LAB_8c25c8e0;
LAB_8c25c8ea:
        dVar9 = (double)(uVar1 << 0x20);
        ar6 = (double *)(unsigned)(vsp = ((unsigned long)(fr0_ - 60)), FUN_8c25c9d8(pdVar5,ar4,ar6,ar7));
        dVar26 = in_xd6;
      }
      else {
LAB_8c25c8e0:
        dVar9 = (double)(uVar1 << 0x20);
        if (cVar28 == '\0') {
          bVar27 = 0.0 < fVar23;
        }
        else {
          bVar27 = dVar9 < in_dr14;
        }
        if (bVar27) {
          if (cVar28 == '\0') {
            bVar27 = fVar23 < fVar22;
          }
          else {
            bVar27 = in_dr14 < dVar21;
          }
          if (bVar27) goto LAB_8c25c8ea;
        }
      }
    }
    if (cVar29 == '\0') {
      dVar16 = (double)(ulonglong)(*(uint *)(fr0_ - 0x3c));
      uVar19 = (*(undefined4 *)(fr0_ - 0x38));
    }
    else {
      in_xd8 = CONCAT44D((*(undefined4 *)(fr0_ - 0x38)),(*(uint *)(fr0_ - 0x3c)));
      uVar19 = (*(undefined4 *)(fr0_ - 0x34));
    }
    ar5 = ar5 + -1;
    in_xd6 = in_dr14;
    dVar10 = in_xd14;
    dVar8 = in_xd12;
    if (cVar29 == '\0') {
      dVar13 = (double)((ulonglong)in_dr14 >> 0x20);
      in_xd6 = dVar26;
      dVar10 = CONCAT44D(SUB84(in_dr14,0),SUB84(dVar21,0));
      dVar8 = in_xd4;
    }
    in_xd4 = dVar8;
    uVar2 = uVar3;
    pdVar5 = ar4;
    ar4 = pdVar4;
    if (ar5 == 0) {
      return ar6;
    }
  } while( true );
}

__asm__(".globl _FUN_8c25c868\n.set _FUN_8c25c868, _FUN_8c25c868_def\n");
