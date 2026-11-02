#include "../decls.h"
int Class_12aeec_m0_0a4694_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  undefined4 in_stack_fffffff4;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    *(undefined **)(ar4 + 8) = &DAT_8c12aeec;
    Class_129938_m0_017084(ar4 + 0x26fc,0xffffffff,ar6,ar7);
    Class_12b088_m0_0a62cc(ar4 + 0x53c,0xffffffff,ar6,ar7);
    Class_12b0c4_m0_0ab7ac(ar4 + 0x490,0xffffffff,ar6,ar7);
    ar5_00 = 0;
    CAnimal_m0_025688(ar4,0,ar6,ar7);
    if (0 < (short)ain0) {
      free_if_nonnull(ar4,ar5_00,ar6,ar7,ain0);
    }
  }
  return ar4;
}

__asm__(".globl _Class_12aeec_m0_0a4694\n.set _Class_12aeec_m0_0a4694, _Class_12aeec_m0_0a4694_def\n");
