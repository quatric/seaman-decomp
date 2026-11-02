#include "../decls.h"
undefined4 FUN_8c01e5b4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  input_device_select_and_reset(ar4,ar5,ar6,ar7);
  return *(undefined4 *)(0xa510 + ar4);
}

__asm__(".globl _FUN_8c01e5b4\n.set _FUN_8c01e5b4, _FUN_8c01e5b4_def\n");
