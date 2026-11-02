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
undefined4
FUN_8c2029b4_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c2029b4");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  uint s0 = *(le<uint>* )(vsp + 0);
  uint s4 = *(le<uint>* )(vsp + 4);
  uint s8 = *(le<uint>* )(vsp + 8);
  uint s12 = *(le<uint>* )(vsp + 12);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  if (s0 == s8) {
    if (s4 == s12) {
      return 0;
    }
    if (s12 < s4) {
      return 1;
    }
  }
  else if (s8 < s0) {
    return 1;
  }
  return 0xffffffff;
}

__asm__(".globl FUN_8c2029b4\n.set FUN_8c2029b4, FUN_8c2029b4_def\n");

}
