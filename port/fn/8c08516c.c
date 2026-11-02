#include "../decls.h"
int CAnimal_m0_08516c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  undefined4 in_stack_fffffff4;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    *(undefined **)(ar4 + 8) = &DAT_8c12a434;
    Class_129938_m0_017084(ar4 + 0x1014,0xffffffff,ar6,ar7);
    Class_12a25c_m0_06f3c4(ar4 + 0xd20,0xffffffff,ar6,ar7);
    Class_12c3c4_m0_1030a4(ar4 + 0x490,0xffffffff,ar6,ar7);
    ar5_00 = 0;
    CAnimal_m0_025688(ar4,0,ar6,ar7);
    if (0 < (short)ain0) {
      free_if_nonnull(ar4,ar5_00,ar6,ar7,ain0);
    }
  }
  return ar4;
}

__asm__(".globl _CAnimal_m0_08516c\n.set _CAnimal_m0_08516c, _CAnimal_m0_08516c_def\n");
