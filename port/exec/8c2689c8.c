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
undefined4 FUN_8c2689c8_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c2689c8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int ar4_00;
  undefined4 ar4_01;
  undefined4 uVar1;
  undefined4 *ar6_00;
  undefined4 a7;
  undefined4 in_PR = 0;
  
  ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); noop_26a0f8(ar4,ar5,ar6,ar7); });
  (vsp = ((unsigned long)(fr0_ - 0)), memset(((undefined1 *)(unsigned)0x8c4bd580),0,0x480,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), memset(0x8c4bda00,0,0x820,ar7));
  uVar1 = 0x80808080;
  ar4_00 = 0;
  a7 = 0x200;
  ar6_00 = (undefined4 *)(unsigned)((undefined1 *)(unsigned)0x8c4be220);
  do {
    ar4_00 = ar4_00 + 1;
    *ar6_00 = 0x80808080;
    ar6_00 = ar6_00 + 1;
  } while (ar4_00 < 0x200);
  if ((*(undefined4 *)(unsigned)(unsigned)0x8c2785cc) == 0) {
    (*(undefined4 *)(unsigned)(unsigned)0x8c2785cc) = (vsp = ((unsigned long)(fr0_ - 0)), ret_const_8c2785e8_26b1ca(ar4_00,0x80808080,ar6_00,0x200));
  }
  ar4_01 = 0;
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)(((*(undefined4 *)(unsigned)(unsigned)0x8c2785cc) + 0xc))))(0,uVar1,ar6_00,a7));
  ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); noop_2689c4(ar4_01,uVar1,ar6_00,a7); });
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c26a130(0,0,ar6_00,a7));
  return uVar1;
}

__asm__(".globl _FUN_8c2689c8\n.set _FUN_8c2689c8, _FUN_8c2689c8_def\n");
