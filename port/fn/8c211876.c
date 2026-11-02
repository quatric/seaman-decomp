#include "../decls.h"
uint FUN_8c211876_def(uint ar4,int ar5,uint ar6,int ar7,int s0,int s4)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  uVar2 = *(undefined4 *)0x8c4a9c14;
  iVar5 = 0;
  iVar7 = 0;
  iVar6 = 0;
  uVar4 = (uint)(ar5 != 0);
  uVar3 = (uint)(ar7 != 0);
  if (s0 != 0) {
    iVar5 = 2;
  }
  if (s4 == 1) {
    if (ar4 != 0) {
      iVar6 = 2;
    }
    if (ar6 != 0) {
      iVar7 = 2;
    }
  }
  else {
    if (ar4 != 0) {
      iVar6 = 3;
    }
    if (ar6 != 0) {
      iVar7 = 3;
    }
    if ((ar4 != 0) && (ar6 != 0)) {
      if (ar4 < ar6) {
        iVar6 = 2;
      }
      else {
        iVar7 = 2;
      }
    }
  }
  if (*(undefined4 *)0x8c4a9ef0 == 1) {
    if (*(undefined4 *)0x8c4a9fcc == 0x20) {
      iVar6 = 3;
    }
    if (*(undefined4 *)0x8c4a9fcc == 0x21) {
      uVar4 = 2;
    }
    if (*(undefined4 *)0x8c4a9fcc == 0x22) {
      iVar7 = 3;
    }
    if (*(undefined4 *)0x8c4a9fcc == 0x23) {
      uVar3 = 2;
    }
    if (*(undefined4 *)0x8c4a9fcc == 0x24) {
      iVar5 = 3;
    }
  }
  uVar3 = iVar6 << 0x11 & 0x60000 | uVar4 << 0x13 & 0x180000 | iVar7 << 0x15 & 0x600000
          | uVar3 << 0x17 & 0x600000 << 2 | iVar5 << 0x19 & 0x6000000 | 0x10000;
  if ((*(undefined4 *)0x8c4a9bb0 & 0x20) != 0) {
    if (((uVar4 == 0) || (iVar7 == 0)) || (iVar5 == 0)) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
    *(undefined4 *)0x8c4aa010 = uVar1;
  }
  return uVar2 & 0xff | uVar3;
}

__asm__(".globl _FUN_8c211876\n.set _FUN_8c211876, _FUN_8c211876_def\n");
