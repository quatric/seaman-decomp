#include "../decls.h"
uint get_field_b8_101178_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return (uint)*(byte *)(0xb8 + ar4);
}

__asm__(".globl _get_field_b8_101178\n.set _get_field_b8_101178, _get_field_b8_101178_def\n");
