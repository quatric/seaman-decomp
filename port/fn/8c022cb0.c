#include "../decls.h"
int Vec3_dtor_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_stack_fffffff4;
  
  if ((ar4 != 0) && (*(undefined **)(ar4 + 0xc) = &DAT_8c129a7c, 0 < (short)ar5)) {
    free_if_nonnull(ar4,ar5,ar6,ar7,CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(short)ar5));
  }
  return ar4;
}

__asm__(".globl _Vec3_dtor\n.set _Vec3_dtor, _Vec3_dtor_def\n");
