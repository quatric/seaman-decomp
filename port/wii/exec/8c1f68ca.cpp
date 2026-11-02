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
undefined4 FUN_8c1f68ca_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c1f68ca");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  int unaff_r12 = 0;
  int unaff_r13 = 0;
  le<int>* a4;
  
  a4 = 0x8c472da0;
  do {
    if (*a4 != 0) {
      in_r0 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1f68ec(a4,ar5,ar6,ar7));
    }
    unaff_r13 = unaff_r13 + 1;
    a4 = (le<int>* )(unsigned)((int)a4 + (int)0xd7c);
  } while (unaff_r13 < unaff_r12);
  return in_r0 = 0;
}

__asm__(".globl FUN_8c1f68ca\n.set FUN_8c1f68ca, FUN_8c1f68ca_def\n");

}
