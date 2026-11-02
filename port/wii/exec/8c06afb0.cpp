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
int FUN_8c06afb0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c06afb0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 ar5_00;
  int iVar4;
  
  ar5_00 = ar5;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c028ee4(ar5,ar5,ar6,ar7));
  if (*(le<short>* )(unsigned)(0x264 + ar4) == (short)uVar1) {
    uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02602c(ar5,ar5_00,ar6,ar7));
    iVar4 = (uVar2 & 0xffff) - (int)*(le<short>* )(unsigned)(0x266 + ar4);
  }
  else {
    uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02602c(ar5,ar5_00,ar6,ar7));
    uVar3 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c028ee4(ar5,ar5_00,ar6,ar7));
    iVar4 = (0x3840 - *(le<short>* )(unsigned)(0x266 + ar4)) +
            (((uVar3 & 0xffff) - (uint)*(le<ushort>* )(unsigned)(0x264 + ar4)) + -1) * 0x3840 +
            (uVar2 & 0xffff);
  }
  return iVar4;
}

__asm__(".globl FUN_8c06afb0\n.set FUN_8c06afb0, FUN_8c06afb0_def\n");

}
