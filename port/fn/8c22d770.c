#include "../decls.h"
int FUN_8c22d770_def(short *ar4,int ar5,uint ar6,int ar7)

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
  float fVar14;
  
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
    puVar7 = (undefined4 *)(ar4[1] * 0x20 + ar5);
    if (iVar6 < 0) {
      iVar6 = -iVar6;
      fVar14 = -fVar14;
    }
    iVar4 = iVar4 + iVar6;
    iVar6 = iVar6 + -2;
    iVar10 = 0;
    psVar5 = ar4 + 4;
    ar4 = ar4 + 7;
    puVar8 = (undefined4 *)(*psVar5 * 0x20 + ar5);
    do {
      puVar9 = (undefined4 *)(*ar4 * 0x20 + ar5);
      fVar13 = (((float)(uint)puVar7[2] - (float)(uint)puVar8[2]) * ((float)(uint)puVar9[1] - (float)(uint)puVar8[1]) -
               ((float)(uint)puVar9[2] - (float)(uint)puVar8[2]) * ((float)(uint)puVar7[1] - (float)(uint)puVar8[1])) *
               fVar14;
      fVar14 = -fVar14;
      if (0.0 <= fVar13) {
        puVar7 = puVar8;
        if (iVar10 != 0) {
          fVar13 = (float)(uint)puVar8[6];
          uVar11 = *puVar8;
          uVar12 = puVar8[1];
          *(undefined4 *)(ar7 + 0x1c) = puVar8[2];
          *(float *)(ar7 + 0x18) = fVar13 * 0.5 + 0.5;
          puVar7 = puVar8 + -3;
          *(undefined4 *)(ar7 + 0x14) = uVar12;
          iVar3 = iVar3 + iVar10 + 1;
          *(undefined4 *)(ar7 + 0x10) = uVar11;
          iVar10 = 0;
          *(undefined4 *)(ar7 + 0x10) = 0xf0000000;
          ar7 = ar7 + 0x30;
        }
      }
      else {
        if (iVar10 == 0) {
          fVar13 = (float)(uint)puVar7[6];
          uVar11 = *puVar7;
          uVar12 = puVar7[1];
          *(undefined4 *)(ar7 + 0x1c) = puVar7[2];
          *(float *)(ar7 + 0x18) = fVar13 * 0.5 + 0.5;
          *(undefined4 *)(ar7 + 0x14) = uVar12;
          iVar10 = 1;
          *(undefined4 *)(ar7 + 0x10) = uVar11;
          *(undefined4 *)(ar7 + 0x10) = 0xe0000000;
          ar7 = ar7 + 0x30;
        }
        fVar13 = (float)(uint)puVar8[6];
        uVar11 = *puVar8;
        uVar12 = puVar8[1];
        *(undefined4 *)(ar7 + 0x1c) = puVar8[2];
        *(float *)(ar7 + 0x18) = fVar13 * 0.5 + 0.5;
        *(undefined4 *)(ar7 + 0x14) = uVar12;
        iVar10 = iVar10 + 1;
        *(undefined4 *)(ar7 + 0x10) = uVar11;
        *(undefined4 *)(ar7 + 0x10) = 0xe0000000;
        ar7 = ar7 + 0x30;
        puVar7 = puVar8 + -3;
      }
      iVar6 = iVar6 + -1;
      ar4 = ar4 + (ar6 >> 0xe & 3) + 3;
      puVar8 = puVar9;
    } while (iVar6 != 0);
    if (iVar10 != 0) {
      fVar14 = (float)(uint)puVar9[6];
      uVar11 = *puVar9;
      uVar12 = puVar9[1];
      *(undefined4 *)(ar7 + 0x1c) = puVar9[2];
      *(float *)(ar7 + 0x18) = fVar14 * 0.5 + 0.5;
      *(undefined4 *)(ar7 + 0x14) = uVar12;
      iVar3 = iVar3 + iVar10 + 1;
      *(undefined4 *)(ar7 + 0x10) = uVar11;
      *(undefined4 *)(ar7 + 0x10) = 0xf0000000;
      ar7 = ar7 + 0x30;
    }
    uVar2 = uVar2 - 1;
  } while (uVar2 != 0);
  _DAT_8c4aa520 = _DAT_8c4aa520 + iVar3;
  _DAT_8c4aa51c = _DAT_8c4aa51c + iVar4;
  return ar7;
}

__asm__(".globl _FUN_8c22d770\n.set _FUN_8c22d770, _FUN_8c22d770_def\n");
