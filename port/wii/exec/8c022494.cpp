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
uint FUN_8c022494_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c022494");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 20; for (int i_ = 0; i_ < 20; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 ar6_00;
  le<undefined4>* ar7_00;
  
  ar7_00 = ((le<undefined4>* )(fr0_ - 0x10));
  ar6_00 = ar6;
  iVar1 = ({ unsigned long t0_ = (unsigned long)(&(*(le<undefined4>* )(fr0_ - 0x14))); unsigned long t1_ = (unsigned long)(1); *(le<unsigned>* )((((unsigned long)(fr0_ - 20)) - 8) + 0) = (unsigned)t0_; *(le<unsigned>* )((((unsigned long)(fr0_ - 20)) - 8) + 4) = (unsigned)t1_; vsp = (((unsigned long)(fr0_ - 20)) - 8); file_load_to_buffer(0x8c3eb334,ar5,ar6,ar7_00); });
  if (iVar1 != 0) {
    (vsp = ((unsigned long)(fr0_ - 20)), FUN_8c022504(ar4,((le<undefined4>* )(fr0_ - 0x10))[0],ar6_00,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 20)), FUN_8c021234(0x8c3eb334,ar5,ar6,1));
  }
  return (uint)(iVar1 != 0);
}

__asm__(".globl FUN_8c022494\n.set FUN_8c022494, FUN_8c022494_def\n");

}
