#include "../decls.h"
undefined4 * FUN_8c0e3ebc_def(int ar4,undefined4 *ar5,undefined4 *ar6,undefined4 ar7)

{
  if ((*(int *)(ar4 + 0x22810) == 1) && (*(int *)(ar4 + 0x22814) == 1)) {
    *ar5 = 0x3f800000;
    *ar6 = 0x3e99999a;
    return &DAT_8c0e3f14;
  }
  if ((*(int *)(ar4 + 0x22810) == 0) && (*(int *)(ar4 + 0x22814) == 1)) {
    *ar5 = 0x3f666666;
    *ar6 = 0x3e3851ec;
    return &DAT_8c0e3f1c;
  }
  *ar5 = 0x3dcccccd;
  *ar6 = 0x3dcccccd;
  return &DAT_8c0e3f20;
}

__asm__(".globl _FUN_8c0e3ebc\n.set _FUN_8c0e3ebc, _FUN_8c0e3ebc_def\n");
