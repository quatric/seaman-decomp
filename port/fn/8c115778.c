#include "../decls.h"
int FUN_8c115778_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  *(undefined4 *)(0x1ac + ar4) = 0;
  *(undefined4 *)(ar4 + 0x68) = 0;
  *(undefined4 *)(ar4 + 0x6c) = 0;
  iVar1 = 100;
  *(undefined2 *)(ar4 + 100) = 0;
  uVar2 = 0;
  if ((*(uint *)(ar4 + 0x38) & 0x7fffffff) != 0) {
    do {
      uVar3 = uVar2 + 1;
      iVar1 = *(int *)(0xb0 + ar4);
      *(undefined4 *)(iVar1 + uVar2 * 4) = 0;
      uVar2 = uVar3;
    } while (uVar3 < (uint)(*(int *)(ar4 + 0x38) << 1));
  }
  return iVar1;
}

__asm__(".globl _FUN_8c115778\n.set _FUN_8c115778, _FUN_8c115778_def\n");
