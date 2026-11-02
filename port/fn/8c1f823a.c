#include "../decls.h"
undefined4 FUN_8c1f823a_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  uint uStack_10;
  uint uStack_c;
  undefined4 uStack_8;
  
  uStack_8 = ar5;
  FUN_8c1f826c(ar4,&uStack_c,ar6,ar7);
  FUN_8c1f826c(uStack_8,&uStack_10,ar6,ar7);
  if (uStack_c == uStack_10) {
    uVar1 = 0;
  }
  else if (uStack_10 < uStack_c) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

__asm__(".globl _FUN_8c1f823a\n.set _FUN_8c1f823a, _FUN_8c1f823a_def\n");
