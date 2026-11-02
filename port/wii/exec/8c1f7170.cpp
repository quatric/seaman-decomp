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
undefined4 FUN_8c1f7170_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c1f7170");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  le<int>* in_r1 = (le<int>* )(unsigned long)vin1;
  int in_r3 = 0;
  undefined4 ar5_00;
  int ar6_00;
  int ar7_00;
  undefined4 uVar1;
  
  uVar1 = 1;
  if (*in_r1 < in_r3) {
    ar6_00 = *(le<undefined4>* )(unsigned)0x8c4748b4;
    if ((ar6_00 == 0) || (*(le<undefined4>* )(unsigned)0x8c4748b8 == 0)) {
      uVar1 = 0;
      *(le<undefined4>* )(unsigned)0x8c4748a8 = 0xb;
    }
    else {
      ar7_00 = *(le<undefined4>* )(unsigned)0x8c4748b8;
      ar5_00 = *(le<undefined4>* )(unsigned)0x8c4748b0;
      (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c1f6b14(*(le<undefined4>* )(unsigned)0x8c4748ac,ar5_00,ar6_00,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c1f6dcc(0xfffffffd,ar5_00,ar6_00,ar7_00));
    }
  }
  return uVar1;
}

__asm__(".globl FUN_8c1f7170\n.set FUN_8c1f7170, FUN_8c1f7170_def\n");

}
