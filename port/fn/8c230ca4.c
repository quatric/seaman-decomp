#include "../decls.h"
float * FUN_8c230ca4_def(short *ar4,int ar5,uint ar6,float *ar7)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  int iVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  int iVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  float in_fr4;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  
  uVar1 = _DAT_8c4aa4f0;
  uVar2 = ar6 & 0x3fff;
  iVar3 = 0;
  iVar4 = 0;
  do {
    iVar6 = (int)*ar4;
    fVar17 = 1.0;
    if ((uVar1 & 0x80000000) != 0) {
      fVar17 = -1.0;
    }
    pfVar7 = (float *)(ar4[1] * 0x20 + ar5);
    if (iVar6 < 0) {
      iVar6 = -iVar6;
      fVar17 = -fVar17;
    }
    iVar4 = iVar4 + iVar6;
    iVar6 = iVar6 + -2;
    iVar10 = 0;
    iVar11 = 0;
    pfVar8 = (float *)(ar4[4] * 0x20 + ar5);
    ar4 = ar4 + 7;
    fVar12 = pfVar7[6] * 0.5 + 0.5;
    fVar16 = pfVar8[6] * 0.5 + 0.5;
    do {
      pfVar9 = (float *)(*ar4 * 0x20 + ar5);
      fVar18 = pfVar9[6];
      fVar14 = ((pfVar7[2] - pfVar8[2]) * (pfVar9[1] - pfVar8[1]) -
               (pfVar9[2] - pfVar8[2]) * (pfVar7[1] - pfVar8[1])) * fVar17;
      fVar17 = -fVar17;
      if (0.0 <= fVar14) {
        if (iVar10 != 0) {
          fVar14 = *pfVar8;
          fVar13 = pfVar8[1];
          fVar15 = pfVar8[2];
          pfVar8 = pfVar8 + -3;
          ar7[5] = fVar16;
          ar7[4] = fVar13;
          ar7[3] = fVar14;
          fVar14 = fVar15 + in_fr4;
          if (fVar15 + in_fr4 < in_fr4) {
            fVar14 = in_fr4;
          }
          iVar3 = iVar3 + iVar10 + 1;
          ar7[3] = -1.5845633e+29;
          iVar10 = 0;
          ar7[9] = fVar14;
          ar7 = ar7 + 0xb;
        }
        if (iVar11 == 0) {
          fVar14 = *pfVar7;
          iVar11 = 1;
          fVar13 = pfVar7[1];
          fVar15 = pfVar7[2];
          ar7[5] = fVar12;
          ar7[4] = fVar13;
          ar7[3] = fVar14;
          fVar12 = -fVar15 + in_fr4;
          if (-fVar15 + in_fr4 < in_fr4) {
            fVar12 = in_fr4;
          }
          ar7[3] = -3.689349e+19;
          ar7[9] = fVar12;
          ar7 = ar7 + 0xb;
        }
        fVar12 = *pfVar8;
        iVar11 = iVar11 + 1;
        fVar14 = pfVar8[1];
        fVar13 = pfVar8[2];
        ar7[5] = fVar16;
        ar7[4] = fVar14;
        ar7[3] = fVar12;
        fVar12 = -fVar13 + in_fr4;
        if (-fVar13 + in_fr4 < in_fr4) {
          fVar12 = in_fr4;
        }
        ar7[3] = -3.689349e+19;
        pfVar5 = ar7 + 9;
        *pfVar5 = fVar12;
      }
      else {
        if (iVar11 != 0) {
          fVar14 = *pfVar8;
          fVar13 = pfVar8[1];
          fVar15 = pfVar8[2];
          pfVar8 = pfVar8 + -3;
          ar7[5] = fVar16;
          ar7[4] = fVar13;
          ar7[3] = fVar14;
          fVar14 = -fVar15 + in_fr4;
          if (-fVar15 + in_fr4 < in_fr4) {
            fVar14 = in_fr4;
          }
          iVar3 = iVar3 + iVar11 + 1;
          ar7[3] = -1.5845633e+29;
          iVar11 = 0;
          ar7[9] = fVar14;
          ar7 = ar7 + 0xb;
        }
        if (iVar10 == 0) {
          fVar14 = *pfVar7;
          iVar10 = 1;
          fVar13 = pfVar7[1];
          fVar15 = pfVar7[2];
          ar7[5] = fVar12;
          ar7[4] = fVar13;
          ar7[3] = fVar14;
          fVar12 = fVar15 + in_fr4;
          if (fVar15 + in_fr4 < in_fr4) {
            fVar12 = in_fr4;
          }
          ar7[3] = -3.689349e+19;
          ar7[9] = fVar12;
          ar7 = ar7 + 0xb;
        }
        fVar12 = *pfVar8;
        iVar10 = iVar10 + 1;
        fVar14 = pfVar8[1];
        fVar13 = pfVar8[2];
        ar7[5] = fVar16;
        ar7[4] = fVar14;
        ar7[3] = fVar12;
        fVar12 = fVar13 + in_fr4;
        if (fVar13 + in_fr4 < in_fr4) {
          fVar12 = in_fr4;
        }
        ar7[3] = -3.689349e+19;
        pfVar5 = ar7 + 9;
        *pfVar5 = fVar12;
      }
      pfVar7 = pfVar8 + -3;
      ar7 = pfVar5 + 2;
      ar4 = ar4 + (ar6 >> 0xe & 3) + 3;
      fVar14 = fVar18 * 0.5 + 0.5;
      iVar6 = iVar6 + -1;
      pfVar8 = pfVar9;
      fVar12 = fVar16;
      fVar16 = fVar14;
    } while (iVar6 != 0);
    if (iVar10 == 0) {
      if (iVar11 != 0) {
        fVar17 = *pfVar9;
        fVar12 = pfVar9[1];
        fVar16 = pfVar9[2];
        pfVar5[7] = fVar14;
        pfVar5[6] = fVar12;
        pfVar5[5] = fVar17;
        fVar17 = -fVar16 + in_fr4;
        if (-fVar16 + in_fr4 < in_fr4) {
          fVar17 = in_fr4;
        }
        iVar3 = iVar3 + iVar11 + 1;
        pfVar5[5] = -1.5845633e+29;
        pfVar5[0xb] = fVar17;
        ar7 = pfVar5 + 0xd;
      }
    }
    else {
      fVar17 = *pfVar9;
      fVar12 = pfVar9[1];
      fVar16 = pfVar9[2];
      pfVar5[7] = fVar14;
      pfVar5[6] = fVar12;
      pfVar5[5] = fVar17;
      fVar17 = fVar16 + in_fr4;
      if (fVar16 + in_fr4 < in_fr4) {
        fVar17 = in_fr4;
      }
      iVar3 = iVar3 + iVar10 + 1;
      pfVar5[5] = -1.5845633e+29;
      pfVar5[0xb] = fVar17;
      ar7 = pfVar5 + 0xd;
    }
    uVar2 = uVar2 - 1;
  } while (uVar2 != 0);
  _DAT_8c4aa520 = _DAT_8c4aa520 + iVar3;
  _DAT_8c4aa51c = _DAT_8c4aa51c + iVar4;
  return ar7;
}

__asm__(".globl _FUN_8c230ca4\n.set _FUN_8c230ca4, _FUN_8c230ca4_def\n");
