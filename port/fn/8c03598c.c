#include "../decls.h"
undefined4 get_field_40_03598c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(ar4 + 0x40);
}

__asm__(".globl _get_field_40_03598c\n.set _get_field_40_03598c, _get_field_40_03598c_def\n");
