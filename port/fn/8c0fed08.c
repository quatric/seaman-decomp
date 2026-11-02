#include "../decls.h"
undefined4 FUN_8c0fed08_def(undefined4 ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  *(undefined4 *)(*ar5 + 0x14) = 0;
  *ar5 = 0;
  return 0;
}

__asm__(".globl _FUN_8c0fed08\n.set _FUN_8c0fed08, _FUN_8c0fed08_def\n");
