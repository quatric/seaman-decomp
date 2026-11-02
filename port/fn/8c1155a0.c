#include "../decls.h"
undefined4 FUN_8c1155a0_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  
  iVar8 = *ar4;
  uVar2 = (**(code **)(iVar8 + 0x10))(iVar8,(ar4[0xe] + 1) * 4);
  puVar1 = (&FUN_8c1204c4);
  *(undefined4 *)((int)0xa8 + (int)ar4) = uVar2;
  if (*(int *)((int)0xa8 + (int)ar4) != 0) {
    uVar2 = (**(code **)(iVar8 + 0x10))
                      (iVar8,(*(int *)((int)0x144 + (int)ar4) +
                             *(int *)((int)0xb4 + (int)ar4)) * 4);
    *(undefined4 *)((int)0xac + (int)ar4) = uVar2;
    if (*(int *)((int)0xac + (int)ar4) != 0) {
      if (*(int *)((int)0x124 + (int)ar4) == 0) {
        FUN_8c11318e(ar4,0);
      }
      piVar7 = *(int **)((int)0x9c + (int)ar4);
      piVar5 = piVar7 + *(int *)(0x9c + 0x18 + (int)ar4);
      iVar3 = 0;
      for (; piVar7 < piVar5; piVar7 = piVar7 + 1) {
        iVar4 = *(int *)((*piVar7 + 1) * 4 + ar4[0x11]) - *(int *)(*piVar7 * 4 + ar4[0x11]);
        if (iVar4 < 0) {
          iVar4 = iVar4 + 3;
        }
        iVar3 = iVar3 + (iVar4 >> 2);
      }
      iVar4 = (int)0xb8;
      *(int *)(iVar4 + (int)ar4) = iVar3;
      uVar2 = (**(code **)(iVar8 + 0x10))(iVar8,(ar4[0xe] + *(int *)(iVar4 + (int)ar4) + 1) * 4);
      *(undefined4 *)((int)0xa0 + (int)ar4) = uVar2;
      iVar8 = (int)0xb8;
      *(int *)(iVar8 + -0x14 + (int)ar4) =
           (ar4[0xe] + *(int *)(iVar8 + (int)ar4) + 1) * 4 + *(int *)(iVar8 + -0x18 + (int)ar4);
      if (*(int *)(iVar8 + -0x18 + (int)ar4) != 0) {
        uVar6 = 0;
        iVar8 = ar4[0xe] * 4 + *(int *)((int)0xa0 + (int)ar4);
        if (ar4[0xe] != 0) {
          do {
            iVar3 = (int)0x98;
            *(int *)(*(int *)((int)0xa0 + (int)ar4) + uVar6 * 4) = iVar8;
            for (piVar7 = *(int **)(*(int *)(iVar3 + (int)ar4) + uVar6 * 4);
                piVar7 < *(int **)((uVar6 + 1) * 4 + *(int *)(iVar3 + (int)ar4));
                piVar7 = piVar7 + 1) {
              iVar4 = *(int *)((*piVar7 + 1) * 4 + ar4[0x11]) - *(int *)(*piVar7 * 4 + ar4[0x11]);
              if (iVar4 < 0) {
                iVar4 = iVar4 + 3;
              }
              iVar8 = iVar8 + (iVar4 >> 2) * 4;
            }
            uVar6 = uVar6 + 1;
          } while (uVar6 < (uint)ar4[0xe]);
        }
        return 0;
      }
    }
  }
  uVar2 = (*(code *)puVar1)(ar4,0x71);
  return uVar2;
}

__asm__(".globl _FUN_8c1155a0\n.set _FUN_8c1155a0, _FUN_8c1155a0_def\n");
