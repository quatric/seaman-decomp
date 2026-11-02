#include "../decls.h"
int Class_12c058_m0_0f55d8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  undefined4 in_stack_fffffff4;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    *(undefined **)(ar4 + 8) = &DAT_8c12c058;
    Class_129938_m0_017084(ar4 + 0x17c,0xffffffff,ar6,ar7);
    free_if_nonnull_wrap_016bfc(ar4 + 0x178,0xffffffff,ar6,ar7);
    free_if_nonnull_wrap_0153e4(ar4 + 0x170,0xffffffff,ar6,ar7);
    ar5_00 = 0;
    Class_12c1f0_m0_0f4108(ar4,0,ar6,ar7);
    if (0 < (short)ain0) {
      free_if_nonnull(ar4,ar5_00,ar6,ar7,ain0);
    }
  }
  return ar4;
}

__asm__(".globl _Class_12c058_m0_0f55d8\n.set _Class_12c058_m0_0f55d8, _Class_12c058_m0_0f55d8_def\n");
