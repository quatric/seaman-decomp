#include "../decls.h"
undefined4 FUN_8c203400_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  undefined2 *puVar1;
  undefined1 *ar5_00;
  undefined1 *ar6_00;
  int iVar2;
  int iVar3;
  
  iVar3 = DAT_8c275408;
  while (iVar2 = DAT_8c275400, iVar3 != 0) {
    iVar2 = *(int *)(iVar3 + 8);
    in_r0 = FUN_8c204e6c(iVar3,ar5,ar6,ar7,in_r0);
    iVar3 = iVar2;
  }
  while (iVar3 = DAT_8c27541c, iVar2 != 0) {
    iVar3 = *(int *)(iVar2 + 8);
    in_r0 = FUN_8c204e6c(iVar2,ar5,ar6,ar7,in_r0);
    iVar2 = iVar3;
  }
  while (iVar2 = DAT_8c275414, iVar3 != 0) {
    iVar2 = *(int *)(iVar3 + 8);
    in_r0 = FUN_8c204e6c(iVar3,ar5,ar6,ar7,in_r0);
    iVar3 = iVar2;
  }
  while (iVar2 != 0) {
    iVar3 = *(int *)(iVar2 + 8);
    in_r0 = FUN_8c204e6c(iVar2,ar5,ar6,ar7,in_r0);
    iVar2 = iVar3;
  }
  ar6_00 = &DAT_8c47eba8;
  ar5_00 = &DAT_8c496ba8;
  puVar1 = (undefined2 *)&DAT_8c47eba8;
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 0xc;
  } while (puVar1 < &DAT_8c496ba8);
  DAT_8c275400 = 0;
  DAT_8c275404 = 0;
  DAT_8c275408 = 0;
  DAT_8c27540c = 0;
  DAT_8c275410 = 0;
  DAT_8c275414 = 0;
  DAT_8c275418 = 0;
  DAT_8c27541c = 0;
  DAT_8c275420 = 0;
  DAT_8c275424 = 0;
  iVar3 = DAT_8c275428;
  while (iVar3 != 0) {
    iVar2 = *(int *)(iVar3 + 4);
    in_r0 = FUN_8c2057c0(iVar3,ar5_00,ar6_00,ar7,in_r0);
    iVar3 = iVar2;
  }
  DAT_8c275428 = 0;
  return 0;
}

__asm__(".globl _FUN_8c203400\n.set _FUN_8c203400, _FUN_8c203400_def\n");
