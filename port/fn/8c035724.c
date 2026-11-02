#include "../decls.h"
uint get_field_a0_035724_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return (uint)*(byte *)(0xa0 + ar4);
}

__asm__(".globl _get_field_a0_035724\n.set _get_field_a0_035724, _get_field_a0_035724_def\n");
