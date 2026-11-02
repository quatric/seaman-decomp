#include "../decls.h"
ushort * FUN_8c205860_def(undefined4 ar4,int ar5,ushort *ar6,undefined4 ar7)

{
  ushort uVar1;
  int iVar2;
  ushort *puVar3;
  int iVar4;
  ushort *puVar5;
  undefined1 auStack_2c [4];
  int iStack_28;
  ushort *puStack_24;
  
  puVar3 = (ushort *)0x0;
  iStack_28 = ar5;
  puStack_24 = ar6;
  iVar4 = DAT_8c2753ec;
  for (puVar5 = (ushort *)(&DAT_8c275400)[(short)ar4 * 5]; puVar5 != (ushort *)0x0;
      puVar5 = *(ushort **)(puVar5 + 4)) {
    uVar1 = *puVar5;
    if (((((uVar1 & 4) == 0) && ((uVar1 & 2) != 0)) && ((uVar1 & 0x1800) != 0)) &&
       ((iStack_28 <= *(int *)(puVar5 + 8) && (*(int *)(puVar5 + 8) < iVar4)))) {
      if ((short)ar4 == 0) {
        iVar2 = *(int *)(puVar5 + 6) + DAT_8c2753f4;
      }
      else {
        iVar2 = *(int *)(puVar5 + 6) - DAT_8c2753f4;
      }
      iVar2 = FUN_8c204cc0(iVar2,auStack_2c,ar6,ar7);
      if ((iVar2 != 0) && ((**(ushort **)(iVar2 + 0x14) & 0xf000) == (*puStack_24 & 0xf000))) {
        iVar4 = *(int *)(puVar5 + 8);
        puVar3 = puVar5;
      }
    }
  }
  return puVar3;
}

__asm__(".globl _FUN_8c205860\n.set _FUN_8c205860, _FUN_8c205860_def\n");
