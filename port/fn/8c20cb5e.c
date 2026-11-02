#include "../decls.h"
undefined4 FUN_8c20cb5e_def(uint *ar4,undefined4 ar5,undefined4 ar6,int ar7)

{
  int in_r0;
  uint uVar1;
  
  if ((in_r0 != 1) && (ar7 != 1)) {
    if ((*ar4 & 0xffff) == 3) {
      FUN_8c20d740(ar4[7],ar5,ar4[3],ar4[6]);
    }
    else {
      uVar1 = ar4[6];
      if (((((uVar1 & 4) == 0) || ((uVar1 & 1) == 0)) || ((uVar1 & 8) != 0)) ||
         ((uVar1 & 0x20) != 0)) {
        FUN_8c20a8e0(ar4[7],ar5,ar4[5],ar7);
      }
      else {
        FUN_8c20d6c0(ar4[7],ar5,ar4[3],ar7);
      }
    }
    return 0;
  }
  return 4;
}

__asm__(".globl _FUN_8c20cb5e\n.set _FUN_8c20cb5e, _FUN_8c20cb5e_def\n");
