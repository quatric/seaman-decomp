#include "../decls.h"
undefined4 FUN_8c256254_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  if (0 < *(undefined4 *)0x8c4aa5a0 + -1) {
    *(undefined4 *)0x8c4aa5a0 = *(undefined4 *)0x8c4aa5a0 + -1;
    *(undefined4 *)0x8c4aa4bc = *(undefined4 *)0x8c4aa4bc + -0x40;
    return 1;
  }
  return 0;
}

__asm__(".globl _FUN_8c256254\n.set _FUN_8c256254, _FUN_8c256254_def\n");
