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
float * FUN_8c014f74_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c014f74";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  *(float *)(unsigned)(ar4 + 4) = *(float *)(unsigned)(ar4 + 4) + *(float *)(unsigned)(ar4 + 0x54);
  *(float *)(unsigned)(ar4 + 8) = *(float *)(unsigned)(ar4 + 8) + *(float *)(unsigned)(ar4 + 0x58);
  *(float *)(unsigned)(ar4 + 0xc) = *(float *)(unsigned)(ar4 + 0xc) + *(float *)(unsigned)(ar4 + 0x5c);
  *(float *)(unsigned)(ar4 + 0x58) = *(float *)(unsigned)(ar4 + 0x58) - *(float *)(unsigned)(ar4 + 0x70);
  return (float *)(unsigned)(ar4 + 0x58);
}

__asm__(".globl _FUN_8c014f74\n.set _FUN_8c014f74, _FUN_8c014f74_def\n");
