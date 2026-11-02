#include "../decls.h"
undefined * FUN_8c0d7154_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  float fVar2;
  
  if ((*(int *)(ar4 + 0x164) == 2) &&
     (fVar2 = *(float *)(ar4 + 0x2c) - 1.5, *(float *)(ar4 + 0x2c) = fVar2, fVar2 < 0.0)) {
    *(undefined4 *)(ar4 + 0x2c) = 0;
    *(undefined4 *)(ar4 + 0x164) = 0;
  }
  puVar1 = *(undefined **)(ar4 + 0x160);
  if (puVar1 == (undefined *)0x0) {
    fVar2 = *(float *)(ar4 + 0x15c) + 0.05;
    *(float *)(ar4 + 0x15c) = fVar2;
    puVar1 = (undefined *)0x0;
    if (0.0 < fVar2) {
      *(undefined4 *)(ar4 + 0x15c) = 0;
      puVar1 = (undefined *)0x160;
      *(undefined4 *)(ar4 + 0x160) = 2;
    }
  }
  else if (puVar1 == (undefined *)0x1) {
    fVar2 = *(float *)(ar4 + 0x15c) - 0.05;
    *(float *)(ar4 + 0x15c) = fVar2;
    puVar1 = &DAT_8c0d7238;
    if (fVar2 < -1.0) {
      *(undefined4 *)(ar4 + 0x15c) = 0xbf800000;
      puVar1 = (undefined *)0x160;
      *(undefined4 *)(ar4 + 0x160) = 3;
    }
  }
  return puVar1;
}

__asm__(".globl _FUN_8c0d7154\n.set _FUN_8c0d7154, _FUN_8c0d7154_def\n");
