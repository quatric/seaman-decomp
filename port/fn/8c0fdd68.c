#include "../decls.h"
undefined4 FUN_8c0fdd68_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = FUN_8c0fdd98(ar4,*(int *)(ar4 + 0x68) + ar5,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c0fdd68\n.set _FUN_8c0fdd68, _FUN_8c0fdd68_def\n");
