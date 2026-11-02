#include "../decls.h"
undefined4 FUN_8c0100b0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(&DATA_8c12c410);
  if ((&DATA_8c12c410) != (undefined *)0x0) {
    while( true ) {
      in_r0 = 0;
      if ((code *)*puVar1 == (code *)0x0) break;
      (*(code *)*puVar1)();
      puVar1 = puVar1 + 1;
    }
  }
  return in_r0;
}

__asm__(".globl _FUN_8c0100b0\n.set _FUN_8c0100b0, _FUN_8c0100b0_def\n");
