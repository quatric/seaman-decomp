#include "../decls.h"
int FUN_8c11f7d6_def(undefined4 ar4,int ar5,int ar6,undefined4 ar7)

{
  int in_r0;
  int iVar1;
  int *piVar2;
  undefined2 *puVar3;
  uint uVar4;
  undefined4 a6;
  int iVar5;
  int unaff_r11;
  int *piVar6;
  int iVar7;
  int unaff_r13;
  int unaff_r14;
  
  iVar5 = *(int *)(in_r0 + unaff_r13);
  iVar1 = (int)0x2b0;
  piVar6 = (int *)(unaff_r11 * 4 + *(int *)(iVar1 + unaff_r13) + ar6 * 4);
  if ((ar5 == 0) && (ar6 == 0)) {
    uVar4 = 0;
    iVar7 = 0;
    a6 = 3;
    piVar2 = (int *)(0x268 + unaff_r13);
    do {
      uVar4 = uVar4 + 3;
      iVar7 = iVar7 + *piVar2 + piVar2[2] + piVar2[4] + 6;
      piVar2 = piVar2 + 6;
    } while (uVar4 < 3);
    if (**(int **)(iVar1 + unaff_r13) != 0) {
      (**(code **)(iVar5 + 0x18))
                (**(undefined4 **)(iVar1 + unaff_r13),0xf4 + unaff_r13,3,ar7);
    }
    piVar2 = *(int **)(0x2b0 + unaff_r13);
    iVar1 = (**(code **)(iVar5 + 0x14))(iVar7 * 6,0xf4 + unaff_r13,a6,ar7);
    *piVar2 = iVar1;
  }
  puVar3 = (undefined2 *)*piVar6;
  if (unaff_r14 == 0) {
    *puVar3 = (short)0xffff;
  }
  else {
    for (; unaff_r14 != 0; unaff_r14 = *(int *)(unaff_r14 + 4)) {
      *puVar3 = (short)*(undefined4 *)(unaff_r14 + 0x14);
      puVar3 = puVar3 + 1;
    }
  }
  piVar6[1] = (int)puVar3;
  return iVar1;
}

__asm__(".globl _FUN_8c11f7d6\n.set _FUN_8c11f7d6, _FUN_8c11f7d6_def\n");
