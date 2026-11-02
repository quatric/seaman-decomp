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
undefined4 * FUN_8c259988_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c259988";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 ar6_00;
  
  ar6_00 = 0xc0;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c23c814((*(undefined4 *)(unsigned)(unsigned)0x8c4aabbc),ar4,0xc0,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c20fe00((*(undefined4 *)(unsigned)(unsigned)0x8c4aabbc),ar4,ar6_00,ar7));
  (*(undefined4 *)(unsigned)(unsigned)0x8c277b10) = (*(undefined4 *)(unsigned)(unsigned)0x8c4ab140);
  (*(undefined4 *)(unsigned)(unsigned)0x8c277b14) = (*(undefined4 *)(unsigned)(unsigned)0x8c4ab144);
  return ((undefined4 *)(unsigned)0x8c277b10);
}

__asm__(".globl _FUN_8c259988\n.set _FUN_8c259988, _FUN_8c259988_def\n");
