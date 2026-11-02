#include "../decls.h"
undefined4 FUN_8c1f79da_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  char *in_r2;
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*in_r2 == '\0') {
    *(undefined4 *)0x8c4748a8 = 5;
  }
  else {
    uVar1 = FUN_8c1f74b0((&FUN_8c1f736c),2,ar6,ar7);
  }
  return uVar1;
}

__asm__(".globl _FUN_8c1f79da\n.set _FUN_8c1f79da, _FUN_8c1f79da_def\n");
