#include "../decls.h"
undefined4 * FUN_8c21423c_def(short *ar4,int ar5,uint ar6,undefined4 *ar7)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  short *psVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  float in_fr4;
  float in_fr6;
  float in_fr9;
  float fVar11;
  float fVar12;
  
  uVar1 = ar6 & 0x3fff;
  iVar2 = 0;
  iVar3 = 0;
  do {
    iVar5 = (int)*ar4;
    psVar4 = ar4 + 2;
    puVar6 = (undefined4 *)(ar4[1] * 0x20 + ar5);
    if (iVar5 < 0) {
      iVar5 = -iVar5;
    }
    iVar3 = iVar3 + iVar5;
    uVar9 = *puVar6;
    iVar2 = iVar2 + iVar5;
    uVar10 = puVar6[1];
    iVar5 = iVar5 + -2;
    fVar11 = (float)(uint)puVar6[2];
    ar4 = ar4 + 3;
    puVar7 = (undefined4 *)(*psVar4 * 0x20 + ar5);
    ar7[7] = (float)(uint)puVar6[3] * in_fr6 + in_fr9;
    ar7[6] = fVar11 * in_fr4;
    ar7[5] = uVar10;
    puVar6 = ar7 + 4;
    *puVar6 = uVar9;
    *puVar6 = 0xe0000000;
    uVar9 = *puVar7;
    uVar10 = puVar7[1];
    fVar11 = (float)(uint)puVar7[2] * in_fr4;
    fVar12 = (float)(uint)puVar7[3] * in_fr6;
    do {
      puVar7 = puVar6;
      iVar8 = *ar4 * 0x20 + ar5;
      puVar7[0xf] = fVar12 + in_fr9;
      puVar7[0xe] = fVar11;
      ar4 = ar4 + (ar6 >> 0xe & 3) + 1;
      puVar7[0xd] = uVar10;
      puVar6 = puVar7 + 0xc;
      *puVar6 = uVar9;
      *puVar6 = 0xe0000000;
      iVar5 = iVar5 + -1;
      fVar11 = *(float *)(iVar8 + 0x10) * in_fr4;
      fVar12 = *(float *)(iVar8 + 0x14) * in_fr6;
      uVar9 = *(undefined4 *)(iVar8 + -8);
      uVar10 = *(undefined4 *)(iVar8 + -4);
    } while (iVar5 != 0);
    puVar7[0x1b] = fVar12 + in_fr9;
    puVar7[0x1a] = fVar11;
    puVar7[0x19] = uVar10;
    uVar1 = uVar1 - 1;
    puVar7[0x18] = uVar9;
    puVar7[0x18] = 0xf0000000;
    ar7 = puVar7 + 0x20;
  } while (uVar1 != 0);
  _DAT_8c4aa520 = _DAT_8c4aa520 + iVar2;
  _DAT_8c4aa51c = _DAT_8c4aa51c + iVar3;
  return ar7;
}

__asm__(".globl _FUN_8c21423c\n.set _FUN_8c21423c, _FUN_8c21423c_def\n");
