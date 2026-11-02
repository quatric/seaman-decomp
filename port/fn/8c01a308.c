#include "../decls.h"
undefined4 * FUN_8c01a308_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  
  for (uVar1 = 0; uVar1 < 0x80; uVar1 = uVar1 + 1) {
    *(undefined4 *)((int)ar4 + 0x244c + uVar1 * 0x28) = 0xffffffff;
  }
  *ar4 = 0xffffffff;
  *(undefined4 *)0x8c2791b4 = 0xffffffff;
  ar4[1] = 0xffffffff;
  ar4[2] = 0xffffffff;
  *(undefined4 *)0x8c2791b0 = 0;
  ar4[3] = 10;
  ar4[6] = 0;
  ar4[7] = 0;
  FUN_8c01c944(ar4,ar5,ar6,ar7);
  return ar4;
}

__asm__(".globl _FUN_8c01a308\n.set _FUN_8c01a308, _FUN_8c01a308_def\n");
