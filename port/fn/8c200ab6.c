#include "../decls.h"
undefined4 FUN_8c200ab6_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  char *pcVar1;
  int iVar2;
  
  iVar2 = 0;
  pcVar1 = 0x8c47d0a0;
  while( true ) {
    if (*(undefined4 *)0x8c47d2e0 <= iVar2) {
      *(undefined4 *)0x8c47d2e4 = (int)(int)0xffffff07;
      return 0;
    }
    if (*pcVar1 == '\0') break;
    pcVar1 = pcVar1 + 0x48;
    iVar2 = iVar2 + 1;
  }
  *pcVar1 = '\x01';
  *(int *)(pcVar1 + 0xc) = iVar2;
  return pcVar1;
}

__asm__(".globl _FUN_8c200ab6\n.set _FUN_8c200ab6, _FUN_8c200ab6_def\n");
