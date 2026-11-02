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
undefined4 * FUN_8c23b35c_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c23b35c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  float fVar1;
  float fVar2;
  float fVar3;
  float in_fr11 = 0;
  
  *(float *)(unsigned)(ar5 + 4) = *(float *)(unsigned)(ar5 + 4) + *(float *)(unsigned)(ar4 + 0xf8);
  *(float *)(unsigned)(ar5 + 8) = *(float *)(unsigned)(ar5 + 8) + *(float *)(unsigned)(ar4 + 0xfc);
  *(float *)(unsigned)(ar5 + 0xc) = *(float *)(unsigned)(ar5 + 0xc) + *(float *)(unsigned)(ar4 + 0x100);
                    
  fVar1 = (1.0 - in_fr11) * 0.5;
  fVar3 = *(float *)(unsigned)(ar4 + 0x10c);
  fVar2 = *(float *)(unsigned)(ar4 + 0x110);
  *(float *)(unsigned)(ar5 + 4) = fVar1 * *(float *)(unsigned)(ar4 + 0x108) + *(float *)(unsigned)(ar5 + 4);
  *(float *)(unsigned)(ar5 + 8) = fVar1 * fVar3 + *(float *)(unsigned)(ar5 + 8);
  *(float *)(unsigned)(ar5 + 0xc) = fVar1 * fVar2 + *(float *)(unsigned)(ar5 + 0xc);
  return ((undefined1 *)(unsigned)0x8c23b3d0);
}

__asm__(".globl _FUN_8c23b35c\n.set _FUN_8c23b35c, _FUN_8c23b35c_def\n");
