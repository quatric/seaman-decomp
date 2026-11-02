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
undefined4 FUN_8c203298_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c203298");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  uint uVar1;
  le<int>* piVar2;
  le<int>* piVar3;
  le<int>* piVar4;
  le<int>* piVar5;
  
  piVar4 = 0x8c47e988;
  piVar5 = 0x8c47e988;
  do {
    if ((le<int>* )(unsigned)((int)0x200 + (unsigned)0x8c47e988) <= piVar4) {
      return 1;
    }
    uVar1 = 0;
    piVar2 = piVar4;
    piVar3 = piVar5;
    do {
      if ((*piVar3 == ar4) && ((piVar2[6] & 3U) != 0)) {
        return 0;
      }
      uVar1 = uVar1 + 1;
      piVar2 = piVar2 + 8;
      piVar3 = piVar3 + 8;
    } while (uVar1 < 8);
    piVar4 = (le<int>* )(unsigned)((int)piVar4 + (int)0x100);
    piVar5 = (le<int>* )(unsigned)((int)piVar5 + (int)0x100);
  } while( true );
}

__asm__(".globl FUN_8c203298\n.set FUN_8c203298, FUN_8c203298_def\n");

}
