#include "../decls.h"
int FUN_8c266c48_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  
  iVar2 = (int)0x15c;
  iVar3 = *(int *)(&DATA_8c2784c0);
  iVar4 = 0xa000001;
  if (*(int *)(iVar2 + iVar3) < 0x20) {
    iVar4 = *(int *)(iVar2 + iVar3);
    *(int *)(iVar2 + iVar3) = iVar4 + 1;
    puVar1 = (&memmove);
    puVar5 = (undefined1 *)(iVar4 * 0x10 + *(int *)(iVar2 + -4 + iVar3));
    *puVar5 = (char)*ar4;
    (*(code *)puVar1)(puVar5 + 2,ar4 + 1,0xe,0);
    puVar1 = (&DATA_8c2784c0);
    iVar4 = (int)0x16c;
    ar4[5] = 0;
    *(int *)(iVar4 + *(int *)puVar1) = *(int *)(iVar4 + *(int *)puVar1) + -1;
    iVar4 = 0;
  }
  if (iVar4 != 0) {
    FUN_8c2688a0((&FUN_8c266c48),iVar4);
  }
  return iVar4;
}

__asm__(".globl _FUN_8c266c48\n.set _FUN_8c266c48, _FUN_8c266c48_def\n");
