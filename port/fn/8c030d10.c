#include "../decls.h"
undefined4 FUN_8c030d10_def(int ar4,char *ar5,undefined4 ar6,undefined4 ar7)

{
  *(int *)(ar4 + 100) = (int)*ar5;
  *(int *)(ar4 + 0x68) = (int)ar5[1];
  *(undefined4 *)(ar4 + 0x6c) = *(undefined4 *)(ar5 + 4);
  return 0x6c;
}

__asm__(".globl _FUN_8c030d10\n.set _FUN_8c030d10, _FUN_8c030d10_def\n");
