#include "../decls.h"
undefined4 FUN_8c2046d2_def(undefined4 ar4,uint ar5,undefined4 *ar6,undefined4 ar7)

{
  ushort *puVar1;
  ushort *ar6_00;
  uint uVar2;
  ushort *puVar3;
  undefined4 uVar4;
  int iVar5;
  short sVar6;
  int iVar7;
  undefined4 in_stack_ffffffdc;
  
  if ((int)ar5 < 0) {
    uVar2 = ~(~ar5 + 1 & 0x1f) + 1;
  }
  else {
    uVar2 = ar5 & 0x1f;
  }
  if (uVar2 != 0) {
    ar5 = ar5 + (0x20 - uVar2);
  }
  iVar7 = (int)(short)ar4;
  puVar3 = (ushort *)(&DAT_8c275408)[iVar7 * 5];
  ar6_00 = (ushort *)0x0;
  while (puVar1 = puVar3, puVar1 != (ushort *)0x0) {
    if (*(int *)(puVar1 + 8) < (int)ar5) {
      puVar3 = *(ushort **)(puVar1 + 4);
    }
    else {
      puVar3 = (ushort *)0x0;
      ar6_00 = puVar1;
    }
  }
  if (ar6_00 == (ushort *)0x0) {
LAB_8c204880:
    uVar4 = 3;
  }
  else {
    sVar6 = (short)ar7;
    if (*(uint *)(ar6_00 + 8) == ar5) {
      FUN_8c204ed2(&DAT_8c275408 + iVar7 * 5,&DAT_8c27540c + iVar7 * 5,ar6_00,ar7,in_stack_ffffffdc)
      ;
      FUN_8c204e92(&DAT_8c275400 + iVar7 * 5,&DAT_8c275404 + iVar7 * 5,ar6_00,ar7,in_stack_ffffffdc)
      ;
      *ar6_00 = 1;
      if (sVar6 == 8) {
        ar6[7] = *(undefined4 *)(ar6_00 + 6);
        *(undefined4 **)(ar6_00 + 10) = ar6;
        *ar6_00 = *ar6_00 | 8;
      }
      else {
        if (sVar6 != 0x2000) goto LAB_8c204880;
        *ar6 = *(undefined4 *)(ar6_00 + 6);
        *(undefined4 **)(ar6_00 + 10) = ar6;
        *ar6_00 = *ar6_00 | 0x2000;
      }
      *ar6_00 = *ar6_00 | 4;
      iVar5 = *(int *)(ar6_00 + 8);
    }
    else {
      puVar3 = (ushort *)FUN_8c204e40(0,0,ar6,ar7);
      if (puVar3 == (ushort *)0x0) goto LAB_8c204880;
      *(undefined4 *)(puVar3 + 6) = *(undefined4 *)(ar6_00 + 6);
      *(uint *)(puVar3 + 8) = ar5;
      *(uint *)(ar6_00 + 8) = *(int *)(ar6_00 + 8) - ar5;
      *(uint *)(ar6_00 + 6) = ar5 + *(int *)(ar6_00 + 6);
      FUN_8c204e92(&DAT_8c275400 + iVar7 * 5,&DAT_8c275404 + iVar7 * 5,puVar3,ar7,
                   &DAT_8c275400 + iVar7 * 5);
      if (sVar6 == 8) {
        ar6[7] = *(undefined4 *)(puVar3 + 6);
        *(undefined4 **)(puVar3 + 10) = ar6;
        *puVar3 = *puVar3 | 8;
      }
      else {
        if (sVar6 != 0x2000) goto LAB_8c204880;
        *ar6 = *(undefined4 *)(puVar3 + 6);
        *(undefined4 **)(puVar3 + 10) = ar6;
        *puVar3 = *puVar3 | 0x2000;
      }
      *puVar3 = *puVar3 | 4;
      iVar5 = *(int *)(puVar3 + 8);
    }
    uVar4 = 0;
    (&DAT_8c275410)[iVar7 * 5] = (&DAT_8c275410)[iVar7 * 5] - iVar5;
  }
  return uVar4;
}

__asm__(".globl _FUN_8c2046d2\n.set _FUN_8c2046d2, _FUN_8c2046d2_def\n");
