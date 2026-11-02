#include "../decls.h"
undefined4 FUN_8c200614_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  
  iVar3 = ar4 * 0x148 + 0x8c4783e0;
  pcVar2 = *(char **)(iVar3 + 0x28);
  iVar1 = 0;
  while( true ) {
    if (*(int *)(*(int *)(iVar3 + 0x1c) + 0x30) <= iVar1) {
      return 0xffffffff;
    }
    if (*pcVar2 == '\0') break;
    pcVar2 = pcVar2 + 0x20;
    iVar1 = iVar1 + 1;
  }
  return iVar1;
}

__asm__(".globl _FUN_8c200614\n.set _FUN_8c200614, _FUN_8c200614_def\n");
