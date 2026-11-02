#include "../decls.h"
int FUN_8c112b1c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  
  *(undefined2 *)(0x1be + ar4) = (undefined2)ar5;
  uVar1 = 0x80;
  iVar2 = (int)0xc0;
  if (*(int *)(iVar2 + ar4) != 0) {
    uVar3 = 0;
    if (*(int *)(ar4 + 0x38) != 0) {
      do {
        if ((*(ushort *)(uVar3 * 2 + *(int *)(0xc0 + ar4)) & uVar1) == 0) {
          iVar2 = *(int *)(0x1c0 + ar4);
          *(undefined2 *)(iVar2 + uVar3 * 2) = 0;
        }
        else {
          iVar2 = *(int *)(0x1c0 + ar4);
          *(undefined2 *)(iVar2 + uVar3 * 2) = (undefined2)ar5;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < *(uint *)(ar4 + 0x38));
    }
  }
  return iVar2;
}

__asm__(".globl _FUN_8c112b1c\n.set _FUN_8c112b1c, _FUN_8c112b1c_def\n");
