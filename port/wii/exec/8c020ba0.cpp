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
undefined4 FUN_8c020ba0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c020ba0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = ({ unsigned long t0_ = (unsigned long)(ar6); unsigned long t1_ = (unsigned long)(ar7); unsigned long t2_ = (unsigned long)(ar4 + 8); unsigned long t3_ = (unsigned long)(0); unsigned long t4_ = (unsigned long)(0); unsigned long t5_ = (unsigned long)((*(le<undefined4>* )(fr0_ + 0x00000000))); *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 24) + 0) = (unsigned)t0_; *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 24) + 4) = (unsigned)t1_; *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 24) + 8) = (unsigned)t2_; *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 24) + 12) = (unsigned)t3_; *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 24) + 16) = (unsigned)t4_; *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 24) + 20) = (unsigned)t5_; vsp = (((unsigned long)(fr0_ - 0)) - 24); (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c02077c))))
                    (ar4,5,*(le<undefined4>* )(unsigned)(ar4 + 0x28),ar5); });
  return uVar1;
}

__asm__(".globl FUN_8c020ba0\n.set FUN_8c020ba0, FUN_8c020ba0_def\n");

}
