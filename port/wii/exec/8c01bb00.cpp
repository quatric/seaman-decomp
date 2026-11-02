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
undefined4 FUN_8c01bb00_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c01bb00");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int ar5_00;
  
  if (*(le<undefined4>* )(unsigned)0x8c2791b0 == 3) {
    ar5_00 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01baa0(ar4,ar5,ar6,ar7));
    if (ar5_00 < 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01ade8(ar4,ar5_00,ar6,ar7));
      uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01acd0(ar4,uVar1,ar6,ar7));
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

__asm__(".globl FUN_8c01bb00\n.set FUN_8c01bb00, FUN_8c01bb00_def\n");

}
