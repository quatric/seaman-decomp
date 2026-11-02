#include "../decls.h"
uint FUN_8c1f9a14_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  uint uVar2;
  int unaff_r12;
  uint uVar3;
  int unaff_r13;
  uint uVar4;
  uint unaff_r14;
  byte in_MD;
  byte in_RB;
  byte in_BL;
  byte in_FD;
  byte in_M;
  byte in_Q;
  byte in_IMASK;
  byte in_S;
  byte bVar5;
  ushort in_stack_00000000;
  
  uVar3 = (unaff_r12 + unaff_r13) - 1U & 0x1fffffe0;
  uVar4 = _DAT_ff00001c >> 5 & 1;
  for (uVar1 = 0; uVar1 < 0x2000; uVar1 = uVar1 + 0x20) {
    uVar2 = *(uint *)(uVar1 | 0xf4000000) & 0x1ffffc00 | uVar1;
    if (((unaff_r14 & ~(unaff_r14 & 0x80000000)) <= uVar2) && (uVar2 <= uVar3)) {
      CacheBlockInvalidate(uVar2 | unaff_r14 & 0x80000000);
    }
    if ((uVar4 != 0) && (uVar1 == 0xfe0)) break;
  }
  if ((_DAT_ff00001c >> 7 & 1) == 0) {
    for (uVar1 = 0x2000; bVar5 = 0, uVar1 < 0x4000; uVar1 = uVar1 + 0x20) {
      uVar2 = *(uint *)(uVar1 | 0xf4000000) & 0x1ffffc00 | uVar1;
      if (((unaff_r14 & ~(unaff_r14 & 0x80000000)) <= uVar2) && (uVar2 <= uVar3)) {
        CacheBlockInvalidate(uVar2 | unaff_r14 & 0x80000000);
      }
      if ((uVar4 != 0) && (bVar5 = 1, uVar1 == 0x2fe0)) break;
    }
  }
  else {
    for (uVar1 = 0x2000; bVar5 = 0, uVar1 < 0x4000; uVar1 = uVar1 + 0x20) {
      uVar2 = *(uint *)(uVar1 | 0xf4000000) & 0x1ffffc00 | uVar1 | uVar1 & 0x1fff | uVar3;
      if (((unaff_r14 & ~(unaff_r14 & 0x80000000)) <= uVar2) && (uVar2 <= uVar3)) {
        CacheBlockInvalidate(uVar2 | unaff_r14 & 0x80000000);
      }
      if ((uVar4 != 0) && (bVar5 = 1, uVar1 == 0x2fe0)) break;
    }
  }
  return (in_stack_00000000 & 0xf) << 4 |
         ((uint)bVar5 | (uint)in_S << 1 | (uint)in_IMASK << 4) & 0xffffff0f | (uint)in_Q << 8 |
         (uint)in_M << 9 | (uint)in_FD << 0xf | (uint)in_BL << 0x1c | (uint)in_RB << 0x1d |
         (uint)in_MD << 0x1e;
}

__asm__(".globl _FUN_8c1f9a14\n.set _FUN_8c1f9a14, _FUN_8c1f9a14_def\n");
