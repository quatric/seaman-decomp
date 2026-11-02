#include "../decls.h"
undefined4 FUN_8c1f6454_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int in_r0;
  undefined4 uVar1;
  
  if (in_r0 == 0) {
    uVar1 = 0;
  }
  else if (in_r0 == 6) {
    uVar1 = 1;
  }
  else if (in_r0 == 0xc) {
    uVar1 = 2;
  }
  else {
    if (in_r0 != 0x12) {
      return in_r0;
    }
    uVar1 = 3;
  }
  uVar1 = FUN_8c1f0398(uVar1,ar5,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c1f6454\n.set _FUN_8c1f6454, _FUN_8c1f6454_def\n");
