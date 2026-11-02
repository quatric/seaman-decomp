#include "../decls.h"
undefined4 FUN_8c1f21bc_def(int ar4,undefined4 ar5,undefined4 ar6,int ar7)

{
  if (*(short *)(ar4 + 0x4c) == 0) {
    *(undefined4 *)(ar4 + 4) = ar5;
    *(undefined4 *)(ar4 + 8) = ar6;
    *(int *)(ar4 + 0xc) = ar7;
    *(int *)(ar4 + 0x10) = ar7 + 0x7ff >> 0xb;
    *(undefined4 *)(ar4 + 0x14) = 0;
    *(undefined4 *)(ar4 + 0x18) = 0;
    *(undefined4 *)(ar4 + 0x1c) = 0;
    *(undefined4 *)(ar4 + 0x20) = 0;
    *(undefined4 *)(ar4 + 0x24) = 0;
    *(undefined4 *)(ar4 + 0x2c) = 0;
    *(undefined4 *)(ar4 + 0x34) = 0;
    *(undefined4 *)(ar4 + 0x3c) = 0;
    *(undefined4 *)(ar4 + 0x40) = 0;
    *(undefined4 *)(ar4 + 0x44) = 0;
    *(undefined2 *)(ar4 + 0x48) = 0;
    *(undefined2 *)(ar4 + 0x4a) = 0;
    *(undefined2 *)(ar4 + 0x4c) = 1;
    *(undefined2 *)(ar4 + 0x4e) = DAT_8c26c524;
    *(undefined2 *)(ar4 + 0x50) = 0;
    *(undefined2 *)(ar4 + 0x52) = 0;
    return ar4;
  }
  return 0;
}

__asm__(".globl _FUN_8c1f21bc\n.set _FUN_8c1f21bc, _FUN_8c1f21bc_def\n");
