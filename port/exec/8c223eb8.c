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
double * FUN_8c223eb8_def(undefined4 ar4,undefined4 ar5,uint ar6,double *ar7)

{
  ring[rp++ & 255] = "FUN_8c223eb8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 104; for (int i_ = 0; i_ < 104; i_++) z_[i_] = 0; }
  short sVar1;
  short sVar2;
  bool bVar3;
  short *psVar4;
  double *pdVar5;
  double *pdVar6;
  double *pdVar7;
  double *pdVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  short *psVar12;
  int iVar13;
  double *pdVar14;
  double *a5;
  undefined4 *puVar15;
  int *piVar16;
  double in_dr0 = 0;
  float fVar17;
  float fVar18;
  float fVar21;
  double dVar19;
  undefined8 uVar20;
  double in_dr4 = 0;
  double dVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  double in_dr6 = 0;
  double dVar25;
  undefined4 uVar27;
  double in_dr8 = 0;
  undefined4 uVar29;
  double dVar28;
  undefined4 uVar30;
  double in_dr10 = 0;
  float fVar31;
  double in_dr12 = 0;
  double in_dr14 = 0;
  double in_xd0 = 0;
  double dVar32;
  double in_xd2 = 0;
  double in_xd4 = 0;
  double in_xd6 = 0;
  double in_xd8 = 0;
  double in_xd10 = 0;
  double in_xd12 = 0;
  bool bVar33;
  char cVar34;
  char cVar35;
  undefined4 uVar26;
  
  cVar35 = '\0';
  cVar34 = '\0';
  (*(undefined4 *)(fr0_ - 0x20)) = (int)((ulonglong)in_dr14 >> 0x20);
  (*(undefined4 *)(fr0_ - 0x24)) = SUB84(in_dr12,0);
  (*(undefined4 *)(fr0_ - 0x28)) = (int)((ulonglong)in_dr12 >> 0x20);
  piVar16 = &(*(undefined4 *)(fr0_ - 0x68));
  (*(undefined4 *)(fr0_ - 0x68)) = ar4;
  (*(undefined4 *)(fr0_ - 0x3c)) = ar5;
  (*(undefined4 *)(fr0_ - 0x64)) = (int)((ulonglong)in_dr4 >> 0x20);
  (*(undefined4 *)(fr0_ - 0x60)) = SUB84(in_dr4,0);
  (*(undefined4 *)(fr0_ - 0x5c)) = (int)((ulonglong)in_dr6 >> 0x20);
  (*(undefined4 *)(fr0_ - 0x54)) = SUB84(in_dr6,0);
  (*(undefined4 *)(fr0_ - 0x4c)) = (int)((ulonglong)in_dr8 >> 0x20);
  (*(undefined4 *)(fr0_ - 0x58)) = SUB84(in_dr8,0);
  (*(undefined4 *)(fr0_ - 0x50)) = (int)((ulonglong)in_dr10 >> 0x20);
  (*(undefined4 *)(fr0_ - 0x48)) = SUB84(in_dr10,0);
  (*(uint *)(fr0_ - 0x38)) = ar6 & 0x3fff;
  iVar10 = 0;
  (*(undefined4 *)(fr0_ - 0x30)) = 0x3f800000;
  iVar11 = 0;
  if (((*(undefined4 *)(unsigned)(unsigned)0x8c4aa4f0) & 0x80000000) != 0) {
    (*(undefined4 *)(fr0_ - 0x30)) = 0xbf800000;
  }
  (*(int *)(fr0_ - 0x34)) = (ar6 >> 0xe & 3) << 1;
  do {
    psVar12 = (short *)(unsigned)*piVar16;
    *piVar16 = (int)(psVar12 + 1);
    psVar4 = (short *)(unsigned)*piVar16;
    iVar13 = (int)*psVar12;
    *piVar16 = (int)(psVar4 + 1);
    pdVar5 = (double *)(unsigned)(*psVar4 * 0x40 + piVar16[0xb]);
    if (cVar35 == '\0') {
      in_dr14 = CONCAT44D(piVar16[0xe],SUB84(in_dr14,0));
    }
    else {
      in_dr14 = *(double *)(unsigned)(piVar16 + 0xe);
    }
    if (iVar13 < 0) {
      if (cVar34 == '\0') {
        in_dr14 = CONCAT44D(-F32HI(in_dr14),SUB84(in_dr14,0));
      }
      else {
        in_dr14 = -in_dr14;
      }
      iVar13 = -iVar13;
    }
    psVar4 = (short *)(unsigned)*piVar16;
    iVar11 = iVar11 + iVar13;
    *piVar16 = (int)(psVar4 + 1);
    sVar1 = *psVar4;
    iVar13 = iVar13 + -2;
    if (cVar35 == '\0') {
      in_dr6 = CONCAT44D(piVar16[1],SUB84(in_dr6,0));
    }
    else {
      in_dr6 = *(double *)(unsigned)(piVar16 + 1);
    }
    iVar9 = 0;
    psVar4 = (short *)(unsigned)*piVar16;
    *piVar16 = (int)(psVar4 + 1);
    sVar2 = *psVar4;
    psVar4 = (short *)(unsigned)*piVar16;
    dVar22 = in_xd2;
    if (cVar35 == '\0') {
      dVar22 = CONCAT44D((float)(int)sVar1,SUB84(in_dr4,0));
    }
    *piVar16 = (int)(psVar4 + 1);
    fVar21 = F32HI(in_dr6);
    if (cVar34 == '\0') {
      dVar22 = CONCAT44D(F32HI(dVar22) * fVar21,SUB84(dVar22,0));
    }
    else {
      dVar22 = dVar22 * in_dr6;
    }
    dVar19 = in_xd2;
    if (cVar35 == '\0') {
      dVar22 = CONCAT44D((int)(D2U(dVar22) >> 0x20),(float)(int)sVar2);
      dVar19 = in_xd4;
    }
    in_xd4 = dVar19;
    if (cVar34 == '\0') {
      in_dr4 = CONCAT44D((int)(D2U(dVar22) >> 0x20),F32LO(dVar22) * fVar21);
    }
    else {
      in_dr4 = dVar22 * in_dr6;
    }
    a5 = (double *)(unsigned)(*psVar4 * 0x40 + piVar16[0xb]);
    psVar4 = (short *)(unsigned)*piVar16;
    *piVar16 = (int)(psVar4 + 1);
    sVar1 = *psVar4;
    psVar4 = (short *)(unsigned)*piVar16;
    *piVar16 = (int)(psVar4 + 1);
    dVar22 = in_xd2;
    if (cVar35 == '\0') {
      in_dr12 = CONCAT44D((int)((ulonglong)in_dr12 >> 0x20),(float)(int)sVar1);
      dVar22 = in_xd12;
    }
    if (cVar34 == '\0') {
      fVar31 = F32LO(in_dr12) * fVar21;
    }
    else {
      fVar31 = SUB84(in_dr12 * in_dr6,0);
    }
    dVar19 = in_xd2;
    if (cVar35 == '\0') {
      dVar19 = CONCAT44D((float)(int)*psVar4,fVar31);
    }
    dVar25 = in_xd0;
    if (cVar34 == '\0') {
      in_dr12 = CONCAT44D(F32HI(dVar19) * fVar21,SUB84(dVar19,0));
    }
    else {
      in_dr12 = dVar19 * in_dr6;
    }
    do {
      uVar30 = SUB84(in_dr10,0);
      psVar4 = (short *)(unsigned)*piVar16;
      *piVar16 = (int)(psVar4 + 1);
      pdVar14 = (double *)(unsigned)(*psVar4 * 0x40 + piVar16[0xb]);
      psVar4 = (short *)(unsigned)*piVar16;
      *piVar16 = (int)(psVar4 + 1);
      if (cVar35 == '\0') {
        fVar21 = (float)(uint)piVar16[1];
      }
      else {
        fVar21 = (float)((ulonglong)*(undefined8 *)(unsigned)(piVar16 + 1) >> 0x20);
      }
      fVar31 = (float)(int)*psVar4;
      dVar19 = CONCAT44D(fVar21,fVar31);
      if (cVar34 == '\0') {
        dVar19 = CONCAT44D(fVar21,fVar31 * fVar21);
      }
      else {
        dVar19 = dVar19 * dVar19;
      }
      if (cVar35 == '\0') {
        piVar16[10] = SUB84(dVar19,0);
      }
      else {
        *(double *)(unsigned)(piVar16 + 10) = in_xd2;
      }
      psVar4 = (short *)(unsigned)*piVar16;
      fVar31 = F32HI(dVar19);
      *piVar16 = (int)(psVar4 + 1);
      uVar23 = (undefined4)((ulonglong)in_dr0 >> 0x20);
      fVar21 = (float)(int)*psVar4;
      if (cVar34 == '\0') {
        in_dr0 = CONCAT44D(uVar23,fVar21 * fVar31);
      }
      else {
        in_dr0 = CONCAT44D(uVar23,fVar21) * CONCAT44D(fVar31,0x3f800000);
      }
      if (cVar35 == '\0') {
        piVar16[9] = SUB84(in_dr0,0);
        dVar19 = CONCAT44D(*(undefined4 *)(unsigned)pdVar5,0x3f800000);
      }
      else {
        *(double *)(unsigned)(piVar16 + 9) = dVar25;
        dVar19 = *pdVar5;
      }
      bVar3 = false;
      fVar21 = F32HI(in_dr14);
      if (cVar34 != '\0' || F32HI(dVar19) <= SUB84(dVar19,0)) {
LAB_8c22401e:
        bVar3 = true;
        in_dr6 = CONCAT44D(0x3f800000,SUB84(in_dr6,0));
        in_xd0 = dVar25;
      }
      else {
        if (cVar35 == '\0') {
          dVar19 = CONCAT44D(*(undefined4 *)(unsigned)a5,SUB84(dVar19,0));
        }
        else {
          dVar19 = *a5;
        }
        if (cVar34 != '\0' || F32HI(dVar19) <= SUB84(dVar19,0))
        goto LAB_8c22401e;
        if (cVar35 == '\0') {
          fVar31 = *(float *)(unsigned)pdVar14;
        }
        else {
          fVar31 = (float)((ulonglong)*pdVar14 >> 0x20);
        }
        dVar19 = CONCAT44D(fVar31,0x3f800000);
        if (cVar34 != '\0' || fVar31 <= 1.0) goto LAB_8c22401e;
        if (cVar35 == '\0') {
          fVar31 = *(float *)(unsigned)((int)a5 + 4);
          dVar19 = CONCAT44D(fVar31,*(undefined4 *)(unsigned)((int)pdVar5 + 4));
          in_dr8 = CONCAT44D(fVar31,SUB84(in_dr8,0));
        }
        else {
          dVar19 = *(double *)(unsigned)((int)a5 + 4);
          in_xd2 = *(double *)(unsigned)((int)pdVar5 + 4);
          fVar31 = F32HI(dVar19);
          in_dr8 = dVar19;
        }
        if (cVar34 == '\0') {
          dVar19 = CONCAT44D(F32HI(dVar19) - F32LO(dVar19),
                                    SUB84(dVar19,0));
        }
        else {
          dVar19 = dVar19 - dVar19;
        }
        if (cVar35 == '\0') {
          dVar19 = CONCAT44D((int)(D2U(dVar19) >> 0x20),*(undefined4 *)(unsigned)(pdVar14 + 1));
          in_dr6 = CONCAT44D((int)((ulonglong)in_dr6 >> 0x20),*(undefined4 *)(unsigned)(a5 + 1));
        }
        else {
          in_xd2 = pdVar14[1];
          in_xd6 = a5[1];
        }
        fVar18 = F32LO(in_dr6);
        if (cVar34 == '\0') {
          dVar19 = CONCAT44D((int)(D2U(dVar19) >> 0x20),F32LO(dVar19) - fVar18);
        }
        else {
          dVar19 = dVar19 - in_dr6;
        }
        in_xd0 = in_xd6;
        if (cVar35 == '\0') {
          in_dr0 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),fVar18);
          in_xd0 = dVar25;
        }
        if (cVar34 == '\0') {
          dVar19 = CONCAT44D(F32HI(dVar19) * F32LO(dVar19),
                                    SUB84(dVar19,0));
        }
        else {
          dVar19 = dVar19 * dVar19;
        }
        if (cVar35 == '\0') {
          dVar19 = CONCAT44D((int)(D2U(dVar19) >> 0x20),*(undefined4 *)(unsigned)(pdVar5 + 1));
        }
        else {
          in_xd2 = pdVar5[1];
        }
        if (cVar34 == '\0') {
          dVar25 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),
                                    F32LO(in_dr0) - F32LO(dVar19));
        }
        else {
          dVar25 = in_dr0 - dVar19;
        }
        if (cVar35 == '\0') {
          dVar19 = CONCAT44D((int)(D2U(dVar19) >> 0x20),
                                    *(undefined4 *)(unsigned)((int)pdVar14 + 4));
        }
        else {
          in_xd2 = *(double *)(unsigned)((int)pdVar14 + 4);
        }
        if (cVar34 == '\0') {
          fVar31 = F32LO(dVar19) - fVar31;
          fVar17 = F32LO(dVar25) * fVar31;
          in_dr0 = CONCAT44D((int)(D2U(dVar25) >> 0x20),fVar17);
          dVar19 = CONCAT44D(F32HI(dVar19) - fVar17,fVar31);
        }
        else {
          in_dr0 = dVar25 * (dVar19 - in_dr8);
          dVar19 = (dVar19 - in_dr8) - in_dr0;
        }
        dVar25 = dVar19;
        if (cVar35 == '\0') {
          dVar25 = CONCAT44D((int)(D2U(dVar19) >> 0x20),fVar18);
        }
        if (cVar34 == '\0') {
          in_dr6 = CONCAT44D(F32HI(dVar25) * fVar21,SUB84(dVar25,0));
        }
        else {
          in_dr6 = dVar25 * in_dr14;
        }
      }
      dVar19 = (double)(D2U(dVar19) & 0xffffffff00000000);
      if (cVar34 == '\0') {
        bVar33 = F32HI(in_dr6) < 0.0;
      }
      else {
        bVar33 = in_dr6 < dVar19;
      }
      uVar23 = SUB84(in_dr12,0);
      uVar27 = (undefined4)((ulonglong)in_dr12 >> 0x20);
      if (bVar33) {
        if (iVar9 == 0) {
          if (cVar35 == '\0') {
            uVar26 = *(undefined4 *)(unsigned)((int)pdVar5 + 4);
            uVar29 = *(undefined4 *)(unsigned)(pdVar5 + 1);
            dVar19 = CONCAT44D(uVar29,SUB84(in_dr8,0));
            uVar24 = *(undefined4 *)(unsigned)((int)pdVar5 + 0xc);
            pdVar6 = pdVar5 + 2;
            *(int *)(unsigned)((int)ar7 + 0x14) = SUB84(in_dr4,0);
            *(int *)(unsigned)(ar7 + 2) = (int)((ulonglong)in_dr4 >> 0x20);
            *(undefined4 *)(unsigned)((int)ar7 + 0xc) = uVar24;
            *(undefined4 *)(unsigned)(ar7 + 1) = uVar29;
            pdVar8 = (double *)(unsigned)((int)ar7 + 4);
            *(undefined4 *)(unsigned)pdVar8 = uVar26;
          }
          else {
            dVar25 = *(double *)(unsigned)((int)pdVar5 + 4);
            dVar19 = *(double *)(unsigned)((int)pdVar5 + 0xc);
            in_xd6 = *(double *)(unsigned)((int)pdVar5 + 0x14);
            pdVar6 = (double *)(unsigned)((int)pdVar5 + 0x1c);
            ar7[2] = in_xd4;
            ar7[1] = in_dr4;
            *ar7 = in_xd6;
            ar7[-1] = dVar19;
            pdVar8 = ar7 + -2;
            *pdVar8 = dVar25;
          }
          uVar24 = SUB84(dVar19,0);
          *(undefined4 *)(unsigned)((int)pdVar8 + -4) = 0xe0000000;
          if (cVar35 == '\0') {
            dVar19 = (double)((ulonglong)*(uint *)(unsigned)pdVar6 << 0x20);
            pdVar6 = (double *)(unsigned)((int)pdVar6 + 4);
            in_dr0 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),piVar16[2]);
            uVar30 = piVar16[4];
          }
          else {
            dVar19 = *pdVar6;
            pdVar6 = pdVar6 + 1;
            in_xd0 = *(double *)(unsigned)(piVar16 + 2);
            in_xd10 = *(double *)(unsigned)(piVar16 + 4);
          }
          if (cVar34 == '\0') {
            fVar31 = F32LO(in_dr0) * F32HI(dVar19);
          }
          else {
            fVar31 = SUB84(in_dr0 * dVar19,0);
          }
          if (cVar35 == '\0') {
            uVar20 = CONCAT44(piVar16[3],SUB84(dVar19,0));
            dVar19 = CONCAT44D(*(undefined4 *)(unsigned)pdVar6,fVar31);
            pdVar6 = (double *)(unsigned)((int)pdVar6 + 4);
            in_dr10 = CONCAT44D(piVar16[6],uVar30);
          }
          else {
            uVar20 = *(undefined8 *)(unsigned)(piVar16 + 3);
            dVar19 = *pdVar6;
            pdVar6 = pdVar6 + 1;
            in_dr10 = *(double *)(unsigned)(piVar16 + 6);
          }
          if (cVar34 == '\0') {
            in_dr10 = CONCAT44D((int)((ulonglong)in_dr10 >> 0x20),
                                       F32HI(dVar19) *
                                       F32HI(uVar20) + F32LO(in_dr10));
          }
          if (cVar35 == '\0') {
            uVar20 = CONCAT44(piVar16[5],(int)uVar20);
            dVar19 = CONCAT44D(*(undefined4 *)(unsigned)pdVar6,SUB84(dVar19,0));
            pdVar6 = (double *)(unsigned)((int)pdVar6 + 4);
            uVar24 = piVar16[8];
          }
          else {
            uVar20 = *(undefined8 *)(unsigned)(piVar16 + 5);
            dVar19 = *pdVar6;
            pdVar6 = pdVar6 + 1;
            in_xd8 = *(double *)(unsigned)(piVar16 + 8);
          }
          if (cVar34 == '\0') {
            in_dr10 = CONCAT44D(F32HI(dVar19) *
                                       F32HI(uVar20) +
                                       F32HI(in_dr10),SUB84(in_dr10,0));
          }
          if (cVar35 == '\0') {
            in_dr0 = CONCAT44D(*(undefined4 *)(unsigned)pdVar6,SUB84(dVar19,0));
            pdVar6 = (double *)(unsigned)((int)pdVar6 + 4);
            dVar19 = CONCAT44D(piVar16[7],(int)uVar20);
          }
          else {
            in_dr0 = *pdVar6;
            pdVar6 = pdVar6 + 1;
            dVar19 = *(double *)(unsigned)(piVar16 + 7);
          }
          if (cVar35 == '\0') {
            in_dr8 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar6 + 0x14),uVar24);
            pdVar6 = pdVar6 + 3;
          }
          else {
            in_dr8 = *(double *)(unsigned)((int)pdVar6 + 0x14);
            pdVar6 = (double *)(unsigned)((int)pdVar6 + 0x1c);
          }
          if (cVar34 == '\0') {
            in_dr8 = CONCAT44D((int)((ulonglong)in_dr8 >> 0x20),
                                      F32HI(in_dr0) *
                                      F32HI(dVar19) + F32LO(in_dr8));
          }
          if (cVar35 == '\0') {
            uVar30 = *(undefined4 *)(unsigned)pdVar6;
            *(undefined4 *)(unsigned)(pdVar8 + 7) = *(undefined4 *)(unsigned)((int)pdVar6 + 4);
            *(undefined4 *)(unsigned)((int)pdVar8 + 0x34) = uVar30;
            *(int *)(unsigned)(pdVar8 + 6) = (int)((ulonglong)in_dr8 >> 0x20);
            *(int *)(unsigned)(pdVar8 + 5) = SUB84(in_dr8,0);
            *(int *)(unsigned)((int)pdVar8 + 0x24) = (int)((ulonglong)in_dr10 >> 0x20);
            *(int *)(unsigned)(pdVar8 + 4) = SUB84(in_dr10,0);
            pdVar8 = (double *)(unsigned)((int)pdVar8 + 0x1c);
            *(int *)(unsigned)pdVar8 = SUB84(in_dr0,0);
          }
          else {
            in_xd6 = *pdVar6;
            *(double *)(unsigned)((int)pdVar8 + 0x34) = pdVar6[1];
            *(double *)(unsigned)((int)pdVar8 + 0x2c) = in_xd6;
            *(double *)(unsigned)((int)pdVar8 + 0x24) = in_dr8;
            pdVar8[3] = in_xd8;
            pdVar8[2] = in_dr10;
            pdVar8[1] = in_xd10;
            *pdVar8 = in_xd0;
          }
          iVar9 = 1;
          ar7 = pdVar8 + 4;
        }
        if (cVar35 == '\0') {
          uVar26 = *(undefined4 *)(unsigned)((int)a5 + 4);
          dVar28 = CONCAT44D(uVar26,SUB84(in_dr8,0));
          uVar30 = *(undefined4 *)(unsigned)(a5 + 1);
          uVar24 = *(undefined4 *)(unsigned)((int)a5 + 0xc);
          dVar25 = a5[1];
          pdVar6 = a5 + 2;
          *(undefined4 *)(unsigned)((int)ar7 + 0x14) = uVar27;
          *(undefined4 *)(unsigned)(ar7 + 2) = uVar23;
          *(undefined4 *)(unsigned)((int)ar7 + 0xc) = uVar24;
          *(undefined4 *)(unsigned)(ar7 + 1) = uVar30;
          pdVar8 = (double *)(unsigned)((int)ar7 + 4);
          *(undefined4 *)(unsigned)pdVar8 = uVar26;
        }
        else {
          dVar28 = *(double *)(unsigned)((int)a5 + 4);
          in_xd6 = *(double *)(unsigned)((int)a5 + 0xc);
          dVar25 = *(double *)(unsigned)((int)a5 + 0x14);
          pdVar6 = (double *)(unsigned)((int)a5 + 0x1c);
          ar7[2] = in_dr12;
          ar7[1] = dVar22;
          *ar7 = dVar25;
          ar7[-1] = in_xd6;
          pdVar8 = ar7 + -2;
          *pdVar8 = dVar28;
        }
        fVar31 = F32LO(dVar25);
        *(undefined4 *)(unsigned)((int)pdVar8 + -4) = 0xe0000000;
        if (cVar35 == '\0') {
          dVar19 = CONCAT44D((int)(D2U(dVar19) >> 0x20),*(undefined4 *)(unsigned)pdVar6);
          pdVar6 = (double *)(unsigned)((int)pdVar6 + 4);
          dVar25 = CONCAT44D(piVar16[2],SUB84(in_dr10,0));
          fVar31 = (float)(uint)piVar16[4];
        }
        else {
          in_xd2 = *pdVar6;
          pdVar6 = pdVar6 + 1;
          dVar25 = *(double *)(unsigned)(piVar16 + 2);
          in_xd6 = *(double *)(unsigned)(piVar16 + 4);
        }
        if (cVar34 == '\0') {
          in_dr10 = CONCAT44D(F32HI(dVar25) * F32LO(dVar19),
                                     SUB84(dVar25,0));
        }
        else {
          in_dr10 = dVar25 * dVar19;
        }
        if (cVar35 == '\0') {
          dVar19 = CONCAT44D((int)(D2U(dVar19) >> 0x20),piVar16[3]);
          dVar25 = CONCAT44D(*(undefined4 *)(unsigned)pdVar6,SUB84(in_dr0,0));
          pdVar6 = (double *)(unsigned)((int)pdVar6 + 4);
          in_dr8 = CONCAT44D(piVar16[6],SUB84(dVar28,0));
        }
        else {
          in_xd2 = *(double *)(unsigned)(piVar16 + 3);
          dVar25 = *pdVar6;
          pdVar6 = pdVar6 + 1;
          in_dr8 = *(double *)(unsigned)(piVar16 + 6);
        }
        if (cVar34 == '\0') {
          fVar31 = F32HI(dVar25) * F32LO(dVar19) + fVar31;
        }
        if (cVar35 == '\0') {
          dVar19 = CONCAT44D((int)(D2U(dVar19) >> 0x20),piVar16[5]);
          dVar25 = CONCAT44D(*(undefined4 *)(unsigned)pdVar6,SUB84(dVar25,0));
          pdVar6 = (double *)(unsigned)((int)pdVar6 + 4);
          in_dr8 = CONCAT44D((int)((ulonglong)in_dr8 >> 0x20),piVar16[8]);
        }
        else {
          in_xd2 = *(double *)(unsigned)(piVar16 + 5);
          dVar25 = *pdVar6;
          pdVar6 = pdVar6 + 1;
          in_xd8 = *(double *)(unsigned)(piVar16 + 8);
        }
        if (cVar34 == '\0') {
          in_dr8 = CONCAT44D(F32HI(dVar25) * F32LO(dVar19) +
                                    F32HI(in_dr8),SUB84(in_dr8,0));
        }
        if (cVar35 == '\0') {
          in_dr0 = CONCAT44D(*(undefined4 *)(unsigned)pdVar6,SUB84(dVar25,0));
          pdVar6 = (double *)(unsigned)((int)pdVar6 + 4);
          dVar19 = CONCAT44D((int)(D2U(dVar19) >> 0x20),piVar16[7]);
        }
        else {
          in_dr0 = *pdVar6;
          pdVar6 = pdVar6 + 1;
          in_xd2 = *(double *)(unsigned)(piVar16 + 7);
        }
        if (cVar35 == '\0') {
          in_dr10 = CONCAT44D((int)((ulonglong)in_dr10 >> 0x20),
                                     *(undefined4 *)(unsigned)((int)pdVar6 + 0x14));
          pdVar6 = pdVar6 + 3;
        }
        else {
          in_xd10 = *(double *)(unsigned)((int)pdVar6 + 0x14);
          pdVar6 = (double *)(unsigned)((int)pdVar6 + 0x1c);
        }
        fVar18 = F32HI(in_dr0);
        if (cVar34 == '\0') {
          in_dr8 = CONCAT44D((int)((ulonglong)in_dr8 >> 0x20),
                                    fVar18 * F32LO(dVar19) + F32LO(in_dr8));
        }
        if (cVar35 == '\0') {
          uVar30 = *(undefined4 *)(unsigned)pdVar6;
          in_dr0 = CONCAT44D(fVar18,uVar30);
          in_dr6 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar6 + 4),fVar31);
          *(undefined4 *)(unsigned)(pdVar8 + 7) = *(undefined4 *)(unsigned)((int)pdVar6 + 4);
          *(undefined4 *)(unsigned)((int)pdVar8 + 0x34) = uVar30;
          *(int *)(unsigned)(pdVar8 + 6) = SUB84(in_dr10,0);
          *(int *)(unsigned)(pdVar8 + 5) = SUB84(in_dr8,0);
          *(int *)(unsigned)((int)pdVar8 + 0x24) = (int)((ulonglong)in_dr8 >> 0x20);
          *(float *)(unsigned)(pdVar8 + 4) = fVar31;
          pdVar8 = (double *)(unsigned)((int)pdVar8 + 0x1c);
          *(int *)(unsigned)pdVar8 = (int)((ulonglong)in_dr10 >> 0x20);
        }
        else {
          in_xd0 = *pdVar6;
          in_dr6 = pdVar6[1];
          *(double *)(unsigned)((int)pdVar8 + 0x34) = in_dr6;
          *(double *)(unsigned)((int)pdVar8 + 0x2c) = in_xd0;
          *(double *)(unsigned)((int)pdVar8 + 0x24) = in_xd10;
          pdVar8[3] = in_xd8;
          pdVar8[2] = in_dr8;
          pdVar8[1] = in_xd6;
          *pdVar8 = in_dr10;
        }
        ar7 = pdVar8 + 4;
        iVar9 = iVar9 + 1;
      }
      else if (iVar9 != 0) {
        if (cVar35 == '\0') {
          uVar24 = *(undefined4 *)(unsigned)((int)a5 + 4);
          uVar26 = *(undefined4 *)(unsigned)(a5 + 1);
          uVar29 = *(undefined4 *)(unsigned)((int)a5 + 0xc);
          pdVar6 = a5 + 2;
          *(undefined4 *)(unsigned)((int)ar7 + 0x14) = uVar27;
          *(undefined4 *)(unsigned)(ar7 + 2) = uVar23;
          *(undefined4 *)(unsigned)((int)ar7 + 0xc) = uVar29;
          *(undefined4 *)(unsigned)(ar7 + 1) = uVar26;
          pdVar8 = (double *)(unsigned)((int)ar7 + 4);
          *(undefined4 *)(unsigned)pdVar8 = uVar24;
        }
        else {
          in_xd6 = *(double *)(unsigned)((int)a5 + 4);
          dVar19 = *(double *)(unsigned)((int)a5 + 0xc);
          dVar25 = *(double *)(unsigned)((int)a5 + 0x14);
          pdVar6 = (double *)(unsigned)((int)a5 + 0x1c);
          ar7[2] = in_dr12;
          ar7[1] = dVar22;
          *ar7 = dVar25;
          ar7[-1] = dVar19;
          pdVar8 = ar7 + -2;
          *pdVar8 = in_xd6;
        }
        *(undefined4 *)(unsigned)((int)pdVar8 + -4) = 0xf0000000;
        if (cVar35 == '\0') {
          dVar19 = (double)((ulonglong)*(uint *)(unsigned)pdVar6 << 0x20);
          pdVar6 = (double *)(unsigned)((int)pdVar6 + 4);
          dVar25 = CONCAT44D(piVar16[2],piVar16[4]);
        }
        else {
          dVar19 = *pdVar6;
          pdVar6 = pdVar6 + 1;
          dVar25 = *(double *)(unsigned)(piVar16 + 2);
          in_xd8 = *(double *)(unsigned)(piVar16 + 4);
        }
        if (cVar34 == '\0') {
          in_dr8 = CONCAT44D(F32HI(dVar25) *
                                    F32HI(dVar19),SUB84(dVar25,0));
        }
        else {
          in_dr8 = dVar25 * dVar19;
        }
        if (cVar35 == '\0') {
          uVar20 = CONCAT44(piVar16[3],SUB84(dVar19,0));
          pdVar7 = (double *)(unsigned)((int)pdVar6 + 4);
          dVar19 = CONCAT44D(*(undefined4 *)(unsigned)pdVar6,piVar16[6]);
        }
        else {
          uVar20 = *(undefined8 *)(unsigned)(piVar16 + 3);
          dVar19 = *pdVar6;
          pdVar7 = pdVar6 + 1;
          in_xd0 = *(double *)(unsigned)(piVar16 + 6);
        }
        if (cVar34 == '\0') {
          in_dr8 = CONCAT44D((int)((ulonglong)in_dr8 >> 0x20),
                                    F32HI(dVar19) *
                                    F32HI(uVar20) + F32LO(in_dr8));
        }
        if (cVar35 == '\0') {
          uVar20 = CONCAT44(piVar16[5],(int)uVar20);
          dVar19 = CONCAT44D(*(undefined4 *)(unsigned)pdVar7,SUB84(dVar19,0));
          pdVar7 = (double *)(unsigned)((int)pdVar7 + 4);
          uVar30 = piVar16[8];
        }
        else {
          uVar20 = *(undefined8 *)(unsigned)(piVar16 + 5);
          dVar19 = *pdVar7;
          pdVar7 = pdVar7 + 1;
          in_xd10 = *(double *)(unsigned)(piVar16 + 8);
        }
        if (cVar34 == '\0') {
          dVar19 = (double)(ulonglong)
                           (uint)(F32HI(dVar19) *
                                  F32HI(uVar20) + F32LO(dVar19));
        }
        if (cVar35 == '\0') {
          in_dr0 = CONCAT44D(*(undefined4 *)(unsigned)pdVar7,SUB84(dVar19,0));
          pdVar7 = (double *)(unsigned)((int)pdVar7 + 4);
          dVar19 = CONCAT44D(piVar16[7],(int)uVar20);
        }
        else {
          in_dr0 = *pdVar7;
          pdVar7 = pdVar7 + 1;
          dVar19 = *(double *)(unsigned)(piVar16 + 7);
        }
        if (cVar35 == '\0') {
          in_dr10 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar7 + 0x14),uVar30);
          pdVar7 = pdVar7 + 3;
        }
        else {
          in_dr10 = *(double *)(unsigned)((int)pdVar7 + 0x14);
          pdVar7 = (double *)(unsigned)((int)pdVar7 + 0x1c);
        }
        if (cVar34 == '\0') {
          in_dr10 = CONCAT44D((int)((ulonglong)in_dr10 >> 0x20),
                                     F32HI(in_dr0) *
                                     F32HI(dVar19) + F32LO(in_dr10));
        }
        if (cVar35 == '\0') {
          uVar30 = *(undefined4 *)(unsigned)pdVar7;
          in_dr6 = *pdVar7;
          *(undefined4 *)(unsigned)(pdVar8 + 7) = *(undefined4 *)(unsigned)((int)pdVar7 + 4);
          *(undefined4 *)(unsigned)((int)pdVar8 + 0x34) = uVar30;
          *(int *)(unsigned)(pdVar8 + 6) = (int)((ulonglong)in_dr10 >> 0x20);
          *(int *)(unsigned)(pdVar8 + 5) = SUB84(in_dr10,0);
          *(int *)(unsigned)((int)pdVar8 + 0x24) = SUB84(in_dr0,0);
          *(int *)(unsigned)(pdVar8 + 4) = SUB84(in_dr8,0);
          pdVar8 = (double *)(unsigned)((int)pdVar8 + 0x1c);
          *(int *)(unsigned)pdVar8 = (int)((ulonglong)in_dr8 >> 0x20);
        }
        else {
          in_xd6 = *pdVar7;
          in_dr6 = pdVar7[1];
          *(double *)(unsigned)((int)pdVar8 + 0x34) = in_dr6;
          *(double *)(unsigned)((int)pdVar8 + 0x2c) = in_xd6;
          *(double *)(unsigned)((int)pdVar8 + 0x24) = in_dr10;
          pdVar8[3] = in_xd10;
          pdVar8[2] = in_xd0;
          pdVar8[1] = in_xd8;
          *pdVar8 = in_dr8;
        }
        iVar10 = iVar10 + iVar9 + 1;
        iVar9 = 0;
        ar7 = pdVar8 + 4;
      }
      if (bVar3) {
        if (cVar35 == '\0') {
          fVar31 = *(float *)(unsigned)pdVar5;
        }
        else {
          fVar31 = (float)((ulonglong)*pdVar5 >> 0x20);
        }
        dVar19 = CONCAT44D(fVar31,0x3f800000);
        if (cVar34 == '\0' && fVar31 < 1.0) {
          if (cVar35 == '\0') {
            dVar19 = CONCAT44D(*(undefined4 *)(unsigned)a5,0x3f800000);
          }
          else {
            dVar19 = *a5;
          }
          if (cVar34 == '\0' && F32HI(dVar19) < SUB84(dVar19,0)) {
            if (cVar35 == '\0') {
              fVar31 = *(float *)(unsigned)pdVar14;
            }
            else {
              fVar31 = (float)((ulonglong)*pdVar14 >> 0x20);
            }
            dVar19 = CONCAT44D(fVar31,0x3f800000);
            if (cVar34 == '\0' && fVar31 < 1.0) goto LAB_8c224246;
          }
        }
        if (cVar35 == '\0') {
          uVar30 = *(undefined4 *)(unsigned)((int)a5 + 0x24);
          in_dr8 = CONCAT44D(*(undefined4 *)(unsigned)a5,uVar30);
          in_dr6 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar5 + 0x24),*(undefined4 *)(unsigned)pdVar5);
          dVar19 = CONCAT44D((int)(D2U(dVar19) >> 0x20),uVar30);
        }
        else {
          in_dr8 = *a5;
          in_xd2 = *(double *)(unsigned)((int)a5 + 0x24);
          in_xd6 = *pdVar5;
          in_dr6 = *(double *)(unsigned)((int)pdVar5 + 0x24);
          uVar30 = SUB84(in_dr8,0);
          in_xd8 = in_xd2;
        }
        if (cVar34 == '\0') {
          fVar31 = F32LO(dVar19) * F32LO(in_dr6);
        }
        else {
          fVar31 = SUB84(dVar19 * in_dr6,0);
        }
        uVar24 = (undefined4)((ulonglong)in_dr8 >> 0x20);
        dVar19 = in_dr8;
        if (cVar35 == '\0') {
          dVar19 = CONCAT44D(uVar24,SUB84(in_dr0,0));
        }
        fVar18 = F32HI(in_dr6);
        if (cVar34 == '\0') {
          dVar19 = CONCAT44D(F32HI(dVar19) * fVar18,SUB84(dVar19,0));
        }
        else {
          dVar19 = dVar19 * in_dr6;
        }
        if (cVar35 == '\0') {
          in_dr10 = CONCAT44D(*(undefined4 *)(unsigned)(pdVar5 + 4),*(undefined4 *)(unsigned)(a5 + 4));
          dVar25 = CONCAT44D(uVar24,fVar31);
        }
        else {
          in_xd10 = a5[4];
          in_dr10 = pdVar5[4];
          dVar25 = in_dr8;
        }
        if (cVar34 == '\0') {
          dVar19 = CONCAT44D(F32HI(dVar19) - F32LO(dVar25),
                                    SUB84(dVar19,0));
        }
        else {
          dVar19 = dVar19 - dVar25;
        }
        dVar28 = in_xd10;
        if (cVar35 == '\0') {
          dVar25 = CONCAT44D((int)(D2U(dVar25) >> 0x20),SUB84(in_dr10,0));
          dVar28 = in_xd2;
        }
        fVar31 = F32HI(in_dr10);
        if (cVar34 == '\0') {
          dVar25 = CONCAT44D(F32HI(dVar25) * fVar31,SUB84(dVar25,0));
        }
        else {
          dVar25 = dVar25 * in_dr10;
        }
        dVar32 = in_xd8;
        if (cVar35 == '\0') {
          dVar19 = CONCAT44D((int)(D2U(dVar19) >> 0x20),uVar30);
          dVar32 = in_xd0;
        }
        if (cVar34 == '\0') {
          dVar19 = CONCAT44D((int)(D2U(dVar19) >> 0x20),F32LO(dVar19) * fVar31);
          fVar31 = F32LO(dVar25) * F32LO(in_dr6) - F32HI(dVar25);
        }
        else {
          dVar19 = dVar19 * in_dr10;
          fVar31 = SUB84(dVar25 * in_dr6 - dVar25 * in_dr6,0);
        }
        if (cVar35 == '\0') {
          dVar25 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar14 + 0x24),fVar31);
        }
        else {
          dVar25 = *(double *)(unsigned)((int)pdVar14 + 0x24);
        }
        if (cVar34 == '\0') {
          dVar25 = CONCAT44D(F32HI(dVar25) * F32LO(dVar25),
                                    SUB84(dVar25,0));
        }
        else {
          dVar25 = dVar25 * dVar25;
        }
        if (cVar35 == '\0') {
          dVar25 = CONCAT44D((int)(D2U(dVar25) >> 0x20),*(undefined4 *)(unsigned)(pdVar14 + 4));
        }
        else {
          dVar28 = pdVar14[4];
        }
        if (cVar34 == '\0') {
          dVar25 = CONCAT44D(F32HI(dVar19) * F32LO(dVar25) +
                                    F32HI(dVar25),SUB84(dVar25,0));
        }
        in_xd2 = in_xd10;
        if (cVar35 == '\0') {
          dVar25 = CONCAT44D((int)(D2U(dVar25) >> 0x20),SUB84(in_dr10,0));
          in_xd2 = dVar28;
        }
        if (cVar34 == '\0') {
          fVar18 = F32LO(dVar25) * fVar18;
          dVar25 = CONCAT44D((int)(D2U(dVar25) >> 0x20),fVar18);
          fVar18 = F32LO(dVar19) - fVar18;
        }
        else {
          dVar25 = dVar25 * in_dr6;
          fVar18 = SUB84(dVar19 - dVar25,0);
        }
        if (cVar35 == '\0') {
          in_dr0 = CONCAT44D(fVar18,*(undefined4 *)(unsigned)pdVar14);
          in_xd0 = dVar32;
        }
        else {
          in_xd0 = *pdVar14;
          in_dr0 = dVar32;
        }
        if (cVar34 == '\0') {
          fVar21 = (F32HI(in_dr0) * F32LO(in_dr0) +
                   F32HI(dVar25)) * fVar21;
        }
        else {
          fVar21 = (float)((ulonglong)(dVar25 * in_dr14) >> 0x20);
        }
        dVar19 = (double)((ulonglong)(uint)fVar21 << 0x20);
        if (cVar34 == '\0' && fVar21 < 0.0) {
          if (cVar35 == '\0') {
            piVar16[-1] = piVar16[8];
            piVar16[-2] = piVar16[6];
            piVar16[-3] = piVar16[4];
            piVar16[-4] = piVar16[7];
            dVar19 = (double)((ulonglong)(uint)piVar16[5] << 0x20);
            puVar15 = piVar16 + -5;
            piVar16[-5] = piVar16[5];
            in_dr10 = (double)(ulonglong)(uint)piVar16[3];
            in_dr8 = (double)(ulonglong)(uint)piVar16[9];
            in_dr6 = CONCAT44D(uVar23,uVar27);
          }
          else {
            *(undefined8 *)(unsigned)(piVar16 + -2) = *(undefined8 *)(unsigned)(piVar16 + 8);
            *(undefined8 *)(unsigned)(piVar16 + -4) = *(undefined8 *)(unsigned)(piVar16 + 5);
            *(undefined8 *)(unsigned)(piVar16 + -6) = *(undefined8 *)(unsigned)(piVar16 + 2);
            *(undefined8 *)(unsigned)(piVar16 + -8) = *(undefined8 *)(unsigned)(piVar16 + 4);
            dVar19 = *(double *)(unsigned)(piVar16 + 1);
            puVar15 = piVar16 + -10;
            *(double *)(unsigned)(piVar16 + -10) = dVar19;
            in_xd10 = *(double *)(unsigned)(piVar16 + -2);
            in_dr10 = *(double *)(unsigned)(piVar16 + -3);
            in_xd8 = *(double *)(unsigned)(piVar16 + 4);
            in_dr8 = *(double *)(unsigned)(piVar16 + 5);
            in_dr6 = dVar22;
            in_xd6 = in_dr12;
          }
          ar7 = (double *)(unsigned)(vsp = ((unsigned long)(fr0_ - 104)), FUN_8c225098(pdVar5,a5,pdVar14,ar7));
          piVar16 = (int *)(unsigned)((int)puVar15 + 0x14);
        }
      }
LAB_8c224246:
      *piVar16 = *piVar16 + piVar16[0xd];
      if (cVar35 == '\0') {
        dVar25 = CONCAT44D((int)((ulonglong)in_dr12 >> 0x20),piVar16[10]);
        in_xd12 = dVar22;
        dVar22 = CONCAT44D(SUB84(in_dr12,0),SUB84(in_dr4,0));
      }
      else {
        in_xd12 = *(double *)(unsigned)(piVar16 + 10);
        dVar25 = in_dr12;
      }
      iVar13 = iVar13 + -1;
      if (cVar34 == '\0') {
        in_dr14 = CONCAT44D(-F32HI(in_dr14),SUB84(in_dr14,0));
      }
      else {
        in_dr14 = -in_dr14;
      }
      if (cVar35 == '\0') {
        in_dr12 = CONCAT44D(piVar16[9],SUB84(dVar25,0));
        in_dr4 = CONCAT44D((int)(D2U(dVar22) >> 0x20),(int)(D2U(dVar25) >> 0x20))
        ;
      }
      else {
        in_dr12 = *(double *)(unsigned)(piVar16 + 9);
        in_dr4 = dVar22;
        in_xd4 = dVar25;
      }
      pdVar5 = a5;
      a5 = pdVar14;
      dVar25 = in_xd0;
      dVar22 = in_xd12;
    } while (iVar13 != 0);
    if (iVar9 != 0) {
      pdVar5 = (double *)(unsigned)((int)pdVar14 + 4);
      if (cVar35 == '\0') {
        uVar30 = *(undefined4 *)(unsigned)pdVar5;
        uVar23 = *(undefined4 *)(unsigned)(pdVar14 + 1);
        dVar25 = *pdVar5;
        uVar27 = *(undefined4 *)(unsigned)((int)pdVar14 + 0xc);
        dVar22 = CONCAT44D(uVar27,SUB84(in_dr6,0));
        pdVar14 = pdVar14 + 2;
        *(int *)(unsigned)((int)ar7 + 0x14) = piVar16[9];
        dVar19 = CONCAT44D((int)(D2U(dVar19) >> 0x20),piVar16[10]);
        *(int *)(unsigned)(ar7 + 2) = piVar16[10];
        *(undefined4 *)(unsigned)((int)ar7 + 0xc) = uVar27;
        *(undefined4 *)(unsigned)(ar7 + 1) = uVar23;
        pdVar5 = (double *)(unsigned)((int)ar7 + 4);
        *(undefined4 *)(unsigned)pdVar5 = uVar30;
      }
      else {
        in_xd4 = *pdVar5;
        dVar25 = *(double *)(unsigned)((int)pdVar14 + 0xc);
        dVar22 = *(double *)(unsigned)((int)pdVar14 + 0x14);
        pdVar14 = (double *)(unsigned)((int)pdVar14 + 0x1c);
        ar7[2] = *(double *)(unsigned)(piVar16 + 9);
        in_xd2 = *(double *)(unsigned)(piVar16 + 10);
        ar7[1] = in_xd2;
        *ar7 = dVar22;
        ar7[-1] = dVar25;
        pdVar5 = ar7 + -2;
        *pdVar5 = in_xd4;
      }
      fVar31 = F32LO(dVar25);
      fVar21 = F32LO(dVar22);
      *(undefined4 *)(unsigned)((int)pdVar5 + -4) = 0xf0000000;
      if (cVar35 == '\0') {
        dVar19 = CONCAT44D((int)(D2U(dVar19) >> 0x20),*(undefined4 *)(unsigned)pdVar14);
        pdVar14 = (double *)(unsigned)((int)pdVar14 + 4);
        dVar22 = CONCAT44D(piVar16[2],SUB84(in_dr8,0));
        fVar21 = (float)(uint)piVar16[4];
      }
      else {
        in_xd2 = *pdVar14;
        pdVar14 = pdVar14 + 1;
        dVar22 = *(double *)(unsigned)(piVar16 + 2);
        in_xd6 = *(double *)(unsigned)(piVar16 + 4);
      }
      fVar18 = F32LO(dVar19);
      if (cVar34 == '\0') {
        in_dr8 = CONCAT44D(F32HI(dVar22) * fVar18,SUB84(dVar22,0));
      }
      else {
        in_dr8 = dVar22 * dVar19;
      }
      if (cVar35 == '\0') {
        fVar18 = (float)(uint)piVar16[3];
        fVar17 = *(float *)(unsigned)pdVar14;
        pdVar14 = (double *)(unsigned)((int)pdVar14 + 4);
        fVar31 = (float)(uint)piVar16[6];
      }
      else {
        in_xd2 = *(double *)(unsigned)(piVar16 + 3);
        fVar17 = (float)((ulonglong)*pdVar14 >> 0x20);
        pdVar14 = pdVar14 + 1;
        in_xd4 = *(double *)(unsigned)(piVar16 + 6);
      }
      if (cVar34 == '\0') {
        fVar21 = fVar17 * fVar18 + fVar21;
      }
      if (cVar35 == '\0') {
        fVar18 = (float)(uint)piVar16[5];
        fVar17 = *(float *)(unsigned)pdVar14;
        pdVar14 = (double *)(unsigned)((int)pdVar14 + 4);
        in_dr10 = CONCAT44D(piVar16[8],SUB84(in_dr10,0));
      }
      else {
        in_xd2 = *(double *)(unsigned)(piVar16 + 5);
        fVar17 = (float)((ulonglong)*pdVar14 >> 0x20);
        pdVar14 = pdVar14 + 1;
        in_dr10 = *(double *)(unsigned)(piVar16 + 8);
      }
      if (cVar34 == '\0') {
        fVar31 = fVar17 * fVar18 + fVar31;
      }
      if (cVar35 == '\0') {
        in_dr0 = (double)((ulonglong)*(uint *)(unsigned)pdVar14 << 0x20);
        pdVar14 = (double *)(unsigned)((int)pdVar14 + 4);
        fVar18 = (float)(uint)piVar16[7];
      }
      else {
        in_dr0 = *pdVar14;
        pdVar14 = pdVar14 + 1;
        in_xd2 = *(double *)(unsigned)(piVar16 + 7);
      }
      if (cVar35 == '\0') {
        in_dr6 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar14 + 0x14),fVar21);
        pdVar14 = pdVar14 + 3;
      }
      else {
        in_dr6 = *(double *)(unsigned)((int)pdVar14 + 0x14);
        pdVar14 = (double *)(unsigned)((int)pdVar14 + 0x1c);
      }
      if (cVar34 == '\0') {
        in_dr10 = CONCAT44D(F32HI(in_dr0) * fVar18 +
                                   F32HI(in_dr10),SUB84(in_dr10,0));
      }
      if (cVar35 == '\0') {
        uVar23 = (undefined4)((ulonglong)in_dr8 >> 0x20);
        uVar30 = *(undefined4 *)(unsigned)pdVar14;
        in_dr8 = CONCAT44D(uVar23,uVar30);
        in_dr4 = CONCAT44D(*(undefined4 *)(unsigned)((int)pdVar14 + 4),fVar31);
        *(undefined4 *)(unsigned)(pdVar5 + 7) = *(undefined4 *)(unsigned)((int)pdVar14 + 4);
        *(undefined4 *)(unsigned)((int)pdVar5 + 0x34) = uVar30;
        *(int *)(unsigned)(pdVar5 + 6) = (int)((ulonglong)in_dr6 >> 0x20);
        *(int *)(unsigned)(pdVar5 + 5) = (int)((ulonglong)in_dr10 >> 0x20);
        *(float *)(unsigned)((int)pdVar5 + 0x24) = fVar31;
        *(int *)(unsigned)(pdVar5 + 4) = SUB84(in_dr6,0);
        pdVar5 = (double *)(unsigned)((int)pdVar5 + 0x1c);
        *(undefined4 *)(unsigned)pdVar5 = uVar23;
      }
      else {
        in_xd8 = *pdVar14;
        in_dr4 = pdVar14[1];
        *(double *)(unsigned)((int)pdVar5 + 0x34) = in_dr4;
        *(double *)(unsigned)((int)pdVar5 + 0x2c) = in_xd8;
        *(double *)(unsigned)((int)pdVar5 + 0x24) = in_dr6;
        pdVar5[3] = in_dr10;
        pdVar5[2] = in_xd4;
        pdVar5[1] = in_xd6;
        *pdVar5 = in_dr8;
      }
      iVar10 = iVar10 + iVar9 + 1;
      ar7 = pdVar5 + 4;
    }
    iVar13 = piVar16[0xc];
    piVar16[0xc] = iVar13 + -1;
    if (iVar13 + -1 == 0) {
      (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) + iVar10;
      (*(undefined4 *)(unsigned)(unsigned)0x8c4aa51c) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa51c) + iVar11;
      return ar7;
    }
  } while( true );
}

__asm__(".globl _FUN_8c223eb8\n.set _FUN_8c223eb8, _FUN_8c223eb8_def\n");
