#include "../decls.h"
undefined4 * FUN_8c010080_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 *puVar1;
  
  while( true ) {
    puVar1 = (undefined4 *)*(undefined4 *)0x8c2787a0;
    if (puVar1 == (undefined4 *)0x0) break;
    *(undefined4 *)0x8c2787a0 = *puVar1;
    (*(code *)puVar1[1])(puVar1[2],0xffffffff,ar6,ar7);
  }
  return 0x8c2787a0;
}

__asm__(".globl _FUN_8c010080\n.set _FUN_8c010080, _FUN_8c010080_def\n");
