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
undefined4 FUN_8c25b334_def(undefined4 ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c25b334";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 2048; for (int i_ = 0; i_ < 2048; i_++) z_[i_] = 0; }
  uint *puVar1;
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  puVar1 = 0x8c4aa6d0;
  *(undefined4 *)(unsigned)0x8c4aa6cc = ar4;
  *puVar1 = ar5 & 0xfffff800;
  return in_r0 = 0;
}

__asm__(".globl _FUN_8c25b334\n.set _FUN_8c25b334, _FUN_8c25b334_def\n");
