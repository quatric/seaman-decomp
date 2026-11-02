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
undefined4 FUN_8c20df7a_def(int ar4,uint ar5,int ar6,le<uint>* ar7)

{
  TRACE_ENTER("FUN_8c20df7a");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  uint uVar2;
  int ar6_00;
  le<uint>* ar7_00;
  undefined4 in_PR = 0;
  uint ain0;
  
  if (ar4 == 0) {
    uVar1 = 1;
  }
  else {
    ar6_00 = ar6;
    ar7_00 = ar7;
    ain0 = ar5;
    uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c20e720(ar4,ar5,ar6,ar7));
    *ar7 = uVar2;
    if (ar6 != 0) {
      if (ain0 < *ar7) {
        return 2;
      }
      uVar2 = 0;
      if (*ar7 != 0) {
        do {
          ({ unsigned long ri0_ = (unsigned long)(ain0); unsigned long ri1_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vin1 = (unsigned)ri1_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c010838(uVar2,ar5,ar6_00,ar7_00); });
          uVar2 = uVar2 + 1;
        } while (uVar2 < *ar7);
      }
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c20e78e(ar6,ar5,ar6_00,ar7_00));
    }
    uVar1 = 0;
  }
  return uVar1;
}

__asm__(".globl FUN_8c20df7a\n.set FUN_8c20df7a, FUN_8c20df7a_def\n");

}
