#include "../decls.h"
undefined4 FUN_8c2033c0_def(char *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  undefined4 in_r0;
  
  puVar1 = (&FUN_8c0146b4);
  for (; *ar4 != '\0'; ar4 = ar4 + 1) {
    in_r0 = (*(code *)puVar1)((int)*ar4,ar5,ar6,ar7);
    *ar4 = (char)in_r0;
  }
  *ar4 = '\0';
  return in_r0;
}

__asm__(".globl _FUN_8c2033c0\n.set _FUN_8c2033c0, _FUN_8c2033c0_def\n");
