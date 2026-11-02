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
undefined4 FUN_8c25e884_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c25e884");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 512; for (int i_ = 0; i_ < 512; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 a5;
  undefined4 a6;
  undefined4 a7;
  
  uVar1 = 1;
  a6 = 0x12;
  if ((((*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9bcc) & 1) == 1) || (((*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9bcc) & 0x2c) == 0)) {
    (*(le<int>* )(fr0_ - 0xf8)) = 0x12;
  }
  else {
    (*(le<int>* )(fr0_ - 0xf8)) = 0x24;
  }
  a7 = 0x1f;
  a5 = 0;
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9ecc) = 0xf0;
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9ec4) = ((*(le<int>* )(fr0_ - 0xf8)) >> 1) + 0xf0;
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9ec8) = (*(le<int>* )(fr0_ - 0xf8));
  ({ unsigned long ri0_ = (unsigned long)((*(le<undefined4>* )(fr0_ - 0x200))); unsigned long ri1_ = (unsigned long)((*(le<undefined4>* )(fr0_ - 0x1fc))); vin0 = (unsigned)ri0_; vin1 = (unsigned)ri1_; vsp = ((unsigned long)(fr0_ - 512)); FUN_8c010838(1,0,0x12,0x1f); });
  uVar1 = (vsp = ((unsigned long)(fr0_ - 512)), FUN_8c25e260(uVar1,a5,a6,a7));
  return uVar1;
}

__asm__(".globl FUN_8c25e884\n.set FUN_8c25e884, FUN_8c25e884_def\n");

}
