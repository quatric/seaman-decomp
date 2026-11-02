#include "../decls.h"
undefined4 * vec3_copy_8c02b5fc_def(undefined4 *ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  *ar4 = *ar5;
  ar4[1] = ar5[1];
  ar4[2] = ar5[2];
  return ar4;
}

__asm__(".globl _vec3_copy_8c02b5fc\n.set _vec3_copy_8c02b5fc, _vec3_copy_8c02b5fc_def\n");
