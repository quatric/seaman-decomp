#include "../decls.h"
undefined4 FUN_8c112f40_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  
  uVar6 = 0;
  uVar4 = 0;
  iVar1 = libgcc_divide_helper_01051c((uint)*(ushort *)(ar4 + 0x1e4),0x18);
  uVar7 = uVar4;
  if (uVar4 < *(uint *)(ar4 + 0x88)) {
    do {
      iVar5 = *(int *)(*(int *)(ar4 + 0x84) + uVar7 * 4);
      if (uVar4 != 0) {
        *(int *)(uVar4 + 0x10) = iVar5;
      }
      uVar4 = uVar6;
      if (iVar1 != 1) {
        do {
          iVar3 = uVar4 + 1;
          iVar2 = uVar4 * 0x18;
          uVar4 = uVar4 + 1;
          *(int *)(iVar2 + iVar5 + 0x10) = iVar3 * 0x18 + iVar5;
        } while (uVar4 < iVar1 - 1U);
      }
      uVar7 = uVar7 + 1;
      uVar4 = uVar4 * 0x18 + iVar5;
    } while (uVar7 < *(uint *)(ar4 + 0x88));
  }
  if (uVar4 != 0) {
    *(uint *)(uVar4 + 0x10) = uVar6;
  }
  *(undefined4 *)(ar4 + 0x8c) = **(undefined4 **)(ar4 + 0x84);
  *(uint *)(ar4 + 0x80) = uVar6;
  return 0;
}

__asm__(".globl _FUN_8c112f40\n.set _FUN_8c112f40, _FUN_8c112f40_def\n");
