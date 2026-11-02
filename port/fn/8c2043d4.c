#include "../decls.h"
undefined4 FUN_8c2043d4_def(undefined4 ar4,int ar5,uint ar6,int ar7,int s0,int s4)

{
  ushort *ar6_00;
  uint uVar1;
  int iVar2;
  ushort *puVar3;
  ushort *ar6_01;
  int ain0;
  int iVar4;
  int iVar5;
  undefined4 a7;
  undefined4 in_stack_ffffffd0;
  
  iVar5 = ar5 + ar6;
  if ((int)ar6 < 0) {
    uVar1 = ~(~ar6 + 1 & 0x1f) + 1;
  }
  else {
    uVar1 = ar6 & 0x1f;
  }
  a7 = 0;
  if (uVar1 != 0) {
    ar6 = ar6 + (0x20 - uVar1);
  }
  iVar2 = (int)(short)ar4;
  ar6_00 = (ushort *)0x0;
  puVar3 = (ushort *)(&DAT_8c275408)[iVar2 * 5];
  iVar4 = ar5;
  while (puVar3 != (ushort *)0x0) {
    iVar4 = *(int *)(puVar3 + 6);
    if ((((ar5 < iVar4) || (*(int *)(puVar3 + 8) + iVar4 <= ar5)) || (iVar5 < iVar4)) ||
       (*(int *)(puVar3 + 8) + iVar4 < iVar5)) {
      puVar3 = *(ushort **)(puVar3 + 4);
    }
    else {
      ar6_00 = puVar3;
      puVar3 = (ushort *)0x0;
    }
  }
  if (ar6_00 == (ushort *)0x0) {
    return 3;
  }
  if (*(uint *)(ar6_00 + 8) == ar6) {
    FUN_8c204ed2(&DAT_8c275408 + iVar2 * 5,&DAT_8c27540c + iVar2 * 5,ar6_00,0,in_stack_ffffffd0);
    FUN_8c204e92(&DAT_8c275400 + iVar2 * 5,&DAT_8c275404 + iVar2 * 5,ar6_00,a7,in_stack_ffffffd0);
    *(undefined4 *)(ar7 + 0x1c) = *(undefined4 *)(ar6_00 + 6);
    *(int *)(ar6_00 + 10) = ar7;
    *ar6_00 = 1;
    if ((short)ar4 == 0) {
      *ar6_00 = *ar6_00 | 0x80;
    }
    else {
      *ar6_00 = *ar6_00 | 0x100;
    }
    if (s0 != 0) {
      *ar6_00 = *ar6_00 | 2;
    }
    if (s4 != 0) {
      *ar6_00 = *ar6_00 | 4;
    }
    iVar5 = *(int *)(ar6_00 + 8);
  }
  else {
    if (*(int *)(ar6_00 + 6) != ar5) {
      if (*(int *)(ar6_00 + 6) + *(int *)(ar6_00 + 8) == iVar5) {
        ar6_01 = (ushort *)FUN_8c204e40(0,iVar4,iVar5,0);
        if (ar6_01 == (ushort *)0x0) {
          return 3;
        }
        *(uint *)(ar6_00 + 8) = *(int *)(ar6_00 + 8) - ar6;
        *(int *)(ar6_01 + 6) = ar5;
        *(uint *)(ar6_01 + 8) = ar6;
        FUN_8c204e92(&DAT_8c275400 + iVar2 * 5,&DAT_8c275404 + iVar2 * 5,ar6_01,a7,
                     &DAT_8c275400 + iVar2 * 5);
        *(undefined4 *)(ar7 + 0x1c) = *(undefined4 *)(ar6_01 + 6);
        *(int *)(ar6_01 + 10) = ar7;
        if ((short)ar4 == 0) {
          *ar6_01 = *ar6_01 | 0x80;
        }
        else {
          *ar6_01 = *ar6_01 | 0x100;
        }
        if (s0 != 0) {
          *ar6_01 = *ar6_01 | 2;
        }
        if (s4 != 0) {
          *ar6_01 = *ar6_01 | 4;
        }
      }
      else {
        ar6_01 = (ushort *)FUN_8c204e40(0,iVar4,iVar5,0);
        if (ar6_01 == (ushort *)0x0) {
          return 3;
        }
        ain0 = FUN_8c204e40(puVar3,iVar4,iVar5,a7);
        if (ain0 == 0) {
          FUN_8c204e6c(ar6_01,iVar4,iVar5,a7,0);
          return 3;
        }
        iVar5 = *(int *)(ar6_00 + 8);
        iVar4 = *(int *)(ar6_00 + 6);
        *(int *)(ar6_00 + 8) = ar5 - iVar4;
        *(int *)(ar6_01 + 6) = ar5;
        *(uint *)(ar6_01 + 8) = ar6;
        FUN_8c204e92(&DAT_8c275400 + iVar2 * 5,&DAT_8c275404 + iVar2 * 5,ar6_01,a7,ain0);
        *(uint *)(ain0 + 0xc) = ar5 + ar6;
        *(uint *)(ain0 + 0x10) = (iVar5 - ar6) - (ar5 - iVar4);
        FUN_8c204eb6(&DAT_8c27540c + iVar2 * 5,ain0,(&DAT_8c27540c)[iVar2 * 5],a7,ain0);
        *(undefined4 *)(ar7 + 0x1c) = *(undefined4 *)(ar6_01 + 6);
        *(int *)(ar6_01 + 10) = ar7;
        if ((short)ar4 == 0) {
          *ar6_01 = *ar6_01 | 0x80;
        }
        else {
          *ar6_01 = *ar6_01 | 0x100;
        }
        if (s0 != 0) {
          *ar6_01 = *ar6_01 | 2;
        }
        if (s4 != 0) {
          *ar6_01 = *ar6_01 | 4;
        }
      }
      (&DAT_8c275410)[iVar2 * 5] = (&DAT_8c275410)[iVar2 * 5] - *(int *)(ar6_01 + 8);
      return 0;
    }
    puVar3 = (ushort *)FUN_8c204e40(0,iVar4,iVar5,0);
    if (puVar3 == (ushort *)0x0) {
      return 3;
    }
    *(undefined4 *)(puVar3 + 6) = *(undefined4 *)(ar6_00 + 6);
    *(uint *)(puVar3 + 8) = ar6;
    *(uint *)(ar6_00 + 8) = *(int *)(ar6_00 + 8) - ar6;
    *(uint *)(ar6_00 + 6) = *(int *)(ar6_00 + 6) + ar6;
    FUN_8c204e92(&DAT_8c275400 + iVar2 * 5,&DAT_8c275404 + iVar2 * 5,puVar3,a7,
                 &DAT_8c275400 + iVar2 * 5);
    *(undefined4 *)(ar7 + 0x1c) = *(undefined4 *)(puVar3 + 6);
    *(int *)(puVar3 + 10) = ar7;
    if ((short)ar4 == 0) {
      *puVar3 = *puVar3 | 0x80;
    }
    else {
      *puVar3 = *puVar3 | 0x100;
    }
    if (s0 != 0) {
      *puVar3 = *puVar3 | 2;
    }
    if (s4 != 0) {
      *puVar3 = *puVar3 | 4;
    }
    iVar5 = *(int *)(puVar3 + 8);
  }
  (&DAT_8c275410)[iVar2 * 5] = (&DAT_8c275410)[iVar2 * 5] - iVar5;
  return 0;
}

__asm__(".globl _FUN_8c2043d4\n.set _FUN_8c2043d4, _FUN_8c2043d4_def\n");
