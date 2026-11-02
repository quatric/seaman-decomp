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
undefined4 FUN_8c2219de_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c2219de";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 ain0 = (undefined4)(unsigned long)vin0;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined8 in_dr4 = 0;
  float fVar2;
  
  fVar2 = F32HI(in_dr4);
  iVar1 = (ar4 + -1) * 0x20;
  *(float *)(unsigned)(iVar1 + -0x73b3f114) = (float)in_dr4 * (float)in_dr4;
  *(float *)(unsigned)(iVar1 + -0x73b3f110) = fVar2 * fVar2;
  return ain0;
}

__asm__(".globl _FUN_8c2219de\n.set _FUN_8c2219de, _FUN_8c2219de_def\n");
