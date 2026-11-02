#include "../decls.h"
undefined4 FUN_8c0f8320_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  if (*(int *)(0x1014 + ar4) == 0) {
    *(undefined4 *)(0x89138 + ar4) = 1;
    uVar1 = s_HIGYOLINE0_0f8370(ar4,ar5,ar6,ar7);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

__asm__(".globl _FUN_8c0f8320\n.set _FUN_8c0f8320, _FUN_8c0f8320_def\n");
