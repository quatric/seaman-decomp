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
uint FUN_8c0d9c18_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d9c18";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  uint * s0 = (uint *)(unsigned long)*(unsigned *)(vsp + 0);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 8; for (int i_ = 0; i_ < 8; i_++) z_[i_] = 0; }
  
  (*(undefined4 *)(fr0_ - 0x4)) = (*(undefined4 *)(fr0_ - 0x4)) & 0xfffffffc;
  *s0 = (*(undefined4 *)(fr0_ - 0x4));
  return (*(undefined4 *)(fr0_ - 0x4));
}

__asm__(".globl _FUN_8c0d9c18\n.set _FUN_8c0d9c18, _FUN_8c0d9c18_def\n");
