#include "../decls.h"
undefined4 FUN_8c038a44_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  FUN_8c0f4e34(ar4,ar5,ar6,ar7);
  FUN_8c02cbe4(ar4 + 0x174,ar5 + 0x4c,ar6,ar7);
  uVar1 = FUN_8c035338(ar4 + 0x2dc,ar5 + 0xd8,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c038a44\n.set _FUN_8c038a44, _FUN_8c038a44_def\n");
