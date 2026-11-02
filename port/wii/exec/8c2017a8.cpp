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
undefined4 FUN_8c2017a8_def(uint ar4,uint ar5,int ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c2017a8");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 256; for (int i_ = 0; i_ < 256; i_++) z_[i_] = 0; }
  uint uVar1;
  
  if (((ar4 != 0) && (ar4 < 4)) && (ar5 < 4)) {
    uVar1 = *(le<int>* )(unsigned)(((undefined1 *)(unsigned)0x8c273bb8) + ar4 * 4) + *(le<int>* )(unsigned)(((undefined1 *)(unsigned)0x8c273bc8) + ar5 * 4) + ar6 + 0x80;
    return (uint)((uVar1 & 0x1ff) != 0) + (uVar1 >> 9);
  }
  return 0xffffff00;
}

__asm__(".globl FUN_8c2017a8\n.set FUN_8c2017a8, FUN_8c2017a8_def\n");

}
