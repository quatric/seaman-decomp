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
undefined4 FUN_8c25eb60_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c25eb60";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 512; for (int i_ = 0; i_ < 512; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 a5;
  undefined4 a6;
  
  a5 = 0x28;
  a6 = 0x23;
  uVar1 = 0x1e0;
  (*(undefined4 *)(unsigned)(unsigned)0x8c4a9ecc) = 0x1e0;
  (*(undefined4 *)(unsigned)(unsigned)0x8c4a9ec4) = 0x208;
  (*(undefined4 *)(unsigned)(unsigned)0x8c4a9ec8) = 0x28;
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x200))); unsigned long ri1_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x1fc))); vin0 = (unsigned)ri0_; vin1 = (unsigned)ri1_; vsp = ((unsigned long)(fr0_ - 512)); FUN_8c010838(0x1e0,0x28,0x23,ar7); });
  uVar1 = (vsp = ((unsigned long)(fr0_ - 512)), FUN_8c25e260(uVar1,a5,a6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c25eb60\n.set _FUN_8c25eb60, _FUN_8c25eb60_def\n");
