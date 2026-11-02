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
float * FUN_8c228ec4_def(short *ar4,int ar5,uint ar6,float *ar7)

{
  ring[rp++ & 255] = "FUN_8c228ec4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  short *psVar5;
  float *pfVar6;
  int iVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  int iVar11;
  int iVar12;
  float in_fr4 = 0;
  float fVar13;
  float fVar14;
  float fVar15;
  
  uVar1 = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa4f0);
  uVar2 = ar6 & 0x3fff;
  iVar3 = 0;
  iVar4 = 0;
  do {
    iVar7 = (int)*ar4;
    psVar5 = ar4 + 2;
    fVar15 = 1.0;
    if ((uVar1 & 0x80000000) != 0) {
      fVar15 = -1.0;
    }
    pfVar8 = (float *)(unsigned)(ar4[1] * 0x20 + ar5);
    if (iVar7 < 0) {
      iVar7 = -iVar7;
      fVar15 = -fVar15;
    }
    iVar4 = iVar4 + iVar7;
    iVar7 = iVar7 + -2;
    iVar11 = 0;
    iVar12 = 0;
    ar4 = ar4 + 3;
    pfVar9 = (float *)(unsigned)(*psVar5 * 0x20 + ar5);
    do {
      pfVar10 = (float *)(unsigned)(*ar4 * 0x20 + ar5);
      fVar13 = ((pfVar8[2] - pfVar9[2]) * (pfVar10[1] - pfVar9[1]) -
               (pfVar10[2] - pfVar9[2]) * (pfVar8[1] - pfVar9[1])) * fVar15;
      fVar15 = -fVar15;
      if (0.0 <= fVar13) {
        if (iVar11 != 0) {
          fVar13 = *pfVar9;
          pfVar6 = pfVar9 + 1;
          fVar14 = pfVar9[2];
          pfVar9 = pfVar9 + -3;
          ar7[3] = *pfVar6;
          ar7[2] = fVar13;
          fVar13 = fVar14 + in_fr4;
          if (fVar14 + in_fr4 < in_fr4) {
            fVar13 = in_fr4;
          }
          iVar3 = iVar3 + iVar11 + 1;
          ar7[2] = -1.5845633e+29;
          iVar11 = 0;
          ar7[8] = fVar13;
          ar7 = ar7 + 10;
        }
        if (iVar12 == 0) {
          fVar13 = *pfVar8;
          iVar12 = 1;
          fVar14 = pfVar8[2];
          ar7[3] = pfVar8[1];
          ar7[2] = fVar13;
          fVar13 = -fVar14 + in_fr4;
          if (-fVar14 + in_fr4 < in_fr4) {
            fVar13 = in_fr4;
          }
          ar7[2] = -3.689349e+19;
          ar7[8] = fVar13;
          ar7 = ar7 + 10;
        }
        fVar13 = *pfVar9;
        iVar12 = iVar12 + 1;
        fVar14 = pfVar9[2];
        ar7[3] = pfVar9[1];
        ar7[2] = fVar13;
        fVar13 = -fVar14 + in_fr4;
        if (-fVar14 + in_fr4 < in_fr4) {
          fVar13 = in_fr4;
        }
        ar7[2] = -3.689349e+19;
        pfVar6 = ar7 + 8;
        *pfVar6 = fVar13;
      }
      else {
        if (iVar12 != 0) {
          fVar13 = *pfVar9;
          pfVar6 = pfVar9 + 1;
          fVar14 = pfVar9[2];
          pfVar9 = pfVar9 + -3;
          ar7[3] = *pfVar6;
          ar7[2] = fVar13;
          fVar13 = -fVar14 + in_fr4;
          if (-fVar14 + in_fr4 < in_fr4) {
            fVar13 = in_fr4;
          }
          iVar3 = iVar3 + iVar12 + 1;
          ar7[2] = -1.5845633e+29;
          iVar12 = 0;
          ar7[8] = fVar13;
          ar7 = ar7 + 10;
        }
        if (iVar11 == 0) {
          fVar13 = *pfVar8;
          iVar11 = 1;
          fVar14 = pfVar8[2];
          ar7[3] = pfVar8[1];
          ar7[2] = fVar13;
          fVar13 = fVar14 + in_fr4;
          if (fVar14 + in_fr4 < in_fr4) {
            fVar13 = in_fr4;
          }
          ar7[2] = -3.689349e+19;
          ar7[8] = fVar13;
          ar7 = ar7 + 10;
        }
        fVar13 = *pfVar9;
        iVar11 = iVar11 + 1;
        fVar14 = pfVar9[2];
        ar7[3] = pfVar9[1];
        ar7[2] = fVar13;
        fVar13 = fVar14 + in_fr4;
        if (fVar14 + in_fr4 < in_fr4) {
          fVar13 = in_fr4;
        }
        ar7[2] = -3.689349e+19;
        pfVar6 = ar7 + 8;
        *pfVar6 = fVar13;
      }
      pfVar8 = pfVar9 + -3;
      ar7 = pfVar6 + 2;
      iVar7 = iVar7 + -1;
      ar4 = ar4 + (ar6 >> 0xe & 3) + 1;
      pfVar9 = pfVar10;
    } while (iVar7 != 0);
    if (iVar11 == 0) {
      if (iVar12 != 0) {
        fVar15 = *pfVar10;
        fVar13 = pfVar10[2];
        pfVar6[5] = pfVar10[1];
        pfVar6[4] = fVar15;
        fVar15 = -fVar13 + in_fr4;
        if (-fVar13 + in_fr4 < in_fr4) {
          fVar15 = in_fr4;
        }
        iVar3 = iVar3 + iVar12 + 1;
        pfVar6[4] = -1.5845633e+29;
        pfVar6[10] = fVar15;
        ar7 = pfVar6 + 0xc;
      }
    }
    else {
      fVar15 = *pfVar10;
      fVar13 = pfVar10[2];
      pfVar6[5] = pfVar10[1];
      pfVar6[4] = fVar15;
      fVar15 = fVar13 + in_fr4;
      if (fVar13 + in_fr4 < in_fr4) {
        fVar15 = in_fr4;
      }
      iVar3 = iVar3 + iVar11 + 1;
      pfVar6[4] = -1.5845633e+29;
      pfVar6[10] = fVar15;
      ar7 = pfVar6 + 0xc;
    }
    uVar2 = uVar2 - 1;
  } while (uVar2 != 0);
  (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) + iVar3;
  (*(undefined4 *)(unsigned)(unsigned)0x8c4aa51c) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa51c) + iVar4;
  return ar7;
}

__asm__(".globl _FUN_8c228ec4\n.set _FUN_8c228ec4, _FUN_8c228ec4_def\n");
