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
undefined4 FUN_8c0e810c_def(int ar4,undefined4 ar5,short *ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0e810c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 ar5_00;
  short *ar6_00;
  
  ar5_00 = ar5;
  ar6_00 = ar6;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0c4da0(ar4,ar5,ar6,ar7));
  *(undefined4 *)(unsigned)(0xa4 + ar4 + ar6[1] * 0x80 + *ar6 * 0x20) = ar5;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0d6fb8(ar4 + ar6[1] * 0x80 + *ar6 * 0x20 + 0xa4,ar5_00,ar6_00,ar7));
  *(int *)(unsigned)(0x410 + ar4) = *(int *)(unsigned)(0x410 + ar4) + 1;
  ar6[1] = -1;
  *ar6 = -1;
  return ar5;
}

__asm__(".globl _FUN_8c0e810c\n.set _FUN_8c0e810c, _FUN_8c0e810c_def\n");
