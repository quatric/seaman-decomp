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
undefined4 FUN_8c1f6386_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c1f6386");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  int unaff_r14 = 0;
  
  if (unaff_r14 != 0) {
    (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c1f026a(8,unaff_r14,ar6,ar7));
    in_r0 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c1f026a(9,0xffffffff,ar6,ar7));
    *(le<undefined4>* )(unsigned)0x8c4727c0 = unaff_r14;
  }
  return in_r0 = 0;
}

__asm__(".globl FUN_8c1f6386\n.set FUN_8c1f6386, FUN_8c1f6386_def\n");

}
