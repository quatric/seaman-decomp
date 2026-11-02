#include "../decls.h"
undefined4 FUN_8c0feab8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_PR;
  
  FUN_8c0fdf10(ar4,ar4 + 0x14,ar6,ar7,in_PR);
  FUN_8c0fdf08(ar4 + 0x14,ar4,ar6,ar7,in_PR);
  *(undefined4 *)(ar4 + 0x48) = 0;
  return 0x48;
}

__asm__(".globl _FUN_8c0feab8\n.set _FUN_8c0feab8, _FUN_8c0feab8_def\n");
