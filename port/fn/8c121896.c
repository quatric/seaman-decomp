#include "../decls.h"
undefined4 FUN_8c121896_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  uint uVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 ar6_00;
  undefined4 ar7_00;
  
  uVar2 = FUN_8c112170(*(undefined4 *)(ar4 + 0xc),2,ar6,ar7);
  if ((uVar2 & 0xff) == 0) {
    return 0;
  }
  (*(code *)(&FUN_8c111fbe))
            (*(undefined4 *)(*(int *)(ar4 + 0xc) + 8),*(undefined4 *)(*(int *)(ar4 + 0xc) + 0xc),ar6
             ,ar7);
  uVar4 = (*(undefined4 **)(ar4 + 0xc))[1];
  FUN_8c111fbe(**(undefined4 **)(ar4 + 0xc),uVar4,ar6,ar7);
  *(int *)(ar4 + 0x40) = *(int *)(ar4 + 0x40) + 1;
  if (*(int *)(ar4 + 0x28) == 0) {
    uVar2 = FUN_8c12172e(ar4,uVar4,ar6,ar7);
    puVar1 = (&FUN_8c120348);
    if ((uVar2 & 0xff) != 0) {
      ar7_00 = 0;
      uVar4 = 10;
      *(int *)(ar4 + 0x3c) = *(int *)(ar4 + 0x40) - *(int *)(ar4 + 0x38);
      ar6_00 = *(undefined4 *)(ar4 + 0x38);
      uVar2 = (*(code *)puVar1)(ar4,10,ar6_00,0);
      if ((uVar2 & 0xff) != 0) {
        return 1;
      }
      if (*(char *)(ar4 + 0x4d) == '\0') {
        uVar2 = FUN_8c120798(ar4,uVar4,ar6_00,ar7_00);
        if ((uVar2 & 0xff) != 0) {
          return 1;
        }
      }
      else {
        *(undefined4 *)(ar4 + 0x28) = 1;
      }
    }
  }
  else if ((*(int *)(ar4 + 0x28) == 1) &&
          (uVar2 = FUN_8c12182e(ar4,uVar4,ar6,ar7), (uVar2 & 0xff) != 0)) {
    uVar2 = FUN_8c120348(ar4,0xb,*(undefined4 *)(ar4 + 0x40),0);
    if ((uVar2 & 0xff) != 0) {
      return 1;
    }
    *(undefined4 *)(ar4 + 0x28) = 2;
  }
  piVar3 = *(int **)(ar4 + 0xc);
  if ((*(int *)(piVar3[1] * 4 + *(int *)(*piVar3 + 0x40)) != *(int *)(*piVar3 + 0x3c)) &&
     (*(int *)(*(int *)(piVar3[2] + 0x40) + piVar3[3] * 4) != *(int *)(piVar3[2] + 0x3c))) {
    return 1;
  }
  return 0;
}

__asm__(".globl _FUN_8c121896\n.set _FUN_8c121896, _FUN_8c121896_def\n");
