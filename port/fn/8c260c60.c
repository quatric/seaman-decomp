#include "../decls.h"
undefined4 FUN_8c260c60_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  if (*(short *)(0xaa + ar4) == 2) {
    uVar1 = FUN_8c260afc(ar4,ar5,ar6,ar7);
    return uVar1;
  }
  if (*(short *)(0xaa + ar4) == 1) {
    uVar1 = FUN_8c2609f0(ar4,ar5,ar6,ar7);
    return uVar1;
  }
  if (*(short *)(0xaa + ar4) == 0) {
    uVar1 = FUN_8c2608f8(ar4,ar5,ar6,ar7);
    return uVar1;
  }
  return (int)0xaa;
}

__asm__(".globl _FUN_8c260c60\n.set _FUN_8c260c60, _FUN_8c260c60_def\n");
