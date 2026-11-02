#include "../decls.h"
undefined * FUN_8c0bf4a4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  float fVar2;
  
  puVar1 = *(undefined **)(ar4 + 4);
  if (puVar1 == (undefined *)0x1) {
    fVar2 = *(float *)(ar4 + 0x2c) - 15.0;
    *(float *)(ar4 + 0x2c) = fVar2;
    puVar1 = (undefined *)0x8;
    if (fVar2 <= 0.0) {
      *(undefined4 *)(ar4 + 0x2c) = 0;
      puVar1 = (undefined *)0x0;
      *(undefined4 *)(ar4 + 4) = 0;
    }
  }
  else if (puVar1 == (undefined *)0x2) {
    fVar2 = *(float *)(ar4 + 0x2c) + 15.0;
    *(float *)(ar4 + 0x2c) = fVar2;
    puVar1 = &DAT_8c0bf540;
    if (660.0 <= fVar2) {
      *(undefined4 *)(ar4 + 0x2c) = 0x44250000;
      *(undefined4 *)(ar4 + 4) = 0;
      puVar1 = (undefined *)FUN_8c0bf548(ar4,ar5,ar6,ar7);
    }
  }
  return puVar1;
}

__asm__(".globl _FUN_8c0bf4a4\n.set _FUN_8c0bf4a4, _FUN_8c0bf4a4_def\n");
