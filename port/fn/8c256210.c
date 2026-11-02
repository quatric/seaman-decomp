#include "../decls.h"
undefined4 FUN_8c256210_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  if (*(undefined4 *)0x8c4aa5a0 - ar4 != 0) {
    *(undefined4 *)0x8c4aa5a0 = *(undefined4 *)0x8c4aa5a0 - ar4;
    *(undefined4 *)0x8c4aa4bc = *(undefined4 *)0x8c4aa4bc + ar4 * -0x40;
    return 1;
  }
  return 0;
}

__asm__(".globl _FUN_8c256210\n.set _FUN_8c256210, _FUN_8c256210_def\n");
