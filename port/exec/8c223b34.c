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
undefined4 * FUN_8c223b34_def(short *ar4,int ar5,uint ar6,undefined4 *ar7)

{
  ring[rp++ & 255] = "FUN_8c223b34";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 116; for (int i_ = 0; i_ < 116; i_++) z_[i_] = 0; }
  short sVar1;
  short sVar2;
  int iVar3;
  short *psVar4;
  short *psVar5;
  short *psVar6;
  short *psVar7;
  short *psVar8;
  short *psVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  undefined4 uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float in_fr5 = 0;
  float in_fr4 = 0;
  float in_fr7 = 0;
  float in_fr6 = 0;
  float in_fr9 = 0;
  float in_fr8 = 0;
  float in_fr11 = 0;
  float in_fr10 = 0;
  undefined4 uVar22;
  undefined4 uVar23;
  
  (*(float *)(fr0_ - 0x34)) = 1.0;
  uVar10 = ar6 & 0x3fff;
  iVar12 = 0;
  iVar13 = 0;
  if (((*(undefined4 *)(unsigned)(unsigned)0x8c4aa4f0) & 0x80000000) != 0) {
    (*(float *)(fr0_ - 0x34)) = -1.0;
  }
  do {
    iVar14 = (int)*ar4;
    psVar4 = ar4 + 1;
    psVar5 = ar4 + 2;
    (*(float *)(fr0_ - 0x6c)) = (*(float *)(fr0_ - 0x34));
    if (iVar14 < 0) {
      iVar14 = -iVar14;
      (*(float *)(fr0_ - 0x6c)) = -(*(float *)(fr0_ - 0x34));
    }
    psVar6 = ar4 + 3;
    iVar13 = iVar13 + iVar14;
    iVar14 = iVar14 + -2;
    iVar11 = 0;
    psVar7 = ar4 + 4;
    psVar8 = ar4 + 5;
    psVar9 = ar4 + 6;
    ar4 = ar4 + 7;
    iVar3 = *psVar7 * 0x40 + ar5;
    iVar16 = *psVar4 * 0x40 + ar5;
    fVar18 = (float)(int)*psVar6 * in_fr4;
    fVar19 = (float)(int)*psVar8 * in_fr4;
    (*(float *)(fr0_ - 0x70)) = (float)(int)*psVar9 * in_fr4;
    fVar20 = (float)(int)*psVar5 * in_fr4;
    do {
      (*(float *)(fr0_ - 0x74)) = fVar19;
      iVar15 = iVar3;
      iVar3 = *ar4 * 0x40 + ar5;
      sVar1 = ar4[1];
      sVar2 = ar4[2];
      if (((*(float *)(unsigned)(iVar15 + 4) - *(float *)(unsigned)(iVar16 + 4)) *
           (*(float *)(unsigned)(iVar3 + 8) - *(float *)(unsigned)(iVar15 + 8)) -
          (*(float *)(unsigned)(iVar15 + 8) - *(float *)(unsigned)(iVar16 + 8)) *
          (*(float *)(unsigned)(iVar3 + 4) - *(float *)(unsigned)(iVar15 + 4))) * (*(float *)(fr0_ - 0x6c)) < 0.0) {
        if (iVar11 == 0) {
          uVar17 = *(undefined4 *)(unsigned)(iVar16 + 4);
          uVar22 = *(undefined4 *)(unsigned)(iVar16 + 8);
          uVar23 = *(undefined4 *)(unsigned)(iVar16 + 0xc);
          ar7[5] = fVar18;
          ar7[4] = fVar20;
          ar7[3] = uVar23;
          ar7[2] = uVar22;
          ar7[1] = uVar17;
          *ar7 = 0xe0000000;
          fVar21 = *(float *)(unsigned)(iVar16 + 0x10);
          fVar18 = *(float *)(unsigned)(iVar16 + 0x14);
          fVar19 = *(float *)(unsigned)(iVar16 + 0x18);
          fVar20 = *(float *)(unsigned)(iVar16 + 0x1c);
          uVar17 = *(undefined4 *)(unsigned)(iVar16 + 0x34);
          uVar22 = *(undefined4 *)(unsigned)(iVar16 + 0x38);
          ar7[0xf] = *(undefined4 *)(unsigned)(iVar16 + 0x3c);
          ar7[0xe] = uVar22;
          ar7[0xd] = uVar17;
          ar7[0xb] = fVar20 * in_fr8 + in_fr11;
          ar7[10] = fVar19 * in_fr7 + in_fr10;
          ar7[9] = fVar18 * in_fr6 + in_fr9;
          ar7[8] = in_fr5 * fVar21;
          iVar11 = 1;
          ar7 = ar7 + 0x10;
        }
        uVar17 = *(undefined4 *)(unsigned)(iVar15 + 4);
        uVar22 = *(undefined4 *)(unsigned)(iVar15 + 8);
        uVar23 = *(undefined4 *)(unsigned)(iVar15 + 0xc);
        ar7[5] = (*(float *)(fr0_ - 0x70));
        ar7[4] = (*(float *)(fr0_ - 0x74));
        ar7[3] = uVar23;
        ar7[2] = uVar22;
        ar7[1] = uVar17;
        *ar7 = 0xe0000000;
        fVar21 = *(float *)(unsigned)(iVar15 + 0x10);
        fVar18 = *(float *)(unsigned)(iVar15 + 0x14);
        fVar19 = *(float *)(unsigned)(iVar15 + 0x18);
        fVar20 = *(float *)(unsigned)(iVar15 + 0x1c);
        uVar17 = *(undefined4 *)(unsigned)(iVar15 + 0x34);
        uVar22 = *(undefined4 *)(unsigned)(iVar15 + 0x38);
        ar7[0xf] = *(undefined4 *)(unsigned)(iVar15 + 0x3c);
        ar7[0xe] = uVar22;
        ar7[0xd] = uVar17;
        ar7[0xb] = fVar20 * in_fr8 + in_fr11;
        ar7[10] = fVar19 * in_fr7 + in_fr10;
        ar7[9] = fVar18 * in_fr6 + in_fr9;
        ar7[8] = in_fr5 * fVar21;
        ar7 = ar7 + 0x10;
        iVar11 = iVar11 + 1;
      }
      else if (iVar11 != 0) {
        uVar23 = *(undefined4 *)(unsigned)(iVar15 + 4);
        uVar17 = *(undefined4 *)(unsigned)(iVar15 + 8);
        uVar22 = *(undefined4 *)(unsigned)(iVar15 + 0xc);
        ar7[5] = (*(float *)(fr0_ - 0x70));
        ar7[4] = (*(float *)(fr0_ - 0x74));
        ar7[3] = uVar22;
        ar7[2] = uVar17;
        ar7[1] = uVar23;
        *ar7 = 0xf0000000;
        fVar21 = *(float *)(unsigned)(iVar15 + 0x10);
        fVar18 = *(float *)(unsigned)(iVar15 + 0x14);
        fVar19 = *(float *)(unsigned)(iVar15 + 0x18);
        fVar20 = *(float *)(unsigned)(iVar15 + 0x1c);
        uVar17 = *(undefined4 *)(unsigned)(iVar15 + 0x34);
        uVar22 = *(undefined4 *)(unsigned)(iVar15 + 0x38);
        ar7[0xf] = *(undefined4 *)(unsigned)(iVar15 + 0x3c);
        ar7[0xe] = uVar22;
        ar7[0xd] = uVar17;
        ar7[0xb] = fVar20 * in_fr8 + in_fr11;
        ar7[10] = fVar19 * in_fr7 + in_fr10;
        ar7[9] = fVar18 * in_fr6 + in_fr9;
        ar7[8] = in_fr5 * fVar21;
        iVar12 = iVar12 + iVar11 + 1;
        iVar11 = 0;
        ar7 = ar7 + 0x10;
      }
      ar4 = ar4 + (ar6 >> 0xe & 3) + 3;
      iVar14 = iVar14 + -1;
      (*(float *)(fr0_ - 0x6c)) = -(*(float *)(fr0_ - 0x6c));
      iVar16 = iVar15;
      fVar18 = (*(float *)(fr0_ - 0x70));
      fVar19 = (float)(int)sVar1 * in_fr4;
      (*(float *)(fr0_ - 0x70)) = (float)(int)sVar2 * in_fr4;
      fVar20 = (*(float *)(fr0_ - 0x74));
    } while (iVar14 != 0);
    if (iVar11 != 0) {
      uVar22 = *(undefined4 *)(unsigned)(iVar3 + 4);
      uVar23 = *(undefined4 *)(unsigned)(iVar3 + 8);
      uVar17 = *(undefined4 *)(unsigned)(iVar3 + 0xc);
      ar7[5] = (float)(int)sVar2 * in_fr4;
      ar7[4] = (float)(int)sVar1 * in_fr4;
      ar7[3] = uVar17;
      ar7[2] = uVar23;
      ar7[1] = uVar22;
      *ar7 = 0xf0000000;
      fVar21 = *(float *)(unsigned)(iVar3 + 0x10);
      fVar18 = *(float *)(unsigned)(iVar3 + 0x14);
      fVar19 = *(float *)(unsigned)(iVar3 + 0x18);
      fVar20 = *(float *)(unsigned)(iVar3 + 0x1c);
      uVar22 = *(undefined4 *)(unsigned)(iVar3 + 0x34);
      uVar17 = *(undefined4 *)(unsigned)(iVar3 + 0x38);
      ar7[0xf] = *(undefined4 *)(unsigned)(iVar3 + 0x3c);
      ar7[0xe] = uVar17;
      ar7[0xd] = uVar22;
      ar7[0xb] = fVar20 * in_fr8 + in_fr11;
      ar7[10] = fVar19 * in_fr7 + in_fr10;
      ar7[9] = fVar18 * in_fr6 + in_fr9;
      ar7[8] = in_fr5 * fVar21;
      iVar12 = iVar12 + iVar11 + 1;
      ar7 = ar7 + 0x10;
    }
    uVar10 = uVar10 - 1;
  } while (uVar10 != 0);
  (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) + iVar12;
  (*(undefined4 *)(unsigned)(unsigned)0x8c4aa51c) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa51c) + iVar13;
  return ar7;
}

__asm__(".globl _FUN_8c223b34\n.set _FUN_8c223b34, _FUN_8c223b34_def\n");
