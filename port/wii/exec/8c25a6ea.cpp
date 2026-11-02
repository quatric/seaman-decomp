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
undefined4 FUN_8c25a6ea_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c25a6ea");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 ain0 = (undefined4)(unsigned long)vin0;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  le<int>* piVar1;
  uint uVar2;
  
  piVar1 = (*(le<undefined4>* )(unsigned)(unsigned)0x8c277b08);
  for (uVar2 = 0; uVar2 < (*(le<undefined4>* )(unsigned)(unsigned)0x8c277b0c); uVar2 = uVar2 + 1) {
    if (*piVar1 == ar4) {
      ain0 = 0x40;
      *(le<short>* )(unsigned)(piVar1 + 0x10) = (short)piVar1[0x10] + 1;
    }
    piVar1 = piVar1 + 0x11;
  }
  return ain0;
}

__asm__(".globl FUN_8c25a6ea\n.set FUN_8c25a6ea, FUN_8c25a6ea_def\n");

}
