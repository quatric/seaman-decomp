#include "../decls.h"
undefined4 * FUN_8c221fbc_def(short *ar4,int ar5,uint ar6,undefined4 *ar7)

{
  int iVar1;
  short *psVar2;
  short *psVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float in_fr5;
  float in_fr4;
  float in_fr7;
  float in_fr6;
  float in_fr9;
  float in_fr8;
  float fVar15;
  undefined4 uVar16;
  undefined8 in_dr10;
  undefined4 uVar17;
  undefined4 uVar18;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_34;
  
  uVar4 = ar6 & 0x3fff;
  if ((_DAT_8c4aa4f0 & 0x20000) == 0) {
    fStack_5c = 0.5;
    fStack_58 = 0.5;
  }
  else {
    fStack_5c = DAT_8c277af8 + 0.5;
    fStack_58 = DAT_8c277afc + 0.5;
  }
  iVar6 = 0;
  iVar7 = 0;
  fStack_34 = 1.0;
  if ((_DAT_8c4aa4f0 & 0x80000000) != 0) {
    fStack_34 = -1.0;
  }
  do {
    iVar8 = (int)*ar4;
    psVar2 = ar4 + 1;
    psVar3 = ar4 + 2;
    fStack_54 = fStack_34;
    if (iVar8 < 0) {
      iVar8 = -iVar8;
      fStack_54 = -fStack_34;
    }
    ar4 = ar4 + 3;
    iVar7 = iVar7 + iVar8;
    iVar5 = 0;
    iVar8 = iVar8 + -2;
    iVar1 = *psVar3 * 0x40 + ar5;
    iVar10 = *psVar2 * 0x40 + ar5;
    do {
      iVar9 = iVar1;
      iVar1 = *ar4 * 0x40 + ar5;
      fVar13 = (float)((ulonglong)in_dr10 >> 0x20);
      fVar15 = ((*(float *)(iVar9 + 4) - *(float *)(iVar10 + 4)) *
                (*(float *)(iVar1 + 8) - *(float *)(iVar9 + 8)) -
               (*(float *)(iVar9 + 8) - *(float *)(iVar10 + 8)) *
               (*(float *)(iVar1 + 4) - *(float *)(iVar9 + 4))) * fStack_54;
      in_dr10 = CONCAT44(fVar13,fVar15);
      if (fVar15 < 0.0) {
        if (iVar5 == 0) {
          uVar17 = *(undefined4 *)(iVar10 + 4);
          uVar16 = *(undefined4 *)(iVar10 + 8);
          uVar18 = *(undefined4 *)(iVar10 + 0xc);
          fVar15 = *(float *)(iVar10 + 0x28);
          ar7[5] = *(float *)(iVar10 + 0x2c) * 0.5 + fStack_58;
          ar7[4] = fVar15 * 0.5 + fStack_5c;
          ar7[3] = uVar18;
          ar7[2] = uVar16;
          ar7[1] = uVar17;
          *ar7 = 0xe0000000;
          fVar14 = *(float *)(iVar10 + 0x10);
          fVar15 = *(float *)(iVar10 + 0x14);
          fVar11 = *(float *)(iVar10 + 0x18);
          fVar12 = *(float *)(iVar10 + 0x1c);
          uVar16 = *(undefined4 *)(iVar10 + 0x34);
          uVar17 = *(undefined4 *)(iVar10 + 0x38);
          ar7[0xf] = *(undefined4 *)(iVar10 + 0x3c);
          ar7[0xe] = uVar17;
          ar7[0xd] = uVar16;
          ar7[0xb] = fVar12 * in_fr7 + fVar13;
          ar7[10] = fVar11 * in_fr6 + in_fr9;
          ar7[9] = fVar15 * in_fr5 + in_fr8;
          ar7[8] = in_fr4 * fVar14;
          iVar5 = 1;
          ar7 = ar7 + 0x10;
        }
        uVar17 = *(undefined4 *)(iVar9 + 4);
        uVar18 = *(undefined4 *)(iVar9 + 8);
        uVar16 = *(undefined4 *)(iVar9 + 0xc);
        fVar15 = *(float *)(iVar9 + 0x28);
        ar7[5] = *(float *)(iVar9 + 0x2c) * 0.5 + fStack_58;
        ar7[4] = fVar15 * 0.5 + fStack_5c;
        ar7[3] = uVar16;
        ar7[2] = uVar18;
        ar7[1] = uVar17;
        *ar7 = 0xe0000000;
        fVar14 = *(float *)(iVar9 + 0x10);
        fVar15 = *(float *)(iVar9 + 0x14);
        fVar11 = *(float *)(iVar9 + 0x18);
        fVar12 = *(float *)(iVar9 + 0x1c);
        uVar17 = *(undefined4 *)(iVar9 + 0x34);
        uVar16 = *(undefined4 *)(iVar9 + 0x38);
        in_dr10 = CONCAT44(fVar13,*(undefined4 *)(iVar9 + 0x3c));
        ar7[0xf] = *(undefined4 *)(iVar9 + 0x3c);
        ar7[0xe] = uVar16;
        ar7[0xd] = uVar17;
        ar7[0xb] = fVar12 * in_fr7 + fVar13;
        ar7[10] = fVar11 * in_fr6 + in_fr9;
        ar7[9] = fVar15 * in_fr5 + in_fr8;
        ar7[8] = in_fr4 * fVar14;
        ar7 = ar7 + 0x10;
        iVar5 = iVar5 + 1;
      }
      else if (iVar5 != 0) {
        uVar16 = *(undefined4 *)(iVar9 + 4);
        uVar18 = *(undefined4 *)(iVar9 + 8);
        uVar17 = *(undefined4 *)(iVar9 + 0xc);
        fVar15 = *(float *)(iVar9 + 0x28);
        ar7[5] = *(float *)(iVar9 + 0x2c) * 0.5 + fStack_58;
        ar7[4] = fVar15 * 0.5 + fStack_5c;
        ar7[3] = uVar17;
        ar7[2] = uVar18;
        ar7[1] = uVar16;
        *ar7 = 0xf0000000;
        fVar14 = *(float *)(iVar9 + 0x10);
        fVar15 = *(float *)(iVar9 + 0x14);
        fVar11 = *(float *)(iVar9 + 0x18);
        fVar12 = *(float *)(iVar9 + 0x1c);
        uVar17 = *(undefined4 *)(iVar9 + 0x34);
        uVar16 = *(undefined4 *)(iVar9 + 0x38);
        in_dr10 = CONCAT44(fVar13,*(undefined4 *)(iVar9 + 0x3c));
        ar7[0xf] = *(undefined4 *)(iVar9 + 0x3c);
        ar7[0xe] = uVar16;
        ar7[0xd] = uVar17;
        ar7[0xb] = fVar12 * in_fr7 + fVar13;
        ar7[10] = fVar11 * in_fr6 + in_fr9;
        ar7[9] = fVar15 * in_fr5 + in_fr8;
        ar7[8] = in_fr4 * fVar14;
        iVar6 = iVar6 + iVar5 + 1;
        iVar5 = 0;
        ar7 = ar7 + 0x10;
      }
      ar4 = ar4 + (ar6 >> 0xe & 3) + 1;
      iVar8 = iVar8 + -1;
      fStack_54 = -fStack_54;
      iVar10 = iVar9;
    } while (iVar8 != 0);
    if (iVar5 != 0) {
      fVar14 = (float)((ulonglong)in_dr10 >> 0x20);
      uVar16 = *(undefined4 *)(iVar1 + 4);
      uVar18 = *(undefined4 *)(iVar1 + 8);
      uVar17 = *(undefined4 *)(iVar1 + 0xc);
      fVar15 = *(float *)(iVar1 + 0x28);
      ar7[5] = *(float *)(iVar1 + 0x2c) * 0.5 + fStack_58;
      ar7[4] = fVar15 * 0.5 + fStack_5c;
      ar7[3] = uVar17;
      ar7[2] = uVar18;
      ar7[1] = uVar16;
      *ar7 = 0xf0000000;
      fVar12 = *(float *)(iVar1 + 0x10);
      fVar15 = *(float *)(iVar1 + 0x14);
      fVar13 = *(float *)(iVar1 + 0x18);
      fVar11 = *(float *)(iVar1 + 0x1c);
      uVar16 = *(undefined4 *)(iVar1 + 0x34);
      uVar17 = *(undefined4 *)(iVar1 + 0x38);
      in_dr10 = CONCAT44(fVar14,*(undefined4 *)(iVar1 + 0x3c));
      ar7[0xf] = *(undefined4 *)(iVar1 + 0x3c);
      ar7[0xe] = uVar17;
      ar7[0xd] = uVar16;
      ar7[0xb] = fVar11 * in_fr7 + fVar14;
      ar7[10] = fVar13 * in_fr6 + in_fr9;
      ar7[9] = fVar15 * in_fr5 + in_fr8;
      ar7[8] = in_fr4 * fVar12;
      iVar6 = iVar6 + iVar5 + 1;
      ar7 = ar7 + 0x10;
    }
    uVar4 = uVar4 - 1;
  } while (uVar4 != 0);
  _DAT_8c4aa520 = _DAT_8c4aa520 + iVar6;
  _DAT_8c4aa51c = _DAT_8c4aa51c + iVar7;
  return ar7;
}

__asm__(".globl _FUN_8c221fbc\n.set _FUN_8c221fbc, _FUN_8c221fbc_def\n");
