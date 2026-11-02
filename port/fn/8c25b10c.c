#include "../decls.h"
uint FUN_8c25b10c_def(uint ar4,undefined1 *ar5,undefined4 ar6,undefined4 ar7)

{
  *ar5 = (char)ar4;
  ar5[1] = (char)(ar4 >> 8);
  ar5[2] = (char)(ar4 >> 0x10);
  ar5[3] = (char)(ar4 >> 0x18);
  return ar4 >> 0x18;
}

__asm__(".globl _FUN_8c25b10c\n.set _FUN_8c25b10c, _FUN_8c25b10c_def\n");
