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
undefined4 FUN_8c20b708_def(uint ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c20b708";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 8; for (int i_ = 0; i_ < 8; i_++) z_[i_] = 0; }
  uint uVar1;
  
  if (((*(uint *)(unsigned)(ar4 + 0x18) & 4) == 0) && (*(int *)(unsigned)(ar4 + 4) == 1)) {
    uVar1 = *(uint *)(unsigned)(ar4 + 8) & 0x38000000;
    if (uVar1 == 0) {
      ar4 = 3;
    }
    else if (uVar1 == 0x8000000) {
      ar4 = 1;
    }
    else if (uVar1 == 0x10000000) {
      ar4 = 2;
    }
    *(undefined4 *)(unsigned)0x8c4aa110 = *(undefined4 *)(unsigned)0x8c4a9e78 & 0xfffffff8 | ar4;
    return 0;
  }
  return 4;
}

__asm__(".globl _FUN_8c20b708\n.set _FUN_8c20b708, _FUN_8c20b708_def\n");
