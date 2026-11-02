#include "../decls.h"
undefined4 FUN_8c11189a_def(int ar4,int ar5,int ar6,undefined4 ar7)

{
  int iVar1;
  uint uVar2;
  int *ain0;
  int iVar3;
  uint ar6_00;
  
  if (ar6 != 0) {
    iVar3 = ar5 * 4;
    ar6_00 = ar6 * (uint)*(ushort *)(ar4 + 0xc);
    uVar2 = *(int *)(ar4 + 0x24) - *(int *)(*(int *)(ar4 + 0x2c) + iVar3);
    if (0x7fffffff < uVar2) {
      uVar2 = uVar2 + *(int *)(ar4 + 0x10);
    }
    if ((uVar2 == 0) && (*(int *)(*(int *)(ar4 + 0x40) + iVar3) == *(int *)(ar4 + 0x3c))) {
      uVar2 = *(uint *)(ar4 + 0x10);
    }
    if (uVar2 < ar6_00) {
      return 0;
    }
    if (ar6_00 == uVar2) {
      *(undefined1 *)(ar4 + 0x30) = 1;
    }
    ain0 = (int *)(*(int *)(ar4 + 0x2c) + iVar3);
    iVar1 = *(int *)(ar4 + 0x1c);
    uVar2 = (*ain0 - iVar1) - ar6_00;
    if (0x7fffffff < uVar2) {
      iVar1 = *(int *)(ar4 + 0x20);
    }
    *ain0 = iVar1 + uVar2;
    *(int *)(*(int *)(ar4 + 0x40) + iVar3) = *(int *)(*(int *)(ar4 + 0x40) + iVar3) - ar6;
    if (*(int *)(ar4 + 0x14) == 1) {
      *(undefined4 *)(ar4 + 0x28) = *(undefined4 *)(*(int *)(ar4 + 0x2c) + iVar3);
    }
    else {
      FUN_8c111342(ar4,uVar2,ar6_00,ar6,ain0);
    }
  }
  return 1;
}

__asm__(".globl _FUN_8c11189a\n.set _FUN_8c11189a, _FUN_8c11189a_def\n");
