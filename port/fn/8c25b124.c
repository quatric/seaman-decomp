#include "../decls.h"
uint FUN_8c25b124_def(uint ar4,undefined1 *ar5,undefined4 ar6,undefined4 ar7)

{
  *ar5 = (char)ar4;
  ar5[1] = (char)(ar4 >> 8);
  return ar4 >> 8;
}

__asm__(".globl _FUN_8c25b124\n.set _FUN_8c25b124, _FUN_8c25b124_def\n");
