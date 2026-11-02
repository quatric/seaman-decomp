#include "../decls.h"
undefined4 FUN_8c201da0_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_stack_00000000;
  undefined1 auStack_1c [8];
  undefined4 uStack_14;
  int iStack_10;
  
  uStack_14 = 0;
  if (ar5 < 1) {
    ar5 = 0;
  }
  iStack_10 = ar5;
  FUN_8c010794(8,auStack_1c,&uStack_14);
  FUN_8c201cf6(ar4,1,ar6,ar7);
  uVar1 = FUN_8c010794(8,in_stack_00000000,ar4 + 8);
  return uVar1;
}

__asm__(".globl _FUN_8c201da0\n.set _FUN_8c201da0, _FUN_8c201da0_def\n");
