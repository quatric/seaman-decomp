#include "../decls.h"
undefined4 FUN_8c0fc40c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined1 auStack_10 [16];
  
  FUN_8c1f8176(auStack_10,ar5,ar6,ar7);
  uVar1 = FUN_8c1f826c(auStack_10,ar4 + 0xc8,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c0fc40c\n.set _FUN_8c0fc40c, _FUN_8c0fc40c_def\n");
