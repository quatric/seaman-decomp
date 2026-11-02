#include "../decls.h"
undefined4 FUN_8c1f4414_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(undefined4 *)((int)0xfc0 + *(undefined4 *)0x8c4727b4) = 1;
  **(undefined1 **)(&DATA_8c1f5a28) = 0;
  return 0;
}

__asm__(".globl _FUN_8c1f4414\n.set _FUN_8c1f4414, _FUN_8c1f4414_def\n");
