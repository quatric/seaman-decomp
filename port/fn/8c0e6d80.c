#include "../decls.h"
undefined4 FUN_8c0e6d80_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  if (*(int *)(0x83fc + ar4) != -1) {
    ar5 = *(undefined4 *)(0x83fc + ar4);
    FUN_8c0220d4(0x8c2b59d0,ar5,ar6,ar7);
  }
  uVar1 = FUN_8c0d84a8(ar4 + 0x10dc,ar5,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c0e6d80\n.set _FUN_8c0e6d80, _FUN_8c0e6d80_def\n");
