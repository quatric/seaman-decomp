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
undefined4 FUN_8c1fc360_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c1fc360";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = *(undefined4 *)(unsigned)(ar4 + 0x28);
  iVar1 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c1fce88(uVar2,ar5,ar6,ar7));
  if (iVar1 == 0) {
    ({ unsigned long ri0_ = (unsigned long)(ar4); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 4)); FUN_8c1fce98(uVar2,4,ar6,ar7); });
    ({ unsigned long t0_ = (unsigned long)(0); unsigned long t1_ = (unsigned long)(0); unsigned long t2_ = (unsigned long)(ar4); unsigned long ri0_ = (unsigned long)(0); *(unsigned *)((((unsigned long)(fr0_ - 4)) - 16) + 0) = (unsigned)t0_; *(unsigned *)((((unsigned long)(fr0_ - 4)) - 16) + 4) = (unsigned)t1_; *(unsigned *)((((unsigned long)(fr0_ - 4)) - 16) + 8) = (unsigned)t2_; vin0 = (unsigned)ri0_; vsp = (((unsigned long)(fr0_ - 4)) - 16); FUN_8c1fcea8(uVar2,ar4,1,0); });
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

__asm__(".globl _FUN_8c1fc360\n.set _FUN_8c1fc360, _FUN_8c1fc360_def\n");
