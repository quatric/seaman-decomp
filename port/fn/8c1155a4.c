#include "../decls.h"
undefined4 FUN_8c1155a4_def(undefined4 ar4,undefined4 ar5,int *ar6,int ar7)

{
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  uint uVar7;
  int iVar8;
  int *unaff_r14;
  
  iVar8 = *unaff_r14;
  uVar2 = (**(code **)(iVar8 + 0x10))(iVar8,(unaff_r14[0xe] + 1) * 4,ar6,ar7);
  puVar1 = (&FUN_8c1204c4);
  *(undefined4 *)((int)0xa8 + (int)unaff_r14) = uVar2;
  if (*(int *)((int)0xa8 + (int)unaff_r14) != 0) {
    uVar2 = (**(code **)(iVar8 + 0x10))
                      (iVar8,(*(int *)((int)0x144 + (int)unaff_r14) +
                             *(int *)((int)0xb4 + (int)unaff_r14)) * 4,ar6,ar7);
    *(undefined4 *)((int)0xac + (int)unaff_r14) = uVar2;
    if (*(int *)((int)0xac + (int)unaff_r14) != 0) {
      if (*(int *)((int)0x124 + (int)unaff_r14) == 0) {
        FUN_8c11318e(unaff_r14,0,ar6,ar7);
      }
      ar6 = *(int **)((int)0x9c + (int)unaff_r14);
      piVar6 = ar6 + *(int *)(0x9c + 0x18 + (int)unaff_r14);
      iVar3 = 0;
      for (piVar5 = ar6; piVar5 < piVar6; piVar5 = piVar5 + 1) {
        ar7 = *piVar5;
        ar6 = (int *)unaff_r14[0x11];
        iVar4 = ar6[ar7 + 1] - ar6[ar7];
        if (iVar4 < 0) {
          iVar4 = iVar4 + 3;
        }
        iVar3 = iVar3 + (iVar4 >> 2);
      }
      iVar4 = (int)0xb8;
      *(int *)(iVar4 + (int)unaff_r14) = iVar3;
      uVar2 = (**(code **)(iVar8 + 0x10))
                        (iVar8,(unaff_r14[0xe] + *(int *)(iVar4 + (int)unaff_r14) + 1) * 4,ar6,ar7);
      *(undefined4 *)((int)0xa0 + (int)unaff_r14) = uVar2;
      iVar8 = (int)0xb8;
      *(int *)(iVar8 + -0x14 + (int)unaff_r14) =
           (unaff_r14[0xe] + *(int *)(iVar8 + (int)unaff_r14) + 1) * 4 +
           *(int *)(iVar8 + -0x18 + (int)unaff_r14);
      if (*(int *)(iVar8 + -0x18 + (int)unaff_r14) != 0) {
        uVar7 = 0;
        iVar8 = unaff_r14[0xe] * 4 + *(int *)((int)0xa0 + (int)unaff_r14);
        if (unaff_r14[0xe] != 0) {
          do {
            iVar3 = (int)0x98;
            *(int *)(*(int *)((int)0xa0 + (int)unaff_r14) + uVar7 * 4) = iVar8;
            for (piVar5 = *(int **)(*(int *)(iVar3 + (int)unaff_r14) + uVar7 * 4);
                piVar5 < *(int **)((uVar7 + 1) * 4 + *(int *)(iVar3 + (int)unaff_r14));
                piVar5 = piVar5 + 1) {
              iVar4 = *(int *)((*piVar5 + 1) * 4 + unaff_r14[0x11]) -
                      *(int *)(*piVar5 * 4 + unaff_r14[0x11]);
              if (iVar4 < 0) {
                iVar4 = iVar4 + 3;
              }
              iVar8 = iVar8 + (iVar4 >> 2) * 4;
            }
            uVar7 = uVar7 + 1;
          } while (uVar7 < (uint)unaff_r14[0xe]);
        }
        return 0;
      }
    }
  }
  uVar2 = (*(code *)puVar1)(unaff_r14,0x71,ar6,ar7);
  return uVar2;
}

__asm__(".globl _FUN_8c1155a4\n.set _FUN_8c1155a4, _FUN_8c1155a4_def\n");
