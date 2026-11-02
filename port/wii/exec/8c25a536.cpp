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
uint FUN_8c25a536_def(int ar4,uint ar5,int ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c25a536");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  uint uVar1;
  
  if ((ar4 != 0) && (uVar1 = 0, ar5 != 0)) {
    do {
      if (*(le<int>* )(unsigned)(uVar1 * 0x44 + ar4) == ar6) {
        return uVar1;
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < ar5);
  }
  return 0xffffffff;
}

__asm__(".globl FUN_8c25a536\n.set FUN_8c25a536, FUN_8c25a536_def\n");

}
