#include "../decls.h"
undefined4 FUN_8c1f7540_def(uint ar4,int ar5,int ar6,undefined4 ar7)

{
  undefined4 in_r0;
  undefined1 *puVar1;
  
  if (0 < ar5) {
    puVar1 = (undefined1 *)(ar6 + ar5 + -1);
    do {
      *puVar1 = (char)ar4;
      ar5 = ar5 + -1;
      puVar1 = puVar1 + -1;
      ar4 = ar4 >> 8;
    } while (ar5 != 0);
  }
  return in_r0;
}

__asm__(".globl _FUN_8c1f7540\n.set _FUN_8c1f7540, _FUN_8c1f7540_def\n");
