#include "../decls.h"
undefined4 FUN_8c0e8598_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 ar6_00;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar5 = 0;
  iVar4 = 0;
  for (iVar6 = 0; iVar6 < 3; iVar6 = iVar6 + 1) {
    for (iVar7 = 0; iVar7 < 4; iVar7 = iVar7 + 1) {
      if (*(int *)(iVar5 * 0x80 + ar5) != -1) {
        ar6_00 = *(undefined4 *)(ar5 + iVar5 * 0x80 + 0x2c);
        uVar1 = (*(code *)(&s_Shell_0fef9c))
                          (0x8c3eb324,*(undefined4 *)(iVar5 * 0x80 + ar5),ar6_00,ar7);
        *(undefined4 *)(0xa4 + ar4 + iVar6 * 0x80 + iVar7 * 0x20) = uVar1;
        if (*(int *)(iVar5 * 0x80 + ar5) == 0xf) {
          iVar3 = ar5 + iVar5 * 0x80;
          iVar2 = *(int *)(0xa4 + ar4 + iVar6 * 0x80 + iVar7 * 0x20);
          (**(code **)(0x108 + *(int *)(iVar2 + 8)))(iVar2,iVar3,ar6_00,ar7);
          iVar2 = *(int *)(0xa4 + ar4 + iVar6 * 0x80 + iVar7 * 0x20);
          uVar1 = (**(code **)(0x148 + *(int *)(iVar2 + 8)))(iVar2,iVar3,ar6_00,ar7);
          iVar3 = (int)(short)uVar1;
          iVar2 = *(int *)(0xa4 + ar4 + iVar6 * 0x80 + iVar7 * 0x20);
          (**(code **)(0xe0 + *(int *)(iVar2 + 8)))(iVar2,0x8c3eb334,iVar3,ar7);
        }
        else {
          iVar3 = ar5 + iVar5 * 0x80;
          iVar2 = *(int *)(0xa4 + ar4 + iVar6 * 0x80 + iVar7 * 0x20);
          (**(code **)(0x108 + *(int *)(iVar2 + 8)))(iVar2,iVar3,ar6_00,ar7);
          iVar2 = *(int *)(0xa4 + ar4 + iVar6 * 0x80 + iVar7 * 0x20);
          uVar1 = (**(code **)(0x148 + *(int *)(iVar2 + 8)))(iVar2,iVar3,ar6_00,ar7);
          iVar3 = (int)(short)uVar1;
          iVar2 = *(int *)(0xa4 + ar4 + iVar6 * 0x80 + iVar7 * 0x20);
          uVar1 = 0x8c3eb334;
          (**(code **)(0xe0 + *(int *)(iVar2 + 8)))(iVar2,0x8c3eb334,iVar3,ar7);
          iVar2 = *(int *)(0xa4 + ar4 + iVar6 * 0x80 + iVar7 * 0x20);
          (**(code **)(*(int *)(iVar2 + 8) + 0x5c))(iVar2,uVar1,iVar3,ar7);
          (*(code *)(&FUN_8c0d6fb8))
                    (ar4 + iVar6 * 0x80 + iVar7 * 0x20 + 0xa4,uVar1,iVar3,ar7);
        }
        (*(code *)(&FUN_8c0c4da0))
                  (ar4,*(undefined4 *)(0xa4 + ar4 + iVar6 * 0x80 + iVar7 * 0x20),iVar3,ar7);
        iVar4 = iVar4 + 1;
      }
      iVar5 = iVar5 + 1;
    }
  }
  *(int *)(0x410 + ar4) = iVar4;
  return 1;
}

__asm__(".globl _FUN_8c0e8598\n.set _FUN_8c0e8598, _FUN_8c0e8598_def\n");
