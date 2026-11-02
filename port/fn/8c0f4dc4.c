#include "../decls.h"
int FUN_8c0f4dc4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar2 = *(int *)(0x104 + ar4);
  if (*(int *)(0x104 + ar4) != 3) {
    puVar3 = (undefined4 *)(ar4 + *(int *)(0x104 + ar4) * 8 + 0xec);
    *puVar3 = 1;
    puVar3[1] = ar5;
    *(int *)(0x104 + ar4) = *(int *)(0x104 + ar4) + 1;
    iVar1 = 0x104;
    iVar2 = 3;
    if (3 < *(int *)(0x104 + ar4)) {
      *(undefined4 *)(0x104 + ar4) = 3;
      iVar2 = iVar1;
    }
  }
  return iVar2;
}

__asm__(".globl _FUN_8c0f4dc4\n.set _FUN_8c0f4dc4, _FUN_8c0f4dc4_def\n");
