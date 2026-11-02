#include "../decls.h"
undefined4 FUN_8c0d092c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_PR;
  
  uVar1 = 0;
  FUN_8c256328(0,ar5,ar6,ar7,in_PR);
  FUN_8c019058(uVar1,ar5,ar6,ar7);
  FUN_8c01538c(ar4,ar5,ar6,ar7);
  FUN_8c015af8(ar4 + 8,ar5,ar6,ar7);
  uVar1 = FUN_8c256210(1,ar5,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c0d092c\n.set _FUN_8c0d092c, _FUN_8c0d092c_def\n");
