#include "../decls.h"
char * FUN_8c261f22_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  
  pcVar2 = 0x8c4b3b20;
  for (pcVar1 = 0x8c4b3b20;
      (pcVar3 = (char *)0x0, pcVar1 < 0x8c4b3b20 + 0x300 &&
      (pcVar3 = pcVar2, *pcVar1 != '\0')); pcVar1 = pcVar1 + 0x30) {
    pcVar2 = pcVar2 + 0x30;
  }
  return pcVar3;
}

__asm__(".globl _FUN_8c261f22\n.set _FUN_8c261f22, _FUN_8c261f22_def\n");
