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
undefined4 FUN_8c1ef558_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c1ef558");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 16; for (int i_ = 0; i_ < 16; i_++) z_[i_] = 0; }
  le<int>* piVar1;
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  if (*(le<undefined4>* )(unsigned)0x8c470e70 != 0) {
    iVar4 = *(le<undefined4>* )(unsigned)0x8c470e70 + -1;
    iVar2 = (int)0x10f4;
    uVar3 = (0x8c470e98 & 0x1fffffe0) + 0x20;
    *(le<uint>* )(unsigned)(0xa0000000 | uVar3) = iVar4 * 0x10000 | 0x80000200;
    piVar1 = 0x8c4727b4;
    *(le<undefined4>* )(unsigned)0x8c470e90 = 1;
    *(le<uint>* )(unsigned)(*(le<int>* )(unsigned)(iVar2 + *piVar1) + 4) = uVar3;
    *(le<undefined4>* )(unsigned)(*(le<int>* )(unsigned)(iVar2 + *piVar1) + 0x18) = 1;
    ((le<undefined4>* )(fr0_ - 0x10))[0] = 1;
    in_r0 = ({ unsigned long t0_ = (unsigned long)(0); unsigned long t1_ = (unsigned long)(0); *(le<unsigned>* )((((unsigned long)(fr0_ - 16)) - 8) + 0) = (unsigned)t0_; *(le<unsigned>* )((((unsigned long)(fr0_ - 16)) - 8) + 4) = (unsigned)t1_; vsp = (((unsigned long)(fr0_ - 16)) - 8); FUN_8c1f4cb8(iVar4 * 6,9,((le<undefined4>* )(fr0_ - 0x10)),1); });
    *(le<undefined4>* )(unsigned)0x8c470e78 = *(le<undefined4>* )(unsigned)0x8c470e70;
  }
  return in_r0 = 0;
}

__asm__(".globl FUN_8c1ef558\n.set FUN_8c1ef558, FUN_8c1ef558_def\n");

}
