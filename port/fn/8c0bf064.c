#include "../decls.h"
undefined8 * FUN_8c0bf064_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined8 *puVar1;
  
  if (*(int *)(0x226f4 + ar4) == 0) {
    puVar1 = &DAT_8c0bf0a0;
  }
  else {
    FUN_8c0bf0ac(ar4 + 0x13b8c,ar5,ar6,ar7);
    puVar1 = (undefined8 *)0x0;
  }
  return puVar1;
}

__asm__(".globl _FUN_8c0bf064\n.set _FUN_8c0bf064, _FUN_8c0bf064_def\n");
