#include "../decls.h"
undefined4 FUN_8c1fcf90_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  FUN_8c1f670c(ar4,ar5,ar6,ar7);
  uVar1 = FUN_8c1f672c(8,ar5,ar6,ar7);
  *(undefined4 *)0x8c4783c0 = uVar1;
  return uVar1;
}

__asm__(".globl _FUN_8c1fcf90\n.set _FUN_8c1fcf90, _FUN_8c1fcf90_def\n");
