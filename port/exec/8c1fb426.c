#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c1fb426_def(undefined **ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c1fb426";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = ((undefined4 *)(unsigned long)*(unsigned *)0x8c475ee0);
  *(unsigned *)0x8c475ee0 = (unsigned)(unsigned long)(ar4);
  if (ar4 == (undefined **)(unsigned)0x0) {
    *(unsigned *)0x8c475ee0 = (unsigned)(unsigned long)(&(*(undefined4 *)(unsigned)(unsigned)0x8c26d0c8));
  }
  return uVar1;
}

__asm__(".globl _FUN_8c1fb426\n.set _FUN_8c1fb426, _FUN_8c1fb426_def\n");
