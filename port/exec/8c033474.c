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
undefined4 FUN_8c033474_def(int ar4,undefined4 ar5,undefined4 ar6,int *ar7)

{
  ring[rp++ & 255] = "FUN_8c033474";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 56; for (int i_ = 0; i_ < 56; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined1 *a6;
  undefined1 *a7;
  
  uVar1 = 0;
  if (*(char *)(unsigned)(0x210 + ar4) != '\0') {
    (vsp = ((unsigned long)(fr0_ - 56)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x14)),ar5,ar6,ar7));
    a7 = ((undefined1 *)(fr0_ - 0xc));
    a6 = ((undefined1 *)(fr0_ - 0x10));
    (vsp = ((unsigned long)(fr0_ - 56)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0x13c + *ar7))))(ar7,((undefined1 *)(fr0_ - 0x14)),a6,a7));
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x34))); *(unsigned *)((((unsigned long)(fr0_ - 56)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 56)) - 8); Vec3_sub(ar6,((undefined1 *)(fr0_ - 0x14)),a6,a7); });
    (vsp = ((unsigned long)(fr0_ - 56)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x24)),((undefined1 *)(fr0_ - 0x34)),a6,a7));
    (vsp = ((unsigned long)(fr0_ - 56)), Vec3_dtor(((undefined1 *)(fr0_ - 0x34)),0xffffffff,a6,a7));
    (vsp = ((unsigned long)(fr0_ - 56)), FUN_8c02174c(0x8c2b59d0,ar5,a6,a7));
    (vsp = ((unsigned long)(fr0_ - 56)), Vec3_dtor(((undefined1 *)(fr0_ - 0x24)),0xffffffff,a6,a7));
    uVar1 = (vsp = ((unsigned long)(fr0_ - 56)), Vec3_dtor(((undefined1 *)(fr0_ - 0x14)),0xffffffff,a6,a7));
  }
  return uVar1;
}

__asm__(".globl _FUN_8c033474\n.set _FUN_8c033474, _FUN_8c033474_def\n");
