#include "../decls.h"
int FUN_8c0ddb3c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  undefined4 in_stack_fffffff4;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    Class_129938_m0_017084(ar4 + 0xc4,0xffffffff,ar6,ar7);
    Class_129938_m0_017084(ar4 + 0x30,0xffffffff,ar6,ar7);
    object_dtor_delete(ar4 + 0x24,0xffffffff,ar6,ar7);
    Vec3_dtor(ar4 + 0x14,0xffffffff,ar6,ar7);
    Vec3_dtor(ar4 + 4,0xffffffff,ar6,ar7);
    ar5_00 = 0xffffffff;
    free_if_nonnull_wrap_016bfc(ar4,0xffffffff,ar6,ar7);
    if (0 < (short)ain0) {
      free_if_nonnull(ar4,ar5_00,ar6,ar7,ain0);
    }
  }
  return ar4;
}

__asm__(".globl _FUN_8c0ddb3c\n.set _FUN_8c0ddb3c, _FUN_8c0ddb3c_def\n");
