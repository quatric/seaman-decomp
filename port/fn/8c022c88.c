#include "../decls.h"
undefined4 * Vec3_ctor_copy_def(undefined4 *ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  ar4[3] = &DAT_8c129a7c;
  *ar4 = *ar5;
  ar4[1] = ar5[1];
  ar4[2] = ar5[2];
  return ar4;
}

__asm__(".globl _Vec3_ctor_copy\n.set _Vec3_ctor_copy, _Vec3_ctor_copy_def\n");
