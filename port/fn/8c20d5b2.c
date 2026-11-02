#include "../decls.h"
uint FUN_8c20d5b2_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  uVar4 = *(uint *)(ar4 + 0xc) * *(uint *)(ar4 + 0x10);
  if ((*(uint *)(ar4 + 0x18) & 1) != 0) {
    uVar2 = *(uint *)(ar4 + 0xc) >> 1;
    uVar3 = *(uint *)(ar4 + 0x10) >> 1;
    uVar1 = uVar3;
    if (uVar2 < uVar3) {
      uVar1 = uVar2;
    }
    for (; 1 < uVar1; uVar1 = uVar1 >> 1) {
      iVar5 = uVar2 * uVar3;
      uVar2 = uVar2 >> 1;
      uVar3 = uVar3 >> 1;
      uVar4 = uVar4 + iVar5;
    }
    if (uVar2 == uVar3) {
      iVar5 = uVar4 + 1;
    }
    else {
      iVar5 = uVar4 + uVar2 * uVar3;
    }
    if (*(int *)(ar4 + 8) == 0x28000000) {
      uVar4 = iVar5 + 0x2b;
    }
    else {
      uVar4 = iVar5 + 0xb;
    }
  }
  if (*(int *)(ar4 + 8) == 0x28000000) {
    if (uVar4 == 1) {
      uVar4 = 1;
    }
    else {
      uVar4 = uVar4 >> 1;
    }
  }
  return uVar4;
}

__asm__(".globl _FUN_8c20d5b2\n.set _FUN_8c20d5b2, _FUN_8c20d5b2_def\n");
