#include "../decls.h"
int Class_12ab2c_m0_09dab8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  undefined4 in_stack_fffffff4;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(short)ar5);
  if (ar4 != 0) {
    *(undefined **)(ar4 + 8) = &DAT_8c12ab2c;
    FUN_8c09efb4(ar4,ar5,ar6,ar7);
    Class_129938_m0_017084(ar4 + 0xf3c,0xffffffff,ar6,ar7);
    Class_12ad14_m0_0a0950(ar4 + 0xcc4,0xffffffff,ar6,ar7);
    Class_12acc8_m0_09f428(ar4 + 0x490,0xffffffff,ar6,ar7);
    ar5_00 = 0;
    CAnimal_m0_025688(ar4,0,ar6,ar7);
    if (0 < (short)ain0) {
      free_if_nonnull(ar4,ar5_00,ar6,ar7,ain0);
    }
  }
  return ar4;
}

__asm__(".globl _Class_12ab2c_m0_09dab8\n.set _Class_12ab2c_m0_09dab8, _Class_12ab2c_m0_09dab8_def\n");
