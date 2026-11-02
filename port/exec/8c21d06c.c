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
undefined4 FUN_8c21d06c_def(uint *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c21d06c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 32; for (int i_ = 0; i_ < 32; i_++) z_[i_] = 0; }
  uint uVar1;
  undefined4 uVar2;
  int a4;
  uint a5;
  uint a6;
  uint uVar3;
  undefined1 *a7;
  float fVar4;
  
  a4 = *(int *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c4aad4c) + (*(undefined4 *)(unsigned)(unsigned)0x8c4aad5c) * 4);
  if (a4 == 0) {
    uVar2 = ({ unsigned long ri0_ = (unsigned long)(ar4); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 32)); FUN_8c2569e0(ar4 + 5,*ar4 & 0x20,ar6,ar7); });
  }
  else {
    a6 = *(uint *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c4aad50) + (*(undefined4 *)(unsigned)(unsigned)0x8c4aad5c) * 4);
    fVar4 = (*(undefined4 *)(unsigned)(unsigned)0x8c4aad54);
    if (2.1474836e+09 < (*(undefined4 *)(unsigned)(unsigned)0x8c4aad54)) {
      fVar4 = (*(undefined4 *)(unsigned)(unsigned)0x8c4aad54) + -4.2949673e+09;
    }
    a5 = 0;
    uVar1 = a6;
    while (uVar3 = uVar1, 1 < uVar3 - a5) {
      uVar1 = a5 + uVar3 >> 1;
      if (*(uint *)(unsigned)(uVar1 * 0x14 + a4) <= (uint)(int)fVar4) {
        a5 = uVar1;
        uVar1 = uVar3;
      }
    }
    a7 = ((undefined1 *)(fr0_ - 0x20));
    (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c21c1b0(a4,a5,a6,a7));
    uVar2 = (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c2563f8(((undefined1 *)(fr0_ - 0x20)),a5,a6,a7));
  }
  (*(undefined4 *)(unsigned)(unsigned)0x8c4aad5c) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aad5c) + 1;
  return uVar2;
}

__asm__(".globl _FUN_8c21d06c\n.set _FUN_8c21d06c, _FUN_8c21d06c_def\n");
