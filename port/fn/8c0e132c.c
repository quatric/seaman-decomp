#include "../decls.h"
undefined4 FUN_8c0e132c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  FUN_8c0d0910(ar4 + 0x13b70,ar5,ar6,ar7);
  FUN_8c0db7d4(ar4,1,ar6,ar7);
  uVar1 = 3;
  FUN_8c0db7d4(ar4,3,ar6,ar7);
  uVar1 = FUN_8c0d0a44(ar4 + 0x13b70,uVar1,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c0e132c\n.set _FUN_8c0e132c, _FUN_8c0e132c_def\n");
