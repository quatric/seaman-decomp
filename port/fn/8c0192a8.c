#include "../decls.h"
undefined * FUN_8c0192a8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(undefined4 *)(ar4 + 0x60) = 0;
  *(undefined4 *)(ar4 + 0x44) = 0;
  *(undefined4 *)(ar4 + 100) = 0;
  *(undefined4 *)(ar4 + 0x48) = 0;
  *(undefined4 *)(ar4 + 0x68) = 0;
  *(undefined4 *)(ar4 + 0x4c) = 0;
  *(undefined4 *)(ar4 + 0x6c) = 0;
  *(undefined4 *)(ar4 + 0x50) = 0;
  *(undefined4 *)(ar4 + 0x70) = 0;
  *(undefined4 *)(ar4 + 0x54) = 0;
  *(undefined4 *)(ar4 + 0x74) = 0xbf800000;
  *(undefined4 *)(ar4 + 0x58) = 0xbf800000;
  *(undefined4 *)(ar4 + 0x78) = 0;
  *(undefined4 *)(ar4 + 0x5c) = 0;
  *(undefined4 *)(ar4 + 0x7c) = 0x41f00000;
  return &DAT_8c019380;
}

__asm__(".globl _FUN_8c0192a8\n.set _FUN_8c0192a8, _FUN_8c0192a8_def\n");
