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
undefined4 * FUN_8c0d99e8_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d99e8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 ar6_00;
  
  *ar4 = (&(*(undefined1 *)(unsigned)0x8c12bce0));
  ar6_00 = ar6;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c015224(ar4 + 1,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c015ab8(ar4 + 3,ar5,ar6_00,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c015224(ar4 + 10,ar5,ar6_00,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c015ab8(ar4 + 0xc,ar5,ar6_00,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c016410(ar4 + 0xd,ar5,ar6_00,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c102748((int)ar4 + 0x80,ar5,ar6_00,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1026ec((int)ar4 + 0x8c,ar5,ar6_00,ar7));
  ({ unsigned long t0_ = (unsigned long)((&(*(undefined1 *)(unsigned)0x8c13f7c0)) + 0x5a7); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 0)) - 8); FUN_8c014334(ar4 + 4,ar5,ar6_00,ar7); });
  ar4[9] = ar6;
  return ar4;
}

__asm__(".globl _FUN_8c0d99e8\n.set _FUN_8c0d99e8, _FUN_8c0d99e8_def\n");
