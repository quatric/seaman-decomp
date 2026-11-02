#include "../decls.h"
undefined4 FUN_8c112d00_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  iVar1 = 0;
  uVar5 = (uint)(*(ushort *)(0x1e4 + ar4) >> 5);
  uVar6 = 0;
  if (*(int *)(ar4 + 0x5c) != 0) {
    do {
      iVar4 = *(int *)(*(int *)(ar4 + 0x58) + uVar6 * 4);
      if (iVar1 != 0) {
        *(int *)(iVar1 + 0x18) = iVar4;
      }
      uVar2 = 0;
      uVar3 = uVar2;
      if (uVar5 != 1) {
        do {
          uVar2 = uVar3 + 1;
          *(uint *)(uVar3 * 0x20 + iVar4 + 0x18) = (uVar3 + 1) * 0x20 + iVar4;
          uVar3 = uVar2;
        } while (uVar2 < uVar5 - 1);
      }
      uVar6 = uVar6 + 1;
      iVar1 = uVar2 * 0x20 + iVar4;
    } while (uVar6 < *(uint *)(ar4 + 0x5c));
  }
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x18) = 0;
  }
  *(undefined4 *)(ar4 + 0x54) = **(undefined4 **)(ar4 + 0x58);
  return 0;
}

__asm__(".globl _FUN_8c112d00\n.set _FUN_8c112d00, _FUN_8c112d00_def\n");
