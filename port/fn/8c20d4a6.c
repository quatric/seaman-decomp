#include "../decls.h"
uint FUN_8c20d4a6_def(uint *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  
  if ((*ar4 & 0xffff) == 3) {
    uVar1 = FUN_8c20d63c(ar4,ar5,ar6,ar7);
  }
  else if ((ar4[6] & 8) == 0) {
    if ((ar4[6] & 0x20) == 0) {
      uVar1 = FUN_8c20d500(ar4,ar5,ar6,ar7);
    }
    else {
      uVar1 = FUN_8c20d5b2(ar4,ar5,ar6,ar7);
    }
  }
  else {
    uVar1 = FUN_8c20d554(ar4,ar5,ar6,ar7);
  }
  ar4[5] = uVar1;
  return uVar1;
}

__asm__(".globl _FUN_8c20d4a6\n.set _FUN_8c20d4a6, _FUN_8c20d4a6_def\n");
