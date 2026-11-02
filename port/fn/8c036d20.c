#include "../decls.h"
undefined4 get_field_2fc_036d20_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(0x2fc + ar4);
}

__asm__(".globl _get_field_2fc_036d20\n.set _get_field_2fc_036d20, _get_field_2fc_036d20_def\n");
