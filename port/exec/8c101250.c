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
undefined4 FUN_8c101250_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c101250";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  *(undefined4 *)(unsigned)(ar4 + 0xd0) = 0;
  *(undefined4 *)(unsigned)(ar4 + 300) = 0x43a00000;
  *(undefined4 *)(unsigned)(ar4 + 0x130) = 0x43700000;
  *(undefined4 *)(unsigned)(ar4 + 0x140) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x13c) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x150) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x14c) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x188) = 0;
  uVar1 = *(undefined4 *)(unsigned)(ar4 + 0x188);
  ({ unsigned long ri0_ = (unsigned long)(0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 4)); FUN_8c0fffec(ar4 + 0x15c,uVar1,ar6,ar7); });
  *(undefined2 *)(unsigned)(ar4 + 0x18c) = 0x78;
  *(undefined4 *)(unsigned)(ar4 + 0xd4) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x128) = 0xffffffff;
  *(undefined2 *)(unsigned)(ar4 + 0x18e) = 0;
  (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c10169c(ar4,uVar1,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c101784(ar4,uVar1,ar6,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c10168c(ar4,uVar1,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c101250\n.set _FUN_8c101250, _FUN_8c101250_def\n");
