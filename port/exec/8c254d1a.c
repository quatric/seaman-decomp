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
undefined4 FUN_8c254d1a_def(undefined4 ar4,undefined4 ar5,uint ar6,undefined1 *ar7)

{
  ring[rp++ & 255] = "FUN_8c254d1a";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 24; for (int i_ = 0; i_ < 24; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int a4;
  uint a5;
  uint uVar2;
  uint uVar3;
  float fVar4;
  
  a5 = (*(undefined4 *)(unsigned)(unsigned)0x8c4aad5c) * 4;
  a4 = *(int *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c4aad4c) + a5);
  if (a4 != 0) {
    ar6 = *(uint *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c4aad50) + a5);
    fVar4 = (*(undefined4 *)(unsigned)(unsigned)0x8c4aad54);
    if (2.1474836e+09 < (*(undefined4 *)(unsigned)(unsigned)0x8c4aad54)) {
      fVar4 = (*(undefined4 *)(unsigned)(unsigned)0x8c4aad54) + -4.2949673e+09;
    }
    a5 = 0;
    uVar2 = ar6;
    while (uVar3 = uVar2, 1 < uVar3 - a5) {
      uVar2 = a5 + uVar3 >> 1;
      if (*(uint *)(unsigned)(uVar2 * 0x10 + a4) <= (uint)(int)fVar4) {
        a5 = uVar2;
        uVar2 = uVar3;
      }
    }
    ar7 = ((undefined1 *)(fr0_ - 0x18));
    (vsp = ((unsigned long)(fr0_ - 24)), (*(code *)xlat((unsigned long)(*(unsigned *)0x8c4ab0b4)))(a4,a5,ar6,ar7));
  }
  uVar1 = ({ unsigned long ri0_ = (unsigned long)(ar4); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 24)); FUN_8c25b5d0((*(undefined4 *)(unsigned)(unsigned)0x8c4aad60),a5,ar6,ar7); });
  (*(undefined4 *)(unsigned)(unsigned)0x8c4aad5c) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aad5c) + 1;
  return uVar1;
}

__asm__(".globl _FUN_8c254d1a\n.set _FUN_8c254d1a, _FUN_8c254d1a_def\n");
