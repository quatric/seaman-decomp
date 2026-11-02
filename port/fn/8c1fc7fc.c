#include "../decls.h"
undefined4 FUN_8c1fc7fc_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_stack_00000000;
  undefined4 ain0;
  
  uVar2 = ar6;
  ain0 = ar7;
  iVar1 = FUN_8c1fce88(ar4,ar5,ar6,ar7);
  if (iVar1 == 0) {
    FUN_8c1fce98(ar4,0xe,uVar2,ar7,ain0);
    FUN_8c1fcea8(ar4,ar4,ar5,ar6,ain0,in_stack_00000000,0,ain0);
    FUN_8c1fcef8(ar4,ar5,ar5,ar6);
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

__asm__(".globl _FUN_8c1fc7fc\n.set _FUN_8c1fc7fc, _FUN_8c1fc7fc_def\n");
