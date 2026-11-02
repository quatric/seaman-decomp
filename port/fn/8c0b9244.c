#include "../decls.h"
undefined4 FUN_8c0b9244_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 ar5_00;
  
  uVar1 = sh4_tmu_1f8b88(ar4,ar5,ar6,ar7);
  ar5_00 = 0;
  uVar2 = FUN_8c1f8b92(uVar1,0,ar6,ar7);
  if (0xf4240 <= uVar2) {
    *(int *)(0xa8 + ar4) = *(int *)(0xa8 + ar4) + 1;
    *(short *)(0xa4 + ar4) = *(short *)(0xa4 + ar4) + 1;
    sh4_tmu_1f8b6e(0,ar5_00,ar6,ar7);
    *(uint *)(0xb8 + ar4) = *(int *)(0xb8 + ar4) + uVar2 + 0xfff0bdc0;
    if (0xf4240 <= *(uint *)(0xb8 + ar4)) {
      *(int *)(0xa8 + ar4) = *(int *)(0xa8 + ar4) + 1;
      *(short *)(0xa4 + ar4) = *(short *)(0xa4 + ar4) + 1;
      *(undefined4 *)(0xb8 + ar4) = 0;
    }
  }
  if (*(ushort *)(0xa4 + ar4) < 0x3840) {
    uVar1 = 0;
  }
  else {
    *(short *)(0xa2 + ar4) = *(short *)(0xa2 + ar4) + 1;
    if (0xfffa <= *(ushort *)(0xa2 + ar4)) {
      *(short *)(0xa2 + ar4) = (short)0xfffa;
    }
    *(undefined2 *)(0xa4 + ar4) = 0;
    FUN_8c0c4e2c(ar4,ar5_00,ar6,ar7);
    uVar1 = 1;
  }
  return uVar1;
}

__asm__(".globl _FUN_8c0b9244\n.set _FUN_8c0b9244, _FUN_8c0b9244_def\n");
