#include "../decls.h"
int FUN_8c0feb98_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  FUN_8c0fdde4(ar4,ar5,ar6,ar7);
  *(undefined4 *)(ar4 + 0x58) = 0;
  return ar4;
}

__asm__(".globl _FUN_8c0feb98\n.set _FUN_8c0feb98, _FUN_8c0feb98_def\n");
