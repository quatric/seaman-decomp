#include "../decls.h"
int FUN_8c1f6a30_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int *piVar1;
  undefined *puVar2;
  int iVar3;
  
  puVar2 = (&FUN_8c01422c);
  piVar1 = 0x8c474898;
  iVar3 = (int)0xd78;
  *(int *)(*(int *)((int)0xd78 + *(undefined4 *)0x8c474898) + 0x14) =
       *(int *)((int)0x204 + *(undefined4 *)0x8c474898) + 1;
  iVar3 = (*(code *)puVar2)(*(int *)(iVar3 + *piVar1) + 0x18);
  if (iVar3 == 0) {
    iVar3 = FUN_8c013e4c(*piVar1 + 4,1);
  }
  return iVar3;
}

__asm__(".globl _FUN_8c1f6a30\n.set _FUN_8c1f6a30, _FUN_8c1f6a30_def\n");
