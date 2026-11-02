#include "../decls.h"
int FUN_8c11034c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int in_r0;
  int iVar1;
  uint uVar2;
  uint unaff_r10;
  int *unaff_r11;
  uint uVar3;
  
  iVar1 = *unaff_r11;
  uVar3 = 0;
  uVar2 = *(int *)(in_r0 + iVar1) * 8 +
          *(int *)(in_r0 + -0x38 + iVar1) * *(int *)(in_r0 + -0x3c + iVar1) * 2 +
          (*(int *)(in_r0 + -0x30 + iVar1) + 1) * 2 + *(int *)(in_r0 + -0x2c + iVar1) * 2 +
          (*(int *)(in_r0 + -0x28 + iVar1) + 1) * 2 + *(int *)(in_r0 + -0x24 + iVar1) * 4 +
          (int)0xd4;
  iVar1 = iVar1 + uVar2 + ((uVar2 * 2 ^ uVar2) & 3);
  if (unaff_r10 != 0) {
    do {
      uVar2 = FUN_8c1104d2(unaff_r11,iVar1,ar6,ar7);
      uVar3 = uVar3 + 1;
      iVar1 = iVar1 + uVar2 + ((uVar2 << 1 ^ uVar2) & 3);
    } while (uVar3 < unaff_r10);
  }
  return iVar1;
}

__asm__(".globl _FUN_8c11034c\n.set _FUN_8c11034c, _FUN_8c11034c_def\n");
