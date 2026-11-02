#include "../decls.h"
undefined4 FUN_8c11c0e4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  uint uVar2;
  char *pcVar3;
  undefined4 uVar4;
  undefined4 a7;
  int *piVar5;
  undefined4 uVar6;
  
  if ((*(char *)(**(int **)(ar4 + 0x10) + 0x30) != '\x01') &&
     (uVar2 = FUN_8c112170(*(undefined4 *)(ar4 + 0xc),2,ar6,ar7), (uVar2 & 0xff) != 0
     )) {
    pcVar3 = (char *)(*(code *)(&FUN_8c111fbe))
                               (*(undefined4 *)(*(int *)(ar4 + 0xc) + 8),
                                *(undefined4 *)(*(int *)(ar4 + 0xc) + 0xc),ar6,ar7);
    uVar6 = (*(undefined4 **)(ar4 + 0xc))[1];
    uVar4 = FUN_8c111fbe(**(undefined4 **)(ar4 + 0xc),uVar6,ar6,ar7);
    puVar1 = (&FUN_8c111dfe);
    FUN_8c111dfe(**(undefined4 **)(ar4 + 0x10),uVar6,ar6,ar7);
    a7 = (*(code *)puVar1)(*(undefined4 *)(*(int *)(ar4 + 0x10) + 4),uVar6,ar6,ar7);
    uVar6 = (*(code *)puVar1)(*(undefined4 *)(*(int *)(ar4 + 0x10) + 8),uVar6,ar6,ar7);
    FUN_8c11bd6c(ar4,(int)*pcVar3,uVar4,a7);
    memmove(uVar6,*(undefined4 *)(ar4 + 0x30),*(int *)(ar4 + 0x54) << 2,a7);
  }
  piVar5 = *(int **)(ar4 + 0xc);
  if ((*(int *)(piVar5[1] * 4 + *(int *)(*piVar5 + 0x40)) == *(int *)(*piVar5 + 0x3c)) ||
     (*(int *)(*(int *)(piVar5[2] + 0x40) + piVar5[3] * 4) == *(int *)(piVar5[2] + 0x3c))) {
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
  }
  return uVar4;
}

__asm__(".globl _FUN_8c11c0e4\n.set _FUN_8c11c0e4, _FUN_8c11c0e4_def\n");
