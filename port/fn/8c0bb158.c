#include "../decls.h"
uint FUN_8c0bb158_def(int ar4,undefined2 *ar5,undefined4 ar6,undefined4 ar7)

{
  byte bVar1;
  
  *ar5 = *(undefined2 *)(0x96 + ar4);
  *(undefined1 *)(ar5 + 1) = *(undefined1 *)(0x98 + ar4);
  *(undefined1 *)((int)ar5 + 3) = *(undefined1 *)(0x99 + ar4);
  *(undefined1 *)(ar5 + 2) = *(undefined1 *)(0x9a + ar4);
  *(undefined1 *)((int)ar5 + 5) = *(undefined1 *)(0x9b + ar4);
  *(undefined1 *)(ar5 + 3) = *(undefined1 *)(0x9c + ar4);
  *(undefined1 *)((int)ar5 + 7) = *(undefined1 *)(0x9d + ar4);
  bVar1 = *(byte *)(0x9e + ar4);
  *(byte *)(ar5 + 4) = bVar1;
  return (uint)bVar1;
}

__asm__(".globl _FUN_8c0bb158\n.set _FUN_8c0bb158, _FUN_8c0bb158_def\n");
