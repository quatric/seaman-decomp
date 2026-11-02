#include "../decls.h"
undefined4 FUN_8c0e68f4_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  FUN_8c0daf80(ar4,ar5,ar6,ar7);
  FUN_8c0d6954((int)ar4 + 0xa68,ar5,ar6,ar7);
  FUN_8c0dbdf4(ar4,ar5,ar6,ar7);
  FUN_8c0e743c(ar4,ar5,ar6,ar7);
  FUN_8c0d8400((int)ar4 + 0x10dc,ar5,ar6,ar7);
  uVar1 = (**(code **)(0xa8 + *ar4))(ar4,3,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c0e68f4\n.set _FUN_8c0e68f4, _FUN_8c0e68f4_def\n");
