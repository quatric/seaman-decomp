#include "../decls.h"
undefined4 FUN_8c0c86c0_def(int ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = ((undefined4 *)(ar4 + 0x8c))[1];
  *ar5 = *(undefined4 *)(ar4 + 0x8c);
  ar5[1] = uVar1;
  return uVar1;
}

__asm__(".globl _FUN_8c0c86c0\n.set _FUN_8c0c86c0, _FUN_8c0c86c0_def\n");
