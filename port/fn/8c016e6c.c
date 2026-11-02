#include "../decls.h"
undefined4 * FUN_8c016e6c_def(int ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  ar5[3] = *(undefined4 *)(ar4 + 0x3c);
  *ar5 = *(undefined4 *)(ar4 + 0x30);
  ar5[1] = *(undefined4 *)(ar4 + 0x34);
  ar5[2] = *(undefined4 *)(ar4 + 0x38);
  return (undefined4 *)(ar4 + 0x34);
}

__asm__(".globl _FUN_8c016e6c\n.set _FUN_8c016e6c, _FUN_8c016e6c_def\n");
