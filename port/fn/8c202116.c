#include "../decls.h"
undefined4 FUN_8c202116_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  memset(0,0x10);
  *(undefined4 *)(ar4 + 4) = 0;
  *(undefined1 *)(ar4 + 1) = 0;
  return 0;
}

__asm__(".globl _FUN_8c202116\n.set _FUN_8c202116, _FUN_8c202116_def\n");
