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
undefined4 FUN_8c0e004c_def(le<int>* ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0e004c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 ar5_00;
  uint a5;
  undefined4 in_PR = 0;
  
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0db008(ar4,ar5,ar6,ar7));
  ar5_00 = 0;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0d0538(ar4 + 0x4ec9,0,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0d064c(ar4 + 0x4ec9,ar5_00,ar6,ar7));
  ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); noop_0d98f4(ar4 + 0x89c1,ar5_00,ar6,ar7); });
  a5 = ar5;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0d50ec(ar4 + 0x42b,ar5,ar6,ar7));
  if ((ar5 & 0xff) < 2) {
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*ar4 + 0x1c4))))(ar4,a5,ar6,ar7));
  }
  else {
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*ar4 + 0x7c))))(ar4,a5,ar6,ar7));
  }
  return 0;
}

__asm__(".globl FUN_8c0e004c\n.set FUN_8c0e004c, FUN_8c0e004c_def\n");

}
