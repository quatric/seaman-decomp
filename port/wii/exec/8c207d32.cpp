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
undefined4 FUN_8c207d32_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c207d32");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  undefined *puVar1;
  int in_r0 = (int)(unsigned long)vin0;
  uint a5;
  
  puVar1 = ((void *)(unsigned)0x8c20a844);
  if (in_r0 == 1) {
    (vsp = ((unsigned long)(fr0_ - 4)), pvr_20a844(0x44,*(le<undefined4>* )(unsigned)0x8c4a9e74 & 0xfffffffe,ar6,ar7));
    a5 = *(le<undefined4>* )(unsigned)0x8c4a9eb0 | 8;
  }
  else {
    (vsp = ((unsigned long)(fr0_ - 4)), pvr_20a844(0x44,*(le<undefined4>* )(unsigned)0x8c4a9e74 & 0xfffffffe,ar6,ar7));
    a5 = *(le<undefined4>* )(unsigned)0x8c4a9eb0;
  }
  (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)(puVar1)))((int)0xe8,a5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)(puVar1)))(0x44,*(le<undefined4>* )(unsigned)0x8c4a9e74,ar6,ar7));
  return 0;
}

__asm__(".globl FUN_8c207d32\n.set FUN_8c207d32, FUN_8c207d32_def\n");

}
