#include "../decls.h"
undefined4 FUN_8c2049ec_def(undefined4 ar4,uint ar5,int ar6,int ar7)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  ushort *puVar5;
  ushort *puVar6;
  int iVar7;
  ushort *puVar8;
  uint a6;
  ushort *ar6_00;
  int in_stack_ffffffd4;
  
  iVar7 = 0;
  if ((int)ar5 < 0) {
    uVar1 = ~(~ar5 + 1 & 0x1f) + 1;
  }
  else {
    uVar1 = ar5 & 0x1f;
  }
  puVar8 = (ushort *)0x0;
  a6 = ar5;
  if (uVar1 != 0) {
    a6 = ar5 + (0x20 - uVar1);
  }
  iVar2 = (int)(short)ar4;
  ar6_00 = (ushort *)0x0;
  if ((ushort *)(&DAT_8c275408)[iVar2 * 5] != (ushort *)0x0) {
    ar7 = 0x800;
    puVar5 = (ushort *)(&DAT_8c275408)[iVar2 * 5];
    do {
      if (*(int *)(puVar5 + 8) < (int)a6) {
        puVar6 = *(ushort **)(puVar5 + 4);
      }
      else {
        if (puVar8 == (ushort *)0x0) {
          puVar8 = puVar5;
        }
        iVar3 = libgcc_divide_helper_010614(*(undefined4 *)(puVar5 + 6),ar7);
        if (iVar3 == 0) {
          ar5 = *(uint *)(puVar5 + 6);
LAB_8c204a94:
          iVar7 = 1;
        }
        else {
          ar5 = *(int *)(puVar5 + 6) + ar7 & 0xfffff800;
          in_stack_ffffffd4 = *(int *)(puVar5 + 6) + *(int *)(puVar5 + 8);
          if ((in_stack_ffffffd4 <= (int)ar5) || ((int)a6 <= (int)(ar5 - *(int *)(puVar5 + 6))))
          goto LAB_8c204a94;
          if ((int)(in_stack_ffffffd4 - ar5) < (int)a6) {
            puVar6 = *(ushort **)(puVar5 + 4);
            goto LAB_8c204ac2;
          }
          iVar7 = 2;
        }
        puVar6 = (ushort *)0x0;
        ar6_00 = puVar5;
      }
LAB_8c204ac2:
      puVar5 = puVar6;
    } while (puVar6 != (ushort *)0x0);
  }
  if ((iVar7 == 0) && (puVar8 != (ushort *)0x0)) {
    iVar7 = 1;
    ar6_00 = puVar8;
  }
  if (ar6_00 == (ushort *)0x0) {
LAB_8c204b6a:
    uVar4 = 3;
  }
  else {
    if (iVar7 == 2) {
      uVar4 = FUN_8c2052f2((int)(short)ar4,ar5,a6,ar6);
      return uVar4;
    }
    if (*(uint *)(ar6_00 + 8) == a6) {
      FUN_8c204ed2(&DAT_8c275408 + iVar2 * 5,&DAT_8c27540c + iVar2 * 5,ar6_00,ar7,in_stack_ffffffd4)
      ;
      FUN_8c204e92(&DAT_8c275400 + iVar2 * 5,&DAT_8c275404 + iVar2 * 5,ar6_00,ar7,in_stack_ffffffd4)
      ;
      *(undefined4 *)(ar6 + 8) = *(undefined4 *)(ar6_00 + 6);
      *(int *)(ar6_00 + 10) = ar6;
      *ar6_00 = 1;
      if ((short)ar4 == 0) {
        *ar6_00 = *ar6_00 | 0x200;
      }
      else {
        *ar6_00 = *ar6_00 | 0x400;
      }
      *ar6_00 = *ar6_00 | 4;
      iVar7 = *(int *)(ar6_00 + 8);
    }
    else {
      puVar8 = (ushort *)FUN_8c204e40(0,ar5,iVar7,ar7);
      if (puVar8 == (ushort *)0x0) goto LAB_8c204b6a;
      *(undefined4 *)(puVar8 + 6) = *(undefined4 *)(ar6_00 + 6);
      *(uint *)(puVar8 + 8) = a6;
      *(uint *)(ar6_00 + 8) = *(int *)(ar6_00 + 8) - a6;
      *(uint *)(ar6_00 + 6) = *(int *)(ar6_00 + 6) + a6;
      FUN_8c204e92(&DAT_8c275400 + iVar2 * 5,&DAT_8c275404 + iVar2 * 5,puVar8,ar7,
                   &DAT_8c275400 + iVar2 * 5);
      *(undefined4 *)(ar6 + 8) = *(undefined4 *)(puVar8 + 6);
      *(int *)(puVar8 + 10) = ar6;
      if ((short)ar4 == 0) {
        *puVar8 = *puVar8 | 0x200;
      }
      else {
        *puVar8 = *puVar8 | 0x400;
      }
      *puVar8 = *puVar8 | 4;
      iVar7 = *(int *)(puVar8 + 8);
    }
    uVar4 = 0;
    (&DAT_8c275410)[iVar2 * 5] = (&DAT_8c275410)[iVar2 * 5] - iVar7;
  }
  return uVar4;
}

__asm__(".globl _FUN_8c2049ec\n.set _FUN_8c2049ec, _FUN_8c2049ec_def\n");
