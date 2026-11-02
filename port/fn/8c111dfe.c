#include "../decls.h"
undefined4 FUN_8c111dfe_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  if (*(char *)(ar4 + 0x30) != '\0') {
    return 0;
  }
  iVar3 = *(int *)(ar4 + 0x24);
  iVar1 = iVar3 + (uint)*(ushort *)(ar4 + 0xc);
  *(int *)(ar4 + 0x24) = iVar1;
  uVar2 = 0;
  if (iVar1 == *(int *)(ar4 + 0x20)) {
    *(undefined4 *)(ar4 + 0x24) = *(undefined4 *)(ar4 + 0x1c);
  }
  if (*(int *)(ar4 + 0x14) != 0) {
    do {
      if (*(int *)(uVar2 * 4 + *(int *)(ar4 + 0x2c)) == 0) {
        *(int *)(*(int *)(ar4 + 0x40) + uVar2 * 4) = *(int *)(*(int *)(ar4 + 0x40) + uVar2 * 4) + 1;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)(ar4 + 0x14));
  }
  if ((*(int *)(ar4 + 0x24) == *(int *)(ar4 + 0x28)) && (*(int *)(ar4 + 0x18) != 0)) {
    *(undefined1 *)(ar4 + 0x30) = 1;
  }
  *(int *)(ar4 + 0x3c) = *(int *)(ar4 + 0x3c) + 1;
  return iVar3;
}

__asm__(".globl _FUN_8c111dfe\n.set _FUN_8c111dfe, _FUN_8c111dfe_def\n");
