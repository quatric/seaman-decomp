#include "../decls.h"
char * FUN_8c268b48_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  
  pcVar2 = 0x8c4bd580;
  for (pcVar1 = 0x8c4bd580;
      (pcVar3 = (char *)0x0, pcVar1 < 0x8c4bd580 + 0x480 &&
      (pcVar3 = pcVar2, *pcVar1 != '\0')); pcVar1 = pcVar1 + 0x90) {
    pcVar2 = pcVar2 + 0x90;
  }
  return pcVar3;
}

__asm__(".globl _FUN_8c268b48\n.set _FUN_8c268b48, _FUN_8c268b48_def\n");
