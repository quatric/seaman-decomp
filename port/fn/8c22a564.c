#include "../decls.h"
float * FUN_8c22a564_def(short *ar4,int ar5,uint ar6,float *ar7)

{
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
  float fVar13;
  float fVar14;
  float in_fr4;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  
  uVar1 = _DAT_8c4aa4f0;
  uVar2 = ar6 & 0x3fff;
  iVar3 = 0;
  iVar4 = 0;
  do {
    iVar7 = (int)*ar4;
    psVar5 = ar4 + 2;
    fVar18 = 1.0;
    if ((uVar1 & 0x80000000) != 0) {
      fVar18 = -1.0;
    }
    pfVar8 = (float *)(ar4[1] * 0x20 + ar5);
    if (iVar7 < 0) {
      iVar7 = -iVar7;
      fVar18 = -fVar18;
    }
    iVar4 = iVar4 + iVar7;
    iVar7 = iVar7 + -2;
    iVar11 = 0;
    iVar12 = 0;
    ar4 = ar4 + 3;
    pfVar9 = (float *)(*psVar5 * 0x20 + ar5);
    fVar13 = pfVar8[6] * 0.5 + 0.5;
    fVar17 = pfVar9[6] * 0.5 + 0.5;
    do {
      pfVar10 = (float *)(*ar4 * 0x20 + ar5);
      fVar19 = pfVar10[6];
      fVar15 = ((pfVar8[2] - pfVar9[2]) * (pfVar10[1] - pfVar9[1]) -
               (pfVar10[2] - pfVar9[2]) * (pfVar8[1] - pfVar9[1])) * fVar18;
      fVar18 = -fVar18;
      if (0.0 <= fVar15) {
        if (iVar11 != 0) {
          fVar15 = *pfVar9;
          fVar14 = pfVar9[1];
          fVar16 = pfVar9[2];
          pfVar9 = pfVar9 + -3;
          ar7[5] = fVar17;
          ar7[4] = fVar14;
          ar7[3] = fVar15;
          fVar15 = fVar16 + in_fr4;
          if (fVar16 + in_fr4 < in_fr4) {
            fVar15 = in_fr4;
          }
          iVar3 = iVar3 + iVar11 + 1;
          ar7[3] = -1.5845633e+29;
          iVar11 = 0;
          ar7[9] = fVar15;
          ar7 = ar7 + 0xb;
        }
        if (iVar12 == 0) {
          fVar15 = *pfVar8;
          iVar12 = 1;
          fVar14 = pfVar8[1];
          fVar16 = pfVar8[2];
          ar7[5] = fVar13;
          ar7[4] = fVar14;
          ar7[3] = fVar15;
          fVar13 = -fVar16 + in_fr4;
          if (-fVar16 + in_fr4 < in_fr4) {
            fVar13 = in_fr4;
          }
          ar7[3] = -3.689349e+19;
          ar7[9] = fVar13;
          ar7 = ar7 + 0xb;
        }
        fVar13 = *pfVar9;
        iVar12 = iVar12 + 1;
        fVar15 = pfVar9[1];
        fVar14 = pfVar9[2];
        ar7[5] = fVar17;
        ar7[4] = fVar15;
        ar7[3] = fVar13;
        fVar13 = -fVar14 + in_fr4;
        if (-fVar14 + in_fr4 < in_fr4) {
          fVar13 = in_fr4;
        }
        ar7[3] = -3.689349e+19;
        pfVar6 = ar7 + 9;
        *pfVar6 = fVar13;
      }
      else {
        if (iVar12 != 0) {
          fVar15 = *pfVar9;
          fVar14 = pfVar9[1];
          fVar16 = pfVar9[2];
          pfVar9 = pfVar9 + -3;
          ar7[5] = fVar17;
          ar7[4] = fVar14;
          ar7[3] = fVar15;
          fVar15 = -fVar16 + in_fr4;
          if (-fVar16 + in_fr4 < in_fr4) {
            fVar15 = in_fr4;
          }
          iVar3 = iVar3 + iVar12 + 1;
          ar7[3] = -1.5845633e+29;
          iVar12 = 0;
          ar7[9] = fVar15;
          ar7 = ar7 + 0xb;
        }
        if (iVar11 == 0) {
          fVar15 = *pfVar8;
          iVar11 = 1;
          fVar14 = pfVar8[1];
          fVar16 = pfVar8[2];
          ar7[5] = fVar13;
          ar7[4] = fVar14;
          ar7[3] = fVar15;
          fVar13 = fVar16 + in_fr4;
          if (fVar16 + in_fr4 < in_fr4) {
            fVar13 = in_fr4;
          }
          ar7[3] = -3.689349e+19;
          ar7[9] = fVar13;
          ar7 = ar7 + 0xb;
        }
        fVar13 = *pfVar9;
        iVar11 = iVar11 + 1;
        fVar15 = pfVar9[1];
        fVar14 = pfVar9[2];
        ar7[5] = fVar17;
        ar7[4] = fVar15;
        ar7[3] = fVar13;
        fVar13 = fVar14 + in_fr4;
        if (fVar14 + in_fr4 < in_fr4) {
          fVar13 = in_fr4;
        }
        ar7[3] = -3.689349e+19;
        pfVar6 = ar7 + 9;
        *pfVar6 = fVar13;
      }
      pfVar8 = pfVar9 + -3;
      ar7 = pfVar6 + 2;
      ar4 = ar4 + (ar6 >> 0xe & 3) + 1;
      fVar15 = fVar19 * 0.5 + 0.5;
      iVar7 = iVar7 + -1;
      pfVar9 = pfVar10;
      fVar13 = fVar17;
      fVar17 = fVar15;
    } while (iVar7 != 0);
    if (iVar11 == 0) {
      if (iVar12 != 0) {
        fVar18 = *pfVar10;
        fVar13 = pfVar10[1];
        fVar17 = pfVar10[2];
        pfVar6[7] = fVar15;
        pfVar6[6] = fVar13;
        pfVar6[5] = fVar18;
        fVar18 = -fVar17 + in_fr4;
        if (-fVar17 + in_fr4 < in_fr4) {
          fVar18 = in_fr4;
        }
        iVar3 = iVar3 + iVar12 + 1;
        pfVar6[5] = -1.5845633e+29;
        pfVar6[0xb] = fVar18;
        ar7 = pfVar6 + 0xd;
      }
    }
    else {
      fVar18 = *pfVar10;
      fVar13 = pfVar10[1];
      fVar17 = pfVar10[2];
      pfVar6[7] = fVar15;
      pfVar6[6] = fVar13;
      pfVar6[5] = fVar18;
      fVar18 = fVar17 + in_fr4;
      if (fVar17 + in_fr4 < in_fr4) {
        fVar18 = in_fr4;
      }
      iVar3 = iVar3 + iVar11 + 1;
      pfVar6[5] = -1.5845633e+29;
      pfVar6[0xb] = fVar18;
      ar7 = pfVar6 + 0xd;
    }
    uVar2 = uVar2 - 1;
  } while (uVar2 != 0);
  _DAT_8c4aa520 = _DAT_8c4aa520 + iVar3;
  _DAT_8c4aa51c = _DAT_8c4aa51c + iVar4;
  return ar7;
}

__asm__(".globl _FUN_8c22a564\n.set _FUN_8c22a564, _FUN_8c22a564_def\n");
