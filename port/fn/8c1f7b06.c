#include "../decls.h"
undefined4 FUN_8c1f7b06_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  char *in_r2;
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*in_r2 == '\0') {
    *(undefined4 *)0x8c4748a8 = 5;
  }
  else if (*(undefined4 *)0x8c474a06 == 1) {
    uVar1 = FUN_8c1f74b0((&FUN_8c1f71b6),1,ar6,ar7);
  }
  return uVar1;
}

__asm__(".globl _FUN_8c1f7b06\n.set _FUN_8c1f7b06, _FUN_8c1f7b06_def\n");
