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
undefined4 FUN_8c1f574c_def(undefined4 ar4,undefined4 ar5,int ar6,int ar7)

{
  ring[rp++ & 255] = "FUN_8c1f574c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  uint s0 = *(uint *)(vsp + 0);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 16; for (int i_ = 0; i_ < 16; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  (*(uint *)(fr0_ - 0xc)) = ar6 << 0x18 | ar7 << 0x10 | s0;
  (*(undefined4 *)(fr0_ - 0x10)) = ar5;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 16)), FUN_8c1f4a44(ar4,0xb,&(*(undefined4 *)(fr0_ - 0x10)),2));
  return uVar1;
}

__asm__(".globl _FUN_8c1f574c\n.set _FUN_8c1f574c, _FUN_8c1f574c_def\n");
