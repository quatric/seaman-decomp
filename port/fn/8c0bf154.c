#include "../decls.h"
undefined4 get_field_300_0bf154_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(0x300 + ar4);
}

__asm__(".globl _get_field_300_0bf154\n.set _get_field_300_0bf154, _get_field_300_0bf154_def\n");
