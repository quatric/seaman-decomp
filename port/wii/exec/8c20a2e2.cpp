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
undefined4 FUN_8c20a2e2_def(int ar4,int ar5,int ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c20a2e2");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined *puVar1;
  int in_r3 = 0;
  undefined4 ar5_00;
  le<undefined4>* puVar2;
  int ar4_00;
  
  puVar1 = ((void *)(unsigned)0x8c20a844);
  if (in_r3 < ar5) {
    ar5 = (int)0x3ff;
  }
  ar4_00 = ar4 * 4 + (int)0x1000;
  puVar2 = (le<undefined4>* )(unsigned)(ar4 * 4 + ar6);
  for (; ar4 < ar5; ar4 = ar4 + 1) {
    ar5_00 = *puVar2;
    puVar2 = puVar2 + 1;
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar1)))(ar4_00,ar5_00,ar6,ar7));
    ar4_00 = ar4_00 + 4;
  }
  return 0;
}

__asm__(".globl FUN_8c20a2e2\n.set FUN_8c20a2e2, FUN_8c20a2e2_def\n");

}
