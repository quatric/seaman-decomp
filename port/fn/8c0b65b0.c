#include "../decls.h"
undefined4 * FUN_8c0b65b0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 *puVar1;
  
  if (*(int *)(ar4 + 4) == 2) {
    get_field_8_066620(ar4,ar5,ar6,ar7);
    puVar1 = &DAT_8c0b65fc;
  }
  else {
    get_field_8_066620(ar4,ar5,ar6,ar7);
    puVar1 = &DAT_8c0b6600;
  }
  return puVar1;
}

__asm__(".globl _FUN_8c0b65b0\n.set _FUN_8c0b65b0, _FUN_8c0b65b0_def\n");
