#include "../decls.h"
int FUN_8c1f2b1c_def(char *ar4,char *ar5,undefined4 ar6,undefined4 ar7)

{
  char *pcVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    pcVar1 = ar5;
    if (*ar4 == '\0') {
      return iVar2;
    }
    for (; *pcVar1 != '\0'; pcVar1 = pcVar1 + 1) {
      if (*ar4 == *pcVar1) {
        return iVar2;
      }
    }
    iVar2 = iVar2 + 1;
    ar4 = ar4 + 1;
  } while( true );
}

__asm__(".globl _FUN_8c1f2b1c\n.set _FUN_8c1f2b1c, _FUN_8c1f2b1c_def\n");
