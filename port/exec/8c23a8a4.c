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
undefined4 FUN_8c23a8a4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c23a8a4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 ain0 = (undefined4)(unsigned long)vin0;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  float fVar1;
  undefined8 in_dr4 = 0;
  float fVar2;
  undefined8 in_dr6 = 0;
  longlong lVar3;
  float fVar4;
  
  if (ar4 == 0) {
    ar4 = (*(undefined4 *)(unsigned)(unsigned)0x8c4c0cc0);
  }
  fVar2 = F32HI(in_dr4) - *(float *)(unsigned)(ar4 + 0x40);
  fVar1 = (float)in_dr4 - *(float *)(unsigned)(ar4 + 0x44);
  fVar4 = F32HI(in_dr6) - *(float *)(unsigned)(ar4 + 0x48);
  lVar3 = (ulonglong)(uint)fVar4 << 0x20;
                    
  fVar4 = fVar1 * fVar1 + fVar2 * fVar2 + 0.0 + fVar4 * fVar4;
  fVar4 = 1.0 / SQRT((float)lVar3);
  *(float *)(unsigned)(ar4 + 0x54) = F32HI(lVar3) * fVar4;
  *(float *)(unsigned)(ar4 + 0x50) = fVar1 * fVar4;
  *(float *)(unsigned)(ar4 + 0x4c) = fVar2 * fVar4;
  return ain0;
}

__asm__(".globl _FUN_8c23a8a4\n.set _FUN_8c23a8a4, _FUN_8c23a8a4_def\n");
