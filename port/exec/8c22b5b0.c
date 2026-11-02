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
int FUN_8c22b5b0_def(short *ar4,int ar5,uint ar6,int ar7)

{
  ring[rp++ & 255] = "FUN_8c22b5b0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
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
  float in_fr5 = 0;
  float in_fr4 = 0;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  
  uVar2 = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa4f0);
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
    puVar10 = (undefined4 *)(unsigned)(ar4[1] * 0x20 + ar5);
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
    puVar11 = (undefined4 *)(unsigned)(*psVar7 * 0x20 + ar5);
    fVar18 = (float)(int)*psVar6 * in_fr5;
    fVar19 = (float)(int)*psVar8 * in_fr5;
    do {
      sVar1 = ar4[1];
      puVar12 = (undefined4 *)(unsigned)(*ar4 * 0x20 + ar5);
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
          *(float *)(unsigned)(ar7 + 0x14) = fVar19;
          *(undefined4 *)(unsigned)(ar7 + 0x10) = uVar15;
          *(undefined4 *)(unsigned)(ar7 + 0xc) = uVar14;
          fVar18 = fVar16 + in_fr4;
          if (fVar16 + in_fr4 < in_fr4) {
            fVar18 = in_fr4;
          }
          iVar4 = iVar4 + iVar13 + 1;
          *(undefined4 *)(unsigned)(ar7 + 0xc) = 0xf0000000;
          iVar13 = 0;
          *(float *)(unsigned)(ar7 + 0x24) = fVar18;
          ar7 = ar7 + 0x2c;
        }
      }
      else {
        if (iVar13 == 0) {
          uVar14 = *puVar10;
          iVar13 = 1;
          uVar15 = puVar10[1];
          fVar16 = (float)(uint)puVar10[2];
          *(float *)(unsigned)(ar7 + 0x14) = fVar18;
          *(undefined4 *)(unsigned)(ar7 + 0x10) = uVar15;
          *(undefined4 *)(unsigned)(ar7 + 0xc) = uVar14;
          fVar18 = fVar16 + in_fr4;
          if (fVar16 + in_fr4 < in_fr4) {
            fVar18 = in_fr4;
          }
          *(undefined4 *)(unsigned)(ar7 + 0xc) = 0xe0000000;
          *(float *)(unsigned)(ar7 + 0x24) = fVar18;
          ar7 = ar7 + 0x2c;
        }
        uVar14 = *puVar11;
        iVar13 = iVar13 + 1;
        uVar15 = puVar11[1];
        fVar16 = (float)(uint)puVar11[2];
        *(float *)(unsigned)(ar7 + 0x14) = fVar19;
        *(undefined4 *)(unsigned)(ar7 + 0x10) = uVar15;
        *(undefined4 *)(unsigned)(ar7 + 0xc) = uVar14;
        fVar18 = fVar16 + in_fr4;
        if (fVar16 + in_fr4 < in_fr4) {
          fVar18 = in_fr4;
        }
        *(undefined4 *)(unsigned)(ar7 + 0xc) = 0xe0000000;
        *(float *)(unsigned)(ar7 + 0x24) = fVar18;
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
      *(float *)(unsigned)(ar7 + 0x14) = (float)(int)sVar1 * in_fr5;
      fVar17 = fVar17 + in_fr4;
      *(undefined4 *)(unsigned)(ar7 + 0x10) = uVar15;
      *(undefined4 *)(unsigned)(ar7 + 0xc) = uVar14;
      if (fVar17 < in_fr4) {
        fVar17 = in_fr4;
      }
      iVar4 = iVar4 + iVar13 + 1;
      *(undefined4 *)(unsigned)(ar7 + 0xc) = 0xf0000000;
      *(float *)(unsigned)(ar7 + 0x24) = fVar17;
      ar7 = ar7 + 0x2c;
    }
    uVar3 = uVar3 - 1;
  } while (uVar3 != 0);
  (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) + iVar4;
  (*(undefined4 *)(unsigned)(unsigned)0x8c4aa51c) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa51c) + iVar5;
  return ar7;
}

__asm__(".globl _FUN_8c22b5b0\n.set _FUN_8c22b5b0, _FUN_8c22b5b0_def\n");
