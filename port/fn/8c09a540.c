#include "../decls.h"
undefined4 FUN_8c09a540_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(char *)(ar4 + 0x4e) = *(char *)(ar4 + 0x4e) + '\x01';
  return 0x4e;
}

__asm__(".globl _FUN_8c09a540\n.set _FUN_8c09a540, _FUN_8c09a540_def\n");
