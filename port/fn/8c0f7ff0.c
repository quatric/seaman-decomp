#include "../decls.h"
undefined4 FUN_8c0f7ff0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  *(undefined4 *)(0x89134 + ar4) = 0;
  *(undefined4 *)(0x8913c + ar4) = 0;
  *(undefined4 *)(0x89140 + ar4) = 0;
  *(undefined4 *)(0x1034 + ar4) = 0;
  uVar1 = FUN_8c0fa83c(ar4 + 0x1054,ar5,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c0f7ff0\n.set _FUN_8c0f7ff0, _FUN_8c0f7ff0_def\n");
