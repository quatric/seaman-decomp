#include "../decls.h"
undefined4 FUN_8c035f14_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = FUN_8c035ab4(*(undefined4 *)(ar4 + 0x10),ar5,ar6,ar7);
  if ((char)uVar1 == '\0') {
    FUN_8c035f4c(*(undefined4 *)(ar4 + 0x10),1,ar6,ar7);
  }
  return 4;
}

__asm__(".globl _FUN_8c035f14\n.set _FUN_8c035f14, _FUN_8c035f14_def\n");
