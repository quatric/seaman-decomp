#include "../decls.h"
undefined4 FUN_8c0339b0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(undefined4 *)(ar4 + 0x14) = 0;
  *(undefined4 *)(ar4 + 0x10) = 0;
  *(undefined4 *)(ar4 + 0x18) = 0;
  *(undefined4 *)(ar4 + 0x20) = 0;
  *(undefined4 *)(ar4 + 0x1c) = 0;
  *(undefined4 *)(ar4 + 0x2c) = 0xffffffff;
  *(undefined4 *)(ar4 + 0x30) = 0;
  *(undefined4 *)(ar4 + 0x28) = 0;
  *(undefined4 *)(ar4 + 0x24) = 1;
  *(undefined1 *)(ar4 + 0x54) = 0;
  *(undefined4 *)(ar4 + 0x58) = 0;
  *(undefined4 *)(ar4 + 100) = 0x41f00000;
  *(undefined4 *)(ar4 + 0x60) = 0;
  *(undefined4 *)(ar4 + 0x5c) = 0;
  *(undefined4 *)(ar4 + 0x38) = 0;
  *(undefined4 *)(ar4 + 0x34) = 0;
  *(undefined4 *)(ar4 + 0x40) = 0;
  *(undefined4 *)(ar4 + 0x3c) = 0;
  *(undefined4 *)(ar4 + 0x48) = 0;
  *(undefined4 *)(ar4 + 0x44) = 0;
  *(undefined4 *)(ar4 + 0x50) = 0;
  *(undefined4 *)(ar4 + 0x4c) = 0;
  *(undefined4 *)(ar4 + 0x68) = 0x3f800000;
  *(undefined4 *)(ar4 + 0x6c) = 0xffffffff;
  *(undefined4 *)(ar4 + 0x70) = 0;
  *(undefined4 *)(ar4 + 4) = 0;
  *(undefined4 *)(ar4 + 8) = 0;
  *(undefined2 *)(ar4 + 0xc) = 0;
  *(undefined2 *)(ar4 + 0xe) = 0;
  return 0;
}

__asm__(".globl _FUN_8c0339b0\n.set _FUN_8c0339b0, _FUN_8c0339b0_def\n");
