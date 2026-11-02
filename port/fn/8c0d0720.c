#include "../decls.h"
undefined4 FUN_8c0d0720_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(undefined4 *)(ar4 + 0xc) = 0;
  *(undefined4 *)(ar4 + 0x10) = 0;
  *(undefined4 *)(ar4 + 0x14) = 0;
  *(undefined2 *)(ar4 + 0x18) = 0;
  *(undefined4 *)(ar4 + 0x28) = 0;
  *(undefined2 *)(ar4 + 0x2c) = 0;
  *(undefined1 *)(ar4 + 0x1d) = 0xff;
  *(undefined1 *)(ar4 + 0x1c) = 0xff;
  *(undefined1 *)(ar4 + 0x1b) = 0xff;
  *(undefined1 *)(ar4 + 0x1a) = 0xff;
  *(undefined4 *)(ar4 + 0x48) = 0;
  return 0x48;
}

__asm__(".globl _FUN_8c0d0720\n.set _FUN_8c0d0720, _FUN_8c0d0720_def\n");
