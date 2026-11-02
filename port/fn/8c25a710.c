#include "../decls.h"
int FUN_8c25a710_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  
  uVar1 = DAT_8c277cb0;
  if (*(int *)(DAT_8c277cb0 * 0x44 + DAT_8c277b08) != -1) {
    for (uVar1 = 0; (uVar1 < DAT_8c277b0c && (*(int *)(uVar1 * 0x44 + DAT_8c277b08) != -1));
        uVar1 = uVar1 + 1) {
    }
  }
  return uVar1 * 0x44 + DAT_8c277b08 + 0x14;
}

__asm__(".globl _FUN_8c25a710\n.set _FUN_8c25a710, _FUN_8c25a710_def\n");
