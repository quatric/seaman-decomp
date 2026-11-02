#include "../decls.h"
undefined4 FUN_8c262c66_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  FUN_8c25ff9c(*(undefined4 *)(ar4 + 4),ar5,ar6,ar7);
  *(undefined1 *)(ar4 + 1) = 0;
  return 0;
}

__asm__(".globl _FUN_8c262c66\n.set _FUN_8c262c66, _FUN_8c262c66_def\n");
