#include "../decls.h"
undefined4 get_field_30_02a780_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(ar4 + 0x30);
}

__asm__(".globl _get_field_30_02a780\n.set _get_field_30_02a780, _get_field_30_02a780_def\n");
