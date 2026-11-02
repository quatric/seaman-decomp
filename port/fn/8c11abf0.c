#include "../decls.h"
undefined4 FUN_8c11abf0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  
  uVar1 = FUN_8c112f40(ar4,ar5,ar6,ar7);
  if ((uVar1 & 0xff) == 0) {
    FUN_8c11a88c(ar4,0,ar6,ar7);
    uVar1 = FUN_8c11abc6(ar4,0,ar6,ar7);
    if ((uVar1 & 0xff) == 0) {
      return 0;
    }
  }
  return 1;
}

__asm__(".globl _FUN_8c11abf0\n.set _FUN_8c11abf0, _FUN_8c11abf0_def\n");
