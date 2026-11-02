#include "../decls.h"
undefined4 FUN_8c015d74_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined8 in_dr4;
  
  *(int *)(ar4 + 4) = (int)((ulonglong)in_dr4 >> 0x20);
  *(int *)(ar4 + 8) = (int)in_dr4;
  uVar1 = FUN_8c25748c(ar4 + 4,*(undefined4 *)(ar4 + 0x24),*(undefined4 *)(ar4 + 0x28),ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c015d74\n.set _FUN_8c015d74, _FUN_8c015d74_def\n");
