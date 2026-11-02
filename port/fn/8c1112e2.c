#include "../decls.h"
uint FUN_8c1112e2_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  
  piVar4 = *(int **)(ar4 + 0xc);
  uVar2 = 0;
  uVar3 = 0;
  if (*(char *)(ar4 + 8) != '\0') {
    do {
      if ((*(int *)(*piVar4 + 0x38) != 0) &&
         (*(int *)(*(int *)(*piVar4 + 0x2c) + piVar4[1] * 4) != 0)) {
        uVar1 = FUN_8c111208(*piVar4,piVar4[1],0,ar7);
        uVar2 = uVar2 | uVar1;
      }
      uVar3 = uVar3 + 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 < *(byte *)(ar4 + 8));
  }
  return uVar2;
}

__asm__(".globl _FUN_8c1112e2\n.set _FUN_8c1112e2, _FUN_8c1112e2_def\n");
