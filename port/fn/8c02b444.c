#include "../decls.h"
undefined4 get_field_48c_02b444_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(0x48c + ar4);
}

__asm__(".globl _get_field_48c_02b444\n.set _get_field_48c_02b444, _get_field_48c_02b444_def\n");
