#include "../decls.h"
undefined4 FUN_8c1fbb6c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  
  iVar5 = ar4 * 0x148;
  iVar3 = _DAT_8c475f80;
  do {
    iVar1 = FUN_8c1fd1e2(ar4,ar5,ar6,ar7);
    if (iVar1 == 0) break;
    if ((DAT_8c26d178 != 0) && (iVar1 == -0xd0)) goto LAB_8c1fbc04;
    bVar4 = iVar3 != 0;
    *(int *)(iVar5 + -0x73b87bec) = *(int *)(iVar5 + -0x73b87bec) + 1;
    iVar3 = iVar3 + -1;
  } while ((bVar4) || (_DAT_8c475f80 == -1));
  iVar3 = *(int *)(iVar5 + -0x73b87bf0);
  *(int *)(iVar5 + -0x73b87bf0) = iVar3 + 1;
  FUN_8c1fcdc2(ar4,*(undefined4 *)(ar4 * 0x80 + -0x73b8a038),iVar3,
               *(undefined4 *)(iVar5 + -0x73b87bec));
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else if (iVar1 == -0xff) {
LAB_8c1fbc04:
    uVar2 = 0xffffff01;
  }
  else {
    uVar2 = 0xffff0000;
  }
  return uVar2;
}

__asm__(".globl _FUN_8c1fbb6c\n.set _FUN_8c1fbb6c, _FUN_8c1fbb6c_def\n");
