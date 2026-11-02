#include "../decls.h"
int FUN_8c2678a4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

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
    _DAT_8c4bd440 = 0x2e;
    DAT_8c4bd444 = *(undefined1 *)(ar4 + 1);
    in_r0 = FUN_8c267fe8(&DAT_8c4bd440,ar5,ar6,ar7);
    ar5_00 = in_r0;
  }
  if (ar5_00 != 0) {
    FUN_8c2688a0(FUN_8c2678a4,ar5_00,ar6,ar7,in_r0);
  }
  return ar5_00;
}

__asm__(".globl _FUN_8c2678a4\n.set _FUN_8c2678a4, _FUN_8c2678a4_def\n");
