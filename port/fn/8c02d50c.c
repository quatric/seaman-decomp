#include "../decls.h"
undefined4 * FUN_8c02d50c_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  *ar4 = 0xffffffff;
  ar4[1] = 0x13;
  ar4[2] = 0x1b;
  ar4[3] = 2;
  ar4[4] = 0;
  ar4[5] = 0;
  *(undefined1 *)(ar4 + 6) = 0;
  *(undefined1 *)((int)ar4 + 0x19) = 0;
  ar4[7] = 0;
  ar4[8] = 0;
  ar4[9] = 0;
  *(undefined2 *)(ar4 + 10) = 0;
  *(undefined2 *)((int)ar4 + 0x2a) = 0;
  ar4[0xb] = 0;
  ar4[0xc] = 0;
  for (iVar1 = 0; iVar1 < 6; iVar1 = iVar1 + 1) {
    *(char *)(ar4 + iVar1 * 3 + 0xd) = (char)iVar1;
    *(undefined1 *)((int)ar4 + iVar1 * 0xc + 0x35) = 0;
    ar4[iVar1 * 3 + 0xe] = 0;
    *(undefined1 *)(ar4 + iVar1 * 3 + 0xf) = 0;
  }
  return ar4;
}

__asm__(".globl _FUN_8c02d50c\n.set _FUN_8c02d50c, _FUN_8c02d50c_def\n");
