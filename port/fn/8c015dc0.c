#include "../decls.h"
undefined4 FUN_8c015dc0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_fr5;
  undefined4 in_fr4;
  
  *(undefined4 *)(ar4 + 4) = 0;
  *(undefined4 *)(ar4 + 8) = 0;
  *(undefined4 *)(ar4 + 0xc) = 0;
  *(undefined4 *)(ar4 + 0x18) = ar5;
  *(undefined4 *)(ar4 + 0x10) = in_fr4;
  *(undefined4 *)(ar4 + 0x14) = in_fr5;
  *(undefined4 *)(ar4 + 0x1c) = 0;
  *(undefined4 *)(ar4 + 0x20) = 0;
  *(undefined4 *)(ar4 + 0x24) = 0;
  *(undefined4 *)(ar4 + 0x28) = 1;
  return 1;
}

__asm__(".globl _FUN_8c015dc0\n.set _FUN_8c015dc0, _FUN_8c015dc0_def\n");
