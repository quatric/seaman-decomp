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
undefined4 FUN_8c0bf170_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0bf170";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 ar6_00;
  
  (*(undefined4 *)(unsigned)(unsigned)0x8c4362f0) = 0;
  ar6_00 = ar6;
  ({ unsigned long ri0_ = (unsigned long)(ar5); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); strcpy(0x8c4362a0,ar5,ar6,ar7); });
  ({ unsigned long ri0_ = (unsigned long)(ar5); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); strcpy(0x8c4362c0,ar6,ar6_00,ar7); });
  (*(undefined4 *)(unsigned)(unsigned)0x8c43627c) = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0f8320(0x8c35468c,6,0x8c436280,ar7));
  return (*(undefined4 *)(unsigned)(unsigned)0x8c43627c);
}

__asm__(".globl _FUN_8c0bf170\n.set _FUN_8c0bf170, _FUN_8c0bf170_def\n");
