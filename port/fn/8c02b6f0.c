#include "../decls.h"
undefined4 get_field_308_02b6f0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(0x308 + ar4);
}

__asm__(".globl _get_field_308_02b6f0\n.set _get_field_308_02b6f0, _get_field_308_02b6f0_def\n");
