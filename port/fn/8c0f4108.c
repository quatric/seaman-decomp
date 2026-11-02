#include "../decls.h"
int Class_12c1f0_m0_0f4108_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  undefined4 in_stack_fffffff4;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    *(undefined **)(ar4 + 8) = &DAT_8c12c1f0;
    FUN_8c0f3f58(ar4 + 0xa0,0xffffffff,ar6,ar7);
    free_if_nonnull_wrap_0d8168(ar4 + 0x90,0xffffffff,ar6,ar7);
    free_if_nonnull_wrap_0d8168(ar4 + 0x80,0xffffffff,ar6,ar7);
    free_if_nonnull_wrap_016ac4(ar4 + 0x5c,0xffffffff,ar6,ar7);
    object_dtor_delete(ar4 + 0x50,0xffffffff,ar6,ar7);
    Vec3_dtor(ar4 + 0x40,0xffffffff,ar6,ar7);
    Vec3_dtor(ar4 + 0x30,0xffffffff,ar6,ar7);
    ar5_00 = 0;
    free_if_nonnull_wrap_0c0264(ar4,0,ar6,ar7);
    if (0 < (short)ain0) {
      free_if_nonnull(ar4,ar5_00,ar6,ar7,ain0);
    }
  }
  return ar4;
}

__asm__(".globl _Class_12c1f0_m0_0f4108\n.set _Class_12c1f0_m0_0f4108, _Class_12c1f0_m0_0f4108_def\n");
