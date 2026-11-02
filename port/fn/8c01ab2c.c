#include "../decls.h"
undefined4 FUN_8c01ab2c_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int *ar4_00;
  
  do {
    ar4_00 = ar4;
    iVar1 = FUN_8c01a5cc(ar4,ar5,ar6,ar7);
    if (iVar1 == 0) break;
  } while (-1 < *ar4);
  if (0 < *(undefined4 *)0x8c2791b0) {
    FUN_8c1fbe12(ar4_00,ar5,ar6,ar7);
  }
  *(undefined4 *)0x8c2791b0 = 0;
  return 1;
}

__asm__(".globl _FUN_8c01ab2c\n.set _FUN_8c01ab2c, _FUN_8c01ab2c_def\n");
