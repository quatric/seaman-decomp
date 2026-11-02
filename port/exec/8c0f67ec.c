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
undefined4 FUN_8c0f67ec_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0f67ec";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 32; for (int i_ = 0; i_ < 32; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 32)), rand(ar4,ar5,ar6,ar7));
  uVar2 = 3;
  (vsp = ((unsigned long)(fr0_ - 32)), libgcc_divide_helper_01031c(uVar1,3,ar6,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 32)), rand(uVar1,uVar2,ar6,ar7));
  uVar2 = 3;
  (vsp = ((unsigned long)(fr0_ - 32)), libgcc_divide_helper_01031c(uVar1,3,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 32)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0x1c)),uVar2,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c023aa0(ar4 + 0x30,((undefined1 *)(fr0_ - 0x1c)),ar6,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 32)), Vec3_dtor(((undefined1 *)(fr0_ - 0x1c)),0xffffffff,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c0f67ec\n.set _FUN_8c0f67ec, _FUN_8c0f67ec_def\n");
