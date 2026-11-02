#include "../decls.h"
undefined4 FUN_8c0d9720_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_stack_fffffff4;
  
  FUN_8c01538c(ar4 + 0x20,ar5,ar6,ar7);
  uVar1 = 0;
  FUN_8c256328(0,ar5,ar6,ar7,in_stack_fffffff4);
  FUN_8c019058(uVar1,ar5,ar6,ar7);
  if (*(int *)(ar4 + 0x10) == 8) {
    FUN_8c015adc(ar4 + 0x28,ar5,ar6,ar7);
  }
  else {
    ar5 = ar4 + *(int *)(ar4 + 0x10) * 4 + 0x2c;
    FUN_8c015b54(ar4 + 0x28,ar5,ar6,ar7);
  }
  uVar1 = FUN_8c256210(1,ar5,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c0d9720\n.set _FUN_8c0d9720, _FUN_8c0d9720_def\n");
