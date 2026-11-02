#include "../decls.h"
undefined4 get_field_a510_01f538_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(0xa510 + ar4);
}

__asm__(".globl _get_field_a510_01f538\n.set _get_field_a510_01f538, _get_field_a510_01f538_def\n");
