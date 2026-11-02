#include "../decls.h"
undefined4 * Class_129cbc_m0_0312f4_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  undefined4 in_stack_fffffff4;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(undefined2)ar5);
  if (ar4 != (undefined4 *)0x0) {
    *ar4 = &DAT_8c129cbc;
    Vec3_dtor(ar4 + 0x80,0xffffffff,ar6,ar7);
    object_dtor_delete(ar4 + 0x7b,0xffffffff,ar6,ar7);
    Vec3_dtor(ar4 + 0x76,0xffffffff,ar6,ar7);
    free_if_nonnull_wrap_016bfc(ar4 + 0x6c,0xffffffff,ar6,ar7);
    Vec3_dtor(ar4 + 0x5a,0xffffffff,ar6,ar7);
    object_dtor_delete(ar4 + 0x56,0xffffffff,ar6,ar7);
    object_dtor_delete(ar4 + 0x53,0xffffffff,ar6,ar7);
    Vec3_dtor(ar4 + 0x4f,0xffffffff,ar6,ar7);
    free_if_nonnull_wrap_033978(ar4 + 0x2c,0xffffffff,ar6,ar7);
    Vec3_dtor(ar4 + 0x24,0xffffffff,ar6,ar7);
    Vec3_dtor(ar4 + 0x20,0xffffffff,ar6,ar7);
    Vec3_dtor(ar4 + 0x1b,0xffffffff,ar6,ar7);
    Vec3_dtor(ar4 + 0x15,0xffffffff,ar6,ar7);
    Vec3_dtor(ar4 + 5,0xffffffff,ar6,ar7);
    ar5_00 = 0xffffffff;
    Vec3_dtor(ar4 + 1,0xffffffff,ar6,ar7);
    if (0 < (short)ain0) {
      free_if_nonnull(ar4,ar5_00,ar6,ar7,ain0);
    }
  }
  return ar4;
}

__asm__(".globl _Class_129cbc_m0_0312f4\n.set _Class_129cbc_m0_0312f4, _Class_129cbc_m0_0312f4_def\n");
