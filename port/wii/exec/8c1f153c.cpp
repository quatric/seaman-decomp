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
uint FUN_8c1f153c_def(uint ar4,byte *ar5,int ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c1f153c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  byte bVar1;
  bool bVar2;
  
  while (bVar2 = 0 < ar6, ar6 = ar6 + -1, bVar2) {
    bVar1 = *ar5;
    ar5 = ar5 + 1;
    ar4 = (ar4 & 0xff) << 8 ^
          (int)*(le<short>* )(unsigned)(((undefined1 *)(unsigned)0x8c26c2a0) + ((int)(ar4 & 0xffff) >> 8 ^ (uint)bVar1) * 2);
  }
  return ar4;
}

__asm__(".globl FUN_8c1f153c\n.set FUN_8c1f153c, FUN_8c1f153c_def\n");

}
