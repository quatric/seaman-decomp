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
undefined8 * FUN_8c0bf064_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0bf064";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined8 *puVar1;
  
  if (*(int *)(unsigned)(0x226f4 + ar4) == 0) {
    puVar1 = ((undefined1 *)(unsigned)0x8c0bf0a0);
  }
  else {
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0bf0ac(ar4 + 0x13b8c,ar5,ar6,ar7));
    puVar1 = (undefined8 *)(unsigned)0x0;
  }
  return puVar1;
}

__asm__(".globl _FUN_8c0bf064\n.set _FUN_8c0bf064, _FUN_8c0bf064_def\n");
