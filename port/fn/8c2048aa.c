#include "../decls.h"
undefined4 FUN_8c2048aa_def(undefined4 ar4,uint ar5,int ar6,undefined4 ar7)

{
  ushort *puVar1;
  ushort *ar6_00;
  ushort uVar2;
  uint uVar3;
  ushort *puVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined4 in_stack_ffffffdc;
  
  if ((int)ar5 < 0) {
    uVar3 = ~(~ar5 + 1 & 0x1f) + 1;
  }
  else {
    uVar3 = ar5 & 0x1f;
  }
  if (uVar3 != 0) {
    ar5 = ar5 + (0x20 - uVar3);
  }
  iVar7 = (int)(short)ar4;
  puVar4 = (ushort *)(&DAT_8c275408)[iVar7 * 5];
  ar6_00 = (ushort *)0x0;
  while (puVar1 = puVar4, puVar1 != (ushort *)0x0) {
    if (*(int *)(puVar1 + 8) < (int)ar5) {
      puVar4 = *(ushort **)(puVar1 + 4);
    }
    else {
      puVar4 = (ushort *)0x0;
      ar6_00 = puVar1;
    }
  }
  if (ar6_00 == (ushort *)0x0) {
LAB_8c204964:
    uVar5 = 3;
  }
  else {
    if (*(uint *)(ar6_00 + 8) == ar5) {
      FUN_8c204ed2(&DAT_8c275408 + iVar7 * 5,&DAT_8c27540c + iVar7 * 5,ar6_00,ar7,in_stack_ffffffdc)
      ;
      FUN_8c204e92(&DAT_8c275400 + iVar7 * 5,&DAT_8c275404 + iVar7 * 5,ar6_00,ar7,in_stack_ffffffdc)
      ;
      *(undefined4 *)(ar6 + 0x1c) = *(undefined4 *)(ar6_00 + 6);
      *(int *)(ar6_00 + 10) = ar6;
      *ar6_00 = 1;
      if ((short)ar4 == 0) {
        uVar2 = *ar6_00 | 0x20;
      }
      else {
        uVar2 = *ar6_00 | 0x40;
      }
      *ar6_00 = uVar2;
      *ar6_00 = *ar6_00 | 4;
      iVar6 = *(int *)(ar6_00 + 8);
    }
    else {
      puVar4 = (ushort *)FUN_8c204e40(0,0,ar6,ar7);
      if (puVar4 == (ushort *)0x0) goto LAB_8c204964;
      *(undefined4 *)(puVar4 + 6) = *(undefined4 *)(ar6_00 + 6);
      *(uint *)(puVar4 + 8) = ar5;
      *(uint *)(ar6_00 + 8) = *(int *)(ar6_00 + 8) - ar5;
      *(uint *)(ar6_00 + 6) = *(int *)(ar6_00 + 6) + ar5;
      FUN_8c204e92(&DAT_8c275400 + iVar7 * 5,&DAT_8c275404 + iVar7 * 5,puVar4,ar7,
                   &DAT_8c275400 + iVar7 * 5);
      *(undefined4 *)(ar6 + 0x1c) = *(undefined4 *)(puVar4 + 6);
      *(int *)(puVar4 + 10) = ar6;
      if ((short)ar4 == 0) {
        uVar2 = *puVar4 | 0x20;
      }
      else {
        uVar2 = *puVar4 | 0x40;
      }
      *puVar4 = uVar2;
      *puVar4 = *puVar4 | 4;
      iVar6 = *(int *)(puVar4 + 8);
    }
    uVar5 = 0;
    (&DAT_8c275410)[iVar7 * 5] = (&DAT_8c275410)[iVar7 * 5] - iVar6;
  }
  return uVar5;
}

__asm__(".globl _FUN_8c2048aa\n.set _FUN_8c2048aa, _FUN_8c2048aa_def\n");
