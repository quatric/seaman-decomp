#include "../decls.h"
undefined4 * FUN_8c0ba3e0_def(int ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 *puVar1;
  undefined4 ar5_00;
  float fVar2;
  
  if (DAT_8c4365fc == '\0') {
    _DAT_8c4365f8 = (undefined4 *)0x1;
    DAT_8c4365fc = '\x01';
  }
  if (*(int *)(ar4 + 0x10) == 0) {
    fVar2 = *(float *)(ar4 + 4) - 0.7;
    *(float *)(ar4 + 4) = fVar2;
    puVar1 = &DAT_8c0ba480;
    if (fVar2 < 339.0) {
      puVar1 = (undefined4 *)FUN_8c0ba870(ar4,ar5,ar6,ar7);
    }
  }
  else {
    ar5_00 = 0x104;
    puVar1 = (undefined4 *)libgcc_divide_helper_0103d0(*ar5,0x104,ar6,ar7);
    if ((puVar1 == (undefined4 *)0x0) &&
       (puVar1 = _DAT_8c4365f8, _DAT_8c4365f8 == (undefined4 *)0x1)) {
      _DAT_8c4365f8 = (undefined4 *)0x0;
      puVar1 = (undefined4 *)FUN_8c0ba844(ar4,ar5_00,ar6,ar7);
    }
  }
  return puVar1;
}

__asm__(".globl _FUN_8c0ba3e0\n.set _FUN_8c0ba3e0, _FUN_8c0ba3e0_def\n");
