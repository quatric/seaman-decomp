#include "../decls.h"
undefined4 FUN_8c204cfc_def(undefined4 ar4,ushort *ar5,undefined4 ar6,undefined4 ar7)

{
  ushort *puVar1;
  ushort *puVar2;
  undefined4 *ar5_00;
  undefined4 *puVar3;
  ushort *ar6_00;
  int iVar4;
  ushort *puVar5;
  undefined4 *in_stack_ffffffe0;
  
  iVar4 = (int)(short)ar4;
  *ar5 = *ar5 & 0xfffb;
  ar5_00 = &DAT_8c275404 + iVar4 * 5;
  ar6_00 = ar5;
  FUN_8c204ed2(&DAT_8c275400 + iVar4 * 5,ar5_00,ar5,ar7,in_stack_ffffffe0);
  (&DAT_8c275410)[iVar4 * 5] = (&DAT_8c275410)[iVar4 * 5] + *(int *)(ar5 + 8);
  puVar5 = (ushort *)(&DAT_8c275408)[iVar4 * 5];
  puVar2 = (ushort *)0x0;
  while (puVar1 = puVar5, puVar1 != (ushort *)0x0) {
    ar6_00 = *(ushort **)(ar5 + 6);
    ar5_00 = *(undefined4 **)(puVar1 + 6);
    if ((ar5_00 == (undefined4 *)(*(int *)(ar5 + 8) + (int)ar6_00)) ||
       (ar6_00 == (ushort *)(*(int *)(puVar1 + 8) + (int)ar5_00))) {
      puVar5 = (ushort *)0x0;
      puVar2 = puVar1;
    }
    else {
      puVar5 = *(ushort **)(puVar1 + 4);
    }
  }
  iVar4 = (int)(short)ar4;
  puVar3 = &DAT_8c275400 + iVar4 * 5;
  puVar5 = ar5;
  if (puVar2 != (ushort *)0x0) {
    do {
      ar5 = puVar2;
      if (*(int *)(ar5 + 6) == *(int *)(puVar5 + 6) + *(int *)(puVar5 + 8)) {
        *(undefined4 *)(ar5 + 6) = *(undefined4 *)(puVar5 + 6);
        *(int *)(ar5 + 8) = *(int *)(ar5 + 8) + *(int *)(puVar5 + 8);
      }
      else {
        *(int *)(ar5 + 8) = *(int *)(ar5 + 8) + *(int *)(puVar5 + 8);
      }
      FUN_8c204e6c(puVar5,ar5_00,ar6_00,ar7,in_stack_ffffffe0);
      ar5_00 = &DAT_8c27540c + iVar4 * 5;
      ar6_00 = ar5;
      FUN_8c204ed2(&DAT_8c275408 + iVar4 * 5,ar5_00,ar5,ar7,in_stack_ffffffe0);
      puVar5 = (ushort *)(&DAT_8c275408)[iVar4 * 5];
      puVar2 = (ushort *)0x0;
      while (puVar1 = puVar5, puVar1 != (ushort *)0x0) {
        ar5_00 = *(undefined4 **)(ar5 + 6);
        ar6_00 = *(ushort **)(puVar1 + 6);
        if ((ar6_00 == (ushort *)(*(int *)(ar5 + 8) + (int)ar5_00)) ||
           (ar5_00 == (undefined4 *)(*(int *)(puVar1 + 8) + (int)ar6_00))) {
          puVar5 = (ushort *)0x0;
          puVar2 = puVar1;
        }
        else {
          puVar5 = *(ushort **)(puVar1 + 4);
        }
      }
      puVar5 = ar5;
    } while (puVar2 != (ushort *)0x0);
    puVar3 = &DAT_8c275400 + (short)ar4 * 5;
    in_stack_ffffffe0 = puVar3;
  }
  FUN_8c204e92(puVar3 + 2,puVar3 + 3,ar5,ar7,in_stack_ffffffe0);
  return 0;
}

__asm__(".globl _FUN_8c204cfc\n.set _FUN_8c204cfc, _FUN_8c204cfc_def\n");
