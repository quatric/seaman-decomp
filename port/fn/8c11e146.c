#include "../decls.h"
undefined4 FUN_8c11e146_def(int ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = FUN_8c11ca24(ar4,ar5,ar6,ar7);
  if (iVar1 != 0) {
    return 1;
  }
  *(undefined4 *)(ar4 + 0x40) = 0;
  FUN_8c120348(ar4 + 0x48,0x35,ar5 & 0xffff,0);
  return *(undefined4 *)(ar4 + 0x40);
}

__asm__(".globl _FUN_8c11e146\n.set _FUN_8c11e146, _FUN_8c11e146_def\n");
