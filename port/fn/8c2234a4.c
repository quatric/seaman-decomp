#include "../decls.h"
int FUN_8c2234a4_def(short *ar4,int ar5,uint ar6,int ar7)

{
  short sVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  short *psVar6;
  short *psVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  int iVar12;
  float fVar13;
  undefined4 uVar14;
  float fVar15;
  undefined4 uVar16;
  float fVar17;
  float in_fr5;
  float in_fr4;
  float in_fr7;
  float in_fr6;
  float fVar18;
  float fVar19;
  
  uVar2 = _DAT_8c4aa4f0;
  uVar3 = ar6 & 0x3fff;
  iVar4 = 0;
  iVar5 = 0;
  do {
    iVar8 = (int)*ar4;
    fVar18 = 1.0;
    if ((uVar2 & 0x80000000) != 0) {
      fVar18 = -1.0;
    }
    puVar9 = (undefined4 *)(ar4[1] * 0x40 + ar5);
    if (iVar8 < 0) {
      iVar8 = -iVar8;
      fVar18 = -fVar18;
    }
    iVar5 = iVar5 + iVar8;
    iVar8 = iVar8 + -2;
    iVar12 = 0;
    psVar6 = ar4 + 4;
    psVar7 = ar4 + 5;
    ar4 = ar4 + 7;
    puVar10 = (undefined4 *)(*psVar6 * 0x40 + ar5);
    fVar13 = (float)(int)*psVar7 * in_fr4;
    do {
      sVar1 = ar4[1];
      puVar11 = (undefined4 *)(*ar4 * 0x40 + ar5);
      fVar19 = (((float)(uint)puVar11[2] - (float)(uint)puVar10[2]) * ((float)(uint)puVar9[1] - (float)(uint)puVar10[1]) -
               ((float)(uint)puVar11[1] - (float)(uint)puVar10[1]) * ((float)(uint)puVar9[2] - (float)(uint)puVar10[2])) *
               fVar18;
      fVar18 = -fVar18;
      if (fVar19 <= 0.0) {
        puVar9 = puVar10;
        if (iVar12 != 0) {
          uVar14 = *puVar10;
          uVar16 = puVar10[1];
          *(float *)(ar7 + 0x14) = fVar13;
          *(undefined4 *)(ar7 + 0x10) = uVar16;
          *(undefined4 *)(ar7 + 0xc) = uVar14;
          iVar4 = iVar4 + iVar12 + 1;
          *(undefined4 *)(ar7 + 0xc) = 0xf0000000;
          iVar12 = 0;
          fVar19 = (float)(uint)puVar10[2];
          fVar15 = (float)(uint)puVar10[3];
          fVar13 = (float)(uint)puVar10[8];
          *(undefined4 *)(ar7 + 0x48) = puVar10[9];
          *(float *)(ar7 + 0x44) = fVar13 + in_fr6;
          puVar9 = puVar10 + -6;
          *(float *)(ar7 + 0x40) = fVar15 + in_fr7;
          *(float *)(ar7 + 0x3c) = fVar19 * in_fr5;
          ar7 = ar7 + 0x5c;
        }
      }
      else {
        if (iVar12 == 0) {
          uVar14 = *puVar9;
          iVar12 = 1;
          uVar16 = puVar9[1];
          *(float *)(ar7 + 0x14) = fVar19;
          *(undefined4 *)(ar7 + 0x10) = uVar16;
          *(undefined4 *)(ar7 + 0xc) = uVar14;
          *(undefined4 *)(ar7 + 0xc) = 0xe0000000;
          fVar15 = (float)(uint)puVar9[2];
          fVar17 = (float)(uint)puVar9[3];
          fVar19 = (float)(uint)puVar9[8];
          *(undefined4 *)(ar7 + 0x48) = puVar9[9];
          *(float *)(ar7 + 0x44) = fVar19 + in_fr6;
          *(float *)(ar7 + 0x40) = fVar17 + in_fr7;
          *(float *)(ar7 + 0x3c) = fVar15 * in_fr5;
          ar7 = ar7 + 0x5c;
        }
        uVar14 = *puVar10;
        iVar12 = iVar12 + 1;
        uVar16 = puVar10[1];
        *(float *)(ar7 + 0x14) = fVar13;
        *(undefined4 *)(ar7 + 0x10) = uVar16;
        *(undefined4 *)(ar7 + 0xc) = uVar14;
        *(undefined4 *)(ar7 + 0xc) = 0xe0000000;
        fVar19 = (float)(uint)puVar10[2];
        fVar15 = (float)(uint)puVar10[3];
        fVar13 = (float)(uint)puVar10[8];
        *(undefined4 *)(ar7 + 0x48) = puVar10[9];
        *(float *)(ar7 + 0x44) = fVar13 + in_fr6;
        *(float *)(ar7 + 0x40) = fVar15 + in_fr7;
        *(float *)(ar7 + 0x3c) = fVar19 * in_fr5;
        ar7 = ar7 + 0x5c;
        puVar9 = puVar10 + -6;
      }
      iVar8 = iVar8 + -1;
      ar4 = ar4 + (ar6 >> 0xe & 3) + 3;
      puVar10 = puVar11;
      fVar13 = (float)(int)sVar1 * in_fr4;
    } while (iVar8 != 0);
    if (iVar12 != 0) {
      uVar14 = *puVar11;
      uVar16 = puVar11[1];
      *(float *)(ar7 + 0x14) = (float)(int)sVar1 * in_fr4;
      *(undefined4 *)(ar7 + 0x10) = uVar16;
      *(undefined4 *)(ar7 + 0xc) = uVar14;
      iVar4 = iVar4 + iVar12 + 1;
      *(undefined4 *)(ar7 + 0xc) = 0xf0000000;
      fVar13 = (float)(uint)puVar11[2];
      fVar19 = (float)(uint)puVar11[3];
      fVar18 = (float)(uint)puVar11[8];
      *(undefined4 *)(ar7 + 0x48) = puVar11[9];
      *(float *)(ar7 + 0x44) = fVar18 + in_fr6;
      *(float *)(ar7 + 0x40) = fVar19 + in_fr7;
      *(float *)(ar7 + 0x3c) = fVar13 * in_fr5;
      ar7 = ar7 + 0x5c;
    }
    uVar3 = uVar3 - 1;
  } while (uVar3 != 0);
  _DAT_8c4aa520 = _DAT_8c4aa520 + iVar4;
  _DAT_8c4aa51c = _DAT_8c4aa51c + iVar5;
  return ar7;
}

__asm__(".globl _FUN_8c2234a4\n.set _FUN_8c2234a4, _FUN_8c2234a4_def\n");
