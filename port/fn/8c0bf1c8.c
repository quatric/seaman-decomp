#include "../decls.h"
int FUN_8c0bf1c8_def(undefined4 ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int in_r0;
  char *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = ar5 + 0x30;
  for (iVar3 = 4; -1 < iVar3; iVar3 = iVar3 + -1) {
    if ((0x29 < *(int *)(iVar3 * 4 + iVar2)) && (*(int *)(iVar3 * 4 + iVar2) < 0x30)) {
      *(undefined4 *)(iVar3 * 4 + iVar2) = 0;
    }
    pcVar1 = (char *)(*(int *)(iVar3 * 4 + iVar2) + ar5 + 0x44);
    in_r0 = *pcVar1 + 1;
    *pcVar1 = (char)in_r0;
  }
  return in_r0;
}

__asm__(".globl _FUN_8c0bf1c8\n.set _FUN_8c0bf1c8, _FUN_8c0bf1c8_def\n");
