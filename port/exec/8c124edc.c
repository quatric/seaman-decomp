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
undefined4 FUN_8c124edc_def(int ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c124edc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  uint uVar1;
  
  if ((ar5 & 0xff) == 1) {
    uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c124bd0(ar4,ar6,ar6,ar7));
    if ((uVar1 & 0xff) == 0) {
      *(unsigned *)(unsigned)(ar4 + 0x18) = ((void *)(unsigned)0x8c124e28);
    }
    else {
      *(unsigned *)(unsigned)(ar4 + 0x18) = (&(*(undefined1 *)(unsigned)0x8c124e24));
    }
  }
  else {
    if ((ar5 & 0xff) != (int)0xff) {
      return 0;
    }
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c124f54(ar4,ar5,ar6,ar7));
  }
  return 1;
}

__asm__(".globl _FUN_8c124edc\n.set _FUN_8c124edc, _FUN_8c124edc_def\n");
