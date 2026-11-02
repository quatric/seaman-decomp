#include "../decls.h"
undefined4 get_field_30c_02b6fc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(0x30c + ar4);
}

__asm__(".globl _get_field_30c_02b6fc\n.set _get_field_30c_02b6fc, _get_field_30c_02b6fc_def\n");
