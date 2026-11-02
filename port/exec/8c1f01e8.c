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
undefined4 FUN_8c1f01e8_def(uint *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c1f01e8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  byte *pbVar1;
  
  pbVar1 = (byte *)(unsigned)(vsp = ((unsigned long)(fr0_ - 4)), FUN_8c1efffa(ar5,0x20,ar6,ar7));
  if (pbVar1 == (byte *)(unsigned)0x0) {
    return 0xffffffff;
  }
  *ar4 = (uint)pbVar1[1] << 0x10 | (uint)pbVar1[2] << 8 | (uint)*pbVar1 << 0x18 | (uint)pbVar1[3];
  return 0;
}

__asm__(".globl _FUN_8c1f01e8\n.set _FUN_8c1f01e8, _FUN_8c1f01e8_def\n");
