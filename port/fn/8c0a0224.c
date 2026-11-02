#include "../decls.h"
undefined4 * FUN_8c0a0224_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 *puVar1;
  
  if (*(int *)(ar4 + 4) == 2) {
    get_field_8_066620(ar4,ar5,ar6,ar7);
    puVar1 = &DAT_8c0a0270;
  }
  else {
    get_field_8_066620(ar4,ar5,ar6,ar7);
    puVar1 = &DAT_8c0a0274;
  }
  return puVar1;
}

__asm__(".globl _FUN_8c0a0224\n.set _FUN_8c0a0224, _FUN_8c0a0224_def\n");
