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
undefined4 FUN_8c0d6a20_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d6a20";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  ar4[0xc] = *ar4;
  ar4[0xd] = 0x44ed8000;
  ar4[0xe] = 0x4445c000;
  if (360.0 <= (float)ar4[0xc]) {
    if (2140.0 < (float)ar4[0xc]) {
      ar4[0xc] = 0x4505c000;
    }
  }
  else {
    ar4[0xc] = 0x43b40000;
  }
  ar4[8] = *ar4;
  ar4[9] = ar4[1];
  ar4[10] = 0x44458000;
  ar4[0x19] = 4;
  return 100;
}

__asm__(".globl _FUN_8c0d6a20\n.set _FUN_8c0d6a20, _FUN_8c0d6a20_def\n");
