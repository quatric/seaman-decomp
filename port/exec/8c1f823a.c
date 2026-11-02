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
undefined4 FUN_8c1f823a_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c1f823a";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 20; for (int i_ = 0; i_ < 20; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  (*(undefined4 *)(fr0_ - 0x8)) = ar5;
  (vsp = ((unsigned long)(fr0_ - 20)), FUN_8c1f826c(ar4,&(*(uint *)(fr0_ - 0xc)),ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 20)), FUN_8c1f826c((*(undefined4 *)(fr0_ - 0x8)),&(*(uint *)(fr0_ - 0x10)),ar6,ar7));
  if ((*(uint *)(fr0_ - 0xc)) == (*(uint *)(fr0_ - 0x10))) {
    uVar1 = 0;
  }
  else if ((*(uint *)(fr0_ - 0x10)) < (*(uint *)(fr0_ - 0xc))) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

__asm__(".globl _FUN_8c1f823a\n.set _FUN_8c1f823a, _FUN_8c1f823a_def\n");
