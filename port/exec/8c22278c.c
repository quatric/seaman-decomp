#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 * FUN_8c22278c_def(short *ar4,int ar5,uint ar6,undefined4 *ar7)

{
  ring[rp++ & 255] = "FUN_8c22278c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 36; for (int i_ = 0; i_ < 36; i_++) z_[i_] = 0; }
  int iVar1;
  uint uVar2;
  short *psVar3;
  short *psVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float in_fr5 = 0;
  float in_fr4 = 0;
  float in_fr7 = 0;
  float in_fr6 = 0;
  undefined4 uVar21;
  undefined4 uVar22;
  float fVar23;
  undefined4 uVar24;
  
  uVar5 = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa4f0);
  if (((*(undefined4 *)(unsigned)(unsigned)0x8c4aa4f0) & 0x20000) != 0) {
    fVar16 = (*(undefined4 *)(unsigned)(unsigned)0x8c277af8) + 0.5;
    fVar15 = (*(undefined4 *)(unsigned)(unsigned)0x8c277afc) + 0.5;
    iVar7 = 0;
    iVar9 = 0;
    uVar5 = ar6 & 0x3fff;
    (*(float *)(fr0_ - 0x24)) = 1.0;
    if (((*(undefined4 *)(unsigned)(unsigned)0x8c4aa4f0) & 0x80000000) != 0) {
      (*(float *)(fr0_ - 0x24)) = -1.0;
    }
    do {
      iVar12 = (int)*ar4;
      psVar4 = ar4 + 1;
      psVar3 = ar4 + 2;
      fVar23 = (*(float *)(fr0_ - 0x24));
      if (iVar12 < 0) {
        fVar23 = -(*(float *)(fr0_ - 0x24));
        iVar12 = -iVar12;
      }
      ar4 = ar4 + 3;
      iVar9 = iVar9 + iVar12;
      iVar6 = 0;
      iVar12 = iVar12 + -2;
      iVar1 = *psVar3 * 0x40 + ar5;
      iVar14 = *psVar4 * 0x40 + ar5;
      do {
        iVar13 = iVar1;
        iVar1 = *ar4 * 0x40 + ar5;
        if (0.0 <= ((*(float *)(unsigned)(iVar13 + 4) - *(float *)(unsigned)(iVar14 + 4)) *
                    (*(float *)(unsigned)(iVar1 + 8) - *(float *)(unsigned)(iVar13 + 8)) -
                   (*(float *)(unsigned)(iVar13 + 8) - *(float *)(unsigned)(iVar14 + 8)) *
                   (*(float *)(unsigned)(iVar1 + 4) - *(float *)(unsigned)(iVar13 + 4))) * fVar23) {
          if (iVar6 != 0) {
            uVar24 = *(undefined4 *)(unsigned)(iVar13 + 4);
            uVar22 = *(undefined4 *)(unsigned)(iVar13 + 8);
            uVar21 = *(undefined4 *)(unsigned)(iVar13 + 0xc);
            fVar17 = *(float *)(unsigned)(iVar13 + 0x28);
            ar7[5] = *(float *)(unsigned)(iVar13 + 0x2c) * 0.5 + fVar15;
            ar7[4] = fVar17 * 0.5 + fVar16;
            ar7[3] = uVar21;
            ar7[2] = uVar22;
            ar7[1] = uVar24;
            *ar7 = 0xf0000000;
            fVar17 = *(float *)(unsigned)(iVar13 + 0x10);
            fVar18 = *(float *)(unsigned)(iVar13 + 0x14);
            fVar19 = *(float *)(unsigned)(iVar13 + 0x18);
            fVar20 = *(float *)(unsigned)(iVar13 + 0x1c);
            uVar21 = *(undefined4 *)(unsigned)(iVar13 + 0x34);
            uVar22 = *(undefined4 *)(unsigned)(iVar13 + 0x38);
            ar7[0xf] = *(undefined4 *)(unsigned)(iVar13 + 0x3c);
            ar7[0xe] = uVar22;
            ar7[0xd] = uVar21;
            ar7[0xb] = in_fr7 + fVar20;
            ar7[10] = in_fr6 + fVar19;
            ar7[9] = in_fr5 + fVar18;
            ar7[8] = in_fr4 * fVar17;
            iVar7 = iVar7 + iVar6 + 1;
            iVar6 = 0;
            ar7 = ar7 + 0x10;
          }
        }
        else {
          if (iVar6 == 0) {
            uVar24 = *(undefined4 *)(unsigned)(iVar14 + 4);
            uVar21 = *(undefined4 *)(unsigned)(iVar14 + 8);
            uVar22 = *(undefined4 *)(unsigned)(iVar14 + 0xc);
            fVar17 = *(float *)(unsigned)(iVar14 + 0x28);
            ar7[5] = *(float *)(unsigned)(iVar14 + 0x2c) * 0.5 + fVar15;
            ar7[4] = fVar17 * 0.5 + fVar16;
            ar7[3] = uVar22;
            ar7[2] = uVar21;
            ar7[1] = uVar24;
            *ar7 = 0xe0000000;
            fVar17 = *(float *)(unsigned)(iVar14 + 0x10);
            fVar18 = *(float *)(unsigned)(iVar14 + 0x14);
            fVar19 = *(float *)(unsigned)(iVar14 + 0x18);
            fVar20 = *(float *)(unsigned)(iVar14 + 0x1c);
            uVar21 = *(undefined4 *)(unsigned)(iVar14 + 0x34);
            uVar22 = *(undefined4 *)(unsigned)(iVar14 + 0x38);
            ar7[0xf] = *(undefined4 *)(unsigned)(iVar14 + 0x3c);
            ar7[0xe] = uVar22;
            ar7[0xd] = uVar21;
            ar7[0xb] = in_fr7 + fVar20;
            ar7[10] = in_fr6 + fVar19;
            ar7[9] = in_fr5 + fVar18;
            ar7[8] = in_fr4 * fVar17;
            iVar6 = 1;
            ar7 = ar7 + 0x10;
          }
          uVar21 = *(undefined4 *)(unsigned)(iVar13 + 4);
          uVar24 = *(undefined4 *)(unsigned)(iVar13 + 8);
          uVar22 = *(undefined4 *)(unsigned)(iVar13 + 0xc);
          fVar17 = *(float *)(unsigned)(iVar13 + 0x28);
          ar7[5] = *(float *)(unsigned)(iVar13 + 0x2c) * 0.5 + fVar15;
          ar7[4] = fVar17 * 0.5 + fVar16;
          ar7[3] = uVar22;
          ar7[2] = uVar24;
          ar7[1] = uVar21;
          *ar7 = 0xe0000000;
          fVar17 = *(float *)(unsigned)(iVar13 + 0x10);
          fVar18 = *(float *)(unsigned)(iVar13 + 0x14);
          fVar19 = *(float *)(unsigned)(iVar13 + 0x18);
          fVar20 = *(float *)(unsigned)(iVar13 + 0x1c);
          uVar22 = *(undefined4 *)(unsigned)(iVar13 + 0x34);
          uVar21 = *(undefined4 *)(unsigned)(iVar13 + 0x38);
          ar7[0xf] = *(undefined4 *)(unsigned)(iVar13 + 0x3c);
          ar7[0xe] = uVar21;
          ar7[0xd] = uVar22;
          ar7[0xb] = in_fr7 + fVar20;
          ar7[10] = in_fr6 + fVar19;
          ar7[9] = in_fr5 + fVar18;
          ar7[8] = in_fr4 * fVar17;
          ar7 = ar7 + 0x10;
          iVar6 = iVar6 + 1;
        }
        ar4 = ar4 + (ar6 >> 0xe & 3) + 1;
        iVar12 = iVar12 + -1;
        fVar23 = -fVar23;
        iVar14 = iVar13;
      } while (iVar12 != 0);
      if (iVar6 != 0) {
        uVar21 = *(undefined4 *)(unsigned)(iVar1 + 4);
        uVar24 = *(undefined4 *)(unsigned)(iVar1 + 8);
        uVar22 = *(undefined4 *)(unsigned)(iVar1 + 0xc);
        fVar23 = *(float *)(unsigned)(iVar1 + 0x28);
        ar7[5] = *(float *)(unsigned)(iVar1 + 0x2c) * 0.5 + fVar15;
        ar7[4] = fVar23 * 0.5 + fVar16;
        ar7[3] = uVar22;
        ar7[2] = uVar24;
        ar7[1] = uVar21;
        *ar7 = 0xf0000000;
        fVar23 = *(float *)(unsigned)(iVar1 + 0x10);
        fVar17 = *(float *)(unsigned)(iVar1 + 0x14);
        fVar18 = *(float *)(unsigned)(iVar1 + 0x18);
        fVar19 = *(float *)(unsigned)(iVar1 + 0x1c);
        uVar21 = *(undefined4 *)(unsigned)(iVar1 + 0x34);
        uVar22 = *(undefined4 *)(unsigned)(iVar1 + 0x38);
        ar7[0xf] = *(undefined4 *)(unsigned)(iVar1 + 0x3c);
        ar7[0xe] = uVar22;
        ar7[0xd] = uVar21;
        ar7[0xb] = in_fr7 + fVar19;
        ar7[10] = in_fr6 + fVar18;
        ar7[9] = in_fr5 + fVar17;
        ar7[8] = in_fr4 * fVar23;
        iVar7 = iVar7 + iVar6 + 1;
        ar7 = ar7 + 0x10;
      }
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
    (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) + iVar7;
    (*(undefined4 *)(unsigned)(unsigned)0x8c4aa51c) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa51c) + iVar9;
    return ar7;
  }
  uVar2 = ar6 & 0x3fff;
  iVar7 = 0;
  iVar9 = 0;
  do {
    iVar12 = (int)*ar4;
    fVar15 = 1.0;
    if ((uVar5 & 0x80000000) != 0) {
      fVar15 = -1.0;
    }
    puVar8 = (undefined4 *)(unsigned)(ar4[1] * 0x40 + ar5);
    if (iVar12 < 0) {
      iVar12 = -iVar12;
      fVar15 = -fVar15;
    }
    iVar9 = iVar9 + iVar12;
    iVar12 = iVar12 + -2;
    iVar1 = 0;
    psVar4 = ar4 + 3;
    puVar10 = (undefined4 *)(unsigned)(ar4[2] * 0x40 + ar5);
    while( true ) {
      ar4 = psVar4 + 1;
      puVar11 = (undefined4 *)(unsigned)(*psVar4 * 0x40 + ar5);
      fVar16 = (((float)(uint)puVar11[2] - (float)(uint)puVar10[2]) * ((float)(uint)puVar8[1] - (float)(uint)puVar10[1]) -
               ((float)(uint)puVar11[1] - (float)(uint)puVar10[1]) * ((float)(uint)puVar8[2] - (float)(uint)puVar10[2])) *
               fVar15;
      fVar15 = -fVar15;
      if (fVar16 <= 0.0) {
        puVar8 = puVar10;
        if (iVar1 != 0) {
          uVar21 = *puVar10;
          uVar22 = puVar10[1];
          ar7[5] = (float)(uint)puVar10[10] * 0.5 + 0.5;
          ar7[4] = uVar22;
          ar7[3] = uVar21;
          iVar7 = iVar7 + iVar1 + 1;
          ar7[3] = 0xf0000000;
          iVar1 = 0;
          fVar16 = (float)(uint)puVar10[2];
          fVar23 = (float)(uint)puVar10[3];
          uVar21 = puVar10[8];
          ar7[0x12] = puVar10[9];
          ar7[0x11] = uVar21;
          puVar8 = puVar10 + -6;
          ar7[0x10] = fVar23 + in_fr6;
          ar7[0xf] = fVar16 * in_fr4;
          ar7 = ar7 + 0x17;
        }
      }
      else {
        if (iVar1 == 0) {
          uVar21 = *puVar8;
          uVar22 = puVar8[1];
          ar7[5] = (float)(uint)puVar8[10] * 0.5 + 0.5;
          ar7[4] = uVar22;
          iVar1 = 1;
          ar7[3] = uVar21;
          ar7[3] = 0xe0000000;
          fVar16 = (float)(uint)puVar8[2];
          fVar23 = (float)(uint)puVar8[3];
          uVar21 = puVar8[8];
          ar7[0x12] = puVar8[9];
          ar7[0x11] = uVar21;
          ar7[0x10] = fVar23 + in_fr6;
          ar7[0xf] = fVar16 * in_fr4;
          ar7 = ar7 + 0x17;
        }
        uVar21 = *puVar10;
        uVar22 = puVar10[1];
        ar7[5] = (float)(uint)puVar10[10] * 0.5 + 0.5;
        ar7[4] = uVar22;
        iVar1 = iVar1 + 1;
        ar7[3] = uVar21;
        ar7[3] = 0xe0000000;
        fVar16 = (float)(uint)puVar10[2];
        fVar23 = (float)(uint)puVar10[3];
        uVar21 = puVar10[8];
        ar7[0x12] = puVar10[9];
        ar7[0x11] = uVar21;
        ar7[0x10] = fVar23 + in_fr6;
        ar7[0xf] = fVar16 * in_fr4;
        ar7 = ar7 + 0x17;
        puVar8 = puVar10 + -6;
      }
      iVar12 = iVar12 + -1;
      if (iVar12 == 0) break;
      psVar4 = ar4 + (ar6 >> 0xe & 3);
      puVar10 = puVar11;
    }
    if (iVar1 != 0) {
      uVar21 = *puVar11;
      uVar22 = puVar11[1];
      ar7[5] = (float)(uint)puVar11[10] * 0.5 + 0.5;
      ar7[4] = uVar22;
      ar7[3] = uVar21;
      iVar7 = iVar7 + iVar1 + 1;
      ar7[3] = 0xf0000000;
      fVar15 = (float)(uint)puVar11[2];
      fVar16 = (float)(uint)puVar11[3];
      uVar21 = puVar11[8];
      ar7[0x12] = puVar11[9];
      ar7[0x11] = uVar21;
      ar7[0x10] = fVar16 + in_fr6;
      ar7[0xf] = fVar15 * in_fr4;
      ar7 = ar7 + 0x17;
    }
    uVar2 = uVar2 - 1;
  } while (uVar2 != 0);
  (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) + iVar7;
  (*(undefined4 *)(unsigned)(unsigned)0x8c4aa51c) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa51c) + iVar9;
  return ar7;
}

__asm__(".globl _FUN_8c22278c\n.set _FUN_8c22278c, _FUN_8c22278c_def\n");
