#include "../decls.h"
undefined4 FUN_8c262ae2_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = 0x7fffffff;
  *(undefined4 *)(0x98 + ar4) = 0;
  *(undefined4 *)(ar4 + 0x2c) = 0;
  *(undefined4 *)(ar4 + 0x30) = 0;
  *(undefined4 *)(ar4 + 0x34) = 0;
  *(undefined4 *)(ar4 + 0x38) = uVar1;
  *(undefined4 *)(ar4 + 0x3c) = 0xffffffff;
  *(undefined4 *)(ar4 + 0x40) = 0;
  *(undefined4 *)(ar4 + 0x44) = 0;
  *(undefined1 *)(ar4 + 3) = 0;
  return 0;
}

__asm__(".globl _FUN_8c262ae2\n.set _FUN_8c262ae2, _FUN_8c262ae2_def\n");
