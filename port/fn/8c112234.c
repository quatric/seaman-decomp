#include "../decls.h"
undefined4 FUN_8c112234_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = 0;
  if (*(int *)(ar4 + 0x14) != 0) {
    do {
      iVar2 = uVar1 * 4;
      uVar1 = uVar1 + 1;
      *(undefined4 *)(*(int *)(ar4 + 0x2c) + iVar2) = *(undefined4 *)(ar4 + 0x1c);
      *(undefined4 *)(*(int *)(ar4 + 0x40) + iVar2) = 0;
    } while (uVar1 < *(uint *)(ar4 + 0x14));
  }
  *(undefined4 *)(ar4 + 0x3c) = 0;
  *(undefined4 *)(ar4 + 0x28) = *(undefined4 *)(ar4 + 0x1c);
  *(undefined4 *)(ar4 + 0x24) = *(undefined4 *)(ar4 + 0x1c);
  *(undefined1 *)(ar4 + 0x30) = 0;
  *(undefined4 *)(ar4 + 0x38) = 0;
  return 0x30;
}

__asm__(".globl _FUN_8c112234\n.set _FUN_8c112234, _FUN_8c112234_def\n");
