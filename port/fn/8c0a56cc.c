#include "../decls.h"
undefined4 FUN_8c0a56cc_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  FUN_8c0f4f0c(ar4,ar5,ar6,ar7);
  FUN_8c02cf20(ar4 + 0x174,ar5 + 0x4c,ar6,ar7);
  uVar1 = FUN_8c03539c(ar4 + 0x2dc,ar5 + 0xd8,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c0a56cc\n.set _FUN_8c0a56cc, _FUN_8c0a56cc_def\n");
