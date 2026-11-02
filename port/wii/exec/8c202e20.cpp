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
undefined4 sh4_dmac_202e20_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("sh4_dmac_202e20");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  le<int>* piVar1;
  le<undefined4>* puVar2;
  le<undefined4>* puVar3;
  le<undefined4>* puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  
  piVar1 = 0xffa0002c;
  *(volatile le<undefined4>* )(unsigned)0xffa00020 = 0;
  *(volatile le<undefined4>* )(unsigned)0xffa00024 = 0;
  *(volatile le<undefined4>* )(unsigned)0xffa00028 = 0;
  *piVar1 = (int)0x12c0;
  *(volatile le<undefined4>* )(unsigned)0xffa00040 = 0x8201;
  *(volatile le<undefined4>* )(unsigned)0xa05f6884 = 0;
  *(volatile le<undefined4>* )(unsigned)0xff000038 = 0x10;
  *(volatile le<undefined4>* )(unsigned)0xff00003c = 0x10;
  puVar4 = 0x8c47eb9c;
  puVar3 = 0x8c47eb90;
  puVar2 = 0x8c47eb88;
  *(le<undefined4>* )(unsigned)0x8c47eb88 = 0;
  puVar2[1] = 0;
  puVar2 = 0x8c47eb94;
  uVar7 = (uint)0x100;
  *(le<undefined4>* )(unsigned)0x8c47eb94 = 0;
  puVar2[1] = 0;
  uVar6 = 0;
  *puVar3 = 0;
  *puVar4 = 7;
  *(le<undefined4>* )(unsigned)0x8c47eba0 = 1;
  iVar5 = 0x8c47e988;
  do {
    iVar8 = iVar5 + uVar6;
    uVar6 = uVar6 + 0x20;
    *(le<undefined4>* )(unsigned)(iVar8 + 0x18) = 0;
    *(le<undefined4>* )(unsigned)(iVar8 + uVar7 + 0x18) = 8;
  } while (uVar6 < uVar7);
  return 8;
}

__asm__(".globl sh4_dmac_202e20\n.set sh4_dmac_202e20, sh4_dmac_202e20_def\n");

}
