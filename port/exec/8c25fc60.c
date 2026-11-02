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
undefined4 FUN_8c25fc60_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c25fc60";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 ain0 = (undefined4)(unsigned long)vin0;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined2 *unaff_r14 = 0;
  undefined4 in_PR = 0;
  
  if (unaff_r14 != (undefined2 *)(unsigned)0x0) {
    ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c264f6a(*(undefined4 *)(unsigned)(unaff_r14 + 4),ar5,ar6,ar7); });
    ain0 = (vsp = ((unsigned long)(fr0_ - 0)), memset(unaff_r14,0,0xac,ar7));
    *unaff_r14 = 0;
  }
  return ain0;
}

__asm__(".globl _FUN_8c25fc60\n.set _FUN_8c25fc60, _FUN_8c25fc60_def\n");
