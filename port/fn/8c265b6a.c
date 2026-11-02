#include "../decls.h"
int FUN_8c265b6a_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int *in_r3;
  int ar5_00;
  undefined4 in_PR;
  
  ar5_00 = 0;
  if (*in_r3 == 0) {
    ar5_00 = 0xd000001;
  }
  else {
    *ar4 = *(undefined4 *)(*in_r3 + 0x1a4);
  }
  if (ar5_00 != 0) {
    FUN_8c2688a0(FUN_8c265b68,ar5_00,ar6,ar7,in_PR);
  }
  return ar5_00;
}

__asm__(".globl _FUN_8c265b6a\n.set _FUN_8c265b6a, _FUN_8c265b6a_def\n");
