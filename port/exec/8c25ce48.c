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
undefined4 FUN_8c25ce48_def(float *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c25ce48";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 ain0 = (undefined4)(unsigned long)vin0;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  float fVar1;
  float fVar2;
  longlong lVar3;
  float fVar4;
  
  fVar2 = *ar4;
  fVar1 = ar4[1];
  fVar4 = ar4[2];
  lVar3 = (ulonglong)(uint)fVar4 << 0x20;
                    
  fVar4 = fVar1 * fVar1 + fVar2 * fVar2 + 0.0 + fVar4 * fVar4;
  fVar4 = 1.0 / SQRT((float)lVar3);
  ar4[2] = F32HI(lVar3) * fVar4;
  ar4[1] = fVar1 * fVar4;
  *ar4 = fVar2 * fVar4;
  return ain0;
}

__asm__(".globl _FUN_8c25ce48\n.set _FUN_8c25ce48, _FUN_8c25ce48_def\n");
