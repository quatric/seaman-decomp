#include "../decls.h"
undefined4 FUN_8c0e5a08_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  FUN_8c235ee4(ar4,ar5,ar6,ar7);
  FUN_8c0daf80(ar4,ar5,ar6,ar7);
  FUN_8c0d6954(ar4 + 0xa68,ar5,ar6,ar7);
  FUN_8c0dbdf4(ar4,ar5,ar6,ar7);
  *(undefined4 *)(0x1020 + ar4) = 5;
  uVar1 = FUN_8c0e5dac(ar4,ar5,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c0e5a08\n.set _FUN_8c0e5a08, _FUN_8c0e5a08_def\n");
