#include "../decls.h"
undefined4 get_field_40_0d3d64_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(ar4 + 0x40);
}

__asm__(".globl _get_field_40_0d3d64\n.set _get_field_40_0d3d64, _get_field_40_0d3d64_def\n");
