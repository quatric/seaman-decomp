#include "../decls.h"
undefined1 * FUN_8c0fdc98_def(undefined1 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  *ar4 = 0;
  ar4[0x20] = 0;
  ar4[0x40] = 0;
  *(undefined4 *)(ar4 + 0x60) = 0;
  *(undefined4 *)(ar4 + 100) = 0;
  *(undefined4 *)(ar4 + 0x68) = 0;
  *(undefined4 *)(ar4 + 0x6c) = 0;
  *(undefined4 *)(ar4 + 0x70) = 0;
  *(undefined4 *)(ar4 + 0x74) = 0;
  *(undefined4 *)(ar4 + 0x78) = 0;
  *(undefined4 *)(ar4 + 0x7c) = 7;
  for (iVar1 = 0; iVar1 < 0xc; iVar1 = iVar1 + 1) {
    *(undefined4 *)(ar4 + 0x80 + iVar1 * 4) = 0;
  }
  *(undefined4 *)(ar4 + 0xb0) = 0;
  *(undefined4 *)(ar4 + 0xb4) = 0;
  *(undefined4 *)(ar4 + 0xb8) = 0;
  *(undefined4 *)(ar4 + 0xbc) = 0;
  *(undefined4 *)(ar4 + 0xc0) = 0;
  *(undefined4 *)(ar4 + 0xc4) = 0;
  for (iVar1 = 0; iVar1 < 0x10; iVar1 = iVar1 + 1) {
    ar4[0xc8 + iVar1 * 0x20] = 0;
  }
  return ar4;
}

__asm__(".globl _FUN_8c0fdc98\n.set _FUN_8c0fdc98, _FUN_8c0fdc98_def\n");
