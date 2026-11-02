#include "../decls.h"
undefined4 FUN_8c263798_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(undefined4 *)(ar4 + 0x1c) = ar5;
  *(undefined4 *)(ar4 + 0x18) = ar6;
  return 1;
}

__asm__(".globl _FUN_8c263798\n.set _FUN_8c263798, _FUN_8c263798_def\n");
