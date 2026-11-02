#include "../decls.h"
undefined4 FUN_8c20b708_def(uint ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  
  if (((*(uint *)(ar4 + 0x18) & 4) == 0) && (*(int *)(ar4 + 4) == 1)) {
    uVar1 = *(uint *)(ar4 + 8) & 0x38000000;
    if (uVar1 == 0) {
      ar4 = 3;
    }
    else if (uVar1 == 0x8000000) {
      ar4 = 1;
    }
    else if (uVar1 == 0x10000000) {
      ar4 = 2;
    }
    *(undefined4 *)0x8c4aa110 = *(undefined4 *)0x8c4a9e78 & 0xfffffff8 | ar4;
    return 0;
  }
  return 4;
}

__asm__(".globl _FUN_8c20b708\n.set _FUN_8c20b708, _FUN_8c20b708_def\n");
