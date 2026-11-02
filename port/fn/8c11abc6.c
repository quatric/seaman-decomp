#include "../decls.h"
undefined4 FUN_8c11abc6_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if (*(int *)(0x80 + ar4) == 0) {
    ar5 = 0;
    uVar1 = 10;
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(0x80 + ar4);
    uVar1 = 9;
  }
  uVar1 = FUN_8c120348(ar4,uVar1,uVar2,ar5);
  return uVar1;
}

__asm__(".globl _FUN_8c11abc6\n.set _FUN_8c11abc6, _FUN_8c11abc6_def\n");
