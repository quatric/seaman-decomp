#include "../decls.h"
undefined4 FUN_8c10fa6c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  uint uVar2;
  
  *(undefined4 *)(ar4 + 0x28) = 0;
  *(undefined2 *)(ar4 + 0x30) = 0;
  *(undefined4 *)(ar4 + 0x40) = *(undefined4 *)(ar4 + 0x34);
  *(undefined4 *)(ar4 + 0x3c) = *(undefined4 *)(ar4 + 0x34);
  uVar2 = 0;
  if (*(int *)(ar4 + 0x78) != 0) {
    do {
      iVar1 = uVar2 * 4;
      uVar2 = uVar2 + 1;
      *(undefined4 *)(*(int *)(ar4 + 0x44) + iVar1) = 0;
    } while (uVar2 < *(uint *)(ar4 + 0x78));
  }
  *(undefined4 *)(ar4 + 0x48) = 0;
  *(undefined4 *)(ar4 + 0x4c) = 0;
  *(undefined4 *)(ar4 + 0x50) = 0;
  *(undefined4 *)(ar4 + 0x54) = 0;
  return 0x54;
}

__asm__(".globl _FUN_8c10fa6c\n.set _FUN_8c10fa6c, _FUN_8c10fa6c_def\n");
