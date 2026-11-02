#include "../decls.h"
int Class_12a5d0_m0_08a3a4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  undefined4 in_stack_fffffff4;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    *(undefined **)(ar4 + 8) = &DAT_8c12a5d0;
    free_if_nonnull_wrap_016ac4(ar4 + 0x91c,0xffffffff,ar6,ar7);
    object_dtor_delete(ar4 + 0x910,0xffffffff,ar6,ar7);
    Vec3_dtor(ar4 + 0x900,0xffffffff,ar6,ar7);
    Class_129938_m0_017084(ar4 + 0x858,0xffffffff,ar6,ar7);
    free_if_nonnull_wrap_03a3dc(ar4 + 0x854,0xffffffff,ar6,ar7);
    free_if_nonnull_wrap_0247b0(ar4 + 0x850,0xffffffff,ar6,ar7);
    Class_12a76c_m0_08dca8(ar4 + 0x538,0xffffffff,ar6,ar7);
    Class_12a7a8_m0_098ccc(ar4 + 0x490,0xffffffff,ar6,ar7);
    ar5_00 = 0;
    CAnimal_m0_025688(ar4,0,ar6,ar7);
    if (0 < (short)ain0) {
      free_if_nonnull(ar4,ar5_00,ar6,ar7,ain0);
    }
  }
  return ar4;
}

__asm__(".globl _Class_12a5d0_m0_08a3a4\n.set _Class_12a5d0_m0_08a3a4, _Class_12a5d0_m0_08a3a4_def\n");
