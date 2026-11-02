#include "../decls.h"
undefined4 * FUN_8c099ab8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 *puVar1;
  
  if (*(int *)(ar4 + 4) == 2) {
    get_field_8_066620(ar4,ar5,ar6,ar7);
    puVar1 = &DAT_8c099b04;
  }
  else {
    get_field_8_066620(ar4,ar5,ar6,ar7);
    puVar1 = &DAT_8c099b08;
  }
  return puVar1;
}

__asm__(".globl _FUN_8c099ab8\n.set _FUN_8c099ab8, _FUN_8c099ab8_def\n");
