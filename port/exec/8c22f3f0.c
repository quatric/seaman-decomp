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
float * FUN_8c22f3f0_def(short *ar4,int ar5,uint ar6,float *ar7)

{
  ring[rp++ & 255] = "FUN_8c22f3f0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  short *psVar5;
  short *psVar6;
  short *psVar7;
  float *pfVar8;
  int iVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  int iVar13;
  int iVar14;
  float fVar15;
  float fVar16;
  float in_fr5 = 0;
  float in_fr4 = 0;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  
  uVar1 = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa4f0);
  uVar2 = ar6 & 0x3fff;
  iVar3 = 0;
  iVar4 = 0;
  do {
    iVar9 = (int)*ar4;
    psVar5 = ar4 + 2;
    fVar20 = 1.0;
    if ((uVar1 & 0x80000000) != 0) {
      fVar20 = -1.0;
    }
    pfVar10 = (float *)(unsigned)(ar4[1] * 0x20 + ar5);
    if (iVar9 < 0) {
      iVar9 = -iVar9;
      fVar20 = -fVar20;
    }
    iVar4 = iVar4 + iVar9;
    iVar9 = iVar9 + -2;
    iVar13 = 0;
    iVar14 = 0;
    psVar6 = ar4 + 4;
    psVar7 = ar4 + 5;
    ar4 = ar4 + 7;
    pfVar11 = (float *)(unsigned)(*psVar6 * 0x20 + ar5);
    fVar15 = (float)(int)*psVar5 * in_fr5;
    fVar19 = (float)(int)*psVar7 * in_fr5;
    do {
      pfVar12 = (float *)(unsigned)(*ar4 * 0x20 + ar5);
      fVar21 = (float)(int)ar4[1] * in_fr5;
      fVar17 = ((pfVar10[2] - pfVar11[2]) * (pfVar12[1] - pfVar11[1]) -
               (pfVar12[2] - pfVar11[2]) * (pfVar10[1] - pfVar11[1])) * fVar20;
      fVar20 = -fVar20;
      if (0.0 <= fVar17) {
        if (iVar13 != 0) {
          fVar17 = *pfVar11;
          fVar16 = pfVar11[1];
          fVar18 = pfVar11[2];
          pfVar11 = pfVar11 + -3;
          ar7[5] = fVar19;
          ar7[4] = fVar16;
          ar7[3] = fVar17;
          fVar17 = fVar18 + in_fr4;
          if (fVar18 + in_fr4 < in_fr4) {
            fVar17 = in_fr4;
          }
          iVar3 = iVar3 + iVar13 + 1;
          ar7[3] = -1.5845633e+29;
          iVar13 = 0;
          ar7[9] = fVar17;
          ar7 = ar7 + 0xb;
        }
        if (iVar14 == 0) {
          fVar17 = *pfVar10;
          iVar14 = 1;
          fVar16 = pfVar10[1];
          fVar18 = pfVar10[2];
          ar7[5] = fVar15;
          ar7[4] = fVar16;
          ar7[3] = fVar17;
          fVar15 = -fVar18 + in_fr4;
          if (-fVar18 + in_fr4 < in_fr4) {
            fVar15 = in_fr4;
          }
          ar7[3] = -3.689349e+19;
          ar7[9] = fVar15;
          ar7 = ar7 + 0xb;
        }
        fVar15 = *pfVar11;
        iVar14 = iVar14 + 1;
        fVar17 = pfVar11[1];
        fVar16 = pfVar11[2];
        ar7[5] = fVar19;
        ar7[4] = fVar17;
        ar7[3] = fVar15;
        fVar15 = -fVar16 + in_fr4;
        if (-fVar16 + in_fr4 < in_fr4) {
          fVar15 = in_fr4;
        }
        ar7[3] = -3.689349e+19;
        pfVar8 = ar7 + 9;
        *pfVar8 = fVar15;
      }
      else {
        if (iVar14 != 0) {
          fVar17 = *pfVar11;
          fVar16 = pfVar11[1];
          fVar18 = pfVar11[2];
          pfVar11 = pfVar11 + -3;
          ar7[5] = fVar19;
          ar7[4] = fVar16;
          ar7[3] = fVar17;
          fVar17 = -fVar18 + in_fr4;
          if (-fVar18 + in_fr4 < in_fr4) {
            fVar17 = in_fr4;
          }
          iVar3 = iVar3 + iVar14 + 1;
          ar7[3] = -1.5845633e+29;
          iVar14 = 0;
          ar7[9] = fVar17;
          ar7 = ar7 + 0xb;
        }
        if (iVar13 == 0) {
          fVar17 = *pfVar10;
          iVar13 = 1;
          fVar16 = pfVar10[1];
          fVar18 = pfVar10[2];
          ar7[5] = fVar15;
          ar7[4] = fVar16;
          ar7[3] = fVar17;
          fVar15 = fVar18 + in_fr4;
          if (fVar18 + in_fr4 < in_fr4) {
            fVar15 = in_fr4;
          }
          ar7[3] = -3.689349e+19;
          ar7[9] = fVar15;
          ar7 = ar7 + 0xb;
        }
        fVar15 = *pfVar11;
        iVar13 = iVar13 + 1;
        fVar17 = pfVar11[1];
        fVar16 = pfVar11[2];
        ar7[5] = fVar19;
        ar7[4] = fVar17;
        ar7[3] = fVar15;
        fVar15 = fVar16 + in_fr4;
        if (fVar16 + in_fr4 < in_fr4) {
          fVar15 = in_fr4;
        }
        ar7[3] = -3.689349e+19;
        pfVar8 = ar7 + 9;
        *pfVar8 = fVar15;
      }
      pfVar10 = pfVar11 + -3;
      ar7 = pfVar8 + 2;
      ar4 = ar4 + (ar6 >> 0xe & 3) + 3;
      iVar9 = iVar9 + -1;
      pfVar11 = pfVar12;
      fVar15 = fVar19;
      fVar19 = fVar21;
    } while (iVar9 != 0);
    if (iVar13 == 0) {
      if (iVar14 != 0) {
        fVar20 = *pfVar12;
        fVar15 = pfVar12[1];
        fVar19 = pfVar12[2];
        pfVar8[7] = fVar21;
        pfVar8[6] = fVar15;
        pfVar8[5] = fVar20;
        fVar20 = -fVar19 + in_fr4;
        if (-fVar19 + in_fr4 < in_fr4) {
          fVar20 = in_fr4;
        }
        iVar3 = iVar3 + iVar14 + 1;
        pfVar8[5] = -1.5845633e+29;
        pfVar8[0xb] = fVar20;
        ar7 = pfVar8 + 0xd;
      }
    }
    else {
      fVar20 = *pfVar12;
      fVar15 = pfVar12[1];
      fVar19 = pfVar12[2];
      pfVar8[7] = fVar21;
      pfVar8[6] = fVar15;
      pfVar8[5] = fVar20;
      fVar20 = fVar19 + in_fr4;
      if (fVar19 + in_fr4 < in_fr4) {
        fVar20 = in_fr4;
      }
      iVar3 = iVar3 + iVar13 + 1;
      pfVar8[5] = -1.5845633e+29;
      pfVar8[0xb] = fVar20;
      ar7 = pfVar8 + 0xd;
    }
    uVar2 = uVar2 - 1;
  } while (uVar2 != 0);
  (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) + iVar3;
  (*(undefined4 *)(unsigned)(unsigned)0x8c4aa51c) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa51c) + iVar4;
  return ar7;
}

__asm__(".globl _FUN_8c22f3f0\n.set _FUN_8c22f3f0, _FUN_8c22f3f0_def\n");
