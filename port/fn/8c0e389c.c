#include "../decls.h"
undefined4 * FUN_8c0e389c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 *puVar1;
  float fVar2;
  
  puVar1 = *(undefined4 **)(ar4 + 0x1024);
  if (puVar1 == (undefined4 *)0x1) {
    fVar2 = *(float *)(ar4 + 0x1050) - 8.0;
    *(float *)(ar4 + 0x1050) = fVar2;
    *(float *)(ar4 + 0x1048) = fVar2;
    puVar1 = &DAT_8c0e398c;
    if (*(float *)(ar4 + 0x1048) <= 395.0) {
      *(undefined4 *)(ar4 + 0x1050) = 0x43c58000;
      puVar1 = (undefined4 *)0xc;
      *(undefined4 *)(ar4 + 0x1048) = 0x43c58000;
    }
  }
  else if (puVar1 == (undefined4 *)0x3) {
    fVar2 = *(float *)(ar4 + 0x1050) + 8.0;
    *(float *)(ar4 + 0x1050) = fVar2;
    *(float *)(ar4 + 0x1048) = fVar2;
    puVar1 = (undefined4 *)&DAT_8c0e3990;
    if (447.0 <= *(float *)(ar4 + 0x1048)) {
      *(undefined4 *)(ar4 + 0x1050) = 0x43df8000;
      *(undefined4 *)(ar4 + 0x1048) = 0x43df8000;
      puVar1 = (undefined4 *)0x1024;
      *(undefined4 *)(ar4 + 0x1024) = 0;
    }
  }
  return puVar1;
}

__asm__(".globl _FUN_8c0e389c\n.set _FUN_8c0e389c, _FUN_8c0e389c_def\n");
