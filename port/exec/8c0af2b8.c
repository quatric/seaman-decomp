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
int FUN_8c0af2b8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0af2b8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 24; for (int i_ = 0; i_ < 24; i_++) z_[i_] = 0; }
  
  (vsp = ((unsigned long)(fr0_ - 24)), Vec3_ctor_zero(ar4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 24)), Vec3_ctor_zero(ar4 + 0x10,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c023dac(ar4 + 0x24,ar5,ar6,ar7));
  *(undefined4 *)(unsigned)(ar4 + 0x40) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x44) = 0x14;
  *(undefined4 *)(unsigned)(ar4 + 0x48) = 0;
  (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c023de0(((undefined1 *)(fr0_ - 0x14)),ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c023e04(ar4 + 0x24,((undefined1 *)(fr0_ - 0x14)),ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 24)), free_if_nonnull_wrap_016ac4(((undefined1 *)(fr0_ - 0x14)),0xffffffff,ar6,ar7));
  *(undefined4 *)(unsigned)(ar4 + 0x30) = 0xff2f2f2f;
  *(undefined4 *)(unsigned)(ar4 + 0x34) = 0xff2f2f2f;
  *(undefined4 *)(unsigned)(ar4 + 0x38) = 0xff2f2f2f;
  *(undefined4 *)(unsigned)(ar4 + 0x3c) = 0xff2f2f2f;
  *(undefined1 *)(unsigned)(ar4 + 0x33) = 0;
  *(undefined1 *)(unsigned)(ar4 + 0x37) = 0;
  *(undefined1 *)(unsigned)(ar4 + 0x3b) = 0;
  *(undefined1 *)(unsigned)(ar4 + 0x3f) = 0;
  return ar4;
}

__asm__(".globl _FUN_8c0af2b8\n.set _FUN_8c0af2b8, _FUN_8c0af2b8_def\n");
