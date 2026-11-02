#include "../decls.h"
undefined4 FUN_8c25f40e_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  if (*(short *)(0xaa + ar4) == 1) {
    uVar1 = FUN_8c25f306(ar4,ar5,ar6,ar7);
    return uVar1;
  }
  uVar1 = FUN_8c25f1e8(ar4,ar5,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c25f40e\n.set _FUN_8c25f40e, _FUN_8c25f40e_def\n");
