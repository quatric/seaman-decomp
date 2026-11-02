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
undefined4 FUN_8c1f0ce2_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c1f0ce2");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 8; for (int i_ = 0; i_ < 8; i_++) z_[i_] = 0; }
  uint uVar1;
  undefined4 uVar2;
  int unaff_r13 = 0;
  le<ushort>* ar5_00;
  
  if (*(le<short>* )(unsigned)(unaff_r13 + 2) == 0) {
    uVar2 = 0x3c;
    ar5_00 = (le<ushort>* )(unsigned)((*(le<int>* )(unsigned)(unaff_r13 + 0x28) + 1) * 0x40 + *(le<int>* )(unsigned)(unaff_r13 + 0xc));
    func_0x8c1f0974(ar5_00 + 1,*(le<undefined4>* )(unsigned)(unaff_r13 + 0x30),0x3c,ar7);
    if ((*ar5_00 == 0xffff) ||
       (uVar1 = (vsp = ((unsigned long)(fr0_ - 8)), FUN_8c1f109c(0x3e,ar5_00,uVar2,ar7)),
       (uint)ar5_00[0x1f] == (uVar1 & 0xffff))) {
      uVar2 = 0;
    }
    else {
      uVar2 = 0xfffffffc;
    }
  }
  else {
    uVar2 = 0xfffffffa;
  }
  return uVar2;
}

__asm__(".globl FUN_8c1f0ce2\n.set FUN_8c1f0ce2, FUN_8c1f0ce2_def\n");

}
