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
undefined4 FUN_8c0b9244_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0b9244";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  uint uVar2;
  undefined4 ar5_00;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), sh4_tmu_1f8b88(ar4,ar5,ar6,ar7));
  ar5_00 = 0;
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1f8b92(uVar1,0,ar6,ar7));
  if (0xf4240 <= uVar2) {
    *(int *)(unsigned)(0xa8 + ar4) = *(int *)(unsigned)(0xa8 + ar4) + 1;
    *(short *)(unsigned)(0xa4 + ar4) = *(short *)(unsigned)(0xa4 + ar4) + 1;
    (vsp = ((unsigned long)(fr0_ - 0)), sh4_tmu_1f8b6e(0,ar5_00,ar6,ar7));
    *(uint *)(unsigned)(0xb8 + ar4) = *(int *)(unsigned)(0xb8 + ar4) + uVar2 + 0xfff0bdc0;
    if (0xf4240 <= *(uint *)(unsigned)(0xb8 + ar4)) {
      *(int *)(unsigned)(0xa8 + ar4) = *(int *)(unsigned)(0xa8 + ar4) + 1;
      *(short *)(unsigned)(0xa4 + ar4) = *(short *)(unsigned)(0xa4 + ar4) + 1;
      *(undefined4 *)(unsigned)(0xb8 + ar4) = 0;
    }
  }
  if (*(ushort *)(unsigned)(0xa4 + ar4) < 0x3840) {
    uVar1 = 0;
  }
  else {
    *(short *)(unsigned)(0xa2 + ar4) = *(short *)(unsigned)(0xa2 + ar4) + 1;
    if (0xfffa <= *(ushort *)(unsigned)(0xa2 + ar4)) {
      *(short *)(unsigned)(0xa2 + ar4) = (short)0xfffa;
    }
    *(undefined2 *)(unsigned)(0xa4 + ar4) = 0;
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0c4e2c(ar4,ar5_00,ar6,ar7));
    uVar1 = 1;
  }
  return uVar1;
}

__asm__(".globl _FUN_8c0b9244\n.set _FUN_8c0b9244, _FUN_8c0b9244_def\n");
