#include "../decls.h"
undefined4 FUN_8c09cbb8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int a6;
  int a5;
  
  for (a5 = 0; a5 < 8; a5 = a5 + 1) {
    a6 = s_Shell_0fef9c(ar5,1,1,ar7);
    if (a6 != 0) {
      (**(code **)(0x100 + *(int *)(ar4 + 8)))(ar4,a5,a6,ar7);
      FUN_8c09cca8(ar4,a5,a6,ar7);
    }
  }
  return 8;
}

__asm__(".globl _FUN_8c09cbb8\n.set _FUN_8c09cbb8, _FUN_8c09cbb8_def\n");
