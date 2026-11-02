#include "../decls.h"
undefined4 FUN_8c1117e4_def(int ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (*(uint *)(ar4 + 0x24) < *(uint *)(ar4 + 0x28)) {
    uVar3 = libgcc_divide_helper_010468
                      (*(int *)(ar4 + 0x28) - *(uint *)(ar4 + 0x24),(uint)*(ushort *)(ar4 + 0xc));
  }
  else {
    iVar1 = libgcc_divide_helper_01051c
                      (*(int *)(ar4 + 0x24) - *(int *)(ar4 + 0x28),(uint)*(ushort *)(ar4 + 0xc));
    uVar3 = *(int *)(ar4 + 8) - iVar1;
  }
  if (uVar3 < ar5) {
    return 0;
  }
  iVar1 = ar5 * *(ushort *)(ar4 + 0xc);
  uVar3 = *(int *)(ar4 + 0x28) - iVar1;
  *(uint *)(ar4 + 0x28) = uVar3;
  if (uVar3 < *(uint *)(ar4 + 0x1c)) {
    *(int *)(ar4 + 0x28) = *(int *)(ar4 + 0x28) + *(int *)(ar4 + 0x10);
  }
  uVar3 = 0;
  if (*(int *)(ar4 + 0x28) == *(int *)(ar4 + 0x24)) {
    *(undefined1 *)(ar4 + 0x30) = 1;
  }
  if (*(int *)(ar4 + 0x14) != 0) {
    do {
      if (*(int *)(uVar3 * 4 + *(int *)(ar4 + 0x2c)) != 0) {
        iVar2 = uVar3 * 4;
        *(int *)(*(int *)(ar4 + 0x2c) + iVar2) = *(int *)(*(int *)(ar4 + 0x2c) + iVar2) - iVar1;
        *(int *)(*(int *)(ar4 + 0x40) + iVar2) = *(int *)(*(int *)(ar4 + 0x40) + iVar2) - iVar1;
        if (*(uint *)(*(int *)(ar4 + 0x2c) + iVar2) < *(uint *)(ar4 + 0x1c)) {
          *(int *)(*(int *)(ar4 + 0x2c) + iVar2) =
               *(int *)(*(int *)(ar4 + 0x2c) + iVar2) + *(int *)(ar4 + 0x10);
        }
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(ar4 + 0x14));
  }
  return 1;
}

__asm__(".globl _FUN_8c1117e4\n.set _FUN_8c1117e4, _FUN_8c1117e4_def\n");
