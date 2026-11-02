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
undefined4 FUN_8c1f19ec_def(undefined4 ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c1f19ec");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 16; for (int i_ = 0; i_ < 16; i_++) z_[i_] = 0; }
  int ar4_00;
  undefined4 uVar1;
  int ar7_00;
  
  ar7_00 = ar5 << 0xb;
  ar4_00 = (vsp = ((unsigned long)(fr0_ - 16)), FUN_8c1f302a(*(le<undefined4>* )(unsigned)((*(le<undefined4>* )(unsigned)(unsigned)0x8c2739e0) + 0x14),0,ar4,ar7_00));
  if (ar4_00 == 0) {
    return 0xfffffff3;
  }
  uVar1 = (vsp = ((unsigned long)(fr0_ - 16)), FUN_8c1f31c6(ar4_00,ar5,ar6,ar7_00));
  return uVar1;
}

__asm__(".globl FUN_8c1f19ec\n.set FUN_8c1f19ec, FUN_8c1f19ec_def\n");

}
