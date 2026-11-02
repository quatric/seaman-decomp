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
undefined4 FUN_8c1f3122_def(int ar4,int ar5,int ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c1f3122");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 20; for (int i_ = 0; i_ < 20; i_++) z_[i_] = 0; }
  if ((ar4 == 0) || (*(le<short>* )(unsigned)(ar4 + 0x4c) == 0)) {
    return 0xfffffff6;
  }
  if (ar6 != 0) {
    if (ar6 == 1) {
      ar5 = *(le<int>* )(unsigned)(ar4 + 0x14) + ar5;
    }
    else {
      if (ar6 != 2) {
        return 0xfffffff0;
      }
      ar5 = ar5 + *(le<int>* )(unsigned)(ar4 + 0x10);
    }
  }
  if ((-1 < ar5) && (ar5 <= *(le<int>* )(unsigned)(ar4 + 0x10))) {
    *(le<int>* )(unsigned)(ar4 + 0x14) = ar5;
    return 0;
  }
  return 0xffffffef;
}

__asm__(".globl FUN_8c1f3122\n.set FUN_8c1f3122, FUN_8c1f3122_def\n");

}
