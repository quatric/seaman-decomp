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
undefined4 FUN_8c20d01a_def(le<uint>* ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c20d01a");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  uint in_r3 = 0;
  uint a7;
  
  if ((ar4[2] == in_r3) && ((ar4[6] & 1) != 0)) {
    uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c20d82e(ar4,ar5,ar6,ar7));
  }
  else if ((ar4[2] == 0x30000000) && ((ar4[6] & 1) != 0)) {
    uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c20d9ce(ar4,ar5,ar6,ar7));
  }
  else if ((*ar4 & 0xffff) == 3) {
    uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c20db80(ar4,ar5,ar6,ar7));
  }
  else if ((ar4[6] & 8) == 0) {
    a7 = ar4[6];
    if (((a7 & 4) == 0) || ((a7 & 1) == 0)) {
      uVar1 = 4;
    }
    else {
      uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c20daa0(ar4,ar5,ar6,a7));
    }
  }
  else {
    uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c20db80(ar4,ar5,ar6,ar7));
  }
  return uVar1;
}

__asm__(".globl FUN_8c20d01a\n.set FUN_8c20d01a, FUN_8c20d01a_def\n");

}
