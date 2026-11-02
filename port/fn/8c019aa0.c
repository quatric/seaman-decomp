#include "../decls.h"
undefined4 * Class_129a24_m0_019aa0_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  undefined4 in_stack_fffffff4;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(undefined2)ar5);
  if (ar4 != (undefined4 *)0x0) {
    *ar4 = &DAT_8c129a24;
    object_dtor_delete(ar4 + 0x2c,0xffffffff,ar6,ar7);
    Vec3_dtor(ar4 + 0x28,0xffffffff,ar6,ar7);
    Vec3_dtor(ar4 + 0x24,0xffffffff,ar6,ar7);
    Vec3_dtor(ar4 + 0x20,0xffffffff,ar6,ar7);
    ar5_00 = 0;
    free_if_nonnull_wrap_019270(ar4,0,ar6,ar7);
    if (0 < (short)ain0) {
      free_if_nonnull(ar4,ar5_00,ar6,ar7,ain0);
    }
  }
  return ar4;
}

__asm__(".globl _Class_129a24_m0_019aa0\n.set _Class_129a24_m0_019aa0, _Class_129a24_m0_019aa0_def\n");
