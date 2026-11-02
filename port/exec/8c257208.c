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
uint FUN_8c257208_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c257208";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int unaff_r13 = 0;
  
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c2571a8(*(undefined4 *)(unsigned)(unaff_r13 + 0xc),ar5,ar6,ar7));
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c2571a8(*(undefined4 *)(unsigned)(unaff_r13 + 0x10),ar5,ar6,ar7));
  uVar3 = 0xbfffffff;
  *(uint *)(unsigned)(ar4 + 8) = iVar1 << 3 | uVar2;
  uVar4 = *(uint *)(unsigned)(unaff_r13 + 0x18);
  uVar2 = *(uint *)(unsigned)(ar4 + 0x18) >> 0x10 & 0xff00;
  uVar3 = (((((uint)((uVar4 & 1) != 0) << 0x1f & uVar3 | (uVar4 & 8) << 0x1b) & 0xc7ffffff |
            *(uint *)(unsigned)(unaff_r13 + 8) & 0x38000000) & 0xfbffffff | (~(uVar4 & 4) & 4) << 0x18) &
           0xfdffffff | (uVar4 & 0x10) << 0x15) & 0xff800000 | *(uint *)(unsigned)(unaff_r13 + 0x1c) >> 3;
  if ((uVar2 == (int)0x500) || (uVar2 == (int)0x600)) {
    uVar2 = *(uint *)(unsigned)(ar4 + 4) & 0x3f;
  }
  else {
    if ((uVar2 != (int)0x700) && (uVar2 != (int)0x800)) goto LAB_8c2572b6;
    uVar2 = *(uint *)(unsigned)(ar4 + 4) & 0x30;
  }
  uVar3 = uVar2 << 0x15 | 0xf81fffff & uVar3;
LAB_8c2572b6:
  *(uint *)(unsigned)(ar4 + 0xc) = uVar3;
  return uVar2;
}

__asm__(".globl _FUN_8c257208\n.set _FUN_8c257208, _FUN_8c257208_def\n");
