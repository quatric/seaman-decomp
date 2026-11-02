#include "../decls.h"
undefined4 FUN_8c1f210e_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int *in_r3;
  int *ar4_00;
  int *ar5_00;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  undefined4 in_PR;
  
  iVar3 = *ar4;
  piVar5 = *(int **)(*in_r3 + 0x10);
  iVar4 = piVar5[1];
  iVar2 = iVar4;
  if (iVar3 < iVar4) {
    iVar2 = iVar3;
  }
  iVar6 = 0;
  piVar5[2] = ar4[2];
  ar4_00 = ar4 + 4;
  ar5_00 = piVar5 + 4;
  if (0 < iVar2) {
    do {
      FUN_8c1f2a5c(ar4_00,ar5_00,0x2c,ar7,in_PR);
      iVar6 = iVar6 + 1;
      ar4_00 = ar4_00 + 0xb;
      ar5_00 = ar5_00 + 0xb;
    } while (iVar6 < iVar2);
  }
  *piVar5 = iVar6;
  if (iVar4 < iVar3) {
    uVar1 = 0xfffffff4;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

__asm__(".globl _FUN_8c1f210e\n.set _FUN_8c1f210e, _FUN_8c1f210e_def\n");
