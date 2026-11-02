#include "../decls.h"
undefined4 FUN_8c0ce920_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  *(undefined4 *)(0x2d160 + ar4) = 0;
  *(undefined4 *)(0x2d15c + ar4) = 0;
  *(undefined4 *)(0x2d39c + ar4) = 0;
  *(undefined4 *)(0x2d3a0 + ar4) = 0;
  *(undefined2 *)(0x2d1ac + ar4) = 0;
  *(undefined4 *)(0x2d16c + ar4) = 0;
  *(undefined4 *)(0x2d168 + ar4) = 1;
  *(undefined4 *)(0x2d164 + ar4) = 0;
  uVar1 = FUN_8c0c5330(ar4 + 0x2d1b0,ar5,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c0ce920\n.set _FUN_8c0ce920, _FUN_8c0ce920_def\n");
