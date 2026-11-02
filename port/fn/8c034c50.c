#include "../decls.h"
undefined2 * FUN_8c034c50_def(undefined2 *ar4,int ar5,int ar6,undefined4 ar7)

{
  int iVar1;
  
  *ar4 = 0xffff;
  *(undefined4 *)(ar4 + 4) = 0;
  for (iVar1 = 0; iVar1 < 0xf; iVar1 = iVar1 + 1) {
    *(undefined *)((int)ar4 + iVar1 + 0xc) = (&DATA_8c132dd0)[iVar1 + ar6 * 0xf];
  }
  *(undefined **)(ar4 + 0xe) = (&DATA_8c133318) + ar5 * 0x30;
  ar4[2] = 0xffff;
  *(undefined1 *)(ar4 + 1) = 0;
  *(undefined4 *)(ar4 + 0x10) = 0;
  *(undefined4 *)(ar4 + 0x12) = 0;
  for (iVar1 = 0; iVar1 < *(short *)(*(int *)(ar4 + 0xe) + 2); iVar1 = iVar1 + 1) {
    if (((*(char *)((int)ar4 + iVar1 + 0xc) == '\0') &&
        (*(short *)(*(int *)(*(int *)(ar4 + 0xe) + iVar1 * 4 + 4) + 4) == 0)) &&
       (*(short *)(*(int *)(*(int *)(ar4 + 0xe) + iVar1 * 4 + 4) + 6) == 0)) {
      *(undefined1 *)((int)ar4 + iVar1 + 0xc) = 1;
    }
  }
  return ar4;
}

__asm__(".globl _FUN_8c034c50\n.set _FUN_8c034c50, _FUN_8c034c50_def\n");
