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
uint FUN_8c01d4c4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c01d4c4");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  undefined4 ar7_00;
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  while ((uVar2 < 0x10 && (*(le<int>* )(unsigned)(uVar2 * 0x50 + ar4 + 0x5634) != 1))) {
    uVar2 = uVar2 + 1;
  }
  if (uVar2 < 0x10) {
    if (*(le<int>* )(unsigned)(ar4 + 0x5630) < 0) {
      *(le<uint>* )(unsigned)(ar4 + 0x5630) = uVar2;
    }
    else {
      iVar1 = *(le<int>* )(unsigned)(ar4 + 0x5630);
      while (-1 < *(le<int>* )(unsigned)(iVar1 * 0x50 + ar4 + 0x5640)) {
        iVar1 = *(le<int>* )(unsigned)(iVar1 * 0x50 + ar4 + 0x5640);
      }
      *(le<uint>* )(unsigned)(iVar1 * 0x50 + ar4 + 0x5640) = uVar2;
    }
    ar7_00 = ar7;
    ({ unsigned long ri0_ = (unsigned long)(ar5); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 4)); strcpy(uVar2 * 0x50 + ar4 + 0x5644,ar6,ar6,ar7); });
    ({ unsigned long ri0_ = (unsigned long)(ar5); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 4)); strcpy(uVar2 * 0x50 + ar4 + 0x5664,ar7,ar6,ar7_00); });
    *(le<undefined4>* )(unsigned)(uVar2 * 0x50 + ar4 + 0x563c) = ar5;
    *(le<undefined4>* )(unsigned)(uVar2 * 0x50 + ar4 + 0x5638) = 2;
    *(le<undefined4>* )(unsigned)(uVar2 * 0x50 + ar4 + 0x5640) = 0xffffffff;
    *(le<undefined4>* )(unsigned)(uVar2 * 0x50 + ar4 + 0x5634) = 0;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

__asm__(".globl FUN_8c01d4c4\n.set FUN_8c01d4c4, FUN_8c01d4c4_def\n");

}
