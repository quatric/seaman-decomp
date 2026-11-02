#include "../decls.h"
undefined4 FUN_8c20e480_def(int ar4,int ar5,int *ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  
  piVar4 = (int *)(ar5 * 4 + ar4);
  iVar2 = piVar4[1];
  iVar3 = *piVar4;
  iVar5 = piVar4[2];
  if ((DAT_8c275798 == 2) || (DAT_8c275798 == 3)) {
    if (((*(int *)(iVar3 + 8) == 0) &&
        (((((*(int *)(iVar3 + 0x20) == 2 || (*(int *)(iVar3 + 0x20) == 3)) &&
           (*(int *)(iVar3 + 0x54) == 1)) &&
          ((*(int *)(iVar3 + 0x2c) == 10 && (*(int *)(iVar3 + 0x30) == 0xb)))) &&
         (*(int *)(iVar3 + 0x34) == 0)))) && (*(int *)(iVar3 + 0x38) == 0)) {
      if (iVar2 != 0) {
        if (((*(int *)(iVar2 + 8) != 2) ||
            ((*(int *)(iVar2 + 0x20) != 2 && (*(int *)(iVar2 + 0x20) != 3)))) ||
           ((*(int *)(iVar2 + 0x54) != 3 ||
            ((((*(int *)(iVar2 + 0x2c) != 10 || (*(int *)(iVar2 + 0x30) != 10)) ||
              (*(int *)(iVar2 + 0x34) != 0)) || (*(int *)(iVar2 + 0x38) != 0))))))
        goto LAB_8c20e580;
        goto LAB_8c20e514;
      }
LAB_8c20e5bc:
      *ar6 = ar5 + 2;
    }
    else {
LAB_8c20e514:
      if ((((*(int *)(iVar3 + 8) != 2) ||
           ((*(int *)(iVar3 + 0x20) != 2 && (*(int *)(iVar3 + 0x20) != 3)))) ||
          (*(int *)(iVar3 + 0x54) != 1)) ||
         (((*(int *)(iVar3 + 0x2c) != 10 || (*(int *)(iVar3 + 0x30) != 0xb)) ||
          ((*(int *)(iVar3 + 0x34) != 0 || (*(int *)(iVar3 + 0x38) != 1)))))) goto LAB_8c20e600;
      if (iVar2 == 0) goto LAB_8c20e5bc;
      if (((*(int *)(iVar2 + 8) != 2) ||
          (((*(int *)(iVar2 + 0x20) != 2 && (*(int *)(iVar2 + 0x20) != 3)) ||
           (*(int *)(iVar2 + 0x54) != 3)))) ||
         (((*(int *)(iVar2 + 0x2c) != 10 || (*(int *)(iVar2 + 0x30) != 10)) ||
          ((*(int *)(iVar2 + 0x34) != 0 || (*(int *)(iVar2 + 0x38) != 1)))))) {
LAB_8c20e580:
        *ar6 = ar5 + 2;
        return 0xc;
      }
      if (iVar5 != 0) {
        if (((*(int *)(iVar5 + 8) != 2) ||
            ((*(int *)(iVar5 + 0x20) != 2 && (*(int *)(iVar5 + 0x20) != 3)))) ||
           ((*(int *)(iVar5 + 0x54) != 3 ||
            ((*(int *)(iVar5 + 0x34) != 1 || (*(int *)(iVar5 + 0x38) != 0)))))) {
          *ar6 = ar5 + 3;
          return 0xc;
        }
        goto LAB_8c20e600;
      }
      *ar6 = ar5 + 3;
    }
    uVar1 = 1;
  }
  else {
LAB_8c20e600:
    uVar1 = 0;
  }
  return uVar1;
}

__asm__(".globl _FUN_8c20e480\n.set _FUN_8c20e480, _FUN_8c20e480_def\n");
