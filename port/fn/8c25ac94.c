#include "../decls.h"
undefined4 FUN_8c25ac94_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = FUN_8c25ab02(ar4 + 0x18,ar5,ar6,ar7);
  if (iVar1 != 0) {
    *(undefined4 *)0x8c4aa6b4 = 8;
    return 0xffffffff;
  }
  return 1;
}

__asm__(".globl _FUN_8c25ac94\n.set _FUN_8c25ac94, _FUN_8c25ac94_def\n");
