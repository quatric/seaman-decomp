#include "../decls.h"
undefined4 get_field_bc_01a1cc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(0xbc + ar4);
}

__asm__(".globl _get_field_bc_01a1cc\n.set _get_field_bc_01a1cc, _get_field_bc_01a1cc_def\n");
