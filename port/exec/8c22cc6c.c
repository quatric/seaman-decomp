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
double * FUN_8c22cc6c_def(short *ar4,float ar5,uint ar6,double *ar7)

{
  ring[rp++ & 255] = "FUN_8c22cc6c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 68; for (int i_ = 0; i_ < 68; i_++) z_[i_] = 0; }
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
  double in_dr4 = 0;
  float fVar12;
  double dVar11;
  double in_dr6 = 0;
  float fVar13;
  double dVar14;
  double dVar16;
  double in_dr12 = 0;
  float fVar18;
  double in_dr14 = 0;
  double in_xd2 = 0;
  double in_xd4 = 0;
  double dVar19;
  double dVar20;
  double in_xd12 = 0;
  double in_xd14 = 0;
  char cVar21;
  char cVar22;
  float fVar15;
  float fVar17;
  
  cVar22 = '\0';
  cVar21 = '\0';
  fVar12 = F32HI(in_dr4);
  iVar6 = 0;
  iVar7 = 0;
  (*(uint *)(fr0_ - 0x38)) = ar6 & 0x3fff;
  (*(unsigned *)(fr0_ - 0x44) = (unsigned)(unsigned long)(ar4));
  do {
    iVar8 = (int)*((short *)(unsigned long)*(unsigned *)(fr0_ - 0x44));
    pdVar3 = (double *)(unsigned)(((short *)(unsigned long)*(unsigned *)(fr0_ - 0x44))[1] * 0x20 + (int)ar5);
    if (iVar8 < 0) {
      iVar8 = -iVar8;
    }
    iVar7 = iVar7 + iVar8;
    iVar8 = iVar8 + -2;
    if (cVar22 == '\0') {
      in_dr6 = CONCAT44D(fVar12,SUB84(in_dr6,0));
    }
    else {
      in_dr6 = CONCAT44D(ar5,fVar12);
    }
    iVar5 = 0;
    dVar11 = in_xd2;
    if (cVar22 == '\0') {
      dVar11 = CONCAT44D((float)(int)((short *)(unsigned long)*(unsigned *)(fr0_ - 0x44))[2],SUB84(in_dr4,0));
    }
    psVar9 = ((short *)(unsigned long)*(unsigned *)(fr0_ - 0x44)) + 5;
    fVar10 = F32HI(in_dr6);
    if (cVar21 == '\0') {
      dVar11 = CONCAT44D(F32HI(dVar11) * fVar10,SUB84(dVar11,0));
    }
    else {
      dVar11 = dVar11 * in_dr6;
    }
    dVar14 = in_xd2;
    if (cVar22 == '\0') {
      dVar11 = CONCAT44D((int)(D2U(dVar11) >> 0x20),(float)(int)((short *)(unsigned long)*(unsigned *)(fr0_ - 0x44))[3]);
      dVar14 = in_xd4;
    }
    in_xd4 = dVar14;
    if (cVar21 == '\0') {
      in_dr4 = CONCAT44D((int)(D2U(dVar11) >> 0x20),F32LO(dVar11) * fVar10);
    }
    else {
      in_dr4 = dVar11 * in_dr6;
    }
    ar5_00 = (double *)(unsigned)(((short *)(unsigned long)*(unsigned *)(fr0_ - 0x44))[4] * 0x20 + (int)ar5);
    psVar2 = ((short *)(unsigned long)*(unsigned *)(fr0_ - 0x44)) + 6;
    (*(unsigned *)(fr0_ - 0x44) = (unsigned)(unsigned long)(((short *)(unsigned long)*(unsigned *)(fr0_ - 0x44)) + 7));
    dVar11 = in_xd2;
    if (cVar22 == '\0') {
      in_dr14 = CONCAT44D((int)((ulonglong)in_dr14 >> 0x20),(float)(int)*psVar9);
      dVar11 = in_xd14;
    }
    if (cVar21 == '\0') {
      fVar18 = F32LO(in_dr14) * fVar10;
    }
    else {
      fVar18 = SUB84(in_dr14 * in_dr6,0);
    }
    dVar14 = in_xd2;
    if (cVar22 == '\0') {
      dVar14 = CONCAT44D((float)(int)*psVar2,fVar18);
    }
    if (cVar21 == '\0') {
      in_dr14 = CONCAT44D(F32HI(dVar14) * fVar10,SUB84(dVar14,0));
    }
    else {
      in_dr14 = dVar14 * in_dr6;
    }
    do {
      ar6_00 = (double *)(unsigned)(*((short *)(unsigned long)*(unsigned *)(fr0_ - 0x44)) * 0x20 + (int)ar5);
      fVar10 = ar5;
      if (cVar22 == '\0') {
        fVar10 = fVar12;
      }
      dVar14 = in_xd2;
      if (cVar22 == '\0') {
        in_dr12 = CONCAT44D((int)((ulonglong)in_dr12 >> 0x20),(float)(int)((short *)(unsigned long)*(unsigned *)(fr0_ - 0x44))[1]);
        dVar14 = in_xd12;
      }
      in_xd12 = dVar14;
      if (cVar21 == '\0') {
        fVar18 = F32LO(in_dr12) * fVar10;
      }
      else {
        fVar18 = SUB84(in_dr12 * CONCAT44D(fVar10,(float)(int)((short *)(unsigned long)*(unsigned *)(fr0_ - 0x44))[1]),0);
      }
      dVar16 = CONCAT44D(fVar10,(float)(int)((short *)(unsigned long)*(unsigned *)(fr0_ - 0x44))[2]);
      dVar14 = in_xd2;
      if (cVar22 == '\0') {
        dVar14 = CONCAT44D((float)(int)((short *)(unsigned long)*(unsigned *)(fr0_ - 0x44))[2],fVar18);
      }
      if (cVar21 == '\0') {
        in_dr12 = CONCAT44D(F32HI(dVar14) * fVar10,SUB84(dVar14,0));
      }
      else {
        in_dr12 = dVar14 * dVar16;
      }
      if (cVar22 == '\0') {
        dVar16 = (double)(ulonglong)(uint)*(float *)(unsigned)pdVar3;
      }
      else {
        in_xd2 = *pdVar3;
      }
      fVar10 = F32LO(dVar16);
      bVar1 = false;
      if (cVar21 != '\0' || fVar10 <= 1.0) {
LAB_8c22cd96:
        bVar1 = true;
      }
      else {
        if (cVar22 == '\0') {
          fVar10 = *(float *)(unsigned)ar5_00;
        }
        else {
          in_xd2 = *ar5_00;
        }
        if (cVar21 != '\0' || fVar10 <= 1.0) goto LAB_8c22cd96;
        if (cVar22 == '\0') {
          fVar10 = *(float *)(unsigned)ar6_00;
        }
        else {
          fVar10 = (float)((ulonglong)*ar6_00 >> 0x20);
        }
        if (cVar21 != '\0' || fVar10 <= 1.0) goto LAB_8c22cd96;
      }
      fVar10 = F32HI(in_dr14);
      if (bVar1) {
        if (iVar5 != 0) {
          if (cVar22 == '\0') {
            fVar17 = *(float *)(unsigned)((int)ar5_00 + 4);
            fVar13 = *(float *)(unsigned)(ar5_00 + 1);
            fVar18 = *(float *)(unsigned)((int)ar5_00 + 0xc);
            fVar15 = *(float *)(unsigned)(ar5_00 + 2);
            in_dr6 = CONCAT44D(*(float *)(unsigned)((int)ar5_00 + 0x14),fVar18);
            *(float *)(unsigned)((int)ar7 + 0x1c) = *(float *)(unsigned)((int)ar5_00 + 0x14);
            *(float *)(unsigned)(ar7 + 3) = fVar15;
            *(float *)(unsigned)((int)ar7 + 0x14) = fVar10;
            *(float *)(unsigned)(ar7 + 2) = SUB84(in_dr14,0);
            *(float *)(unsigned)((int)ar7 + 0xc) = fVar18;
            *(float *)(unsigned)(ar7 + 1) = fVar13;
            pdVar4 = (double *)(unsigned)((int)ar7 + 4);
            *(float *)(unsigned)pdVar4 = fVar17;
          }
          else {
            dVar16 = *(double *)(unsigned)((int)ar5_00 + 4);
            dVar20 = *(double *)(unsigned)((int)ar5_00 + 0xc);
            dVar19 = *(double *)(unsigned)((int)ar5_00 + 0x14);
            dVar14 = *(double *)(unsigned)((int)ar5_00 + 0x1c);
            in_dr6 = *(double *)(unsigned)((int)ar5_00 + 0x24);
            ar7[3] = in_dr6;
            ar7[2] = dVar14;
            ar7[1] = in_dr14;
            *ar7 = dVar11;
            ar7[-1] = dVar19;
            ar7[-2] = dVar20;
            pdVar4 = ar7 + -3;
            *pdVar4 = dVar16;
          }
          *(float *)(unsigned)((int)pdVar4 + -4) = -1.5845633e+29;
          iVar6 = iVar6 + iVar5 + 1;
          iVar5 = 0;
          ar7 = (double *)(unsigned)((int)pdVar4 + 0x1c);
        }
      }
      else {
        if (iVar5 == 0) {
          if (cVar22 == '\0') {
            fVar17 = *(float *)(unsigned)((int)pdVar3 + 4);
            fVar13 = *(float *)(unsigned)(pdVar3 + 1);
            fVar15 = *(float *)(unsigned)((int)pdVar3 + 0xc);
            fVar18 = *(float *)(unsigned)(pdVar3 + 2);
            *(float *)(unsigned)((int)ar7 + 0x1c) = *(float *)(unsigned)((int)pdVar3 + 0x14);
            *(float *)(unsigned)(ar7 + 3) = fVar18;
            *(float *)(unsigned)((int)ar7 + 0x14) = SUB84(in_dr4,0);
            *(float *)(unsigned)(ar7 + 2) = F32HI(in_dr4);
            *(float *)(unsigned)((int)ar7 + 0xc) = fVar15;
            *(float *)(unsigned)(ar7 + 1) = fVar13;
            pdVar4 = (double *)(unsigned)((int)ar7 + 4);
            *(float *)(unsigned)pdVar4 = fVar17;
          }
          else {
            dVar16 = *(double *)(unsigned)((int)pdVar3 + 4);
            dVar20 = *(double *)(unsigned)((int)pdVar3 + 0xc);
            dVar14 = *(double *)(unsigned)((int)pdVar3 + 0x14);
            dVar19 = *(double *)(unsigned)((int)pdVar3 + 0x1c);
            ar7[3] = *(double *)(unsigned)((int)pdVar3 + 0x24);
            ar7[2] = dVar19;
            ar7[1] = in_xd4;
            *ar7 = in_dr4;
            ar7[-1] = dVar14;
            ar7[-2] = dVar20;
            pdVar4 = ar7 + -3;
            *pdVar4 = dVar16;
          }
          *(float *)(unsigned)((int)pdVar4 + -4) = -3.689349e+19;
          iVar5 = 1;
          ar7 = (double *)(unsigned)((int)pdVar4 + 0x1c);
        }
        if (cVar22 == '\0') {
          fVar17 = *(float *)(unsigned)((int)ar5_00 + 4);
          fVar18 = *(float *)(unsigned)(ar5_00 + 1);
          fVar15 = *(float *)(unsigned)((int)ar5_00 + 0xc);
          fVar13 = *(float *)(unsigned)(ar5_00 + 2);
          in_dr6 = CONCAT44D(*(float *)(unsigned)((int)ar5_00 + 0x14),fVar18);
          *(float *)(unsigned)((int)ar7 + 0x1c) = *(float *)(unsigned)((int)ar5_00 + 0x14);
          *(float *)(unsigned)(ar7 + 3) = fVar13;
          *(float *)(unsigned)((int)ar7 + 0x14) = fVar10;
          *(float *)(unsigned)(ar7 + 2) = SUB84(in_dr14,0);
          *(float *)(unsigned)((int)ar7 + 0xc) = fVar15;
          *(float *)(unsigned)(ar7 + 1) = fVar18;
          pdVar4 = (double *)(unsigned)((int)ar7 + 4);
          *(float *)(unsigned)pdVar4 = fVar17;
        }
        else {
          dVar16 = *(double *)(unsigned)((int)ar5_00 + 4);
          dVar19 = *(double *)(unsigned)((int)ar5_00 + 0xc);
          dVar14 = *(double *)(unsigned)((int)ar5_00 + 0x14);
          dVar20 = *(double *)(unsigned)((int)ar5_00 + 0x1c);
          in_dr6 = *(double *)(unsigned)((int)ar5_00 + 0x24);
          ar7[3] = in_dr6;
          ar7[2] = dVar20;
          ar7[1] = in_dr14;
          *ar7 = dVar11;
          ar7[-1] = dVar14;
          ar7[-2] = dVar19;
          pdVar4 = ar7 + -3;
          *pdVar4 = dVar16;
        }
        *(float *)(unsigned)((int)pdVar4 + -4) = -3.689349e+19;
        ar7 = (double *)(unsigned)((int)pdVar4 + 0x1c);
        iVar5 = iVar5 + 1;
      }
      if (bVar1) {
        if (cVar22 == '\0') {
          fVar18 = *(float *)(unsigned)pdVar3;
        }
        else {
          fVar18 = (float)((ulonglong)*pdVar3 >> 0x20);
        }
        if (cVar21 != '\0' || fVar18 <= 1.0) {
          if (cVar22 == '\0') {
            dVar14 = CONCAT44D(*(float *)(unsigned)ar5_00,0x3f800000);
          }
          else {
            dVar14 = *ar5_00;
          }
          if (cVar21 != '\0' || F32HI(dVar14) <= SUB84(dVar14,0)) {
            if (cVar22 == '\0') {
              fVar18 = *(float *)(unsigned)ar6_00;
            }
            else {
              fVar18 = (float)((ulonglong)*ar6_00 >> 0x20);
            }
            if (cVar21 != '\0' || fVar18 <= 1.0) goto LAB_8c22ce56;
          }
        }
        in_dr6 = dVar11;
        if (cVar22 == '\0') {
          in_dr6 = (double)(ulonglong)(uint)fVar10;
        }
        ar7 = (double *)(unsigned)(vsp = ((unsigned long)(fr0_ - 68)), FUN_8c22cef0(pdVar3,ar5_00,ar6_00,ar7));
      }
LAB_8c22ce56:
      (*(unsigned *)(fr0_ - 0x44) = (unsigned)(unsigned long)(((short *)(unsigned long)*(unsigned *)(fr0_ - 0x44)) + (ar6 >> 0xe & 3) + 3));
      dVar14 = in_dr14;
      in_xd14 = in_xd12;
      if (cVar22 == '\0') {
        dVar14 = CONCAT44D((int)((ulonglong)in_dr14 >> 0x20),SUB84(in_dr12,0));
        in_xd14 = dVar11;
        dVar11 = CONCAT44D(SUB84(in_dr14,0),SUB84(in_dr4,0));
      }
      iVar8 = iVar8 + -1;
      fVar10 = F32HI(in_dr12);
      in_dr14 = in_dr12;
      in_dr4 = dVar11;
      if (cVar22 == '\0') {
        in_dr14 = CONCAT44D(fVar10,SUB84(dVar14,0));
        in_dr4 = CONCAT44D((int)(D2U(dVar11) >> 0x20),(int)(D2U(dVar14) >> 0x20))
        ;
        dVar14 = in_xd4;
      }
      in_xd4 = dVar14;
      pdVar3 = ar5_00;
      ar5_00 = ar6_00;
      dVar11 = in_xd14;
    } while (iVar8 != 0);
    if (iVar5 != 0) {
      if (cVar22 == '\0') {
        fVar15 = *(float *)(unsigned)((int)ar6_00 + 4);
        fVar17 = *(float *)(unsigned)(ar6_00 + 1);
        fVar18 = *(float *)(unsigned)((int)ar6_00 + 0xc);
        fVar13 = *(float *)(unsigned)(ar6_00 + 2);
        in_dr6 = CONCAT44D(fVar15,fVar13);
        in_dr4 = CONCAT44D(*(float *)(unsigned)((int)ar6_00 + 0x14),fVar18);
        *(float *)(unsigned)((int)ar7 + 0x1c) = *(float *)(unsigned)((int)ar6_00 + 0x14);
        *(float *)(unsigned)(ar7 + 3) = fVar13;
        *(float *)(unsigned)((int)ar7 + 0x14) = fVar10;
        *(float *)(unsigned)(ar7 + 2) = SUB84(in_dr12,0);
        *(float *)(unsigned)((int)ar7 + 0xc) = fVar18;
        *(float *)(unsigned)(ar7 + 1) = fVar17;
        pdVar3 = (double *)(unsigned)((int)ar7 + 4);
        *(float *)(unsigned)pdVar3 = fVar15;
      }
      else {
        in_dr6 = *(double *)(unsigned)((int)ar6_00 + 4);
        dVar11 = *(double *)(unsigned)((int)ar6_00 + 0xc);
        in_xd4 = *(double *)(unsigned)((int)ar6_00 + 0x14);
        dVar14 = *(double *)(unsigned)((int)ar6_00 + 0x1c);
        in_dr4 = *(double *)(unsigned)((int)ar6_00 + 0x24);
        ar7[3] = in_dr4;
        ar7[2] = dVar14;
        ar7[1] = in_dr12;
        *ar7 = in_xd12;
        ar7[-1] = in_xd4;
        ar7[-2] = dVar11;
        pdVar3 = ar7 + -3;
        *pdVar3 = in_dr6;
      }
      *(float *)(unsigned)((int)pdVar3 + -4) = -1.5845633e+29;
      iVar6 = iVar6 + iVar5 + 1;
      ar7 = (double *)(unsigned)((int)pdVar3 + 0x1c);
    }
    (*(uint *)(fr0_ - 0x38)) = (*(uint *)(fr0_ - 0x38)) - 1;
    if ((*(uint *)(fr0_ - 0x38)) == 0) {
      (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) + iVar6;
      (*(undefined4 *)(unsigned)(unsigned)0x8c4aa51c) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa51c) + iVar7;
      return ar7;
    }
  } while( true );
}

__asm__(".globl _FUN_8c22cc6c\n.set _FUN_8c22cc6c, _FUN_8c22cc6c_def\n");
