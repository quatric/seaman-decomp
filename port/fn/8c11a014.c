#include "../decls.h"
undefined4 * FUN_8c11a014_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  puVar4 = *(undefined4 **)(0x114 + ar4);
  puVar1 = (undefined4 *)0x0;
  for (; ar5 != 0; ar5 = *(int *)(ar5 + 8)) {
    puVar5 = *(undefined4 **)(0x114 + ar4);
    if (puVar5[1] == 0) {
      uVar2 = FUN_8c112fd8(ar4,puVar5);
      *(undefined4 *)(0x114 + ar4) = uVar2;
    }
    else {
      *(undefined4 *)(0x114 + ar4) = puVar5[1];
    }
    puVar5[4] = *(undefined4 *)(ar5 + 0x10);
    *puVar5 = 1;
    puVar5[3] = *(undefined4 *)(ar5 + 0xc);
    puVar5[5] = *(undefined4 *)(ar5 + 0x14);
    piVar3 = *(int **)(ar5 + 4);
    puVar5[1] = piVar3;
    *piVar3 = *piVar3 + 1;
    puVar5[2] = 0;
    if (puVar1 != (undefined4 *)0x0) {
      puVar1[2] = puVar5;
    }
    puVar1 = puVar5;
  }
  *puVar4 = 0;
  return puVar4;
}

__asm__(".globl _FUN_8c11a014\n.set _FUN_8c11a014, _FUN_8c11a014_def\n");
