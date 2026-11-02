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
undefined4 FUN_8c1f0232_def(uint *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c1f0232";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  byte *pbVar1;
  
  pbVar1 = (byte *)(unsigned)(vsp = ((unsigned long)(fr0_ - 4)), FUN_8c1efffa(ar5,(int)0x100,ar6,ar7));
  if (pbVar1 == (byte *)(unsigned)0x0) {
    return 0xffffffff;
  }
  *ar4 = (uint)*pbVar1;
  ar4[1] = (uint)pbVar1[1];
  return 0;
}

__asm__(".globl _FUN_8c1f0232\n.set _FUN_8c1f0232, _FUN_8c1f0232_def\n");
