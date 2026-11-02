#include "../decls.h"
undefined4 FUN_8c121cc0_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  if (ar5 == 1) {
    if ((uint)*(ushort *)(0x244 + ar4) == *(int *)(0x244 + -4 + ar4) - 1U) {
      uVar1 = 0x16;
    }
    else {
      uVar1 = 10;
    }
    uVar1 = FUN_8c120348(ar4 + 0x48,uVar1,0,0);
  }
  else {
    if (ar5 == 2) {
      uVar1 = 0xc;
    }
    else {
      if (ar5 != 3) {
        uVar1 = FUN_8c1204c4(ar4 + 0x48,3,ar6,ar7);
        return uVar1;
      }
      uVar1 = 0xb;
    }
    uVar1 = FUN_8c120348(ar4 + 0x48,uVar1,0,0);
  }
  return uVar1;
}

__asm__(".globl _FUN_8c121cc0\n.set _FUN_8c121cc0, _FUN_8c121cc0_def\n");
