#include "../decls.h"
undefined4 FUN_8c0dfdfc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_PR;
  
  FUN_8c0d0a3c(ar4 + 0x13b70,0,ar6,ar7,in_PR);
  *(undefined4 *)(ar4 + 0x10dc) = 0;
  return 0x10dc;
}

__asm__(".globl _FUN_8c0dfdfc\n.set _FUN_8c0dfdfc, _FUN_8c0dfdfc_def\n");
