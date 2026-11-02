#include "../decls.h"
int FUN_8c229a7c_def(short *ar4,int ar5,uint ar6,int ar7)

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
  float in_fr4;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  uVar1 = _DAT_8c4aa4f0;
  uVar2 = ar6 & 0x3fff;
  iVar3 = 0;
  iVar4 = 0;
  do {
    iVar6 = (int)*ar4;
    psVar5 = ar4 + 2;
    fVar15 = 1.0;
    if ((uVar1 & 0x80000000) != 0) {
      fVar15 = -1.0;
    }
    puVar7 = (undefined4 *)(ar4[1] * 0x20 + ar5);
    if (iVar6 < 0) {
      iVar6 = -iVar6;
      fVar15 = -fVar15;
    }
    iVar4 = iVar4 + iVar6;
    iVar6 = iVar6 + -2;
    iVar10 = 0;
    ar4 = ar4 + 3;
    puVar8 = (undefined4 *)(*psVar5 * 0x20 + ar5);
    fVar14 = (float)(uint)puVar7[6] * 0.5 + 0.5;
    fVar16 = (float)(uint)puVar8[6] * 0.5 + 0.5;
    do {
      puVar9 = (undefined4 *)(*ar4 * 0x20 + ar5);
      fVar17 = (float)(uint)puVar9[6];
      fVar13 = (((float)(uint)puVar7[2] - (float)(uint)puVar8[2]) * ((float)(uint)puVar9[1] - (float)(uint)puVar8[1]) -
               ((float)(uint)puVar9[2] - (float)(uint)puVar8[2]) * ((float)(uint)puVar7[1] - (float)(uint)puVar8[1])) *
               fVar15;
      fVar15 = -fVar15;
      if (0.0 <= fVar13) {
        puVar7 = puVar8;
        if (iVar10 != 0) {
          uVar11 = *puVar8;
          uVar12 = puVar8[1];
          fVar13 = (float)(uint)puVar8[2];
          puVar7 = puVar8 + -3;
          *(float *)(ar7 + 0x14) = fVar16;
          *(undefined4 *)(ar7 + 0x10) = uVar12;
          *(undefined4 *)(ar7 + 0xc) = uVar11;
          fVar14 = fVar13 + in_fr4;
          if (fVar13 + in_fr4 < in_fr4) {
            fVar14 = in_fr4;
          }
          iVar3 = iVar3 + iVar10 + 1;
          *(undefined4 *)(ar7 + 0xc) = 0xf0000000;
          iVar10 = 0;
          *(float *)(ar7 + 0x24) = fVar14;
          ar7 = ar7 + 0x2c;
        }
      }
      else {
        if (iVar10 == 0) {
          uVar11 = *puVar7;
          iVar10 = 1;
          uVar12 = puVar7[1];
          fVar13 = (float)(uint)puVar7[2];
          *(float *)(ar7 + 0x14) = fVar14;
          *(undefined4 *)(ar7 + 0x10) = uVar12;
          *(undefined4 *)(ar7 + 0xc) = uVar11;
          fVar14 = fVar13 + in_fr4;
          if (fVar13 + in_fr4 < in_fr4) {
            fVar14 = in_fr4;
          }
          *(undefined4 *)(ar7 + 0xc) = 0xe0000000;
          *(float *)(ar7 + 0x24) = fVar14;
          ar7 = ar7 + 0x2c;
        }
        uVar11 = *puVar8;
        iVar10 = iVar10 + 1;
        uVar12 = puVar8[1];
        fVar13 = (float)(uint)puVar8[2];
        *(float *)(ar7 + 0x14) = fVar16;
        *(undefined4 *)(ar7 + 0x10) = uVar12;
        *(undefined4 *)(ar7 + 0xc) = uVar11;
        fVar14 = fVar13 + in_fr4;
        if (fVar13 + in_fr4 < in_fr4) {
          fVar14 = in_fr4;
        }
        *(undefined4 *)(ar7 + 0xc) = 0xe0000000;
        *(float *)(ar7 + 0x24) = fVar14;
        ar7 = ar7 + 0x2c;
        puVar7 = puVar8 + -3;
      }
      ar4 = ar4 + (ar6 >> 0xe & 3) + 1;
      fVar13 = fVar17 * 0.5 + 0.5;
      iVar6 = iVar6 + -1;
      puVar8 = puVar9;
      fVar14 = fVar16;
      fVar16 = fVar13;
    } while (iVar6 != 0);
    if (iVar10 != 0) {
      uVar11 = *puVar9;
      uVar12 = puVar9[1];
      fVar14 = (float)(uint)puVar9[2];
      *(float *)(ar7 + 0x14) = fVar13;
      *(undefined4 *)(ar7 + 0x10) = uVar12;
      *(undefined4 *)(ar7 + 0xc) = uVar11;
      fVar15 = fVar14 + in_fr4;
      if (fVar14 + in_fr4 < in_fr4) {
        fVar15 = in_fr4;
      }
      iVar3 = iVar3 + iVar10 + 1;
      *(undefined4 *)(ar7 + 0xc) = 0xf0000000;
      *(float *)(ar7 + 0x24) = fVar15;
      ar7 = ar7 + 0x2c;
    }
    uVar2 = uVar2 - 1;
  } while (uVar2 != 0);
  _DAT_8c4aa520 = _DAT_8c4aa520 + iVar3;
  _DAT_8c4aa51c = _DAT_8c4aa51c + iVar4;
  return ar7;
}

__asm__(".globl _FUN_8c229a7c\n.set _FUN_8c229a7c, _FUN_8c229a7c_def\n");
