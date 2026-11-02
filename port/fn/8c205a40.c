#include "../decls.h"
undefined4 FUN_8c205a40_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  undefined4 uVar2;
  
  puVar1 = (&pvr_20a844);
  pvr_20a844(8,3);
  (*(code *)puVar1)(0);
  uVar2 = (*(code *)puVar1)(8,0);
  return uVar2;
}

__asm__(".globl _FUN_8c205a40\n.set _FUN_8c205a40, _FUN_8c205a40_def\n");
