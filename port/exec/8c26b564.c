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
undefined4 FUN_8c26b564_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c26b564";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int ain0;
  int ar7_00;
  undefined4 *ar4_00;
  
  ain0 = 0;
  do {
    if (*(int *)(unsigned)(ain0 * 0x30 + -0x73b40b44) == 0) break;
    ain0 = ain0 + 1;
  } while (ain0 < 0x40);
  if (ain0 == 0x40) {
    return 0;
  }
  ar7_00 = ain0 * 0x30;
  ar4_00 = (undefined4 *)(unsigned)(ar7_00 + -0x73b40b48);
  *(undefined4 *)(unsigned)(ar7_00 + -0x73b40b44) = 1;
  *ar4_00 = ((undefined1 *)(unsigned)0x8c27869c);
  *(undefined4 *)(unsigned)(ar7_00 + -0x73b40b2c) = ar4;
  *(undefined4 *)(unsigned)(ar7_00 + -0x73b40b28) = ar5;
  *(undefined4 *)(unsigned)(ar7_00 + -0x73b40b24) = ar6;
  *(unsigned *)(unsigned)(ar7_00 + -0x73b40b40) = ((undefined1 *)(unsigned)0x8c273988);
  *(unsigned *)(unsigned)(ar7_00 + -0x73b40b20) = ((undefined1 *)(unsigned)0x8c26b522);
  *(unsigned *)(unsigned)(ar7_00 + -0x73b40b1c) = ar4_00;
  ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c26b5ee(ar4_00,ar5,ar6,ar7_00); });
  return ar4_00;
}

__asm__(".globl _FUN_8c26b564\n.set _FUN_8c26b564, _FUN_8c26b564_def\n");
