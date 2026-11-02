#include "../decls.h"
undefined4 FUN_8c0fe4c4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_PR;
  
  FUN_8c0fdf10(ar4,ar4 + 0xc,ar6,ar7,in_PR);
  FUN_8c0fdf08(ar4 + 0xc,ar4,ar6,ar7,in_PR);
  *(undefined4 *)(ar4 + 0x38) = 0;
  return 0;
}

__asm__(".globl _FUN_8c0fe4c4\n.set _FUN_8c0fe4c4, _FUN_8c0fe4c4_def\n");
