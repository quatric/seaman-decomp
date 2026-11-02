#include "../decls.h"
uint FUN_8c2020b6_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_8c1efd14(*(undefined4 *)(ar4 + 0x24));
  uVar2 = (uint)*(byte *)(iVar1 + 4);
  if ((uVar2 == 8) && (uVar2 = *(byte *)(*(int *)(iVar1 + 8) + 8) >> 6 & 1, uVar2 == 1)) {
    *(undefined4 *)(ar4 + 0x38) = 1;
  }
  else {
    *(undefined4 *)(ar4 + 0x38) = 0;
  }
  return uVar2;
}

__asm__(".globl _FUN_8c2020b6\n.set _FUN_8c2020b6, _FUN_8c2020b6_def\n");
