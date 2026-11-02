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
undefined4 FUN_8c0e8090_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0e8090");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 20; for (int i_ = 0; i_ < 20; i_++) z_[i_] = 0; }
  le<undefined2>* puVar1;
  
  ({ unsigned long t0_ = (unsigned long)(&(*(le<undefined2>* )(fr0_ - 0x10))); *(le<unsigned>* )((((unsigned long)(fr0_ - 20)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 20)) - 8); FUN_8c0e8ae0(ar4,ar5,ar6,ar7); });
  puVar1 = (le<undefined2>* )(unsigned)(ar4 + 0x224);
  *puVar1 = (*(le<undefined2>* )(fr0_ - 0x10));
  puVar1[1] = (*(le<undefined2>* )(fr0_ - 0xe));
  (vsp = ((unsigned long)(fr0_ - 20)), free_if_nonnull_wrap_016660(&(*(le<undefined2>* )(fr0_ - 0x10)),0xffffffff,ar6,ar7));
  if ((*(le<short>* )(unsigned)(0x224 + ar4) != -1) && (*(le<short>* )(unsigned)(0x226 + ar4) != -1)) {
    (vsp = ((unsigned long)(fr0_ - 20)), FUN_8c0e810c(ar4,ar5,ar4 + 0x224,ar7));
    ar5 = 0;
  }
  return ar5;
}

__asm__(".globl FUN_8c0e8090\n.set FUN_8c0e8090, FUN_8c0e8090_def\n");

}
