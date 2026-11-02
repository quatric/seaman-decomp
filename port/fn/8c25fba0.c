#include "../decls.h"
undefined4 FUN_8c25fba0_def(int ar4,undefined4 *ar5,int *ar6,int *ar7)

{
  *ar5 = *(undefined4 *)(ar4 + 0x9c);
  *ar6 = *(int *)(ar4 + 0x40) - *(int *)(ar4 + 0x9c);
  *ar7 = *(int *)(ar4 + 0x18) - *(int *)(ar4 + 0x98);
  return *(undefined4 *)(ar4 + 0x3c);
}

__asm__(".globl _FUN_8c25fba0\n.set _FUN_8c25fba0, _FUN_8c25fba0_def\n");
