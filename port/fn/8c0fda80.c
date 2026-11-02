#include "../decls.h"
undefined4 FUN_8c0fda80_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = memset(ar4 + 0xd0,0,0x88001,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c0fda80\n.set _FUN_8c0fda80, _FUN_8c0fda80_def\n");
