#include "../decls.h"
undefined4 FUN_8c20211a_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  memset(ar4,0,ar6,ar7);
  *(undefined4 *)(ar4 + 4) = 0;
  *(undefined1 *)(ar4 + 1) = 0;
  return 0;
}

__asm__(".globl _FUN_8c20211a\n.set _FUN_8c20211a, _FUN_8c20211a_def\n");
