#include "../decls.h"
undefined4 get_field_acc_0e8c40_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(0xacc + ar4);
}

__asm__(".globl _get_field_acc_0e8c40\n.set _get_field_acc_0e8c40, _get_field_acc_0e8c40_def\n");
