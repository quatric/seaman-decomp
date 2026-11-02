#include "../decls.h"
undefined4 FUN_8c121f38_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,int s0)

{
  undefined4 uVar1;
  
  if (s0 == 1) {
    uVar1 = FUN_8c121e40(ar4,ar5,ar6,ar7);
  }
  else {
    if (s0 != 2) {
      return 1;
    }
    uVar1 = FUN_8c121ef0(ar4,ar5,ar6,ar7);
  }
  return uVar1;
}

__asm__(".globl _FUN_8c121f38\n.set _FUN_8c121f38, _FUN_8c121f38_def\n");
