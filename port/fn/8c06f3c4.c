#include "../decls.h"
undefined4 * Class_12a25c_m0_06f3c4_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int *a4;
  undefined4 ar5_00;
  undefined4 in_stack_fffffff0;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_fffffff0 >> 0x10),(undefined2)ar5);
  if (ar4 != (undefined4 *)0x0) {
    *ar4 = &DAT_8c12a25c;
    if ((ar4[0x6b] != 0) && (a4 = (int *)(uint)ar4[0x6b], a4 != (int *)0x0)) {
      (**(code **)(*a4 + 8))(a4,1,ar6,ar7);
    }
    Vec3_dtor(ar4 + 0xaf,0xffffffff,ar6,ar7);
    Vec3_dtor(ar4 + 0xa0,0xffffffff,ar6,ar7);
    Vec3_dtor(ar4 + 0x9c,0xffffffff,ar6,ar7);
    object_dtor_delete(ar4 + 0x99,0xffffffff,ar6,ar7);
    object_dtor_delete(ar4 + 0x95,0xffffffff,ar6,ar7);
    Vec3_dtor(ar4 + 0x91,0xffffffff,ar6,ar7);
    Vec3_dtor(ar4 + 0x8c,0xffffffff,ar6,ar7);
    object_dtor_delete(ar4 + 0x89,0xffffffff,ar6,ar7);
    ar5_00 = 0;
    Class_129cbc_m0_0312f4(ar4,0,ar6,ar7);
    if (0 < (short)ain0) {
      free_if_nonnull(ar4,ar5_00,ar6,ar7,ain0);
    }
  }
  return ar4;
}

__asm__(".globl _Class_12a25c_m0_06f3c4\n.set _Class_12a25c_m0_06f3c4, _Class_12a25c_m0_06f3c4_def\n");
