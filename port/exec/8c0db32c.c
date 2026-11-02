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
undefined4 FUN_8c0db32c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,int ar7)

{
  ring[rp++ & 255] = "FUN_8c0db32c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 16; for (int i_ = 0; i_ < 16; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  if (ar7 == 0xe) {
    uVar1 = (vsp = ((unsigned long)(fr0_ - 16)), FUN_8c02174c(0x8c2b59d0,0x26,ar6,0xe));
  }
  else {
    ((undefined4 *)(fr0_ - 0x10))[0] = (vsp = ((unsigned long)(fr0_ - 16)), FUN_8c02190c(0x8c2b59d0,ar5,ar6,ar7));
    uVar1 = 0xd;
    (vsp = ((unsigned long)(fr0_ - 16)), FUN_8c021994(0x8c2b59d0,((undefined4 *)(fr0_ - 0x10))[0],0xd,ar7));
    uVar1 = (vsp = ((unsigned long)(fr0_ - 16)), FUN_8c021a8c(0x8c2b59d0,((undefined4 *)(fr0_ - 0x10)),uVar1,ar7));
  }
  return uVar1;
}

__asm__(".globl _FUN_8c0db32c\n.set _FUN_8c0db32c, _FUN_8c0db32c_def\n");
