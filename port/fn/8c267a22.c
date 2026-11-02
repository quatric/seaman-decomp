#include "../decls.h"
int FUN_8c267a22_def(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  int *in_r2;
  int ar5_00;
  undefined4 in_PR;
  
  if (*in_r2 == 0) {
    ar5_00 = 0xd000001;
  }
  else if (ar4 == 0) {
    ar5_00 = 0x7000103;
  }
  else {
    ar6 = (char)ar6 + 0x80;
    _DAT_8c4bd470 = 0x29;
    DAT_8c4bd474 = *(undefined1 *)(ar4 + 1);
    DAT_8c4bd475 = (undefined1)ar5;
    DAT_8c4bd476 = (undefined1)ar6;
    ar5_00 = FUN_8c267fe8(&DAT_8c4bd470,ar5,ar6,ar7);
  }
  if (ar5_00 != 0) {
    FUN_8c2688a0(FUN_8c267a20,ar5_00,ar6,ar7,in_PR);
  }
  return ar5_00;
}

__asm__(".globl _FUN_8c267a22\n.set _FUN_8c267a22, _FUN_8c267a22_def\n");
