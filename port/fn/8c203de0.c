#include "../decls.h"
undefined4 FUN_8c203de0_def(int *ar4,int *ar5,int *ar6,int *ar7)

{
  ushort *puVar1;
  ushort uVar2;
  ushort *puVar3;
  int iVar4;
  int iVar5;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  
  iStack_1c = 0;
  iStack_28 = 0;
  iStack_20 = 0;
  iStack_24 = 0;
  iStack_30 = 0;
  iStack_34 = 0;
  iStack_2c = 0;
  for (iVar4 = DAT_8c275408; puVar3 = DAT_8c275400, iVar4 != 0; iVar4 = *(int *)(iVar4 + 8)) {
    if (iStack_34 < *(int *)(iVar4 + 0x10)) {
      iStack_34 = *(int *)(iVar4 + 0x10);
    }
    iStack_24 = iStack_24 + *(int *)(iVar4 + 0x10);
  }
  for (; iVar4 = DAT_8c27541c, puVar3 != (ushort *)0x0; puVar3 = *(ushort **)(puVar3 + 4)) {
    if ((*puVar3 & 4) == 0) {
      if (iStack_34 < *(int *)(puVar3 + 8)) {
        iStack_34 = *(int *)(puVar3 + 8);
      }
      iStack_28 = iStack_28 + *(int *)(puVar3 + 8);
    }
  }
  for (; puVar3 = DAT_8c275414, iVar4 != 0; iVar4 = *(int *)(iVar4 + 8)) {
    if (iStack_30 < *(int *)(iVar4 + 0x10)) {
      iStack_30 = *(int *)(iVar4 + 0x10);
    }
    iStack_20 = iStack_20 + *(int *)(iVar4 + 0x10);
  }
  for (; puVar1 = DAT_8c275428, puVar3 != (ushort *)0x0; puVar3 = *(ushort **)(puVar3 + 4)) {
    if ((*puVar3 & 4) == 0) {
      if (iStack_30 < *(int *)(puVar3 + 8)) {
        iStack_30 = *(int *)(puVar3 + 8);
      }
      iStack_1c = iStack_1c + *(int *)(puVar3 + 8);
    }
  }
  do {
    if (puVar1 == (ushort *)0x0) {
      *ar4 = iStack_24 + iStack_28;
      *ar5 = iStack_20 + iStack_1c;
      *ar6 = iStack_2c;
      if (iStack_34 < iStack_30) {
        iStack_34 = iStack_30;
      }
      *ar7 = iStack_34;
      return 0;
    }
    uVar2 = *puVar1 & 0xf000;
    if (uVar2 == 0x1000) {
      iVar4 = 0x90;
LAB_8c203f32:
      iVar5 = 0x10;
    }
    else {
      if (uVar2 == 0x2000) {
        iVar4 = 0xa0;
        goto LAB_8c203f32;
      }
      if (uVar2 == 0x3000) {
        iVar4 = 0xc0;
        goto LAB_8c203f32;
      }
      if (uVar2 == 0x4000) {
        iVar4 = 0xe0;
        goto LAB_8c203f32;
      }
      if (uVar2 == 0x5000) {
        iVar4 = 0x200;
        iVar5 = 8;
      }
      else if (uVar2 == 0x6000) {
        iVar4 = 0x360;
        iVar5 = 4;
      }
      else if (uVar2 == 0x7000) {
        iVar4 = 0x800;
        iVar5 = 2;
      }
      else if (uVar2 == 0x8000) {
        iVar4 = 0xd60;
        iVar5 = 1;
      }
      else {
        iVar5 = 0;
        iVar4 = 0;
      }
    }
    iStack_38 = 0;
    puVar3 = puVar1 + 6;
    if (iVar5 != 0) {
      do {
        if (*(int *)puVar3 == 0) {
          iStack_2c = iStack_2c + iVar4;
        }
        iStack_38 = iStack_38 + 1;
        puVar3 = puVar3 + 2;
      } while (iStack_38 < iVar5);
    }
    puVar1 = *(ushort **)(puVar1 + 2);
  } while( true );
}

__asm__(".globl _FUN_8c203de0\n.set _FUN_8c203de0, _FUN_8c203de0_def\n");
