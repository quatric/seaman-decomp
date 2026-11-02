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
undefined4 FUN_8c259138_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c259138";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int *piVar1;
  uint uVar2;
  uint uVar3;
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  int iVar4;
  undefined4 *in_r2 = 0;
  uint uVar5;
  uint ar5_00;
  undefined4 ar6_00;
  uint unaff_r13 = 0;
  
  uVar2 = 0xffe7ffff;
  piVar1 = 0x8c4aabbc;
  if (*(uint *)(unsigned)*in_r2 != unaff_r13) {
    iVar4 = (int)0x90;
    ar6_00 = *(undefined4 *)(unsigned)(iVar4 + 4 + *(undefined4 *)(unsigned)0x8c4aabbc);
    ar5_00 = *(uint *)(unsigned)(iVar4 + *(undefined4 *)(unsigned)0x8c4aabbc) & 0xfdffff00 | 0x20000ff & unaff_r13;
    uVar5 = *(uint *)(unsigned)(iVar4 + 8 + *(undefined4 *)(unsigned)0x8c4aabbc);
    *(uint *)(unsigned)(iVar4 + *(undefined4 *)(unsigned)0x8c4aabbc) = ar5_00;
    uVar3 = 0x180000;
    *(undefined4 *)(unsigned)(iVar4 + 4 + *piVar1) = ar6_00;
    *(uint *)(unsigned)(iVar4 + 8 + *piVar1) = uVar5 & uVar2 | uVar3 & unaff_r13;
    in_r0 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c20fe00(*piVar1,ar5_00,ar6_00,ar7));
    *(uint *)(unsigned)*(undefined4 *)(unsigned)0x8c4aabd8 = unaff_r13;
  }
  return in_r0 = 0;
}

__asm__(".globl _FUN_8c259138\n.set _FUN_8c259138, _FUN_8c259138_def\n");
