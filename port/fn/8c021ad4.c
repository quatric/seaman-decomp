#include "../decls.h"
undefined4 FUN_8c021ad4_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*ar4 != 0) {
    uVar1 = 0x7f;
    FUN_8c022804(ar4 + 1,ar5,0x7f,ar7);
    uVar1 = FUN_8c022688(ar4 + 1,ar5,uVar1,ar7);
  }
  return uVar1;
}

__asm__(".globl _FUN_8c021ad4\n.set _FUN_8c021ad4, _FUN_8c021ad4_def\n");
