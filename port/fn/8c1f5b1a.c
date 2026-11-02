#include "../decls.h"
undefined4 FUN_8c1f5b1a_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 *puVar1;
  undefined4 in_r0;
  
  puVar1 = 0x8c00fff4;
  *(undefined4 *)0x8c00fff0 = ar4;
  *puVar1 = ar5;
  return in_r0;
}

__asm__(".globl _FUN_8c1f5b1a\n.set _FUN_8c1f5b1a, _FUN_8c1f5b1a_def\n");
