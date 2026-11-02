#include "../decls.h"
undefined4 FUN_8c035fa0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_PR;
  
  FUN_8c028ec8(*(undefined4 *)(ar4 + 0x10),3,ar6,ar7);
  FUN_8c02cb6c(*(int *)(ar4 + 8) + 0xa8,1,ar6,ar7,in_PR);
  FUN_8c02cb8c(*(int *)(ar4 + 8) + 0xa8,0x12,ar6,ar7,in_PR);
  return 4;
}

__asm__(".globl _FUN_8c035fa0\n.set _FUN_8c035fa0, _FUN_8c035fa0_def\n");
