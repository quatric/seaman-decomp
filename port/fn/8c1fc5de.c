#include "../decls.h"
undefined4 FUN_8c1fc5de_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = FUN_8c1fce88(ar4,ar5,ar6,ar7);
  if (iVar1 != 0) {
    return 0xffffffff;
  }
  return *(undefined4 *)(ar4 * 4 + 0x8c475fa0);
}

__asm__(".globl _FUN_8c1fc5de\n.set _FUN_8c1fc5de, _FUN_8c1fc5de_def\n");
