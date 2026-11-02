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
undefined4 FUN_8c207620_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c207620");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  uint uVar1;
  uint ar6_00;
  uint ar7_00;
  
  if (((*(le<undefined4>* )(unsigned)0x8c4a9bcc & 1) == 1) || ((*(le<undefined4>* )(unsigned)0x8c4a9bcc & 0x2c) == 0)) {
    ar6_00 = *(le<undefined4>* )(unsigned)0x8c4a9e9c >> 0x10;
  }
  else {
    ar6_00 = *(le<undefined4>* )(unsigned)0x8c4a9e9c >> 0x11;
  }
  ar7_00 = ar4 + *(le<undefined4>* )(unsigned)0x8c4a9c08 + *(le<undefined4>* )(unsigned)0x8c4a9c00;
  uVar1 = ar7_00;
  if (((*(le<undefined4>* )(unsigned)0x8c4a9bcc & 1) != 1) && ((*(le<undefined4>* )(unsigned)0x8c4a9bcc & 0x20) != 0)) {
    uVar1 = ((int)(ar4 + (uint)(ar4 < 0)) >> 1) + *(le<undefined4>* )(unsigned)0x8c4a9c08 + *(le<undefined4>* )(unsigned)0x8c4a9c00;
  }
  if ((int)uVar1 < 0) {
    uVar1 = uVar1 + ar6_00;
  }
  if ((int)ar6_00 < (int)uVar1) {
    uVar1 = ar6_00;
  }
  if ((int)uVar1 < 0) {
    uVar1 = 0;
  }
  uVar1 = *(le<undefined4>* )(unsigned)0x8c4a9e90 & 0x3ff0000 | (int)0x3ff & uVar1;
  *(le<undefined4>* )(unsigned)0x8c4a9e90 = uVar1;
  (vsp = ((unsigned long)(fr0_ - 0)), pvr_20a844((int)0xc8,uVar1,ar6_00,ar7_00));
  return 0;
}

__asm__(".globl FUN_8c207620\n.set FUN_8c207620, FUN_8c207620_def\n");

}
