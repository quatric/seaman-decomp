#include "../decls.h"
undefined4 FUN_8c01bb00_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int ar5_00;
  
  if (*(undefined4 *)0x8c2791b0 == 3) {
    ar5_00 = FUN_8c01baa0(ar4,ar5,ar6,ar7);
    if (ar5_00 < 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = FUN_8c01ade8(ar4,ar5_00,ar6,ar7);
      uVar1 = FUN_8c01acd0(ar4,uVar1,ar6,ar7);
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

__asm__(".globl _FUN_8c01bb00\n.set _FUN_8c01bb00, _FUN_8c01bb00_def\n");
