#include "../decls.h"
undefined4 * FUN_8c101210_def(int ar4,undefined4 *ar5,undefined4 *ar6,undefined4 ar7)

{
  if (*(int *)(ar4 + 0x188) == 6) {
    *ar5 = DAT_8c1266e0;
    *ar6 = DAT_8c1266e0;
    return &DAT_8c1266e0;
  }
  *ar5 = *(undefined4 *)(ar4 + 300);
  *ar6 = *(undefined4 *)(ar4 + 0x130);
  return (undefined4 *)0x130;
}

__asm__(".globl _FUN_8c101210\n.set _FUN_8c101210, _FUN_8c101210_def\n");
