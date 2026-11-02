#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 Class_129cbc_m1_031598_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("Class_129cbc_m1_031598");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 68; for (int i_ = 0; i_ < 68; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  *(undefined1 *)(unsigned)(0x210 + ar4) = *(undefined1 *)(unsigned)(ar5 + 0x28);
  (vsp = ((unsigned long)(fr0_ - 68)), vec3_copy_8c02b5fc(((undefined1 *)(fr0_ - 0x14)),ar4 + 0x14c,ar6,ar7));
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x24))); *(le<unsigned>* )((((unsigned long)(fr0_ - 68)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 68)) - 8); FUN_8c023484(ar4 + 0x14,((undefined1 *)(fr0_ - 0x14)),ar6,ar7); });
  (vsp = ((unsigned long)(fr0_ - 68)), Vec3_assign(ar4 + 0x14,((undefined1 *)(fr0_ - 0x24)),ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 68)), Vec3_dtor(((undefined1 *)(fr0_ - 0x24)),0xffffffff,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 68)), object_dtor_delete(((undefined1 *)(fr0_ - 0x14)),0xffffffff,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 68)), vec3_copy_8c02b5fc(((undefined1 *)(fr0_ - 0x30)),ar4 + 0x14c,ar6,ar7));
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x40))); *(le<unsigned>* )((((unsigned long)(fr0_ - 68)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 68)) - 8); FUN_8c023484(ar4 + 0x80,((undefined1 *)(fr0_ - 0x30)),ar6,ar7); });
  (vsp = ((unsigned long)(fr0_ - 68)), Vec3_assign(ar4 + 0x80,((undefined1 *)(fr0_ - 0x40)),ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 68)), Vec3_dtor(((undefined1 *)(fr0_ - 0x40)),0xffffffff,ar6,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 68)), object_dtor_delete(((undefined1 *)(fr0_ - 0x30)),0xffffffff,ar6,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 68)), FUN_8c02a1fc(ar4 + 0x14c,uVar1,ar6,ar7));
  return uVar1;
}

__asm__(".globl Class_129cbc_m1_031598\n.set Class_129cbc_m1_031598, Class_129cbc_m1_031598_def\n");

}
