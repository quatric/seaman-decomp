#include "../decls.h"
undefined4 FUN_8c262c50_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  FUN_8c262ae2(ar4,ar5,ar6,ar7);
  *(undefined1 *)(ar4 + 1) = 1;
  return 1;
}

__asm__(".globl _FUN_8c262c50\n.set _FUN_8c262c50, _FUN_8c262c50_def\n");
