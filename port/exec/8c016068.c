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
undefined4 FUN_8c016068_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c016068";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 in_fr5 = 0;
  undefined4 in_fr4 = 0;
  undefined4 in_fr6 = 0;
  
  *(undefined4 *)(unsigned)(ar4 + 4) = in_fr4;
  *(undefined4 *)(unsigned)(ar4 + 8) = in_fr5;
  *(undefined4 *)(unsigned)(ar4 + 0xc) = in_fr6;
  *(undefined4 *)(unsigned)(ar4 + 0x24) = ar5;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c25754c(ar4 + 4,*(undefined4 *)(unsigned)(ar4 + 0x24),*(undefined4 *)(unsigned)(ar4 + 0x28),ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c016068\n.set _FUN_8c016068, _FUN_8c016068_def\n");
