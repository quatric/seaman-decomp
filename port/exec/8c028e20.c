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
undefined4 FUN_8c028e20_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c028e20";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 24; for (int i_ = 0; i_ < 24; i_++) z_[i_] = 0; }
  uint uVar1;
  uint ar5_00;
  undefined4 uVar2;
  undefined2 uVar3;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c028ee4(ar5,ar5,ar6,ar7));
  uVar2 = CONCAT22((short)uVar1,(*(undefined2 *)(fr0_ - 0x18)));
  uVar1 = uVar1 & 0xffff;
  ({ unsigned long ri0_ = (unsigned long)(uVar2); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 24)); FUN_8c028edc(ar4 + 0x21c,uVar1,ar6,ar7); });
  uVar3 = (undefined2)((uint)uVar2 >> 0x10);
  uVar1 = (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c02602c(ar5,uVar1,ar6,ar7));
  ar5_00 = uVar1 & 0xffff;
  ({ unsigned long ri0_ = (unsigned long)(CONCAT22(uVar3,(short)uVar1)); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 24)); FUN_8c028ed4(ar4 + 0x21c,ar5_00,ar6,ar7); });
  uVar2 = (vsp = ((unsigned long)(fr0_ - 24)), get_field_13c_028d9c(ar4 + 0x174,ar5_00,ar6,ar7));
  uVar2 = (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c034d38(ar4 + 0x2dc,uVar2,ar6,ar7));
  uVar2 = (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c028ec8(*(undefined4 *)(unsigned)(ar4 + 0x308),uVar2,ar6,ar7));
  return uVar2;
}

__asm__(".globl _FUN_8c028e20\n.set _FUN_8c028e20, _FUN_8c028e20_def\n");
