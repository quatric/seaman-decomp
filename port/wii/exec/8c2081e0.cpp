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
uint FUN_8c2081e0_def(uint ar4,int ar5,int ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c2081e0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  le<uint>* puVar1;
  uint in_r0 = (uint)(unsigned long)vin0;
  
  puVar1 = 0x8c4a9d58;
  *(le<undefined4>* )(unsigned)0x8c4a9d58 = (ar4 & 7) << 0x18;
  if (ar6 != 0) {
    in_r0 = *puVar1 | 0x10000000;
    *puVar1 = in_r0;
  }
  if (ar5 != 0) {
    *(le<undefined4>* )(unsigned)0x8c4a9d58 = *(le<undefined4>* )(unsigned)0x8c4a9d58 | 0x8000000;
  }
  return in_r0 = 0;
}

__asm__(".globl FUN_8c2081e0\n.set FUN_8c2081e0, FUN_8c2081e0_def\n");

}
