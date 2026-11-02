#include "../decls.h"
undefined4 FUN_8c204006_def(int *ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  ushort *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  iVar3 = 0;
  for (iVar2 = DAT_8c275408; puVar1 = DAT_8c275400, iVar2 != 0; iVar2 = *(int *)(iVar2 + 8)) {
    if (iVar3 < *(int *)(iVar2 + 0x10)) {
      iVar3 = *(int *)(iVar2 + 0x10);
    }
  }
  for (; iVar2 = DAT_8c27541c, puVar1 != (ushort *)0x0; puVar1 = *(ushort **)(puVar1 + 4)) {
    if (((*puVar1 & 4) == 0) && (iVar3 < *(int *)(puVar1 + 8))) {
      iVar3 = *(int *)(puVar1 + 8);
    }
  }
  for (; puVar1 = DAT_8c275414, iVar2 != 0; iVar2 = *(int *)(iVar2 + 8)) {
    if (iVar4 < *(int *)(iVar2 + 0x10)) {
      iVar4 = *(int *)(iVar2 + 0x10);
    }
  }
  for (; puVar1 != (ushort *)0x0; puVar1 = *(ushort **)(puVar1 + 4)) {
    if (((*puVar1 & 4) == 0) && (iVar4 < *(int *)(puVar1 + 8))) {
      iVar4 = *(int *)(puVar1 + 8);
    }
  }
  *ar4 = iVar3;
  *ar5 = iVar4;
  return 0;
}

__asm__(".globl _FUN_8c204006\n.set _FUN_8c204006, _FUN_8c204006_def\n");
