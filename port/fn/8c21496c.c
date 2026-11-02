#include "../decls.h"
float * FUN_8c21496c_def(short *ar4,int ar5,uint ar6,float *ar7)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  short *psVar4;
  float *pfVar5;
  int iVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  float fVar10;
  float fVar11;
  undefined8 in_dr4;
  float fVar12;
  undefined8 in_dr6;
  float fVar13;
  float in_fr8;
  float fVar14;
  
  uVar1 = ar6 & 0x3fff;
  iVar2 = 0;
  iVar3 = 0;
  fVar12 = (float)((ulonglong)in_dr4 >> 0x20);
  fVar13 = (float)((ulonglong)in_dr6 >> 0x20) - 1.0;
  do {
    iVar6 = (int)*ar4;
    pfVar7 = (float *)(ar4[1] * 0x20 + ar5);
    if (iVar6 < 0) {
      iVar6 = -iVar6;
    }
    iVar3 = iVar3 + iVar6;
    iVar2 = iVar2 + iVar6;
    fVar10 = *pfVar7;
    iVar6 = iVar6 + -2;
    fVar11 = pfVar7[1];
    ar7[5] = (float)(int)ar4[2] * in_fr8;
    ar7[4] = fVar11;
    ar7[3] = fVar10;
    ar7[3] = -3.689349e+19;
    fVar10 = pfVar7[2];
    fVar11 = pfVar7[3];
    psVar4 = ar4 + 5;
    pfVar8 = (float *)(ar4[4] * 0x20 + ar5);
    ar7[0x12] = fVar11 + fVar13;
    ar7[0x11] = fVar10 * fVar12;
    ar7[0x10] = fVar11 + fVar13 + 1.0;
    ar7[0xf] = fVar10 * fVar12;
    ar4 = ar4 + 7;
    fVar10 = *pfVar8;
    fVar11 = pfVar8[1];
    pfVar8 = pfVar8 + 2;
    fVar14 = (float)(int)*psVar4 * in_fr8;
    pfVar7 = ar7 + 0xf;
    do {
      pfVar5 = pfVar7;
      pfVar5[0xd] = fVar14;
      pfVar5[0xc] = fVar11;
      pfVar5[0xb] = fVar10;
      pfVar5[0xb] = -3.689349e+19;
      fVar10 = *pfVar8;
      fVar11 = pfVar8[1];
      psVar4 = ar4 + 1;
      pfVar9 = (float *)(*ar4 * 0x20 + ar5);
      pfVar5[0x1a] = fVar11 + fVar13;
      pfVar5[0x19] = fVar10 * fVar12;
      pfVar5[0x18] = fVar11 + fVar13 + 1.0;
      pfVar5[0x17] = fVar10 * fVar12;
      iVar6 = iVar6 + -1;
      ar4 = ar4 + (ar6 >> 0xe & 3) + 3;
      fVar14 = (float)(int)*psVar4 * in_fr8;
      fVar10 = *pfVar9;
      fVar11 = pfVar9[1];
      pfVar8 = pfVar9 + 2;
      pfVar7 = pfVar5 + 0x17;
    } while (iVar6 != 0);
    pfVar5[0x24] = fVar14;
    pfVar5[0x23] = fVar11;
    pfVar5[0x22] = fVar10;
    pfVar5[0x22] = -1.5845633e+29;
    fVar10 = *pfVar8;
    fVar11 = pfVar9[3];
    pfVar5[0x31] = fVar11 + fVar13;
    pfVar5[0x30] = fVar10 * fVar12;
    uVar1 = uVar1 - 1;
    pfVar5[0x2f] = fVar11 + fVar13 + 1.0;
    pfVar5[0x2e] = fVar10 * fVar12;
    ar7 = pfVar5 + 0x36;
  } while (uVar1 != 0);
  _DAT_8c4aa520 = _DAT_8c4aa520 + iVar2;
  _DAT_8c4aa51c = _DAT_8c4aa51c + iVar3;
  return ar7;
}

__asm__(".globl _FUN_8c21496c\n.set _FUN_8c21496c, _FUN_8c21496c_def\n");
