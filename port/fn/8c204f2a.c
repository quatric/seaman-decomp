#include "../decls.h"
undefined4 FUN_8c204f2a_def(int ar4,int ar5,uint ar6,undefined4 ar7)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  uint a6;
  int iVar4;
  int a4;
  int iVar5;
  uint uVar6;
  int iStack_20;
  
  puVar1 = (&FUN_8c20732e);
  iVar2 = (int)(int)0xfffff7fc;
  uVar6 = (uint)0x800;
  if (uVar6 < ar6) {
    *(undefined1 **)((int)&iStack_20 + iVar2) = &stack0xffffffe4 + iVar2;
    do {
      iVar5 = ar5;
      a6 = uVar6;
      FUN_8c20a9c2(*(undefined4 *)((int)&iStack_20 + iVar2),ar5,uVar6,ar7);
      a4 = *(int *)((int)&iStack_20 + iVar2);
      for (iVar4 = 0x40; iVar4 != 0; iVar4 = iVar4 + -1) {
        (*(code *)puVar1)(a4,iVar5,a6,ar7);
        a4 = a4 + 0x20;
      }
      FUN_8c20a8e0(ar4,*(undefined4 *)((int)&iStack_20 + iVar2),uVar6,ar7);
      ar6 = ar6 - uVar6;
      ar5 = ar5 + uVar6;
      ar4 = ar4 + uVar6;
    } while (uVar6 < ar6);
  }
  *(undefined1 **)((int)&iStack_20 + iVar2) = &stack0xffffffe4 + iVar2;
  uVar6 = ar6;
  FUN_8c20a9c2(&stack0xffffffe4 + iVar2,ar5,ar6,ar7);
  iVar4 = *(int *)((int)&iStack_20 + iVar2);
  for (iVar5 = 0x40; iVar5 != 0; iVar5 = iVar5 + -1) {
    (*(code *)puVar1)(iVar4,ar5,uVar6,ar7);
    iVar4 = iVar4 + 0x20;
  }
  uVar3 = FUN_8c20a8e0(ar4,*(undefined4 *)((int)&iStack_20 + iVar2),ar6,ar7);
  return uVar3;
}

__asm__(".globl _FUN_8c204f2a\n.set _FUN_8c204f2a, _FUN_8c204f2a_def\n");
