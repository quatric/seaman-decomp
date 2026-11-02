#include "../decls.h"
undefined4 FUN_8c0ae7a4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  *(undefined4 *)(ar4 + 4) = 6;
  *(undefined4 *)(ar4 + 8) = 0xc;
  *(undefined4 *)(ar4 + 0xc) = 0;
  *(undefined4 *)(ar4 + 0x10) = 0;
  *(undefined4 *)(ar4 + 0x14) = 0;
  *(undefined1 *)(ar4 + 0x18) = 0;
  *(undefined1 *)(ar4 + 0x19) = 0;
  *(undefined4 *)(ar4 + 0x1c) = 0;
  *(undefined4 *)(ar4 + 0x20) = 0;
  *(undefined4 *)(ar4 + 0x24) = 0;
  *(undefined2 *)(ar4 + 0x28) = 0;
  *(undefined2 *)(ar4 + 0x2a) = 0;
  *(undefined4 *)(ar4 + 0x2c) = 0;
  *(undefined4 *)(ar4 + 0x30) = 0;
  for (iVar1 = 0; iVar1 < 6; iVar1 = iVar1 + 1) {
    *(char *)(iVar1 * 0xc + ar4 + 0x34) = (char)iVar1;
    *(undefined1 *)(iVar1 * 0xc + ar4 + 0x35) = 0;
    *(undefined4 *)(iVar1 * 0xc + ar4 + 0x38) = 0;
    *(undefined1 *)(iVar1 * 0xc + ar4 + 0x3c) = 0;
  }
  return 6;
}

__asm__(".globl _FUN_8c0ae7a4\n.set _FUN_8c0ae7a4, _FUN_8c0ae7a4_def\n");
