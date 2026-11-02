#include "../decls.h"
int FUN_8c111342_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int in_r0;
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  *(undefined4 *)(ar4 + 0x28) = *(undefined4 *)(ar4 + 0x24);
  if (*(int *)(ar4 + 0x14) != 0) {
    do {
      in_r0 = uVar2 * 4;
      if (*(int *)(in_r0 + *(int *)(ar4 + 0x40)) != *(int *)(ar4 + 0x3c)) {
        in_r0 = *(int *)(ar4 + 0x2c);
        iVar1 = uVar2 * 4;
        if (*(int *)(ar4 + 0x24) == *(int *)(in_r0 + iVar1)) {
          *(undefined4 *)(ar4 + 0x28) = *(undefined4 *)(ar4 + 0x24);
          break;
        }
        if (*(uint *)(ar4 + 0x24) < *(uint *)(ar4 + 0x28)) {
          in_r0 = *(int *)(ar4 + 0x2c);
          if ((*(uint *)(in_r0 + iVar1) < *(uint *)(ar4 + 0x28)) &&
             (*(uint *)(ar4 + 0x24) < *(uint *)(in_r0 + iVar1))) {
            in_r0 = *(int *)(ar4 + 0x2c);
            *(undefined4 *)(ar4 + 0x28) = *(undefined4 *)(in_r0 + iVar1);
          }
        }
        else {
          in_r0 = *(int *)(ar4 + 0x2c);
          if ((*(uint *)(in_r0 + iVar1) < *(uint *)(ar4 + 0x28)) ||
             (*(uint *)(ar4 + 0x24) < *(uint *)(in_r0 + iVar1))) {
            in_r0 = *(int *)(ar4 + 0x2c);
            *(undefined4 *)(ar4 + 0x28) = *(undefined4 *)(in_r0 + iVar1);
          }
        }
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)(ar4 + 0x14));
  }
  if (uVar2 == *(uint *)(ar4 + 0x14)) {
    in_r0 = 0x30;
    *(undefined1 *)(ar4 + 0x30) = 0;
  }
  return in_r0;
}

__asm__(".globl _FUN_8c111342\n.set _FUN_8c111342, _FUN_8c111342_def\n");
