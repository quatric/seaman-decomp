#include "../decls.h"
undefined4 * FUN_8c11c5e4_def(int ar4,undefined4 *ar5,int ar6,int ar7,undefined4 s0)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int a6;
  int a7;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  bool bVar10;
  uint uVar11;
  
  iVar7 = 0;
  iVar5 = **(int **)(0x230 + ar4);
  a6 = ar6;
  a7 = ar7;
  piVar1 = (int *)(**(code **)(*(int *)(0xfc + ar4) + 0x14))(0xc,0xf4 + ar4,ar6,ar7)
  ;
  *ar5 = piVar1;
  puVar2 = (undefined4 *)(int)0x13c;
  if (*(uint *)(ar4 + 0x78) < *(uint *)((int)puVar2 + ar4)) {
    piVar1[2] = 2;
  }
  else {
    piVar1[2] = 0;
  }
  if (ar6 == 0) {
    *piVar1 = 0;
    piVar1[1] = 0;
  }
  else {
    bVar10 = true;
    iVar9 = ar6;
    while (bVar10) {
      iVar9 = *(int *)(iVar9 + 0x10);
      bVar10 = iVar9 != 0;
      iVar7 = iVar7 + 1;
    }
    piVar3 = (int *)(**(code **)(*(int *)(0xfc + ar4) + 0x14))
                              (iVar7 * 0x18,0xf4 + ar4,a6,a7);
    *piVar1 = iVar7;
    piVar1[1] = (int)piVar3;
    puVar2 = (undefined4 *)(uint)(ar7 == 0);
    for (; ar6 != 0; ar6 = *(int *)(ar6 + 0x10)) {
      piVar1 = *(int **)(ar6 + 0xc);
      iVar7 = 0;
      uVar6 = iVar5 * 0x6e;
      if ((char)s0 == '\0') {
        uVar6 = 0;
      }
      for (; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[4]) {
        if (((undefined4 *)(uint)(ar7 == 0) != (undefined4 *)0x0) ||
           (*(int *)(*piVar1 * 8 + ar7) != -1)) {
          iVar7 = iVar7 + 1;
        }
      }
      puVar2 = (undefined4 *)
               (**(code **)(*(int *)(0xfc + ar4) + 0x14))
                         (iVar7 << 4,0xf4 + ar4,a6,a7);
      *piVar3 = iVar7;
      piVar3[1] = *(int *)(ar6 + 4);
      piVar3[2] = *(int *)(ar6 + 8);
      piVar3[3] = -1;
      piVar3[5] = (int)puVar2;
      puVar8 = puVar2;
      for (piVar1 = *(int **)(ar6 + 0xc); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[4]) {
        if ((char)s0 == '\0') {
          uVar11 = (uint)*(ushort *)(piVar1 + 5);
        }
        else {
          uVar11 = ((uint)*(ushort *)(piVar1 + 5) + iVar5) * 0x6e;
        }
        if ((ar7 == 0) ||
           (puVar2 = *(undefined4 **)(*piVar1 * 8 + ar7), puVar2 != (undefined4 *)0xffffffff)) {
          piVar4 = (int *)(**(code **)(*(int *)(0xfc + ar4) + 0x14))
                                    (0xc,0xf4 + ar4,a6,a7);
          puVar2 = (undefined4 *)piVar3[3];
          if (puVar2 == (undefined4 *)0xffffffff) {
            piVar3[3] = uVar6;
          }
          *puVar8 = 1;
          puVar8[1] = uVar6;
          puVar8[2] = uVar11;
          puVar8[3] = piVar4;
          *piVar4 = piVar1[1];
          piVar4[1] = piVar1[2];
          if (ar7 == 0) {
            piVar4[2] = *piVar1;
          }
          else {
            piVar4[2] = *(int *)(*piVar1 * 8 + ar7);
          }
          puVar8 = puVar8 + 4;
        }
        uVar6 = uVar11;
      }
      piVar3[4] = uVar6;
      piVar3 = piVar3 + 6;
    }
  }
  return puVar2;
}

__asm__(".globl _FUN_8c11c5e4\n.set _FUN_8c11c5e4, _FUN_8c11c5e4_def\n");
