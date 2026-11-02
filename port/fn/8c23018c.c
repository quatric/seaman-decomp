#include "../decls.h"
int FUN_8c23018c_def(short *ar4,int ar5,uint ar6,int ar7)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  float in_fr4;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  uVar1 = _DAT_8c4aa4f0;
  uVar2 = ar6 & 0x3fff;
  iVar3 = 0;
  iVar4 = 0;
  do {
    iVar5 = (int)*ar4;
    fVar14 = 1.0;
    if ((uVar1 & 0x80000000) != 0) {
      fVar14 = -1.0;
    }
    puVar6 = (undefined4 *)(ar4[1] * 0x20 + ar5);
    if (iVar5 < 0) {
      iVar5 = -iVar5;
      fVar14 = -fVar14;
    }
    iVar4 = iVar4 + iVar5;
    iVar5 = iVar5 + -2;
    iVar9 = 0;
    puVar7 = (undefined4 *)(ar4[4] * 0x20 + ar5);
    ar4 = ar4 + 7;
    fVar13 = (float)(uint)puVar6[6] * 0.5 + 0.5;
    fVar15 = (float)(uint)puVar7[6] * 0.5 + 0.5;
    do {
      puVar8 = (undefined4 *)(*ar4 * 0x20 + ar5);
      fVar16 = (float)(uint)puVar8[6];
      fVar12 = (((float)(uint)puVar6[2] - (float)(uint)puVar7[2]) * ((float)(uint)puVar8[1] - (float)(uint)puVar7[1]) -
               ((float)(uint)puVar8[2] - (float)(uint)puVar7[2]) * ((float)(uint)puVar6[1] - (float)(uint)puVar7[1])) *
               fVar14;
      fVar14 = -fVar14;
      if (0.0 <= fVar12) {
        puVar6 = puVar7;
        if (iVar9 != 0) {
          uVar10 = *puVar7;
          uVar11 = puVar7[1];
          fVar12 = (float)(uint)puVar7[2];
          puVar6 = puVar7 + -3;
          *(float *)(ar7 + 0x14) = fVar15;
          *(undefined4 *)(ar7 + 0x10) = uVar11;
          *(undefined4 *)(ar7 + 0xc) = uVar10;
          fVar13 = fVar12 + in_fr4;
          if (fVar12 + in_fr4 < in_fr4) {
            fVar13 = in_fr4;
          }
          iVar3 = iVar3 + iVar9 + 1;
          *(undefined4 *)(ar7 + 0xc) = 0xf0000000;
          iVar9 = 0;
          *(float *)(ar7 + 0x24) = fVar13;
          ar7 = ar7 + 0x2c;
        }
      }
      else {
        if (iVar9 == 0) {
          uVar10 = *puVar6;
          iVar9 = 1;
          uVar11 = puVar6[1];
          fVar12 = (float)(uint)puVar6[2];
          *(float *)(ar7 + 0x14) = fVar13;
          *(undefined4 *)(ar7 + 0x10) = uVar11;
          *(undefined4 *)(ar7 + 0xc) = uVar10;
          fVar13 = fVar12 + in_fr4;
          if (fVar12 + in_fr4 < in_fr4) {
            fVar13 = in_fr4;
          }
          *(undefined4 *)(ar7 + 0xc) = 0xe0000000;
          *(float *)(ar7 + 0x24) = fVar13;
          ar7 = ar7 + 0x2c;
        }
        uVar10 = *puVar7;
        iVar9 = iVar9 + 1;
        uVar11 = puVar7[1];
        fVar12 = (float)(uint)puVar7[2];
        *(float *)(ar7 + 0x14) = fVar15;
        *(undefined4 *)(ar7 + 0x10) = uVar11;
        *(undefined4 *)(ar7 + 0xc) = uVar10;
        fVar13 = fVar12 + in_fr4;
        if (fVar12 + in_fr4 < in_fr4) {
          fVar13 = in_fr4;
        }
        *(undefined4 *)(ar7 + 0xc) = 0xe0000000;
        *(float *)(ar7 + 0x24) = fVar13;
        ar7 = ar7 + 0x2c;
        puVar6 = puVar7 + -3;
      }
      ar4 = ar4 + (ar6 >> 0xe & 3) + 3;
      fVar12 = fVar16 * 0.5 + 0.5;
      iVar5 = iVar5 + -1;
      puVar7 = puVar8;
      fVar13 = fVar15;
      fVar15 = fVar12;
    } while (iVar5 != 0);
    if (iVar9 != 0) {
      uVar10 = *puVar8;
      uVar11 = puVar8[1];
      fVar13 = (float)(uint)puVar8[2];
      *(float *)(ar7 + 0x14) = fVar12;
      *(undefined4 *)(ar7 + 0x10) = uVar11;
      *(undefined4 *)(ar7 + 0xc) = uVar10;
      fVar14 = fVar13 + in_fr4;
      if (fVar13 + in_fr4 < in_fr4) {
        fVar14 = in_fr4;
      }
      iVar3 = iVar3 + iVar9 + 1;
      *(undefined4 *)(ar7 + 0xc) = 0xf0000000;
      *(float *)(ar7 + 0x24) = fVar14;
      ar7 = ar7 + 0x2c;
    }
    uVar2 = uVar2 - 1;
  } while (uVar2 != 0);
  _DAT_8c4aa520 = _DAT_8c4aa520 + iVar3;
  _DAT_8c4aa51c = _DAT_8c4aa51c + iVar4;
  return ar7;
}

__asm__(".globl _FUN_8c23018c\n.set _FUN_8c23018c, _FUN_8c23018c_def\n");
