#include "../decls.h"
int CAnimal_m0_025688_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  undefined4 in_stack_fffffff4;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    *(undefined **)(ar4 + 8) = &DAT_8c129a88;
    free_if_nonnull_wrap_016ac4(ar4 + 0x480,0xffffffff,ar6,ar7);
    FUN_8c0253ec(ar4 + 0x344,0xffffffff,ar6,ar7);
    object_dtor_delete(ar4 + 0x338,0xffffffff,ar6,ar7);
    FUN_8c025490(ar4 + 0x310,0xffffffff,ar6,ar7);
    free_if_nonnull_wrap_034d08(ar4 + 0x2dc,0xffffffff,ar6,ar7);
    ar5_00 = 0;
    Class_12c1f0_m0_0f4108(ar4,0,ar6,ar7);
    if (0 < (short)ain0) {
      free_if_nonnull(ar4,ar5_00,ar6,ar7,ain0);
    }
  }
  return ar4;
}

__asm__(".globl _CAnimal_m0_025688\n.set _CAnimal_m0_025688, _CAnimal_m0_025688_def\n");
