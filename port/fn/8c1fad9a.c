#include "../decls.h"
undefined4 FUN_8c1fad9a_def(char *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  for (; *ar4 != '\0'; ar4 = ar4 + 1) {
    in_r0 = FUN_8c1fac58((int)*ar4,ar5,ar6,ar7);
  }
  return in_r0;
}

__asm__(".globl _FUN_8c1fad9a\n.set _FUN_8c1fad9a, _FUN_8c1fad9a_def\n");
