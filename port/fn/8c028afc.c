#include "../decls.h"
undefined4 FUN_8c028afc_def(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int ar7_00;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(0x328 + ar4) + ar6 * 0x124;
  ar7_00 = ar4 + ar6;
  for (iVar3 = 0; iVar3 < *(short *)(0xa4 + iVar2); iVar3 = iVar3 + 1) {
    if (**(char **)(iVar3 * 4 + *(int *)(iVar2 + 4)) != '\0') {
      (*(code *)(&FUN_8c020c60))
                (ar5,*(undefined4 *)(iVar3 * 4 + *(int *)(iVar2 + 4)),
                 *(undefined4 *)(0x410 + ar4),ar7_00);
    }
    if (**(char **)(iVar3 * 4 + *(int *)(iVar2 + 8)) != '\0') {
      (*(code *)(&FUN_8c020d58))
                (ar5,*(undefined4 *)(iVar3 * 4 + *(int *)(iVar2 + 8)),
                 *(undefined4 *)(0x410 + ar4),ar7_00);
    }
  }
  iVar3 = ar7_00;
  (*(code *)(&FUN_8c020a70))
            (ar5,*(undefined4 *)(iVar2 + 0xc),*(undefined4 *)(0x410 + ar4),ar7_00);
  if (*(int *)(iVar2 + 0x20) == 0) {
    iVar3 = ar7_00;
    (*(code *)(&FUN_8c020b68))
              (ar5,*(undefined4 *)(iVar2 + 0xc),*(undefined4 *)(0x410 + ar4),ar7_00);
  }
  if (*(int *)(iVar2 + 0x18) != 0) {
    (*(code *)(&FUN_8c020e48))
              (ar5,*(undefined4 *)(iVar2 + 0x18),*(undefined4 *)(0x410 + ar4),ar7_00);
    iVar3 = ar7_00;
  }
  uVar1 = (**(code **)(0xf0 + *(int *)(ar4 + 8)))(ar4,ar5,ar6,iVar3);
  return uVar1;
}

__asm__(".globl _FUN_8c028afc\n.set _FUN_8c028afc, _FUN_8c028afc_def\n");
