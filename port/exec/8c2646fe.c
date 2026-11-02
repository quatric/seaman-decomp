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
undefined4 FUN_8c2646fe_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c2646fe";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  int ain0;
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(unsigned)(ar4 + 8);
  ain0 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c2631c2(*(undefined4 *)(unsigned)(ar4 + 4),ar5,ar6,ar7));
  if (*(char *)(unsigned)(ar4 + 0x6c) != '\0') {
    if (ain0 < 0) {
      ain0 = ain0 + 0x7ff;
    }
    uVar1 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c263534(uVar1,ain0 >> 0xb,ar6,ar7));
    return uVar1;
  }
  uVar1 = ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 4)); FUN_8c26311e(*(undefined4 *)(unsigned)(ar4 + 4),0xffffffff,ar6,ar7); });
  uVar1 = ({ unsigned long ri0_ = (unsigned long)(uVar1); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 4)); FUN_8c26357a(*(undefined4 *)(unsigned)(ar4 + 8),0x7fffffff,ar6,ar7); });
  return uVar1;
}

__asm__(".globl _FUN_8c2646fe\n.set _FUN_8c2646fe, _FUN_8c2646fe_def\n");
