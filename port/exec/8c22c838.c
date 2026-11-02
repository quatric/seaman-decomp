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
double * FUN_8c22c838_def(short *ar4,float ar5,uint ar6,double *ar7)

{
  ring[rp++ & 255] = "FUN_8c22c838";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 76; for (int i_ = 0; i_ < 76; i_++) z_[i_] = 0; }
  bool bVar1;
  short *psVar2;
  double *pdVar3;
  double *pdVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  double *ar6_00;
  short *psVar9;
  double *ar5_00;
  float fVar10;
  double in_dr0 = 0;
  double dVar11;
  undefined4 uVar12;
  double in_dr4 = 0;
  float fVar14;
  double dVar13;
  undefined4 uVar15;
  undefined4 uVar16;
  double in_dr6 = 0;
  float fVar17;
  undefined4 uVar18;
  double in_dr8 = 0;
  double dVar19;
  undefined4 uVar21;
  double in_dr12 = 0;
  float fVar22;
  double in_dr14 = 0;
  double in_xd0 = 0;
  double in_xd2 = 0;
  double in_xd4 = 0;
  double in_xd6 = 0;
  double dVar23;
  double in_xd12 = 0;
  bool bVar24;
  char cVar25;
  char cVar26;
  undefined4 uVar20;
  
  cVar26 = '\0';
  cVar25 = '\0';
  fVar14 = F32HI(in_dr4);
  (*(uint *)(fr0_ - 0x3c)) = ar6 & 0x3fff;
  iVar6 = 0;
  (*(float *)(fr0_ - 0x34)) = 1.0;
  iVar7 = 0;
  (*(unsigned *)(fr0_ - 0x4c) = (unsigned)(unsigned long)(ar4));
  (*(float *)(fr0_ - 0x40)) = ar5;
  if (((*(undefined4 *)(unsigned)(unsigned)0x8c4aa4f0) & 0x80000000) != 0) {
    (*(float *)(fr0_ - 0x34)) = -1.0;
  }
  do {
    fVar22 = F32LO(in_dr14);
    iVar8 = (int)*((short *)(unsigned long)*(unsigned *)(fr0_ - 0x4c));
    pdVar3 = (double *)(unsigned)(((short *)(unsigned long)*(unsigned *)(fr0_ - 0x4c))[1] * 0x20 + (int)(*(float *)(fr0_ - 0x40)));
    if (cVar26 == '\0') {
      fVar22 = (*(float *)(fr0_ - 0x34));
    }
    if (iVar8 < 0) {
      fVar22 = -fVar22;
      iVar8 = -iVar8;
    }
    iVar7 = iVar7 + iVar8;
    iVar8 = iVar8 + -2;
    if (cVar26 == '\0') {
      in_dr6 = CONCAT44D(fVar14,SUB84(in_dr6,0));
    }
    else {
      in_dr6 = CONCAT44D((*(float *)(fr0_ - 0x44)),fVar14);
    }
    iVar5 = 0;
    dVar13 = in_xd2;
    if (cVar26 == '\0') {
      dVar13 = CONCAT44D((float)(int)((short *)(unsigned long)*(unsigned *)(fr0_ - 0x4c))[2],SUB84(in_dr4,0));
    }
    psVar9 = ((short *)(unsigned long)*(unsigned *)(fr0_ - 0x4c)) + 5;
    fVar17 = F32HI(in_dr6);
    if (cVar25 == '\0') {
      dVar13 = CONCAT44D(F32HI(dVar13) * fVar17,SUB84(dVar13,0));
    }
    else {
      dVar13 = dVar13 * in_dr6;
    }
    dVar19 = in_xd2;
    if (cVar26 == '\0') {
      dVar13 = CONCAT44D((int)(D2U(dVar13) >> 0x20),(float)(int)((short *)(unsigned long)*(unsigned *)(fr0_ - 0x4c))[3]);
      dVar19 = in_xd4;
    }
    in_xd4 = dVar19;
    if (cVar25 == '\0') {
      in_dr4 = CONCAT44D((int)(D2U(dVar13) >> 0x20),F32LO(dVar13) * fVar17);
    }
    else {
      in_dr4 = dVar13 * in_dr6;
    }
    ar5_00 = (double *)(unsigned)(((short *)(unsigned long)*(unsigned *)(fr0_ - 0x4c))[4] * 0x20 + (int)(*(float *)(fr0_ - 0x40)));
    psVar2 = ((short *)(unsigned long)*(unsigned *)(fr0_ - 0x4c)) + 6;
    (*(unsigned *)(fr0_ - 0x4c) = (unsigned)(unsigned long)(((short *)(unsigned long)*(unsigned *)(fr0_ - 0x4c)) + 7));
    dVar13 = in_xd2;
    if (cVar26 == '\0') {
      dVar13 = CONCAT44D((float)(int)*psVar9,fVar22);
    }
    if (cVar25 == '\0') {
      in_dr14 = CONCAT44D(F32HI(dVar13) * fVar17,SUB84(dVar13,0));
    }
    else {
      in_dr14 = dVar13 * in_dr6;
    }
    dVar13 = in_xd2;
    if (cVar26 == '\0') {
      in_dr12 = CONCAT44D((int)((ulonglong)in_dr12 >> 0x20),(float)(int)*psVar2);
      dVar13 = in_xd12;
    }
    dVar19 = in_xd0;
    if (cVar25 == '\0') {
      in_dr12 = (double)(ulonglong)(uint)(F32LO(in_dr12) * fVar17);
    }
    else {
      in_dr12 = in_dr12 * in_dr6;
    }
    do {
      ar6_00 = (double *)(unsigned)(*((short *)(unsigned long)*(unsigned *)(fr0_ - 0x4c)) * 0x20 + (int)(*(float *)(fr0_ - 0x40)));
      if (cVar26 == '\0') {
        (*(float *)(fr0_ - 0x44)) = fVar14;
      }
      dVar11 = CONCAT44D((*(float *)(fr0_ - 0x44)),(float)(int)((short *)(unsigned long)*(unsigned *)(fr0_ - 0x4c))[1]);
      if (cVar25 == '\0') {
        dVar11 = CONCAT44D((*(float *)(fr0_ - 0x44)),(float)(int)((short *)(unsigned long)*(unsigned *)(fr0_ - 0x4c))[1] * (*(float *)(fr0_ - 0x44)));
      }
      else {
        dVar11 = dVar11 * dVar11;
      }
      if (cVar26 == '\0') {
        (*(float *)(fr0_ - 0x44)) = SUB84(dVar11,0);
      }
      else {
        (*(float *)(fr0_ - 0x44)) = SUB84(in_xd2,0);
        (*(float *)(fr0_ - 0x40)) = F32HI(in_xd2);
      }
      fVar22 = F32HI(dVar11);
      uVar12 = (undefined4)((ulonglong)in_dr0 >> 0x20);
      in_dr0 = CONCAT44D(uVar12,(float)(int)((short *)(unsigned long)*(unsigned *)(fr0_ - 0x4c))[2]);
      dVar11 = dVar19;
      if (cVar26 == '\0') {
        dVar11 = CONCAT44D((float)(int)((short *)(unsigned long)*(unsigned *)(fr0_ - 0x4c))[2],SUB84(in_dr12,0));
      }
      if (cVar25 == '\0') {
        in_dr12 = CONCAT44D(F32HI(dVar11) * fVar22,SUB84(dVar11,0));
      }
      else {
        in_dr12 = dVar11 * CONCAT44D(fVar22,0x3f800000);
      }
      if (cVar26 == '\0') {
        dVar11 = CONCAT44D(*(undefined4 *)(unsigned)pdVar3,0x3f800000);
      }
      else {
        dVar11 = *pdVar3;
      }
      bVar1 = false;
      if (cVar25 != '\0' || F32HI(dVar11) <= SUB84(dVar11,0)) {
LAB_8c22c982:
        bVar1 = true;
        in_dr6 = CONCAT44D(0x3f800000,SUB84(in_dr6,0));
        in_xd0 = dVar19;
      }
      else {
        if (cVar26 == '\0') {
          dVar11 = CONCAT44D(*(undefined4 *)(unsigned)ar5_00,SUB84(dVar11,0));
        }
        else {
          dVar11 = *ar5_00;
        }
        if (cVar25 != '\0' || F32HI(dVar11) <= SUB84(dVar11,0))
        goto LAB_8c22c982;
        if (cVar26 == '\0') {
          fVar22 = *(float *)(unsigned)ar6_00;
        }
        else {
          fVar22 = (float)((ulonglong)*ar6_00 >> 0x20);
        }
        dVar11 = CONCAT44D(fVar22,0x3f800000);
        if (cVar25 != '\0' || fVar22 <= 1.0) goto LAB_8c22c982;
        if (cVar26 == '\0') {
          fVar22 = *(float *)(unsigned)((int)ar5_00 + 4);
          dVar11 = CONCAT44D(fVar22,*(undefined4 *)(unsigned)((int)pdVar3 + 4));
          in_dr8 = CONCAT44D(fVar22,SUB84(in_dr8,0));
        }
        else {
          dVar11 = *(double *)(unsigned)((int)ar5_00 + 4);
          in_xd2 = *(double *)(unsigned)((int)pdVar3 + 4);
          fVar22 = F32HI(dVar11);
          in_dr8 = dVar11;
        }
        if (cVar25 == '\0') {
          dVar11 = CONCAT44D(F32HI(dVar11) - F32LO(dVar11),
                                    SUB84(dVar11,0));
        }
        else {
          dVar11 = dVar11 - dVar11;
        }
        if (cVar26 == '\0') {
          dVar11 = CONCAT44D((int)(D2U(dVar11) >> 0x20),*(undefined4 *)(unsigned)(ar6_00 + 1));
          in_dr6 = CONCAT44D((int)((ulonglong)in_dr6 >> 0x20),*(undefined4 *)(unsigned)(ar5_00 + 1));
        }
        else {
          in_xd2 = ar6_00[1];
          in_xd6 = ar5_00[1];
        }
        fVar17 = F32LO(in_dr6);
        if (cVar25 == '\0') {
          dVar11 = CONCAT44D((int)(D2U(dVar11) >> 0x20),F32LO(dVar11) - fVar17);
        }
        else {
          dVar11 = dVar11 - in_dr6;
        }
        in_xd0 = in_xd6;
        if (cVar26 == '\0') {
          in_dr0 = CONCAT44D(uVar12,fVar17);
          in_xd0 = dVar19;
        }
        if (cVar25 == '\0') {
          dVar11 = CONCAT44D(F32HI(dVar11) * F32LO(dVar11),
                                    SUB84(dVar11,0));
        }
        else {
          dVar11 = dVar11 * dVar11;
        }
        if (cVar26 == '\0') {
          dVar11 = CONCAT44D((int)(D2U(dVar11) >> 0x20),*(undefined4 *)(unsigned)(pdVar3 + 1));
        }
        else {
          in_xd2 = pdVar3[1];
        }
        if (cVar25 == '\0') {
          dVar19 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),
                                    F32LO(in_dr0) - F32LO(dVar11));
        }
        else {
          dVar19 = in_dr0 - dVar11;
        }
        if (cVar26 == '\0') {
          dVar11 = CONCAT44D((int)(D2U(dVar11) >> 0x20),
                                    *(undefined4 *)(unsigned)((int)ar6_00 + 4));
        }
        else {
          in_xd2 = *(double *)(unsigned)((int)ar6_00 + 4);
        }
        if (cVar25 == '\0') {
          fVar22 = F32LO(dVar11) - fVar22;
          fVar10 = F32LO(dVar19) * fVar22;
          in_dr0 = CONCAT44D((int)(D2U(dVar19) >> 0x20),fVar10);
          dVar11 = CONCAT44D(F32HI(dVar11) - fVar10,fVar22);
        }
        else {
          in_dr0 = dVar19 * (dVar11 - in_dr8);
          dVar11 = (dVar11 - in_dr8) - in_dr0;
        }
        dVar19 = dVar11;
        if (cVar26 == '\0') {
          dVar19 = CONCAT44D((int)(D2U(dVar11) >> 0x20),fVar17);
        }
        if (cVar25 == '\0') {
          in_dr6 = CONCAT44D(F32HI(dVar19) * F32LO(in_dr14),
                                    SUB84(dVar19,0));
        }
        else {
          in_dr6 = dVar19 * in_dr14;
        }
      }
      if (cVar25 == '\0') {
        bVar24 = F32HI(in_dr6) < 0.0;
      }
      else {
        bVar24 = in_dr6 < (double)(D2U(dVar11) & 0xffffffff00000000);
      }
      uVar16 = (undefined4)((ulonglong)in_dr14 >> 0x20);
      uVar12 = SUB84(in_dr12,0);
      if (bVar24) {
        if (iVar5 == 0) {
          if (cVar26 == '\0') {
            uVar21 = *(undefined4 *)(unsigned)((int)pdVar3 + 4);
            uVar18 = *(undefined4 *)(unsigned)(pdVar3 + 1);
            uVar20 = *(undefined4 *)(unsigned)((int)pdVar3 + 0xc);
            uVar15 = *(undefined4 *)(unsigned)(pdVar3 + 2);
            *(undefined4 *)(unsigned)((int)ar7 + 0x1c) = *(undefined4 *)(unsigned)((int)pdVar3 + 0x14);
            *(undefined4 *)(unsigned)(ar7 + 3) = uVar15;
            *(int *)(unsigned)((int)ar7 + 0x14) = SUB84(in_dr4,0);
            *(int *)(unsigned)(ar7 + 2) = (int)((ulonglong)in_dr4 >> 0x20);
            *(undefined4 *)(unsigned)((int)ar7 + 0xc) = uVar20;
            *(undefined4 *)(unsigned)(ar7 + 1) = uVar18;
            pdVar4 = (double *)(unsigned)((int)ar7 + 4);
            *(undefined4 *)(unsigned)pdVar4 = uVar21;
          }
          else {
            dVar11 = *(double *)(unsigned)((int)pdVar3 + 4);
            dVar23 = *(double *)(unsigned)((int)pdVar3 + 0xc);
            dVar19 = *(double *)(unsigned)((int)pdVar3 + 0x14);
            in_xd6 = *(double *)(unsigned)((int)pdVar3 + 0x1c);
            ar7[3] = *(double *)(unsigned)((int)pdVar3 + 0x24);
            ar7[2] = in_xd6;
            ar7[1] = in_xd4;
            *ar7 = in_dr4;
            ar7[-1] = dVar19;
            ar7[-2] = dVar23;
            pdVar4 = ar7 + -3;
            *pdVar4 = dVar11;
          }
          *(undefined4 *)(unsigned)((int)pdVar4 + -4) = 0xe0000000;
          iVar5 = 1;
          ar7 = (double *)(unsigned)((int)pdVar4 + 0x1c);
        }
        if (cVar26 == '\0') {
          uVar18 = *(undefined4 *)(unsigned)((int)ar5_00 + 4);
          uVar21 = *(undefined4 *)(unsigned)(ar5_00 + 1);
          uVar15 = *(undefined4 *)(unsigned)((int)ar5_00 + 0xc);
          uVar20 = *(undefined4 *)(unsigned)(ar5_00 + 2);
          in_dr8 = CONCAT44D(uVar20,uVar18);
          in_dr6 = CONCAT44D(*(undefined4 *)(unsigned)((int)ar5_00 + 0x14),uVar15);
          *(undefined4 *)(unsigned)((int)ar7 + 0x1c) = *(undefined4 *)(unsigned)((int)ar5_00 + 0x14);
          *(undefined4 *)(unsigned)(ar7 + 3) = uVar20;
          *(undefined4 *)(unsigned)((int)ar7 + 0x14) = uVar12;
          *(undefined4 *)(unsigned)(ar7 + 2) = uVar16;
          *(undefined4 *)(unsigned)((int)ar7 + 0xc) = uVar15;
          *(undefined4 *)(unsigned)(ar7 + 1) = uVar21;
          pdVar4 = (double *)(unsigned)((int)ar7 + 4);
          *(undefined4 *)(unsigned)pdVar4 = uVar18;
        }
        else {
          dVar11 = *(double *)(unsigned)((int)ar5_00 + 4);
          dVar19 = *(double *)(unsigned)((int)ar5_00 + 0xc);
          in_xd6 = *(double *)(unsigned)((int)ar5_00 + 0x14);
          in_dr8 = *(double *)(unsigned)((int)ar5_00 + 0x1c);
          in_dr6 = *(double *)(unsigned)((int)ar5_00 + 0x24);
          ar7[3] = in_dr6;
          ar7[2] = in_dr8;
          ar7[1] = dVar13;
          *ar7 = in_dr14;
          ar7[-1] = in_xd6;
          ar7[-2] = dVar19;
          pdVar4 = ar7 + -3;
          *pdVar4 = dVar11;
        }
        *(undefined4 *)(unsigned)((int)pdVar4 + -4) = 0xe0000000;
        ar7 = (double *)(unsigned)((int)pdVar4 + 0x1c);
        iVar5 = iVar5 + 1;
      }
      else if (iVar5 != 0) {
        if (cVar26 == '\0') {
          uVar18 = *(undefined4 *)(unsigned)((int)ar5_00 + 4);
          uVar21 = *(undefined4 *)(unsigned)(ar5_00 + 1);
          uVar20 = *(undefined4 *)(unsigned)((int)ar5_00 + 0xc);
          in_dr8 = CONCAT44D(uVar20,uVar18);
          uVar15 = *(undefined4 *)(unsigned)(ar5_00 + 2);
          in_dr6 = ar5_00[2];
          *(undefined4 *)(unsigned)((int)ar7 + 0x1c) = *(undefined4 *)(unsigned)((int)ar5_00 + 0x14);
          *(undefined4 *)(unsigned)(ar7 + 3) = uVar15;
          *(undefined4 *)(unsigned)((int)ar7 + 0x14) = uVar12;
          *(undefined4 *)(unsigned)(ar7 + 2) = uVar16;
          *(undefined4 *)(unsigned)((int)ar7 + 0xc) = uVar20;
          *(undefined4 *)(unsigned)(ar7 + 1) = uVar21;
          pdVar4 = (double *)(unsigned)((int)ar7 + 4);
          *(undefined4 *)(unsigned)pdVar4 = uVar18;
        }
        else {
          dVar11 = *(double *)(unsigned)((int)ar5_00 + 4);
          dVar19 = *(double *)(unsigned)((int)ar5_00 + 0xc);
          in_dr8 = *(double *)(unsigned)((int)ar5_00 + 0x14);
          in_xd6 = *(double *)(unsigned)((int)ar5_00 + 0x1c);
          in_dr6 = *(double *)(unsigned)((int)ar5_00 + 0x24);
          ar7[3] = in_dr6;
          ar7[2] = in_xd6;
          ar7[1] = dVar13;
          *ar7 = in_dr14;
          ar7[-1] = in_dr8;
          ar7[-2] = dVar19;
          pdVar4 = ar7 + -3;
          *pdVar4 = dVar11;
        }
        *(undefined4 *)(unsigned)((int)pdVar4 + -4) = 0xf0000000;
        iVar6 = iVar6 + iVar5 + 1;
        iVar5 = 0;
        ar7 = (double *)(unsigned)((int)pdVar4 + 0x1c);
      }
      if (bVar1) {
        if (cVar26 == '\0') {
          fVar22 = *(float *)(unsigned)pdVar3;
        }
        else {
          fVar22 = (float)((ulonglong)*pdVar3 >> 0x20);
        }
        if (cVar25 != '\0' || fVar22 <= 1.0) {
          if (cVar26 == '\0') {
            dVar19 = CONCAT44D(*(undefined4 *)(unsigned)ar5_00,0x3f800000);
          }
          else {
            dVar19 = *ar5_00;
          }
          if (cVar25 != '\0' || F32HI(dVar19) <= SUB84(dVar19,0)) {
            if (cVar26 == '\0') {
              fVar22 = *(float *)(unsigned)ar6_00;
            }
            else {
              fVar22 = (float)((ulonglong)*ar6_00 >> 0x20);
            }
            if (cVar25 != '\0' || fVar22 <= 1.0) goto LAB_8c22ca7a;
          }
        }
        if (cVar26 == '\0') {
          in_dr8 = (double)((ulonglong)in_dr12 >> 0x20);
          in_dr6 = CONCAT44D(uVar16,uVar12);
        }
        else {
          in_dr8 = CONCAT44D((*(float *)(fr0_ - 0x40)),(*(float *)(fr0_ - 0x44)));
          in_dr6 = in_dr14;
          in_xd6 = dVar13;
        }
        ar7 = (double *)(unsigned)(vsp = ((unsigned long)(fr0_ - 76)), FUN_8c22ed60(pdVar3,ar5_00,ar6_00,ar7));
      }
LAB_8c22ca7a:
      (*(unsigned *)(fr0_ - 0x4c) = (unsigned)(unsigned long)(((short *)(unsigned long)*(unsigned *)(fr0_ - 0x4c)) + (ar6 >> 0xe & 3) + 3));
      dVar19 = in_dr14;
      fVar22 = (*(float *)(fr0_ - 0x44));
      fVar17 = (*(float *)(fr0_ - 0x40));
      if (cVar26 == '\0') {
        dVar19 = CONCAT44D((int)((ulonglong)in_dr14 >> 0x20),SUB84(in_dr4,0));
        fVar22 = F32LO(in_dr14);
        fVar17 = (*(float *)(fr0_ - 0x44));
      }
      iVar8 = iVar8 + -1;
      in_dr14 = CONCAT44D(fVar17,-fVar22);
      in_xd12 = in_dr12;
      in_dr4 = dVar19;
      if (cVar26 == '\0') {
        uVar12 = SUB84(in_dr12,0);
        uVar16 = (undefined4)((ulonglong)in_dr12 >> 0x20);
        in_dr12 = CONCAT44D(uVar16,uVar16);
        in_xd12 = dVar13;
        in_dr4 = CONCAT44D((int)(D2U(dVar19) >> 0x20),uVar12);
        dVar13 = in_xd4;
      }
      in_xd4 = dVar13;
      pdVar3 = ar5_00;
      ar5_00 = ar6_00;
      dVar19 = in_xd0;
      dVar13 = in_xd12;
    } while (iVar8 != 0);
    if (iVar5 != 0) {
      if (cVar26 == '\0') {
        uVar15 = *(undefined4 *)(unsigned)((int)ar6_00 + 4);
        uVar12 = *(undefined4 *)(unsigned)(ar6_00 + 1);
        uVar16 = *(undefined4 *)(unsigned)((int)ar6_00 + 0xc);
        in_dr6 = CONCAT44D(uVar15,uVar16);
        uVar18 = *(undefined4 *)(unsigned)(ar6_00 + 2);
        in_dr8 = CONCAT44D(uVar18,SUB84(in_dr8,0));
        in_dr4 = CONCAT44D(*(undefined4 *)(unsigned)((int)ar6_00 + 0x14),uVar12);
        *(undefined4 *)(unsigned)((int)ar7 + 0x1c) = *(undefined4 *)(unsigned)((int)ar6_00 + 0x14);
        *(undefined4 *)(unsigned)(ar7 + 3) = uVar18;
        *(int *)(unsigned)((int)ar7 + 0x14) = (int)((ulonglong)in_dr12 >> 0x20);
        *(float *)(unsigned)(ar7 + 2) = (*(float *)(fr0_ - 0x44));
        *(undefined4 *)(unsigned)((int)ar7 + 0xc) = uVar16;
        *(undefined4 *)(unsigned)(ar7 + 1) = uVar12;
        pdVar3 = (double *)(unsigned)((int)ar7 + 4);
        *(undefined4 *)(unsigned)pdVar3 = uVar15;
      }
      else {
        in_dr6 = *(double *)(unsigned)((int)ar6_00 + 4);
        in_xd4 = *(double *)(unsigned)((int)ar6_00 + 0xc);
        in_xd6 = *(double *)(unsigned)((int)ar6_00 + 0x14);
        in_dr8 = *(double *)(unsigned)((int)ar6_00 + 0x1c);
        in_dr4 = *(double *)(unsigned)((int)ar6_00 + 0x24);
        ar7[3] = in_dr4;
        ar7[2] = in_dr8;
        ar7[1] = in_dr12;
        in_xd2 = CONCAT44D((*(float *)(fr0_ - 0x40)),(*(float *)(fr0_ - 0x44)));
        *ar7 = in_xd2;
        ar7[-1] = in_xd6;
        ar7[-2] = in_xd4;
        pdVar3 = ar7 + -3;
        *pdVar3 = in_dr6;
      }
      *(undefined4 *)(unsigned)((int)pdVar3 + -4) = 0xf0000000;
      iVar6 = iVar6 + iVar5 + 1;
      ar7 = (double *)(unsigned)((int)pdVar3 + 0x1c);
    }
    (*(uint *)(fr0_ - 0x3c)) = (*(uint *)(fr0_ - 0x3c)) - 1;
    if ((*(uint *)(fr0_ - 0x3c)) == 0) {
      (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) + iVar6;
      (*(undefined4 *)(unsigned)(unsigned)0x8c4aa51c) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa51c) + iVar7;
      return ar7;
    }
  } while( true );
}

__asm__(".globl _FUN_8c22c838\n.set _FUN_8c22c838, _FUN_8c22c838_def\n");
