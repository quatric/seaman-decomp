#include "../decls.h"
undefined4 FUN_8c06a524_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  *(undefined4 *)0x8c280998 = 0;
  *(undefined4 *)0x8c28099c = 0;
  *(undefined4 *)0x8c2809a0 = 0;
  *(undefined4 *)0x8c2809a4 = 0;
  *(undefined4 *)0x8c2809a8 = 0;
  for (iVar1 = 0; iVar1 < 7; iVar1 = iVar1 + 1) {
    *(undefined4 *)(0x8c2809b8 + iVar1 * 8) = 0;
    *(undefined4 *)(iVar1 * 8 + 0x8c2809b8 + 4) = 0;
  }
  for (iVar1 = 0; iVar1 < 6; iVar1 = iVar1 + 1) {
    *(undefined4 *)(0x8c2809fc + iVar1 * 8) = 0;
    *(undefined4 *)(iVar1 * 8 + 0x8c2809fc + 4) = 0;
  }
  for (iVar1 = 0; iVar1 < 6; iVar1 = iVar1 + 1) {
    *(undefined4 *)(0x8c280a38 + iVar1 * 8) = 0;
    *(undefined4 *)(iVar1 * 8 + 0x8c280a38 + 4) = 0;
  }
  return 6;
}

__asm__(".globl _FUN_8c06a524\n.set _FUN_8c06a524, _FUN_8c06a524_def\n");
