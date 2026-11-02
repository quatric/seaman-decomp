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
undefined4
Class_129a24_m4_019e40_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "Class_129a24_m4_019e40";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 s0 = *(undefined4 *)(vsp + 0);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 40; for (int i_ = 0; i_ < 40; i_++) z_[i_] = 0; }
  
  (vsp = ((unsigned long)(fr0_ - 40)), Class_1299f8_m4_019588(ar4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 40)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x14)),((undefined1 *)(fr0_ - 0x24)),ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 40)), Vec3_dtor(((undefined1 *)(fr0_ - 0x24)),0xffffffff,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 40)), Vec3_ctor_copy(s0,((undefined1 *)(fr0_ - 0x14)),ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 40)), Vec3_dtor(((undefined1 *)(fr0_ - 0x14)),0xffffffff,ar6,ar7));
  return 0;
}

__asm__(".globl _Class_129a24_m4_019e40\n.set _Class_129a24_m4_019e40, _Class_129a24_m4_019e40_def\n");
