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
undefined4 FUN_8c1b9c3a_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c1b9c3a";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 s0 = *(undefined4 *)(vsp + 0);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int extraout_r3 = 0;
  int in_GBR = (void *)0x8cf80000;
  
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1ba52c(ar4,ar5,ar6,ar7));
  *(undefined4 *)(unsigned)(extraout_r3 + 0x18) = ar6;
  ({ unsigned long ri0_ = (unsigned long)(s0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c1b9a34(ar4,ar5,ar6,ar7); });
  uVar1 = ({ unsigned long ri0_ = (unsigned long)(s0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c1b9b9e(ar4,ar5,ar6,(int)&s0 << 0x10 | (uint)&s0 >> 0x10); });
  *(short *)(unsigned)(in_GBR + 0x18e) = (short)uVar1;
                    
  halt_baddata();
}

__asm__(".globl _FUN_8c1b9c3a\n.set _FUN_8c1b9c3a, _FUN_8c1b9c3a_def\n");
