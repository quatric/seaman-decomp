#include "../decls.h"
undefined1 * FUN_8c2693ce_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined4 d;
  int iVar4;
  undefined1 *a7;
  
  iVar3 = *(int *)(ar4 + 0x28);
  d = *(undefined4 *)(ar4 + 8);
  iVar4 = (iVar3 - *(int *)(ar4 + 0x34)) - *(int *)(ar4 + 0x54);
  iVar1 = libgcc_divide_helper_010468(0x20,d);
  iVar1 = iVar1 << 3;
  iVar4 = libgcc_divide_helper_010468(iVar4,iVar1);
  iVar3 = iVar3 - *(int *)(ar4 + 0x50);
  if (iVar4 * iVar1 < iVar3) {
    iVar3 = iVar4 * iVar1;
  }
  iVar4 = libgcc_divide_helper_010468(0x800,d);
  if (iVar4 << 3 <= iVar3) {
    iVar3 = iVar4 << 3;
  }
  iVar3 = libgcc_divide_helper_010468(iVar3,iVar1);
  if (iVar3 * iVar1 < 1) {
    puVar2 = (undefined1 *)0x0;
  }
  else {
    if (*(int *)(ar4 + 8) == 4) {
      puVar2 = &DAT_8c4be220;
    }
    else {
      puVar2 = (undefined1 *)0x8c4bda00;
    }
    a7 = puVar2 + 0x20;
    for (iVar3 = 0; iVar3 < (int)(uint)*(byte *)(ar4 + 3); iVar3 = iVar3 + 1) {
      puVar2 = (undefined1 *)FUN_8c268ddc(ar4,iVar3,*(undefined4 *)(ar4 + 0x50),a7);
    }
    *(undefined1 **)(ar4 + 0x58) = puVar2;
  }
  return puVar2;
}

__asm__(".globl _FUN_8c2693ce\n.set _FUN_8c2693ce, _FUN_8c2693ce_def\n");
