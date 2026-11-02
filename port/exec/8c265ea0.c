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
int FUN_8c265ea0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c265ea0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 s0 = *(undefined4 *)(vsp + 0);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 64; for (int i_ = 0; i_ < 64; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 uVar2;
  int ar5_00;
  
  ar5_00 = 0;
  uVar1 = ar6;
  uVar2 = ar7;
  if ((*(undefined4 *)(unsigned)(unsigned)0x8c2784c0) == 0) {
    ar5_00 = 0xd000001;
  }
  else if (ar4 == 0) {
    ar5_00 = 0x7000103;
  }
  else {
    (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c265a2c(ar4,(fr0_ + (int)0xffffffe0),ar6,ar7));
    if ((*(int *)(fr0_ - 0x20)) == 2) {
      ar5_00 = 0x6000001;
    }
    else {
      (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c265f74(ar4,0,uVar1,uVar2));
      (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c265e80(ar4,ar5,uVar1,uVar2));
      (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c265f7c(ar4,ar6,uVar1,uVar2));
      (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c265e88(ar4,ar7,s0,uVar2));
      (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c265f74(ar4,0,s0,uVar2));
      uVar1 = s0;
    }
  }
  if (ar5_00 != 0) {
    ({ unsigned long ri0_ = (unsigned long)((*(int *)(fr0_ - 0x20))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 64)); FUN_8c2688a0(((void *)0x8c265ea0),ar5_00,uVar1,uVar2); });
  }
  return ar5_00;
}

__asm__(".globl _FUN_8c265ea0\n.set _FUN_8c265ea0, _FUN_8c265ea0_def\n");
