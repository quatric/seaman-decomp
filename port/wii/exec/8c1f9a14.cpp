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
uint FUN_8c1f9a14_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c1f9a14");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 244; for (int i_ = 0; i_ < 244; i_++) z_[i_] = 0; }
  uint uVar1;
  uint uVar2;
  int unaff_r12 = 0;
  uint uVar3;
  int unaff_r13 = 0;
  uint uVar4;
  uint unaff_r14 = 0;
  byte in_MD = 0;
  byte in_RB = 0;
  byte in_BL = 0;
  byte in_FD = 0;
  byte in_M = 0;
  byte in_Q = 0;
  byte in_IMASK = 0;
  byte in_S = 0;
  byte bVar5;
  
  uVar3 = (unaff_r12 + unaff_r13) - 1U & 0x1fffffe0;
  uVar4 = (*(volatile le<undefined4>* )(unsigned)(unsigned)0xff00001c) >> 5 & 1;
  for (uVar1 = 0; uVar1 < 0x2000; uVar1 = uVar1 + 0x20) {
    uVar2 = *(le<uint>* )(unsigned)(uVar1 | 0xf4000000) & 0x1ffffc00 | uVar1;
    if (((unaff_r14 & ~(unaff_r14 & 0x80000000)) <= uVar2) && (uVar2 <= uVar3)) {
      CacheBlockInvalidate(uVar2 | unaff_r14 & 0x80000000);
    }
    if ((uVar4 != 0) && (uVar1 == 0xfe0)) break;
  }
  if (((*(volatile le<undefined4>* )(unsigned)(unsigned)0xff00001c) >> 7 & 1) == 0) {
    for (uVar1 = 0x2000; bVar5 = 0, uVar1 < 0x4000; uVar1 = uVar1 + 0x20) {
      uVar2 = *(le<uint>* )(unsigned)(uVar1 | 0xf4000000) & 0x1ffffc00 | uVar1;
      if (((unaff_r14 & ~(unaff_r14 & 0x80000000)) <= uVar2) && (uVar2 <= uVar3)) {
        CacheBlockInvalidate(uVar2 | unaff_r14 & 0x80000000);
      }
      if ((uVar4 != 0) && (bVar5 = 1, uVar1 == 0x2fe0)) break;
    }
  }
  else {
    for (uVar1 = 0x2000; bVar5 = 0, uVar1 < 0x4000; uVar1 = uVar1 + 0x20) {
      uVar2 = *(le<uint>* )(unsigned)(uVar1 | 0xf4000000) & 0x1ffffc00 | uVar1 | uVar1 & 0x1fff | uVar3;
      if (((unaff_r14 & ~(unaff_r14 & 0x80000000)) <= uVar2) && (uVar2 <= uVar3)) {
        CacheBlockInvalidate(uVar2 | unaff_r14 & 0x80000000);
      }
      if ((uVar4 != 0) && (bVar5 = 1, uVar1 == 0x2fe0)) break;
    }
  }
  return ((*(le<ushort>* )(fr0_ + 0x00000000)) & 0xf) << 4 |
         ((uint)bVar5 | (uint)in_S << 1 | (uint)in_IMASK << 4) & 0xffffff0f | (uint)in_Q << 8 |
         (uint)in_M << 9 | (uint)in_FD << 0xf | (uint)in_BL << 0x1c | (uint)in_RB << 0x1d |
         (uint)in_MD << 0x1e;
}

__asm__(".globl FUN_8c1f9a14\n.set FUN_8c1f9a14, FUN_8c1f9a14_def\n");

}
