#include "../decls.h"
undefined4 FUN_8c0c8464_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(0xd4 + ar4);
  *(undefined4 *)(0xd4 + ar4) = 0;
  return uVar1;
}

__asm__(".globl _FUN_8c0c8464\n.set _FUN_8c0c8464, _FUN_8c0c8464_def\n");
