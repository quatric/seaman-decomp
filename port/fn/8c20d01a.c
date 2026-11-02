#include "../decls.h"
undefined4 FUN_8c20d01a_def(uint *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  uint in_r3;
  uint a7;
  
  if ((ar4[2] == in_r3) && ((ar4[6] & 1) != 0)) {
    uVar1 = FUN_8c20d82e(ar4,ar5,ar6,ar7);
  }
  else if ((ar4[2] == 0x30000000) && ((ar4[6] & 1) != 0)) {
    uVar1 = FUN_8c20d9ce(ar4,ar5,ar6,ar7);
  }
  else if ((*ar4 & 0xffff) == 3) {
    uVar1 = FUN_8c20db80(ar4,ar5,ar6,ar7);
  }
  else if ((ar4[6] & 8) == 0) {
    a7 = ar4[6];
    if (((a7 & 4) == 0) || ((a7 & 1) == 0)) {
      uVar1 = 4;
    }
    else {
      uVar1 = FUN_8c20daa0(ar4,ar5,ar6,a7);
    }
  }
  else {
    uVar1 = FUN_8c20db80(ar4,ar5,ar6,ar7);
  }
  return uVar1;
}

__asm__(".globl _FUN_8c20d01a\n.set _FUN_8c20d01a, _FUN_8c20d01a_def\n");
