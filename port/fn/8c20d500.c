#include "../decls.h"
int FUN_8c20d500_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = *(uint *)(ar4 + 0xc) * *(uint *)(ar4 + 0x10);
  if ((*(uint *)(ar4 + 0x18) & 1) != 0) {
    uVar3 = *(uint *)(ar4 + 0xc) >> 1;
    uVar2 = *(uint *)(ar4 + 0x10) >> 1;
    uVar1 = uVar2;
    if (uVar3 < uVar2) {
      uVar1 = uVar3;
    }
    for (; 1 < uVar1; uVar1 = uVar1 >> 1) {
      iVar5 = uVar3 * uVar2;
      uVar3 = uVar3 >> 1;
      uVar2 = uVar2 >> 1;
      iVar4 = iVar4 + iVar5;
    }
    if (uVar3 == uVar2) {
      iVar4 = iVar4 + 4;
    }
    else {
      iVar4 = iVar4 + uVar3 * uVar2;
    }
  }
  if (*(int *)(ar4 + 4) == 1) {
    iVar4 = iVar4 << 1;
  }
  else {
    iVar4 = iVar4 << 2;
  }
  return iVar4;
}

__asm__(".globl _FUN_8c20d500\n.set _FUN_8c20d500, _FUN_8c20d500_def\n");
