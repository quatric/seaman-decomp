#include "../decls.h"
int FUN_8c11f7bc_def(int ar4,int ar5,int ar6,int ar7)

{
  int iVar1;
  int *piVar2;
  undefined2 *puVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  
  iVar5 = *(int *)(0xfc + ar4);
  iVar1 = (int)0x2b0;
  piVar6 = (int *)(ar5 * 0xc + *(int *)(iVar1 + ar4) + ar6 * 4);
  if ((ar5 == 0) && (ar6 == 0)) {
    uVar4 = 0;
    iVar7 = 0;
    piVar2 = (int *)(0x268 + ar4);
    do {
      uVar4 = uVar4 + 3;
      iVar7 = iVar7 + *piVar2 + piVar2[2] + piVar2[4] + 6;
      piVar2 = piVar2 + 6;
    } while (uVar4 < 3);
    if (**(int **)(iVar1 + ar4) != 0) {
      (**(code **)(iVar5 + 0x18))(**(undefined4 **)(iVar1 + ar4),0xf4 + ar4,0);
    }
    piVar2 = *(int **)(0x2b0 + ar4);
    iVar1 = (**(code **)(iVar5 + 0x14))(iVar7 * 6,0xf4 + ar4);
    *piVar2 = iVar1;
  }
  puVar3 = (undefined2 *)*piVar6;
  if (ar7 == 0) {
    *puVar3 = (short)0xffff;
  }
  else {
    for (; ar7 != 0; ar7 = *(int *)(ar7 + 4)) {
      *puVar3 = (short)*(undefined4 *)(ar7 + 0x14);
      puVar3 = puVar3 + 1;
    }
  }
  piVar6[1] = (int)puVar3;
  return iVar1;
}

__asm__(".globl _FUN_8c11f7bc\n.set _FUN_8c11f7bc, _FUN_8c11f7bc_def\n");
