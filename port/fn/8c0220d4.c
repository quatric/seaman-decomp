#include "../decls.h"
undefined4 FUN_8c0220d4_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  if (*ar4 == 0) {
    return 0;
  }
  if (*(char *)(0x9ec14 + (int)ar4) == '\0') {
    return 0;
  }
  *(undefined4 *)(0x9ec94 + (int)ar4) = ar5;
  return 1;
}

__asm__(".globl _FUN_8c0220d4\n.set _FUN_8c0220d4, _FUN_8c0220d4_def\n");
