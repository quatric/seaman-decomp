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
undefined4 * FUN_8c22770c_def(short *ar4,int ar5,uint ar6,undefined4 *ar7)

{
  ring[rp++ & 255] = "FUN_8c22770c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
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
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  
  iVar6 = 0;
  uVar4 = ar6 & 0x3fff;
  iVar7 = 0;
  fVar14 = 1.0;
  if (((*(undefined4 *)(unsigned)(unsigned)0x8c4aa4f0) & 0x80000000) != 0) {
    fVar14 = -1.0;
  }
  do {
    iVar8 = (int)*ar4;
    psVar2 = ar4 + 1;
    psVar3 = ar4 + 2;
    fVar15 = fVar14;
    if (iVar8 < 0) {
      fVar15 = -fVar14;
      iVar8 = -iVar8;
    }
    ar4 = ar4 + 3;
    iVar7 = iVar7 + iVar8;
    iVar5 = 0;
    iVar8 = iVar8 + -2;
    iVar9 = *psVar3 * 0x20 + ar5;
    iVar10 = *psVar2 * 0x20 + ar5;
    do {
      iVar1 = iVar9;
      iVar9 = *ar4 * 0x20 + ar5;
      if (0.0 <= ((*(float *)(unsigned)(iVar1 + 4) - *(float *)(unsigned)(iVar10 + 4)) *
                  (*(float *)(unsigned)(iVar9 + 8) - *(float *)(unsigned)(iVar1 + 8)) -
                 (*(float *)(unsigned)(iVar1 + 8) - *(float *)(unsigned)(iVar10 + 8)) *
                 (*(float *)(unsigned)(iVar9 + 4) - *(float *)(unsigned)(iVar1 + 4))) * fVar15) {
        if (iVar5 != 0) {
          uVar11 = *(undefined4 *)(unsigned)(iVar1 + 4);
          uVar13 = *(undefined4 *)(unsigned)(iVar1 + 8);
          uVar12 = *(undefined4 *)(unsigned)(iVar1 + 0xc);
          ar7[6] = *(undefined4 *)(unsigned)(iVar1 + 0x10);
          ar7[3] = uVar12;
          ar7[2] = uVar13;
          ar7[1] = uVar11;
          *ar7 = 0xf0000000;
          iVar6 = iVar6 + iVar5 + 1;
          iVar5 = 0;
          ar7 = ar7 + 8;
        }
      }
      else {
        if (iVar5 == 0) {
          uVar12 = *(undefined4 *)(unsigned)(iVar10 + 4);
          uVar13 = *(undefined4 *)(unsigned)(iVar10 + 8);
          uVar11 = *(undefined4 *)(unsigned)(iVar10 + 0xc);
          ar7[6] = *(undefined4 *)(unsigned)(iVar10 + 0x10);
          ar7[3] = uVar11;
          ar7[2] = uVar13;
          ar7[1] = uVar12;
          *ar7 = 0xe0000000;
          iVar5 = 1;
          ar7 = ar7 + 8;
        }
        uVar12 = *(undefined4 *)(unsigned)(iVar1 + 4);
        uVar11 = *(undefined4 *)(unsigned)(iVar1 + 8);
        uVar13 = *(undefined4 *)(unsigned)(iVar1 + 0xc);
        ar7[6] = *(undefined4 *)(unsigned)(iVar1 + 0x10);
        ar7[3] = uVar13;
        ar7[2] = uVar11;
        ar7[1] = uVar12;
        *ar7 = 0xe0000000;
        ar7 = ar7 + 8;
        iVar5 = iVar5 + 1;
      }
      ar4 = ar4 + (ar6 >> 0xe & 3) + 1;
      iVar8 = iVar8 + -1;
      fVar15 = -fVar15;
      iVar10 = iVar1;
    } while (iVar8 != 0);
    if (iVar5 != 0) {
      uVar12 = *(undefined4 *)(unsigned)(iVar9 + 4);
      uVar11 = *(undefined4 *)(unsigned)(iVar9 + 8);
      uVar13 = *(undefined4 *)(unsigned)(iVar9 + 0xc);
      ar7[6] = *(undefined4 *)(unsigned)(iVar9 + 0x10);
      ar7[3] = uVar13;
      ar7[2] = uVar11;
      ar7[1] = uVar12;
      *ar7 = 0xf0000000;
      iVar6 = iVar6 + iVar5 + 1;
      ar7 = ar7 + 8;
    }
    uVar4 = uVar4 - 1;
  } while (uVar4 != 0);
  (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) + iVar6;
  (*(undefined4 *)(unsigned)(unsigned)0x8c4aa51c) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa51c) + iVar7;
  return ar7;
}

__asm__(".globl _FUN_8c22770c\n.set _FUN_8c22770c, _FUN_8c22770c_def\n");
