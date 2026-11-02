#include "../decls.h"
int FUN_8c268818_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int in_r0;
  int ar5_00;
  
  if (DAT_8c2784c0 == 0) {
    ar4 = in_r0;
    ar5_00 = 0xd000001;
  }
  else {
    _DAT_8c4bd560 = 0x8a;
    if (ar4 == 0x4f4e4f4d) {
      DAT_8c4bd564 = 0xff;
    }
    else {
      if (ar4 != 0x4f525453) {
        ar5_00 = 0x3000001;
        goto LAB_8c268860;
      }
      DAT_8c4bd564 = 0;
    }
    ar4 = FUN_8c267fe8(&DAT_8c4bd560,&DAT_8c4bd564,ar6,ar7);
    ar5_00 = ar4;
  }
LAB_8c268860:
  if (ar5_00 != 0) {
    FUN_8c2688a0(FUN_8c268818,ar5_00,ar6,ar7,ar4);
  }
  return ar5_00;
}

__asm__(".globl _FUN_8c268818\n.set _FUN_8c268818, _FUN_8c268818_def\n");
