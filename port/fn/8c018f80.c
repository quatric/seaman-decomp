#include "../decls.h"
undefined4 * FUN_8c018f80_def(int ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_fr4;
  
  *(undefined4 *)(ar4 + 0x30) = *ar5;
  *(undefined4 *)(ar4 + 0x34) = ar5[1];
  *(undefined4 *)(ar4 + 0x38) = ar5[2];
  *(undefined4 *)(ar4 + 0x3c) = in_fr4;
  return (undefined4 *)(ar4 + 0x38);
}

__asm__(".globl _FUN_8c018f80\n.set _FUN_8c018f80, _FUN_8c018f80_def\n");
