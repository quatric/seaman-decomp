#include "../decls.h"
int FUN_8c222ab4_def(short *ar4,int ar5,uint ar6,int ar7)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  short *psVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  float fVar13;
  float in_fr4;
  float in_fr6;
  float fVar14;
  float fVar15;
  
  uVar1 = _DAT_8c4aa4f0;
  uVar2 = ar6 & 0x3fff;
  iVar3 = 0;
  iVar4 = 0;
  do {
    iVar6 = (int)*ar4;
    fVar14 = 1.0;
    if ((uVar1 & 0x80000000) != 0) {
      fVar14 = -1.0;
    }
    puVar7 = (undefined4 *)(ar4[1] * 0x40 + ar5);
    if (iVar6 < 0) {
      iVar6 = -iVar6;
      fVar14 = -fVar14;
    }
    iVar4 = iVar4 + iVar6;
    iVar6 = iVar6 + -2;
    iVar10 = 0;
    psVar5 = ar4 + 3;
    puVar8 = (undefined4 *)(ar4[2] * 0x40 + ar5);
    while( true ) {
      ar4 = psVar5 + 1;
      puVar9 = (undefined4 *)(*psVar5 * 0x40 + ar5);
      fVar15 = (((float)(uint)puVar9[2] - (float)(uint)puVar8[2]) * ((float)(uint)puVar7[1] - (float)(uint)puVar8[1]) -
               ((float)(uint)puVar9[1] - (float)(uint)puVar8[1]) * ((float)(uint)puVar7[2] - (float)(uint)puVar8[2])) *
               fVar14;
      fVar14 = -fVar14;
      if (fVar15 <= 0.0) {
        puVar7 = puVar8;
        if (iVar10 != 0) {
          uVar11 = *puVar8;
          uVar12 = puVar8[1];
          *(float *)(ar7 + 0x14) = (float)(uint)puVar8[10] * 0.5 + 0.5;
          *(undefined4 *)(ar7 + 0x10) = uVar12;
          *(undefined4 *)(ar7 + 0xc) = uVar11;
          iVar3 = iVar3 + iVar10 + 1;
          *(undefined4 *)(ar7 + 0xc) = 0xf0000000;
          iVar10 = 0;
          fVar15 = (float)(uint)puVar8[2];
          fVar13 = (float)(uint)puVar8[3];
          uVar11 = puVar8[8];
          *(undefined4 *)(ar7 + 0x48) = puVar8[9];
          *(undefined4 *)(ar7 + 0x44) = uVar11;
          puVar7 = puVar8 + -6;
          *(float *)(ar7 + 0x40) = fVar13 + in_fr6;
          *(float *)(ar7 + 0x3c) = fVar15 * in_fr4;
          ar7 = ar7 + 0x5c;
        }
      }
      else {
        if (iVar10 == 0) {
          uVar11 = *puVar7;
          uVar12 = puVar7[1];
          *(float *)(ar7 + 0x14) = (float)(uint)puVar7[10] * 0.5 + 0.5;
          *(undefined4 *)(ar7 + 0x10) = uVar12;
          iVar10 = 1;
          *(undefined4 *)(ar7 + 0xc) = uVar11;
          *(undefined4 *)(ar7 + 0xc) = 0xe0000000;
          fVar15 = (float)(uint)puVar7[2];
          fVar13 = (float)(uint)puVar7[3];
          uVar11 = puVar7[8];
          *(undefined4 *)(ar7 + 0x48) = puVar7[9];
          *(undefined4 *)(ar7 + 0x44) = uVar11;
          *(float *)(ar7 + 0x40) = fVar13 + in_fr6;
          *(float *)(ar7 + 0x3c) = fVar15 * in_fr4;
          ar7 = ar7 + 0x5c;
        }
        uVar11 = *puVar8;
        uVar12 = puVar8[1];
        *(float *)(ar7 + 0x14) = (float)(uint)puVar8[10] * 0.5 + 0.5;
        *(undefined4 *)(ar7 + 0x10) = uVar12;
        iVar10 = iVar10 + 1;
        *(undefined4 *)(ar7 + 0xc) = uVar11;
        *(undefined4 *)(ar7 + 0xc) = 0xe0000000;
        fVar15 = (float)(uint)puVar8[2];
        fVar13 = (float)(uint)puVar8[3];
        uVar11 = puVar8[8];
        *(undefined4 *)(ar7 + 0x48) = puVar8[9];
        *(undefined4 *)(ar7 + 0x44) = uVar11;
        *(float *)(ar7 + 0x40) = fVar13 + in_fr6;
        *(float *)(ar7 + 0x3c) = fVar15 * in_fr4;
        ar7 = ar7 + 0x5c;
        puVar7 = puVar8 + -6;
      }
      iVar6 = iVar6 + -1;
      if (iVar6 == 0) break;
      psVar5 = ar4 + (ar6 >> 0xe & 3);
      puVar8 = puVar9;
    }
    if (iVar10 != 0) {
      uVar11 = *puVar9;
      uVar12 = puVar9[1];
      *(float *)(ar7 + 0x14) = (float)(uint)puVar9[10] * 0.5 + 0.5;
      *(undefined4 *)(ar7 + 0x10) = uVar12;
      *(undefined4 *)(ar7 + 0xc) = uVar11;
      iVar3 = iVar3 + iVar10 + 1;
      *(undefined4 *)(ar7 + 0xc) = 0xf0000000;
      fVar14 = (float)(uint)puVar9[2];
      fVar15 = (float)(uint)puVar9[3];
      uVar11 = puVar9[8];
      *(undefined4 *)(ar7 + 0x48) = puVar9[9];
      *(undefined4 *)(ar7 + 0x44) = uVar11;
      *(float *)(ar7 + 0x40) = fVar15 + in_fr6;
      *(float *)(ar7 + 0x3c) = fVar14 * in_fr4;
      ar7 = ar7 + 0x5c;
    }
    uVar2 = uVar2 - 1;
  } while (uVar2 != 0);
  _DAT_8c4aa520 = _DAT_8c4aa520 + iVar3;
  _DAT_8c4aa51c = _DAT_8c4aa51c + iVar4;
  return ar7;
}

__asm__(".globl _FUN_8c222ab4\n.set _FUN_8c222ab4, _FUN_8c222ab4_def\n");
