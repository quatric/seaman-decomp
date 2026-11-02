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
undefined4
FUN_8c1f900c_def(int ar4,uint ar5,uint ar6,uint ar7)

{
  ring[rp++ & 255] = "FUN_8c1f900c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  uint s0 = *(uint *)(vsp + 0);
  int s4 = *(int *)(vsp + 4);
  int s8 = *(int *)(vsp + 8);
  undefined4 s12 = *(undefined4 *)(vsp + 12);
  undefined4 s16 = *(undefined4 *)(vsp + 16);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = 0x80000000;
  uVar1 = 0x1ffffe0;
  uVar3 = ar6 & 0x1fffffe0;
  *(uint *)(unsigned)(ar4 + 4) = ar5 & 0x1fffffe0;
  *(uint *)(unsigned)(ar4 + 8) = uVar3;
  *(uint *)(unsigned)(ar4 + 0xc) = ar7 & uVar1 | uVar2;
  *(uint *)(unsigned)(ar4 + 0x10) = s0 & 1;
  if (s4 == 1) {
    *(uint *)(unsigned)(ar4 + 0x14) = *(uint *)(unsigned)(ar4 + 0x14) | 1;
  }
  else {
    *(uint *)(unsigned)(ar4 + 0x14) = *(uint *)(unsigned)(ar4 + 0x14) & 0xfffffffd;
  }
  if (s8 == 1) {
    *(uint *)(unsigned)(ar4 + 0x14) = *(uint *)(unsigned)(ar4 + 0x14) | 4;
  }
  else {
    *(uint *)(unsigned)(ar4 + 0x14) = *(uint *)(unsigned)(ar4 + 0x14) & 0xfffffffe;
  }
  *(uint *)(unsigned)(ar4 + 0x14) = *(uint *)(unsigned)(ar4 + 0x14) & 7;
  *(undefined4 *)(unsigned)(ar4 + 0x1c) = s12;
  *(undefined4 *)(unsigned)(ar4 + 0x20) = s16;
  *(undefined4 *)(unsigned)(ar4 + 0x30) = 0;
  return 0;
}

__asm__(".globl _FUN_8c1f900c\n.set _FUN_8c1f900c, _FUN_8c1f900c_def\n");
