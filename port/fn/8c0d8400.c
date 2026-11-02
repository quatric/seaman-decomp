#include "../decls.h"
undefined4 FUN_8c0d8400_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  FUN_8c0d82f0(ar4,0,ar6,ar7);
  thunk_FUN_8c20a1d0(0x8c43786c,uVar1,ar6,ar7);
  uVar1 = FUN_8c257120(0xfffafafa,uVar1,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c0d8400\n.set _FUN_8c0d8400, _FUN_8c0d8400_def\n");
