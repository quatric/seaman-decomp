#include "../decls.h"
undefined4 FUN_8c012e84_def(char *ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  if ((*ar4 != '\0') && ((int)0x200 <= (int)ar4 - ar5)) {
    *(undefined4 *)0x8c2787a8 = (int)0x450;
    return 1;
  }
  return 0;
}

__asm__(".globl _FUN_8c012e84\n.set _FUN_8c012e84, _FUN_8c012e84_def\n");
