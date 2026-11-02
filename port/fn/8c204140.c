#include "../decls.h"
uint FUN_8c204140_def(int ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = *(int *)(ar4 + 0xc) + *(int *)(ar4 + 0x10);
  uVar1 = (int)0x800 + *(int *)(ar4 + 0xc) & (int)(int)0xfffff800;
  if ((uint)(int)0x2b0 < ar5) {
    iVar3 = (int)(int)0xfffffd50;
    if (uVar1 - *(int *)(ar4 + 0xc) < (uint)(int)0x2b0) {
      uVar1 = uVar1 + (int)0x800;
      if (uVar2 < (uVar1 - *(int *)(ar4 + 0xc)) + ar5 + iVar3) {
        return 0xffffffff;
      }
    }
    else if (uVar2 < (uVar1 - *(int *)(ar4 + 0xc)) + ar5 + iVar3) {
      return 0xffffffff;
    }
    uVar1 = uVar1 + iVar3;
  }
  else if ((uVar1 < uVar2) && (uVar1 - *(int *)(ar4 + 0xc) < ar5)) {
    if (uVar2 - uVar1 < ar5) {
      uVar1 = 0xffffffff;
    }
  }
  else {
    uVar1 = *(uint *)(ar4 + 0xc);
  }
  return uVar1;
}

__asm__(".globl _FUN_8c204140\n.set _FUN_8c204140, _FUN_8c204140_def\n");
