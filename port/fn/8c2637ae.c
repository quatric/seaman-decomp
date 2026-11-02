#include "../decls.h"
undefined4 FUN_8c2637ae_def(int ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = FUN_8c1f364c(*(undefined4 *)(ar4 + 8),ar5,ar6,ar7);
  *ar5 = uVar1;
  return uVar1;
}

__asm__(".globl _FUN_8c2637ae\n.set _FUN_8c2637ae, _FUN_8c2637ae_def\n");
