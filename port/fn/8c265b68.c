#include "../decls.h"
int FUN_8c265b68_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  int ar5_00;
  
  ar5_00 = 0;
  if (DAT_8c2784c0 == 0) {
    ar5_00 = 0xd000001;
  }
  else {
    in_r0 = 0x1a4;
    *ar4 = *(undefined4 *)(DAT_8c2784c0 + 0x1a4);
  }
  if (ar5_00 != 0) {
    FUN_8c2688a0(FUN_8c265b68,ar5_00,ar6,ar7,in_r0);
  }
  return ar5_00;
}

__asm__(".globl _FUN_8c265b68\n.set _FUN_8c265b68, _FUN_8c265b68_def\n");
