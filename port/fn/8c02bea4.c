#include "../decls.h"
int FUN_8c02bea4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(int *)(*(char *)(ar4 + 8) * 4 + *(int *)(ar4 + 0x10)) - *(int *)(ar4 + 4);
}

__asm__(".globl _FUN_8c02bea4\n.set _FUN_8c02bea4, _FUN_8c02bea4_def\n");
