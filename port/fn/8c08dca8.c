#include "../decls.h"
undefined4 * Class_12a76c_m0_08dca8_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  undefined4 in_stack_fffffff4;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(undefined2)ar5);
  if (ar4 != (undefined4 *)0x0) {
    *ar4 = &DAT_8c12a76c;
    Vec3_dtor(ar4 + 0xb8,0xffffffff,ar6,ar7);
    Vec3_dtor(ar4 + 0xb4,0xffffffff,ar6,ar7);
    object_dtor_delete(ar4 + 0xae,0xffffffff,ar6,ar7);
    Vec3_dtor(ar4 + 0xaa,0xffffffff,ar6,ar7);
    object_dtor_delete(ar4 + 0xa7,0xffffffff,ar6,ar7);
    Vec3_dtor(ar4 + 0xa3,0xffffffff,ar6,ar7);
    Vec3_dtor(ar4 + 0x99,0xffffffff,ar6,ar7);
    Vec3_dtor(ar4 + 0x93,0xffffffff,ar6,ar7);
    Vec3_dtor(ar4 + 0x8c,0xffffffff,ar6,ar7);
    ar5_00 = 0;
    Class_129cbc_m0_0312f4(ar4,0,ar6,ar7);
    if (0 < (short)ain0) {
      free_if_nonnull(ar4,ar5_00,ar6,ar7,ain0);
    }
  }
  return ar4;
}

__asm__(".globl _Class_12a76c_m0_08dca8\n.set _Class_12a76c_m0_08dca8, _Class_12a76c_m0_08dca8_def\n");
