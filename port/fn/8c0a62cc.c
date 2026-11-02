#include "../decls.h"
undefined4 * Class_12b088_m0_0a62cc_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  undefined4 ar6_00;
  undefined4 ar7_00;
  undefined4 in_stack_fffffff4;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(undefined2)ar5);
  if (ar4 != (undefined4 *)0x0) {
    *ar4 = &DAT_8c12b088;
    object_dtor_delete(ar4 + 0x86a,0xffffffff,ar6,ar7);
    Vec3_dtor(ar4 + 0x861,0xffffffff,ar6,ar7);
    Vec3_dtor(ar4 + 0x85d,0xffffffff,ar6,ar7);
    ar7_00 = 500;
    ar6_00 = 0x10;
    vec_delete_array(ar4 + 0x8d,Vec3_dtor,0x10,500,ain0);
    ar5_00 = 0;
    Class_129cbc_m0_0312f4(ar4,0,ar6_00,ar7_00);
    if (0 < (short)ain0) {
      free_if_nonnull(ar4,ar5_00,ar6_00,ar7_00,ain0);
    }
  }
  return ar4;
}

__asm__(".globl _Class_12b088_m0_0a62cc\n.set _Class_12b088_m0_0a62cc, _Class_12b088_m0_0a62cc_def\n");
