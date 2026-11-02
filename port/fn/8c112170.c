#include "../decls.h"
uint FUN_8c112170_def(int *ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int *piVar1;
  uint uVar2;
  int *piVar3;
  int *piVar4;
  bool bVar5;
  undefined4 uVar6;
  
  uVar6 = 0;
  piVar4 = ar4 + ar5 * 2;
  bVar5 = true;
  for (piVar3 = ar4; piVar3 < piVar4; piVar3 = piVar3 + 2) {
    if (*(int *)(*(int *)(*piVar3 + 0x2c) + piVar3[1] * 4) != 0) {
      bVar5 = *(int *)(*(int *)(*piVar3 + 0x40) + piVar3[1] * 4) == *(int *)(*piVar3 + 0x3c);
      break;
    }
  }
  do {
    piVar1 = piVar3;
    piVar3 = piVar1 + 2;
    if (piVar4 <= piVar3) break;
  } while ((*(int *)(*(int *)(*piVar3 + 0x2c) + piVar1[3] * 4) == 0) ||
          (bVar5 == (*(int *)(*(int *)(*piVar3 + 0x40) + piVar1[3] * 4) == *(int *)(*piVar3 + 0x3c))
          ));
  if (piVar3 == piVar4) {
    if (bVar5 != false) {
      for (; ar4 < piVar4; ar4 = ar4 + 2) {
        if ((*(int *)(*ar4 + 0x38) != 0) && (*(int *)(*(int *)(*ar4 + 0x2c) + ar4[1] * 4) != 0)) {
          FUN_8c111208(*ar4,ar4[1],0,uVar6);
        }
      }
    }
    uVar2 = (uint)(bVar5 == false);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

__asm__(".globl _FUN_8c112170\n.set _FUN_8c112170, _FUN_8c112170_def\n");
