#include "../decls.h"
undefined4 FUN_8c0c8698_def(int ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = ((undefined4 *)(ar4 + 0x94))[1];
  *ar5 = *(undefined4 *)(ar4 + 0x94);
  ar5[1] = uVar1;
  uVar1 = ((undefined4 *)(ar4 + 0x9c))[1];
  ar5[2] = *(undefined4 *)(ar4 + 0x9c);
  ar5[3] = uVar1;
  return uVar1;
}

__asm__(".globl _FUN_8c0c8698\n.set _FUN_8c0c8698, _FUN_8c0c8698_def\n");
