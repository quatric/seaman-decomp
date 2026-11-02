#include "../decls.h"
int FUN_8c265ea0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 s0)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int ar5_00;
  int in_stack_ffffffe0;
  
  ar5_00 = 0;
  uVar1 = ar6;
  uVar2 = ar7;
  if (DAT_8c2784c0 == 0) {
    ar5_00 = 0xd000001;
  }
  else if (ar4 == 0) {
    ar5_00 = 0x7000103;
  }
  else {
    FUN_8c265a2c(ar4,&stack0xffffffe0,ar6,ar7);
    if (in_stack_ffffffe0 == 2) {
      ar5_00 = 0x6000001;
    }
    else {
      FUN_8c265f74(ar4,0,uVar1,uVar2);
      FUN_8c265e80(ar4,ar5,uVar1,uVar2);
      FUN_8c265f7c(ar4,ar6,uVar1,uVar2);
      FUN_8c265e88(ar4,ar7,s0,uVar2);
      FUN_8c265f74(ar4,0,s0,uVar2);
      uVar1 = s0;
    }
  }
  if (ar5_00 != 0) {
    FUN_8c2688a0(FUN_8c265ea0,ar5_00,uVar1,uVar2,in_stack_ffffffe0);
  }
  return ar5_00;
}

__asm__(".globl _FUN_8c265ea0\n.set _FUN_8c265ea0, _FUN_8c265ea0_def\n");
