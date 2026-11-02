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
undefined4 FUN_8c263446_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c263446";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  undefined4 uVar1;
  
  if (ar4 != 0) {
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c263498(ar4,ar5,ar6,ar7));
    if (*(int *)(unsigned)(ar4 + 8) != 0) {
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1f309c(*(undefined4 *)(unsigned)(ar4 + 8),vr5,vr6,vr7));
    }
    uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c2632e2(ar4,ar5,ar6,ar7));
    return uVar1;
  }
  return in_r0 = 0;
}

__asm__(".globl _FUN_8c263446\n.set _FUN_8c263446, _FUN_8c263446_def\n");
