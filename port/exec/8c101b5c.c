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
int FUN_8c101b5c_def(int ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c101b5c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  byte bVar4;
  
  uVar3 = 0x61a1c;
  if (((0x61a1c < ar5) && (uVar3 = 0x82334, 0x82334 < ar5)) &&
     (uVar3 = 0xc349c, ar5 <= 0xc349c)) {
    uVar3 = 0xa2be8;
  }
  *(uint *)(unsigned)(0xbc + ar4) = uVar3;
  *(undefined4 *)(unsigned)0x8c4413c0 = *(uint *)(unsigned)(0xbc + ar4) >> 3;
  for (bVar4 = 0; bVar4 < 4; bVar4 = bVar4 + 1) {
    uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02192c(0x8c2b59d0,ar5,ar6,ar7));
    *(undefined4 *)(unsigned)(ar4 + (uint)bVar4 * 0x10 + 0x38) = uVar1;
  }
  *(undefined4 *)(unsigned)(0xb0 + ar4) = 1;
  iVar2 = 0xc4;
  *(undefined4 *)(unsigned)(0xc4 + ar4) = 1;
  return iVar2;
}

__asm__(".globl _FUN_8c101b5c\n.set _FUN_8c101b5c, _FUN_8c101b5c_def\n");
