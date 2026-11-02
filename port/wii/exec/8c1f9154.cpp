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
undefined4 FUN_8c1f9154_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c1f9154");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  uint unaff_r14 = 0;
  
  do {
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1f9108((*(le<undefined4>* )(unsigned)(unsigned)0x8c273a28) + 4 + unaff_r14,ar5,ar6,ar7));
    unaff_r14 = unaff_r14 + 0x34;
  } while (unaff_r14 < 0xd0);
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c474bac) = 1;
  return 0;
}

__asm__(".globl FUN_8c1f9154\n.set FUN_8c1f9154, FUN_8c1f9154_def\n");

}
