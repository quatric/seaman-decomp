#include "../decls.h"
undefined4 FUN_8c0dc558_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 ar5_00;
  
  ar5_00 = ar5;
  iVar1 = FUN_8c0dc5d0(ar5,ar5,ar6,ar7);
  if (iVar1 == 1) {
    FUN_8c0d6c18(ar4 + 0xa68,ar5_00,ar6,ar7);
    FUN_8c0c51c4(ar5,ar5_00,ar6,ar7);
  }
  return 1;
}

__asm__(".globl _FUN_8c0dc558\n.set _FUN_8c0dc558, _FUN_8c0dc558_def\n");
