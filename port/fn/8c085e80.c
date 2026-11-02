#include "../decls.h"
undefined4 get_field_2a4_085e80_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(0x2a4 + ar4);
}

__asm__(".globl _get_field_2a4_085e80\n.set _get_field_2a4_085e80, _get_field_2a4_085e80_def\n");
