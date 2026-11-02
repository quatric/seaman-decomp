#include "../decls.h"
undefined4 FUN_8c0fc3e4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  *(undefined4 *)(*(int *)(*(int *)(ar4 + 0x10) + 0x40) + 0x74) = 1;
  uVar1 = FUN_8c0fc40c(ar4,ar5,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c0fc3e4\n.set _FUN_8c0fc3e4, _FUN_8c0fc3e4_def\n");
