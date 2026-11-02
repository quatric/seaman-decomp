#include "../decls.h"
int FUN_8c22b5b0_def(short *ar4,int ar5,uint ar6,int ar7)

{
  short sVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  short *psVar6;
  short *psVar7;
  short *psVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  int iVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  float in_fr5;
  float in_fr4;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  
  uVar2 = _DAT_8c4aa4f0;
  uVar3 = ar6 & 0x3fff;
  iVar4 = 0;
  iVar5 = 0;
  do {
    iVar9 = (int)*ar4;
    psVar6 = ar4 + 2;
    fVar17 = 1.0;
    if ((uVar2 & 0x80000000) != 0) {
      fVar17 = -1.0;
    }
    puVar10 = (undefined4 *)(ar4[1] * 0x20 + ar5);
    if (iVar9 < 0) {
      iVar9 = -iVar9;
      fVar17 = -fVar17;
    }
    iVar5 = iVar5 + iVar9;
    iVar9 = iVar9 + -2;
    iVar13 = 0;
    psVar7 = ar4 + 4;
    psVar8 = ar4 + 5;
    ar4 = ar4 + 7;
    puVar11 = (undefined4 *)(*psVar7 * 0x20 + ar5);
    fVar18 = (float)(int)*psVar6 * in_fr5;
    fVar19 = (float)(int)*psVar8 * in_fr5;
    do {
      sVar1 = ar4[1];
      puVar12 = (undefined4 *)(*ar4 * 0x20 + ar5);
      fVar16 = (((float)(uint)puVar10[2] - (float)(uint)puVar11[2]) * ((float)(uint)puVar12[1] - (float)(uint)puVar11[1]) -
               ((float)(uint)puVar12[2] - (float)(uint)puVar11[2]) * ((float)(uint)puVar10[1] - (float)(uint)puVar11[1])) *
               fVar17;
      fVar17 = -fVar17;
      if (0.0 <= fVar16) {
        puVar10 = puVar11;
        if (iVar13 != 0) {
          uVar14 = *puVar11;
          uVar15 = puVar11[1];
          fVar16 = (float)(uint)puVar11[2];
          puVar10 = puVar11 + -3;
          *(float *)(ar7 + 0x14) = fVar19;
          *(undefined4 *)(ar7 + 0x10) = uVar15;
          *(undefined4 *)(ar7 + 0xc) = uVar14;
          fVar18 = fVar16 + in_fr4;
          if (fVar16 + in_fr4 < in_fr4) {
            fVar18 = in_fr4;
          }
          iVar4 = iVar4 + iVar13 + 1;
          *(undefined4 *)(ar7 + 0xc) = 0xf0000000;
          iVar13 = 0;
          *(float *)(ar7 + 0x24) = fVar18;
          ar7 = ar7 + 0x2c;
        }
      }
      else {
        if (iVar13 == 0) {
          uVar14 = *puVar10;
          iVar13 = 1;
          uVar15 = puVar10[1];
          fVar16 = (float)(uint)puVar10[2];
          *(float *)(ar7 + 0x14) = fVar18;
          *(undefined4 *)(ar7 + 0x10) = uVar15;
          *(undefined4 *)(ar7 + 0xc) = uVar14;
          fVar18 = fVar16 + in_fr4;
          if (fVar16 + in_fr4 < in_fr4) {
            fVar18 = in_fr4;
          }
          *(undefined4 *)(ar7 + 0xc) = 0xe0000000;
          *(float *)(ar7 + 0x24) = fVar18;
          ar7 = ar7 + 0x2c;
        }
        uVar14 = *puVar11;
        iVar13 = iVar13 + 1;
        uVar15 = puVar11[1];
        fVar16 = (float)(uint)puVar11[2];
        *(float *)(ar7 + 0x14) = fVar19;
        *(undefined4 *)(ar7 + 0x10) = uVar15;
        *(undefined4 *)(ar7 + 0xc) = uVar14;
        fVar18 = fVar16 + in_fr4;
        if (fVar16 + in_fr4 < in_fr4) {
          fVar18 = in_fr4;
        }
        *(undefined4 *)(ar7 + 0xc) = 0xe0000000;
        *(float *)(ar7 + 0x24) = fVar18;
        ar7 = ar7 + 0x2c;
        puVar10 = puVar11 + -3;
      }
      ar4 = ar4 + (ar6 >> 0xe & 3) + 3;
      iVar9 = iVar9 + -1;
      puVar11 = puVar12;
      fVar18 = fVar19;
      fVar19 = (float)(int)sVar1 * in_fr5;
    } while (iVar9 != 0);
    if (iVar13 != 0) {
      uVar14 = *puVar12;
      uVar15 = puVar12[1];
      fVar17 = (float)(uint)puVar12[2];
      *(float *)(ar7 + 0x14) = (float)(int)sVar1 * in_fr5;
      fVar17 = fVar17 + in_fr4;
      *(undefined4 *)(ar7 + 0x10) = uVar15;
      *(undefined4 *)(ar7 + 0xc) = uVar14;
      if (fVar17 < in_fr4) {
        fVar17 = in_fr4;
      }
      iVar4 = iVar4 + iVar13 + 1;
      *(undefined4 *)(ar7 + 0xc) = 0xf0000000;
      *(float *)(ar7 + 0x24) = fVar17;
      ar7 = ar7 + 0x2c;
    }
    uVar3 = uVar3 - 1;
  } while (uVar3 != 0);
  _DAT_8c4aa520 = _DAT_8c4aa520 + iVar4;
  _DAT_8c4aa51c = _DAT_8c4aa51c + iVar5;
  return ar7;
}

__asm__(".globl _FUN_8c22b5b0\n.set _FUN_8c22b5b0, _FUN_8c22b5b0_def\n");
