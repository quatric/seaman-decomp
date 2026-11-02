#include "../decls.h"
undefined4 FUN_8c0feb88_def(undefined4 ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  *(undefined4 *)(*ar5 + 0xc) = 0;
  *ar5 = 0;
  return 0;
}

__asm__(".globl _FUN_8c0feb88\n.set _FUN_8c0feb88, _FUN_8c0feb88_def\n");
