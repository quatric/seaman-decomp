#include "../decls.h"
undefined4 FUN_8c2688e2_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int *in_r3;
  int ar4_00;
  
  ar4_00 = *in_r3;
  if (((ar4_00 != 0) && (*(int *)(&DATA_8c2784c4) == 1)) && (0 < *(int *)(0x16c + ar4_00))) {
    FUN_8c26518c(ar4_00,ar5,ar6,ar7);
  }
  FUN_8c265e08(ar4_00,ar5,ar6,ar7);
  return 0;
}

__asm__(".globl _FUN_8c2688e2\n.set _FUN_8c2688e2, _FUN_8c2688e2_def\n");
