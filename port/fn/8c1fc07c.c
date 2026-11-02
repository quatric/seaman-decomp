#include "../decls.h"
undefined4 FUN_8c1fc07c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 ar7_00;
  undefined4 in_stack_00000000;
  
  uVar2 = ar6;
  ar7_00 = ar7;
  iVar1 = FUN_8c1fce88(ar4,ar5,ar6,ar7);
  if (iVar1 != 0) {
    return 0xffffffff;
  }
  FUN_8c1fce98(ar4,3,uVar2,ar7_00,ar5);
  uVar2 = ar5;
  FUN_8c1fcea8(ar4,ar4,ar5,ar6,ar7,in_stack_00000000,0,ar5);
  FUN_8c1fcecc(ar4,uVar2,ar5,ar6,uVar2);
  FUN_8c1fcf6e(ar4,ar7,ar5,ar6);
  return 0;
}

__asm__(".globl _FUN_8c1fc07c\n.set _FUN_8c1fc07c, _FUN_8c1fc07c_def\n");
