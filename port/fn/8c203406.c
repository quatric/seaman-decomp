#include "../decls.h"
undefined4 FUN_8c203406_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined2 *puVar2;
  undefined1 *ar5_00;
  undefined1 *ar6_00;
  int *unaff_r13;
  int iVar3;
  undefined4 in_PR;
  
  iVar1 = unaff_r13[2];
  while (iVar1 != 0) {
    iVar3 = *(int *)(iVar1 + 8);
    FUN_8c204e6c(iVar1,ar5,ar6,ar7,in_PR);
    iVar1 = iVar3;
  }
  iVar1 = *unaff_r13;
  while (iVar1 != 0) {
    iVar3 = *(int *)(iVar1 + 8);
    FUN_8c204e6c(iVar1,ar5,ar6,ar7,in_PR);
    iVar1 = iVar3;
  }
  iVar1 = unaff_r13[7];
  while (iVar1 != 0) {
    iVar3 = *(int *)(iVar1 + 8);
    FUN_8c204e6c(iVar1,ar5,ar6,ar7,in_PR);
    iVar1 = iVar3;
  }
  iVar1 = unaff_r13[5];
  while (iVar1 != 0) {
    iVar3 = *(int *)(iVar1 + 8);
    FUN_8c204e6c(iVar1,ar5,ar6,ar7,in_PR);
    iVar1 = iVar3;
  }
  ar6_00 = &DAT_8c47eba8;
  ar5_00 = &DAT_8c496ba8;
  puVar2 = (undefined2 *)&DAT_8c47eba8;
  do {
    *puVar2 = 0;
    puVar2 = puVar2 + 0xc;
  } while (puVar2 < &DAT_8c496ba8);
  *unaff_r13 = 0;
  unaff_r13[1] = 0;
  unaff_r13[2] = 0;
  unaff_r13[3] = 0;
  unaff_r13[4] = 0;
  unaff_r13[5] = 0;
  unaff_r13[6] = 0;
  unaff_r13[7] = 0;
  unaff_r13[8] = 0;
  unaff_r13[9] = 0;
  iVar1 = DAT_8c275428;
  while (iVar1 != 0) {
    iVar3 = *(int *)(iVar1 + 4);
    FUN_8c2057c0(iVar1,ar5_00,ar6_00,ar7,in_PR);
    iVar1 = iVar3;
  }
  DAT_8c275428 = 0;
  return 0;
}

__asm__(".globl _FUN_8c203406\n.set _FUN_8c203406, _FUN_8c203406_def\n");
