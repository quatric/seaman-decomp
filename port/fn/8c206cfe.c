#include "../decls.h"
undefined4 pvr_206cfe_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  uint *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  
  iVar1 = 0x8c4aa0b4;
  if (*(int *)(*(undefined4 *)0x8c4a9f10 * 4 + 0x8c4a9ef8) != -1) {
    if (*(undefined4 *)0x8c4a9f24 == 0) {
      *(undefined4 *)0x8c4a9e5c = *(undefined4 *)0x8c4a9e5c | 0x20;
      ((undefined4 *)0x8c4a9f10)[*(undefined4 *)0x8c4a9f10 + -6] = 3;
    }
    puVar2 = 0x8c4a9f10;
    if ((*(undefined4 *)0x8c4a9bb0 & 1) == 0) {
      iVar4 = *(int *)(0x8c4aa034 + (*(undefined4 *)0x8c4a9f10 & 1) * 0x20);
    }
    else {
      iVar4 = *(undefined4 *)0xa05f8138;
    }
    *(int *)((*(undefined4 *)0x8c4a9f10 & 1) * 4 + iVar1 + 0x24) = *(undefined4 *)0xa05f8138;
    *(undefined4 *)0x8c4a9d60 =
         *(undefined4 *)0x8c4a9d58 & 0xff000000 |
         (iVar4 - *(int *)(0x8c4aa030 + (*puVar2 & 1) * 0x20)) * 2 & 0xfffff8;
    iVar6 = 0x30;
    puVar5 = (undefined4 *)(iVar4 + 0xa5000000);
    puVar7 = 0x8c4a9c50;
    do {
      uVar3 = *puVar7;
      puVar7 = puVar7 + 1;
      iVar6 = iVar6 + -1;
      *puVar5 = uVar3;
      puVar5 = puVar5 + 1;
    } while (iVar6 != 0);
  }
  *(undefined4 *)0x8c4a9db8 = 0;
  *(int *)(iVar1 + 0x4c) = *(int *)(iVar1 + 0x48) - *(undefined4 *)0xffd8000c;
  return 0x4c;
}

__asm__(".globl _pvr_206cfe\n.set _pvr_206cfe, _pvr_206cfe_def\n");
