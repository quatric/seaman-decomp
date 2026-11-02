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
undefined4 FUN_8c20a482_def(uint ar4,uint ar5,uint ar6,uint ar7)

{
  TRACE_ENTER("FUN_8c20a482");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  uint uVar1;
  
  if (((int)ar4 <= (int)ar6) && ((int)ar5 <= (int)ar7)) {
    uVar1 = (uint)0x7ff;
    if ((int)uVar1 < (int)ar6) {
      ar6 = uVar1;
    }
    if ((int)uVar1 < (int)ar7) {
      ar7 = uVar1;
    }
    if (*(le<undefined4>* )(unsigned)0x8c4a9bd0 == 4) {
      ar6 = ar6 & 0xfffffffe;
      ar7 = ar7 & 0xfffffffe;
      ar4 = ar4 + 1 & 0xfffffffe;
      ar5 = ar5 + 1 & 0xfffffffe;
    }
    *(le<undefined4>* )(unsigned)0x8c4a9e60 = ar4 & uVar1 | (ar6 & uVar1) << 0x10;
    *(le<undefined4>* )(unsigned)0x8c4a9e64 = (ar7 & uVar1) << 0x10 | ar5 & uVar1;
    return 0;
  }
  return 0xdddd;
}

__asm__(".globl FUN_8c20a482\n.set FUN_8c20a482, FUN_8c20a482_def\n");

}
