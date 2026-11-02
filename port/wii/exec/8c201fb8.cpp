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
undefined4 FUN_8c201fb8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c201fb8");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = *(le<int>* )(unsigned)(ar4 + 0x2c);
  if (iVar1 == 3) {
    if ((char)ar5 != '\b') {
      return 0xffffffff;
    }
  }
  else {
    if (iVar1 == 0) {
      return 0;
    }
    if ((((iVar1 == 1) || (iVar1 == 2)) || (iVar1 == 4)) || (iVar1 == 100)) {
      if ((char)ar5 != '\a') {
        return 0xffffffff;
      }
    }
    else {
      if (iVar1 != 0x65) {
        return 0xffffffff;
      }
      if ((char)ar5 != '\x05') {
        return 0xffffffff;
      }
    }
  }
  return 0;
}

__asm__(".globl FUN_8c201fb8\n.set FUN_8c201fb8, FUN_8c201fb8_def\n");

}
