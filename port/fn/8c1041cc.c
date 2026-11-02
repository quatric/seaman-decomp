#include "../decls.h"
undefined4 get_field_cc_1041cc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(0xcc + ar4);
}

__asm__(".globl _get_field_cc_1041cc\n.set _get_field_cc_1041cc, _get_field_cc_1041cc_def\n");
