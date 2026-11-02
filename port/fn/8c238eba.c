#include "../decls.h"
int FUN_8c238eba_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  if (ar5 == 1) {
    *(undefined4 *)0x8c4ab274 = *(undefined4 *)0x8c4ab274 + ar4;
  }
  else if (ar5 == 0) {
    *(undefined4 *)0x8c4ab274 = ar4 + *(undefined4 *)0x8c4ab270;
  }
  return ar5;
}

__asm__(".globl _FUN_8c238eba\n.set _FUN_8c238eba, _FUN_8c238eba_def\n");
