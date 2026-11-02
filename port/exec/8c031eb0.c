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
undefined4 FUN_8c031eb0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c031eb0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 s0 = *(undefined4 *)(vsp + 0);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 96; for (int i_ = 0; i_ < 96; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined1 *ar5_00;
  undefined4 ar7_00;
  
  ar7_00 = ar7;
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x30))); unsigned long t1_ = (unsigned long)((*(undefined4 *)(fr0_ + 0x00000004))); *(unsigned *)((((unsigned long)(fr0_ - 96)) - 8) + 0) = (unsigned)t0_; *(unsigned *)((((unsigned long)(fr0_ - 96)) - 8) + 4) = (unsigned)t1_; vsp = (((unsigned long)(fr0_ - 96)) - 8); FUN_8c0332b4(ar4,ar5,ar6,ar7); });
  (vsp = ((unsigned long)(fr0_ - 96)), vec3_copy_8c02b5fc(((undefined1 *)(fr0_ - 0x14)),((undefined1 *)(fr0_ - 0x30)),ar6,ar7_00));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 96)), object_dtor_delete(((undefined1 *)(fr0_ - 0x30)),0xffffffff,ar6,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 96)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0x3c)),uVar1,ar6,ar7_00));
  ar5_00 = ((undefined1 *)(fr0_ - 0x3c));
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x4c))); *(unsigned *)((((unsigned long)(fr0_ - 96)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 96)) - 8); FUN_8c023484(ar7,ar5_00,ar6,ar7_00); });
  (vsp = ((unsigned long)(fr0_ - 96)), FUN_8c02374c(((undefined1 *)(fr0_ - 0x4c)),ar5_00,ar6,ar7_00));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 96)), Vec3_length(((undefined1 *)(fr0_ - 0x5c)),ar5_00,ar6,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 96)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x24)),uVar1,ar6,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 96)), Vec3_dtor(((undefined1 *)(fr0_ - 0x5c)),0xffffffff,ar6,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 96)), Vec3_dtor(((undefined1 *)(fr0_ - 0x4c)),0xffffffff,ar6,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 96)), object_dtor_delete(((undefined1 *)(fr0_ - 0x3c)),0xffffffff,ar6,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 96)), Vec3_ctor_copy(s0,((undefined1 *)(fr0_ - 0x24)),ar6,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 96)), Vec3_dtor(((undefined1 *)(fr0_ - 0x24)),0xffffffff,ar6,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 96)), object_dtor_delete(((undefined1 *)(fr0_ - 0x14)),0xffffffff,ar6,ar7_00));
  return 0;
}

__asm__(".globl _FUN_8c031eb0\n.set _FUN_8c031eb0, _FUN_8c031eb0_def\n");
