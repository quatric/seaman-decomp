#include "../decls.h"
undefined4 FUN_8c25484c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int *piVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  
  piVar1 = 0x8c4aad48;
  uVar2 = (uint)*(undefined4 *)0x8c4aad80;
  iVar4 = *(undefined4 *)0x8c4aad48;
  if (uVar2 == 1) {
    iVar4 = iVar4 + 8;
  }
  else if (uVar2 == 2) {
    iVar4 = iVar4 + 0x10;
  }
  else if (uVar2 == 3) {
    iVar4 = iVar4 + 0x18;
  }
  else {
    if (uVar2 != 4) goto LAB_8c25487a;
    iVar4 = iVar4 + 0x20;
  }
  *(undefined4 *)0x8c4aad48 = iVar4;
LAB_8c25487a:
  if (piVar1[6] == 0) {
    return uVar2;
  }
  uVar3 = FUN_8c255d6c(0);
  return uVar3;
}

__asm__(".globl _FUN_8c25484c\n.set _FUN_8c25484c, _FUN_8c25484c_def\n");
