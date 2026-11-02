#include "../decls.h"
int FUN_8c01e168_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int ar4_00;
  undefined4 ar5_00;
  
  ar5_00 = ar5;
  ar4_00 = malloc_thunk(ar5,ar5,ar6,ar7);
  if (ar4_00 != 0) {
    ar5_00 = ar4;
    memmove(ar4_00,ar4,ar5,ar7);
    ar6 = ar5;
  }
  FUN_8c1fb57c(ar4,ar5_00,ar6,ar7);
  return ar4_00;
}

__asm__(".globl _FUN_8c01e168\n.set _FUN_8c01e168, _FUN_8c01e168_def\n");
