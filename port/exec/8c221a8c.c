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
int FUN_8c221a8c_def(short *ar4,int ar5,uint ar6,int ar7)

{
  ring[rp++ & 255] = "FUN_8c221a8c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  short *psVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  float in_fr4 = 0;
  float in_fr6 = 0;
  float in_fr9 = 0;
  float fVar13;
  float fVar14;
  
  uVar1 = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa4f0);
  uVar2 = ar6 & 0x3fff;
  iVar3 = 0;
  iVar4 = 0;
  do {
    iVar6 = (int)*ar4;
    psVar5 = ar4 + 2;
    fVar13 = 1.0;
    if ((uVar1 & 0x80000000) != 0) {
      fVar13 = -1.0;
    }
    iVar7 = ar4[1] * 0x40 + ar5;
    if (iVar6 < 0) {
      iVar6 = -iVar6;
      fVar13 = -fVar13;
    }
    iVar4 = iVar4 + iVar6;
    iVar6 = iVar6 + -2;
    iVar10 = 0;
    ar4 = ar4 + 3;
    iVar8 = *psVar5 * 0x40 + ar5;
    do {
      iVar9 = *ar4 * 0x40 + ar5;
      fVar14 = ((*(float *)(unsigned)(iVar9 + 8) - *(float *)(unsigned)(iVar8 + 8)) *
                (*(float *)(unsigned)(iVar7 + 4) - *(float *)(unsigned)(iVar8 + 4)) -
               (*(float *)(unsigned)(iVar9 + 4) - *(float *)(unsigned)(iVar8 + 4)) *
               (*(float *)(unsigned)(iVar7 + 8) - *(float *)(unsigned)(iVar8 + 8))) * fVar13;
      fVar13 = -fVar13;
      if (fVar14 <= 0.0) {
        iVar7 = iVar8;
        if (iVar10 != 0) {
          fVar14 = *(float *)(unsigned)(iVar8 + 0x10);
          uVar11 = *(undefined4 *)(unsigned)(iVar8 + -8);
          uVar12 = *(undefined4 *)(unsigned)(iVar8 + -4);
          iVar7 = iVar8 + -0x10;
          *(float *)(unsigned)(ar7 + 0x1c) = *(float *)(unsigned)(iVar8 + 0x14) * in_fr6 + in_fr9;
          *(float *)(unsigned)(ar7 + 0x18) = fVar14 * in_fr4;
          iVar3 = iVar3 + iVar10 + 1;
          *(undefined4 *)(unsigned)(ar7 + 0x14) = uVar12;
          iVar10 = 0;
          *(undefined4 *)(unsigned)(ar7 + 0x10) = uVar11;
          *(undefined4 *)(unsigned)(ar7 + 0x10) = 0xf0000000;
          ar7 = ar7 + 0x30;
        }
      }
      else {
        if (iVar10 == 0) {
          fVar14 = *(float *)(unsigned)(iVar7 + 0x10);
          iVar10 = 1;
          uVar11 = *(undefined4 *)(unsigned)(iVar7 + -8);
          uVar12 = *(undefined4 *)(unsigned)(iVar7 + -4);
          *(float *)(unsigned)(ar7 + 0x1c) = *(float *)(unsigned)(iVar7 + 0x14) * in_fr6 + in_fr9;
          *(float *)(unsigned)(ar7 + 0x18) = fVar14 * in_fr4;
          *(undefined4 *)(unsigned)(ar7 + 0x14) = uVar12;
          *(undefined4 *)(unsigned)(ar7 + 0x10) = uVar11;
          *(undefined4 *)(unsigned)(ar7 + 0x10) = 0xe0000000;
          ar7 = ar7 + 0x30;
        }
        fVar14 = *(float *)(unsigned)(iVar8 + 0x10);
        iVar10 = iVar10 + 1;
        uVar11 = *(undefined4 *)(unsigned)(iVar8 + -8);
        uVar12 = *(undefined4 *)(unsigned)(iVar8 + -4);
        *(float *)(unsigned)(ar7 + 0x1c) = *(float *)(unsigned)(iVar8 + 0x14) * in_fr6 + in_fr9;
        *(float *)(unsigned)(ar7 + 0x18) = fVar14 * in_fr4;
        *(undefined4 *)(unsigned)(ar7 + 0x14) = uVar12;
        *(undefined4 *)(unsigned)(ar7 + 0x10) = uVar11;
        *(undefined4 *)(unsigned)(ar7 + 0x10) = 0xe0000000;
        ar7 = ar7 + 0x30;
        iVar7 = iVar8 + -0x10;
      }
      iVar6 = iVar6 + -1;
      ar4 = ar4 + (ar6 >> 0xe & 3) + 1;
      iVar8 = iVar9;
    } while (iVar6 != 0);
    if (iVar10 != 0) {
      fVar13 = *(float *)(unsigned)(iVar9 + 0x10);
      uVar11 = *(undefined4 *)(unsigned)(iVar9 + -8);
      uVar12 = *(undefined4 *)(unsigned)(iVar9 + -4);
      *(float *)(unsigned)(ar7 + 0x1c) = *(float *)(unsigned)(iVar9 + 0x14) * in_fr6 + in_fr9;
      *(float *)(unsigned)(ar7 + 0x18) = fVar13 * in_fr4;
      iVar3 = iVar3 + iVar10 + 1;
      *(undefined4 *)(unsigned)(ar7 + 0x14) = uVar12;
      *(undefined4 *)(unsigned)(ar7 + 0x10) = uVar11;
      *(undefined4 *)(unsigned)(ar7 + 0x10) = 0xf0000000;
      ar7 = ar7 + 0x30;
    }
    uVar2 = uVar2 - 1;
  } while (uVar2 != 0);
  (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) + iVar3;
  (*(undefined4 *)(unsigned)(unsigned)0x8c4aa51c) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa51c) + iVar4;
  return ar7;
}

__asm__(".globl _FUN_8c221a8c\n.set _FUN_8c221a8c, _FUN_8c221a8c_def\n");
