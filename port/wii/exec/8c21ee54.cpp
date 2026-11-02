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
le<undefined4>*  FUN_8c21ee54_def(le<undefined4>* ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c21ee54");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  le<undefined4>* puVar1;
  le<ushort>* puVar2;
  le<undefined4>* puVar3;
  le<undefined4>* puVar4;
  undefined4 uVar5;
  
  puVar4 = 0x8c4aa380;
  puVar3 = 0x8c4aa37c;
  puVar2 = 0x8c4aad86;
  puVar1 = 0x8c4aa378;
  if (ar4 == (le<undefined4>* )(unsigned)0x29) {
    *(le<undefined4>* )(unsigned)0x8c4aa374 = 6;
    *puVar1 = 2;
    *puVar3 = 5;
    uVar5 = 0xbfff;
    *(le<undefined4>* )(unsigned)0x8c4aa380 = 0xffffffff;
    *puVar2 = *puVar2 & (ushort)uVar5;
    ar4 = puVar3;
  }
  else {
    *(le<undefined4>* )(unsigned)0x8c4aa374 = 0;
    *puVar1 = 0xffffffff;
    *puVar3 = 0xffffffff;
    *puVar4 = 0xffffffff;
    *puVar2 = 0;
  }
  return ar4;
}

__asm__(".globl FUN_8c21ee54\n.set FUN_8c21ee54, FUN_8c21ee54_def\n");

}
