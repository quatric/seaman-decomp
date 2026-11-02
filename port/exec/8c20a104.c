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
undefined4 FUN_8c20a104_def(uint ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c20a104";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  uint in_r3 = 0;
  uint ar5_00;
  
  if ((in_r3 & ar4) != 0) {
    ar4 = 0;
  }
  if ((0x7fffff00 & ar4) != 0) {
    ar4 = (uint)0xff;
  }
  *(undefined4 *)(unsigned)0x8c4a9c4c = ar4;
  ar5_00 = *(undefined4 *)(unsigned)0x8c4a9e78 & 0xff00ffff | (ar4 & 0xff) << 0xf;
  *(undefined4 *)(unsigned)0x8c4a9e78 = ar5_00;
  (vsp = ((unsigned long)(fr0_ - 0)), pvr_20a844(0x48,ar5_00,ar6,ar7));
  return 0;
}

__asm__(".globl _FUN_8c20a104\n.set _FUN_8c20a104, _FUN_8c20a104_def\n");
