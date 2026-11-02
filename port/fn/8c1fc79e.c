#include "../decls.h"
undefined4 FUN_8c1fc79e_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 s0)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 ain0;
  undefined4 in_stack_00000004;
  
  uVar2 = ar7;
  ain0 = ar6;
  iVar1 = FUN_8c1fce88(ar4,ar5,ar6,ar7);
  if (iVar1 == 0) {
    FUN_8c1fce98(ar4,0xd,ar6,uVar2,ain0);
    FUN_8c1fcea8(ar4,ar4,ar5,ain0,ar7,s0,in_stack_00000004,ain0);
    FUN_8c1fcef8(ar4,ar5,ar5,ain0);
    FUN_8c1fcf6e(ar4,s0,ar5,ain0);
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

__asm__(".globl _FUN_8c1fc79e\n.set _FUN_8c1fc79e, _FUN_8c1fc79e_def\n");
