#include "../decls.h"
undefined4 FUN_8c01d704_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)0x8c27927c;
  *(undefined4 *)0x8c27927c = 0;
  return uVar1;
}

__asm__(".globl _FUN_8c01d704\n.set _FUN_8c01d704, _FUN_8c01d704_def\n");
