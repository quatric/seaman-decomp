#include "../decls.h"
uint FUN_8c1112ee_def(uint ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  int unaff_r12;
  uint uVar2;
  int *piVar3;
  
  piVar3 = *(int **)(unaff_r12 + 0xc);
  uVar2 = ar4;
  if (ar4 < *(byte *)(unaff_r12 + 8)) {
    do {
      if ((*(int *)(*piVar3 + 0x38) != 0) &&
         (*(int *)(*(int *)(*piVar3 + 0x2c) + piVar3[1] * 4) != 0)) {
        uVar1 = FUN_8c111208(*piVar3,piVar3[1],0,ar7);
        ar4 = ar4 | uVar1;
      }
      uVar2 = uVar2 + 1;
      piVar3 = piVar3 + 2;
    } while (uVar2 < *(byte *)(unaff_r12 + 8));
  }
  return ar4;
}

__asm__(".globl _FUN_8c1112ee\n.set _FUN_8c1112ee, _FUN_8c1112ee_def\n");
