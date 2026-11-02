#include "../decls.h"
int FUN_8c2679a0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

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
    _DAT_8c4bd458 = 0x2b;
    DAT_8c4bd45c = *(undefined1 *)(ar4 + 1);
    DAT_8c4bd45d = (undefined1)((char)ar5 + 0x80);
    in_r0 = FUN_8c267fe8(&DAT_8c4bd458,(char)ar5 + 0x80,ar6,ar7);
    ar5_00 = in_r0;
  }
  if (ar5_00 != 0) {
    FUN_8c2688a0(FUN_8c2679a0,ar5_00,ar6,ar7,in_r0);
  }
  return ar5_00;
}

__asm__(".globl _FUN_8c2679a0\n.set _FUN_8c2679a0, _FUN_8c2679a0_def\n");
