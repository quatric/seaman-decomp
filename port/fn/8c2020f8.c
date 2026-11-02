#include "../decls.h"
undefined4 FUN_8c2020f8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  memset(0,0x4c);
  *(undefined4 *)(ar4 + 0x48) = 0;
  *(undefined1 *)(ar4 + 2) = 0;
  return 0;
}

__asm__(".globl _FUN_8c2020f8\n.set _FUN_8c2020f8, _FUN_8c2020f8_def\n");
