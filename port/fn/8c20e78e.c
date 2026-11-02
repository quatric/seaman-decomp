#include "../decls.h"
int FUN_8c20e78e_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = *ar4;
  iVar4 = ar4[1];
  iVar2 = ar4[2];
  if ((((*(int *)(iVar3 + 8) == 0) &&
       (((*(int *)(iVar3 + 0x20) == 2 || (*(int *)(iVar3 + 0x20) == 3)) &&
        (*(int *)(iVar3 + 0x54) == 1)))) &&
      (((*(int *)(iVar3 + 0x2c) == 10 && (*(int *)(iVar3 + 0x30) == 0xb)) &&
       (*(int *)(iVar3 + 0x34) == 0)))) && (*(int *)(iVar3 + 0x38) == 0)) {
    *(undefined4 *)(iVar4 + 8) = 2;
    *(undefined4 *)(iVar4 + 0x54) = 3;
    *(undefined4 *)(iVar4 + 0x2c) = 10;
    *(undefined4 *)(iVar4 + 0x30) = 10;
    *(undefined4 *)(iVar4 + 0x34) = 0;
    *(undefined4 *)(iVar4 + 0x38) = 0;
  }
  iVar1 = *(int *)(iVar3 + 8);
  if ((((iVar1 == 2) &&
       ((*(int *)(iVar3 + 0x20) == 2 || (iVar1 = *(int *)(iVar3 + 0x20), iVar1 == 3)))) &&
      (iVar1 = *(int *)(iVar3 + 0x54), iVar1 == 1)) &&
     ((((iVar1 = *(int *)(iVar3 + 0x2c), iVar1 == 10 &&
        (iVar1 = *(int *)(iVar3 + 0x30), iVar1 == 0xb)) && (*(int *)(iVar3 + 0x34) == 0)) &&
      (iVar1 = *(int *)(iVar3 + 0x38), iVar1 == 1)))) {
    *(undefined4 *)(iVar4 + 8) = 2;
    iVar1 = 0x54;
    *(undefined4 *)(iVar4 + 0x54) = 3;
    *(undefined4 *)(iVar4 + 0x2c) = 10;
    *(undefined4 *)(iVar4 + 0x30) = 10;
    *(undefined4 *)(iVar4 + 0x34) = 0;
    *(undefined4 *)(iVar4 + 0x38) = 1;
    *(undefined4 *)(iVar2 + 8) = 2;
    *(undefined4 *)(iVar2 + 0x54) = 3;
    *(undefined4 *)(iVar2 + 0x2c) = 8;
    *(undefined4 *)(iVar2 + 0x30) = 6;
    *(undefined4 *)(iVar2 + 0x34) = 1;
    *(undefined4 *)(iVar2 + 0x38) = 0;
  }
  return iVar1;
}

__asm__(".globl _FUN_8c20e78e\n.set _FUN_8c20e78e, _FUN_8c20e78e_def\n");
