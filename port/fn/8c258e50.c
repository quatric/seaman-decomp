#include "../decls.h"
undefined4 FUN_8c258e50_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 ain0)

{
  if (DAT_8c277ae8 != (code *)0x0) {
    ain0 = (*DAT_8c277ae8)();
  }
  return ain0;
}

__asm__(".globl _FUN_8c258e50\n.set _FUN_8c258e50, _FUN_8c258e50_def\n");
