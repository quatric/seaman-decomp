#include "../decls.h"
undefined4 FUN_8c1028c0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  uint uStack_c;
  uint auStack_8 [2];
  
  auStack_8[0] = 0;
  uStack_c = 0;
  FUN_8c1f826c(ar4,auStack_8,ar6,ar7);
  FUN_8c1f826c(ar5,&uStack_c,ar6,ar7);
  if (uStack_c < auStack_8[0]) {
    uVar1 = 1;
  }
  else if (auStack_8[0] < uStack_c) {
    uVar1 = 2;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

__asm__(".globl _FUN_8c1028c0\n.set _FUN_8c1028c0, _FUN_8c1028c0_def\n");
