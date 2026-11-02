#include "../decls.h"
undefined4 FUN_8c02b3d4_def(undefined2 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ar4[1] = 0;
  *ar4 = 0;
  FUN_8c022d04(ar4 + 2,ar5,ar6,ar7);
  *(byte *)(ar4 + 10) = *(byte *)(ar4 + 10) & 0xfe | 1;
  *(byte *)(ar4 + 10) = *(byte *)(ar4 + 10) & 0xfd | 2;
  return 0x14;
}

__asm__(".globl _FUN_8c02b3d4\n.set _FUN_8c02b3d4, _FUN_8c02b3d4_def\n");
