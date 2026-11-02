#include "../decls.h"
undefined4 FUN_8c09d6b8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(undefined4 *)(ar4 + 4) = 0;
  *(undefined4 *)(ar4 + 8) = 0;
  *(undefined4 *)(ar4 + 0xc) = 0;
  *(undefined4 *)(ar4 + 0x10) = 0;
  *(undefined4 *)(ar4 + 0x14) = 0;
  *(undefined4 *)(ar4 + 0x18) = 0;
  *(undefined2 *)(ar4 + 0x1c) = 0;
  *(undefined2 *)(ar4 + 0x1e) = 0;
  *(undefined4 *)(ar4 + 0x20) = 0;
  return 0;
}

__asm__(".globl _FUN_8c09d6b8\n.set _FUN_8c09d6b8, _FUN_8c09d6b8_def\n");
