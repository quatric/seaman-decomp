#include "../decls.h"
uint FUN_8c1fda58_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  int iVar2;
  int unaff_r11;
  uint unaff_r12;
  uint unaff_r13;
  int unaff_r14;
  
  puVar1 = (&FUN_8c1fd510);
  do {
    iVar2 = (*(code *)puVar1)(unaff_r14,ar5,ar6,ar7);
    unaff_r14 = unaff_r14 + 1;
    if (iVar2 != 0) {
      unaff_r12 = unaff_r12 | unaff_r13;
    }
    unaff_r13 = unaff_r13 << 1;
  } while (unaff_r14 < unaff_r11);
  return unaff_r12;
}

__asm__(".globl _FUN_8c1fda58\n.set _FUN_8c1fda58, _FUN_8c1fda58_def\n");
