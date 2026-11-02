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
undefined4 FUN_8c1f0f24_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c1f0f24");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 12; for (int i_ = 0; i_ < 12; i_++) z_[i_] = 0; }
  if ((*(le<undefined4>* )(unsigned)(unsigned)0x8c2739d8) == 0) {
    return 0xfffffff5;
  }
  if (*(le<int>* )(unsigned)((*(le<undefined4>* )(unsigned)(unsigned)0x8c2739d8) + 0x1c) != 0) {
    return 0xfffffff7;
  }
  if ((-1 < ar4) && (ar4 < *(le<int>* )(unsigned)((*(le<undefined4>* )(unsigned)(unsigned)0x8c2739d8) + 0x14))) {
    *(le<undefined4>* )(unsigned)((*(le<undefined4>* )(unsigned)(unsigned)0x8c2739d8) + 0x1c) = 1;
    *(le<undefined4>* )(unsigned)((*(le<undefined4>* )(unsigned)(unsigned)0x8c2739d8) + 0x20) = 2;
    *(le<int>* )(unsigned)((*(le<undefined4>* )(unsigned)(unsigned)0x8c2739d8) + 0x28) = ar4;
    *(le<undefined4>* )(unsigned)((*(le<undefined4>* )(unsigned)(unsigned)0x8c2739d8) + 0x30) = ar5;
    return 0;
  }
  return 0xfffffffb;
}

__asm__(".globl FUN_8c1f0f24\n.set FUN_8c1f0f24, FUN_8c1f0f24_def\n");

}
