#include "../decls.h"
undefined4 FUN_8c0e021c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  FUN_8c0d50b4(ar4 + 0x10ac,ar5,ar6,ar7);
  uVar1 = 0;
  FUN_8c0d0538(ar4 + 0x13b24,0,ar6,ar7);
  FUN_8c0d0714(ar4 + 0x13b24,uVar1,ar6,ar7);
  uVar1 = 0;
  FUN_8c0e015c(ar4 + 0x13b8c,0,ar6,ar7);
  *(undefined4 *)(0x1024 + ar4) = 3;
  *(undefined4 *)(0x9d4 + ar4) = 0;
  uVar1 = FUN_8c0d6980(ar4 + 0xa68,uVar1,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c0e021c\n.set _FUN_8c0e021c, _FUN_8c0e021c_def\n");
