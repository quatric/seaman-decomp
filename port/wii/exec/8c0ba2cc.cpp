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
int FUN_8c0ba2cc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0ba2cc");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0b7a54(ar4,ar5,ar6,ar7));
  *(le<undefined4>* )(unsigned)(0x7cc + ar4) = 0;
  *(le<undefined4>* )(unsigned)(0x7d0 + ar4) = 0;
  *(le<undefined4>* )(unsigned)(0x7d8 + ar4) = 0;
  *(le<undefined4>* )(unsigned)(0x7d4 + ar4) = 0;
  *(le<undefined4>* )(unsigned)(0x7dc + ar4) = 0;
  *(le<undefined4>* )(unsigned)(0x7e0 + ar4) = 0;
  return ar4;
}

__asm__(".globl FUN_8c0ba2cc\n.set FUN_8c0ba2cc, FUN_8c0ba2cc_def\n");

}
