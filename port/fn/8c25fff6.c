#include "../decls.h"
undefined4 get_field_a0_25fff6_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(0xa0 + ar4);
}

__asm__(".globl _get_field_a0_25fff6\n.set _get_field_a0_25fff6, _get_field_a0_25fff6_def\n");
