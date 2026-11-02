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
undefined1 * FUN_8c0f3e30_def(undefined1 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0f3e30";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  (vsp = ((unsigned long)(fr0_ - 4)), Vec3_ctor_zero(ar4 + 0x1c,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 4)), Vec3_set_zero(ar4 + 0x2c,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c023dac(ar4 + 0x38,ar5,ar6,ar7));
  *ar4 = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x14) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x18) = 0xffffffff;
  *(undefined4 *)(unsigned)(ar4 + 0x44) = 0x32;
  *(undefined4 *)(unsigned)(ar4 + 0x48) = 0;
  return ar4;
}

__asm__(".globl _FUN_8c0f3e30\n.set _FUN_8c0f3e30, _FUN_8c0f3e30_def\n");
