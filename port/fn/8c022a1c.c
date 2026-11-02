#include "../decls.h"
undefined4 FUN_8c022a1c_def(int ar4,int ar5,undefined2 *ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  int *ar6_00;
  int *piVar3;
  uint uStack_18;
  int aiStack_14 [2];
  undefined1 *puStack_c;
  
  puStack_c = &DAT_8c4366c0;
  *ar6 = 0;
  piVar3 = (int *)(ar4 + ar5 * 0x208e0 + 0x2d150);
  iVar1 = *piVar3;
  if (iVar1 == 0) {
LAB_8c022adc:
    uVar2 = 0;
  }
  else {
    if (iVar1 != 1) {
      if (iVar1 == 2) {
        iVar1 = FUN_8c263cd4(piVar3[1],ar5,ar6,ar7);
        if (iVar1 != 1) {
          if ((iVar1 == 2) || (iVar1 == 3)) {
            ar6_00 = aiStack_14;
            FUN_8c263cd8(piVar3[1],&uStack_18,ar6_00,ar7);
            if (0 < (int)uStack_18) {
              if ((uint)piVar3[5] < uStack_18) {
                piVar3[6] = 0;
              }
              else {
                piVar3[6] = piVar3[6] + 1;
                if (4 < (uint)piVar3[6]) {
                  piVar3[6] = 0;
                  return 1;
                }
              }
            }
            piVar3[5] = uStack_18;
            if (piVar3[3] == 0) {
              return 2;
            }
            if ((uint)piVar3[3] <= (uint)piVar3[4]) {
              return 2;
            }
            aiStack_14[0] =
                 libgcc_divide_helper_0101e4(aiStack_14[0],0x1e,ar6_00,ar7);
            aiStack_14[0] = aiStack_14[0] * 5;
            iVar1 = (*(code *)(&libgcc_divide_helper_0101e4))
                              (uStack_18,aiStack_14[0],ar6_00,ar7);
            if (piVar3[4] + 1U <= iVar1 + 3U) {
              *ar6 = *(undefined2 *)(piVar3[4] * 2 + piVar3[2]);
              piVar3[4] = piVar3[4] + 1;
              return 3;
            }
            return 2;
          }
          if (iVar1 != 4) {
            return 1;
          }
        }
        return 2;
      }
      if (iVar1 != 3) goto LAB_8c022adc;
    }
    uVar2 = 2;
  }
  return uVar2;
}

__asm__(".globl _FUN_8c022a1c\n.set _FUN_8c022a1c, _FUN_8c022a1c_def\n");
