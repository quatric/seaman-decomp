#include "../decls.h"
undefined4 FUN_8c1f8d48_def(int *ar4,uint *ar5,undefined4 ar6,undefined4 ar7)

{
  *ar5 = (uint)((*(uint *)(*ar4 * 0x20 + *DAT_8c273a28 + 0x18) & 1) != 0);
  return 0;
}

__asm__(".globl _FUN_8c1f8d48\n.set _FUN_8c1f8d48, _FUN_8c1f8d48_def\n");
