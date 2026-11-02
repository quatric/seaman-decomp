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
undefined4 FUN_8c213a04_def(uint ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c213a04");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  if (ar5 <= ar4) {
    ar4 = ar5;
  }
  if (ar4 == 1) {
    return 0;
  }
  if (ar4 == 2) {
    return 1;
  }
  if (ar4 == 4) {
    return 2;
  }
  if (ar4 == 8) {
    return 3;
  }
  if (ar4 == 0x10) {
    return 4;
  }
  if (ar4 == 0x20) {
    return 5;
  }
  if (ar4 != 0x40) {
    if (ar4 == (int)0x80) {
      return 7;
    }
    if (ar4 == (int)0x100) {
      return 8;
    }
    if (ar4 == (int)0x200) {
      return 9;
    }
    if (ar4 != (int)0x400) {
      return 0xffffffff;
    }
    return 10;
  }
  return 6;
}

__asm__(".globl FUN_8c213a04\n.set FUN_8c213a04, FUN_8c213a04_def\n");

}
