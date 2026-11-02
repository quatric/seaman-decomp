#include "../decls.h"
undefined4 FUN_8c1f5f8c_def(int ar4,int ar5,int ar6,undefined4 ar7)

{
  uint uVar1;
  ushort uVar2;
  short sVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  byte *pbVar7;
  byte *pbVar8;
  char *pcVar9;
  
  iVar5 = *(int *)(ar5 + 8);
  pbVar8 = (byte *)(iVar5 + 0xb);
  uVar6 = *(ushort *)(iVar5 + 8) | 0xffff0000;
  pcVar9 = (char *)(0x8c472d0a + ar6);
  if (*pbVar8 < *(undefined4 *)0x8c472d08) {
    if (*(undefined4 *)0x8c472d09 < *pbVar8) {
      if (*pcVar9 != '\0') {
        uVar6 = uVar6 & 0xfffdffff;
      }
    }
    else {
      uVar6 = uVar6 | 0x20000;
      *pcVar9 = '\0';
    }
  }
  else {
    uVar6 = uVar6 & 0xfffdffff;
    *pcVar9 = '\x01';
  }
  pbVar7 = (byte *)(iVar5 + 10);
  if (*pbVar7 < *(undefined4 *)0x8c472d08) {
    if (*(undefined4 *)0x8c472d09 < *pbVar7) {
      if (*(char *)(0x8c472d22 + ar6) != '\0') {
        uVar6 = uVar6 & 0xfffeffff;
      }
      goto LAB_8c1f605e;
    }
    cVar4 = '\0';
    uVar6 = uVar6 | 0x10000;
  }
  else {
    uVar6 = uVar6 & 0xfffeffff;
    cVar4 = '\x01';
  }
  *(char *)(0x8c472d22 + ar6) = cVar4;
LAB_8c1f605e:
  uVar1 = 0x10000;
  if (*(undefined4 *)0x8c472d04 == 0) {
    uVar6 = uVar6 ^ 0xffffffff;
  }
  *(uint *)(ar4 + 8) = uVar6;
  if ((*(uint *)(ar4 + 4) & uVar1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (ushort)*pbVar7;
  }
  *(ushort *)(ar4 + 0x18) = uVar2;
  if ((*(uint *)(ar4 + 4) & 0x20000) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (ushort)*pbVar8;
  }
  *(ushort *)(ar4 + 0x1a) = uVar2;
  if ((*(uint *)(ar4 + 4) & 0x40000) == 0) {
    sVar3 = 0;
  }
  else {
    sVar3 = *(byte *)(iVar5 + 0xc) - 0x80;
  }
  *(short *)(ar4 + 0x1c) = sVar3;
  uVar6 = 0x100000;
  if ((*(uint *)(ar4 + 4) & 0x80000) == 0) {
    sVar3 = 0;
  }
  else {
    sVar3 = *(byte *)(iVar5 + 0xd) - 0x80;
  }
  *(short *)(ar4 + 0x1e) = sVar3;
  uVar1 = 0x200000;
  if ((*(uint *)(ar4 + 4) & uVar6) == 0) {
    sVar3 = 0;
  }
  else {
    sVar3 = *(byte *)(iVar5 + 0xe) - 0x80;
  }
  *(short *)(ar4 + 0x20) = sVar3;
  if ((*(uint *)(ar4 + 4) & uVar1) == 0) {
    sVar3 = 0;
  }
  else {
    sVar3 = *(byte *)(iVar5 + 0xf) - 0x80;
  }
  *(short *)(ar4 + 0x22) = sVar3;
  return 0x22;
}

__asm__(".globl _FUN_8c1f5f8c\n.set _FUN_8c1f5f8c, _FUN_8c1f5f8c_def\n");
