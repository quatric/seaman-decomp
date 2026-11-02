#include "../decls.h"
uint FUN_8c2020ba_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  uint uVar2;
  int unaff_r14;
  
  iVar1 = FUN_8c1efd14(*(undefined4 *)(unaff_r14 + 0x24),ar5,ar6,ar7);
  uVar2 = (uint)*(byte *)(iVar1 + 4);
  if ((uVar2 == 8) && (uVar2 = *(byte *)(*(int *)(iVar1 + 8) + 8) >> 6 & 1, uVar2 == 1)) {
    *(undefined4 *)(unaff_r14 + 0x38) = 1;
  }
  else {
    *(undefined4 *)(unaff_r14 + 0x38) = 0;
  }
  return uVar2;
}

__asm__(".globl _FUN_8c2020ba\n.set _FUN_8c2020ba, _FUN_8c2020ba_def\n");
