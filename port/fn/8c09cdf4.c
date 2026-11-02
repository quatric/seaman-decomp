#include "../decls.h"
undefined4 * FUN_8c09cdf4_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 *puVar2;
  undefined8 in_dr4;
  float fVar3;
  
  iVar1 = ar4 + ar5 * 0x10;
  fVar3 = (float)((ulonglong)in_dr4 >> 0x20);
  *(float *)(iVar1 + 0x644) =
       (*(float *)(ar4 + ar5 * 0x10 + 0x5c4) - *(float *)(ar4 + ar5 * 0x10 + 0x644)) / fVar3 +
       *(float *)(iVar1 + 0x644);
  iVar1 = ar4 + ar5 * 0x10;
  *(float *)(iVar1 + 0x648) =
       (*(float *)(ar4 + ar5 * 0x10 + 0x5c8) - *(float *)(ar4 + ar5 * 0x10 + 0x648)) / fVar3 +
       *(float *)(iVar1 + 0x648);
  iVar1 = ar4 + ar5 * 0x10;
  *(float *)(iVar1 + 0x64c) =
       (*(float *)(ar4 + ar5 * 0x10 + 0x5cc) - *(float *)(ar4 + ar5 * 0x10 + 0x64c)) / fVar3 +
       *(float *)(iVar1 + 0x64c);
  iVar1 = ar4 + ar5 * 0x10;
  *(float *)(iVar1 + 0x544) = *(float *)(ar4 + ar5 * 0x10 + 0x644) + *(float *)(iVar1 + 0x544);
  iVar1 = ar4 + ar5 * 0x10;
  *(float *)(iVar1 + 0x548) = *(float *)(ar4 + ar5 * 0x10 + 0x648) + *(float *)(iVar1 + 0x548);
  iVar1 = ar4 + ar5 * 0x10;
  *(float *)(iVar1 + 0x54c) = *(float *)(ar4 + ar5 * 0x10 + 0x64c) + *(float *)(iVar1 + 0x54c);
  if ((fVar3 / 3.0 < *(float *)(ar4 + ar5 * 0x10 + 0x544)) &&
     (0.0 < *(float *)(ar4 + ar5 * 0x10 + 0x5c4))) {
    iVar1 = ar4 + ar5 * 0x10;
    *(float *)(iVar1 + 0x5c4) = *(float *)(iVar1 + 0x5c4) * -1.0;
  }
  if ((fVar3 / 3.0 < *(float *)(ar4 + ar5 * 0x10 + 0x548)) &&
     (0.0 < *(float *)(ar4 + ar5 * 0x10 + 0x5c8))) {
    iVar1 = ar4 + ar5 * 0x10;
    *(float *)(iVar1 + 0x5c8) = *(float *)(iVar1 + 0x5c8) * -1.0;
  }
  if ((fVar3 / 3.0 < *(float *)(ar4 + ar5 * 0x10 + 0x54c)) &&
     (0.0 < *(float *)(ar4 + ar5 * 0x10 + 0x5cc))) {
    iVar1 = ar4 + ar5 * 0x10;
    *(float *)(iVar1 + 0x5cc) = *(float *)(iVar1 + 0x5cc) * -1.0;
  }
  if ((*(float *)(ar4 + ar5 * 0x10 + 0x544) < fVar3 / -3.0) &&
     (*(float *)(ar4 + ar5 * 0x10 + 0x5c4) < 0.0)) {
    iVar1 = ar4 + ar5 * 0x10;
    *(float *)(iVar1 + 0x5c4) = *(float *)(iVar1 + 0x5c4) * -1.0;
  }
  if ((*(float *)(ar4 + ar5 * 0x10 + 0x548) < fVar3 / -3.0) &&
     (*(float *)(ar4 + ar5 * 0x10 + 0x5c8) < 0.0)) {
    iVar1 = ar4 + ar5 * 0x10;
    *(float *)(iVar1 + 0x5c8) = *(float *)(iVar1 + 0x5c8) * -1.0;
  }
  puVar2 = &DAT_8c09d2a4;
  if ((*(float *)(ar4 + ar5 * 0x10 + 0x54c) < fVar3 / -3.0) &&
     (puVar2 = (undefined4 *)0x5cc, *(float *)(ar4 + ar5 * 0x10 + 0x5cc) < 0.0)) {
    iVar1 = ar4 + ar5 * 0x10;
    puVar2 = &DAT_8c09d29c;
    *(float *)(iVar1 + 0x5cc) = *(float *)(iVar1 + 0x5cc) * -1.0;
  }
  return puVar2;
}

__asm__(".globl _FUN_8c09cdf4\n.set _FUN_8c09cdf4, _FUN_8c09cdf4_def\n");
