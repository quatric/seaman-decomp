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
undefined4 FUN_8c0b79f0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0b79f0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 48; for (int i_ = 0; i_ < 48; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined1 *ar6_00;
  undefined4 ar7_00;
  
  (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c0162f8((fr0_ + (int)0xffffffe8),ar5,ar6,ar7));
  ar7_00 = 4;
  ar6_00 = ((undefined1 *)(unsigned)0x8c4365bc);
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x18))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 48)); FUN_8c016318((fr0_ + (int)0xffffffe8),((undefined1 *)(unsigned)0x8c43659c),((undefined1 *)(unsigned)0x8c4365bc),4); });
  uVar1 = 0x60;
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x18))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 48)); FUN_8c015198((fr0_ + (int)0xffffffe8),0x60,ar6_00,ar7_00); });
  (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c016340((fr0_ + (int)0xffffffe8),uVar1,ar6_00,ar7_00));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 48)), free_if_nonnull_wrap_0151a0((fr0_ + (int)0xffffffe8),0xffffffff,ar6_00,ar7_00));
  return uVar1;
}

__asm__(".globl _FUN_8c0b79f0\n.set _FUN_8c0b79f0, _FUN_8c0b79f0_def\n");
