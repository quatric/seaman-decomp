#include "../decls.h"
int FUN_8c1f69f2_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int *piVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  
  puVar2 = (&FUN_8c01422c);
  piVar1 = 0x8c474898;
  iVar4 = 0x7fffffff;
  if (-1 < ar4) {
    iVar4 = *(int *)((int)0x204 + *(undefined4 *)0x8c474898) + ar4;
  }
  iVar3 = (int)0xd78;
  *(int *)(*(int *)((int)0xd78 + *(undefined4 *)0x8c474898) + 0x14) = iVar4;
  iVar4 = (*(code *)puVar2)(*(int *)(iVar3 + *piVar1) + 0x18);
  if (iVar4 == 0) {
    iVar4 = FUN_8c013e4c(*piVar1 + 4,1);
  }
  return iVar4;
}

__asm__(".globl _FUN_8c1f69f2\n.set _FUN_8c1f69f2, _FUN_8c1f69f2_def\n");
