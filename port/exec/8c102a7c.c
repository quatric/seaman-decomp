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
undefined4 FUN_8c102a7c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c102a7c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined8 in_dr6 = 0;
  undefined8 in_dr8 = 0;
  float fVar2;
  float fVar3;
  
  fVar2 = F32HI(in_dr8);
  fVar3 = F32HI(in_dr6);
  *(float *)(unsigned)(ar4 + 0x14) = (fVar3 * (float)in_dr8 - fVar2 * (float)in_dr6) / (fVar3 - fVar2);
  *(float *)(unsigned)(ar4 + 0x18) = ((float)in_dr6 - (float)in_dr8) / (fVar3 - fVar2);
  *(float *)(unsigned)(ar4 + 0x1c) = fVar3;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c102974(ar4,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c102a7c\n.set _FUN_8c102a7c, _FUN_8c102a7c_def\n");
