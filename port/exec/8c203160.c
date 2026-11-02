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
undefined4 sh4_dmac_203160_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "sh4_dmac_203160";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  ushort uVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  uint *puVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  
  iVar4 = 0x8c47eb94;
  iVar2 = 0x8c47e988;
  uVar1 = 0x241;
  iVar6 = *(undefined4 *)(unsigned)0x8c47eba0 * 0x100 + 0x8c47e988 + *(undefined4 *)(unsigned)0x8c47eb9c * 0x20;
  *(uint *)(unsigned)(iVar6 + 0x18) = *(uint *)(unsigned)(iVar6 + 0x18) & 0xfffffffc;
  puVar5 = 0xffa00020;
  uVar7 = 0;
  do {
    iVar6 = *(int *)(unsigned)(uVar7 * 4 + iVar4);
    if ((*(uint *)(unsigned)(uVar7 * 0x100 + iVar2 + iVar6 * 0x20 + 0x18) & 3) == 1) {
      iVar11 = uVar7 * 0x100;
      iVar10 = iVar6 * 0x20;
      iVar9 = iVar11 + iVar2 + iVar10;
      *(uint *)(unsigned)(iVar9 + 0x18) = *(uint *)(unsigned)(iVar9 + 0x18) & 0xfffffffc | 2;
      *puVar5 = *(undefined4 *)(unsigned)(iVar9 + 4);
      *(undefined4 *)(unsigned)0xffa00024 = (*(int *)(unsigned)(iVar9 + 0xc) + 0xf0000000) * 2;
      *(undefined4 *)(unsigned)0xffa00028 = *(uint *)(unsigned)(iVar9 + 0x14) >> 5;
      if ((*(uint *)(unsigned)(iVar9 + 0x18) & 4) == 0) {
        uVar1 = 0x2c1;
      }
      if ((*(uint *)(unsigned)(iVar11 + iVar2 + iVar10 + 0x18) & 0x10) != 0) {
        uVar1 = uVar1 | 0x1000;
      }
      *(undefined4 *)(unsigned)0xffa0002c = (int)(short)uVar1;
      iVar10 = iVar11 + iVar2 + iVar10;
      *(undefined4 *)(unsigned)0xa05f6800 = *(undefined4 *)(unsigned)(iVar10 + 0xc);
      *(undefined4 *)(unsigned)0xa05f6804 = *(undefined4 *)(unsigned)(iVar10 + 0x14);
      *(undefined4 *)(unsigned)0xa05f6808 = 1;
      puVar3 = 0x8c47eba0;
      puVar8 = (uint *)(unsigned)(uVar7 * 4 + iVar4);
      *(undefined4 *)(unsigned)0x8c47eb9c = iVar6;
      *puVar3 = uVar7;
      *puVar8 = *puVar8 + 1 & 7;
      return 1;
    }
    uVar7 = uVar7 + 1;
  } while (uVar7 < 2);
  return 0;
}

__asm__(".globl _sh4_dmac_203160\n.set _sh4_dmac_203160, _sh4_dmac_203160_def\n");
