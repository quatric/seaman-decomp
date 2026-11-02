#include "../decls.h"
undefined4 FUN_8c20f25a_def(undefined1 *ar4,int ar5,int ar6,undefined4 ar7)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined1 *puVar9;
  int aiStack_28 [3];
  
  iVar2 = (int)(int)0xffffeff4;
  iVar6 = (int)(ar5 + (uint)(ar5 < 0)) >> 1;
  *(int *)((int)aiStack_28 + iVar2 + 8) = (int)(ar6 + (uint)(ar6 < 0)) >> 1;
  puVar9 = &stack0xffffffec + iVar2;
  puVar5 = ar4;
  for (iVar4 = ar5; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar9 = *puVar5;
    puVar9[1] = puVar5[1];
    puVar9[2] = puVar5[2];
    puVar1 = puVar5 + 3;
    puVar5 = puVar5 + 4;
    puVar9[3] = *puVar1;
    puVar9 = puVar9 + 4;
  }
  iVar4 = *(int *)((int)aiStack_28 + iVar2 + 8);
  *(int *)(&stack0xffffffe4 + iVar2) = ar5 << 2;
  *(int *)((int)aiStack_28 + iVar2 + 8) = ar5 << 3;
  *(int *)(&stack0xffffffe8 + iVar2) = iVar6 << 2;
  puVar9 = ar4 + (ar6 + -1) * ar5 * 2;
  puVar5 = ar4;
  while (iVar4 = iVar4 + -1, iVar4 != 0) {
    iVar7 = *(int *)((int)aiStack_28 + iVar2 + 8);
    iVar8 = *(int *)(&stack0xffffffe4 + iVar2);
    *(int *)((int)aiStack_28 + iVar2 + 4) = iVar6;
    *(undefined1 **)((int)aiStack_28 + iVar2) = ar4;
    FUN_8c20eec0(puVar9,puVar5,puVar5 + iVar8,puVar5 + iVar7);
    ar4 = ar4 + *(int *)(&stack0xffffffe8 + iVar2);
    puVar9 = puVar5 + iVar8;
    puVar5 = puVar5 + iVar7;
  }
  iVar4 = *(int *)(&stack0xffffffe4 + iVar2);
  *(int *)((int)aiStack_28 + iVar2 + 4) = iVar6;
  *(undefined1 **)((int)aiStack_28 + iVar2) = ar4;
  uVar3 = FUN_8c20eec0(puVar9,puVar5,puVar5 + iVar4,&stack0xffffffec + iVar2);
  return uVar3;
}

__asm__(".globl _FUN_8c20f25a\n.set _FUN_8c20f25a, _FUN_8c20f25a_def\n");
