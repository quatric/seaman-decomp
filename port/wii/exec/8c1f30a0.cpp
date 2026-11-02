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
undefined4 FUN_8c1f30a0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c1f30a0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  short sVar1;
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  int unaff_r14 = 0;
  
  if ((unaff_r14 != 0) && (in_r0 = 0x4c, *(le<short>* )(unsigned)(unaff_r14 + 0x4c) != 0)) {
    sVar1 = *(le<short>* )(unsigned)(unaff_r14 + 0x50);
    if ((sVar1 == 2) || ((sVar1 == 3 || (sVar1 == 4)))) {
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1f367a(unaff_r14,ar5,ar6,ar7));
    }
    in_r0 = 0x4c;
    *(le<undefined2>* )(unsigned)(unaff_r14 + 0x4c) = 0;
  }
  return in_r0 = 0;
}

__asm__(".globl FUN_8c1f30a0\n.set FUN_8c1f30a0, FUN_8c1f30a0_def\n");

}
