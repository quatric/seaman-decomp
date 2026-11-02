#include "../decls.h"
undefined4 FUN_8c016464_def(int *ar4,undefined4 *ar5,undefined4 *ar6,int ar7)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  
  ar4[4] = ar7;
  if (ar4[4] == 1) {
    puVar2 = (undefined4 *)*ar4;
    uVar1 = ar5[1];
    *puVar2 = *ar5;
    puVar2[1] = uVar1;
    puVar2[2] = ar5[2];
    uVar1 = *ar6;
    *(undefined4 *)(uint)ar4[1] = uVar1;
    return uVar1;
  }
  if (ar4[4] == 2) {
    puVar2 = (undefined4 *)*ar4;
    uVar1 = ar5[1];
    *puVar2 = *ar5;
    puVar2[1] = uVar1;
    puVar2[2] = ar5[2];
    iVar3 = *ar4;
    uVar1 = ar5[4];
    *(undefined4 *)(iVar3 + 0xc) = ar5[3];
    *(undefined4 *)(iVar3 + 0x10) = uVar1;
    *(undefined4 *)(iVar3 + 0x14) = ar5[5];
    *(undefined4 *)(uint)ar4[1] = *ar6;
    uVar1 = ar6[1];
    *(undefined4 *)(ar4[1] + 4) = uVar1;
    return uVar1;
  }
  *ar4 = (int)ar5;
  ar4[1] = (int)ar6;
  return ar4[4];
}

__asm__(".globl _FUN_8c016464\n.set _FUN_8c016464, _FUN_8c016464_def\n");
