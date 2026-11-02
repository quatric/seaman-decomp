#include "../decls.h"
undefined4 * FUN_8c0d0abc_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  undefined4 in_stack_fffffff4;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(undefined2)ar5);
  if (ar4 != (undefined4 *)0x0) {
    *ar4 = 0x8c1297f4;
    ar5_00 = 0xffffffff;
    Vec3_dtor(ar4 + 0x15,0xffffffff,ar6,ar7);
    if (0 < (short)ain0) {
      free_if_nonnull(ar4,ar5_00,ar6,ar7,ain0);
    }
  }
  return ar4;
}

__asm__(".globl _FUN_8c0d0abc\n.set _FUN_8c0d0abc, _FUN_8c0d0abc_def\n");
