#include "../decls.h"
undefined4 FUN_8c255ff8_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_8c25a536(DAT_8c277b08,DAT_8c277b0c,ar4,ar7);
  if (-1 < iVar1) {
    uVar2 = FUN_8c255f96(iVar1 * 0x44 + DAT_8c277b08,ar5,ar4,ar7);
    return uVar2;
  }
  return iVar1;
}

__asm__(".globl _FUN_8c255ff8\n.set _FUN_8c255ff8, _FUN_8c255ff8_def\n");
