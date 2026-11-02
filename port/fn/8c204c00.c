#include "../decls.h"
ushort * FUN_8c204c00_def(undefined4 ar4,int ar5,int ar6,undefined4 ar7)

{
  ushort uVar1;
  int iVar2;
  ushort *puVar3;
  int iVar4;
  ushort *puVar5;
  undefined1 auStack_28 [4];
  int iStack_24;
  int iStack_20;
  
  puVar3 = (ushort *)0x0;
  iStack_24 = ar5;
  iStack_20 = ar6;
  iVar4 = DAT_8c2753ec;
  for (puVar5 = (ushort *)(&DAT_8c275400)[(short)ar4 * 5]; puVar5 != (ushort *)0x0;
      puVar5 = *(ushort **)(puVar5 + 4)) {
    uVar1 = *puVar5;
    if (((((uVar1 & 4) == 0) && ((uVar1 & 2) != 0)) && ((uVar1 & 0x180) != 0)) &&
       ((iStack_24 <= *(int *)(puVar5 + 8) && (*(int *)(puVar5 + 8) < iVar4)))) {
      if ((short)ar4 == 0) {
        iVar2 = *(int *)(puVar5 + 6) + DAT_8c2753f4;
      }
      else {
        iVar2 = *(int *)(puVar5 + 6) - DAT_8c2753f4;
      }
      iVar2 = FUN_8c204cc0(iVar2,auStack_28,ar6,ar7);
      if ((iVar2 != 0) && (*(int *)(*(int *)(iVar2 + 0x14) + 0x18) == *(int *)(iStack_20 + 0x18))) {
        iVar4 = *(int *)(puVar5 + 8);
        puVar3 = puVar5;
      }
    }
  }
  return puVar3;
}

__asm__(".globl _FUN_8c204c00\n.set _FUN_8c204c00, _FUN_8c204c00_def\n");
