#include "../decls.h"
undefined4 FUN_8c211c98_def(int ar4,int ar5,int ar6,int ar7,int s0,undefined4 s4,uint s8)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iStack_38;
  int iStack_30;
  uint *puStack_2c;
  uint auStack_24 [2];
  
  *(undefined4 *)0x8c4aa070 = ar4 << 2;
  piVar1 = 0x8c4aa074;
  *(undefined4 *)0x8c4aa074 = ar5 << 2;
  *(undefined4 *)0x8c4aa078 = ar6 << 2;
  *(undefined4 *)0x8c4aa07c = ar7 << 2;
  piVar1[3] = s0 << 2;
  uVar3 = 0x10000000;
  iVar2 = 0x8c4aa22c;
  uVar6 = 0;
  auStack_24[0] = *(undefined4 *)0x8c4a9fec;
  iStack_38 = 0x8c4aa22c;
  iStack_30 = 0x8c4aa22c;
  puStack_2c = auStack_24;
  if (s8 != 0) {
    do {
      uVar7 = 0;
      if ((auStack_24[uVar6] & 0x1f) != 0) {
        puVar4 = auStack_24 + uVar6;
        *puVar4 = *puVar4 + 0x1f & 0xffffffe0;
      }
      puVar4 = (uint *)(uVar6 * 0x14 + iVar2);
      if ((*(undefined4 *)0x8c4a9ef0 == 1) && (*(undefined4 *)0x8c4a9fcc == 0x20)) {
        *puVar4 = uVar3;
      }
      else if (ar4 == 0) {
        *puVar4 = 0;
      }
      else {
        *puVar4 = auStack_24[uVar6];
        uVar7 = ar4 + 0x17U & 0xfffffff8;
      }
      iVar5 = uVar6 * 0x14 + iVar2;
      if ((*(undefined4 *)0x8c4a9ef0 == 1) && (*(undefined4 *)0x8c4a9fcc == 0x21)) {
        *(uint *)(iVar5 + 4) = uVar3;
      }
      else if (ar5 == 0) {
        *(undefined4 *)(iVar5 + 4) = 0;
      }
      else {
        *(uint *)(iVar5 + 4) = auStack_24[uVar6] + uVar7 * 4;
        uVar7 = uVar7 + ar5 + 0x17 & 0xfffffff8;
      }
      iVar5 = uVar6 * 0x14 + iVar2;
      if ((*(undefined4 *)0x8c4a9ef0 == 1) && (*(undefined4 *)0x8c4a9fcc == 0x22)) {
        *(uint *)(iVar5 + 8) = uVar3;
      }
      else if (ar6 == 0) {
        *(undefined4 *)(iVar5 + 8) = 0;
      }
      else {
        *(uint *)(iVar5 + 8) = auStack_24[uVar6] + uVar7 * 4;
        uVar7 = uVar7 + ar6 + 0x17 & 0xfffffff8;
      }
      iVar5 = uVar6 * 0x14 + iVar2;
      if ((*(undefined4 *)0x8c4a9ef0 == 1) && (*(undefined4 *)0x8c4a9fcc == 0x23)) {
        *(uint *)(iVar5 + 0xc) = uVar3;
      }
      else if (ar7 == 0) {
        *(undefined4 *)(iVar5 + 0xc) = 0;
      }
      else {
        *(uint *)(iVar5 + 0xc) = auStack_24[uVar6] + uVar7 * 4;
        uVar7 = uVar7 + ar7 + 0x17 & 0xfffffff8;
      }
      if ((*(undefined4 *)0x8c4a9ef0 == 1) && (*(undefined4 *)0x8c4a9fcc == 0x24)) {
        *(uint *)(uVar6 * 0x14 + iVar2 + 0x10) = uVar3;
      }
      else if (s0 == 0) {
        *(undefined4 *)(iStack_30 + 0x10) = 0;
      }
      else {
        *(uint *)(iStack_38 + 0x10) = uVar7 * 4 + *puStack_2c;
        uVar7 = uVar7 + s0 + 0x17 & 0xfffffff8;
      }
      uVar6 = uVar6 + 1;
      auStack_24[1] = uVar7 * 4 + auStack_24[0];
      iStack_30 = iStack_30 + 0x14;
      puStack_2c = puStack_2c + 1;
      iStack_38 = iStack_38 + 0x14;
    } while (uVar6 < s8);
  }
  return 0;
}

__asm__(".globl _FUN_8c211c98\n.set _FUN_8c211c98, _FUN_8c211c98_def\n");
