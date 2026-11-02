#include "../decls.h"
undefined * FUN_8c0c5294_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  
  *(float *)(ar4 + 0x10) = *(float *)(ar4 + 0x10) + 0.3;
  *(float *)(ar4 + 4) = *(float *)(ar4 + 4) + *(float *)(ar4 + 0x10);
  puVar1 = &DAT_8c0c52f4;
  if (670.0 < *(float *)(ar4 + 4)) {
    *(undefined4 *)(ar4 + 4) = 0x44278000;
    puVar1 = (undefined *)FUN_8c0c52fc(ar4,ar5,ar6,ar7);
  }
  return puVar1;
}

__asm__(".globl _FUN_8c0c5294\n.set _FUN_8c0c5294, _FUN_8c0c5294_def\n");
