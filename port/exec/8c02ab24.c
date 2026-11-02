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
uint FUN_8c02ab24_def(int ar4,int ar5,int ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02ab24";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  uint uVar1;
  
  for (uVar1 = 2; uVar1 < (*(undefined4 *)(unsigned)(unsigned)0x8c27c1e8) - 1U; uVar1 = uVar1 + 1) {
    *(float *)(unsigned)(ar5 + uVar1 * 4) =
         *(float *)(unsigned)(*(int *)(unsigned)(ar4 + 0x3dc) + uVar1 * 4) +
         ((*(float *)(unsigned)(*(int *)(unsigned)(ar4 + 0x3d8) + uVar1 * 4) -
          *(float *)(unsigned)(*(int *)(unsigned)(ar4 + 0x3dc) + uVar1 * 4)) * (float)ar6) /
         (float)(int)*(short *)(unsigned)(ar4 + 0x3f8);
  }
  return (*(undefined4 *)(unsigned)(unsigned)0x8c27c1e8) - 1U;
}

__asm__(".globl _FUN_8c02ab24\n.set _FUN_8c02ab24, _FUN_8c02ab24_def\n");
