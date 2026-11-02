#include "../decls.h"
undefined4 FUN_8c1f692a_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  *(undefined4 *)(*(int *)(_DAT_8c474898 + 0xd78) + 0xc) = 3;
  uVar1 = FUN_8c1f69f2(0,ar5,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c1f692a\n.set _FUN_8c1f692a, _FUN_8c1f692a_def\n");
