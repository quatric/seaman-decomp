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
undefined4 FUN_8c212220_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c212220";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  int iVar1;
  uint uVar2;
  int ar5_00;
  uint uVar3;
  uint ar6_00;
  
  ar6_00 = ((int *)(unsigned)(uint)ar4[2])[1];
  iVar1 = *(int *)(unsigned)(uint)ar4[2] * 4;
  ar5_00 = ar4[1];
  uVar2 = *(uint *)(unsigned)(*ar4 + iVar1);
  uVar3 = uVar2 >> 0x18;
  *(undefined4 *)(unsigned)0xff000038 = uVar3;
  *(undefined4 *)(unsigned)0xff00003c = uVar3;
  (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c207300(0x3ffffff & uVar2 | 0xe0000000,ar5_00,ar6_00,ar7));
  *(uint *)(unsigned)(*ar4 + iVar1) = *(int *)(unsigned)(*ar4 + iVar1) + (ar6_00 & 0xfffffffc);
  return 0;
}

__asm__(".globl _FUN_8c212220\n.set _FUN_8c212220, _FUN_8c212220_def\n");
