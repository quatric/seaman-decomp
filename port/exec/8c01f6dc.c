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
undefined4 FUN_8c01f6dc_def(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c01f6dc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int ar6_00;
  
  uVar1 = 3;
  if (ar6 < 3) {
    ar6_00 = ar6;
    ({ unsigned long ri0_ = (unsigned long)(ar5); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); strcpy(ar4 + ar6 * 0x16034 + 0x38,ar5,ar6,ar7); });
    uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1f3078(ar4 + ar6 * 0x16034 + 0x5c,0x800,ar6_00,ar7));
    *(undefined4 *)(unsigned)(ar4 + ar6 * 0x16034 + 0x58) = uVar1;
    uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1f3926(ar4 + ar6 * 0x16034 + 0x38,*(undefined4 *)(unsigned)(ar4 + ar6 * 0x16034 + 0x58),
                         ar6_00,ar7));
  }
  return uVar1;
}

__asm__(".globl _FUN_8c01f6dc\n.set _FUN_8c01f6dc, _FUN_8c01f6dc_def\n");
