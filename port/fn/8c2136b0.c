#include "../decls.h"
uint FUN_8c2136b0_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *a6;
  undefined8 *puVar5;
  uint uVar6;
  undefined4 extraout_fr3;
  undefined4 uVar7;
  undefined4 extraout_fr3_00;
  undefined8 in_xd2;
  char cVar8;
  undefined1 auStack_60 [32];
  undefined1 auStack_40 [36];
  
  cVar8 = '\0';
  uVar6 = 0;
  iVar1 = 0;
  uVar4 = 0;
  do {
    *(undefined4 *)(auStack_40 + uVar4) = *(undefined4 *)(ar4 + iVar1);
    *(undefined4 *)(auStack_40 + uVar4 + 4) = *(undefined4 *)(ar4 + iVar1 + 4);
    a6 = (undefined4 *)(auStack_60 + uVar4);
    *a6 = *(undefined4 *)(ar5 + iVar1);
    uVar3 = uVar4 + 8;
    *(undefined4 *)(auStack_60 + uVar4 + 4) = *(undefined4 *)(ar5 + iVar1 + 4);
    iVar1 = iVar1 + 0xc;
    uVar4 = uVar3;
  } while (uVar3 < 0x20);
  iVar1 = FUN_8c212946(auStack_40,auStack_60,a6,ar7);
  iVar2 = 0;
  if (iVar1 != 0) {
    uVar6 = 4;
  }
  uVar4 = 0;
  uVar7 = extraout_fr3;
  do {
    if (cVar8 == '\0') {
      uVar7 = *(undefined4 *)(ar4 + iVar2);
    }
    else {
      in_xd2 = *(undefined8 *)(ar4 + iVar2);
    }
    puVar5 = (undefined8 *)(auStack_40 + uVar4);
    if (cVar8 == '\0') {
      *(undefined4 *)puVar5 = uVar7;
    }
    else {
      *puVar5 = in_xd2;
    }
    if (cVar8 == '\0') {
      uVar7 = *(undefined4 *)(ar4 + iVar2 + 8);
    }
    else {
      in_xd2 = *(undefined8 *)(ar4 + iVar2 + 8);
    }
    if (cVar8 == '\0') {
      *(undefined4 *)(auStack_40 + uVar4 + 4) = uVar7;
      uVar7 = *(undefined4 *)(ar5 + iVar2);
    }
    else {
      *(undefined8 *)(auStack_40 + uVar4 + 4) = in_xd2;
      in_xd2 = *(undefined8 *)(ar5 + iVar2);
    }
    puVar5 = (undefined8 *)(auStack_60 + uVar4);
    if (cVar8 == '\0') {
      *(undefined4 *)puVar5 = uVar7;
    }
    else {
      *puVar5 = in_xd2;
    }
    if (cVar8 == '\0') {
      uVar7 = *(undefined4 *)(ar5 + iVar2 + 8);
    }
    else {
      in_xd2 = *(undefined8 *)(ar5 + iVar2 + 8);
    }
    uVar3 = uVar4 + 8;
    if (cVar8 == '\0') {
      *(undefined4 *)(auStack_60 + uVar4 + 4) = uVar7;
    }
    else {
      *(undefined8 *)(auStack_60 + uVar4 + 4) = in_xd2;
    }
    iVar2 = iVar2 + 0xc;
    uVar4 = uVar3;
  } while (uVar3 < 0x20);
  iVar1 = FUN_8c212946(auStack_40,auStack_60,puVar5,ar7);
  iVar2 = 0;
  if (iVar1 != 0) {
    uVar6 = uVar6 | 2;
  }
  uVar4 = 0;
  uVar7 = extraout_fr3_00;
  do {
    if (cVar8 == '\0') {
      uVar7 = *(undefined4 *)(ar4 + iVar2 + 4);
    }
    else {
      in_xd2 = *(undefined8 *)(ar4 + iVar2 + 4);
    }
    puVar5 = (undefined8 *)(auStack_40 + uVar4);
    if (cVar8 == '\0') {
      *(undefined4 *)puVar5 = uVar7;
    }
    else {
      *puVar5 = in_xd2;
    }
    if (cVar8 == '\0') {
      uVar7 = *(undefined4 *)(ar4 + iVar2 + 8);
    }
    else {
      in_xd2 = *(undefined8 *)(ar4 + iVar2 + 8);
    }
    if (cVar8 == '\0') {
      *(undefined4 *)(auStack_40 + uVar4 + 4) = uVar7;
      uVar7 = *(undefined4 *)(ar5 + iVar2 + 4);
    }
    else {
      *(undefined8 *)(auStack_40 + uVar4 + 4) = in_xd2;
      in_xd2 = *(undefined8 *)(ar5 + iVar2 + 4);
    }
    puVar5 = (undefined8 *)(auStack_60 + uVar4);
    if (cVar8 == '\0') {
      *(undefined4 *)puVar5 = uVar7;
    }
    else {
      *puVar5 = in_xd2;
    }
    if (cVar8 == '\0') {
      uVar7 = *(undefined4 *)(ar5 + iVar2 + 8);
    }
    else {
      in_xd2 = *(undefined8 *)(ar5 + iVar2 + 8);
    }
    uVar3 = uVar4 + 8;
    if (cVar8 == '\0') {
      *(undefined4 *)(auStack_60 + uVar4 + 4) = uVar7;
    }
    else {
      *(undefined8 *)(auStack_60 + uVar4 + 4) = in_xd2;
    }
    iVar2 = iVar2 + 0xc;
    uVar4 = uVar3;
  } while (uVar3 < 0x20);
  iVar1 = FUN_8c212946(auStack_40,auStack_60,puVar5,ar7);
  if (iVar1 != 0) {
    uVar6 = uVar6 | 1;
  }
  return uVar6;
}

__asm__(".globl _FUN_8c2136b0\n.set _FUN_8c2136b0, _FUN_8c2136b0_def\n");
