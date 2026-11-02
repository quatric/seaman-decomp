#include "../decls.h"
undefined4 FUN_8c264fc2_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  if (*(int *)(ar4 + 0xc) == 0) {
    *(undefined4 *)(ar4 + 0x10) = 0;
    *(undefined4 *)(ar4 + 0xc) = 1;
  }
  return in_r0;
}

__asm__(".globl _FUN_8c264fc2\n.set _FUN_8c264fc2, _FUN_8c264fc2_def\n");
