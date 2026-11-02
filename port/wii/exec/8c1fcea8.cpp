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
undefined4
FUN_8c1fcea8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c1fcea8");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 s0 = *(le<undefined4>* )(vsp + 0);
  undefined4 s4 = *(le<undefined4>* )(vsp + 4);
  undefined4 s8 = *(le<undefined4>* )(vsp + 8);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  int iVar1;
  
  iVar1 = ar4 * 0x80 + 0x8c475fc0;
  *(le<undefined4>* )(unsigned)(iVar1 + 0x14) = ar5;
  *(le<undefined4>* )(unsigned)(iVar1 + 0x18) = ar6;
  *(le<undefined4>* )(unsigned)(iVar1 + 0x1c) = ar7;
  *(le<undefined4>* )(unsigned)(iVar1 + 0x20) = s0;
  *(le<undefined4>* )(unsigned)(iVar1 + 0x24) = s4;
  *(le<undefined4>* )(unsigned)(iVar1 + 0x28) = s8;
  *(le<undefined4>* )(unsigned)(iVar1 + 4) = 1;
  return in_r0 = 0;
}

__asm__(".globl FUN_8c1fcea8\n.set FUN_8c1fcea8, FUN_8c1fcea8_def\n");

}
