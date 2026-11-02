#include "../decls.h"
undefined4 FUN_8c206fd2_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int *piVar1;
  
  *(undefined4 *)0xa05f6908 = 2;
  piVar1 = 0x8c4aa108;
  if (*(undefined4 *)0x8c4aa108 == 0) {
    *(undefined4 *)0x8c4a9e5c = *(undefined4 *)0x8c4a9e5c | 0x10;
  }
  *piVar1 = 0;
  return 0;
}

__asm__(".globl _FUN_8c206fd2\n.set _FUN_8c206fd2, _FUN_8c206fd2_def\n");
