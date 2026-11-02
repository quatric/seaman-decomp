#include "../decls.h"
undefined4 FUN_8c2688e0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int ar4_00;
  
  ar4_00 = DAT_8c2784c0;
  if (((DAT_8c2784c0 != 0) && (DAT_8c2784c4 == 1)) && (0 < *(int *)(DAT_8c2784c0 + 0x16c))) {
    FUN_8c26518c(DAT_8c2784c0,ar5,ar6,ar7);
  }
  FUN_8c265e08(ar4_00,ar5,ar6,ar7);
  return 0;
}

__asm__(".globl _FUN_8c2688e0\n.set _FUN_8c2688e0, _FUN_8c2688e0_def\n");
