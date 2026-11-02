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
undefined4 FUN_8c2580c6_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c2580c6";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 ain0 = (undefined4)(unsigned long)vin0;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  if ((*(undefined4 *)(unsigned)(unsigned)0x8c4aa6dc) != 0) {
    ain0 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1fa54c((*(undefined4 *)(unsigned)(unsigned)0x8c4ab334),ar5,ar6,ar7));
  }
  (*(undefined4 *)(unsigned)(unsigned)0x8c277c68) = (*(undefined4 *)(unsigned)(unsigned)0x8c277c68) + 1;
  return ain0;
}

__asm__(".globl _FUN_8c2580c6\n.set _FUN_8c2580c6, _FUN_8c2580c6_def\n");
