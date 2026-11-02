#include "../decls.h"
undefined4 FUN_8c1fcef8_def(int ar4,char *ar5,char *ar6,undefined4 ar7)

{
  char cVar1;
  undefined1 *puVar2;
  char *pcVar3;
  char *pcVar4;
  int iVar5;
  char *pcVar6;
  
  iVar5 = ar4 * 0x80 + 0x8c475fc0;
  puVar2 = (undefined1 *)(iVar5 + 0x2c);
  do {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  } while (puVar2 < (undefined1 *)(iVar5 + 0x39));
  puVar2 = (undefined1 *)(iVar5 + 0x3c);
  do {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  } while (puVar2 < (undefined1 *)(iVar5 + 0x49));
  pcVar4 = ar5 + 0xc;
  pcVar6 = (char *)(iVar5 + 0x2c);
  for (pcVar3 = ar5; (pcVar3 < pcVar4 && (*pcVar3 != '\0')); pcVar3 = pcVar3 + 1) {
    cVar1 = *ar5;
    ar5 = ar5 + 1;
    *pcVar6 = cVar1;
    pcVar6 = pcVar6 + 1;
  }
  pcVar4 = ar6 + 0xc;
  pcVar6 = (char *)(iVar5 + 0x3c);
  for (pcVar3 = ar6; (pcVar3 < pcVar4 && (*pcVar3 != '\0')); pcVar3 = pcVar3 + 1) {
    cVar1 = *ar6;
    ar6 = ar6 + 1;
    *pcVar6 = cVar1;
    pcVar6 = pcVar6 + 1;
  }
  return ar5;
}

__asm__(".globl _FUN_8c1fcef8\n.set _FUN_8c1fcef8, _FUN_8c1fcef8_def\n");
