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
le<ushort>*  FUN_8c204e40_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c204e40");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  le<ushort>* puVar1;
  le<ushort>* puVar2;
  
  puVar1 = 0x8c47eba8;
  puVar2 = 0x8c47eba8;
  while( true ) {
    if ((le<ushort>* )(unsigned)(0x18000 + (unsigned)0x8c47eba8) <= puVar1) {
      return (le<ushort>* )(unsigned)0;
    }
    if ((*puVar1 & 1) == 0) break;
    puVar1 = puVar1 + 0xc;
    puVar2 = puVar2 + 0xc;
  }
  *puVar2 = 1;
  return puVar2;
}

__asm__(".globl FUN_8c204e40\n.set FUN_8c204e40, FUN_8c204e40_def\n");

}
