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
undefined4 * FUN_8c2162bc_def(short *ar4,int ar5,uint ar6,undefined4 *ar7)

{
  ring[rp++ & 255] = "FUN_8c2162bc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  short sVar1;
  short sVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  float in_fr4 = 0;
  float fVar13;
  
  uVar7 = ar6 & 0x3fff;
  iVar5 = 0;
  iVar4 = 0;
  do {
    iVar6 = (int)*ar4;
    sVar1 = ar4[2];
    iVar9 = ar4[1] * 0x10 + ar5;
    if (iVar6 < 0) {
      iVar6 = -iVar6;
    }
    iVar4 = iVar4 + iVar6;
    uVar11 = *(undefined4 *)(unsigned)(iVar9 + 4);
    iVar5 = iVar5 + iVar6;
    iVar6 = iVar6 + -2;
    iVar10 = ar4[4] * 0x10 + ar5;
    ar7[7] = *(undefined4 *)(unsigned)(iVar9 + 0xc);
    sVar2 = ar4[5];
    ar7[6] = (float)(int)sVar1 * in_fr4;
    ar7[5] = uVar11;
    ar7[4] = 0xe0000000;
    fVar13 = (float)(int)sVar2 * in_fr4;
    ar4 = ar4 + 7;
    uVar12 = *(undefined4 *)(unsigned)(iVar10 + 4);
    uVar11 = *(undefined4 *)(unsigned)(iVar10 + 0xc);
    puVar3 = ar7 + 4;
    do {
      puVar8 = puVar3;
      sVar1 = ar4[1];
      iVar9 = *ar4 * 0x10 + ar5;
      puVar8[0xf] = uVar11;
      puVar8[0xe] = fVar13;
      puVar8[0xd] = uVar12;
      fVar13 = (float)(int)sVar1 * in_fr4;
      puVar8[0xc] = 0xe0000000;
      ar4 = ar4 + (ar6 >> 0xe & 3) + 3;
      uVar12 = *(undefined4 *)(unsigned)(iVar9 + 4);
      iVar6 = iVar6 + -1;
      uVar11 = *(undefined4 *)(unsigned)(iVar9 + 0xc);
      puVar3 = puVar8 + 0xc;
    } while (iVar6 != 0);
    puVar8[0x1b] = uVar11;
    puVar8[0x1a] = fVar13;
    uVar7 = uVar7 - 1;
    puVar8[0x19] = uVar12;
    puVar8[0x18] = 0xf0000000;
    ar7 = puVar8 + 0x20;
  } while (uVar7 != 0);
  (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) + iVar4;
  (*(undefined4 *)(unsigned)(unsigned)0x8c4aa51c) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa51c) + iVar5;
  return ar7;
}

__asm__(".globl _FUN_8c2162bc\n.set _FUN_8c2162bc, _FUN_8c2162bc_def\n");
