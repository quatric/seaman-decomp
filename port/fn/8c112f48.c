#include "../decls.h"
undefined4 FUN_8c112f48_def(int ar4,uint ar5,undefined4 ar6,uint ar7)

{
  int in_r0;
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  iVar1 = libgcc_divide_helper_01051c((uint)*(ushort *)(in_r0 + ar4),0x18);
  uVar6 = ar5;
  if (ar5 < *(uint *)(ar4 + 0x88)) {
    do {
      iVar5 = *(int *)(*(int *)(ar4 + 0x84) + uVar6 * 4);
      if (ar5 != 0) {
        *(int *)(ar5 + 0x10) = iVar5;
      }
      uVar4 = ar7;
      if (iVar1 != 1) {
        do {
          iVar3 = uVar4 + 1;
          iVar2 = uVar4 * 0x18;
          uVar4 = uVar4 + 1;
          *(int *)(iVar2 + iVar5 + 0x10) = iVar3 * 0x18 + iVar5;
        } while (uVar4 < iVar1 - 1U);
      }
      uVar6 = uVar6 + 1;
      ar5 = uVar4 * 0x18 + iVar5;
    } while (uVar6 < *(uint *)(ar4 + 0x88));
  }
  if (ar5 != 0) {
    *(uint *)(ar5 + 0x10) = ar7;
  }
  *(undefined4 *)(ar4 + 0x8c) = **(undefined4 **)(ar4 + 0x84);
  *(uint *)(ar4 + 0x80) = ar7;
  return 0;
}

__asm__(".globl _FUN_8c112f48\n.set _FUN_8c112f48, _FUN_8c112f48_def\n");
