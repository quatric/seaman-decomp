#include "../decls.h"
undefined * FUN_8c0d08c0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  float fVar2;
  
  fVar2 = 5e-05;
  puVar1 = (undefined *)0x0;
  if (*(int *)(ar4 + 0x18) != 0) {
    if (*(int *)(ar4 + 0x14) == 1) {
      fVar2 = 0.05;
    }
    *(float *)(ar4 + 0xc) = *(float *)(ar4 + 0xc) + fVar2;
    puVar1 = &DAT_8c0d090c;
    if (100.0 < *(float *)(ar4 + 0xc)) {
      puVar1 = &DAT_8c0d090c;
      *(undefined4 *)(ar4 + 0xc) = 0x42c80000;
    }
  }
  return puVar1;
}

__asm__(".globl _FUN_8c0d08c0\n.set _FUN_8c0d08c0, _FUN_8c0d08c0_def\n");
