#include "../decls.h"
undefined4 FUN_8c269056_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = libgcc_divide_helper_010614
                    (*(int *)(ar4 + 0x50) + *(int *)(ar4 + 0x58),*(undefined4 *)(ar4 + 0x28));
  *(undefined4 *)(ar4 + 0x50) = uVar1;
  *(int *)(ar4 + 0x54) = *(int *)(ar4 + 0x54) + *(int *)(ar4 + 0x58);
  *(undefined4 *)(ar4 + 0x58) = 0;
  return 0x58;
}

__asm__(".globl _FUN_8c269056\n.set _FUN_8c269056, _FUN_8c269056_def\n");
