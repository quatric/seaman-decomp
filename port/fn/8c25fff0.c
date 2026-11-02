#include "../decls.h"
undefined4 get_field_a000a4_25fff0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(0xa4 + ar4);
}

__asm__(".globl _get_field_a000a4_25fff0\n.set _get_field_a000a4_25fff0, _get_field_a000a4_25fff0_def\n");
