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
undefined4 * FUN_8c215b74_def(short *ar4,int ar5,uint ar6,undefined4 *ar7)

{
  ring[rp++ & 255] = "FUN_8c215b74";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  short *psVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  
  uVar5 = ar6 & 0x3fff;
  iVar3 = 0;
  iVar2 = 0;
  do {
    iVar4 = (int)*ar4;
    psVar6 = ar4 + 2;
    iVar8 = ar4[1] * 0x10 + ar5;
    if (iVar4 < 0) {
      iVar4 = -iVar4;
    }
    iVar2 = iVar2 + iVar4;
    uVar10 = *(undefined4 *)(unsigned)(iVar8 + 4);
    iVar3 = iVar3 + iVar4;
    iVar4 = iVar4 + -2;
    ar4 = ar4 + 3;
    iVar9 = *psVar6 * 0x10 + ar5;
    ar7[7] = *(undefined4 *)(unsigned)(iVar8 + 0xc);
    ar7[4] = uVar10;
    ar7[3] = 0xe0000000;
    uVar10 = *(undefined4 *)(unsigned)(iVar9 + 4);
    uVar11 = *(undefined4 *)(unsigned)(iVar9 + 0xc);
    puVar1 = ar7 + 3;
    do {
      puVar7 = puVar1;
      iVar8 = *ar4 * 0x10 + ar5;
      puVar7[0xf] = uVar11;
      puVar7[0xc] = uVar10;
      ar4 = ar4 + (ar6 >> 0xe & 3) + 1;
      puVar7[0xb] = 0xe0000000;
      uVar10 = *(undefined4 *)(unsigned)(iVar8 + 4);
      iVar4 = iVar4 + -1;
      uVar11 = *(undefined4 *)(unsigned)(iVar8 + 0xc);
      puVar1 = puVar7 + 0xb;
    } while (iVar4 != 0);
    puVar7[0x1a] = uVar11;
    puVar7[0x17] = uVar10;
    uVar5 = uVar5 - 1;
    puVar7[0x16] = 0xf0000000;
    ar7 = puVar7 + 0x1e;
  } while (uVar5 != 0);
  (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa520) + iVar2;
  (*(undefined4 *)(unsigned)(unsigned)0x8c4aa51c) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa51c) + iVar3;
  return ar7;
}

__asm__(".globl _FUN_8c215b74\n.set _FUN_8c215b74, _FUN_8c215b74_def\n");
