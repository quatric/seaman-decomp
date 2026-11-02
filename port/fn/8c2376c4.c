#include "../decls.h"
int FUN_8c2376c4_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  
  uVar3 = 0x8c4c13a0;
  iVar2 = 0x8c4c11e0;
  uVar1 = 0x8c4c0ce0;
  iVar4 = (int)0x80;
  iVar5 = *(int *)(iVar4 + 0x8c4c1280);
  if (iVar5 != 0) {
    piVar6 = (int *)(iVar5 * 4 + 0x8c4c1280);
    do {
      piVar6 = piVar6 + -1;
      iVar4 = *(int *)(*piVar6 * 4 + iVar2);
      FUN_8c23c7f4(uVar3,uVar1,0x10);
      FUN_8c255d6c(uVar3,iVar4);
      FUN_8c212740(uVar3,iVar4 + 0x40,0x90 + iVar4);
      iVar4 = FUN_8c21279c(uVar3,iVar4 + 0x4c,0x9c + iVar4);
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  return iVar4;
}

__asm__(".globl _FUN_8c2376c4\n.set _FUN_8c2376c4, _FUN_8c2376c4_def\n");
