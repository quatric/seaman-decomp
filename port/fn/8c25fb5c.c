#include "../decls.h"
undefined4 FUN_8c25fb5c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  if (*(short *)(0xaa + ar4) == 2) {
    uVar1 = FUN_8c25fa58(ar4,ar5,ar6,ar7);
    return uVar1;
  }
  if (*(short *)(0xaa + ar4) == 1) {
    uVar1 = FUN_8c25f950(ar4,ar5,ar6,ar7);
    return uVar1;
  }
  uVar1 = FUN_8c25f830(ar4,ar5,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c25fb5c\n.set _FUN_8c25fb5c, _FUN_8c25fb5c_def\n");
