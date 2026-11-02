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
undefined4 FUN_8c1fc504_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,uint ar7)

{
  ring[rp++ & 255] = "FUN_8c1fc504";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 28; for (int i_ = 0; i_ < 28; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint ain0;
  
  ain0 = CONCAT22((short)((uint)(*(undefined4 *)(fr0_ - 0x18)) >> 0x10),(short)ar6);
  uVar3 = ar7;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c1fce88(ar4,ar5,ar6,ar7));
  if (iVar1 == 0) {
    ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 28)); FUN_8c1fce98(ar4,10,ar6,uVar3); });
    uVar3 = ain0 & 0xffff;
    ({ unsigned long t0_ = (unsigned long)(0); unsigned long t1_ = (unsigned long)(0); unsigned long t2_ = (unsigned long)(ain0); unsigned long ri0_ = (unsigned long)(ar7 & 0xff); *(unsigned *)((((unsigned long)(fr0_ - 28)) - 16) + 0) = (unsigned)t0_; *(unsigned *)((((unsigned long)(fr0_ - 28)) - 16) + 4) = (unsigned)t1_; *(unsigned *)((((unsigned long)(fr0_ - 28)) - 16) + 8) = (unsigned)t2_; vin0 = (unsigned)ri0_; vsp = (((unsigned long)(fr0_ - 28)) - 16); FUN_8c1fcea8(ar4,ar4,ar5,uVar3); });
    (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c1fcef8(ar4,ar5,ar5,uVar3));
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

__asm__(".globl _FUN_8c1fc504\n.set _FUN_8c1fc504, _FUN_8c1fc504_def\n");
