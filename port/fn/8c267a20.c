#include "../decls.h"
int FUN_8c267a20_def(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  int in_r0;
  int ar5_00;
  
  if (DAT_8c2784c0 == 0) {
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
    in_r0 = FUN_8c267fe8(&DAT_8c4bd470,ar5,ar6,ar7);
    ar5_00 = in_r0;
  }
  if (ar5_00 != 0) {
    FUN_8c2688a0(FUN_8c267a20,ar5_00,ar6,ar7,in_r0);
  }
  return ar5_00;
}

__asm__(".globl _FUN_8c267a20\n.set _FUN_8c267a20, _FUN_8c267a20_def\n");
