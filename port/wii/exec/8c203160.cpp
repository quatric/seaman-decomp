#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("sh4_dmac_203160");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  ushort uVar1;
  int iVar2;
  le<uint>* puVar3;
  int iVar4;
  le<undefined4>* puVar5;
  int iVar6;
  uint uVar7;
  le<uint>* puVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  
  iVar4 = 0x8c47eb94;
  iVar2 = 0x8c47e988;
  uVar1 = 0x241;
  iVar6 = *(le<undefined4>* )(unsigned)0x8c47eba0 * 0x100 + 0x8c47e988 + *(le<undefined4>* )(unsigned)0x8c47eb9c * 0x20;
  *(le<uint>* )(unsigned)(iVar6 + 0x18) = *(le<uint>* )(unsigned)(iVar6 + 0x18) & 0xfffffffc;
  puVar5 = 0xffa00020;
  uVar7 = 0;
  do {
    iVar6 = *(le<int>* )(unsigned)(uVar7 * 4 + iVar4);
    if ((*(le<uint>* )(unsigned)(uVar7 * 0x100 + iVar2 + iVar6 * 0x20 + 0x18) & 3) == 1) {
      iVar11 = uVar7 * 0x100;
      iVar10 = iVar6 * 0x20;
      iVar9 = iVar11 + iVar2 + iVar10;
      *(le<uint>* )(unsigned)(iVar9 + 0x18) = *(le<uint>* )(unsigned)(iVar9 + 0x18) & 0xfffffffc | 2;
      *puVar5 = *(le<undefined4>* )(unsigned)(iVar9 + 4);
      *(volatile le<undefined4>* )(unsigned)0xffa00024 = (*(le<int>* )(unsigned)(iVar9 + 0xc) + 0xf0000000) * 2;
      *(volatile le<undefined4>* )(unsigned)0xffa00028 = *(le<uint>* )(unsigned)(iVar9 + 0x14) >> 5;
      if ((*(le<uint>* )(unsigned)(iVar9 + 0x18) & 4) == 0) {
        uVar1 = 0x2c1;
      }
      if ((*(le<uint>* )(unsigned)(iVar11 + iVar2 + iVar10 + 0x18) & 0x10) != 0) {
        uVar1 = uVar1 | 0x1000;
      }
      *(volatile le<undefined4>* )(unsigned)0xffa0002c = (int)(short)uVar1;
      iVar10 = iVar11 + iVar2 + iVar10;
      *(volatile le<undefined4>* )(unsigned)0xa05f6800 = *(le<undefined4>* )(unsigned)(iVar10 + 0xc);
      *(volatile le<undefined4>* )(unsigned)0xa05f6804 = *(le<undefined4>* )(unsigned)(iVar10 + 0x14);
      *(volatile le<undefined4>* )(unsigned)0xa05f6808 = 1;
      puVar3 = 0x8c47eba0;
      puVar8 = (le<uint>* )(unsigned)(uVar7 * 4 + iVar4);
      *(le<undefined4>* )(unsigned)0x8c47eb9c = iVar6;
      *puVar3 = uVar7;
      *puVar8 = *puVar8 + 1 & 7;
      return 1;
    }
    uVar7 = uVar7 + 1;
  } while (uVar7 < 2);
  return 0;
}

__asm__(".globl sh4_dmac_203160\n.set sh4_dmac_203160, sh4_dmac_203160_def\n");

}
