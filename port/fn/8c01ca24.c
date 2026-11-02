#include "../decls.h"
undefined4 * FUN_8c01ca24_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  for (iVar1 = 0; iVar1 < 0x10; iVar1 = iVar1 + 1) {
    *(undefined4 *)((int)ar4 + 0x5634 + iVar1 * 0x50) = 1;
  }
  *(undefined4 *)(0x5630 + (int)ar4) = 0xffffffff;
  *ar4 = 0xffffffff;
  ar4[1] = 0xffffffff;
  *(undefined4 *)0x8c2791b8 = 0;
  *(undefined4 *)(0x5b38 + (int)ar4) = 0;
  *(undefined4 *)(0x5b3c + (int)ar4) = 0;
  *(undefined4 *)0x8c279254 = 0;
  *(undefined4 *)0x8c279248 = 0;
  *(undefined4 *)(0x6cc0 + (int)ar4) = 0x7000;
  *(undefined4 *)0x8c279280 = 0x1f40;
  *(undefined4 *)0x8c279274 = 0;
  *(undefined4 *)0x8c279278 = 0;
  *(undefined4 *)0x8c27927c = 0;
  *(undefined4 *)0x8c2791bc = 0;
  *(undefined1 *)(0x8c2791bc + 3) = 0;
  *(undefined4 *)0x8c27924c = 0;
  *(undefined4 *)0x8c279284 = 0;
  *(undefined4 *)0x8c279288 = 0;
  *(undefined4 *)0x8c27928c = 0;
  *(undefined4 *)0x8c279290 = 0;
  *(undefined4 *)0x8c279294 = 0;
  return ar4;
}

__asm__(".globl _FUN_8c01ca24\n.set _FUN_8c01ca24, _FUN_8c01ca24_def\n");
