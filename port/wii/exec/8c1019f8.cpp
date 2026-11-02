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
uint FUN_8c1019f8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c1019f8");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 ar6_00;
  uint uVar1;
  uint uVar2;
  undefined4 ar5_00;
  
  ar6_00 = (vsp = ((unsigned long)(fr0_ - 0)), sh4_tmu_1f88e6(ar4,ar5,ar6,ar7));
  ar5_00 = *(le<undefined4>* )(unsigned)(ar4 + 0x2c);
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c101de0(ar4,ar5_00,ar6_00,ar7));
  uVar2 = 0x16e360;
  if (0x16e360 < uVar1) {
    uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c101c64(ar4,ar5_00,ar6_00,ar7));
  }
  return uVar2;
}

__asm__(".globl FUN_8c1019f8\n.set FUN_8c1019f8, FUN_8c1019f8_def\n");

}
