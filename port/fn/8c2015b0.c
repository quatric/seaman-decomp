#include "../decls.h"
int FUN_8c2015b0_def(char *ar4,char *ar5,undefined4 ar6,undefined4 ar7)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  char *pcVar5;
  int ar6_00;
  int ar6_01;
  int iVar6;
  uint a5;
  uint uVar7;
  int iStack_28;
  int iStack_24;
  
  if (((((*(short *)(ar5 + 0x4c) == 0) || (3 < *(ushort *)(ar5 + 0x4c))) ||
       (3 < *(ushort *)(ar5 + 0x54))) ||
      ((*(int *)(ar5 + 0x44) == 0 || (*(int *)(ar5 + 0x48) == 0)))) ||
     ((*(short *)(ar5 + 0x54) != 0 && (*(int *)(ar5 + 0x50) == 0)))) {
    iVar2 = -0x100;
  }
  else {
    memset(ar4,0,0x60,ar7);
    memset(ar4,0x20,0x10,ar7);
    memset(ar4 + 0x10,0x20,0x20,ar7);
    memset(ar4 + 0x30,0,0x10,ar7);
    iVar2 = 0;
    pcVar4 = ar5;
    pcVar5 = ar4;
    do {
      if (*pcVar4 == '\0') break;
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
      iVar2 = iVar2 + 1;
      *pcVar5 = cVar1;
      pcVar5 = pcVar5 + 1;
    } while (iVar2 < 0x10);
    iVar2 = 0;
    pcVar5 = ar4 + 0x10;
    pcVar4 = ar5 + 0x12;
    do {
      if (*pcVar4 == '\0') break;
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
      iVar2 = iVar2 + 1;
      *pcVar5 = cVar1;
      pcVar5 = pcVar5 + 1;
    } while (iVar2 < 0x20);
    iVar2 = 0;
    pcVar4 = ar5 + 0x34;
    pcVar5 = ar4 + 0x30;
    do {
      if (*pcVar4 == '\0') break;
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
      iVar2 = iVar2 + 1;
      *pcVar5 = cVar1;
      pcVar5 = pcVar5 + 1;
    } while (iVar2 < 0x10);
    ar6_01 = *(int *)(&DAT_8c273bb8 + (*(ushort *)(ar5 + 0x4c) & 3) * 4);
    ar6_00 = *(int *)(&DAT_8c273bc8 + (*(ushort *)(ar5 + 0x54) & 3) * 4);
    iVar6 = *(int *)(ar5 + 0x5c);
    iVar2 = ar6_01 + ar6_00;
    *(undefined2 *)(ar4 + 0x42) = *(undefined2 *)(ar5 + 0x4e);
    *(undefined2 *)(ar4 + 0x40) = *(undefined2 *)(ar5 + 0x4c);
    a5 = iVar6 + iVar2 + 0x80;
    if ((*(short *)(ar5 + 0x54) == 0) || (*(int *)(ar5 + 0x50) == 0)) {
      ar4[0x44] = '\0';
      ar4[0x45] = '\0';
      iStack_24 = 0;
    }
    else {
      iStack_24 = ar6_01 + 0x80;
      *(undefined2 *)(ar4 + 0x44) = *(undefined2 *)(ar5 + 0x54);
    }
    if ((*(int *)(ar5 + 0x5c) == 0) || (*(int *)(ar5 + 0x58) == 0)) {
      ar4[0x48] = '\0';
      ar4[0x49] = '\0';
      ar4[0x4a] = '\0';
      ar4[0x4b] = '\0';
      iStack_28 = 0;
    }
    else {
      iVar2 = iVar2 + 0x80;
      *(undefined4 *)(ar4 + 0x48) = *(undefined4 *)(ar5 + 0x5c);
      iStack_28 = iVar2;
    }
    if (ar6_01 != 0) {
      memmove(ar4 + 0x60,*(undefined4 *)(ar5 + 0x44),0x20,pcVar4);
      memmove(ar4 + 0x80,*(undefined4 *)(ar5 + 0x48),ar6_01,pcVar4);
      iVar2 = ar6_01;
    }
    if (ar6_00 != 0) {
      memmove(ar4 + iStack_24,*(undefined4 *)(ar5 + 0x50),ar6_00,pcVar4);
      iVar2 = ar6_00;
    }
    if (*(int *)(ar5 + 0x5c) != 0) {
      iVar2 = *(int *)(ar5 + 0x5c);
      memmove(ar4 + iStack_28,*(undefined4 *)(ar5 + 0x58),iVar2,pcVar4);
    }
    uVar7 = a5 & 0x1ff;
    if (uVar7 != 0) {
      iVar2 = 0x200 - uVar7;
      memset(ar4 + a5,0,iVar2,pcVar4);
    }
    uVar3 = FUN_8c201948(ar4,a5,iVar2,pcVar4);
    *(short *)(ar4 + 0x46) = (short)uVar3;
    iVar2 = (uint)(uVar7 != 0) + (a5 >> 9);
  }
  return iVar2;
}

__asm__(".globl _FUN_8c2015b0\n.set _FUN_8c2015b0, _FUN_8c2015b0_def\n");
