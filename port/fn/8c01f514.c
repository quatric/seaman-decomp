#include "../decls.h"
undefined4 get_field_a524_01f514_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(0xa524 + ar4);
}

__asm__(".globl _get_field_a524_01f514\n.set _get_field_a524_01f514, _get_field_a524_01f514_def\n");
