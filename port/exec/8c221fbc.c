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
undefined4 * FUN_8c221fbc_def(short *ar4,int ar5,uint ar6,undefined4 *ar7)

{
  ring[rp++ & 255] = "FUN_8c221fbc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 92; for (int i_ = 0; i_ < 92; i_++) z_[i_] = 0; }
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
  float in_fr5 = 0;
  float in_fr4 = 0;
  float in_fr7 = 0;
  float in_fr6 = 0;
  float in_fr9 = 0;
  float in_fr8 = 0;
  float fVar15;
  undefined4 uVar16;
  undefined8 in_dr10 = 0;
  undefined4 uVar17;
  undefined4 uVar18;
  
  uVar4 = ar6 & 0x3fff;
  if (((*(undefined4 *)(unsigned)(unsigned)0x8c4aa4f0) & 0x20000) == 0) {
    (*(float *)(fr0_ - 0x5c)) = 0.5;
    (*(float *)(fr0_ - 0x58)) = 0.5;
  }
  else {
    (*(float *)(fr0_ - 0x5c)) = (*(undefined4 *)(unsigned)(unsigned)0x8c277af8) + 0.5;
    (*(float *)(fr0_ - 0x58)) = (*(undefined4 *)(unsigned)(unsigned)0x8c277afc) + 0.5;
  }
  iVar6 = 0;
  iVar7 = 0;
  (*(float *)(fr0_ - 0x34)) = 1.0;
  if (((*(undefined4 *)(unsigned)(unsigned)0x8c4aa4f0) & 0x80000000) != 0) {
    (*(float *)(fr0_ - 0x34)) = -1.0;
  }
  do {
    iVar8 = (int)*ar4;
    psVar2 = ar4 + 1;
    psVar3 = ar4 + 2;
    (*(float *)(fr0_ - 0x54)) = (*(float *)(fr0_ - 0x34));
    if (iVar8 < 0) {
      iVar8 = -iVar8;
      (*(float *)(fr0_ - 0x54)) = -(*(float *)(fr0_ - 0x34));
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
      fVar13 = F32HI(in_dr10);
      fVar15 = ((*(float *)(unsigned)(iVar9 + 4) - *(float *)(unsigned)(iVar10 + 4)) *
                (*(float *)(unsigned)(iVar1 + 8) - *(float *)(unsigned)(iVar9 + 8)) -
               (*(float *)(unsigned)(iVar9 + 8) - *(float *)(unsigned)(iVar10 + 8)) *
               (*(float *)(unsigned)(iVar1 + 4) - *(float *)(unsigned)(iVar9 + 4))) * (*(float *)(fr0_ - 0x54));
      in_dr10 = CONCAT44(fVar13,fVar15);
      if (fVar15 < 0.0) {
        if (iVar5 == 0) {
          uVar17 = *(undefined4 *)(unsigned)(iVar10 + 4);
          uVar16 = *(undefined4 *)(unsigned)(iVar10 + 8);
          uVar18 = *(undefined4 *)(unsigned)(iVar10 + 0xc);
          fVar15 = *(float *)(unsigned)(iVar10 + 0x28);
          ar7[5] = *(float *)(unsigned)(iVar10 + 0x2c) * 0.5 + (*(float *)(fr0_ - 0x58));
          ar7[4] = fVar15 * 0.5 + (*(float *)(fr0_ - 0x5c));
          ar7[3] = uVar18;
          ar7[2] = uVar16;
          ar7[1] = uVar17;
          *ar7 = 0xe0000000;
          fVar14 = *(float *)(unsigned)(iVar10 + 0x10);
          fVar15 = *(float *)(unsigned)(iVar10 + 0x14);
          fVar11 = *(float *)(unsigned)(iVar10 + 0x18);
          fVar12 = *(float *)(unsigned)(iVar10 + 0x1c);
          uVar16 = *(undefined4 *)(unsigned)(iVar10 + 0x34);
          uVar17 = *(undefined4 *)(unsigned)(iVar10 + 0x38);
          ar7[0xf] = *(undefined4 *)(unsigned)(iVar10 + 0x3c);
          ar7[0xe] = uVar17;
          ar7[0xd] = uVar16;
          ar7[0xb] = fVar12 * in_fr7 + fVar13;
          ar7[10] = fVar11 * in_fr6 + in_fr9;
          ar7[9] = fVar15 * in_fr5 + in_fr8;
          ar7[8] = in_fr4 * fVar14;
          iVar5 = 1;
          ar7 = ar7 + 0x10;
        }
        uVar17 = *(undefined4 *)(unsigned)(iVar9 + 4);
        uVar18 = *(undefined4 *)(unsigned)(iVar9 + 8);
        uVar16 = *(undefined4 *)(unsigned)(iVar9 + 0xc);
        fVar15 = *(float *)(unsigned)(iVar9 + 0x28);
        ar7[5] = *(float *)(unsigned)(iVar9 + 0x2c) * 0.5 + (*(float *)(fr0_ - 0x58));
        ar7[4] = fVar15 * 0.5 + (*(float *)(fr0_ - 0x5c));
        ar7[3] = uVar16;
        ar7[2] = uVar18;
        ar7[1] = uVar17;
        *ar7 = 0xe0000000;
        fVar14 = *(float *)(unsigned)(iVar9 + 0x10);
        fVar15 = *(float *)(unsigned)(iVar9 + 0x14);
        fVar11 = *(float *)(unsigned)(iVar9 + 0x18);
        fVar12 = *(float *)(unsigned)(iVar9 + 0x1c);
        uVar17 = *(undefined4 *)(unsigned)(iVar9 + 0x34);
        uVar16 = *(undefined4 *)(unsigned)(iVar9 + 0x38);
        in_dr10 = CONCAT44(fVar13,*(undefined4 *)(unsigned)(iVar9 + 0x3c));
        ar7[0xf] = *(undefined4 *)(unsigned)(iVar9 + 0x3c);
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
        uVar16 = *(undefined4 *)(unsigned)(iVar9 + 4);
        uVar18 = *(undefined4 *)(unsigned)(iVar9 + 8);
        uVar17 = *(undefined4 *)(unsigned)(iVar9 + 0xc);
        fVar15 = *(float *)(unsigned)(iVar9 + 0x28);
        ar7[5] = *(float *)(unsigned)(iVar9 + 0x2c) * 0.5 + (*(float *)(fr0_ - 0x58));
        ar7[4] = fVar15 * 0.5 + (*(float *)(fr0_ - 0x5c));
        ar7[3] = uVar17;
        ar7[2] = uVar18;
        ar7[1] = uVar16;
        *ar7 = 0xf0000000;
        fVar14 = *(float *)(unsigned)(iVar9 + 0x10);
        fVar15 = *(float *)(unsigned)(iVar9 + 0x14);
        fVar11 = *(float *)(unsigned)(iVar9 + 0x18);
        fVar12 = *(float *)(unsigned)(iVar9 + 0x1c);
        uVar17 = *(undefined4 *)(unsigned)(iVar9 + 0x34);
        uVar16 = *(undefined4 *)(unsigned)(iVar9 + 0x38);
        in_dr10 = CONCAT44(fVar13,*(undefined4 *)(unsigned)(iVar9 + 0x3c));
        ar7[0xf] = *(undefined4 *)(unsigned)(iVar9 + 0x3c);
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
      (*(float *)(fr0_ - 0x54)) = -(*(float *)(fr0_ - 0x54));
      iVar10 = iVar9;
    } while (iVar8 != 0);
    if (iVar5 != 0) {
      fVar14 = F32HI(in_dr10);
      uVar16 = *(undefined4 *)(unsigned)(iVar1 + 4);
      uVar18 = *(undefined4 *)(unsigned)(iVar1 + 8);
      uVar17 = *(undefined4 *)(unsigned)(iVar1 + 0xc);
      fVar15 = *(float *)(unsigned)(iVar1 + 0x28);
      ar7[5] = *(float *)(unsigned)(iVar1 + 0x2c) * 0.5 + (*(float *)(fr0_ - 0x58));
      ar7[4] = fVar15 * 0.5 + (*(float *)(fr0_ - 0x5c));
      ar7[3] = uVar17;
      ar7[2] = uVar18;
      ar7[1] = uVar16;
      *ar7 = 0xf0000000;
      fVar12 = *(float *)(unsigned)(iVar1 + 0x10);
      fVar15 = *(float *)(unsigned)(iVar1 + 0x14);
      fVar13 = *(float *)(unsigned)(iVar1 + 0x18);
      fVar11 = *(float *)(unsigned)(iVar1 + 0x1c);
      uVar16 = *(undefined4 *)(unsigned)(iVar1 + 0x34);
      uVar17 = *(undefined4 *)(unsigned)(iVar1 + 0x38);
      in_dr10 = CONCAT44(fVar14,*(undefined4 *)(unsigned)(iVar1 + 0x3c));
      ar7[0xf] = *(undefined4 *)(unsigned)(iVar1 + 0x3c);
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
  (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) + iVar6;
  (*(undefined4 *)(unsigned)(unsigned)0x8c4aa51c) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa51c) + iVar7;
  return ar7;
}

__asm__(".globl _FUN_8c221fbc\n.set _FUN_8c221fbc, _FUN_8c221fbc_def\n");
