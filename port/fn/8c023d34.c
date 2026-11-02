#include "../decls.h"
undefined4 * Vec3_set_zero_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ar4[2] = 0;
  ar4[1] = 0;
  *ar4 = 0;
  return ar4;
}

__asm__(".globl _Vec3_set_zero\n.set _Vec3_set_zero, _Vec3_set_zero_def\n");
