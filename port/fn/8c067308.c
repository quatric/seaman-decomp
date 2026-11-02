#include "../decls.h"
undefined4 get_field_100_067308_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(0x100 + ar4);
}

__asm__(".globl _get_field_100_067308\n.set _get_field_100_067308, _get_field_100_067308_def\n");
